#include "iSYSTEM_sfr.h"

// Disables all PLL registers
void initClock()
{
  // Enable high speed internal clock
  RCC.CR.B.HSION = 1;

  // Clear CFGR register
  RCC.CFGR.R = 0;
  
  // Reset HSEON, CSSON , CSION,RC48ON, CSIKERON PLL1ON, PLL2ON and PLL3ON bits
  RCC.CR.R &= 0xEAF6ED7FU;
  
  // Reset PLL registers
  RCC.D1CFGR.R = 0;
  RCC.D2CFGR.R = 0;
  RCC.D3CFGR.R = 0;
  
  RCC.PLLCKSELR.R = 0;
  RCC.PLLCFGR.R = 0;
  
  RCC.PLL1DIVR.R = 0;
  RCC.PLL1FRACR.R = 0;
  RCC.PLL2DIVR.R = 0;
  RCC.PLL2FRACR.R = 0;
  RCC.PLL3DIVR.R = 0;
  RCC.PLL3FRACR.R = 0;
  
  // Disable HSE bypass
  RCC.CR.B.HSEBYP = 0;
  
  // Disable all RCC-related interrupts
  RCC.CIER.R = 0;

  // Enable GPIO clock
  RCC.C1_AHB4ENR.B.GPIOGEN = 1;
}

// Initialize GPIO pin PG13 as output
void initGPIO()
{
  // Set pin speed to High speed
  GPIOG.OSPEEDR.B.OSPEED13 = 0b10;
  
  // Set pin as push-pull
  GPIOG.OTYPER.B.OT13 = 0;

  // Set pin as pullup
  GPIOG.PUPDR.B.PUPD13 = 1;

  // Set pin as output
  GPIOG.MODER.B.MODE13 = 1;
  
  /*
    Initialize other pins and ports here
  */
  
  
}

void turnOffLED1()
{
  // Stub
}

void turnOffLED2()
{
  // Stub
}

void toggleLED1()
{
  // Stub
}

void toggleLED2()
{
  // Stub
}

void toggleLED3()
{
  GPIOG.ODR.B.OD13 ^= 1;
}

void targetInit()
{
  // Enable FPU
  System_Control_Space_System_Control_Block.CPACR.B.CP10 = 1;
  System_Control_Space_System_Control_Block.CPACR.B.CP11 = 1;
  
  initClock();
  
  // Disable the FMC bank1 (enabled after reset).
  FMC.BCR1.R = 0x000030D2;
  
  // Clear old preemeption priority value
  uint32_t tempValue = System_Control_Space_System_Control_Block.AIRCR.R;
  tempValue &= 0xF8FF;
  
  // Set 4 bits for preemption priority
  System_Control_Space_System_Control_Block.AIRCR.R |= tempValue | (0x3 << 8) | (0x5FA << 16);
  
  initGPIO();
}

/*
  Exception handlers
*/
  
void NMI_Handler()
{
  
}

void HardFault_Handler()
{
  
}

void MemManage_Handler()
{
  
}

void BusFault_Handler()
{
  
}

void UsageFault_Handler()
{
  
}