/*---------------------------------------------------------------------*/
// BTree ++ Header
/*===========================================================================*/
/*===========================================================================*/
#define   Order         50
#define   Sector_Size   512
#define   Point_Num_Nod (Order * 2 + 1)
#define   Key_Num_Nod   (Order * 2 )
#define   Space         ((2*Sector_Size)-87)
/*---------------------------------------------------------------------*/
#define   Split         1
#define   UnSplit       0
#define   Leave         0
#define   Inter_Nod     1

#define   MAX_L_KEY     20   //No Box

#define   ActivRecCod   1
#define   DelRecCod     2

#define MAX_COD   20
//typedef unsigned long  Word;

//typedef unsigned char Byte;
/*-----------------------------------------------------------------------*/
#define   Byte          unsigned char
#define   Word          unsigned int
#define   DWord         unsigned long int
#define   Off           0
#define   On            1
#define   Lock	        1
#define   UnLock        0
#define   ERR_LOCK      1
#define   ERR_OP_FILE   2

/*=======================================================================*/
/*=======================================================================*/
