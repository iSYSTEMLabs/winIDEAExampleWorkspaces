#include "XMC4500.h" 
#include "CPU.h" 
#include "System_XMC4500.h"

//rt FunctionMinGrossTime: toleranceInPercent = 1
//rt FunctionMaxGrossTime: toleranceInPercent = 1
//rt FunctionMinNetTime: toleranceInPercent = 1 
//rt FunctionMaxNetTime: toleranceInPercent = 1



#define memW32(address) (*(unsigned long*)(address))
#define ITM_BASE_ADDRESS (0xE0000000UL)



  //rt TimerInterrupt: profilerFunctionName=ProfilerC_Interrupt, timeoutMSec=1.09, maxDeltaPeriodPct=5
  //rt DaqTimerInterrupt: daqItem=daqInterruptCounter, periodInMicroSeconds=54600, maxDeltaPeriodInPercents=4

void CPU_Init()
{
  
  SCU_PLL->PLLCON0 &= ~(SCU_PLL_PLLCON0_VCOPWD_Msk | SCU_PLL_PLLCON0_PLLPWD_Msk);
  SCU_OSC->OSCHPCTRL = (OSC_HP_MODE<<4);    // Enable the OSC_HP	 
  SCU_OSC->OSCHPCTRL |= (OSCHPWDGDIV<<16);  // Setup OSC WDG devider
  SCU_PLL->PLLCON2 &= ~SCU_PLL_PLLCON2_PINSEL_Msk;  //Select external OSC as PLL input
  SCU_PLL->PLLCON0 &= ~SCU_PLL_PLLCON0_OSCRES_Msk;  //Restart OSC Watchdog
  while(!( (SCU_PLL->PLLSTAT) & (SCU_PLL_PLLSTAT_PLLHV_Msk | SCU_PLL_PLLSTAT_PLLLV_Msk | SCU_PLL_PLLSTAT_PLLSP_Msk)));
  
  //Setup Main PLL   
  if(SCU_CLK->SYSCLKCR != 0x000000) // Select FOFI as system clock
    SCU_CLK->SYSCLKCR = 0x00000000; // Select FOFI
  SCU_PLL->PLLCON0 |= SCU_PLL_PLLCON0_VCOBYP_Msk; // Go to bypass the Main PLL
  SCU_PLL->PLLCON0 |= SCU_PLL_PLLCON0_FINDIS_Msk; // Disconnect OSC_HP to PLL
  SCU_PLL->PLLCON1 = ((PLL_NDIV<<8) | (PLL_K2DIV<<16) | (PLL_PDIV<<24)); // Setup devider settings for main PLL
  SCU_PLL->PLLCON0 |= SCU_PLL_PLLCON0_OSCDISCDIS_Msk; // We may have to set OSCDISCDIS
  SCU_PLL->PLLCON0 &= ~SCU_PLL_PLLCON0_FINDIS_Msk;    // Connect OSC_HP to PLL
  SCU_PLL->PLLCON0 |= SCU_PLL_PLLCON0_RESLD_Msk;      // Restart PLL Lock detection
  while (!(SCU_PLL->PLLSTAT & SCU_PLL_PLLSTAT_VCOLOCK_Msk));  // Wait for PLL Lock
  SCU_PLL->PLLCON0 &= ~SCU_PLL_PLLCON0_VCOBYP_Msk;    // Go back to the Main PLL
  
  SCU_CLK->CPUCLKCR = 0; // Setup system clock dividers
	SCU_CLK->PBCLKCR = 0;	
	SCU_CLK->CCUCLKCR = 0;
  SCU_CLK->SYSCLKCR |= 0x00010000;  // Switch system clock to PLL
  
}

void profilerAddTestMessages(void)
{
  memW32(ITM_BASE_ADDRESS) = 0xDD; //rt ProfilerITMOTM: id=data1value1, symbol=0, value=0xDD
  memW32(ITM_BASE_ADDRESS) = 0x12; //rt ProfilerITMOTM: id=data1value2, symbol=0, value=0x12
  memW32(ITM_BASE_ADDRESS) = 0xFF; //rt ProfilerITMOTM: id=data1value3, symbol=0, value=0xFF
}

void SysTickInit()
{
  PPB->SYST_RVR = 0x20000; //reload value to 1.09ms
}

void GPIOInit()
{
  PORT3->IOCR8 = 0x00008000;  //set led as output
  PORT3->OUT = 0x00000200; //set led off
  PORT0->IOCR4 = 0x00800000;  //set gpio as output
  PORT0->OUT = 0x00000040; //set gpio off
}

void SysTickHandler()
{
  InterruptRoutine();
}

void targetInit()
{
  #ifndef EMPTY_TARGET_INIT
    CPU_Init();
    SysTickInit();
    GPIOInit();
    targetEnableInterrupts();
  #endif /* EMPTY_TARGET_INIT */
}

void targetEnableInterrupts()
{
  PPB->SYST_CSR = 0x7; //start timer and enable interrupt and select cpu clock 
}

void targetDisableInterrupts()
{
}

void GPIOPinToggle()
{
  
  PORT3->OMR = 0x02000200;   //Toggle GPIO port 3 pin 9 ()
  PORT0->OMR = 0x00400040;   //Toggle GPIO port 0 pin 6 ()
  
}



void disableWatchdog()
{
}
