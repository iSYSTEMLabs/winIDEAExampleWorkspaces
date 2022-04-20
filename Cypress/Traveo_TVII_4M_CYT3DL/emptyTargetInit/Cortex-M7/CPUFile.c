#include "TVII_4M_CYT3DL.h"

#define TIMER1_PERIOD (50000 - 1)  // 1 ms * (100 MHz / 2) = 50000
#define TIMER1_CPU_INT_IDX 3
#define CM7_LED_PIN 4


void targetEnableInterrupts(void)
{
  CPUSS.CM7_0_SYSTEM_INT_CTL_553.R = 0;
  CPUSS.CM7_0_SYSTEM_INT_CTL_553.B.CPU_INT_IDX = TIMER1_CPU_INT_IDX; // map interrupt to CPU interrupt 0
  CPUSS.CM7_0_SYSTEM_INT_CTL_553.B.CPU_INT_VALID = 1; // Interrupt enable for tcpwm_0_interrupts_0
  
  System_Control_Space_NVIC.INT_0_31_SET_EN = (1<<TIMER1_CPU_INT_IDX);
}


void setupTimer()
{
  // Select divider. Input to Peripheral clk dividers is CLK_HF0 (also used for M0+ core).
  PERI_PCLK_GR_0.CLOCK_CTL_3.R = (1<<8) | (1<<0); // 16.0 (integer) clock dividers, divider 1
  PERI_PCLK_GR_0.DIV_16_CTL_1.R |= (1<<8); // Division by (1+1) = 2
  
  int tempDIV_CMD = 0x00000000;
  tempDIV_CMD |= (0x1 << 31);   // ENABLE
  tempDIV_CMD |= (0x3 << 24);   // PA_TYPE_SEL
  tempDIV_CMD |= (0xFF << 16);  // PA_DIV_SEL
  tempDIV_CMD |= (0x1 << 8);    // TYPE_SEL
  tempDIV_CMD |= (0x1 << 0);    // DIV_SEL (select divider 1)
  PERI_PCLK_GR_0.DIV_CMD.R = tempDIV_CMD;
  
  TCPWM0_GRP_0_CNT_1.CTRL.R = 0;
  TCPWM0_GRP_0_CNT_1.CTRL.B.AUTO_RELOAD_CC0 = 1; // Switch on a compare match 0 event
  
  TCPWM0_GRP_0_CNT_1.CC0.R = TIMER1_PERIOD; // 1 ms * (100 MHz / 2) = 50000
  TCPWM0_GRP_0_CNT_1.CC0_BUFF.R = TIMER1_PERIOD;
  TCPWM0_GRP_0_CNT_1.PERIOD.R = TIMER1_PERIOD; // Counter will count for 50000 cycles
  
  // Enable and SW start
  TCPWM0_GRP_0_CNT_1.CTRL.B.ENABLED = 1;
  TCPWM0_GRP_0_CNT_1.TR_CMD.R |= (1<<4); // START

  // Enable interrupts for compare match 0
  TCPWM0_GRP_0_CNT_1.INTR_MASK.R |= (1<<1);
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  // PLL init for Cortex M7
  // Set PLL dividers to achieve 240 MHz (8 MHz * 30 / 1)
  SRSS_CLK_PLL400M_1.CONFIG.B.FEEDBACK_DIV = 30;
  SRSS_CLK_PLL400M_1.CONFIG.B.OUTPUT_DIV = 1;
  SRSS_CLK_PLL400M_1.CONFIG.B.REFERENCE_DIV = 1;

  SRSS_CLK_PLL400M_1.CONFIG.B.ENABLE = 1;

  SRSS.CLK_ROOT_SELECT_1.B.ROOT_MUX = 2; // TEST
  SRSS.CLK_ROOT_SELECT_1.B.DIRECT_MUX = 1; // Root MUX

  setupTimer();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
}