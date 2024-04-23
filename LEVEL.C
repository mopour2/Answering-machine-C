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
#include<LTREE.h>

StructTree Nod;
StructTree NodChild;
fpos_t PointCurrentNod;
FILE *FPTree;
char TreeName[MaxDrivName];
char Drive[MaxDrivName];
char DriveName[MaxDrivName];
char DriveNameV[MaxDrivName];
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

Init_Nod(StructTree *Nod)
{
 memset(Nod,0,sizeof(StructTree));
}

//**************************************************************************
Tree_Creat(char TreeFileName[])
{
 char TreeName[MaxDrivName];
 strcpy(TreeName,DriveName);
 strcat(TreeName,TreeFileName);
 if (access(TreeName, 0) == 0)
  return 0;
 else  FPTree= fopen(TreeName,"wb");
 if ( FPTree== NULL )
   return 0;
 else{
       Init_Nod(&Nod);

       strcpy(Nod.DescNod ,"ROOT");
       Nod.VoiceFileName[0]   =NULL;
       Nod.FatherPoint = 0;
       Nod.CountChild  = 0;
       fwrite(&Nod, sizeof(StructTree), 1,FPTree);
       fclose(FPTree);
       return 1;
      }
}
//**************************************************************************
Tree_Open(char TreeFileName[])
{
  char TreeName[MaxDrivName];
  strcpy(TreeName,DriveName);
  strcat(TreeName,TreeFileName);

 if ( (FPTree= fopen(TreeName,"r+b"))== NULL )
   return 0;
 else return 1;
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
  PutXYColorFormatArg( 1,3,RED,"1 "); PutXYColorFormatArg(3 ,3,GREEN,": Creat New Info ");
  PutXYColorFormatArg( 1,4,RED,"2 "); PutXYColorFormatArg(3 ,4,GREEN,": Open  New Info ");
  PutXYColorFormatArg( 1,5,GREEN,"-----------------------");
  PutXYColorFormatArg( 1,6,RED,"3 "); PutXYColorFormatArg(3 ,6,GREEN,": Go To Bak");
  PutXYColorFormatArg( 1,7,RED,"4 "); PutXYColorFormatArg(3 ,7,GREEN,": Edit Current");
  PutXYColorFormatArg( 1,8,RED,"5 "); PutXYColorFormatArg(3 ,8,GREEN,": Play Current Voice");
  PutXYColorFormatArg( 1,9,YELLOW,"-----------------------");
  PutXYColorFormatArg( 1,10,RED,"6 "); PutXYColorFormatArg(3 ,10,GREEN,": Creat New Level");
  PutXYColorFormatArg( 1,11,RED,"7 "); PutXYColorFormatArg(3 ,11,GREEN,": Go To Level");
  PutXYColorFormatArg( 1,12,RED,"8 "); PutXYColorFormatArg(3 ,12,GREEN,": Edit Level");
  PutXYColorFormatArg( 1,13,RED,"9 "); PutXYColorFormatArg(3 ,13,GREEN,": Play  Voice Level");
  PutXYColorFormatArg( 1,14,RED,"0"); PutXYColorFormatArg(3 ,14,GREEN,": Delete Level");
  PutXYColorFormatArg( 1,15,GREEN,"-----------------------");
  PutXYColorFormatArg( 1,16,RED,"R"); PutXYColorFormatArg(3 ,16,GREEN,": Record Voice");
  PutXYColorFormatArg( 1,17,RED,"P"); PutXYColorFormatArg(3 ,17,GREEN,": Play Voice");
  PutXYColorFormatArg( 1,18,BLUE,"=======================");
  PutXYColorFormatArg( -1,23,BLUE,"ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ ");
}
//**************************************************************************
ReadCild (StructTree *ChildNod,fpos_t PointChildNod)
{
 fseek(FPTree , PointChildNod , SEEK_SET );
 fread(ChildNod, sizeof(StructTree), 1 , FPTree );
}
//**************************************************************************
WritCild (StructTree *ChildNod,fpos_t PointChildNod)
{
 fseek(FPTree , PointChildNod , SEEK_SET );
 fwrite(ChildNod, sizeof(StructTree), 1 , FPTree );
}

