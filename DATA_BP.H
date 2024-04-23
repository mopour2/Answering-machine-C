/*-----------------------------------------------------------------------*/
#define   MAX_L_KEY     20   //No Box
#define   MAX_RAMZ      20
#define   Max_Name_File 15
#define   MaxMess       500
#define   MaxOldMess    500
#define   MAX_NoSt      15
#define   MAX_NAME      25
#define   MAX_TEL       20
#define   MaxRamzMess   5


#define   TypeMesSing   1
#define   TypeMesGrop   2
#define   TypeCopyMes   3

#define Deay 31
#define Mont 12
#define MAX_COD   20


  struct ListMes
  {
    char FlagNew;             //1== New Mess 2==Old Mess
    char TypeMess;            //    TypeMesSing == 1  TypeMesGrop == 2 TypeCopyMes ==3
    char EndNoParaf;
    char FileMess[Max_Name_File];
    char Tel_mes[MAX_TEL];
    char RamzMes[MaxRamzMess];
  };
struct Data_S
{
  char fdel;
  unsigned char NoBox[MAX_L_KEY+1];
  unsigned char Ramz[MAX_RAMZ+1];
  char Lname[MAX_NAME+1];
  char Fname[MAX_NAME+1];
  char Tel_Box[MAX_TEL];
  char flag_act_tel;      // 0 or 1 =act
  int CountMess;
  int CountOldMess;
  struct ListMes ListMess[MaxMess];
  struct ListMes ListOldMess[MaxOldMess];
  char FlagMenu[30];
  char NoGrop;
  unsigned char NoBoxJanesh1[MAX_L_KEY+1];
  unsigned char NoBoxJanesh2[MAX_L_KEY+1];
};

/*-----------------------------------------------------------------------*/
// Struct erja   And  Struct Ansver
struct Erja
{
  char FileMess[Max_Name_File];
  struct date Date;
  unsigned char SendNoBox[MAX_L_KEY+1];
  unsigned char GetNoBox[MAX_L_KEY+1];
  char Type_Erja;
};
/*-----------------------------------------------------------------------*/

struct Data_Ans
{
   char fdel;
   struct date EndDateRing;
   char CountRing;
   char FileMess[Max_Name_File];
   char Tel_mes[MAX_TEL];
   char RamzMes[MaxRamzMess];

};