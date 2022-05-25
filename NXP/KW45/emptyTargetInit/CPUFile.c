#include "KW45.h"


void initClock()
{
  // Reset registers
  RCCR = 0x00000000;
  
  RCCR &= ~(0xF << DIVCORE);        // Core clock prescale: 1
  RCCR &= ~(0xF << DIVBUS);         // Bus clock prescale: 1
  RCCR |= (3 << DIVSLOW);           // Slow clock prescale: 4
  
  FIRCCSR |= (1 << FIRCEN);         // Enable Fast IRC
  FIRCCFG |= (2 << RANGE);          // 96 MHz FIRC clock selected
  RCCR |= (3 << SCS);               // System clock source = Fast IRC (32MHz)
  while( !(FIRCCSR & (1 << FIRCVLD)) );
  while( !(FIRCCSR & (1 << FIRCSEL)) );
}

void initSysTick()
{
  SYST_RVR = 97500;                 // SysTick start value
  SYST_CVR = 0x0;                   // Clear current value
  SYST_CSR |= 0x4;                  // Use CPU clock
  SHPR3 |= (0x1 << (ST_PRI+5));     // Set priority for SysTick
}


void targetEnableInterrupts()
{
  asm("cpsie i");
  SYST_CSR |= 0x3;                  // SysTick counter and exception request enable
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initSysTick();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
  
}