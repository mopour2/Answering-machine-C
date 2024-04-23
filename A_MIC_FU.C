#define MaxRow  5

//*******************************************************
FuncShah(char NoBox[])
{
  print_str(0,24,RED*16+YELLOW," F1 : Òê¯® ˘ì ˆ¢ê¢ †®ëï ñ˙õ  ");
  if ((PointFileBox=search(NoBox,BoxIdx))!= -1 )
     {
       read_data(&DataBox,sizeof(struct Data_S),PointFileBox,BoxDat);

      if (DataBox.CountMess<=-1)
//	play(not mess in box);
	;
      else
      {
	push_menu(30,6,50,8+MaxRow,BOX_ON,1,16*MAGENTA+WHITE,GREEN);
	popup(&DataBox);
	pop_menu();
      }
    }
  print_str(0,24,RED*16+YELLOW,"                             ");
return 0;
}
//******************************************************
/*----------------------------------------------*/
AddDataToAns(struct Data_S *Data,int RowAr)
{
   struct Data_Ans DataAns;


       DataAns.fdel=ActivRecCod;
       getdate(&DataAns.EndDateRing);
       DataAns.CountRing=0;
       strcpy(DataAns.FileMess,Data->ListMess[RowAr].FileMess);
       strcpy(DataAns.Tel_mes,Data->ListMess[RowAr].Tel_mes);
       strcpy(DataAns.RamzMes,Data->ListMess[RowAr].RamzMes);

       strcpy(key.key,Data->ListMess[RowAr].FileMess);
       key.index=0;
       key.f=ActivRecCod;
       if(( B_insert(&key,AnsBoxIdx,&DataAns,sizeof(struct Data_Ans),AnsBoxDat))!=-1)
	{
	  ;
	}
       else
	   {
	     message(" No Creat      No New  BTr?                               ");
	   }

return 0;
}
/*----------------------------------------------*/
DelCurentMesOfArrey(struct Data_S *Data,int *RowAr)

{
 int i;
 int ii,w;
 char ArTemp[100];
  if (Data->CountMess>=0)
 {
 }
  else return 0;
  i=*RowAr;
  ii=Data->CountMess;
  for (w=i; w<ii ;w++)
  {
    Data->ListMess[w].TypeMess= Data->ListMess[w+1].TypeMess;
    Data->ListMess[w].EndNoParaf= Data->ListMess[w+1].EndNoParaf;
    strcpy(Data->ListMess[w].FileMess , Data->ListMess[w+1].FileMess);
    strcpy(Data->ListMess[w].RamzMes , Data->ListMess[w+1].RamzMes);
    strcpy(Data->ListMess[w].Tel_mes ,  Data->ListMess[w+1].Tel_mes);
  }
   Data->CountMess--;
   if (*RowAr<=Data->CountMess)
    ;
   else *RowAr=Data->CountMess;
 write_data(Data,sizeof(struct Data_S),PointFileBox,BoxDat);
 return 0;
}
//******************************************************

save_ans(struct Data_S *Data,int *RowAr)
{
AddDataToAns(Data,*RowAr);
DelCurentMesOfArrey(Data,RowAr);
return 0;
}
//******************************************************
MenuOkAns(struct Data_S *Data,int *RowAr,char temp[])
{
int i;
int  select=3,number_menu=1,temp_select;
int ii;
char ss[25];
char c;

 push_menu(4,4,75,8,BOX_ON,1,16*MAGENTA+WHITE,GREEN);

 messag_menu(number_menu);

 active_select(number_menu,select);

 i=20;
 while(i!=Esc)
  {
   temp_select=select;

   switch((get_key_menu_LR(&select,3)))
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
	     case 0:i=Esc ;break;
	     case 1:Rec_Ans(Data,RowAr,temp);
	     case 2:{
		     push_menu(30,7,50,9,BOX_ON,1,16*MAGENTA+WHITE,GREEN);
		     print_str(31,8,RED*16+WHITE,"  íê¯õ ©°ï Òëü §¢  ");
		     play(1,temp,DriveJavab);
		     pop_menu();
		     break;
		    }
	     case 3:save_ans(Data,RowAr); pop_menu();return 3;
	    }
	  break;
	 }
   default :putch(BIP);break;
  }/*end switch*/
 } /*end while*/
 pop_menu();
