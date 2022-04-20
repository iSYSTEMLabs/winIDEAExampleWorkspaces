#include "traveo2_M0.h"


/* For M4 Core */
extern unsigned long MY_START;
extern unsigned long VECTA_ORIGIN;
extern unsigned long VECTB_ORIGIN;
extern unsigned long cm4OffsetInFlash;
extern unsigned long cm4OffsetInRam;

unsigned char gotoStopLowPowerMode = 0;
unsigned char gotoStandbyLowPowerMode = 0;
unsigned char gotoSleepLowPowerMode = 0;

#define CHECK_BIT(var,pos) ((var & (1 << pos)) == (1 << pos))

unsigned long GetSecondaryEntry()
{
  if ( (unsigned long)(&MY_START) == (unsigned long)(&VECTA_ORIGIN) )
  {
    return (unsigned long)(&MY_START) + (unsigned long)(&cm4OffsetInFlash);
  }
  return (unsigned long)(&MY_START) + (unsigned long)(&cm4OffsetInRam);
}

/*---------------------------------------------*/


void enableCM4()
{
  unsigned long dwCY_CORTEX_M4_APPL_ADDR = GetSecondaryEntry();
  if (!(CHECK_BIT(CM4_PWR_CTL, CM4_PWR_CTL_MODE) == 1 && CHECK_BIT(CM4_PWR_CTL, CM4_PWR_CTL_MODE + 1) == 1))
  {
    CM4_VECTOR_TABLE_BASE = dwCY_CORTEX_M4_APPL_ADDR;
    CM4_PWR_CTL = 0x05FACEFF;
  }
}

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
  CLK_PLL_CONFIG = value;
  
  //set Cortex M4 frequency to 80 MHz but set Cortex M0+ to 40 MHz with divider
  CM0_CLOCK_CTL |= (1 << PERI_INT_DIV);
  
  //2. enable PLL
  CLK_PLL_CONFIG |= (1 << ENABLE);
  
  //3. wait until PLL is locked. When PLL is lock, PLL is
  //automaticaliy chosen
  while(!(CLK_PLL_STATUS & (1 << LOCKED)));
  
  FLASH_CTL |= (1 << MAIN_WS); //set wait state for flash to 1
  
  CLK_ROOT_SELECT0 |= (1 << ROOT_MUX); //select PLL for CPU clock
}

void setupTimerForSleep()
{
  // GRP2 CNT0 32-bit counter
  //PERI_CLOCK_CTL_106 = 0x00000100;
  PERI_CLOCK_CTL_116 = 0x00000100;
  CLK_TIMER_CTL |= (0x1 << CLK_TIMER_CTL_ENABLE);

  PERI_DIV_16_CTL0 |= (0x27 << 8); // Clock divided by 39+1 -> 2MHz
  int tempDIV_CMD = 0x00000000;
  tempDIV_CMD |= (0x1 << 31);
  tempDIV_CMD |= (0x3 << 24);
  tempDIV_CMD |= (0xFF << 16);
  tempDIV_CMD |= (0x1 << 8);
  
  PERI_DIV_CMD = tempDIV_CMD;
  
  TCPWM0_GRP2_CNT0_CTRL = 0;
  
  TCPWM0_GRP0_CNT0_CTRL |= (0x1 << 0);
  
  TCPWM0_GRP2_CNT0_CC0 = 2000000; // Set timer to 1s
  TCPWM0_GRP2_CNT0_CC0_BUFF = 2000000;
  
  TCPWM0_GRP2_CNT0_PERIOD = 2000000;
  
  TCPWM0_GRP2_CNT0_CTRL |= (1<<31); //enable counter 
  
  TCPWM0_GRP2_CNT0_TR_CMD |= (0x1 << 4);
  
  TCPWM0_GRP2_CNT0_INTR_MASK |= (0x2 << 0);
}

