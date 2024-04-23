
#include <LibBptr.c>

//**************************************************************************
char * trimL(char str[])
{
char temp[100];
int i,j;
for(i=0;str[i]==' ' && str[i]!=NULL ;i++);
for (j=0;str[i]!=NULL;i++,j++) temp[j]=str[i];
temp[j]=NULL;
strcpy(str,temp);
return str;
}

/*----------------------------------------------*/
PlayMenuBx()
{
  ClearDigits(line_number);
  err=PlayMsgDigitBreak(line_number,"MenuBx.v", DriveBox);
  if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;

}
/*----------------------------------------------*/
GetMenuBx()
{
ClearLIOA(&lioarea[line_number]);
lioarea[line_number].lio_id_delay =5;
lioarea[line_number].lio_max_digits=1;
//lioarea[line_number].lio_loop_sig=0xff;
err=GetDigits(line_number,&lioarea[line_number]);
return err;

}
/*----------------------------------------------*/
ChckMenuBx()
{
unsigned long int temp;
char NoBox[100];
if (COD_TON_BUF[line_number].buf[0]== 1)
 {
   err=PlayShka();
   return err;
 }
 else if (COD_TON_BUF[line_number].buf[0]== 2 ||COD_TON_BUF[line_number].buf[0]== 3)
 {
    NoBox[0]=COD_TON_BUF[line_number].buf[0]+2+'0';
    NoBox[1]=NULL;

  if ((temp=search(NoBox,BoxIdx))!= -1 )
     {
       strcpy(BoxLine[line_number].NoBox,NoBox);
       BoxLine[line_number].PointFile=temp;
       BoxLine[line_number].PointCurentMess=0;
       read_data(BoxLine[line_number].Data,sizeof(struct Data_S),BoxLine[line_number].PointFile,BoxDat);
      if (BoxLine[line_number].Data->CountMess< MaxMess)
      {
	LineStat[line_number].LastState=LineStat[line_number].State;
	LineStat[line_number].State=62;
	err=PlayBxBipRec();
      }
      else
       {
	LineStat[line_number].LastState=LineStat[line_number].State;
	LineStat[line_number].State=50;
	err=PlayBxFull();
       }
       if (err<=0)
	return -1;

     }
  else
   {
      LineStat[line_number].LastState=LineStat[line_number].State;
      LineStat[line_number].State=50;
      err=PlayBlNoBx();
      if (err<=0)
      return -1;
   }
 }
 else if (COD_TON_BUF[line_number].buf[0]== 4 )
 {
   LineStat[line_number].LastState=LineStat[line_number].State;
   LineStat[line_number].State=160;
   err= PlayTypNoMes();
   if (err<=0)
   return -1;
 }

// else if (COD_TON_BUF[line_number].buf[0]== 5 )
// {
//   LineStat[line_number].LastState=LineStat[line_number].State;
//   LineStat[line_number].State=54;
//   err= PlayOthrNoBx();
//   if (err<=0)
//   return -1;
// }
// else if (COD_TON_BUF[line_number].buf[0]== 6 )
// {
//   LineStat[line_number].LastState=LineStat[line_number].State;
//   LineStat[line_number].State=;
//   err= PlaySlfNoBx();
//   if (err<=0)
//   return -1;
// }

 else if (COD_TON_BUF[line_number].buf[0]== 11)
 {

   LineStat[line_number].LastState=LineStat[line_number].State;
   LineStat[line_number].State=7;
   err=PlayGr();
   if (err<=0)
   return -1;
 }
 else {

	LineStat[line_number].LastState=LineStat[line_number].State;
	LineStat[line_number].State=50;
	err=PlayBlundeNo();
	if (err<=0)
	return -1;
      }
 return err;

}

/*----------------------------------------------*/
PlayShka()
{
  ClearDigits(line_number);
  err=PlayMsgDigitBreak(line_number,"Shka.v", DriveBox);
  if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;

}
/*----------------------------------------------*/
ChckShka()
{
unsigned long int temp;
char NoBox[100];
if (COD_TON_BUF[line_number].buf[0]== 1 ||
    COD_TON_BUF[line_number].buf[0]== 2 || COD_TON_BUF[line_number].buf[0]== 3)
 {
  NoBox[0]=COD_TON_BUF[line_number].buf[0]+'0';
  NoBox[1]=NULL;

  if ((temp=search(NoBox,BoxIdx))!= -1 )
     {
       strcpy(BoxLine[line_number].NoBox,NoBox);
       BoxLine[line_number].PointFile=temp;
       BoxLine[line_number].PointCurentMess=0;
       read_data(BoxLine[line_number].Data,sizeof(struct Data_S),BoxLine[line_number].PointFile,BoxDat);
      if (BoxLine[line_number].Data->CountMess< MaxMess)
      {
	LineStat[line_number].LastState=LineStat[line_number].State;
	LineStat[line_number].State=62;
	err=PlayBxBipRec();
      }
      else
       {
	LineStat[line_number].LastState=LineStat[line_number].State;
	LineStat[line_number].State=50;
	err=PlayBxFull();
       }
       if (err<=0)
	return -1;

     }
  else
   {
      LineStat[line_number].LastState=LineStat[line_number].State;
      LineStat[line_number].State=50;
      err=PlayBlNoBx();
      if (err<=0)
      return -1;
   }
  return 0;
 }
 else if (COD_TON_BUF[line_number].buf[0]== 11 )
    {
       LineStat[line_number].LastState=LineStat[line_number].State;
       LineStat[line_number].State=50;
       err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
      if (err<=0)
       return -1;
      }
 else {

	LineStat[line_number].LastState=LineStat[line_number].State;
	LineStat[line_number].State=50;
	err=PlayBlundeNo();
	if (err<=0)
	return -1;
      }
 return err;

}

