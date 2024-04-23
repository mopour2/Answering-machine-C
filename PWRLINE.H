/*********************************************************************
 * PWRLINE.H  Powerline Commando interface definitions               *
 * Copyright (c) 1991, 1992, 1993 Talking Technology, Inc.           *
 * All rights reserved                                               *
 *********************************************************************/
#define V3 1
typedef unsigned char BYTE;
typedef unsigned int  WORD;
typedef unsigned long DWORD;

typedef unsigned char CHAR;     
typedef int BOOL;

#ifndef __TURBOC__
typedef unsigned char BFIELD;
#else
typedef unsigned int BFIELD;
#endif

/* utility macros */
#define  LSB(w)  ((w) & 0xFF)
#define  MSB(w)  (((unsigned) (w)) >> 8)
#define  LINE(x) (x - 1)

/*********************************************************************
 *                         Powerline Constants                       *
 *********************************************************************/

/********* Interrupt Enables ************/

#define  DCBON       0x4000            /* debounced clunk bit on     */
#define  DCBOFF      0x2000            /* debounced clunk bit off    */
#define  LCINTERRUP  0x1000            /* loop current interruption  */
#define  LOOPPULSE   0x0800            /* loop current pulse        */
#define  LOCALCOFF   0x0400            /* local phone off hook trans */
#define  LOCALCON    0x0200            /* local phone on hook trans  */
#define  DIGITREC    0x0100            /* digit received interrupt   */
#define  LCONTRANS   0x0080            /* loop current On trans      */
#define  ONHOOKCOMP  0x0020            /* onhook complete interrupt  */
#define  OFFHOOKCOMP 0x0010            /* offhook complete interrupt */
#define  SILENCEON   0x0008            /* silence on interrupt       */
#define  SILENCEOFF  0x0004            /* silence off interrupt      */
#define  RINGSREC    0x0002            /* rings received interrupt   */
#define  LCOFFTRANS  0x0001            /* loop current off trans     */

/*********** Conditions *****************/

#define  DTMPLAY     0x0001            /* playback mode              */
#define  DTMRECORD   0x0002            /* record mode                */
#define  OFFHOOK     0x0000            /* hook relay: off            */
#define  ONHOOK      0x0001            /* hook relay: on             */
#define  ONLINE      0x0000            /* line/local relay: line     */
#define  ONLOCAL     0x0001            /* line/local relay: local    */
#define  DRDTMF      0x0001            /* digit recog: dtmf          */
#define  DRCP        0x0004            /* digit recog: type A        */
#define  DRPARP      0x0006            /* digit recog: type A w/partial*/
#define  DRCPEDGE    0x000c            /* digit recog: type B edge   */
#define  DRCPTIME    0x000e            /* digit recog: type B time   */
#define  DRCALLA     0x0010            /* digit recog: call analysis */
#define  FLUSHDBYES  0x0001            /* flush input digit buffer   */
#define  FLUSHDBNO   0x0000            /* no digit buffer flush      */
#define  OLDLOADCPP  0x0002            /* old load pulse digit parms */
#define  LOADCPPARMS 0x0004            /* load pulse digit parameters*/

/************* Events codes ***********/

#define  NOEVENT  0x00                 /* event queue empty         */
#define  MAXDGTS  0x01                 /* maximum digits            */
#define  TERMDIG1 0x02                 /* terminating digit 1       */
#define  LSTOP    0x03                 /* line stop                 */
#define  PWRDOSER 0x04                 /* DOS error                 */
#define  MAXBYTES 0x05                 /* maximum bytes             */
#define  MAXSECS  0x07                 /* timeout: max seconds      */
#define  OFFHC    0x08                 /* offhook complete          */
#define  DIALCMPL 0x09                 /* dialing complete          */
#define  MAXSIL   0x0A                 /* timeout: silence          */
#define  PBEOF    0x0B                 /* playback: eof             */
#define  LSTERM   0x0C                 /* loop signal termination   */
#define  ONHC     0x0E                 /* onhook complete           */
#define  DIGREC   0x0F                 /* digit received            */
#define  LOOPEV   0x10                 /* loop event                */
#define  CALLPROG 0x12                 /* call progress tone detect */
#define  RINGR    0x15                 /* rings received            */
#define  SILCHG   0x16                 /* silence state changed     */
#define  TERMDIG2 0x1D                 /* termination digit 2       */
#define  IDDTERM  0x1E                 /* idd termination           */
#define  MAXNSIL  0x1F                 /* maximum non-silence       */

