#include "PSoC4HV_SFR.h"
#include "PSoC4HV.h"


void initClock(void)  
{ 
  // 1. Change IMO frequency to CLK_IMO_SELECT = 0;
  CLK_IMO_SELECT = 0x00;
  
  // 2. Read SFLASH_IMO_TRIM_LT6 and load into CLK_IMO_TRIM1
  CLK_IMO_TRIM1 = SFLASH_IMO_TRIM_LT6;
  
  // 3. Read the SFLASH_IMO_TCTRIM_LT6 and load into CLK_IMO_TRIM2
  CLK_IMO_TRIM2 = SFLASH_IMO_TCTRIM_LT6;
  
  // 4. Read SFLASH_IMO_STEPSIZE_LT6 and load into CLK_IMO_TRIM3
  CLK_IMO_TRIM3 = SFLASH_IMO_STEPSIZE_LT6; 
  
  // 5. Wait 5us or more
  delayFunction(DELAY); 
  
  // 6. Write CLK_IMO_SELECT = 6, IMO = 48MHz
  CLK_IMO_SELECT |= CLK_IMO_SELECT_48MHZ; 
  
  // 7. Enable pump_clock to 48MHz
  CLK_SELECT |= CLK_SELECT_PUMP_SEL_0;
  
  // 8. FLASH wait states to 3 (required at this freqency)
  CPUSS_FLASH_CTL |= CPUSS_FLASH_CTL_3WS;
  
  // 9. Change HFCLK divider to 1: system clock will be 48Mhz
  CLK_SELECT &= ~CLK_SELECT_HFCLK_DIV_1;
}


void initTimer()
{  
  // Map 16bit clock divider0 to PER3_CLK (used by TCPWM0 timer)
  PERI_PCLK_CTL3 = 0x00000040;
  
  // Set 16bit clock divider0 to divide hfclk by 2 (6MHz)
  PERI_DIV16_CTL0 = 0x00000100;  
  
  // Enable 16bit clock divider 0
  PERI_DIV_CMD = 0x8000FF40;

  // Set TCPWM0 in timer mode, upcounting, continuous mode 
  
  // Set the required 16-bit period and compare values
  TCPWM_CNT0_PERIOD = RELOAD_1KHZ;
  TCPWM_CNT0_CC = RELOAD_1KHZ;    
  
  // Select counter overflow as the trigger to reload
  TCPWM_CNT0_TR_CTRL0 |= RELOAD_SEL_TCPW0_OVERFLOW; 
  
  // Set the interrupt mask for interrupts to be generated on Compare match condition.
  TCPWM_CNT0_INTR_MASK |= INTR_MASK__CC_MATCH;
  
  // Enable the TCPWM0 counter
  TCPWM_CTRL |= TCPWM_CTRL_COUNTER0_ENABLE;
  
  // Generate a start trigger to start counter
  TCPWM_CMD |= TCPWM_CMD_COUNTER0_START;
}


void targetEnableInterrupts()
{
  CM0P_ISER |= CM0P_ISER_SETENA_15;  // Enable IRQ15, TCPWM0 interrupt
}


void disableWatchdog()
{
  WDT_LOCK = 0x1;
  WDT_LOCK = 0x2;
  WDT_CTL &= ~(0x1 << 31);
  WDT_LOCK = 0x3;
}


void delayFunction(unsigned int u32Delay)
{
  unsigned int u32Counter = 0;
  while(u32Counter++ < u32Delay);
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT


  disableWatchdog();

  initClock();  // Set system clock to maximum frequency (48MHz)
  initTimer();  // Set Timer0 to generate interrupts at an interval of 1ms
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}
