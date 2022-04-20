#include "iMX8MNanoQ_sfr.h"        

void *memcpy(char *pDest, const char *pSrc, unsigned long int nBytes);

extern void InterruptRoutine();

extern unsigned long long _bootAddrA53_1;
extern unsigned long long _bootAddrA53_2;
extern unsigned long long _bootAddrA53_3;


void enableAllCores()
{
  
  // Set A53 core 1 boot address and enable said core
  unsigned long long bootAddr = (unsigned long long)&_bootAddrA53_1;
  SRC.SRC_GPR3.R = (bootAddr >> 24);
  SRC.SRC_GPR4.R = (bootAddr >> 2);
  SRC.SRC_A53RCR1.B.A53_CORE1_ENABLE = 1;
  
  // Set A53 core 2 boot address and enable said core
  bootAddr = (unsigned long long)&_bootAddrA53_2;
  SRC.SRC_GPR5.R = (bootAddr >> 24);
  SRC.SRC_GPR6.R = (bootAddr >> 2);
  SRC.SRC_A53RCR1.B.A53_CORE2_ENABLE = 1;
  
  // Set A53 core 3 boot address and enable said core
  bootAddr = (unsigned long long)&_bootAddrA53_3;
  SRC.SRC_GPR7.R = (bootAddr >> 24);
  SRC.SRC_GPR8.R = (bootAddr >> 2);
  SRC.SRC_A53RCR1.B.A53_CORE3_ENABLE = 1;
  
  // Release the M4 core reset
  IOMUXC_GPR.IOMUXC_GPR_GPR22.B.CM7_CPUWAIT = 0;
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  enableAllCores();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
}
	
// Current workaround for ARMv8-A samples which do not use MMU. If MMU is not used,
// core cannot do unaligned accesses and library memcpy version does them,
// so we need to make our own memcpy. GCC insists on using memcpy for some cases
// (e.g. in extended iTests), even though we specifically request build with no libraries
void *memcpy(char *pDest, const char *pSrc, unsigned long int nBytes)
{
  unsigned long int i;
  
  void *pOrigDest = pDest;
  
  for (i=0; i<nBytes;i++)
  {
    *pDest++ = *pSrc++;
  }
  
  return pOrigDest;
}
