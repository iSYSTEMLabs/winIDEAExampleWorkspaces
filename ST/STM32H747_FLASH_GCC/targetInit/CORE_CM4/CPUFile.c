#include "stm32h747.h"

#define CORE_CM4

extern void startCores();


void targetInit(void)
{           
  #ifndef EMPTY_TARGET_INIT



  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
