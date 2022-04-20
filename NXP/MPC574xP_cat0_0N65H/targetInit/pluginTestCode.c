#include "pluginTestCode.h"
#include "mpc5744p.h"
#include <stdint.h>

unsigned volatile char g_byTestPlugins;
unsigned volatile char g_byPMUTestProcModes;
unsigned volatile char g_byPMUTestFillerLoop;
unsigned volatile char g_byPMUProcUserModeMarked;
unsigned volatile int g_dwFillerLoopLimit = 100;
unsigned volatile char g_byPMUGenerateInterruptTick;
unsigned volatile char g_byMPUConfigure;
unsigned volatile char g_byTestSoftDES;
unsigned volatile char g_byTestSoftFUNC;
unsigned volatile char g_byTestSWResets;
unsigned volatile char g_bySMPUConfigure;

#define MCTL_TARGET_MODE_DES  0xF
#define MCTL_TARGET_MODE_FUNC 0x0

#define MAS0_E_OFFS     0
#define MAS0_G_OFFS     1
#define MAS0_M_OFFS     2
#define MAS0_I_OFFS     3
#define MAS0_W_OFFS     4
#define MAS0_VLE_OFFS   5
#define MAS0_GOVR_OFFS  6
#define MAS0_IOVR_OFFS  7
#define MAS0_SXSR_OFFS  8
#define MAS0_UXUR_OFFS  9
#define MAS0_SW_OFFS    10
#define MAS0_UW_OFFS    11
#define MAS0_UMASK_OFFS 12
#define MAS0_ESEL_OFFS  16
#define MAS0_SHD_OFFS   23
#define MAS0_INST_OFFS  24
#define MAS0_DEBUG_OFFS 25
#define MAS0_RO_OFFS    26
#define MAS0_SEL_OFFS   28
#define MAS0_IPROT_OFFS 30
#define MAS0_VALID_OFFS 31

#define MAS1_TIDMSK_OFFS  0
#define MAS1_TID_OFFS     16

#define SMPU0_RGD_BASE    0xFC010400
#define SMPU0_RGD_W0_OFFS 0x0
#define SMPU0_RGD_W1_OFFS 0x4
#define SMPU0_RGD_W2_OFFS 0x8
#define SMPU0_RGD_W3_OFFS 0xC

#define Z4D_BM_ID       30
#define DMA_BM_ID       26
#define FLEXRAY_BM_ID   24
#define SIPI_BM_ID      22
#define ETH_BM_ID       20
#define Z4D_NEXUS_BM_ID 14

typedef enum EMPURegionType
{
  INSTRUCTION,
  DATA,
  SHARED
} EMPURegionType;

typedef struct SMPUConfig
{
  EMPURegionType regType;
  uint8_t byValid;
  uint8_t byIPROT;
  uint8_t byReadOnly;
  uint8_t byDebug;
  uint8_t byEntrySel;
  uint8_t byUpperAddrMask;
  
  uint8_t byUSRWriteFlag;
  uint8_t byUSRExecFlag;
  uint8_t bySVWriteFlag;
  uint8_t bySVExecFlag;
  
  uint8_t byIOVR;
  uint8_t byGOVR;
  
  uint8_t byCacheInhibited;
  uint8_t byGuarded;
  
  uint8_t byTID;
  uint8_t byTIDMask;
  
  uint32_t dwStartAddr;
  uint32_t dwEndAddr;
} SMPUConfig;

typedef struct SSMPUConfig
{
  uint8_t byRegionIdx;
  uint32_t dwStartAddr;
  uint32_t dwEndAddr;
  uint32_t dwCtrlRights;
  uint8_t byCachable;
} SSMPUConfig;

void userModeAndMarked()
{
  asm("mfmsr    r0");
  asm("se_bseti r0, 29"); // Marked
  asm("se_bseti r0, 17"); // USR mode
  asm("mtmsr    r0");
  asm("se_nop");
}

void userModeAndUnmarked()
{
  asm("mfmsr    r0");
  asm("se_bclri r0, 29"); // UnMarked
  asm("se_bseti r0, 17"); // USR mode
  asm("mtmsr    r0");
  asm("se_nop");
  asm("se_nop");
}