/*----------------------------------------------*/
GetShka()
{
ClearLIOA(&lioarea[line_number]);
lioarea[line_number].lio_id_delay =4;
lioarea[line_number].lio_max_digits=1;
//lioarea[line_number].lio_loop_sig=0xff;
err=GetDigits(line_number,&lioarea[line_number]);
return err;

}











/*----------------------------------------------*/
GetSlfNoBx()
{
ClearLIOA(&lioarea[line_number]);
lioarea[line_number].lio_id_delay =3;
lioarea[line_number].lio_max_digits=19;
//lioarea.lio_term_mask= '@*';             /*terminat # Digit entered*/
//lioarea[line_number].lio_loop_sig=0xff;
err=GetDigits(line_number,&lioarea[line_number]);
return err;

}

/*----------------------------------------------*/
PlaySlfNoBx()
{
  ClearDigits(line_number);
  err=PlayMsgDigitBreak(line_number,"SlfNoBx.v", DriveBox);
  if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;

}

/*----------------------------------------------*/
PlayOkBxRamz()
{
  ClearDigits(line_number);
  err=PlayMsgDigitBreak(line_number,"OkBxRamz.v", DriveBox);
  if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;


}
/*----------------------------------------------*/
PlayBlNoBx()
{
  err=PlayMsgDigitNotBreak(line_number,"BlNoBx.v", DriveBox);
  if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;

}
/*----------------------------------------------*/
ChckSlfNoBx()
{
int i;
unsigned long int temp;
char NoBox[100];

for (i=0;COD_TON_BUF[line_number].buf[i]!=11 && COD_TON_BUF[line_number].buf[i]!=NULL && i< 19;i++)
  if (COD_TON_BUF[line_number].buf[i]== 10)
    NoBox[i]='0';
  else  NoBox[i]=COD_TON_BUF[line_number].buf[i]+'0';

NoBox[i]=NULL;
if (COD_TON_BUF[line_number].buf[0]== 11)
 {

   LineStat[line_number].LastState=LineStat[line_number].State;
   LineStat[line_number].State=50;
    err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
   if (err<=0)
   return -1;
 }
else if ((temp=search(NoBox,BoxIdx))!= -1 )
     {
       LineStat[line_number].LastState=LineStat[line_number].State;
       LineStat[line_number].State=116;
       strcpy(BoxLine[line_number].NoBox,NoBox);
       BoxLine[line_number].PointFile=temp;
       BoxLine[line_number].PointCurentMess=0;
       read_data(BoxLine[line_number].Data,sizeof(struct Data_S),BoxLine[line_number].PointFile,BoxDat);
       err=PlayOkBxRamz();
       return err;
     }
  else
   {
      LineStat[line_number].LastState=LineStat[line_number].State;
      LineStat[line_number].State=72;
      err=PlayBlNoBx();
      if (err<=0)
      return -1;
   }
 return 0;
}
/*----------------------------------------------*/
PlaySlfRamz()
{
  ClearDigits(line_number);
  err=PlayMsgDigitBreak(line_number,"SlfRamz.v", DriveBox);
  if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;

}
/*----------------------------------------------*/
GetSlfRamz()
{
ClearLIOA(&lioarea[line_number]);
lioarea[line_number].lio_id_delay =3;
lioarea[line_number].lio_max_digits=19;
//lioarea.lio_term_mask= '*';             /*terminat # Digit entered*/
//lioarea.lio_loop_sig=0xff;
err=GetDigits(line_number,&lioarea[line_number]);
return err;

}
/*----------------------------------------------*/
PlaySlfOkRz()
{
  ClearDigits(line_number);
  err=PlayMsgDigitBreak(line_number,"SlfOkRz.v", DriveBox);
  if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;

}
/*----------------------------------------------*/
PlayBlNoRamz()
{
  err=PlayMsgDigitNotBreak(line_number,"BlNoRamz.v", DriveBox);
  if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;

}

