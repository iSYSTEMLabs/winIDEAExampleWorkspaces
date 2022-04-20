#include "S32K344.h"

void disableWatchdog()
{
}


void initClock()
{  

  MC_ME.PRTN1_COFB1_CLKEN.B.REQ56 = 0x1;
  MC_ME.PRTN1_PCONF.R = 0x1;
  
  // Trigger hardware process
  MC_ME.PRTN1_PUPD.R = 0x1;
  
  // Commit transaction
  MC_ME.CTL_KEY.R = 0x00005AF0;
  MC_ME.CTL_KEY.R = 0x0000A50F;
  
  while(!MC_ME.PRTN1_COFB1_STAT.B.BLOCK56);
  
  /*Disable osc. bypass.*/
  FXOSC.CTRL.R &= ~(0x01 << 31);
  /*Enable crystal mode.*/
  FXOSC.CTRL.R |= (0x01 << 24);
  /*Enable the osc.*/
  FXOSC.CTRL.R |= (0x01 << 0);
  /*Wait until clock stable.*/
  while(!FXOSC.STAT.B.OSC_STAT);

  MC_CGM.MUX_0_CSC.B.SELCTL = 0x0;  // Select FIRC as source for CORE_CLK (48MHz)
   
  MC_CGM.MUX_11_DC_0.B.DE = 0x0;      // Disable TRACE_CLK divider

  PLL.PLLODIV__1.B.DE = 0x0;          // Disable divider
  PLL.PLLODIV__0.B.DE = 0x0;      // Disable divider
  
  // Power down PLL
  PLL.PLLCR.B.PLLPD = 0x01;   
  
  // Flash should have 8 additional wait states
  FLASH.CTL.B.RWSC = 0b1000;
  
  // fVCO = fREF * PLLDV[MFI]
  PLL.PLLDV.B.RDIV = 0;
  PLL.PLLDV.B.MFI = 60;
  
  // Set PLLODIV2_CLK frequency
  PLL.PLLDV.B.ODIV2 = 0x2;        // Prescale VCO frequency by 2 (=480MHz)
  
  // Set PLL VCO frequency to 960MHz
  PLL.PLLFD.B.SDMEN = 0x00;

  // Set PLL_PHI1_CLK frequency
  PLL.PLLODIV__1.B.DIV = 0x2;         // Divide PLL frequency by 3 (=160MHz)
  
  MC_CGM.MUX_11_DC_0.B.DIV = 0x0;     // Set TRACE_CLK divider to 2
  
  PMC.CONFIG.B.LMEN = 0x1;
  
  // Set PLL_PHI0_CLK frequency
  PLL.PLLODIV__0.B.DIV = 0x2;     // Divide VCO frequency by 2 (=160MHz)
  
  // Set CORE_CLK divider to 0 (=160MHz)
  MC_CGM.MUX_0_DC_0.B.DIV = 0x0;
  
  // Power up PLL
  PLL.PLLCR.B.PLLPD = 0x0;        
  
  // Wait until PLL is locked
  while(!PLL.PLLSR.B.LOCK);
  
  MC_CGM.MUX_11_DC_0.B.DE = 0x1;      // Enable TRACE_CLK divider
  PLL.PLLODIV__1.B.DE = 0x1;          // Enable divider
  PLL.PLLODIV__0.B.DE = 0x1;      // Enable divider
  
  MC_CGM.MUX_0_CSC.B.SELCTL = 0x8;  // Select PLL_PHI0_CLK as source for CORE_CLK (160MHz)
  MC_CGM.MUX_11_CSC.B.SELCTL = 0x8;  // Select PLL_PHI1_CLK as source for TRACE_CLK (80MHz)
}

void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClock();

  #endif /* EMPTY_TARGET_INIT */
}
