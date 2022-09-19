#include "S32M244.h"

void targetEnableInterrupts(void)
{
  NVIC_ISER1 |= (1 << NVIC_LPIT0);      // Enables Interrupt for LPIT0
  __asm__("CPSIE i");
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initLPIT();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void initLPIT(void)
{
  PCC_LPIT &= ~(1 << 30);
  PCC_LPIT |= (0x6 << 24);              // Configures LPIT clock source to SPLLDIV2
  PCC_LPIT |= (1 << 30);                // Enables clock for LPIT peripheral
  LPIT_MCR = 0;                         // Clears MCR register
  LPIT_MCR |= 0x1;                      // Enables clock for LPIT Timer
  LPIT_TVAL0 = LPIT_VAL;                // Configures LPIT0 reset value
  LPIT_SETTEN |= LPIT_EN;               // Enables LPIT0 Timer
  LPIT_MIER |= LPIT_INT_EN;             // Enables Interrupts for LPIT0 Timer
  LPIT_MSR |= LPIT_TFLG;                // Clears LPIT0 FLAG
  LPIT_TCTRL0 = 0;                      // Clears TCTRL0 register
  LPIT_TCTRL0 |= LPIT_CFG;              // Enables LPIT0 Timer
}


void disableWatchdog(void)
{
  WDOG_CTRL &= ~WDOG_CTRL_EN;           // Disables WDOG 
}


void initClock(void)
{
  SCG_SPLLCSR &= ~(0x1);                // Disable SPLL
  SCG_SPLLDIV |= (0x2 << 8);            // Sets divide for SPLLDIV2
  SCG_SPLLDIV |= (0x2 << 0);            // Sets divider for SPLLDIV1
  SCG_SPLLCFG |= (1 << 8);              // SPLL source frequency(FIRC) is configured with SPLL PREDIV to match allowed frequency
  SCG_SPLLCFG |= 1;                     // Configures FIRC as clock source for SPLL    
  SCG_SPLLCSR |= 1;                     // Enables SPLL 
  SCG_SPLLCSR |= (0x3 << 16);           // Enables SPLL Clock monitor 
  SCG_RCCR = SCG_RCCR_MASK;             // Sets SPLL as system core clock
}