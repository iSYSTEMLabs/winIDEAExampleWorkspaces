// Software Watchdog timer
#define SWT_CR                 (*(unsigned volatile int*) 0xFFF38000)  // Control register
#define SWT_IR                 (*(unsigned volatile int*) 0xFFF38004)  // Interrupt register
#define SWT_SR                 (*(unsigned volatile int*) 0xFFF38010)  // Status register
#define INTC_MCR               (*(unsigned volatile int*) 0xFFF48000)

// Interrupt Controller
#define INTC0_MCR (*(unsigned long volatile*)0xFFF48000)
#define INTC0_CPR (*(unsigned long volatile*)0xFFF48008)
#define INTC0_IACKR (*(unsigned long volatile*)0xFFF48010)
#define INTCx_PIT_CHANNEL_0_IRQ_INDEX 59

#define INTC0_PSR56_59 (*(unsigned long volatile*)0xFFF48078)
#define INTC0_PSR56_59_PRI59 0

// PLL Registers
#define PLL_CR                 (*(unsigned long volatile*)0xC3FE00A0)

// Mode Entry Registers
#define ME_GS                  (*(unsigned long volatile*)0xC3FDC000)
#define ME_MCTL                (*(unsigned long volatile*)0xC3FDC004)
#define ME_RUN0_MC             (*(unsigned long volatile*)0xC3FDC030)
#define ME_RUN_PC0             (*(unsigned long volatile*)0xC3FDC080)
#define ME_PCTL92              (*(unsigned long volatile*)0xC3FDC11C)

#define MODE                   (4 << 28)

// PIT Registers
#define PIT_PITMCR              (*(unsigned long volatile*)0xC3FF0000)
#define PIT_LDVAL0              (*(unsigned long volatile*)0xC3FF0100)
#define PIT_TCTRL0              (*(unsigned long volatile*)0xC3FF0108)
#define PIT_TFLG0               (*(unsigned long volatile*)0xC3FF010C)

// SIUL Regsiters
#define SIUL_PCR16             (*(unsigned short volatile*)0xC3F90060) 
#define SIUL_GPDO16_19         (*(unsigned long volatile*)0xC3F90610)

void targetInit(void);
void initClock(void);
void initTimer(void);
void targetInit(void);
void targetEnableInterrupts(void);
void disableWatchdog(void);
