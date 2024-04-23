#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <io.h>
#include "pwrline.h"       /* applications interface (ai) header file */
#include "eventlst.h"

#define OK 0
#define EXISTENCE 0
#define NOT_OK -1
#define TRUE 1
#define FALSE 0
#define ON 1
#define OFF 0
#define LINE_ONE 1

/* function prototypes */
void initialize(void);
int UserWait(unsigned ln);
int  busy_wait_for( unsigned ln, unsigned event );

/* globals */

SYSCONFIGAREA scarea; /* Powerline system configuration area */
CHAR     procmode = 1;         /* verbose mode = 2, terse mode = 1 */
CHAR     majversion = '0';     /* major version number of Powerline TSR */
CHAR     minversion = '0';     /* minor version number of Powerline TSR */
unsigned int      ecode = 0;            /* event code returned by GetEvent() */
unsigned int      evdata = 0;           /* event data returned by GetEvent() */
unsigned int      linecnt = 0;          /* the number of lines in the system */
unsigned int      fconnb  = 0;          /* the first feature connector in the system */
unsigned int      fconne  = 0;          /* the last feature connector in the system */
int      ln = LINE_ONE;        /* line number to play through */
LINEIOAREA    lio;                 /* line data structure */

int      err = 0;
char     filename[15];

void main(int argc,char **argv)
{
    /* print banner hoopla */
    fprintf(stdout,"\nPowerline II Voice File Playback Utility Version 1.1\n");
    fprintf(stdout,"Copyright 1994 Talking Technology, Inc.\n\n");

    /* check for number of parameters > 0 */
    if (argc == 1)
    {
          fprintf(stderr, "Usage : PLPLAY filename\n");
          exit(0);
    }

    /* get name of file to play and see if it exists */
    strcpy(filename, *++argv);
    strupr(filename);

    if (access(filename, EXISTENCE) == -1)
    {
          fprintf(stderr, "\"%s\" : file not found\n", filename);
          exit(0);
    }

    /* get command line options */
    while ((--argc > 0) && ((**++argv == '-') || (**argv == '/')))
    {
         switch (argv[0][1])
         {
         case 'l':
         case 'L':
              if ((argv[0][2] >= '1') && (argv[0][2] <= '8'))
              {
                   ln = (int)(argv[0][2] - '0');
                   fprintf(stderr, "Diagnostic : line number %d\n", ln);
              }
              else
              {
                   fprintf(stderr, "Invalid line number\n");
              }
              break;
         default:
              fprintf(stderr,"plplay : Unknown switch character: %c\n",argv[0][1]);
              exit(1);
         }
    }

    initialize();

    /* Put relays on hook just in case board was left in an odd state */
    err = SetRelays( ln, ONHOOK, ONLINE );
    busy_wait_for( ln, ONHC );

    err = SetRelays( ln, OFFHOOK, ONLOCAL );
    busy_wait_for( ln, OFFHC );

    err = Speaker( ln, ON );
#ifndef V3
    err = SetLevel(ln,2);
#else
    err = SetLevel(ln,0);
#endif

    ClearLIOA(&lio);

    lio.lio_term_mask = 0xFFFF;    /* terminate on all*/
    lio.lio_term_digit = 0;
    lio.lio_loop_sig = 0x00;       /* LS disconnect */
    lio.lio_max_time = 0;          /* clear time limit */
    lio.lio_byte_count = 0x0;     /* clear max bytes */
    lio.lio_ctrl_flags = 0x00;     /* clear control flags */
    lio.lio_fname = filename;

    fprintf(stdout,"Playing \"%s\"\n",filename);
    fprintf(stdout,"Press any key to terminate...\n\n");
    err = PlayAudio(ln,&lio);/* start the playback */
    UserWait(ln);

    printf("Terminating\n");
    StopLine(ln);
    busy_wait_for(ln, LSTOP);

    err = Speaker( ln, OFF );

    err = SetRelays( ln, ONHOOK, ONLOCAL );
    busy_wait_for( ln, ONHC );

    err = StopPWRLINE();
}

/****************************************
* Wait for a specific event to occur    *
****************************************/
int busy_wait_for( unsigned ln, unsigned event )
{
    int ret,c;
	unsigned line_number;

    while(1)
    {
         ecode = 0;
         if (kbhit())
         {
              c = getch();
              if (c == 'x')
			{
				ret = NOT_OK;
				break;
			}
         }
         GetEvent(&line_number, &ecode, &evdata );
         if ((line_number == ln) && (ecode == event))
         {
              ret = OK;
			break;
         }
    }
	return(ret);
}

void initialize()
{

    err = StopPWRLINE();
    if (err == AIMISSING)
    {
         fprintf(stderr, "Powerline TSR not loaded\n");
         exit(0);
    }
    err = GetVersion(&majversion,&minversion);
    err = SetSysConfig(&scarea);
    err = StartPWRLINE(procmode,&linecnt,&fconnb,&fconne);
    err = LineEnable(ln,OFFHOOKCOMP|ONHOOKCOMP|LCONTRANS|LCOFFTRANS,0);
    err = SetDigitRecog(LINE_ONE,0,FLUSHDBYES,NULL);
}

/****************************************
* Wait until user quits or error occurs.*
****************************************/

int UserWait(unsigned ln)
{
	int ret=OK;
    unsigned line_number;

    while(!kbhit())
    {
		ecode = 0;
         GetEvent(&line_number, &ecode, &evdata );
         if(ecode) printf("Event: %s [%d]\n",ename[ecode],evdata);

         switch(ecode)
         {
              case PBEOF:
              case PWRDOSER:
                   return(ret);
         }

         if ((line_number == ln) && (ecode == PWRDOSER))
         {
			ret = NOT_OK;
			break;
         }
    }
	return(ret);
}

