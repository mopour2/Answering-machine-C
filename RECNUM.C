#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <dos.h>
#include <time.h>
#include <io.h>
#include <fcntl.h>
#include <sys\types.h>
#include <sys\stat.h>
#include "vlink.h"

#include <stdio.h>
#include <STDARG.H>
#include "pwrline.h"       /* applications interface (ai) header file */
#include "eventlst.h"
#define  PF 1
//**************************************************************************
#define MaxDesc      30
#define MaxFileName  12
#define MaxChild     15
//**************************************************************************
#define  TRUE 1
#define  FALSE 0
#define  RINGSTOANSWER 1            /* number of rings to answer calls */
#define  MaxLine       18           //Max Line
#define  MaxTimeNotEvent  15l       //Max Time Not Event in line
#define  MaxTimeUsedSystem  180l      //Max Time Used  System  for one line
//===========================================================================
/* pseudo event codes */
#define  KEYPRESS  0x21
#define  INITRQST  0x20
#define  LOOPLCON  0x22
#define  LOOPLCOFF 0x23

#define  MaxDrivName    50

int fhandle;

//**************************************************************************
//===========================================================================

char getchh();
PutXYColorFormatArg(int X,int Y,int Color,char * Format ,...);
//===========================================================================
/* globals */

LINEIOAREA lio;          /* structure used to pass parameters */
FILE * PrintEvent;
unsigned line_number;               /* line number returned by GetEvent() */
unsigned event_code;                /* event code returned by GetEvent() */
unsigned event_data;                /* event data returned by GetEvent() */

struct ThreeTuple Get3TupleStru;
DIGITPARMS DigitParameter[MaxLine];
//===========================================================================
    SYSCONFIGAREA scarea;      /* Powerline system configuration area */

    CHAR      major_version;             /* major version number of Powerline TSR */
    CHAR      minor_version;             /* minor version number of Powerline TSR */
    CHAR      processing_mode = 1;       /* normal mode = 1 */

    unsigned  line_count = 0;            /* the number of lines in the system */
    unsigned  first_fc  = 0;             /* the first feature connector number */
    unsigned  last_fc  = 0;              /* the last feature connector number */
    unsigned int TheLine=1;
//    int       ln;                        /* counter for initializing lines */
    int       err;                       /* return code for Powerline functions */

//===========================================================================
/***************************************
* Start up the system                  *
***************************************/
char getchh()
{
  while (!kbhit())
  {
  }
  return getche();

}

//**************************************************************************

PutXYColorFormatArg(int X,int Y,int Color,char * Format ,...)
{
  char Text[256];
  va_list ap;
  va_start(ap,Format);

  vsprintf(Text,Format,ap);
  gotoxy(X < 0 ? (80-strlen(Text)) / 2  : X  ,Y);
  textcolor(Color);
  cprintf(Text);

  va_end(ap);
}
//**************************************************************************
InitScreen()
{
/*
 Constant     ³Value³grnd?³grnd?
ÍÍÍÍÍÍÍÍÍÍÍÍÍÍØÍÍÍÍÍØÍÍÍÍÍØÍÍÍÍÍ
 BLACK        ³  0  ³ Yes ³ Yes
 BLUE         ³  1  ³ Yes ³ Yes
 GREEN        ³  2  ³ Yes ³ Yes
 CYAN         ³  3  ³ Yes ³ Yes
 RED          ³  4  ³ Yes ³ Yes
 MAGENTA      ³  5  ³ Yes ³ Yes
 BROWN        ³  6  ³ Yes ³ Yes
 LIGHTGRAY    ³  7  ³ Yes ³ Yes
 DARKGRAY     ³  8  ³ No  ³ Yes
 LIGHTBLUE    ³  9  ³ No  ³ Yes
 LIGHTGREEN   ³ 10  ³ No  ³ Yes
 LIGHTCYAN    ³ 11  ³ No  ³ Yes
 LIGHTRED     ³ 12  ³ No  ³ Yes
 LIGHTMAGENTA ³ 13  ³ No  ³ Yes
 YELLOW       ³ 14  ³ No  ³ Yes
 WHITE        ³ 15  ³ No  ³ Yes
ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÅÄÄÄÄÄÅÄÄÄÄÄÄ
 BLINK        ³128  ³ No  ³ ***
*/
  PutXYColorFormatArg( 32,1,GREEN,"In The Name Of God ");
  PutXYColorFormatArg( 46,1,GREEN|BLINK," God ");
  PutXYColorFormatArg( -1,2,RED,"---------------------------------------");
  PutXYColorFormatArg( 1,4,RED,"R"); PutXYColorFormatArg(3 ,4,GREEN,": Record Voice");
  PutXYColorFormatArg( 1,6,RED,"P"); PutXYColorFormatArg(3 ,6,GREEN,": Play Voice");
  PutXYColorFormatArg( 1,8,BLUE,"=======================");
  PutXYColorFormatArg( -1,10,BLUE,"ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ ");
}
//**************************************************************************
Get_Select()
{
  PutXYColorFormatArg( 2,24,BLUE,"Enter Number Command :                                             ");
  gotoxy(25,24);
  return getchh();

}

