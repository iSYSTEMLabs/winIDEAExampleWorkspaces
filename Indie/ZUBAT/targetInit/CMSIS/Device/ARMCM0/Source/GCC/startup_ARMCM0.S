/**************************************************************************//**
 * @file     startup_ARMCM0.s
 * @brief    CMSIS Core Device Startup File for
 *           ARMCM0 Device Series
 * @version  V5.00
 * @date     02. March 2016
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

	.syntax	unified
	.arch	armv6-m

	.section .stack
	.align	3
#ifdef __STACK_SIZE
	.equ	Stack_Size, __STACK_SIZE
#else
	.equ	Stack_Size, 0x00000400
#endif
	.globl	__StackTop
	.globl	__StackLimit
__StackLimit:
	.space	Stack_Size
	.size	__StackLimit, . - __StackLimit
__StackTop:
	.size	__StackTop, . - __StackTop

	.section .heap
	.align	3
#ifdef __HEAP_SIZE
	.equ	Heap_Size, __HEAP_SIZE
#else
	.equ	Heap_Size, 0x00000C00
#endif
	.globl	__HeapBase
	.globl	__HeapLimit
__HeapBase:
	.if	Heap_Size
	.space	Heap_Size
	.endif
	.size	__HeapBase, . - __HeapBase
__HeapLimit:
	.size	__HeapLimit, . - __HeapLimit

	.section .vectors
	.align 2
	.globl	__Vectors
__Vectors:
	.long	__StackTop            /* Top of Stack           0x00000   */
	.long	Reset_Handler         /* Reset Handler          0x00004   */
	.long	0                     /* Reserved               0x00008   */
	.long	HardFault_Handler     /* Hard Fault Handler     0x0000C   */
	.long	0                     /* Reserved               0x00010   */
	.long	0                     /* Reserved               0x00014   */
	.long	0                     /* Reserved               0x00018   */
	.long	0                     /* Reserved               0x0001C   */
	.long	0                     /* Reserved               0x00020   */
	.long	0                     /* Reserved               0x00024   */
	.long	0                     /* Reserved               0x00028   */
	.long	SVC_Handler           /* SVCall Handler         0x0002C   */
	.long	0                     /* Reserved               0x00030   */
	.long	0                     /* Reserved               0x00034   */
	.long	PendSV_Handler        /* PendSV Handler         0x00038   */
	.long	SysTick_Handler       /* SysTick Handler        0x0003C   */

	/* External interrupts      */
	.long	IRQ00_IRQn            /*  0:  Product specific  0x00040   */
	.long	IRQ01_IRQn            /*  1:  Product specific  0x00044   */
	.long	IRQ02_IRQn            /*  2:  Product specific  0x00048   */
	.long	IRQ03_IRQn            /*  3:  Product specific  0x0004C   */
	.long	IRQ04_IRQn            /*  4:  Product specific  0x00050   */
	.long	IRQ05_IRQn            /*  5:  Product specific  0x00054   */
	.long	IRQ06_IRQn            /*  6:  Product specific  0x00058   */
	.long	IRQ07_IRQn            /*  7:  Product specific  0x0005C   */
	.long	IRQ08_IRQn            /*  8:  Product specific  0x00060   */
	.long	IRQ09_IRQn            /*  9:  Product specific  0x00064   */
	.long	IRQ10_IRQn            /* 10:  Product specific  0x00068   */
	.long	IRQ11_IRQn            /* 11:  Product specific  0x0006C   */
	.long	IRQ12_IRQn            /* 12:  Product specific  0x00070   */
	.long	IRQ13_IRQn            /* 13:  Product specific  0x00074   */
	.long	IRQ14_IRQn            /* 14:  Product specific  0x00078   */
	.long	IRQ15_IRQn            /* 15:  Product specific  0x0007C   */
	.long	TIMER0_IRQn           /* 16:  Timer0_Handler    0x00080   */
	.long	TIMER1_IRQn           /* 17:  Timer1_Handler    0x00084   */
	.long	TIMER2_IRQn           /* 18:  Timer2_Handler    0x00088   */
	.long	WATCHDOG_IRQn         /* 19:  Watchdog_Handler  0x0008C   */
	.long	BTE_IRQn              /* 20:  BTE_Handler       0x00090   */
	.long	SDIO_IRQn             /* 21:  Reserved          0x00094   */

	.size	__Vectors, . - __Vectors

	.text
	.thumb
	.thumb_func
	.align	1
	.globl	Reset_Handler
	.type	Reset_Handler, %function
Reset_Handler:

#ifdef RAM_EXEC
/*Set up stack pointer to point to end of SRAM*/
  ldr r0, =__stack
  mov sp, r0
#endif

/*  Firstly it copies data from read only memory to RAM. There are two schemes
 *  to copy. One can copy more than one sections. Another can only copy
 *  one section.  The former scheme needs more instructions and read-only
 *  data to implement than the latter.
 *  Macro __STARTUP_COPY_MULTIPLE is used to choose between two schemes.  */

#ifdef __STARTUP_COPY_MULTIPLE
/*  Multiple sections scheme.
 *
 *  Between symbol address __copy_table_start__ and __copy_table_end__,
 *  there are array of triplets, each of which specify:
 *    offset 0: LMA of start of a section to copy from
 *    offset 4: VMA of start of a section to copy to
 *    offset 8: size of the section to copy. Must be multiply of 4
 *
 *  All addresses must be aligned to 4 bytes boundary.
 */
	ldr	r4, =__copy_table_start__
	ldr	r5, =__copy_table_end__

