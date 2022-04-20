 //*****************************************************************************
//
// startup_gcc.c - Startup code for use with GNU tools.
//
// Copyright (c) 2006-2007 Luminary Micro, Inc.  All rights reserved.
// 
// Software License Agreement
// 
// Luminary Micro, Inc. (LMI) is supplying this software for use solely and
// exclusively on LMI's microcontroller products.
// 
// The software is owned by LMI and/or its suppliers, and is protected under
// applicable copyright laws.  All rights are reserved.  Any use in violation
// of the foregoing restrictions may subject the user to criminal sanctions
// under applicable laws, as well as to civil liability for the breach of the
// terms and conditions of this license.
// 
// THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
// OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
// LMI SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR
// CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 1427 of the Stellaris Peripheral Driver Library.
//
//*****************************************************************************

#include "Types.h"
#include "ATSAMD.h"
#include "SAMD21.h"
#include "SAMD21_sfr.h"
//*****************************************************************************
//
// Forward declaration of the default fault handlers.
//
//*****************************************************************************
void ResetISR(void);
static void NmiSR(void);
static void FaultISR(void);
static void IntDefaultHandler(void);
static void TimerInterruptHandler(void);


//*****************************************************************************
//
// External declaration for the interrupt handler used by the application.
//
//*****************************************************************************
extern void ADCIntHandler(void);

//*****************************************************************************
//
// The entry point for the application.
//
//*****************************************************************************
extern int main(void);
extern void InterruptRoutine(void);

//*****************************************************************************
//
// Reserve space for the system stack.
//
//*****************************************************************************
extern unsigned long _stack_top;

//*****************************************************************************
//
// The minimal vector table for a Cortex M0+.  Note that the proper constructs
// must be placed on this to ensure that it ends up at physical address
// 0x0000.0000.
//
//*****************************************************************************
__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
    /*------------------------------------------------------------------------------------*/
    /* http://infocenter.arm.com/help/index.jsp?topic=/com.arm.doc.dui0662b/BABEDCBC.html */
    /* The Cortex-M0+ Processor > Exception model > Vector table                          */
    /*----------------------------------------------------------------------------------- */
    (void (*)(void))(&_stack_top),          // 0x00 The initial stack pointer
    ResetISR,                               // 0x04 The reset handler     
    NmiSR,                                  // 0x08 The NMI handler
    FaultISR,                               // 0x0C The hard fault handler
    0,                                      // 0x10 The MPU fault handler   -- NOT used on M0+ Cortex 
    0,                                      // 0x14 The bus fault handler   -- NOT used on M0+ Cortex
    0,                                      // 0x18 The usage fault handler -- NOT used on M0+ Cortex
    0,                                      // 0x1C Reserved
    0,                                      // 0x20 Reserved
    0,                                      // 0x24 Reserved
    0,                                      // 0x28 Reserved
    IntDefaultHandler,                      // 0x2C SVCall handler
    0,                                      // 0x30 Debug monitor handler  -- NOT used on M0+ Cortex
    0,                                      // 0x34 Reserved
    IntDefaultHandler,                      // 0x38 The PendSV handler
    IntDefaultHandler,                      // 0x3C The SysTick handler if implemented 
    /*------------------------------------------------------------------------------------*/
    /* Device specific vector table IRQ0, IRQ1, ...,IRQn , taken from datasheet                                 */
    /* ATSAMD21G18, 32-Bit ARM Cortex M0+ (ARMv6 Architecture)                            */
    /*----------------------------------------------------------------------------------- */    
    IntDefaultHandler,                      // 0  PM      – Power Manager
    IntDefaultHandler,                      // 1  SYSCTRL – System Control
    IntDefaultHandler,                      // 2  WDT     - Watchdog
    IntDefaultHandler,                      // 3  RTC     - Real Time Counter
    IntDefaultHandler,                      // 4  EIC     - External Interrupt Controlle
    IntDefaultHandler,                      // 5  NVMCTRL – Non-Volatile Memory Controller
    IntDefaultHandler,                      // 6  DMAC    - Direct Memory Access Controller
    IntDefaultHandler,                      // 7  USB     - Universal Serial Bus
    IntDefaultHandler,                      // 8  EVSYS   – Event System
    IntDefaultHandler,                      // 9  SERCOM0 – Serial Communication Interface 0
    IntDefaultHandler,                      // 10 SERCOM1 – Serial Communication Interface 1
    IntDefaultHandler,                      // 11 SERCOM2 – Serial Communication Interface 2
    IntDefaultHandler,                      // 12 SERCOM3 – Serial Communication Interface 3
    IntDefaultHandler,                      // 13 SERCOM4 – Serial Communication Interface 4
    IntDefaultHandler,                      // 14 SERCOM5 – Serial Communication Interface 5
    IntDefaultHandler,                      // 15 TCC0    – Timer Counter for Control 0
    IntDefaultHandler,                      // 16 TCC1    – Timer Counter for Control 1
    IntDefaultHandler,                      // 17 TCC2    – Timer Counter for Control 2
    IntDefaultHandler,                      // 18 TC3     – Timer Counter 3
    TimerInterruptHandler,                  // 19 TC4     – Timer Counter 4
    IntDefaultHandler,                      // 20 TC5     – Timer Counter 5
    IntDefaultHandler,                      // 21 TC6     – Timer Counter 6
    IntDefaultHandler,                      // 22 TC7     – Timer Counter 7
    IntDefaultHandler,                      // 23 ADC     – Analog-to-Digital Converter
    IntDefaultHandler,                      // 24 AC      – Analog Comparato
    IntDefaultHandler,                      // 25 DAC     – Digital-to-Analog Converte
    IntDefaultHandler,                      // 26 PTC     – Peripheral Touch Controller
    IntDefaultHandler,                      // 27 I2S     - Inter IC Sound
    IntDefaultHandler                       // 28 AC1     - Analog Comparator 1
};

