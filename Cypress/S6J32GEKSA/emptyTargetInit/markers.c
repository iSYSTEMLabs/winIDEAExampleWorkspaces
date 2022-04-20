__attribute__ ((section(".markers")))
g_Markers[] =
{
  0xFFFFFFFF,       // MK_SER     // 0xFFFFFFFF - Security disabled, 0x00000001 - Security enabled
  0xFFFFFFFF,       
  0xFFFFFFFF,       // MK_SSR     // 0xFFFFFFFF - Security scope is FLASH, other - Security scope is DEVICE
  0xFFFFFFFF,       
  0xFFFFFFFF,       // MK_CEER    // 0xFFFFFFFF - Chip Erase allowed, other - !!Chip Erase disabled!!!!  (this applies only if "MK_CEER = Selectable". Refer to datasheet of product. For other devices the value is disregarded.)
  0xFFFFFFFF,       
  0xFFFFFFFF,       // MK_SOER    // 0xFFFFFFFF - Security settings in the registers (SER, SSR, CEER and SOER) can be overwritten.
  0xFFFFFFFF,       
  0xFFFFFFFF,       // MK_SWPOER
  0xFFFFFFFF,       
  0xFFFFFFFF,       // MK_WSWPR
  0xFFFFFFFF,       
  0xFFFFFFFF,       // MK_C0SWPR
  0xFFFFFFFF,       
  0xFFFFFFFF,       // MK_C1SWPR
  0xFFFFFFFF,       
  0xFFFFFFFF,       // MK_C2SWPR
  0xFFFFFFFF,
  0xFFFFFFFF,       // MK_C3SWPR
  0xFFFFFFFF,
  0xFFFFFFFF,       // Offset: 0x050
  0xFFFFFFFF,
  0xFFFFFFFF,
  0xFFFFFFFF,
  0xFFFFFFFF,
  0xFFFFFFFF,
  0xFFFFFFFF,
  0xFFFFFFFF,
  0xFFFFFFFF,
  0xFFFFFFFF,
  0xFFFFFFFF,
  0xFFFFFFFF,
  0xFFFFFFFF,       // Offset: 0x080
  0xFFFFFFFF,       
  0xFFFFFFFF,       // DDR_DSM   // 0x59F71234 - Debugger key enabled
  0xFFFFFFFF,
  0xFFFFFFFF,       // DDR_DSKM0
  0xFFFFFFFF,
  0xFFFFFFFF,       // DDR_DSKM1
  0xFFFFFFFF,
  0xFFFFFFFF,       // DDR_DSKM2
  0xFFFFFFFF,
  0xFFFFFFFF,       // DDR_DSKM3
  0xFFFFFFFF,
  0xFFFFFFFF,       // Offset: 0x0B0
  0xFFFFFFFF,
  0xFFFFFFFF,
  0xFFFFFFFF,       // Offset: 0x0BC
  0xFFFFFFFF,       // BDR_SBMM
  0xFFFFFFFF,
  0xFFFFFFFF,       // BDR_SBSM
  0xFFFFFFFF,
  0xFFFFFFFF,
  0xFFFFFFFF,
  0xFFFFFFFF,
  0xFFFFFFFF,
  0xFFFFFFFF,       // BDR_DWEM
  0xFFFFFFFF,
  0xFFFFFFFF,       // BDR_ABVM
  0xFFFFFFFF,
  0xFFFFFFFF,       // BDR_ABVEM
  0xFFFFFFFF,
  0xFFFFFFFF,
  0xFFFFFFFF,       // Offset: 0x0FC 
  0xFFFCFFFF,       // WDR_INTM            // RSTENM = 0, IRQENM = 0
  0xFFFFFFFF,   
  0xFFFFFFFF,       // WDR_TRG0CFGM
  0xFFFFFFFF, 
  0xFFFFFFFF,       // WDR_TRG1CFGM
  0xFFFFFFFF, 
  0xFFFFFFFF,       // WDR_RUNLLM
  0xFFFFFFFF, 
  0xFFFFFFFF,       // WDR_RUNULM
  0xFFFFFFFF, 
  0xFFFFFFFF,       // WDR_PSSLLM
  0xFFFFFFFF, 
  0xFFFFFFFF,       // WDR_PSSULM
  0xFFFFFFFF, 
  0xFFFFFFFF,       // WDR_RSTDLYM
  0xFFFFFFFF, 
  0xFFFFFFFF,       // WDR_CFGM
  0xFFFFFFFF, 
  0x292D3A7B,       // WDR_CEM            // The hardware watchdog is started based on the settings defined with the WDR.
  0xFFFFFFFF,   
};