/*----------------------------------------------*/
ChckSlfRamz()
{
int i;
unsigned long int temp;
char NoRamz[100];

for (i=0;COD_TON_BUF[line_number].buf[i]!=11 && COD_TON_BUF[line_number].buf[i]!=NULL && i<19;i++)
  if (COD_TON_BUF[line_number].buf[i]== 10)
    NoRamz[i]='0';
 else NoRamz[i]=COD_TON_BUF[line_number].buf[i]+'0';

NoRamz[i]=NULL;
if (COD_TON_BUF[line_number].buf[0]== 11)
 {

   LineStat[line_number].LastState=LineStat[line_number].State;
   LineStat[line_number].State=72;
    err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
   if (err<=0)
   return -1;
 }
else if (strcmp(NoRamz,BoxLine[line_number].Data->Ramz)==0)
     {
       LineStat[line_number].LastState=LineStat[line_number].State;
       LineStat[line_number].State=120;
       err=PlaySlfOkRz();
       return err;
     }
  else
   {
      LineStat[line_number].LastState=LineStat[line_number].State;
      LineStat[line_number].State=116;
      err=PlayBlNoRamz();
      if (err<=0)
      return -1;
   }
 return 0;
}
/*----------------------------------------------*/
PlayNotMesBx()
{
  err=PlayMsgDigitNotBreak(line_number,"NotMesBx.v", DriveBox);
  return err;
}
/*----------------------------------------------*/
PlaySlfNoMes()
{
  if (BoxLine[line_number].Data->CountMess<0)
  {
      LineStat[line_number].LastState=LineStat[line_number].State;
      LineStat[line_number].State=72;
      err=PlayNotMesBx();
      if (err<=0)
      return -1;
  }
 else
 {
   err=PlayMsgDigitNotBreak(line_number,"SlfNoMes.v", DriveBox);
   if (err ==-1)
   {
     LineStat[line_number].LastState=LineStat[line_number].State;
     LineStat[line_number].State=PlayGoodByState;
   }
   return err;
 }
  return 0;
}
/*----------------------------------------------*/
PlaySNoMes()
{
  char Number[50];
    itoa(BoxLine[line_number].Data->CountMess+1,Number,10);
    err=PlayMsgDigitNotBreak(line_number,Number, DriveNumber);
    return err;
}
/*----------------------------------------------*/
PlaySNoMes2()
{
  err=PlayMsgDigitNotBreak(line_number,"SNoMes2.v", DriveBox);
  return err;

}
/*----------------------------------------------*/
PlayErrorBx()
{
  err=PlayMsgDigitNotBreak(line_number,"Errorbx.v", DriveBox);
  return err;
}

/*----------------------------------------------*/
PlaySlfMenu()
{
  ClearDigits(line_number);
  err=PlayMsgDigitBreak(line_number,"SlfMenu.v", DriveBox);
  if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;

}
/*----------------------------------------------*/
PlaySTamaMes()
{
  ClearDigits(line_number);
  err=PlayMsgDigitBreak(line_number,"STamaMes.v", DriveBox);
  if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;

}

/*----------------------------------------------*/
PlayMesOne()
{
  ClearDigits(line_number);
  err=PlayMsgDigitBreak(line_number,"MesOne.v", DriveBox);
  if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;

}

/*----------------------------------------------*/
GetSlfMenu()
{
ClearLIOA(&lioarea[line_number]);
lioarea[line_number].lio_id_delay =5;
lioarea[line_number].lio_max_digits=1;
//lioarea[line_number].lio_loop_sig=0xff;
err=GetDigits(line_number,&lioarea[line_number]);
return err;

}
/*----------------------------------------------*/
ChckSlfMenu()
{
if (COD_TON_BUF[line_number].buf[0]== 1)
 {
   if (BoxLine[line_number].Data->CountMess>=0)
   {
      BoxLine[line_number].PointCurentMess=0;   //state=130
      err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
      return err;
   }
   else
     {
        LineStat[line_number].LastState=LineStat[line_number].State;
        LineStat[line_number].State=72;
	err=PlayNotMesBx();
        return -1;
     }
 }
 //*********************
 else if (COD_TON_BUF[line_number].buf[0]== 2)
 {
   if (BoxLine[line_number].PointCurentMess< BoxLine[line_number].Data->CountMess)
   {
      LineStat[line_number].LastState=LineStat[line_number].State;
      LineStat[line_number].State=130;
      BoxLine[line_number].PointCurentMess++;
      err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
      if (err<=0)
      return -1;
   }
   else
   {
      LineStat[line_number].LastState=LineStat[line_number].State;
      LineStat[line_number].State=126;
      err=PlaySTamaMes();
      if (err<=0)
      return -1;
   }
 }
//*********************
 else if (COD_TON_BUF[line_number].buf[0]== 3)
 {
  if (BoxLine[line_number].PointCurentMess > 0)
   {
      LineStat[line_number].LastState=LineStat[line_number].State;
      LineStat[line_number].State=130;
      BoxLine[line_number].PointCurentMess--;
      err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
      if (err<=0)
      return -1;
   }
  else
   {
      LineStat[line_number].LastState=LineStat[line_number].State;
      LineStat[line_number].State=126;
      err=PlayMesOne();
      if (err<=0)
      return -1;
   }
 }

//*********************
 else if (COD_TON_BUF[line_number].buf[0]== 4)
 {
  if (BoxLine[line_number].PointCurentMess >= 0)
   {
      LineStat[line_number].LastState=LineStat[line_number].State;
      LineStat[line_number].State=130;
      err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
      if (err<=0)
      return -1;
   }
   else
   {
      LineStat[line_number].LastState=LineStat[line_number].State;
      LineStat[line_number].State=72;
      err=PlayNotMesBx();
      if (err<=0)
      return -1;
   }
 }
//*********************
//*********************
 else if (COD_TON_BUF[line_number].buf[0]== 11)
 {

   LineStat[line_number].LastState=LineStat[line_number].State;
   LineStat[line_number].State=50;
   err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
   if (err<=0)
   return -1;
 }
 else {

	LineStat[line_number].LastState=LineStat[line_number].State;
	LineStat[line_number].State=126;
        err=PlayBlundeNo();
        if (err<=0)
        return -1;
      }
 return err;

}

