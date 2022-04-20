#ifndef SP49_H_INCLUDED
#define SP49_H_INCLUDED

typedef unsigned int uint32_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;

void Lib_State_Low_Power(uint32_t Config);
uint32_t Lib_Calib_Precounter(uint8_t PreCount_msec);
uint32_t Lib_Serv_Init_Interval_Timer(uint16_t Post_Cnt);

#define LOW_PWR_PWRDOWN   0x0
#define LOW_PWR_STANDBY   0x1
#define COM_MISC_EXT_LP_STNDBY					((uint32_t)0xFFFFFFFFU)
#define COM_MISC_EXT_LP_PWD						((uint32_t)0)

#define Wakeup_Controller_DEVCTRL                 (*((volatile unsigned int *)0x40000008))
#define Wakeup_Controller_DEVCTRL_ITINIT_OFFSET   16
#define Wakeup_Controller_DEVCTRL_ITINIT_FLAG     1 << DEVCTRL_ITINIT_OFFSET 

#define Wakeup_Controller_DEVSTATUS   (*((volatile unsigned int *)0x40000004))

#define System_Controller_SYSCCTRL (*((volatile unsigned int *)0x40001010))
#define System_Controller_SYSCCTRL_DIVIC 0
#define System_Controller_SYSCCTRL_IDLE 31
#define SYSCCFG_IDLE_MASK       0x40000000

#define Corelogic_TIMERCFG01    (*((volatile unsigned int *)0x40005000))
#define Corelogic_TIMERCFG01_WDRES 12
#define Corelogic_TIMERCFG01_T0CLKSEL 0
#define Corelogic_TIMERCFG01_T0DIVSEL 4
#define Corelogic_TIMERCFG01_T0RUN 8
#define Corelogic_TIMERCFG01_T01MODE 27
#define Corelogic_TIMERCFG01_T01EN 31
#define Corelogic_TIMERCFG01_T01EN_Msk    (0x80000000UL) 
#define Corelogic_COLFLAGS    (*((volatile unsigned int *)0x40005008))
#define Corelogic_COLFLAGS_T0FULL 9
#define Corelogic_COLFLAGS_T0FULL_Msk (0x200UL)
#define Corelogic_COLFLAGS_T1FULL 10
#define Corelogic_COLFLAGS_ITSTATUS 11

#define System_Controller_STMR (*((volatile unsigned int *)0x40001000))
#define System_Controller_STMR_STMREN 31

#define System_Controller_RESUMEMASK (*((volatile unsigned int *)0x4000100C))
#define System_Controller_RESUMEMASK_RET0M 0
#define System_Controller_RESUMEMASK_RESTFM 2
#define System_Controller_RESUMEFLAGS (*((volatile unsigned int *)0x40001008))



#define Corelogic_TIMER01       (*((volatile unsigned int *)0x40005004))


#endif