#include "dr7f701503.dvf.h"


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  while(PFSSG0MEV0 != 1u) // wait until SoC init is done by PE1
  {

  }

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
