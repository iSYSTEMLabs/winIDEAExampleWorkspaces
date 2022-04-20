#include "Traveo2_M0.h"

extern unsigned long _isrVecB;

/* For M4 Core */
extern unsigned long _isrVectAddr;
extern unsigned long VECTA_ORIGIN;
extern unsigned long VECTB_ORIGIN;
extern unsigned long cm4OffsetInFlash;
extern unsigned long cm4OffsetInRam;

unsigned long GetSecondaryEntry()
{
  if ( (unsigned long)(&_isrVectAddr) == (unsigned long)(&VECTA_ORIGIN) )
  {
    return (unsigned long)(&_isrVectAddr) + (unsigned long)(&cm4OffsetInFlash);
  }
  return (unsigned long)(&_isrVectAddr) + (unsigned long)(&cm4OffsetInRam);
}

void initClock(void) 
{
  CLK_ECO_CONFIG |= (1 << ECO_EN); //enable external 16 MHz oscillator
  while(!(CLK_ECO_STATUS & ECO_READY_OK));  //wait until ECKP_OK and ECO_READY status are set
  CLK_PATH_SELECT1 = (2 << PATH_MUX); //select external oscillator for clock path1
  
  int value = 0;
  //1. set PLL parameters to suitable values
  //Fpll = (FEEDBACK_DIV) * (Fref / REFERENCE_DIV) / (OUTPUT_DIV)
  //because something is strange, Fpll is set to 80 MHz, not max. 160 MHz.
  value |= (2 << REFERENCE_DIV);
  value |= (40 << FEEDBACK_DIV);
  value |= (2 << OUTPUT_DIV);
  CLK_PLL_CONFIG = value;
  
  //set Cortex M4 frequency to 80 MHz but set Cortex M0+ to 40 MHz with divider
  CM0_CLOCK_CTL |= (1 << PERI_INT_DIV);
  
  //2. enable PLL
  CLK_PLL_CONFIG |= (1 << ENABLE);
  
  //3. wait until PLL is locked. When PLL is lock, PLL is automatically chosen
  while(!(CLK_PLL_STATUS & (1 << LOCKED)));
  
  FLASH_CTL |= (1 << MAIN_WS); //set wait state for flash to 1
  
  CLK_ROOT_SELECT0 |= (1 << ROOT_MUX); //select PLL for CPU clock
}


void initTIM(void) 
{
  PERI_DIV_16_CTL0 |= (0x27 << 8); // Configure divider to divide CLK_PERI (80MHz) by 39+1 -> 2MHz
  PERI_CLOCK_CTL_31 = 0x00000100; // Tell which divider to use and which type (16-bit divider, 0 index)
 
  int tempDIV_CMD = 0x00000000;
  tempDIV_CMD |= (0x1 << 31); // Enable clock divider
  tempDIV_CMD |= (0x3 << 24); // 24.5 Fractional clock divider
  tempDIV_CMD |= (0xFF << 16); // 255 for phase alignment divider
  tempDIV_CMD |= (0x1 << 8); // Command will be performed on 16 clock divider
  
  PERI_DIV_CMD = tempDIV_CMD; // Enable 16-bit clock divider 
    
  TCPWM0_GRP0_CNT0_CTRL = 0x1; // Autoreload CC0 on compare match 0
  
  TCPWM0_GRP0_CNT0_CC0 = 2000; // Set compare value to 2000 - with 2MHz clock, compare hits at 1ms
  TCPWM0_GRP0_CNT0_CC0_BUFF = 2000; // Store CC0 value for autoreload
  
  TCPWM0_GRP0_CNT0_PERIOD = 2000; // Counter max count before overflow
  
  TCPWM0_GRP0_CNT0_CTRL |= (1 << 31); // Counter enable
  TCPWM0_GRP0_CNT0_TR_CMD |= (0x1 << 4);  // Start trigger for timer 
  
  TCPWM0_GRP0_CNT0_INTR_MASK |= (1 << 1); // Set interrupt mask for Capture Compare 0
}

void initITM(void)
{
  (*(unsigned volatile long*)ITM_LOCK_ACCESS_REGISTER) = 0xC5ACCE55; // Unlock write access to ITM
  (*(unsigned volatile long*)ITM_TRACE_ENABLE_REGISTER) = 0xFFFFFFFF; // Enable stimulus port 0-31
  (*(unsigned volatile long*)ITM_TRACE_PRIVILEGE_REGISTER) = 0x1; // Set privilege
}


void targetEnableInterrupts(void)
{
  // Enable interrupts for TCPWM GRP0 CNT0 FOR ZTE1572 (chip 832ZZ279)
  CM0_SYSTEM_INT_CTL_273 = 0x0;
  
  // Map interrupt to CPU CortexM0 external interrupt 3
  CM0_SYSTEM_INT_CTL_273 |= (0x3 << CM0_SYSTEM_INT_CTL_273_INT_IDX);
  
  // Enable interrupt on external CPU interrupt with index defined above
  CM0_SYSTEM_INT_CTL_273 |= (0x1 << CM0_SYSTEM_INT_CTL_273_INT_VALID);
  
  // Enable interrupts for TCPWM GRP0 CNT0 FOR ZTE1623 (chip 907ZZ338)
  CM0_SYSTEM_INT_CTL_274 = 0x0;
  CM0_SYSTEM_INT_CTL_274 |= (0x3 << CM0_SYSTEM_INT_CTL_274_INT_IDX);
  CM0_SYSTEM_INT_CTL_274 |= (0x1 << CM0_SYSTEM_INT_CTL_274_INT_VALID);
  
  NVIC_ISER_0 |= (0x1 << NVIC_ISER_0_TCPWM); // Enable timer interrupt
}


void enableSecondaryCore(void) {
  unsigned long dwCY_CORTEX_M4_APPL_ADDR = GetSecondaryEntry();
  CM4_VECTOR_TABLE_BASE = dwCY_CORTEX_M4_APPL_ADDR;
  CM4_PWR_CTL = 0x05FA0003; // Register key applied with PWR mode of 0x3
}

void targetInit(void)
{ 
  #ifndef EMPTY_TARGET_INIT

  //for(unsigned long i = 0;i < 1000000;i++);
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
