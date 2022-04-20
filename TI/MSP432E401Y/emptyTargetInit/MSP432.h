
void profilerAddTestMessages();
int iInterruprCounter;
void targetInit();
void targetEnableInterrupts();
void targetDebug();
void targetShutdown();
void InitClocks();
void InitTimer();

#define ITM_BASE_ADDRESS (*(unsigned long int *)0xE0000000)

#define SYSCTLMOSCCTL (*(volatile unsigned int *)0x400FE07C)
#define SYSCTL_MOSCCTL_OSCRNG 4

#define SYSCTLPLLFREQ0 (*(volatile unsigned int *)0x400FE160)
#define SYSCTLPLLFREQ1 (*(volatile unsigned int *)0x400FE164)
#define SYSCTL_PLLFREQ0_MINT 0
#define SYSCTL_PLLFREQ0_PLLPWR 23
#define SYSCTL_PLLFREQ1_N 0
#define SYSCTL_PLLFREQ1_Q 8

#define SYSCTLRSCLKCFG (*(volatile unsigned int *)0x400FE0B0)
#define SYSCTL_RSCLKCFG_PSYSDIV 0
#define SYSCTL_RSCLKCFG_PLLSRC 24
#define SYSCTL_RSCLKCFG_OSCSRC 20
#define SYSCTL_RSCLKCFG_USEPLL 28
#define SYSCTL_RSCLKCFG_NEWFREQ 30
#define SYSCTL_RSCLKCFG_MEMTMIU 31

#define SYSCTLMEMTIM0 (*(volatile unsigned int *)0x400FE0C0)

#define SYSCTLPPSTAT (*(volatile unsigned int *)0x400FE168)

#define SYSCTLRCGCTIMER (*(volatile unsigned int *)0x400FE604)
#define SYSCTL_RCGCTIMER_R0 0

#define TIMER0TAMR (*(volatile unsigned int *)0x40030004)
#define TAMR 0
#define TIMER0CTL (*(volatile unsigned int *)0x4003000C)
#define TAEN 0
#define TIMER0IMR (*(volatile unsigned int *)0x40030018)
#define TATOIM 0
#define TIMER0ICR (*(volatile unsigned int *)0x40030024)
#define TATOCINT 0
#define TIMER0TAILR (*(volatile unsigned int *)0x40030028)

#define INT_0_31_SET_EN (*(volatile unsigned int *)0xE000E100)
#define INT_16_19_PRI (*(volatile unsigned int *)0xE000E410)
#define INT_0_31_CLR_PEND (*(volatile unsigned int *)0xE000E280)

#define SYSCTLRCGCGPIO (*(volatile unsigned int *)0x400FE608)
#define GPION_GPIOADATA (*(volatile unsigned int *)0x400643FC)
#define GPION_GPIOADIR (*(volatile unsigned int *)0x40064400)
#define GPION_GPIOADEN (*(volatile unsigned int *)0x4006451C)
