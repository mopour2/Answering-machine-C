/*---------------------------------------------------------------------*/
#include <libbptr.h>

#include <Data_Bp.h>

#include <libbptr.c>


struct Data_S Data;
struct Data_Ans DataAns;

void Init_SData(struct Data_S *Data)
{
  Data->fdel=0 ;
  Data->NoBox[0]=NULL;
  Data->Ramz[0]=NULL;
//  Data->NoStu[0]=NULL;
  Data->Lname[0]=NULL;
  Data->Fname[0]=NULL;
//  Data->Tel_Box[0]=NULL;
  Data->flag_act_tel=0;      // 0 or 1 =act

  Data->CountMess=-1 ;
  Data->CountOldMess=-1 ;
}
/*----------------------------------------------*/
void Creat_Box()
{
  unsigned long temp;
  int i;
  char c,Flag;
  char NoBox[MAX_L_KEY];
   Init_SData(&Data);
   PutXYColorFormatArg( 2,24,RED," Enter New No Box ?                                ");
   gotoxy(30,24);
   i=0;
   Flag=1;
   while (i<MAX_L_KEY-1 && Flag)
   { if ((c=getchh())!=13)
     NoBox[i++]=c;
     else Flag=0;
   }
   NoBox[i++]=NULL;
  if (search(NoBox,BoxIdx)!= -1 )
  {
    PutXYColorFormatArg( 2,24,RED," This Box Found No New ?                                ");
    getchh();
    PutXYColorFormatArg( 2,24,RED,"                                                        ");
  }
  else
    {
      PutXYColorFormatArg( 2,24,RED," Enter No Ramz ?                                ");
      gotoxy(30,24);
      i=0;
      Flag=1;
      while (i<MAX_L_KEY-1 && Flag)
      {
	if ((c=getchh())!=13)
	  Data.Ramz[i++]=c;
	else Flag=0;
      }
      Data.Ramz[i++]=NULL;

//      PutXYColorFormatArg( 2,24,RED," Enter No Student ?                                ");
//      gotoxy(30,24);
//      i=0;
//      Flag=1;
//      while (i<MAX_L_KEY-1 && Flag)
//      {
//	if ((c=getchh())!=13)
//	  Data.NoStu[i++]=c;
//	else Flag=0;
//      }
//      Data.NoStu[i++]=NULL;

       Data.fdel=ActivRecCod;
       strcpy(Data.NoBox,NoBox);
       strcpy(key.key,NoBox);
       key.index=0;
       key.f=ActivRecCod;
       if(( temp=B_insert(&key,BoxIdx,&Data,sizeof(Data),BoxDat))!=-1)
	{
	  ;
	}
       else
	   {
	     PutXYColorFormatArg( 2,24,RED," No Creat      No New  BTr?                               ");
	     getchh();
	     PutXYColorFormatArg( 2,24,RED,"                                                        ");
	   }

    }

}
/*----------------------------------------------*/
Del_Box()
{
  unsigned long temp;
  int i;
  char c,Flag;
  char NoBox[MAX_L_KEY];
   Init_SData(&Data);
   PutXYColorFormatArg( 2,24,RED," Enter  No Box for Del?                                ");
   gotoxy(30,24);
   i=0;
   Flag=1;
   while (i<MAX_L_KEY-1 && Flag)
   { if ((c=getchh())!=13)
     NoBox[i++]=c;
     else Flag=0;
   }
   NoBox[i++]=NULL;
  if (search(NoBox,BoxIdx)!= -1 )
  {
    PutXYColorFormatArg( 2,24,RED," Delet No Box= %s (y/n) ?                                ",NoBox);
    c=getchh();
    if (c=='y' || c=='Y')
    {
      if ((temp=searchdelidx(NoBox,BoxIdx))!=-1)
      {
	read_data(&Data,sizeof(Data),temp,BoxDat);
	Data.fdel=DelRecCod;
	write_data(&Data,sizeof(Data),temp,BoxDat);
        PutXYColorFormatArg( 2,24,RED," This No Box= %s  Deleted                             ",NoBox);
        c=getchh();
      }
     else
         {
          PutXYColorFormatArg( 2,24,RED," System Can Not Del No Box ?                                ");
	  getchh();
          PutXYColorFormatArg( 2,24,RED,"                                                        ");
         }

    }
  }
  else
    {
      PutXYColorFormatArg( 2,24,RED," Not Found No Box ?                                ");
      getchh();
      PutXYColorFormatArg( 2,24,RED,"                                                        ");

    }
return 0;
}
/*----------------------------------------------*/
test()
{
 unsigned long temp;
  int i,ww;
  char c,Flag;
  char NoBox[MAX_L_KEY];
ww=0;
while (ww<100)
{
   i=0;
   Flag=1;
   Init_SData(&Data);
   Flag=1;
   itoa(ww,NoBox, 10);

  if (search(NoBox,BoxIdx)!= -1 )
  {
    PutXYColorFormatArg( 2,24,RED," This Box Found No New ?                                ");
    getchh();
    PutXYColorFormatArg( 2,24,RED,"                                                        ");
  }
  else
    {
       Data.fdel=ActivRecCod;
       strcpy(Data.NoBox,NoBox);
       strcpy(Data.Ramz,NoBox);
       Data.CountMess=0;
       Data.ListMess[0].TypeMess=TypeMesSing;
       Data.ListMess[1].TypeMess=TypeMesSing;
       Data.ListMess[2].TypeMess=TypeMesSing;
       strcpy(Data.ListMess[0].FileMess,"m0");
//       strcpy(Data.ListMess[1].FileMess,"m1");
//       strcpy(Data.ListMess[2].FileMess,"m2");

       strcpy(key.key,NoBox);
       key.index=0;
       key.f=ActivRecCod;

	if(( temp=B_insert(&key,BoxIdx,&Data,sizeof(Data),BoxDat))!=-1)
	{    ;
	}
       else ;
    }
  ww++;
}
return 0;
}
/*----------------------------------------------*/
showInfoBox(unsigned long temp)
{
  int i;
  char c,Flag;

  read_data(&Data,sizeof(Data),temp,BoxDat);
  PutXYColorFormatArg( 40,5,RED," No Box      : %s   ",Data.NoBox);
  PutXYColorFormatArg( 40,6,RED," Cod Ramz    : %s   ",Data.Ramz);
//  PutXYColorFormatArg( 40,7,RED," No  Student : %s   ",Data.NoStu);
  PutXYColorFormatArg( 2,24,RED," Cheng Ramz (y/n) ?                                ");
    c=getchh();

    if (c=='y' || c=='Y')
    {
      PutXYColorFormatArg( 2,24,RED," Enter New No Ramz ?                                ");
      gotoxy(30,24);
      i=0;
      Flag=1;
      while (i<MAX_L_KEY-1 && Flag)
      {
	if ((c=getchh())!=13)
	  Data.Ramz[i++]=c;
	else Flag=0;
      }
      Data.Ramz[i++]=NULL;

       PutXYColorFormatArg( 40,6,RED," Cod Ramz    : %s   ",Data.Ramz);

    }
  write_data(&Data,sizeof(Data),temp,BoxDat);
return 0;
}
/*----------------------------------------------*/
Updet_Box()
{
  unsigned long temp;
  int i;
  char c,Flag;
  char NoBox[MAX_L_KEY];
   Init_SData(&Data);
   PutXYColorFormatArg( 2,24,RED," Enter  No Box For Update?                                ");
   gotoxy(30,24);
   i=0;
   Flag=1;
   while (i<MAX_L_KEY-1 && Flag)
   { if ((c=getchh())!=13)
     NoBox[i++]=c;
     else Flag=0;
   }
   NoBox[i++]=NULL;
  if ((temp=search(NoBox,BoxIdx))== -1 )
  {
    PutXYColorFormatArg( 2,24,RED," This Box Not Found  ?                                ");
    getchh();
    PutXYColorFormatArg( 2,24,RED,"                                                        ");
  }
  else
    {
      showInfoBox(temp);

    }
   getchh();
  PutXYColorFormatArg( 40,5,RED,"                                     ");
  PutXYColorFormatArg( 40,6,RED,"                                     ");
  PutXYColorFormatArg( 40,7,RED,"                                      ");

  PutXYColorFormatArg( 2,24,RED,"                                                          ");
return 0;
}
/*----------------------------------------------*/
ReIndex()
{
  unsigned long temp;
  FILE *fpp;
  char str[100];
  int i,c;

  PutXYColorFormatArg( 2,24,RED," ReIndex (y/n) ?                                ");
    c=getchh();
    if (c=='y' || c=='Y')
    {
      system("dir");
	  strcpy(str,"del " );strcat(str,Drive);strcat(str,"Box\\Temp1.dat");
	  system(str);
	  strcpy(str,"copy " );strcat(str,Drive);strcat(str,"Box\\Box.dat ");
	  strcat(str,Drive);strcat(str,"Box\\Temp1.dat ");
	  i=system(str);

      if (i==0)
      {
	   strcpy(str,"del " );strcat(str,Drive);strcat(str,"Box\\box.dat");
	   system(str);
	   strcpy(str,"del " );strcat(str,Drive);strcat(str,"Box\\box.idx");
	   system(str);

	Creat_Bp("BOX.IDX","BOX.DAT","fc.bin",DriveName);
	strcpy(str,Drive);strcat(str,"Box\\temp1.dat");
	fpp=fopen(str,"r+b");

	if (fpp==NULL)
	{
	  printf(" File not open temp1");
	}
	else
	{

	 while(fread(&Data,sizeof(struct Data_S),1,fpp)!=0)
	 {
	   if (Data.fdel==ActivRecCod)
	   {
	      strcpy(key.key,Data.NoBox);
	      key.index=0;
	      key.f=ActivRecCod;

	      if(( temp=B_insert(&key,BoxIdx,&Data,sizeof(Data),BoxDat))!=-1)
               {
		;
               }
              else
               {
		 PutXYColorFormatArg( 2,24,RED," No Creat      NoBox In ReIndex?                              ");
                 getchh();
		 PutXYColorFormatArg( 2,24,RED,"                                                        ");
	       }
	   }else ;
         }
        }
      }
    else
      {
       PutXYColorFormatArg( 2,24,RED," Not copy box to temp1?                              ");
	 getchh();
       PutXYColorFormatArg( 2,24,RED,"                                                        ");
      }
      fclose(fpp);
    }
return 0;
}
/*----------------------------------------------*/
test2()
{
 FILE *fpp;
 unsigned long temp;
  int i,ww;
  char c,Flag;
  char NoBox[MAX_L_KEY];
  char str[100];
strcpy(str,Drive);strcat(str,"textst.d");
fpp=fopen(str,"rt");
ww=0;
i= fscanf(fpp,"%s",NoBox);
while (i!=EOF)
{

   i=0;
   Flag=1;
   Init_SData(&Data);

  if (search(NoBox,BoxIdx)!= -1 )
  {
    PutXYColorFormatArg( 2,24,RED," This Box Found No New ?                                ");
    getchh();
    PutXYColorFormatArg( 2,24,RED,"                                                        ");
  }
  else
    {
       Data.fdel=ActivRecCod;
       strcpy(Data.NoBox,NoBox);
       strcpy(Data.Ramz,NoBox);
       Data.CountMess=0;
       Data.ListMess[0].TypeMess=TypeMesGrop;
       strcpy(Data.ListMess[0].FileMess,"m0");

       strcpy(key.key,NoBox);
       key.index=0;
       key.f=ActivRecCod;

	if(( temp=B_insert(&key,BoxIdx,&Data,sizeof(Data),BoxDat))!=-1)
	{    ;
	}
       else ;
    }
i= fscanf(fpp,"%s",NoBox);
}
   fclose(fpp);
return 0;
}