/*----------------------------------------------*/
PlayNotIfBx()
{
   DelCurentMesOfArrey();
   err=PlayMsgDigitNotBreak(line_number,"NotIfBx.v", DriveBox);
   return err;
}
/*----------------------------------------------*/
PlaySMesII()
{ int i;
  i=BoxLine[line_number].PointCurentMess;
  ClearDigits(line_number);
  err=PlayMsgDigitBreak(line_number,BoxLine[line_number].Data->ListMess[i].FileMess, DriveBoxV);
  if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;

}

/*----------------------------------------------*/
PlaySDelMes()
{
  ClearDigits(line_number);
  err=PlayMsgDigitBreak(line_number,"sdelmes.v", DriveBox);
  if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;

}
/*----------------------------------------------*/
GetSDelMes()
{
ClearLIOA(&lioarea[line_number]);
lioarea[line_number].lio_id_delay =5;
lioarea[line_number].lio_max_digits=1;
//lioarea[line_number].lio_loop_sig=0xff;
err=GetDigits(line_number,&lioarea[line_number]);
return err;

}
/*----------------------------------------------*/
ChckSDelMes()
{
if (COD_TON_BUF[line_number].buf[0]== 7)
 {
   DelCurentMesOfArrey();
   if (BoxLine[line_number].Data->CountMess<0)
    {
      LineStat[line_number].LastState=LineStat[line_number].State;
      LineStat[line_number].State=138;
    }
   else
     {
       LineStat[line_number].LastState=LineStat[line_number].State;
       LineStat[line_number].State=126;
     }
   err=PlayDelCuMes();
   if (err<=0)
   return -1;

 }
 else err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);

  return err;
}
/*----------------------------------------------*/
PlayDelCuMes()
{
  ClearDigits(line_number);
  err=PlayMsgDigitNotBreak(line_number,"DelCuMes.v", DriveBox);
  if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;

}

/*----------------------------------------------*/
DelCurentMesOfArrey()
{
 int i;
 int ii,w;
 char ArTemp[100];
  if (BoxLine[line_number].Data->CountMess>=0)
 {
  if (BoxLine[line_number].Data->ListMess[w].TypeMess==TypeMesSing)
  {
    strcpy(ArTemp,"del ");
    strcat(ArTemp,DriveBoxV);
    strcat(ArTemp,BoxLine[line_number].Data->ListMess[w].FileMess);
    system(ArTemp);
  }
  else ;
  i=BoxLine[line_number].PointCurentMess;
  ii=BoxLine[line_number].Data->CountMess;
  for (w=i; w<ii ;w++)
  {
    BoxLine[line_number].Data->ListMess[w].TypeMess=  BoxLine[line_number].Data->ListMess[w+1].TypeMess;
    BoxLine[line_number].Data->ListMess[w].EndNoParaf=  BoxLine[line_number].Data->ListMess[w+1].EndNoParaf;
    strcpy(BoxLine[line_number].Data->ListMess[w].FileMess , BoxLine[line_number].Data->ListMess[w+1].FileMess);
    strcpy(BoxLine[line_number].Data->ListMess[w].Tel_mes , BoxLine[line_number].Data->ListMess[w+1].Tel_mes);
  }
   BoxLine[line_number].Data->CountMess--;
   if (BoxLine[line_number].PointCurentMess<=BoxLine[line_number].Data->CountMess)
    ;
   else BoxLine[line_number].PointCurentMess=BoxLine[line_number].Data->CountMess;
 }
 write_data(BoxLine[line_number].Data,sizeof(struct Data_S),BoxLine[line_number].PointFile,BoxDat);
 return 0;
}
/*----------------------------------------------*/
/*----------------------------------------------*/
/*----------------------------------------------*/
/*----------------------------------------------*/
/*----------------------------------------------*/
/*----------------------------------------------*/
/*----------------------------------------------*/
/*----------------------------------------------*/
/*----------------------------------------------*/
/*----------------------------------------------*/
PlayGrNoBx(char NoGr[])
{
  ClearDigits(line_number);
  err=PlayMsgDigitNotBreak(line_number,NoGr, DriveBoxGrV);
  if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;
}
/*----------------------------------------------*/
GetOthrNoBx()
{
ClearLIOA(&lioarea[line_number]);
lioarea[line_number].lio_id_delay =3;
lioarea[line_number].lio_max_digits=19;
//lioarea[line_number].lio_loop_sig=0xff;
err=GetDigits(line_number,&lioarea[line_number]);
return err;
}

/*----------------------------------------------*/
PlayOthrNoBx()
{
  ClearDigits(line_number);
  err=PlayMsgDigitBreak(line_number,"OthrNoBx.v", DriveBox);
  if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;
}
/*----------------------------------------------*/
PlayBxBipRec()
{
  ClearDigits(line_number);
  err=PlayMsgDigitNotBreak(line_number,"BxBipRec.v", DriveBox);
  return err;
}

/*----------------------------------------------*/
PlayBxFull()
{
  ClearDigits(line_number);
  err=PlayMsgDigitBreak(line_number,"BxFull.v", DriveBox);
  return err;
}

