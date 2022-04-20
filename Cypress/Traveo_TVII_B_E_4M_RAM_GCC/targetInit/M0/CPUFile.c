#include "Traveo2_M0.h"

/* For M4 Core */
extern unsigned long _isrVectAddr;
extern unsigned long VECTA_ORIGIN;
extern unsigned long VECTB_ORIGIN;
extern unsigned long cm4OffsetInFlash;
extern unsigned long cm4OffsetInRam;

unsigned long GetSecondaryEntry()
{
    if ((unsigned long)(&_isrVectAddr) == (unsigned long)(&VECTA_ORIGIN))
    {
        return (unsigned long)(&_isrVectAddr) + (unsigned long)(&cm4OffsetInFlash);
    }
    return (unsigned long)(&_isrVectAddr) + (unsigned long)(&cm4OffsetInRam);
}

void initClock(void)
{
    CLK_ECO_CONFIG |= (1 << ECO_EN); //enable external 16 MHz oscillator
    while (!(CLK_ECO_STATUS & ECO_READY_OK))
        ;                               //wait until ECKP_OK and ECO_READY status are set
    CLK_PATH_SELECT1 = (2 << PATH_MUX); //select external oscillator for clock path1

    int value = 0;
    //1. set PLL parameters to suitable values
    //Fpll = (FEEDBACK_DIV) * (Fref / REFERENCE_DIV) / (OUTPUT_DIV)
    value |= (2 << REFERENCE_DIV);
    value |= (40 << FEEDBACK_DIV);
    value |= (2 << OUTPUT_DIV);
    CLK_PLL_CONFIG = value;

    // Set Cortex M4 frequency to 80 MHz but set Cortex M0+ to 40 MHz with divider
    CM0_CLOCK_CTL |= (1 << PERI_INT_DIV);

    //2. enable PLL
    CLK_PLL_CONFIG |= (1 << ENABLE);

    //3. wait until PLL is locked. When PLL is lock, PLL is automatically chosen
    while (!(CLK_PLL_STATUS & (1 << LOCKED)))
        ;

    CLK_ROOT_SELECT0 |= (1 << ROOT_MUX);   //select PLL (PATH1) for CPU clock
    CLK_ROOT_SELECT0 |= (1 << DIRECT_MUX); // Use previously configured ROOT_MUX
}


void initTIM(void)
{
    //GRP0 CNT0 16-bit counter
    PERI_CLOCK_CTL_41 = 0x00000100;
    CLK_TIMER_CTL |= (0x1 << CLK_TIMER_CTL_ENABLE);

    PERI_DIV_16_CTL0 |= (39 << 8); // Clock divided by 39+1 -> 2MHz
    int tempDIV_CMD = 0x00000000;
    tempDIV_CMD |= (0x1 << 31);
    tempDIV_CMD |= (0x3 << 24);
    tempDIV_CMD |= (0xFF << 16);
    tempDIV_CMD |= (0x1 << 8);

    PERI_DIV_CMD = tempDIV_CMD;

    // Reset timer
    TCPWM0_GRP0_CNT0_CTRL = 0;
    TCPWM0_GRP0_CNT0_CTRL |= (0x1 << 0);

    // Set prescaler
    TCPWM0_GRP0_CNT0_CC0 = 2000;
    TCPWM0_GRP0_CNT0_CC0_BUFF = 2000;
    TCPWM0_GRP0_CNT0_PERIOD = 2000;

    // Enable counter
    TCPWM0_GRP0_CNT0_CTRL |= (1 << 31);

    TCPWM0_GRP0_CNT0_TR_CMD |= (0x1 << 4);

    TCPWM0_GRP0_CNT0_INTR_MASK |= (0x2 << 0);
}

void initITM(void)
{
    (*(unsigned volatile long *)ITM_LOCK_ACCESS_REGISTER) = 0xC5ACCE55;  // Unlock write access to ITM
    (*(unsigned volatile long *)ITM_TRACE_ENABLE_REGISTER) = 0xFFFFFFFF; // Enable stimulus port 0-31
    (*(unsigned volatile long *)ITM_TRACE_PRIVILEGE_REGISTER) = 0x1;     // Set privilege
}


void targetEnableInterrupts(void)
{
    __asm volatile("cpsie i" : : : "memory");

    // Enable interrupts for TCPWM GRP0 CNT0
    CM0_SYSTEM_INT_CTL_300 &= ~(0x7 << CM0_SYSTEM_INT_CTL_300_INT_IDX);
    CM0_SYSTEM_INT_CTL_300 |= (0x3 << CM0_SYSTEM_INT_CTL_300_INT_IDX);
    CM0_SYSTEM_INT_CTL_300 |= (0x1 << CM0_SYSTEM_INT_CTL_300_INT_VALID);

    NVIC_ISER_0 |= (0x1 << NVIC_ISER_0_TCPWM);
}


void enableSecondaryCore(void)
{
    unsigned long dwCY_CORTEX_M4_APPL_ADDR = GetSecondaryEntry();
    CM4_VECTOR_TABLE_BASE = dwCY_CORTEX_M4_APPL_ADDR;
    CM4_PWR_CTL = 0x05FA0003; // Register key applied with PWR mode of 0x3
}

void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

    initClock();
    initTIM();

    enableSecondaryCore();
    initITM();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
}
