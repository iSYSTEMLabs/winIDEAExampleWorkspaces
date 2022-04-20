extern __asm void __start();

#pragma section code_type ".init"
#pragma section sconst_type ".__bam_bootarea"

typedef void (*resetfuncptr)(void);

#ifdef BOOT_ALL_FROM_BAF
const unsigned long RCHW             = 0x005A000B;    //0x0 - Boot header configuration
#else
const unsigned long RCHW             = 0x005A0001;    //0x0 - Boot header configuration
#endif
const resetfuncptr  CPU2_resetvector = __start;       //0x4 - CPU reset vector
const unsigned long CFG_bits0        = 0xFFFFFFFF;    //0x8 - configuatrion bits
const unsigned long CFG_bits1        = 0xFFFFFFFF;    //0xC - configuatrion bits
#ifdef BOOT_ALL_FROM_BAF
const unsigned long CPU0_resetvector = 0x00FF0000;
const unsigned long CPU1_resetvector = 0x01020000;
#endif
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
