//TIMER//
#define TCPWM0_GRP0_CNT0_CTRL        (*(volatile unsigned int*)0x40380000)
#define TCPWM0_GRP0_CNT0_COUNTER     (*(volatile unsigned int*)0x40380008)
#define TCPWM0_GRP0_CNT0_PERIOD      (*(volatile unsigned int*)0x40380020)
#define TCPWM0_GRP0_CNT0_CC0         (*(volatile unsigned int*)0x40380010)
#define TCPWM0_GRP0_CNT0_CC0_BUFF    (*(volatile unsigned int*)0x40380014)
#define TCPWM0_GRP0_CNT0_DT          (*(volatile unsigned int*)0x40380030)
#define TCPWM0_GRP0_CNT0_TR_IN_SEL0  (*(volatile unsigned int*)0x40380044)
#define TCPWM0_GRP0_CNT0_TR_IN_SEL1  (*(volatile unsigned int*)0x40380048)
#define TCPWM0_GRP0_CNT0_TR_CMD      (*(volatile unsigned int*)0x40380040)
#define TCPWM0_GRP0_CNT0_TR_IN_EDGE_SEL (*(volatile unsigned int*)0x4038004C)
#define TCPWM0_GRP0_CNT0_TR_PWM_CTRL (*(volatile unsigned int*)0x40380050)
#define TCPWM0_GRP0_CNT0_TR_IN_EDGE_SEL_START 8
#define TCPWM0_GRP0_CNT0_TR_IN_EDGE_SEL_RELOAD 4
#define TCPWM0_GRP0_CNT0_TR_OUT_SEL  (*(volatile unsigned int*)0x40380054)
#define TCPWM0_GRP0_CNT0_INTR        (*(volatile unsigned int*)0x40380070)
#define TCPWM0_GRP0_CNT0_INTR_MASK   (*(volatile unsigned int*)0x40380078)

#define TCPWM0_GRP2_CNT0_CTRL        (*(volatile unsigned int*)0x40390000)
#define TCPWM0_GRP2_CNT0_COUNTER     (*(volatile unsigned int*)0x40390008)
#define TCPWM0_GRP2_CNT0_PERIOD      (*(volatile unsigned int*)0x40390020)
#define TCPWM0_GRP2_CNT0_CC0         (*(volatile unsigned int*)0x40390010)
#define TCPWM0_GRP2_CNT0_CC0_BUFF    (*(volatile unsigned int*)0x40390014)
#define TCPWM0_GRP2_CNT0_DT          (*(volatile unsigned int*)0x40390030)
#define TCPWM0_GRP2_CNT0_TR_IN_SEL0  (*(volatile unsigned int*)0x40390044)
#define TCPWM0_GRP2_CNT0_TR_IN_SEL1  (*(volatile unsigned int*)0x40390048)
#define TCPWM0_GRP2_CNT0_TR_CMD      (*(volatile unsigned int*)0x40390040)
#define TCPWM0_GRP2_CNT0_TR_IN_EDGE_SEL (*(volatile unsigned int*)0x4039004C)
#define TCPWM0_GRP2_CNT0_TR_PWM_CTRL (*(volatile unsigned int*)0x40390050)
#define TCPWM0_GRP2_CNT0_TR_IN_EDGE_SEL_START 8
#define TCPWM0_GRP2_CNT0_TR_IN_EDGE_SEL_RELOAD 4
#define TCPWM0_GRP2_CNT0_TR_OUT_SEL  (*(volatile unsigned int*)0x40390054)
#define TCPWM0_GRP2_CNT0_INTR        (*(volatile unsigned int*)0x40390070)
#define TCPWM0_GRP2_CNT0_INTR_MASK   (*(volatile unsigned int*)0x40390078)

#define CLK_TIMER_CTL (*(volatile unsigned int*)0x40261504)
#define CLK_TIMER_CTL_ENABLE 31

#define CM0_SCS_SCR (*(volatile unsigned int*)0xE000ED10)
#define CM0_SCS_SCR_SLEEPDEEP 2

#define PERI_TR_CMD (*(volatile unsigned int*)0x40000220)
#define PERI_TR_CMD_ACTIVATE 31

#define SYSTICK_CTL (*(volatile unsigned int*)0x40201600)
#define SYSTICK_CTL_CLKSOURCE 24
#define SYSTICK_CTL_NOREF 31

#define PERI_CLOCK_CTL_47 (*(volatile unsigned int*)0x40000CBC)
#define PERI_CLOCK_CTL_31 (*(volatile unsigned int*)0x40000C7C)
#define PERI_CLOCK_CTL_106 (*(volatile unsigned int*)0x40000DA8)
#define PERI_DIV_16_CTL0 (*(volatile unsigned int*)0x40001400)
#define PERI_DIV_CMD (*(volatile unsigned int*)0x40000400)

#define CM0_SYSTEM_INT_CTL_273 (*(volatile unsigned int*)0x40208444)
#define CM0_SYSTEM_INT_CTL_273_INT_IDX 0
#define CM0_SYSTEM_INT_CTL_273_INT_VALID 31

#define CM0_SYSTEM_INT_CTL_274 (*(volatile unsigned int*)0x40208448)
#define CM0_SYSTEM_INT_CTL_274_INT_IDX 0
#define CM0_SYSTEM_INT_CTL_274_INT_VALID 31

#define CM0_SYSTEM_INT_CTL_348 (*(volatile unsigned int*)0x40208570)
#define CM0_SYSTEM_INT_CTL_348_INT_IDX 0
#define CM0_SYSTEM_INT_CTL_348_INT_VALID 31

