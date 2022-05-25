#include "STM32L552.h"


void disableWatchdog()
{
}

void targetEnableInterrupts()
{ 
  asm("cpsie i");
  TIM2_DIER |= (1 << 0);         // Enable interrupts
  TIM2_CR1 |= (1 << 0);          // Enable timer
  ISER1 |= (1 << 13);            // TIM2 interrupt enable
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
  /* timer cycle = (period + 1) * (prescaler + 1) / clock */
  TIM2_PSC = 110 - 1;           // Prescaler value
  TIM2_ARR = 1000 - 1;          // Period
  TIM2_EGR |= (1 << 0);         // Generate update event
  TIM2_SR &= ~(1 << 0);         // Clear interrupt flag
}


void initClock()
{ 
  FLASH_ACR = 5;                 // Change Flash latency
  while(!(FLASH_ACR & 5));       // Check that latency has changed
  
  RCC_CR &= ~(1 << 24);          // Clear PLLON bit to disable PLL
  while(RCC_CR & (1 << 25));     // Wait until PLL is disabled
  
  RCC_PLLCFGR = 0;

  RCC_PLLCFGR |= (3 << 0);       // Set HSE as PLL clock source - 16MHz ext. osc
  
  RCC_PLLCFGR |= (3 << 4);       // Divide input clock by M = 4 ----> 4MHz
  
  RCC_PLLCFGR |= (55 << 8);      // Multiply PLL clock by N = 55 ---> 220MHz
  
  RCC_PLLCFGR &= ~(3 << 25);     // PLLR = 2 ---> divide VCO by 2 ---> PLLCLK = 110MHz
  
  RCC_CR |= (1 << 16);           // Enable HSE osc. by setting HSEON bit to 1
  while(!(RCC_CR & (1 << 17)));  // Wait until HSE is enabled
  
  RCC_CR |= (1 << 24);           // Enable PLL by setting PLLON to 1
  while(!(RCC_CR & (1 << 25)));  // Wait until PLL is enabled
  
  RCC_PLLCFGR |= (1 << 24);      // Set PLLCLK as system clock
  
  RCC_CFGR |= (3 << 0);          // Set PLL as system clock
  while(!(RCC_CFGR & (3 << 2))); // Wait for system clock switch
    
}
