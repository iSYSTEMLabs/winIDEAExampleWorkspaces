#include "e200z0h.h"


void initClock(void) 
{
// Enable peripherals in all modes
  ME_RUN_PC0 = 0xFF;
  
  // Set up the PLL fOUT = fIN * NDIV/((IDF+1) * 2^(ODF+1))
  PLL_CR = (0x3 << 26);
  PLL_CR &= ~(0x3 << 24);
  PLL_CR |= (0x40 << 16);
  PLL_CR |= (1 << 8);

  // Select PLL PCS as system clock (only valid in RUN0 mode)
  ME_RUN0_MC |= (1 << 6) |
                (1 << 5) |
                (4 << 0);

  // Switch to RUN0 mode
  ME_MCTL = MODE | 0x5AF0;
  ME_MCTL = MODE | 0xA50F;
  while((ME_GS >> 28) != 4);
}


void initTimer(void) 
{
  PIT_PITMCR = 1;
  PIT_LDVAL0 = 64000;
  PIT_TCTRL0 |= (0x1 << 1);
  PIT_TFLG0 = 1;
  PIT_TCTRL0 |= 0x1;
}

void targetEnableInterrupts(void) 
{
  asm("wrteei 1");
}


void targetInit(void) {
  #ifndef EMPTY_TARGET_INIT

  INTC_MCR |= (1 << 31);    // Hardware vector enable
  initClock();
  initTimer(); 
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog(void) 
{
  SWT_SR = 0x0000C520;      // clear soft lock bits   [WSC]
  SWT_SR = 0x0000D928;      // clear soft lock bits   [WSC]
  SWT_CR = 0x8000010A;      // disable watchdog       [WEN]
}