//*****************************************************************************
//
// The following are constructs created by the linker, indicating where the
// the "data" and "bss" segments reside in memory.  The initializers for the
// for the "data" segment resides immediately following the "text" segment.
//
//*****************************************************************************
extern unsigned long _text;
extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;
extern unsigned long _stack_top;

//*****************************************************************************
//
// This is the code that gets called when the processor first starts execution
// following a reset event.  Only the absolutely necessary set is performed,
// after which the application supplied entry() routine is called.  Any fancy
// actions (such as making decisions based on the reset cause register, and
// resetting the bits in that register) are left solely in the hands of the
// application.
//
//*****************************************************************************

BYTE g_byWDTCTRL = 0;        // save state of watchdog

void ResetISR(void)
{
  __asm__("ldr R0, =_stack_top");
  __asm__("mov sp, R0");
  
  // Disable watchdog
  __asm__("cpsid i"); //disable interrupts
  g_byWDTCTRL = WDT_CTRL_REG;
  // Make sure to clear possible write protection on WDT
  if((PAC0_WPCLR_REG & PAC0_WDT_MASK) > 0)   // unprotecting already unprotected peripheral will return CPU exception
  {
    PAC0_WPCLR_REG = PAC0_WDT_MASK;
  }
  if((WDT_CTRL_REG & WDT_CTRL_ALWAYSON_MASK) == 0)   // Watch dog is ALWAYS on. Do not disable as this will generate an interrupt!!
  {
    WDT_CTRL_REG = WDT_CTRL_DISABLE;
    WDT_INTFLAG_REG = 0;
  }
  __asm__("cpsie i"); //enable interrupts
  
  unsigned long *pulSrc, *pulDest;

//     register unsigned long stackreg __asm("sp");
//     stackreg = (unsigned long)&_stack_top;

  //
  // Copy the data segment initializers from flash to SRAM.
  //
  pulSrc = &_etext;
  for(pulDest = &_data; pulDest < &_edata; )
  {
      *pulDest++ = *pulSrc++;
  }

  //
  // Zero fill the bss segment.
  //
  for(pulDest = &_bss; pulDest < &_ebss; )
  {
      *pulDest++ = 0;
  }
   
  
  //
  // Call the application's entry point.
  //
  main();
}

//*****************************************************************************
//
// This is the code that gets called when the processor receives a NMI.  This
// simply enters an infinite loop, preserving the system state for examination
// by a debugger.
//
//*****************************************************************************
static void NmiSR(void)
{
    //
    // Enter an infinite loop.
    //
    while(1)
    {
    }
}

//*****************************************************************************
//
// This is the code that gets called when the processor receives a fault
// interrupt.  This simply enters an infinite loop, preserving the system state
// for examination by a debugger.
//
//*****************************************************************************
static void FaultISR(void)
{
    //
    // Enter an infinite loop.
    //
    while(1)
    {
    }
}

//*****************************************************************************
//
// This is the code that gets called when the processor receives an unexpected
// interrupt.  This simply enters an infinite loop, preserving the system state
// for examination by a debugger.
//
//*****************************************************************************
static void IntDefaultHandler(void)
{
   
    //
    // Go into an infinite loop.
    //
    while(1)
    {
    }
}

static void TimerInterruptHandler(void)
{
  if(TC4_TC_COUNT32.TC_INTFLAG.B.MC0 == 1 )
   {
     TC4_TC_COUNT32.TC_INTFLAG.B.MC0 = 1 ;
   }

   InterruptRoutine();
}
