/* WDOG Registers */
#define   WDOG_CTRL   *((volatile unsigned long*)0x40052000)
#define   WDOG_CTRL_EN  0xFF

/* RCM Registers */
#define RCM_SRIE          *((volatile unsigned long*)0x4007F01C)

/* SMC Registers */
#define SMC_PMCRTL        *((volatile unsigned long*)0x4007E00C)  

/* SCB Registers */
#define   SCG_RCCR        *((volatile unsigned long*)0x40064014) 
#define   SCG_CLKOUTCNFG  *((volatile unsigned long*)0x40064020)
#define   SCG_SOSCCFG      *((volatile unsigned long*)0x40064108) 
#define   SCG_FIRCCSR     *((volatile unsigned long*)0x40064300) 
#define   SCG_FIRCDIV     *((volatile unsigned long*)0x40064304) 
#define   SCG_FIRCCFG     *((volatile unsigned long*)0x40064308) 
#define   SCG_SPLLCSR     *((volatile unsigned long*)0x40064600) 
#define   SCG_SPLLDIV     *((volatile unsigned long*)0x40064604) 
#define   SCG_SPLLCFG     *((volatile unsigned long*)0x40064608) 
            
#define   SCG_RCCR_MASK    0x06010013
#define   SCG_CLKOUT_MASK  0x06000000
#define   SCG_FIRCSCR_MASK 0x00000001
#define   SCG_FIRCDIV_MASK 0x00000000
#define   SCG_FIRCCFG_MASK 0x00000000
#define   SCG_SPLLCSR_MASK 0x03000001  
#define   SCG_SPLLDIV_MASK 0x00000000
#define   SCG_SPLLCFG_MASK 0x00000001

/* GPIO Registers */
#define   PTA_PDOR *((volatile unsigned long*)0x400FF000)
#define   PTA_PSOR *((volatile unsigned long*)0x400FF004)  // Register for setting PORTA output 
#define   PTA_PCOR *((volatile unsigned long*)0x400FF008)  // Register for clearing PORTA output 
#define   PTA_PTOR *((volatile unsigned long*)0x400FF00C)  // Register for toggling PORTA output 
#define   PTA_PDDR *((volatile unsigned long*)0x400FF014)  // Register for configuring PORTA direction 
#define   PTA_PIDR *((volatile unsigned long*)0x400FF018)  // Register for disabling PORTA input 

#define   PTA_PIN 12 

/* PCC Register */
#define   PCC_PORTA *((volatile unsigned long*)0x40065124)
#define   PCC_LPIT  *((volatile unsigned long*)0x400650DC)

#define   PCC_PORTA_EN 0x40000000
#define   PCC_LPIT_EN  0x43000000
//#define   PCC_LPIT_EN  0x46000000

/* LPIT Registers */
#define   LPIT_MCR    *((volatile unsigned long*)0x40037008)   
#define   LPIT_MSR    *((volatile unsigned long*)0x4003700C)  
#define   LPIT_MIER   *((volatile unsigned long*)0x40037010)   
#define   LPIT_SETTEN *((volatile unsigned long*)0x40037014)   
#define   LPIT_CLRTEN *((volatile unsigned long*)0x40037018)   
#define   LPIT_TVAL0  *((volatile unsigned long*)0x40037020)   
#define   LPIT_CVAL0  *((volatile unsigned long*)0x40037024)   
#define   LPIT_TCTRL0 *((volatile unsigned long*)0x40037028)   

#define   LPIT_MCR_EN  0x1 
#define   LPIT_TFLG    0x1  // Write logic 1 to LPIT_MSR to clear the flag
#define   LPIT_INT_EN  0x1
#define   LPIT_EN      0x1
#define   LPIT_VAL     0x00017880
#define   LPIT_CFG     0x00840001

/* NVIC Registers */
#define   NVIC_ISER1   *((volatile unsigned long*)0xE000E104)   
#define   NVIC_ICER1   *((volatile unsigned long*)0xE000E184)   
#define   NVIC_ISPR1   *((volatile unsigned long*)0xE000E204)   
#define   NVIC_ICPR1   *((volatile unsigned long*)0xE000E284)   

#define   NVIC_LPIT0   16

/* VTOR Register */
#define VTOR           *((volatile unsigned long*)0xE000ED08)

/* Special Trace message registers */
#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))
#define ITM_BASE_ADDRESS (0xE0000000UL)
#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)

/* Function Declarations */
void targetInit(void);
void targetEnableInterrupts(void);
void disableWatchdog(void);
void initClock(void);
void initLPIT(void);