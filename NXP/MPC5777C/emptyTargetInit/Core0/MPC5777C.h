/*
  Core managment registers
*/
#define SIU_RSTVEC1 (*(unsigned volatile int*)0xC3F909B0)

/*
  GPIO registers
*/
#define SIU_PCR113 (*(unsigned volatile short*)0xC3F90122)        // Pad Configuration Register
#define SIU_PCR113_IBE 8
#define SIU_PCR113_OBE 9
#define SIU_GPDO113 (*(unsigned volatile char*)0xC3F90671)       // GPIO Pin Data Output Register

/*
  PIT timer registers   
*/
#define PIT_MCR (*(unsigned volatile int*)0xC3FF0000)
#define PIT_MCR_MDIS_RTI 29
#define PIT_LDVAL0 (*(unsigned volatile int*)0xC3FF0100)
#define PIT_TCTRL0 (*(unsigned volatile int*)0xC3FF0108)
#define PIT_TCTRL0_TEN 0
#define PIT_TCTRL0_TIE 1
#define PIT_TFLG0 (*(unsigned volatile int*)0xC3FF010C)
#define PIT_TFLG0_TIF 0
#define INTC_PSR301 (*(unsigned volatile char*)0xFFF4816D)
#define INTC_PSR301_PRI 0
#define INTC_PSR301_PRC_SEL 6
#define INTC_CPR_PRC0 (*(unsigned volatile int*)0xFFF48008) 
#define INTC_CPR_PRC0_PRI 0
#define INTC_IACKR_PRC0 (*(unsigned volatile int*)0xFFF48010)

/*
  Clock registers   
*/
#define PLLDIG_PLL0CR (*(unsigned volatile int*)0xFFE74000)
#define PLLDIG_PLL0CR_CLKCFG 8
#define PLLDIG_PLL0DV (*(unsigned volatile int*)0xFFE74008)
#define PLLDIG_PLL0DV_RFDPHI1 27
#define PLLDIG_PLL0DV_RFDPHI 16
#define PLLDIG_PLL0DV_PREDIV 12
#define PLLDIG_PLL0DV_MFD 0
#define PLLDIG_PLL0SR (*(unsigned volatile int*)0xFFE74004)
#define PLLDIG_PLL0SR_LOCK 2
#define PLLDIG_PLL1CR (*(unsigned volatile int*)0xFFE74020)
#define PLLDIG_PLL1CR_CLKCFG 8
#define PLLDIG_PLL1DV (*(unsigned volatile int*)0xFFE74028)
#define PLLDIG_PLL1DV_RFDPHI 16
#define PLLDIG_PLL1DV_MFD 0
#define PLLDIG_PLL1SR (*(unsigned volatile int*)0xFFE74024)
#define PLLDIG_PLL1SR_LOCK 2
#define SIU_SYSDIV (*(unsigned volatile int*)0xC3F909A0) 
#define SIU_SYSDIV_PLL0SEL 28
#define SIU_SYSDIV_PLL1SEL 26
#define SIU_SYSDIV_PERCLKSEL 24
#define SIU_SYSDIV_FMPERDIV 20
#define SIU_SYSDIV_PERDIV 16
#define SIU_SYSDIV_MCANSEL 15
#define SIU_SYSDIV_SYSCLKSEL 12
#define SIU_SYSDIV_ETPUDIV 8
#define SIU_SYSDIV_SYSCLKDIV 2
#define SIU_SYSDIV_PCSEN 0
#define SIU_ECCR (*(unsigned volatile int*)0xC3F90984)
#define SIU_ECCR_EBDF 0
#define SIU_PSCLKCFG (*(unsigned volatile int*)0xC3F909CC)
#define SIU_PSCLKCFG_PSDIV1M 0