/************* Loop Event Data codes ***********/

#define  LELPCON  0x01                 /* loop current ON           */
#define  LELPCOFF 0x02                 /* loop current OFF          */
#define  LELPCI   0x03                 /* loop current interruption */
#define  LELPP    0x04                 /* loop current pulse        */
#define  LELLCON  0x11                 /* local current ON          */
#define  LELLCOFF 0x12                 /* local current OFF         */

/* call progress detection data codes */

#define  DIALTONE 0x01                 /* dialtone detected         */
#define  RINGTONE 0x02                 /* ringtone detected         */
#define  BUSYTONE 0x04                 /* busytone detected         */
#define  REORDER  0x08                 /* reorder tone detected     */
#define  VOX      0x10                 /* voice detected            */
#define  USERCPT  0x20                 /* user defined tone detected*/
#define  LOADCPP  0x80                 /* load call progress parms  */

/****************************************/
/******* AI interrupt Functions *********/
/****************************************/

#define AISTARTS       0x01    /* Start POWERLINE Board */
#define AISTOPS        0x03    /* Stop POWERLINE Board */
#define AISTOPL        0x04    /* Stop Line */
#define AILINSTAT      0x05    /* Get Line Status */
#define AISETHOOK      0x06    /* Set Hook */
#define AISETIC        0x07    /* Set Interrupt Condition */
#define AICLRDIGITS    0x08    /* Clear Digit Buffer */
#define AIGETDIGIT     0x09    /* Get Digit */
#define AIRECORDF      0x0C    /* Record File */
#define AIPLAYF        0x0D    /* Play File */
#define AIDIAL         0x0E    /* Transmit Digits */
#define AIGETDIGITS    0x0F    /* Get Digit String */
#define AIEVENT        0x10    /* Get Next Event */
#define AIREADWRITE    0x11    /* Read/Write Board */
#define AIRECORDIF     0x12    /* Record Indexed File */
#define AIPLAYIF       0x13    /* Play Indexed File */
#define AISETCP        0x1B    /* Set Call Progress */
#define AISSCA         0x1C    /* Set System Configuration Area */
#define AISLCA         0x1D    /* Set Line Configuration Area */
#define AISDR          0x1F    /* Set Digit Recognition */
#define AIGETVER       0x20    /* Get Version Number */
#define AIMIC          0x21    /* Microphone Control */
#define AISPEAKER      0x22    /* Speaker Control */
#define AILBOOST       0x23    /* Level Boost */
#define AIAGC          0x25    /* Set AGC mode */
#define AIBOARD        0x27    /* Get Board segment */
#define AICOMPAND      0x28    /* Set compander */
#define AICPMODE       0x29    /* Set CP mode */

/****************************************/
/******* AI Return Error Codes **********/
/****************************************/

#define AICLEANRTN     0x00
#define AINODIGITS     0x02    /* No Digits in Queue */
#define AISYSACTIVE    0x03    /* System Active */
#define AISYSNOTACT    0x04    /* System Not Active */
#define AIINVFUNC      0x06    /* Invalid Function in AH */
#define AIINVPARM      0x08    /* Invalid Parameter */
#define AIINVLINE      0x09    /* Invalid Line Number */
#define AILINEBUSY     0x0A    /* Line is Busy */
#define AINOTERM       0x0F    /* No Terminating Option Specified */
#define AIBUSY         0x8E    /* Applications Interface Busy */
#define AIMISSING      0x8F    /* TSR Not Installed */

/****************************************/
/****** Multiplex INT 2F constants ******/
/****************************************/

#define TTITSRID       0xCE    /* TTI TSR Process ID */
#define RET_AI_VECTOR  0x01    /* Return Applications Interface Vector */
#define MULTIPLEX      0x2F    /* Multiplexed Vector Retrieve Interrupt */
#define SUCCESS2F      0xFF    /* Successful 2F Interrupt */