void supervisorModeAndMarked()
{
  asm("mfmsr    r0");
  asm("se_bseti r0, 29"); // Marked
  asm("se_bclri r0, 17"); // SV mode
  asm("mtmsr    r0");
  asm("se_nop");
  asm("se_nop");
  asm("se_nop");
  asm("se_nop");
}

void supervisorModeAndUnmarked()
{
  asm("mfmsr    r0");
  asm("se_bclri r0, 29"); // UnMarked
  asm("se_bclri r0, 17"); // SV mode
  asm("mtmsr    r0");
  asm("se_nop");
  asm("se_nop");
  asm("se_nop");
  asm("se_nop");
  asm("se_nop");
  asm("se_nop");
  asm("se_nop");
  asm("se_nop");
}

void pmuTestProcessorModes()
{
  supervisorModeAndMarked();
  supervisorModeAndUnmarked();
  if (g_byPMUProcUserModeMarked)
  {
    userModeAndMarked();
  }
  else{
    userModeAndUnmarked();
  }
}

void pmuTestFillerLoop()
{
  unsigned volatile int dwCnt = 0;
  
  while (dwCnt < g_dwFillerLoopLimit)
  {
    dwCnt++;
  }
}

extern void targetEnableInterrupts();
extern void targetDisableInterrupts();
extern int iInterruptCounter;

void pmuGenerateInterruptTick()
{
  int oldInterruptConuter = iInterruptCounter;
  targetEnableInterrupts();
  while (iInterruptCounter == oldInterruptConuter);
  targetDisableInterrupts();
  g_byPMUGenerateInterruptTick = 0;
}


asm void applyMPURegion(register int dwMAS0,
                        register int dwMAS1,
                        register int dwMAS2,
                        register int dwMAS3)
{
  mtspr   624, dwMAS0
  mtspr   625, dwMAS1
  mtspr   626, dwMAS2
  mtspr   627, dwMAS3
  opword  0x7E0007A4
  se_blr
}

asm void mpuInvalidate()
{
        e_li    r11, 0x00000002
        mtspr   1014, r11
  
  wait: mfspr   r0, 1014
        se_cmpi r0, 0x02
        se_bc   1, 2, wait
  
        se_blr
}

asm void mpuEnable()
{
  mfspr     r0, 1014
  se_bseti  r0, 31
  mtspr     1014, r0
  opword    0x7E00046C
}

void mpuCfgRegion(SMPUConfig mpuCfg)
{
  uint32_t dwMAS0 = 0;
  uint32_t dwMAS1 = 0;
  
  switch (mpuCfg.regType)
  {
  case INSTRUCTION:
    dwMAS0 |= (0x1 << MAS0_INST_OFFS);
    break;
  case DATA:
    break;
  case SHARED:
    dwMAS0 |= (0x1 << MAS0_SHD_OFFS);
    break;
  default:
    return; // Should not happen
  }
  
  dwMAS0 |= (0b10 << MAS0_SEL_OFFS);
  
  dwMAS0 |= (mpuCfg.byValid << MAS0_VALID_OFFS);
  dwMAS0 |= (mpuCfg.byIPROT << MAS0_IPROT_OFFS);
  dwMAS0 |= (mpuCfg.byReadOnly << MAS0_RO_OFFS);
  dwMAS0 |= (mpuCfg.byDebug << MAS0_DEBUG_OFFS);
  dwMAS0 |= (mpuCfg.byEntrySel << MAS0_ESEL_OFFS);
  dwMAS0 |= (mpuCfg.byUpperAddrMask << MAS0_UMASK_OFFS);
  dwMAS0 |= (mpuCfg.byUSRWriteFlag << MAS0_UW_OFFS);
  dwMAS0 |= (mpuCfg.byUSRExecFlag << MAS0_UXUR_OFFS);
  dwMAS0 |= (mpuCfg.bySVWriteFlag << MAS0_SW_OFFS);
  dwMAS0 |= (mpuCfg.bySVExecFlag << MAS0_SXSR_OFFS);
  
  dwMAS0 |= (mpuCfg.byIOVR << MAS0_IOVR_OFFS);
  dwMAS0 |= (mpuCfg.byGOVR << MAS0_GOVR_OFFS);
  
  dwMAS0 |= (mpuCfg.byCacheInhibited << MAS0_I_OFFS);
  dwMAS0 |= (mpuCfg.byGuarded << MAS0_G_OFFS);
  
  dwMAS1 |= (mpuCfg.byTID << MAS1_TID_OFFS);
  dwMAS1 |= (mpuCfg.byTIDMask << MAS1_TIDMSK_OFFS);
  
  applyMPURegion(dwMAS0, dwMAS1, mpuCfg.dwEndAddr, mpuCfg.dwStartAddr);
}


