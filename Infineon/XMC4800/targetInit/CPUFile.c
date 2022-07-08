#include "XMC4800.h" 


void initITM()
{
  ITM_LOCK_ACCESS_REGISTER     = 0xC5ACCE55;  // Unlock write access to ITM
  ITM_TRACE_ENABLE_REGISTER    = 0xFFFFFFFF;  // Enable stimulus port 0-31 
  ITM_TRACE_PRIVILEGE_REGISTER = 0x1;         // Set privilege
}


void initClock()
{
  // Enable 12 MHz crystal oscillator
  SCU_OSCHPCTRL |= (0b01 << SCU_OSCHPCTRL_GAINSEL) | (5 << SCU_OSCHPCTRL_OSCVAL);
  SCU_OSCHPCTRL &= ~(0b11 << SCU_OSCHPCTRL_MODE);
  
  // Power up PLL, select crystal as PLL source, enable oscillator watchdog
  SCU_PLLCON0 &= ~((1 << SCU_PLLCON0_PLLPWD) | (1 << SCU_PLLCON0_VCOPWD) | (1 << SCU_PLLCON0_OSCRES));
  SCU_PLLCON2 &= ~ (1 << SCU_PLLCON2_PINSEL);
  
  // Wait for stable PLL
  unsigned long pllstat_mask = (1 << SCU_PLLSTAT_PLLLV) | (1 << SCU_PLLSTAT_PLLHV) | (1 << SCU_PLLSTAT_PLLSP);
  while((SCU_PLLSTAT & pllstat_mask) != pllstat_mask);
  
  // Set up PLL dividers
  // fPLL = fCRYSTAL * (N+1)/((P+1)(K2+1)) = 12MHz * 48/4 = 144MHz
  SCU_PLLCON1 = (1 << SCU_PLLCON1_PDIV)  |
                (47 << SCU_PLLCON1_NDIV) |
                (1 << SCU_PLLCON1_K2DIV);
  
  // Connect crystal to PLL
  SCU_PLLCON0 |= (1 << SCU_PLLCON0_OSCDISCDIS);
  SCU_PLLCON0 &= ~(1 << SCU_PLLCON0_FINDIS);
  SCU_PLLCON0 |= (1 << SCU_PLLCON0_RESLD);
  while(!(SCU_PLLSTAT & (1 << SCU_PLLSTAT_VCOLOCK)));
  
  // Disable VCO bypass and switch system clock to PLL
  SCU_PLLCON0 &= ~(1 << SCU_PLLCON0_VCOBYP);
  SCU_SYSCLKCR = (1 << SCU_SYSCLKCR_SYSSEL);
}

void initTimer()
{
  SYSTICK_RVR = 144000; // 144k/144MHz = 1ms
  SYSTICK_CVR = 0;
  SYSTICK_CSR = (1 << SYSTICK_CSR_ENABLE) |
                (1 << SYSTICK_CSR_TICKINT) |
                (1 << SYSTICK_CSR_CLKSOURCE);
}

void targetEnableInterrupts()
{
  __asm volatile ("cpsie i");
}


void targetInit()
{   
  #ifndef EMPTY_TARGET_INIT

  initITM();
  initClock();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
  
}
