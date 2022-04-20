#include "traveo2_M0.h"


/*---------------------------------------------*/
extern unsigned long _cm7_0_Boot;
extern unsigned long _cm7_1_Boot;

unsigned char gotoStopLowPowerMode = 0;
unsigned char gotoStandbyLowPowerMode = 0;
unsigned char gotoSleepLowPowerMode = 0;

#define CHECK_BIT(var,pos) ((var & (1 << pos)) == (1 << pos))


void enableCM7()
{
  // Enable HF1 Clk
  SRSS_CLK_ROOT_SELECT1_REG = 0x80000000;
  // Set Vector tabel
  CPUSS_CM7_0_VECTOR_TABLE_BASE_REG = (unsigned long)&_cm7_0_Boot;
  CPUSS_CM7_1_VECTOR_TABLE_BASE_REG = (unsigned long)&_cm7_1_Boot;
  // Power up secondary cores
  CPUSS_CM7_0_PWR_CTL_REG = CPUSS_CM7_x_PWR_CTL_VECTKEYSTAT | CPUSS_CM7_x_PWR_CTL_PWR_MODE_ENABLE;
  CPUSS_CM7_1_PWR_CTL_REG = CPUSS_CM7_x_PWR_CTL_VECTKEYSTAT | CPUSS_CM7_x_PWR_CTL_PWR_MODE_ENABLE;
  // Release CM7.0 and CM7.1
  CPUSS_CM7_0_CTL_REG = CPUSS_CM7_0_CTL_REG & ~CPUSS_CM7_x_CTL_CPU_WAIT;
  CPUSS_CM7_1_CTL_REG = CPUSS_CM7_1_CTL_REG & ~CPUSS_CM7_x_CTL_CPU_WAIT;

}

// PLL not working
void CPU_Init()
{
  CLK_ECO_CONFIG |= (1 << ECO_EN); //enable external 16 MHz oscillator
  while(!(CLK_ECO_STATUS & 3));  //wait until ECKP_OK and ECO_READY status are set
  CLK_PATH_SELECT1 = (2 << PATH_MUX); //select external oscillator for clock path1
  
  int value = 0;
  //1. set PLL parameters to suitable values
  //Fpll = (FEEDBACK_DIV) * (Fref / REFERENCE_DIV) / (OUTPUT_DIV)
  //because something is strange, Fpll is set to 80 MHz, not max. 160 MHz.
  value |= (2 << REFERENCE_DIV);
  value |= (40 << FEEDBACK_DIV);
  value |= (2 << OUTPUT_DIV);
  CLK_PLL_CONFIG0 = value;
  
  //2. enable PLL
  CLK_PLL_CONFIG0 |= (1 << ENABLE);
  
  //3. wait until PLL is locked. When PLL is lock, PLL is
  //automaticaliy chosen
  while(!(CLK_PLL_STATUS0 & (1 << LOCKED)));
  
  FLASH_CTL |= (1 << MAIN_WS); //set wait state for flash to 1
  
  CLK_ROOT_SELECT0 |= (1 << ROOT_MUX); //select PLL for CPU clock
}

void initTimer()
{
  //TCPWM0 GRP0 CNT0 16-bit counter
  PERI_CLOCK_CTL_6 = 0x00000100;
  CLK_TIMER_CTL |= (0x1 << CLK_TIMER_CTL_ENABLE);

  PERI_DIV_16_CTL0 |= (0x27 << 8); // Set divider to 40 (39+1)
  int tempDIV_CMD = 0x00000000;
  tempDIV_CMD |= (0x1 << 31);
  tempDIV_CMD |= (0x3 << 24);
  tempDIV_CMD |= (0xFF << 16);
  tempDIV_CMD |= (0x1 << 8);
  
  PERI_DIV_CMD = tempDIV_CMD;
  
  TCPWM0_GRP0_CNT0_CTRL = 0;
  
  TCPWM0_GRP0_CNT0_CTRL |= (0x1 << 0);
  
  TCPWM0_GRP0_CNT0_CC0 = 1250; // Set timer to 1ms (board rev. C), for older revisions 1ms = 200
  TCPWM0_GRP0_CNT0_CC0_BUFF = 1250;
  
  TCPWM0_GRP0_CNT0_PERIOD = 1250;
  
  TCPWM0_GRP0_CNT0_CTRL |= (1<<31); //enable counter 
  
  TCPWM0_GRP0_CNT0_TR_CMD |= (0x1 << 4);
  
  TCPWM0_GRP0_CNT0_INTR_MASK |= (0x2 << 0);
}

void initTimerForLPM()
{
  //TCPWM0 GRP2 CNT0 32-bit counter
  PERI_CLOCK_CTL_12 = 0x00000100;
  CLK_TIMER_CTL |= (0x1 << CLK_TIMER_CTL_ENABLE);

  PERI_DIV_16_CTL0 |= (0x27 << 8); // Set divider to 40 (39+1)
  int tempDIV_CMD = 0x00000000;
  tempDIV_CMD |= (0x1 << 31);
  tempDIV_CMD |= (0x3 << 24);
  tempDIV_CMD |= (0xFF << 16);
  tempDIV_CMD |= (0x1 << 8);
  
  PERI_DIV_CMD = tempDIV_CMD;
  
  TCPWM0_GRP2_CNT0_CTRL = 0;
  
  TCPWM0_GRP2_CNT0_CTRL |= (0x1 << 0);
  
  TCPWM0_GRP2_CNT0_CC0 = 1250000; // Set timer to 1s (board rev. C), for older revisions 1s = 200 000
  TCPWM0_GRP2_CNT0_CC0_BUFF = 1250000;
  
  TCPWM0_GRP2_CNT0_PERIOD = 1250000;
  
  TCPWM0_GRP2_CNT0_CTRL |= (1<<31); //enable counter 
  
  TCPWM0_GRP2_CNT0_TR_CMD |= (0x1 << 4);
  
  TCPWM0_GRP2_CNT0_INTR_MASK |= (0x2 << 0);
}

