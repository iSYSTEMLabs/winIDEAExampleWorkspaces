extern __asm void __start();

#pragma section code_type ".init"
#pragma section sconst_type ".__bam_bootarea"

typedef void (*resetfuncptr)(void);

extern const unsigned long bam_rchw;
extern const resetfuncptr bam_resetvector;
const unsigned long bam_rchw = 0x015A0000;
const resetfuncptr bam_resetvector = __start;

__asm void usr_init()
{
  nofralloc
  se_mflr     r31  // save off return address in NV reg
}

__asm void __init_hardware()
{
// MMU initialization
// 0   - 64k : VLE code
// 64k - 128k: non VLE code
// this function has to be executed in run mode

// 0   - 64k initialization
// mas0
   e_lis r20,0x1001
   e_ori r20,r20,0
// mas1
   e_lis r21,0xC000
   e_ori r21,r21,0x300
// mas2
   e_lis r22,0x0
   e_ori r22,r22,0x20
// mas3
   e_lis r23,0x0
   e_ori r23,r23,0x3F
//
   mtspr 0x270,r20
   mtspr 0x271,r21
   mtspr 0x272,r22
   mtspr 0x273,r23
   se_isync
   tlbwe
   se_isync

// 64k - 128k initialization   
// mas0
   e_lis r20,0x1006
   e_ori r20,r20,0
// mas1
   e_lis r21,0xC000
   e_ori r21,r21,0x300
// mas2
   e_lis r22,0x0001
   e_ori r22,r22,0x00
// mas3
   e_lis r23,0x0001
   e_ori r23,r23,0x3F
//
   mtspr 0x270,r20
   mtspr 0x271,r21
   mtspr 0x272,r22
   mtspr 0x273,r23
   se_isync
   tlbwe
   se_isync
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
