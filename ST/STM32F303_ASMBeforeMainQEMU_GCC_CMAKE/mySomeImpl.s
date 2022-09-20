.syntax unified
.cpu cortex-m0
.thumb

.global some_call

some_call:
  nop
  nop
  nop
  bx  lr

