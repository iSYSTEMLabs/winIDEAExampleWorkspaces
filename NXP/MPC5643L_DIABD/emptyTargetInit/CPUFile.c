#include "mpc5643l.h"

//rt FunctionMinGrossTime: toleranceInPercent = 2
//rt FunctionMaxGrossTime: toleranceInPercent = 2
//rt FunctionMaxNetTime: toleranceInPercent = 2
//rt FunctionMinNetTime: toleranceInPercent = 2

char GpioOffOn = 0;

void GPIOPinToggle()
{
  GpioOffOn = !GpioOffOn;
  if (GpioOffOn)
  { 
    GPDO0_3 =  0x1;  //toggle PORT A pin 3(pcr3) (on target pin 92 gpio and pin 94 gnd)
  }
  else
  {
    GPDO0_3 =  0x0;  //toggle PORT A pin 3(pcr3) (on target pin 92 gpio and pin 94 gnd)
  }
    
} 

  //rt TimerInterrupt: profilerFunctionName=ProfilerC_Interrupt, timeoutMSec=1.00, maxDeltaPeriodPct=5 
  //rt DaqTimerInterrupt: daqItem=daqInterruptCounter, periodInMicroSeconds=50000, maxDeltaPeriodInPercents=4

void profilerAddTestMessages(void)
{
}

void InitializePIT1(void) 
{
  //enable PIT and configure stop in debug mode
  PIT_PITMCR = 0x00000001;                     
  //timeout= 120K sysclks x 1sec/120M sysclks = 1 ms
  PIT_LDVAL1 = 120000;             
  //enable PIT1 interrupt & start PIT counting
  PIT_TCTRL1 = 0x000000003;               
  //PIT 1 interrupt vector with priority 1
  INTC_PSR60_63 = 0x01000000;                   
//  MilliSeconds = 0;
//  Seconds = 0;
}

void InitializeSWIRQ4(void) 
{
  //Software interrupt 4 IRQ priority = 2
  INTC_PSR4_7 = 0x02000000;		
}

void InitializeINTC()
{
  e200zX_Interrupt_Setup();

  //initialize INTC for software vector mode
  //use default vector table entry offsets of 4 B   
  INTC_BCR = 0x0;

  //set INTC ISR vector table base address
  INTC_IACKR = (uint32_t) &ISRVectorTable[0];  
}

void InitializeModesAndClock(void)
{
  //PLL0 Input = XTAL - Additional Step For Leopard 
  CGM_AC3_SC = 0x1000000;
  CGM_AC4_SC = 0x1000000;

  //switch on external osc
  ME_DRUN_MC |= 0x20;                      
  //select external osc
  ME_DRUN_MC |= 0x2;  	                  
  //RE enter the drun mode, to update the configuration
  ME_MCTL = 0x30005AF0;                        
  //mode & Key inverted
  ME_MCTL = 0x3000A50F;                        

  //wait for mode entry to complete
  //wait for transition
  while (0 != (ME_GS & (1<<(31-4))) );
  //wait for external osc to stabilize
  while (0 == (ME_GS & (1<<(31-26))) );
  //check DRUN mode has been entered
  while( (1 == (ME_GS & (1<<(31-0)))) || (1 == (ME_GS & (1<<(31-1)))) || (0 == (ME_GS & (1<<(31-2)))) || (0 == (ME_GS & (1<<(31-3))))); 

  //change to PLL Value
  PLL_CR = PLL_VALUE;                 
  
  //system Clock to System PLL                
  //enable pll for DRUN
  ME_DRUN_MC |= (1<<31-25);
  //RE enter the drun mode, to update the configuration
  ME_MCTL = 0x30005AF0;     	                 
  //mode & Key
  ME_MCTL = 0x30005AF0;     	                 
  //mode & Key inverted
  ME_MCTL = 0x3000A50F;                         

  //wait for mode entry to complete
  while (0 != (ME_GS & (1<<(31-4))));
  //check DRUN mode has been entered
  while( (1 == (ME_GS & (1<<(31-0)))) || (1 == (ME_GS & (1<<(31-1)))) || (0 == (ME_GS & (1<<(31-2)))) || (0 == (ME_GS & (1<<(31-3))))); 
  //wait for PLL to Lock
  while (0 == (PLL_CR &= (1<<31-28)));        

  //RUN0: 16MHzIRCON, OSC0ON, PLL0ON, SYSCLK=PLL0
  ME_RUN0 = 0x001F0074;                      
  //All Modes Active
  ME_RUN_PC0 = 0x000000FF; 	                 
  //enter RUN0 Mode & Key
  ME_MCTL = 0x40005AF0;                        
  //enter RUN0 Mode & Inverted Key
  ME_MCTL = 0x4000A50F;                        
  
  //wait for mode transition to complete
  //wait for transition
  while (0 != (ME_GS & (1<<(31-4))) );
  //wait for external osc to stabilize
  while (0 == (ME_GS & (1<<(31-26))) );
  //check DRUN mode has been entered
  while( (1 == (ME_GS & (1<<(31-0)))) || (0 == (ME_GS & (1<<(31-1)))) || (1 == (ME_GS & (1<<(31-2)))) || (1 == (ME_GS & (1<<(31-3)))));
}

void disableWatchdog()
{
  meml(SWT_SR)=0xc520;
  meml(SWT_SR)=0xd928;
  meml(SWT_CR)=0x8000010A;  
}

void CPU_Init(void)
{
  InitializeModesAndClock();    
  InitializeINTC();
  InitializeSWIRQ4();
  InitializePIT1();
}

void targetEnableInterrupts()
{
  //ensure INTC's current priority is 0
  INTC_PRI0 = 0;                            
  //enable external interrupts
  asm(" wrteei 1");  
}

void targetDisableInterrupts()
{
  //ensure INTC's current priority is 0
  INTC_PRI0 = 0;                           
  //disable external interrupts
  asm(" wrteei 0");  
}

void targetInit(void)
{
  CPU_Init();
  
  //initialize GPIO as output
  SIUL_PCR3 = 0x0303;
  SIUL_PCR53 = 0x0303;
}


void enableSecondCore()
{
  meml(SSCM_DPM_BOOT)=0x00082000;
  meml(SSCM_DPM_KEY)=0x5AF0;
  meml(SSCM_DPM_KEY)=0xA50F;
}

void TimerInterruptHandler(void)
{
  InterruptRoutine();
  //clear PIT 1 flag by writing 1
  TFLG1 = 0x1;                         
}


///////////////////////////////////////////////////////////////////////////////
void SWIRQ_ISR4(void) 
{
  //iIntCounter2++;
  //clear channel's flag
  INTC_SSCIR4_7 = 0x1000000;                     
  //toggle GPIO output
  GPDO52_55 =  0x00010000;                       
}

///////////////////////////////////////////////////////////////////////////////
