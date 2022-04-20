.vle
.section ".__asmInit", "axv"

initRegisters:
  e_li  R0, 0
  mr	  R2, R0
  mr	  R3, R0
  mr	  R4, R0
  mr	  R5, R0
  mr	  R6, R0
  mr	  R7, R0
  mr	  R8, R0
  mr	  R9, R0
  mr	  R10, R0
  mr	  R11, R0
  mr	  R12, R0
  mr	  R13, R0
  mr	  R14, R0
  mr	  R15, R0
  mr	  R16, R0
  mr	  R17, R0
  mr	  R18, R0
  mr	  R19, R0
  mr	  R20, R0
  mr	  R21, R0
  mr	  R22, R0
  mr	  R23, R0
  mr	  R24, R0
  mr	  R25, R0
  mr	  R26, R0
  mr	  R27, R0
  mr	  R28, R0
  mr	  R29, R0
  mr	  R30, R0
  mr	  R31, R0
  nop
  nop
  nop
  nop

.globl      asmReset
.extern     cReset

.section    ".__asmResetFunct", "axv"
asmReset:
  e_lis	  sp, %hi(__ghsend_stack)
  e_add16i sp, sp, %lo(__ghsend_stack)
  se_subi sp, 32
  
  se_bl   initRegisters
  
  se_bl   cReset

asmReset_infLoop:
  se_b    asmReset_infLoop
