#include "S32K146.h"


#define BIT_SET(reg, bit)    ((reg) |= (1UL << (bit)))
#define BIT_CLEAR(reg, bit)  ((reg) &= ~(1UL << (bit)))

/*
   Disable watchdog timer
*/
void disableWatchdog()
{
  /* Prepare value for WDOG CS register */
  int val = WDOG_CS;
  val |= (0x1 << WDOG_CS_UPDATE);
  val &= ~(0x1 << WDOG_CS_EN);
  /* Unlock write access */
  WDOG_CNT = 0xD928C520;
  /* Wait for WDOG to become unlocked */
  while (!(WDOG_CS & (0x1 << WDOG_CS_ULK)));
  /* Set WDOG CS to prepared value*/
  WDOG_CS = val;
  /* Set WDOG TOVAL value to 0xFF00 */
  WDOG_TOVAL = 0x0000FF00;
  /* Wait for WDOG to complete reconfiguration */
  while (!(WDOG_CS & (0x1 << WDOG_CS_RCS)));
}

/*
   Initialize GPIO:
    - pin PA14, on S32K14xCVD-Q144 board this is P24 pin 3: interrupt GPIO toggle pin
    - pin PA13, on S32K14xCVD-Q144 board this is P24 pin 9: targetSelfReset pin
*/


/*
   Initialize LPIT timer
*/
void initTimer(){
  /* Select main PLL clock/SPLLDIV2 as LPIT input clock and enable clock for peripheral */
  PCC_LPIT |= (0x6 << PCC_LPIT_PCS);
  PCC_LPIT |= (0x1 << PCC_LPIT_CGC);
  /* Enable LPIT module */
  LPIT0_MCR |= (0x1 << LPIT0_MCR_M_CEN);
  /* Set countdown value to 80000 */
  LPIT0_TVAL = 0x13880;
  /* Enable interrupt generation for LPIT channel 0 */
  LPIT0_MIER |= (0x1 << LPIT0_MIER_TIE0);
}

/*
   Initialize clock (from 8MHz ext. osc.) to 80 MHz, which is max in RUN mode.
   HSRUN mode exists, where clock can be as high as 112 MHz, but Flash programming is
   disabled in that mode.
*/
void initClock(){                            
  int val;
  
  /* Configure ext. osc. */
  SCG_SOSCCFG |= (0x3 << SCG_SOSCCFG_RANGE);
  SCG_SOSCCFG |= (0x1 << SCG_SOSCCFG_EREFS);
  SCG_SOSCCFG |= (0x1 << SCG_SOSCCFG_HGO);
  SCG_SOSCCSR |= (0x1 << SCG_SOSCCSR_SOSCEN);
  while(!(SCG_SOSCCSR & (0x1 << SCG_SOSCCSR_SOSCVLD)));
  
  /* Configure PLL
     Calculation: 8 MHz (in) * 20 (mult) / 2 (fixed div) = 80 MHz
     SPLLDIV2 - input clock divider for LPIT, can't be more than BUS clock */
  SCG_SPLLCFG &= ~(0x1F << SCG_SPLLCFG_MULT);
  SCG_SPLLCFG |= (0x4 << SCG_SPLLCFG_MULT);
  SCG_SPLLCFG &= ~(0x7 << SCG_SPLLCFG_PREDIV);
  SCG_SPLLDIV &= ~(0x7 << SCG_SPLLDIV_SPLLDIV1);
  SCG_SPLLDIV &= ~(0x7 << SCG_SPLLDIV_SPLLDIV2);
  SCG_SPLLDIV |= (0x1 << SCG_SPLLDIV_SPLLDIV2);
  SCG_SPLLCSR |= (0x1 << SCG_SPLLCSR_SPLLEN);
  while(!(SCG_SPLLCSR & (0x1 << SCG_SPLLCSR_SPLLVLD)));
  
  /* Select PLL as main clock. Set BUS clock to 40 MHz and FLASH clock to 20 MHz. */
  val = 0x0;
  val |= (0x1 << SCG_RCCR_DIVBUS);
  val |= (0x3 << SCG_RCCR_DIVSLOW); 
  val |= (0x6 << SCG_RCCR_SCS);
  SCG_RCCR = val;
  while(SCG_CSR != 0x06000013);
  
  //Uncoment if using on slow pad pins. Also check under SoC advanced
  //the correct pins are selected for trace
  
  //SIM_CLKDIV4 &= ~(1 << SIM_CLKDIV4_TRACEDIVEN);      // disable trace divider
  //SIM_CLKDIV4 |= (1 << SIM_CLKDIV4_TRACEDIV);      // set trace clock to 20 MHz (max for slow pad pins)
  //SIM_CLKDIV4 |= (1 << SIM_CLKDIV4_TRACEDIVEN);      // enable trace divider
  
  //If uncoment, use SWO_clk = 40 MHz, prescale 4
  //If coment, use SWO_clk = 80 MHz, prescale 8
}


void targetInit(void){
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();

  #endif /* EMPTY_TARGET_INIT */
}

void targetEnableInterrupts(){ 
  INT_32_63_SET_EN |= (0x1 << INT_32_63_SET_EN_LPIT0);
  asm("CPSIE i");
  LPIT0_TCTRL0 |= (0x1 << LPIT0_TCTRL0_T_EN);
}

void targetDisableInterrupts(){
  asm("CPSID i");
  LPIT0_TCTRL0 &= ~(0x1 << LPIT0_TCTRL0_T_EN);
}

void targetSelfReset(void){
  targetDisableInterrupts();
  
  BIT_SET(GPIOA_PCOR, GPIO_RESET_PIN); // reset asserted  
}
