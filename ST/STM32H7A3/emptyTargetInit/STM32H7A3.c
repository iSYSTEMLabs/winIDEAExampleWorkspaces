#include "STM32H7A3.h"
#include "main.h"

//rt TimerInterrupt: profilerFunctionName=ProfilerC_Interrupt, timeoutMSec=0.984, maxDeltaPeriodPct=5
//rt DaqTimerInterrupt: daqItem=daqInterruptCounter, periodInMicroSeconds=49200, maxDeltaPeriodInPercents=5

//rt FunctionMinGrossTime: toleranceInPercent = 3
//rt FunctionMaxGrossTime: toleranceInPercent = 3
//rt FunctionMinNetTime: toleranceInPercent = 3
//rt FunctionMaxNetTime: toleranceInPercent = 3

bool ledState = false;

void TimerInterruptHandler(void)
{
  __disable_irq();
  InterruptRoutine();
  //GPIOPinToggle();
  __enable_irq();
}

void initGPIO(void)
{
  // Enable GPIOB
  RCC->AHB4ENR |= (1 << GPIOB_EN_BIT);
  // set OUTPUT mode
  OUT_PORT->MODER &= ~(0b11 << (OUT_PIN * 2)); // clear
  OUT_PORT->MODER |= (0b01 << (OUT_PIN * 2));
  // set push-pull mode
  OUT_PORT->OTYPER &= ~(1 << OUT_PIN);
  // disable pull-up/down
  OUT_PORT->PUPDR &= ~(0b11 << (OUT_PIN * 2));
  // set max speed
  OUT_PORT->OSPEEDR = 0xFFFFFFFF;

  // MCO2 output pin
  RCC->AHB4ENR |= (1 << GPIOC_EN_BIT);
  //set ALTERNATE mode
  MCO2_PORT->MODER &= ~(0b11 << (MCO2_PIN * 2)); // clear
  MCO2_PORT->MODER |= (0b10 << (MCO2_PIN * 2));
  // set push-pull mode
  MCO2_PORT->OTYPER &= ~(1 << MCO2_PIN);
  // set max speed
  MCO2_PORT->OSPEEDR = 0xFFFFFFFF;
  // NOTE: It is highly recommended to configure these bits only after reset
  // set MCO prescaller
  RCC->CFGR |= (10 << MCO2PRE_BIT);
  // route sys clk to MCO2
  RCC->CFGR |= (0b011 << MCO2SEL_BIT);

  // MCO1 output pin
  RCC->AHB4ENR |= (1 << GPIOA_EN_BIT);
  //set ALTERNATE mode
  MCO1_PORT->MODER &= ~(0b11 << (MCO1_PIN * 2)); // clear
  MCO1_PORT->MODER |= (0b10 << (MCO1_PIN * 2));
  // set push-pull mode
  MCO1_PORT->OTYPER &= ~(1 << MCO1_PIN);
  // set max speed
  MCO1_PORT->OSPEEDR = 0xFFFFFFFF;
  // NOTE: It is highly recommended to configure these bits only after reset
  // set MCO prescaller
  RCC->CFGR |= (10 << MCO1PRE_BIT);
  // route HSI to MCO1 (default)
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

void targetInit(void)
{
  __disable_irq();

  initPWR();

  initGPIO();
  initITM();
  initClock();
}

void targetShutdown(void)
{
}

void targetEnableInterrupts(void)
{
  __enable_irq(); //Global int enable CPSIE
}

void targetDisableInterrupts(void)
{
  __disable_irq();
}

void GPIOPinToggle(void)
{
  ledState = !ledState;
  if (ledState == true)
  {
    OUT_PORT->BSRR |= (1 << OUT_PIN); // set
  }
  else
  {
    OUT_PORT->BSRR |= (1 << (OUT_PIN + 16)); // clear
  }
}

void disableWatchdog(void)
{
}

void profilerAddTestMessages(void)
{
  while (ITM->PORT[ITM_SELECTED_PORT].u32 == 0);
  ITM->PORT[ITM_SELECTED_PORT].u32 = 0x12345678; //rt ProfilerITMOTM: id=data1value1, symbol=0, value=0x12345678

  while (ITM->PORT[ITM_SELECTED_PORT].u32 == 0);
  ITM->PORT[ITM_SELECTED_PORT].u16 = 0xABCD; //rt ProfilerITMOTM: id=data1value2, symbol=0, value=0xABCD

  while (ITM->PORT[ITM_SELECTED_PORT].u32 == 0);
  ITM->PORT[ITM_SELECTED_PORT].u8 = 0xEF; //rt ProfilerITMOTM: id=data1value3, symbol=0, value=0xEF

  while (ITM->PORT[ITM_SELECTED_PORT].u32 == 0);
}