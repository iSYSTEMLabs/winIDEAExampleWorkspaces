#include "TriCore.h"


int iInterruptCounter1=0;
int iInterruptCounter10 = 0;
int iInterruptCounter100 = 0;   
int maxInterruptCount = 100;

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

void toggleGPIO_DIN0()
{
  P00_OUT ^= (1<<0);
}

void toggleGPIO_DIN1()
{
  P00_OUT ^= (1<<1);
}


#define STM_INT0 0x5
void __interrupt(STM_INT0) 
TimerInterruptHandler(void)
{
  if(STM_ICR & (0x1 << STM_ICR_CMP0IR))
  {                         
    STM_ISCR |= (0x1 << STM_ISCR_CMP0IRR);
    InterruptRoutine();
  }
  if(STM_ICR & (0x1 << STM_ICR_CMP1IR))                        
    STM_ISCR |= (0x1 << STM_ISCR_CMP1IRR); 
}

/*
  Init STM timer, period is 1.26 ms
*/
void initSTM()
{                       
  /* Timer compares MSIZE + 1 bits from bit MSTART up */
  STM_CMCON |= (0x1 << STM_CMCON_MSTART0);
  STM_CMCON |= (0xF << STM_CMCON_MSIZE0);
  STM_ICR |= (0x1 << STM_ICR_CMP0EN); 
  STM_ISCR |= (0x1 << STM_ISCR_CMP0IRR);
  
  SRC_STM0SR0 = 0x02000000;  // clear interrupt request
  SRC_STM0SR0 = 0x00000405;  // set service request control register
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
  STM_ISCR |= (0x1 << STM_ISCR_CMP0IRR);
}


/*void enableSecondCore()
{
  int dwDBSR1=meml(DBGSR1);
  dwDBSR1&= DBGSR_MASK_HALT;
  dwDBSR1|= DBGSR_SET_RUN;
  dwDBSR1&=~DBGSR_SUSPEND;
  meml(DBGSR1)=dwDBSR1; //run
}         */


void setupSecondCore()
{
  /* Core Debug Controller (CDC) config needed for CPU2 to be in running state after targetInit function. */
  int dwDBSR1;
  
  dwDBSR1 = meml(DBGSR1);
  dwDBSR1 &= DBGSR_MASK_HALT;
  dwDBSR1 |= DBGSR_SET_RUN;
  dwDBSR1 &= ~DBGSR_SUSPEND;
  
  meml(PC1)=0xA0001000; //set 2nd core program counter  
  
  meml(DBGSR1)=dwDBSR1;
}

/*
  Init clock to 200 Mhz (max), 20 MHz ext. osc.
*/
void initClock()
{                
  /* Set up clock dividers and ext. osc. as input clock */  
  SCU_CCUCON1 = 0x52102212; 
  /* Set up PLL (P = 1; N = 10; K2 = 1) */
  SCU_PLLCON0 |= (0x1 << SCU_PLLCON0_SETFINDIS_BIT);  
  SCU_PLLCON0 = 0x00011210;    
  SCU_PLLCON0 |= (0x1 << SCU_PLLCON0_CLRFINDIS_BIT); 
  SCU_PLLCON1 &= ~(0x3F << SCU_PLLCON1_K2DIV); 
  /* Set up clock dividers */
  SCU_CCUCON0 = 0x52120112;  
  /* Wait for PLL clock to become stable */
  while((SCU_PLLSTAT & (1<<SCU_PLLSTAT_VCOLOCK_BIT)) == 0);
}

void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  disable_watchdog();
  setupSecondCore(); 
  initSTM();               
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog(void)
{
  // Watchdog must be disabled after clock switch.
  
}
