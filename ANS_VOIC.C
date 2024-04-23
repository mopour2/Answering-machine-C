#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <dos.h>
#include <time.h>
#include <share.h>  //sharing for read and write
#include <IO.H>
#include <fcntl.h>
#include <sys\types.h>
#include <sys\stat.h>
#include <alloc.h>
#include <STDIO.H>
#include <process.h>


#include "PWRLINE.H"                /* Applications Interface header file */
#include "vlink.h"

#include <Time.h>
int  PF=1;
#define  TRUE 1
#define  FALSE 0
#define  RINGSTOANSWER 10            /* number of rings to answer calls */
#define  MaxLine       1+2           /*Max Line*/
#define  MaxTimeNotEvent  45       /*Max Time Not Event in line*/
#define  MaxTimeUsedSystem  100    /*600Max Time Used  System  for one line*/
/**************************************************************************/
#define MaxDesc      30
#define MaxFileName  12
#define MaxChild     15
/**************************************************************************/

/*===========================================================================*/
/* pseudo event codes */
#define  KEYPRESS  0x21
#define  INITRQST  0x20
#define  LOOPLCON  0x22
#define  LOOPLCOFF 0x23
/*==========================================================================*/
void ReadCurrentNod();
Tree_Open(char TreeFileName[]);

char Drive[50];
char DriveTreeName[50];
char DriveTreeNameV[50];

char DriveBox[50];
char DriveBoxV[50];
char DriveBoxGrV[50];
char DriveJavab[50];
char DriveArshiv[50];
char DriveBayegan[50];

char DriveSysName[50];
char DriveGoranName[50];
char DriveNumber[50];

long int CountRefresh;
long int CountRefreshUsed;
/*===========================================================================*/
/*===========================================================================*/
/*===========================================================================*/
/*===========================================================================*/
#define  V_Start      1
#define  V_OffHook    2
#define  V_OnHook     3
#define  V_Play       4
#define  V_Record     5
#define  V_GetDigits  6
#define  V_SendDigits 7
#define  V_DosError   8

#define TIME_RING       1

#define HOOK_SETTLE_TIME 1
/*===========================================================================*/
/* globals */
#define  MAXEVENTNUM 0x25
#define  MAXSTATENUM  200
#define  StartOnState 2
#define  PlayGoodByState 194
#define  PlayGoodByStateALLEvent 192
#define  MaxPlayOneMess 2
/* pseudo event codes */
#define  KEYPRESS  0x21
#define  INITRQST  0x20
#define  LOOPLCON  0x22
#define  LOOPLCOFF 0x23
#define  EVENTSTAR 0x24

FILE * PrintEvent;

unsigned line_number;               /* line number returned by GetEvent() */
unsigned event_code;                /* event code returned by GetEvent() */
unsigned event_data;                /* event data returned by GetEvent() */
unsigned char bitrate = 0;

LINEIOAREA lioarea[MaxLine];          /* structure used to pass parameters */
DIGITPARMS DigitParameter[MaxLine];
/*===========================================================================*/

    unsigned  line_count = 1;            /* the number of lines in the system */
    unsigned  first_fc  = 0;             /* the first feature connector number */
    unsigned  last_fc  = 0;              /* the last feature connector number */

    int       err;                       /* return code for Powerline functions */

/*=====================MASHIN STRUCT=======================================*/

int      initialized = 0;       /* system initialization flag */
int      initialized2 = 0;       /* system initialization flag */
typedef struct
{
    int (* handle_it)(void);
    int ns;                       /* next state */
} eventHandler;

typedef struct
{                                 /* array of eventHandler structures  */
    eventHandler eh[MAXEVENTNUM]; /* one entry for each possible event */
} stateHandler;

typedef struct
{                                 /* array of stateHandler structures  */
    stateHandler sh[MAXSTATENUM]; /* one entry for each state          */
} stateMachine;

stateMachine far *sm;

struct CountMess
{
   char message[20];
   int  count;
}CountMessagLine[MaxLine];

//char strbuff[MaxLine][100];



struct PositionLine
{
 int       State;
 int       LastState;
 time_t    StartTime;
 time_t    EndEventTime;
 int       V_Line;
 int       pfhandle;
}LineStat[MaxLine];

