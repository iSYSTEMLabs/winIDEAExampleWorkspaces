#include "CCFC2012BC.h"


#ifdef METROWERKS_2_5_NONSTRIP_DEADCODE
  #pragma force_active on
#endif


void targetEnableInterrupts(void)
{
  asm(" wrteei 1"); //Enable external interrupts
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog(void)
{
  /* clear soft lock bit */
  SWT_SR = 0x0000c520;
  SWT_SR = 0x0000d928;
  /* clear watchdog enable */
  SWT_CR = 0x8000010A;
}
