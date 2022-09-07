#include "e200z0h.h"


void initClockAndModes(void) {  
  // Enable peripherals in all modes
  ME_RUN_PC0 = 0xFF;
  
  // Set up the PLL fOUT = fIN * NDIV/((IDF+1) * 2^(ODF+1))
  CLOCK_CR = (4 << CLOCK_CR_IDF)   |
             (2 << CLOCK_CR_ODF)   |
             (64 << CLOCK_CR_NDIV) |
             (1 << CLOCK_CR_EN_PLL_SW);
  // Select PLL PCS as system clock (only valid in RUN0 mode)
  ME_RUN0_MC |= (1 << ME_x_MC_FMPLL_0ON) |
                (1 << ME_x_MC_XOSCON)    |
                (ME_x_MC_SYSCLK_FMPLL_0_PCS << ME_x_MC_SYSCLK);
  
  // Switch to RUN0 mode
  unsigned long mode = (ME_MODE_RUN0 << ME_MCTL_TARGET_MODE);
  ME_MCTL = mode | ME_MCTL_KEY;
  ME_MCTL = mode | ME_MCTL_KEYINV;
  while((ME_GS >> ME_GS_S_CURRENT_MODE) != ME_MODE_RUN0);
}


void initTimer(void) {
  // Enable and set up PIT to stop in debug mode and generate interrupts
  PIT_PITMCR = (1 << PIT_PITMCR_FRZ);
  PIT_LDVAL0 = 64000; // 64k/64MHz = 1ms
  PIT_TCTRL0 = (1 << PIT_TCTRLx_TIE) | (1 << PIT_TCTRLx_TEN);
}

void initSecondaryCore(void) {  
  SSCM_DPMBOOT = (unsigned long)0x00081000; // __start function address of secondary core
  SSCM_DPMKEY = SSCM_DPMKEY_FIRST;
  SSCM_DPMKEY = SSCM_DPMKEY_SECOND;
}

void targetEnableInterrupts(void) {
  asm("wrteei 1");
}


void targetInit(void) {
  #ifndef EMPTY_TARGET_INIT

  initClockAndModes();
  initTimer();
  initSecondaryCore();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog(void) {}

unsigned int pinToggle = 1;
