#include "S32R372.h"

void disableWatchdog()
{

}


void initClock()
{
  // Enable PIT timer clock
  MC_ME_RUN_PC0 = 0xFE;
  
  // Select XOSC as PLL0 clock source
  MC_CGM_AC3_SC |= (1 << MC_CGM_AC3_SC_SELCTL);
  
  // Program PLL0 values
  /*
    PLL0_PHI  = XOSC * ( MFD / (PREDIV * RFDPHI)  )
    PLL0_PHI1 = XOSC * ( MFD / (PREDIV * RFDPHI1) )
    
    XOSC = 40 MHz
    PLL0_PHI = 160 MHz, gets fed from PLL0 to other components
    PLL0_PHI1 = 48 MHz, is fed to PLL1
  */
  // Values taken from S32R372 reference manual, page 132, 5.3.2
  PLLDIG_PLL0DV |= (2 << PLLDIG_PLL0DV_PREDIV)
    | (24 << PLLDIG_PLL0DV_MFD)
    | (3 << PLLDIG_PLL0DV_RFDPHI)
    | (10 << PLLDIG_PLL0DV_RFDPHI1);

  // Need to clear these bits to enable oscillator, refer to reference manual page 1805, 44.1.5
  DCL_IPS_2 &= ~(0x30);
  
  // Reset oscillator source and gain
  AFE_OSCCTRL &= ~( (1 << AFE_OSCCTRL_EN_EXT) | (0xF << AFE_OSCCTRL_ICAL) );
  
  // Set oscillator and buffer gain
  AFE_OSCCTRL |= (0b0110 << AFE_OSCCTRL_ICAL);

  // Enable external oscillator and PLL0
  MC_ME_DRUN_MC |= (1 << MC_ME_MODE_MC_XOSCON) 
    | (1 << MC_ME_MODE_MC_PLL0ON);
  
  // Request transition into DRUN mode
  MC_ME_MCTL = ( MC_ME_MCTL_DRUN << MC_ME_MCTL_TARGET_MODE ) | MC_ME_KEY;
  MC_ME_MCTL = ( MC_ME_MCTL_DRUN << MC_ME_MCTL_TARGET_MODE ) | MC_ME_INVERTED_KEY;
  
  // Wait for transition to finish
  // Have to make empty while loops with no braces, otherwise Metrowerks will remove them
  while ((!(MC_ME_GS & (1 << MC_ME_GS_S_XOSC))) && (CMU0_ISR & (1 << CMU0_ISR_OLRI)));
  while (!(MC_ME_GS & (1 << MC_ME_GS_S_PLL0)));
  while (MC_ME_GS & (1 << MC_ME_GS_S_MTRANS));
  
  // Select PLL0 as PLL1 clock source
  MC_CGM_AC4_SC &= ~(1 << MC_CGM_AC4_SC_SELCTL);
  
  // Program PLL1 values
  /* 
    PLL1_PHI = PLL0_PHI1 * ( (MFD + FRCDIV / 2^12 + 1 / 2 ^ 13) / (2 * RFDPHI) )
    
    PLL1_PHI = 240 MHz, used for system clocks and DMA
    PLL0_PHI1 = 48 MHz
  */
  PLLDIG_PLL1DV |= (19 << PLLDIG_PLL1DV_MFD)
    | (2 << PLLDIG_PLL1DV_RFDPHI);
  
  PLLDIG_PLL1FD |= (4095 << PLLDIG_PLL1FD_FRCDIV)
    | (1 << PLLDIG_PLL1FD_FDEN);
    
  // Enable PLL1
  MC_ME_DRUN_MC |= (1 << MC_ME_MODE_MC_PLL1ON);
  
  // Set PLL1 as SYSCLK
  MC_ME_DRUN_MC |= (MC_ME_MODE_MC_SYSCLK_PLL1 << MC_ME_MODE_MC_SYSCLK);
  
  // Reset system dividers
  MC_CGM_SC_DC0 &= ~(0xF0000);
  MC_CGM_SC_DC3 &= ~(0xF0000);
  MC_CGM_SC_DC4 &= ~(0xF0000);

  // Set system dividers
  // SYS_CLK = 240 MHz / 2
  MC_CGM_SC_DC0 |= (1 << MC_CGM_SC_DC_DIV) | (1 << MC_CGM_SC_DC_DE);
  // PBRIDGE_x_CLK = 240MHz / 4
  MC_CGM_SC_DC3 |= (3 << MC_CGM_SC_DC_DIV) | (1 << MC_CGM_SC_DC_DE);
  // DMA_CLK = 240 MHz / 2
  MC_CGM_SC_DC4 |= (1 << MC_CGM_SC_DC_DIV) | (1 << MC_CGM_SC_DC_DE);

  // Select PLL0 as source for Aux Clock 0
  MC_CGM_AC0_SC |= (0b0010 << MC_GCM_AC0_SC_SELCTL);
  
  // Select PLL0 as source for Aux Clock 7
  MC_CGM_AC7_SC |= (0b0010 << MC_CGM_AC7_SC_SELCTL);

  // Enable clock out 
  SIUL2_MSCR22 |= 1;
  MCB_CLKOUT_SEL |= (0b1111 << MCB_CLKOUT_SEL_CLKOUT0) | (0b0010 << MCB_CLKOUT_SEL_CGM_SINK_SEL_3);
  MC_CGM_AC14_DC0 |= (3 << MC_CGM_SC_DC_DIV) | (1 << MC_CGM_SC_DC_DE);

  // Request transition into DRUN mode
  MC_ME_MCTL = ( MC_ME_MCTL_DRUN << MC_ME_MCTL_TARGET_MODE ) | MC_ME_KEY;
  MC_ME_MCTL = ( MC_ME_MCTL_DRUN << MC_ME_MCTL_TARGET_MODE ) | MC_ME_INVERTED_KEY;
  
  // Wait for transition to finish
  // Have to make empty while loops with no braces, otherwise Metrowerks will remove them
  while (!(MC_ME_GS & (1 << MC_ME_GS_S_PLL1)));
  while (MC_ME_GS & (1 << MC_ME_GS_S_MTRANS));
}


