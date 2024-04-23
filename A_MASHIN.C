
void InitStateHandler(stateHandler  far *sh, int nextstate[], int (* handler[])(void));
void InitStateMachine(stateMachine far *sm, int nextstate[], int (* handler[])(void));
//*****************************************************************
init(unsigned ch);
PlDosErTr();
int GetDigInf();
int CheckDInf();
int GoOnHook(unsigned int line);
int OffHook();
int OnHook();
int GoTo_V_Start();
int PlayGr();
int PlayGr1();
int PlayGr2();
int PlayGoodBy();
int PlayOutTime();
int PlayGoran();
int GetDigGr();
int NextEvent(void);
int CheckDGr();
int NoOp(void);
int PlayNull();
int PlayBlundeNo();
int PlayDosEr();
int PlayInfoSys();
int CheckDTree();
int CheckTreeST();  /*chech event star in getdigit */
int CheckTreeLf();
int GetDigTree();
int PlayTreeNod();
int CheckEndEventTimeAndMaxTimeSystem();
int PlayMsgDigitNotBreak(unsigned int,char *,char *);
//*****************************************************************
int stateTable[ MAXEVENTNUM * MAXSTATENUM ] =
/*                                                                        L E*/
/*      T   P M       D                 C                     T     I K L O V*/
/*    M E   W A   M   I                 A                     E I M N E O O E*/
/*    A R   R X   A   A M   L     D L   L       S             R D A I Y O P N*/
/*    X M L D B   X O L A P S     I O   L     R I             M D X T P P L T*/
/*    D D S O Y   S F C X B T   O G O   P     I L             D T N R R L C S*/
/*    G I T S T   E F M S E E   N R P   R     N C             I E S Q E C O T*/
/*    T G O E E   C H P I O R   H E E   O     G H             G R I S S O F A*/
/*  - S 1 P R S - S C L L F M - C C V - G - - R G - - - - - - 2 M L T S N F R*/

