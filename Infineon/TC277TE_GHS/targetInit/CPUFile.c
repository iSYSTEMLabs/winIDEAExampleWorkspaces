#include "TriCore.h"
#include <RegDef.h>
#include <intrinsics.h>

// #ifdef __CPU__
// #endif


void initInterrupts()
{
  STM0_CMP0.U       =  0xFFFF;    // load compare register 0
  STM0_CMP1.U       =  0x0;  // load compare register 1

  STM0_CMCON.U      =  0x00001001;  // load compare match control register
  STM0_ICR.U        =  0x00000001;  // enable interrupt control register for CMP0
  
  STM0_ISCR.B.CMP0IRR = 1; // clear compare flag
  SRC_STM2SR0.U      =  0x02000000;  // clear interrupt request
  SRC_STM2SR0.U      =  0x00000405;  // set service request control register
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
  STM0_ISCR.B.CMP0IRR = 1;
}


void enableSecondCore()
{
  int dwDBSR1=meml(DBGSR1);
  dwDBSR1&= DBGSR_MASK_HALT;
  dwDBSR1|= DBGSR_SET_RUN;
  dwDBSR1&=~DBGSR_SUSPEND;
  meml(DBGSR1)=dwDBSR1; //run
}


void setupSecondCore()
{
  meml(PC1)=0xA0001000; //set 2nd core program counter  
}

void MAIN_vWriteWDTCON0(unsigned long uwValue)
{                       
  unsigned long defPassword; // a variable used as a mask to get only the password bits[15:2] from WDTSCON0
  unsigned long tempUnlock; // used as a temporary 'key' for unlocking access to WDTSCON0 
  
  defPassword = 0x000000FF; // password bits mask so that only the PW part will get overwritten when we use XOR later
  tempUnlock = SCU_WDTSCON0.U^(defPassword); // because the first 7 bits of the password[7:2] are inverted, we need to invert them once more in order to get the correct value 
  tempUnlock |= (0<<SCU_WDTSCON0_LCK_BIT); // set LCK to 0, this way we can change the content of WDTSCON0
  tempUnlock |= (1<<SCU_WDTSCON0_ENDINIT_BIT); // set ENDINIT to 1, otherwise the function fails later on

  SCU_WDTSCON0.U = tempUnlock; // unlock the WDTSCON0 register with the calculated password from above
  SCU_WDTSCON0.U  =  uwValue; // write ENDINIT value and lock WDTSCON0 back again      

} //  End of function MAIN_vWriteWDTCON0
                                                                                                             
void MAIN_vSetENDINIT()
{
  MAIN_vWriteWDTCON0(SCU_WDTSCON0.U | 0x00000001); // set ENDINIT to 1, lock all ENDINIT protected registers 
}

void MAIN_vResetENDINIT() 
{
  MAIN_vWriteWDTCON0(SCU_WDTSCON0.U & ~0x00000001); // set ENDINIT to 0, unlock all ENDINIT protected registers
  while (SCU_WDTSCON0.U & (1<<SCU_WDTSCON0_ENDINIT_BIT)); 
}

void clock_Switch()
{   
    volatile int osccon = 0;
    MAIN_vResetENDINIT(); // set ENDINIT to 0 to unlock access to ENDINIT protected registers. Even though the registers might be initially set to 0, run this so that you eliminate the possibility of trying to write to a locked register and wasting precious time :)     
    osccon        =   SCU_OSCCON.U;
    SCU_CCUCON1.U |= (1<<SCU_CCUCON1_INSEL_BIT); // select OSC as clock source 
    SCU_PLLCON0.U |= (1<<SCU_PLLCON0_SETFINDIS_BIT); // disconnect input clock from VCO, PLLSTAT.FINDIS bit is set to 1 by the 'helper' register SETFINDIS
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
    SCU_PLLCON0.U = 0x06017C10; // write P=6, N=120 divider values to PLLCON0, check register layout in the block comment above
    SCU_PLLCON0.U |= (1<<SCU_PLLCON0_CLRFINDIS_BIT); // connect input clock back to VCO
    SCU_PLLCON1.U ^= 14<<0;  // set K2 divider to K2=1, check register layout in the block comment above. Because K2 is initially set to 15, we invert the first 3 bits to get the value of 1 with ^= 14<<0 
    SCU_CCUCON0.U = 0x51120111; // set BAUD1, BAUD2, SRI, LP, SPB, FSI2 and FSI DIVIDERS plus selecting OSC as clock source. CPU clock is directly affected by the SRI divider 
    
    while((SCU_PLLSTAT.U & (1<<SCU_PLLSTAT_VCOLOCK_BIT)) == 0);
    MAIN_vSetENDINIT(); // set ENDINIT to 1 to lock access to ENDINIT protected registers

}

void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  clock_Switch();
  setupSecondCore(); 

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
