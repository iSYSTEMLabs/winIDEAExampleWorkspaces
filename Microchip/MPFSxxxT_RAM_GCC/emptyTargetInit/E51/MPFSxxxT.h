// ----- MSS PLL -------
#define IOSCB_PLL_MSS_SOFT_RESET (*(volatile unsigned int*) 0x3E001000)
#define SOFT_RESET_NV_MAP_MASK (1<<0)
#define SOFT_RESET_V_MAP_MASK  (1<<1)


struct IOSCB_PLL_MSS_PLL_CTRL_type
{
  unsigned int REG_POWERDOWN_B : 1;
  unsigned int REG_RFDIV_EN : 1;
  unsigned int REG_DIVQ0_EN : 1;
  unsigned int REG_DIVQ1_EN : 1;
  unsigned int REG_DIVQ2_EN : 1;
  unsigned int REG_DIVQ3_EN : 1;
  unsigned int REG_RFCLK_SEL : 1;
  unsigned int RESETONLOCK : 1;
  unsigned int BYPCK_SEL : 4;
  unsigned int REG_BYPASS_GO_B : 1;
  unsigned int reserved0 : 3;
  unsigned int REG_BYPASSPRE : 4;
  unsigned int REG_BYPASSPOST : 4;
  unsigned int LP_REQUIRES_LOCK : 1;
  unsigned int LOCK : 1;
  unsigned int LOCK_INT_EN : 1;
  unsigned int UNLOCK_INT_EN : 1;
  unsigned int LOCK_INT : 1;
  unsigned int UNLOCK_INT : 1;
  unsigned int reserved1 : 1;
  unsigned int LOCK_B : 1;
};

#define IOSCB_PLL_MSS_PLL_CTRL (*(volatile struct IOSCB_PLL_MSS_PLL_CTRL_type*) 0x3E001004)


struct IOSCB_PLL_MSS_PLL_REF_FB_type
{
  unsigned int FSE_B : 1;
  unsigned int FBCK_SEL  : 2;
  unsigned int FOUTFB_SELMUX_EN : 1;
  unsigned int reserved0 : 4;
  unsigned int RFDIV : 6;
  unsigned int reserved1 : 19;
};

#define IOSCB_PLL_MSS_PLL_REF_FB (*(volatile struct IOSCB_PLL_MSS_PLL_REF_FB_type*) 0x3E001008)


struct IOSCB_PLL_MSS_PLL_DIV_0_1_type
{
  unsigned int VCO0PH_SEL : 3;
  unsigned int DIV0_START : 3;
  unsigned int reserved0 : 2;
  unsigned int POST0DIV : 7;
  unsigned int reserved1 : 1;
  unsigned int VCO1PH_SEL : 3;
  unsigned int DIV1_START : 3;
  unsigned int reserved2 : 2;
  unsigned int POST1DIV : 7;
  unsigned int reserved3 : 1;
};

#define IOSCB_PLL_MSS_PLL_DIV_0_1 (*(volatile struct IOSCB_PLL_MSS_PLL_DIV_0_1_type*) 0x3E001010)


struct IOSCB_PLL_MSS_SSCG_REG_2_type
{
  unsigned int INTIN : 12;
  unsigned int INTMOD : 12;
  unsigned int reserved0 : 8;
};

#define IOSCB_PLL_MSS_SSCG_REG_2 (*(volatile struct IOSCB_PLL_MSS_SSCG_REG_2_type*) 0x3E00102C)


struct IOSCB_PLL_MSS_SSCG_REG_3_type
{
  unsigned int SSE_B : 1;
  unsigned int SEL_EXTWAVE : 2;
  unsigned int EXT_MAXADDR : 8;
  unsigned int TBLADDR : 8;
  unsigned int RANDOM_FILTER : 1;
  unsigned int RANDOM_SEL : 2;
  unsigned int reserved0 : 1;
  unsigned int reserved1 : 9;
};

