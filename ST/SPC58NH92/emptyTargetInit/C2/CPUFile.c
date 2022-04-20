#include "SPC58NH92.h"
#include "eiger.h"


#define TRUE 1
#define FALSE 0

void initPIT(void);
void restartRtiTimer(void);   

void targetEnableInterrupts()
{
  /*Lower current INTC priority*/ 
  INTC_1.CPRN[1].B.PRI        = 0;  
  /*Stop PIT0*/
  PIT_0.SUB0[0].TCTRLN.B.TEN  = 0;   
  /*Clear interrupt flag*/
  PIT_0.SUB0[0].TFLGN.B.TIF   = 1;  
  /*Enable PIT0 interrupt*/
  PIT_0.SUB0[0].TCTRLN.B.TIE  = 1; 
  /*Start PIT*/
  PIT_0.SUB0[0].TCTRLN.B.TEN  = 1;  
  /*Enable external interrupts*/
  asm(" wrteei 1");                  
}


void initPeripherals()
{
  meml(SWT2_SR)=0xc520;
  meml(SWT2_SR)=0xd928;
  meml(SWT2_CR)=0xFF00010A;
  MC_RGM.FRET.R=0;
  MC_RGM.DRET.R=0;
  MC_RGM.DES.R =0xFFFFFFFF;//'Destructive' Event Status Register
  
  MC_ME.ME.R 	= 0x000005FF;
  MC_ME.ME.R = 0x0000FFFF;
  
  /*!Set RUN Configuration Registers | MC_ME.RUN_PC[n]*/
  MC_ME.RUN_PCN[0].R=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[1].R=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[2].R=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[3].R=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[4].R=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[5].R=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[6].R=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[7].R=0x000000FE;              /* Peripheral ON in every mode  */

  MC_ME.LP_PCN[0].R=0xFFFFFFFF;              /* Peripheral ON in every mode  */
}

void initPLL()
{ 
  /*Turn On XOSC - PLL's remain off*/
  
  /*Enable the XOSC*/
  MC_ME.DRUN_MC.R = 0x00130030; 			  
	
  /*Force transition mode*/
  /*DRUN Mode & Key*/
  MC_ME.MCTL.R = 0x30005AF0;  
  /*DRUN Mode & Key*/
  MC_ME.MCTL.R = 0x3000A50F;

  /*Waiting for end of transaction*/
  while(MC_ME.GS.B.S_MTRANS);  
  /*ME_GS Check DRUN mode has successfully been entered*/
  while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);

  /* Route XOSC to the PLL's - IRC is default */
  
  /*Connect XOSC to PLL0*/
  MC_CGM.AC3_SC.B.SELCTL=1;  
  /*Connect XOSC to PLL1*/
  MC_CGM.AC4_SC.B.SELCTL=1;                        

	
  // XOSC = 40MHZ
  /* Configure PLL0 Dividers - PHI:160MHz PHI1:200MHz from 40Mhx XOSC - VCO:800MHz */
  /* Configure PLL0 Dividers - PHI:160MHz PHI1:160MHz from 16MHz IRC - VCO:800MHz */
  PLLDIG.PLL0DV.B.RFDPHI1 = 3;
  //PLLDIG.PLL0DV.B.RFDPHI1 = 12; //in order to have: fPLL0_PHI1 = (fpll0_ref * 2 * MFD) / (PREDIV * RFDPHI1 * 2) = 16 * 2 * 30 / 1 * 12 * 2 = 40MHz
  PLLDIG.PLL0DV.B.RFDPHI = 3;
  PLLDIG.PLL0DV.B.PREDIV = 1;
   
  /*For XOSC*/
  PLLDIG.PLL0DV.B.MFD = 12; 

  /*Put PLL0 into Normal mode*/
  PLLDIG.PLL0CR.B.CLKCFG = 3;

  /* Configure PLL1 Dividers - 80MHz Out from 40Mhz XOSC - VCO:800MHz - No FM*/
  PLLDIG.PLL1DV.B.RFDPHI = 1;
   
  /*for PH1=40MHz, in order to have: fPLL1_PHI = (fpll1_ref * MFD + FRCDIV/2^12) / (RFDPHI * 2) = 160 * (2,5 / 2) * 2 = 200MHz*/
  PLLDIG.PLL1DV.B.MFD = 2; 
  PLLDIG.PLL1FD.B.FRCDIV = 2048;

 /*Put PLL1 into Normal mode*/
  PLLDIG.PLL1CR.B.CLKCFG = 3;

  /*Enable XOSC and PLLs - PLL1 is sysclk */ //80Mhz
  MC_ME.DRUN_MC.R = 0x001300F4;    

  /*!Execute mode change: Re-enter the DRUN mode to start cores, clock tree dividers, PCS, and PLL1*/
 
  /*!Write Mode and Key | MC_ME.MCTL*/
  MC_ME.MCTL.R = 0x30005AF0;  
  /*!Write Mode and Key inverted | MC_ME.MCTL*/
  MC_ME.MCTL.R = 0x3000A50F;   
  /*!Wait for mode entry complete | MC_ME.GS[S_MTRANS]*/
  while(MC_ME.GS.B.S_MTRANS == 1);    
  /*!Check DRUN mode entered |MC_ME.GS[S_CURRENT_MODE]*/
  while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);                 
}

