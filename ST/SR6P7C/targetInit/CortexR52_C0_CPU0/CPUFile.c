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
}

void targetDisableInterrupts(void)
{              
}


//rt TimerInterrupt: profilerFunctionName=ProfilerC_Interrupt, timeoutMSec=1.04, maxDeltaPeriodPct=5
//rt DaqTimerInterrupt: daqItem=daqInterruptCounter, periodInMicroSeconds=52000, maxDeltaPeriodInPercents=4
void  TimerInterruptHandler() 
{
}

/*Use GPIO A0, location on ZTE1552 J66 PIN 1*/
void initGPIO()
{
  /*Set SIUL to run on Peripheral Configuration RUN_PC1*/
  MC_ME_PERIPHERAL_DOMAIN.PCTL548.B.RUN_CFG = 1;
  MC_ME_PERIPHERAL_DOMAIN.PCTL549.B.RUN_CFG = 1;
  /*Set RUN_PC1 to DRUN*/
  MC_ME_PERIPHERAL_DOMAIN.RUN_PC[1].B.DRUN = 1;  
  
  /* RE enter the drun mode, to update the configuration */
  MC_ME_PERIPHERAL_DOMAIN.MCTL.R = 0x30005AF0;    
  MC_ME_PERIPHERAL_DOMAIN.MCTL.R = 0x3000A50F;   
  
  /*Wait until SIUL is set to run on Peripheral Configuration RUN_PC1*/
  while(!MC_ME_PERIPHERAL_DOMAIN.PCTL548.B.RUN_CFG);
  while(!MC_ME_PERIPHERAL_DOMAIN.PCTL549.B.RUN_CFG);
  
  /*Set pin mode to push pull*/
  SIUL2_0.MSCR_IO[0].B.ODC = 0x02;
  
  /*Set pin output to 0*/
  SIUL2_0.GPDO0.B.PDO = 0;
}

void GPIOPinToggle()
{
  static int pinStatus = 0;
  if(!pinStatus)
  {
    /*Set pin output to 0*/
    SIUL2_0.GPDO0.B.PDO = 0;
  }
  else
  {
    /*Set pin output to 1*/
    SIUL2_0.GPDO0.B.PDO = 1;
  }
  pinStatus = !pinStatus;
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
  targetDisableInterrupts();
  initCpuClock();
  initTargetInterrupts();
  initTimer();
  initGPIO();
}

void initVector(void)
{
}

static void unlockIntCtrl(void)
{
}

static void lockIntCtrl(void)
{
}

void profilerAddTestMessages(void)
{
}


void disableWatchdog()
{
}
