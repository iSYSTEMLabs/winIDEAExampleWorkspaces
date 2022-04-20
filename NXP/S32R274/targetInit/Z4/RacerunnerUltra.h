/*
  Secondary core registers
*/
#define MC_ME_CCTL2  (*(unsigned volatile short*)0xFFFB81C8)
#define MC_ME_CCTL3  (*(unsigned volatile short*)0xFFFB81CA) 
#define MC_ME_CADDR2 (*(unsigned volatile int*)0xFFFB81E8)
#define MC_ME_CADDR3 (*(unsigned volatile int*)0xFFFB81EC) 
#define MC_ME_MCTL   (*(unsigned volatile int*)0xFFFB8004) 
#define MC_ME_GS     (*(unsigned volatile int*)0xFFFB8000) 
#define MC_ME_GS_S_MTRANS_MASK                 27
#define MC_ME_GS_S_CURRENT_MODE_MASK           25

/*
   Clock registers
*/
//#define MC_RGM_DES (*(unsigned volatile int*)) // 'Destructive' Event Status Register

/*
   GPIO registers
*/
#define SIUL2_MSCR0 (*(unsigned volatile int*)0xFFFC0240)
#define SIUL2_MSCR0_OBE 25
#define SIUL2_GPDO0 (*(unsigned volatile int*)0xFFFC1300)
#define SIUL2_GPDO0_PDO0 24

/*
   PIT timer registers
*/
#define PIT_MCR (*(unsigned volatile int*)0xFFF84000)
#define PIT_MCR_MDIS 1
#define PIT_LDVAL0 (*(unsigned volatile int*)0xFFF84100)
#define PIT_TFLG0 (*(unsigned volatile int*)0xFFF8410C)
#define PIT_TFLG0_TIF 0 
#define PIT_TCTRL0 (*(unsigned volatile int*)0xFFF84108)
#define PIT_TCTRL0_TEN 0
#define PIT_TCTRL0_TIE 1

/*
   Interrupt register
*/
#define INTC_IACKR0 (*(unsigned volatile int*)0xFC040020)
#define INTC_IACKR2 (*(unsigned volatile int*)0xFC040028)
#define INTC_BCR (*(unsigned volatile int*)0xFC040000)
#define INTC_BCR_HVEN0 0
#define INTC_CPR0 (*(unsigned volatile int*)0xFC040010)
#define INTC_PSR226 (*(unsigned volatile short*)0xFC040224)
#define INTC_PSR226_PRIN 0
#define INTC_SSCIR4 (*(unsigned volatile char*)0xFC040044)

/*
   Clock registers
*/
#define MC_ME_RUN_PC0 (*(unsigned volatile int*)0xFFFB8080)
#define MC_ME_RUN_PC1 (*(unsigned volatile int*)0xFFFB8084)
#define MC_ME_RUN_PC2 (*(unsigned volatile int*)0xFFFB8088)
#define MC_ME_RUN_PC3 (*(unsigned volatile int*)0xFFFB808C)
#define MC_ME_RUN_PC4 (*(unsigned volatile int*)0xFFFB8090)
#define MC_ME_RUN_PC5 (*(unsigned volatile int*)0xFFFB8094)
#define MC_ME_RUN_PC6 (*(unsigned volatile int*)0xFFFB8098)
#define MC_ME_RUN_PC7 (*(unsigned volatile int*)0xFFFB809C)
#define MC_ME_MCTL (*(unsigned volatile int*)0xFFFB8004)
#define MC_ME_DRUN_MC (*(unsigned volatile int*)0xFFFB802C)
#define MC_ME_DRUN_MC_SYSCLK 0
#define MC_ME_DRUN_MC_XOSCON 5
#define MC_ME_DRUN_MC_PLL0ON 6
#define MC_ME_DRUN_MC_PLL1ON 7  
#define MC_ME_GS (*(unsigned volatile int*)0xFFFB8000)
#define MC_ME_GS_S_SYSCLK 0
#define MC_ME_GS_S_XOSC 5
#define MC_ME_GS_S_PLL0 6
#define MC_ME_GS_S_PLL1 7  
#define MC_ME_GS_S_MTRANS 27
#define MC_ME_GS_S_CURRENT_MODE 28
#define CMU0_ISR (*(unsigned volatile int*)0xFBFB0200)
#define CMU0_ISR_OLRI 0
#define MC_CGM_AC3_SC (*(unsigned volatile int*)0xFFFB0860)
#define MC_CGM_AC3_SELCTL 24
#define MC_CGM_AC4_SC (*(unsigned volatile int*)0xFFFB0880)
#define MC_CGM_AC4_SELCTL 24
#define MC_CGM_SC_DC0 (*(unsigned volatile int*)0xFFFB07E8)
#define MC_CGM_SC_DC0_DIV 16
#define MC_CGM_SC_DC1 (*(unsigned volatile int*)0xFFFB07EC)
#define MC_CGM_SC_DC1_DIV 16
#define MC_CGM_SC_DC2 (*(unsigned volatile int*)0xFFFB07F0)
#define MC_CGM_SC_DC2_DIV 16
#define MC_CGM_SC_DC3 (*(unsigned volatile int*)0xFFFB07F4)
#define MC_CGM_SC_DC3_DIV 16
#define MC_CGM_SC_DC4 (*(unsigned volatile int*)0xFFFB07F8)
#define MC_CGM_SC_DC4_DIV 16
#define MC_CGM_SC_DC5 (*(unsigned volatile int*)0xFFFB07FC)
#define MC_CGM_SC_DC5_DIV 16
#define PLLDIG_PLL0DV (*(unsigned volatile int*)0xFFFB0108)
#define PLLDIG_PLL0DV_MFD 0
#define PLLDIG_PLL0DV_PREDIV 12
#define PLLDIG_PLL0DV_RFDPHI 16
#define PLLDIG_PLL0DV_RFDPHI1 27
#define PLLDIG_PLL1DV (*(unsigned volatile int*)0xFFFB0128)
#define PLLDIG_PLL1DV_MFD 0
#define PLLDIG_PLL1DV_RFDPHI 16