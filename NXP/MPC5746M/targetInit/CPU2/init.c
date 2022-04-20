extern __asm void __start();

#pragma section code_type ".init"
#pragma section sconst_type ".__bam_bootarea"

typedef void (*resetfuncptr)(void);

extern const unsigned long bam_rchw;
extern const resetfuncptr bam_resetvector;

const unsigned long RCHW             = 0x005A0001;    //0x0 - Boot header configuration
const resetfuncptr  CPU2_resetvector = __start;       //0x4 - CPU reset vector
const unsigned long CFG_bits0        = 0x00000000;    //0x8 - configuatrion bits
const unsigned long CFG_bits1        = 0x00000000;    //0xC - configuatrion bits
//const unsigned long CPU0_resetvector = 0x00FE2EC0;    //0x10 - CPU reset vector
const resetfuncptr CPU0_resetvector  = 0xFFFFFFFF;    //0x10 - CPU reset vector
//const unsigned long CPU1_resetvector = 0x01002F48;    //0x14 - CPU reset vector
const resetfuncptr CPU1_resetvector  = 0xFFFFFFFF;    //0x14 - CPU reset vector
//const unsigned long CPU0SC_resetvector = 0xFFFFFFFF;    //0x18 - CPU reset vector

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
