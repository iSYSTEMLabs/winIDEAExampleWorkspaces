#define Z7B_BOOT_ADDR       0x01040000
#define MC_ME_MCTL_DRUN     0b0011
#define MC_ME_KEY           0x5AF0
#define MC_ME_INVERTED_KEY  0xA50F

#define MC_ME_GS            (*(unsigned volatile int*)0xFFFB8000)
#define MC_ME_MCTL          (*(unsigned volatile int*)0xFFFB8004)
#define MC_ME_CCTL3         (*(unsigned volatile short*)0xFFFB81CA)
#define MC_ME_CADDR3        (*(unsigned volatile int*)0xFFFB81EC)

#define MC_ME_GS_S_MTRANS         27
#define MC_ME_MCTL_TARGET_MODE    28