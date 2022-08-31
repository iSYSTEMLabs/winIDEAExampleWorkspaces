#include "STM32U5x5.h"
#include "main.h"


void disableWatchdog()
{
}

void targetEnableInterrupts()
{
  asm volatile("cpsie i");
  ISER1 |= (1 << 13);            // TIM2 interrupt enable
  TIM2_DIER |= (1 << 0);         // Enable interrupts
  TIM2_CR1 |= (1 << 0);          // Enable timer
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void initTimer() 
{
  RCC_APB1ENR1 |= (1 << 0);     // Enable peripheral clock for TIM2
  for(int i = 0; i < 10; i++);  // Wait at least 2 clock cycles before writing to registers after enabling the clock
  TIM2_CR1 = 0; // Reset CR1
  // timer cycle = (period + 1) * (prescaler + 1) / clock 
  TIM2_PSC = 160 - 1;           // Prescaler value
  TIM2_ARR = 1000 - 1;          // Period
  TIM2_CR1 |= (1 << 7);         // Auto-reload preload enable
  TIM2_EGR |= (1 << 0);         // Generate update event
}


void initClock()
{     
  RCC_AHB3ENR |= (1 << 2);       // Enable PWR clk
  PWR_VOSR |= (3 << 16);         // Voltage range 1

  RCC_CR &= ~(1 << 24);          // Clear PLLON bit to disable PLL
  while(RCC_CR & (1 << 25));     // Wait until PLL is disabled

  RCC_CR |= (1 << 16);           // Enable HSE osc. by setting HSEON bit to 1
  while(!(RCC_CR & (1 << 17)));  // Wait until HSE is enabled
  
  RCC_PLL1CFGR |= (3 << 2);      // PLL1 input frequency 16 MHz
  RCC_PLL1CFGR |= (3 << 0);      // Set HSE as PLL clock source - 16MHz ext. osc
  
  FLASH_ACR |= 4;                 // Change Flash latency
  while(!(FLASH_ACR & 4));       // Check that latency has changed
  
  RCC_PLL1DIVR &= ~(1 << 7);     // Clear PLL multiplication
  RCC_PLL1DIVR |= 20 - 1;         // Multiply PLL clock 
  
  RCC_PLL1CFGR |= (1 << 18);     // Enable PLL1REN -  pll1_r_ck divider output
  
  RCC_CR |= (1 << 24);           // Enable PLL by setting PLLON to 1
  while(!(RCC_CR & (1 << 25)));  // Wait until PLL is enabled
    
  RCC_CFGR1 |= (3 << 0);          // Set pll1_r_ck as system clock
  while(!(RCC_CFGR1 & (3 << 2))); // Wait for system clock switch
}
