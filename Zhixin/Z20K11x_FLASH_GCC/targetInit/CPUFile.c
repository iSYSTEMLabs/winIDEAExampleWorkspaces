#include "Z20K11x.h"


void disableWatchdog()
{
  // Unlock PARCC_WDOG
  PARCC_WDOG_KEY = 0x5B;
  // Allow Watchdog register write
  PARCC_WDOG &= ~(1 << 16);
  
  // Unlok watchdog registers
  WDOG_CNT = 0xB0D9A1C4;
  WDOG_CNT = 0x1A1E3B0F;
  
  // Disable watchdog
  WDOG_CS    &= ~(1 << 0);
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT


  #endif /* EMPTY_TARGET_INIT */
}
