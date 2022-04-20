#include "MKL03Z32.h"


/*
  Core clock is configured at 48 MHz, bus and flash clocks are configured at 24 MHz
*/
void initClock()
{
  MCG_MC |= (1 << MCG_MC_HIRCEN);
  SIM_CLKDIV1 &= ~(0xF << SIM_CLKDIV1_OUTDIV1);
  SIM_CLKDIV1 |= (1 << SIM_CLKDIV1_OUTDIV4);
  MCG_C1 &= ~(0b11 << MCG_C1_CLKS);
}

/*
  Timer interrupt initialization with 1 ms period
*/
void initTimer()
{
  SIM_SOPT2 |= (1 << SIM_SOPT2_TPMSRC);  // 48 MHz timer clock source 
  SIM_SCGC6 |= (1 << SIM_SCGC6_TPM0);    // timer clock enable
  TPM0_MOD = 0xBB80;                     // modulo value
  TPM0_SC |= (1 << TPM0_SC_TOIE);        // timer interrupt enable
  TPM0_SC |= (1 << TPM0_SC_CMOD);        // timer counter enable
}

void clearTimerFlag()
{
  TPM0_SC |= (1 << TPM0_SC_TOF);
}


void targetEnableInterrupts()
{
  __asm__("CPSIE i");
  NVIC_ISER |= (1 << NVIC_TPM0);
}


void disableWatchdog()
{
  SIM_COPC = 0;
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}