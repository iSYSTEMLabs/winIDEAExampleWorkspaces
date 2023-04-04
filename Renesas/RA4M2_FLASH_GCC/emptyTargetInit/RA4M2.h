#define ITM_BASE_ADDRESS (0xE0000000UL)
#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))

#define SYSC_PRCR (*(volatile unsigned short*)0x4001E3FE)
#define SYSC_PRCR_PRC0 0
#define SYSC_SCKDIVCR (*(volatile unsigned int*)0x4001E020)
#define SYSC_SCKDIVCR_PCKC 4
#define SYSC_SCKDIVCR_PCKB 8
#define SYSC_SCKDIVCR_ICK 24
#define SYSC_SCKDIVCR_FCK 28

#define SYSC_PLLCCR (*(volatile unsigned int*)0x4001E028)
#define SYSC_PLLCCR_PLSRCSEL 4
#define SYSC_PLLCCR_PLIDIV 0 
#define SYSC_PLLCCR_PLLMUL 8

#define SYSC_SCKSCR (*(volatile unsigned char*)0x4001E026)
#define SYSC_SCKSCR_CKSEL 0

#define SYST_CSR (*(volatile unsigned int*)0xE000E010)
#define SYST_CSR_ENABLE 0
#define SYST_CSR_TICKINT 1

#define SYST_RVR (*(volatile unsigned int*)0xE000E014)
#define SYST_RVR_RELOAD 0

#define PORT3_PCNTR1 (*(volatile unsigned int*)0x40080060)
#define PORT3_PCNTR1_PDR0 3

#define PORT3_PCNTR2 (*(volatile unsigned int*)0x40080064)
#define PORT3_PCNTR2_PIDR0 3
#define PORT3_PCNTR2_PIDR0_MASK 0x8

#define PORT3_PCNTR3 (*(volatile unsigned int*)0x40080068)
#define PORT3_PCNTR3_PORR 19
#define PORT3_PCNTR3_POSR 3

#define FCACHE_FLWT (*(volatile unsigned int*)0x4001C11C)
#define FCACHE_FLWT_FLWT 0

#define SYSC_PLLCR (*(volatile unsigned char*)0x4001E02A)
#define PLLSTP 0

#define SYSC_MOSCWTCR (*(volatile unsigned char*)0x4001E0A2)
#define MSTS 0

#define SYSC_MOSCCR (*(volatile unsigned char*)0x4001E032)
#define SYSC_MOSCCR_MOSTP 0

#define SYSC_OSCSF (*(volatile unsigned char*)0x4001E03C)
#define SYSC_OSCSF_MOSCSF 3
#define SYSC_OSCSF_MOSCSF_MASK 0x8









