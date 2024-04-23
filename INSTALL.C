#include <stdio.h>
#define  MaxDisk 4

int main(int argc,char *argv[])
{
FILE *w2;
char c;
char drive[50];
char temp[50];
 if (argc < 2 || !(strcmp(argv[1],"c:")== 0 ||strcmp(argv[1],"d:")== 0 || strcmp(argv[1],"e:")== 0 ||strcmp(argv[1],"f:")== 0))
  {
   printf ("\n    ... a:\\> install  DriveName    \n\n             Example a:\\>install c:  ");
  }
 else
 {
     system("f");
     strcpy(drive ,argv[1]);

     strcpy(temp,drive);
     strcat(temp,"\\ansvoic\\path.ini");

     w2=fopen(temp,"wt");
     if (w2==NULL)
      { printf("Not open path ");
	return 0;
      }
     fprintf(w2,"%s",drive);
     fprintf(w2,"\\ansvoic\\");
     fclose(w2);


     w2=fopen("c:\\ans1.bat","wt");
     if (w2==NULL)
      { printf("Not open path ");
	return 0;
      }
     fprintf(w2,"%s",drive);
     fprintf(w2,"\n cd\\ansvoic\\");
     fprintf(w2,"\n f");
     fprintf(w2,"\n sea w6.bmp");
     fprintf(w2,"\n ans_voic");
     fclose(w2);

     w2=fopen("c:\\ans2.bat","wt");
     if (w2==NULL)
      { printf("Not open path ");
	return 0;
      }
     fprintf(w2,"%s",drive);
     fprintf(w2,"\n cd\\ansvoic\\");
     fprintf(w2,"\n f");
     fprintf(w2,"\n sea w6.bmp");
     fprintf(w2,"\n ans_mic");
     fclose(w2);


    strcpy(temp,"md ");
    strcat(temp,drive);
    strcat(temp,"\\ansvoic");
    system(temp);

    strcpy(temp,"copy .  ");
     strcat(temp,drive);
     strcat(temp,"\\ansvoic");
    c=20;
    while (c!=27)
    {
      system(temp);
	printf("¢şû¢ ¤‘ªê ü¢şóîø ¢şû¢ ¤¤ì øş¤¢ ¤¢ ¤ ü¢ã“ í¨ş¢ ‘ê¯ó\n ");
	printf("¢şû¢¤‘ªê ¤  ESC ¢şóî‘ú—÷¤¢ --\n");
      c=getch();
    }

    system(drive);

    strcpy(temp,"cd");
    strcat(temp,"\\ansvoic");
    system(temp);

    system("arj x -v -y -r data.arj ");



 }

}