void initTimer()
{
  //GRP0 CNT0 16-bit counter
  PERI_CLOCK_CTL_41 = 0x00000100;
  CLK_TIMER_CTL |= (0x1 << CLK_TIMER_CTL_ENABLE);

  PERI_DIV_16_CTL0 |= (0x27 << 8); // Clock divided by 39+1 -> 2MHz
  int tempDIV_CMD = 0x00000000;
  tempDIV_CMD |= (0x1 << 31);
  tempDIV_CMD |= (0x3 << 24);
  tempDIV_CMD |= (0xFF << 16);
  tempDIV_CMD |= (0x1 << 8);
  
  PERI_DIV_CMD = tempDIV_CMD;
  
  TCPWM0_GRP0_CNT0_CTRL = 0;
  
  TCPWM0_GRP0_CNT0_CTRL |= (0x1 << 0);
  
  TCPWM0_GRP0_CNT0_CC0 = 2000; // Set timer to 1ms
  TCPWM0_GRP0_CNT0_CC0_BUFF = 2000;
  
  TCPWM0_GRP0_CNT0_PERIOD = 2000;
  
  TCPWM0_GRP0_CNT0_CTRL |= (1<<31); //enable counter 
  
  TCPWM0_GRP0_CNT0_TR_CMD |= (0x1 << 4);
  
  TCPWM0_GRP0_CNT0_INTR_MASK |= (0x2 << 0);
}


void targetEnableInterrupts()
{
  __asm volatile ("cpsie i" : : : "memory");
  
  // Enable interrupts for TCPWM GRP0 CNT0
  CM0_SYSTEM_INT_CTL_300 &= ~(0x7 << CM0_SYSTEM_INT_CTL_300_INT_IDX);
  CM0_SYSTEM_INT_CTL_300 |= (0x3 << CM0_SYSTEM_INT_CTL_300_INT_IDX);
  CM0_SYSTEM_INT_CTL_300 |= (0x1 << CM0_SYSTEM_INT_CTL_300_INT_VALID);
  NVIC_ISER_0 |= (0x1 << NVIC_ISER_0_TCPWM);
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
// Currently not tested, due to issues with RTC wakeup
void enterAndExitStopMode()
{
  PWR_HIBERNATE |= (0x5 << PWR_HIBERNATE_TOKEN);
  PWR_HIBERNATE |= (0x3A << PWR_HIBERNATE_UNLOCK);
  PWR_HIBERNATE |= (0x1 << PWR_HIBERNATE_MASK_HIBALARM);
  PWR_HIBERNATE |= (0x1 << PWR_HIBERNATE_FREEZE);
  PWR_HIBERNATE |= (0x1 << PWR_HIBERNATE_HIBERNATE);
} 

void enableLPMInterrupts()
{
  __asm volatile ("cpsie i" : : : "memory");
  // Enable interrupts for TCPWM GRP2 CNT0 (32-bit)
  CM0_SYSTEM_INT_CTL_375 |= (0x7 << CM0_SYSTEM_INT_CTL_375_INT_IDX);
  CM0_SYSTEM_INT_CTL_375 |= (0x1 << CM0_SYSTEM_INT_CTL_375_INT_VALID);
  NVIC_ISER_0 |= (0x1 << NVIC_ISER_2_TCPWM);
  // Enable interrupts for RTC alarm
  CM0_SYSTEM_INT_CTL_12 = 0x0;
  CM0_SYSTEM_INT_CTL_12 |= (0x2 << CM0_SYSTEM_INT_CTL_12_INT_IDX);
  CM0_SYSTEM_INT_CTL_12 |= (0x1 << CM0_SYSTEM_INT_CTL_12_INT_VALID);
  NVIC_ISER_0 |= (0x1 << NVIC_ISER_0_BACKUP);
} 

void targetEnterAndExitLowPowerMode()
{
  enableLPMInterrupts();
  if(gotoSleepLowPowerMode)
  {
    // Timer setup
    setupTimerForSleep();
    enterAndExitSleepMode();
  }
  else
  {}
  if(gotoStandbyLowPowerMode)
  {
    setupTimerForSleep();
    enterAndExitStandbyMode();
  }
  else
  {}
  if(gotoStopLowPowerMode)
  {
    // Not working yet
    setupRTCTimer();
    enterAndExitStopMode();
  }
  else
  {}
}

void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  //delay for SOC reset. Otherwise PLL is configured 2x
  int i;
  for(i=0; i<200000; i++);

  enableCM4();
  CPU_Init();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}
void disableWatchdog()
{
}
