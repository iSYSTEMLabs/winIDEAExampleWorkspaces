#define ITM_BASE_ADDRESS *(unsigned volatile int*) 0xE0000000 

/*
  Clock registers (base 0x40001C00)  
*/
#define GCLK_GENCTRL0 (*(unsigned volatile int*)0x40001C20)
#define GCLK_GENCTRL0_SRC 0
#define GCLK_GENCTRL0_GENEN 8
#define GCLK_GENCTRL0_DIVSEL 12
#define OSCCTRL_OSC48MDIV (*(unsigned volatile char*)0x40001015)
#define OSCCTRL_OSC48MDIV_DIV 0
#define OSCCTRL_OSC48MCTRL (*(unsigned volatile char*)0x40001014)
#define OSCCTRL_OSC48MCTRL_ENABLE 1
#define OSCCTRL_DPLLCTRLA (*(unsigned volatile char*)0x4000101C)
#define OSCCTRL_DPLLCTRLA_ENABLE 1
#define OSCCTRL_DPLLRATIO (*(unsigned volatile int*)0x40001020)
#define OSCCTRL_DPLLSYNCBUSY (*(unsigned volatile char*)0x4000102C)
#define OSCCTRL_DPLLSYNCBUSY_ENABLE 1
#define OSCCTRL_DPLLSTATUS (*(unsigned volatile char*)0x40001030)
#define OSC32KCTRL_XOSC32K (*(unsigned volatile char*)0x40001414)
#define OSC32KCTRL_XOSC32K_XTALEN 2
#define OSC32KCTRL_XOSC32K_EN32K 3
#define OSC32KCTRL_XOSC32K_EN 1

/*
  Flash registers   
*/
#define NVMCTRL_CTRLB (*(unsigned volatile int*)0x41004004)
#define NVMCTRL_CTRLB_RWS 1

/*
  Timer registers (base 0x42003000)   
*/
#define TC0_WAVE (*(unsigned volatile int*)0x4200300C)
#define TC0_WAVE_WAVEGEN 0
#define TC0_EVCTRL (*(unsigned volatile short*)0x42003006)
#define TC0_EVCTRL_EVACT 0
#define TC0_EVCTRL_TCEI 5
#define TC0_EVCTRL_MCEO0 12
#define TC0_CTRLB (*(unsigned volatile char*)0x42003005)
#define TC0_CTRLB_CMD 5
#define TC0_CC (*(unsigned volatile int*)0x4200301C)
#define TC0_CTRLA (*(unsigned volatile int*)0x42003000)
#define TC0_CTRLA_ENABLE 1
#define TC0_INTENSET (*(unsigned volatile char*)0x42003009)
#define TC0_INTENSET_MC0 4
#define TC0_INTFLAG (*(unsigned volatile char*)0x4200300A)
#define TC0_INTFLAG_MC0 4
#define TC0_SYNCBUSY (*(unsigned volatile int*)0x42003010)
#define TC0_SYNCBUSY_ENABLE 1
#define MCLK_APBCMASK (*(unsigned volatile int*)0x4000081C)
#define MCLK_APBCMASK_TC0 12
#define GCLK_PCHTRL30 (*(unsigned volatile int*)0x40001CF8)
#define GCLK_PCHTRL30_CHEN 6
#define TC0_COUNT (*(unsigned volatile short*)0x42003014)

/*
  Port registers (base 0x41000000)   
*/
#define PORT_DIR (*(unsigned volatile int*)0x41000000)
#define PORT_OUTTGL (*(unsigned volatile int*)0x4100001C)
#define PORT_PIN 15

/*
  Interrupt registers   
*/
#define INT_0_31_SET_EN (*(unsigned volatile int*)0xE000E100)
#define INT_0_31_CLR_EN (*(unsigned volatile int*)0xE000E180)
#define INT_TC0 20

void targetInit();
void targetEnableInterrupts();
void targetShutdown();
void disableWatchdog();