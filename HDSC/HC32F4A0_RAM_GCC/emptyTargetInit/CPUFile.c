#include "hc32f4a0.h"


void ITMInit(void)
{
  memW32(ITM_LOCK_ACCESS_REGISTER) = 0xC5ACCE55; //unlock write access to ITM
  memW32(ITM_TRACE_ENABLE_REGISTER) = 0xFFFFFFFF; //enable stimulus port 0-31 
  memW32(ITM_TRACE_PRIVILEGE_REGISTER) = 0x1; //set privilege
}


// Initialize the PLL to output 240MHz
void initClock()
{
  /*
    This function sets PLLHP as the source for the system clock, which is 240 MHz. 
    HCLK is equal to the system clock.
    PCLK0 and PCLK1 are 1/2 of the system clock (120 MHz).
    PCLK2, PCLK3, PCLK4 are 1/8 of the system clock (30 MHz).
    
    output = ( PLLSRC / PLLHM ) * PLLHN / PLLHP
    
    PLLSRC - source for the PLL, in this case the 16 MHz internal high-speed oscillator (FIRC)
    PLLHM - PLL input divisor, in this case 1 (range 1 - 4)
    PLLHN - PLL multiplication factor, in this case 45 (range 25 - 150)
    PLLHP - PLLHP output divisor, in this case 3 (range 2 - 16)
    
    240 MHz = ( 16 MHz / 1 ) * 45 / 3
  */
  
  // Enable writes to CMU
  PWC.FPRC.R = 1 | WRITE_ENABLE_MASK;
  
  // Enable SRAM clocks
  PWC.FCG0.R = 0xFFFFFA0E;
  
  // Disable all other clocks
  PWC.FCG1.R = 0xFFFFFFFF;
  PWC.FCG2.R = 0xFFFFFFFF;
  PWC.FCG3.R = 0xFFFFFFFF;

  // Configure the PLL 
  // Set internal high-speed oscillator as the source for the PLL
  CMU.PLLHCFGR.B.PLLSRC = CMU_PLLHCFGR_PLLSRC_HRC;
  
  // Multiply PLL by 45
  CMU.PLLHCFGR.B.PLLHN = 45 - 1;
  
  // Divide output by 3
  CMU.PLLHCFGR.B.PLLHP = 3 - 1;
  
  // Enable PLL
  CMU.PLLHCR.B.PLLHOFF = 0;
  
  // Set HCLK
  // 1 frequency division of system clock
  CMU.SCFGR.B.HCLKS = 0;
  
  // Set various clock sources
  // Divide by two
  CMU.SCFGR.B.PCLK0S = 1;
  CMU.SCFGR.B.PCLK1S = 1;
  
  // Divide by eight
  CMU.SCFGR.B.PCLK2S = 3;
  CMU.SCFGR.B.PCLK3S = 3;
  CMU.SCFGR.B.PCLK4S = 3;
  
  /* 
    Set the trace clock (TPIU clock) to 60MHz by dividing it by 4 from the system clock.
    NOTE: If using SWO, the SWO clock must be equal to the TPIU clock
  */
  CMU.TPIUCKCFGR.B.TPIUCKS = 0b10;
  // Enable trace clock
  CMU.TPIUCKCFGR.B.TPIUCKOE = 1;
  
  /*
  // Set flash cycles according to CPU speed
  // Enable writes to flash registers
  EFM.FAPRT.B.FAPRT = 0x0123;
  EFM.FAPRT.B.FAPRT = 0x3210;
  
  // Set new wait cycles
  EFM.FRMC.B.FLWT = 0b0101;
  */
  
  // Set system clock source
  CMU.CKSWR.B.CKSW = CMU_CKSWR_SW_PLLH;
  
  // Wait for system to stabilize
  for (unsigned int i = 0; i < 512; i++) 
  {
    asm("nop\t\n");
  }

  // Set system clock as clock out
  CMU.MCOCFGR1.B.MCOSEL = CMU_MCOSEL_SYSCLK;
  // Divide by 4
  CMU.MCOCFGR1.B.MCODIV = 0b10;
  // Enable clock out
  CMU.MCOCFGR1.B.MCOEN = 1;
  
}


// Uses Timer 0_1
void initTimer()
{
  /* 
    The Compare Match Event A on Timer 0_1 generates an event.
    The source for the Timer 0 clock is PCLK1, which is set to 120MHz
  */
  // Enable the timer clock
  PWC.FCG2.B.TMR0_1 = 0;

  // Divide timer clock by 64 (from 120MHz to 1.875 MHz)
  TMR01.BCONR.B.CKDIVA = 0b0110;
  
  // Set compare value to 1875
  TMR01.CMPAR.R = 1875 - 1;
  
  // Enable interrupt on compare
  TMR01.BCONR.B.INTENA = 1;
  
  // Start timer
  TMR01.BCONR.B.CSTA = 1;
}


// Enable timer interrupt
void targetEnableInterrupts()
{
  /* 
    The HC32F4A0 allows assigning any system event to the first 32 NVIC interrupts.
    In this case, NVIC interrupt 0 is set to the Compare Match Event A on Timer 0_1.
  */
  
  // Set the event source to TMR0_1_CMPA
  INTC.SEL0.B.INTSEL = 0x60;
  
  // Enable NVIC interrupt 0
  INTC.IER.B.IER0 = 1;
  
  // Clear pending interrupts on external line 0
  System_Control_Space_NVIC.INT_0_31_CLR_PEND = 0xFFFFFFFF;
  
  // Enable interrupts on line 0
  System_Control_Space_NVIC.INT_0_31_SET_EN = 1;
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  ITMInit(); 
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


unsigned char gotoStopLowPowerMode = 0;
unsigned char gotoStandbyLowPowerMode = 0;
unsigned char gotoSleepLowPowerMode = 0;


void disableWatchdog()
{
}
