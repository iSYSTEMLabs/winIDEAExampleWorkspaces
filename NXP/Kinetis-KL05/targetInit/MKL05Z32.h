// SIM
#define SIM_COPC          (*(unsigned long volatile*)0x40048100)
#define COPT              ((1 << 2) | (1 << 3))                     // Disable watchdog

#define SIM_CLKDIV1       (*(unsigned long volatile*)0x40048044)    // System CLK divider
#define SIM_FCFG1         (*(unsigned long volatile*)0x4004804C)    // Flash configuration

#define SIM_SOPT2         (*(unsigned long volatile*)0x40048004)
#define SIM_SOPT4         (*(unsigned long volatile*)0x4004800C)

#define SIM_SCGC5         (*(unsigned long volatile*)0x40048038)
#define SIM_SCGC6         (*(unsigned long volatile*)0x4004803C)

// CLOCK
#define MCG_C1            (*(unsigned char volatile*)0x40064000)   
#define MCG_C1_CLKS       ((1 << 6) | (1 << 7))
#define MCG_C2            (*(unsigned char volatile*)0x40064001)
#define MCG_C4            (*(unsigned char volatile*)0x40064003)
#define DRST_DRS          (1 << 5)
#define MCG_S             (*(unsigned char volatile*)0x40064006)
#define IREFST            (1 << 4)
#define MCG_SC            (*(unsigned char volatile*)0x40064008)

// TIMER
#define PIT_MCR           (*(unsigned long volatile*)0x40037000)
#define PIT_LDVAL0        (*(unsigned long volatile*)0x40037100)
#define PIT_CVAL0         (*(unsigned long volatile*)0x40037104)
#define PIT_TCTRL0        (*(unsigned long volatile*)0x40037108)
#define PIT_TFLG0         (*(unsigned long volatile*)0x4003710C)

// NVIC
#define ISER0             (*(unsigned long volatile*)0xE000E100) 
#define ICER0             (*(unsigned long volatile*)0xE000E180) 

// GPIO
#define GPIOB_PDOR        (*(unsigned long volatile*)0x400FF040)
#define GPIOB_PSOR        (*(unsigned long volatile*)0x400FF044)
#define GPIOB_PCOR        (*(unsigned long volatile*)0x400FF048)
#define GPIOB_PTOR        (*(unsigned long volatile*)0x400FF04C)
#define GPIOB_PDIR        (*(unsigned long volatile*)0x400FF050)
#define GPIOB_PDDR        (*(unsigned long volatile*)0x400FF054)

#define PORTB_PCR10       (*(unsigned long volatile*)0x4004A028)

// VTOR
#define VTOR              (*(unsigned long volatile*)0xE000ED08)

// ITM
#define ITM_BASE_ADDRESS             (*(unsigned long volatile*)0xE0000000)
#define ITM_LOCK_ACCESS_REGISTER     (*(unsigned long volatile*)0xE0000FB0)
#define ITM_TRACE_ENABLE_REGISTER    (*(unsigned long volatile*)0xE0000E00) 
#define ITM_TRACE_PRIVILEGE_REGISTER (*(unsigned long volatile*)0xE0000E40)
#define ITM_TRACE_CONTROL_REGISTER   (*(unsigned long volatile*)0xE0000E80)