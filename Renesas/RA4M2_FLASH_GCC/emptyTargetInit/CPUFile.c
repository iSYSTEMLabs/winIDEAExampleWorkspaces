#include "RA4M2.h"


void disableWatchdog(void)
{
  
}

void initClock()
{
  // Unlock write to SYSC registers
  SYSC_PRCR = 0xA501;
  // Set divider for system clock
  SYSC_SCKDIVCR &= ~(0x7 << SYSC_SCKDIVCR_ICK);
  SYSC_SCKDIVCR |= 0x1 << SYSC_SCKDIVCR_ICK;
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClock();

  #endif /* EMPTY_TARGET_INIT */
}
