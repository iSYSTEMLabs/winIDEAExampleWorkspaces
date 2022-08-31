/* ------------------------------------------------------------------------- */
/*  @file:    startup_RV32M1_ri5cy.s                                         */
/*  @purpose: RI5CY Core Device Startup File                                 */
/*            RV32M1_ri5cy                                                   */
/*  @version: 1.0                                                            */
/*  @date:    2018-10-2                                                      */
/*  @build:   b180926                                                        */
/* ------------------------------------------------------------------------- */
/*                                                                           */
/* Copyright 1997-2016 Freescale Semiconductor, Inc.                         */
/* Copyright 2016-2018 NXP                                                   */
/* All rights reserved.                                                      */
/*                                                                           */
/* SPDX-License-Identifier: BSD-3-Clause                                     */

.global Reset_Handler

IRQ_Handler:
    addi x2, x2, 0x58
    sw x1, 0x54(x2)
    jal x1, store_regs
    csrr a0, mcause
    jal x1, IRQ_Handler
    la x1, end_except
    .size IRQ_Handler, . - IRQ_Handler

    .text
    .section .vectors, "ax"
    .option norvc;

vectors:
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler

    # reset vector
    jal x0, Reset_Handler

    # Illegal instrution exception
    jal x0, IllegalInstruction_Handler

    # ecall handler
    jal x0, Ecall_Handler

    # LSU error
    jal x0, LSU_Handler

    .section .startup

/* Reset Handler */
Reset_Handler:

    # Disable global interrupt. 
    csrci mstatus, 8
    
    # Set up vector table pointer
    la x5, vectors
    
    # Enable vector mode
    add x5, x5, 1
    csrw mtvec, x5

    # initialize stack pointer
    la sp, __StackTop

    # initialize global pointer
    la gp, __DATA_RAM

    #call __libc_init_array
    
    # zero initialize bss section
    la x5, __START_BSS
    la x6, __END_BSS
bss_init_loop:
    sw x0, 0(x5)
    addi x5, x5, 4
    bgtu x6, x5, bss_init_loop

    jal main
    ebreak

    .size Reset_Handler, . - Reset_Handler

  # saves all caller-saved registers (except return address)
store_regs:
    sw  x3, 0x00(x2)  # gp
    sw  x4, 0x04(x2)  # tp
    sw  x5, 0x08(x2)  # t0
    sw  x6, 0x0c(x2)  # t1
    sw  x7, 0x10(x2)  # t2
    sw x10, 0x14(x2)  # a0
    sw x11, 0x18(x2)  # a1
    sw x12, 0x1c(x2)  # a2
    sw x13, 0x20(x2)  # a3
    sw x14, 0x24(x2)  # a4
    sw x15, 0x28(x2)  # a5
    sw x16, 0x2c(x2)  # a6
    sw x17, 0x30(x2)  # a7

    csrr a0, 0x341
    sw a0, 0x4c(x2)  # mepc
    csrr a1, 0x300
    sw a1, 0x50(x2)  # mstatus
    jalr x0, x1



    # load back registers from stack
end_except:
    lw a1, 0x50(x2)  # mstatus
    csrrw x0, 0x300, a1
    lw a0, 0x4c(x2)  # mepc
    csrrw x0, 0x341, a0

    lw  x3, 0x00(x2)  # gp
    lw  x4, 0x04(x2)  # tp
    lw  x5, 0x08(x2)  # t0
    lw  x6, 0x0c(x2)  # t1
    lw  x7, 0x10(x2)  # t2
    lw x10, 0x14(x2)  # a0
    lw x11, 0x18(x2)  # a1
    lw x12, 0x1c(x2)  # a2
    lw x13, 0x20(x2)  # a3
    lw x14, 0x24(x2)  # a4
    lw x15, 0x28(x2)  # a5
    lw x16, 0x2c(x2)  # a6
    lw x17, 0x30(x2)  # a7

    lw  x1, 0x54(x2)
    addi x2, x2, -0x58
    mret

    .weak IRQ_Handler
    .type IRQ_Handler, %function

    .macro define_exception_entry entry_name handler_name
    .weak \entry_name
\entry_name:
    addi x2, x2, 0x58
    sw x1, 0x54(x2)
    jal x1, store_regs
    la x1, end_except
    jal x0, \handler_name
    .endm

define_exception_entry IllegalInstruction_Handler IllegalInstruction_HandlerFunc
define_exception_entry Ecall_Handler Ecall_HandlerFunc
define_exception_entry LSU_Handler LSU_HandlerFunc

    .weak IllegalInstruction_HandlerFunc
    .type IllegalInstruction_HandlerFunc, %function
IllegalInstruction_HandlerFunc:
    j .
    .size IllegalInstruction_HandlerFunc, . - IllegalInstruction_HandlerFunc

    .weak Ecall_HandlerFunc
    .type Ecall_HandlerFunc, %function
Ecall_HandlerFunc:
    j .
    .size Ecall_HandlerFunc, . - Ecall_HandlerFunc

    .weak LSU_HandlerFunc
    .type LSU_HandlerFunc, %function
LSU_HandlerFunc:
    j .
    .size LSU_HandlerFunc, . - LSU_HandlerFunc

    .global _init
    .global _fini
_init:
_fini:
    ret