getNameFile(char NameNewTree[])
{int i,Flag;
 char c;
 i=0;Flag=1;
 while (i<MaxFileName && Flag)
 { if ((c=getchh())!=13)
     NameNewTree[i++]=c;
   else Flag=0;
 }
 NameNewTree[i]=NULL;
}
//**************************************************************************
GetNameFileTree(char NameNewTree[])
{
  PutXYColorFormatArg( 2,24,RED,"Enter New Name Tree  :              ");
  gotoxy(25,24);
  getNameFile(NameNewTree);

}
//**************************************************************************
//**************************************************************************
static unsigned init(unsigned ch)
   {
      switch (ch)
	 {
	 case 0:
	    return(VL_INIT(0, 2, 0x238, 0));
	 case 1:
	    return(VL_INIT(1, 5, 0x230, 0));
	 case 2:
	    return(VL_INIT(2, 3, 0x270, 0));
	 case 3:
	    return(VL_INIT(3, 7, 0x278, 0));
	 }
   return(0);
   }
//**************************************************************************
int record(int ch,char filename[])
   {unsigned long BB;
   int ton;
 if ((fhandle=creat(filename,  S_IWRITE)) == -1)
     {
       printf("\nERROR: can't open file");
       return 0;
     }
     VL_RECORD(ch, fhandle) ;
    while (!kbhit())
	 {
	  if ((BB=VL_RCHECK(ch)) == -1l)
	    {
	    VL_RSTOP(ch);
	    close(fhandle);
	    return 0;
	    }
//	   printf("\n BB =%d ",BB);
	  if ((ton = VL_GETDTMF(ch))!=0)
	   printf("\n Key=%d ",ton);
	 }
VL_RSTOP(ch);
close(fhandle);

}

//**************************************************************************
RecordVoice()
{
 int wj;
  char NameVoiceFile[MaxDrivName];
  char c;
      PutXYColorFormatArg( 2,24,RED," Enter Start No ?                                 ");
      gotoxy(40,24);
      scanf("%d",&wj);

  while (c!=27)
  {
      PutXYColorFormatArg( 2,24,RED," Press Enter                                       ");
       c = (unsigned char)getch();
       if (c==27) return 0;
    PutXYColorFormatArg( 2,24,RED,"record %d      ",wj);
    VL_PICKUP(1);
    delay(100);
    delay(100);
    record(1,itoa(wj,NameVoiceFile,10));
    delay(100);
    VL_HANGUP(1);                       /* Do a hook-flash to reset */
    wj++;
    PutXYColorFormatArg( 2,24,RED,"oooooooooooooooooooo   ");
    getch();

    c = (unsigned char)getch();
       if (c==27) return 0;

  }

//  Tree_Open(TreeName);
}
//**************************************************************************
//**************************************************************************
int play(int ch,char filename[])
   {
   int ton;
    if ((fhandle=open(filename, O_RDONLY)) == -1)
     {
       printf("\nERROR: can't open file");
       return 0;
     }
    VL_PLAY(ch, fhandle, 0l);
    printf("\nPlaying");
    VL_PRESUME(ch);
    while (!kbhit())
	 {
	  if (VL_PCHECK(ch) == 0)
	    {
	    VL_PSTOP(ch);
	    close(fhandle);
	    return 0 ;
	    }
	  if ((ton = VL_GETDTMF(ch))!=0)
	   printf("\n Key=%d ",ton);
	 }
VL_PSTOP(ch);
close(fhandle);

}

//**************************************************************************
PlayVoice()
{
 int wj;
  char NameVoiceFile[MaxDrivName];
  char c;
      PutXYColorFormatArg( 2,24,RED," Enter Start No ?                                 ");
      gotoxy(40,24);
      scanf("%d",&wj);

  while (!kbhit())
  {
//      PutXYColorFormatArg( 2,24,RED," Press Enter                                       ");
//       c = (unsigned char)getch();
//       if (c==27) return 0;
    PutXYColorFormatArg( 2,24,RED,"record %d      ",wj);
//    VL_PICKUP(1);
//    delay(100);
    delay(100);
    play(1,itoa(wj,NameVoiceFile,10));
//    delay(100);
//    VL_HANGUP(1);                       /* Do a hook-flash to reset */
    wj++;

//    c = (unsigned char)getchh();
//       if (c==27) return 0;

  }

}

//**************************************************************************
 main()
 {
  FILE *w2;
  char FlagExit=1,Select;
 //-----------------INIT DRIVE------------------------------------
     clrscr();
     InitScreen();
     if(init(1)==0)
     while (FlagExit)
     {
       Select=Get_Select();
       switch(Select)
       {
       case 'R' :
       case 'r' : RecordVoice();break;
       case 'P' :
       case 'p' : PlayVoice();break;
       case 27  :FlagExit=0;break;
       }
     }
  fcloseall();
  VL_STOP(1);
  clrscr();
 }