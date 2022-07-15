#ifndef __AWR2944_h__
#define __AWR2994_h__

// CPU by default switches to ARM mode when handling interrupts/exceptions, and needs a special calling and returning convention,
// so we use this for defining interrupt/exception functions
#define ARM_IRQ_FUNC __attribute__((interrupt("irq"))) __attribute__((target("arm")))

// MSS_TOPRCM
#define MSS_TOPRCM_BASE 0x02140000UL
#define MSS_TOPRCM_PLL_CORE_CLKCTRL (*(unsigned long volatile*)(MSS_TOPRCM_BASE+0x404))
#define MSS_TOPRCM_PLL_CORE_CLKCTRL_IDLE  23
#define MSS_TOPRCM_PLL_CORE_CKLCTRL_TINTZ 0
#define MSS_TOPRCM_PLL_CORE_TENABLE (*(unsigned long volatile*)(MSS_TOPRCM_BASE+0x408))
#define MSS_TOPRCM_PLL_CORE_TENABLEDIV (*(unsigned long volatile*)(MSS_TOPRCM_BASE+0x40C))
#define MSS_TOPRCM_PLL_CORE_M2NDIV  (*(unsigned long volatile*)(MSS_TOPRCM_BASE+0x410))
#define MSS_TOPRCM_PLL_CORE_M2NDIV_M2 16
#define MSS_TOPRCM_PLL_CORE_M2NDIV_N  0
#define MSS_TOPRCM_PLL_CORE_MN2DIV (*(unsigned long volatile*)(MSS_TOPRCM_BASE+0x414))
#define MSS_TOPRCM_PLL_CORE_MN2DIV_N2 16
#define MSS_TOPRCM_PLL_CORE_MN2DIV_M  0
#define MSS_TOPRCM_PLL_CORE_STATUS (*(unsigned long volatile*)(MSS_TOPRCM_BASE+0x424))
#define MSS_TOPRCM_PLL_CORE_HSDIVIDER (*(unsigned long volatile*)(MSS_TOPRCM_BASE+0x428))
#define MSS_TOPRCM_PLL_CORE_HSDIVIDER_TENABLEDIV 2
#define MSS_TOPRCM_PLL_CORE_STATUS_PHASELOCK 10
#define MSS_TOPRCM_PLL_CORE_CLKOUT2 (*(unsigned long volatile*)(MSS_TOPRCM_BASE+0x434))
#define MSS_TOPRCM_PLL_CORE_CLKOUT2_PWDN      12
#define MSS_TOPRCM_PLL_CORE_CLKOUT2_GATE_CTRL 8
#define MSS_TOPRCM_PLL_CORE_CLKOUT2_DIV       0
#define MSS_CR5_CLK_SRC_SEL (*(unsigned long volatile*)(MSS_TOPRCM_BASE+0x43C))

// MSS_IOMUX
#define MSS_IOMUX_BASE 0x020C0000UL
#define MSS_IOMUX_PADAZ (*(unsigned long volatile*)(MSS_IOMUX_BASE+0x064))
#define MSS_IOMUX_IOCFGKICK0 (*(unsigned long volatile*)(MSS_IOMUX_BASE+0x1F8))
#define MSS_IOMUX_IOCFGKICK0_KEY 0x83E70B13
#define MSS_IOMUX_IOCFGKICK1 (*(unsigned long volatile*)(MSS_IOMUX_BASE+0x1FC))
#define MSS_IOMUX_IOCFGKICK1_KEY 0x95A4F1E0

// MSS_GIO
#define MSS_GIO_BASE 0x02F7B400UL
#define MSS_GIOGCR   (*(unsigned long volatile*)(MSS_GIO_BASE+0x000))
#define MSS_GIODIRA  (*(unsigned long volatile*)(MSS_GIO_BASE+0x034))
#define MSS_GIODOUTA (*(unsigned long volatile*)(MSS_GIO_BASE+0x03C))

// MSS_RTI
#define MSS_RTIA_BASE 0x02F7A000UL
#define MSS_RTIA_RTIGCTRL (*(unsigned long volatile*)(MSS_RTIA_BASE+0x00))
#define MSS_RTIA_RTIGCTRL_CNT0EN 0
#define MSS_RTIA_RTICOMPCTRL (*(unsigned long volatile*)(MSS_RTIA_BASE+0x0C))
#define MSS_RTIA_RTICOMPCTRL_COMPSEL3 12
#define MSS_RTIA_RTICOMPCTRL_COMPSEL2 8
#define MSS_RTIA_RTICOMPCTRL_COMPSEL1 4
#define MSS_RTIA_RTIFRC0 (*(unsigned long volatile*)(MSS_RTIA_BASE+0x10))
#define MSS_RTIA_RTICPUC0 (*(unsigned long volatile*)(MSS_RTIA_BASE+0x18))
#define MSS_RTIA_RTICOMP0 (*(unsigned long volatile*)(MSS_RTIA_BASE+0x50))
#define MSS_RTIA_RTIUDCP0 (*(unsigned long volatile*)(MSS_RTIA_BASE+0x54))
#define MSS_RTIA_RTISETINTENA (*(unsigned long volatile*)(MSS_RTIA_BASE+0x80))
#define MSS_RTIA_RTISETINTENA_SETINT0 0
#define MSS_RTIA_RTICLEARINTENA (*(unsigned long volatile*)(MSS_RTIA_BASE+0x84))
#define MSS_RTIA_RTICLEARINTENA_CLEARINT0 0
#define MSS_RTIA_RTIINTFLAG (*(unsigned long volatile*)(MSS_RTIA_BASE+0x88))
#define MSS_RTIA_RTIINTFLAG_INT0 0
#define MSS_RTIA_CLK_SRC_SEL (*(unsigned long volatile*)(0x02100028))

// MSS_VIM
#define MSS_VIM_R5A_BASE 0x02080000UL
#define MSS_VIM_R5A_IRQVEC (*(unsigned long volatile*)(MSS_VIM_R5A_BASE+0x018))
#define MSS_VIM_R5A_INTR_EN_SET (*(unsigned long volatile*)(MSS_VIM_R5A_BASE+0x408))
#define MSS_VIM_R5A_INTR_EN_SET_MSS_RTIA_INT0 3
#define MSS_VIM_R5A_STS (*(unsigned long volatile*)(MSS_VIM_R5A_BASE+0x404))
#define MSS_VIM_R5A_STS_MSS_RTIA_INT0 3
#define MSS_VIM_R5A_IRQSTS (*(unsigned long volatile*)(MSS_VIM_R5A_BASE+0x410))
#define MSS_VIM_R5A_IRQSTS_MSS_RTIA_INT0 3
#define MSS_VIM_R5A_INTVECTOR_3 (*(unsigned long volatile*)(MSS_VIM_R5A_BASE+0x200C))

#endif
