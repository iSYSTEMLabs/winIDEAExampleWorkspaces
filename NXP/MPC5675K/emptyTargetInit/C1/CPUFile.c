#include "mpc5675K_C1.h"


volatile unsigned char gpioState = 0; 


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initCPU();

  #endif /* EMPTY_TARGET_INIT */
}

void initCPU(void)
{
  meml(SWT_SR)=0xc520;
  meml(SWT_SR)=0xd928;
  meml(SWT_CR)=0x8000010A;
}


void disableWatchdog()
{
}
