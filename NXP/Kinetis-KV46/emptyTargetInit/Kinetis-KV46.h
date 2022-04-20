
#define OSC_CR (*(volatile char*)0x40065000)
#define OSC_CR_ERCLKEN 7

#define MCG_C2 (*(volatile char*)0x40064001)
#define MCG_C2_LP 1
#define MCG_C2_EREFS 2
#define MCG_C2_HGO 3
#define MCG_C2_RANGE 4

#define MCG_C1 (*(volatile char*)0x40064000)

#define MCG_C1_IREFS 2
#define MCG_C1_FRDIV 3
#define MCG_C1_CLKS 6

#define MCG_S (*(volatile char*)0x40064006)
#define MCG_S_OSCINIT0 1
#define MCG_S_CLKST 2
#define MCG_S_IREFST 4
#define MCG_S_PLLST 5
#define MCG_S_LOCK0 6

#define MCG_C5 (*(volatile char*)0x40064004)
#define MCG_C5_PRDIV 0

#define MCG_C6 (*(volatile char*)0x40064005)
#define MCG_C6_VDIV 0
#define MCG_C6_PLLS 6


#define SIM_CLKDIV1 (*(volatile int*)0x40048044)
#define SIM_CLKDIV1_OUTDIV4 16

#define GPIO_PIN 4
#define GPIO_PTOR (*(volatile int*)0x400FF10C)
#define GPIO_PDDR (*(volatile int*)0x400FF114)



#define SIM_SCG5 (*(volatile int*)0x40048038)
#define SIM_SCG5_PORTE 13

#define PORTE_PCR4 (*(volatile int*)0x4004D010)
#define PORTE_PCR4_MUX 8

#define SIM_SGC5 (*(volatile int*)0x4004803C)
#define SIM_SGC5_PIT 23

#define PIT_MCR (*(volatile int*)0x40037000)
#define PIT_MCR_MDIS 1

#define PIT_LDVAL (*(volatile int*)0x40037100)

#define INT_32_63_SET_EN (*(volatile int*)0xE000E104)
#define INT_32_63_SET_EN_PIT0 16

#define PIT_TCTRL (*(volatile int*)0x40037108)
#define PIT_TCTRL_TE 0
#define PIT_TCTRL_TIE 1

#define PIT_TFLG (*(volatile int*)0x4003710C)
#define PIT_TFLG_TIF 0

void disableWatchdog();