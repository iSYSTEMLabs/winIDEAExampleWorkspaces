extern __asm void __start();

#pragma section code_type ".init"
#pragma section sconst_type ".__bam_bootarea"

typedef void (*resetfuncptr)(void);

extern const unsigned long bam_rchw;
extern const resetfuncptr bam_resetvector;

const unsigned long RCHW             = 0x00A50001;    // 0x00
const resetfuncptr  CPU2_Vector      = __start;       // 0x04
const unsigned long CFG_bits0        = 0xFFFFFFFF;    // 0x08 
const unsigned long CFG_bits1        = 0xFFFFFFFF;    // 0x0C 
const unsigned long CPU0_Vector      = 0xFFFFFFFF;    // 0x10
const unsigned long CPUC_Vector      = 0xFFFFFFFF;    // 0x14
const unsigned long CPU1_Vector      = 0xFFFFFFFF;    // 0x18


__asm void usr_init()
{
  nofralloc
  se_mflr     r31                                     // save off return address in NV reg
}

__asm void __init_hardware()
{ 
}

__asm void __flush_cache()
{
}

__asm void __init_user()
{
}

__asm void exit()
{
}
