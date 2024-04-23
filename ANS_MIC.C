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
#include "vlink.h"
#include <stdio.h>
#include <STDARG.H>
#include "pwrline.h"       /* applications interface (ai) header file */
#include "eventlst.h"
#define  PF 1

#include <alloc.h>
#include <STDIO.H>
#include <process.h>

/*--------------------------------*/
#include <Data_Bp.h>

int fhandle;
char Drive[100];
char DriveBox[100];
char DriveBoxV[100];
char DriveJavab[100];
char BoxIdx[100];
char BoxDat[100];
char CountVoic[100];

char AnsBoxIdx[100];
char AnsBoxDat[100];
char AnsCountVoic[100];


struct Data_S DataBox;
unsigned long PointFileBox;



#include <LibBptr.c>

#include <LibMenu.c>
#include <A_Mic_pl.c>
#include <A_Mic_fu.c>

/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		     This is  Routin get_key_menu_UD
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

get_key_menu_UD(int *select,int mux_number_select)
{

switch(getcha())
    {
	case Esc:return Esc;
	case 0 :
	       {
		 switch(getcha())
		 {

		 case LUp:
			  {
			  if (*select>0)
			    (*select)-- ;
			    else *select=mux_number_select;
			    return 1;

			  }
		case LDn:
			  {
			  if (*select<mux_number_select)
			    (*select) ++ ;
			    else *select=0;
			    return 1;
			  }

		 }

		 break;
	       }
	case Enter:
		   return 13;
   }/*end switch*/
   return 0;
}
/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		     This is  Routin get_key_menu_LR
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

get_key_menu_LR(int *select,int mux_number_select)
{

switch(getcha())
    {
	case Esc:return Esc;
	case 0 :
	       {
		 switch(getcha())
		 {

		 case LLeft:
			  {
			  if (*select>0)
			    (*select)-- ;
			    else *select=mux_number_select;
			    return 1;

			  }
		case LRight:
			  {
			  if (*select<mux_number_select)
			    (*select) ++ ;
			    else *select=0;
			    return 1;
			  }

		 }

		 break;
	       }
	case Enter:
		   return 13;
   }/*end switch*/
   return 0;
}

/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/
messag_menu(int number_menu)
{
  switch(number_menu)
  {
   case 0:
	  {
	     print_str(41,5,BLUE*16+WHITE,"        ¤¢¤úª ü‘ì ü—ø¬ ë¢÷¬ ");
	     print_str(41,6,BLUE*16+WHITE,"            ö‘÷ø‘ãõ ü—ø¬ ë¢÷¬ ");
	     print_str(41,7,BLUE*16+WHITE,"          –¢‘ú÷ªþ• ü—ø¬ ë¢÷¬ ");
	     print_str(41,8,BLUE*16+WHITE,"           –¢‘ì—÷ ü—ø¬ ë¢÷¬ ");
	     print_str(41,9,BLUE*16+WHITE,"             –‘þ‘îª ü—ø¬ ë¢÷¬ ");
	    print_str(41,10,BLUE*16+WHITE,"         .................... ");
	    print_str(41,11,BLUE*16+WHITE,"         øð¡¨‘• ô—¨þ¨ ¥ šø¤¡ ");
	   break;
	  }
   case 1:
	  {
	    print_str(5,6,WHITE+16*BLUE," ö¢¢ ’ø›¥é¤¬÷    ¢¢›õ ¯“®      ù¢ª ¯“® ’ø› ©¡•      ’ø›¢þþ‘— ");
	  }

   case 10:{
//	       print_str(32,0,GREEN*16+RED,"  ¢¡ ô‘÷“  ");
//	       print_str(0,24,RED*16+YELLOW," F1 : ñø¨ ù“ ö¢¢  ¨‘• –ú›  ");
//	       boox(0,2,79,24,2,7);
	    break;
	  }
  }
return 0;
}
/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		     This is  Routin active_select
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

active_select(int number_menu, int select)
{
 switch(number_menu)
 {
   case 0: atribut(41,5+select,30,WHITE*16);break;
   case 1:{ switch(select)
	     {
		case 0:atribut(5,6,20,RED+(WHITE*16)|128);break;
		case 1:atribut(27,6,8,RED+(WHITE*16));break;
		case 2:atribut(40,6,18,RED+(WHITE*16));break;
		case 3:atribut(62,6,12,RED+(WHITE*16));break;
	     }
	   break;
	  }

   case 2: atribut(31,7+select,19,WHITE*16);break;
 }
return 0;
}
/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		     This is  Routin deactive_select
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

