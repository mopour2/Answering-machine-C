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
 Constant     �Value�grnd?�grnd?
��������������������������������
 BLACK        �  0  � Yes � Yes
 BLUE         �  1  � Yes � Yes
 GREEN        �  2  � Yes � Yes
 CYAN         �  3  � Yes � Yes
 RED          �  4  � Yes � Yes
 MAGENTA      �  5  � Yes � Yes
 BROWN        �  6  � Yes � Yes
 LIGHTGRAY    �  7  � Yes � Yes
 DARKGRAY     �  8  � No  � Yes
 LIGHTBLUE    �  9  � No  � Yes
 LIGHTGREEN   � 10  � No  � Yes
 LIGHTCYAN    � 11  � No  � Yes
 LIGHTRED     � 12  � No  � Yes
 LIGHTMAGENTA � 13  � No  � Yes
 YELLOW       � 14  � No  � Yes
 WHITE        � 15  � No  � Yes
���������������������������������
 BLINK        �128  � No  � ***
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
  PutXYColorFormatArg( -1,23,BLUE,"��������������������������������������������� ");

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