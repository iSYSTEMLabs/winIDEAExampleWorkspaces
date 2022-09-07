#ifndef __e200z0h_h__
#define __e200z0h_h__

// System Status and Configuration Module
#define SSCM_BASE 0xC3FD8000UL
#define SSCM_DPMBOOT (*(unsigned long volatile*)(SSCM_BASE+0x18))
#define SSCM_DPMKEY (*(unsigned long volatile*)(SSCM_BASE+0x1C))
#define SSCM_DPMKEY_FIRST 0x5AF0
#define SSCM_DPMKEY_SECOND 0xA50F

// Mode Entry Module
#define ME_GS (*(unsigned long volatile*)(0xC3FDC000))
#define ME_GS_S_CURRENT_MODE 28

#define ME_MCTL (*(unsigned long volatile*)0xC3FDC004)
#define ME_MCTL_KEY 0x5AF0
#define ME_MCTL_KEYINV 0xA50F

#define ME_MCTL_TARGET_MODE 28
#define ME_MODE_RUN0 4

#define ME_DRUN_MC (*(unsigned long volatile*)0xC3FDC02C)
#define ME_RUN0_MC (*(unsigned long volatile*)0xC3FDC030)
#define ME_x_MC_FMPLL_0ON 6
#define ME_x_MC_XOSCON 5
#define ME_x_MC_SYSCLK 0
#define ME_x_MC_SYSCLK_FMPLL_0_PCS 4

#define ME_RUN_PC0 (*(unsigned long volatile*)0xC3FDC080)
#define ME_RUN_PCx_DRUN 3

// Clock - FMPLL
#define CLOCK_CR (*(unsigned long volatile*)0xC3FE00A0)
#define CLOCK_CR_IDF 26
#define CLOCK_CR_ODF 24
#define CLOCK_CR_NDIV 16
#define CLOCK_CR_EN_PLL_SW 8

// System Integration Unit Lite
#define SIUL_BASE 0xC3F90000UL
#define SIUL_GPDO_BASE (SIUL_BASE+0x0600)
#define SIUL_GPDO16_19 (*(unsigned long volatile*)(SIUL_GPDO_BASE+(4 * 16/4))) // reg_bytes * regname_firstnr/gpio_per_reg
#define SIUL_GPDO16_19_PDO16 24

#define SIUL_PCR_BASE (SIUL_BASE+0x0040)
#define SIUL_PCR16 (*(unsigned short volatile*)(SIUL_PCR_BASE+16*2)) // reg_index*reg_bytes
#define SIUL_PCRx_OBE 9

// Periodic Interrupt Timer
#define PIT_BASE 0xC3FF0000UL
#define PIT_PITMCR (*(unsigned long volatile*)(PIT_BASE))
#define PIT_PITMCR_MDIS 1
#define PIT_PITMCR_FRZ 0

#define PIT_LDVAL0 (*(unsigned long volatile*)(PIT_BASE+0x0100))
#define PIT_CVAL0 (*(unsigned long volatile*)(PIT_BASE+0x104))
#define PIT_TCTRL0 (*(unsigned long volatile*)(PIT_BASE+0x108))
#define PIT_TCTRLx_TIE 1
#define PIT_TCTRLx_TEN 0

#endif
