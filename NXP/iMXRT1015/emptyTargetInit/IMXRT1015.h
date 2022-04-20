#ifndef IMXRT1015_H
#define IMXRT1015_H

// Defines for watchdog 3
#define WDOG_BASE 0x400BC000
#define WDOG_CS *(unsigned volatile long*)(WDOG_BASE + 0x00)
#define WDOG_CNT *(unsigned volatile long*)(WDOG_BASE + 0x04)

#define WDOG_CS_ENABLE_MASK (1 << 7)
#define WDOG_CS_RCS_MASK (1 << 10)
#define WDOG_CS_ULK_MASK (1 << 11)

#define SRC_SCR *(unsigned volatile long*)(0x400F8000 + 0x00)
#define SRC_SRSR *(unsigned volatile long*)(0x400F8000 + 0x08)

// Defines for GPIO
#define CCM_BASE 0x400FC000
#define CCM_CCGR1 *(unsigned volatile long*)(CCM_BASE + 0x6C)

#define GPIO1_BASE (0x401B8000 + 0x0000)
#define GPIO1_GDIR *(unsigned volatile long*)(GPIO1_BASE + 0x04)
#define GPIO1_DR *(unsigned volatile long*)(GPIO1_BASE + 0x00)
#define GPIO1_TOGGLE *(unsigned volatile long*)(GPIO1_BASE + 0x8C)

#define GPIO3_BASE (0x401B8000 + 0x8000)
#define GPIO3_GDIR *(unsigned volatile long*)(GPIO3_BASE + 0x04)
#define GPIO3_DR *(unsigned volatile long*)(GPIO3_BASE + 0x00)
#define GPIO3_TOGGLE *(unsigned volatile long*)(GPIO3_BASE + 0x8C)

// Defines for Timer
#define CCM_CCGR6 *(unsigned volatile long*)(CCM_BASE + 0x80)
#define CCM_CSCMR1 *(unsigned volatile long*)(CCM_BASE + 0x1C)

#define PIT_BASE 0x40084000
#define PIT_MCR *(unsigned volatile long*)(PIT_BASE + 0x00)
#define PIT_LDVAL0 *(unsigned volatile long*)(PIT_BASE + 0x100)
#define PIT_CVAL0 *(unsigned volatile long*)(PIT_BASE + 0x104) 
#define PIT_TCTRL0 *(unsigned volatile long*)(PIT_BASE + 0x108) 
#define PIT_TFLG0 *(unsigned volatile long*)(PIT_BASE + 0x10C) 

// Defines for clock

#define CCM_CBCDR *(unsigned volatile long*)(CCM_BASE + 0x14)
#define CCM_CBCMR *(unsigned volatile long*)(CCM_BASE + 0x18)
#define CCM_CDHIPR *(unsigned volatile long*)(CCM_BASE + 0x48)

#define XTALOSC24M_BASE 0x400D8000
#define XTALOSC24M_MISC0 *(unsigned volatile long*)(XTALOSC24M_BASE + 0x150 + 4 * 0) 

#define CCM_ANALOG_PLL_SYS *(unsigned volatile long*)(XTALOSC24M_BASE + 0x30 + 4 * 0) 
#define CCM_ANALOG_PLL_ENET *(unsigned volatile long*)(XTALOSC24M_BASE + 0xE0 + 4 * 0) 
#define CCM_ANALOG_PLL_USB *(unsigned volatile long*)(XTALOSC24M_BASE + 0x10 + 4 * 0) 

#define DCDC_REG3 *(unsigned volatile long*)(0x40080000 + 0xC) 

#define CCM_CDHIPR_PERIPH2_CLK_SEL_BUSY 3
#define CCM_CDHIPR_PERIPH_CLK_SEL_BUSY 5

#endif // IMXRT1015_H