#define TCPWM0_GRP0_CNT0_CTRL       (*(volatile unsigned int*)0x40380000)
#define TCPWM0_GRP0_CNT0_PERIOD     (*(volatile unsigned int*)0x40380020)
#define TCPWM0_GRP0_CNT0_CC0        (*(volatile unsigned int*)0x40380010)
#define TCPWM0_GRP0_CNT0_CC0_BUFF   (*(volatile unsigned int*)0x40380014)
#define TCPWM0_GRP0_CNT0_TR_IN_SEL0 (*(volatile unsigned int*)0x40380044)
#define TCPWM0_GRP0_CNT0_TR_CMD     (*(volatile unsigned int*)0x40380040)

//GPIO//
#define GPIO_PRT12_OUT      (*(volatile unsigned int*)0x40310600)
#define OUT6                6
#define GPIO_PRT12_CFG      (*(volatile unsigned int*)0x40310644)
#define DRIVE_MODE6         24
#define GPIO_PRT12_INV      (*(volatile unsigned int*)0x4031060C)
#define OUT6                6

unsigned volatile char releaseCore;
