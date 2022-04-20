#include "mpc5510.h"
#include "typedefs.h"
#include "mpc5516.h"

#ifdef METROWERKS_2_5_NONSTRIP_DEADCODE
#pragma force_active on
#endif


#define ERFD    1  
#define EMFD    24

extern int isITest;

extern unsigned int __IVPR_VALUE;

asm void InitInterruptVectors()
{
  e_lis	   r3, __IVPR_VALUE@h   // IVPR value is passed from link file
  e_or2i r3, __IVPR_VALUE@l   // IVPR value is passed from link file  
  mtivpr r3
  se_nop
}

/* Public interface functions. */

void targetEnableInterrupts()
{
  asm(" wrteei 1");	    	// Enable external interrupts
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  int DelayCount;
  isITest=0;                // needed for regression test due to compiler optimization level
  ESYNCR2=ERFD;             // ERFD (output divider)
  ESYNCR1=0xF0010000;       // EPREDIV=1 (pre-divider)
  ESYNCR1|=EMFD;            // EMFD (multiplication factor)
  SYNSR&=~0x8;              // Mark PLL as unlocked
  while(!(SYNSR&0x8));      // Wait while unlocked
  DelayCount=100000;
  while(DelayCount)         // Give it a while
    DelayCount--;       
  SIU_SYSCLK=0x80000000;    // Switch system clock to PLL clock
  DelayCount=100000;
  while(DelayCount)         // Give it a while
    DelayCount--;

  InitInterruptVectors();
  InitDIE();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


asm void ClrDISFlag(void) 
{
  e_lis r0, 0x0C00
  mtspr 336, r0 // Write "1" clear DIS Interrupt Status flag 
  se_nop
}

asm void InitDIE(void) 
{
  se_li r0, 0 /* Initialize time base to 0 */
  mttbu r0
  mttbl r0
  e_lis r0, 0x0441 /* Enable DIE interrupt and set*/
  e_or2i r0, 0x0000
  mttcr r0
  e_li r0, 0x4000 /* Enable Time Base and Decrementer (set TBEN) */
  mthid0 r0
  e_lis r0, 0x0001
  e_or2i r0, 0x4000
  mtspr 54, r0 /* SET DECAR to reload on 1ms */
  e_lis r0, 0x0000
  e_or2i r0, 0x0001
  mtspr 22, r0 /* DEC counter set to 1 */
}

unsigned char gotoStopLowPowerMode = 0;
unsigned char gotoSleepLowPowerMode = 0;  

void targetEnterAndExitLowPowerMode()
{
  if(gotoStopLowPowerMode)
  {
  }
  else
  {}
  
  if(gotoSleepLowPowerMode)
  {
    enterAndExitSleepMode();
  }
  else
  {}
}


void enterAndExitSleepMode()
{
  CRP.RTCSC.B.CLKSEL = 0x0;       // 32Khz IRC as CLK Source  
  CRP.RTCSC.B.APIVAL = 0x3FF;     // Set Max value for API 
  CRP.WKSE.B.APIWKEN = 0x1;	      // Select API as wake up source 
  CRP.CLKSRC.B.IRC32KEN = 1;	    // enable 32K IRC for wake up 
  CRP.RTCSC.B.APIEN = 1;          // Enable API 
  CRP.RTCSC.B.CNTEN = 1;          // Enable RTC 
  
  enter_low_power_mode();
  
  CRP.PSCR.B.SLEEPF = 0x1; // Clear sleep flags to allow pads to operate 
  CRP.PSCR.B.PKREL  = 0x1; // release pad keepers
}

void enter_low_power_mode (void) {

    CRP.PSCR.B.SLEEP = 1;             // Confirm Sleep Mode Required 
	                                    
    CRP.Z1VEC.B.Z1VEC = 0x001FFC>>2;  // Write Z61EC register 
    CRP.Z1VEC.B.VLE = 0x0;            // set for non VLE 
  
    SIU.HLT.R = 0x33EFFFFF;           // Halt all modules
    while(SIU.HLTACK.R != 0x33EFFFFF);// Wait for Halt to Complete 

    CRP.PSCR.B.RAMSEL = 0x7;	        // All RAMs maintained to recover from SLEEP 
    CRP.RECPTR.B.FASTREC = 0x0;
    
    CRP.Z0VEC.B.Z0RST = 1;            // Put Z0 in reset 
    SIU.SYSCLK.B.SYSCLKSEL = 0;       // Switch system clock to 16MHz IRC 
    ESYNCR1 &= 0x8FFFFFFF;            // Disable PLL 

    execute_wait(); 
}
void disableWatchdog()
{
}

#pragma function_align 8
void InterruptHandler()
{
  InterruptRoutine();
  ClrDISFlag();
}
