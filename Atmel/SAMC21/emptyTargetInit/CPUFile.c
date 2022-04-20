#include "SAMC21.h"


/*
  Clock is running at 48 MHz (Max), DPLL reference clock is
  32 kHz external oscillator due to bug with 48MHz internal oscillator
  and no high speed external oscillator. Read errata for more info.
*/
void initClock(){
  NVMCTRL_CTRLB |= (0x2 << NVMCTRL_CTRLB_RWS);
  
  OSC32KCTRL_XOSC32K |= (0x1 << OSC32KCTRL_XOSC32K_XTALEN);
  OSC32KCTRL_XOSC32K |= (0x1 << OSC32KCTRL_XOSC32K_EN32K);
  OSC32KCTRL_XOSC32K |= (0x1 << OSC32KCTRL_XOSC32K_EN);
  
  OSCCTRL_DPLLRATIO |= 0x5DB;
  while (OSCCTRL_DPLLSYNCBUSY != 0);
  OSCCTRL_DPLLCTRLA |= (0x1 << OSCCTRL_DPLLCTRLA_ENABLE);
  while (OSCCTRL_DPLLSYNCBUSY != 0 && OSCCTRL_DPLLSTATUS != 1);

  GCLK_GENCTRL0 &= ~(0x1F << GCLK_GENCTRL0_SRC);
  GCLK_GENCTRL0 |= (0x7 << GCLK_GENCTRL0_SRC); 
  GCLK_GENCTRL0 |= (0x1 << GCLK_GENCTRL0_GENEN);
}

void initTimer(){
  MCLK_APBCMASK |= (1 << MCLK_APBCMASK_TC0);
  GCLK_PCHTRL30 |= (1 << GCLK_PCHTRL30_CHEN);
  
  TC0_CC = 0xBB80;
  while (TC0_SYNCBUSY & (0x3 << 6));
  
  TC0_INTENSET |= (1 << TC0_INTENSET_MC0);
}


void targetEnableInterrupts()
{
  INT_0_31_SET_EN |= (1 << INT_TC0);
  __asm__("CPSIE i");     
  TC0_CTRLA |= (1 << TC0_CTRLA_ENABLE);
  while (TC0_SYNCBUSY & (1 << TC0_SYNCBUSY_ENABLE));
  while (!(TC0_CTRLA & (1 << TC0_CTRLA_ENABLE)));
}


void targetInit()
{  
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