void mpuCfg()
{
  
  SMPUConfig mpuCfg;
  
  mpuInvalidate();
  
  // Necessary MPU configuration
  mpuCfg.regType          = INSTRUCTION;
  mpuCfg.byValid          = 1;
  mpuCfg.byIPROT          = 0;
  mpuCfg.byReadOnly       = 0;
  mpuCfg.byDebug          = 0;
  mpuCfg.byEntrySel       = 0;
  mpuCfg.byUpperAddrMask  = 0;
  mpuCfg.byUSRWriteFlag   = 1;
  mpuCfg.byUSRExecFlag    = 1;
  mpuCfg.bySVWriteFlag    = 1;
  mpuCfg.bySVExecFlag     = 1;
  mpuCfg.byIOVR           = 0;
  mpuCfg.byGOVR           = 0;
  mpuCfg.byCacheInhibited = 0;
  mpuCfg.byGuarded        = 0;
  mpuCfg.byTID            = 0;
  mpuCfg.byTIDMask        = 0;
  mpuCfg.dwStartAddr      = 0x0060C000;
  mpuCfg.dwEndAddr        = 0x0062FFFF;
  mpuCfgRegion(mpuCfg);
  
  mpuCfg.regType          = INSTRUCTION;
  mpuCfg.byEntrySel       = 1;
  mpuCfg.dwStartAddr      = 0x01000000;
  mpuCfg.dwEndAddr        = 0x010FFFFF;
  mpuCfgRegion(mpuCfg);
  
  mpuCfg.regType          = DATA;
  mpuCfg.byEntrySel       = 0;
  mpuCfg.dwStartAddr      = 0x52800000;
  mpuCfg.dwEndAddr        = 0x5280FFFF;
  mpuCfgRegion(mpuCfg);
  
  // Custom MPU configuration
  mpuCfg.regType          = INSTRUCTION;
  mpuCfg.byEntrySel       = 2;
  mpuCfg.dwStartAddr      = 0x40000000;
  mpuCfg.dwEndAddr        = 0x4000004F;
  
  mpuCfg.byUpperAddrMask  = 0;
  
  mpuCfg.byValid          = 1;
  mpuCfg.byIPROT          = 0;
  mpuCfg.byReadOnly       = 0;
  mpuCfg.byDebug          = 0;
  
  mpuCfg.byUSRWriteFlag   = 0;
  mpuCfg.byUSRExecFlag    = 0;
  mpuCfg.bySVWriteFlag    = 0;
  mpuCfg.bySVExecFlag     = 0;
  
  mpuCfg.byIOVR           = 0;
  mpuCfg.byGOVR           = 0;
  mpuCfg.byCacheInhibited = 0;
  mpuCfg.byGuarded        = 0;
  
  mpuCfg.byTID            = 0;
  mpuCfg.byTIDMask        = 0;
  mpuCfgRegion(mpuCfg);
  
  
  mpuCfg.regType          = INSTRUCTION;
  mpuCfg.byEntrySel       = 3;
  mpuCfg.dwStartAddr      = 0x40000050;
  mpuCfg.dwEndAddr        = 0x4000005F;
  
  mpuCfg.byUpperAddrMask  = 0;
  
  mpuCfg.byValid          = 1;
  mpuCfg.byIPROT          = 0;
  mpuCfg.byReadOnly       = 0;
  mpuCfg.byDebug          = 0;
  
  mpuCfg.byUSRWriteFlag   = 1;
  mpuCfg.byUSRExecFlag    = 0;
  mpuCfg.bySVWriteFlag    = 0;
  mpuCfg.bySVExecFlag     = 0;
  
  mpuCfg.byIOVR           = 1;
  mpuCfg.byGOVR           = 0;
  mpuCfg.byCacheInhibited = 0;
  mpuCfg.byGuarded        = 0;
  
  mpuCfg.byTID            = 0;
  mpuCfg.byTIDMask        = 0;
  mpuCfgRegion(mpuCfg);
  
  
  mpuCfg.regType          = INSTRUCTION;
  mpuCfg.byEntrySel       = 6;
  mpuCfg.dwStartAddr      = 0x40000050;
  mpuCfg.dwEndAddr        = 0x4000005F;
  
  mpuCfg.byUpperAddrMask  = 0;
  
  mpuCfg.byValid          = 1;
  mpuCfg.byIPROT          = 0;
  mpuCfg.byReadOnly       = 0;
  mpuCfg.byDebug          = 0;
  
  mpuCfg.byUSRWriteFlag   = 1;
  mpuCfg.byUSRExecFlag    = 0;
  mpuCfg.bySVWriteFlag    = 0;
  mpuCfg.bySVExecFlag     = 0;
  
  mpuCfg.byIOVR           = 1;
  mpuCfg.byGOVR           = 0;
  mpuCfg.byCacheInhibited = 0;
  mpuCfg.byGuarded        = 0;
  
  mpuCfg.byTID            = 0;
  mpuCfg.byTIDMask        = 0;
  mpuCfgRegion(mpuCfg);
  
  
  mpuCfg.regType          = DATA;
  mpuCfg.byEntrySel       = 1;
  mpuCfg.dwStartAddr      = 0x40000060;
  mpuCfg.dwEndAddr        = 0x4000006F;
  
  mpuCfg.byUpperAddrMask  = 0;
  
  mpuCfg.byValid          = 1;
  mpuCfg.byIPROT          = 1;
  mpuCfg.byReadOnly       = 0;
  mpuCfg.byDebug          = 0;
  
  mpuCfg.byUSRWriteFlag   = 0;
  mpuCfg.byUSRExecFlag    = 1;
  mpuCfg.bySVWriteFlag    = 0;
  mpuCfg.bySVExecFlag     = 0;
  
  mpuCfg.byIOVR           = 0;
  mpuCfg.byGOVR           = 1;
  mpuCfg.byCacheInhibited = 0;
  mpuCfg.byGuarded        = 0;
  
  mpuCfg.byTID            = 0;
  mpuCfg.byTIDMask        = 0;
  mpuCfgRegion(mpuCfg);
  
  
  mpuCfg.regType          = DATA;
  mpuCfg.byEntrySel       = 2;
  mpuCfg.dwStartAddr      = 0x400000D0;
  mpuCfg.dwEndAddr        = 0x400000DF;
  
  mpuCfg.byUpperAddrMask  = 0;
  
  mpuCfg.byValid          = 1;
  mpuCfg.byIPROT          = 0;
  mpuCfg.byReadOnly       = 1;
  mpuCfg.byDebug          = 0;
  
  mpuCfg.byUSRWriteFlag   = 0;
  mpuCfg.byUSRExecFlag    = 0;
  mpuCfg.bySVWriteFlag    = 1;
  mpuCfg.bySVExecFlag     = 0;
  
  mpuCfg.byIOVR           = 0;
  mpuCfg.byGOVR           = 0;
  mpuCfg.byCacheInhibited = 1;
  mpuCfg.byGuarded        = 0;
  
  mpuCfg.byTID            = 0;
  mpuCfg.byTIDMask        = 0;
  mpuCfgRegion(mpuCfg);
  
  
  mpuCfg.regType          = DATA;
  mpuCfg.byEntrySel       = 11;
  mpuCfg.dwStartAddr      = 0x40000070;
  mpuCfg.dwEndAddr        = 0x4000007F;
  
  mpuCfg.byUpperAddrMask  = 0;
  
  mpuCfg.byValid          = 1;
  mpuCfg.byIPROT          = 0;
  mpuCfg.byReadOnly       = 0;
  mpuCfg.byDebug          = 1;
  
  mpuCfg.byUSRWriteFlag   = 0;
  mpuCfg.byUSRExecFlag    = 0;
  mpuCfg.bySVWriteFlag    = 0;
  mpuCfg.bySVExecFlag     = 1;
  
  mpuCfg.byIOVR           = 0;
  mpuCfg.byGOVR           = 0;
  mpuCfg.byCacheInhibited = 0;
  mpuCfg.byGuarded        = 1;
  
  mpuCfg.byTID            = 0;
  mpuCfg.byTIDMask        = 0;
  mpuCfgRegion(mpuCfg);
  
  
  mpuCfg.regType          = DATA;
  mpuCfg.byEntrySel       = 12;
  mpuCfg.dwStartAddr      = 0x40000070;
  mpuCfg.dwEndAddr        = 0x4000007F;
  
  mpuCfg.byUpperAddrMask  = 0;
  
  mpuCfg.byValid          = 1;
  mpuCfg.byIPROT          = 0;
  mpuCfg.byReadOnly       = 0;
  mpuCfg.byDebug          = 1;
  
  mpuCfg.byUSRWriteFlag   = 0;
  mpuCfg.byUSRExecFlag    = 0;
  mpuCfg.bySVWriteFlag    = 0;
  mpuCfg.bySVExecFlag     = 1;
  
  mpuCfg.byIOVR           = 0;
  mpuCfg.byGOVR           = 0;
  mpuCfg.byCacheInhibited = 0;
  mpuCfg.byGuarded        = 1;
  
  mpuCfg.byTID            = 0;
  mpuCfg.byTIDMask        = 0;
  mpuCfgRegion(mpuCfg);
  
  
  mpuCfg.regType          = SHARED;
  mpuCfg.byEntrySel       = 5;
  mpuCfg.dwStartAddr      = 0x40000080;
  mpuCfg.dwEndAddr        = 0x4000008F;
  
  mpuCfg.byUpperAddrMask  = 0;
  
  mpuCfg.byValid          = 1;
  mpuCfg.byIPROT          = 0;
  mpuCfg.byReadOnly       = 0;
  mpuCfg.byDebug          = 0;
  
  mpuCfg.byUSRWriteFlag   = 1;
  mpuCfg.byUSRExecFlag    = 1;
  mpuCfg.bySVWriteFlag    = 1;
  mpuCfg.bySVExecFlag     = 1;
  
  mpuCfg.byIOVR           = 0;
  mpuCfg.byGOVR           = 0;
  mpuCfg.byCacheInhibited = 0;
  mpuCfg.byGuarded        = 0;
  
  mpuCfg.byTID            = 0xAA;
  mpuCfg.byTIDMask        = 0xFF;
  mpuCfgRegion(mpuCfg);
  
  
  mpuCfg.regType          = SHARED;
  mpuCfg.byEntrySel       = 4;
  mpuCfg.dwStartAddr      = 0x40000090;
  mpuCfg.dwEndAddr        = 0x4000009F;
  
  mpuCfg.byUpperAddrMask  = 0;
  
  mpuCfg.byValid          = 1;
  mpuCfg.byIPROT          = 0;
  mpuCfg.byReadOnly       = 0;
  mpuCfg.byDebug          = 0;
  
  mpuCfg.byUSRWriteFlag   = 1;
  mpuCfg.byUSRExecFlag    = 1;
  mpuCfg.bySVWriteFlag    = 1;
  mpuCfg.bySVExecFlag     = 1;
  
  mpuCfg.byIOVR           = 0;
  mpuCfg.byGOVR           = 0;
  mpuCfg.byCacheInhibited = 0;
  mpuCfg.byGuarded        = 0;
  
  mpuCfg.byTID            = 0xFF;
  mpuCfg.byTIDMask        = 0x00;
  mpuCfgRegion(mpuCfg);
  
  
  mpuCfg.regType          = SHARED;
  mpuCfg.byEntrySel       = 3;
  mpuCfg.dwStartAddr      = 0x400000A0;
  mpuCfg.dwEndAddr        = 0x400000AF;
  
  mpuCfg.byUpperAddrMask  = 0b001;
  
  mpuCfg.byValid          = 1;
  mpuCfg.byIPROT          = 0;
  mpuCfg.byReadOnly       = 0;
  mpuCfg.byDebug          = 0;
  
  mpuCfg.byUSRWriteFlag   = 1;
  mpuCfg.byUSRExecFlag    = 1;
  mpuCfg.bySVWriteFlag    = 1;
  mpuCfg.bySVExecFlag     = 1;
  
  mpuCfg.byIOVR           = 0;
  mpuCfg.byGOVR           = 0;
  mpuCfg.byCacheInhibited = 0;
  mpuCfg.byGuarded        = 0;
  
  mpuCfg.byTID            = 0;
  mpuCfg.byTIDMask        = 0;
  mpuCfgRegion(mpuCfg);
  
  
  mpuCfg.regType          = SHARED;
  mpuCfg.byEntrySel       = 2;
  mpuCfg.dwStartAddr      = 0x400000B0;
  mpuCfg.dwEndAddr        = 0x400000BF;
  
  mpuCfg.byUpperAddrMask  = 0b101;
  
  mpuCfg.byValid          = 1;
  mpuCfg.byIPROT          = 0;
  mpuCfg.byReadOnly       = 0;
  mpuCfg.byDebug          = 0;
  
  mpuCfg.byUSRWriteFlag   = 1;
  mpuCfg.byUSRExecFlag    = 1;
  mpuCfg.bySVWriteFlag    = 1;
  mpuCfg.bySVExecFlag     = 1;
  
  mpuCfg.byIOVR           = 0;
  mpuCfg.byGOVR           = 0;
  mpuCfg.byCacheInhibited = 0;
  mpuCfg.byGuarded        = 0;
  
  mpuCfg.byTID            = 0;
  mpuCfg.byTIDMask        = 0;
  mpuCfgRegion(mpuCfg);
  
  
  
  mpuCfg.regType          = SHARED;
  mpuCfg.byEntrySel       = 6;
  mpuCfg.dwStartAddr      = 0x400000C0;
  mpuCfg.dwEndAddr        = 0x400000CF;
  
  mpuCfg.byUpperAddrMask  = 0b101;
  
  mpuCfg.byValid          = 1;
  mpuCfg.byIPROT          = 0;
  mpuCfg.byReadOnly       = 0;
  mpuCfg.byDebug          = 0;
  
  mpuCfg.byUSRWriteFlag   = 1;
  mpuCfg.byUSRExecFlag    = 1;
  mpuCfg.bySVWriteFlag    = 1;
  mpuCfg.bySVExecFlag     = 1;
  
  mpuCfg.byIOVR           = 0;
  mpuCfg.byGOVR           = 0;
  mpuCfg.byCacheInhibited = 0;
  mpuCfg.byGuarded        = 0;
  
  mpuCfg.byTID            = 0;
  mpuCfg.byTIDMask        = 0;
  mpuCfgRegion(mpuCfg);
  
  mpuEnable();
}


