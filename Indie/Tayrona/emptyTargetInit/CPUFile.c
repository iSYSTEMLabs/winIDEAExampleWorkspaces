#include "Tayrona_sfr.h"

void initClock()
{
  CRGA.SYS_CLK_CTRL.B.RC_SEL = 1;         // Fast RC clock (32 MHz)
  CRGA.SYS_CLK_CTRL.B.XO_SEL = 0;         // RC clock selected
  CRGA.SYS_CLK_CTRL.B.DIV_SEL = 0;        // System Clock Divided by 1
}

void initTimer()
{
  System_Control_Space_SysTick.SYST_CSR.B.ENABLE = 0;         // Disables counter
  System_Control_Space_SysTick.SYST_RVR.R = 29000;            // SysTick start value
  System_Control_Space_SysTick.SYST_CVR.R = 0x0;              // Clear current value
  System_Control_Space_SysTick.SYST_CSR.B.CLKSOURCE = 1;      // Use CPU clock
}


void targetEnableInterrupts()
{
  System_Control_Space_SysTick.SYST_CSR.B.ENABLE = 1;         // Counter enable
  System_Control_Space_SysTick.SYST_CSR.B.TICKINT = 1;        // Exception request enable
}


void disableWatchdog()
{
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

