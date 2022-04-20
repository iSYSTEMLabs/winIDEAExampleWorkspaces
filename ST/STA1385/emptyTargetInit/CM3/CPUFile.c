#include "STA1385_CM3.h"
#include "sta_map.h"
#include "sta_src_a7.h"


void targetEnableInterrupts(void)
{
  asm("CPSIE i");
}

void targetDisableInterrupts(void)
{
  asm("CPSID i");
}

void nWaitCycles(unsigned int n)
{
  int i;
	for(i = 0; i < n; i++) 
  {
		__asm volatile("nop");
	}
}


void setupInterrupts()
{
  /*Clear pending interrupts*/
  INT0_CLR_PEN = 0xFFFFFFFF;
  /*Enable interrupt 2(MTU_M3) */
  INT0_SET = 1 << INT2;
}

void enableAllCores()
{
  /*Enable all peripheral clocks*/
  src_m3_regs->pcken1 = 0xFFFFFFFF;
  /*Disable CPU vram reset*/
  misc_a7_regs->misc_reg16.bit.nporeset_varm = 0x01;
  nWaitCycles(16);
  /*Disable CPU hard reset*/
  misc_a7_regs->misc_reg16.bit.nhardreset = 0x01;
  nWaitCycles(16);
  /*Disable CPU 0 and 1 reset*/
  misc_a7_regs->misc_reg16.bit.ncpuporeset = 0x03;
  nWaitCycles(16);
}

/*The Cortex A7 subsystem has maximum frequency of 600MHz while the 
  Cortex M3 subsystem has maximum frequency of only 208MHz
  PLL1 generates the clock for the A7 subsystem and PLL2 for the M3 subsystem
  */
void initClock()
{
  /*This code sets up the M3 PLL*/
  /*Source for M3 clock is PLL2 clock (FVCOBY2) divided by 3
                    fXTAL(26MHz)
  fVCO2 = 2 * NDIV * ---------
                        IDF     
  FVCOBY2 =  fVCO2/2      
  Example for 208MHz M3 clock: IDF = 2, NDIV = 48*/
  
  /*Set the clock source to 26MHz osc*/
  src_m3_regs->resstat.bit_sta1385.mxtal_fre_sel = 0x01;
  /*Enable the PLL2*/
  src_m3_regs->pllctrl.bit.pll2en = 0x01;
  /*Set the IDF to 2*/
  src_m3_regs->pll2fctrl.bit.idf = 0x02;
  /*Set NDIV to 48*/
  src_m3_regs->pll2fctrl.bit.ndiv = 0x30;
  /*Set ODF to max(15)*/
  src_m3_regs->pll2fctrl.bit.odf = 0x0F;
  /*Wait unitll PLL2 is stable*/
  while(!src_m3_regs->pllctrl.bit.pll2stat);
  /*Enable the PLL4 (Clock source for A7 debug system)*/
  src_m3_regs->pllctrl.bit.pll4en |= 0x01;
  /*Wait unitll PLL4 is stable*/
  while(!src_m3_regs->pllctrl.bit.pll4stat);
  
  /*Set clock source to normal(ext. osc. with PLL)*/
  src_m3_regs->ctrl.bit.mode_cr = NORMAL_MODE;
  /*Wait untill clock source is set to normal*/
  while(src_m3_regs->ctrl.bit.mode_status != NORMAL_MODE);
}

/*Timer used is timer0 form the Cortex M3 timers*/
/*Timer input clock is 26MHz/3 and does not get prescaled so the 
  counter value from which it counts down should be 3250 to achive 
  1ms between events*/
void setupTimer()
{
  /*Reset the timer configure register*/
  MTU0_T0CR = 0x00000000;
  /*Set the counter value to 26000*/
  MTU0_T0LR = 0xCB2;
  /*Clear all interrupts*/
  MTU0_IMSC = 0x00000000;
  MTU0_ICR = 1 << T0IC;
  /*Set an interrupt on the timer0*/
  MTU0_IMSC = 0x01 << T0IM;
  /*Start the timer*/
  MTU0_T0CR |= 0x01 << TEN;
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  enableAllCores();
  targetDisableInterrupts();
  initClock();
  setupInterrupts();
  setupTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