/*----------------------------------------------*/
ChckOthrNoBx()
{
int i;
unsigned long int temp;
char NoBox[100];

for (i=0;COD_TON_BUF[line_number].buf[i]!=11 && COD_TON_BUF[line_number].buf[i]!=NULL && i< 19;i++)
  if (COD_TON_BUF[line_number].buf[i]== 10)
    NoBox[i]='0';
  else  NoBox[i]=COD_TON_BUF[line_number].buf[i]+'0';

NoBox[i]=NULL;
if (COD_TON_BUF[line_number].buf[0]== 11)
 {

   LineStat[line_number].LastState=LineStat[line_number].State;
   LineStat[line_number].State=50;
    err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
   if (err<=0)
   return -1;
 }
else if ((temp=search(NoBox,BoxIdx))!= -1 )
     {
       strcpy(BoxLine[line_number].NoBox,NoBox);
       BoxLine[line_number].PointFile=temp;
       BoxLine[line_number].PointCurentMess=0;
       read_data(BoxLine[line_number].Data,sizeof(struct Data_S),BoxLine[line_number].PointFile,BoxDat);
      if (BoxLine[line_number].Data->CountMess< MaxMess)
      {
	LineStat[line_number].LastState=LineStat[line_number].State;
	LineStat[line_number].State=57;
	err=PlayGrNoBx(NoBox);
      }
      else
       {
	LineStat[line_number].LastState=LineStat[line_number].State;
	LineStat[line_number].State=50;
	err=PlayBxFull();
       }
       if (err<=0)
	return -1;

     }
  else
   {
      LineStat[line_number].LastState=LineStat[line_number].State;
      LineStat[line_number].State=50;
      err=PlayBlNoBx();
      if (err<=0)
      return -1;
   }
  return 0;
}
/*----------------------------------------------*/
RecMessBx()
{
 char Temp[100];
 char Temp2[100];

    ClearLIOA(&lioarea[line_number]);

//  lioarea[line_number].lio_comp_rate   = bitrate;      /* compression rate */
//  lioarea[line_number].lio_max_sil     = 5;  //15
//  lioarea[line_number].lio_ctrl_flags  = 2;            /* set beep */

    lioarea[line_number].lio_term_mask   = 0x1;       /* terminate on all*/
    lioarea[line_number].lio_term_digit   = 11;         /* terminate on *   */
    lioarea[line_number].lio_max_time    =30;     /*  time limit Sec*/
    lioarea[line_number].lio_byte_count  =300000 ;         /* clear max bytes */

 itoa(line_number,Temp2,10);
 strcpy(Temp,"Temp");
 strcat(Temp,Temp2);
 strcat(Temp,".v");

 err=RecMsgDigitBreak(line_number,Temp,DriveBoxV);
return 0;
//+ return err;
}
/*----------------------------------------------*/
PlayOthrDlSv()
{
 ClearDigits(line_number);
  err=PlayMsgDigitBreak(line_number,"OthrDlSv.v", DriveBox);
  if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;
}
/*----------------------------------------------*/
GetOthrDlSv()
{
ClearLIOA(&lioarea[line_number]);
lioarea[line_number].lio_id_delay =4;
lioarea[line_number].lio_max_digits=1;
//lioarea.lio_loop_sig=0xff;
err=GetDigits(line_number,&lioarea[line_number]);
return err;
}
/*----------------------------------------------*/
ReadFC(unsigned long int *L)
{
int i;
unsigned int LL=0;
 if ( (FCountVoic= fopen(CountVoic,"r+b"))== NULL )
   return 0;
 else
 {
   fseek(FCountVoic,sizeof(unsigned long int  ),SEEK_SET);
   i=fread(&LL,sizeof(unsigned long int),1,FCountVoic);
   *L=LL;
   fclose(FCountVoic);
   return(i);
 }
}

