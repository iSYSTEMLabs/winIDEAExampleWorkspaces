.extern InterruptRoutine
.extern TimerInterruptHandler
.weak IRQ_Handler
.type IRQ_Handler, %function

.section .irq_handler

IRQ_Handler:
  addi x2, x2, 0x58
  sw x1, 0x54(sp)
  jal x1, store_regs
  csrr a0, mcause
  jal x1, TimerInterruptHandler
  la x1, end_except
  jalr x0, x1
  
  .size IRQ_Handler, . - IRQ_Handler


.func TimerInterruptHandler, TimerInterruptHandler
.type TimerInterruptHandler, %function
.global TimerInterruptHandler
TimerInterruptHandler:
  mv x8, x1
  jal x1, InterruptRoutine
  mv x1, x8
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
  