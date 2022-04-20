#include "DA14681.h"


void targetEnableInterrupts(void)
{
  // Enable timer clock
  CLK_TMR |= (0x1 << CLK_TMR_TMR0_ENABLE);
  NVIC_ISER |= (0x1 << NVIC_ISER_SWTIM0);
}


void disableWatchdog()
{
  GPREG_SET_FREEZE_REG |= (0x1 << GPREG_SET_FREEZE_REG_FRZ_WDOG);
}

// Chip has fixed PLL which outputs 96 MHz (max core clock) from external 16 MHz osc
// We need to divide PLL ouput by 2 to achieve 48 MHz system clock, 96MHz is too high to work with
// QSPI Flash for now.
void initClock(void)
{
  unsigned int dwRegValue;
  
  // Set PLL output divider to 2
  CLK_CTRL |= (0x1 << CLK_CTRL_PLL_DIV2);
  
  // Enable PLL and wait for it to lock
  dwRegValue = PLL_SYS_CTRL1;
  dwRegValue |= (0x1 << PLL_SYS_CTRL1_LDO_PLL_EN);
  dwRegValue |= (0x1 << PLL_SYS_CTRL1_PLL_EN);
  PLL_SYS_CTRL1 = dwRegValue;
  while (!(PLL_SYS_STATUS & (0x1 << PLL_SYS_STATUS_LOCK_FINE)));
  
  // Switch main system clock
  CLK_CTRL |= (0x3 << CLK_CTRL_SYS_CLK_SEL);
}

// Software timer 0 used, which generates SWTIM_IRQ interrupt
void initInterruptTimer(void)
{
  unsigned int dwRegValue;
  unsigned int dwTimerReloadValue = 0x3E80;
  
  // Configure TMR0 timer
  TIMER0_ON = dwTimerReloadValue;
  dwRegValue = TIMER0_CTRL;
  dwRegValue |= (0x1 << TIMER0_CTRL_TIM0_CLK_SEL);
  dwRegValue |= (0x1 << TIMER0_CTRL_TIM0_CLK_DIV); 
  dwRegValue |= (0x1 << TIMER0_CTRL_TIM0_CTRL);
  TIMER0_CTRL = dwRegValue;
  
  // Select peripheral for timer clock
  dwRegValue = CLK_TMR;
  dwRegValue &= ~(0x1 << CLK_TMR_TMR0_CLK_SEL);
  dwRegValue &= ~(0x1 << CLK_TMR_TMR0_DIV);
  CLK_TMR = dwRegValue;
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initInterruptTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}
