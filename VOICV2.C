#include <DOS.H>
#include <alloc.h>
#include <STRING.H>
#include <CTYPE.H>
#include <STDIO.H>
#include <CONIO.H>
#include <STDLIB.H>
#include "PWRLINE.H"                /* Applications Interface header file */
#include <Time.h>
#define  PF 1
#define  TRUE 1
#define  FALSE 0
#define  RINGSTOANSWER 2            /* number of rings to answer calls */
#define  MaxLine       18           /*Max Line*/
#define  MaxTimeNotEvent  45       /*Max Time Not Event in line*/
#define  MaxTimeUsedSystem  250    /*Max Time Used  System  for one line*/
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
char DriveTreeName[50];
char DriveTreeNameV[50];
char DriveBox[50];
char DriveBoxV[50];
char DriveSysName[50];
char DriveGoranName[50];
char DriveNumber[50];
long int CountRefresh;
long int CountRefreshUsed;
/*===========================================================================*/
/*===========================================================================*/
/*===========================================================================*/
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

LINEIOAREA lioarea;          /* structure used to pass parameters */

FILE * PrintEvent;

unsigned line_number;               /* line number returned by GetEvent() */
unsigned event_code;                /* event code returned by GetEvent() */
unsigned event_data;                /* event data returned by GetEvent() */
unsigned char bitrate = 0;
struct ThreeTuple Get3TupleStru;
DIGITPARMS DigitParameter[MaxLine];
/*===========================================================================*/
    SYSCONFIGAREA scarea;      /* Powerline system configuration area */

    CHAR      major_version;             /* major version number of Powerline TSR */
    CHAR      minor_version;             /* minor version number of Powerline TSR */
    CHAR      processing_mode = 1;       /* normal mode = 1 */

    unsigned  line_count = 0;            /* the number of lines in the system */
    unsigned  first_fc  = 0;             /* the first feature connector number */
    unsigned  last_fc  = 0;              /* the last feature connector number */

    int       ln;                        /* counter for initializing lines */
    int       err;                       /* return code for Powerline functions */

/*===========================================================================*/

int      initialized = 0;       /* system initialization flag */
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

char strbuff[MaxLine][100];



struct PositionLine
{
 int       State;
 int       LastState;
 time_t    StartTime;
 time_t    EndEventTime;
}LineStat[MaxLine];

/*===========================================================================*/
/*===========================================================================*/
/*===========================================================================*/
/**************************************************************************/
struct Tree
{
   char DescNod[MaxDesc+2];
   char VoiceFileName[MaxFileName+2];
   fpos_t FatherPoint;
   fpos_t ChildPoint[MaxChild];
   unsigned int CountChild;
 };


typedef struct Tree StructTree;
StructTree Nod[MaxLine];
fpos_t PointCurrentNod[MaxLine];

FILE *FPTree;

char TreeName[20];
/*===========================================================================*/
/*===========================================================================*/
/*===========================================================================*/
/*---------------------------------------------------------------------*/
#define   Order         50
#define   Sector_Size   512
#define   Point_Num_Nod (Order * 2 + 1)
#define   Key_Num_Nod   (Order * 2 )
#define   Space         ((2*Sector_Size)-87)
/*---------------------------------------------------------------------*/
#define   Split         1
#define   UnSplit       0
#define   Leave         0
#define   Inter_Nod     1

#define   MAX_L_KEY     20   //No Box
#define   MAX_RAMZ      20
#define   Max_Name_File 15
#define   MaxMess       50
#define   MAX_NoSt      15
#define   MAX_NAME      25
#define   ActivRecCod   1
#define   DelRecCod     2
#define   TypeMesSing   1
#define   TypeMesGrop   2

#define Deay 31
#define Mont 12
#define MAX_COD   20
typedef unsigned long  Word;
typedef unsigned char Byte;
/*-----------------------------------------------------------------------*/
#define   Byte          unsigned char
#define   Word          unsigned int
#define   DWord         unsigned long int
/*=======================================================================*/
struct Key_S
{
   char f;  /*flag del logic*/
   char   key[MAX_L_KEY];
   DWord index;
 };
struct B_P_Tr
 {
    Byte Flag;
    Word Conter;
    DWord Pointer[Point_Num_Nod+2];
    struct Key_S key[Key_Num_Nod+2];
    DWord  Next;
    DWord  Prev;
/*    Byte   Spac[Space];*/
 };
 struct Head_Point
  {
    Byte  Flag_Lock;
    DWord Rec_Conter;
    DWord Pointer_Root;
    DWord Conter_Rec_In_File_Dat;
  };

union B_P_Tree
 {
   struct Head_Point Head;
   struct B_P_Tr     Nod;
 };

/*---------------------------------------------------*/
  struct ListMes
  {
    char TypeMess;
    char FileMess[Max_Name_File];
  };
struct Data_S
{
  char fdel;
  unsigned char NoBox[MAX_L_KEY+1];
  unsigned char Ramz[MAX_RAMZ+1];
  unsigned char NoStu[MAX_NoSt+1];
  char Lname[MAX_NAME+1];
  char Fname[MAX_NAME+1];
  int CountMess;
  struct ListMes ListMess[MaxMess];
};

struct Key_S key;
//union B_P_Tree *Nod;
struct Data_S Data;



 struct BoxL
 {
   DWord PointFile;
   int PointCurentMess;
   struct Data_S far *Data;
 };

typedef struct BoxL StructBoxLine;
StructBoxLine BoxLine[MaxLine];