/***************************************/
/* Line Mode Constants                 */
/***************************************/
#define LSSTOP         0x00    /* lsa_mode: Stop */
#define LSRECORD       0x01    /* lsa_mode: Record */
#define LSPLAYBACK     0x02    /* lsa_mode: Playback */
#define LSGETDIGIT     0x03    /* lsa_mode: Get Digit */
#define LSGOINGOFF     0x04    /* lsa_mode: Going Offhook */
#define LSDIALING      0x05    /* lsa_mode: Dialing */
#define LSGOINGON      0x06    /* lsa_mode: Going Onhook */
#define LSCALLANAL     0x07    /* lsa_mode: Call Analysis */
#define LSIRECORD      0x09    /* lsa_mode: Index Record */
#define LSIPLAYBACK    0x0A    /* lsa_mode: Index Playback */

/*********************************************************************
 *                        Powerline Structures                       *
 *********************************************************************/

/******************************************/
/*** Call Progress Detection Parameters ***/
/******************************************/

/* Instruct compiler to pack structures on byte boundaries.  This
 * pragma works for Microsoft C.  Command line switches can also be
 * used: /Zp1 for Microsoft and -a- for Turbo C.  Note that byte
 * packing is the default for Turbo C but not for Microsoft.
 */

#pragma pack(1)

#ifdef V1
struct ToneParms
{
    BFIELD binA       : 3;
    BFIELD chain      : 1;
    BFIELD binB       : 3;
    BFIELD enable     : 1;
    BFIELD valueA     : 6;
    BFIELD maxA       : 1;
    BFIELD reserved1  : 1;
    BFIELD valueB     : 6;
    BFIELD maxB       : 1;
    BFIELD reserved2  : 1;
    BFIELD highdeb    : 4;
    BFIELD lowdeb     : 4;
    BYTE hightest;
    BYTE lowtest;
    BYTE cyclecount;
};
#endif

#ifdef V2
struct ToneParms
{
	BFIELD Test1            : 6;
	BFIELD Aud1             : 1;    /* Byte A */
	BFIELD Max1             : 1;

	BFIELD Test2            : 6;
	BFIELD Aud2             : 1;    /* Byte B */
	BFIELD Max2             : 1;

	BFIELD Test3            : 7;
	BFIELD Max3             : 1;    /* Byte C */

	BFIELD Test4            : 7;
	BFIELD Max4             : 1;    /* Byte D */

	BFIELD HighTest         : 7;
	BFIELD Enable           : 1;    /* Byte E */

	BFIELD LowTest1         : 7;
	BFIELD Voice            : 1;    /* Byte F */

	BFIELD LowTest2         : 7;
	BFIELD Cycle            : 1;    /* Byte G */
};
#endif

#ifdef V3
struct ToneParms
{
	BFIELD Test1            : 6;
	BFIELD Aud1             : 1;    /* Byte A */
	BFIELD Max1             : 1;

	BFIELD Test2            : 6;
	BFIELD Aud2             : 1;    /* Byte B */
	BFIELD Max2             : 1;

	BFIELD Test3            : 7;
	BFIELD Max3             : 1;    /* Byte C */

	BFIELD Test4            : 7;
	BFIELD Max4             : 1;    /* Byte D */

	BFIELD HighTest         : 7;
	BFIELD Enable           : 1;    /* Byte E */

	BFIELD LowTest1         : 7;
	BFIELD Voice            : 1;    /* Byte F */

	BFIELD LowTest2         : 7;
	BFIELD Cycle            : 1;    /* Byte G */
};
#endif

struct NewParms
{
	BFIELD Test1            : 7;  /* Byte A */
	BFIELD Max1             : 1;

	BFIELD Test2            : 7;  /* Byte B */
	BFIELD Max2             : 1;

	BFIELD Test3            : 7;
	BFIELD Max3             : 1;    /* Byte C */

	BFIELD Test4            : 7;
	BFIELD Max4             : 1;    /* Byte D */

	BFIELD HighTest         : 7;
	BFIELD Enable           : 1;    /* Byte E */

	BFIELD LowTest1         : 7;
	BFIELD Voice            : 1;    /* Byte F */

