#ifndef AM2732R_H
#define AM2732R_H

  #include "AM2432_sfr.h"

  // PLL Registers
  #define TOP_RCM 0x02140000
  #define PLL_CORE_BASE TOP_RCM 
    
  #define PLL_CORE_MN2DIV_M 0
  #define PLL_CORE_MN2DIV_N2 16  
  
  #define PLL_CORE_M2NDIV_M2 16
  #define PLL_CORE_M2NDIV_N 0
  
  #define PLL_CORE_FRACDIV_FRACTIONALM 0
  #define PLL_CORE_FRACDIV_REGSD 24
  
  #define PLL_CORE_CLKCTRL_IDLE 23
  #define PLL_CORE_CLKCTRL_TINTZ 0
  
  #define PLL_CORE_TENABLE_TENABLE 0

  #define PLL_CORE_TENABLEDIV_TENABLEDIV 0
  
  #define PLL_CORE_STATUS_PHASELOCK 10
  
  #define VIM_CHANNELS 100U

  extern void InterruptRoutine();
  extern void _Enable_Irq();
  extern void _Disable_Irq();

  void initVIM();
  
#endif // AM2732R_H