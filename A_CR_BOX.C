#include <stdio.h>
#include <STDARG.H>
#include <DOS.H>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define  PF 1
//**************************************************************************

#define  TRUE 1
#define  FALSE 0
char Drive[50];
char DriveName[50];
char BoxIdx[100];
char BoxDat[100];
char CountVoic[100];
FILE *fp,*fdata;
FILE *FCountVoic;
//===========================================================================


Get_Select();
void InitScreen();
int BoxInit();
char getchh();

PutXYColorFormatArg(int X,int Y,int Color,char * Format ,...);

#include <A_cr_fun.c>

//**************************************************************************
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
  return 0;
}
//**************************************************************************
void InitScreen()
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
  PutXYColorFormatArg( 1,3,RED,"1 "); PutXYColorFormatArg(3 ,3,GREEN,": CREAT  NEW  BOX ");
  PutXYColorFormatArg( 1,4,RED,"2 "); PutXYColorFormatArg(3 ,4,GREEN,": UPDATE INFO BOX ");
  PutXYColorFormatArg( 1,5,GREEN,"-----------------------");
  PutXYColorFormatArg( 1,6,RED,"3 "); PutXYColorFormatArg(3 ,6,GREEN,": DELETED BOX");
  PutXYColorFormatArg( 1,7,RED,"4 "); PutXYColorFormatArg(3 ,7,GREEN,": ReIndex");
  PutXYColorFormatArg( 1,8,BLUE,"=======================");
  PutXYColorFormatArg( -1,23,BLUE,"ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ ");

}
//**************************************************************************
Get_Select()
{
  PutXYColorFormatArg( 2,24,BLUE,"Enter Number Command :                                             ");
  gotoxy(25,24);
  return getchh();
}

//**************************************************************************
char getchh()
{
  while (!kbhit())
  {
  }
  return getche();

}
//**************************************************************************
void  main()
 {
  FILE *w2;
  char FlagExit=1,Select;

 w2=fopen("path.ini","rt");
 fscanf(w2,"%s",Drive);
 fclose(w2);

strcpy(DriveName,Drive);strcat(DriveName,"BOX\\");

strcpy(CountVoic,DriveName);
strcpy(BoxDat,DriveName);
strcpy(BoxIdx,DriveName);
strcat(BoxDat,"Box.dat");
strcat(BoxIdx,"Box.idx");
strcat(CountVoic,"fc.bin");

     Creat_Bp("BOX.IDX","BOX.DAT","fc.bin",DriveName);

     Creat_Bp("ANS.IDX","ANS.DAT","ANS.bin",DriveName);

     while (FlagExit)
     {
       clrscr();
       InitScreen();
       Select=Get_Select();
       switch(Select)
       {
       case '1' :Creat_Box(); break;
       case '2' :Updet_Box(); break;
       case '3' :Del_Box();   break;
       case '4' :ReIndex();   break;
       case '8' :test();      break;
       case '9' :test2();      break;
       case 27  :fclose(fp);FlagExit=0;break;
       }
     }

  fcloseall();
 }