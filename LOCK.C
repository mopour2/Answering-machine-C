#include<shegerd.h>
//#include<stdio.h>
//#include<string.h>
//#include<conio.h>

int ChekLock()
{

  char sr[128];
  unsigned err;
  int i,ba;
  clrscr();
  err = ShegerdInit(1,54615,"po");
  if(err){
     printf(" ¨ ω’ͺχ ¬χ  ρκμ");
    return 0;
  }
  err = ShegerdRS((char far *)sr);
  if(err){
	printf("  ¨ ω’ͺ ¬χ ωͺ ρκμ ");
    return 0;
  }
  err = ShegerdRN(&i);
  if(err){
	printf("  ¨ ω’ͺ ¬χ ωͺ ρκμ ");
    return 0;
  }
  err = ShegerdRID((char far *)sr);
  if(err){
	printf("  ¨ ω’ͺ ¬χ ωͺ ρκμ ");
    return 0;
  }
  err=ShegerdRD(0,47,(char far *)sr);
  if(err){
     printf("  ¨ ω’ͺ ¬χ ωͺ ρκμ ");
    return 0;
  }

   if (strcmp("mohamadrezapouremadreihanekamalpouralipouremad00",sr)==0)
  {
    return 1;
  }
  else printf("¨ ω’ͺ ¬χ ωͺ ρκμ ");

  return 0;
}