FILE *FSearch;
FILE *FPBoxData;
FILE *FCountVoic;
char BoxIdx[50];
char BoxDat[50];
char CountVoic[50];
/*===========================================================================*/
/*===========================================================================*/
/*===========================================================================*/
int  StartUp(void);
void  PrintEven(unsigned line_number,unsigned event_code, unsigned event_data);

int busy_wait_for( unsigned ln, unsigned event );

int  PlayMsg(unsigned line_number,char filname[]);

int  GoOnHk(unsigned line_number);

void XIt();
/*===========================================================================*/
int FlagExit=1;

/*===========================================================================*/
#include <MashBtre.c>
#include <mashin.c>
/*===========================================================================*/
void main(void)
{ int i;
    long Tool;
    int err,iii=0,temp;

    FILE *w,*w2;
     CountRefresh=0;
     CountRefreshUsed=0;
     w2=fopen("c:\\DbNyaz\\tcity0.db","r+b");
     fread(&iii,sizeof(int),1,w2);
     iii++;
     fseek(w2,0,SEEK_SET);
     fwrite(&iii,sizeof(int),1,w2);
     fclose(w2);
     w2=fopen("c:\\DbNyaz\\tcity0.db","rb");

     if (PF)
     i=access("c:\\voicMai\\Voicgr\\infosys.v", 0);
     else i=access("c:\\voicMai2\\Voicgr\\infosys.v", 0);

  if ( i== 0 && (access("c:\\liam\\vt.", 0) == 0)&&
       (access("c:\\DbNyaz\\TCity0.db", 0) == 0))
   {
    if(PF)
       w=fopen("c:\\voicmai\\Voicgr\\infosys.v","rb");
    else w=fopen("c:\\voicmai2\\Voicgr\\infosys.v","rb");

     fseek(w,0,SEEK_END);
     Tool=ftell(w);

     fseek(w2,0,SEEK_SET);
     fread(&iii,sizeof(int),1,w2);
    if(Tool==320864 && iii<30)
    {
       if(PF)
       {
         strcpy(DriveSysName,"c:\\voicmai\\voicGR\\");
         strcpy(DriveTreeName,"c:\\voicmai\\level\\");
         strcpy(DriveTreeNameV,"c:\\voicmai\\levelv\\");
         strcpy(DriveBox,"c:\\voicmai\\Box\\");
         strcpy(DriveBoxV,"c:\\voicmai\\Boxv\\");
         strcpy(DriveGoranName,"c:\\voicmai\\voicG\\");
         strcpy(DriveNumber,"c:\\voicmai\\Num\\");
       }
       else
       {
         strcpy(DriveSysName,"c:\\voicmai2\\voicGR\\");
         strcpy(DriveTreeName,"c:\\voicmai2\\level\\");
         strcpy(DriveTreeNameV,"c:\\voicmai2\\levelv\\");
         strcpy(DriveBox,"c:\\voicmai2\\Box\\");
         strcpy(DriveBoxV,"c:\\voicmai2\\Boxv\\");
         strcpy(DriveGoranName,"c:\\voicmai2\\voicG\\");
         strcpy(DriveNumber,"c:\\voicmai2\\Num\\");
       }
        PrintEvent=fopen("p3.prn","wt");
        clrscr();

        strcpy(TreeName,"L.Bin");
        Tree_Open(TreeName);
        for (i=0;i< MaxLine ; i++)
          PointCurrentNod[i]=0;

        strcpy(CountVoic,DriveBox);
        strcpy(BoxDat,DriveBox);
        strcpy(BoxIdx,DriveBox);
        strcat(BoxDat,"Box.dat");
        strcat(BoxIdx,"Box.idx");
        strcat(CountVoic,"fc.bin");

        for (i=0;i< MaxLine ; i++)
        {
          BoxLine[i].PointFile=-1;
          BoxLine[i].PointCurentMess=0;
          BoxLine[i].Data=(struct Data_S far *) farmalloc(sizeof(struct Data_S));
        }
        sm= (stateMachine far *) farmalloc(sizeof(stateMachine));
        InitStateMachine( sm, stateTable, procTable );

        while ( event_code != KEYPRESS ||  event_data !=27)
        {

           err = NextEvent();

           if (err > 0)
             {
                fprintf(stdout, "get event %d**err=%d\n   ",line_number,err);
                fprintf(PrintEvent, "get event %d**err=%d\n   ",line_number,err);
               break;
             }

           if (PF)
/*..*/       PrintEven(line_number, event_code,  event_data);
         err = sm->sh[ LineStat[line_number].State ].eh[ event_code ].handle_it();

/*         err=HANDLEIT(line_number, event_code);*/
           if (err > 0)
             {
                fprintf(stdout, "proc %d**err=%d\n   ",line_number,err);
                fprintf(PrintEvent, "proc %d**err=%d\n   ",line_number,err);
               break;
             }


           if (err==0)    /*for molti state return -1 function handel*/
            {
             LineStat[line_number].LastState=LineStat[line_number].State;
             LineStat[line_number].State= sm->sh[ LineStat[line_number].State ].eh[event_code].ns;
            }

           if (event_code != 0)
            {
/*..*/          fprintf(stdout, "%d**err=%d\n   ",line_number,err);
///*..*/          fprintf(PrintEvent, "%d**err=%d\n   ",line_number,err);

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
              if (!PF)
/****/           fprintf(stdout, "%d%u55*****\n   ",line_number,LineStat[ line_number ].State);
            }

        }
    fprintf(PrintEvent,"\nCount R =%ld   u=%ld \n",CountRefresh,CountRefreshUsed);
    fclose(PrintEvent);
    fcloseall();
    XIt();
    } /**//**/
   }/**/
}