/*----------------------------------------------*/
WritFC(unsigned long int L)
{
int i;
 if ( (FCountVoic= fopen(CountVoic,"r+b"))== NULL )
   return 0;
 else
 {
   fseek(FCountVoic,sizeof(unsigned long int  ),SEEK_SET);
   i=fwrite(&L,sizeof(unsigned long int),1,FCountVoic);
   fclose(FCountVoic);
   return(i);
 }

}
/*----------------------------------------------*/
PlayOthrSave()
{
 struct date d;
 unsigned long int L;
 int i;
 char Temp[100];
 char Temp2[100];
 char Temp3[100];
 char Temp4[100];
 char Temp5[20];
 char TempRamz[10];

 itoa(line_number,Temp2,10);
 strcpy(Temp,"Temp");
 strcat(Temp,Temp2);
 strcat(Temp,".v");

 strcpy(Temp3,"copy ");
 strcat(Temp3,DriveBoxV);
 strcat(Temp3,Temp);
 strcat(Temp3," ");
 strcat(Temp3,DriveBoxV);
  i=random(99);
 itoa(i,TempRamz,10);

  if (ReadFC(&L)==0)
  {
  }


  if (L>120000l)
    L=0;


  L++;


  ltoa(L,Temp2,10);
  strcpy(Temp5,Temp2);
//  strcat(Temp5,".");
  getdate(&d);

//  itoa(d.da_year,Temp2,10);
//  i=strlen(Temp2);
//  Temp4[0]=Temp2[i-1];
//  Temp4[1]=NULL;
    Temp4[0]=NULL;
  itoa(d.da_mon,Temp2,10);
  if (strlen(Temp2)<2)
  {
   Temp4[0]='0';
   Temp4[1]=NULL;
  }

  strcat(Temp4,Temp2);
  strcat(Temp5,Temp4);
  strcat(Temp3,Temp5);
  strcat(Temp3,"  > NULL");
  if(system(Temp3)==0)
  if (BoxLine[line_number].Data->CountMess < MaxMess)
  {
      if (WritFC(L)==0)
    {
     err=PlayMsgDigitBreak(line_number,"NotSavMes.v", DriveBox);
     LineStat[line_number].LastState=LineStat[line_number].State;
     LineStat[line_number].State=194;
     return -1;
    }

    BoxLine[line_number].Data->CountMess++;
    i=BoxLine[line_number].Data->CountMess;
    strcpy(BoxLine[line_number].Data->ListMess[i].FileMess ,Temp5 );

    strcpy(BoxLine[line_number].Data->ListMess[i].RamzMes ,TempRamz);

    BoxLine[line_number].Data->ListMess[i].TypeMess=TypeMesSing;
    BoxLine[line_number].Data->ListMess[i].EndNoParaf=0;

    if (write_data(BoxLine[line_number].Data,sizeof(struct Data_S),BoxLine[line_number].PointFile,BoxDat))
    {
       err=PlayMsgDigitBreak(line_number,"OthrSave.v", DriveBox);
       return err;
    }
    else  err=PlayMsgDigitBreak(line_number,"NotSavMes.v", DriveBox);
//     saveErjaMes()
  }
  else  err=PlayMsgDigitBreak(line_number,"BxFull.v", DriveBox);
  else  err=PlayMsgDigitBreak(line_number,"NotSavMes.v", DriveBox);
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=194;
   return -1;
}
/*----------------------------------------------*/
PlayOthrRep()
{
 char Temp[100];
 char Temp2[100];
 itoa(line_number,Temp2,10);
 strcpy(Temp,"Temp");
 strcat(Temp,Temp2);
 strcat(Temp,".v");

  err=PlayMsgDigitBreak(line_number,Temp, DriveBoxV);
   return err;
}
/*----------------------------------------------*/
PlayOthrDl()
{

  err=PlayMsgDigitBreak(line_number,"OthrDl.v", DriveBox);
   return err;
}
/*----------------------------------------------*/
/*----------------------------------------------*/
ChckOthrDlSv()
{
 if (COD_TON_BUF[line_number].buf[0]== 1)
 {
   err=PlayOthrSave();
   return err;
 }
 else if (COD_TON_BUF[line_number].buf[0]== 2)
 {
   LineStat[line_number].LastState=LineStat[line_number].State;
   LineStat[line_number].State=64;
   err=PlayOthrRep();
   if (err<=0)
   return -1;
 }
 else if (COD_TON_BUF[line_number].buf[0]== 3)
 {
   LineStat[line_number].LastState=LineStat[line_number].State;
   LineStat[line_number].State=62;
   err=PlayBxBipRec();
   if (err<=0)
   return -1;
 }

 else if (COD_TON_BUF[line_number].buf[0]== 11)
 {
   LineStat[line_number].LastState=LineStat[line_number].State;
   LineStat[line_number].State=50;
   err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
   if (err<=0)
    return -1;
 }

 else {

	LineStat[line_number].LastState=LineStat[line_number].State;
	LineStat[line_number].State=64;
	err=PlayBlundeNo();
	if (err<=0)
	return -1;
      }
 return err;
}
/*----------------------------------------------*/
SplitDig3(char str[])
{
 int i,j;
// char str[100];
// strcpy(str,"3002004000005006");
 Buf_Dig3[line_number].countDig3=0;
 for (i=0;str[i]!=NULL && i<=18 ;i++);
 i--;

 while(i>-1 && Buf_Dig3[line_number].countDig3< 6)
 {
  for (j=2;j > -1 && i > -1; j--,i--)
  Buf_Dig3[line_number].Dig3[Buf_Dig3[line_number].countDig3][j]=str[i];
  Buf_Dig3[line_number].Dig3[Buf_Dig3[line_number].countDig3][3]=NULL;
  if (j>-1 && i==-1)
   {
      for (;j > -1 ; j--)
	Buf_Dig3[line_number].Dig3[Buf_Dig3[line_number].countDig3][j]=' ';
     trimL(Buf_Dig3[line_number].Dig3[Buf_Dig3[line_number].countDig3]);
   }
   Buf_Dig3[line_number].flagDig3[Buf_Dig3[line_number].countDig3]=0;
  if (i>-1)
  {
   Buf_Dig3[line_number].countDig3++;
  }
  else;
 }
return 0;
}

/*----------------------------------------------*/
PlayGNoMes()
{
 ClearDigits(line_number);
  SplitDig3(BoxLine[line_number].Data->ListMess[BoxLine[line_number].Data->CountMess].FileMess);
  err=PlayMsgDigitBreak(line_number,"GNoMes.v", DriveBox);


 if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;
}