	BFIELD LowTest2         : 7;
	BFIELD Cycle            : 1;    /* Byte G */
};

typedef struct ToneParms TONEPARMS;
typedef struct NewParms NEWPARMS;

struct ProgParms
{
	TONEPARMS tones[6];
};

struct NewProgParms
{
	NEWPARMS newtones[6];
};

typedef struct ProgParms PROGPARMS;
typedef struct NewProgParms NEWPROGPARMS;

#pragma pack()

/****************************************/
/****** Pulse Digit Detection Parms *****/
/****************************************/

struct DigitParms
{
	BYTE IDDMin;
	BYTE EnergyMin;
	BYTE EnergyMax;
	BYTE ParmABCD;
	BYTE ParmE;
	BYTE ClunkDebHL;
	BYTE EnergyMax2;
	BYTE RatioMax;
	BYTE ParmW;
	BYTE ParmX;
	BYTE ParmY;
	BYTE ParmZ;
};

typedef struct DigitParms DIGITPARMS;

/* Old DigitParms Structure (supported by SetDigitRecog, OLDLOADCPP bit) */

struct OldDigitParms
{
	BYTE IDDMin;
	BYTE EnergyMin;
	BYTE EnergyMax;
	BYTE ParmA;
	BYTE ParmB;
	BYTE ParmC;
	BYTE ParmD;
	BYTE ParmE;
};

typedef struct OldDigitParms OLDDIGITPARMS;

struct ThreeTuple
{
	int edge;          /* Number of clunk rising edges */
	int energy;        /* Total energy of the clunk pattern (2ms units) */
	int time;          /* Total time of the clunk pattern (2ms units) */
};

typedef struct ThreeTuple THREETUPLE;

/****************************************/
/******* System Configuration Area ******/
/****************************************/

struct SysConfigArea
{
	BYTE sca_ftime2;           /*   0 Flash Time 2               */
	BYTE sca_001;
	BYTE sca_ptime2;           /*   2 Pause Time 2               */
	BYTE sca_003;
	BYTE sca_min_offh;         /*   4 Minimum Offhook Time       */
	BYTE sca_005;
	BYTE sca_min_onh;          /*   6 Minimum Onhook Time        */
	BYTE sca_007;
	BYTE sca_flash_sep;        /*   8 Flash Separation           */
	BYTE sca_009[3];
	BYTE sca_ringdeb_off;      /*  12 Ring Debounce Interval Off */
	BYTE sca_ringdeb_on;       /*  13 Ring Debounce Interval On  */
	BYTE sca_014;
	BYTE sca_sil_thrhld;       /*  15 Silence Threshold          */
	BYTE sca_016[6];
	BYTE sca_tone_dur;         /*  22 Single Tone Duration       */
	BYTE sca_tone_sep;         /*  23 Single Tone Separation     */
	BYTE sca_dchar_def;        /*  24 Default Dialing Character  */
	BYTE sca_pchar2;           /*  25 Pause Character 2          */
	BYTE sca_pchar1;           /*  26 Pause Character 1          */
	BYTE sca_fchar2;           /*  27 Flash Character 2          */
	BYTE sca_fchar1;           /*  28 Flash Character 1          */
	BYTE sca_029;
	BYTE sca_ftime1;           /*  30 Flash Time 1               */
	BYTE sca_031;
	BYTE sca_ptime1;           /*  32 Pause Time 1               */
	BYTE sca_033[5];
	BYTE sca_pdbi;             /*  38 Pulse Dialing Break Intervl*/
	BYTE sca_039;
	BYTE sca_pdmi;             /*  40 Pulse Dialing Make Interval*/
	BYTE sca_041;
	BYTE sca_pdid;             /*  42 P.D.Interdigit Delay       */
	BYTE sca_043;
	BYTE sca_tdid;             /*  44 Tone Dialing Interdigit Dly*/
	BYTE sca_045;
	BYTE sca_odi;              /*  46 Offhook Delay Interval     */
	BYTE sca_047[5];
	BYTE sca_rcrd;             /*  52 Ring Count Reset Delay     */
	BYTE sca_053;
	BYTE sca_sildeb_off;       /*  54 Silence Debounce Intrvl Off*/
	BYTE sca_dtmfdeb_off;      /*  55 DTMF debounce off          */
	BYTE sca_sildeb_on;        /*  56 Silence Debounce Intrvl On */
	BYTE sca_dtmf_rec;         /*  57 DTMF receive time          */
	BYTE sca_dtmfdur;          /*  58 DTMF Tone Duration         */
	BYTE sca_localcd_on;       /*  59 Local Current Debounce On   */
	BYTE sca_localcd_off;      /*  60 Local Current Debounce Off  */
	BYTE sca_linecd_on;        /*  61 Line Current Debounce On   */
	BYTE sca_linecd_off;       /*  62 Line Current Debounce Off  */
	BYTE sca_064[9];
	BYTE sca_rde;              /*  72 Ring Detect Edge           */
	BYTE sca_073[85];
};

