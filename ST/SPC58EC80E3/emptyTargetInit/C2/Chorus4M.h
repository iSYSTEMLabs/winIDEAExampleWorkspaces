#include "Eiger_6M_header_beta5.h"

#define SWT2_SR *(unsigned volatile int*) 0xF4058010
#define SWT2_CR *(unsigned volatile int*) 0xF4058000

/*
  PIT timer registers   
*/
#define PIT0_MCR (*(unsigned volatile int*)0xF7F84000)      // Module Control Register
#define PIT0_MCR_MDIS 1                                     // Module Disable
#define PIT0_LDVAL0 (*(unsigned volatile int*)0xF7F84100)   // PIT Timer Load Value Register 0
#define PIT0_TCTRL0 (*(unsigned volatile int*)0xF7F84108)   // PIT Timer Control Register 0
#define PIT0_TCTRL0_TIE 1                                   // Timer Interrupt Enable Bit
#define PIT0_TCTRL0_TEN 0                                   // Timer Enable Bit
#define PIT0_TFLG0 (*(unsigned volatile int*)0xF7F8410C)    // PIT Timer Flag Register 0
#define PIT0_TFLG0_TIF 0                                    // Timer Interrupt Flag

/*
   Interrupt registers
*/
#define INTC_PSR226 (*(unsigned volatile short*)0xF4044224) // Priority Select Register
#define INTC_PSR226_PRI 0                                   // Priority
#define INTC_PSR226_PRC_SEL2 13                             // Processor 2 select
#define INTC_PSR226_PRC_SEL0 15                             // Processor 0 select
#define INTC_CPR2 (*(unsigned volatile int*)0xF4044018)     // Current priority register
#define INTC_CPR2_PRI 0                                     // Priority
#define INTC_IACKR2 (*(unsigned volatile int*)0xF4044028)   // Interrupt acknowledge register
#define INTC_EOIR2 (*(unsigned volatile int*)0xF4044038)    // End of Interrupt Register for Processor 2

#define SIUL2_MSCR_IO0 (*(unsigned volatile int*)0xF7FC0240)
#define SIUL2_MSCR_IO0_IBE 19
#define SIUL2_MSCR_IO0_ODC 24
#define SIUL2_MSCR_IO0_WPUE 16
#define SIUL2_GPDO0 (*(unsigned volatile char*)0xF7FC1300)
#define SIUL2_GPDO0_PDO 0

/*
  Clock dividers and selectors  
*/
#define CGM_AC12_DC4 (*(unsigned volatile int*)0xF7FB0998)
#define CGM_AC12_DC4_DE 31 
#define CGM_AC12_DC4_DIV 16 
#define CGM_AC12_SC (*(unsigned volatile int*)0xF7FB0980) 
#define CGM_AC12_SC_SELCTL 24

//rt SRamPerformances: readInBps=92683, writeInBps=194632
