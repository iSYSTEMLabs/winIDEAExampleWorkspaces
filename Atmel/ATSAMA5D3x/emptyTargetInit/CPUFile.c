#include "SAMA5D3x.h"


void disableWatchdog()
{
  WDT_MR = WDT_MR & ~(1<<WDRSTEN); 
}

void targetInit()
{
  #ifndef EMPTY_TARGET_INIT


  #endif /* EMPTY_TARGET_INIT */
}
