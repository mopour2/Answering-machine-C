#include <graphics.h>
#include <conio.h>
#include <alloc.h>
#include <dos.h>
#include <stdlib.h>
#include <string.h>
#define MAX_INT 5
#define MAX_LONG 7     /*  NUMBER DEGIT */
#define MAX_NO_BT 9
#define MAX_ADRESS 39
#define MAX_RAMZ   20
#define MAX_L_WORD 25
#define BOX_ON  1  		 /*save box of memory screen window on */
#define BOX_OFF 0  		 /*save box of memory screen window off*/

#define ONE_LINE  1  		 /*model of box 1 and  2 & 3 & 4 */

#define MAX_STACK_MENU 10
#define MIN_STACK_MENU 1
#define SHDOW          2
#define BIP            7
#define maxinput       3
#define Esc      27      		 /* value of key */
#define Enter    13
					/* Return two value*/
#define LUp    /* 0*/   72
#define LDn    /* 0*/   80
#define LLeft  /* 0*/   75                      /* <--          */
#define LRight /* 0*/   77                     /*      -->      */
#define Home   /* 0*/   71
#define End    /* 0*/   79
#define PgUp   /* 0*/   73
#define PgDn   /* 0*/   81
#define Ins    /* 0*/   82
#define Del    /* 0*/   83
#define F1     /* 0*/	59
#define F2     /* 0*/   60
#define F3     /* 0*/	61
#define F4     /* 0*/	62
#define F5     /* 0*/	63
#define F6     /* 0*/	64
#define F7     /* 0*/	65
#define F8     /* 0*/   66
#define F9     /* 0*/   67
#define F10    /* 0*/   68

				/* dark colors */
#define BLACK       0
#define	BLUE        1
#define	GREEN       2
#define	CYAN        3
#define	RED         4
#define	MAGENTA     5
#define	BROWN       6
#define	LIGHTGRAY   7
				/* light colors */
#define	DARKGRAY     8
#define	LIGHTBLUE    9
#define	LIGHTGREEN   10
#define	LIGHTCYAN    11
#define	LIGHTRED     12
#define	LIGHTMAGENTA 13
#define	YELLOW       14
#define	WHITE         15


struct stack_m
	{
	  unsigned int x1,y1,x2,y2;
	  unsigned char  *point;
	};
struct stack_menu
	 {
	  unsigned int top;
	  struct stack_m stack[MAX_STACK_MENU+1];
	 }s_m;

/*---------------------------------------------------------------------*/
/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		     This is  Routin return getch
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/
char getcha()
{
while(!kbhit())
{
}
return (getch());

}

/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		     This is  Routin Box

||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

int boox(int x1,int y1,int x2,int y2,int type_menu,unsigned int  color_box)
{
   unsigned int H_screen;
   int i;
   unsigned int CORNER_L_U,CORNER_L_D,CORNER_R_U,CORNER_R_D,U_LINE,D_LINE,L_BOX,R_BOX,ww;
   unsigned int far  *screen;
   int type_screen;

   char far *Address_video_type=(char far *)0x449;

   if(*Address_video_type==7)
     type_screen=0;
   else type_screen=1;

    screen= type_screen ? (unsigned int far *)0xb8000000l :(unsigned int far *) 0xb0000000l;
    H_screen=80;

				  /*
				      int                        char
				      1 0000000   0 XXXXXXX  <--  1 X X X X X X X
				      ---------------------       ---------------
				      int                         unsigned char
				      00000000    1 XXXXXXX <--   1 X X X X X X X
				      ---------------------       ---------------
				 */
    switch(type_menu)
    {
       case 1:
	      {   CORNER_L_U=(unsigned char )'Ú';
		  CORNER_L_D=(unsigned char )'À';
		  CORNER_R_U=(unsigned char )'¿';
		  CORNER_R_D=(unsigned char )'Ù';
		  U_LINE=(unsigned char )'Ä';
		  D_LINE=(unsigned char )'Ä';
		  L_BOX=(unsigned char )'³';
		  R_BOX=(unsigned char )'³';
		break;
	      }
       case 2:
	     {    CORNER_L_U=(unsigned char )'É';
		  CORNER_L_D=(unsigned char )'È';
		  CORNER_R_U=(unsigned char )'»';
		  CORNER_R_D=(unsigned char )'¼';
		  U_LINE=(unsigned char )'Í';
		  D_LINE=(unsigned char )'Í';
		  L_BOX=(unsigned char )'º';
		  R_BOX=(unsigned char )'º';
		break;
	      }
       case 3:
	     {     CORNER_L_U=(unsigned char )'Õ';
		  CORNER_L_D=(unsigned char )'Ô';
		  CORNER_R_U=(unsigned char )'¸';
		  CORNER_R_D=(unsigned char )'¾';
		  U_LINE=(unsigned char )'Í';
		  D_LINE=(unsigned char )'Í';
		  L_BOX=(unsigned char )'³';
		  R_BOX=(unsigned char )'³';
		break;
	      }
       case 4:
	   {      CORNER_L_U=(unsigned char )'Ö';
		  CORNER_L_D=(unsigned char )'Ó';
		  CORNER_R_U=(unsigned char )'·';
		  CORNER_R_D=(unsigned char )'½';
		  U_LINE=(unsigned char )'Ä';
		  D_LINE=(unsigned char )'Ä';
		  L_BOX=(unsigned char )'º';
		  R_BOX=(unsigned char )'º';
		break;
	      }
    }

				       /*       int screen               int
						 l               s	  s               l
						 00000000 00000000   <--  00000000 00000000
						 -----------------        -----------------
						   ^         ^	           ^           ^
						 char        color        color_box   char
				       */

	color_box<<=8;
     *(screen+x1+y1*H_screen)=CORNER_L_U | color_box;
      *(screen+x2+y1*H_screen)=CORNER_R_U | color_box ;
    *(screen+x1+y2*H_screen)=CORNER_L_D | color_box ;
    *(screen+x2+y2*H_screen)=CORNER_R_D | color_box ;

    for(i=x1+1;i<x2;i++)
    {
      *(screen+i+y1*H_screen)=U_LINE | color_box ;
      *(screen+i+y2*H_screen)=D_LINE | color_box ;
    }
    for(i=y1+1;i<y2;i++)
     {
      *(screen+x1+i*H_screen)=L_BOX | color_box ;
      *(screen+x2+i*H_screen)=R_BOX | color_box ;
     }
 return 0;
}


