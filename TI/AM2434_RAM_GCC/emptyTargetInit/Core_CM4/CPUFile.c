#include "AM2432.h"


extern unsigned long svc;
extern unsigned long user;
extern unsigned long irq;
extern unsigned long fiq;

extern void __init_;

extern unsigned char isInterruptsEnabled;


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT


  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog(void)
{
}
