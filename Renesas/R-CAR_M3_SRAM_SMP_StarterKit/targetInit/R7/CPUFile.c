#include "rcar_m3.h"
#include "stm.h"

/* return core ID in this specific sample */
int getCoreID(){
  return 0;
}

struct STM *gSTM = { 0 };


/*
   Default CPU clock for CR7 is 800 MHz (max), private timer clock is divided by 4, so it is 200 MHz
*/
void initTimer(){
  /* Set reload value */
  R7_PTMR_LOAD = 0x30D40;
  /* Select auto reload operation */
  R7_PTMR_CTR |= (0x1 << R7_PTMR_CTR_AR);
  /* Enable interrupt */
  R7_PTMR_CTR |= (0x1 << R7_PTMR_CTR_IE);
}

void initINTC(){                               
  /* Enable private interrupt ID29 (private timer) */
  ICDISER0 |= (0x1 << ICDISER0_ID29);
  /* Set priority of interrupt ID29 to 0 (highest) */
  ICDIPR7 &= ~(0xFF << ICDIPR7_ID29);
  /* Select priority mask register */
  ICCPMR |= (0x10 << ICCPMR_PRIO);
  /* Enable GIC Distributor */
  ICDDCR |= (0x1 << ICDDCR_EN);
  /* Enable GIC CPU0 interface */
  ICCICR |= (0x1 << ICCICR_EN);
}

void initSTM()
{
  // (27.02.2018 - MB) Do not start STM trace before stmInit() is executed!!                                   
  stmInit(gSTM, (struct stmAPB *) PLATFORM_STM_APB_ADDRESS, (struct stmAXI *) PLATFORM_STM_AXI_ADDRESS);
}


void targetEnableInterrupts(void)
{
  /* Write current timer value */
  R7_PTMR_COUNTER = 0x0;   
  /* Enable timer */
  R7_PTMR_CTR |= (0x1 << R7_PTMR_CTR_TE);
  asm("CPSIE i");
}


void targetInit(void)
{
  initINTC();
  initTimer();
  initSTM();
  targetEnableInterrupts();


}


void disableWatchdog()
{
}
