#ifndef STARTUP_H
#define STARTUP_H

/* Interrupt and Exception number definitions */
typedef enum IRQn
{
  /************************************************************************************************/
  // TODO: Copy exception numbers from \CMSIS\ARM\ X CORE \Include\ ARMCMx.h file
  /************************************************************************************************/
  NonMaskableInt_IRQn     = -14,     /*  2 Non Maskable Interrupt */
  HardFault_IRQn          = -13,     /*  3 HardFault Interrupt */
  MemoryManagement_IRQn   = -12,     /*  4 Memory Management Interrupt */
  BusFault_IRQn           = -11,     /*  5 Bus Fault Interrupt */
  UsageFault_IRQn         = -10,     /*  6 Usage Fault Interrupt */
  SVCall_IRQn             =  -5,     /* 11 SV Call Interrupt */
  DebugMonitor_IRQn       =  -4,     /* 12 Debug Monitor Interrupt */
  PendSV_IRQn             =  -2,     /* 14 Pend SV Interrupt */
  SysTick_IRQn            =  -1,     /* 15 System Tick Interrupt */
  
  /************************************************************************************************/
  // TODO: Define target-specific interrupt numbers here
  /************************************************************************************************/
  TPM0_IRQn               =  17 /*  17 - TPM0       */
} IRQn_Type;

/**************************************************************************************************/
// TODO: Configuration of Core Peripherals
/**************************************************************************************************/
#define __CM4_REV                 0x0001U   /* Core revision r0p1 */
#define __MPU_PRESENT             1U        /* MPU present */
#define __VTOR_PRESENT            1U        /* VTOR present */
#define __NVIC_PRIO_BITS          3U        /* Number of Bits used for Priority Levels */
#define __Vendor_SysTickConfig    0U        /* Set to 1 if different SysTick Config is used */
#define __FPU_PRESENT             1U        /* no FPU present */

/**************************************************************************************************/
// TODO: Configuration of Core Peripherals
/**************************************************************************************************/
#include "core_cm4.h"

void systemInit(void);

#endif
