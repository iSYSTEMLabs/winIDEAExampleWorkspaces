#include "SR6Px_1.0D7_RMrev1.h"
#include "sr6p7c.h"

extern void startCores();
extern void InterruptRoutine();
extern void enableGroup0Ints();
extern void enableGroup1Ints();
extern void setPriorityMask();
extern void asm_Initialization();

void targetEnableInterrupts(void)
{ 
  __asm("CPSIE if");
  /*Request ARC timer 0 start*/
  GST_0.ARC[0].CTRL.B.ARC_START_REQ = 0x1;
  /*Wait until timer is started*/
  while(!GST_0.ARC[0].STATUS.B.ARC_START_STATUS);
}

void targetDisableInterrupts(void)
{              
  __asm("CPSID if");
  IBCM_0.GRPSEL_GIC0[0].B.GRPSEL = 0x00;
  /*Request ARC timer 0 stop*/
  GST_0.ARC[0].CTRL.B.ARC_STOP_REQ = 0x1;
  /*Wait until timer is stopped*/
  while(GST_0.ARC[0].STATUS.B.ARC_START_STATUS);
  /*Due to a sillicon bug interrupt flags don't get cleared at reset.*/
  GST_0.ARC[0].INT_CLR.R |= 0x1F;
}


void  TimerInterruptHandler() 
{
  /*Disable interrupts for the duration of this interrupt (timer counter gets reset when timer is stopped)*/
  targetDisableInterrupts();
  /*Clear interrupt*/
  GST_0.ARC[0].INT_CLR.R |= 0x1F;
  
  InterruptRoutine();
  
  /*Enable interrupts and start the timer*/
  targetEnableInterrupts();
}


void initTimer()
{
  /* Set the ARC timer of GST module to run in classic compare mode (RM 49.3.6.4) */
  GST_0.ARC[0].EXPIRY_CFG.R = 0xFFFFFFFF;
  GST_0.ARC[0].RELOAD_VALUE.R = 0x00000000;
  
  /*Set the ARC timer to run in one time mode (once timer event happens the timer gets reset and stopped)*/
  GST_0.ARC[0].CFG.B.ARC_RUN = 0x00;
  
  /*Set the ARC timer update on GST_CLOCK and to count up (RM 49.3.6.5)*/
  GST_0.ARC[0].CFG.B.ARC_UPDATE_EVENT = 0x00;
  /*Enable the ARC timer to run in debug mode*/
  GST_0.ARC[0].DEBUG_CFG.B.ARC_FRZ_IN_DEBUG = 0x00;
  
  /*Set the timer compare value to 32000*/
  GST_0.ARC[0].COMPARE_1_CFG.B.ARC_COMPARE_1_VALUE = 32000;

  /*Enable the timer interrupt triggering for the compare 1 register*/
  GST_0.ARC[0].INT_PULSE_EN_CFG.B.ARC_INT_PULSE_C1_EN = 0x01;
  
  /*Due to a sillicon bug interrupt flags don't get cleared at reset.*/
  GST_0.ARC[0].INT_CLR.R |= 0x1F;
}

void initTargetInterrupts()
{
  /*Enable group0 and 1 interrupts*/
  GICD_CTRL = 0x13;
  /*Wait until GICD_CTRL busy flag is cleared*/
  while(GICD_CTRL&0x80000000);
  
  /*Set GICD interrupt group to 0*/
  GICD_IGROUP0 = 0x00000000;
  
  /*Enable GST ARC0 interrupts*/
  GICD_ISENABLER0 = 0xF0;
  /*Set the GICD priority to 0 (highest priority)*/
  GICD_IPRIORITYR0 = 0x00000000;
  
  /*Enable group 0 interrupts*/
	enableGroup0Ints();				 		 
  /*Enable group 1 interrupts*/
	enableGroup1Ints();							
  /*Set the GICC priority mask to 0xFF (highest)*/
	setPriorityMask(0xFF);						
  
  /*Clear GICR processor sleep*/
  GICR_WAKER &= ~(0x01 << 1);
}

void initCpuClock()
{
  /*Crystal freq is 40 MHz*/
  /*Sets the Cluster 0 (where primary core is) clock to max (400 MHz)*/
  
  /*                               PLL1FD[FRCDIV]
                                  ----------------
                  PLL1DV[MDF] +         2^12
    pll_out_frq = ---------------------------------
                          2 * PLL1DV[RFDPHI]   
                          
    Example for 400 MHz:
          - PLL1DV[MDF] = 20
          - PLL1FD[FRCDIV] = 0
          - PLL1DV[RFDPHI] = 1
  */
  
  /*Enable xtal osc. for MC_ME peripheral domain*/
  MC_ME_PERIPHERAL_DOMAIN.DRUN_MC.B.XOSCON = 0x01;
  MC_ME_PERIPHERAL_DOMAIN.MCTL.R = 0x30005AF0;
  MC_ME_PERIPHERAL_DOMAIN.MCTL.R = 0x3000A50F;
  /*Wait until xtal osc. is enabled for MC_ME peripheral domain*/
  while(!MC_ME_PERIPHERAL_DOMAIN.GS.B.S_XOSC);
  
  /*Enable xtal osc. for MC_ME domain 0*/
  MC_ME_DOMAIN_0.DRUN_MC.B.XOSCON = 0x01;
  /*Enter key*/
  MC_ME_DOMAIN_0.MCTL.R = 0x30005AF0;             
  MC_ME_DOMAIN_0.MCTL.R = 0x3000A50F; 
  
  /*Wait untill xtal osc. is enabled for MC_ME domain 0*/
  while(!MC_ME_DOMAIN_0.GS.B.S_XOSC)
  
  /*Enter key*/
  MC_ME_DOMAIN_0.MCTL.R = 0x30005AF0;             
  MC_ME_DOMAIN_0.MCTL.R = 0x3000A50F; 
  
  /*Configure PLL settings*/
  
  /*Set MDF to 20*/
  PLLDIG_DOMAIN_0.PLL1DV.B.MFD = 20;
  /*Set FRCDIV to 0*/
  PLLDIG_DOMAIN_0.PLL1FD.B.FRCDIV = 0;
  /*Set RFDPHI to 1*/
  PLLDIG_DOMAIN_0.PLL1DV.B.RFDPHI = 1;
  
  /*Enable PLL1*/
  MC_ME_DOMAIN_0.DRUN_MC.B.PLL1ON = 0x01;
  
  /*Enter key*/
  MC_ME_DOMAIN_0.MCTL.R = 0x30005AF0;             
  MC_ME_DOMAIN_0.MCTL.R = 0x3000A50F; 
  
}

void targetInit(void)
{    
  asm_Initialization();
  startCores();
  #ifndef EMPTY_TARGET_INIT

  targetDisableInterrupts();
  initCpuClock();
  initTargetInterrupts();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
