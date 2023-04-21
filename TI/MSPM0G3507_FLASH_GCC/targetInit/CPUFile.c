
#include "MSPM0G3507.h"


void disableWatchdog()
{

}


void targetEnableInterrupts(void)
{
  asm("cpsie i");
}


void initCPU(void)
{
  SYSPLLCFG1 |= (1 << SYSPLLCFG1_SHIFT_PDIV); // Set Divider
  SYSPLLCFG1 |= (4 << SYSPLLCFG1_SHIFT_QDIV); // Set Multiplier
  SYSPLLPARAM0 = *(unsigned long long *) 0x41C40034; // Load params from flash for 16 floopback
  SYSPLLPARAM1 = *(unsigned long long *) 0x41C40038;
  SYSPLLCFG0 |= (1 << SYSPLLCFG0_SHIFT_RDIVCLK2X); // Set output devider
  SYSPLLCFG0 |= (1 << SYSPLLCFG0_SHIFT_ENABLECLK1); // enable PLL output 1
  SYSPLLCFG0 |= (1 << SYSPLLCFG0_SHIFT_ENABLECLK2X); // enable PLL output 2
  SYSPLLCFG0 |= (1 << SYSPLLCFG0_SHIFT_MCLK2XVCO); // PLL 2x output to main clock
  HSCLKEN    |= (1 << HSCLKEN_BIT_SYSPLLEN); // Enable pll
  while (!(CLKSTATUS & (1 << CLKSTATUS_BIT_SYSPLLGOOD))); 
  MCLKCFG    |= (1 << MCLKCFG_SHIFT_USEHSCLK); // Main clock input select
}

void initTimers(void)
{
  // SysTick timer
  SYST_RVR = SYSTICK_REQUIRED_TICKS; // Systick reload value
  SYST_CSR |= 0x7; // Enable the counter and enable the systick exceptions
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  initCPU();
  initTimers();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}