void initAllCores()
{
  /*Enable core 2(IOP)*/
  MC_ME.CCTL0.R = 0x00FE;    
  /*Enable core 0 in all modes */
  MC_ME.CCTL1.R = 0x00FE;    
  /*Enable lock step core */
  MC_ME.CCTL2.R = 0x00FE;    
  /*Enable core 1 in all modes */
  MC_ME.CCTL3.R = 0x00FE;    
  /*Enable HSM cores in all modes*/
  MC_ME.CCTL4.R = 0x00FE;    
 
  /*Set Start address for core 0: Will reset and start*/
  MC_ME.CADDR1.R = 0x01012001;  
  /*Set Start address for core 1: Will reset and start*/
  MC_ME.CADDR3.R = 0x01022001;  
  /*Set Start address for HSM core: Will reset and start*/
  MC_ME.CADDR4.R = 0x00622001;  
 
  /* RE enter the drun mode, to update the configuration */
  
  /*Mode & Key*/
  MC_ME.MCTL.R = 0x30005AF0;
  /*Mode & Key inverted */
  MC_ME.MCTL.R = 0x3000A50F;                
  
  /*Wait for mode entry to complete*/
  while(MC_ME.GS.B.S_MTRANS == 1);        
  /*Check DRUN mode has been entered*/
  while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);       
}


/*GPIO pin toggled is at PA2(according to Chorus 1M and 4M mux table, there is no excel document
  available currently for Chorus 10M). The pin is located at U25 header on the board. It is the 11th
  pin according to the board schematic not the board marking (the board has different markings to the schematic).
  Also all pin markings on U25 seem wrong, so connect as stated here and pin toggle should work.*/
  

void initInterrupts()
{
  /*Initialize core's spr IVPR register*/  
  e200zX_Interrupt_Setup();                  
  INTC_1.MPROT.B.MPROT = 0;
  /*CPU 2 is master*/
  INTC_1.MPROT.B.ID  = 2;        
  INTC_1.IACKRN[2].R = (uint32_t) &intc_sw_mode_isr_vector_table[0];
  /*Software vector mode used for Core 2*/
  INTC_1.BCR.B.HVEN2 = 0;    
  /*Lower core 0's INTC current priority to 0*/
  INTC_1.CPRN[2].B.PRI = 0;        
}

void initPIT()
{
  /*System Clk 200MHz, Per Clk 50 MHz*/
  
  /*Enable PIT*/
  PIT_0.MCR.B.MDIS               = 0;  
  /*Freeze in debug mode */ 
  PIT_0.MCR.B.FRZ                = 1;    
  /*Stop PIT*/ 
  PIT_0.SUB0[0].TCTRLN.B.TEN     = 0;       
  /*Set interval to 1ms*/
  PIT_0.SUB0[0].LDVALN.R         = 16000;    
  /*Select interrupt on CPU2*/
  INTC_1.PSRN[226].B.PRC_SELN    = 0x2;  
  /*Set intterupt priority to 10*/
  INTC_1.PSRN[226].B.PRIN        = 0x10;     
  /*Disable PIT0 interrupt*/
  PIT_0.SUB0[0].TCTRLN.B.TIE     = 0;  
  /*Clear interrupt flag*/
  PIT_0.SUB0[0].TFLGN.B.TIF      = 1;                   
}

void initTimer()
{
  initPIT();
  /*Make RTC_API register accessible in user and supervisor mode*/
  RTC_API.RTCSUPV.B.SUPV = 0; 
  /*Disable and reset counter */
  RTC_API.RTCC.B.CNTEN = 0;
  /*Set the compare value for interrupt/wakeup*/
  RTC_API.RTC_APIVAL.R = 0xF000;
  /*Set the compare value for RTCF*/
  RTC_API.RTC_VAL.R = 0xF0F0;
  
  /*Enable clock for RTI timers*/  
  PIT_0.MCR.B.MDIS_RTI = 0;  
  /*Timer stopt in debug mode*/
  PIT_0.MCR.B.FRZ = 1;        
  /*Set the timer countdown value*/
  PIT_0.RTI_LDVAL.R = 0x00800000;
  /*Reset the timer interrupt flag*/
  PIT_0.RTI_TFLG.B.TIF = 1;
  /*Enable the timer*/
  PIT_0.RTI_TCTRL.R = 0x00000001;
}

void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  initPeripherals();
  initPLL();
  initInterrupts();
  initAllCores();
  initTimer();
  initPIT();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void RtiInterruptRoutine(void)
{
  /*Disable PIT0 timer*/
  PIT_0.RTI_TCTRL.B.TEN   = 0;    
  /*Clear the interrupt flag*/
  PIT_0.RTI_TFLG.B.TIF    = 1;    
  /*Enable timer interrupt requests*/
  PIT_0.RTI_TCTRL.B.TIE   = 1;
  /*Enable PIT0 timer*/
  PIT_0.RTI_TCTRL.B.TEN   = 1;  
}  
  
void restartRtiTimer(void)
{
  /*Disable timer interrupt requests*/
  PIT_0.RTI_TCTRL.B.TEN   = 0;    
  /*Clear the interrupt flag*/
  PIT_0.RTI_TFLG.B.TIF    = 1;    
  /*Enable timer interrupt requests*/
  PIT_0.RTI_TCTRL.B.TEN   = 1;    
}  
  
void resetTimerCounter()
{
  /*Disable and reset timer*/
  PIT_0.SUB0[0].TCTRLN.B.TIE = 0;  
  /*Clear the timer interrupt flag*/
  PIT_0.SUB0[0].TFLGN.B.TIF  = 1; 
  /*Enable the timer*/
  PIT_0.SUB0[0].TCTRLN.B.TIE = 1;
}


void disableWatchdog()
{
  
}

void InterruptHandler()
{
  InterruptRoutine();
  
  /*Disable and reset timer*/
  PIT_0.SUB0[0].TCTRLN.B.TIE = 0;  
  /*Clear the timer interrupt flag*/
  PIT_0.SUB0[0].TFLGN.B.TIF  = 1; 
  /*Enable the timer*/
  PIT_0.SUB0[0].TCTRLN.B.TIE = 1;
}
