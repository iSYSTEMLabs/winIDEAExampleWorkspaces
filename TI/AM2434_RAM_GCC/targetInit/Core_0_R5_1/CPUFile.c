#include "AM2432.h"


extern unsigned long svc;
extern unsigned long user;
extern unsigned long irq;
extern unsigned long fiq;

extern void __init_;

extern unsigned char isInterruptsEnabled;

extern unsigned long long _bootAddrMAIN_0_R5_1;
extern unsigned long long _bootAddrMAIN_1_R5_0;
extern unsigned long long _bootAddrMAIN_1_R5_1;


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT


  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog(void)
{
}
