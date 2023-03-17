#define SYSCON_CPUCFG (*(volatile unsigned int*)0x50000FD4)
#define SYSCON_CPBOOT (*(volatile unsigned int*)0x50000804)
#define SYSCON_CPUCTRL (*(volatile unsigned int*)0x50000800)
#define CPU1ENABLE 2

#define SYSCON_PLL0CLKSEL (*(volatile unsigned int*)0x50000290)
#define SYSCON_PLL0CLKSEL_SEL 0 

#define SYSCON_PLL1CLKSEL (*(volatile unsigned int*)0x50000294)
#define SYSCON_PLL1CLKSEL_SEL 0 

#define SYSCON_PLL0NDEC (*(volatile unsigned int*)0x50000588)
#define SYSCON_PLL0NDEC_NDIV 0
#define SYSCON_PLL0NDEC_NREQ 8

#define SYSCON_PLL0PDEC (*(volatile unsigned int*)0x5000058C)
#define SYSCON_PLL0PDEC_PDIV 0
#define SYSCON_PLL0PDEC_PREQ 5

#define SYSCON_MAINCLKSELB (*(volatile unsigned int*)0x50000284)
#define SYSCON_MAINCLKSELB_SEL 0

#define SYSCON_MAINCLKSELA (*(volatile unsigned int*)0x50000280)
#define SYSCON_MAINCLKSELA_SEL 0

#define SYSCON_PLL0CTRL (*(volatile unsigned int*)0x50000580)
#define SYSCON_PLL0CTRL_CLKEN 21
#define SYSCON_PLL0CTRL_SELI 4
#define SYSCON_PLL0CTRL_SELP 10

#define SYSCON_PLL0SSCG0 (*(volatile unsigned int*)0x50000590)

#define SYSCON_PLL0SSCG1 (*(volatile unsigned int*)0x50000594)
#define SYSCON_PLL0SSCG1_MDIV_EXT 10
#define SYSCON_PLL0SSCG1_SEL_EXT 28
#define SYSCON_PLL0SSCG1_MREQ 26
#define SYSCON_PLL0SSCG1_MD_REQ 1

#define SYSCON_PLL0STAT (*(volatile unsigned int*)0x50000584) 

#define SYSCON_PRESETCTRLCLR2 (*(volatile unsigned int*)0x50000148)
#define SYSCON_PRESETCTRLCLR2_ANALOG_CTRL_RST 27

#define SYSCON_AHBCLKCTRLSET2 (*(volatile unsigned int*)0x50000228)
#define SYSCON_AHBCLKCTRLSET2_ANALOG_CTRL_MASK 0x8000000

#define SYSCON_AHBCLKCTRLSET1 (*(volatile unsigned int*)0x50000204)
#define SYSCON_AHBCLKCTRLSET1_TIMER0 26

#define CTIMER0_MCR (*(volatile unsigned int*)0x50008014)
#define CTIMER0_MCR_MR0R 1
#define CTIMER0_MCR_MR0I 0

#define CTIMER0_TCR (*(volatile unsigned int*)0x50008004)
#define CTIMER0_TCR_CEN 0 

#define CTIMER0_MR0 (*(volatile unsigned int*)0x50008018)

#define SYSCON_CTIMERCLKSEL0 (*(volatile unsigned int*)0x5000026C)

#define SYSCON_CLOCK_CTRL (*(volatile unsigned int*)0x50000A18)
#define SYSCON_CLOCK_CTRL_CLKIN_ENA 5

#define SYSCON_CLKOUTSEL (*(volatile unsigned int*)0x50000288)

#define SYSCON_CLKOUTDIV (*(volatile unsigned int*)0x50000384)
#define SYSCON_CLKOUTDIV_DIV 0
#define SYSCON_CLKOUTDIV_HALT 30

#define SYSCON_AHBCLKCTRLSET0 (*(volatile unsigned int*)0x50000220)
#define SYSCON_AHBCLKCTRLSET0_IOCON 13
#define SYSCON_AHBCLKCTRLSET0_GPIO1 15

#define ANACTRL_XO32M_CTRL (*(volatile unsigned int*)0x50013020)
#define ANACTRL_XO32M_CTRL_ENABLE_SYSTEM_CLK_OUT 24

#define ANACTRL_FRO192M_CTRL (*(volatile unsigned int*)0x50013010)
#define ANACTRL_FRO192M_CTRL_ENA_12MHZCLK 14
#define ANACTRL_FRO192M_CTRL_ENA_96MHZCLK 30

#define PMC_PDRUNCFGCLR0 (*(volatile unsigned int*)0x400200C8)
#define PMC_PDRUNCFGCLR0_PDEN_XTAL32M 8
#define PMC_PDRUNCFGCLR0_PDEN_LDOXO32M 20
#define PMC_PDRUNCFGCLR0_PDEN_PLL0 9
#define PMC_PDRUNCFGCLR0_PDEN_PLL0_SSCG 23 

#define PMC_PDRUNCFGSET0 (*(volatile unsigned int*)0x400200C0)

#define IOCON_PIO1_27 (*(volatile unsigned int*)0x400010EC)
#define IOCON_PIO1_27_FUNC 0

#define GPIO_DIR1 (*(volatile unsigned int*)0x4008E004)
#define GPIO_DIR1_PIO1_8 8

#define GPIO_NOT1 (*(volatile unsigned int*)0x4008E304)
#define GPIO_NOT1_PIO1_8 8

#define CTIMER0_IR (*(volatile unsigned int*)0x50008000)
#define CTIMER0_IR_MR0INT 0

#define NVIC_ISER0_ISER15 (*(volatile unsigned int*)0xE000E100)
#define NVIC_ICER0_ICER15 (*(volatile unsigned int*)0xE000E180)
#define NVIC_CTIMER0 10

#define ITM_BASE_ADDRESS (0xE0000000UL)
#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))