void initINTC()
{
  // Initialize the IVPR
  IVPR_init_core_0();
  
  // Enable hardware interrupts
  INTC_BCR |= (1 << INTC_BCR_HVEN1);
  
  INTC_IACKR1 = 0x01001000;
  
  // Set highest priority for timer interrupt on Z7A
  INTC_PSR226 |= (0xF << INTC_PSR_PRIN) | (1 << INTC_PSR_PRC_SELN1);
  
  // Clear priority bits
  INTC_CPR1 = 0;
  
}

// PIT runs from PBRIDGE_CLK which is 60 MHz
void initTimer()
{
  // Enable clock for timer modules
  PIT0_MCR &= ~(1 << PIT0_MCR_MDIS);

  // Set timer period
  PIT0_LDVAL0 = 60000;
  
  // Enable timer interrupt
  PIT0_TCTRL0 |= (1 << PIT0_TCTRL0_TIE);
  
}

void targetEnableInterrupts()
{
  // Enable timer
  PIT0_TCTRL0 |= (1 << PIT0_TCTRL0_TEN);
  
  asm(" wrteei 1");
}


void enableSecondaryCore()
{
  // Set Z7B to run in all modes except Reset, Halt and Stop
  MC_ME_CCTL3 = 0xFE;
  // Set Z7B boot address to 0x01040000 and set RMC bit
  MC_ME_CADDR3 = 0x01040000 | 1;
  
  // Request transition into DRUN mode
  MC_ME_MCTL = ( MC_ME_MCTL_DRUN << MC_ME_MCTL_TARGET_MODE ) | MC_ME_KEY;
  MC_ME_MCTL = ( MC_ME_MCTL_DRUN << MC_ME_MCTL_TARGET_MODE ) | MC_ME_INVERTED_KEY;
  
  // Wait for transition to finish
  while (MC_ME_GS & (1 << MC_ME_GS_S_MTRANS) == 1)
  {
    
  }
  
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  enableSecondaryCore();
  initClock();
  initINTC();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}