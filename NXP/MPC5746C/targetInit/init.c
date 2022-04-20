extern __asm void __start();

#pragma section code_type ".init"
#pragma section sconst_type ".__bam_bootarea"

typedef void (*resetfuncptr)(void);

extern const unsigned long bam_rchw;
extern const resetfuncptr bam_resetvector;

const unsigned long RCHW             = 0x005A0002;    //0x00 - Boot header configuration
const resetfuncptr  CPU2_resetvector = 0xFFFFFFFF;    //0x04 - CPU2 reset vector
const unsigned long CFG_bits0        = 0xFFFFFFFF;    //0x08 - configuatrion bits
const unsigned long CFG_bits1        = 0xFFFFFFFF;    //0x0C - configuatrion bits
const resetfuncptr  CPU0_resetvector = __start;       //0x10 - CPU1 reset vector
const resetfuncptr  CPU1_resetvector = 0xFFFFFFFF;    //0x14 - CPU0 reset vector

__asm void usr_init()
{
  nofralloc
  se_mflr     r31  // save off return address in NV reg
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

