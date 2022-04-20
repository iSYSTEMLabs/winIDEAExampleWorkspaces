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

//*****************************************************************************
//
// External declaration for the interrupt handler used by the application.
//
//*****************************************************************************
extern void ADCIntHandler(void);
extern void TimerInterruptHandler(void);

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
                                            // 0000 The initial stack pointer
    ResetISR,                               // 0004 The reset handler
    NmiSR,                                  // 0008 The NMI handler
    FaultISR,                               // 000C The hard fault handler
    0,                                      // 0010 Reserved
    0,                                      // 0014 Reserved
    0,                                      // 0018 Reserved
    0,                                      // 001C Reserved
    0,                                      // 0020 Reserved
    0,                                      // 0024 Reserved
    0,                                      // 0028 Reserved
    IntDefaultHandler,                      // 002C SVCall handler
    0,                                      // 0030 Reserved
    0,                                      // 0034 Reserved
    IntDefaultHandler,                      // 0038 
    IntDefaultHandler,                      // 003C 
    IntDefaultHandler,                      // 0040 
    IntDefaultHandler,                      // 0044 
    0,                                      // 0048 Reserved
    0,                                      // 004C Reserved
    IntDefaultHandler,                      // 0050 
    IntDefaultHandler,                      // 0054 
    IntDefaultHandler,                      // 0058 
    IntDefaultHandler,                      // 005C 
    0,                                      // 0060 Reserved
    0,                                      // 0064 Reserved
    0,                                      // 0068 Reserved
    0,                                      // 006C Reserved
    0,                                      // 0070 Reserved
    IntDefaultHandler,                      // 0074 
    IntDefaultHandler,                      // 0078 
    IntDefaultHandler,                      // 007C 
    0,                                      // 0080 Reserved
    TimerInterruptHandler,                  // 0084 Timer1 A interrupt 
    IntDefaultHandler,                      // 0088 
    IntDefaultHandler,                      // 008C 
    IntDefaultHandler,                      // 0090 
    IntDefaultHandler,                      // 0094 
    0,                                      // 0098 Reserved
    IntDefaultHandler,                      // 009C 
    0,                                      // 00A0 Reserved
    0,                                      // 00A4 Reserved
    0,                                      // 00A8 Reserved
    0,                                      // 00AC Reserved
    0,                                      // 00B0 Reserved
    0,                                      // 00B4 Reserved
    0,                                      // 00B8 Reserved
    0,                                      // 00BC Reserved
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