/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		     This is  Routin Box_color
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

int boox_color(int x1,int y1,int x2,int y2,int type_menu,unsigned int  color_box,unsigned int color )
{
   unsigned int H_screen;
   int i,k;
   unsigned int CORNER_L_U,CORNER_L_D,CORNER_R_U,CORNER_R_D,U_LINE,D_LINE,L_BOX,R_BOX,ww;
   unsigned int far  *screen;
   int type_screen;

   char far *Address_video_type=(char far *)0x449;

   if(*Address_video_type==7)
     type_screen=0;
   else type_screen=1;

    screen= type_screen ? (unsigned int far *)0xb8000000l :(unsigned int far *) 0xb0000000l;
    H_screen=80;

				 /*
				      int                        char
				      1 0000000   0 XXXXXXX  <--  1 X X X X X X X
				      ---------------------       ---------------
				      int                         unsigned char
				      00000000    1 XXXXXXX <--   1 X X X X X X X
				      ---------------------       ---------------
				 */
    switch(type_menu)
    {
       case 1:
	      {   CORNER_L_U=(unsigned char )'Ú';
		  CORNER_L_D=(unsigned char )'À';
		  CORNER_R_U=(unsigned char )'¿';
		  CORNER_R_D=(unsigned char )'Ù';
		  U_LINE=(unsigned char )'Ä';
		  D_LINE=(unsigned char )'Ä';
		  L_BOX=(unsigned char )'³';
		  R_BOX=(unsigned char )'³';
		break;
	      }
       case 2:
	     {    CORNER_L_U=(unsigned char )'É';
		  CORNER_L_D=(unsigned char )'È';
		  CORNER_R_U=(unsigned char )'»';
		  CORNER_R_D=(unsigned char )'¼';
		  U_LINE=(unsigned char )'Í';
		  D_LINE=(unsigned char )'Í';
		  L_BOX=(unsigned char )'º';
		  R_BOX=(unsigned char )'º';
		break;
	      }
       case 3:
	     {     CORNER_L_U=(unsigned char )'Õ';
		  CORNER_L_D=(unsigned char )'Ô';
		  CORNER_R_U=(unsigned char )'¸';
		  CORNER_R_D=(unsigned char )'¾';
		  U_LINE=(unsigned char )'Í';
		  D_LINE=(unsigned char )'Í';
		  L_BOX=(unsigned char )'³';
		  R_BOX=(unsigned char )'³';
		break;
	      }
       case 4:
	   {      CORNER_L_U=(unsigned char )'Ö';
		  CORNER_L_D=(unsigned char )'Ó';
		  CORNER_R_U=(unsigned char )'·';
		  CORNER_R_D=(unsigned char )'½';
		  U_LINE=(unsigned char )'Ä';
		  D_LINE=(unsigned char )'Ä';
		  L_BOX=(unsigned char )'º';
		  R_BOX=(unsigned char )'º';
		break;
	      }
    }

				       /*       int screen               int
						 l               s	  s               l
						 00000000 00000000   <--  00000000 00000000
						 -----------------        -----------------
						   ^         ^	           ^           ^
						 char        color        color_box   char
				       */
    color_box<<=8;

     /*---------------------------------------------------*/
    *(screen+x1+y1*H_screen)=CORNER_L_U | color_box;
    *(screen+x2+y1*H_screen)=CORNER_R_U | color_box ;
    *(screen+x1+y2*H_screen)=CORNER_L_D | color_box ;
    *(screen+x2+y2*H_screen)=CORNER_R_D | color_box ;
    for(i=x1+1;i<x2;i++)
    {
      *(screen+i+y1*H_screen)=U_LINE | color_box ;
      *(screen+i+y2*H_screen)=D_LINE | color_box ;
    }
    for(i=y1+1;i<y2;i++)
     {
      *(screen+x1+i*H_screen)=L_BOX | color_box ;
      *(screen+x2+i*H_screen)=R_BOX | color_box ;
     }
    /*---------------------------------------------------*/
    color<<=8;
 for (k=y1+1;k<y2;k++)
    for(i=x1+1;i<x2;i++)
      *(screen+i+k*H_screen)= color  ;

 for (k=y1+  SHDOW;k<y2 +SHDOW ;k++)
  {                                                     /*      int		     */
    *(screen+ x2 +1 + k* H_screen) &= /*4095*/1023  ;           /*     00001111 11111111 =1023*/
   }                                                    /*     ^    ^        ^char     */
                                                        /*    back  color_pen          */
    for(i=x1+1 + SHDOW;i<x2+SHDOW;i++)
      *(screen+i+(y2+1)*H_screen)   &= /* 4095*/1023  ;
return 0;
}



