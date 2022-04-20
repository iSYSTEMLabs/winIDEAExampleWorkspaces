#include "mpc5643l.h"


#define meml(addr) (*(unsigned long volatile *)(addr))
#define SWT_SR 0xfff38010
#define SWT_CR 0xfff38000     
#define SSCM_DPM_BOOT 0xC3FD8018
#define SSCM_DPM_KEY  0xC3FD801C

extern const uint32_t ISRVectorTable[];


unsigned int pit1Cnt = 0;

char neverTrueFlag = 0;   
void toggleGPIO_DIN1();
void toggleGPIO_DIN2();
void enableSecondCore();
void disableWatchdog();
void InterruptRoutine(void);
void enterAndExitStopMode(void);  
void enterAndExitHaltMode(void);

int iInterruptCounter1=0;
int iInterruptCounter10 = 0;
int iInterruptCounter100 = 0;   
int maxInterruptCount = 100;


#define XTAL                   40 //40MHz on the EVB
#define FSYS                   120

#if XTAL == 40                
  #if FSYS == 120
    #define IDF                10 - 1
    #define ODF                0
    #define NDIV               60
  #else
  #if FSYS == 100
    #define IDF                10 - 1
    #define ODF                0
    #define NDIV               50
  #else
  #if FSYS == 80
    #define IDF                5 - 1
    #define ODF                2
    #define NDIV               80
  #else
  #if FSYS == 64
    #define IDF                5 - 1
    #define ODF                2
    #define NDIV               64
  #else
  #if FSYS == 32
    #define IDF                5 - 1
    #define ODF                2
    #define NDIV               32
  #else
  #if FSYS == 16
    #define IDF                5 - 1
    #define ODF                3
    #define NDIV               32
  #endif
  #endif
  #endif
  #endif
  #endif
  #endif
#endif

#define PLL_IDF (unsigned long)(((unsigned long)IDF)  << 26)
#define PLL_ODF (unsigned long)(((unsigned long)ODF)  << 24)
#define PLL_NDIV (unsigned long)(((unsigned long)NDIV) << 16)
#define PLL_VALUE PLL_IDF | PLL_ODF | PLL_NDIV | 0x00000100


///////////////////////////////////////////////////////////////////////////////
void InitializeModesAndClock(void)
{
  //enable DRUN, RUN0, SAFE, RESET modes
  ME.MER.R = 0x0000001D;
  //PLL0 Input = XTAL - Additional Step For Leopard
  CGM.AC3_SC.B.SELCTL = 1;
  CGM.AC4_SC.B.SELCTL = 1;

  //switch on external osc
  ME.DRUN.B.XOSCON = 1;                      
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
  while (0 == ME.GS.B.S_XOSC)
  {
  }
  //check DRUN mode has been entered
  while(3 != ME.GS.B.S_CURRENT_MODE)
  {
  } 

  //change to PLL Value
  CGM.FMPLL[0].CR.R = PLL_VALUE;                 
  //system Clock to System PLL
  CGM.SC_SS.B.SELSTAT = 0x0100;                  
  
  //enable pll for DRUN
  ME.DRUN.B.PLL0ON = 1;                          
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
  while (0x3 != ME.GS.B.S_CURRENT_MODE)
  {
  }         
  //wait for PLL to Lock
  while (0 == CGM.FMPLL[0].CR.B.S_LOCK) {}        

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
  while (4 != ME.GS.B.S_CURRENT_MODE)
  {
  }          
}

///////////////////////////////////////////////////////////////////////////////
void InitializeINTC()
{
  e200zX_Interrupt_Setup();

  //initialize INTC for software vector mode
  INTC.MCR.B.HVEN_PRC0 = 0;	                     
  //use default vector table entry offsets of 4 B
  INTC.MCR.B.VTES_PRC0 = 0;                      

  //set INTC ISR vector table base address
  INTC.IACKR.R = (uint32_t) &ISRVectorTable[0];  
}

