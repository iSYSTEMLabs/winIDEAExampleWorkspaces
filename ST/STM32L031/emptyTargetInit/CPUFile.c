#include "STM32L0.h"


#include "ARMCM0.h"
#include "system_ARMCM0.h"
#include "core_cm0.h"


void InitPLL()
{
  /* (1) Enable HSI */
  /* (2) Select HSI as system clock */
  /* (3) Wait for HSI switched */
  /* (4) Disable the PLL */
  /* (5) Wait until PLLRDY is cleared */
  /* (6) Set latency to 1 wait state */
  /* (7) Set the PLL multiplier to 24 and divider by 3 */
  /* (8) Enable the PLL */
  /* (9) Wait until PLLRDY is set */
  /* (10) Select PLL as system clock */
  /* (11) Wait until the PLL is switched on */
  
  RCC_CR |= (1<<RCC_CR_HSI16ON); // (1)
  
  RCC_CFGR = (RCC_CFGR & ~(3<<RCC_CFGR_SW)) | (1<<RCC_CFGR_SW); // (2)
  
  while(!(RCC_CFGR & (1<<RCC_CFGR_SWS))); // (3)

  RCC_CR &= ~(1<<RCC_CR_PLLON); // (4)
  
  while(RCC_CR & (1<<RCC_CR_PLLRDY)); // (5)
  
  FLASH_ACR |= (1<<FLASH_ACR_LATENCY); // (6)
  
  RCC_CFGR = (RCC_CFGR & ~((0xF<<RCC_CFGR_PLLMUL) | (3<<RCC_CFGR_PLLDIV)))
             | (1<<RCC_CFGR_PLLDIV | 1<<RCC_CFGR_PLLMUL); // (7)
  
  RCC_CR |= (1<<RCC_CR_PLLON); // (8)
  
  while(!(RCC_CR & (1<<RCC_CR_PLLRDY))); // (9)
  
  RCC_CFGR |= (3<<RCC_CFGR_SW); //(10)
  
  while((RCC_CFGR & (3<<RCC_CFGR_SWS)) != 3<<RCC_CFGR_SWS); // (11)
}

void sysTickInit()
{                 
  /*SYST_RVR = 0xF94; // set timer to 1.00ms
  SYST_CVR = 0;
  SYST_CSR = 0x03;*/
  
  //Initialize SysTick using CMSIS function (Note: 24 bit reload value only)
  SysTick_Config(0x7D01);
  //Enable SysTick Interrupt
  __enable_irq();
}


void targetEnableInterrupts()
{ 
  sysTickInit(); 
  //__asm volatile ("CPSIE i");
}

void targetDisableInterrupts()
{
  __disable_irq();
}


void targetInit()
{      
  #ifndef EMPTY_TARGET_INIT

  InitPLL();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void SysTick_Handler(void)
{
  InterruptRoutine();
}


void disableWatchdog()
{
}