/*  0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 2 2 2 2*/
/*  0 1 2 3 4 5 6 7 8 9 A B C D E F 0 1 2 3 4 5 6 7 8 9 A B C D E F 0 1 2 3 4*/
/*  H H H H H H H H H H H H H H H H H H H H H H H H H H H H H H H H H H H H H*/
{
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar

/* StartUp        (State 0) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,2          ,0             ,0         ,0           ,0           ,//END STATE

/* ----------------- (State 1) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* Ring          (State 2) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    2           ,2          ,2           ,2           ,2           ,2           ,2           ,2           ,2           ,2           ,2           ,2           ,2           ,2           ,2           ,2           ,2           ,2           ,2           ,2           ,2           ,4           ,2           ,2           ,2           ,2           ,2           ,2           ,2           ,2           ,2           ,2           ,2          ,2             ,2         ,2           ,2           ,//END STATE

/* ----------------  (State 3) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State 4 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    4           ,4          ,4           ,4           ,4           ,4           ,4           ,4           ,5           ,4           ,4           ,4           ,4           ,4           ,4           ,4           ,4           ,4           ,4           ,4           ,4           ,4           ,4           ,4           ,4           ,4           ,4           ,4           ,4           ,4           ,4           ,4           ,4          ,4             ,4         ,4           ,4           ,//END STATE

/* ----------------  (State 5 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    5           ,5          ,5           ,5           ,5           ,5           ,5           ,5           ,5           ,5           ,5           ,6           ,5           ,5           ,5           ,5           ,5           ,5           ,5           ,5           ,5           ,5           ,5           ,5           ,5           ,5           ,5           ,5           ,5           ,5           ,5           ,5           ,5          ,5             ,5         ,5           ,5           ,//END STATE

/* GetDigit Or PlayLastLevel (State 6 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    6           ,6          ,7           ,6           ,6           ,6           ,6           ,6           ,6           ,6           ,6           ,7           ,6           ,6           ,6           ,6           ,6           ,6           ,6           ,6           ,6           ,6           ,6           ,6           ,6           ,6           ,6           ,6           ,6           ,6           ,6           ,6           ,6          ,6             ,6         ,6           ,196         ,//END STATE

/* ----------------  (State 7 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    7           ,7          ,10          ,7           ,7           ,7           ,7           ,7           ,7           ,7           ,7           ,7           ,7           ,7           ,7           ,7           ,7           ,7           ,7           ,7           ,7           ,7           ,7           ,7           ,7           ,7           ,7           ,7           ,7           ,7           ,7           ,7           ,7          ,7             ,7         ,7           ,7           ,//END STATE

/* ----------------  (State 8 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* ----------------  (State 9 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* Check Digit      (State 10 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    10          ,12         ,10          ,10          ,10          ,10          ,10          ,10          ,10          ,10          ,10          ,10          ,10          ,10          ,10          ,10          ,10          ,10          ,10          ,10          ,10          ,10          ,10          ,10          ,10          ,10          ,10          ,10          ,10          ,10          ,12          ,10          ,10         ,10            ,10        ,10          ,10          ,//END STATE
		/*12 or 14 or ... 30*/                                                                                                                                                                                                                                                                                                                                                                 /*12 or ...30*/
/* ----------------  (State 11 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* ----------------  (State 12 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    12          ,12         ,12          ,12          ,12          ,12          ,12          ,12          ,12          ,12          ,12          ,6           ,12          ,12          ,12          ,12          ,12          ,12          ,12          ,12          ,12          ,12          ,12          ,12          ,12          ,12          ,12          ,12          ,12          ,12          ,12          ,12          ,12         ,12            ,12        ,12          ,12          ,//END STATE

/* ----------------  (State  13) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* ----------------  (State  14) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    14          ,14         ,14          ,14          ,14          ,14          ,14          ,14          ,14          ,14          ,14          ,14          ,14          ,14          ,14          ,14          ,14          ,14          ,14          ,14          ,14          ,14          ,14          ,14          ,14          ,14          ,14          ,14          ,14          ,14          ,14          ,14          ,14         ,14            ,14        ,14          ,14          ,//END STATE

/*-----------------  (State  15) */
//  NoOper       M-xDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/*-----------------  (State  16) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/*-------------------(State  17) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* ----------------  (State  18) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* ----------------- (State  19) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* ------------------(State  20) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/*------------------ (State  21) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* ----------------  (State  22) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* ------------------(State  23) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* ----------------  (State  24) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* ----------------  (State  25) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* ----------------  (State  26) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    26          ,26         ,27          ,26          ,26          ,26          ,26          ,26          ,26          ,26          ,26          ,27          ,26          ,26          ,26          ,26          ,26          ,26          ,26          ,26          ,26          ,26          ,26          ,26          ,26          ,26          ,26          ,26          ,26          ,26          ,26          ,26          ,26         ,26            ,26        ,26          ,26          ,//END STATE

/* ----------------  (State  27) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    27          ,27         ,28          ,27          ,27          ,27          ,27          ,27          ,27          ,27          ,27          ,7           ,27          ,27          ,27          ,27          ,27          ,27          ,27          ,27          ,27          ,27          ,27          ,27          ,27          ,27          ,27          ,27          ,27          ,27          ,27          ,27           ,27        ,27            ,27        ,27          ,27         , //END STATE

/* ----------------  (State  28) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    28          ,7          ,29          ,28          ,28          ,28          ,28          ,28          ,28          ,28          ,28          ,29          ,28          ,28          ,28          ,28          ,28          ,28          ,28          ,28          ,28          ,28          ,28          ,28          ,28          ,28          ,28          ,28          ,28          ,28           ,7          ,28          ,28         ,28            ,28        ,28          ,28          ,//END STATE

/* ----------------  (State  29) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* ----------------  (State  30) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    30          ,30         ,6           ,30          ,30          ,30          ,30          ,30          ,30          ,30          ,30          ,6           ,30          ,30          ,30          ,30          ,30          ,30          ,30          ,30          ,30          ,30          ,30          ,30          ,30          ,30          ,30          ,30          ,30          ,30          ,30          ,30          ,30         ,30            ,30        ,30          ,6           ,//END STATE

/* ----------------  (State  31) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/*-------------------(State  32) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    32          ,32         ,34          ,32          ,32         ,32           ,32          ,32          ,32          ,32          ,32          ,34          ,32          ,32          ,32          ,32          ,32          ,32          ,32          ,32          ,32          ,32          ,32          ,32          ,32          ,32          ,32          ,32          ,32          ,32          ,32          ,32          ,32         ,32            ,32        ,32          ,34           ,//END STATE

/* ----------------  (State  33) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* ----------------  (State  34) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    34          ,34         ,36          ,34          ,32         ,34           ,34          ,34          ,34          ,34          ,34          ,32          ,34          ,34          ,34          ,34          ,34          ,34          ,34          ,34          ,34          ,34          ,34          ,34          ,34          ,34          ,34          ,34          ,34          ,34          ,34          ,34          ,34         ,34            ,34        ,34          ,32          ,//END STATE

/* ----------------  (State  35) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  36) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    36          ,32         ,36          ,36          ,36          ,36          ,36          ,36          ,36          ,36          ,36          ,36          ,36          ,36          ,36          ,36          ,36          ,36          ,36          ,36          ,36          ,36          ,36          ,36          ,36          ,36          ,36          ,36          ,36          ,36          ,32          ,36          ,36         ,36            ,36        ,36          ,32          ,//END STATE

/* PLAYING_GREETING  (State  37) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  38) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  39) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  40) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  41) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  42) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  43) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  44) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  45) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  46) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  47) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  48) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  49) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  50) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    50          ,50         ,51          ,50          ,50          ,50          ,50          ,50          ,50          ,0           ,50          ,50          ,50          ,50          ,50          ,50          ,50          ,50          ,50          ,50          ,50          ,50          ,50          ,50          ,50          ,50          ,50          ,50          ,50          ,50          ,50          ,50          ,50         ,50            ,50        ,50          ,50          ,//END STATE

/* PLAYING_GREETING  (State  51) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    51          ,52         ,51          ,51          ,51          ,51          ,51          ,51          ,51          ,51          ,51          ,51          ,51          ,51          ,51          ,51          ,51          ,51          ,51          ,51          ,51          ,51          ,51          ,51          ,51          ,51          ,51          ,51          ,51          ,51          ,52          ,51          ,51         ,51            ,51        ,51          ,51          ,//END STATE

/* PLAYING_GREETING  (State  52) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    52          ,52         ,53          ,52          ,52          ,52          ,52          ,52          ,52          ,52          ,52          ,52          ,52          ,52          ,52          ,52          ,52          ,52          ,52          ,52          ,52          ,52          ,52          ,52          ,52          ,52          ,52          ,52          ,52          ,52          ,52          ,52          ,52         ,52            ,52        ,52          ,52          ,//END STATE

/* PLAYING_GREETING  (State  53) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    53          ,62         ,53          ,53          ,53          ,53          ,53          ,53          ,53          ,53          ,53          ,53          ,53          ,53          ,53          ,53          ,53          ,53          ,53          ,53          ,53          ,53          ,53          ,53          ,53          ,53          ,53          ,53          ,53          ,53          ,62          ,53          ,53         ,53            ,53        ,53          ,53          ,//END STATE

/* PLAYING_GREETING  (State  54) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    54          ,54         ,56          ,54          ,54          ,54          ,54          ,54          ,54          ,54          ,54          ,54          ,54          ,54          ,54          ,54          ,54          ,54          ,54          ,54          ,54          ,54          ,54          ,54          ,54          ,54          ,54          ,54          ,54          ,54          ,54          ,54          ,54         ,54            ,54        ,54          ,54          ,//END STATE

/* PLAYING_GREETING  (State  55) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    55          ,57         ,55          ,55          ,55          ,55          ,55          ,55          ,55          ,55          ,55          ,55          ,55          ,55          ,55          ,55          ,55          ,55          ,55          ,55          ,55          ,55          ,55          ,55          ,55          ,55          ,55          ,55          ,55          ,55          ,57          ,55          ,55         ,55            ,55        ,55          ,55          ,//END STATE

/* PLAYING_GREETING  (State  56) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  57) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    57          ,57         ,62          ,57          ,62          ,57          ,57          ,57          ,57          ,57          ,57          ,62          ,57          ,57          ,57          ,57          ,57          ,57          ,57          ,57          ,57          ,57          ,57          ,57          ,57          ,57          ,57          ,57          ,57          ,57          ,57          ,57          ,57         ,57            ,57        ,57          ,57          ,//END STATE

/* PLAYING_GREETING  (State  58) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  59) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  60) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  61) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  62) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    62          ,62         ,63          ,62          ,64         ,62          ,62          ,62          ,62          ,62          ,62          ,63          ,62          ,62          ,62          ,62          ,62          ,62          ,62          ,62          ,62          ,62          ,62          ,62          ,62          ,62          ,62          ,62          ,62          ,62          ,62          ,62          ,62         ,62            ,62        ,62          ,62          ,//END STATE

/* PLAYING_GREETING  (State  63) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    63          ,63         ,64          ,63          ,64          ,64          ,63          ,64          ,63          ,63          ,64          ,64          ,63          ,63          ,63          ,63          ,63          ,63          ,63          ,63          ,63          ,63          ,63          ,63          ,63          ,63          ,63          ,63          ,63          ,63          ,63          ,64          ,63         ,63            ,63        ,63          ,63          ,//END STATE

/* PLAYING_GREETING  (State  64) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    64          ,64         ,65          ,64          ,64          ,64          ,64          ,64          ,64          ,64          ,64          ,64          ,64          ,64          ,64          ,64          ,64          ,64          ,64          ,64          ,64          ,64          ,64          ,64          ,64          ,64          ,64          ,64          ,64          ,64          ,64          ,64          ,64         ,64            ,64        ,64          ,64          ,//END STATE

/* PLAYING_GREETING  (State  65) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    65          ,68         ,65          ,65          ,65          ,65          ,65          ,65          ,65          ,65          ,65          ,65          ,65          ,65          ,65          ,65          ,65          ,65          ,65          ,65          ,65          ,65          ,65          ,65          ,65          ,65          ,65          ,65          ,65          ,65          ,68          ,65          ,65         ,65            ,65        ,65          ,65          ,//END STATE

/* PLAYING_GREETING  (State  66) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  67) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  68) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    68          ,68         ,69          ,68          ,68          ,68          ,68          ,68          ,68          ,68          ,68          ,69          ,68          ,68          ,68          ,68          ,68          ,68          ,68          ,68          ,68          ,68          ,68          ,68          ,68          ,68          ,68          ,68          ,68          ,68          ,68          ,68          ,68         ,68            ,68        ,68          ,68          ,//END STATE

/* PLAYING_GREETING  (State  69) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    69          ,69         ,72          ,69          ,72         ,69          ,69          ,69          ,69          ,69          ,69          ,72          ,69          ,69          ,69          ,69          ,69          ,69          ,69          ,69          ,69          ,69          ,69          ,69          ,69          ,69          ,69          ,69          ,69          ,69          ,69          ,69          ,69         ,69            ,69        ,69          ,69          ,//END STATE

/* PLAYING_GREETING  (State  70) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
//    70          ,70         ,71          ,70          ,70          ,70          ,70          ,70          ,70          ,70          ,70          ,70          ,70          ,70          ,70          ,70          ,70          ,70          ,70          ,70          ,70          ,70          ,70          ,70          ,70          ,70          ,70          ,70          ,70          ,70          ,70          ,70          ,70         ,70            ,70        ,70          ,70          ,//END STATE
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE
/* PLAYING_GREETING  (State  71) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
//    71          ,72         ,71          ,71          ,71          ,71          ,71          ,71          ,71          ,71          ,71          ,71          ,71          ,71          ,71          ,71          ,71          ,71          ,71          ,71          ,71          ,71          ,71          ,71          ,71          ,71          ,71          ,71          ,71          ,71          ,72          ,71          ,71         ,71            ,71        ,71          ,71          ,//END STATE
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE
/* PLAYING_GREETING  (State  72) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    72          ,72         ,73          ,72          ,72          ,72          ,72          ,72          ,72          ,72          ,72          ,73          ,72          ,72          ,72          ,72          ,72          ,72          ,72          ,72          ,72          ,72          ,72          ,72          ,72          ,72          ,72          ,72          ,72          ,72          ,72          ,72          ,72         ,72            ,72        ,72          ,72          ,//END STATE

/* PLAYING_GREETING  (State  73) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    73          ,73         ,74          ,73          ,74          ,73          ,73          ,73          ,73          ,73          ,73          ,74          ,73          ,73          ,73          ,73          ,73          ,73          ,73          ,73          ,73          ,73          ,73          ,73          ,73          ,73          ,73          ,73          ,73          ,73          ,73          ,73          ,73         ,73            ,73        ,73          ,73          ,//END STATE

/* PLAYING_GREETING  (State  74) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    74         ,74          ,75          ,74          ,74         ,74           ,74          ,74          ,74         ,74           ,74          ,74          ,74         ,74           ,74          ,74          ,74          ,74          ,74          ,74          ,74         ,74           ,74          ,74          ,74          ,74          ,74          ,74          ,74          ,74          ,74          ,74           ,74        ,74            ,74        ,74          ,74         ,//END STATE

/* PLAYING_GREETING  (State  75) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    75          ,78         ,75          ,75          ,75          ,75          ,75          ,75          ,75          ,75          ,75          ,75          ,75          ,75          ,75          ,75          ,75          ,75          ,75          ,75          ,75          ,75          ,75          ,75          ,75          ,75          ,75          ,75          ,75          ,75          ,78          ,75          ,75         ,75            ,75        ,75          ,75          ,//END STATE

/* PLAYING_GREETING  (State  76) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  77) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  78) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    78          ,78         ,79          ,78          ,78          ,78          ,78          ,78          ,78          ,78          ,78          ,79          ,78          ,78          ,78          ,78          ,78          ,78          ,78          ,78          ,78          ,78          ,78          ,78          ,78          ,78          ,78          ,78          ,78          ,78          ,78          ,78          ,78         ,78            ,78        ,78          ,78          ,//END STATE

/* PLAYING_GREETING  (State  79) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    79          ,79         ,80          ,79          ,79          ,79          ,79          ,79          ,79          ,79          ,79          ,80          ,79          ,79          ,79          ,79          ,79          ,79          ,79          ,79          ,79          ,79          ,79          ,79          ,79          ,79          ,79          ,79          ,79          ,79          ,79          ,79          ,79         ,79            ,79        ,79          ,79          ,//END STATE

/* PLAYING_GREETING  (State  80) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    80          ,82         ,80          ,80          ,80          ,80          ,80          ,80          ,80          ,80          ,80          ,80          ,80          ,80          ,80          ,80          ,80          ,80          ,80          ,80          ,80          ,80          ,80          ,80          ,80          ,80          ,80          ,80          ,80          ,80          ,82          ,80          ,80         ,80            ,80        ,80          ,80          ,//END STATE

/* PLAYING_GREETING  (State  81) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  82) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    82          ,82         ,83          ,82          ,83          ,82          ,82          ,82          ,82          ,82          ,82          ,83          ,82          ,82          ,82          ,82          ,82          ,82          ,82          ,82          ,82          ,82          ,82          ,82          ,82          ,82          ,82          ,82          ,82          ,82          ,82          ,82          ,82         ,82            ,82        ,82          ,82          ,//END STATE

/* PLAYING_GREETING  (State  83) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    83          ,83         ,84          ,83          ,83          ,83          ,83          ,83          ,83          ,83          ,83          ,83          ,83          ,83          ,83          ,83          ,83          ,83          ,83          ,83          ,83          ,83          ,83          ,83          ,83          ,83          ,83          ,83          ,83          ,83          ,83          ,83          ,83         ,83            ,83        ,83          ,83          ,//END STATE

/* PLAYING_GREETING  (State  84) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    84          ,196        ,84          ,84          ,84          ,84          ,84          ,84          ,84          ,84          ,84          ,84          ,84          ,84          ,84          ,84          ,84          ,84          ,84          ,84          ,84          ,84          ,84          ,84          ,84          ,84          ,84          ,84          ,84          ,84          ,196         ,84          ,84         ,84            ,84        ,84          ,84          ,//END STATE

/* PLAYING_GREETING  (State  85) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  86) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  87) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  88) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  89) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  90) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  91) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  92) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxNSil      InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  93) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxNSil      InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  94) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxNSil      InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  95) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxNSil      InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  96) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxNSil      InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  97) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxNSil      InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  98) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxNSil      InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  99) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  100) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* WAITING_FOR_CALLS (State 101) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* GOING_OFFHOOK     (State 102) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State 103) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State 104 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State 105 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State 106 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State 107 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State 108 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State 109 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State 110 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State 111 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State 112 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  113) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  114) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  115) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  116) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  117) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  118) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  119) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  120) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  121) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  122) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  123) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  124) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  125) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  126) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  127) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  128) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  129) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  130) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  131) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  132) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  133) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  134) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  135) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  136) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  137) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  138) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  139) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  140) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  141) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  142) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  143) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  144) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  145) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  146) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  147) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  148) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  149) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  150) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  151) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  152) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  153) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  154) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  155) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  156) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  157) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  158) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  159) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  160) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
   160          ,160         ,161        ,160         ,160         ,160         ,160         ,160         ,160         ,160         ,160         ,160         ,160         ,160         ,160         ,160         ,160         ,160         ,160         ,160         ,160         ,160         ,160         ,160        ,160          ,160         ,160         ,160         ,160         ,160         ,160         ,160         ,160        ,160           ,160       ,160         ,160         ,//END STATE

/* PLAYING_GREETING  (State  161) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    161         ,162        ,161         ,161         ,161         ,161         ,161         ,161         ,161         ,161         ,161         ,161         ,161         ,161         ,161         ,161         ,161         ,161         ,161         ,161         ,161         ,161         ,161         ,161         ,161         ,161         ,161         ,161         ,161         ,161         ,162         ,161         ,161        ,161           ,161       ,161         ,161         ,//END STATE

/* PLAYING_GREETING  (State  162) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    162         ,162        ,163         ,162         ,162         ,162         ,162         ,162         ,162         ,162         ,162         ,162         ,162         ,162         ,162         ,162         ,162         ,162         ,162         ,162         ,162         ,162         ,162         ,162         ,162         ,162         ,162         ,162         ,162         ,162         ,162         ,162         ,162        ,162           ,162       ,162         ,162         ,//END STATE

/* PLAYING_GREETING  (State  163) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    163         ,194        ,163         ,163         ,163         ,163         ,163         ,163         ,163         ,163         ,163         ,163         ,163         ,163         ,163         ,163         ,163         ,163         ,163         ,163         ,163         ,163         ,163         ,163         ,163         ,163         ,163         ,163         ,163         ,163         ,194         ,163         ,163        ,163           ,163       ,163         ,163         ,//END STATE

/* PLAYING_GREETING  (State  164) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  165) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  166) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  167) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  168) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  169) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  170) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  171) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  172) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  173) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  174) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  175) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  176) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  177) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  178) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  179) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  180) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  181) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  182) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  183) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  184) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  185) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  186) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  187) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  188) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  189) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  190) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  191) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* PLAYING_GREETING  (State  192) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    192         ,196        ,196         ,196         ,196         ,196         ,192         ,196         ,196         ,196         ,196         ,196         ,196         ,192         ,2           ,196         ,192         ,192         ,196         ,192         ,192         ,196         ,192         ,192         ,192         ,192         ,192         ,192         ,192         ,196         ,196         ,196         ,192        ,196           ,192       ,192         ,196         ,//END STATE

/* PLAYING_GREETING  (State  193) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/* ----------------- (State  194) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    194         ,196        ,196         ,194         ,194         ,194         ,194         ,194         ,194         ,194         ,194         ,196         ,194         ,194         ,194         ,194         ,194         ,194         ,194         ,194         ,194         ,194         ,194         ,194         ,194         ,194         ,194         ,194         ,194         ,194         ,194         ,194         ,194        ,194           ,194       ,194         ,194         ,//END STATE

/* ----------------  (State  195) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/*On HOOK----------- (State  196) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    196         ,196        ,196         ,196         ,196         ,196         ,196         ,196         ,196         ,196         ,196         ,198         ,196         ,196         ,196         ,196         ,196         ,196         ,196         ,196         ,196         ,196         ,196         ,196         ,196         ,196         ,196         ,196         ,196         ,196         ,196         ,196         ,196        ,196           ,196       ,196         ,196         ,//END STATE

/*------------------ (State  197) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

/*ONHC  goto Stat 2  (State  198) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    198         ,198        ,198         ,198         ,198         ,198         ,198         ,198         ,198         ,198         ,198         ,198         ,198         ,198         ,2           ,198         ,198         ,198         ,198         ,198         ,198         ,198         ,198         ,198         ,198         ,198         ,198         ,198         ,198         ,198         ,198         ,198         ,198        ,198           ,198       ,198         ,198         ,//END STATE

/*-----------------  (State  199) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff    EventStar
    0           ,0          ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0           ,0          ,0             ,0         ,0           ,0           ,//END STATE

};
/************************************************************************/
//======================================================================
//-----------------------------------------------------------------------
/**********************************************************************/

int (* procTable[ MAXEVENTNUM * MAXSTATENUM ] )(void) =
{
/* INITIALIZING      (State 0) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,StartUp    ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* WAITING_FOR_CALLS (State 1) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* GOING_OFFHOOK     (State 2) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,OffHook      ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  3 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  4  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,PlayGr1     ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  5  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayGr2     ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  6  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,PlayGr      ,NoOp        ,PlayDosEr  ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayGr      ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  7  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,GetDigGr    ,NoOp        ,PlayDosEr  ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayGr      ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,PlayGoodBy  ,//End Proc State

/* -------------     (State  8  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  9  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  10  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,CheckDGr   ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,CheckDGr    ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  11 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  12  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,PlayGr      ,NoOp        ,PlayDosEr  ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayGoran   ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  13  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  14  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  15  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  16  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  17  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  18  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  19  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  20  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  21  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  22  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  23  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  24  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  25  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  26  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,PlayInfoSys ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayInfoSys ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  27  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,GetDigInf   ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayGr      ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  28  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,CheckDInf  ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,CheckDInf   ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  29  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  30  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,PlayBlundeNo,NoOp        ,PlayDosEr  ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayBlundeNo,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  31  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  32  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,PlayTreeNod ,NoOp        ,PlDosErTr   ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayTreeNod ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,PlayTreeNod ,//End Proc State

/* -------------     (State  33  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  34  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,GetDigTree  ,NoOp        ,PlDosErTr   ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,CheckTreeLf ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp       ,//End Proc State

/* -------------     (State  35  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  36  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,CheckDTree  ,NoOp        ,NoOp        ,PlayDosEr ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,CheckDTree ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp         ,//End Proc State

/* -------------     (State  37  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  38  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  39  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  40  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  41  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  42  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  43  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  44  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  45  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  46  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  47  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  48 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  49  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  50  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,GetMenuBx   ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayMenuBx  ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  51  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,ChckMenuBx ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,ChckMenuBx  ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  52  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,GetShka     ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayShka    ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  53  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,ChckShka   ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,ChckShka    ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  54  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,GetOthrNoBx ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayOthrNoBx,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  55  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,ChckOthrNoBx,NoOp       ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,ChckOthrNoBx,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  56  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  57  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,PlayBxBipRec,NoOp        ,PlayBxBipRec,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayBxBipRec,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  58  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  59  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  60  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  61  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  62  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,RecMessBx   ,NoOp        ,PlayOthrDlSv,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,RecMessBx   ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  63  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,PlayOthrDlSv,NoOp        ,PlayOthrDlSv,PlayOthrDlSv,NoOp        ,PlayOthrDlSv,NoOp       ,NoOp         ,PlayOthrDlSv,PlayOthrDlSv,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,PlayOthrDlSv,NoOp       ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  64  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,GetOthrDlSv ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayOthrDlSv,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  65  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,ChckOthrDlSv,NoOp       ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,ChckOthrDlSv,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  66  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  67  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  68  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,PlayGNoMes  ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayGNoMes  ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  69  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,PlayNo      ,NoOp        ,PlayDosEr  ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayNo      ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  70  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
//    NoOp        ,NoOp       ,GetOkGNoMes ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayOkGNoMes,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
/* -------------     (State  71  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
//    NoOp        ,ChckOkGNoMes,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp      ,ChckOkGNoMes,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
/* -------------     (State  72  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,PlayGRamzMes,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayGRamzMes,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
/* -------------     (State  73  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,PlayNo      ,NoOp        ,PlayDosEr  ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayNo      ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  74  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,GetOkGRamzMes,NoOp       ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayOkGRamzMes,NoOp      ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
/* -------------     (State  75  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,ChckOkGRamzMes,NoOp     ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,ChckOkGRamzMes,NoOp      ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  76  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  77  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  78  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,PlayIfNoTel ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayIfNoTel ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  79  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,GetIfNoTel  ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,GetIfNoTel  ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  80  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,ChckNoTel  ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,ChckNoTel   ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  81  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  82  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,PlayNo      ,NoOp        ,PlayDosEr  ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayNo      ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  83  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,GetOkNoTel  ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayOkNoTel ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  84  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,ChckOkNoTel,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,ChckOkNoTel ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  85  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  86  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  87  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  88  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  89  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  90  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  91  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  92  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  93  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  94  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,ChckOthrNoBx,NoOp       ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,ChckOthrNoBx,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
/* -------------     (State  95  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  96  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,RecMessBx   ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,RecMessBx   ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
/* -------------     (State  97  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxNSil      InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  98  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxNSil      InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,PlayOthrDlSv,NoOp        ,NoOp       ,PlayOthrDlSv ,NoOp        ,PlayOthrDlSv,NoOp       ,NoOp         ,PlayOthrDlSv,PlayOthrDlSv,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,PlayOthrDlSv,NoOp       ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
/* -------------     (State  99  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxNSil      InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  100 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,GetOthrDlSv ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayOthrDlSv,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
/* WAITING_FOR_CALLS (State 1001) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* GOING_OFFHOOK     (State 1002) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,ChckOthrDlSv,NoOp       ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,ChckOthrDlSv,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State 1003 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  1004  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  1005  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  1006  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  1007  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  1008  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  1009  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  110  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  111 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  112  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  113  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  114  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,ChckSlfNoBx,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,ChckSlfNoBx,ChckSlfNoBx ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
/* -------------     (State  115  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  116  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,GetSlfRamz  ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlaySlfRamz ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
/* -------------     (State  117  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  118  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,ChckSlfRamz,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,ChckSlfRamz,ChckSlfRamz ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
/* -------------     (State  119  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  120  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,PlaySlfNoMes,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlaySlfNoMes,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
/* -------------     (State  121  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  122  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlaySNoMes  ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
/* -------------     (State  123  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  124  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,PlayErrorBx,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlaySNoMes2 ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
/* -------------     (State  125  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  126  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,GetSlfMenu  ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlaySlfMenu ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
/* -------------     (State  127  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  128  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,ChckSlfMenu,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,ChckSlfMenu ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
/* -------------     (State  129  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  130  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlaySMesII,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
/* -------------     (State  131  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  132  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,PlaySDelMes ,NoOp        ,PlayNotIfBx,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlaySDelMes ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
/* -------------     (State  133  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  134  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,GetSDelMes  ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlaySDelMes ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
/* -------------     (State  135  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  136  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,ChckSDelMes,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,ChckSDelMes ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
/* -------------     (State  137  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  138  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayNotMesBx,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
/* -------------     (State  139  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  140  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
/* -------------     (State  141  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  142  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
/* -------------     (State  143  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  144  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
/* -------------     (State  145  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  146  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  147  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  148 ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  149  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  150  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  151  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  152  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  153  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  154  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  155  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  156  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  157  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  158  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State 159  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  160  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,GetTypNoMes ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayTypNoMes,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  161  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,ChckTypNoMes,NoOp       ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,ChckTypNoMes,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  162  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,GetTypNoRamz,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,PlayTypNoRamz,NoOp       ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  163  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,ChckTypNoRamz,NoOp      ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,ChckTypNoRamz,NoOp       ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  164  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  165  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  166  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  167  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  168  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  169  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  170  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  171  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  172  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  173  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  174  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  175  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  176  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  177  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  178  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  179  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  180  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  181  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  182  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  183  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  184  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  185  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  186  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  187  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  188  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  189  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  190  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  191  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  192  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,PlayOutTime ,PlayOutTime,PlayOutTime ,PlayOutTime ,PlayOutTime ,NoOp        ,PlayOutTime ,PlayOutTime,PlayOutTime  ,PlayOutTime ,PlayOutTime ,PlayOutTime ,NoOp        ,NoOp        ,PlayOutTime ,NoOp        ,NoOp        ,PlayOutTime ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,PlayOutTime ,PlayOutTime ,PlayOutTime ,NoOp       ,PlayOutTime  ,NoOp      ,NoOp        ,PlayOutTime ,//End Proc State

/* -------------     (State  193  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  194  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,PlayGoodBy ,PlayGoodBy  ,NoOp        ,PlayDosEr  ,NoOp         ,NoOp        ,NoOp         ,NoOp       ,NoOp         ,NoOp        ,PlayGoodBy  ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,PlayGoodBy  ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  195  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  196  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,OnHook      ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  197  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State

/* -------------     (State  198  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,GoTo_V_Start,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State
                                                                                                                                                                                       /*^Cheng State To 2*/
/* -------------     (State  199  ) */
//  NoOper       MaxDigit    TermDig1     LStop        PwrDosEr    MaxBytes      XX           MaxSecs      OffHC       DialCmpl      MaxSil       PBEOF        LSTerm       XX           ONHC         DIGREC       LOOPEV       XX           CallProg     XX           XX          Ring          SilCheng     XX           XX           XX           XX           XX           XX           TermDig2     IDDTerm      MaxSil       InitRqst    KeyPres        LoopLcOn   LoopLcOff   EventStar
    NoOp        ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp       ,NoOp         ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp        ,NoOp         ,NoOp       ,NoOp        ,NoOp        ,NoOp       ,NoOp          ,NoOp      ,NoOp        ,NoOp        ,//End Proc State


};


/******************************************************************************/
/*                                                                            */
/*  InitStateHandler : initialize a stateHandler structure                    */
/*                                                                            */
/*  Arguments :                                                               */
/*                                                                            */
/*  sh        : pointer to the stateHandler structure                         */
/*  nextstate : array of integers indicating the next state to go to given    */
/*              the current state                                             */
/*  handler   : array of pointers to event handling functions                 */
/*                                                                            */
/******************************************************************************/

void InitStateHandler(stateHandler far *sh, int nextstate[], int (* handler[])(void))
{
    int i;

    for ( i = 0; i < MAXEVENTNUM; i++ )
    {
         sh->eh[i].ns = nextstate[i];
	 sh->eh[i].handle_it = handler[i];
    }
}

/***************************************
* Initialize the state machine         *
***************************************/

void InitStateMachine(stateMachine far *sm, int nextstate[], int (* handler[])(void))
{
    int i;

    for ( i = 0; i < MAXSTATENUM; i++ )
    {
	 InitStateHandler(&(sm->sh[i]), &nextstate[i * MAXEVENTNUM], &handler[i * MAXEVENTNUM]);
    }
}

//==========================================================================

/***************************************
* Start up the system                  *
***************************************/
int StartUp()
{
int ln;

    line_count = MaxLine-1;            /* the number of lines in the system */
    if (err) return (err);
    for ( ln = 1; ln <= (int)line_count; ln++ )
    {
	LineStat[ln].State=StartOnState;
	LineStat[ln].V_Line=V_Start;
	COD_TON_BUF[ln].buf[0]=0;
	COD_TON_BUF[ln].count=0;
	COD_TON_BUF[ln].StartTime=time(NULL);;
	RingTime[ln]=0;
	RingFlagLine[ln]=0;
	RingCount[ln]=0;
	if (initialized2 == 0)
	    err=init(ln);
	else   GoOnHook(ln);
	 if (err) return (err);
	delay(1000);

    }
	 if (PF)
	 {
	 fprintf(stdout, "Start system*********\n");
 /*..*/  fprintf(PrintEvent, "Start system******** ");
	 }

      initialized2=1;
    return(0);                              /* return OK */

}
//==========================================================================
init(unsigned ch)
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
return 0;
}

