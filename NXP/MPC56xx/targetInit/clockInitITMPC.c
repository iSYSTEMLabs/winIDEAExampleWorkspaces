#include "mpc5600.h"
#include "MPC5604B_0M27V_0102.h"

void initModesAndClock(void) {
  //enable DRUN, RUN0, SAFE, RESET modes
  ME.MER.R = 0x0000001D;

  //switch on external osc
  ME.DRUN.B.FXOSC0ON = 1;                   
  //select external osc
  ME.DRUN.B.SYSCLK = 2;			                  
  //RE enter the drun mode, to update the configuration
  ME.MCTL.R = 0x30005AF0;                        
  //mode & Key inverted
  ME.MCTL.R = 0x3000A50F;                        

  //wait for mode entry to complete
  while (1 == ME.GS.B.S_MTRANS)
  {
  }
  //wait for external osc to stabilize
  while (0 == ME.GS.B.S_FXOSC)
  {
  }
  //check DRUN mode has been entered
  while(3 != ME.GS.B.S_CURRENTMODE)
  {
  } 

  /* 8 MHz xtal: Set PLL0 to 64 MHz */
  CGM.FMPLL_CR.R = 0x02400100;                 
  //system Clock to System PLL
  CGM.SC_SS.B.SELSTAT = 0x0100;                  
  
  //enable pll for DRUN
  ME.DRUN.B.FMPLLON = 1;                          
  //RE enter the drun mode, to update the configuration
  ME.MCTL.R = 0x30005AF0;     	                 
  //mode & Key
  ME.MCTL.R = 0x30005AF0;     	                 
  //mode & Key inverted
  ME.MCTL.R = 0x3000A50F;                         

  //wait for mode entry to complete
  while (1 == ME.GS.B.S_MTRANS)
  {
  }        
  //check DRUN mode has been entered
  while (0x3 != ME.GS.B.S_CURRENTMODE)
  {
  }         
  //wait for PLL to Lock
  while (0 == CGM.FMPLL_CR.B.S_LOCK) {}        

  //RUN0: 16MHzIRCON, OSC0ON, PLL0ON, SYSCLK=PLL0
  ME.RUN[0].R = 0x001F0074;                      
  //Al Modes Active
  ME.RUNPC[0].R = 0x000000FF; 	                 
  //enter RUN0 Mode & Key
  ME.MCTL.R = 0x40005AF0;                        
  //enter RUN0 Mode & Inverted Key
  ME.MCTL.R = 0x4000A50F;                        

  //wait for mode transition to complete
  while (ME.GS.B.S_MTRANS)
  {
  }  
  //verify target mode RUN0 is the current mode
  while (4 != ME.GS.B.S_CURRENTMODE)
  {
  }  
}


