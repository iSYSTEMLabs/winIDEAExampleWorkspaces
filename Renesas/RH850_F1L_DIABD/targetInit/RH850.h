extern void watchdogUpdate();

#define OSTM0CMP    *(volatile unsigned long *)0xFFEC0000
#define OSTM0CTL    *(volatile unsigned char *)0xFFEC0020
#define OSTM0TS     *(volatile unsigned char *)0xFFEC0014
#define ICOSTM0     *(volatile unsigned char *)0xFFFFA098

#define P0          *(volatile unsigned short *)0xffc10000
#define PM0         *(volatile unsigned short *)0xffc10300
                                                                  
#define MOSCC              *(volatile unsigned long *) 0xfff81108
#define MOSCST             *(volatile unsigned long *) 0xfff8110c
#define PROTCMD0           *(volatile unsigned long *) 0xfff80000
#define MOSCE              *(volatile unsigned long *) 0xfff81100
#define MOSCS              *(volatile unsigned long *) 0xfff81104
#define PLLC               *(volatile unsigned long *) 0xfff89008
#define PLLE               *(volatile unsigned long *) 0xfff89000
#define PLLS               *(volatile unsigned long *) 0xfff89004
#define PROTCMD1           *(volatile unsigned long *) 0xfff88000
#define CKSC_CPUCLKD_CTL   *(volatile unsigned long *) 0xfff8a100
#define CKSC_CPUCLKD_ACT   *(volatile unsigned long *) 0xfff8a108
#define CKSC_CPUCLKS_CTL   *(volatile unsigned long *) 0xfff8a000
#define CKSC_CPUCLKS_ACT   *(volatile unsigned long *) 0xfff8a008
