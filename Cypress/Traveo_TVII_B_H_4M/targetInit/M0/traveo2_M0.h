//TIMER// 
#define TCPWM0_GRP0_CNT0_CTRL        (*(volatile unsigned int*)0x40580000)
#define TCPWM0_GRP0_CNT0_COUNTER     (*(volatile unsigned int*)0x40580008)
#define TCPWM0_GRP0_CNT0_PERIOD      (*(volatile unsigned int*)0x40580020)
#define TCPWM0_GRP0_CNT0_CC0         (*(volatile unsigned int*)0x40580010)
#define TCPWM0_GRP0_CNT0_CC0_BUFF    (*(volatile unsigned int*)0x40580014)
#define TCPWM0_GRP0_CNT0_DT          (*(volatile unsigned int*)0x40580030)
#define TCPWM0_GRP0_CNT0_TR_IN_SEL0  (*(volatile unsigned int*)0x40580044)
#define TCPWM0_GRP0_CNT0_TR_IN_SEL1  (*(volatile unsigned int*)0x40580048)
#define TCPWM0_GRP0_CNT0_TR_CMD      (*(volatile unsigned int*)0x40580040)
#define TCPWM0_GRP0_CNT0_TR_IN_EDGE_SEL (*(volatile unsigned int*)0x4058004C)
#define TCPWM0_GRP0_CNT0_TR_PWM_CTRL (*(volatile unsigned int*)0x40580050)
#define TCPWM0_GRP0_CNT0_TR_IN_EDGE_SEL_START 8
#define TCPWM0_GRP0_CNT0_TR_IN_EDGE_SEL_RELOAD 4
#define TCPWM0_GRP0_CNT0_TR_OUT_SEL  (*(volatile unsigned int*)0x40580054)
#define TCPWM0_GRP0_CNT0_INTR        (*(volatile unsigned int*)0x40580070)
#define TCPWM0_GRP0_CNT0_INTR_MASK   (*(volatile unsigned int*)0x40580078)

#define CM0_SYSTEM_INT_CTL_351   (*(volatile unsigned int*)0x4020857C)
#define CM0_SYSTEM_INT_CTL_351_INT_IDX 0
#define CM0_SYSTEM_INT_CTL_351_INT_VALID 31

#define NVIC_ISER_0 (*(volatile unsigned int*)0xE000E100)
#define NVIC_ISER_0_TCPWM 3
#define NVIC_ICLR_0 (*(volatile unsigned int*)0xE000E180)
#define NVIC_ICLR_0_TCPWM 3

#define CLK_TIMER_CTL (*(volatile unsigned int*)0x40261504)
#define CLK_TIMER_CTL_ENABLE 31

#define PERI_TR_CMD (*(volatile unsigned int*)0x40000220)
#define PERI_TR_CMD_ACTIVATE 31

#define SYSTICK_CTL (*(volatile unsigned int*)0x40201600)
#define SYSTICK_CTL_CLKSOURCE 24
#define SYSTICK_CTL_NOREF 31

#define PERI_CLOCK_CTL_6 (*(volatile unsigned int*)0x40040C18)
#define PERI_CLOCK_CTL_12 (*(volatile unsigned int*)0x40040C30)
#define PERI_CLOCK_CTL_47 (*(volatile unsigned int*)0x40040CBC)
#define PERI_CLOCK_CTL_31 (*(volatile unsigned int*)0x40040C7C)
#define PERI_CLOCK_CTL_38 (*(volatile unsigned int*)0x40042C98)
#define PERI_CLOCK_CTL_106 (*(volatile unsigned int*)0x40000DA8)
#define PERI_DIV_16_CTL0 (*(volatile unsigned int*)0x40041400)
#define PERI_DIV_16_CTL1 (*(volatile unsigned int*)0x40041404)
#define PERI_DIV_16_CTL2 (*(volatile unsigned int*)0x40041408)
#define PERI_DIV_16_CTL3 (*(volatile unsigned int*)0x4004140C)
#define PERI_DIV_16_CTL6 (*(volatile unsigned int*)0x40041418)
#define PERI_DIV_CMD (*(volatile unsigned int*)0x40040000)
#define PERI_PCLK_GR1_DIV_CMD (*(volatile unsigned int*)0x40042000)
#define PERI_PCLK_GR1_DIV_16_CTL0 (*(volatile unsigned int*)0x40043400)
#define CLK_OUTPUT_FAST (*(volatile unsigned int*)0x40260140)
#define CLK_OUTPUT_FAST_FAST_SEL0 0
#define CLK_OUTPUT_FAST_PATH_SEL0 4