///////////////////////////////////////////////////////////////////////////////
void InitializePIT1(void) 
{
  //enable PIT and configure stop in debug mode
  PIT.PITMCR.R = 0x00000001;                     
  //timeout= 120K sysclks x 1sec/120M sysclks = 1 ms
  PIT.CH[1].LDVAL.R = 120000;                    
  //enable PIT1 interrupt & start PIT counting
  PIT.CH[1].TCTRL.R = 0x000000003;               
  //PIT 1 interrupt vector with priority 1
  INTC.PSR[60].R = 0x01;                          
//  MilliSeconds = 0;
//  Seconds = 0;
}

///////////////////////////////////////////////////////////////////////////////
void InitializeSWIRQ4(void) 
{
  //Software interrupt 4 IRQ priority = 2
  INTC.PSR[4].R = 2;		
}

///////////////////////////////////////////////////////////////////////////////
void EnableIRQ()
{
  //ensure INTC's current priority is 0
  INTC.CPR.B.PRI = 0;                            
  //enable external interrupts
  asm(" wrteei 1");                              
}

///////////////////////////////////////////////////////////////////////////////
void DisableIRQ()
{
  //ensure INTC's current priority is 0
  INTC.CPR.B.PRI = 0;                            
  //disable external interrupts
  asm(" wrteei 0");                              
}

///////////////////////////////////////////////////////////////////////////////
void CPU_Init(void)
{
  InitializeModesAndClock();
  InitializeINTC();
  InitializePIT1();
  InitializeSWIRQ4();
  
  //initialize GPIO as output 
  SIU.PCR[2].R= 0x0303;
  SIU.PCR[3].R= 0x0303;
  SIU.PCR[4].R= 0x0303;
  SIU.PCR[53].R= 0x0303;
}


///////////////////////////////////////////////////////////////////////////////
void targetEnableInterrupts()
{
  //ProfilerC_Interrupt();  // dummy call because interrupts are not implemented
  EnableIRQ();
}


void targetInit(void)
{
  CPU_Init();

  meml(SWT_SR)=0xc520;
  meml(SWT_SR)=0xd928;
  meml(SWT_CR)=0x8000010A;
  enableSecondCore();
  if (neverTrueFlag)
  {

    enableSecondCore();
  }
  targetEnableInterrupts();

}

///////////////////////////////////////////////////////////////////////////////
void TimerInterruptHandler(void)
{
  pit1Cnt++;
  InterruptRoutine();
  //clear PIT 1 flag by writing 1
  PIT.CH[1].TFLG.B.TIF = 1;                         
}


///////////////////////////////////////////////////////////////////////////////
void SWIRQ_ISR4(void) 
{
  //iIntCounter2++;
  //clear channel's flag
  INTC.SSCIR[4].R = 1;                           
  //toggle GPIO output
  SIU.GPDO[53].R ^= 1;	                         
}

///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////


void toggleGPIO_DIN1()
{
   SIU.GPDO[4].R ^= 1;  //toggle PORT A pin 4 (pin 108)
} 

void toggleGPIO_DIN2()
{
   SIU.GPDO[2].R ^= 1;  //toggle PORT A pin 2 (pin 84)
} 

void enableSecondCore()
{
  meml(SSCM_DPM_BOOT)=0x00082000;
  meml(SSCM_DPM_KEY)=0x5AF0;
  meml(SSCM_DPM_KEY)=0xA50F;
}

#define TRUE 1
#define FALSE 0

unsigned char gotoStopLowPowerMode = 0;
unsigned char gotoHaltLowPowerMode = 0;  
unsigned char mustInitLPM = 1;