void testSWResets()
{
  volatile uint32_t dwModeWKey = 0x00005AF0;
  volatile uint32_t dwModeWInvKey = 0x0000A50F;
  
  g_byTestSoftDES = 0;
  g_byTestSoftFUNC = 0;
  
  if (g_byTestSoftDES)
  {
    dwModeWKey |= (MCTL_TARGET_MODE_DES << 28);
    dwModeWInvKey |= (MCTL_TARGET_MODE_DES << 28);
    MC_ME.MCTL.R = dwModeWKey;
    MC_ME.MCTL.R = dwModeWInvKey;
  }
  else if (g_byTestSoftFUNC)
  {
    dwModeWKey |= (MCTL_TARGET_MODE_FUNC << 28);
    dwModeWInvKey |= (MCTL_TARGET_MODE_FUNC << 28);
    MC_ME.MCTL.R = dwModeWKey;
    MC_ME.MCTL.R = dwModeWInvKey;
  }
}

void cfgSmpuRegion(SSMPUConfig cfg)
{
  uint8_t byIdx, byShiftIdxWr, byShiftIdxRd;
  
  uint32_t dwRGDBaseAddr = SMPU0_RGD_BASE + (0x10 * cfg.byRegionIdx);
  
  uint32_t *pdwWORD0 = (uint32_t *)(dwRGDBaseAddr + SMPU0_RGD_W0_OFFS);
  uint32_t *pdwWORD1 = (uint32_t *)(dwRGDBaseAddr + SMPU0_RGD_W1_OFFS);
  uint32_t *pdwWORD2 = (uint32_t *)(dwRGDBaseAddr + SMPU0_RGD_W2_OFFS);
  uint32_t *pdwWORD3 = (uint32_t *)(dwRGDBaseAddr + SMPU0_RGD_W3_OFFS);
  
  *pdwWORD0 = cfg.dwStartAddr;
  *pdwWORD1 = cfg.dwEndAddr;
  *pdwWORD2 = cfg.dwCtrlRights;
  *pdwWORD3 |= (cfg.byCachable << 0x1) | (0x1 << 0x0);
}