time_t OffHook_StartTime[MaxLine];
time_t OnHook_StartTime[MaxLine];
time_t RecordStartTime[MaxLine];
time_t PlayStartTime[MaxLine];

time_t RingTime[MaxLine];
char   RingFlagLine[MaxLine];
char   RingCount[MaxLine];

time_t tnow;
struct COD_TON
{
  char  buf[100];
  char count;
 time_t    StartTime;
}COD_TON_BUF[MaxLine];

struct StDig3
{
  char  Dig3[7][4];
  char countDig3;
  char flagDig3[7];
}Buf_Dig3[MaxLine];

/*===========================================================================*/
/*===========================================================================*/
/*===================VAR========LTREE================================================*/
/**************************************************************************/
#include<LTREE.h>

StructTree NodLT[MaxLine];
fpos_t PointCurrentNod[MaxLine];

FILE *FPTree;

char TreeName[20];
/*======================VAR======BOX B++TREE==============================================*/
#include<libbptr.h>

#include<data_bp.h>

 struct BoxL
 {
   unsigned char NoBox[MAX_L_KEY+1];
   DWord PointFile;
   int PointCurentMess;
   struct Data_S far *Data;
 };

typedef struct BoxL StructBoxLine;
StructBoxLine BoxLine[MaxLine];

 struct AnsL
 {
   DWord PointFile;
   struct Data_Ans far *DataAns;
 };
typedef struct AnsL StructAnsLine;
StructAnsLine AnsBoxLine[MaxLine];

FILE *FSearch;
FILE *FPBoxData;
FILE *FCountVoic;

char BoxIdx[100];
char BoxDat[100];
char CountVoic[100];

char AnsBoxIdx[100];
char AnsBoxDat[100];
char AnsCountVoic[100];

/*===========================================================================*/
/*===========================================================================*/
/*===========================================================================*/
int  StartUp(void);
void  PrintEven(unsigned line_number,unsigned event_code, unsigned event_data);

//int busy_wait_for( unsigned ln, unsigned event );

int  PlayMsg(unsigned line_number,char filname[]);

int  GoOnHk(unsigned line_number);

void XIt();
/*===========================================================================*/
int FlagExit=1;

/*===========================================================================*/
#include <A_MashBp.c>

#include <A_mashin.c>

#include <lock.c>

