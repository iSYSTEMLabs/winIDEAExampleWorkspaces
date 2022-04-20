#include "mpc5600.h"
#include "MPC564xBC_Alpha_V0.3.h"

void initModesAndClock(void) {
  /* Enable DRUN, RUN0, SAFE, RESET modes */
  ME.MER.R = 0x0000001D;                                          
  /* 40 MHz xtal: Set PLL0 to 120 MHz */
  /* Fout = Fxtal / IDIV * MUL / ODIV */
  CGM.FMPLL_CR.B.IDF = 4; //IDIV = 5
  CGM.FMPLL_CR.B.NDIV = 60; //MUL = 60
  CGM.FMPLL_CR.B.ODF = 1; //ODIV = 4
  /* RUN0 cfg: 16MHzIRCON,OSC0ON,PLL0ON,syclk=PLL0 */
  ME.RUN[0].R    = 0x001F0074;
  /* Peri. Cfg. 1 settings: only run in RUN0 mode */
  ME.RUNPC[1].R  = 0x00000010;
  /* MPC56xxB/S: select ME.RUNPC[1] */
  ME.PCTL[68].R  = 0x01;
  /* PIT1 */
  ME.PCTL[92].R  = 0x01;
  /* Enter RUN0 Mode & Key */
  ME.MCTL.R = 0x40005AF0;
  /* Enter RUN0 Mode & Inverted Key */
  ME.MCTL.R = 0x4000A50F;
  
  /* Wait for mode transition to complete */    
  /* Notes: */
  /* 1. I_TC IRQ could be used here instead of polling */
  /*    to allow software to complete other init. */
  /* 2. A timer could be used to prevent waiting forever.*/
  while (ME.GS.B.S_MTRANS == 1)
  {
  }
  
  /* Verify RUN0 is the current mode */
  /* Note: This verification ensures a SAFE mode */
  /*       tranistion did not occur. SW could instead */
  /*       enable the safe mode transition interupt */
  while(ME.GS.B.S_CURRENTMODE != 4)
  {
  } 
}


