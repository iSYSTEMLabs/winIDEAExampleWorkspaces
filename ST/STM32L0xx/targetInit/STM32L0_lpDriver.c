#include "STM32L0.h"

void enterAndExitSleepMode()
{
  RCC_APB2ENR |= (1 << TIM21EN); // enable clock for TIM21
  TIM21_CR1 |= (1 << OPM);       // Counter stops counting at the next update event (clearing the bit CEN)
  TIM21_ARR = 2000;          // set counter when interrupt triggers (2 s)
  TIM21_PSC = 32000;          // set counter prescaler
  
  TIM21_EGR = (0x1 << TIM21_EGR_UG); // manually generate update event so that PSC and ARR are updated
  
  TIM21_SR &= ~(1 << CC1IF); // clear interrupt
  TIM21_SR &= ~(1 << CC2IF); // clear interrupt
  TIM21_SR &= ~(1 << UIF); // clear interrupt
  TIM21_DIER |= (1 << CC1IE);    // Capture/Compare 1 interrupt enable
  INT_0_31_SET_EN |= (1 << TIM21_IRQ); //enable interrupt TIM21
  
  TIM21_CR1 |= (1 << CEN);          //enable counter
  
  asm("WFI"); // Wait for interrupt  
} 

void enableLSIOscillator()
{
  /* Enabler LSI oscillator */
  RCC_CSR |= (0x1 << RCC_CSR_LSION);
  while (!(RCC_CSR & (0x1 << RCC_CSR_LSIRDY)));
}

void softwareResetRTC()
{
  /* Assert and deassert RTC software reset */
  RCC_CSR |= (0x1 << RCC_CSR_RTCRST);
  RCC_CSR &= ~(0x1 << RCC_CSR_RTCRST);
}

void selectClockAndEnableRTC()
{
  /* Set RTC clock to LSI and enable it */
  unsigned volatile int dwCSRValue = RCC_CSR;
  dwCSRValue &= ~(0x3 << RCC_CSR_RTCSEL);
  dwCSRValue |= (0x2 << RCC_CSR_RTCSEL);
  RCC_CSR = dwCSRValue;
  
  RCC_CSR |= (0x1 << RCC_CSR_RTCEN);
}

void disableRTCWriteProtection()
{
  /* Disable RTC write protection */
  RTC_WPR = 0xCA;
  RTC_WPR = 0x53;
}

void enableRTCWriteProtection()
{
  /* Enable RTC write protection */
  RTC_WPR = 0xFF;
}

void gotoRTCInitMode()
{
  /* Go into RTC init mode */
  RTC_ISR |= (0x1 << RTC_ISR_INIT);
  while(!(RTC_ISR & (0x1 << RTC_ISR_INITF)));
}

void exitRTCInitMode()
{
  /* Exit init mode */
  RTC_ISR &= ~(0x1 << RTC_ISR_INIT);
  while((RTC_ISR & (0x1 << RTC_ISR_INITF)));
}

void configRTC()
{
  enableLSIOscillator();
  softwareResetRTC();
  selectClockAndEnableRTC();
  disableRTCWriteProtection();
  
  gotoRTCInitMode();
  
  /* Set RTC prescalers */
  RTC_PRER = (0x0127 << RTC_PRER_PREDIVS) | (0x7C << RTC_PRER_PREDIVA);
  
  /* Disable RTC wake-up timer and wait for updates to be enabled */
  RTC_CR &= ~(0x1 << RTC_CR_WUTE);
  while(!(RTC_ISR & (0x1 << RTC_ISR_WUTWF)));
  
  /* Set wake-up auto-reload value (2s) and select clock divisor (/16) */
  RTC_WUTR = 2;
  unsigned volatile int dwRTCCRVal = RTC_CR;
  dwRTCCRVal &= ~(0x7 << RTC_CR_WUCKSEL);
  dwRTCCRVal |= (0x4 << RTC_CR_WUCKSEL);
  RTC_CR = dwRTCCRVal;
  
  exitRTCInitMode();
  enableRTCWriteProtection();
}

void enterAndExitStandbyMode()
{
  PWR_CR |= (0x1 << PWR_CR_DBP); // Disable backup write protection
  
  configRTC();
  
  /* Enter standby mode */
  disableRTCWriteProtection();
  
  /* Enable wake-up timer and interrupts */
  RTC_CR |= (0x1 << RTC_CR_WUTIE);
  RTC_CR |= (0x1 << RTC_CR_WUTE);
  
  enableRTCWriteProtection();
  
  RTC_ISR = ~((0x1 << RTC_ISR_WUTF) | (0x1 << RTC_ISR_INIT));
  while(RTC_ISR & (0x1 << RTC_ISR_WUTF));
  
  PWR_CR |= (0x1 << PWR_CR_PDDS); // select standby mode
  SCR = (0x1 << SCR_SLEEPDEEP);
  asm("WFI"); // Wait for interrupt
} 

void configEXTIForRTCWakeup()
{
  EXTI_IMR |= (0x1 << EXTI_IMR_MR20);
  EXTI_RTSR |= (0x1 << EXTI_RTSR_TR20);
  
  INT_0_31_SET_EN |= (1 << RTC_IRQ); //enable interrupt TIM21
}

void enterAndExitStopMode()
{
  PWR_CR |= (0x1 << PWR_CR_DBP); // Disable backup write protection
  
  configRTC();
  
  configEXTIForRTCWakeup();
  
  /* Enter standby mode */
  disableRTCWriteProtection();
  
  /* Select HSI as wake-up clock from STOP state */
  RCC_CFGR |= (0x1 << RCC_CFGR_STOPWUCK);
  
  /* Enable wake-up timer and interrupts */
  RTC_CR |= (0x1 << RTC_CR_WUTIE);
  RTC_CR |= (0x1 << RTC_CR_WUTE);
  
  enableRTCWriteProtection();
  
  RTC_ISR = ~((0x1 << RTC_ISR_WUTF) | (0x1 << RTC_ISR_INIT));
  while(RTC_ISR & (0x1 << RTC_ISR_WUTF));
  
  PWR_CR &= ~(0x1 << PWR_CR_PDDS); // select stop mode
  SCR = (0x1 << SCR_SLEEPDEEP);
  asm("WFI"); // Wait for interrupt
}