/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		     This is  Routin Push One Menu In Stack
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

int push_menu(int x1,int y1,int x2,int y2,char flag_box ,int type_menu,unsigned int color_box,unsigned int color)
{
   int H_screen;
   unsigned long size_of_box_menu;
   unsigned char far  *screen;
   int type_screen;

   unsigned char far *Address_video_type=(char far *)0x449;

   if(*Address_video_type==7)
     type_screen=0;
   else type_screen=1;

    screen= type_screen ? (char far *)0xb8000000l :(char far *) 0xb0000000l;
    H_screen=160;

   if(s_m.top<MAX_STACK_MENU && s_m.top>=MIN_STACK_MENU)
   {
     int i,j,k;
      s_m.stack[s_m.top].x1=x1;
      s_m.stack[s_m.top].y1=y1;
      s_m.stack[s_m.top].x2=x2;
      s_m.stack[s_m.top].y2=y2;
      size_of_box_menu=(( ((x2-x1)+SHDOW+1) * ((y2-y1)+SHDOW+1) ) * 2 )+20;
      if((s_m.stack[s_m.top].point=(char *)malloc( size_of_box_menu))!=NULL)
      {
	for (k=0,i=y1; i<=y2 + SHDOW ;i++)
	 for (j= x1*2 ;j<=( x2+SHDOW) * 2 ;j++)
	   *( (s_m.stack[s_m.top].point)+ k++) =*(screen+ i*H_screen + j);

	 s_m.top++;

	if(flag_box==1)
	  boox_color(x1,y1,x2,y2,type_menu,color_box,color);
	  else ;
       }else message("NOT ALLOCATION");
   }
   else printf("stack menu full");
return 0;
}

/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		     This is  Routin Pop One Menu Of Stack
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/
int pop_menu()
{
  unsigned char far  *screen;
   unsigned int H_screen;
   unsigned int type_screen;

   unsigned char far *Address_video_type=(char far *)0x449;

   if(*Address_video_type==7)
     type_screen=0;
   else type_screen=1;

    screen= type_screen ? (char far *)0xb8000000l :(char far *) 0xb0000000l;
    H_screen=160;

   if( s_m.top>MIN_STACK_MENU)
   {
     int i,j,x1,x2,y1,y2,k;
       s_m.top--;
      x1=s_m.stack[s_m.top].x1;
      y1=s_m.stack[s_m.top].y1;
      x2=s_m.stack[s_m.top].x2;
      y2=s_m.stack[s_m.top].y2;

       for (k=0,i=y1; i<=y2 + SHDOW ;i++)
       for (j= x1*2 ;j<=(x2+ SHDOW)*2;j++,k++)
     *(screen+ i*H_screen + j)=*( (s_m.stack[s_m.top].point)+ k) ;
     free(s_m.stack[s_m.top].point);
     s_m.stack[s_m.top].point=NULL;
   }
   else printf("stack menu empty");
return 0;
}

/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		     This is  Routin Print One String
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

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
/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		     This is  Routin cheng atribut of cordinat
		     x1,x1 of length
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

int atribut(int x1,int y1, int length,int color)
{
   int H_screen;
   char far  *screen;
   int type_screen;
   int j;

   char far *Address_video_type=(char far *)0x449;

   if(*Address_video_type==7)
     type_screen=0;
   else type_screen=1;

    screen= type_screen ? (char far *)0xb8000000l :(char far *) 0xb0000000l;
    H_screen=160;
    for(j=0;j<length;j++,x1++)
    {
     *(screen+ y1*H_screen + x1*2  +1)=color;
    }
return 0;
}
/*---------------------------------------------------------------------------*/
/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/
message(char mess[])
{
 push_menu(10,10,14+strlen(mess),14,BOX_ON,1,16*GREEN+WHITE,GREEN);
  print_str(12,12,GREEN,mess);
  delay(1000);
 pop_menu();
return 0;
}
/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

char messageYN(char mess[],char c1,char c2,char c3,char c4)
{ char c;
 push_menu(10,10,50,14,BOX_ON,1,16*GREEN+WHITE,GREEN);
  print_str(14,12,GREEN,mess);
  while( (c=getcha())!=c1 || c!=c2 || c!=c3 || c!=c4);
 pop_menu();
  return(c);
}

