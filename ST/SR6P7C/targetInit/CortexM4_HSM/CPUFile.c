#include "sr6p7c.h"
#include "SR6Px_HSM.H"


void disableSWT()
{
 SWT_HSM.SR.R=0xc520;
 SWT_HSM.SR.R=0xd928;
 SWT_HSM.CR.R=0xC800000E;
}

void targetInit(void)
{           
  #ifndef EMPTY_TARGET_INIT

  disableSWT();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
