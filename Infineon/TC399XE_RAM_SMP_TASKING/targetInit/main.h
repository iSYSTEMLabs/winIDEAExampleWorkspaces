#ifndef __Main_h__
#define __Main_h__

extern int iCounter;
extern int iInterruptCounter;
extern unsigned char byTestByte;
extern unsigned short wTestWord;

extern void disableWatchdog(void);
extern void targetInit(void);
extern void CPU_Pointers(void);
extern void CPU_Recursion(void);

#endif

