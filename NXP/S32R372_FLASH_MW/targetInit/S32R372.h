#define Z7B_BOOT_ADDR       0x01040000

// AIPS

#define AIPS0_MPRA          (*(unsigned volatile int*)  0xFC000000)
#define AIPS0_MPRB          (*(unsigned volatile int*)  0xFC000004)

#define AIPS0_PACRA         (*(unsigned volatile int*)  0xFC000100)
#define AIPS0_PACRB         (*(unsigned volatile int*)  0xFC000104)
#define AIPS0_PACRC         (*(unsigned volatile int*)  0xFC000108)
#define AIPS0_PACRD         (*(unsigned volatile int*)  0xFC00010C)

// Clock monitor unit

#define CMU0_ISR            (*(unsigned volatile int*)  0xFBFB0210)
#define CMU0_CSR            (*(unsigned volatile int*)  0xFBFB0200)

#define CMU0_CSR_CME              0
#define CMU0_ISR_OLRI             0 

// Mode Entry

#define MC_ME_MCTL_DRUN     0b0011
#define MC_ME_KEY           0x5AF0
#define MC_ME_INVERTED_KEY  0xA50F

#define MC_ME_GS            (*(unsigned volatile int*)  0xFFFB8000)
#define MC_ME_MCTL          (*(unsigned volatile int*)  0xFFFB8004)
#define MC_ME_DRUN_MC       (*(unsigned volatile int*)  0xFFFB802C)
#define MC_ME_RUN_PC0       (*(unsigned volatile int*)  0xFFFB8080)
#define MC_ME_CCTL3         (*(unsigned volatile short*)0xFFFB81CA)
#define MC_ME_CADDR3        (*(unsigned volatile int*)  0xFFFB81EC)

// Mode configuration register bits
#define MC_ME_MODE_MC_SYSCLK      0
#define MC_ME_MODE_MC_IRCON       4
#define MC_ME_MODE_MC_XOSCON      5
#define MC_ME_MODE_MC_PLL0ON      6
#define MC_ME_MODE_MC_PLL1ON      7
#define MC_ME_MODE_MC_SDPLLON     8

#define MC_ME_GS_S_MTRANS         27
#define MC_ME_GS_S_XOSC           5
#define MC_ME_GS_S_PLL0           6
#define MC_ME_GS_S_PLL1           7

#define MC_ME_MCTL_TARGET_MODE    28

#define MC_ME_MODE_MC_SYSCLK_PLL1 0b0100

// Clock generation module

#define MC_CGM_SC_DC0       (*(unsigned volatile int*)  0xFFFB07E8)
#define MC_CGM_SC_DC1       (*(unsigned volatile int*)  0xFFFB07EC)
#define MC_CGM_SC_DC2       (*(unsigned volatile int*)  0xFFFB07F0)
#define MC_CGM_SC_DC3       (*(unsigned volatile int*)  0xFFFB07F4)
#define MC_CGM_SC_DC4       (*(unsigned volatile int*)  0xFFFB07F8)

#define MC_CGM_SC_DC_DIV          16
#define MC_CGM_SC_DC_DE           31

#define MC_CGM_AC0_SC       (*(unsigned volatile int*)  0xFFFB0800)
#define MC_CGM_AC0_DC0      (*(unsigned volatile int*)  0xFFFB0808)
#define MC_CGM_AC0_DC2      (*(unsigned volatile int*)  0xFFFB0810)

#define MC_CGM_AC_DC_DIV          16
#define MC_CGM_AC_DC_DE           31
#define MC_GCM_AC0_SC_SELCTL      24

#define MC_CGM_AC3_SC       (*(unsigned volatile int*)  0xFFFB0860)
#define MC_CGM_AC3_SS       (*(unsigned volatile int*)  0xFFFB0864)

#define MC_CGM_AC3_SC_SELCTL      24

#define MC_CGM_AC4_SC       (*(unsigned volatile int*)  0xFFFB0880)
#define MC_CGM_AC4_SS       (*(unsigned volatile int*)  0xFFFB0884)

#define MC_CGM_AC4_SC_SELCTL      24

#define MC_CGM_AC7_SC       (*(unsigned volatile int*)  0xFFFB08E0)
#define MC_CGM_AC7_DC0      (*(unsigned volatile int*)  0xFFFB08E8)

#define MC_CGM_AC7_SC_SELCTL      24

#define MC_CGM_AC14_DC0     (*(unsigned volatile int*)  0xFFFB09C8)

#define MC_CGM_AC14_DC0_DIV       16
#define MC_CGM_AC14_DC0_DE        31

// Periodic interrupt timer

#define PIT0_MCR            (*(unsigned volatile int*)  0xFFF84000)

