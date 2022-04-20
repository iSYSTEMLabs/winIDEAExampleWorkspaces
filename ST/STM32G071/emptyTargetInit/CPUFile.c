#include "stm32g0.h"


void initTimer()
{
  RCC_APBENR1 |= (1 << TIM2EN); // enable timer TIM2, clock is 64 MHz
  TIMER2_CR1 |= (1 << OPM);     // Counter stops counting at the next update event (clearing the bit CEN)
  TIMER2_DIER |= (1 << CC1IE);  // Capture/Compare 1 interrupt enable
  TIMER2_ARR = 64000;           // set counter when interrupt triggers
}

void initNVIC(void)
{
  INT_0_31_SET_EN |= (1 << TIM2_IRQ); //enable interrupt TIM2
}


void CPU_Init()
{
  // Internal 16 MHz oscillator is used for PLL 64 MHz.

  RCC_CR &= ~(1 << PLLON); // Disable the PLL by setting PLLON to 0
  while (RCC_CR & (1 << PLLRDY))
    ; //Wait until PLLRDY is cleared. The PLL is now fully stopped

  // We use internal 16 MHz oscillator
  int value = 0;
  value |= (2 << PLLSRC); // PLL source is HSI
  value |= (1 << PLLREN); // Enable PLL R
  value |= (8 << PLLN);   // Multiply factor for PLL is 8
  value |= (0 << PLLM);   // Division factor for PLL is 1
  value |= (1 << PLLR);   // Main PLL division factor for PLL R is 2
  RCC_PLLCFGR = value;

  RCC_CR |= (1 << PLLON); // Enable the PLL by setting PLLON to 1
  while (!(RCC_CR & (1 << PLLRDY)))
    ; //Wait until PLLRDY is set. The PLL is now fully functional

  // Set flash latency for 64 MHz
  value = FLASH_ACR;
  value &= ~(0xF << LATENCY);
  value |= (3 << LATENCY);
  FLASH_ACR = value;

  RCC_CFGR |= (2 << SW); // Set PLL as system clock*/
}


void targetEnableInterrupts()
{
  TIMER2_CR1 |= (1 << TIM2EN); //enable counter
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  CPU_Init();
  initTimer();
  initNVIC();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