/*----------------------------------------------*/
PlayNo()
{
 unsigned int temp;
 char pas[10];
 char Stemp[20];
 // ClearDigits(line_number);
 if( Buf_Dig3[line_number].countDig3!=-1)
 {
   if (Buf_Dig3[line_number].flagDig3[Buf_Dig3[line_number].countDig3]==1)
   {
     strcpy(pas,"p");
     strcat(pas,itoa(Buf_Dig3[line_number].countDig3,Stemp,10));
     err=PlayMsgDigitNotBreak(line_number,pas, DriveNumber);
     Buf_Dig3[line_number].countDig3--;
   }
   else {
	  temp=atoi(Buf_Dig3[line_number].Dig3[Buf_Dig3[line_number].countDig3]);
	  if (temp==0)
	  {
	   err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
	   Buf_Dig3[line_number].countDig3--;
	  }
	  else
	  {
	    itoa(temp,Stemp,10);
	    err=PlayMsgDigitBreak(line_number,Stemp, DriveNumber);
	    Buf_Dig3[line_number].flagDig3[Buf_Dig3[line_number].countDig3]=1;
	  }
	}

   if (err ==-1)
    {
     LineStat[line_number].LastState=LineStat[line_number].State;
     LineStat[line_number].State=PlayGoodByState;
    }
   return -1;
  }
 else return 0;

}
/*----------------------------------------------*/
PlayGRamzMes()
{
 ClearDigits(line_number);
  SplitDig3(BoxLine[line_number].Data->ListMess[BoxLine[line_number].Data->CountMess].RamzMes);
  err=PlayMsgDigitBreak(line_number,"GNoRamz.v", DriveBox);

 if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;
}
/*----------------------------------------------*/
PlayOkGRamzMes()
{
 ClearDigits(line_number);
  err=PlayMsgDigitBreak(line_number,"OkGRamz.v", DriveBox);
 if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;
}

/*----------------------------------------------*/
GetOkGRamzMes()
{
ClearLIOA(&lioarea[line_number]);
lioarea[line_number].lio_id_delay =4;
lioarea[line_number].lio_max_digits=1;
//lioarea.lio_loop_sig=0xff;
err=GetDigits(line_number,&lioarea[line_number]);
return err;
}

/*----------------------------------------------*/
ChckOkGRamzMes()
{
if (COD_TON_BUF[line_number].buf[0]== 1)
 {
       LineStat[line_number].LastState=LineStat[line_number].State;
       LineStat[line_number].State=79;
       err=PlayIfNoTel();
       if (err<=0)
	return -1;
 }
else if (COD_TON_BUF[line_number].buf[0]== 2)
 {
       LineStat[line_number].LastState=LineStat[line_number].State;
       LineStat[line_number].State=68;
       err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
       if (err<=0)
	return -1;
 }

 else {
	LineStat[line_number].LastState=LineStat[line_number].State;
	LineStat[line_number].State=74;
	err=PlayBlundeNo();
	if (err<=0)
	return -1;
      }

  return err;
}
/*----------------------------------------------*/
PlayIfNoTel()
{
 ClearDigits(line_number);
  err=PlayMsgDigitBreak(line_number,"Ifnotel.v", DriveBox);
 if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;
}
/*----------------------------------------------*/
GetIfNoTel()
{
ClearLIOA(&lioarea[line_number]);
lioarea[line_number].lio_id_delay =5;
lioarea[line_number].lio_max_digits=19;
//lioarea.lio_term_mask= '@*';             /*terminat # Digit entered*/
//lioarea[line_number].lio_loop_sig=0xff;
err=GetDigits(line_number,&lioarea[line_number]);
return err;
}
/*----------------------------------------------*/
ChckNoTel()
{
int i;
unsigned long int temp;
char NoTel[100];

for (i=0;COD_TON_BUF[line_number].buf[i]!=11 && COD_TON_BUF[line_number].buf[i]!=NULL && i< 19;i++)
  if (COD_TON_BUF[line_number].buf[i]== 10)
    NoTel[i]='0';
  else  NoTel[i]=COD_TON_BUF[line_number].buf[i]+'0';

NoTel[i]=NULL;
if (COD_TON_BUF[line_number].buf[0]== 11)
 {
   LineStat[line_number].LastState=LineStat[line_number].State;
   LineStat[line_number].State=196;
   err=PlayGoodBy();
   if (err<=0)
   return -1;
 }
else if (strlen(NoTel) >= 3)
    {
       i=BoxLine[line_number].Data->CountMess;
       strcpy(BoxLine[line_number].Data->ListMess[i].Tel_mes ,NoTel);
      LineStat[line_number].LastState=LineStat[line_number].State;
      LineStat[line_number].State=82;
      SplitDig3(NoTel);
      err=PlayMsgDigitBreak(line_number,"youtel.v", DriveBox);
     if (err<=0)
      return -1;
    }
    else
     {
      LineStat[line_number].LastState=LineStat[line_number].State;
      LineStat[line_number].State=196;
      err=PlayGoodBy();
      if (err<=0)
      return -1;
    }
 return 0;
}
/*----------------------------------------------*/
PlayOkNoTel()
{
 ClearDigits(line_number);
  err=PlayMsgDigitBreak(line_number,"Oktel.v", DriveBox);
 if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;
}

/*----------------------------------------------*/
GetOkNoTel()
{
ClearLIOA(&lioarea[line_number]);
lioarea[line_number].lio_id_delay =4;
lioarea[line_number].lio_max_digits=1;
//lioarea.lio_loop_sig=0xff;
err=GetDigits(line_number,&lioarea[line_number]);
return err;
}

