#include "stm32h723_sfr.h"
#include "stm32h723.h"
#include "main.h"


void initClock(void)
{
  // NOTE: SWO not working when system clock is set to maximum (550MHz)

  PWR_CR3 |= PWR_RC3_SCUEN | PWR_RC3_LDOEN;  // Allow change of VOS values
  PWR_D3CR &= ~(PWR_D3CR_VOS_1 | PWR_D3CR_VOS_0);  // Vcore voltage to scale 0, maximum performance
  while(!(PWR_D3CR & PWR_D3CR_VOSRDY));  // Voltage level ready for currently used VOS
  
  while(!(RCC_CR & RCC_CR_HSIRDY));  // Wait for stable HSI CLOCK, 64Mhz
  
  // Select clock source RCC_PLLCKSELR, PLLSRC to HSI
  RCC_PLLCKSELR &= ~(RCC_PLLCLKSELR_PLLSRC1 | RCC_PLLCLKSELR_PLLSRC0);
  
  // Init predivider, DIVMx, RCC_CKSELR, leave at default, to 32x: 64/32 = 2Mhz
  
  // PLL1VCOSEL, VCOH, set to wide VCO range
  RCC_PLLCFGR &= ~RCC_PLLCFGR_PLL1VCOSEL;
  
  // PLL1RGE, leave at default, 0x00, clock range frequency 1 - 2 MHz
  
  // PLLxFRACEN = 0, integer mode
  RCC_PLLCFGR &= ~RCC_PLLCFGR_PLL1FRACEN;
  
  // DIVPxEN, DIVQen, DIVRxEN, all enabled
  RCC_PLLCFGR |= RCC_PLLCFGR_DIVP1EN | RCC_PLLCFGR_DIVQ1EN | RCC_PLLCFGR_DIVR1EN;
  // RCC_PLLCFGR &= ~RCC_PLLCFGR_DIVR1EN;
  
  // DIVN1, loop multiplier 275x (0x112), vcox_ck to 550Mhz
  RCC_PLL1DIVR |= RCC_PLL1DIVR_DIVN1_BIT8 | RCC_PLL1DIVR_DIVN1_BIT4 | RCC_PLL1DIVR_DIVN1_BIT1;
  RCC_PLL1DIVR &= ~RCC_PLL1DIVR_DIVN1_BIT7;
  
  // DIVPx, postscaler, set to 1, pll1_p_ck = 550 /1 = 550Mhz
  RCC_PLL1DIVR &= ~RCC_PLL1DIVR_DIVP1_BIT0;

  // DIVQx, divide by 10, pll1_q_ck = 550/10 = 50Mhz 
  RCC_PLL1DIVR |= RCC_PLL1DIVR_DIVQ1_BIT3 | RCC_PLL1DIVR_DIVQ1_BIT0; 
  
  // DIVRx, divide by 10, pll1_q_ck = 550/10 = 50Mhz 
  RCC_PLL1DIVR |= RCC_PLL1DIVR_DIVR1_BIT3 | RCC_PLL1DIVR_DIVQ1_BIT0; 
  
  // Enable PLL
  RCC_CR |= RCC_CR_PLL1ON;
  
  // Wait for ready flag
  while (!(RCC_CR & RCC_CR_PLL1RDY));
  
  // Set HPRE divide by 2: 550 / 2 = 275MHz (max clock for rcc_hclk3 and rcc_aclk)
  RCC_D1CFGR &= ~RCC_D1CFGR_HPRE;
  RCC_D1CFGR |= RCC_D1CFGR_HPRE_BIT3;
  
  // Set D1PPRE divide by 2: rcc_plck3 = 137.5MHz (max APB3 clock)
  RCC_D1CFGR |= RCC_D1CFGR_D1PPRE_2;
  // Set D2PPRE1 divide by 2: rcc_pclk2 = 137.5MHz (max APB2 clock)
  RCC_D2CFGR |= RCC_D2CFGR_D2PPRE1_2;
  // Set D2PPRE2 divide by 2: rcc_pclk1 = 137.5MHz (max APB1 clock)
  RCC_D2CFGR |= RCC_D2CFGR_D2PPRE2_2;
  // Set D3PPRE divide by 2: rcc_pclk4 = 137.5MHz (max APB4 clock)
  RCC_D3CFGR |= RCC_D3CFGR_D3PPRE_2;
  
  // Set pll1_p_ck as the system_ck, set SW bits
  RCC_CFGR |= RCC_CFGR_SW_BIT0 | RCC_CFGR_SW_BIT1;
  
  // Wait for pll1_p_ck to be set
  while(!(RCC_CFGR & (RCC_CFGR_SWS_BIT0 | RCC_CFGR_SWS_BIT1)));
}

void initTimer(void)
{
  RCC_APB1LENR |= RCC_APB1LENR_TIM6EN;  // Enable TIMER6 peripheral clock

  while (TIM6_PSC != 0x112)
  {
    TIM6_PSC = 0x112;  // Prescaler 275Mhz / (274+1) = 1MHz
  }

  TIM6_ARR = 0x03E8;  // Timer reload after 500 ticks (1ms)
  TIM6_SR &= ~TIM6_SR_UIF;  // Clear timer interrupt flag
  
  TIM6_CNT = 0x0000;
  TIM6_CR1 |= TIM6_CR1_CEN;  // Enable timer
}


void targetEnableInterrupts(void)
{
    // Enable timer Interrupt (interrupt on reload)
  TIM6_DIER |= TIM6_DIER_UIE;
  ENABLE_INT32_63 |= ENABLE_INT54;
}


void disableWatchdog(void)
{
}

void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClock();  //Set system clock to maximum frequency (550Mhz)

  initTimer();  //Set timer to interrupt every 1ms

  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}
