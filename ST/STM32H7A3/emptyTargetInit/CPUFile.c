#include "STM32H7A3.h"
#include "main.h"


bool ledState = false;

void TimerInterruptHandler(void)
{
  __disable_irq();
  InterruptRoutine();
  __enable_irq();
}


void initPWR(void)
{
  uint32_t tmp = 0;

  // set max Flash R/W latency, check by read as instructed in RM
  FLASH->ACR = 0b110111;
  while (!(FLASH->ACR & 0b110111))
  {
  };
  
  // SMPS ON, LDO OFF
  tmp = PWR->CR3;
  tmp &= ~(1 << PWR_LDO_BIT);         // LDO OFF
  //tmp |= (0b01 << PWR_SMPSLEVEL_BIT); // 1V8
  //PWR->CR3 |= tmp;
  PWR->CR3 &= ~(1 << PWR_LDO_BIT);         // LDO OFF
  // Voltage levels ready bit for currently used VOS
  while (!(PWR->CSR1 & (1 << PWR_ACTVOSRDY_BIT)))
  {
  }

  // VOS0
  PWR->SRDCR |= (0b11 << PWR_VOS_BIT);
  while (!(PWR->CSR1 & (1 << PWR_VOSRDY_BIT)))
  {
  }
}

void initClock(void)
{
  //PLL1 source = HSI = default
  // The frequency of the reference clock provided to the PLLs (refx_ck) must range from 1 to 16 MHz.
  // HSI = 64MHz; prescaller = 8; PLL1 VCO input  = 8MHz
  RCC->PLLCKSELR &= ~(0x3F << PLL1_DIVM1_BIT); // clear (6 bits)
  RCC->PLLCKSELR |= (8 << PLL1_DIVM1_BIT);     // write

  // PLL configuration (output P = sysclk, output R = trace)
  //  Fhsi = 64 MHz
  //  Fvco_in = 8 MHz
  //  Fpll_1_p = 280 MHz
  //  Fvco = 560 MHz
  //    DIVN = 70
  //    DIVP = 1 (default == Fvco/2, must be odd number for PLL1)
  //    <DIVQ unused>
  //    DIVR = 15 (Fvco/Fpll_1_r -1 == DIVR; 560/35 -1 = 15)
  //      * NOTE: (DJ) I didn't manage to figure out why DIVR has to be divided by 2, so these
  //              calculations would be the same as in reality. Hence, DIVR is programed to 7, not 15.
  RCC->PLLCFGR = 0; //
  RCC->PLLCFGR |= (0b11 << PLL1RGE_BIT); // PLL1 input frequency range (8 - 16 MHz)
  RCC->PLLCFGR |= (1 << DIVP1EN_BIT); // PLL1 DIVP divider output enable
  RCC->PLLCFGR |= (1 << DIVR1EN_BIT); // PLL1 DIVR divider output enable

  // DIVN: multiplication factor for PLL1 VCO (1 = default)
  RCC->PLL1DIVR &= ~(0xFFUL << DIVN1_BIT); // clear
  RCC->PLL1DIVR |= (70 << DIVN1_BIT);      // write (DIVN)
  // DIVP = default, DIVQ unused
  RCC->PLL1DIVR &= ~(0x3FUL << DIVR1_BIT); // clear
  RCC->PLL1DIVR |= (7 << DIVR1_BIT);       // write (DIVR)

  // enable PLL1, wait until ready
  RCC->CR |= (1 << PLL1ON_BIT);
  while (!(RCC->CR & (1 << PLL1RDY_BIT)))
  {
  };

  // System clock switch - select PLL1_P as system clock, wait until ready
  RCC->CFGR |= (0b011 << RCC_SW_BIT);
  while (!(RCC->CFGR & (0b011 << RCC_SWS_BIT)))
  {
  };

  SystemCoreClockUpdate();
  
  //CMSIS SysTick initialization and start
  SysTick_Config(280000);
}
void initITM(void)
{
  ITM->LAR = 0xC5ACCE55; //unlock write access to ITM
  ITM->TER = 0xFFFFFFFF; //enable stimulus port 0-31
  //ITM->TPR |= 0xFUL;     // only privileged access permitted on ports 0 to 7

  //ITM->TCR |= (1 << ITM_ENABLE_BIT); // enable ITM
}

void targetEnableInterrupts(void)
{
  __enable_irq(); //Global int enable CPSIE
}


void targetInit(void)
{
  __disable_irq();
  initPWR();
  initITM();
  initClock();
}


void disableWatchdog(void)
{
}