//PLL//
#define CLK_PATH_SELECT0   (*(volatile unsigned int*)0x40261200)
#define CLK_PATH_SELECT1   (*(volatile unsigned int*)0x40261204)
#define CLK_PATH_SELECT2   (*(volatile unsigned int*)0x40261208)
#define PATH_MUX           0
#define CLK_ROOT_SELECT0   (*(volatile unsigned int*)0x40261240)
#define CLK_ROOT_SELECT1   (*(volatile unsigned int*)0x40261244)
#define CLK_ROOT_SELECT2   (*(volatile unsigned int*)0x40261248)
#define ROOT_MUX           0
#define CLK_ROOT_SELECT_ENABLE 31
#define CLK_ECO_CONFIG     (*(volatile unsigned int*)0x4026151C)
#define ECO_EN             31
#define CLK_ECO_STATUS     (*(volatile unsigned int*)0x40261524)
#define CLK_PLL_CONFIG0    (*(volatile unsigned int*)0x40261600)
#define CLK_PLL_CONFIG1    (*(volatile unsigned int*)0x40261604)
#define REFERENCE_DIV      8
#define FEEDBACK_DIV       0
#define OUTPUT_DIV         16
#define ENABLE             31
#define CLK_PLL_STATUS0    (*(volatile unsigned int*)0x40261640)
#define CLK_PLL_STATUS1    (*(volatile unsigned int*)0x40261644)
#define LOCKED             0
#define CM0_CLOCK_CTL      (*(volatile unsigned int*)0x40201008)
#define PERI_CLOCK_CTL_INT_DIV 8
#define PERI_CLOCK_CTL     (*(volatile unsigned int*)0x4020100C)
#define FAST_CLOCK_CTL     (*(volatile unsigned int*)0x40200008)
#define MEM_CLOCK_CTL      (*(volatile unsigned int*)0x40201010)


//GPIO//
#define GPIO_PRT12_OUT      (*(volatile unsigned int*)0x40310600)
#define OUT6                6
#define GPIO_PRT12_CFG      (*(volatile unsigned int*)0x40310644)
#define DRIVE_MODE6         24
#define GPIO_PRT12_INV      (*(volatile unsigned int*)0x4031060C)
#define OUT6                6

#define GPIO_PRT3_OUT      (*(volatile unsigned int*)0x40310180)
#define OUT2                2
#define GPIO_PRT3_CFG      (*(volatile unsigned int*)0x403101C4)
#define DRIVE_MODE2         8
#define GPIO_PRT3_INV      (*(volatile unsigned int*)0x4031018C)

//Hibernate LPM
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

//CM7
#define CPUSS_CM7_0_VECTOR_TABLE_BASE_REG     (*(unsigned long volatile*)(0x40200200))
#define CPUSS_CM7_1_VECTOR_TABLE_BASE_REG     (*(unsigned long volatile*)(0x40200600))

#define CPUSS_CM7_0_PWR_CTL_REG               (*(unsigned long volatile*)(0x40201200))
#define CPUSS_CM7_1_PWR_CTL_REG               (*(unsigned long volatile*)(0x40201210))
#define CPUSS_CM7_x_PWR_CTL_VECTKEYSTAT       0x05FA0000
#define CPUSS_CM7_x_PWR_CTL_PWR_MODE_ENABLE   0x3

#define CPUSS_CM7_0_CTL_REG                   (*(unsigned long volatile*)(0x4020000C))
#define CPUSS_CM7_1_CTL_REG                   (*(unsigned long volatile*)(0x4020040C))
#define CPUSS_CM7_x_CTL_CPU_WAIT              (1<<4)

#define SRSS_CLK_ROOT_SELECT1_REG             (*(unsigned long volatile*)(0x40261244))

//FLASH//
#define FLASH_CTL           (*(volatile unsigned int*)0x40240000)
#define MAIN_WS             0

