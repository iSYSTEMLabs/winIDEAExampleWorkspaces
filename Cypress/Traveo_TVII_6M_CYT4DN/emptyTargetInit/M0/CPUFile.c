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
  PERI_CLOCK_CTL_2 = 0x00000100;
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
  
  TCPWM0_GRP0_CNT0_CC0 = 400; // Set timer to 1ms (board rev. C), for older revisions 1ms = 200
  TCPWM0_GRP0_CNT0_CC0_BUFF = 400;
  
  TCPWM0_GRP0_CNT0_PERIOD = 400;
  
  TCPWM0_GRP0_CNT0_CTRL |= (1<<31); //enable counter 
  
  TCPWM0_GRP0_CNT0_TR_CMD |= (0x1 << 4);
  
  TCPWM0_GRP0_CNT0_INTR_MASK |= (0x2 << 0);
}

void initGPOI()
{
  // Enable LED4
  GPIO_PRT7_CFG |= (6 << DRIVE_MODE6);
  GPIO_PRT7_OUT |= (1 << OUT6);
}


void targetEnableInterrupts()
{
  CM0_SYSTEM_INT_CTL_552 = 0x0;
  CM0_SYSTEM_INT_CTL_552 |= (0x3 << CM0_SYSTEM_INT_CTL_552_INT_IDX);
  CM0_SYSTEM_INT_CTL_552 |= (0x1 << CM0_SYSTEM_INT_CTL_552_INT_VALID);
  NVIC_ISER_0 |= (0x1 << NVIC_ISER_0_TCPWM);
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  enableCM7();
  CPU_Init();
  initGPOI();
  //targetEnableInterrupts();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
}
