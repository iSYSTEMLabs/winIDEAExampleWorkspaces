#include "AC7811Q.h"


void targetEnableInterrupts()
{
  // clear TIMER0 interrupt flag
  TIMER0_TF |= (1 << 0);
  // TIMER0 interrupt enable
  INT_0_31_SET_EN = (1 << 29);
  TIMER0_INIT |= (1 << 1);
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  //
  // Clock init to max frequency
  //

  // enable SPM power control
  SPM_PWR_MGR_CFG0 |= (1 << 0);

  // configure PLL, so that system clock freq = 96MHz
  REG_MCU_SYSPLL1_CFG0 &= ~(0b11 << 30);  // PREDIV = 1
  REG_MCU_SYSPLL1_CFG0 |= (1 << 29);      // POSDIV = 4
  // FBKDIV = 96
  REG_MCU_SYSPLL1_CFG0 &= ~(0xFF << 17);
  REG_MCU_SYSPLL1_CFG0 |= (0x60 << 17);

  // select internal oscillator (8M) as a PLL reference clock
  CKGEN_SRC_SEL &= ~(1 << 20);
  // enable SYSPLL
  SPM_PWR_MGR_CFG1 |= (1 << 27);
  // wait for PLL clock ready flag
  while ((SPM_PWR_MGR_CFG1 & (1 << 30)) == 0);

  // APB clock divider by system clock = 2 (max APB_CLK = 50MHz)
  CKGEN_SRC_SEL &= ~(0b111 << 8);
  CKGEN_SRC_SEL |= (0b100 << 8);
  // select PLL output as a system clock source
  CKGEN_SRC_SEL |= (1 << 0);

  //
  // Timer interrupt init
  //

  // TIMER clock enable
  PERI_SFT_RST1 |= (1 << 19);
  PERI_CLK_EN_0 |= (1 << 19);
  // enable TIMER module
  TIMER_MCR &= ~(1 << 1);
  // set TIMER0 init value to 48000 - interrupt every 1ms
  //TIMER0_INITVAL = 48000;
  TIMER0_INITVAL = 48000;
  // TIMER0 enable
  TIMER0_INIT |= (1 << 0);

  //
  // GPIO pin init
  //

  // GPIO clock enable
  PERI_SFT_RST1 |= (1 << 23);
  PERI_CLK_EN_0 |= (1 << 23);
  // set GPIO pin PB8 (GPIO26) as output
  GPIO1_CR |= (1 << 8);
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
