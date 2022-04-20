extern void InterruptHandler();

#pragma push
#pragma section code_type ".interruptHandlerSection"
asm void TimerInterruptHandler()
{
  stwu r1, -0x50 (r1)
  stw r12, 0x4C (r1)
  stw r11, 0x48 (r1)
  stw r10, 0x44 (r1)
  stw r9, 0x40 (r1)
  stw r8, 0x3C (r1)
  stw r7, 0x38 (r1)
  stw r6, 0x34 (r1)
  stw r5, 0x30 (r1)
  stw r4, 0x2C (r1)
  stw r3, 0x28 (r1)
  stw r0, 0x24 (r1)
  mfcr r0
  stw r0, 0x20 (r1)
  mfXER r0
  stw r0, 0x1C (r1)
  mfCTR r0
  stw r0, 0x18 (r1)
  mfLR r0
  stw r0, 0x14 (r1)
  
  bl InterruptHandler
 
  lwz r0, 0x14 (r1)
  mtLR r0
  lwz r0, 0x18 (r1)
  mtCTR r0
  lwz r0, 0x1C (r1)
  mtXER r0
  lwz r0, 0x20 (r1)
  mtcrf 0xff, r0
  lwz r0, 0x24 (r1)
  lwz r3, 0x28 (r1)
  lwz r4, 0x2C (r1)
  lwz r5, 0x30 (r1)
  lwz r6, 0x34 (r1)
  lwz r7, 0x38 (r1)
  lwz r8, 0x3C (r1)
  lwz r9, 0x40 (r1)
  lwz r10, 0x44 (r1)
  lwz r11, 0x48 (r1)
  lwz r12, 0x4C (r1)
  addi r1, r1, 0x50
  rfi
}
#pragma pop