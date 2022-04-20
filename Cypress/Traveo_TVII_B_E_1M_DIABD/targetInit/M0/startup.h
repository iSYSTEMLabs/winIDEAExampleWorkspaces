#ifndef STARTUP_H
#define STARTUP_H

#define VTOR (*(unsigned volatile long *)0xE000ED08)

#define TCPWM0_GRP0_CNT0_INTR (*(volatile unsigned int*)0x40380070)
#define TCPWM0_GRP0_CNT0_COUNTER (*(volatile unsigned int*)0x40380008)

#endif //STARTUP_H