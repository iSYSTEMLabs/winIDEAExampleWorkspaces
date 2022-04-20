#include "RSL10.h"
#include "RSL10_sfr.h"


void initTimer(void)
{  
  TIMER.TIMER_CFG_0.B.MODE = 0x1; // Enable timer free-run mode
  TIMER.TIMER_CFG_0.B.CLK_SRC = 0x1; // Timer clock source is SLOWCLK divided by 2 (1MHz)
  TIMER.TIMER_CFG_0.B.TIMEOUT_VALUE = 1000; // Load timer to generate 1ms interrupt

  NVIC.NVIC_IP1.B.TIMER0 = 0x0; // Set TIMER0 interrupt priority in NVIC
  NVIC.NVIC_ICPR0.B.TIMER0 = 0x1; // Clear any pending in NVIC on TIMER0
  NVIC.NVIC_ISER0.B.TIMER0 = 0x1; // Enable interrupt in NVIC for TIMER0
}

void initClock(void)
{
  SYSCTRL.SYSCTRL_RF_POWER_CFG.B.RF_POWER = 0x1; // Enable power to RF frontend
  SYSCTRL.SYSCTRL_RF_ACCESS_CFG.B.RF_ACCESS = 0x1; // Enable access to RF frontend
  
  RF.RF_XTAL_CTRL.B.XTAL_CTRL_XO_EN_B_REG = 0x0; // Enable 48MHz oscillator
  RF.RF_XTAL_CTRL.B.XTAL_CTRL_XTAL_CTRL_BYPASS = 0x1; // Clear trimming, set oscillator to 48MHz
  RF.RF_XTAL_CTRL.B.XTAL_CTRL_REG_VALUE_SEL = 0x1; // Values from RF_XTAL_CTRL register are used
    
  FLASH.FLASH_DELAY_CTRL.B.SYSCLK_FREQ = 0x9; // Flash delay for SYSCLK = 48MHz
  
  while(!(RF_RF_REG39 & (1 << RF_RF_REG39_ANALOG_INFO_CLK_DIG_READY)));
  while(!(RF_RF_REG39 & (1 << RF_RF_REG39_ANALOG_INFO_CLK_PLL_READY)));

  RF.RF_REG2F.B.CK_DIV_1_6_CK_DIV_1_6 = 0x1; // Use no clock division
  CLK.CLK_SYS_CFG.B.SYSCLK_SRC_SEL = 0x2; // Set 48MHz RFCLK as system clock (SYSCLK)

  CLK.CLK_DIV_CFG0.B.SLOWCLK_PRESCALE = 23; // Divide SLOWCLK by 23+1
}

void targetEnableInterrupts(void) 
{
  asm volatile("cpsie i");
  
  TIMER.TIMER_CTRL_0.B.TIMER_START = 0x1; // Start the timer
}


void targetInit() 
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog() 
{
}