#include "MKL25Z4.h"


unsigned char byTestByte;
unsigned short wTestWord=0;
int dwTestWord;

typedef unsigned int BOOL;
typedef unsigned char BYTE;
typedef unsigned long DWORD;
typedef unsigned short WORD;
#define TRUE 1
#define FALSE 0

BOOL a, b;

void DisableWDOG(void);

enum WDOG_REGS
{
  STCTRLH, 
  STCTRLL,
  TOVALH,
  TOVALL,
  WINH,
  WINL,
  REFRESH,
  UNLOCK,
  TMROUTH,
  TMROUTL,
  RSTCNT,
  PRESC
};

#define WDOG ((volatile unsigned short *) 0x40053000)

#define STCTRLH_WDOGEN        (1 << 0)
#define STCTRLH_WINEN         (1 << 3)
#define STCTRLH_ALLOWUPDATE   (1 << 4)
#define STCTRLH_DBGEN         (1 << 5)


/*
  Output clock from FLL is 72281.25 MHz (max 75 MHz)   
*/
void initFLL(){
  OSC_CR |= (1 << OSC_CR_ERCLKEN);            // Enable external clock
  MCG_C2 |= (1 << MCG_C2_EREFS0);             // Oscillator requested
  MCG_C2 |= (1 << MCG_C2_HGO0);               // Configure crystal oscillator for high-gain operation
  MCG_C2 |= (0b01 << MCG_C2_RANGE0);          // Very high frequency range selected for the crystal oscillator
  MCG_C2 &= ~(1 << MCG_C2_LP);                // Disable low power mode
  
  while (!(MCG_S & (1 << MCG_S_OSCINIT0)));   // Wait for oscillator to initialize
  
  SIM_CLKDIV1 &= ~(3 << SIM_CLKDIV1_CLKDIVBUS);
  SIM_CLKDIV1 |= (0b10 << SIM_CLKDIV1_CLKDIVBUS);
  
  MCG_C1 &= ~(0b111 << MCG_C1_FRDIV);
  MCG_C1 |= (0b000 << MCG_C1_FRDIV);
  MCG_C7 &= ~(1 << MCG_C7_OSCSEL);            // Select ext. crystal oscillator
  MCG_C1 &= ~(1 << MCG_C1_IREFS);             // Select ext. oscillator as FLL/PLL input clock
  MCG_C4 |= (1 << MCG_C4_DMX32);              // DCO freqency
  MCG_C4 |= (0b10 << MCG_C4_DRST_DRS);        // Select mid-high range FLL output freqency
  int i = 0;
  while ((i++) != 100000);
  MCG_C1 &= ~(0b11 << MCG_C1_CLKS);
}

void initTimer(){
  SIM_SCGC6 |= (1 << SIM_SCGC6_PIT0);         // Enable clock for PIT0
  PIT0_MCR |= (1 << PIT0_MCR_MDIS);           // Disable clock
  PIT0_LDVAL0 = 0x5E1D;
  PIT0_TCTRL0 |= (1 << PIT0_TCTRL0_TIE);
  PIT0_TCTRL0 |= (1 << PIT0_TCTRL0_TEN);      // Enable timer
  PIT0_MCR &= ~(1 << PIT0_MCR_MDIS);          // Enable clock
}

void disableWatchdog(void)
{
  if(ISMASK(WDOG[STCTRLH], STCTRLH_ALLOWUPDATE))
  {
    __asm__("cpsid i"); //disable interrupts
    WDOG[UNLOCK] = 0xC520;
    WDOG[UNLOCK] = 0xD928; 
    WDOG[STCTRLH] &= ~STCTRLH_WDOGEN;  
    __asm__(" dsb");
    __asm__(" isb");
    __asm__("cpsie i"); //enable interrupts   
  }
}

void CPU_Init(void)
{               
  //InitPLL_LPC11xx();
}

void targetEnableInterrupts(void)
{
  __asm__("CPSIE i");
  NVIC_INT_0_31_SET_EN |= (1 << NIVC_PIT0);  
}


void targetInit(void)
{   
  #ifndef EMPTY_TARGET_INIT

  CPU_Init();
  initFLL();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void ITMInit(void)
{
  memW32(ITM_LOCK_ACCESS_REGISTER) = 0xC5ACCE55; //unlock write access to ITM
  memW32(ITM_TRACE_ENABLE_REGISTER) = 0xFFFFFFFF; //enable stimulus port 0-31 
  memW32(ITM_TRACE_PRIVILEGE_REGISTER) = 0x1; //set privilege    
}
