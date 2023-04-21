#ifndef __RA6M5_H__
#define __RA6M5_H__

#define ITM_BASE_ADDRESS (0xE0000000UL)
#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))

#define SYSC_PRCR (*(volatile unsigned short*)0x4001E3FE)
#define SYSC_PRCR_PRC0 0
#define SYSC_SCKDIVCR (*(volatile unsigned int*)0x4001E020)
#define SYSC_SCKDIVCR_PCKD 0
#define SYSC_SCKDIVCR_PCKC 4
#define SYSC_SCKDIVCR_PCKB 8
#define SYSC_SCKDIVCR_PCKA 12
#define SYSC_SCKDIVCR_BCK 16
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

/* I/O Ports - GPIO*/
#define PORT0_PCNTR1 (*(volatile unsigned int*)0x40080000)
#define PORT0_PCNTR1_PDR6 (1 << 6)
#define PORT0_PCNTR1_PDR7 (1 << 7)
#define PORT0_PCNTR1_PDR8 (1 << 8)

#define PORT0_PCNTR1_PODR6 (1 << 22)
#define PORT0_PCNTR1_PODR7 (1 << 23)
#define PORT0_PCNTR1_PODR8 (1 << 24)


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

#endif // __RA6M5_H__