void smpuConfigure()
{
  SSMPUConfig cfg1;
  SSMPUConfig cfg2;
  SSMPUConfig cfg3;
  SSMPUConfig cfg4;
  SSMPUConfig cfg5;
  SSMPUConfig cfg6;
  
  // enable SFR read/write
  cfg1.byRegionIdx = 0;
  cfg1.byCachable = 0;
  cfg1.dwCtrlRights = 0xFFFFFFFF;
  cfg1.dwStartAddr = 0xF0000000;
  cfg1.dwEndAddr = 0xFFFFFFFF;
  
  // enable flash read/write
  cfg2.byRegionIdx = 1;
  cfg2.byCachable = 0;
  cfg2.dwCtrlRights = 0xFFFFFFFF;
  cfg2.dwStartAddr = 0x01000000;
  cfg2.dwEndAddr = 0x01110000;
  
  // enable RAM variable read/write
  cfg3.byRegionIdx = 2;
  cfg3.byCachable = 0;
  cfg3.dwCtrlRights = 0xFFFFFFFF;
  cfg3.dwStartAddr = 0x40000000;
  cfg3.dwEndAddr = 0x40000800;
  
  // custom restriction #1
  cfg4.byRegionIdx = 8;
  cfg4.byCachable = 0;
  cfg4.dwCtrlRights = 0xFFFFFFFF;
  cfg4.dwCtrlRights &= ~(0x1 << DMA_BM_ID);
  cfg4.dwCtrlRights &= ~(0x2 << Z4D_BM_ID);
  cfg4.dwCtrlRights &= ~(0x3 << FLEXRAY_BM_ID);
  cfg4.dwStartAddr = 0x40001000;
  cfg4.dwEndAddr = 0x40001400;
  
  // custom restriction #2
  cfg5.byRegionIdx = 9;
  cfg5.byCachable = 1;
  cfg5.dwCtrlRights = 0x00000000;
  cfg5.dwStartAddr = 0x40001800;
  cfg5.dwEndAddr = 0x40001808;
  
  // custom restriction #3
  cfg6.byRegionIdx = 15;
  cfg6.byCachable = 1;
  cfg6.dwCtrlRights = 0xF000000F;
  cfg6.dwStartAddr = 0x40002800;
  cfg6.dwEndAddr = 0x40002810;
  

  cfgSmpuRegion(cfg1);
  cfgSmpuRegion(cfg2);
  cfgSmpuRegion(cfg3);
  cfgSmpuRegion(cfg4);
  cfgSmpuRegion(cfg5);
  cfgSmpuRegion(cfg6);
  SMPU_0.CESR0.B.GVLD = 1;
}

void pluginTestMain()
{
  while (g_byTestPlugins)
  {
    if (g_byPMUTestProcModes)
    {
      pmuTestProcessorModes();
    }
    if (g_byPMUTestFillerLoop)
    {
      pmuTestFillerLoop();
    }
    if (g_byPMUGenerateInterruptTick)
    {
      pmuGenerateInterruptTick();
    }
    if (g_byMPUConfigure)
    {
      mpuCfg();
    }
    if (g_byTestSWResets)
    {
      testSWResets();
    }
    
    if (g_bySMPUConfigure)
    {
      smpuConfigure();
    }
  }
}