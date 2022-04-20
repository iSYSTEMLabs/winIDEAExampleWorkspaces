#include "s32k11x.h"


void disableWatchdog()
{
}

void initClock()
{
  /* Use FIRC as core clock. FIRC = 48 MHz.
     Bus clock = FIRC
     Flash clock = FIRC/2
  */
  
  int val = 0;
  val |= (3 << SCG_RCCR_SCS);   // select FIRC as system clock source
  val &= ~(0xF << SCG_RCCR_DIVCORE);   //core clock div ratio = 1
  val &= ~(0xF << SCG_RCCR_DIVBUS);          //bus clock div ratio = 1
  val |= (0x1 << SCG_RCCR_DIVSLOW);          //flash clock div ratio = 2
  SCG_RCCR = val;
  
  SCG_FIRCDIV |= (1 << SCG_FIRCDIV_FIRCDIV2);
  while(!(SCG_FIRCCSR & (0x1 << SCG_FIRCCSR_FIRCVLD)));

}


void initNVIC(void)
{
  /* Select main PLL clock/SPLLDIV2 as LPIT input clock and enable clock for peripheral */
  PCC_LPIT |= (0x3 << PCC_LPIT_PCS);  //spremeni
  PCC_LPIT |= (0x1 << PCC_LPIT_CGC);
  /* Enable LPIT module */
  LPIT0_MCR |= (0x1 << LPIT0_MCR_M_CEN);
  /* Set countdown value to 48000 */
  LPIT0_TVAL = 48000;
  /* Enable interrupt generation for LPIT channel 0 */
  LPIT0_MIER |= (0x1 << LPIT0_MIER_TIE0);
}    


void targetEnableInterrupts(void)
{ 
  INT_0_31_SET_EN |= (0x1 << INT_0_31_SET_EN_LPIT0);
  //asm("CPSIE i \n");
  LPIT0_TCTRL0 |= (0x1 << LPIT0_TCTRL0_T_EN);
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initNVIC();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}
