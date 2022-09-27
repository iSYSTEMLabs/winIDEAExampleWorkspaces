#include "XMC4400.h" 


#define memW32(address) (*(unsigned long*)(address))
#define ITM_BASE_ADDRESS (0xE0000000UL)


void CPU_Init()
{
  SCU_PLL_PLLCON0 &= ~(SCU_PLL_PLLCON0_VCOPWD_Msk | SCU_PLL_PLLCON0_PLLPWD_Msk);
  SCU_OSC_OSCHPCTRL = (OSC_HP_MODE<<4);    // Enable the OSC_HP	 
  SCU_OSC_OSCHPCTRL |= (OSCHPWDGDIV<<16);  // Setup OSC WDG devider
  SCU_PLL_PLLCON2 &= ~SCU_PLL_PLLCON2_PINSEL_Msk;  //Select external OSC as PLL input
  SCU_PLL_PLLCON0 &= ~SCU_PLL_PLLCON0_OSCRES_Msk;  //Restart OSC Watchdog
  while(!( (SCU_PLL_PLLSTAT) & (SCU_PLL_PLLSTAT_PLLHV_Msk | SCU_PLL_PLLSTAT_PLLLV_Msk | SCU_PLL_PLLSTAT_PLLSP_Msk)));
  
  //Setup Main PLL   
  if(SCU_CLK_SYSCLKCR != 0x000000) // Select FOFI as system clock
    SCU_CLK_SYSCLKCR = 0x00000000; // Select FOFI
  SCU_PLL_PLLCON0 |= SCU_PLL_PLLCON0_VCOBYP_Msk; // Go to bypass the Main PLL
  SCU_PLL_PLLCON0 |= SCU_PLL_PLLCON0_FINDIS_Msk; // Disconnect OSC_HP to PLL
  SCU_PLL_PLLCON1 = ((PLL_NDIV<<8) | (PLL_K2DIV<<16) | (PLL_PDIV<<24)); // Setup devider settings for main PLL
  SCU_PLL_PLLCON0 |= SCU_PLL_PLLCON0_OSCDISCDIS_Msk; // We may have to set OSCDISCDIS
  SCU_PLL_PLLCON0 &= ~SCU_PLL_PLLCON0_FINDIS_Msk;    // Connect OSC_HP to PLL
  SCU_PLL_PLLCON0 |= SCU_PLL_PLLCON0_RESLD_Msk;      // Restart PLL Lock detection
  while (!(SCU_PLL_PLLSTAT & SCU_PLL_PLLSTAT_VCOLOCK_Msk));  // Wait for PLL Lock
  SCU_PLL_PLLCON0 &= ~SCU_PLL_PLLCON0_VCOBYP_Msk;    // Go back to the Main PLL
  
  SCU_CLK_CPUCLKCR = 0; // Setup system clock dividers
	SCU_CLK_PBCLKCR = 0;	
	SCU_CLK_CCUCLKCR = 0;
  SCU_CLK_SYSCLKCR |= 0x00010000;  // Switch system clock to PLL
}


void SysTickInit()
{
  PPB_NVIC_SHPR3 &= ~(0xFF000000);
  PPB_SYST_RVR = 0x20000; //reload value to 1.09ms
  PPB_SYST_CVR = 0;
  PPB_SYST_CSR = (1 << 0) |
                (1 << 1) |
                (1 << 2);
  PPB_NVIC_ICSR |= (1 << 25);
}


void targetEnableInterrupts()
{
  __asm volatile ("cpsie i");
}


void targetInit()
{   
  #ifndef EMPTY_TARGET_INIT

    //setVectorTableLocation();
    CPU_Init();
    SysTickInit();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
