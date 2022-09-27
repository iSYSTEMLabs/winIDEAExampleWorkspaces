#include "SR5E1.h"


void targetEnableInterrupts()
{
  __asm volatile ("cpsie i");
}


void disableWatchdog()
{
  
}

char pinToggle = 0;

void enableSecondaryCores()
{
  C2_VTOR_INIT_REG = C2_BOOT_ADDRESS;
  C2_BOOT_CTRL_REG |= 0x03;
}

void initITM()
{
  ITM_LOCK_ACCESS_REGISTER 		= 0xC5ACCE55;  	// Unlock write access to ITM
  ITM_TRACE_ENABLE_REGISTER 	= 0xFFFFFFFF;	// Enable stimulus ports 0-31
  ITM_TRACE_PRIVILEGE_REGISTER 	= 0x1;     		// Set privilege
}

void initClock()
{  
  // Set crystal (XOSC) as input to PLL1
  RCC_PLLCFGR = (RCC_PLLCFGR_PLL1SRC_XOSC << RCC_PLLCFGR_PLL1SRC);
  
  // fCPU = fIN * MFD/(2*RFDPHI) = 40 * 60/(2*4) = 300 MHz
  PLLDIG_PLL1DV = (60 << PLLDIG_PLL1DV_MFD) |
                  (4 << PLLDIG_PLL1DV_RFDPHI);
  
  // Turn on XOSC and wait until it's ready to use
  RCC_CR |= (1 << RCC_CR_XOSCON);
  while(!(RCC_CR & (1 << RCC_CR_XOSCRDY)));
  
  // Turn on PLL1 and wait until it's ready to use
  RCC_CR |= (1 << RCC_CR_PLL1ON);
  while(!(RCC_CR & (1 << RCC_CR_PLL1LOCK)));
  
  // Change system clock to PLL1 and wait for it to complete
  RCC_CFGR = (RCC_CFGR_SW_PLL1 << RCC_CFGR_SW);
  unsigned long swsValue = (RCC_CFGR_SW_PLL1 << RCC_CFGR_SWS);
  while((RCC_CFGR & swsValue) != swsValue);
}


void initTimer()
{
  SYSTICK_RVR = 300000; // 300k/300MHz = 1ms
  SYSTICK_CVR = 0;
  SYSTICK_CSR = (1 << SYSTICK_CSR_ENABLE)  |
                (1 << SYSTICK_CSR_TICKINT) |
                (1 << SYSTICK_CSR_CLKSOURCE);
}

void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  enableSecondaryCores();
  initITM();
  initClock();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}