void initLPM()
{
  RGM.FES.R = 0xFFFF; /* clear fccr_hard and fccu_safe flags */
  ME.MER.R = 0x0000FFFF;                         // Enable DRUN, RUN0, SAFE, RESET modes
  CGM.AC3_SC.B.SELCTL = 1;                       // PLL0 Input = XTAL - Additional Step For Leopard
  CGM.AC4_SC.B.SELCTL = 1;                       // PLL0 Input = XTAL - Additional Step For Leopard

  ME.DRUN.B.XOSCON = 1;                          // Switch on external osc
  ME.DRUN.B.SYSCLK = 2;			                 // Select external osc 
  ME.MCTL.R = 0x30005AF0;                        // RE enter the drun mode, to update the configuration 
  ME.MCTL.R = 0x3000A50F;                        // Mode & Key inverted

  while(ME.GS.B.S_MTRANS == 1) {}                // Wait for mode entry to complete 
  while(ME.GS.B.S_XOSC == 0) {}                  // Wait for external osc to stabilize 
  while(ME.GS.B.S_CURRENT_MODE != 3) {}          // Check DRUN mode has been entered 

  CGM.FMPLL[0].CR.R = PLL_VALUE;                 // Change to PLL Value    
  CGM.SC_SS.B.SELSTAT = 0x0100;                  // System Clock to System PLL
  
  ME.DRUN.B.PLL0ON = 1;                          // Enable pll for DRUN      
  ME.MCTL.R = 0x30005AF0;     	                 // RE enter the drun mode, to update the configuration 
  ME.MCTL.R = 0x30005AF0;     	                 // Mode & Key
  ME.MCTL.R = 0x3000A50F;                        // Mode & Key inverted 

  while(ME.GS.B.S_MTRANS == 1) {}                // Wait for mode entry to complete
  while(ME.GS.B.S_CURRENT_MODE != 0x3) {}        // Check DRUN mode has been entered 
  while(CGM.FMPLL[0].CR.B.S_LOCK == 0) {}        // Wait for PLL to Lock

  ME.RUN[0].R = 0x001F0074;                      // RUN0: 16MHzIRCON, OSC0ON, PLL0ON, SYSCLK=PLL0
  ME.RUNPC[0].R = 0x000000FF; 	                 // Al Modes Active
  ME.MCTL.R = 0x40005AF0;                        // Enter RUN0 Mode & Key
  ME.MCTL.R = 0x4000A50F;                        // Enter RUN0 Mode & Inverted Key

  while(ME.GS.B.S_MTRANS) {}                     // Wait for mode transition to complete
  while(ME.GS.B.S_CURRENT_MODE != 4) {}          // Verify target mode RUN0 is the current mode
  
  ME.STOP0.R    = 0x001500FF; /* 56xxB STOP cfg: FIRCON=MVRON=1, flash LP, no sysclk*/
  ME.HALT0.R    = 0x001500FF; /* 56xxB STOP cfg: FIRCON=MVRON=1, flash LP, no sysclk*/
  ME.LPPC[0].R  = 0x00000500; /* LP Peri. Cfg 7 settings: run in STOP  and HAKT mode*/
  ME.PCTL[91].R = 0; 	    /*PIT control  MPC56xxB/S RTC/API: select ME.RUNPC[0], ME.LPPC[0]*/	
}

void targetEnterAndExitLowPowerMode()
{
  if(mustInitLPM)
  {
    initLPM();
    mustInitLPM = FALSE;
  }
  else
  {}
  
  PIT.TCTRL1.B.TEN  = 0; //Clear timer interrupt flag
  PIT.TFLG1.B.TIF   = 1; //Clear timer interrupt flag
  PIT.CH[1].LDVAL.R = 190000;     
  PIT.TCTRL1.B.TEN  = 1; //Clear timer interrupt flag
  
  if(gotoStopLowPowerMode)
  {
    enterAndExitStopMode();
  }
  else
  {}
  
  if(gotoHaltLowPowerMode)
  {
    enterAndExitHaltMode();
  }
  else
  {}
}

void enterAndExitStopMode()
{  
  ME.MCTL.R = 0xA0005AF0;      /* Enter STOP0 mode and key */
  ME.MCTL.R = 0xA000A50F;      /* Enter STOP0 mode and inverted key */
  while (ME.GS.B.S_MTRANS) {}  /* Wait STOP mode transition to complete */
}

void enterAndExitHaltMode()
{  
  ME.MCTL.R = 0x80005AF0;      /* Enter HALT0 mode and key */
  ME.MCTL.R = 0x8000A50F;      /* Enter HALT0 mode and inverted key */
  while (ME.GS.B.S_MTRANS) {}  /* Wait STOP mode transition to complete */    
}

void disableWatchdog()
{
  
}
