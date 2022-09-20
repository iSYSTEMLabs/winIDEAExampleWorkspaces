.syntax unified
.cpu cortex-m3
.thumb

.word _estack
.word _etext
.word _sdata
.word _edata
.word _sbss
.word _ebss


.thumb_func   @ directive needed, so linker sets LSB in initial PC value, enabling thumb mode
reset:
  ldr  r0, =_estack
  mov  sp, r0  // set stack pointer 
@ copy initialized data segment to ram
  movs  r0, #0
  b     loop_copy_init_data
copy_init_data:
  ldr  r3, =_etext
  ldr  r3, [r3, r1]
  str  r3, [r0, r1]
  adds r1, r1, #4
loop_copy_init_data:
  ldr  r0, =_sdata
  ldr  r3, =_edata
  adds r2, r0, r1
  cmp  r2, r3
  bcc  copy_init_data
@ zero noninitialized data segment
  ldr  r2, =_sbss
  b    loop_zero_non_init_data
zero_non_init_data:
  movs r3, #0
  str  r3, [r2]
  adds r2, r2, #4
loop_zero_non_init_data:
  ldr  r3, =_ebss
  cmp  r2, r3
  bcc  zero_non_init_data
@ call some_call function
  bl   some_call
@ jump to main function
  b    main
loop:
  b    loop   @ infinite loop
  

@ vector table 
.section .vectors, "a",%progbits
.type g_pfnVectors, %object

g_pfnVectors:
  .word _estack
  .word reset

