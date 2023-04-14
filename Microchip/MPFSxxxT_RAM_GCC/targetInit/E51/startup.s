.extern InterruptRoutine
.extern TimerInterruptHandler
.weak IRQ_Handler
.type IRQ_Handler, %function

.section .irq_handler

IRQ_Handler:
  addi x2, x2, 0xF0
  sd x1, 0xE8(sp)
  jal x1, store_regs
  csrr a0, mcause
  # Read the PLIC interrupt claim register
  li x26, 0x0C200004
  lw x27, 0x0(x26)
  
  # Execute TimerInterruptHandler if interrupt is caused by Timer1
  li x30, 0x800000000000000B  # external interrupt
  bne a0, x30, IRQ_end
  li x30, 82  # Timer1 global interrupt
  bne x27, x30, IRQ_end
  jal x1, TimerInterruptHandler
  
IRQ_end:
  # Write to PLIC interrupt claim register to clear pending bit
  sw x27, 0x0(x26)
  la x1, end_except
  jalr x0, x1

  .size IRQ_Handler, . - IRQ_Handler


.func TimerInterruptHandler, TimerInterruptHandler
.type TimerInterruptHandler, %function
.global TimerInterruptHandler
TimerInterruptHandler:
  # clear interrupt status of the timer
  li x28, 0x20125010
  li x29, 1
  sw x29, 0x0(x28)
  
  addi x2, x2, -0x8
  sd x1, 0x0(sp)
  jal x1, InterruptRoutine
  ld x1, 0x0(sp)
  addi x2, x2, 0x8
  jalr x0, x1
.size TimerInterruptHandler, . - TimerInterruptHandler
.endfunc

.global Reset_Handler
.section .startup

Reset_Handler:
  # Disable global interrupt for M-mode
  csrci mstatus, 8
  
  # Initialize stack pointer
  la sp, __StackTop
  
  # Initialize global pointer
  la gp, __DATA_RAM
  
  # Initialize bss section to zero
  la x5, __START_BSS
  la x6, __END_BSS
bss_init_loop:
  sd x0, 0(x5)
  addi x5, x5, 8
  bgtu x6, x5, bss_init_loop
  
  jal main
  ebreak
  
  .size Reset_Handler, . - Reset_Handler
  
  
  # saves all registers (except return address)
store_regs:
  sd  x3, 0x00(x2)  # gp
  sd  x4, 0x08(x2)  # tp
  sd  x5, 0x10(x2)  # t0
  sd  x6, 0x18(x2)  # t1
  sd  x7, 0x20(x2)  # t2
  sd x10, 0x28(x2)  # a0
  sd x11, 0x30(x2)  # a1
  sd x12, 0x38(x2)  # a2
  sd x13, 0x40(x2)  # a3
  sd x14, 0x48(x2)  # a4
  sd x15, 0x50(x2)  # a5
  sd x16, 0x58(x2)  # a6
  sd x17, 0x60(x2)  # a7
  
  sd x18, 0x68(x2)  # s2
  sd x19, 0x70(x2)  # s3
  sd x20, 0x78(x2)  # s4
  sd x21, 0x80(x2)  # s5
  sd x22, 0x88(x2)  # s6
  sd x23, 0x90(x2)  # s7
  sd x24, 0x98(x2)  # s8
  sd x25, 0xA0(x2)  # s9
  sd x26, 0xA8(x2)  # s10
  sd x27, 0xB0(x2)  # s11
  
  sd x28, 0xB8(x2)  # t3
  sd x29, 0xC0(x2)  # t4
  sd x30, 0xC8(x2)  # t5
  sd x31, 0xD0(x2)  # t6
  
  csrr a0, 0x341
  sd a0, 0xD8(x2)  # mepc
  csrr a1, 0x300
  sd a1, 0xE0(x2)  # mstatus
  jalr x0, x1
  
  # load back registers from stack
end_except:
  ld a1, 0xE0(x2)  # mstatus
  csrrw x0, 0x300, a1
  ld a0, 0xD8(x2)  # mepc
  csrrw x0, 0x341, a0

  ld  x3, 0x00(x2)  # gp
  ld  x4, 0x08(x2)  # tp
  ld  x5, 0x10(x2)  # t0
  ld  x6, 0x18(x2)  # t1
  ld  x7, 0x20(x2)  # t2
  ld x10, 0x28(x2)  # a0
  ld x11, 0x30(x2)  # a1
  ld x12, 0x38(x2)  # a2
  ld x13, 0x40(x2)  # a3
  ld x14, 0x48(x2)  # a4
  ld x15, 0x50(x2)  # a5
  ld x16, 0x58(x2)  # a6
  ld x17, 0x60(x2)  # a7
  
  ld x18, 0x68(x2)  # s2
  ld x19, 0x70(x2)  # s3
  ld x20, 0x78(x2)  # s4
  ld x21, 0x80(x2)  # s5
  ld x22, 0x88(x2)  # s6
  ld x23, 0x90(x2)  # s7
  ld x24, 0x98(x2)  # s8
  ld x25, 0xA0(x2)  # s9
  ld x26, 0xA8(x2)  # s10
  ld x27, 0xB0(x2)  # s11
  
  ld x28, 0xB8(x2)  # t3
  ld x29, 0xC0(x2)  # t4
  ld x30, 0xC8(x2)  # t5
  ld x31, 0xD0(x2)  # t6

  ld  x1, 0xE8(x2)
  addi x2, x2, -0xF0
  mret