//==========================================================================
CheckEndEventTimeAndMaxTimeSystem()
{
  int i;
  time_t tempTime,temp,temp2;

  tempTime=time(NULL);
  err=0;

  for(i=1; i<=line_count; i++)
  {
    if (LineStat[i].State!=StartOnState)
    {
      temp=tempTime - LineStat[i].EndEventTime;
      temp2=tempTime -LineStat[i].StartTime;
      if (temp > MaxTimeNotEvent && LineStat[i].State<196  )
      {
	if (temp < MaxTimeNotEvent*2)
	 {
	   if (PF)
	   fprintf(stdout,"\n..*temp=%ld  s=%ld  e=%ld*..",temp,LineStat[i].StartTime,LineStat[i].EndEventTime);
	   fprintf(PrintEvent,"\n..*temp=%ld  s=%ld  e=%ld*..",temp,LineStat[i].StartTime,LineStat[i].EndEventTime);
  //	   err=PlayMsgDigitNotBreak(i,"O.v",DriveSysName);
	   LineStat[i].State=192;
	 }
	else
	 {
	   GoOnHook(i);
	   LineStat[i].State=198;
	 }
      }
      else if (temp2 >MaxTimeUsedSystem && LineStat[i].State<PlayGoodByStateALLEvent )
	   {
	   if (PF)
	   fprintf(stdout,"\n..*temp2=%ld  s=%ld  e=%ld*..",temp2,LineStat[i].StartTime,LineStat[i].EndEventTime);
	   fprintf(PrintEvent,"\n..*temp2=%ld  s=%ld  e=%ld*..",temp2,LineStat[i].StartTime,LineStat[i].EndEventTime);

	     LineStat[i].State=PlayGoodByStateALLEvent;/*state 192*/
	   }
      if (temp > MaxTimeNotEvent*3 || temp2 >MaxTimeUsedSystem *2 )
       {
	   if (PF)
	   fprintf(stdout,"\n.Deng.*t=%ld  s=%ld  e=%ld*..",tempTime,LineStat[i].StartTime,LineStat[i].EndEventTime);
	   fprintf(PrintEvent,"\n.Deng.*t=%ld  s=%ld  e=%ld*..",tempTime,LineStat[i].StartTime,LineStat[i].EndEventTime);
	   if (PF)
	   PrintEven(line_number, event_code,  event_data);
	   fprintf(PrintEvent, "         causing s change : %u --> %u\n"
	   , LineStat[ i ].LastState,LineStat[ i ].State );

	  GoOnHook(i);
//+	  StopPWRLINE();
//	  VL_STOP(i);
	  fprintf(PrintEvent,"\nCount R =%ld   u=%ld\n",CountRefresh,CountRefreshUsed);
	  fclose(PrintEvent);
//	  exit(0);
	  return  100;
       }
    }
  }
  return err;
}
//==========================================================================
int ClearLIOA(struct LineIOArea *pLIOA) /* clear the LIOA */
{
  int t1;
  int ww;
  ww=sizeof(struct LineIOArea);
  for (t1=0; t1<ww; t1++)
    ((char *) pLIOA)[t1] = '\0';
  return(0);
}

