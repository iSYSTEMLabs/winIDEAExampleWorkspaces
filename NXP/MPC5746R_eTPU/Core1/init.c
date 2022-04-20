extern __asm void __start();

#pragma section code_type ".init"
#pragma section sconst_type ".__bam_bootarea"

typedef void (*resetfuncptr)(void);

extern const unsigned long bam_rchw;
extern const resetfuncptr bam_resetvector;

const unsigned long RCHW              = 0x005A0008;    //0x0 - Boot header configuration
const unsigned long CFG_bits0         = 0xFFFFFFFF;    //0x4 - configuatrion bits
const unsigned long CFG_bits1         = 0xFFFFFFFF;    //0x8 - configuatrion bits
const unsigned long CFG_bits2         = 0xFFFFFFFF;    //0xC - configuatrion bits

const unsigned long CPU0_resetvector  = 0xFFFFFFFF;    //0xC - configuatrion bits
const resetfuncptr  CPU1_resetvector  = __start;       //0x14- CPU reset vector
const unsigned long CPU1C_resetvector = 0xFFFFFFFF;    //0x18 - configuatrion bits


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
