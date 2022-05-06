#include "rl78_r5f100lga.h"

#include "ior5f100lg.h"
#include "ior5f100lg_ext.h"

#include "main.h"

/*
 * Portions of code were generated automatically with Renesas Applilet3 and
 * IAR Embedded Workbench for RL78 (4.21.1), and then manually annotated.
 */

void InitClockGenerator(void);
void InitStartTimer(void);


void targetEnableInterrupts()
{
  __enable_interrupt();
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  // Don't forget to check option bytes, defined in rl78_r5f100lga.h
  __disable_interrupt();
  PIOR = 0x00U;          /* Disable peripheral I/O redirection              */
  InitClockGenerator();
  InitStartTimer();
  IAWCTL = 0x00U;        /* Reset invalid memory access detection mechanism */
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog(void)
{
  // Disabled in Option byte 0 (check rl78_r5f100lga.h)
} 

// This function doesn't currently initialize any special clocks. It only keeps
// the high-speed on-chip oscillator running (default at 32 MHz).
void InitClockGenerator(void)
{  
  // Clock operation mode control register:
  //  - use X1, X2 high-speed system clock pins as I/O ports
  //  - use XT1, XT2 subsystem clock pins as I/O ports
  //  - [oscillate XT1 with low power consumption (if XT1 was used)]
  //  - [specify fX1 <= 10MHz (if X1 was used)]
  CMC = _00_CGC_HISYS_PORT | _00_CGC_SUB_PORT | _00_CGC_SUBMODE_DEFAULT | _00_CGC_SYSOSC_DEFAULT;
  
  // System clock control register (CKC):
  MCM0 = 0U;  /* select the high-speed on-chip oscillator clock fIH as the main system clock fMAIN */
  CSS  = 0U;  /* set CPU/peripheral hardware clock fCLK to main system clock fMAIN                 */
  
  // Clock operation status control register (CSC):
  MSTOP   = 1U;  /* Stop oscillator X1                            */
  XTSTOP  = 1U;  /* Stop oscillator XT1                           */
  HIOSTOP = 0U;  /* Do not stop the high-speed on-chip oscillator */
  
  // Subsystem clock supply mode control register (OSMC):
  //  Low-speed on-chip oscillator clock fIL used as count clock
  //  (for RTC, 12-bit interval timer)
  OSMC = _10_CGC_RTC_CLK_FIL;
}


// Start a timer on channel 0 with a 1 ms period
void InitStartTimer(void)
{
  // Supply input clock
  TAU0EN = 1U;
  
  // Timer clock select register 0 (fCLK currently selected)
  TPS0 = _0000_TAU_CKM0_FCLK_0 | _0000_TAU_CKM1_FCLK_0 | _0000_TAU_CKM2_FCLK_1 | _0000_TAU_CKM3_FCLK_8;
  // Stop all channels
  TT0 = _0001_TAU_CH0_STOP_TRG_ON | _0002_TAU_CH1_STOP_TRG_ON | _0004_TAU_CH2_STOP_TRG_ON    |
        _0008_TAU_CH3_STOP_TRG_ON | _0010_TAU_CH4_STOP_TRG_ON | _0020_TAU_CH5_STOP_TRG_ON    |
        _0040_TAU_CH6_STOP_TRG_ON | _0080_TAU_CH7_STOP_TRG_ON | _0200_TAU_CH1_H8_STOP_TRG_ON |
        _0800_TAU_CH3_H8_STOP_TRG_ON;
  // Mask channel 0 interrupt
  TMMK00  = 1U;   /* disable INTTM00 interrupt     */
  TMIF00  = 0U;   /* clear INTTM00 interrupt flag  */
  // Mask channel 1 interrupt (lower + higher 8 bits)
  TMMK01  = 1U;   /* disable INTTM01 interrupt     */
  TMIF01  = 0U;   /* clear INTTM01 interrupt flag  */
  TMMK01H = 1U;   /* disable INTTM01H interrupt    */
  TMIF01H = 0U;   /* clear INTTM01H interrupt flag */
  // Mask channel 2 interrupt
  TMMK02  = 1U;
  TMIF02  = 0U;
  // Mask channel 3 interrupt (lower + higher 8 bits)
  TMMK03  = 1U;
  TMIF03  = 0U;
  TMMK03H = 1U;
  TMIF03H = 0U;
  // Mask channel 4-7 interrupts
  TMMK04  = 1U;
  TMIF04  = 0U;
  TMMK05  = 1U;
  TMIF05  = 0U;
  TMMK06  = 1U;
  TMIF06  = 0U;
  TMMK07  = 1U;
  TMIF07  = 0U;
  
  // Set INTTM00 low priority
  TMPR100 = 1U;
  TMPR000 = 1U;
  
  // Channel 0 used as interval timer
  TMR00 = _0000_TAU_CLOCK_SELECT_CKM0 | _0000_TAU_CLOCK_MODE_CKS      | _0000_TAU_COMBINATION_SLAVE |
          _0000_TAU_TRIGGER_SOFTWARE  | _0000_TAU_MODE_INTERVAL_TIMER | _0000_TAU_START_INT_UNUSED;
  TDR00 = _7CFF_TAU_TDR00_VALUE;
  TO0  &= ~_0001_TAU_CH0_OUTPUT_VALUE_1;
  TOE0 &= ~_0001_TAU_CH0_OUTPUT_ENABLE;
  
  // Start timer channel 0
  TMIF00 = 0U;    /* clear INTTM00 interrupt flag */
  TMMK00 = 0U;    /* enable INTTM00 interrupt     */
  TS0   |= _0001_TAU_CH0_START_TRG_ON;
}

// Channel 0 interrupt routine
#pragma vector = INTTM00_vect
__interrupt static void TimerInterruptHandler(void)
{
  __disable_interrupt();
  InterruptRoutine();
  __enable_interrupt();
}