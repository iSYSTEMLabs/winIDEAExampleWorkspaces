#include "MM32F5270.h"


/* Enable the PLL1 and use the HSE as input clock source. */
void CLOCK_BootToHSE90MHz(void)
{
  PWR_CR1 = (PWR_CR1 & ~PWR_CR1_VOS_MASK) | PWR_CR1_VOS(3u); /* 1.7V. */

  /* enable HSE. */
  RCC_CR |= RCC_CR_HSEON(1u);
  while ( !(RCC_CR & RCC_CR_HSERDY_MASK) );

  /* Although the system clock should have been 120MHz, as per chip specification, it only goes to 90MHz.
  Setting it any higher will cause a HardFault. */
  RCC_PLL1CFGR = RCC_PLL1CFGR_PLL1SRC(1u) /* (pllsrc == 1) ? HSE : HSI. */
               | RCC_PLL1CFGR_PLL1MUL(14u) /* (12 * (14 + 1)) / 2 = 90MHz. */
               | RCC_PLL1CFGR_PLL1DIV(1u)
               | RCC_PLL1CFGR_PLL1LDS(1u) /* High accuracy Lock Detector */
               | RCC_PLL1CFGR_PLL1ICTRL(3u)
               ;

  /* Enable PLL1. */
  RCC_CR |= RCC_CR_PLL1ON(1u);
  while(!(RCC_CR & RCC_CR_PLL1RDY_MASK));

  /* Setup the dividers for each bus. */
  RCC_CFGR = RCC_CFGR_HPRE(0u)   /* div=1 for AHB freq. */
            | RCC_CFGR_PPRE1(0x4)  /* div=2 for APB1 freq. */
            | RCC_CFGR_PPRE2(0x4)  /* div=2 for APB2 freq. */
            | RCC_CFGR_MCO(7u)    /* use PLL1 as output. */
            ;

  /* Switch the system clock source to PLL. */
  RCC_CFGR = (RCC_CFGR & ~RCC_CFGR_SW_MASK) | RCC_CFGR_SW(2u); /* use PLL as SYSCLK */


  /* Wait till PLL is used as system clock source. */
  while ( (RCC_CFGR & RCC_CFGR_SWS_MASK) != RCC_CFGR_SWS(2u) );

  return;
}

void initTimer()
{
	//Initialize TIM2 General purpose timer with 1ms update interval
  
  //Enable clock
  RCC_APB1ENR |= 1 << TIM2;
  
  //Prescaler 
  TIM2_PSC = 90 - 1;
  
  //Auto Reload Register
  TIM2_ARR = 1000 - 1;
   
  //Counter enable
  TIM2_CR1 |=  1 << CEN;
  return;
  
}

void initNVIC(void)
{
  //NVIC enable timer2 update interrupt - NVIC_ISER0
  NVIC_ISER0_NVIC_ISER15 |= 1 << TIM2_IRQ;
}


void targetEnableInterrupts()
{
	TIM2_DIER |= 1 << UIE; //Enable update interrupt
  return;
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  CLOCK_BootToHSE90MHz();
  initTimer();
  initNVIC();
  targetEnableInterrupts();
  return;

  #endif /* EMPTY_TARGET_INIT */
}

void targetShutdown()
{
  return;
}


void disableWatchdog()
{
  //IWDG Independent watchdog - disabled by default
  //WWDG Window Watchdog - disabled by default
  return;
}