#define meml(addr) (*(unsigned long volatile *)(addr))
#define SWT_SR 0xfff38010
#define SWT_CR 0xfff38000     
#define SSCM_DPM_BOOT 0xC3FD8018
#define SSCM_DPM_KEY  0xC3FD801C

typedef unsigned int uint32_t;
#define GPDO0_3       *(unsigned int volatile*)   0xC3F90600
#define GPDO52_55     *(unsigned int volatile*)   0xC3F90634
#define INTC_PRI0     *(unsigned int volatile*)   0xFFF48008
#define INTC_SSCIR4_7 *(unsigned int volatile*)   0xFFF48024
#define INTC_PSR4_7   *(unsigned int volatile*)   0xFFF48044
#define INTC_PSR60_63 *(unsigned int volatile*)   0xFFF4807C
#define TFLG1         *(unsigned int volatile*)   0xC3FF011C
#define PIT_PITMCR    *(unsigned int volatile*)   0xC3FF0000
#define SIUL_PCR3     *(unsigned short volatile*) 0xC3F90046
#define SIUL_PCR53    *(unsigned short volatile*) 0xC3F900AA
#define PIT_LDVAL1    *(unsigned int volatile*)   0xC3FF0110
#define PIT_TCTRL1    *(unsigned int volatile*)   0xC3FF0118
#define INTC_BCR      *(unsigned int volatile*)   0xFFF48000
#define INTC_IACKR    *(unsigned int volatile*)   0xFFF48010
#define PLL_CR        *(unsigned int volatile*)   0xC3FE00A0
#define ME_DRUN_MC    *(unsigned int volatile*)   0xC3FDC02C
#define ME_RUN_PC0    *(unsigned int volatile*)   0xC3FDC080
#define ME_RUN0       *(unsigned int volatile*)   0xC3FDC030
#define ME_GS         *(unsigned int volatile*)   0xC3FDC000
#define ME_MCTL       *(unsigned int volatile*)   0xC3FDC004
#define CGM_AC3_SC    *(unsigned int volatile*)   0xC3FE0398
#define CGM_AC4_SC    *(unsigned int volatile*)   0xC3FE03A0

extern const uint32_t ISRVectorTable[];

#define XTAL                   40 //40MHz on the EVB
#define FSYS                   120

#if XTAL == 40                
  #if FSYS == 120
    #define IDF                10 - 1
    #define ODF                0
    #define NDIV               60
  #else
  #if FSYS == 100
    #define IDF                10 - 1
    #define ODF                0
    #define NDIV               50
  #else
  #if FSYS == 80
    #define IDF                5 - 1
    #define ODF                2
    #define NDIV               80
  #else
  #if FSYS == 64
    #define IDF                5 - 1
    #define ODF                2
    #define NDIV               64
  #else
  #if FSYS == 32
    #define IDF                5 - 1
    #define ODF                2
    #define NDIV               32
  #else
  #if FSYS == 16
    #define IDF                5 - 1
    #define ODF                3
    #define NDIV               32
  #endif
  #endif
  #endif
  #endif
  #endif
  #endif
#endif

#define PLL_IDF (unsigned long)(((unsigned long)IDF)  << 26)
#define PLL_ODF (unsigned long)(((unsigned long)ODF)  << 24)
#define PLL_NDIV (unsigned long)(((unsigned long)NDIV) << 16)
#define PLL_VALUE PLL_IDF | PLL_ODF | PLL_NDIV | 0x00000100