/*----------------------------------------------*/
ChckOkNoTel()
{
if (COD_TON_BUF[line_number].buf[0]== 1)
 {

       write_data(BoxLine[line_number].Data,sizeof(struct Data_S),BoxLine[line_number].PointFile,BoxDat);

       LineStat[line_number].LastState=LineStat[line_number].State;
       LineStat[line_number].State=196;
       err=PlayGoodBy();
       if (err<=0)
	return -1;
 }
else if (COD_TON_BUF[line_number].buf[0]== 2)
 {
       LineStat[line_number].LastState=LineStat[line_number].State;
       LineStat[line_number].State=78;
       err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
       if (err<=0)
	return -1;
 }
else if (COD_TON_BUF[line_number].buf[0]== 11)
 {
       LineStat[line_number].LastState=LineStat[line_number].State;
       LineStat[line_number].State=196;
       err=PlayGoodBy();
       if (err<=0)
	return -1;
 }

 else {
	LineStat[line_number].LastState=LineStat[line_number].State;
	LineStat[line_number].State=83;
	err=PlayBlundeNo();
	if (err<=0)
	return -1;
      }

  return err;
}

/*----------------------------------------------*/
/*----------------------------------------------*/
/*----------------------------------------------*/
/*----------------------------------------------*/
/*----------------------------------------------*/
/*----------------------------------------------*/
/*----------------------------------------------*/
/*----------------------------------------------*/
/*----------------------------------------------*/
/*----------------------------------------------*/
/*----------------------------------------------*/
PlayTypNoMes()
{
 ClearDigits(line_number);
  err=PlayMsgDigitBreak(line_number,"TypNoMes.v", DriveBox);
 if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;
}

/*----------------------------------------------*/
GetTypNoMes()
{
ClearLIOA(&lioarea[line_number]);
lioarea[line_number].lio_id_delay =4;
lioarea[line_number].lio_max_digits=8;
//lioarea.lio_loop_sig=0xff;
err=GetDigits(line_number,&lioarea[line_number]);
return err;
}
/*----------------------------------------------*/
ChckTypNoMes()
{ int i;
unsigned long int temp;
char NoMes[100];

for (i=0;COD_TON_BUF[line_number].buf[i]!=11 && COD_TON_BUF[line_number].buf[i]!=NULL && i< 19;i++)
  if (COD_TON_BUF[line_number].buf[i]== 10)
    NoMes[i]='0';
  else  NoMes[i]=COD_TON_BUF[line_number].buf[i]+'0';

NoMes[i]=NULL;

if (COD_TON_BUF[line_number].buf[0]== 11)
 {

   LineStat[line_number].LastState=LineStat[line_number].State;
   LineStat[line_number].State=50;
    err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
   if (err<=0)
   return -1;
 }
else if ((temp=search(NoMes,AnsBoxIdx))!= -1 )
     {
       LineStat[line_number].LastState=LineStat[line_number].State;
       LineStat[line_number].State=162;
       AnsBoxLine[line_number].PointFile=temp;
       read_data(AnsBoxLine[line_number].DataAns,sizeof(struct Data_Ans),AnsBoxLine[line_number].PointFile,AnsBoxDat);
       err=PlayTypNoRamz();
       return err;
     }
  else
   {
      LineStat[line_number].LastState=LineStat[line_number].State;
      LineStat[line_number].State=194;
      err=PlayMsgDigitBreak(line_number,"NotAns.v", DriveBox);
      if (err<=0)
      return -1;
   }
 return 0;

}
/*----------------------------------------------*/
PlayTypNoRamz()
{
 ClearDigits(line_number);
  err=PlayMsgDigitBreak(line_number,"TypNoRmz.v", DriveBox);
 if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;
}

/*----------------------------------------------*/
GetTypNoRamz()
{
ClearLIOA(&lioarea[line_number]);
lioarea[line_number].lio_id_delay =4;
lioarea[line_number].lio_max_digits=3;
//lioarea.lio_loop_sig=0xff;
err=GetDigits(line_number,&lioarea[line_number]);
return err;
}
/*----------------------------------------------*/
ChckTypNoRamz()
{ int  i;
unsigned long int temp;
char NoRamz[100];
char AnsArr[100];
for (i=0;COD_TON_BUF[line_number].buf[i]!=11 && COD_TON_BUF[line_number].buf[i]!=NULL && i< 19;i++)
  if (COD_TON_BUF[line_number].buf[i]== 10)
    NoRamz[i]='0';
  else  NoRamz[i]=COD_TON_BUF[line_number].buf[i]+'0';

NoRamz[i]=NULL;

if (COD_TON_BUF[line_number].buf[0]== 11)
 {

   LineStat[line_number].LastState=LineStat[line_number].State;
   LineStat[line_number].State=50;
    err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
   if (err<=0)
   return -1;
 }
else if (strcmp(NoRamz,AnsBoxLine[line_number].DataAns->RamzMes)==0 )
     {
       LineStat[line_number].LastState=LineStat[line_number].State;
       LineStat[line_number].State=194;
       if ( AnsBoxLine[line_number].DataAns->CountRing<5)
       {
	 AnsBoxLine[line_number].DataAns->CountRing++;
	 write_data(AnsBoxLine[line_number].DataAns,sizeof(struct Data_Ans),AnsBoxLine[line_number].PointFile,AnsBoxDat);
       }
       strcpy(AnsArr,AnsBoxLine[line_number].DataAns->FileMess);
       strcat(AnsArr,".a");
       err=PlayMsgDigitBreak(line_number,AnsArr, DriveJavab);
       return err;
     }
  else
   {
      LineStat[line_number].LastState=LineStat[line_number].State;
      LineStat[line_number].State=162;
      err=PlayMsgDigitBreak(line_number,"blAnsRmz.v", DriveBox);
      if (err<=0)
      return -1;
   }
 return 0;

}