#define PIT0_MCR_FRZ              0
#define PIT0_MCR_MDIS             1

#define PIT0_LDVAL0         (*(unsigned volatile int*)  0xFFF84100)
#define PIT0_TCTRL0         (*(unsigned volatile int*)  0xFFF84108)

#define PIT0_TCTRL0_TEN           0
#define PIT0_TCTRL0_TIE           1

#define PIT0_TFLG0          (*(unsigned volatile int*)  0xFFF8410C)

#define PIT0_TFLG0_TIF            0

// PLL interface

// PLL0 registers
#define PLLDIG_PLL0CR       (*(unsigned volatile int*)  0xFFFB0100)
#define PLLDIG_PLL0SR       (*(unsigned volatile int*)  0xFFFB0104)
#define PLLDIG_PLL0DV       (*(unsigned volatile int*)  0xFFFB0108)

// PLL0CR bits
#define PLLDIG_PLL0CR_LOLIE       3
#define PLLDIG_PLL0CR_CLKCFG      8

// PLL0SR bits
#define PLLDIG_PLL0SR_LOCK        2
#define PLLDIG_PLL0SR_LOLF        3

// PLL0DV bits
#define PLLDIG_PLL0DV_MFD         0
#define PLLDIG_PLL0DV_PREDIV      12
#define PLLDIG_PLL0DV_RFDPHI      16
#define PLLDIG_PLL0DV_RFDPHI1     27

// PLL1 registers
#define PLLDIG_PLL1CR       (*(unsigned volatile int*)  0xFFFB0120)
#define PLLDIG_PLL1SR       (*(unsigned volatile int*)  0xFFFB0124)
#define PLLDIG_PLL1DV       (*(unsigned volatile int*)  0xFFFB0128)
#define PLLDIG_PLL1FM       (*(unsigned volatile int*)  0xFFFB012C)
#define PLLDIG_PLL1FD       (*(unsigned volatile int*)  0xFFFB0130)

// PLL1CR bits
#define PLLDIG_PLL1CR_LOLIE       3
#define PLLDIG_PLL1CR_CLKCFG      8

// PLL1SR bits
#define PLLDIG_PLL1SR_LOCK        2
#define PLLDIG_PLL1SR_LOLF        3

// PLL1DV bits
#define PLLDIG_PLL1DV_MFD         0
#define PLLDIG_PLL1DV_RFDPHI      16

#define PLLDIG_PLL1FD_FRCDIV      0
#define PLLDIG_PLL1FD_FDEN        30

// Interrupt controller

#define INTC_BCR            (*(unsigned volatile int*)  0xFC040000)

#define INTC_BCR_HVEN1            4
#define INTC_BCR_HVEN2            8

#define INTC_CPR1           (*(unsigned volatile int*)  0xFC040014)

#define INTC_CPR_PRI              0

#define INTC_IACKR1         (*(unsigned volatile int*)  0xFC040024)

#define INTC_IACKR_INTVEC         2
#define INTC_IACKR_VTBA           12

#define INTC_PSR226         (*(unsigned volatile short*) 0xFC040224)
#define INTC_PSR_PRIN             0
#define INTC_PSR_PRC_SELN1        14

// Multipurpose registers

#define MCB_MISC1           (*(unsigned volatile int*)  0xFFC0C010)
#define MCB_CLKOUT_SEL      (*(unsigned volatile int*)  0xFFC10028)

#define MCB_MISC1_SIN_END_BYP     16

#define MCB_CLKOUT_SEL_CGM_SINK_SEL_3 20
#define MCB_CLKOUT_SEL_CLKOUT1    2
#define MCB_CLKOUT_SEL_CLKOUT0    6

// RADAR Analog Front-End

#define AFE_OSCCTRL         (*(unsigned volatile int*)  0xFBF0C000)

#define AFE_OSCCTRL_EN_EXT        11
#define AFE_OSCCTRL_ICAL          4

// Unknown reserved registers - needed for oscillator

#define DCL_IPS_2           (*(unsigned volatile int*)  0xFFC18000)

// System Integration Unit

#define SIUL2_MSCR0         (*(unsigned volatile int*)  0xFFFC0240)
#define SIUL2_MSCR_OBE            25

#define SIUL2_MSCR22        (*(unsigned volatile int*)  0xFFFC0298)

#define SIUL2_GPDO0         (*(unsigned volatile int*)  0xFFFC1300)
#define SIUL2_GPDO0_PDO0          24

// Watchdog

#define SWT_1_CR            (*(unsigned volatile int*)  0xFC054000)
#define SWT_1_SR            (*(unsigned volatile int*)  0xFC054010)

