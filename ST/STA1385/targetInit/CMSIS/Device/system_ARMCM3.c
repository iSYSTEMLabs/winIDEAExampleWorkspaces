/**************************************************************************//**
 * @file     system_ARMCM3.c
 * @brief    CMSIS Device System Source File for
 *           ARMCM3 Device Series
 * @version  V5.00
 * @date     07. September 2016
 ******************************************************************************/
/*
 * Copyright (c) 2009-2016 ARM Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "ARMCM3.h"
#include "STA1385_CM3.h"
/*----------------------------------------------------------------------------
  Define clocks
 *----------------------------------------------------------------------------*/
#define  XTAL            ( 5000000UL)      /* Oscillator frequency */

#define  SYSTEM_CLOCK    (5U * XTAL)

extern void InterruptRoutine();

/*----------------------------------------------------------------------------
  Externals
 *----------------------------------------------------------------------------*/
#if defined (__VTOR_PRESENT) && (__VTOR_PRESENT == 1U)
  extern uint32_t __Vectors;
#endif

/*----------------------------------------------------------------------------
  System Core Clock Variable
 *----------------------------------------------------------------------------*/
uint32_t SystemCoreClock = SYSTEM_CLOCK;


/*----------------------------------------------------------------------------
  System Core Clock update function
 *----------------------------------------------------------------------------*/
void SystemCoreClockUpdate (void)
{
  SystemCoreClock = SYSTEM_CLOCK;
}

extern unsigned long __StackTop;
extern unsigned long _text;
extern unsigned long __etext;
extern unsigned long _sdata;
extern unsigned long _edata;
extern unsigned long _sbss;
extern unsigned long _ebss;

/*----------------------------------------------------------------------------
  System initialization function
 *----------------------------------------------------------------------------*/
void SystemInit (void)
{

#if defined (__VTOR_PRESENT) && (__VTOR_PRESENT == 1U)
  SCB->VTOR = (uint32_t) &__Vectors + 4;
#endif

  SystemCoreClock = SYSTEM_CLOCK;
  
  unsigned long *pulSrc, *pulDest;

  register unsigned long stackreg __asm("sp");
  stackreg = (unsigned long)&__StackTop;

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
}

void TimerInterruptHandler(void)
{
  /*Stop the timer counter*/
  MTU0_T0CR &= ~(1 << TEN);
  /*Reset the counter value*/
  MTU0_T0LR = 0xCB2;
  /*Clear all interrupts*/
  MTU0_IMSC = 0x00000000;
  MTU0_ICR = 1 << T0IC;
  InterruptRoutine();
  /*Set an interrupt on the timer0*/
  MTU0_IMSC = 0x01 << T0IM; 
  /*Start the timer*/
  MTU0_T0CR |= (1 << TEN);
}