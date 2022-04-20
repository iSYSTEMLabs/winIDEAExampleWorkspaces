#include "MKL25Z4.h"

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

//*****************************************************************************
//
// Forward declaration of the default fault handlers.
//
//*****************************************************************************
void ResetISR(void);
static void NmiSR(void);
static void FaultISR(void);
static void IntDefaultHandler(void);
static void TimerInterruptHandler();

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

//*****************************************************************************
//
// Reserve space for the system stack.
//
//*****************************************************************************
__attribute__ ((section(".stack")))
static unsigned long pulStack[256];

//*****************************************************************************
//
// The minimal vector table for a Cortex M3.  Note that the proper constructs
// must be placed on this to ensure that it ends up at physical address
// 0x0000.0000.
//
//*****************************************************************************
extern void _start();
__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
    (void (*)(void))((unsigned long)pulStack + sizeof(pulStack)),  
                                            // The initial stack pointer
    _start+1,                               // The reset handler
    NmiSR,                                  // The NMI handler
    FaultISR,                               // The hard fault handler
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    IntDefaultHandler,                      // The PendSV handler
    0,                                      // Reserved
    0,                                      // Reserved
    IntDefaultHandler,                      // Pendable request for system service
    IntDefaultHandler,                      // SysTick
    IntDefaultHandler,                      // DMA channel 0 transfer complete
    IntDefaultHandler,                      // DMA channel 1 transfer complete
    IntDefaultHandler,                      // DMA channel 2 transfer complete
    IntDefaultHandler,                      // DMA channel 3 transfer complete
    IntDefaultHandler,                      // OR'ed Interrupt SPI0 and SPI1
    IntDefaultHandler,                      // OR'ed Interrupt of PDB0
    IntDefaultHandler,                      // Low-voltage detect, low-voltage warning
    IntDefaultHandler,                      // TMR0 of Quad Timer
    IntDefaultHandler,                      // TMR1 of Quad Timer
    IntDefaultHandler,                      // TMR2 of Quad Timer
    IntDefaultHandler,                      // TMR3 of Quad Timer
    TimerInterruptHandler,                  // OR'ed Interrupt of PIT0 and PIT1
    IntDefaultHandler,                      // Low Leakage Wakeup
    IntDefaultHandler,                      // OR'ed interrupt for Flash Command Complete/Read collision
    IntDefaultHandler,                      // OR'ed Interrupt of 3 ACMP
    IntDefaultHandler,                      // OR'ed Interrupt of SLCD
    IntDefaultHandler,                      // OR'ed Interrupt from SAR
    IntDefaultHandler,                      // OR'ed Interrupt from all GPIO (PTx) ports
    IntDefaultHandler,                      // OR'ed Interrupt from RNGA
    IntDefaultHandler,                      // OR'ed Interrupt UART0,1,2,3
    IntDefaultHandler,                      // Memory Mapped Arithmetic Unit interrupt
    IntDefaultHandler,                      // AFE Channel 0 OR'ed Interrupt
    IntDefaultHandler,                      // AFE Channel 1 OR'ed Interrupt
    IntDefaultHandler,                      // AFE Channel 2 OR'ed Interrupt
    IntDefaultHandler,                      // AFE Channel 3 OR'ed Interrupt
    IntDefaultHandler,                      // iRTC Interrupt
    IntDefaultHandler,                      // OR'ed I2C interrupt
    IntDefaultHandler,                      // OR'ed Interrupt of LPUART0
    IntDefaultHandler,                      // MCG Loss of Clock, Loss of Lock
    IntDefaultHandler,                      // OR'ed LPTMR Interrupt
    IntDefaultHandler                       // Peripheral XBAR OR'ed Interrupt
};

//*****************************************************************************
//
// The following are constructs created by the linker, indicating where the
// the "data" and "bss" segments reside in memory.  The initializers for the
// for the "data" segment resides immediately following the "text" segment.
//
//*****************************************************************************
extern unsigned long _text;
extern unsigned long _text_end;
extern unsigned long _data;
extern unsigned long _data_end;
extern unsigned long _bss;
extern unsigned long _bss_end;
extern unsigned long _stack_top;
extern void disableWatchdog(void);

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
void ResetISR(void)
{
    disableWatchdog();
    unsigned long *pulSrc, *pulDest;

    register unsigned long stackreg __asm("sp");
    stackreg = (unsigned long)&_stack_top;

    //
    // Copy the data segment initializers from flash to SRAM.
    //
    pulSrc = &_text_end;
    for(pulDest = &_data; pulDest < &_data_end; )
    {
        *pulDest++ = *pulSrc++;
    }

    //
    // Zero fill the bss segment.
    //
    
    for(pulDest = &_bss; pulDest < &_bss_end; )
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

//*****************************************************************************
//
// TIM2 interrupt handler.
//
//*****************************************************************************
extern void InterruptRoutine();

static void TimerInterruptHandler(void){
  InterruptRoutine();
  PIT0_TFLG |= (1 << PIT0_TFLG_TIF);
}


