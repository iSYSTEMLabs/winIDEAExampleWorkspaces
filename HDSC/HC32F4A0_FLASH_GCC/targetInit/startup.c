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

#include "main.h"
#include "hc32f4a0.h"
                                                   
#define PWR_CSR *(volatile unsigned int *)0x40007004
#define CHECK_BIT(var,pos) ((var & (1 << pos)) == (1 << pos))
//*****************************************************************************
//
// Forward declaration of the default fault handlers.
//
//*****************************************************************************
void ResetISR(void);
static void NmiSR(void);
static void FaultISR(void);
static void IntDefaultHandler(void);
static void IntSystickHandler(void);
static void TimerInterruptHandler(void);
static void TIM10_Handler(void);

//*****************************************************************************
//
// External declaration for the interrupt handler used by the application.
//
//*****************************************************************************
extern unsigned long _estack;

//*****************************************************************************
//
// The entry point for the application.
//
//*****************************************************************************
extern int main(void);

//*****************************************************************************
//
// The minimal vector table for a Cortex M3.  Note that the proper constructs
// must be placed on this to ensure that it ends up at physical address
// 0x0000.0000.
//
// NOTE: The stack pointer is always initialized with the value from address 0.
// If this project is in RAM, the first value from this table will not be the
// one used to initialize the stack pointer, since it is not at address 0.
// To initialize stack pointer, winIDEA initialization sequence must be used
// in emulation options and must initialize the stack pointer to the top of stack
// which is the first value from this vector table. To get the proper value,
// perform a download and inspect the first downloaded value in the g_pfnVectors.
// It should be something like 0x20001038.
//
//*****************************************************************************
__attribute__ ((section(".vectors")))
void (* const g_pfnVectors[])(void) =
{
    (void (*)(void))(&_estack),
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
    IntSystickHandler,      //SysTick 0x0000_003C
    
    /* 
      The HC32F4A0 allows assigning any system event to the first 32 NVIC interrupts.
      In this case, NVIC interrupt 0 is set to the Compare Match Event A on Timer 0_1.
    */
    
    TimerInterruptHandler,  
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
//*****************************************************************************
//
// The following are constructs created by the linker, indicating where the
// the "data" and "bss" segments reside in memory.  The initializers for the
// for the "data" segment resides immediately following the "text" segment.
//
//*****************************************************************************
extern unsigned long _text;
extern unsigned long __etext;
extern unsigned long _sdata;
extern unsigned long _edata;
extern unsigned long _sbss;
extern unsigned long _ebss;

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
void ResetISR(void) __attribute__ ( ( naked ) );
void ResetISR(void)
{     
  unsigned long *pulSrc, *pulDest;

  register unsigned long stackreg __asm("sp");
  stackreg = (unsigned long)&_estack;

  //
  // Copy the data segment initializers from flash to SRAM.
  //
  pulSrc = &__etext;
  for(pulDest = &_sdata; pulDest < &_edata; )
  {
      *pulDest++ = *pulSrc++;
  }

  //
  // Zero fill the bss segment.
  //
  for(pulDest = &_sbss; pulDest < &_ebss; )
  {
      *pulDest++ = 0;
  }

  //
  // Call the application's entry point.
  //
  main();
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
__attribute__( ( naked ) )  
static void IntDefaultHandler(void)
{  
  while (1);
}  


static void IntSystickHandler(void)
{
	
}

// TIM 0_1 interrupt

void TimerInterruptHandler(void)
{
  InterruptRoutine();
}