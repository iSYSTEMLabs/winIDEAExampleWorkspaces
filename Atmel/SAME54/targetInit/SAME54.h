#ifndef SAME54_H_INCLUDED
#define SAME54_H_INCLUDED

// Defines
#define MCLK_BASE (*(unsigned int volatile*)0x40000800)
#define MCLK_APBAMASK (*(unsigned int volatile*)0x40000814)
#define MCLK_APBAMASK_TC0 14

#define OSCCTRL_DPLL0CTRLA (*(unsigned int volatile*)0x40001030)
#define OSCCTRL_DPLL0CTRLA_ENABLE 1
#define OSCCTRL_DPLL0CTRLA_ONDEMAND 7
#define OSCCTRL_DPLL0CTRLB (*(unsigned int volatile*)0x40001038)
#define OSCCTRL_DPLL0CTRLB_DIV 16
#define OSCCTRL_DPLL0CTRLB_REFCLK 5
#define OSCCTRL_DPLL0RATIO (*(unsigned int volatile*)0x40001034)
#define OSCCTRL_DPLL0RATIO_LDR 0
#define OSCCTRL_DPLL0STATUS (*(unsigned int volatile*)0x40001040)
#define OSCCTRL_DPLL0STATUS_CLKRDY 1
#define OSCCTRL_DPLL0STATUS_LOCK 0

#define GCLK_BASE (*(unsigned int volatile*)0x40001C00)
#define GCLK_SYNCBUSY (*(unsigned int volatile*)0x40001C04)
#define GCLK_SYNCBUSY_GENCTRL0 2
#define GCLK_GENCTRL0 (*(unsigned int volatile*)0x40001C20)
#define GCLK_GENCTRL0_SRC 0
#define GCLK_PCHCTRL_TC0 (*(unsigned int volatile*)0x40001CA4)
#define GCLK_PCHCTRL_TC0_CHEN 6
#define GCLK_PCHCTRL_TRACE (*(unsigned int volatile*)0x40001D3C)
#define GCLK_PCHCTRL_TRACE_CHEN 6

#define PORT_BASE (*(unsigned int volatile*)0x41008000)
#define PORT_C_DIR (*(unsigned int volatile*)0x41008100)
#define PORT_C_OUTTGL (*(unsigned int volatile*)0x4100811C)

#define PIN_C_OUT 3

#define OSCCTRL_BASE (*(unsigned int volatile*)0x40001000)
#define OSCCTRL_XOSCCTRL1 (*(unsigned int volatile*)0x40001018)
#define OSCCTRL_XOSCCTRL1_ENABLE 1
#define OSCCTRL_XOSCCTRL1_XTALEN 2
#define OSCCTRL_XOSCCTRL1_ONDEMAND 7
#define OSCCTRL_XOSCCTRL1_IPTAT 9
#define OSCCTRL_XOSCCTRL1_IMULT 11
#define OSCCTRL_XOSCCTRL1_ENALC 15

#define TC0_BASE (*(unsigned int volatile*)0x40003800)
#define TC0_CTRLA (*(unsigned int volatile*)0x40003800)
#define TC0_CTRLA_ENABLE 1
#define TC0_CTRLA_MODE 2
#define TC0_CTRLA_PRESCALE 8
#define TC0_WAVE (*(unsigned int volatile*)0x4000380C)
#define TC0_WAVE_WAVEGEN 0
#define TC0_CC0 (*(unsigned int volatile*)0x4000381C)
#define TC0_INTENCLR (*(unsigned int volatile*)0x40003808)
#define TC0_INTENSET (*(unsigned int volatile*)0x40003809)
#define TC0_INTEN_MC0 4

#define INT_96_127_SET_EN (*(unsigned int volatile*)0xE000E10C)
#define INT_96_127_CLR_EN (*(unsigned int volatile*)0xE000E18C)
#define INT_107 11

#define FPU_CPACR (*(unsigned int volatile*)0xE000ED88)
#define FPU_CPACR_EN 20

#define ITM_BASE_ADDRESS (0xE0000000UL)
#define ITM_PORT0                    (*(unsigned int volatile*)ITM_BASE_ADDRESS)
#define ITM_LOCK_ACCESS_REGISTER     (*(unsigned int volatile*)(ITM_BASE_ADDRESS + 0x0FB0UL))
#define ITM_TRACE_ENABLE_REGISTER    (*(unsigned int volatile*)(ITM_BASE_ADDRESS + 0x0E00UL))
#define ITM_TRACE_PRIVILEGE_REGISTER (*(unsigned int volatile*)(ITM_BASE_ADDRESS + 0x0E40UL))

#endif