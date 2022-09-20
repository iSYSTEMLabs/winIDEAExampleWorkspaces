#include <__ppc_eabi_init.h>
#include <__ppc_eabi_linker.h>
#include "e200z0h.h"

extern unsigned long _stext, _etext;
extern unsigned long _sdata, _edata;
extern unsigned long _sbss, _ebss, _szbss;
extern unsigned long _estack;

extern unsigned long _ssram, _esram, _szsram;

extern void main();
extern void InterruptRoutine();
extern unsigned long irqTable;

void TimerInterruptHandler() {
  PIT_TCTRL0 &= ~(0x1 << 0);
  // Call our interrupt routine
  InterruptRoutine();
  
  // Clear interrupt flag
  PIT_TFLG0 = 1;
  PIT_TCTRL0 |= (0x1 << 0);
}

unsigned long interruptTable[64];

void irqSetup(void) {  
  // Enable software interrupts with entry offsets of 4 bytes
  INTC0_MCR = 0;
  // Set interrupt table address
  INTC0_IACKR = (unsigned long)interruptTable;
  
  // Set current priority to 0
  INTC0_CPR = 0;
  // Setup PIT interrupt priority to max
  INTC0_PSR56_59 = (0xF << INTC0_PSR56_59_PRI59);
  // Setup interrupt index INTCx_PIT_CHANNEL_0_IRQ_INDEX to point to TimerInterruptHandler
  interruptTable[INTCx_PIT_CHANNEL_0_IRQ_INDEX] = (unsigned long)TimerInterruptHandler;
}

__declspec(vle_on)
#pragma function_align 0x1000
asm extern void __start() {
  nofralloc
  li r16, 0
  
  // Clear bss
  lis r11, _sbss@ha
  addi r11, r11, _sbss@l
  lis r12, _szbss@ha
  addi r12, r12, _szbss@l
  li r14, 4
  divw r12, r12, r14
  mtctr r12
clr_bss:
  stw r16, 0(r11)
  addi r11, r11, 4
  bdnz clr_bss

  // Set up stack pointer
  lis r1, _estack@ha
  addi r1, r1, _estack@l

  // Set up small data pointers
  lis r2, _SDA2_BASE_@ha
  addi r2, r2, _SDA2_BASE_@l
  lis r13, _SDA_BASE_@ha
  addi r13, r13, _SDA_BASE_@l

  // Set location of the hardware interrupt table
  lis r5, irqTable@ha
  ori r5, r5, irqTable@l
  mtIVPR r5

  bl irqSetup
  
  bl main
  
infinite_loop:
  b infinite_loop
}
