#define CKGEN_SRC_SEL                 (*(unsigned int *) (0x40000000))
#define PERI_CLK_EN_0                 (*(unsigned int *) (0x40000004))
#define PERI_SFT_RST1                 (*(unsigned int *) (0x40000018))

#define GPIO1_CR                      (*(unsigned int *) (0x40001030))
#define GPIO1_ODR                     (*(unsigned int *) (0x40001038))
#define GPIO2_CR                      (*(unsigned int *) (0x40001060))
#define GPIO2_ODR                     (*(unsigned int *) (0x40001068))

#define SPM_PWR_MGR_CFG0              (*(unsigned int *) (0x40008000))
#define SPM_PWR_MGR_CFG1              (*(unsigned int *) (0x40008004))
#define REG_MCU_SYSPLL1_CFG0          (*(unsigned int *) (0x40008890))

#define TIMER_MCR                     (*(unsigned int *) (0x40011000))
#define TIMER0_INITVAL                (*(unsigned int *) (0x40011100))
#define TIMER0_INIT                   (*(unsigned int *) (0x40011108))
#define TIMER0_TF                     (*(unsigned int *) (0x4001110C))

#define INT_0_31_SET_EN               (*(unsigned int *) (0xE000E100))
#define INT_32_63_SET_EN              (*(unsigned int *) (0xE000E104))
#define INT_0_31_CLR_EN               (*(unsigned int *) (0xE000E180))
#define INT_32_63_CLR_EN              (*(unsigned int *) (0xE000E184))

#define SCB_VTOR                      (*(unsigned int *) (0xE000ED08))