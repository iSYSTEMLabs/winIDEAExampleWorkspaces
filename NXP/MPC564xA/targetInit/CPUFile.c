#include "Andorra.h"


extern const uint32_t ISRVectorTable[];

void InitializeModesAndClock(void)
{
  //Fsys=Fref*((MFD+4)/((PREDIV + 1)*2**RFD))
  //Fref = 8MHz
  //PREDIV = 1
  //MFD = 16
  //RFD = 0
  //Fsys=8*(20/(2*1))=80MHz
  //Set PLL dividers
  SYNCR = 0x18000000; 
  //Wait for lock, will enter normal mode
  while((SYNSR & PLL_LOCK_STATUS_BIT) == 0)
  {
  }

}

void InitializeINTC(void)
{
  e200zX_Interrupt_Setup();

  //initialize INTC for software vector mode
  INTC.MCR.B.HVEN_PRC0 = 0;	                     
  //use default vector table entry offsets of 4 B
  INTC.MCR.B.VTES_PRC0 = 0;                      

  //set INTC ISR vector table base address
  INTC.IACKR.R = (uint32_t) &ISRVectorTable[0];  
}

void InitializePIT1(void) 
{
  //enable PIT and configure stop in debug mode
  PIT.PITMCR.R = 0x00000001;                     
  //timeout= 80K sysclks x 1sec/80M sysclks = 1 ms
  PIT.CH[1].LDVAL.R = 80000;                    
  //enable PIT1 interrupt & start PIT counting
  PIT.CH[1].TCTRL.R = 0x000000003;               
  //PIT 1 interrupt vector with priority 1
  INTC.PSR[302].R = 0x01;                          
}

void EnableIRQ(void)
{
  //ensure INTC's current priority is 0
  INTC.CPR.B.PRI = 0;                            
  //enable external interrupts
  asm(" wrteei 1");                              
}

void DisableIRQ(void)
{
  //ensure INTC's current priority is 0
  INTC.CPR.B.PRI = 0;                            
  //disable external interrupts
  asm(" wrteei 0");                              
}


void targetEnableInterrupts()
{
  EnableIRQ();
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  InitializeModesAndClock();
  InitializeINTC();
  InitializePIT1();

  //initialize pin 122 as output
  SIU.PCR[219].R= 0x0303;
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void TimerInterruptHandler(void)
{
  InterruptRoutine();
  //clear PIT 1 flag by writing 1
  PIT.CH[1].TFLG.B.TIF = 1;                         
}


void disableWatchdog()
{
}