/*===========================================================================*/
int main(void)
{ int i;
    long Tool1,Tool2,Tool3;
    int err,temp;
    char charTemp[50];
    FILE *w,*w2;
    struct date ddd;
   int a,b,c;
   a=900;
   b=1100;
   c=a+b;
   a=1;
   b=12;

     CountRefresh=0;
     CountRefreshUsed=0;
   line_number=1;
 //-----------------INIT DRIVE------------------------------------
 clrscr();
   getdate(&ddd);


//if(b==4);
//if(ddd.da_year<=c &&  ddd.da_mon<=b);
 if(1/* ChekLock()*/)
 {
 backgr();
 w2=fopen("path.ini","rt");
 if (w2==NULL)
 { printf("Not open path ");
    return 0;
 }
 fscanf(w2,"%s",Drive);
 fclose(w2);
 randomize();

 strcpy(DriveSysName,Drive);    strcat(DriveSysName,"voicGR\\");

 strcpy(DriveTreeName,Drive);   strcat(DriveTreeName,"level\\");
 strcpy(DriveTreeNameV,Drive);  strcat(DriveTreeNameV,"levelv\\");

 strcpy(DriveGoranName,Drive);  strcat(DriveGoranName,"voicG\\");

 strcpy(DriveNumber,Drive);     strcat(DriveNumber,"Num\\");

 strcpy(DriveBox,Drive);        strcat(DriveBox,"Box\\");
 strcpy(DriveBoxV,Drive);       strcat(DriveBoxV,"Boxv\\");
 strcpy(DriveBoxGrV,Drive);     strcat(DriveBoxGrV,"BoxGrv\\");
 strcpy(DriveJavab,Drive);      strcat(DriveJavab,"Javab\\");
 strcpy(DriveArshiv,Drive);     strcat(DriveArshiv,"Arshiv\\");
 strcpy(DriveBayegan,Drive);    strcat(DriveBayegan,"Bayegan\\");

 //-----------------------------------------------------
 PrintEvent=fopen("p3.prn","wt");
// clrscr();
 //-----------------------------------------------------
 strcpy(TreeName,"L.Bin");
 Tree_Open(TreeName);
	for (i=0;i< MaxLine ; i++)
	  PointCurrentNod[i]=0;
 //-----------------------------------------------------
	strcpy(CountVoic,DriveBox);
	strcpy(BoxDat,DriveBox);
	strcpy(BoxIdx,DriveBox);
	strcat(BoxDat,"Box.dat");
	strcat(BoxIdx,"Box.idx");
	strcat(CountVoic,"fc.bin");

strcpy(CountVoic,DriveBox);      strcat(CountVoic,"fc.bin");
strcpy(BoxDat,DriveBox);         strcat(BoxDat,"Box.dat");
strcpy(BoxIdx,DriveBox);         strcat(BoxIdx,"Box.idx");

strcpy(AnsCountVoic,DriveBox);      strcat(AnsCountVoic,"ans.bin");
strcpy(AnsBoxDat,DriveBox);         strcat(AnsBoxDat,"ans.dat");
strcpy(AnsBoxIdx,DriveBox);         strcat(AnsBoxIdx,"ans.idx");

     for (i=0;i< MaxLine ; i++)
	{
	  BoxLine[i].PointFile=-1;
	  BoxLine[i].PointCurentMess=0;
	  BoxLine[i].Data=(struct Data_S far *) farmalloc(sizeof(struct Data_S));
	  if (BoxLine[i].Data==NULL)
	   { printf("Not memory in Data ");
	     return 0;
	   }
	}

	for (i=0;i< MaxLine ; i++)
	{
	  AnsBoxLine[i].PointFile=-1;
	  AnsBoxLine[i].DataAns=(struct Data_Ans far *) farmalloc(sizeof(struct Data_Ans));
	  if (AnsBoxLine[i].DataAns==NULL)
	   { printf("Not memory in Data ");
	     return 0;
	   }
	}

 //-----------------------------------------------------
//	if(b==4)
//	  if(ddd.da_year<=c &&  ddd.da_mon<=b);
//	    ;
//	  else return 0;

	   strcpy(charTemp,DriveSysName);
	   strcat(charTemp,"infosys.v");
	   w=fopen(charTemp,"rb");
	   fseek(w,0,SEEK_END);
	   Tool1=ftell(w);
	   fclose(w);

	   strcpy(charTemp,DriveSysName);
	   strcat(charTemp,"inf2.v");
	   w=fopen(charTemp,"rb");
	   fseek(w,0,SEEK_END);
	   Tool2=ftell(w);
	   fclose(w);

	   strcpy(charTemp,DriveSysName);
	   strcat(charTemp,"irep.v");
	   w=fopen(charTemp,"rb");
	   fseek(w,0,SEEK_END);
	   Tool3=ftell(w);
	   fclose(w);
	   if (/*Tool1!=140359l || *//*Tool2!=84928l ||*/ Tool3!=26618l )
	     return 0;

	sm= (stateMachine far *) farmalloc(sizeof(stateMachine));
	if (sm==NULL)
	{ printf("Not Memmory SM");
	  return 0;
	}
	InitStateMachine( sm, stateTable, procTable );



while ( event_code != KEYPRESS ||  event_data !=27)
{
  line_number=0;
  initialized =0;
  LineStat[ line_number ].State=0;

	while ( event_code != KEYPRESS ||  event_data !=27)
	{

	   err = NextEvent();

	   if (err > 0)
	     {
		if (PF)
		  fprintf(stdout, "get event %d**err=%d\n   ",line_number,err);
		  fprintf(PrintEvent, "get event %d**err=%d\n   ",line_number,err);
		  fprintf(PrintEvent, " s c : %u -- %u\n"
		     , LineStat[ line_number ].LastState,LineStat[ line_number ].State );
	       break;
	     }

	   if (PF)
/*..*/       PrintEven(line_number, event_code,  event_data);

     /////////////////////////////////////////////////////////////
	 err = sm->sh[ LineStat[line_number].State ].eh[ event_code ].handle_it();
     /////////////////////////////////////////////////////////////
	   if (err==0)    /*for molti state return -1 function handel*/
	    {
	     LineStat[line_number].LastState=LineStat[line_number].State;
	     LineStat[line_number].State= sm->sh[ LineStat[line_number].State ].eh[event_code].ns;
	    }
     /////////////////////////////////////////////////////////////
	   if (err > 0)
	     {
		if (PF)
		 fprintf(stdout, "proc %d**err=%d\n   ",line_number,err);
		 fprintf(PrintEvent, "proc %d**err=%d\n   ",line_number,err);
		 fprintf(PrintEvent, " s c : %u -- %u\n"
		     , LineStat[ line_number ].LastState,LineStat[ line_number ].State );

	       break;
	     }

	   if (event_code != 0)
	    {
	      if (PF)
	      {
/*..*/          fprintf(stdout, "%d**err=%d\n   ",line_number,err);
/*..*/          fprintf(PrintEvent, "%d**err=%d\n   ",line_number,err);
	      }

	      if (LineStat[line_number].State != LineStat[line_number].LastState)
	      {
		 if (PF)
		 {
/*..*/              fprintf(stdout, "         causing state change : %u --> %u\n"
		     , LineStat[ line_number ].LastState,LineStat[ line_number ].State );

/*..*/              fprintf(PrintEvent, "         causing state change : %u --> %u\n"
		     , LineStat[ line_number ].LastState,LineStat[ line_number ].State );
		 }
	      }
	      else
	      {   if (PF)
		  {
/*..*/             fprintf(stdout, "%d*****\n   ",line_number);
/*..*/             fprintf(PrintEvent, "%d*****\n   ",line_number);
		  }
	      }
//	      if (PF) //(!PF)
//****/           fprintf(stdout, "%d%u55*****\n   ",line_number,LineStat[ line_number ].State);
	    }
	}//End Main While
 //-----------------------------------------------------
    fprintf(PrintEvent,"\nCount R =%ld   u=%ld \n",CountRefresh,CountRefreshUsed);
}//end  While
    fclose(PrintEvent);
    fcloseall();
    clrscr();
 XIt();
}
  return 0;
}
//--------------------------------------------------------------------------
int print_str(int x1,int y1,int color,char str[])
{
   int H_screen;
   char far  *screen;
   int type_screen;
   int i,j;

   char far *Address_video_type=(char far *)0x449;

   if(*Address_video_type==7)
     type_screen=0;
   else type_screen=1;

    screen= type_screen ? (char far *)0xb8000000l :(char far *) 0xb0000000l;
    H_screen=160;
    for(i=0,j=0;str[i]!=NULL;i++)
    {
     *(screen+ y1*H_screen +x1*2+j++)=str[i];
     *(screen+ y1*H_screen +x1*2+j++)=color;
    }
return 0;
}

 backgr()
 {
 print_str(0,0,BLUE*16+BLACK  , "±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±±≤");
 print_str(0,1,BLUE*16+BLACK  , "≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞Ù˛ü§Ûê ˆıü§Ûê ˘ÛÛê Ù®ì€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤€±≤");
 print_str(0,2,BLUE*16+BLACK  , "±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±±≤");
 print_str(0,3,BLUE*16+BLACK  , "≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±€€±≤");
 print_str(0,4,BLUE*16+BLACK  , "±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±±≤");
 print_str(0,5,BLUE*16+BLACK  , "±≤±≤∞€±≤±∞€±€±≤∞€±±≤∞€±≤±∞€±Ø±∞€±≤±∞€ê≤±∞€±óó∞€±≤±∞€±≤±∞€ê≤±∞€±≤±∞€±≤±∞€±≤±±≤±€±≤");
 print_str(0,6,BLUE*16+BLACK  , "±≤±∞€±≤±∞€±€±≤±∞€±≤±∞€±≤±∞€±Ø±∞€±≤±∞€ê≤±∞€±≤±∞€±≤±∞ €±∞€±ê±∞€±≤±∞€±≤±∞€±≤±±≤±±±≤");
 print_str(0,7,BLUE*16+BLACK  , "≤±∞€±≤±∞€±≤±≤±∞€±≤±∞€±≤±∞€±≤Ø∞€±≤±∞€±ê±∞€±≤±∞€±≤±∞ €±∞§±≤ê∞€±≤±∞€±≤±∞€±≤±±≤±±≤€±≤");
 print_str(0,8,BLUE*16+BLACK  , "±≤±∞€±≤±∞€±€±≤±∞€±≤±∞€±≤±∞€±Ø±∞€±≤±∞€ê≤±∞€ñ≤±∞ñ±≤±∞ €±§€±ê±∞€±≤±∞€±≤±∞€±≤±±≤±±≤±");
 print_str(0,9,BLUE*16+BLACK ,  "∞€±≤±∞€±≤±∞±∞€±≤±∞€±≤±∞€±≤ØØØØØØØØ±≤±ê€±≤±ñ€±≤ñ∞ €±∞€±§±∞ê±≤±∞€±≤±∞€±≤±±≤±±≤±±±≤");
 print_str(0,10,BLUE*16+BLACK , "≤±∞€±≤±∞€±≤±≤±∞€±≤±∞€±≤±∞€Ø≤±∞€±≤Ø∞€±ê±∞€±ñ±∞€ñ≤±∞€±≤±§€±ê±∞€±≤±∞€±≤±∞€±≤±€±≤±€±≤");
 print_str(0,11,BLUE*16+BLACK , "±≤±∞€±≤±∞€±€±≤±∞€±≤±∞€ØØØØØØØØØØØØ±∞€íííííñññññ±≤§§§§§§∞€ê≤±∞€±≤±∞€±≤±∞€±≤±±≤±±≤");
 print_str(0,12,BLUE*16+BLACK , "≤±∞€±≤±∞€±≤±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±€±≤±€±≤");
 print_str(0,13,BLUE*16+BLACK , "±≤±∞€±≤±∞€±€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤ì∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±±≤±±≤");
 print_str(0,14,BLUE*16+BLACK , "≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±≤€±≤");
 print_str(0,15,BLUE*16+BLACK , "±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±±≤");
 print_str(0,16,BLUE*16+BLACK , "≤±∞€±≤±∞€±≤∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±oo∞€±≤oo€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±€±≤±±≤±€±≤");
 print_str(0,17,BLUE*16+BLACK , "±∞€±≤±∞€±≤∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±€±≤±±≤±±±≤");
 print_str(0,18,BLUE*16+BLACK , "±≤±∞€±≤±∞±≤±∞€±≤±∞€ÙÙÙÙÙ±≤±∞¸¸¸∞€ÎÎÎÎ€±ñ±∞€ñ≤±∞ß€ß∞€ß≤±∞€±≤±∞€±≤±∞€±≤±±≤±±≤±±±€±≤");
 print_str(0,19,BLUE*16+BLACK , "≤±∞€±≤±∞€≤±∞€±≤±∞€±ÙÙÙÙÙ≤€±≤¸¸¸€±ÎÎÎÎ±≤ñ∞€±ñ±∞€ß≤ß∞€ß≤±∞ÙÙÙÙÙÙ±≤±∞€±≤±€±≤±±≤±±±≤");
 print_str(0,20,BLUE*16+BLACK , "±≤±∞€±≤±∞±≤±∞€±≤±ÙÙÙÙÙÙÙÙÙÙ¸¸¸¸¸¸¸ÎÎÎÎÎÎñññññßßßßßßßßßÙÙÙÙ€±≤Ù∞€±≤±∞€±≤±±≤±±≤±€±≤");
 print_str(0,21,BLUE*16+BLACK , "≤±∞€±≤±∞€≤±∞€±≤±∞ÙÙ≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±ÙÙÙÙÙÙ€±≤±∞€±≤±€±≤±±≤±±≤");
 print_str(0,22,BLUE*16+BLACK , "±≤±∞€±≤±∞±≤±∞€±≤±ÙÙ±≤±∞€±o±o€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±±≤±±≤±€±≤");
 print_str(0,23,BLUE*16+BLACK , "≤±∞€±≤±∞€≤±∞€±≤±∞ÙÙ≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±€±≤±±≤±±≤");
 print_str(0,24,BLUE*16+BLACK , "≤±∞€±≤±∞€≤±∞€±≤±∞ÙÙ≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±∞€±≤±€±≤±±≤±€±≤");
 return 0;
 }