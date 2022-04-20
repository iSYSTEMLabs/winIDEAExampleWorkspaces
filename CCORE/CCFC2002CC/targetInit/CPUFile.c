#include "CCFC2002CC.h"
#include "lowPowerMode.h"

#define CHECK_BIT(var,pos) ((var) & (1<<(pos)))

#ifdef METROWERKS_2_5_NONSTRIP_DEADCODE
#pragma force_active on
#endif


volatile unsigned char gpioState = 0; 
unsigned int executeInitClock = 0; 


void targetEnableInterrupts()
{
  mem32(INTC_CPR) = 0x0; //Lower INTC's current priority          
  //mem32(TFLG0) = 0x1; //clear PIT interrupt flag
  asm(" wrteei 1"); //Enable external interrupts
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initCPU();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}
void initCPU(void)
{
  initClock();
  initIrqVectors();
  initINTC();
  initPIT();
}

void initIrqVectors(void)
{
  asm("lis 3, __IVPR_VALUE@h");
  asm("ori 3, 3, __IVPR_VALUE@l");
  asm("mtivpr 3"); //Set IVPR from reg3
}

void initINTC(void)
{
  mem32(INTC_MCR) = 0x1; //Hardware Vector enabled   
}

 void initPIT(void)
 {
  /* Enable PIT and configure to stop in debug mode */
  mem32(PITMCR) = 0x00000001;
  /* Timeout= 80000 sysclks x 1sec/80M sysclks (measured with OSC set to 1ms)*/
  mem32(LDVAL1) = 80000;
  /* Enable PIT1 interrupt & start PIT counting */
  mem32(TCTRL1) = 0x000000003; 
  /* PIT 1 interrupt vector with priority 1 */
  mem32(INTC_PSR60_63) = 0x01000000; 
 }


void disableWatchdog()
{
  /* clear soft lock bit */
  SWT_SR = 0x0000c520;
  SWT_SR = 0x0000d928;
  /* clear watchdog enable */
  SWT_CR = 0x8000010A;
}