deactive_select(int number_menu, int select)
{
 switch(number_menu)
 {
   case 0: atribut(41,5+select,30,BLUE*16+WHITE);break;
    case 1:{ switch(select)
	     {
		case 0:atribut(5,6,20,(BLUE*16+WHITE));break;
		case 1:atribut(27,6,8,(BLUE*16+WHITE));break;
		case 2:atribut(40,6,18,(BLUE*16+WHITE));break;
		case 3:atribut(62,6,12,(BLUE*16+WHITE));break;
	     }
	   break;
	  }

   case 2: atribut(31,7+select,19,BLUE*16+WHITE);break;

 }
return 0;
}

/*-----------------------------------------------------------------------*/





/*========================================================================*/
/*========================================================================*/
 /*------------------------------------------------------------------------*/
 initScr()
 {
   s_m.top=1;
 return 1;
 }

/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/
menu()
{
int i;
int  select=0,number_menu=0,temp_select;
int ii;
char ss[25];
char c;

 push_menu(40,4,71,12,BOX_ON,1,16*MAGENTA+WHITE,GREEN);

 messag_menu(number_menu);

 active_select(number_menu,select);

 i=20;
 while(i!=Esc)
  {
   temp_select=select;

   switch((get_key_menu_UD(&select,6)))
   {
   case 1:       /*get key --> or <-- */
	  {
	    deactive_select(number_menu,temp_select);
	    active_select(number_menu,select);
	    break;
	  }
   case Esc:  i=Esc; break;
   case Enter:
	 {
	   switch(select)
	    {
	     case 0:FuncShah("4");break;
	     case 1:FuncShah("5");break;
	     case 2:FuncShah("1");break;
	     case 3:FuncShah("2");break;
	     case 4:FuncShah("3");break;
	     case 5://FuncOther();break;
	     case 6:i=Esc ;break;
	    }
	  break;
	 }
   default :putch(BIP);break;
  }/*end switch*/
  } /*end while*/
 pop_menu();
return 0;
}

/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		      This Is  MAIN      Routin


 ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

