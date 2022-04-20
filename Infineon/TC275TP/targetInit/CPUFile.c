#include "TriCore.h"


/* This function disables watchdog timers that are enabled by default */
void disable_watchdog()
{
  int key;
  
  /* Disable system watchdog */
  key = SCU_WDTSCON0;
  key ^= (0x3F << SCU_WDTSCON0_PW);         /* Decrypt key (bottom 6 bits are inverted) */
  key &= ~(0x1 << SCU_WDTSCON0_LCK);        /* Clear lock bit */
  key |= (0x1 << SCU_WDTSCON0_ENDINIT);     /* Set ENDINIT bit, update SCU_WDTSCON0 */
  SCU_WDTSCON0 = key;
  SCU_WDTSCON1 |= (0x1 << SCU_WDTSCON1_DR); /* Update password protected disable WDT field */
  key |= (0x1 << SCU_WDTSCON0_LCK);
  SCU_WDTSCON0 = key;
  
  /* Disable primary core watchdog, other cores watchdogs are disabled by default */
  key = SCU_WDTCPU0CON0;
  key ^= (0x3F << SCU_WDTCPU0CON0_PW);            /* Decrypt key (bottom 6 bits are inverted) */
  key &= ~(0x1 << SCU_WDTCPU0CON0_LCK);           /* Clear lock bit */
  key |= (0x1 << SCU_WDTCPU0CON0_ENDINIT);        /* Set ENDINIT bit, update SCU_WDTSCON0 */
  SCU_WDTCPU0CON0 = key;
  SCU_WDTCPU0CON1 |= (0x1 << SCU_WDTCPU0CON1_DR); /* Update password protected disable WDT field */
  key |= (0x1 << SCU_WDTCPU0CON0_LCK);
  SCU_WDTCPU0CON0 = key;
}


#define STM_INT0 0x5
void __interrupt(STM_INT0) 
TimerInterruptHandler(void)
{
  if(STM_ICR.B.CMP0IR == 1)
  {
    STM_CMP0.U += 0x1;
    STM_ISRR.B.CMP0IRR = 1; 
    InterruptRoutine();
  }
  if(STM_ICR.B.CMP1IR == 1)  
  {
    STM_ISRR.B.CMP1IRR = 1;  
  }
}

void initInterrupts()
{
  STM_CMP0.U       =  0xFFFF;    // load compare register 0
  STM_CMP1.U       =  0x0;  // load compare register 1

  STM_CMCON.U      =  0x00001001;  // load compare match control register
  STM_ICR.U        =  0x00000001;  // enable interrupt control register for CMP0
  
  STM_ISRR.B.CMP0IRR = 1; // clear compare flag
  SRC_STM2SR0      =  0x02000000;  // clear interrupt request
  SRC_STM2SR0      =  0x00000405;  // set service request control register
}


void targetEnableInterrupts(void)
{
  int i;
  __enable();

  // below delay was added in order for interrupts to start kicking
  // otherwise interrupts started kicking after the profiler test code was executed already
  for(i=0;i<4000;)
  {
    i++;
  }    
  initInterrupts();
  STM_ISRR.B.CMP0IRR = 1;
}


void enableSecondCore()
{
  int dwDBSR1=meml(DBGSR1);
  dwDBSR1&= DBGSR_MASK_HALT;
  dwDBSR1|= DBGSR_SET_RUN;
  dwDBSR1&=~DBGSR_SUSPEND;
  meml(DBGSR1)=dwDBSR1; //run
}


void enableThirdCore()
{
  int dwDBSR2=meml(DBGSR2);
  dwDBSR2&= DBGSR_MASK_HALT;
  dwDBSR2|= DBGSR_SET_RUN;
  dwDBSR2&=~DBGSR_SUSPEND;
  meml(DBGSR2)=dwDBSR2; //run
}


void setupSecondCore()
{
  meml(PC1)=0xA0001000; //set 2nd core program counter  
}

void setupThirdCore()
{
  meml(PC2)=0xA0003900; //set 2nd core program counter  
}

void clock_Switch()
{                
    //MAIN_vResetENDINIT(); // set ENDINIT to 0 to unlock access to ENDINIT protected registers. Even though the registers might be initially set to 0, run this so that you eliminate the possibility of trying to write to a locked register and wasting precious time :)     
    SCU_CCUCON1 |= (1<<SCU_CCUCON1_INSEL_BIT); // select OSC as clock source 
    SCU_PLLCON0 |= (1<<SCU_PLLCON0_SETFINDIS_BIT); // disconnect input clock from VCO, PLLSTAT.FINDIS bit is set to 1 by the 'helper' register SETFINDIS
    /*
      by selecting values P=4, N=127 and K2=1 we get an output frequency of 203MHz 
      by selecting values P=4, N=127 and K2=2 we get an output frequency of 135MHz
      
                    |PDIV|         |  NDIV |
      PLLCON0 = 0000|0100|0000|0001|1111|1110|0001|0000
      
                                               |K2DIV |
      PLLCON1 = 0000|0000|0000|0000|0000|0000|0000|0001
                                                                    (NDIV+1)
      the equation for getting the output frequency is: f_out = ----------------- * f_osc (for TC277TF the f_osc was 20MHz) 
                                                                (PDIV+1)*(K2DIV+1)
      //SCU_PLLCON0 = 0x0501EE10; // write P=5, N=119 divider values to PLLCON0, f=198.9MHz
      //SCU_PLLCON0 = 0x0501F010; // write P=5, N=120 divider values to PLLCON0, f=200.6MHz
    */
    SCU_PLLCON0 = 0x0601FC10; // write P=5, N=120 divider values to PLLCON0, check register layout in the block comment above
    SCU_PLLCON0 |= (1<<SCU_PLLCON0_CLRFINDIS_BIT); // connect input clock back to VCO
    SCU_PLLCON1 ^= 14<<0;  // set K2 divider to K2=1, check register layout in the block comment above. Because K2 is initially set to 15, we invert the first 3 bits to get the value of 1 with ^= 14<<0 
    SCU_CCUCON0 = 0x51120111; // set BAUD1, BAUD2, SRI, LP, SPB, FSI2 and FSI DIVIDERS plus selecting OSC as clock source. CPU clock is directly affected by the SRI divider 
    __asm("nop");
    __asm("nop");

    while((SCU_PLLSTAT & (1<<SCU_PLLSTAT_VCOLOCK_BIT)) == 0);
    //MAIN_vSetENDINIT(); // set ENDINIT to 1 to lock access to ENDINIT protected registers

}

void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  clock_Switch();
  disable_watchdog();
  setupSecondCore();
  setupThirdCore();  
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog(void)
{
  // Watchdog must be disabled after clock switch.
  
}
