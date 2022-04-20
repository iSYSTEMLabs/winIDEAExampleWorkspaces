extern __asm void __start();

#pragma section code_type ".init"
#pragma section sconst_type ".__bam_bootarea"

typedef void (*resetfuncptr)(void);

extern const unsigned long bam_rchw;
extern const resetfuncptr bam_resetvector;
extern void _start();
const unsigned long bam_rchw = 0x005A005A;
const resetfuncptr bam_resetvector = _start;

__asm void usr_init()
{
  /*
  nofralloc
  se_mflr     r31  // save off return address in NV reg
*/  
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
