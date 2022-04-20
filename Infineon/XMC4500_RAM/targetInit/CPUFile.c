#include "CPU.h" 
#include "System_XMC4500.h"
#include "XMC4500.h"


#define memW32(address) (*(unsigned long*)(address))
#define ITM_BASE_ADDRESS (0xE0000000UL)

void CPU_Init()
{
  int i;
  int iPllFreq;
  
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
  
  iPllFreq = CLOCK_CRYSTAL_FREQUENCY * (PLL_NDIV+1) / (PLL_K2DIV+1) / (PLL_PDIV+1);
  asm("nop");
}


void SysTickInit()
{
  PPB->SYST_RVR = 0x20000; //reload value to 1.09ms
}


void TimerInterruptHandler()
{
  InterruptRoutine();
}

void targetEnableInterrupts()
{
  PPB->SYST_CSR = 0x7; //start timer and enable interrupt and select cpu clock 
}


void targetInit()
{   
  #ifndef EMPTY_TARGET_INIT

    CPU_Init();
    SysTickInit();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
