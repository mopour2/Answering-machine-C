#define Max_Time 100
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
int record(int ch,char filename[],char Drive[])
   {unsigned long BB;
   int ton;
   char temp[100];
   time_t tnow;
   time_t StartTime;
   time(&StartTime);
   strcpy(temp,Drive);strcat(temp,filename);

 if ((fhandle=creat(temp,  S_IWRITE)) == -1)
     {
//       printf("\nERROR: can't open file");
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
	time(&tnow);
	if ((tnow - StartTime >Max_Time))
	   {
	    VL_RSTOP(ch);
	    close(fhandle);
	   }
	  if ((ton = VL_GETDTMF(ch))!=0)
	   printf("\n Key=%d ",ton);
	 }
VL_RSTOP(ch);
close(fhandle);
if( getch()==0)getch();
return 0;
}

//**************************************************************************
//**************************************************************************
//**************************************************************************
int play(int ch,char filename[],char Drive[])
   {
   int ton;
   char temp[100];
   strcpy(temp,Drive);strcat(temp,filename);

    if ((fhandle=open(temp, O_RDONLY)) == -1)
     {
  //     printf("\nERROR: can't open file");
       return 0;
     }
    VL_PLAY(ch, fhandle, 0l);
//    printf("\nPlaying");
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
if( getch()==0)getch();
return 0;
}

//**************************************************************************