typedef struct SysConfigArea SYSCONFIGAREA;

/****************************************/
/*********** Line Status Area ***********/
/****************************************/

struct LineStatusArea
{
	BYTE  lsa_000[8];
	BYTE  lsa_raw_stat2;       /*  8 Raw Line Status            */
	BYTE  lsa_init_digit;      /*  9 Initiation Digit           */
	BYTE  lsa_010[2];
	int                     lsa_inten;           /* 12 Interrupt Enable Flags     */
	BYTE  lsa_mode;            /* 14 Current Line Mode          */
	BYTE  lsa_015[3];
	BYTE  lsa_term;            /* 18 Last Termination Code      */
	BYTE  lsa_019;
	DWORD  lsa_xfer_cnt;        /* 20 Pb/Rec Transfer Count      */
	int                     lsa_digits;          /* 24 Digits Received            */
	int                     lsa_term_data;       /* 26 termination data           */
	BYTE  lsa_028[2];
	int                     lsa_index;           /* 30 Current index to PlayIndex */
	int                     lsa_index_hndl;      /* 32 Indexed File Handle        */
	BYTE  lsa_034;             /* 34 NOT USED                   */
	BYTE  lsa_dos_cmd;         /* 35 DOS command                */
	int                     lsa_buff_rd;         /* 36 Data Buffer Read Pointer   */
	int                     lsa_buff_wr;         /* 38 Data Buffer Write Pointer  */
	BYTE  lsa_040[8];
};

typedef struct LineStatusArea LINESTATUSAREA;

/****************************************/
/******** Line Input/Output Area ********/
/****************************************/

struct LineIOArea
{
	BYTE lio_000[8];
	char far *    lio_fname;           /*  8 Pointer to ASCIIZ File Name*/
	BYTE lio_012[9];
	BYTE lio_comp_rate;       /* 21 Compression Rate           */
	BYTE lio_022[2];
	char far *    lio_data_buff;       /* 24 Off:Seg for Buffer Xfer    */
	long          lio_byte_count;      /* 28 Maximum Byte Transfer      */
	int           lio_max_time;        /* 32 Maximum Time (in Seconds)  */
	BYTE lio_max_digits;      /* 34 Maximum Digits             */
	BYTE lio_term_digit;      /* 35 Termination Digit          */
	BYTE lio_max_sil;         /* 36 Maximum Silence            */
	BYTE lio_loop_sig;        /* 37 Terminate on Loop Signal   */
	long          lio_index_addr;      /* 38 Off:Seg to Index           */
	BYTE lio_ctrl_flags;      /* 42 Control Flags              */
	BYTE lio_043[19];
	int           lio_init_digit;      /* 62 Initiator Digit            */
	int           lio_term_mask;       /* 64 Termination Mask           */
	BYTE lio_id_delay;        /* 66 Maximum Inter-digit Delay  */
	BYTE lio_max_nsil;        /* 67 Maximum Non-silence        */
	BYTE lio_068[52];
};

typedef struct LineIOArea LINEIOAREA;

/****************************************/
/********** Line Data Control ***********/
/****************************************/

struct line_data
{
	int            ldline;      /* Line Number                */
	struct LineIOArea     lioarea;     /* Line Input/Output Area     */
	struct LineStatusArea lsarea;      /* Line Status Area           */
};

typedef struct line_data LDATA;