.L_loop0:
	cmp	r4, r5
	bge	.L_loop0_done
	ldr	r1, [r4]
	ldr	r2, [r4, #4]
	ldr	r3, [r4, #8]

.L_loop0_0:
	subs	r3, #4
	blt	.L_loop0_0_done
	ldr	r0, [r1, r3]
	str	r0, [r2, r3]
	b	.L_loop0_0

.L_loop0_0_done:
	adds	r4, #12
	b	.L_loop0

.L_loop0_done:
#else
/*  Single section scheme.
 *
 *  The ranges of copy from/to are specified by following symbols
 *    __etext: LMA of start of the section to copy from. Usually end of text
 *    __data_start__: VMA of start of the section to copy to
 *    __data_end__: VMA of end of the section to copy to
 *
 *  All addresses must be aligned to 4 bytes boundary.
 */
	ldr	r1, =__etext
	ldr	r2, =__data_start__
	ldr	r3, =__data_end__

	subs	r3, r2
	ble	.L_loop1_done

.L_loop1:
	subs	r3, #4
	ldr	r0, [r1,r3]
	str	r0, [r2,r3]
	bgt	.L_loop1

#define __STARTUP_CLEAR_BSS
.L_loop1_done:
#endif /*__STARTUP_COPY_MULTIPLE */

/*  This part of work usually is done in C library startup code. Otherwise,
 *  define this macro to enable it in this startup.
 *
 *  There are two schemes too. One can clear multiple BSS sections. Another
 *  can only clear one section. The former is more size expensive than the
 *  latter.
 *
 *  Define macro __STARTUP_CLEAR_BSS_MULTIPLE to choose the former.
 *  Otherwise efine macro __STARTUP_CLEAR_BSS to choose the later.
 */
#ifdef __STARTUP_CLEAR_BSS_MULTIPLE
/*  Multiple sections scheme.
 *
 *  Between symbol address __copy_table_start__ and __copy_table_end__,
 *  there are array of tuples specifying:
 *    offset 0: Start of a BSS section
 *    offset 4: Size of this BSS section. Must be multiply of 4
 */
	ldr	r3, =__zero_table_start__
	ldr	r4, =__zero_table_end__

.L_loop2:
	cmp	r3, r4
	bge	.L_loop2_done
	ldr	r1, [r3]
	ldr	r2, [r3, #4]
	movs	r0, 0

.L_loop2_0:
	subs	r2, #4
	blt	.L_loop2_0_done
	str	r0, [r1, r2]
	b	.L_loop2_0
.L_loop2_0_done:

	adds	r3, #8
	b	.L_loop2
.L_loop2_done:
#elif defined (__STARTUP_CLEAR_BSS)
/*  Single BSS section scheme.
 *
 *  The BSS section is specified by following symbols
 *    __bss_start__: start of the BSS section.
 *    __bss_end__: end of the BSS section.
 *
 *  Both addresses must be aligned to 4 bytes boundary.
 */
	ldr	r1, =__bss_start__
	ldr	r2, =__bss_end__

	movs	r0, 0

	subs	r2, r1
	ble	.L_loop3_done

.L_loop3:
	subs	r2, #4
	str	r0, [r1, r2]
	bgt	.L_loop3
.L_loop3_done:
#endif /* __STARTUP_CLEAR_BSS_MULTIPLE || __STARTUP_CLEAR_BSS */

#ifndef __NO_SYSTEM_INIT
	bl	SystemInit
#endif

.globl hardReset
bl hardReset

#ifndef __START
#define __START main
#endif
	bl	__START

	.pool
	.size	Reset_Handler, . - Reset_Handler

	.align	1
	.thumb_func
	.weak	Default_Handler
	.type	Default_Handler, %function
Default_Handler:
	b	.
	.size	Default_Handler, . - Default_Handler

/*    Macro to define default handlers. Default handler
 *    will be weak symbol and just dead loops. They can be
 *    overwritten by other handlers */
	.macro	def_irq_handler	handler_name
	.weak	\handler_name
	.set	\handler_name, Default_Handler
	.endm

  .global TimerInterruptHandler
	.macro	tim_handler	handler_name
	.weak	\handler_name
	.set	\handler_name, TimerInterruptHandler
	.endm

	def_irq_handler	NMI_Handler
	def_irq_handler	HardFault_Handler
	def_irq_handler	SVC_Handler
	def_irq_handler	PendSV_Handler
	def_irq_handler	SysTick_Handler

  def_irq_handler	IRQ00_IRQn
  def_irq_handler	IRQ01_IRQn
  def_irq_handler	IRQ02_IRQn
  def_irq_handler	IRQ03_IRQn
  def_irq_handler	IRQ04_IRQn
  def_irq_handler	IRQ05_IRQn
  def_irq_handler	IRQ06_IRQn
  def_irq_handler	IRQ07_IRQn
  def_irq_handler	IRQ08_IRQn
  def_irq_handler	IRQ09_IRQn
  def_irq_handler	IRQ10_IRQn
  def_irq_handler	IRQ11_IRQn
  def_irq_handler	IRQ12_IRQn
  def_irq_handler	IRQ13_IRQn
  def_irq_handler	IRQ14_IRQn
  def_irq_handler	IRQ15_IRQn
  tim_handler	TIMER0_IRQn
  def_irq_handler	TIMER1_IRQn
  def_irq_handler	TIMER2_IRQn
  def_irq_handler	WATCHDOG_IRQn
  def_irq_handler	BTE_IRQn
  def_irq_handler	SDIO_IRQn
	.end
