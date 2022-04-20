#include "stm32H7.h"


void initNVIC(void)
{
  INT_0_31_SET_EN |= (1 << TIM2_IRQ); //enable interrupt TIM2
}


void pllInit()
{ // HSE 25 MHz -> PLL{25/5*160}= 800 MHz, cpu at 400 MHz, trace clock at 79.9 MHz (cpuclk / PLL.PLLR)

  RCC_CR |= (1 << HSEON); //turn on HSE - external oscillator

  PWR_PWRCR3 &= ~(1 << SDEN);
  PWR_PWRD3CR |= (3 << VOS); //set volting scaling section to 1

  RCC_PLLCKSELR |= (2 << PLLSRC);    //set HSE as PLL clock source
  RCC_PLLCKSELR &= ~(0xFF << DIVM1); //set DIVM to 5
  RCC_PLLCKSELR |= (5 << DIVM1);     //set DIVM to 5

  RCC_PLLCFGR |= (0 << PLL1VCOSEL);               // select VCO range
  RCC_PLLCFGR |= (2 << PLL1RGE);                  //select input PLL freruency - 25 MHz/DIVM1
  RCC_PLLCFGR |= (1 << DIVP1EN) | (1 << DIVR1EN); //enable P, Q, R divider outputs for PLL1

  RCC_PLL1DIVR = 0;
  RCC_PLL1DIVR |= (159 << DIVN1); //set N = 160
  RCC_PLL1DIVR |= (1 << DIVP1);   //set P = 2
  RCC_PLL1DIVR |= (1 << DIVQ1);   //set P = 2
  RCC_PLL1DIVR |= (7 << DIVR1);   //set R = 8

  RCC_CR |= (1 << PLL1ON);

  RCC_D1CFGR |= (8 << HPRE);    //set HPRE divider to 2
  RCC_D1CFGR |= (4 << D1PPRE);  //set D1PPRE divider to 2
  RCC_D2CFGR |= (4 << D2PPRE1); //set D2PPRE1 divider to 2
  RCC_D2CFGR |= (4 << D2PPRE2); //set D2PPRE2 divider to 2
  RCC_D3CFGR |= (4 << D3PPRE);  //set D3PPRE divider to 2

  FLASH_ACR &= ~(7 << LATENCY); //set latency to 0
  FLASH_ACR |= (4 << LATENCY);  //set latency to 2

  RCC_CFGR |= (3 << SW); //set PLL1 as main clock

  while (!(RCC_CFGR & (3 << SWS)))
    ;
}

void ITMInit(void)
{
  RCC_APB1LENR |= (1 << TIM2EN); //enable clock for timer TIM2
  while(!(RCC_APB1LENR & (1 << TIM2EN)));
  //timer runs with 200 MHz
  TIM2_ARR = 200000;
}


void targetEnableInterrupts()
{
  TIM2_DIER |= (1 << CC1IE); //enable interrupts for TIM2
  TIM2_CR1 |= (1 << CEN); //turn on timer TIM2
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  pllInit();
  initNVIC();
  ITMInit();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
}