return 0;
}
//**************************************************************
 Rec_Ans(struct Data_S *Data,int *RowAr,char temp[],char temp2[])
 {

 strcpy(temp,"anstemp.v");
 message("¢˛˛¯ì ê§ Òê¯® †®ëï Î¯ì ˆ¢˛˜™ •ê ¢„ì ëÍØÛ");


 play(1,"bip.v",DriveBox);

 push_menu(25,7,64,10,BOX_ON,1,16*MAGENTA+WHITE,GREEN);
 print_str(26,8,RED*16+WHITE,"   ¢™ëì˛ı ëı™ ¸ê¢¨ ØìÆ Òëü §¢ Ùó®˛®   ");
 print_str(26,9,RED*16+WHITE,"        ¢˛˚¢§ë™Í¸¢˛ÛÓ Ùëıóê ñ˙õ       ");

 record(1,temp,DriveJavab);

 pop_menu();
return 0;
}
//**************************************************************
 Oper_ans(struct Data_S *Data,int *RowAr)
 {
 char  temp[100];
  char temp2[100];
 strcpy(temp,"anstemp.v");
 strcpy(temp2,"copy ");
 strcat(temp2,DriveJavab);
 strcat(temp2,temp);
 strcat(temp2,"  ");
 strcat(temp2,DriveJavab);
 strcat(temp2,Data->ListMess[*RowAr].FileMess);
 strcat(temp2,".a");
 strcat(temp2,"   >Null");

 Rec_Ans(Data,RowAr,temp,temp2);

 if (MenuOkAns(Data,RowAr,temp)==3)
   system(temp2);
 else ;
return 0;
 }
//*******************************************************
ShowData(struct Data_S *Data,int Start,int RowAr)
{   int i,j;
char temp[20];
print_str(39,6,BLUE*16+WHITE,"ÙëÁ˛ï¢ê¢„ó");
print_str(32,6,BLUE*16+WHITE,itoa(Data->CountMess+1,temp,10));
for(i=0;i<=MaxRow ;i++)
{
 print_str(31,7+i,BLUE*16+WHITE,"                   ");
}

for(i=0;i<=MaxRow && i+Start<=Data->CountMess;i++)
{
 print_str(31,7+i,BLUE*16+WHITE,"                   ");
 print_str(31,7+i,BLUE*16+WHITE,Data->ListMess[Start+i].FileMess);
}
return 0;
}

//*******************************************************
popup(struct Data_S *Data)
{
int Start=0, RowAr=0;
int RowMenu,flag=1,temp_RowMenu;
RowMenu=0;

ShowData(Data,Start,RowAr);
active_select(2,0);
while (flag==1)
{
temp_RowMenu=RowMenu;

 switch(getcha())
    {

	case Esc:flag=0;break;
	case 0 :
	       {
		 switch(getcha())
		 {

		 case LUp:
			  {
			  if (RowAr>0)
			   RowAr--;
			  else ;

			  if (RowMenu>0)
			    RowMenu-- ;
			    else{
				if (Start>0)
				 Start--;
				else ;
				}
			    ShowData(Data,Start,RowAr);
			    deactive_select(2,temp_RowMenu);
			    active_select(2,RowMenu);
			    break;
			  }
		case LDn:
			  {
			    if (RowAr<Data->CountMess)
				 RowAr++;
			    else ;

			  if (RowMenu<MaxRow && RowMenu<Data->CountMess)
			    RowMenu++ ;
			  else{
				if (Start+MaxRow<Data->CountMess)
				 Start++;
				else ;
			      }

			    ShowData(Data,Start,RowAr);
			    deactive_select(2,temp_RowMenu);
			    active_select(2,RowMenu);
			    break;
			 }
		  case F1:
			  {
			    Oper_ans(Data,&RowAr);
			    ShowData(Data,Start,RowAr);
			    active_select(2,RowMenu);
			  }
		 } //end switch

		 break;
	       } //end case

	case Enter:
		   {
		   play(1,Data->ListMess[RowAr].FileMess,DriveBoxV);
		   }
   }/*end switch*/
}
return 0;
}
