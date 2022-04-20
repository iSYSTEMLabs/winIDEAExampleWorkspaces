#define PFC_GSPR5 (*(unsigned volatile int*)0xE6060114)
#define PFC_GSPR5_P03 3
#define GPIO_IOINTSEL5 (*(unsigned volatile int*)0xE6055000)
#define GPIO_IOINTSEL5_P03 3
#define GPIO_INOUTSEL5 (*(unsigned volatile int*)0xE6055004)
#define GPIO_INOUTSEL5_P03 3
#define GPIO_OUTDT5 (*(unsigned volatile int*)0xE6055008)
#define GPIO_OUTDT5_P03 3

#define R7_PTMR_LOAD (*(unsigned volatile int*)0xF0000600)
#define R7_PTMR_COUNTER (*(unsigned volatile int*)0xF0000604)
#define R7_PTMR_CTR (*(unsigned volatile int*)0xF0000608)
#define R7_PTMR_CTR_IE 2
#define R7_PTMR_CTR_AR 1
#define R7_PTMR_CTR_TE 0
#define R7_PTMR_IST (*(unsigned volatile int*)0xF000060C)

#define ICDDCR (*(unsigned volatile int*)0xF0001000)
#define ICDDCR_EN 0  
#define ICDISER0 (*(unsigned volatile int*)0xF0001100)
#define ICDISER0_ID29 29
#define ICDICPR0 (*(unsigned volatile int*)0xF0001280)
#define ICDICPR0_ID29 29
#define ICDIPR7 (*(unsigned volatile int*)0xF000141C)
#define ICDIPR7_ID29 8
#define ICCICR (*(unsigned volatile int*)0xF0000100)
#define ICCICR_EN 0
#define ICCPMR (*(unsigned volatile int*)0xF0000104)
#define ICCPMR_PRIO 0

#define BOOT_ADDR_CA53C0 0xE6320000
#define BOOT_ADDR_CA53C1 0xE6320000
#define BOOT_ADDR_CA53C2 0xE6320000
#define BOOT_ADDR_CA53C3 0xE6320000
#define BOOT_ADDR_CA57C0 0xE6340000
#define BOOT_ADDR_CA57C1 0xE6340100

#define CA53CPU0BARL (*(unsigned volatile int*)0xE6160084)
#define CA53CPU1BARL (*(unsigned volatile int*)0xE6160094)
#define CA53CPU2BARL (*(unsigned volatile int*)0xE61600A4)
#define CA53CPU3BARL (*(unsigned volatile int*)0xE61600B4)
#define CA57CPU0BARL (*(unsigned volatile int*)0xE61600C4)
#define CA57CPU1BARL (*(unsigned volatile int*)0xE61600D4)
#define CPGWPCR (*(unsigned volatile int*)0xE6150904)
#define CPGWPCR_WPE 0
#define CPGWPR (*(unsigned volatile int*)0xE6150900) 
#define CA53WUPCR (*(unsigned volatile int*)0xE6151010)
#define CA57WUPCR (*(unsigned volatile int*)0xE6152010)
#define CA53RESCNT (*(unsigned volatile int*)0xE6160044)
#define CA57RESCNT (*(unsigned volatile int*)0xE6160040)
#define CA53PWRSR (*(unsigned volatile int*)0xE6180140)
#define CA53PWRSR_PWRDOWN 0
#define CA53PWRSR_PWRUP 4                              
#define CA57PWRSR (*(unsigned volatile int*)0xE61801C0)
#define CA57PWRSR_PWRDOWN 0
#define CA57PWRSR_PWRUP 4                              
#define CA53CPUCMCR (*(unsigned volatile int*)0xE6151184)
#define CA53CPUCMCR_CMPWR 0
#define CA57CPUCMCR (*(unsigned volatile int*)0xE6152184)
#define CA57CPUCMCR_CMPWR 0
#define SYSCIER (*(unsigned volatile int*)0xE618000C)
#define SYSCIER_CA53 21
#define SYSCIER_CA57 12
#define SYSCIMR (*(unsigned volatile int*)0xE6180010)
#define SYSCIMR_CA53 21
#define SYSCIMR_CA57 12
#define SYSCSR (*(unsigned volatile int*)0xE6180000)
#define SYSCSR_PONENB 1
#define CA53PWRONCR (*(unsigned volatile int*)0xE618014C)
#define CA53PWRONCR_PWRUP 0
#define CA57PWRONCR (*(unsigned volatile int*)0xE61801CC)
#define CA57PWRONCR_PWRUP 0
#define CA53PWRER (*(unsigned volatile int*)0xE6180154)
#define CA53PWRER_ERR 0
#define CA57PWRER (*(unsigned volatile int*)0xE61801D4)
#define CA57PWRER_ERR 0
#define SYSCISR (*(unsigned volatile int*)0xE6180004)
#define SYSCISR_CA53 21
#define SYSCISR_CA57 12
#define SYSCISCR (*(unsigned volatile int*)0xE6180008)
#define SYSCISCR_CA53 21
#define SYSCISCR_CA57 12

#define  PLATFORM_STM_AXI_ADDRESS    0xE9000000
#define  PLATFORM_STM_APB_ADDRESS    0xEA010000

/* core info */
#define MAX_CORES 7
#define ID_CORE_R7 0
#define ID_CORE_A57_0 1
#define ID_CORE_A57_1 2
#define ID_CORE_A53_0 3
#define ID_CORE_A53_1 4
#define ID_CORE_A53_2 5
#define ID_CORE_A53_3 6

/* fow syncing and inter core (inter AMP) communication */
extern int nHaltRequestTable[MAX_CORES][2];
extern int g_anCoresSyncTable[MAX_CORES];
extern int g_anCoresRunTable[MAX_CORES];
extern int g_anCoresCnt[MAX_CORES];

void defaultHandler(void);
void TimerInterruptHandler(void);
void initVector(void);
static void unlockIntCtrl(void);
static void lockIntCtrl(void);
void initTPU(void);
void initCPU(void);
void enableInterrupts(void);
void InterruptRoutine(void);