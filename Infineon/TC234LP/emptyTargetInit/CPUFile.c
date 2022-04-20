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
  if(STM_ICR & (1 << CMP0IR))
  {
    STM_ISCR |= (1 << CMP0IRR); 
    InterruptRoutine();
  }

}

void initInterrupts()
{
  STM_CMP0 = 0;    // load compare register 0; COMPARE NOT WORKING

  STM_CMCON |= (0x10 << 8);  // start
  STM_CMCON &= ~0x1F;   // size
  
  STM_ICR = 1;  // enable interrupt control register for CMP0
  
  STM_ISCR |= (1 << CMP0IRR); // clear compare flag
  SRC_STM0SR0 =  0x02000000;  // clear interrupt request
  SRC_STM0SR0 =  0x00000405;  // set service request control register
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
  STM_ISCR |= (1 << CMP0IRR);
}


void clock_Switch()
{  
    int i;
    unsigned int mask = (0x1F<<16);
    SCU_OSCCON = (SCU_OSCCON & ~mask) | ((7<<16) & mask); // set OVAL to 7 so thah Foscref = 2.5 MHz
    //MAIN_vResetENDINIT(); // set ENDINIT to 0 to unlock access to ENDINIT protected registers. Even though the registers might be initially set to 0, run this so that you eliminate the possibility of trying to write to a locked register and wasting precious time :)     
    SCU_CCUCON1 |= (1<<SCU_CCUCON1_INSEL_BIT); // select OSC as clock source 
    SCU_PLLCON0 |= (1<<SCU_PLLCON0_SETFINDIS_BIT); // disconnect input clock from VCO, PLLSTAT.FINDIS bit is set to 1 by the 'helper' register SETFINDIS
    /*
         
                    |PDIV|         |  NDIV |
      PLLCON0 = 0000|0001|0000|0001|0100|1110|0001|0000
      
                                               |K2DIV |
      PLLCON1 = 0000|0000|0000|0000|0000|0000|0000|0001
                                                                    (NDIV+1)
      the equation for getting the output frequency is: f_out = ----------------- * f_osc (for TC234LF the f_osc is 20MHz) 
                                                                (PDIV+1)*(K2DIV+1)
      //SCU_PLLCON0 = 0x01014E00; // write P=1, N=39 divider values to PLLCON0, f=200 MHz
    */
    SCU_PLLCON0 = 0x01014E10; // write P=2, N=39 divider values to PLLCON0, check register layout in the block comment above
    SCU_PLLCON0 |= (1<<SCU_PLLCON0_CLRFINDIS_BIT); // connect input clock back to VCO
    SCU_PLLCON1 ^= 14<<0;  // set K2 divider to K2=1, check register layout in the block comment above. Because K2 is initially set to 15, we invert the first 3 bits to get the value of 1 with ^= 14<<0 
    SCU_CCUCON0 = 0x51120111; // set BAUD1, BAUD2, SRI, LP, SPB, FSI2 and FSI DIVIDERS plus selecting OSC as clock source. CPU clock is directly affected by the SRI divider 
    
    // make sure everything switched
    for(i=0;i<4000;)
    {
      i++;
    }
    
    while((SCU_PLLSTAT & (1<<SCU_PLLSTAT_VCOLOCK_BIT)) == 0);
    //MAIN_vSetENDINIT(); // set ENDINIT to 1 to lock access to ENDINIT protected registers

}

void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  clock_Switch();
  disable_watchdog();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog(void)
{
  // Watchdog must be disabled after clock switch.
  
}
