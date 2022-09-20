.syntax unified
.code 16

        .word 0x2000fffe      @ initial stack pointer
        .word lbl1            @ initial value for PC

.thumb_func   @ directive needed, so linker sets LSB in initial PC value, enabling thumb mode
lbl1:
  mov    R0, #0
  mov    R1, #3
  movw   R2, #0x2710
  movt   R2, #0x00
label1:
  add    R0, R1, R0 
  add    R1, #1
  cmp    R1, R2
  ble    label1

  mov    R1, #0
  movt   R1, #0x2000
  str    R0, [R1]
  adr    R1, data

  ldm    R1, {R3-R5}
  ldm    R8, {R3, R9-R11}
  push   {R0,R4-R7}
  mov    R0, #45
  pop    {R0,R4-R7}
loop:
  b      loop
  
data:
  .word 0x00110022
