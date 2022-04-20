extern void watchdogUpdate();

#define OSTM0CMP    *(volatile unsigned long *)0xFFEC0000
#define OSTM0CTL    *(volatile unsigned char *)0xFFEC0020
#define OSTM0TS     *(volatile unsigned char *)0xFFEC0014
#define ICOSTM0     *(volatile unsigned char *)0xFFFFA098

#define P0          *(volatile unsigned char *)0xffc10000
#define PM0         *(volatile unsigned char *)0xffc10300
