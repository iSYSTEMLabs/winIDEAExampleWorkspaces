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

#include "VectM.h" 
#include "MSP432.h"
//*****************************************************************************
//
// The entry point for the application.
//
//*****************************************************************************
extern int main(void);
extern void InterruptRoutine();

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

#ifdef IMMEDIATE_INIT
void ImmInit();
#endif

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
  call_main();
}

// needed for HWBP test
int call_main(void)
{
    main();
}

//*****************************************************************************
//
// This is the code that gets called when the processor receives a NMI.  This
// simply enters an infinite loop, preserving the system state for examination
// by a debugger.
//
//*****************************************************************************
void NmiSR(void)
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
void FaultISR(void)
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
void IntDefaultHandler(void)
{
    //
    // Go into an infinite loop.
    //
    while(1)
    {
    }
}

void TimerInterruptHandler()
{
  short dummy;
  dummy = TA0IV;      //Release pending interrupt flag.  
  InterruptRoutine();  
}

__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
    (void (*)(void))(&_stack_top),
    ResetISR,               //Reset 0x0000_0004
    NmiSR,                  //NMI 0x0000_0008
    FaultISR,               //HardFault 0x0000_000C
    IntDefaultHandler,      //MemManage 0x0000_0010
    IntDefaultHandler,      //BusFault 0x0000_0014
    IntDefaultHandler,      //UsageFault 0x0000_0018
    0,                      //Reserved 0x0000_001C                                             
    0,                      //Reserved 0x0000_0020
    0,                      //Reserved 0x0000_0024
    0,                      //Reserved 0x0000_0028
    IntDefaultHandler,      //SVCall 0x0000_002C
    IntDefaultHandler,      //Debug Monitor 0x0000_0030
    0,                      //Reserved 0x0000_0034
    IntDefaultHandler,      //PendSV 0x0000_0038
    IntDefaultHandler,      //SysTick 0x0000_003C 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler,       
    IntDefaultHandler,       
    TimerInterruptHandler,  // 0x9
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler,//TimerInterruptHandler
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler, 
    IntDefaultHandler,
};