main()
{
int i;
char ss[25];
char c;

FILE *w2;
 w2=fopen("path.ini","rt");
 if (w2==NULL)
 { printf("Not open path ");
    return 0;
 }
 clrscr();
 backgr();
 fscanf(w2,"%s",Drive);
 fclose(w2);

strcpy(DriveBox,Drive);strcat(DriveBox,"BOX\\");
strcpy(CountVoic,DriveBox);      strcat(CountVoic,"fc.bin");
strcpy(BoxDat,DriveBox);         strcat(BoxDat,"Box.dat");
strcpy(BoxIdx,DriveBox);         strcat(BoxIdx,"Box.idx");

strcpy(AnsCountVoic,DriveBox);      strcat(AnsCountVoic,"ans.bin");
strcpy(AnsBoxDat,DriveBox);         strcat(AnsBoxDat,"ans.dat");
strcpy(AnsBoxIdx,DriveBox);         strcat(AnsBoxIdx,"ans.idx");

strcpy(DriveBoxV,Drive);       strcat(DriveBoxV,"Boxv\\");
strcpy(DriveJavab,Drive);      strcat(DriveJavab,"Javab\\");



	if(init(1)==0)
	if(initScr())
	{
	  messag_menu(10);
	  menu();
	}
 clrscr();
return 0;
}
//----------------------------------------------------
 backgr()
 {
 print_str(0,0,BLUE*16+BLACK  , "±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±±²");
 print_str(0,1,BLUE*16+BLACK  , "²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°ôþŸ¤ó öõŸ¤ó ùóó ô¨“Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²Û±²");
 print_str(0,2,BLUE*16+BLACK  , "±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±±²");
 print_str(0,3,BLUE*16+BLACK  , "²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±ÛÛ±²");
 print_str(0,4,BLUE*16+BLACK  , "±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±±²");
 print_str(0,5,BLUE*16+BLACK  , "±²±²°Û±²±°Û±Û±²°Û±±²°Û±²±°Û±¯¯°Û±²±°Û±°Û±——°Û±²±°Û±²±°Û±°Û±²±°Û±²±°Û±²±±²±Û±²");
 print_str(0,6,BLUE*16+BLACK  , "±²±°Û±²±°Û±Û±²±°Û±²±°Û±²±°Û±¯¯°Û±²±°Û±°Û±²±°Û±²±° Û±°Û±°Û±²±°Û±²±°Û±²±±²±±±²");
 print_str(0,7,BLUE*16+BLACK  , "²±°Û±²±°Û±²±²±°Û±²±°Û±²±°Û±²¯¯Û±²±°Û±°Û±²±°Û±²±° Û±°¤±²Û±²±°Û±²±°Û±²±±²±±²Û±²");
 print_str(0,8,BLUE*16+BLACK  , "±²±°Û±²±°Û±Û±²±°Û±²±°Û±²±°Û±¯¯°Û±²±°Û±°Û–²±°–±²±° Û±¤Û±°Û±²±°Û±²±°Û±²±±²±±²±");
 print_str(0,9,BLUE*16+BLACK ,  "°Û±²±°Û±²±°±°Û±²±°Û±²±°Û±²¯¯¯¯¯¯¯¯±²±±²±–Û±²–° Û±°Û±¤±°²±°Û±²±°Û±²±±²±±²±±±²");
 print_str(0,10,BLUE*16+BLACK , "²±°Û±²±°Û±²±²±°Û±²±°Û±²±°Û¯²±°Û±²¯°Û±°Û±–±°Û–²±°Û±²±¤Û±°Û±²±°Û±²±°Û±²±Û±²±Û±²");
 print_str(0,11,BLUE*16+BLACK , "±²±°Û±²±°Û±Û±²±°Û±²±°Û¯¯¯¯¯¯¯¯¯¯¯¯±°Û’’’’’–––––±²¤¤¤¤¤¤°Û±°Û±²±°Û±²±°Û±²±±²±±²");
 print_str(0,12,BLUE*16+BLACK , "²±°Û±²±°Û±²±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±Û±²±Û±²");
 print_str(0,13,BLUE*16+BLACK , "±²±°Û±²±°Û±Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²“°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±±²±±²");
 print_str(0,14,BLUE*16+BLACK , "²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±²Û±²");
 print_str(0,15,BLUE*16+BLACK , "±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±±²");
 print_str(0,16,BLUE*16+BLACK , "²±°Û±²±°Û±²°Û±²±°Û±²±°Û±²±°Û±²±°Û±oo°Û±²ooÛ±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±Û±²±±²±Û±²");
 print_str(0,17,BLUE*16+BLACK , "±°Û±²±°Û±²°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±Û±²±±²±±±²");
 print_str(0,18,BLUE*16+BLACK , "±²±°Û±²±°±²±°Û±²±°Ûôôôôô±²±°üüü°ÛëëëëÛ±–±°Û–²±°§Û§°Û§²±°Û±²±°Û±²±°Û±²±±²±±²±±±Û±²");
 print_str(0,19,BLUE*16+BLACK , "²±°Û±²±°Û²±°Û±²±°Û±ôôôôô²Û±²üüüÛ±ëëëë±²–°Û±–±°Û§²§°Û§²±°ôôôôôô±²±°Û±²±Û±²±±²±±±²");
 print_str(0,20,BLUE*16+BLACK , "±²±°Û±²±°±²±°Û±²±ôôôôôôôôôôüüüüüüüëëëëëë–––––§§§§§§§§§ôôôôÛ±²ô°Û±²±°Û±²±±²±±²±Û±²");
 print_str(0,21,BLUE*16+BLACK , "²±°Û±²±°Û²±°Û±²±°ôô²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±ôôôôôôÛ±²±°Û±²±Û±²±±²±±²");
 print_str(0,22,BLUE*16+BLACK , "±²±°Û±²±°±²±°Û±²±ôô±²±°Û±o±oÛ±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±±²±±²±Û±²");
 print_str(0,23,BLUE*16+BLACK , "²±°Û±²±°Û²±°Û±²±°ôô²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±Û±²±±²±±²");
 print_str(0,24,BLUE*16+BLACK , "²±°Û±²±°Û²±°Û±²±°ôô²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±°Û±²±Û±²±±²±Û±²");
return 0;
}