//==========================================================================
//==========================================================================
//==========================================================================
//==========================================================================
/***************************************
* Play greeting message                *
***************************************/
int PlayMsgDigitBreak(unsigned line_number,char filname[],char drive[])
{
    int err;
    char filname2[100];
    strcpy(filname2,drive);
    strcat(filname2,filname);

	if (PF)
	{
/*..*/    fprintf(stdout, "    S P R  err= %u  nam=%s\n",err,filname2);
/*..*/    fprintf(PrintEvent, "    Start Play Rec Audio err= %u nam=%s\n",err,filname2);
	}

    ClearLIOA(&lioarea[line_number]);

//    lio.lio_max_time = 0;          /* clear time limit */

    lioarea[line_number].lio_term_mask = 0x1;         /* terminate on all*/
    lioarea[line_number].lio_term_digit= '@';             /*terminat All Digit entered*/
    lioarea[line_number].lio_max_time    =600;     /*  time limit Sec*/
//  open(filname2, O_RDONLY)) == -1)
    if ((LineStat[line_number].pfhandle=sopen(filname2, O_RDONLY, SH_DENYNO, S_IREAD)) == -1)
     {
       LineStat[line_number].V_Line=V_DosError;
       event_data=0x02;
       fprintf(PrintEvent, "Error %d**err=%d\n   ",line_number,err);
       fprintf(PrintEvent, "Error : %u -- %u\n"
	     , LineStat[ line_number ].LastState,LineStat[ line_number ].State );
       fprintf(PrintEvent, "    Start Play Rec Audio err= %u nam=%s\n",err,filname2);
       return 0;
     }
    LineStat[line_number].V_Line=V_Play;
    PlayStartTime[line_number]=time(NULL);

    err=VL_PLAY(line_number,LineStat[line_number].pfhandle, 0l);
    if (err==-1)
     {
       LineStat[line_number].V_Line=V_DosError;
       event_data=0x04;
	fprintf(PrintEvent, "Error %d**err=%d\n   ",line_number,err);
	fprintf(PrintEvent, "Error : %u -- %u\n"
	     , LineStat[ line_number ].LastState,LineStat[ line_number ].State );
	fprintf(PrintEvent, "    Start Play Rec Audio err= %u nam=%s\n",err,filname2);
       return 0;
     }


    err=0;

//    while (1)
//	 {
//	  if (VL_PCHECK(line_number) == 0)
//	    {
//	    VL_PSTOP(line_number);
//	    close(LineStat[line_number].pfhandle);
//	    return 0 ;
//	    }
//	 }


    if (err<=0)
    if (strcmp(filname,"N.v")!=0)
    if (strcmp(CountMessagLine[line_number].message,filname) ==0 && CountMessagLine[line_number].count >MaxPlayOneMess)
       err=-1;
    else if (strcmp(CountMessagLine[line_number].message,filname) ==0)
	 CountMessagLine[line_number].count++;
	 else {
		strcpy(CountMessagLine[line_number].message,filname);
		CountMessagLine[line_number].count=1;
	      }


    return (err);
}
//==========================================================================
//==========================================================================
/***************************************
* Play greeting message                *
***************************************/
int PlayMsgDigitNotBreak(unsigned line_number,char filname[],char drive[])
{
    char filname2[100];
    strcpy(filname2,drive);
    strcat(filname2,filname);

     /* clear the LineIOArea structure */
    ClearLIOA(&lioarea[line_number]);
//    lio.lio_max_time = 0;          /* clear time limit */

      if (PF)
      {
/* */   fprintf(stdout, "    S P R N err= %u  nam=%s\n",err,filname2);
/*..*/  fprintf(PrintEvent, "    Start Play Rec Audio err= %u   nam=%s\n",err,filname2);
      }


    lioarea[line_number].lio_term_mask = 0;         /* terminate on all*/
    lioarea[line_number].lio_max_time    =600;     /*  time limit Sec*/
//  open(filname2, O_RDONLY)) == -1)
  if ((LineStat[line_number].pfhandle= sopen(filname2, O_RDONLY, SH_DENYNO, S_IREAD)) == -1)

   if (err==-1)
     {
       LineStat[line_number].V_Line=V_DosError;
       event_data=0x02;
       fprintf(PrintEvent, "Error %d**err=%d\n   ",line_number,err);
       fprintf(PrintEvent, "Error : %u -- %u\n"
		     , LineStat[ line_number ].LastState,LineStat[ line_number ].State );
       fprintf(PrintEvent, "    Start Play Rec Audio err= %u nam=%s\n",err,filname2);
       return 0;
     }

    LineStat[line_number].V_Line=V_Play;
    PlayStartTime[line_number]=time(NULL);
    err=VL_PLAY(line_number,LineStat[line_number].pfhandle, 0l);

    if (err==-1)
     {
       LineStat[line_number].V_Line=V_DosError;
       event_data=0x04;
       fprintf(PrintEvent, "Error %d**err=%d\n   ",line_number,err);
       fprintf(PrintEvent, "Error : %u -- %u\n"
	    , LineStat[ line_number ].LastState,LineStat[ line_number ].State );
      fprintf(PrintEvent, "    Start Play Rec Audio err= %u nam=%s\n",err,filname2);
       return 0;
     }

    err=0;


    if (err<=0)
    if (strcmp(filname,"N.v")!=0)
    if (strcmp(CountMessagLine[line_number].message,filname) ==0 && CountMessagLine[line_number].count >MaxPlayOneMess)
       err=-1;
    else if (strcmp(CountMessagLine[line_number].message,filname) ==0)
	 CountMessagLine[line_number].count++;
	  else {
		strcpy(CountMessagLine[line_number].message,filname);
		 CountMessagLine[line_number].count=1;
		}
    return (err);
}
//==========================================================================
int RecMsgDigitBreak(unsigned line_number,char filname[],char drive[])
{
    char filname2[100];
    strcpy(filname2,drive);
    strcat(filname2,filname);


    LineStat[line_number].V_Line=V_Record;
    RecordStartTime[line_number]=time(NULL);

   if ((LineStat[line_number].pfhandle=creat(filname2,  S_IWRITE)) == -1)
    {
       LineStat[line_number].V_Line=V_DosError;
       event_data=0x7;
       fprintf(PrintEvent, "ERROR %d**err=%d\n   ",line_number,err);
       fprintf(PrintEvent, " Error : %u -- %u\n"
		     , LineStat[ line_number ].LastState,LineStat[ line_number ].State );

       return 0;
     }

    if ((err=VL_RECORD(line_number, LineStat[line_number].pfhandle)) == 0)
    return err;
    else
	{
	 LineStat[line_number].V_Line=V_DosError;
	 event_data=0x04;
	 fprintf(PrintEvent, "Error %d**err=%d\n   ",line_number,err);
	 fprintf(PrintEvent, "Error : %u -- %u\n"
	      , LineStat[ line_number ].LastState,LineStat[ line_number ].State );
/*..*/    fprintf(PrintEvent, "    Start Play Rec Audio err= %u nam=%s\n",err,filname2);
	 return 0;
	 }

}
/************************************************************/
GetEvent(unsigned *line_number,unsigned *event_code, unsigned *event_data)
{
 static int line_Pol=0;
 int Tone;

  line_Pol++;
  if (line_Pol >=MaxLine)
   line_Pol=1;
 *line_number=line_Pol;

 switch (LineStat[line_Pol].V_Line)
 {
 case V_Start      :
		    {
		      if (VL_RING(line_Pol)==1 && RingFlagLine[line_Pol]==0)
			{ time(&tnow);
			  RingFlagLine[line_Pol]=1;
			  RingTime[line_Pol]=tnow;
			  *event_code=0; *event_data=0; return 0;
			}
		       else if (RingFlagLine[line_Pol]==1)
			     {
			       time(&tnow);
			       if ((tnow - RingTime[line_Pol]) > TIME_RING)
			       { RingFlagLine[line_Pol]=0;
				 *event_code=RINGR; *event_data=0;return 0;}
			       else{ *event_code=0; *event_data=0;return 0;}
			     }
			    else { *event_code=0; *event_data=0; return 0; }
		    }
 case V_OffHook    :
		    {
		     time(&tnow);
		     if ((tnow - OnHook_StartTime[line_Pol]) > HOOK_SETTLE_TIME)
		      {*event_code=OFFHC;  *event_data=0; return 0;}
		    else {  *event_code=0; *event_data=0; return 0; }
		    }
 case V_OnHook    :
		   {
		     time(&tnow);
		     if (tnow - OnHook_StartTime[line_Pol] > HOOK_SETTLE_TIME)
		       {  *event_code=ONHC;  *event_data=0; return 0;  }
		    else {  *event_code=0; *event_data=0; return 0; }
		   }
 case V_Play       :
		    {
		     if (VL_PCHECK(line_Pol) == 0)
		      {
			 VL_PSTOP(line_Pol);
			 close(LineStat[line_Pol].pfhandle);
			 *event_code=PBEOF;
			 *event_data=0;
			 return 0;
		      }
		      else
		     if(lioarea[line_Pol].lio_term_mask == 0x1    /* terminate on Dig*/
			      && (Tone=VL_GETDTMF(line_Pol)) !=0)
		      {
			    if (lioarea[line_Pol].lio_term_digit== '@' ||
				lioarea[line_Pol].lio_term_digit== Tone  )
			     {
			       VL_PSTOP(line_Pol);
			       close(LineStat[line_Pol].pfhandle);
			       *event_code=TERMDIG1;  *event_data=Tone;
			       COD_TON_BUF[line_Pol].buf[0]=Tone;
			       COD_TON_BUF[line_Pol].count=1;
			       return 0;
			     }
			    else {  *event_code=0; *event_data=0; return 0; }
		      }
		      else {  *event_code=0; *event_data=0; return 0; }
//		      time(&tnow);
//		     if ((tnow - PlayStartTime[line_Pol]) >lioarea[line_Pol].lio_max_time)
//		       {
//		       VL_PSTOP(line_Pol);
//		       close(LineStat[line_Pol].pfhandle);
//		       *event_code=PBEOF; event_data=0; return 0;
//		      }
//		     else {  *event_code=0; *event_data=0; return 0; }

		    }
 case V_GetDigits  :
		    {  time_t tempTime,temp,temp2;
		     if (COD_TON_BUF[line_Pol].count>=lioarea[line_Pol].lio_max_digits)
			  { COD_TON_BUF[line_Pol].buf[ COD_TON_BUF[line_Pol].count ]=0;
			   *event_code=MAXDGTS; *event_data=0;return 0;
			  }
		      else
		      {
			if((Tone=VL_GETDTMF(line_Pol)) !=0)
			{
			 COD_TON_BUF[line_Pol].StartTime=time(NULL);;
			 if (COD_TON_BUF[line_Pol].count<lioarea[line_Pol].lio_max_digits)
			 {
			    COD_TON_BUF[line_Pol].buf[ COD_TON_BUF[line_Pol].count ]=Tone;
			    COD_TON_BUF[line_Pol].count++;
			 }
			 if (COD_TON_BUF[line_Pol].count>=lioarea[line_Pol].lio_max_digits)
			  { COD_TON_BUF[line_Pol].buf[ COD_TON_BUF[line_Pol].count ]=0;
			    *event_code=MAXDGTS; *event_data=0;
			  }
			 else  {  *event_code=DIGREC; *event_data=Tone; return 0; }

			}
			else
			{
			  tempTime=time(NULL);
			  temp2=tempTime -COD_TON_BUF[line_Pol].StartTime;
			 if(temp2>lioarea[line_Pol].lio_id_delay)
			    { COD_TON_BUF[line_Pol].buf[ COD_TON_BUF[line_Pol].count ]=0;
			      *event_code=IDDTERM; *event_data=0; return 0;
			    }
			 else {  *event_code=0; *event_data=0; return 0; }

			}
		      }

		     break;
		    }
  case V_DosError :
		   {  *event_code=PWRDOSER;LineStat[line_Pol].V_Line=0; /* event_data=0*/; return 0; }
 case V_Record    :
		    { unsigned long Byt;
		     time(&tnow);
		     if ((Byt=VL_RCHECK(line_Pol)) == -1l)
		     {
		      VL_RSTOP(line_Pol);
		      close(LineStat[line_Pol].pfhandle);
		      *event_code=PWRDOSER; *event_data=(unsigned)0xeeef; return 0;
		     }
		    else
		     if(lioarea[line_Pol].lio_term_digit== (Tone=VL_GETDTMF(line_Pol))  )
			     {
			       *event_code=TERMDIG1;  *event_data=Tone;
			       COD_TON_BUF[line_Pol].buf[0]=Tone;
			       COD_TON_BUF[line_Pol].count=1;
			       VL_RSTOP(line_Pol);
			       close(LineStat[line_Pol].pfhandle);
			       return 0;
			     }
			    else ;
		     if ((tnow - RecordStartTime[line_Pol]) >lioarea[line_Pol].lio_max_time)
		       {
		       VL_RSTOP(line_Pol);
		       close(LineStat[line_Pol].pfhandle);
		       *event_code=MAXSECS; event_data=0; return 0;
		      }
		     else ;
		    if (Byt>=lioarea[line_Pol].lio_byte_count)
		      {
		       VL_RSTOP(line_Pol);
		       close(LineStat[line_Pol].pfhandle);
		       *event_code=MAXBYTES; event_data=0; return 0;
		      }
		    else {  *event_code=0; *event_data=0; return 0; }


		    }
  case V_SendDigits  :
		       {

		       }

 defualt           :
		    {  *event_code=0; *event_data=0; return 0; }
 }/*End Case */
 *event_code=0; *event_data=0; return 0;
}
/************************************************************/
/***************************************
* Get or generate an event             *
***************************************/

