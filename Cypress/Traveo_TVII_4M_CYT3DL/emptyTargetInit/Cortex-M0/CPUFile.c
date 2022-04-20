#include "TVII_4M_CYT3DL.h"

#define TIMER0_PERIOD (50000 - 1)  // 1 ms * (100 MHz / 2) = 50000
#define TIMER0_CPU_INT_IDX 3
#define CM0_LED_PIN 3


void targetEnableInterrupts(void)
{
  CPUSS.CM0_SYSTEM_INT_CTL_552.R = 0;
  CPUSS.CM0_SYSTEM_INT_CTL_552.B.CM0_CPU_INT_IDX = TIMER0_CPU_INT_IDX; // Map interrupt to CPU interrupt 3
  CPUSS.CM0_SYSTEM_INT_CTL_552.B.CPU_INT_VALID = 1; // Interrupt enable for tcpwm_0_interrupts_0
  
  System_Control_Space_NVIC.INT_0_31_SET_EN = (1<<TIMER0_CPU_INT_IDX);
}


extern unsigned volatile int _cm7_vect;

void enableAllCores()
{
  CPUSS.CM7_0_PWR_CTL.R = 0x05FA0000 & ~0x3;
  // Enable HF1 Clk
  //CPUSS.CM7_0_VECTOR_TABLE_BASE.R = 0x10080000;
  CPUSS.CM7_0_VECTOR_TABLE_BASE.R = (unsigned long)&_cm7_vect;
  
  SRSS.CLK_ROOT_SELECT_1.R = 0x80000000;
  // Set Vector tabel
  // Power up secondary cores
  CPUSS.CM7_0_PWR_CTL.R = 0x05FA0000 | 0x3;
  CPUSS.CM7_0_CTL.B.CPU_WAIT = 0;
}

void setupTimer()
{
  // Select divider
  PERI_PCLK_GR_0.CLOCK_CTL_2.R = (1<<8); // 16.0 (integer) clock dividers, divider 0
  PERI_PCLK_GR_0.DIV_16_CTL_0.R |= (1<<8); // Division by (1+1) = 2
  
  int tempDIV_CMD = 0x00000000;
  tempDIV_CMD |= (0x1 << 31);   // ENABLE
  tempDIV_CMD |= (0x3 << 24);   // PA_TYPE_SEL
  tempDIV_CMD |= (0xFF << 16);  // PA_DIV_SEL
  tempDIV_CMD |= (0x1 << 8);    // TYPE_SEL
  PERI_PCLK_GR_0.DIV_CMD.R = tempDIV_CMD;
  
  
  TCPWM0_GRP_0_CNT_0.CTRL.R = 0;
  TCPWM0_GRP_0_CNT_0.CTRL.B.AUTO_RELOAD_CC0 = 1; // Switch on a compare match 0 event
  
  // Set the compare 0 register (for interrupts) and period of the counter
  TCPWM0_GRP_0_CNT_0.CC0.R = TIMER0_PERIOD; // 1 ms * (100 MHz / 2) = 50000
  TCPWM0_GRP_0_CNT_0.CC0_BUFF.R = TIMER0_PERIOD;
  TCPWM0_GRP_0_CNT_0.PERIOD.R = TIMER0_PERIOD; // Counter will count for 50000 cycles
  
  // Enable and SW start
  TCPWM0_GRP_0_CNT_0.CTRL.B.ENABLED = 1;
  TCPWM0_GRP_0_CNT_0.TR_CMD.R |= (1<<4); // START
  
  // Enable interrupts for compare match 0
  TCPWM0_GRP_0_CNT_0.INTR_MASK.R |= (1<<1);
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  // PLL init for Cortex M0+ (boot core)
  // Set PLL dividers to achieve 100 MHz (8 MHz * 50 / 4)
  SRSS_CLK_PLL400M_0.CONFIG.B.FEEDBACK_DIV = 50;
  SRSS_CLK_PLL400M_0.CONFIG.B.OUTPUT_DIV = 4;
  SRSS_CLK_PLL400M_0.CONFIG.B.REFERENCE_DIV = 1;

  SRSS_CLK_PLL400M_0.CONFIG.B.ENABLE = 1;

  // Select PLL#0 for CLK_HF0 (used for Core M0+)
  SRSS.CLK_ROOT_SELECT_0.B.ROOT_MUX = 1;
  SRSS.CLK_ROOT_SELECT_0.B.DIRECT_MUX = 1; // Root MUX

  // Enable second core
  enableAllCores();

  setupTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
}