// Currently not used, needed for Hibernate LPM wakeup.
void setupRTCTimer() 
{
  // Not working yet
  BACKUP_RESET |= (0x1 << BACKUP_RESET_RST);
  while(CHECK_BIT(BACKUP_RESET, BACKUP_RESET_RST) == 1);
  
  BACKUP_RTC_RW |= (0x1 << BACKUP_RTC_RW_WRITE);
  
  BACKUP_CTL |= (0x1 << BACKUP_CTL_WCO_EN);
  while (CHECK_BIT(BACKUP_STATUS, BACKUP_STATUS_WCO_OK) != 1);
  BACKUP_ALM1_TIME &= ~(0x3F << BACKUP_ALM1_TIME_ALM_SEC);
  BACKUP_ALM1_TIME |= (0x1 << BACKUP_ALM1_TIME_ALM_SEC);
  BACKUP_ALM1_TIME |= (0x1 << BACKUP_ALM1_TIME_ALM_SEC_EN);
  BACKUP_ALM1_DATE |= (0x1 << BACKUP_ALM1_DATE_ALM_EN);
  
  BACKUP_INTR_MASK |= (0x1 << BACKUP_INTR_MASK_ALARM1);
  BACKUP_INTR |= (0x1 << BACKUP_INTR_ALARM1);
  
  BACKUP_RTC_TIME &= ~(0x3F << 0); // Reset RTC seconds
  BACKUP_INTR = 0x00000001;
  BACKUP_RTC_RW &= ~(0x1 << BACKUP_RTC_RW_WRITE);
  
  while (CHECK_BIT(BACKUP_STATUS, BACKUP_STATUS_RTC_BUSY) == 1);
}

void initGPOI()
{
  // Enable LED4
  GPIO_PRT3_CFG |= (6 << DRIVE_MODE2);
  GPIO_PRT3_OUT |= (1 << OUT2);
}


void targetEnableInterrupts()
{
  CM0_SYSTEM_INT_CTL_519 = 0x0;
  CM0_SYSTEM_INT_CTL_519 |= (0x3 << CM0_SYSTEM_INT_CTL_519_INT_IDX);
  CM0_SYSTEM_INT_CTL_519 |= (0x1 << CM0_SYSTEM_INT_CTL_519_INT_VALID);
  NVIC_ISER_0 |= (0x1 << NVIC_ISER_0_TCPWM);
}

void enableLPMInterrupts()
{
  // Enable interrupts for TCPWM0 GRP2 CNT0
  CM0_SYSTEM_INT_CTL_550 = 0x0;
  CM0_SYSTEM_INT_CTL_550 |= (0x7 << CM0_SYSTEM_INT_CTL_550_INT_IDX);
  CM0_SYSTEM_INT_CTL_550 |= (0x1 << CM0_SYSTEM_INT_CTL_550_INT_VALID);
  NVIC_ISER_0 |= (0x1 << NVIC_ISER_2_TCPWM);
  
  // Enable interrupts for RTC alarm
  CM0_SYSTEM_INT_CTL_12 = 0x0;
  CM0_SYSTEM_INT_CTL_12 |= (0x2 << CM0_SYSTEM_INT_CTL_12_INT_IDX);
  CM0_SYSTEM_INT_CTL_12 |= (0x1 << CM0_SYSTEM_INT_CTL_12_INT_VALID);
  NVIC_ISER_0 |= (0x1 << NVIC_ISER_0_BACKUP);
}


//Sleep = Sleep
void enterAndExitSleepMode()
{
  __asm volatile ("wfi");
} 

// Standby = DeepSleep
void enterAndExitStandbyMode()
{
  CM0_SCS_SCR |= (0x1 << CM0_SCS_SCR_SLEEPDEEP);
  __asm volatile ("wfi");
} 

// Stop = Hibernate
// Currently not working
void enterAndExitStopMode()
{
  PWR_HIBERNATE |= (0x5 << PWR_HIBERNATE_TOKEN);
  PWR_HIBERNATE |= (0x3A << PWR_HIBERNATE_UNLOCK);
  PWR_HIBERNATE |= (0x1 << PWR_HIBERNATE_MASK_HIBALARM);
  PWR_HIBERNATE |= (0x1 << PWR_HIBERNATE_FREEZE);
  PWR_HIBERNATE |= (0x1 << PWR_HIBERNATE_HIBERNATE);
  
} 

void targetEnterAndExitLowPowerMode()
{
  enableLPMInterrupts();
  if(gotoSleepLowPowerMode)
  {
    // Timer setup
    initTimerForLPM();
    enterAndExitSleepMode();
  }
  else
  {}
  if(gotoStandbyLowPowerMode)
  {
    initTimerForLPM();
    enterAndExitStandbyMode();
  }
  else
  {}
  if(gotoStopLowPowerMode)
  {
    setupRTCTimer();
    enterAndExitStopMode();
  }
  else
  {}
}

void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  enableCM7();
  //CPU_Init();
  initGPOI();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
}
