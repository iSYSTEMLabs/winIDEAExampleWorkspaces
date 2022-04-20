// Watchdog configuration registers
#define GPREG_SET_FREEZE_REG          (*(unsigned volatile short int *)0x50003300)
#define GPREG_SET_FREEZE_REG_FRZ_WDOG 3

// Clock init registers
#define CLK_CTRL                      (*(unsigned volatile short int *)0x5000000A)
#define CLK_CTRL_SYS_CLK_SEL          0
#define CLK_CTRL_PLL_DIV2             5
#define PLL_SYS_CTRL1                 (*(unsigned volatile short int *)0x50003310)
#define PLL_SYS_CTRL1_PLL_EN          0
#define PLL_SYS_CTRL1_LDO_PLL_EN      1
#define PLL_SYS_STATUS                (*(unsigned volatile short int *)0x50003316)
#define PLL_SYS_STATUS_LOCK_FINE      0

// Timer related registers
#define TIMER0_ON                     (*(unsigned volatile short int *)0x50003402)
#define TIMER0_CTRL                   (*(unsigned volatile short int *)0x50003400)
#define TIMER0_CTRL_TIM0_CTRL         0
#define TIMER0_CTRL_TIM0_CLK_SEL      1
#define TIMER0_CTRL_TIM0_CLK_DIV      2
#define CLK_TMR                       (*(unsigned volatile short int *)0x5000000C)
#define CLK_TMR_TMR0_DIV              0 
#define CLK_TMR_TMR0_ENABLE           2
#define CLK_TMR_TMR0_CLK_SEL          3
#define NVIC_ISER                     (*(unsigned volatile int *)0xE000E100)
#define NVIC_ISER_SWTIM0              18
#define NVIC_ICER                     (*(unsigned volatile int *)0xE000E180)
#define NVIC_ICER_SWTIM0              18

// GPIO related registers
#define P30_MODE                      (*(unsigned volatile short int *)0x5000304E)
#define P30_MODE_PID                  0
#define P30_MODE_PUPD                 8
#define P30_MODE_PPOD                 10
#define P3_DATA                       (*(unsigned volatile short int *)0x50003006)

#define DUMMY_ADDR                    (*(unsigned volatile long int *)0x8000010)