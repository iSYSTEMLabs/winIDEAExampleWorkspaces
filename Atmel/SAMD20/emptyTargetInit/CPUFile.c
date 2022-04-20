#include "SAMD20.h"


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT



  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
  #define WDT_MR          (*((volatile unsigned int *) 0x400E1454)) 
  #define WDT_MR_WDDIS    1 << 15
  WDT_MR &= ~WDT_MR_WDDIS;
}