int NextEvent()
{
    int err = 0;

    if (!initialized)
    {
	 event_code = INITRQST;
	 line_number = 0;
	 initialized = TRUE;
    }

    else if (kbhit())
    {
	 event_code = KEYPRESS;
	 event_data= getche();
    }

    else
    {
	 err = GetEvent(&line_number, &event_code, &event_data);

    }
 if ( event_code== 0 && err<=0)
   err=CheckEndEventTimeAndMaxTimeSystem();
 else
   LineStat[line_number].EndEventTime= time(NULL);

    return (err);
}


/***************************************
* Do nothing...                        *
***************************************/
int NoOp()
{
    return(0);
}


//==========================================================================
//==========================================================================
//==========================================================================
/***************************************
* Return to DOS                        *
***************************************/
void XIt()
{     int i;
//+    StopPWRLINE();                    /* stop Powerline operations */
 for(i=1; i<=line_count; i++)
 VL_STOP(i);
}

//==========================================================================
void PrintEven(unsigned line_number,unsigned event_code, unsigned event_data)
{

  switch(event_code)
    {
	      case NOEVENT  :
		   break;
	      case RINGR    :
			     {
				fprintf(stdout, "RINGR line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				fprintf(PrintEvent, "RINGR line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				break;
			     }
	      case OFFHC    :
			     {
			       fprintf(stdout, "  OFFHC   line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
			       fprintf(PrintEvent, "  OFFHC   line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
			       break;
			     }

	      case ONHC     :
			     {
				fprintf(stdout, "  ONHC   line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				fprintf(PrintEvent, "  ONHC   line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				break;
			     }
	      case PBEOF    :
			     {
				fprintf(stdout, "    PBEOF   line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				fprintf(PrintEvent, "    PBEOF   line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				break;
			     }
	      case LSTOP    :
			     {
				fprintf(stdout, "      LSTOP  line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				fprintf(PrintEvent, "      LSTOP  line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				break;
			     }
	      case LSTERM   :
			     {
				fprintf(stdout, "      LSTERM   line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				fprintf(PrintEvent, "      LSTERM   line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				break;
			     }
	      case PWRDOSER :
			     {
			     fprintf(stdout, "     PWRDOSER  line %u Event %2XH, Data %4XH ", line_number, event_code, event_data);
			     fprintf(PrintEvent, "     PWRDOSER  line %u Event %2XH, Data %4XH ", line_number, event_code, event_data);
				switch(event_data)
				{
				 case 0xeeef:{fprintf(stdout, "Out of disk Space\n ");fprintf(PrintEvent, "Out of disk Space\n ");
					      break;
					     }
				 case 0xeef0:{fprintf(stdout, "Buffer not ready \n");fprintf(PrintEvent, "Buffer not ready \n");
					      break ;
					     }
				 case 0x0002:{fprintf(stdout, "File Not Found \n");fprintf(PrintEvent, "File Not Found \n");
					      break;
					     }
				 case 0x0003:{fprintf(stdout, "Path Not Found");fprintf(PrintEvent, "Path Not Found");
					       break;
					     }
				 case 0x0004:{fprintf(stdout, "No Handles Available \n");fprintf(PrintEvent, "No Handles Available \n");
					       break;
					      }
				 case 0x0005:{fprintf(stdout, "Access Denied \n" );fprintf(PrintEvent, "Access Denied \n" );
					       break;
					      }
				 case 0x000f:{fprintf(stdout, "Invalid Drive\n");fprintf(PrintEvent, "Invalid Drive\n");
					       break;
					     }
				}

				break;
			     }
	      case DIGREC   :
			     {  unsigned int MSB,LSB;
				MSB=(event_data & 0xFF00) >> 8;
				LSB=(event_data & 0x00FF);
				fprintf(stdout, "        DIGREC Line %u Even %2XH, Data %4XH ", line_number, event_code, event_data);
				fprintf(PrintEvent, "        DIGREC Line %u Even %2XH, Data %4XH ", line_number, event_code, event_data);
				switch(MSB)
				{
				 case 01:{fprintf(stdout, "01 PULSE DIG Type A , Digit %d \n", LSB);fprintf(PrintEvent, "01 PULSE DIG Type A , Digit %d \n", LSB);
					   break;
					 }
				 case 02:{fprintf(stdout, "02 DTMF  DIG Type   , Digit %d \n", LSB);fprintf(PrintEvent, "02 DTMF  DIG Type   , Digit %d \n", LSB);
					   break;
					 }
				 case 03:{fprintf(stdout, "03 PARTIAL PULSE DIG Type A , Digit %d \n", LSB);fprintf(PrintEvent, "03 PARTIAL PULSE DIG Type A , Digit %d \n", LSB);
					   break;
					 }
				 case 05:{fprintf(stdout, "05 PULSE DIG EDGE Type B , Digit %d \n", LSB);fprintf(PrintEvent, "05 PULSE DIG EDGE Type B , Digit %d \n", LSB);
					   break;
					 }
				 case 06:{fprintf(stdout, "06 PULSE DIG TIME Type B , Digit %d \n", LSB);fprintf(PrintEvent, "06 PULSE DIG TIME Type B , Digit %d \n", LSB);
					   break;
					 }
				}
			       break;
			      }
	      case MAXDGTS  :
			     {
				fprintf(stdout, "      MAXDGTS  line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				fprintf(PrintEvent, "      MAXDGTS  line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				break;
			     }
	      case TERMDIG1 :
			     {  unsigned int MSB,LSB;
				MSB=(event_data & 0xFF00) >> 8;
				LSB=(event_data & 0x00FF);
				fprintf(stdout, "      TERMDIG1  line %u Event %2XH, Data %4XH ", line_number, event_code, event_data);
				fprintf(PrintEvent, "      TERMDIG1  line %u Event %2XH, Data %4XH ", line_number, event_code, event_data);
				switch(MSB)
				{
				 case 01:{fprintf(stdout, "01 PULSE DIG Type A , Digit %d \n", LSB);fprintf(PrintEvent, "01 PULSE DIG Type A , Digit %d \n", LSB);
					  break;
					 }
				 case 02:{
					  fprintf(stdout, "02 DTMF  DIG Type   , Digit %d \n", LSB);fprintf(PrintEvent, "02 DTMF  DIG Type   , Digit %d \n", LSB);
					  break;
					 }
				 case 03:{fprintf(stdout, "03 PARTIAL PULSE DIG Type A , Digit %d \n", LSB);fprintf(PrintEvent, "03 PARTIAL PULSE DIG Type A , Digit %d \n", LSB);
					  break;
					 }
				 case 05:{fprintf(stdout, "05 PULSE DIG EDGE Type B , Digit %d \n", LSB);fprintf(PrintEvent, "05 PULSE DIG EDGE Type B , Digit %d \n", LSB);
					   break;
					 }
				 case 06:{fprintf(stdout, "06 PULSE DIG TIME Type B , Digit %d \n", LSB);fprintf(PrintEvent, "06 PULSE DIG TIME Type B , Digit %d \n", LSB);
					  break;
					  }
				}

				break;
			     }
	      case TERMDIG2 :
			     {  unsigned int MSB,LSB;
				MSB=(event_data & 0xFF00) >> 8;
				LSB=(event_data & 0x00FF);
				fprintf(stdout, "      TERMDIG2  line %u Event %2XH, Data %4XH ", line_number, event_code, event_data);
				fprintf(PrintEvent, "      TERMDIG2  line %u Event %2XH, Data %4XH ", line_number, event_code, event_data);
				switch(MSB)
				{
				 case 01:{fprintf(stdout, "01 PULSE DIG Type A , Digit %d \n", LSB);fprintf(PrintEvent, "01 PULSE DIG Type A , Digit %d \n", LSB);
					  break;
					 }
				 case 02:{
					  fprintf(stdout, "02 DTMF  DIG Type   , Digit %d \n", LSB);fprintf(PrintEvent, "02 DTMF  DIG Type   , Digit %d \n", LSB);
					  break;
					 }
				 case 03:{fprintf(stdout, "03 PARTIAL PULSE DIG Type A , Digit %d \n", LSB);fprintf(PrintEvent, "03 PARTIAL PULSE DIG Type A , Digit %d \n", LSB);
					  break;
					 }
				 case 05:{fprintf(stdout, "05 PULSE DIG EDGE Type B , Digit %d \n", LSB);fprintf(PrintEvent, "05 PULSE DIG EDGE Type B , Digit %d \n", LSB);
					   break;
					 }
				 case 06:{fprintf(stdout, "06 PULSE DIG TIME Type B , Digit %d \n", LSB);fprintf(PrintEvent, "06 PULSE DIG TIME Type B , Digit %d \n", LSB);
					  break;
					  }
				}

				break;
			     }

	      case MAXBYTES :
			     {
				fprintf(stdout, "      MAXBYTES   line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				fprintf(PrintEvent, "      MAXBYTES   line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				break;
			     }

	      case MAXSECS  :
			     {
				fprintf(stdout, "      MAXSECS   line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				fprintf(PrintEvent, "      MAXSECS   line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				break;
			     }
	      case DIALCMPL :
			     {
				fprintf(stdout, "      DIALCMPL   line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				fprintf(PrintEvent, "      DIALCMPL   line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				break;
			     }

	      case MAXSIL   :
			     {
				fprintf(stdout, "       MAXSIL  line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				fprintf(PrintEvent, "      MAXSIL  line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				break;
			     }
	      case SILCHG   :
			     {
			/*	unsigned int LSB;
				LSB=(event_data & 0x00FF);
				fprintf(stdout, "          SILCHG line %u Event %2XH, Data %4XH ", line_number, event_code, event_data);
				fprintf(PrintEvent, "          SILCHG line %u Event %2XH, Data %4XH ", line_number, event_code, event_data);
				switch(LSB)
				{
				 case 0x01:{fprintf(stdout, " For Silence ON\n");fprintf(PrintEvent, " For Silence ON\n");
					    break;
					   }
				 case 0x02:{fprintf(stdout, " For Silence OFF\n");fprintf(PrintEvent, " For Silence OFF\n");
					      break;
					   }
				 case 0x03:{fprintf(stdout, " For Debounced Clunk Bit ON\n");fprintf(PrintEvent, " For Debounced Clunk Bit ON\n");
					     break;
					   }
				 case 0x04:{fprintf(stdout, " For Debounced Clunk Bit OF\n");fprintf(PrintEvent, " For Debounced Clunk Bit OF\n");
					     break;
					   }
				}
				  Get3Tuple(line_number,&Get3TupleStru);
			    fprintf(stdout, "          3TLin %u edg_TotaNumClun=%d,Energy_SumClunkEnergy=%d TimClunk=%d\n", line_number
				 ,Get3TupleStru.edge,Get3TupleStru.energy,Get3TupleStru.time );
			    fprintf(PrintEvent, "          3TLin %u edg_TotaNumClun=%d,Energy_SumClunkEnergy=%d TimClunk=%d\n", line_number
				 ,Get3TupleStru.edge,Get3TupleStru.energy,Get3TupleStru.time );
						     */

				break;
			     }

	      case LOOPEV   :
			     {
			       unsigned int LSB;
				LSB=(event_data & 0x00FF);
				fprintf(stdout, "      LOOPEV  line %u Event %2XH, Data %4XH ", line_number, event_code, event_data);
				fprintf(PrintEvent, "      LOOPEV  line %u Event %2XH, Data %4XH ", line_number, event_code, event_data);
				switch(LSB)
				{
				 case 0x01:{fprintf(stdout, " Line Current ON\n");fprintf(PrintEvent, " Line Current ON\n");
					    break;
					   }
				 case 0x02:{fprintf(stdout, " Line Current OFF\n");fprintf(PrintEvent, " Line Current OFF\n");
					     break;
					   }
				 case 0x03:{fprintf(stdout, " Line Current Interuption\n");fprintf(PrintEvent, " Line Current Interuption\n");
					    break;
					   }
				 case 0x04:{fprintf(stdout, " Line Current Puls\n");fprintf(PrintEvent, " Line Current Puls\n");
					    break;
					   }
				 case 0x11:{fprintf(stdout, "Local Current ON \n");fprintf(PrintEvent, "Local Current ON \n");
					     break;
					   }
				 case 0x12:{fprintf(stdout, "Local Current OFF \n");fprintf(PrintEvent, "Local Current OFF \n");
					     break;
					   }
				}

				break;
			     }
	      case CALLPROG :
			     {
			       unsigned int LSB;
				LSB=(event_data & 0x00FF);
				fprintf(stdout, "      CALLPROG  line %u Event %2XH, Data %4XH ", line_number, event_code, event_data);
				fprintf(PrintEvent, "      CALLPROG  line %u Event %2XH, Data %4XH ", line_number, event_code, event_data);
				switch(LSB)
				{
				 case 0x01:{fprintf(stdout, " Dial Tone\n");fprintf(PrintEvent, " Dial Tone\n");
					   break;
					   }
				 case 0x02:{fprintf(stdout, " Ring\n");fprintf(PrintEvent, " Ring\n");
					     break;
					   }
				 case 0x03:{fprintf(stdout, " Busy Signal\n");fprintf(PrintEvent, " Busy Signal\n");
					     break;
					   }
				 case 0x04:{fprintf(stdout, " Re-Oredr (Fast Busy)\n");fprintf(PrintEvent, " Re-Oredr (Fast Busy)\n");
					    break;
					   }
				 case 0x05:{fprintf(stdout, "Voice \n");fprintf(PrintEvent, "Voice \n");
					     break;
					   }
				 case 0x06:{fprintf(stdout, "User Defined \n");fprintf(PrintEvent, "User Defined \n");
					    break;
					   }
				}
				break;
			     }

	      case IDDTERM  :
			     {
				fprintf(stdout, "      IDDTERM   line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				fprintf(PrintEvent, "      IDDTERM   line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				break;
			     }
	      case MAXNSIL  :
			     {
				fprintf(stdout, "      MAXNSIL   line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				fprintf(PrintEvent, "      MAXNSIL   line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				break;
			     }

/*************SubEvent********************************/
	      case INITRQST :
			     {
				fprintf(stdout, "INITRQST   line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				fprintf(PrintEvent, "INITRQST   line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				break;
			     }

	      case KEYPRESS :
			     {
				fprintf(stdout, " KEYPRESS   line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				fprintf(PrintEvent, " KEYPRESS   line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				break;
			     }
	      case LOOPLCON :
			     {
				fprintf(stdout, " LOOPLCON  line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				fprintf(PrintEvent, " LOOPLCON  line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				break;
			     }
	      case LOOPLCOFF:
			     {
				fprintf(stdout, " LOOPLCOFF  line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				fprintf(PrintEvent, " LOOPLCOFF  line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				break;
			     }
	      case EVENTSTAR:
			     {
				fprintf(stdout, " EVENTSTAR  line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				fprintf(PrintEvent, " EVENTSTAR  line %u Event %2XH, Data %4XH \n", line_number, event_code, event_data);
				break;
			     }

	     default: {	 fprintf(stdout, "********Event %2XH, Data %4XH on line %u\n", event_code, event_data, line_number);
			 fprintf(PrintEvent, "Event %2XH, Data %4XH on line %u\n", event_code, event_data, line_number);
		       break;
		      }
	 }
}
//==========================================================================

//**************************************************************************
Tree_Open(char TreeFileName[])
{
  char TreeName[100];
  strcpy(TreeName,DriveTreeName);
  strcat(TreeName,TreeFileName);

 if ( (FPTree= fopen(TreeName,"r+b"))== NULL )
   return 0;
 else return 1;
}
//**************************************************************************
void  ReadCurrentNod()
{
 fseek(FPTree , PointCurrentNod[line_number], SEEK_SET );
 fread(&NodLT[line_number], sizeof(StructTree), 1 , FPTree );
}
//**************************************************************************
/***************************************
*  GoOnhook                         *
***************************************/
int GoOnHook(unsigned int line)
{
    int err;
 time(&tnow);
 LineStat[line_number].V_Line=V_OnHook     ;
 OnHook_StartTime[line_number]=tnow;
//+    err = SetRelays(line, ONHOOK, ONLINE);
VL_HANGUP(line);

    return (err);
}

/***************************************
*  Onhook                         *
***************************************/
int OnHook()
{
 time(&tnow);
 LineStat[line_number].V_Line=V_OnHook     ;
 OnHook_StartTime[line_number]=tnow;
//    err = SetRelays(line_number, ONHOOK, ONLINE);
VL_HANGUP(line_number);
    return (0);
}
//==========================================================================
GoTo_V_Start()
{
     LineStat[line_number].V_Line=V_Start     ;
    return(0);
}

//==========================================================================
/***************************************
*  Offhook                        *
***************************************/
int OffHook()
{
  time(&tnow);
  OffHook_StartTime[line_number]=tnow;
  LineStat[line_number].StartTime=tnow;
  LineStat[line_number].EndEventTime=tnow;
  LineStat[line_number].V_Line=V_OffHook;
//+  err = SetRelays(line_number, OFFHOOK, ONLINE);
VL_PICKUP(line_number);
  return (0);
}
//==========================================================================
ClearDigits(unsigned  line_number)
{
COD_TON_BUF[line_number].count=0;
VL_GETDTMF(line_number);
 return 0;
}
//==========================================================================
GetDigits(unsigned line_number,LINEIOAREA *lioarea)
{
 LineStat[line_number].V_Line=V_GetDigits;
 COD_TON_BUF[line_number].StartTime=time(NULL);
 return 0 ;
}
//==========================================================================
PlayGr1()
{
  struct  time t;
  CountRefresh++;
  gettime(&t);
  LineStat[line_number].StartTime= time(NULL);
  LineStat[line_number].EndEventTime= time(NULL);

//+  SendDigitRecogTone(line_number);

  ClearDigits(line_number);

  if (t.ti_hour< 12)
    err=PlayMsgDigitNotBreak(line_number,"Sobh.v", DriveSysName);
  else if (t.ti_hour >= 12  && t.ti_hour <16)
   err=PlayMsgDigitNotBreak(line_number,"zohr.v", DriveSysName);
 else if (t.ti_hour >= 16  && t.ti_hour <19)
   err=PlayMsgDigitNotBreak(line_number,"asr.v", DriveSysName);
 else if (t.ti_hour>= 19  )
   err=PlayMsgDigitNotBreak(line_number,"shab.v", DriveSysName);

  if (err ==-1)
   {
     LineStat[line_number].LastState=LineStat[line_number].State;
     LineStat[line_number].State=PlayGoodByState;
   }
  return err ;
}
//==========================================================================
PlayGr2()
{
  ClearDigits(line_number);
  err=PlayMsgDigitNotBreak(line_number,"NamVah.v", DriveSysName);
  if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;
}

//==========================================================================
PlayGr()
{
  ClearDigits(line_number);
  err=PlayMsgDigitBreak(line_number,"Greeting.v", DriveSysName);
  if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;
}

//==========================================================================
PlayGoodBy()
{
  err=PlayMsgDigitNotBreak(line_number,"GoodBy.v", DriveSysName);
  if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;
}
//==========================================================================
PlayOutTime()
{
 err=PlayMsgDigitNotBreak(line_number,"O.v", DriveSysName);
  if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;
}


//==========================================================================
PlayGoran()
{

  err=PlayMsgDigitBreak(line_number,"Goran.v", DriveGoranName);
   if (err ==-1)
   {
     LineStat[line_number].LastState=LineStat[line_number].State;
     LineStat[line_number].State=PlayGoodByState;
   }
  return err;
}
//==========================================================================
PlayBlundeNo()
{

  err=PlayMsgDigitNotBreak(line_number,"Bl.v", DriveSysName);
   if (err ==-1)
   {
     LineStat[line_number].LastState=LineStat[line_number].State;
     LineStat[line_number].State=PlayGoodByState;
   }
  return err;
}
//==========================================================================
PlayInfoSys()
{

  err=PlayMsgDigitBreak(line_number,"InfoSys.v", DriveSysName);
   if (err ==-1)
   {
      LineStat[line_number].LastState=LineStat[line_number].State;
      LineStat[line_number].State=PlayGoodByState;
   }
  return err;
}

//==========================================================================
PlayDosEr()
{

  fprintf(PrintEvent, "proc %d**err=%d\n   ",line_number,err);
  fprintf(PrintEvent, " s c : %u -- %u\n"
		     , LineStat[ line_number ].LastState,LineStat[ line_number ].State );

  err=PlayMsgDigitBreak(line_number,"DosError.v", DriveSysName);
   if (err ==-1)
   {
     LineStat[line_number].LastState=LineStat[line_number].State;
     LineStat[line_number].State=PlayGoodByState;
   }
  return err;
}


//==========================================================================
PlayNull()
{

  err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
  return err;
}

//==========================================================================
GetDigGr()
{
ClearLIOA(&lioarea[line_number]);

lioarea[line_number].lio_id_delay =5;

lioarea[line_number].lio_max_digits=1;
//+lioarea[line_number].lio_loop_sig=0xff;
err=GetDigits(line_number,&lioarea[line_number]);
return err;
}
//==========================================================================
PlayTreeNod()
{

  ClearDigits(line_number);
  ReadCurrentNod();
  err=PlayMsgDigitBreak(line_number,NodLT[line_number].VoiceFileName, DriveTreeNameV);
  if (err ==-1)
  {
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=PlayGoodByState;
  }
  return err;

}

//==========================================================================
GetDigTree()
{
ClearLIOA(&lioarea[line_number]);
//*lioarea[line_number].lio_data_buff=strbuff[line_number];
lioarea[line_number].lio_id_delay =5;
lioarea[line_number].lio_max_digits=1;
lioarea[line_number].lio_loop_sig=0xff;
err=GetDigits(line_number,&lioarea[line_number]);
return err;
}
//==========================================================================
CheckTreeLf()
{
if (NodLT[line_number].CountChild==0)
{
  PointCurrentNod[line_number]=NodLT[line_number].FatherPoint;
}
else ;
  err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
  return err;

}
//==========================================================================
CheckTreeST()  /*chech event star in getdigit */
{
if (PointCurrentNod[line_number]!=0)
{
  PointCurrentNod[line_number]=NodLT[line_number].FatherPoint;
  LineStat[line_number].LastState=LineStat[line_number].State;
  LineStat[line_number].State=32;
  err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
  return err;
}
else
  {
    PointCurrentNod[line_number]=0;
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=6;
    err=PlayGr();
    if (err<=0)
      return -1;
    else return err;
  }
}
//***************************************************************
CheckDTree()
{int i;
  if (COD_TON_BUF[line_number].buf[0]==11)
  {
    err=CheckTreeST();
    return err;
  }
  else
  {
  i=COD_TON_BUF[line_number].buf[0]-1;
//+    i=(strbuff[line_number][0]-'0')-1;
    if (i>=0 && i<NodLT[line_number].CountChild)
    {
     PointCurrentNod[line_number]=NodLT[line_number].ChildPoint[i];
     err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
     return err;
    }
    else  {
	   err=PlayBlundeNo(); /*if doubl meseg state goodby*/
	   return err;
	  }
  }
 }
//==========================================================================
PlDosErTr()
{
if (PointCurrentNod[line_number]!=0)
{
  PointCurrentNod[line_number]=NodLT[line_number].FatherPoint;
  LineStat[line_number].LastState=LineStat[line_number].State;
  LineStat[line_number].State=32;
}
else
  {
    PointCurrentNod[line_number]=0;
    LineStat[line_number].LastState=LineStat[line_number].State;
    LineStat[line_number].State=6;
  }
  err=PlayMsgDigitBreak(line_number,"DosError.v", DriveSysName);
   if (err ==-1)
   {
     LineStat[line_number].LastState=LineStat[line_number].State;
     LineStat[line_number].State=PlayGoodByState;
   }
  if (err<=0)
	return -1;
  else return err;
}
//==========================================================================
CheckDGr()
{
CountRefreshUsed++;
if (COD_TON_BUF[line_number].buf[0]==2)
 {
   err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
   return err;
 }
// else if (COD_TON_BUF[line_number].buf[0]==4)
// {
//   LineStat[line_number].LastState=LineStat[line_number].State;
//   LineStat[line_number].State=32;
//   PointCurrentNod[line_number]=0;
//   err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
//   if (err<=0)
//   return -1;
// }
 else if (COD_TON_BUF[line_number].buf[0]==9)
 {
   LineStat[line_number].LastState=LineStat[line_number].State;
   LineStat[line_number].State=26;
   err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
   if (err<=0)
   return -1;
 }
 else if (COD_TON_BUF[line_number].buf[0]==1)
 {
   LineStat[line_number].LastState=LineStat[line_number].State;
   LineStat[line_number].State=50;
   err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
   if (err<=0)
   return -1;
 }

 else if (COD_TON_BUF[line_number].buf[0]==11)
 {

   LineStat[line_number].LastState=LineStat[line_number].State;
   LineStat[line_number].State=PlayGoodByState;
   err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
   if (err<=0)
   return -1;
 }
 else {

	LineStat[line_number].LastState=LineStat[line_number].State;
	LineStat[line_number].State=30;
	err=PlayMsgDigitNotBreak(line_number,"N.v", DriveSysName);
	if (err<=0)
	return -1;
      }
 return err;
}
//==========================================================================
GetDigInf()
{
ClearLIOA(&lioarea[line_number]);
//*lioarea[line_number].lio_data_buff=strbuff[line_number];
lioarea[line_number].lio_id_delay =2;
lioarea[line_number].lio_max_digits=5;
lioarea[line_number].lio_loop_sig=0xff;
err=GetDigits(line_number,&lioarea[line_number]);
return err;
}
//==========================================================================
CheckDInf()
{
 char kKey[100];
 int i;
if (COD_TON_BUF[line_number].buf[0]==8)
 {
   err=PlayMsgDigitNotBreak(line_number,"Inf2.v", DriveSysName);
   return err;
 }
 else {


	for (i=0;COD_TON_BUF[line_number].buf[i]!=11 && COD_TON_BUF[line_number].buf[i]!=NULL && i< 5;i++)
	 if (COD_TON_BUF[line_number].buf[i]== 10)
	   kKey[i]='0';
	 else  kKey[i]=COD_TON_BUF[line_number].buf[i]+'0';
	 kKey[i]=NULL;
	 if (strcmp(kKey,"99116")==0)
	 {
	   err=PlayMsgDigitNotBreak(line_number,"Irep.v", DriveSysName);
	   return err;
	 }
	 else
	 {
	   LineStat[line_number].LastState=LineStat[line_number].State;
	   LineStat[line_number].State=7;
	   err=PlayGr();
	   if (err<=0)
		return -1;
	 }
      }
 return err;
}
//==========================================================================
//==========================================================================
//==========================================================================