#define IOSCB_PLL_MSS_SSCG_REG_3 (*(volatile struct IOSCB_PLL_MSS_SSCG_REG_3_type*) 0x3E001030)


struct IOSCB_CFM_MSS_PLL_CKMUX_type
{
  unsigned int clk_in_mac_tsu_sel : 2;
  unsigned int pll0_rfclk0_sel : 2;
  unsigned int pll0_rfclk1_sel : 2;
  unsigned int pll1_rfclk0_sel : 2;
  unsigned int pll1_rfclk1_sel : 2;
  unsigned int pll1_fdr_sel : 5;
  unsigned int reserved0 : 17;
};

#define IOSCB_CFM_MSS_PLL_CKMUX (*(volatile struct IOSCB_CFM_MSS_PLL_CKMUX_type*) 0x3E002008)
#define PLL_CKMUX_SCB 2

// ----- Clock config ------
struct CLOCK_CONFIG_CR_type
{
  unsigned int divider_CPU : 2;
  unsigned int divider_AXI : 2;
  unsigned int divider_AHB_APB : 2;
  unsigned int reserved0 : 2;
  unsigned int enable_1mhz : 1;
  unsigned int reserved1 : 23;
};

#define CLOCK_CONFIG_CR (*(volatile struct CLOCK_CONFIG_CR_type*) 0x20002008)
#define CLOCK_CONFIG_DIV_1 0
#define CLOCK_CONFIG_DIV_2 1
#define CLOCK_CONFIG_DIV_4 2


struct MSSCLKMUX_type
{
  unsigned int mux_sel : 2;
  unsigned int mux_md : 2;
  unsigned int standby_sel : 1;
  unsigned int reserved0 : 27;
};

#define MSSCLKMUX (*(volatile struct MSSCLKMUX_type*) 0x3E00200C)

#define MUX_SEL_MSS_PLL 1


// ----- Timer -------
#define MSTIMER_TIM1LOADVAL (*(volatile unsigned int*) 0x20125004)


struct MSTIMER_TIM1CONTROL_type
{
  unsigned int TIM1ENABLE : 1;
  unsigned int TIM1MODE : 1;
  unsigned int TIM1INTEN : 1;
  unsigned int reserved0 : 29;
};

#define MSTIMER_TIM1CONTROL (*(volatile struct MSTIMER_TIM1CONTROL_type*) 0x2012500C)

#define MSTIMER_TIM1RIS (*(volatile unsigned int*) 0x20125010)



// ----- Interrupts -------
#define PLIC_Hart0_IE1 (*(volatile unsigned int*) 0x0C002000)
#define PLIC_Hart0_IE3 (*(volatile unsigned int*) 0x0C002008)
#define PLIC_Hart0_IE6 (*(volatile unsigned int*) 0x0C00201C)
#define PLIC_IE3_Timer1_Msk (1<<18);
#define PLIC_IP_Timer1 (*(volatile unsigned int*) 0xC000148)
#define PLIC_Hart0_IPT (*(volatile unsigned int*) 0xC200000)


// ----- GPIO -------
struct GPIO_CONFIG_type
{
  unsigned int EN_OUT : 1;
  unsigned int EN_IN : 1;
  unsigned int EN_OE_BUF : 1;
  unsigned int EN_INT : 1;
  unsigned int reserved0 : 1;
  unsigned int TYPES_INT : 3;
  unsigned int reserved1 : 24;
};

// LED1
#define GPIO_FAB_CONFIG_3  (*(volatile struct GPIO_CONFIG_type*) 0x2012200C)
#define GPIO_FAB_CONFIG_16 (*(volatile struct GPIO_CONFIG_type*) 0x20122040)

#define GPIO_FAB_SET_BITS (*(volatile unsigned int*) 0x201220A4)
#define GPIO_FAB_GPOUT (*(volatile unsigned int*) 0x20122088)

// ----- Function declarations ------
void targetInit(void);

void initTimer(void);

void disableWatchdog(void);

void targetShutdown(void);

void targetEnableInterrupts(void);



void initClock(void);