//**************************************************************************
ShowChild(StructTree Nod)
{
  int i=0;
  StructTree NodChild;
  for (i=0 ; i<MaxChild ;i++)
    PutXYColorFormatArg( 30,i+7,BLUE,"                                                   ");

  PutXYColorFormatArg( 30,6,BLUE,"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿ ");
  PutXYColorFormatArg( 42,6,YELLOW,"ÄLÄIÄSÄTÄÄNEXTÄLÄEÄVÄEÄLÄ");
  for (i=0 ; i<Nod.CountChild ;i++)
  {
    ReadCild(&NodChild,Nod.ChildPoint[i]);
    PutXYColorFormatArg( 33,i+7,BLUE,"				    ");
    PutXYColorFormatArg( 31,i+7,RED,"%2d :",i);
    PutXYColorFormatArg( 35,i+7,BLUE," %s  ",NodChild.DescNod);
    PutXYColorFormatArg( 66,i+7,RED," %s  ",NodChild.VoiceFileName);
    PutXYColorFormatArg( 30,i+7,BLUE,"³");
    PutXYColorFormatArg( 79,i+7,BLUE,"³");
  }
  PutXYColorFormatArg( 30,i+7,BLUE,"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ ");
}

//**************************************************************************
ShowFather(StructTree Nod)
{

  PutXYColorFormatArg( 30,3,BLUE,"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿ ");
  PutXYColorFormatArg( 41,3,YELLOW,"ÄCÄUÄRÄRÄEÄNÄTÄÄÄLÄEÄVÄEÄL");
  PutXYColorFormatArg( 30,4,BLUE,"                                                   ");
  PutXYColorFormatArg( 31,4,BLUE,"%s ",Nod.DescNod);
  PutXYColorFormatArg( 66,4,BLUE,"%s ",Nod.VoiceFileName);
  PutXYColorFormatArg( 30,4,BLUE,"³"); PutXYColorFormatArg( 79,4,BLUE,"³");
  PutXYColorFormatArg( 30,5,BLUE,"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ ");
}
//**************************************************************************
Get_Select()
{
  PutXYColorFormatArg( 2,24,BLUE,"Enter Number Command :                                             ");
  gotoxy(25,24);
  return getchh();

// while (!bioskey(1));
// return (char)bioskey(0);
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
CreatNewTree()
{
  fclose(FPTree);

  GetNameFileTree(TreeName);
  if (Tree_Creat(TreeName))
   {
     if (Tree_Open(TreeName))
      { PutXYColorFormatArg( 2,24,RED,"TREE %s NEW Creat And Open Ok !            ",TreeName);getchh();}
     else { PutXYColorFormatArg( 2,24,RED,"TREE %s Can Not Open In Creat !             ",TreeName);getchh();}
   }
   else
     { PutXYColorFormatArg( 2,24,RED,"TREE %s existence !                ",TreeName);getchh();}
}
//**************************************************************************
OpenNewTree()
{

  fclose(FPTree);

  GetNameFileTree(TreeName);
     if (Tree_Open(TreeName))
      { PutXYColorFormatArg( 2,24,RED,"TREE %s  Open Ok !            ",TreeName);getchh();}
     else { PutXYColorFormatArg( 2,24,RED,"TREE %s Can Not Open  !             ",TreeName);getchh();}
}

//**************************************************************************
 ReadCurrentNod(PointCurrentNod)
{
 fseek(FPTree , PointCurrentNod , SEEK_SET );
 fread(&Nod, sizeof(StructTree), 1 , FPTree );
}
//**************************************************************************
 WritCurrentNod(PointCurrentNod)
{
 fseek(FPTree , PointCurrentNod , SEEK_SET );
 fwrite(&Nod, sizeof(StructTree), 1 , FPTree );
}

//**************************************************************************
chengDescFather()
{
 char c;
 int i,Flag;
 Flag=1;
 i=0;
 PutXYColorFormatArg( 2,24,RED," Enter Description Of Current?             ");
 gotoxy(50,24);
 while (i<MaxDesc && Flag)
 { if ((c=getchh())!=13)
     Nod.DescNod[i++]=c;
   else Flag=0;
 }
 Nod.DescNod[i++]=NULL;
}
//**************************************************************************
chengVoiceFather()
{
 char c;
 int i,Flag;
 Flag=1;
 i=0;
 PutXYColorFormatArg( 2,24,RED," Enter Voice File Name Of Current?             ");
 gotoxy(50,24);
 while (i<MaxFileName && Flag)
 { if ((c=getchh())!=13)
     Nod.VoiceFileName[i++]=c;
   else Flag=0;
 }

 Nod.VoiceFileName[i++]=NULL;

}
//**************************************************************************
EditFather()
{
 char c;
  PutXYColorFormatArg( 2,24,RED,"Cheng Desc Current (Y/N)?");
  if ((c=getchh())!='N' && c!='n')
  {
   chengDescFather();
   WritCurrentNod(PointCurrentNod);
  }
  PutXYColorFormatArg( 2,24,RED,"Cheng Voice File Current (Y/N)?");
  if ((c=getchh())!='N' && c!='n')
   {
     chengVoiceFather();
     WritCurrentNod(PointCurrentNod);
   }
}
//**************************************************************************
GoToFather()
{
  PointCurrentNod=Nod.FatherPoint;
  ReadCurrentNod(PointCurrentNod);
}
//**************************************************************************
//**************************************************************************
CreatNewChild()
{
 StructTree NodChild;
 fpos_t PointChildNod;
 char c;
 int i,Flag;
 if (Nod.CountChild>=MaxChild)
  {
    PutXYColorFormatArg( 2,24,RED," Max Level 10                        ");
    return 0;
  }
 else
 {
   Flag=1;
   i=0;
   Init_Nod(&NodChild);
   PutXYColorFormatArg( 2,24,RED," Enter Desc Of Level ?                                ");
   gotoxy(30,24);
   while (i<MaxDesc && Flag)
   { if ((c=getchh())!=13)
     NodChild.DescNod[i++]=c;
     else Flag=0;
   }
   NodChild.DescNod[i++]=NULL;

   Flag=1;
   i=0;
   PutXYColorFormatArg( 2,24,RED," Enter Voice File Name Of Level?                           ");
   gotoxy(39,24);
   while (i<MaxFileName && Flag)
   { if ((c=getchh())!=13)
       NodChild.VoiceFileName[i++]=c;
     else Flag=0;
   }
   NodChild.VoiceFileName[i++]=NULL;

   NodChild.FatherPoint=PointCurrentNod;
   fseek(FPTree,0,SEEK_END);
   PointChildNod=ftell(FPTree);

   Nod.ChildPoint[Nod.CountChild++]= PointChildNod;

   WritCurrentNod(PointCurrentNod);
   WritCild (&NodChild,PointChildNod);
 }
}
//**************************************************************************
GoToChild()
{ char c;
   PutXYColorFormatArg( 2,24,RED," Enter Number Next Level ?                                ");
   c=getchh();
   c=c-'0';
   if (c>=0 && c<=9)
   {
    if (c< Nod.CountChild)
    {
      PointCurrentNod=Nod.ChildPoint[c];
      ReadCurrentNod(PointCurrentNod);
    }
   }
}
//**************************************************************************
chengDescChild(StructTree *NodChild)
{
 char c;
 int i,Flag;
 Flag=1;
 i=0;
 PutXYColorFormatArg( 2,24,RED," Enter Description Of Level?             ");
 gotoxy(50,24);
 while (i<MaxDesc && Flag)
 { if ((c=getchh())!=13)
     NodChild->DescNod[i++]=c;
   else Flag=0;
 }
 NodChild->DescNod[i++]=NULL;
}
//**************************************************************************
chengVoiceChild(StructTree *NodChild)
{
 char c;
 int i,Flag;
 Flag=1;
 i=0;
 PutXYColorFormatArg( 2,24,RED," Enter Voice File Name Of Level?             ");
 gotoxy(50,24);
 while (i<MaxFileName && Flag)
 { if ((c=getchh())!=13)
     NodChild->VoiceFileName[i++]=c;
   else Flag=0;
 }

 NodChild->VoiceFileName[i++]=NULL;

}

//**************************************************************************
EditChild()
{
 char c;
    StructTree NodChild;
   fpos_t PointChildNod;

   PutXYColorFormatArg( 2,24,RED," Enter Number  Level ?                                ");
   c=getchh();
   if (c>='0' && c<='9')
   {
    PointChildNod=Nod.ChildPoint[ c -'0'];
    ReadCild (&NodChild,PointChildNod);
   PutXYColorFormatArg( 2,24,RED,"Cheng Desc Level (Y/N)?");
  if ((c=getchh())!='N' && c!='n')
  {
   chengDescChild(&NodChild);
   WritCild (&NodChild,PointChildNod);
  }
  PutXYColorFormatArg( 2,24,RED,"Cheng Voice File Level (Y/N)?");
  if ((c=getchh())!='N' && c!='n')
   {
     chengVoiceChild(&NodChild);
    WritCild (&NodChild,PointChildNod);
   }

   }

}
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
  char temp[MaxDrivName];
  char NameVoiceFile[MaxDrivName];
  char c;
      PutXYColorFormatArg( 2,24,RED," Enter Voice File Name ?                                 ");
      gotoxy(40,24);
      getNameFile(NameVoiceFile);
      strcpy(temp,DriveNameV);
      strcat(temp,NameVoiceFile);
      strcpy(NameVoiceFile,temp);

      PutXYColorFormatArg( 2,24,RED," Is this correct? (Y/N)                                       ");
       c = (unsigned char)getchh();
       c &= 0xDF;
       if(c == 'N') return 0;
    delay(100);
    VL_PICKUP(1);
    delay(100);
    record(1,NameVoiceFile);
    delay(100);
    VL_HANGUP(1);                       /* Do a hook-flash to reset */

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
  char temp[MaxDrivName];
  char NameVoiceFile[MaxDrivName];
  char c;
      PutXYColorFormatArg( 2,24,RED," Enter Voice File Name ?                                ");
      gotoxy(40,24);
      getNameFile(NameVoiceFile);
      strcpy(temp,DriveNameV);
      strcat(temp,NameVoiceFile);
      strcpy(NameVoiceFile,temp);

      PutXYColorFormatArg( 2,24,RED," Is Play correct? (Y/N)				");
       c = (unsigned char)getchh();
       c &= 0xDF;
       if(c == 'N') return 0;
    delay(100);
    VL_PICKUP(1);
    delay(100);
    play(1,NameVoiceFile);
    delay(100);
    VL_HANGUP(1);                       /* Do a hook-flash to reset */
    delay(100);

  //  Tree_Open(TreeName);
}
//**************************************************************************
DeleteChild()
{
  char c;
  if ( Nod.CountChild >0)
  {
    PutXYColorFormatArg( 2,24,RED," Enter Number Level ?                                ");
    c=getchh();
    c=c-'0';
    if (c>=0 && c<=9)
    {
      if (c<Nod.CountChild)
      {
      memcpy(&Nod.ChildPoint[c],&Nod.ChildPoint[Nod.CountChild-1],(Nod.CountChild-c-1)* sizeof(fpos_t));
      Nod.CountChild--;
      WritCurrentNod(PointCurrentNod);
      }
    }
  }
}
//**************************************************************************
 main()
 {
  FILE *w2;
  char FlagExit=1,Select;
 //-----------------INIT DRIVE------------------------------------
 w2=fopen("path.ini","rt");
 fscanf(w2,"%s",Drive);
 fclose(w2);

strcpy(DriveName,Drive);strcat(DriveName,"level\\");
strcpy(DriveNameV,Drive);strcat(DriveNameV,"levelV\\");

     strcpy(TreeName,"L.Bin");

     Tree_Creat(TreeName);
     Tree_Open(TreeName);

     clrscr();
     InitScreen();
     ReadCurrentNod(0);
     if(init(1)==0)
     while (FlagExit)
     {
       ShowFather(Nod);
       ShowChild(Nod);
       Select=Get_Select();
       switch(Select)
       {
       case 'R' :
       case 'r' : RecordVoice();break;
       case 'P' :
       case 'p' : PlayVoice();break;
       case '1' : CreatNewTree();break;
       case '2' : OpenNewTree();break;
       case '3' : GoToFather();break;
       case '4' : EditFather();break;
       case '6' : CreatNewChild();break;
       case '7' : GoToChild();break;
       case '8' : EditChild();break;
       case '0' : DeleteChild();break;
       case 27  :fclose(FPTree);FlagExit=0;break;
       }
     }
  fcloseall();
  VL_STOP(1);
 }