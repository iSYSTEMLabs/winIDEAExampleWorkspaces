#include "CCFC2002CC.h"
void initClock(void)
{
  /*When testing clock init make sure to execute this function only if executeInitClock is set. This 
  will prevent the target locking in the event of misconfiguration. Once clock init is working reliably   
  remove executeInitClock.*/
  
  //enable DRUN, RUN0, SAFE, RESET modes
  mem32(ME_ME)|= 0x0000001D;
  
  //switch on external osc
  mem32(ME_DRUN_MC) |= 1<<5;
  //select external osc
  mem32(ME_DRUN_MC) |= 1<<1;			
  
  //RE enter the drun mode, to update the configuration
  mem32(ME_MCTL) = 0x30005AF0;
  //mode & Key inverted
  mem32(ME_MCTL) = 0x3000A50F;
  
  //wait for mode entry to complete
  while ((mem32(ME_GS)&(1<<27)) == 1);
  //wait for external osc to stabilize
  while ((mem32(ME_GS)&(1<<5)) == 0);
  
  //check DRUN mode has been entered
  while((mem32(ME_GS)&(0x30000000)) != 0x30000000);
  
  /* 8 MHz xtal: Set PLL0 to 80 MHz. Reference manual for this register is not correct. Look MPC56xxx instead*/
  mem32(PLL_CR) = 0x1280100; //IDF = 0, NDIV = 40, ODF = 2, progressive clock switching is enabled
  //system Clock to System PLL
  mem32(CGM_SC_SS) = 0x04000000;
  
  //enable pll for DRUN
  mem32(ME_DRUN_MC) |= 1<<6;
  
  //RE enter the drun mode, to update the configuration
  mem32(ME_MCTL) = 0x30005AF0;
  //mode & Key inverted
  mem32(ME_MCTL) = 0x3000A50F;
  
  //wait for mode entry to complete
  while ((mem32(ME_GS)&(1<<27)) == 1);  
  //check DRUN mode has been entered
  while((mem32(ME_GS)&(0x30000000)) != 0x30000000);  
  
  //wait for PLL to Lock
  while((mem32(PLL_CR)&(1<<3))==0);   
  
  //RUN0: 16MHzIRCON, OSC0ON, PLL0ON, SYSCLK=PLL0
  mem32(ME_RUN0_MC) = 0x001F0074;
  //Al Modes Active
  mem32(ME_RUN_PC0) = 0x000000FF;
  
  //enter RUN0 Mode & Key
  mem32(ME_MCTL) = 0x40005AF0;
  //enter RUN0 Mode & Inverted Key
  mem32(ME_MCTL) = 0x4000A50F;
  
  //wait for mode transition to complete
  while ((mem32(ME_GS)&(1<<27)) == 1);  
  
  //verify target mode RUN0 is the current mode
  while((mem32(ME_GS)&(0x40000000)) != 0x40000000);   
}

