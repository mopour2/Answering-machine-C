#ifndef Shegerd_H
#define Shegerd_H

#define BYTE unsigned char

#define ERR_NONE                0
#define ERR_NOT_INIT            1
#define ERR_LOCK_NOT_FOUND      2
#define ERR_MIS_LOCK_CODE       3
#define ERR_MIS_PASS            4
#define ERR_INVALID_ADDR        5
#define ERR_LOCK_NOT_CONNECT    6

BYTE _ShegerdInitX(BYTE PortNo, unsigned lCode, char far *pass);
BYTE _ShegerdRSX(char far *Buffer);
BYTE _ShegerdRNX(int *userno);
BYTE _ShegerdRIDX(char far *Buffer);
BYTE _ShegerdRDX(BYTE BeginAddr, BYTE EndAddr, char far *Buffer);
BYTE _ShegerdWDX(BYTE BeginAddr, BYTE EndAddr, char far *Buffer);
BYTE _ShegerdInit(BYTE PortNo, unsigned lCode, char far *pass);
BYTE _ShegerdRS(char far *Buffer);
BYTE _ShegerdRN(int *userno);
BYTE _ShegerdRID(char far *Buffer);
BYTE _ShegerdRD(BYTE BeginAddr, BYTE EndAddr, char far *Buffer);
BYTE _ShegerdWD(BYTE BeginAddr, BYTE EndAddr, char far *Buffer);

#ifdef NOTRACE
  #define ShegerdInit(pn, lc, pass) _ShegerdInitX(pn, lc, pass)
  #define ShegerdRS(sn) _ShegerdRSX(sn)
  #define ShegerdRN(un) _ShegerdRNX(un)
  #define ShegerdRID(id) _ShegerdRIDX(id)
  #define ShegerdRD(ba, ea, sn) _ShegerdRDX(ba, ea, sn)
  #define ShegerdWD(ba, ea, sn) _ShegerdWDX(ba, ea, sn)
#else
  #define ShegerdInit(pn, lc, pass) _ShegerdInit(pn, lc, pass)
  #define ShegerdRS(sn) _ShegerdRS(sn)
  #define ShegerdRN(un) _ShegerdRN(un)
  #define ShegerdRID(id) _ShegerdRID(id)
  #define ShegerdRD(ba, ea, sn) _ShegerdRD(ba, ea, sn)
  #define ShegerdWD(ba, ea, sn) _ShegerdWD(ba, ea, sn)
#endif

#endif