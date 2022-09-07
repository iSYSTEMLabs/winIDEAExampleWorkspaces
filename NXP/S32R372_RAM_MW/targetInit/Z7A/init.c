#pragma section code_type ".text_vle"
#pragma section sconst_type ".__bam_bootarea"

#include "S32R372.h"

typedef void (*resetfuncptr)(void);

extern __asm void __start();
extern const unsigned long bam_rchw;
extern const resetfuncptr bam_resetvector;

const unsigned long RCHW             = 0x005A0000;    //0x00
const resetfuncptr  CPU2_Vector      = __start;       //0x04
const unsigned long CFG_bits0        = 0xFFFFFFFF;    //0x08 
const unsigned long CFG_bits1        = 0xFFFFFFFF;    //0x0C 
const unsigned long CPU0_Vector      = 0xFFFFFFFF;    //0x10
const unsigned long CPUC_Vector      = 0xFFFFFFFF;    //0x14
const unsigned long CPU1_Vector      = 0xFFFFFFFF;    //0x18

void TimerInterruptHandlerC()
{
  InterruptRoutine();
  
  // Clear interrupt flag
  PIT0_TFLG0 = 1; 
  
}