#define CM0_SYSTEM_INT_CTL_349 (*(volatile unsigned int*)0x40208574)
#define CM0_SYSTEM_INT_CTL_349_INT_IDX 0
#define CM0_SYSTEM_INT_CTL_349_INT_VALID 31

#define CM0_SYSTEM_INT_CTL_12 (*(volatile unsigned int*)0x40208030)
#define CM0_SYSTEM_INT_CTL_12_INT_IDX 0
#define CM0_SYSTEM_INT_CTL_12_INT_VALID 31

#define NVIC_ISER_0 (*(volatile unsigned int*)0xE000E100)
#define NVIC_ISER_0_TCPWM 3
#define NVIC_ISER_2_TCPWM 7
#define NVIC_ISER_0_BACKUP 2

#define PWR_HIBERNATE (*(volatile unsigned int*)0x40261008)
#define PWR_HIBERNATE_TOKEN 0
#define PWR_HIBERNATE_UNLOCK 8
#define PWR_HIBERNATE_FREEZE 17
#define PWR_HIBERNATE_MASK_HIBALARM 18
#define PWR_HIBERNATE_MASK_HIBWDT 19
#define PWR_HIBERNATE_POLARITY_HIBPIN 20
#define PWR_HIBERNATE_MASK_HIBPIN 24
#define PWR_HIBERNATE_HIBERNATE_DISABLE 30
#define PWR_HIBERNATE_HIBERNATE 31

#define WDT_CTL (*(volatile unsigned int*)0x4026C000)
#define WDT_CTL_ENABLE 31

#define BACKUP_CTL (*(volatile unsigned int*)0x40270000)
#define BACKUP_CTL_WCO_EN 3
#define BACKUP_CTL_CLK_SEL 8
#define BACKUP_CTL_RPESCALER 12
#define BACKUP_RTC_RW (*(volatile unsigned int*)0x40270008)
#define BACKUP_RTC_RW_READ 0
#define BACKUP_RTC_RW_WRITE 1    
#define BACKUP_STATUS (*(volatile unsigned int*)0x40270010)
#define BACKUP_STATUS_WCO_OK 2
#define BACKUP_STATUS_RTC_BUSY 0
#define BACKUP_ALM1_TIME (*(volatile unsigned int*)0x4027001C)
#define BACKUP_ALM1_TIME_ALM_SEC 0
#define BACKUP_ALM1_TIME_ALM_SEC_EN 7
#define BACKUP_ALM1_DATE (*(volatile unsigned int*)0x40270020)
#define BACKUP_ALM1_DATE_ALM_EN 31
#define BACKUP_INTR (*(volatile unsigned int*)0x4027002C)
#define BACKUP_INTR_ALARM1 0
#define BACKUP_INTR_SET (*(volatile unsigned int*)0x40270030)
#define BACKUP_INTR_ALARM1 0
#define BACKUP_INTR_MASK (*(volatile unsigned int*)0x40270034)
#define BACKUP_INTR_MASK_ALARM1 0
#define BACKUP_RTC_TIME (*(volatile unsigned int*)0x40270014)
#define BACKUP_RESET (*(volatile unsigned int*)0x40270048)
#define BACKUP_RESET_RST 31
#define BACKUP_REG_0 (*(volatile unsigned int*)0x40271000)
#define SRSS_CLK_ILO0_CONFIG (*(volatile unsigned int*)0x40261508)
#define SRSS_CLK_ILO0_CONFIG_BACKUP 0

#define CM4_PWR_CTL (*(volatile unsigned int*)0x40201200)
#define CM4_PWR_CTL_MODE 0
#define CM4_PWR_CTL_VECTKEYSTAT 16
#define CM4_VECTOR_TABLE_BASE (*(volatile unsigned int*)0x40200200)

//PLL//
#define CLK_PATH_SELECT1   (*(volatile unsigned int*)0x40261204)
#define CLK_PATH_SELECT2   (*(volatile unsigned int*)0x40261208)
#define PATH_MUX           0
#define CLK_ROOT_SELECT0   (*(volatile unsigned int*)0x40261240)
#define ROOT_MUX           0
#define CLK_ECO_CONFIG     (*(volatile unsigned int*)0x4026151C)
#define ECO_EN             31
#define CLK_ECO_STATUS     (*(volatile unsigned int*)0x40261524)
#define CLK_PLL_CONFIG     (*(volatile unsigned int*)0x40261600)
#define REFERENCE_DIV      8
#define FEEDBACK_DIV       0
#define OUTPUT_DIV         16
#define ENABLE             31
#define CLK_PLL_STATUS     (*(volatile unsigned int*)0x40261640)
#define LOCKED             0
#define CM0_CLOCK_CTL      (*(volatile unsigned int*)0x40201008)
#define PERI_INT_DIV       24

//GPIO//
#define GPIO_PRT12_OUT      (*(volatile unsigned int*)0x40310600)
#define OUT6                6
#define GPIO_PRT12_CFG      (*(volatile unsigned int*)0x40310644)
#define DRIVE_MODE6         24
#define GPIO_PRT12_INV      (*(volatile unsigned int*)0x4031060C)
#define OUT6                6

#define GPIO_PRT8_OUT        (*(volatile unsigned int*)0x40310400)
#define OUT2                2
#define GPIO_PRT8_CFG       (*(volatile unsigned int*)0x40310444)
#define DRIVE_MODE2         8
#define GPIO_PRT8_INV       (*(volatile unsigned int*)0x4031040C)

//FLASH//
#define FLASH_CTL           (*(volatile unsigned int*)0x40240000)
#define MAIN_WS             0

void initTimer();
void setupRTCTimer();
