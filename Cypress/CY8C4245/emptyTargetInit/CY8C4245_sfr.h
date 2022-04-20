#include <stdint.h>

struct Cortex_M0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DWT_PID4;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DWT_PID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DWT_PID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DWT_PID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DWT_PID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DWT_CID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DWT_CID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DWT_CID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DWT_CID3;

  uint8_t res1[4048];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BP_PID4;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BP_PID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BP_PID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BP_PID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BP_PID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BP_CID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BP_CID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BP_CID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BP_CID3;

  uint8_t res3[45072];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t TICKINT:1;
      uint64_t CLKSOURCE:1;
      uint64_t reservedSpace0:13;
      uint64_t COUNTFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYST_CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYST_RVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURRENT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYST_CVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TENMS:24;
      uint64_t reservedSpace0:6;
      uint64_t SKEW:1;
      uint64_t NOREF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYST_CALIB;

  uint8_t res4[224];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISER;

  uint8_t res5[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICER;

  uint8_t res6[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISPR;

  uint8_t res7[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPR;

  uint8_t res8[380];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PRI_N0:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_N1:2;
      uint64_t reservedSpace2:6;
      uint64_t PRI_N2:2;
      uint64_t reservedSpace3:6;
      uint64_t PRI_N3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PRI_N0:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_N1:2;
      uint64_t reservedSpace2:6;
      uint64_t PRI_N2:2;
      uint64_t reservedSpace3:6;
      uint64_t PRI_N3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PRI_N0:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_N1:2;
      uint64_t reservedSpace2:6;
      uint64_t PRI_N2:2;
      uint64_t reservedSpace3:6;
      uint64_t PRI_N3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PRI_N0:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_N1:2;
      uint64_t reservedSpace2:6;
      uint64_t PRI_N2:2;
      uint64_t reservedSpace3:6;
      uint64_t PRI_N3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PRI_N0:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_N1:2;
      uint64_t reservedSpace2:6;
      uint64_t PRI_N2:2;
      uint64_t reservedSpace3:6;
      uint64_t PRI_N3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PRI_N0:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_N1:2;
      uint64_t reservedSpace2:6;
      uint64_t PRI_N2:2;
      uint64_t reservedSpace3:6;
      uint64_t PRI_N3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PRI_N0:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_N1:2;
      uint64_t reservedSpace2:6;
      uint64_t PRI_N2:2;
      uint64_t reservedSpace3:6;
      uint64_t PRI_N3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PRI_N0:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_N1:2;
      uint64_t reservedSpace2:6;
      uint64_t PRI_N2:2;
      uint64_t reservedSpace3:6;
      uint64_t PRI_N3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR7;

  uint8_t res9[2272];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVISION:4;
      uint64_t PARTNO:12;
      uint64_t CONSTANT:4;
      uint64_t VARIANT:4;
      uint64_t IMPLEMENTER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VECTACTIVE:9;
      uint64_t reservedSpace0:3;
      uint64_t VECTPENDING:9;
      uint64_t reservedSpace1:1;
      uint64_t ISRPENDING:1;
      uint64_t ISRPREEMPT:1;
      uint64_t reservedSpace2:1;
      uint64_t PENDSTCLR:1;
      uint64_t PENDSTSETb:1;
      uint64_t PENDSVCLR:1;
      uint64_t PENDSVSET:1;
      uint64_t reservedSpace3:2;
      uint64_t NMIPENDSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICSR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t VECTCLRACTIVE:1;
      uint64_t SYSRESETREQ:1;
      uint64_t reservedSpace1:12;
      uint64_t ENDIANNESS:1;
      uint64_t VECTKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SLEEPONEXIT:1;
      uint64_t SLEEPDEEP:1;
      uint64_t reservedSpace1:1;
      uint64_t SEVONPEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t UNALIGN_TRP:1;
      uint64_t reservedSpace1:5;
      uint64_t STKALIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t PRI_11:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:22;
      uint64_t PRI_14:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:15;
      uint64_t SVCALLPENDED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHCSR;

  uint8_t res12[680];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCS_PID4;

  uint8_t res13[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCS_PID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCS_PID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCS_PID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCS_PID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCS_CID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCS_CID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCS_CID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCS_CID3;

  uint8_t res14[983040];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROM_SCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROM_DWT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROM_BPU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROM_END;

  uint8_t res15[4028];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROM_CSMT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROM_PID4;

  uint8_t res16[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROM_PID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROM_PID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROM_PID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROM_PID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROM_CID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROM_CID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROM_CID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROM_CID3;

};

#define Cortex_M0 (*(volatile struct Cortex_M0_tag *) 0xe0001fd0)

struct Core_Debug_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HALTED:1;
      uint64_t BKPT:1;
      uint64_t DWTRAP:1;
      uint64_t VCATCH:1;
      uint64_t EXTERNAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSR;

  uint8_t res0[188];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C_DEBUGEN:1;
      uint64_t reservedSpace0:15;
      uint64_t S_REGRDYDBGKEY:1;
      uint64_t S_HALTDBGKEY:1;
      uint64_t DBGKEY_0:1;
      uint64_t DBGKEY_1:1;
      uint64_t DBGKEY_2:1;
      uint64_t DBGKEY_3:1;
      uint64_t DBGKEY_4:1;
      uint64_t DBGKEY_5:1;
      uint64_t S_RETIRE_STDBGKEY:1;
      uint64_t S_RESET_STDBGKEY:1;
      uint64_t DBGKEY_6:1;
      uint64_t DBGKEY_7:1;
      uint64_t DBGKEY_8:1;
      uint64_t DBGKEY_9:1;
      uint64_t DBGKEY_10:1;
      uint64_t DBGKEY_11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DHCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGSEL:5;
      uint64_t reservedSpace0:11;
      uint64_t REGWnR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCRSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCRDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VC_CORERESET:1;
      uint64_t reservedSpace0:9;
      uint64_t VC_HARDERR:1;
      uint64_t reservedSpace1:13;
      uint64_t DWTENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEMCR;

};

#define Core_Debug (*(volatile struct Core_Debug_tag *) 0xe000ed30)

struct Debug_Components_tag
{
  uint32_t SCS;
  uint32_t DW;
  uint32_t BPU;
  uint32_t END;
  uint8_t res0[4028];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PartNumber:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEMTYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JEP106CC:4;
      uint64_t PartNumber_0:8;
      uint64_t PartNumber_1:4;
      uint64_t JEP106ID_0:3;
      uint64_t CM:4;
      uint64_t PREAMBLE_0:8;
      uint64_t PREAMBLE_1:4;
      uint64_t JEP106USED:1;
      uint64_t KBCOUNT:4;
      uint64_t JEP106ID_1:4;
      uint64_t REV:4;
      uint64_t REVAND:4;
      uint64_t COMPCLASS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PartNumber_0:8;
      uint64_t PartNumber_1:4;
      uint64_t JEP106ID_0:3;
      uint64_t CM:4;
      uint64_t PREAMBLE_0:8;
      uint64_t PREAMBLE_1:4;
      uint64_t JEP106USED:1;
      uint64_t JEP106ID_1:4;
      uint64_t REV:4;
      uint64_t REVAND:4;
      uint64_t COMPCLASS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PartNumber_0:8;
      uint64_t PartNumber_1:4;
      uint64_t JEP106ID_0:3;
      uint64_t CM:4;
      uint64_t PREAMBLE_0:8;
      uint64_t PREAMBLE_1:4;
      uint64_t JEP106USED:1;
      uint64_t JEP106ID_1:4;
      uint64_t REV:4;
      uint64_t REVAND:4;
      uint64_t COMPCLASS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PartNumber_0:8;
      uint64_t PartNumber_1:4;
      uint64_t JEP106ID_0:3;
      uint64_t CM:4;
      uint64_t PREAMBLE_0:8;
      uint64_t PREAMBLE_1:4;
      uint64_t JEP106USED:1;
      uint64_t JEP106ID_1:4;
      uint64_t REV:4;
      uint64_t REVAND:4;
      uint64_t COMPCLASS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PartNumber_0:8;
      uint64_t PartNumber_1:4;
      uint64_t JEP106ID_0:3;
      uint64_t CM:4;
      uint64_t PREAMBLE_0:8;
      uint64_t PREAMBLE_1:4;
      uint64_t JEP106USED:1;
      uint64_t JEP106ID_1:4;
      uint64_t REV:4;
      uint64_t REVAND:4;
      uint64_t COMPCLASS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PartNumber:4;
      uint64_t JEP106ID_0:3;
      uint64_t CM:4;
      uint64_t PREAMBLE_0:8;
      uint64_t PREAMBLE_1:4;
      uint64_t JEP106USED:1;
      uint64_t JEP106ID_1:4;
      uint64_t REV:4;
      uint64_t REVAND:4;
      uint64_t COMPCLASS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JEP106ID:3;
      uint64_t CM:4;
      uint64_t PREAMBLE_0:8;
      uint64_t PREAMBLE_1:4;
      uint64_t JEP106USED:1;
      uint64_t REV:4;
      uint64_t REVAND:4;
      uint64_t COMPCLASS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM:4;
      uint64_t PREAMBLE_0:8;
      uint64_t PREAMBLE_1:4;
      uint64_t REVAND:4;
      uint64_t COMPCLASS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREAMBLE_0:8;
      uint64_t PREAMBLE_1:4;
      uint64_t COMPCLASS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPONENT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREAMBLE_0:4;
      uint64_t PREAMBLE_1:8;
      uint64_t COMPCLASS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPONENT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREAMBLE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPONENT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREAMBLE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPONENT3;

};

#define Debug_Components (*(volatile struct Debug_Components_tag *) 0xe00ff000)

struct Breakpoint_Unit_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t KEY:1;
      uint64_t reservedSpace0:2;
      uint64_t NUM_CODE1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BP_CTRL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t COMP:27;
      uint64_t reservedSpace1:1;
      uint64_t BP_MATCH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B_COMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t COMP:27;
      uint64_t reservedSpace1:1;
      uint64_t BP_MATCH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B_COMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t COMP:27;
      uint64_t reservedSpace1:1;
      uint64_t BP_MATCH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B_COMP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t COMP:27;
      uint64_t reservedSpace1:1;
      uint64_t BP_MATCH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B_COMP3;

};

#define Breakpoint_Unit (*(volatile struct Breakpoint_Unit_tag *) 0xe0002000)

struct Data_Watchpoint_and_Trace_Unit_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t NUM_CODE1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DW_CTRL;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIASAMPLE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DW_PCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP1:32;
      uint64_t MASK:5;
      uint64_t FUNCTION:4;
      uint64_t reservedSpace0:20;
      uint64_t MATCHED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DW_COMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:5;
      uint64_t FUNCTION:4;
      uint64_t reservedSpace0:20;
      uint64_t MATCHED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DW_MASK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNCTION:4;
      uint64_t reservedSpace0:20;
      uint64_t MATCHED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DW_FUNCTION0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:32;
      uint64_t MASK:5;
      uint64_t FUNCTION:4;
      uint64_t reservedSpace0:20;
      uint64_t MATCHED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DW_COMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:5;
      uint64_t FUNCTION:4;
      uint64_t reservedSpace0:20;
      uint64_t MATCHED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DW_MASK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNCTION:4;
      uint64_t reservedSpace0:20;
      uint64_t MATCHED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DW_FUNCTION1;

};

#define Data_Watchpoint_and_Trace_Unit (*(volatile struct Data_Watchpoint_and_Trace_Unit_tag *) 0xe0001000)

struct SFLASH_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW00;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW01;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW02;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW03;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW04;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW05;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW06;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW07;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW08;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW09;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW31;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW32;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW33;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW34;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW35;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW36;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW37;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW38;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW39;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW40;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW41;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW42;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW43;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW44;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW45;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW46;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW47;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW48;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW49;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW50;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW51;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW52;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW53;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW54;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW55;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW56;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW57;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW58;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW59;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW60;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW61;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW62;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_ROW63;

  uint8_t res0[63];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROT_LEVEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_PROTECTION;

  uint8_t res1[128];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AV_PAIRS_32B00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AV_PAIRS_32B01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AV_PAIRS_32B02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AV_PAIRS_32B03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AV_PAIRS_32B04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AV_PAIRS_32B05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AV_PAIRS_32B06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AV_PAIRS_32B07;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AV_PAIRS_32B08;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AV_PAIRS_32B09;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AV_PAIRS_32B10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AV_PAIRS_32B11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AV_PAIRS_32B12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AV_PAIRS_32B13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AV_PAIRS_32B14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AV_PAIRS_32B15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUSS_WOUNDING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SILICON_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUSS_PRIV_RAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUSS_PRIV_FLASH;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WAKEUP_HOLDOFF:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HIB_KEY_DELAY;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WAKEUP_HOLDOFF:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DPSLP_KEY_DELAY;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SWD_SELECT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SWD_CONFIG;

  uint8_t res2[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CYCLES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWD_LISTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_START;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRIM8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSD_TRIM1_HVIDAC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRIM8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSD_TRIM2_HVIDAC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRIM8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSD_TRIM1_CSD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRIM8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSD_TRIM2_CSD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TEMP_MULTIPLIER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SAR_TEMP_MULTIPLIER;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TEMP_OFFSET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SAR_TEMP_OFFSET;

  uint8_t res3[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SKIP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SKIP_CHECKSUM;

  uint8_t res4[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t KEY8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_VIRGINKEY0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t KEY8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_VIRGINKEY1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t KEY8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_VIRGINKEY2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t KEY8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_VIRGINKEY3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t KEY8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_VIRGINKEY4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t KEY8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_VIRGINKEY5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t KEY8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_VIRGINKEY6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t KEY8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PROT_VIRGINKEY7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LOT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DIE_LOT0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LOT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DIE_LOT1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LOT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DIE_LOT2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WAFER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DIE_WAFER;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t X:6;
      uint64_t CRI_PASS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DIE_X;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t Y:6;
      uint64_t CHI_PASS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DIE_Y;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t S1_PASS:2;
      uint64_t S2_PASS:2;
      uint64_t S3_PASS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DIE_SORT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MINOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DIE_MINOR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA00;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA01;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA02;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA03;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA04;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA05;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA06;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA07;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA08;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA09;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PE_TE_DATA31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:24;
      uint64_t PDAC:4;
      uint64_t NDAC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:24;
      uint64_t PDAC:4;
      uint64_t NDAC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:24;
      uint64_t PDAC:4;
      uint64_t NDAC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:24;
      uint64_t PDAC:4;
      uint64_t NDAC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EA_E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:24;
      uint64_t PDAC:4;
      uint64_t NDAC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EA_P;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:24;
      uint64_t PDAC:4;
      uint64_t NDAC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ES_E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:24;
      uint64_t PDAC:4;
      uint64_t NDAC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ES_P_EO;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VCTAT_SLOPE:4;
      uint64_t VCTAT_VOLTAGE:2;
      uint64_t VCTAT_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) E_VCTAT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VCTAT_SLOPE:4;
      uint64_t VCTAT_VOLTAGE:2;
      uint64_t VCTAT_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) P_VCTAT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MDAC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MARGIN;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BDAC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SPCIF_TRIM1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MAXFREQ:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_MAXF0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ABS_TRIM_IMO:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_ABS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMPCO_TRIM_IMO:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TMPCO0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MAXFREQ:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_MAXF1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ABS_TRIM_IMO:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_ABS1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMPCO_TRIM_IMO:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TMPCO1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MAXFREQ:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_MAXF2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ABS_TRIM_IMO:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_ABS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMPCO_TRIM_IMO:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TMPCO2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MAXFREQ:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_MAXF3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ABS_TRIM_IMO:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_ABS3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMPCO_TRIM_IMO:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TMPCO3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ABS_TRIM_IMO:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_ABS4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMPCO_TRIM_IMO:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TMPCO4;

  uint8_t res5[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM00;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM01;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM02;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM03;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM04;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM05;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM06;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM07;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM08;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM09;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM31;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM32;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM33;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM34;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM35;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM36;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM37;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM38;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM39;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM40;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM41;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM42;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM43;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM44;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IMO_TRIM45;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CHECKSUM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CHECKSUM;

};

#define SFLASH (*(volatile struct SFLASH_tag *) 0xffff000)

struct CPUSS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VECS_IN_RAM:1;
      uint64_t FLSH_ACC_BYPASS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMMAND:16;
      uint64_t reservedSpace0:11;
      uint64_t NO_RST_OVR:1;
      uint64_t PRIVILEGED:1;
      uint64_t ROM_ACCESS_EN:1;
      uint64_t HMASTER:1;
      uint64_t SYSREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARG32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSARG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROT:4;
      uint64_t reservedSpace0:27;
      uint64_t PROT_LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PROTECTION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ROM_LIMIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRIV_ROM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAM_LIMIT:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRIV_RAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLASH_LIMIT:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRIV_FLASH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAM_SIZE:9;
      uint64_t reservedSpace0:7;
      uint64_t RAM_WOUND:3;
      uint64_t reservedSpace1:1;
      uint64_t FLASH_WOUND:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WOUNDING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELECT32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SELECT;

};

#define CPUSS (*(volatile struct CPUSS_tag *) 0x40000000)

struct HSIOM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:4;
      uint64_t SEL1:4;
      uint64_t SEL2:4;
      uint64_t SEL3:4;
      uint64_t SEL4:4;
      uint64_t SEL5:4;
      uint64_t SEL6:4;
      uint64_t SEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_SEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:4;
      uint64_t SEL1:4;
      uint64_t SEL2:4;
      uint64_t SEL3:4;
      uint64_t SEL4:4;
      uint64_t SEL5:4;
      uint64_t SEL6:4;
      uint64_t SEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_SEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:4;
      uint64_t SEL1:4;
      uint64_t SEL2:4;
      uint64_t SEL3:4;
      uint64_t SEL4:4;
      uint64_t SEL5:4;
      uint64_t SEL6:4;
      uint64_t SEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_SEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:4;
      uint64_t SEL1:4;
      uint64_t SEL2:4;
      uint64_t SEL3:4;
      uint64_t SEL4:4;
      uint64_t SEL5:4;
      uint64_t SEL6:4;
      uint64_t SEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_SEL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:4;
      uint64_t SEL1:4;
      uint64_t SEL2:4;
      uint64_t SEL3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_SEL4;

};

#define HSIOM (*(volatile struct HSIOM_tag *) 0x40010000)

struct CLK_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_A:16;
      uint64_t reservedSpace0:15;
      uint64_t ENABLE_A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVIDER_A00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_A:16;
      uint64_t reservedSpace0:15;
      uint64_t ENABLE_A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVIDER_A01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_A:16;
      uint64_t reservedSpace0:15;
      uint64_t ENABLE_A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVIDER_A02;

  uint8_t res0[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_B:16;
      uint64_t reservedSpace0:14;
      uint64_t CASCADE_A_B:1;
      uint64_t ENABLE_B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVIDER_B00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_B:16;
      uint64_t reservedSpace0:14;
      uint64_t CASCADE_A_B:1;
      uint64_t ENABLE_B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVIDER_B01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_B:16;
      uint64_t reservedSpace0:14;
      uint64_t CASCADE_A_B:1;
      uint64_t ENABLE_B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVIDER_B02;

  uint8_t res1[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_C:16;
      uint64_t reservedSpace0:14;
      uint64_t CASCADE_B_C:1;
      uint64_t ENABLE_C:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVIDER_C00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_C:16;
      uint64_t reservedSpace0:14;
      uint64_t CASCADE_B_C:1;
      uint64_t ENABLE_C:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVIDER_C01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_C:16;
      uint64_t reservedSpace0:14;
      uint64_t CASCADE_B_C:1;
      uint64_t ENABLE_C:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVIDER_C02;

  uint8_t res2[116];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_A:16;
      uint64_t FRAC_A:5;
      uint64_t reservedSpace0:10;
      uint64_t ENABLE_A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVIDER_FRAC_A00;

  uint8_t res3[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_B:16;
      uint64_t FRAC_B:5;
      uint64_t reservedSpace0:9;
      uint64_t CASCADE_A_B:1;
      uint64_t ENABLE_B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVIDER_FRAC_B00;

  uint8_t res4[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_C:16;
      uint64_t FRAC_C:5;
      uint64_t reservedSpace0:9;
      uint64_t CASCADE_B_C:1;
      uint64_t ENABLE_C:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVIDER_FRAC_C00;

  uint8_t res5[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_N:4;
      uint64_t DIVIDER_ABC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELECT00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_N:4;
      uint64_t DIVIDER_ABC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELECT01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_N:4;
      uint64_t DIVIDER_ABC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELECT02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_N:4;
      uint64_t DIVIDER_ABC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELECT03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_N:4;
      uint64_t DIVIDER_ABC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELECT04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_N:4;
      uint64_t DIVIDER_ABC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELECT05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_N:4;
      uint64_t DIVIDER_ABC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELECT06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_N:4;
      uint64_t DIVIDER_ABC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELECT07;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_N:4;
      uint64_t DIVIDER_ABC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELECT08;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_N:4;
      uint64_t DIVIDER_ABC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELECT09;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_N:4;
      uint64_t DIVIDER_ABC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELECT10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_N:4;
      uint64_t DIVIDER_ABC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELECT11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_N:4;
      uint64_t DIVIDER_ABC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELECT12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_N:4;
      uint64_t DIVIDER_ABC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELECT13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_N:4;
      uint64_t DIVIDER_ABC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELECT14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVIDER_N:4;
      uint64_t DIVIDER_ABC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELECT15;

};

#define CLK (*(volatile struct CLK_tag *) 0x40020000)

struct TST_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAP_NO_ACCESS:1;
      uint64_t DAP_NO_DEBUG:1;
      uint64_t SWD_CONNECTED:1;
      uint64_t reservedSpace0:5;
      uint64_t TEST_RESET_EN_N:1;
      uint64_t TEST_SET_EN_N:1;
      uint64_t TEST_ICG_EN_N:1;
      uint64_t TEST_OCC0_1_EN_N:1;
      uint64_t TEST_OCC0_2_EN_N:1;
      uint64_t TEST_SLPISOLATE_EN:1;
      uint64_t TEST_SYSISOLATE_EN:1;
      uint64_t TEST_SLPRETAIN_EN:1;
      uint64_t TEST_SYSRETAIN_EN:1;
      uint64_t TEST_SPARE1_EN:1;
      uint64_t TEST_SPARE2_EN:1;
      uint64_t reservedSpace1:5;
      uint64_t SCAN_OCC_OBSERVE:1;
      uint64_t SCAN_TRF1:1;
      uint64_t SCAN_TRF:1;
      uint64_t SCAN_IDDQ:1;
      uint64_t SCAN_COMPRESS:1;
      uint64_t SCAN_MODE:1;
      uint64_t PTM_MODE_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADFT_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFT_SEL1:6;
      uint64_t reservedSpace0:2;
      uint64_t DFT_SEL2:6;
      uint64_t reservedSpace1:14;
      uint64_t EDGE:1;
      uint64_t DIVIDE:2;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDFT_CTRL;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SWD_CONNECTED:1;
      uint64_t reservedSpace1:28;
      uint64_t TEST_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER:16;
      uint64_t reservedSpace0:15;
      uint64_t COUNTER_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIM_CNTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIM_CNTR2;

};

#define TST (*(volatile struct TST_tag *) 0x40030000)

struct PRT_PRT0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAREG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINSTATE:8;
      uint64_t PINSTATE_FLT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DM:24;
      uint64_t VTRIP_SEL:1;
      uint64_t SLOW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTTYPE:16;
      uint64_t INTTYPE_FLT:2;
      uint64_t FLT_SELECT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSTAT:8;
      uint64_t INTSTAT_FLT:1;
      uint64_t reservedSpace0:7;
      uint64_t PS:8;
      uint64_t PS_FLT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP_DIS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC2;

};

#define PRT_PRT0 (*(volatile struct PRT_PRT0_tag *) 0x40040000)

struct PRT_PRT1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAREG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINSTATE:8;
      uint64_t PINSTATE_FLT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DM:24;
      uint64_t VTRIP_SEL:1;
      uint64_t SLOW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTTYPE:16;
      uint64_t INTTYPE_FLT:2;
      uint64_t FLT_SELECT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSTAT:8;
      uint64_t INTSTAT_FLT:1;
      uint64_t reservedSpace0:7;
      uint64_t PS:8;
      uint64_t PS_FLT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP_DIS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC2;

};

#define PRT_PRT1 (*(volatile struct PRT_PRT1_tag *) 0x40040100)

struct PRT_PRT2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAREG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINSTATE:8;
      uint64_t PINSTATE_FLT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DM:24;
      uint64_t VTRIP_SEL:1;
      uint64_t SLOW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTTYPE:16;
      uint64_t INTTYPE_FLT:2;
      uint64_t FLT_SELECT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSTAT:8;
      uint64_t INTSTAT_FLT:1;
      uint64_t reservedSpace0:7;
      uint64_t PS:8;
      uint64_t PS_FLT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP_DIS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC2;

};

#define PRT_PRT2 (*(volatile struct PRT_PRT2_tag *) 0x40040200)

struct PRT_PRT3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAREG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINSTATE:8;
      uint64_t PINSTATE_FLT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DM:24;
      uint64_t VTRIP_SEL:1;
      uint64_t SLOW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTTYPE:16;
      uint64_t INTTYPE_FLT:2;
      uint64_t FLT_SELECT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSTAT:8;
      uint64_t INTSTAT_FLT:1;
      uint64_t reservedSpace0:7;
      uint64_t PS:8;
      uint64_t PS_FLT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP_DIS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC2;

};

#define PRT_PRT3 (*(volatile struct PRT_PRT3_tag *) 0x40040300)

struct PRT_PRT4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAREG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINSTATE:8;
      uint64_t PINSTATE_FLT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DM:24;
      uint64_t VTRIP_SEL:1;
      uint64_t SLOW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTTYPE:16;
      uint64_t INTTYPE_FLT:2;
      uint64_t FLT_SELECT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSTAT:8;
      uint64_t INTSTAT_FLT:1;
      uint64_t reservedSpace0:7;
      uint64_t PS:8;
      uint64_t PS_FLT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP_DIS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC2;

};

#define PRT_PRT4 (*(volatile struct PRT_PRT4_tag *) 0x40040400)

struct TCPWM_TCPWM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER_ENABLED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER_CAPTURE:8;
      uint64_t COUNTER_RELOAD:8;
      uint64_t COUNTER_STOP:8;
      uint64_t COUNTER_START:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER_INT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_CAUSE;

};

#define TCPWM_TCPWM (*(volatile struct TCPWM_TCPWM_tag *) 0x40050000)

struct TCPWM_TCPWM_CNT0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTO_RELOAD_CC:1;
      uint64_t AUTO_RELOAD_PERIOD:1;
      uint64_t PWM_SYNC_KILL:1;
      uint64_t PWM_STOP_ON_KILL:1;
      uint64_t reservedSpace0:4;
      uint64_t GENERIC:8;
      uint64_t UP_DOWN_MODE:2;
      uint64_t ONE_SHOT:1;
      uint64_t reservedSpace1:1;
      uint64_t QUADRATURE_MODE:2;
      uint64_t reservedSpace2:2;
      uint64_t MODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOWN:1;
      uint64_t reservedSpace0:7;
      uint64_t GENERIC:8;
      uint64_t reservedSpace1:15;
      uint64_t RUNNING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COUNTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC_BUFF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIOD_BUFF;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE_SEL:4;
      uint64_t COUNT_SEL:4;
      uint64_t RELOAD_SEL:4;
      uint64_t STOP_SEL:4;
      uint64_t START_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE_EDGE:2;
      uint64_t COUNT_EDGE:2;
      uint64_t RELOAD_EDGE:2;
      uint64_t STOP_EDGE:2;
      uint64_t START_EDGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC_MATCH_MODE:2;
      uint64_t OVERFLOW_MODE:2;
      uint64_t UNDERFLOW_MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL2;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASKED;

};

#define TCPWM_TCPWM_CNT0 (*(volatile struct TCPWM_TCPWM_CNT0_tag *) 0x40050100)

struct TCPWM_TCPWM_CNT1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTO_RELOAD_CC:1;
      uint64_t AUTO_RELOAD_PERIOD:1;
      uint64_t PWM_SYNC_KILL:1;
      uint64_t PWM_STOP_ON_KILL:1;
      uint64_t reservedSpace0:4;
      uint64_t GENERIC:8;
      uint64_t UP_DOWN_MODE:2;
      uint64_t ONE_SHOT:1;
      uint64_t reservedSpace1:1;
      uint64_t QUADRATURE_MODE:2;
      uint64_t reservedSpace2:2;
      uint64_t MODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOWN:1;
      uint64_t reservedSpace0:7;
      uint64_t GENERIC:8;
      uint64_t reservedSpace1:15;
      uint64_t RUNNING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COUNTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC_BUFF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIOD_BUFF;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE_SEL:4;
      uint64_t COUNT_SEL:4;
      uint64_t RELOAD_SEL:4;
      uint64_t STOP_SEL:4;
      uint64_t START_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE_EDGE:2;
      uint64_t COUNT_EDGE:2;
      uint64_t RELOAD_EDGE:2;
      uint64_t STOP_EDGE:2;
      uint64_t START_EDGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC_MATCH_MODE:2;
      uint64_t OVERFLOW_MODE:2;
      uint64_t UNDERFLOW_MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL2;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASKED;

};

#define TCPWM_TCPWM_CNT1 (*(volatile struct TCPWM_TCPWM_CNT1_tag *) 0x40050140)

struct TCPWM_TCPWM_CNT2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTO_RELOAD_CC:1;
      uint64_t AUTO_RELOAD_PERIOD:1;
      uint64_t PWM_SYNC_KILL:1;
      uint64_t PWM_STOP_ON_KILL:1;
      uint64_t reservedSpace0:4;
      uint64_t GENERIC:8;
      uint64_t UP_DOWN_MODE:2;
      uint64_t ONE_SHOT:1;
      uint64_t reservedSpace1:1;
      uint64_t QUADRATURE_MODE:2;
      uint64_t reservedSpace2:2;
      uint64_t MODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOWN:1;
      uint64_t reservedSpace0:7;
      uint64_t GENERIC:8;
      uint64_t reservedSpace1:15;
      uint64_t RUNNING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COUNTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC_BUFF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIOD_BUFF;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE_SEL:4;
      uint64_t COUNT_SEL:4;
      uint64_t RELOAD_SEL:4;
      uint64_t STOP_SEL:4;
      uint64_t START_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE_EDGE:2;
      uint64_t COUNT_EDGE:2;
      uint64_t RELOAD_EDGE:2;
      uint64_t STOP_EDGE:2;
      uint64_t START_EDGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC_MATCH_MODE:2;
      uint64_t OVERFLOW_MODE:2;
      uint64_t UNDERFLOW_MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL2;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASKED;

};

#define TCPWM_TCPWM_CNT2 (*(volatile struct TCPWM_TCPWM_CNT2_tag *) 0x40050180)

struct TCPWM_TCPWM_CNT3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTO_RELOAD_CC:1;
      uint64_t AUTO_RELOAD_PERIOD:1;
      uint64_t PWM_SYNC_KILL:1;
      uint64_t PWM_STOP_ON_KILL:1;
      uint64_t reservedSpace0:4;
      uint64_t GENERIC:8;
      uint64_t UP_DOWN_MODE:2;
      uint64_t ONE_SHOT:1;
      uint64_t reservedSpace1:1;
      uint64_t QUADRATURE_MODE:2;
      uint64_t reservedSpace2:2;
      uint64_t MODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOWN:1;
      uint64_t reservedSpace0:7;
      uint64_t GENERIC:8;
      uint64_t reservedSpace1:15;
      uint64_t RUNNING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COUNTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC_BUFF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIOD_BUFF;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE_SEL:4;
      uint64_t COUNT_SEL:4;
      uint64_t RELOAD_SEL:4;
      uint64_t STOP_SEL:4;
      uint64_t START_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE_EDGE:2;
      uint64_t COUNT_EDGE:2;
      uint64_t RELOAD_EDGE:2;
      uint64_t STOP_EDGE:2;
      uint64_t START_EDGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC_MATCH_MODE:2;
      uint64_t OVERFLOW_MODE:2;
      uint64_t UNDERFLOW_MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL2;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASKED;

};

#define TCPWM_TCPWM_CNT3 (*(volatile struct TCPWM_TCPWM_CNT3_tag *) 0x400501c0)

struct SCB_SCB0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVS:4;
      uint64_t reservedSpace0:4;
      uint64_t EC_AM_MODE:1;
      uint64_t EC_OP_MODE:1;
      uint64_t EZ_MODE:1;
      uint64_t reservedSpace1:5;
      uint64_t ADDR_ACCEPT:1;
      uint64_t BLOCK:1;
      uint64_t reservedSpace2:6;
      uint64_t MODE:2;
      uint64_t reservedSpace3:5;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EC_BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONTINUOUS:1;
      uint64_t SELECT_PRECEDE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t LATE_MISO_SAMPLE:1;
      uint64_t reservedSpace0:11;
      uint64_t LOOPBACK:1;
      uint64_t reservedSpace1:7;
      uint64_t MODE:2;
      uint64_t SLAVE_SELECT:2;
      uint64_t reservedSpace2:3;
      uint64_t MASTER_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUS_BUSY:1;
      uint64_t reservedSpace0:7;
      uint64_t EZ_ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_STATUS;

  uint8_t res1[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t LOOPBACK:1;
      uint64_t reservedSpace1:7;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STOP_BITS:3;
      uint64_t reservedSpace0:1;
      uint64_t PARITY:1;
      uint64_t PARITY_ENABLED:1;
      uint64_t reservedSpace1:2;
      uint64_t RETRY_ON_NACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_TX_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STOP_BITS:3;
      uint64_t reservedSpace0:1;
      uint64_t PARITY:1;
      uint64_t PARITY_ENABLED:1;
      uint64_t POLARITY:1;
      uint64_t reservedSpace1:1;
      uint64_t DROP_ON_PARITY_ERROR:1;
      uint64_t DROP_ON_FRAME_ERROR:1;
      uint64_t MP_MODE:1;
      uint64_t reservedSpace2:1;
      uint64_t LIN_MODE:1;
      uint64_t SKIP_START:1;
      uint64_t reservedSpace3:2;
      uint64_t BREAK_WIDTH:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_RX_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR_COUNTER:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_RX_STATUS;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HIGH_PHASE_OVS:4;
      uint64_t LOW_PHASE_OVS:4;
      uint64_t M_READY_DATA_ACK:1;
      uint64_t M_NOT_READY_DATA_NACK:1;
      uint64_t reservedSpace0:1;
      uint64_t S_GENERAL_IGNORE:1;
      uint64_t S_READY_ADDR_ACK:1;
      uint64_t S_READY_DATA_ACK:1;
      uint64_t S_NOT_READY_ADDR_NACK:1;
      uint64_t S_NOT_READY_DATA_NACK:1;
      uint64_t LOOPBACK:1;
      uint64_t reservedSpace1:13;
      uint64_t SLAVE_MODE:1;
      uint64_t MASTER_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUS_BUSY:1;
      uint64_t reservedSpace0:3;
      uint64_t S_READ:1;
      uint64_t M_READ:1;
      uint64_t reservedSpace1:2;
      uint64_t EZ_ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M_START:1;
      uint64_t M_START_ON_IDLE:1;
      uint64_t M_ACK:1;
      uint64_t M_NACK:1;
      uint64_t M_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_M_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S_ACK:1;
      uint64_t S_NACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_S_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDA_FILT_HYS:2;
      uint64_t SDA_FILT_TRIM:2;
      uint64_t SCL_FILT_HYS:2;
      uint64_t SCL_FILT_TRIM:2;
      uint64_t SDA_FILT_OUT_HYS:2;
      uint64_t SDA_FILT_OUT_TRIM:2;
      uint64_t reservedSpace0:4;
      uint64_t SDA_FILT_HS:1;
      uint64_t SDA_FILT_ENABLED:1;
      uint64_t reservedSpace1:6;
      uint64_t SCL_FILT_HS:1;
      uint64_t SCL_FILT_ENABLED:1;
      uint64_t SDA_FILT_OUT_HS:1;
      uint64_t SDA_FILT_OUT_ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_CFG;

  uint8_t res3[140];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAM_ADDR:5;
      uint64_t reservedSpace0:11;
      uint64_t RAM_OP1:2;
      uint64_t RAM_OP2:2;
      uint64_t RAM_OP3:2;
      uint64_t RAM_OP4:2;
      uint64_t RAM_OPCNT:2;
      uint64_t RAM_PREADR:1;
      uint64_t RAM_WORD:1;
      uint64_t RAM_FAIL:1;
      uint64_t RAM_GO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BIST_CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAM_DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BIST_DATA;

  uint8_t res4[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_WIDTH:4;
      uint64_t reservedSpace0:4;
      uint64_t MSB_FIRST:1;
      uint64_t reservedSpace1:22;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER_LEVEL:3;
      uint64_t reservedSpace0:13;
      uint64_t CLEAR:1;
      uint64_t FREEZE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_FIFO_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USED:4;
      uint64_t reservedSpace0:11;
      uint64_t SR_VALID:1;
      uint64_t RD_PTR:3;
      uint64_t reservedSpace1:5;
      uint64_t WR_PTR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_FIFO_STATUS;

  uint8_t res5[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_FIFO_WR;

  uint8_t res6[188];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_WIDTH:4;
      uint64_t reservedSpace0:4;
      uint64_t MSB_FIRST:1;
      uint64_t MEDIAN:1;
      uint64_t reservedSpace1:21;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER_LEVEL:3;
      uint64_t reservedSpace0:13;
      uint64_t CLEAR:1;
      uint64_t FREEZE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_FIFO_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USED:4;
      uint64_t reservedSpace0:11;
      uint64_t SR_VALID:1;
      uint64_t RD_PTR:3;
      uint64_t reservedSpace1:5;
      uint64_t WR_PTR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_FIFO_STATUS;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t reservedSpace0:8;
      uint64_t MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_MATCH;

  uint8_t res8[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_FIFO_RD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_FIFO_RD_SILENT;

  uint8_t res9[184];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA07;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA08;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA09;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA31;

  uint8_t res10[2432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M:1;
      uint64_t S:1;
      uint64_t TX:1;
      uint64_t RX:1;
      uint64_t I2C_EC:1;
      uint64_t SPI_EC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_CAUSE;

  uint8_t res11[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKE_UP:1;
      uint64_t EZ_STOP:1;
      uint64_t EZ_WRITE_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_I2C_EC;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKE_UP:1;
      uint64_t EZ_STOP:1;
      uint64_t EZ_WRITE_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_I2C_EC_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKE_UP:1;
      uint64_t EZ_STOP:1;
      uint64_t EZ_WRITE_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_I2C_EC_MASKED;

  uint8_t res13[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKE_UP:1;
      uint64_t EZ_STOP:1;
      uint64_t EZ_WRITE_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SPI_EC;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKE_UP:1;
      uint64_t EZ_STOP:1;
      uint64_t EZ_WRITE_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SPI_EC_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKE_UP:1;
      uint64_t EZ_STOP:1;
      uint64_t EZ_WRITE_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SPI_EC_MASKED;

  uint8_t res15[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_ARB_LOST:1;
      uint64_t I2C_NACK:1;
      uint64_t I2C_ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t I2C_STOP:1;
      uint64_t reservedSpace1:3;
      uint64_t I2C_BUS_ERROR:1;
      uint64_t SPI_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_M;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_ARB_LOST:1;
      uint64_t I2C_NACK:1;
      uint64_t I2C_ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t I2C_STOP:1;
      uint64_t reservedSpace1:3;
      uint64_t I2C_BUS_ERROR:1;
      uint64_t SPI_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_M_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_ARB_LOST:1;
      uint64_t I2C_NACK:1;
      uint64_t I2C_ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t I2C_STOP:1;
      uint64_t reservedSpace1:3;
      uint64_t I2C_BUS_ERROR:1;
      uint64_t SPI_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_M_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_ARB_LOST:1;
      uint64_t I2C_NACK:1;
      uint64_t I2C_ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t I2C_STOP:1;
      uint64_t reservedSpace1:3;
      uint64_t I2C_BUS_ERROR:1;
      uint64_t SPI_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_M_MASKED;

  uint8_t res16[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_ARB_LOST:1;
      uint64_t I2C_NACK:1;
      uint64_t I2C_ACK:1;
      uint64_t I2C_WRITE_STOP:1;
      uint64_t I2C_STOP:1;
      uint64_t I2C_START:1;
      uint64_t I2C_ADDR_MATCH:1;
      uint64_t I2C_GENERAL:1;
      uint64_t I2C_BUS_ERROR:1;
      uint64_t SPI_EZ_WRITE_STOP:1;
      uint64_t SPI_EZ_STOP:1;
      uint64_t SPI_BUS_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_ARB_LOST:1;
      uint64_t I2C_NACK:1;
      uint64_t I2C_ACK:1;
      uint64_t I2C_WRITE_STOP:1;
      uint64_t I2C_STOP:1;
      uint64_t I2C_START:1;
      uint64_t I2C_ADDR_MATCH:1;
      uint64_t I2C_GENERAL:1;
      uint64_t I2C_BUS_ERROR:1;
      uint64_t SPI_EZ_WRITE_STOP:1;
      uint64_t SPI_EZ_STOP:1;
      uint64_t SPI_BUS_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_S_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_ARB_LOST:1;
      uint64_t I2C_NACK:1;
      uint64_t I2C_ACK:1;
      uint64_t I2C_WRITE_STOP:1;
      uint64_t I2C_STOP:1;
      uint64_t I2C_START:1;
      uint64_t I2C_ADDR_MATCH:1;
      uint64_t I2C_GENERAL:1;
      uint64_t I2C_BUS_ERROR:1;
      uint64_t SPI_EZ_WRITE_STOP:1;
      uint64_t SPI_EZ_STOP:1;
      uint64_t SPI_BUS_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_S_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_ARB_LOST:1;
      uint64_t I2C_NACK:1;
      uint64_t I2C_ACK:1;
      uint64_t I2C_WRITE_STOP:1;
      uint64_t I2C_STOP:1;
      uint64_t I2C_START:1;
      uint64_t I2C_ADDR_MATCH:1;
      uint64_t I2C_GENERAL:1;
      uint64_t I2C_BUS_ERROR:1;
      uint64_t SPI_EZ_WRITE_STOP:1;
      uint64_t SPI_EZ_STOP:1;
      uint64_t SPI_BUS_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_S_MASKED;

  uint8_t res17[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
      uint64_t NOT_FULL:1;
      uint64_t reservedSpace0:2;
      uint64_t EMPTY:1;
      uint64_t OVERFLOW:1;
      uint64_t UNDERFLOW:1;
      uint64_t BLOCKED:1;
      uint64_t UART_NACK:1;
      uint64_t UART_DONE:1;
      uint64_t UART_ARB_LOST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_TX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
      uint64_t NOT_FULL:1;
      uint64_t reservedSpace0:2;
      uint64_t EMPTY:1;
      uint64_t OVERFLOW:1;
      uint64_t UNDERFLOW:1;
      uint64_t BLOCKED:1;
      uint64_t UART_NACK:1;
      uint64_t UART_DONE:1;
      uint64_t UART_ARB_LOST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_TX_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
      uint64_t NOT_FULL:1;
      uint64_t reservedSpace0:2;
      uint64_t EMPTY:1;
      uint64_t OVERFLOW:1;
      uint64_t UNDERFLOW:1;
      uint64_t BLOCKED:1;
      uint64_t UART_NACK:1;
      uint64_t UART_DONE:1;
      uint64_t UART_ARB_LOST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_TX_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
      uint64_t NOT_FULL:1;
      uint64_t reservedSpace0:2;
      uint64_t EMPTY:1;
      uint64_t OVERFLOW:1;
      uint64_t UNDERFLOW:1;
      uint64_t BLOCKED:1;
      uint64_t UART_NACK:1;
      uint64_t UART_DONE:1;
      uint64_t UART_ARB_LOST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_TX_MASKED;

  uint8_t res18[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
      uint64_t reservedSpace0:1;
      uint64_t NOT_EMPTY:1;
      uint64_t FULL:1;
      uint64_t reservedSpace1:1;
      uint64_t OVERFLOW:1;
      uint64_t UNDERFLOW:1;
      uint64_t BLOCKED:1;
      uint64_t FRAME_ERROR:1;
      uint64_t PARITY_ERROR:1;
      uint64_t BAUD_DETECT:1;
      uint64_t BREAK_DETECT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_RX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
      uint64_t reservedSpace0:1;
      uint64_t NOT_EMPTY:1;
      uint64_t FULL:1;
      uint64_t reservedSpace1:1;
      uint64_t OVERFLOW:1;
      uint64_t UNDERFLOW:1;
      uint64_t BLOCKED:1;
      uint64_t FRAME_ERROR:1;
      uint64_t PARITY_ERROR:1;
      uint64_t BAUD_DETECT:1;
      uint64_t BREAK_DETECT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_RX_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
      uint64_t reservedSpace0:1;
      uint64_t NOT_EMPTY:1;
      uint64_t FULL:1;
      uint64_t reservedSpace1:1;
      uint64_t OVERFLOW:1;
      uint64_t UNDERFLOW:1;
      uint64_t BLOCKED:1;
      uint64_t FRAME_ERROR:1;
      uint64_t PARITY_ERROR:1;
      uint64_t BAUD_DETECT:1;
      uint64_t BREAK_DETECT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_RX_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
      uint64_t reservedSpace0:1;
      uint64_t NOT_EMPTY:1;
      uint64_t FULL:1;
      uint64_t reservedSpace1:1;
      uint64_t OVERFLOW:1;
      uint64_t UNDERFLOW:1;
      uint64_t BLOCKED:1;
      uint64_t FRAME_ERROR:1;
      uint64_t PARITY_ERROR:1;
      uint64_t BAUD_DETECT:1;
      uint64_t BREAK_DETECT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_RX_MASKED;

};

#define SCB_SCB0 (*(volatile struct SCB_SCB0_tag *) 0x40060000)

struct SCB_SCB1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVS:4;
      uint64_t reservedSpace0:4;
      uint64_t EC_AM_MODE:1;
      uint64_t EC_OP_MODE:1;
      uint64_t EZ_MODE:1;
      uint64_t reservedSpace1:5;
      uint64_t ADDR_ACCEPT:1;
      uint64_t BLOCK:1;
      uint64_t reservedSpace2:6;
      uint64_t MODE:2;
      uint64_t reservedSpace3:5;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EC_BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONTINUOUS:1;
      uint64_t SELECT_PRECEDE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t LATE_MISO_SAMPLE:1;
      uint64_t reservedSpace0:11;
      uint64_t LOOPBACK:1;
      uint64_t reservedSpace1:7;
      uint64_t MODE:2;
      uint64_t SLAVE_SELECT:2;
      uint64_t reservedSpace2:3;
      uint64_t MASTER_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUS_BUSY:1;
      uint64_t reservedSpace0:7;
      uint64_t EZ_ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_STATUS;

  uint8_t res1[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t LOOPBACK:1;
      uint64_t reservedSpace1:7;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STOP_BITS:3;
      uint64_t reservedSpace0:1;
      uint64_t PARITY:1;
      uint64_t PARITY_ENABLED:1;
      uint64_t reservedSpace1:2;
      uint64_t RETRY_ON_NACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_TX_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STOP_BITS:3;
      uint64_t reservedSpace0:1;
      uint64_t PARITY:1;
      uint64_t PARITY_ENABLED:1;
      uint64_t POLARITY:1;
      uint64_t reservedSpace1:1;
      uint64_t DROP_ON_PARITY_ERROR:1;
      uint64_t DROP_ON_FRAME_ERROR:1;
      uint64_t MP_MODE:1;
      uint64_t reservedSpace2:1;
      uint64_t LIN_MODE:1;
      uint64_t SKIP_START:1;
      uint64_t reservedSpace3:2;
      uint64_t BREAK_WIDTH:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_RX_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR_COUNTER:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_RX_STATUS;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HIGH_PHASE_OVS:4;
      uint64_t LOW_PHASE_OVS:4;
      uint64_t M_READY_DATA_ACK:1;
      uint64_t M_NOT_READY_DATA_NACK:1;
      uint64_t reservedSpace0:1;
      uint64_t S_GENERAL_IGNORE:1;
      uint64_t S_READY_ADDR_ACK:1;
      uint64_t S_READY_DATA_ACK:1;
      uint64_t S_NOT_READY_ADDR_NACK:1;
      uint64_t S_NOT_READY_DATA_NACK:1;
      uint64_t LOOPBACK:1;
      uint64_t reservedSpace1:13;
      uint64_t SLAVE_MODE:1;
      uint64_t MASTER_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUS_BUSY:1;
      uint64_t reservedSpace0:3;
      uint64_t S_READ:1;
      uint64_t M_READ:1;
      uint64_t reservedSpace1:2;
      uint64_t EZ_ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M_START:1;
      uint64_t M_START_ON_IDLE:1;
      uint64_t M_ACK:1;
      uint64_t M_NACK:1;
      uint64_t M_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_M_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S_ACK:1;
      uint64_t S_NACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_S_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDA_FILT_HYS:2;
      uint64_t SDA_FILT_TRIM:2;
      uint64_t SCL_FILT_HYS:2;
      uint64_t SCL_FILT_TRIM:2;
      uint64_t SDA_FILT_OUT_HYS:2;
      uint64_t SDA_FILT_OUT_TRIM:2;
      uint64_t reservedSpace0:4;
      uint64_t SDA_FILT_HS:1;
      uint64_t SDA_FILT_ENABLED:1;
      uint64_t reservedSpace1:6;
      uint64_t SCL_FILT_HS:1;
      uint64_t SCL_FILT_ENABLED:1;
      uint64_t SDA_FILT_OUT_HS:1;
      uint64_t SDA_FILT_OUT_ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_CFG;

  uint8_t res3[140];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAM_ADDR:5;
      uint64_t reservedSpace0:11;
      uint64_t RAM_OP1:2;
      uint64_t RAM_OP2:2;
      uint64_t RAM_OP3:2;
      uint64_t RAM_OP4:2;
      uint64_t RAM_OPCNT:2;
      uint64_t RAM_PREADR:1;
      uint64_t RAM_WORD:1;
      uint64_t RAM_FAIL:1;
      uint64_t RAM_GO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BIST_CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAM_DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BIST_DATA;

  uint8_t res4[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_WIDTH:4;
      uint64_t reservedSpace0:4;
      uint64_t MSB_FIRST:1;
      uint64_t reservedSpace1:22;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER_LEVEL:3;
      uint64_t reservedSpace0:13;
      uint64_t CLEAR:1;
      uint64_t FREEZE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_FIFO_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USED:4;
      uint64_t reservedSpace0:11;
      uint64_t SR_VALID:1;
      uint64_t RD_PTR:3;
      uint64_t reservedSpace1:5;
      uint64_t WR_PTR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_FIFO_STATUS;

  uint8_t res5[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_FIFO_WR;

  uint8_t res6[188];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_WIDTH:4;
      uint64_t reservedSpace0:4;
      uint64_t MSB_FIRST:1;
      uint64_t MEDIAN:1;
      uint64_t reservedSpace1:21;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER_LEVEL:3;
      uint64_t reservedSpace0:13;
      uint64_t CLEAR:1;
      uint64_t FREEZE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_FIFO_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USED:4;
      uint64_t reservedSpace0:11;
      uint64_t SR_VALID:1;
      uint64_t RD_PTR:3;
      uint64_t reservedSpace1:5;
      uint64_t WR_PTR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_FIFO_STATUS;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t reservedSpace0:8;
      uint64_t MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_MATCH;

  uint8_t res8[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_FIFO_RD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_FIFO_RD_SILENT;

  uint8_t res9[184];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA07;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA08;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA09;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EZ_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EZ_DATA31;

  uint8_t res10[2432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M:1;
      uint64_t S:1;
      uint64_t TX:1;
      uint64_t RX:1;
      uint64_t I2C_EC:1;
      uint64_t SPI_EC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_CAUSE;

  uint8_t res11[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKE_UP:1;
      uint64_t EZ_STOP:1;
      uint64_t EZ_WRITE_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_I2C_EC;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKE_UP:1;
      uint64_t EZ_STOP:1;
      uint64_t EZ_WRITE_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_I2C_EC_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKE_UP:1;
      uint64_t EZ_STOP:1;
      uint64_t EZ_WRITE_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_I2C_EC_MASKED;

  uint8_t res13[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKE_UP:1;
      uint64_t EZ_STOP:1;
      uint64_t EZ_WRITE_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SPI_EC;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKE_UP:1;
      uint64_t EZ_STOP:1;
      uint64_t EZ_WRITE_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SPI_EC_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKE_UP:1;
      uint64_t EZ_STOP:1;
      uint64_t EZ_WRITE_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SPI_EC_MASKED;

  uint8_t res15[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_ARB_LOST:1;
      uint64_t I2C_NACK:1;
      uint64_t I2C_ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t I2C_STOP:1;
      uint64_t reservedSpace1:3;
      uint64_t I2C_BUS_ERROR:1;
      uint64_t SPI_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_M;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_ARB_LOST:1;
      uint64_t I2C_NACK:1;
      uint64_t I2C_ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t I2C_STOP:1;
      uint64_t reservedSpace1:3;
      uint64_t I2C_BUS_ERROR:1;
      uint64_t SPI_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_M_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_ARB_LOST:1;
      uint64_t I2C_NACK:1;
      uint64_t I2C_ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t I2C_STOP:1;
      uint64_t reservedSpace1:3;
      uint64_t I2C_BUS_ERROR:1;
      uint64_t SPI_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_M_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_ARB_LOST:1;
      uint64_t I2C_NACK:1;
      uint64_t I2C_ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t I2C_STOP:1;
      uint64_t reservedSpace1:3;
      uint64_t I2C_BUS_ERROR:1;
      uint64_t SPI_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_M_MASKED;

  uint8_t res16[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_ARB_LOST:1;
      uint64_t I2C_NACK:1;
      uint64_t I2C_ACK:1;
      uint64_t I2C_WRITE_STOP:1;
      uint64_t I2C_STOP:1;
      uint64_t I2C_START:1;
      uint64_t I2C_ADDR_MATCH:1;
      uint64_t I2C_GENERAL:1;
      uint64_t I2C_BUS_ERROR:1;
      uint64_t SPI_EZ_WRITE_STOP:1;
      uint64_t SPI_EZ_STOP:1;
      uint64_t SPI_BUS_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_ARB_LOST:1;
      uint64_t I2C_NACK:1;
      uint64_t I2C_ACK:1;
      uint64_t I2C_WRITE_STOP:1;
      uint64_t I2C_STOP:1;
      uint64_t I2C_START:1;
      uint64_t I2C_ADDR_MATCH:1;
      uint64_t I2C_GENERAL:1;
      uint64_t I2C_BUS_ERROR:1;
      uint64_t SPI_EZ_WRITE_STOP:1;
      uint64_t SPI_EZ_STOP:1;
      uint64_t SPI_BUS_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_S_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_ARB_LOST:1;
      uint64_t I2C_NACK:1;
      uint64_t I2C_ACK:1;
      uint64_t I2C_WRITE_STOP:1;
      uint64_t I2C_STOP:1;
      uint64_t I2C_START:1;
      uint64_t I2C_ADDR_MATCH:1;
      uint64_t I2C_GENERAL:1;
      uint64_t I2C_BUS_ERROR:1;
      uint64_t SPI_EZ_WRITE_STOP:1;
      uint64_t SPI_EZ_STOP:1;
      uint64_t SPI_BUS_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_S_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_ARB_LOST:1;
      uint64_t I2C_NACK:1;
      uint64_t I2C_ACK:1;
      uint64_t I2C_WRITE_STOP:1;
      uint64_t I2C_STOP:1;
      uint64_t I2C_START:1;
      uint64_t I2C_ADDR_MATCH:1;
      uint64_t I2C_GENERAL:1;
      uint64_t I2C_BUS_ERROR:1;
      uint64_t SPI_EZ_WRITE_STOP:1;
      uint64_t SPI_EZ_STOP:1;
      uint64_t SPI_BUS_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_S_MASKED;

  uint8_t res17[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
      uint64_t NOT_FULL:1;
      uint64_t reservedSpace0:2;
      uint64_t EMPTY:1;
      uint64_t OVERFLOW:1;
      uint64_t UNDERFLOW:1;
      uint64_t BLOCKED:1;
      uint64_t UART_NACK:1;
      uint64_t UART_DONE:1;
      uint64_t UART_ARB_LOST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_TX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
      uint64_t NOT_FULL:1;
      uint64_t reservedSpace0:2;
      uint64_t EMPTY:1;
      uint64_t OVERFLOW:1;
      uint64_t UNDERFLOW:1;
      uint64_t BLOCKED:1;
      uint64_t UART_NACK:1;
      uint64_t UART_DONE:1;
      uint64_t UART_ARB_LOST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_TX_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
      uint64_t NOT_FULL:1;
      uint64_t reservedSpace0:2;
      uint64_t EMPTY:1;
      uint64_t OVERFLOW:1;
      uint64_t UNDERFLOW:1;
      uint64_t BLOCKED:1;
      uint64_t UART_NACK:1;
      uint64_t UART_DONE:1;
      uint64_t UART_ARB_LOST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_TX_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
      uint64_t NOT_FULL:1;
      uint64_t reservedSpace0:2;
      uint64_t EMPTY:1;
      uint64_t OVERFLOW:1;
      uint64_t UNDERFLOW:1;
      uint64_t BLOCKED:1;
      uint64_t UART_NACK:1;
      uint64_t UART_DONE:1;
      uint64_t UART_ARB_LOST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_TX_MASKED;

  uint8_t res18[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
      uint64_t reservedSpace0:1;
      uint64_t NOT_EMPTY:1;
      uint64_t FULL:1;
      uint64_t reservedSpace1:1;
      uint64_t OVERFLOW:1;
      uint64_t UNDERFLOW:1;
      uint64_t BLOCKED:1;
      uint64_t FRAME_ERROR:1;
      uint64_t PARITY_ERROR:1;
      uint64_t BAUD_DETECT:1;
      uint64_t BREAK_DETECT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_RX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
      uint64_t reservedSpace0:1;
      uint64_t NOT_EMPTY:1;
      uint64_t FULL:1;
      uint64_t reservedSpace1:1;
      uint64_t OVERFLOW:1;
      uint64_t UNDERFLOW:1;
      uint64_t BLOCKED:1;
      uint64_t FRAME_ERROR:1;
      uint64_t PARITY_ERROR:1;
      uint64_t BAUD_DETECT:1;
      uint64_t BREAK_DETECT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_RX_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
      uint64_t reservedSpace0:1;
      uint64_t NOT_EMPTY:1;
      uint64_t FULL:1;
      uint64_t reservedSpace1:1;
      uint64_t OVERFLOW:1;
      uint64_t UNDERFLOW:1;
      uint64_t BLOCKED:1;
      uint64_t FRAME_ERROR:1;
      uint64_t PARITY_ERROR:1;
      uint64_t BAUD_DETECT:1;
      uint64_t BREAK_DETECT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_RX_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
      uint64_t reservedSpace0:1;
      uint64_t NOT_EMPTY:1;
      uint64_t FULL:1;
      uint64_t reservedSpace1:1;
      uint64_t OVERFLOW:1;
      uint64_t UNDERFLOW:1;
      uint64_t BLOCKED:1;
      uint64_t FRAME_ERROR:1;
      uint64_t PARITY_ERROR:1;
      uint64_t BAUD_DETECT:1;
      uint64_t BREAK_DETECT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_RX_MASKED;

};

#define SCB_SCB1 (*(volatile struct SCB_SCB1_tag *) 0x40070000)

struct CSD_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:16;
      uint64_t REVISION:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSI_SAMPLE_EN:1;
      uint64_t SAMPLE_SYNC:1;
      uint64_t reservedSpace0:3;
      uint64_t PRS_CLEAR:1;
      uint64_t PRS_SELECT:1;
      uint64_t PRS_12_8:1;
      uint64_t DSI_SENSE_EN:1;
      uint64_t SHIELD_DELAY:2;
      uint64_t SENSE_COMP_BW:1;
      uint64_t SENSE_EN:1;
      uint64_t REFBUF_EN:1;
      uint64_t COMP_MODE:1;
      uint64_t COMP_PIN:1;
      uint64_t POLARITY:1;
      uint64_t POLARITY2:1;
      uint64_t MUTUAL_CAP:1;
      uint64_t SENSE_COMP_EN:1;
      uint64_t reservedSpace1:1;
      uint64_t REBUF_OUTSEL:1;
      uint64_t SENSE_INSEL:1;
      uint64_t REFBUF_DRV:2;
      uint64_t reservedSpace2:1;
      uint64_t DDFTSEL:3;
      uint64_t ADFTEN:1;
      uint64_t DDFTCOMP:1;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDAC1:8;
      uint64_t IDAC1_MODE:2;
      uint64_t IDAC1_RANGE:1;
      uint64_t reservedSpace0:5;
      uint64_t IDAC2:7;
      uint64_t reservedSpace1:1;
      uint64_t IDAC2_MODE:2;
      uint64_t IDAC2_RANGE:1;
      uint64_t reservedSpace2:3;
      uint64_t FEEDBACK_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER:16;
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COUNTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSD_CHARGE:1;
      uint64_t CSD_SENSE:1;
      uint64_t COMP_OUT:1;
      uint64_t SAMPLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSD_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSD_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SET;

  uint8_t res0[65252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDAC1_SRC_TRIM:4;
      uint64_t IDAC2_SRC_TRIM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDAC1_SNK_TRIM:4;
      uint64_t IDAC2_SNK_TRIM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIM2;

};

#define CSD (*(volatile struct CSD_tag *) 0x40080000)

struct LCD_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:16;
      uint64_t REVISION:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUBFR_DIV:16;
      uint64_t DEAD_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVIDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LS_EN:1;
      uint64_t HS_EN:1;
      uint64_t LCD_MODE:1;
      uint64_t TYPE:1;
      uint64_t OP_MODE:1;
      uint64_t BIAS:2;
      uint64_t reservedSpace0:1;
      uint64_t COM_NUM:4;
      uint64_t reservedSpace1:19;
      uint64_t LS_EN_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONTROL;

  uint8_t res0[244];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA04;

};

#define LCD (*(volatile struct LCD_tag *) 0x40090000)

struct LPCOMP_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:16;
      uint64_t REVISION:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE1:2;
      uint64_t HYST1:1;
      uint64_t FILTER1:1;
      uint64_t INTTYPE1:2;
      uint64_t OUT1:1;
      uint64_t ENABLE1:1;
      uint64_t MODE2:2;
      uint64_t HYST2:1;
      uint64_t FILTER2:1;
      uint64_t INTTYPE2:2;
      uint64_t OUT2:1;
      uint64_t ENABLE2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAL_EN:1;
      uint64_t BYPASS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP1:1;
      uint64_t COMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP1:1;
      uint64_t COMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SET;

  uint8_t res0[65260];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP1_TRIMA:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP1_TRIMB:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP2_TRIMA:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP2_TRIMB:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIM4;

};

#define LPCOMP (*(volatile struct LPCOMP_tag *) 0x400a0000)

struct SRSS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t POWER_MODE:4;
      uint64_t DEBUG_SESSION:1;
      uint64_t LPM_READY:1;
      uint64_t reservedSpace0:17;
      uint64_t EXT_VCCD:1;
      uint64_t HVMON_ENABLE:1;
      uint64_t HVMON_RELOAD:1;
      uint64_t reservedSpace1:1;
      uint64_t FIMO_DISABLE:1;
      uint64_t HIBERNATE_DISABLE:1;
      uint64_t LFCLK_SHORT:1;
      uint64_t reservedSpace2:1;
      uint64_t HIBERNATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t LVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t LVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP_HOLDOFF:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_KEY_DELAY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HIB_TEST_EN:1;
      uint64_t HIB_TEST_REP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_PWRSYS_CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BG_DFT_EN:1;
      uint64_t BG_DFT_VREF_SEL:4;
      uint64_t BG_DFT_CORE_SEL:1;
      uint64_t BG_DFT_ICORE_SEL:2;
      uint64_t BG_DFT_VCORE_SEL:1;
      uint64_t reservedSpace0:7;
      uint64_t VREF_EN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_BG_CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LVD_EN:1;
      uint64_t LVD_SEL:4;
      uint64_t VMON_DDFT_SEL:3;
      uint64_t VMON_ADFT_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_VMON_CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVMON1_SEL:3;
      uint64_t TVMON2_SEL:3;
      uint64_t BYPASS:1;
      uint64_t ACTIVE_EN:1;
      uint64_t ACTIVE_INRUSH_DIS:1;
      uint64_t LPCOMP_DIS:1;
      uint64_t BLEED_EN:1;
      uint64_t IPOR_EN:1;
      uint64_t POWER_UP_RAW_BYP:1;
      uint64_t POWER_UP_RAW_CTL:1;
      uint64_t DEEPSLEEP_EN:1;
      uint64_t RSVD_BYPASS:1;
      uint64_t NWELL_OPEN:1;
      uint64_t HIBERNATE_OPEN:1;
      uint64_t DEEPSLEEP_OPEN:1;
      uint64_t QUIET_OPEN:1;
      uint64_t LFCLK_OPEN:1;
      uint64_t reservedSpace0:1;
      uint64_t QUIET_EN:1;
      uint64_t BREF_EN:1;
      uint64_t BREF_OUTEN:1;
      uint64_t BREF_REFSW:1;
      uint64_t BREF_TESTMODE:1;
      uint64_t NWELL_DIS:1;
      uint64_t HVMON_DFT_OVR:1;
      uint64_t IMO_REFGEN_DIS:1;
      uint64_t POWER_UP_ACTIVE:1;
      uint64_t POWER_UP_HIBDPSLP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_DFT_SELECT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DDFT1_SEL:4;
      uint64_t DDFT2_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_DDFT_SELECT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY16:16;
      uint64_t HBOD_OFF_AWAKE:1;
      uint64_t BODS_OFF:1;
      uint64_t DFT_MODE:1;
      uint64_t IO_DISABLE_BYPASS:1;
      uint64_t VMON_PD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_DFT_KEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY16:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_BOD_KEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOKEN:8;
      uint64_t UNLOCK:8;
      uint64_t POLARITY:1;
      uint64_t FREEZE:1;
      uint64_t reservedSpace0:13;
      uint64_t STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_STOP;

  uint8_t res0[208];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRECT_SEL:3;
      uint64_t DBL_SEL:3;
      uint64_t PLL_SEL:3;
      uint64_t DPLLIN_SEL:3;
      uint64_t DPLLREF_SEL:2;
      uint64_t WDT_LOCK:2;
      uint64_t HFCLK_SEL:2;
      uint64_t HALF_EN:1;
      uint64_t SYSCLK_DIV:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_SELECT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD_MODE:1;
      uint64_t TURBO:1;
      uint64_t SATBIAS:1;
      uint64_t reservedSpace0:28;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_ILO_CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:22;
      uint64_t FLASHPUMP_SEL:1;
      uint64_t EN_FASTBIAS:1;
      uint64_t TEST_FASTBIAS:1;
      uint64_t PUMP_SEL:3;
      uint64_t TEST_USB_MODE:1;
      uint64_t EN_CLK36:1;
      uint64_t EN_CLK2X:1;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_IMO_CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SS_VALUE:5;
      uint64_t reservedSpace0:3;
      uint64_t SS_MAX:5;
      uint64_t reservedSpace1:15;
      uint64_t SS_RANGE:2;
      uint64_t SS_MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_IMO_SPREAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFT_SEL1:4;
      uint64_t DFT_DIV1:2;
      uint64_t reservedSpace0:2;
      uint64_t DFT_SEL2:4;
      uint64_t DFT_DIV2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_DFT_SELECT;

  uint8_t res1[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDT_CTR0:16;
      uint64_t WDT_CTR1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDT_CTRLOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDT_CTR2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDT_CTRHIGH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDT_MATCH0:16;
      uint64_t WDT_MATCH1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDT_MATCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDT_MODE0:2;
      uint64_t WDT_CLEAR0:1;
      uint64_t WDT_CASCADE0_1:1;
      uint64_t reservedSpace0:4;
      uint64_t WDT_MODE1:2;
      uint64_t WDT_CLEAR1:1;
      uint64_t WDT_CASCADE1_2:1;
      uint64_t reservedSpace1:4;
      uint64_t WDT_MODE2:1;
      uint64_t reservedSpace2:7;
      uint64_t WDT_BITS2:5;
      uint64_t reservedSpace3:1;
      uint64_t LFCLK_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDT_CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDT_ENABLE0:1;
      uint64_t WDT_ENABLED0:1;
      uint64_t WDT_INT0:1;
      uint64_t WDT_RESET0:1;
      uint64_t reservedSpace0:4;
      uint64_t WDT_ENABLE1:1;
      uint64_t WDT_ENABLED1:1;
      uint64_t WDT_INT1:1;
      uint64_t WDT_RESET1:1;
      uint64_t reservedSpace1:4;
      uint64_t WDT_ENABLE2:1;
      uint64_t WDT_ENABLED2:1;
      uint64_t WDT_INT2:1;
      uint64_t WDT_RESET2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDT_CONTROL;

  uint8_t res2[236];

  uint32_t RES_CAUSE;
  uint8_t res3[64508];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HIB_BIAS_TRIM:3;
      uint64_t BOD_TURBO_THRESH:1;
      uint64_t BOD_TRIM_TRIP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_PWRSYS_TRIM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFCLK_TRIM_LOAD:2;
      uint64_t LFCLK_TRIM_VOLTAGE:2;
      uint64_t DPSLP_TRIM_LOAD:2;
      uint64_t DPSLP_TRIM_LEAKAGE:1;
      uint64_t DPSLP_TRIM_VOLTAGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_PWRSYS_TRIM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NWELL_TRIM:3;
      uint64_t QUIET_TRIM:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_PWRSYS_TRIM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HIB_TRIM_NWELL:2;
      uint64_t HIB_TRIM_LEAKAGE:1;
      uint64_t HIB_TRIM_VOLTAGE:1;
      uint64_t HIB_TRIM_REFERENCE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_PWRSYS_TRIM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INL_TRIM_MAIN:3;
      uint64_t INL_CROSS_MAIN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_BG_TRIM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VCTAT_SLOPE:4;
      uint64_t VCTAT_VOLTAGE:2;
      uint64_t VCTAT_ENABLE:1;
      uint64_t VCTAT_VOLTAGE_MSB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_BG_TRIM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INL_TRIM_IMO:3;
      uint64_t INL_CROSS_IMO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_BG_TRIM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ABS_TRIM_IMO:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_BG_TRIM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMPCO_TRIM_IMO:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_BG_TRIM5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIM:4;
      uint64_t COARSE_TRIM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_ILO_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_IMO_TRIM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FREQ:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_IMO_TRIM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIM_CLK36:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_IMO_TRIM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GAIN:5;
      uint64_t FSOFFSET:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_IMO_TRIM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSVD_TRIM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_RSVD_TRIM;

};

#define SRSS (*(volatile struct SRSS_tag *) 0x400b0000)

struct SPCIF_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLASH:16;
      uint64_t SFLASH_bitfield:4;
      uint64_t NUM_FLASH:2;
      uint64_t FLASH_ROW:2;
      uint64_t NVL:7;
      uint64_t DE_CPD_LP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GEOMETRY;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVL_WR_DATA;

};

#define SPCIF (*(volatile struct SPCIF_tag *) 0x400e0000)

struct UDB_UDB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_MODE_CFG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_CFG;

};

#define UDB_UDB (*(volatile struct UDB_UDB_tag *) 0x400f8000)

struct UDB_UDB_W8_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t A0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) A0_00;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t A0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) A0_01;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t A0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) A0_02;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t A0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) A0_03;

  uint8_t res0[12];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t A1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) A1_00;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t A1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) A1_01;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t A1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) A1_02;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t A1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) A1_03;

  uint8_t res1[12];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t D0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) D0_00;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t D0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) D0_01;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t D0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) D0_02;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t D0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) D0_03;

  uint8_t res2[12];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t D1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) D1_00;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t D1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) D1_01;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t D1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) D1_02;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t D1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) D1_03;

  uint8_t res3[12];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t F0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) F0_00;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t F0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) F0_01;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t F0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) F0_02;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t F0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) F0_03;

  uint8_t res4[12];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t F1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) F1_00;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t F1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) F1_01;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t F1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) F1_02;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t F1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) F1_03;

  uint8_t res5[12];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ST_00;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ST_01;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ST_02;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ST_03;

  uint8_t res6[12];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CTL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL_00;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CTL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL_01;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CTL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL_02;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CTL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL_03;

  uint8_t res7[12];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MSK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MSK_00;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MSK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MSK_01;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MSK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MSK_02;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MSK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MSK_03;

  uint8_t res8[12];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FIFO0_CLR:1;
      uint64_t FIFO1_CLR:1;
      uint64_t FIFO0_LVL:1;
      uint64_t FIFO1_LVL:1;
      uint64_t INT_EN:1;
      uint64_t CNT_START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ACTL_00;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FIFO0_CLR:1;
      uint64_t FIFO1_CLR:1;
      uint64_t FIFO0_LVL:1;
      uint64_t FIFO1_LVL:1;
      uint64_t INT_EN:1;
      uint64_t CNT_START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ACTL_01;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FIFO0_CLR:1;
      uint64_t FIFO1_CLR:1;
      uint64_t FIFO0_LVL:1;
      uint64_t FIFO1_LVL:1;
      uint64_t INT_EN:1;
      uint64_t CNT_START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ACTL_02;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FIFO0_CLR:1;
      uint64_t FIFO1_CLR:1;
      uint64_t FIFO0_LVL:1;
      uint64_t FIFO1_LVL:1;
      uint64_t INT_EN:1;
      uint64_t CNT_START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ACTL_03;

  uint8_t res9[12];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLD0_MC:4;
      uint64_t PLD1_MC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MC_00;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLD0_MC:4;
      uint64_t PLD1_MC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MC_01;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLD0_MC:4;
      uint64_t PLD1_MC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MC_02;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLD0_MC:4;
      uint64_t PLD1_MC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MC_03;

};

#define UDB_UDB_W8 (*(volatile struct UDB_UDB_W8_tag *) 0x400f0000)

struct UDB_UDB_W16_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t A0_LS:8;
      uint64_t A0_MS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) A0_00;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t A0_LS:8;
      uint64_t A0_MS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) A0_01;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t A0_LS:8;
      uint64_t A0_MS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) A0_02;

  uint8_t res0[26];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t A1_LS:8;
      uint64_t A1_MS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) A1_00;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t A1_LS:8;
      uint64_t A1_MS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) A1_01;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t A1_LS:8;
      uint64_t A1_MS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) A1_02;

  uint8_t res1[26];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t D0_LS:8;
      uint64_t D0_MS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) D0_00;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t D0_LS:8;
      uint64_t D0_MS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) D0_01;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t D0_LS:8;
      uint64_t D0_MS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) D0_02;

  uint8_t res2[26];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t D1_LS:8;
      uint64_t D1_MS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) D1_00;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t D1_LS:8;
      uint64_t D1_MS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) D1_01;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t D1_LS:8;
      uint64_t D1_MS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) D1_02;

  uint8_t res3[26];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t F0_LS:8;
      uint64_t F0_MS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) F0_00;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t F0_LS:8;
      uint64_t F0_MS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) F0_01;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t F0_LS:8;
      uint64_t F0_MS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) F0_02;

  uint8_t res4[26];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t F1_LS:8;
      uint64_t F1_MS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) F1_00;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t F1_LS:8;
      uint64_t F1_MS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) F1_01;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t F1_LS:8;
      uint64_t F1_MS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) F1_02;

  uint8_t res5[26];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ST_LS:8;
      uint64_t ST_MS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ST_00;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ST_LS:8;
      uint64_t ST_MS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ST_01;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ST_LS:8;
      uint64_t ST_MS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ST_02;

  uint8_t res6[26];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CTL_LS:8;
      uint64_t CTL_MS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTL_00;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CTL_LS:8;
      uint64_t CTL_MS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTL_01;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CTL_LS:8;
      uint64_t CTL_MS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTL_02;

  uint8_t res7[26];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSK_LS:7;
      uint64_t reservedSpace0:1;
      uint64_t MSK_MS:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MSK_00;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSK_LS:7;
      uint64_t reservedSpace0:1;
      uint64_t MSK_MS:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MSK_01;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSK_LS:7;
      uint64_t reservedSpace0:1;
      uint64_t MSK_MS:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MSK_02;

  uint8_t res8[26];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FIFO0_CLR_LS:1;
      uint64_t FIFO1_CLR_LS:1;
      uint64_t FIFO0_LVL_LS:1;
      uint64_t FIFO1_LVL_LS:1;
      uint64_t INT_EN_LS:1;
      uint64_t CNT_START_LS:1;
      uint64_t reservedSpace0:2;
      uint64_t FIFO0_CLR_MS:1;
      uint64_t FIFO1_CLR_MS:1;
      uint64_t FIFO0_LVL_MS:1;
      uint64_t FIFO1_LVL_MS:1;
      uint64_t INT_EN_MS:1;
      uint64_t CNT_START_MS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ACTL_00;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FIFO0_CLR_LS:1;
      uint64_t FIFO1_CLR_LS:1;
      uint64_t FIFO0_LVL_LS:1;
      uint64_t FIFO1_LVL_LS:1;
      uint64_t INT_EN_LS:1;
      uint64_t CNT_START_LS:1;
      uint64_t reservedSpace0:2;
      uint64_t FIFO0_CLR_MS:1;
      uint64_t FIFO1_CLR_MS:1;
      uint64_t FIFO0_LVL_MS:1;
      uint64_t FIFO1_LVL_MS:1;
      uint64_t INT_EN_MS:1;
      uint64_t CNT_START_MS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ACTL_01;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FIFO0_CLR_LS:1;
      uint64_t FIFO1_CLR_LS:1;
      uint64_t FIFO0_LVL_LS:1;
      uint64_t FIFO1_LVL_LS:1;
      uint64_t INT_EN_LS:1;
      uint64_t CNT_START_LS:1;
      uint64_t reservedSpace0:2;
      uint64_t FIFO0_CLR_MS:1;
      uint64_t FIFO1_CLR_MS:1;
      uint64_t FIFO0_LVL_MS:1;
      uint64_t FIFO1_LVL_MS:1;
      uint64_t INT_EN_MS:1;
      uint64_t CNT_START_MS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ACTL_02;

  uint8_t res9[26];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_MC_LS:4;
      uint64_t PLD1_MC_LS:4;
      uint64_t PLD0_MC_MS:4;
      uint64_t PLD1_MC_MS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC_00;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_MC_LS:4;
      uint64_t PLD1_MC_LS:4;
      uint64_t PLD0_MC_MS:4;
      uint64_t PLD1_MC_MS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC_01;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_MC_LS:4;
      uint64_t PLD1_MC_LS:4;
      uint64_t PLD0_MC_MS:4;
      uint64_t PLD1_MC_MS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC_02;

};

#define UDB_UDB_W16 (*(volatile struct UDB_UDB_W16_tag *) 0x400f1000)

struct UDB_UDB_W32_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A0_0:8;
      uint64_t A0_1:8;
      uint64_t A0_2:8;
      uint64_t A0_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A0_00;

  uint8_t res0[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A1_0:8;
      uint64_t A1_1:8;
      uint64_t A1_2:8;
      uint64_t A1_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A1_00;

  uint8_t res1[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0_0:8;
      uint64_t D0_1:8;
      uint64_t D0_2:8;
      uint64_t D0_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) D0_00;

  uint8_t res2[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D1_0:8;
      uint64_t D1_1:8;
      uint64_t D1_2:8;
      uint64_t D1_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) D1_00;

  uint8_t res3[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F0_0:8;
      uint64_t F0_1:8;
      uint64_t F0_2:8;
      uint64_t F0_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F0_00;

  uint8_t res4[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F1_0:8;
      uint64_t F1_1:8;
      uint64_t F1_2:8;
      uint64_t F1_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F1_00;

  uint8_t res5[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ST_0:8;
      uint64_t ST_1:8;
      uint64_t ST_2:8;
      uint64_t ST_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST_00;

  uint8_t res6[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTL_0:8;
      uint64_t CTL_1:8;
      uint64_t CTL_2:8;
      uint64_t CTL_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_00;

  uint8_t res7[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSK_0:7;
      uint64_t reservedSpace0:1;
      uint64_t MSK_1:7;
      uint64_t reservedSpace1:1;
      uint64_t MSK_2:7;
      uint64_t reservedSpace2:1;
      uint64_t MSK_3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSK_00;

  uint8_t res8[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFO0_CLR_0:1;
      uint64_t FIFO1_CLR_0:1;
      uint64_t FIFO0_LVL_0:1;
      uint64_t FIFO1_LVL_0:1;
      uint64_t INT_EN_0:1;
      uint64_t CNT_START_0:1;
      uint64_t reservedSpace0:2;
      uint64_t FIFO0_CLR_1:1;
      uint64_t FIFO1_CLR_1:1;
      uint64_t FIFO0_LVL_1:1;
      uint64_t FIFO1_LVL_1:1;
      uint64_t INT_EN_1:1;
      uint64_t CNT_START_1:1;
      uint64_t reservedSpace1:2;
      uint64_t FIFO0_CLR_2:1;
      uint64_t FIFO1_CLR_2:1;
      uint64_t FIFO0_LVL_2:1;
      uint64_t FIFO1_LVL_2:1;
      uint64_t INT_EN_2:1;
      uint64_t CNT_START_2:1;
      uint64_t reservedSpace2:2;
      uint64_t FIFO0_CLR_3:1;
      uint64_t FIFO1_CLR_3:1;
      uint64_t FIFO0_LVL_3:1;
      uint64_t FIFO1_LVL_3:1;
      uint64_t INT_EN_3:1;
      uint64_t CNT_START_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACTL_00;

  uint8_t res9[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_MC_0:4;
      uint64_t PLD1_MC_0:4;
      uint64_t PLD0_MC_1:4;
      uint64_t PLD1_MC_1:4;
      uint64_t PLD0_MC_2:4;
      uint64_t PLD1_MC_2:4;
      uint64_t PLD0_MC_3:4;
      uint64_t PLD1_MC_3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MC_00;

};

#define UDB_UDB_W32 (*(volatile struct UDB_UDB_W32_tag *) 0x400f2000)

struct UDB_UDB_P0_U0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_ORT_PTx_0:1;
      uint64_t PLD0_ORT_PTx_1:1;
      uint64_t PLD0_ORT_PTx_2:1;
      uint64_t PLD0_ORT_PTx_3:1;
      uint64_t PLD0_ORT_PTx_4:1;
      uint64_t PLD0_ORT_PTx_5:1;
      uint64_t PLD0_ORT_PTx_6:1;
      uint64_t PLD0_ORT_PTx_7:1;
      uint64_t PLD1_ORT_PTx_0:1;
      uint64_t PLD1_ORT_PTx_1:1;
      uint64_t PLD1_ORT_PTx_2:1;
      uint64_t PLD1_ORT_PTx_3:1;
      uint64_t PLD1_ORT_PTx_4:1;
      uint64_t PLD1_ORT_PTx_5:1;
      uint64_t PLD1_ORT_PTx_6:1;
      uint64_t PLD1_ORT_PTx_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_ORT0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_ORT_PTx_0:1;
      uint64_t PLD0_ORT_PTx_1:1;
      uint64_t PLD0_ORT_PTx_2:1;
      uint64_t PLD0_ORT_PTx_3:1;
      uint64_t PLD0_ORT_PTx_4:1;
      uint64_t PLD0_ORT_PTx_5:1;
      uint64_t PLD0_ORT_PTx_6:1;
      uint64_t PLD0_ORT_PTx_7:1;
      uint64_t PLD1_ORT_PTx_0:1;
      uint64_t PLD1_ORT_PTx_1:1;
      uint64_t PLD1_ORT_PTx_2:1;
      uint64_t PLD1_ORT_PTx_3:1;
      uint64_t PLD1_ORT_PTx_4:1;
      uint64_t PLD1_ORT_PTx_5:1;
      uint64_t PLD1_ORT_PTx_6:1;
      uint64_t PLD1_ORT_PTx_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_ORT1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_ORT_PTx_0:1;
      uint64_t PLD0_ORT_PTx_1:1;
      uint64_t PLD0_ORT_PTx_2:1;
      uint64_t PLD0_ORT_PTx_3:1;
      uint64_t PLD0_ORT_PTx_4:1;
      uint64_t PLD0_ORT_PTx_5:1;
      uint64_t PLD0_ORT_PTx_6:1;
      uint64_t PLD0_ORT_PTx_7:1;
      uint64_t PLD1_ORT_PTx_0:1;
      uint64_t PLD1_ORT_PTx_1:1;
      uint64_t PLD1_ORT_PTx_2:1;
      uint64_t PLD1_ORT_PTx_3:1;
      uint64_t PLD1_ORT_PTx_4:1;
      uint64_t PLD1_ORT_PTx_5:1;
      uint64_t PLD1_ORT_PTx_6:1;
      uint64_t PLD1_ORT_PTx_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_ORT2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_ORT_PTx_0:1;
      uint64_t PLD0_ORT_PTx_1:1;
      uint64_t PLD0_ORT_PTx_2:1;
      uint64_t PLD0_ORT_PTx_3:1;
      uint64_t PLD0_ORT_PTx_4:1;
      uint64_t PLD0_ORT_PTx_5:1;
      uint64_t PLD0_ORT_PTx_6:1;
      uint64_t PLD0_ORT_PTx_7:1;
      uint64_t PLD1_ORT_PTx_0:1;
      uint64_t PLD1_ORT_PTx_1:1;
      uint64_t PLD1_ORT_PTx_2:1;
      uint64_t PLD1_ORT_PTx_3:1;
      uint64_t PLD1_ORT_PTx_4:1;
      uint64_t PLD1_ORT_PTx_5:1;
      uint64_t PLD1_ORT_PTx_6:1;
      uint64_t PLD1_ORT_PTx_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_ORT3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_MC0_CEN:1;
      uint64_t PLD0_MC0_DFF_C:1;
      uint64_t PLD0_MC1_CEN:1;
      uint64_t PLD0_MC1_DFF_C:1;
      uint64_t PLD0_MC2_CEN:1;
      uint64_t PLD0_MC2_DFF_C:1;
      uint64_t PLD0_MC3_CEN:1;
      uint64_t PLD0_MC3_DFF_C:1;
      uint64_t PLD1_MC0_CEN:1;
      uint64_t PLD1_MC0_DFF_C:1;
      uint64_t PLD1_MC1_CEN:1;
      uint64_t PLD1_MC1_DFF_C:1;
      uint64_t PLD1_MC2_CEN:1;
      uint64_t PLD1_MC2_DFF_C:1;
      uint64_t PLD1_MC3_CEN:1;
      uint64_t PLD1_MC3_DFF_C:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_MC_CFG_CEN_CONST;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_MC0_XORFB:2;
      uint64_t PLD0_MC1_XORFB:2;
      uint64_t PLD0_MC2_XORFB:2;
      uint64_t PLD0_MC3_XORFB:2;
      uint64_t PLD1_MC0_XORFB:2;
      uint64_t PLD1_MC1_XORFB:2;
      uint64_t PLD1_MC2_XORFB:2;
      uint64_t PLD1_MC3_XORFB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_MC_CFG_XORFB;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_MC0_SET_SEL:1;
      uint64_t PLD0_MC0_RESET_SEL:1;
      uint64_t PLD0_MC1_SET_SEL:1;
      uint64_t PLD0_MC1_RESET_SEL:1;
      uint64_t PLD0_MC2_SET_SEL:1;
      uint64_t PLD0_MC2_RESET_SEL:1;
      uint64_t PLD0_MC3_SET_SEL:1;
      uint64_t PLD0_MC3_RESET_SEL:1;
      uint64_t PLD1_MC0_SET_SEL:1;
      uint64_t PLD1_MC0_RESET_SEL:1;
      uint64_t PLD1_MC1_SET_SEL:1;
      uint64_t PLD1_MC1_RESET_SEL:1;
      uint64_t PLD1_MC2_SET_SEL:1;
      uint64_t PLD1_MC2_RESET_SEL:1;
      uint64_t PLD1_MC3_SET_SEL:1;
      uint64_t PLD1_MC3_RESET_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_MC_SET_RESET;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_MC0_BYPASS:1;
      uint64_t NC1:1;
      uint64_t PLD0_MC1_BYPASS:1;
      uint64_t NC3:1;
      uint64_t PLD0_MC2_BYPASS:1;
      uint64_t NC5:1;
      uint64_t PLD0_MC3_BYPASS:1;
      uint64_t NC7:1;
      uint64_t PLD1_MC0_BYPASS:1;
      uint64_t NC9:1;
      uint64_t PLD1_MC1_BYPASS:1;
      uint64_t NC11:1;
      uint64_t PLD1_MC2_BYPASS:1;
      uint64_t NC13:1;
      uint64_t PLD1_MC3_BYPASS:1;
      uint64_t NC15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_MC_CFG_BYPASS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RAD0:3;
      uint64_t reservedSpace0:1;
      uint64_t RAD1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RAD2:3;
      uint64_t DP_RTE_BYPASS0:1;
      uint64_t DP_RTE_BYPASS1:1;
      uint64_t DP_RTE_BYPASS2:1;
      uint64_t DP_RTE_BYPASS3:1;
      uint64_t DP_RTE_BYPASS4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t F0_LD:3;
      uint64_t DP_RTE_BYPASS5:1;
      uint64_t F1_LD:3;
      uint64_t NC7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t D0_LD:3;
      uint64_t reservedSpace0:1;
      uint64_t D1_LD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SI_MUX:3;
      uint64_t reservedSpace0:1;
      uint64_t CI_MUX:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OUT0:4;
      uint64_t OUT1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OUT2:4;
      uint64_t OUT3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OUT4:4;
      uint64_t OUT5:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OUT_SYNC:6;
      uint64_t NC6:1;
      uint64_t NC7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AMASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CMASK0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CMASK0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SI_SELA:2;
      uint64_t SI_SELB:2;
      uint64_t DEF_SI:1;
      uint64_t AMASK_EN:1;
      uint64_t CMASK0_EN:1;
      uint64_t CMASK1_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CI_SELA:2;
      uint64_t CI_SELB:2;
      uint64_t CMP_SELA:2;
      uint64_t CMP_SELB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHAIN0:1;
      uint64_t CHAIN1:1;
      uint64_t CHAIN_FB:1;
      uint64_t CHAIN_CMSB:1;
      uint64_t MSB_SEL:3;
      uint64_t MSB_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t F0_INSEL:2;
      uint64_t F1_INSEL:2;
      uint64_t MSB_SI:1;
      uint64_t PI_DYN:1;
      uint64_t SHIFT_SEL:1;
      uint64_t PI_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WRK16_CONCAT:1;
      uint64_t EXT_CRCPRS:1;
      uint64_t FIFO_ASYNC:1;
      uint64_t FIFO_EDGE:1;
      uint64_t FIFO_CAP:1;
      uint64_t FIFO_FAST:1;
      uint64_t F0_CK_INV:1;
      uint64_t F1_CK_INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t F0_DYN:1;
      uint64_t F1_DYN:1;
      uint64_t NC2:1;
      uint64_t NC3:1;
      uint64_t FIFO_ADD_SYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CTL_MD0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CTL_MD1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t STAT_MD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NC0:1;
      uint64_t NC1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SC_OUT_CTL:2;
      uint64_t SC_INT_MD:1;
      uint64_t SC_SYNC_MD:1;
      uint64_t SC_EXT_RES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CNT_LD_SEL:2;
      uint64_t CNT_EN_SEL:2;
      uint64_t ROUTE_LD:1;
      uint64_t ROUTE_EN:1;
      uint64_t ALT_CNT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RC_EN_SEL:2;
      uint64_t RC_EN_MODE:2;
      uint64_t RC_EN_INV:1;
      uint64_t RC_INV:1;
      uint64_t RC_RES_SEL0_OR_FRES:1;
      uint64_t RC_RES_SEL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RC_EN_SEL:2;
      uint64_t RC_EN_MODE:2;
      uint64_t RC_EN_INV:1;
      uint64_t RC_INV:1;
      uint64_t RC_RES_SEL0_OR_FRES:1;
      uint64_t RC_RES_SEL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RC_EN_SEL:2;
      uint64_t RC_EN_MODE:2;
      uint64_t RC_EN_INV:1;
      uint64_t RC_INV:1;
      uint64_t RC_RES_SEL0_OR_FRES:1;
      uint64_t RC_RES_SEL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RC_EN_SEL:2;
      uint64_t RC_EN_MODE:2;
      uint64_t RC_EN_INV:1;
      uint64_t RC_INV:1;
      uint64_t RC_RES_SEL0_OR_FRES:1;
      uint64_t RC_RES_SEL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLD0_CK_SEL:4;
      uint64_t PLD1_CK_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DP_CK_SEL:4;
      uint64_t SC_CK_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t EN_RES_CNTCTL:1;
      uint64_t GUDB_WR:1;
      uint64_t reservedSpace1:1;
      uint64_t DP_RES_POL:1;
      uint64_t SC_RES_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ALT_RES:1;
      uint64_t EXT_SYNC:1;
      uint64_t EN_RES_STAT:1;
      uint64_t EN_RES_DP:1;
      uint64_t EXT_CK_SEL:2;
      uint64_t PLD0_RES_POL:1;
      uint64_t PLD1_RES_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG7;

};

#define UDB_UDB_P0_U0 (*(volatile struct UDB_UDB_P0_U0_tag *) 0x400f3000)

struct UDB_UDB_P0_U1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_ORT_PTx_0:1;
      uint64_t PLD0_ORT_PTx_1:1;
      uint64_t PLD0_ORT_PTx_2:1;
      uint64_t PLD0_ORT_PTx_3:1;
      uint64_t PLD0_ORT_PTx_4:1;
      uint64_t PLD0_ORT_PTx_5:1;
      uint64_t PLD0_ORT_PTx_6:1;
      uint64_t PLD0_ORT_PTx_7:1;
      uint64_t PLD1_ORT_PTx_0:1;
      uint64_t PLD1_ORT_PTx_1:1;
      uint64_t PLD1_ORT_PTx_2:1;
      uint64_t PLD1_ORT_PTx_3:1;
      uint64_t PLD1_ORT_PTx_4:1;
      uint64_t PLD1_ORT_PTx_5:1;
      uint64_t PLD1_ORT_PTx_6:1;
      uint64_t PLD1_ORT_PTx_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_ORT0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_ORT_PTx_0:1;
      uint64_t PLD0_ORT_PTx_1:1;
      uint64_t PLD0_ORT_PTx_2:1;
      uint64_t PLD0_ORT_PTx_3:1;
      uint64_t PLD0_ORT_PTx_4:1;
      uint64_t PLD0_ORT_PTx_5:1;
      uint64_t PLD0_ORT_PTx_6:1;
      uint64_t PLD0_ORT_PTx_7:1;
      uint64_t PLD1_ORT_PTx_0:1;
      uint64_t PLD1_ORT_PTx_1:1;
      uint64_t PLD1_ORT_PTx_2:1;
      uint64_t PLD1_ORT_PTx_3:1;
      uint64_t PLD1_ORT_PTx_4:1;
      uint64_t PLD1_ORT_PTx_5:1;
      uint64_t PLD1_ORT_PTx_6:1;
      uint64_t PLD1_ORT_PTx_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_ORT1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_ORT_PTx_0:1;
      uint64_t PLD0_ORT_PTx_1:1;
      uint64_t PLD0_ORT_PTx_2:1;
      uint64_t PLD0_ORT_PTx_3:1;
      uint64_t PLD0_ORT_PTx_4:1;
      uint64_t PLD0_ORT_PTx_5:1;
      uint64_t PLD0_ORT_PTx_6:1;
      uint64_t PLD0_ORT_PTx_7:1;
      uint64_t PLD1_ORT_PTx_0:1;
      uint64_t PLD1_ORT_PTx_1:1;
      uint64_t PLD1_ORT_PTx_2:1;
      uint64_t PLD1_ORT_PTx_3:1;
      uint64_t PLD1_ORT_PTx_4:1;
      uint64_t PLD1_ORT_PTx_5:1;
      uint64_t PLD1_ORT_PTx_6:1;
      uint64_t PLD1_ORT_PTx_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_ORT2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_ORT_PTx_0:1;
      uint64_t PLD0_ORT_PTx_1:1;
      uint64_t PLD0_ORT_PTx_2:1;
      uint64_t PLD0_ORT_PTx_3:1;
      uint64_t PLD0_ORT_PTx_4:1;
      uint64_t PLD0_ORT_PTx_5:1;
      uint64_t PLD0_ORT_PTx_6:1;
      uint64_t PLD0_ORT_PTx_7:1;
      uint64_t PLD1_ORT_PTx_0:1;
      uint64_t PLD1_ORT_PTx_1:1;
      uint64_t PLD1_ORT_PTx_2:1;
      uint64_t PLD1_ORT_PTx_3:1;
      uint64_t PLD1_ORT_PTx_4:1;
      uint64_t PLD1_ORT_PTx_5:1;
      uint64_t PLD1_ORT_PTx_6:1;
      uint64_t PLD1_ORT_PTx_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_ORT3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_MC0_CEN:1;
      uint64_t PLD0_MC0_DFF_C:1;
      uint64_t PLD0_MC1_CEN:1;
      uint64_t PLD0_MC1_DFF_C:1;
      uint64_t PLD0_MC2_CEN:1;
      uint64_t PLD0_MC2_DFF_C:1;
      uint64_t PLD0_MC3_CEN:1;
      uint64_t PLD0_MC3_DFF_C:1;
      uint64_t PLD1_MC0_CEN:1;
      uint64_t PLD1_MC0_DFF_C:1;
      uint64_t PLD1_MC1_CEN:1;
      uint64_t PLD1_MC1_DFF_C:1;
      uint64_t PLD1_MC2_CEN:1;
      uint64_t PLD1_MC2_DFF_C:1;
      uint64_t PLD1_MC3_CEN:1;
      uint64_t PLD1_MC3_DFF_C:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_MC_CFG_CEN_CONST;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_MC0_XORFB:2;
      uint64_t PLD0_MC1_XORFB:2;
      uint64_t PLD0_MC2_XORFB:2;
      uint64_t PLD0_MC3_XORFB:2;
      uint64_t PLD1_MC0_XORFB:2;
      uint64_t PLD1_MC1_XORFB:2;
      uint64_t PLD1_MC2_XORFB:2;
      uint64_t PLD1_MC3_XORFB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_MC_CFG_XORFB;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_MC0_SET_SEL:1;
      uint64_t PLD0_MC0_RESET_SEL:1;
      uint64_t PLD0_MC1_SET_SEL:1;
      uint64_t PLD0_MC1_RESET_SEL:1;
      uint64_t PLD0_MC2_SET_SEL:1;
      uint64_t PLD0_MC2_RESET_SEL:1;
      uint64_t PLD0_MC3_SET_SEL:1;
      uint64_t PLD0_MC3_RESET_SEL:1;
      uint64_t PLD1_MC0_SET_SEL:1;
      uint64_t PLD1_MC0_RESET_SEL:1;
      uint64_t PLD1_MC1_SET_SEL:1;
      uint64_t PLD1_MC1_RESET_SEL:1;
      uint64_t PLD1_MC2_SET_SEL:1;
      uint64_t PLD1_MC2_RESET_SEL:1;
      uint64_t PLD1_MC3_SET_SEL:1;
      uint64_t PLD1_MC3_RESET_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_MC_SET_RESET;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_MC0_BYPASS:1;
      uint64_t NC1:1;
      uint64_t PLD0_MC1_BYPASS:1;
      uint64_t NC3:1;
      uint64_t PLD0_MC2_BYPASS:1;
      uint64_t NC5:1;
      uint64_t PLD0_MC3_BYPASS:1;
      uint64_t NC7:1;
      uint64_t PLD1_MC0_BYPASS:1;
      uint64_t NC9:1;
      uint64_t PLD1_MC1_BYPASS:1;
      uint64_t NC11:1;
      uint64_t PLD1_MC2_BYPASS:1;
      uint64_t NC13:1;
      uint64_t PLD1_MC3_BYPASS:1;
      uint64_t NC15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_MC_CFG_BYPASS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RAD0:3;
      uint64_t reservedSpace0:1;
      uint64_t RAD1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RAD2:3;
      uint64_t DP_RTE_BYPASS0:1;
      uint64_t DP_RTE_BYPASS1:1;
      uint64_t DP_RTE_BYPASS2:1;
      uint64_t DP_RTE_BYPASS3:1;
      uint64_t DP_RTE_BYPASS4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t F0_LD:3;
      uint64_t DP_RTE_BYPASS5:1;
      uint64_t F1_LD:3;
      uint64_t NC7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t D0_LD:3;
      uint64_t reservedSpace0:1;
      uint64_t D1_LD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SI_MUX:3;
      uint64_t reservedSpace0:1;
      uint64_t CI_MUX:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OUT0:4;
      uint64_t OUT1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OUT2:4;
      uint64_t OUT3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OUT4:4;
      uint64_t OUT5:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OUT_SYNC:6;
      uint64_t NC6:1;
      uint64_t NC7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AMASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CMASK0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CMASK0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SI_SELA:2;
      uint64_t SI_SELB:2;
      uint64_t DEF_SI:1;
      uint64_t AMASK_EN:1;
      uint64_t CMASK0_EN:1;
      uint64_t CMASK1_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CI_SELA:2;
      uint64_t CI_SELB:2;
      uint64_t CMP_SELA:2;
      uint64_t CMP_SELB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHAIN0:1;
      uint64_t CHAIN1:1;
      uint64_t CHAIN_FB:1;
      uint64_t CHAIN_CMSB:1;
      uint64_t MSB_SEL:3;
      uint64_t MSB_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t F0_INSEL:2;
      uint64_t F1_INSEL:2;
      uint64_t MSB_SI:1;
      uint64_t PI_DYN:1;
      uint64_t SHIFT_SEL:1;
      uint64_t PI_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WRK16_CONCAT:1;
      uint64_t EXT_CRCPRS:1;
      uint64_t FIFO_ASYNC:1;
      uint64_t FIFO_EDGE:1;
      uint64_t FIFO_CAP:1;
      uint64_t FIFO_FAST:1;
      uint64_t F0_CK_INV:1;
      uint64_t F1_CK_INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t F0_DYN:1;
      uint64_t F1_DYN:1;
      uint64_t NC2:1;
      uint64_t NC3:1;
      uint64_t FIFO_ADD_SYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CTL_MD0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CTL_MD1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t STAT_MD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NC0:1;
      uint64_t NC1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SC_OUT_CTL:2;
      uint64_t SC_INT_MD:1;
      uint64_t SC_SYNC_MD:1;
      uint64_t SC_EXT_RES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CNT_LD_SEL:2;
      uint64_t CNT_EN_SEL:2;
      uint64_t ROUTE_LD:1;
      uint64_t ROUTE_EN:1;
      uint64_t ALT_CNT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RC_EN_SEL:2;
      uint64_t RC_EN_MODE:2;
      uint64_t RC_EN_INV:1;
      uint64_t RC_INV:1;
      uint64_t RC_RES_SEL0_OR_FRES:1;
      uint64_t RC_RES_SEL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RC_EN_SEL:2;
      uint64_t RC_EN_MODE:2;
      uint64_t RC_EN_INV:1;
      uint64_t RC_INV:1;
      uint64_t RC_RES_SEL0_OR_FRES:1;
      uint64_t RC_RES_SEL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RC_EN_SEL:2;
      uint64_t RC_EN_MODE:2;
      uint64_t RC_EN_INV:1;
      uint64_t RC_INV:1;
      uint64_t RC_RES_SEL0_OR_FRES:1;
      uint64_t RC_RES_SEL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RC_EN_SEL:2;
      uint64_t RC_EN_MODE:2;
      uint64_t RC_EN_INV:1;
      uint64_t RC_INV:1;
      uint64_t RC_RES_SEL0_OR_FRES:1;
      uint64_t RC_RES_SEL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLD0_CK_SEL:4;
      uint64_t PLD1_CK_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DP_CK_SEL:4;
      uint64_t SC_CK_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t EN_RES_CNTCTL:1;
      uint64_t GUDB_WR:1;
      uint64_t reservedSpace1:1;
      uint64_t DP_RES_POL:1;
      uint64_t SC_RES_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ALT_RES:1;
      uint64_t EXT_SYNC:1;
      uint64_t EN_RES_STAT:1;
      uint64_t EN_RES_DP:1;
      uint64_t EXT_CK_SEL:2;
      uint64_t PLD0_RES_POL:1;
      uint64_t PLD1_RES_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG7;

};

#define UDB_UDB_P0_U1 (*(volatile struct UDB_UDB_P0_U1_tag *) 0x400f3080)

struct UDB_UDB_P0_ROUTE_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC31;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC32;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC33;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC34;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC35;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC36;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC37;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC38;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC39;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC40;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC41;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC42;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC43;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC44;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC45;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC46;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC47;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC48;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC49;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC50;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC51;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC52;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC53;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC54;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC55;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC56;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC57;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC58;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC59;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC60;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC61;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC62;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC63;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC64;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC65;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC66;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC67;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC68;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC69;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC70;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC71;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC72;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC73;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC74;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC75;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC76;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC77;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC78;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC79;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC80;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC81;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC82;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC83;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC84;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC85;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC86;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC87;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC88;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC89;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC90;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC91;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC92;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC93;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC94;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC95;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC96;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC97;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC98;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC99;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC100;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC101;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC102;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC103;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC104;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC105;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC106;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC107;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC108;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC109;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC110;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC111;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC112;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC113;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC114;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC115;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC116;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC117;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC118;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC119;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC120;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC121;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC122;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC123;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC124;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC125;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC126;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC127;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R15;

  uint8_t res0[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD0IN0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD0IN1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD0IN2;

  uint8_t res1[4];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD1IN0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD1IN1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD1IN2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DPIN0;

  uint8_t res2[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PI_TOP2:2;
      uint64_t PI_BOT2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DPIN1;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIN;

  uint8_t res4[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIOIN;

  uint8_t res5[5];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RCIN;

  uint8_t res6[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS7;

};

#define UDB_UDB_P0_ROUTE (*(volatile struct UDB_UDB_P0_ROUTE_tag *) 0x400f3100)

struct UDB_UDB_P1_U0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_ORT_PTx_0:1;
      uint64_t PLD0_ORT_PTx_1:1;
      uint64_t PLD0_ORT_PTx_2:1;
      uint64_t PLD0_ORT_PTx_3:1;
      uint64_t PLD0_ORT_PTx_4:1;
      uint64_t PLD0_ORT_PTx_5:1;
      uint64_t PLD0_ORT_PTx_6:1;
      uint64_t PLD0_ORT_PTx_7:1;
      uint64_t PLD1_ORT_PTx_0:1;
      uint64_t PLD1_ORT_PTx_1:1;
      uint64_t PLD1_ORT_PTx_2:1;
      uint64_t PLD1_ORT_PTx_3:1;
      uint64_t PLD1_ORT_PTx_4:1;
      uint64_t PLD1_ORT_PTx_5:1;
      uint64_t PLD1_ORT_PTx_6:1;
      uint64_t PLD1_ORT_PTx_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_ORT0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_ORT_PTx_0:1;
      uint64_t PLD0_ORT_PTx_1:1;
      uint64_t PLD0_ORT_PTx_2:1;
      uint64_t PLD0_ORT_PTx_3:1;
      uint64_t PLD0_ORT_PTx_4:1;
      uint64_t PLD0_ORT_PTx_5:1;
      uint64_t PLD0_ORT_PTx_6:1;
      uint64_t PLD0_ORT_PTx_7:1;
      uint64_t PLD1_ORT_PTx_0:1;
      uint64_t PLD1_ORT_PTx_1:1;
      uint64_t PLD1_ORT_PTx_2:1;
      uint64_t PLD1_ORT_PTx_3:1;
      uint64_t PLD1_ORT_PTx_4:1;
      uint64_t PLD1_ORT_PTx_5:1;
      uint64_t PLD1_ORT_PTx_6:1;
      uint64_t PLD1_ORT_PTx_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_ORT1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_ORT_PTx_0:1;
      uint64_t PLD0_ORT_PTx_1:1;
      uint64_t PLD0_ORT_PTx_2:1;
      uint64_t PLD0_ORT_PTx_3:1;
      uint64_t PLD0_ORT_PTx_4:1;
      uint64_t PLD0_ORT_PTx_5:1;
      uint64_t PLD0_ORT_PTx_6:1;
      uint64_t PLD0_ORT_PTx_7:1;
      uint64_t PLD1_ORT_PTx_0:1;
      uint64_t PLD1_ORT_PTx_1:1;
      uint64_t PLD1_ORT_PTx_2:1;
      uint64_t PLD1_ORT_PTx_3:1;
      uint64_t PLD1_ORT_PTx_4:1;
      uint64_t PLD1_ORT_PTx_5:1;
      uint64_t PLD1_ORT_PTx_6:1;
      uint64_t PLD1_ORT_PTx_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_ORT2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_ORT_PTx_0:1;
      uint64_t PLD0_ORT_PTx_1:1;
      uint64_t PLD0_ORT_PTx_2:1;
      uint64_t PLD0_ORT_PTx_3:1;
      uint64_t PLD0_ORT_PTx_4:1;
      uint64_t PLD0_ORT_PTx_5:1;
      uint64_t PLD0_ORT_PTx_6:1;
      uint64_t PLD0_ORT_PTx_7:1;
      uint64_t PLD1_ORT_PTx_0:1;
      uint64_t PLD1_ORT_PTx_1:1;
      uint64_t PLD1_ORT_PTx_2:1;
      uint64_t PLD1_ORT_PTx_3:1;
      uint64_t PLD1_ORT_PTx_4:1;
      uint64_t PLD1_ORT_PTx_5:1;
      uint64_t PLD1_ORT_PTx_6:1;
      uint64_t PLD1_ORT_PTx_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_ORT3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_MC0_CEN:1;
      uint64_t PLD0_MC0_DFF_C:1;
      uint64_t PLD0_MC1_CEN:1;
      uint64_t PLD0_MC1_DFF_C:1;
      uint64_t PLD0_MC2_CEN:1;
      uint64_t PLD0_MC2_DFF_C:1;
      uint64_t PLD0_MC3_CEN:1;
      uint64_t PLD0_MC3_DFF_C:1;
      uint64_t PLD1_MC0_CEN:1;
      uint64_t PLD1_MC0_DFF_C:1;
      uint64_t PLD1_MC1_CEN:1;
      uint64_t PLD1_MC1_DFF_C:1;
      uint64_t PLD1_MC2_CEN:1;
      uint64_t PLD1_MC2_DFF_C:1;
      uint64_t PLD1_MC3_CEN:1;
      uint64_t PLD1_MC3_DFF_C:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_MC_CFG_CEN_CONST;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_MC0_XORFB:2;
      uint64_t PLD0_MC1_XORFB:2;
      uint64_t PLD0_MC2_XORFB:2;
      uint64_t PLD0_MC3_XORFB:2;
      uint64_t PLD1_MC0_XORFB:2;
      uint64_t PLD1_MC1_XORFB:2;
      uint64_t PLD1_MC2_XORFB:2;
      uint64_t PLD1_MC3_XORFB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_MC_CFG_XORFB;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_MC0_SET_SEL:1;
      uint64_t PLD0_MC0_RESET_SEL:1;
      uint64_t PLD0_MC1_SET_SEL:1;
      uint64_t PLD0_MC1_RESET_SEL:1;
      uint64_t PLD0_MC2_SET_SEL:1;
      uint64_t PLD0_MC2_RESET_SEL:1;
      uint64_t PLD0_MC3_SET_SEL:1;
      uint64_t PLD0_MC3_RESET_SEL:1;
      uint64_t PLD1_MC0_SET_SEL:1;
      uint64_t PLD1_MC0_RESET_SEL:1;
      uint64_t PLD1_MC1_SET_SEL:1;
      uint64_t PLD1_MC1_RESET_SEL:1;
      uint64_t PLD1_MC2_SET_SEL:1;
      uint64_t PLD1_MC2_RESET_SEL:1;
      uint64_t PLD1_MC3_SET_SEL:1;
      uint64_t PLD1_MC3_RESET_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_MC_SET_RESET;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_MC0_BYPASS:1;
      uint64_t NC1:1;
      uint64_t PLD0_MC1_BYPASS:1;
      uint64_t NC3:1;
      uint64_t PLD0_MC2_BYPASS:1;
      uint64_t NC5:1;
      uint64_t PLD0_MC3_BYPASS:1;
      uint64_t NC7:1;
      uint64_t PLD1_MC0_BYPASS:1;
      uint64_t NC9:1;
      uint64_t PLD1_MC1_BYPASS:1;
      uint64_t NC11:1;
      uint64_t PLD1_MC2_BYPASS:1;
      uint64_t NC13:1;
      uint64_t PLD1_MC3_BYPASS:1;
      uint64_t NC15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_MC_CFG_BYPASS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RAD0:3;
      uint64_t reservedSpace0:1;
      uint64_t RAD1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RAD2:3;
      uint64_t DP_RTE_BYPASS0:1;
      uint64_t DP_RTE_BYPASS1:1;
      uint64_t DP_RTE_BYPASS2:1;
      uint64_t DP_RTE_BYPASS3:1;
      uint64_t DP_RTE_BYPASS4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t F0_LD:3;
      uint64_t DP_RTE_BYPASS5:1;
      uint64_t F1_LD:3;
      uint64_t NC7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t D0_LD:3;
      uint64_t reservedSpace0:1;
      uint64_t D1_LD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SI_MUX:3;
      uint64_t reservedSpace0:1;
      uint64_t CI_MUX:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OUT0:4;
      uint64_t OUT1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OUT2:4;
      uint64_t OUT3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OUT4:4;
      uint64_t OUT5:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OUT_SYNC:6;
      uint64_t NC6:1;
      uint64_t NC7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AMASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CMASK0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CMASK0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SI_SELA:2;
      uint64_t SI_SELB:2;
      uint64_t DEF_SI:1;
      uint64_t AMASK_EN:1;
      uint64_t CMASK0_EN:1;
      uint64_t CMASK1_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CI_SELA:2;
      uint64_t CI_SELB:2;
      uint64_t CMP_SELA:2;
      uint64_t CMP_SELB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHAIN0:1;
      uint64_t CHAIN1:1;
      uint64_t CHAIN_FB:1;
      uint64_t CHAIN_CMSB:1;
      uint64_t MSB_SEL:3;
      uint64_t MSB_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t F0_INSEL:2;
      uint64_t F1_INSEL:2;
      uint64_t MSB_SI:1;
      uint64_t PI_DYN:1;
      uint64_t SHIFT_SEL:1;
      uint64_t PI_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WRK16_CONCAT:1;
      uint64_t EXT_CRCPRS:1;
      uint64_t FIFO_ASYNC:1;
      uint64_t FIFO_EDGE:1;
      uint64_t FIFO_CAP:1;
      uint64_t FIFO_FAST:1;
      uint64_t F0_CK_INV:1;
      uint64_t F1_CK_INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t F0_DYN:1;
      uint64_t F1_DYN:1;
      uint64_t NC2:1;
      uint64_t NC3:1;
      uint64_t FIFO_ADD_SYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CTL_MD0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CTL_MD1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t STAT_MD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NC0:1;
      uint64_t NC1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SC_OUT_CTL:2;
      uint64_t SC_INT_MD:1;
      uint64_t SC_SYNC_MD:1;
      uint64_t SC_EXT_RES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CNT_LD_SEL:2;
      uint64_t CNT_EN_SEL:2;
      uint64_t ROUTE_LD:1;
      uint64_t ROUTE_EN:1;
      uint64_t ALT_CNT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RC_EN_SEL:2;
      uint64_t RC_EN_MODE:2;
      uint64_t RC_EN_INV:1;
      uint64_t RC_INV:1;
      uint64_t RC_RES_SEL0_OR_FRES:1;
      uint64_t RC_RES_SEL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RC_EN_SEL:2;
      uint64_t RC_EN_MODE:2;
      uint64_t RC_EN_INV:1;
      uint64_t RC_INV:1;
      uint64_t RC_RES_SEL0_OR_FRES:1;
      uint64_t RC_RES_SEL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RC_EN_SEL:2;
      uint64_t RC_EN_MODE:2;
      uint64_t RC_EN_INV:1;
      uint64_t RC_INV:1;
      uint64_t RC_RES_SEL0_OR_FRES:1;
      uint64_t RC_RES_SEL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RC_EN_SEL:2;
      uint64_t RC_EN_MODE:2;
      uint64_t RC_EN_INV:1;
      uint64_t RC_INV:1;
      uint64_t RC_RES_SEL0_OR_FRES:1;
      uint64_t RC_RES_SEL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLD0_CK_SEL:4;
      uint64_t PLD1_CK_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DP_CK_SEL:4;
      uint64_t SC_CK_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t EN_RES_CNTCTL:1;
      uint64_t GUDB_WR:1;
      uint64_t reservedSpace1:1;
      uint64_t DP_RES_POL:1;
      uint64_t SC_RES_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ALT_RES:1;
      uint64_t EXT_SYNC:1;
      uint64_t EN_RES_STAT:1;
      uint64_t EN_RES_DP:1;
      uint64_t EXT_CK_SEL:2;
      uint64_t PLD0_RES_POL:1;
      uint64_t PLD1_RES_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG7;

};

#define UDB_UDB_P1_U0 (*(volatile struct UDB_UDB_P1_U0_tag *) 0x400f3200)

struct UDB_UDB_P1_U1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLD0_ITxC_0:1;
      uint64_t PLD0_ITxC_1:1;
      uint64_t PLD0_ITxC_2:1;
      uint64_t PLD0_ITxC_3:1;
      uint64_t PLD0_ITxC_4:1;
      uint64_t PLD0_ITxC_5:1;
      uint64_t PLD0_ITxC_6:1;
      uint64_t PLD0_ITxC_7:1;
      uint64_t PLD1_ITxC_0:1;
      uint64_t PLD1_ITxC_1:1;
      uint64_t PLD1_ITxC_2:1;
      uint64_t PLD1_ITxC_3:1;
      uint64_t PLD1_ITxC_4:1;
      uint64_t PLD1_ITxC_5:1;
      uint64_t PLD1_ITxC_6:1;
      uint64_t PLD1_ITxC_7:1;
      uint64_t PLD0_ITxT_0:1;
      uint64_t PLD0_ITxT_1:1;
      uint64_t PLD0_ITxT_2:1;
      uint64_t PLD0_ITxT_3:1;
      uint64_t PLD0_ITxT_4:1;
      uint64_t PLD0_ITxT_5:1;
      uint64_t PLD0_ITxT_6:1;
      uint64_t PLD0_ITxT_7:1;
      uint64_t PLD1_ITxT_0:1;
      uint64_t PLD1_ITxT_1:1;
      uint64_t PLD1_ITxT_2:1;
      uint64_t PLD1_ITxT_3:1;
      uint64_t PLD1_ITxT_4:1;
      uint64_t PLD1_ITxT_5:1;
      uint64_t PLD1_ITxT_6:1;
      uint64_t PLD1_ITxT_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLD_IT11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_ORT_PTx_0:1;
      uint64_t PLD0_ORT_PTx_1:1;
      uint64_t PLD0_ORT_PTx_2:1;
      uint64_t PLD0_ORT_PTx_3:1;
      uint64_t PLD0_ORT_PTx_4:1;
      uint64_t PLD0_ORT_PTx_5:1;
      uint64_t PLD0_ORT_PTx_6:1;
      uint64_t PLD0_ORT_PTx_7:1;
      uint64_t PLD1_ORT_PTx_0:1;
      uint64_t PLD1_ORT_PTx_1:1;
      uint64_t PLD1_ORT_PTx_2:1;
      uint64_t PLD1_ORT_PTx_3:1;
      uint64_t PLD1_ORT_PTx_4:1;
      uint64_t PLD1_ORT_PTx_5:1;
      uint64_t PLD1_ORT_PTx_6:1;
      uint64_t PLD1_ORT_PTx_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_ORT0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_ORT_PTx_0:1;
      uint64_t PLD0_ORT_PTx_1:1;
      uint64_t PLD0_ORT_PTx_2:1;
      uint64_t PLD0_ORT_PTx_3:1;
      uint64_t PLD0_ORT_PTx_4:1;
      uint64_t PLD0_ORT_PTx_5:1;
      uint64_t PLD0_ORT_PTx_6:1;
      uint64_t PLD0_ORT_PTx_7:1;
      uint64_t PLD1_ORT_PTx_0:1;
      uint64_t PLD1_ORT_PTx_1:1;
      uint64_t PLD1_ORT_PTx_2:1;
      uint64_t PLD1_ORT_PTx_3:1;
      uint64_t PLD1_ORT_PTx_4:1;
      uint64_t PLD1_ORT_PTx_5:1;
      uint64_t PLD1_ORT_PTx_6:1;
      uint64_t PLD1_ORT_PTx_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_ORT1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_ORT_PTx_0:1;
      uint64_t PLD0_ORT_PTx_1:1;
      uint64_t PLD0_ORT_PTx_2:1;
      uint64_t PLD0_ORT_PTx_3:1;
      uint64_t PLD0_ORT_PTx_4:1;
      uint64_t PLD0_ORT_PTx_5:1;
      uint64_t PLD0_ORT_PTx_6:1;
      uint64_t PLD0_ORT_PTx_7:1;
      uint64_t PLD1_ORT_PTx_0:1;
      uint64_t PLD1_ORT_PTx_1:1;
      uint64_t PLD1_ORT_PTx_2:1;
      uint64_t PLD1_ORT_PTx_3:1;
      uint64_t PLD1_ORT_PTx_4:1;
      uint64_t PLD1_ORT_PTx_5:1;
      uint64_t PLD1_ORT_PTx_6:1;
      uint64_t PLD1_ORT_PTx_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_ORT2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_ORT_PTx_0:1;
      uint64_t PLD0_ORT_PTx_1:1;
      uint64_t PLD0_ORT_PTx_2:1;
      uint64_t PLD0_ORT_PTx_3:1;
      uint64_t PLD0_ORT_PTx_4:1;
      uint64_t PLD0_ORT_PTx_5:1;
      uint64_t PLD0_ORT_PTx_6:1;
      uint64_t PLD0_ORT_PTx_7:1;
      uint64_t PLD1_ORT_PTx_0:1;
      uint64_t PLD1_ORT_PTx_1:1;
      uint64_t PLD1_ORT_PTx_2:1;
      uint64_t PLD1_ORT_PTx_3:1;
      uint64_t PLD1_ORT_PTx_4:1;
      uint64_t PLD1_ORT_PTx_5:1;
      uint64_t PLD1_ORT_PTx_6:1;
      uint64_t PLD1_ORT_PTx_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_ORT3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_MC0_CEN:1;
      uint64_t PLD0_MC0_DFF_C:1;
      uint64_t PLD0_MC1_CEN:1;
      uint64_t PLD0_MC1_DFF_C:1;
      uint64_t PLD0_MC2_CEN:1;
      uint64_t PLD0_MC2_DFF_C:1;
      uint64_t PLD0_MC3_CEN:1;
      uint64_t PLD0_MC3_DFF_C:1;
      uint64_t PLD1_MC0_CEN:1;
      uint64_t PLD1_MC0_DFF_C:1;
      uint64_t PLD1_MC1_CEN:1;
      uint64_t PLD1_MC1_DFF_C:1;
      uint64_t PLD1_MC2_CEN:1;
      uint64_t PLD1_MC2_DFF_C:1;
      uint64_t PLD1_MC3_CEN:1;
      uint64_t PLD1_MC3_DFF_C:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_MC_CFG_CEN_CONST;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_MC0_XORFB:2;
      uint64_t PLD0_MC1_XORFB:2;
      uint64_t PLD0_MC2_XORFB:2;
      uint64_t PLD0_MC3_XORFB:2;
      uint64_t PLD1_MC0_XORFB:2;
      uint64_t PLD1_MC1_XORFB:2;
      uint64_t PLD1_MC2_XORFB:2;
      uint64_t PLD1_MC3_XORFB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_MC_CFG_XORFB;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_MC0_SET_SEL:1;
      uint64_t PLD0_MC0_RESET_SEL:1;
      uint64_t PLD0_MC1_SET_SEL:1;
      uint64_t PLD0_MC1_RESET_SEL:1;
      uint64_t PLD0_MC2_SET_SEL:1;
      uint64_t PLD0_MC2_RESET_SEL:1;
      uint64_t PLD0_MC3_SET_SEL:1;
      uint64_t PLD0_MC3_RESET_SEL:1;
      uint64_t PLD1_MC0_SET_SEL:1;
      uint64_t PLD1_MC0_RESET_SEL:1;
      uint64_t PLD1_MC1_SET_SEL:1;
      uint64_t PLD1_MC1_RESET_SEL:1;
      uint64_t PLD1_MC2_SET_SEL:1;
      uint64_t PLD1_MC2_RESET_SEL:1;
      uint64_t PLD1_MC3_SET_SEL:1;
      uint64_t PLD1_MC3_RESET_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_MC_SET_RESET;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLD0_MC0_BYPASS:1;
      uint64_t NC1:1;
      uint64_t PLD0_MC1_BYPASS:1;
      uint64_t NC3:1;
      uint64_t PLD0_MC2_BYPASS:1;
      uint64_t NC5:1;
      uint64_t PLD0_MC3_BYPASS:1;
      uint64_t NC7:1;
      uint64_t PLD1_MC0_BYPASS:1;
      uint64_t NC9:1;
      uint64_t PLD1_MC1_BYPASS:1;
      uint64_t NC11:1;
      uint64_t PLD1_MC2_BYPASS:1;
      uint64_t NC13:1;
      uint64_t PLD1_MC3_BYPASS:1;
      uint64_t NC15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD_MC_CFG_BYPASS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RAD0:3;
      uint64_t reservedSpace0:1;
      uint64_t RAD1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RAD2:3;
      uint64_t DP_RTE_BYPASS0:1;
      uint64_t DP_RTE_BYPASS1:1;
      uint64_t DP_RTE_BYPASS2:1;
      uint64_t DP_RTE_BYPASS3:1;
      uint64_t DP_RTE_BYPASS4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t F0_LD:3;
      uint64_t DP_RTE_BYPASS5:1;
      uint64_t F1_LD:3;
      uint64_t NC7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t D0_LD:3;
      uint64_t reservedSpace0:1;
      uint64_t D1_LD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SI_MUX:3;
      uint64_t reservedSpace0:1;
      uint64_t CI_MUX:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OUT0:4;
      uint64_t OUT1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OUT2:4;
      uint64_t OUT3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OUT4:4;
      uint64_t OUT5:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OUT_SYNC:6;
      uint64_t NC6:1;
      uint64_t NC7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AMASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CMASK0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CMASK0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SI_SELA:2;
      uint64_t SI_SELB:2;
      uint64_t DEF_SI:1;
      uint64_t AMASK_EN:1;
      uint64_t CMASK0_EN:1;
      uint64_t CMASK1_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CI_SELA:2;
      uint64_t CI_SELB:2;
      uint64_t CMP_SELA:2;
      uint64_t CMP_SELB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHAIN0:1;
      uint64_t CHAIN1:1;
      uint64_t CHAIN_FB:1;
      uint64_t CHAIN_CMSB:1;
      uint64_t MSB_SEL:3;
      uint64_t MSB_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t F0_INSEL:2;
      uint64_t F1_INSEL:2;
      uint64_t MSB_SI:1;
      uint64_t PI_DYN:1;
      uint64_t SHIFT_SEL:1;
      uint64_t PI_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WRK16_CONCAT:1;
      uint64_t EXT_CRCPRS:1;
      uint64_t FIFO_ASYNC:1;
      uint64_t FIFO_EDGE:1;
      uint64_t FIFO_CAP:1;
      uint64_t FIFO_FAST:1;
      uint64_t F0_CK_INV:1;
      uint64_t F1_CK_INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t F0_DYN:1;
      uint64_t F1_DYN:1;
      uint64_t NC2:1;
      uint64_t NC3:1;
      uint64_t FIFO_ADD_SYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CTL_MD0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CTL_MD1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t STAT_MD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NC0:1;
      uint64_t NC1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SC_OUT_CTL:2;
      uint64_t SC_INT_MD:1;
      uint64_t SC_SYNC_MD:1;
      uint64_t SC_EXT_RES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CNT_LD_SEL:2;
      uint64_t CNT_EN_SEL:2;
      uint64_t ROUTE_LD:1;
      uint64_t ROUTE_EN:1;
      uint64_t ALT_CNT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RC_EN_SEL:2;
      uint64_t RC_EN_MODE:2;
      uint64_t RC_EN_INV:1;
      uint64_t RC_INV:1;
      uint64_t RC_RES_SEL0_OR_FRES:1;
      uint64_t RC_RES_SEL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RC_EN_SEL:2;
      uint64_t RC_EN_MODE:2;
      uint64_t RC_EN_INV:1;
      uint64_t RC_INV:1;
      uint64_t RC_RES_SEL0_OR_FRES:1;
      uint64_t RC_RES_SEL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RC_EN_SEL:2;
      uint64_t RC_EN_MODE:2;
      uint64_t RC_EN_INV:1;
      uint64_t RC_INV:1;
      uint64_t RC_RES_SEL0_OR_FRES:1;
      uint64_t RC_RES_SEL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RC_EN_SEL:2;
      uint64_t RC_EN_MODE:2;
      uint64_t RC_EN_INV:1;
      uint64_t RC_INV:1;
      uint64_t RC_RES_SEL0_OR_FRES:1;
      uint64_t RC_RES_SEL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLD0_CK_SEL:4;
      uint64_t PLD1_CK_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DP_CK_SEL:4;
      uint64_t SC_CK_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t EN_RES_CNTCTL:1;
      uint64_t GUDB_WR:1;
      uint64_t reservedSpace1:1;
      uint64_t DP_RES_POL:1;
      uint64_t SC_RES_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ALT_RES:1;
      uint64_t EXT_SYNC:1;
      uint64_t EN_RES_STAT:1;
      uint64_t EN_RES_DP:1;
      uint64_t EXT_CK_SEL:2;
      uint64_t PLD0_RES_POL:1;
      uint64_t PLD1_RES_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP_SEL:1;
      uint64_t SI_SEL:1;
      uint64_t CI_SEL:1;
      uint64_t CFB_EN:1;
      uint64_t A1_WR_SRC:2;
      uint64_t A0_WR_SRC:2;
      uint64_t SHIFT:2;
      uint64_t SRC_B:2;
      uint64_t SRC_A:1;
      uint64_t FUNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCFG7;

};

#define UDB_UDB_P1_U1 (*(volatile struct UDB_UDB_P1_U1_tag *) 0x400f3280)

struct UDB_UDB_P1_ROUTE_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC31;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC32;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC33;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC34;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC35;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC36;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC37;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC38;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC39;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC40;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC41;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC42;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC43;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC44;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC45;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC46;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC47;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC48;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC49;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC50;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC51;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC52;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC53;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC54;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC55;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC56;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC57;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC58;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC59;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC60;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC61;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC62;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC63;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC64;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC65;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC66;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC67;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC68;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC69;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC70;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC71;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC72;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC73;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC74;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC75;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC76;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC77;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC78;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC79;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC80;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC81;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC82;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC83;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC84;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC85;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC86;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC87;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC88;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC89;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC90;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC91;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC92;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC93;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC94;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC95;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC96;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC97;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC98;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC99;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC100;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC101;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC102;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC103;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC104;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC105;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC106;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC107;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC108;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC109;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC110;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC111;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC112;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC113;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC114;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC115;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC116;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC117;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC118;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC119;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC120;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC121;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC122;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC123;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC124;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC125;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC126;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC127;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R15;

  uint8_t res0[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD0IN0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD0IN1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD0IN2;

  uint8_t res1[4];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD1IN0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD1IN1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLD1IN2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DPIN0;

  uint8_t res2[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PI_TOP2:2;
      uint64_t PI_BOT2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DPIN1;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIN;

  uint8_t res4[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIOIN;

  uint8_t res5[5];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RCIN;

  uint8_t res6[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS7;

};

#define UDB_UDB_P1_ROUTE (*(volatile struct UDB_UDB_P1_ROUTE_tag *) 0x400f3300)

struct UDB_UDB_DSI0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC31;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC32;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC33;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC34;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC35;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC36;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC37;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC38;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC39;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC40;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC41;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC42;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC43;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC44;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC45;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC46;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC47;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC48;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC49;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC50;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC51;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC52;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC53;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC54;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC55;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC56;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC57;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC58;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC59;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC60;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC61;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC62;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC63;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC64;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC65;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC66;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC67;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC68;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC69;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC70;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC71;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC72;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC73;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC74;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC75;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC76;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC77;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC78;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC79;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC80;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC81;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC82;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC83;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC84;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC85;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC86;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC87;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC88;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC89;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC90;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC91;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC92;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC93;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC94;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC95;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC96;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC97;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC98;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC99;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC100;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC101;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC102;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC103;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC104;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC105;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC106;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC107;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC108;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC109;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC110;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC111;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC112;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC113;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC114;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC115;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC116;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC117;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC118;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC119;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC120;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC121;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC122;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC123;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC124;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC125;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC126;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC127;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R15;

  uint8_t res0[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIINP0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIINP1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIINP2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIINP3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIINP4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIINP5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTP0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTP1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTP2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTP3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTT0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTT1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTT2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTT3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTT4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTT5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS7;

};

#define UDB_UDB_DSI0 (*(volatile struct UDB_UDB_DSI0_tag *) 0x400f4000)

struct UDB_UDB_DSI1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC31;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC32;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC33;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC34;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC35;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC36;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC37;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC38;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC39;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC40;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC41;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC42;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC43;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC44;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC45;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC46;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC47;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC48;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC49;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC50;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC51;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC52;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC53;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC54;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC55;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC56;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC57;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC58;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC59;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC60;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC61;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC62;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC63;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC64;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC65;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC66;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC67;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC68;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC69;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC70;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC71;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC72;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC73;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC74;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC75;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC76;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC77;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC78;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC79;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC80;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC81;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC82;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC83;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC84;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC85;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC86;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC87;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC88;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC89;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC90;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC91;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC92;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC93;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC94;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC95;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC96;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC97;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC98;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC99;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC100;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC101;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC102;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC103;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC104;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC105;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC106;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC107;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC108;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC109;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC110;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC111;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC112;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC113;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC114;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC115;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC116;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC117;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC118;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC119;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC120;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC121;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC122;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC123;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC124;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC125;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC126;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC127;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R15;

  uint8_t res0[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIINP0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIINP1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIINP2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIINP3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIINP4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIINP5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTP0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTP1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTP2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTP3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTT0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTT1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTT2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTT3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTT4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTT5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS7;

};

#define UDB_UDB_DSI1 (*(volatile struct UDB_UDB_DSI1_tag *) 0x400f4100)

struct UDB_UDB_DSI2_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC31;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC32;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC33;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC34;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC35;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC36;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC37;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC38;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC39;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC40;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC41;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC42;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC43;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC44;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC45;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC46;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC47;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC48;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC49;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC50;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC51;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC52;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC53;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC54;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC55;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC56;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC57;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC58;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC59;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC60;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC61;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC62;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC63;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC64;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC65;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC66;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC67;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC68;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC69;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC70;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC71;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC72;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC73;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC74;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC75;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC76;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC77;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC78;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC79;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC80;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC81;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC82;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC83;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC84;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC85;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC86;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC87;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC88;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC89;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC90;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC91;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC92;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC93;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC94;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC95;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC96;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC97;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC98;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC99;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC100;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC101;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC102;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC103;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC104;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC105;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC106;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC107;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC108;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC109;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC110;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC111;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC112;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC113;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC114;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC115;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC116;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC117;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC118;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC119;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC120;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC121;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC122;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC123;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC124;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC125;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC126;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC127;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R15;

  uint8_t res0[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIINP0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIINP1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIINP2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIINP3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIINP4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIINP5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTP0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTP1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTP2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTP3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTT0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTT1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTT2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTT3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTT4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTT5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS7;

};

#define UDB_UDB_DSI2 (*(volatile struct UDB_UDB_DSI2_tag *) 0x400f4200)

struct UDB_UDB_DSI3_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC31;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC32;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC33;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC34;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC35;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC36;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC37;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC38;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC39;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC40;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC41;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC42;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC43;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC44;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC45;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC46;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC47;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC48;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC49;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC50;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC51;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC52;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC53;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC54;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC55;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC56;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC57;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC58;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC59;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC60;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC61;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC62;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC63;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC64;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC65;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC66;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC67;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC68;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC69;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC70;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC71;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC72;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC73;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC74;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC75;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC76;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC77;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC78;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC79;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC80;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC81;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC82;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC83;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC84;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC85;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC86;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC87;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC88;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC89;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC90;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC91;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC92;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC93;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC94;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC95;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC96;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC97;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC98;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC99;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC100;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC101;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC102;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC103;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC104;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC105;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC106;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC107;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC108;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC109;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC110;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC111;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC112;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC113;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC114;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC115;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC116;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC117;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC118;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC119;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC120;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC121;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC122;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC123;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC124;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC125;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC126;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HC_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HC127;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_L15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HS23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HV_BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HV_R15;

  uint8_t res0[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIINP0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIINP1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIINP2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIINP3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIINP4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIINP5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTP0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTP1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTP2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTP3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTT0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTT1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTT2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTT3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTT4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PI_TOP:4;
      uint64_t PI_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DSIOUTT5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VS_TOP:4;
      uint64_t VS_BOT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VS7;

};

#define UDB_UDB_DSI3 (*(volatile struct UDB_UDB_DSI3_tag *) 0x400f4300)

struct UDB_UDB_PA0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLKIN_EN_SEL:2;
      uint64_t CLKIN_EN_MODE:2;
      uint64_t CLKIN_EN_INV:1;
      uint64_t CLKIN_INV:1;
      uint64_t NC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLKOUT_EN_SEL:2;
      uint64_t CLKOUT_EN_MODE:2;
      uint64_t CLKOUT_EN_INV:1;
      uint64_t CLKOUT_INV:1;
      uint64_t NC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLKIN_SEL:4;
      uint64_t CLKOUT_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t NC0:1;
      uint64_t reservedSpace1:3;
      uint64_t NC7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t NC7654:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PIN_SEL:1;
      uint64_t reservedSpace0:2;
      uint64_t NC7654:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IN_SYNC0:2;
      uint64_t IN_SYNC1:2;
      uint64_t IN_SYNC2:2;
      uint64_t IN_SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IN_SYNC4:2;
      uint64_t IN_SYNC5:2;
      uint64_t IN_SYNC6:2;
      uint64_t IN_SYNC7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OUT_SYNC0:2;
      uint64_t OUT_SYNC1:2;
      uint64_t OUT_SYNC2:2;
      uint64_t OUT_SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OUT_SYNC4:2;
      uint64_t OUT_SYNC5:2;
      uint64_t OUT_SYNC6:2;
      uint64_t OUT_SYNC7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA_SEL0:2;
      uint64_t DATA_SEL1:2;
      uint64_t DATA_SEL2:2;
      uint64_t DATA_SEL3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA_SEL4:2;
      uint64_t DATA_SEL5:2;
      uint64_t DATA_SEL6:2;
      uint64_t DATA_SEL7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OE_SEL0:2;
      uint64_t OE_SEL1:2;
      uint64_t OE_SEL2:2;
      uint64_t OE_SEL3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OE_SEL4:2;
      uint64_t OE_SEL5:2;
      uint64_t OE_SEL6:2;
      uint64_t OE_SEL7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OE_SYNC0:2;
      uint64_t OE_SYNC1:2;
      uint64_t OE_SYNC2:2;
      uint64_t OE_SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG14;

};

#define UDB_UDB_PA0 (*(volatile struct UDB_UDB_PA0_tag *) 0x400f5000)

struct UDB_UDB_PA1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLKIN_EN_SEL:2;
      uint64_t CLKIN_EN_MODE:2;
      uint64_t CLKIN_EN_INV:1;
      uint64_t CLKIN_INV:1;
      uint64_t NC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLKOUT_EN_SEL:2;
      uint64_t CLKOUT_EN_MODE:2;
      uint64_t CLKOUT_EN_INV:1;
      uint64_t CLKOUT_INV:1;
      uint64_t NC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLKIN_SEL:4;
      uint64_t CLKOUT_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t NC0:1;
      uint64_t reservedSpace1:3;
      uint64_t NC7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t NC7654:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PIN_SEL:1;
      uint64_t reservedSpace0:2;
      uint64_t NC7654:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IN_SYNC0:2;
      uint64_t IN_SYNC1:2;
      uint64_t IN_SYNC2:2;
      uint64_t IN_SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IN_SYNC4:2;
      uint64_t IN_SYNC5:2;
      uint64_t IN_SYNC6:2;
      uint64_t IN_SYNC7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OUT_SYNC0:2;
      uint64_t OUT_SYNC1:2;
      uint64_t OUT_SYNC2:2;
      uint64_t OUT_SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OUT_SYNC4:2;
      uint64_t OUT_SYNC5:2;
      uint64_t OUT_SYNC6:2;
      uint64_t OUT_SYNC7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA_SEL0:2;
      uint64_t DATA_SEL1:2;
      uint64_t DATA_SEL2:2;
      uint64_t DATA_SEL3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA_SEL4:2;
      uint64_t DATA_SEL5:2;
      uint64_t DATA_SEL6:2;
      uint64_t DATA_SEL7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OE_SEL0:2;
      uint64_t OE_SEL1:2;
      uint64_t OE_SEL2:2;
      uint64_t OE_SEL3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OE_SEL4:2;
      uint64_t OE_SEL5:2;
      uint64_t OE_SEL6:2;
      uint64_t OE_SEL7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OE_SYNC0:2;
      uint64_t OE_SYNC1:2;
      uint64_t OE_SYNC2:2;
      uint64_t OE_SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG14;

};

#define UDB_UDB_PA1 (*(volatile struct UDB_UDB_PA1_tag *) 0x400f5010)

struct UDB_UDB_PA2_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLKIN_EN_SEL:2;
      uint64_t CLKIN_EN_MODE:2;
      uint64_t CLKIN_EN_INV:1;
      uint64_t CLKIN_INV:1;
      uint64_t NC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLKOUT_EN_SEL:2;
      uint64_t CLKOUT_EN_MODE:2;
      uint64_t CLKOUT_EN_INV:1;
      uint64_t CLKOUT_INV:1;
      uint64_t NC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLKIN_SEL:4;
      uint64_t CLKOUT_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t NC0:1;
      uint64_t reservedSpace1:3;
      uint64_t NC7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t NC7654:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PIN_SEL:1;
      uint64_t reservedSpace0:2;
      uint64_t NC7654:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IN_SYNC0:2;
      uint64_t IN_SYNC1:2;
      uint64_t IN_SYNC2:2;
      uint64_t IN_SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IN_SYNC4:2;
      uint64_t IN_SYNC5:2;
      uint64_t IN_SYNC6:2;
      uint64_t IN_SYNC7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OUT_SYNC0:2;
      uint64_t OUT_SYNC1:2;
      uint64_t OUT_SYNC2:2;
      uint64_t OUT_SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OUT_SYNC4:2;
      uint64_t OUT_SYNC5:2;
      uint64_t OUT_SYNC6:2;
      uint64_t OUT_SYNC7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA_SEL0:2;
      uint64_t DATA_SEL1:2;
      uint64_t DATA_SEL2:2;
      uint64_t DATA_SEL3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA_SEL4:2;
      uint64_t DATA_SEL5:2;
      uint64_t DATA_SEL6:2;
      uint64_t DATA_SEL7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OE_SEL0:2;
      uint64_t OE_SEL1:2;
      uint64_t OE_SEL2:2;
      uint64_t OE_SEL3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OE_SEL4:2;
      uint64_t OE_SEL5:2;
      uint64_t OE_SEL6:2;
      uint64_t OE_SEL7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OE_SYNC0:2;
      uint64_t OE_SYNC1:2;
      uint64_t OE_SYNC2:2;
      uint64_t OE_SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG14;

};

#define UDB_UDB_PA2 (*(volatile struct UDB_UDB_PA2_tag *) 0x400f5020)

struct UDB_UDB_PA3_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLKIN_EN_SEL:2;
      uint64_t CLKIN_EN_MODE:2;
      uint64_t CLKIN_EN_INV:1;
      uint64_t CLKIN_INV:1;
      uint64_t NC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLKOUT_EN_SEL:2;
      uint64_t CLKOUT_EN_MODE:2;
      uint64_t CLKOUT_EN_INV:1;
      uint64_t CLKOUT_INV:1;
      uint64_t NC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLKIN_SEL:4;
      uint64_t CLKOUT_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t NC0:1;
      uint64_t reservedSpace1:3;
      uint64_t NC7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t NC7654:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PIN_SEL:1;
      uint64_t reservedSpace0:2;
      uint64_t NC7654:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IN_SYNC0:2;
      uint64_t IN_SYNC1:2;
      uint64_t IN_SYNC2:2;
      uint64_t IN_SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IN_SYNC4:2;
      uint64_t IN_SYNC5:2;
      uint64_t IN_SYNC6:2;
      uint64_t IN_SYNC7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OUT_SYNC0:2;
      uint64_t OUT_SYNC1:2;
      uint64_t OUT_SYNC2:2;
      uint64_t OUT_SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OUT_SYNC4:2;
      uint64_t OUT_SYNC5:2;
      uint64_t OUT_SYNC6:2;
      uint64_t OUT_SYNC7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA_SEL0:2;
      uint64_t DATA_SEL1:2;
      uint64_t DATA_SEL2:2;
      uint64_t DATA_SEL3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA_SEL4:2;
      uint64_t DATA_SEL5:2;
      uint64_t DATA_SEL6:2;
      uint64_t DATA_SEL7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OE_SEL0:2;
      uint64_t OE_SEL1:2;
      uint64_t OE_SEL2:2;
      uint64_t OE_SEL3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OE_SEL4:2;
      uint64_t OE_SEL5:2;
      uint64_t OE_SEL6:2;
      uint64_t OE_SEL7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OE_SYNC0:2;
      uint64_t OE_SYNC1:2;
      uint64_t OE_SYNC2:2;
      uint64_t OE_SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG14;

};

#define UDB_UDB_PA3 (*(volatile struct UDB_UDB_PA3_tag *) 0x400f5030)

struct UDB_UDB_BCTL0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DRV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DRV;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DCEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDCLK_EN;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MBCLK_EN;

  uint8_t res0[5];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLK_SEL0:2;
      uint64_t CLK_SEL1:2;
      uint64_t CLK_SEL2:2;
      uint64_t CLK_SEL3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BOTSEL_L;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLK_SEL4:2;
      uint64_t CLK_SEL5:2;
      uint64_t CLK_SEL6:2;
      uint64_t CLK_SEL7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BOTSEL_U;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLK_SEL0:2;
      uint64_t CLK_SEL1:2;
      uint64_t CLK_SEL2:2;
      uint64_t CLK_SEL3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TOPSEL_L;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLK_SEL4:2;
      uint64_t CLK_SEL5:2;
      uint64_t CLK_SEL6:2;
      uint64_t CLK_SEL7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TOPSEL_U;

  uint8_t res1[4];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCEN_Q:8;
      uint64_t BCEN_Q:1;
      uint64_t GCH_WR_LO:1;
      uint64_t GCH_WR_HI:1;
      uint64_t DISABLE_ROUTE:1;
      uint64_t GLB_DSI_WR:1;
      uint64_t WR_CFG_OPT:1;
      uint64_t NC0:1;
      uint64_t SLEEP_TEST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QCLK_EN0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCEN_Q:8;
      uint64_t BCEN_Q:1;
      uint64_t GCH_WR_LO:1;
      uint64_t GCH_WR_HI:1;
      uint64_t DISABLE_ROUTE:1;
      uint64_t GLB_DSI_WR:1;
      uint64_t WR_CFG_OPT:1;
      uint64_t NC0:1;
      uint64_t SLEEP_TEST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QCLK_EN1;

};

#define UDB_UDB_BCTL0 (*(volatile struct UDB_UDB_BCTL0_tag *) 0x400f6000)

struct UDB_UDB_UDBIF_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DIS_COR:1;
      uint64_t ROUTE_EN:1;
      uint64_t BANK_EN:1;
      uint64_t LOCK:1;
      uint64_t PIPE:1;
      uint64_t reservedSpace0:2;
      uint64_t GLBL_WR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BANK_CTL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RD_CFG_WAIT:2;
      uint64_t WR_CFG_WAIT:2;
      uint64_t RD_WRK_WAIT:2;
      uint64_t WR_WRK_WAIT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WAIT_CFG;

  uint8_t res0[26];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EN_HFCLK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) INT_CLK_CTL;

};

#define UDB_UDB_UDBIF (*(volatile struct UDB_UDB_UDBIF_tag *) 0x400f7000)

struct CTBM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTB_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OA0_PWR_MODE:2;
      uint64_t OA0_DRIVE_STR_SEL:1;
      uint64_t reservedSpace0:1;
      uint64_t OA0_COMP_EN:1;
      uint64_t OA0_HYST_EN:1;
      uint64_t OA0_BYPASS_DSI_SYNC:1;
      uint64_t reservedSpace1:1;
      uint64_t OA0_COMPINT:2;
      uint64_t reservedSpace2:1;
      uint64_t OA0_PUMP_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OA_RES0_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OA1_PWR_MODE:2;
      uint64_t OA1_DRIVE_STR_SEL:1;
      uint64_t reservedSpace0:1;
      uint64_t OA1_COMP_EN:1;
      uint64_t OA1_HYST_EN:1;
      uint64_t OA1_BYPASS_DSI_SYNC:1;
      uint64_t reservedSpace1:1;
      uint64_t OA1_COMPINT:2;
      uint64_t reservedSpace2:1;
      uint64_t OA1_PUMP_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OA_RES1_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OA0_COMP:1;
      uint64_t reservedSpace0:15;
      uint64_t OA1_COMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP_STAT;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0:1;
      uint64_t COMP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0_SET:1;
      uint64_t COMP1_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0_MASK:1;
      uint64_t COMP1_MASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0_MASKED:1;
      uint64_t COMP1_MASKED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASKED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFT_MODE:3;
      uint64_t reservedSpace0:28;
      uint64_t DFT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFT_CTRL;

  uint8_t res1[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OA0P_A00:1;
      uint64_t reservedSpace0:1;
      uint64_t OA0P_A20:1;
      uint64_t OA0P_A30:1;
      uint64_t reservedSpace1:4;
      uint64_t OA0M_A11:1;
      uint64_t reservedSpace2:5;
      uint64_t OA0M_A81:1;
      uint64_t reservedSpace3:3;
      uint64_t OA0O_D51:1;
      uint64_t reservedSpace4:2;
      uint64_t OA0O_D81:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OA0_SW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OA0P_A00:1;
      uint64_t reservedSpace0:1;
      uint64_t OA0P_A20:1;
      uint64_t OA0P_A30:1;
      uint64_t reservedSpace1:4;
      uint64_t OA0M_A11:1;
      uint64_t reservedSpace2:5;
      uint64_t OA0M_A81:1;
      uint64_t reservedSpace3:3;
      uint64_t OA0O_D51:1;
      uint64_t reservedSpace4:2;
      uint64_t OA0O_D81:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OA0_SW_CLEAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OA1P_A03:1;
      uint64_t OA1P_A13:1;
      uint64_t reservedSpace0:2;
      uint64_t OA1P_A43:1;
      uint64_t reservedSpace1:3;
      uint64_t OA1M_A22:1;
      uint64_t reservedSpace2:5;
      uint64_t OA1M_A82:1;
      uint64_t reservedSpace3:3;
      uint64_t OA1O_D52:1;
      uint64_t OA1O_D62:1;
      uint64_t reservedSpace4:1;
      uint64_t OA1O_D82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OA1_SW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OA1P_A03:1;
      uint64_t OA1P_A13:1;
      uint64_t reservedSpace0:2;
      uint64_t OA1P_A43:1;
      uint64_t reservedSpace1:3;
      uint64_t OA1M_A22:1;
      uint64_t reservedSpace2:5;
      uint64_t OA1M_A82:1;
      uint64_t reservedSpace3:3;
      uint64_t OA1O_D52:1;
      uint64_t OA1O_D62:1;
      uint64_t reservedSpace4:1;
      uint64_t OA1O_D82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OA1_SW_CLEAR;

  uint8_t res2[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t P2_HW_CTRL:1;
      uint64_t P3_HW_CTRL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTB_SW_HW_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t OA0O_D51_STAT:1;
      uint64_t OA1O_D52_STAT:1;
      uint64_t OA1O_D62_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTB_SW_STATUS;

  uint8_t res3[3640];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OA0_OFFSET_TRIM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OA0_OFFSET_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OA0_SLOPE_OFFSET_TRIM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OA0_SLOPE_OFFSET_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OA0_COMP_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OA0_COMP_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OA1_OFFSET_TRIM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OA1_OFFSET_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OA1_SLOPE_OFFSET_TRIM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OA1_SLOPE_OFFSET_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OA1_COMP_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OA1_COMP_TRIM;

};

#define CTBM (*(volatile struct CTBM_tag *) 0x40100000)

struct SAR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t VREF_SEL:3;
      uint64_t VREF_BYP_CAP_EN:1;
      uint64_t reservedSpace1:1;
      uint64_t NEG_SEL:3;
      uint64_t reservedSpace2:1;
      uint64_t SAR_HW_CTRL_NEGVREF:1;
      uint64_t PWR_CTRL_VREF:2;
      uint64_t SPARE:4;
      uint64_t reservedSpace3:4;
      uint64_t ICONT_LV:2;
      uint64_t reservedSpace4:2;
      uint64_t DSI_SYNC_CONFIG:1;
      uint64_t DSI_MODE:1;
      uint64_t SWITCH_DISABLE:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUB_RESOLUTION:1;
      uint64_t LEFT_ALIGN:1;
      uint64_t SINGLE_ENDED_SIGNED:1;
      uint64_t DIFFERENTIAL_SIGNED:1;
      uint64_t AVG_CNT:3;
      uint64_t AVG_SHIFT:1;
      uint64_t reservedSpace0:8;
      uint64_t CONTINUOUS:1;
      uint64_t DSI_TRIGGER_EN:1;
      uint64_t DSI_TRIGGER_LEVEL:1;
      uint64_t DSI_SYNC_TRIGGER:1;
      uint64_t reservedSpace1:11;
      uint64_t EOS_DSI_OUT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMPLE_CTRL;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAMPLE_TIME0:10;
      uint64_t reservedSpace0:6;
      uint64_t SAMPLE_TIME1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMPLE_TIME01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAMPLE_TIME2:10;
      uint64_t reservedSpace0:6;
      uint64_t SAMPLE_TIME3:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMPLE_TIME23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RANGE_LOW:16;
      uint64_t RANGE_HIGH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RANGE_THRES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RANGE_COND:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RANGE_COND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHAN_EN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FW_TRIGGER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) START_CTRL;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLY_INC:1;
      uint64_t HIZ:1;
      uint64_t reservedSpace0:14;
      uint64_t DFT_INC:4;
      uint64_t DFT_OUTC:3;
      uint64_t reservedSpace1:1;
      uint64_t SEL_CSEL_DFT:4;
      uint64_t EN_CSEL_DFT:1;
      uint64_t DCEN:1;
      uint64_t reservedSpace2:1;
      uint64_t ADFT_OVERRIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFT_CTRL;

  uint8_t res2[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIN_ADDR:3;
      uint64_t reservedSpace0:1;
      uint64_t PORT_ADDR:3;
      uint64_t reservedSpace1:1;
      uint64_t DIFFERENTIAL_EN:1;
      uint64_t reservedSpace2:1;
      uint64_t AVG_EN:1;
      uint64_t reservedSpace3:1;
      uint64_t SAMPLE_TIME_SEL:2;
      uint64_t reservedSpace4:17;
      uint64_t DSI_OUT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_CONFIG00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIN_ADDR:3;
      uint64_t reservedSpace0:1;
      uint64_t PORT_ADDR:3;
      uint64_t reservedSpace1:1;
      uint64_t DIFFERENTIAL_EN:1;
      uint64_t reservedSpace2:1;
      uint64_t AVG_EN:1;
      uint64_t reservedSpace3:1;
      uint64_t SAMPLE_TIME_SEL:2;
      uint64_t reservedSpace4:17;
      uint64_t DSI_OUT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_CONFIG01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIN_ADDR:3;
      uint64_t reservedSpace0:1;
      uint64_t PORT_ADDR:3;
      uint64_t reservedSpace1:1;
      uint64_t DIFFERENTIAL_EN:1;
      uint64_t reservedSpace2:1;
      uint64_t AVG_EN:1;
      uint64_t reservedSpace3:1;
      uint64_t SAMPLE_TIME_SEL:2;
      uint64_t reservedSpace4:17;
      uint64_t DSI_OUT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_CONFIG02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIN_ADDR:3;
      uint64_t reservedSpace0:1;
      uint64_t PORT_ADDR:3;
      uint64_t reservedSpace1:1;
      uint64_t DIFFERENTIAL_EN:1;
      uint64_t reservedSpace2:1;
      uint64_t AVG_EN:1;
      uint64_t reservedSpace3:1;
      uint64_t SAMPLE_TIME_SEL:2;
      uint64_t reservedSpace4:17;
      uint64_t DSI_OUT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_CONFIG03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIN_ADDR:3;
      uint64_t reservedSpace0:1;
      uint64_t PORT_ADDR:3;
      uint64_t reservedSpace1:1;
      uint64_t DIFFERENTIAL_EN:1;
      uint64_t reservedSpace2:1;
      uint64_t AVG_EN:1;
      uint64_t reservedSpace3:1;
      uint64_t SAMPLE_TIME_SEL:2;
      uint64_t reservedSpace4:17;
      uint64_t DSI_OUT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_CONFIG04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIN_ADDR:3;
      uint64_t reservedSpace0:1;
      uint64_t PORT_ADDR:3;
      uint64_t reservedSpace1:1;
      uint64_t DIFFERENTIAL_EN:1;
      uint64_t reservedSpace2:1;
      uint64_t AVG_EN:1;
      uint64_t reservedSpace3:1;
      uint64_t SAMPLE_TIME_SEL:2;
      uint64_t reservedSpace4:17;
      uint64_t DSI_OUT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_CONFIG05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIN_ADDR:3;
      uint64_t reservedSpace0:1;
      uint64_t PORT_ADDR:3;
      uint64_t reservedSpace1:1;
      uint64_t DIFFERENTIAL_EN:1;
      uint64_t reservedSpace2:1;
      uint64_t AVG_EN:1;
      uint64_t reservedSpace3:1;
      uint64_t SAMPLE_TIME_SEL:2;
      uint64_t reservedSpace4:17;
      uint64_t DSI_OUT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_CONFIG06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIN_ADDR:3;
      uint64_t reservedSpace0:1;
      uint64_t PORT_ADDR:3;
      uint64_t reservedSpace1:1;
      uint64_t DIFFERENTIAL_EN:1;
      uint64_t reservedSpace2:1;
      uint64_t AVG_EN:1;
      uint64_t reservedSpace3:1;
      uint64_t SAMPLE_TIME_SEL:2;
      uint64_t reservedSpace4:17;
      uint64_t DSI_OUT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_CONFIG07;

  uint8_t res3[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WORK:16;
      uint64_t reservedSpace0:15;
      uint64_t CHAN_WORK_VALID_MIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_WORK00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WORK:16;
      uint64_t reservedSpace0:15;
      uint64_t CHAN_WORK_VALID_MIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_WORK01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WORK:16;
      uint64_t reservedSpace0:15;
      uint64_t CHAN_WORK_VALID_MIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_WORK02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WORK:16;
      uint64_t reservedSpace0:15;
      uint64_t CHAN_WORK_VALID_MIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_WORK03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WORK:16;
      uint64_t reservedSpace0:15;
      uint64_t CHAN_WORK_VALID_MIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_WORK04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WORK:16;
      uint64_t reservedSpace0:15;
      uint64_t CHAN_WORK_VALID_MIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_WORK05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WORK:16;
      uint64_t reservedSpace0:15;
      uint64_t CHAN_WORK_VALID_MIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_WORK06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WORK:16;
      uint64_t reservedSpace0:15;
      uint64_t CHAN_WORK_VALID_MIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_WORK07;

  uint8_t res4[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t SATURATE_INTR_MIR:1;
      uint64_t RANGE_INTR_MIR:1;
      uint64_t CHAN_RESULT_VALID_MIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_RESULT00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t SATURATE_INTR_MIR:1;
      uint64_t RANGE_INTR_MIR:1;
      uint64_t CHAN_RESULT_VALID_MIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_RESULT01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t SATURATE_INTR_MIR:1;
      uint64_t RANGE_INTR_MIR:1;
      uint64_t CHAN_RESULT_VALID_MIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_RESULT02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t SATURATE_INTR_MIR:1;
      uint64_t RANGE_INTR_MIR:1;
      uint64_t CHAN_RESULT_VALID_MIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_RESULT03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t SATURATE_INTR_MIR:1;
      uint64_t RANGE_INTR_MIR:1;
      uint64_t CHAN_RESULT_VALID_MIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_RESULT04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t SATURATE_INTR_MIR:1;
      uint64_t RANGE_INTR_MIR:1;
      uint64_t CHAN_RESULT_VALID_MIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_RESULT05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t SATURATE_INTR_MIR:1;
      uint64_t RANGE_INTR_MIR:1;
      uint64_t CHAN_RESULT_VALID_MIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_RESULT06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t SATURATE_INTR_MIR:1;
      uint64_t RANGE_INTR_MIR:1;
      uint64_t CHAN_RESULT_VALID_MIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_RESULT07;

  uint8_t res5[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHAN_WORK_VALID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_WORK_VALID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHAN_RESULT_VALID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_RESULT_VALID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CUR_CHAN:5;
      uint64_t reservedSpace0:25;
      uint64_t SW_VREF_NEG:1;
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CUR_AVG_ACCU:20;
      uint64_t reservedSpace0:4;
      uint64_t CUR_AVG_CNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AVG_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOS_INTR:1;
      uint64_t OVERFLOW_INTR:1;
      uint64_t FW_COLLISION_INTR:1;
      uint64_t DSI_COLLISION_INTR:1;
      uint64_t INJ_EOC_INTR:1;
      uint64_t INJ_SATURATE_INTR:1;
      uint64_t INJ_RANGE_INTR:1;
      uint64_t INJ_COLLISION_INTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOS_SET:1;
      uint64_t OVERFLOW_SET:1;
      uint64_t FW_COLLISION_SET:1;
      uint64_t DSI_COLLISION_SET:1;
      uint64_t INJ_EOC_SET:1;
      uint64_t INJ_SATURATE_SET:1;
      uint64_t INJ_RANGE_SET:1;
      uint64_t INJ_COLLISION_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOS_MASK:1;
      uint64_t OVERFLOW_MASK:1;
      uint64_t FW_COLLISION_MASK:1;
      uint64_t DSI_COLLISION_MASK:1;
      uint64_t INJ_EOC_MASK:1;
      uint64_t INJ_SATURATE_MASK:1;
      uint64_t INJ_RANGE_MASK:1;
      uint64_t INJ_COLLISION_MASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOS_MASKED:1;
      uint64_t OVERFLOW_MASKED:1;
      uint64_t FW_COLLISION_MASKED:1;
      uint64_t DSI_COLLISION_MASKED:1;
      uint64_t INJ_EOC_MASKED:1;
      uint64_t INJ_SATURATE_MASKED:1;
      uint64_t INJ_RANGE_MASKED:1;
      uint64_t INJ_COLLISION_MASKED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASKED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SATURATE_INTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SATURATE_INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SATURATE_SET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SATURATE_INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SATURATE_MASK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SATURATE_INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SATURATE_MASKED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SATURATE_INTR_MASKED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RANGE_INTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RANGE_INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RANGE_SET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RANGE_INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RANGE_MASK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RANGE_INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RANGE_MASKED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RANGE_INTR_MASKED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOS_MASKED_MIR:1;
      uint64_t OVERFLOW_MASKED_MIR:1;
      uint64_t FW_COLLISION_MASKED_MIR:1;
      uint64_t DSI_COLLISION_MASKED_MIR:1;
      uint64_t INJ_EOC_MASKED_MIR:1;
      uint64_t INJ_SATURATE_MASKED_MIR:1;
      uint64_t INJ_RANGE_MASKED_MIR:1;
      uint64_t INJ_COLLISION_MASKED_MIR:1;
      uint64_t reservedSpace0:22;
      uint64_t SATURATE_MASKED_RED:1;
      uint64_t RANGE_MASKED_RED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_CAUSE;

  uint8_t res6[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INJ_PIN_ADDR:3;
      uint64_t reservedSpace0:1;
      uint64_t INJ_PORT_ADDR:3;
      uint64_t reservedSpace1:1;
      uint64_t INJ_DIFFERENTIAL_EN:1;
      uint64_t INJ_RESOLUTION:1;
      uint64_t INJ_AVG_EN:1;
      uint64_t reservedSpace2:1;
      uint64_t INJ_SAMPLE_TIME_SEL:2;
      uint64_t reservedSpace3:16;
      uint64_t INJ_TAILGATING:1;
      uint64_t INJ_START_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INJ_CHAN_CONFIG;

  uint8_t res7[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INJ_RESULT:16;
      uint64_t reservedSpace0:12;
      uint64_t INJ_COLLISION_INTR_MIR:1;
      uint64_t INJ_SATURATE_INTR_MIR:1;
      uint64_t INJ_RANGE_INTR_MIR:1;
      uint64_t INJ_EOC_INTR_MIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INJ_RESULT;

  uint8_t res8[108];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUX_FW_P0_VPLUS:1;
      uint64_t MUX_FW_P1_VPLUS:1;
      uint64_t MUX_FW_P2_VPLUS:1;
      uint64_t MUX_FW_P3_VPLUS:1;
      uint64_t MUX_FW_P4_VPLUS:1;
      uint64_t MUX_FW_P5_VPLUS:1;
      uint64_t MUX_FW_P6_VPLUS:1;
      uint64_t MUX_FW_P7_VPLUS:1;
      uint64_t MUX_FW_P0_VMINUS:1;
      uint64_t MUX_FW_P1_VMINUS:1;
      uint64_t MUX_FW_P2_VMINUS:1;
      uint64_t MUX_FW_P3_VMINUS:1;
      uint64_t MUX_FW_P4_VMINUS:1;
      uint64_t MUX_FW_P5_VMINUS:1;
      uint64_t MUX_FW_P6_VMINUS:1;
      uint64_t MUX_FW_P7_VMINUS:1;
      uint64_t MUX_FW_VSSA_VMINUS:1;
      uint64_t MUX_FW_TEMP_VPLUS:1;
      uint64_t MUX_FW_AMUXBUSA_VPLUS:1;
      uint64_t MUX_FW_AMUXBUSB_VPLUS:1;
      uint64_t MUX_FW_AMUXBUSA_VMINUS:1;
      uint64_t MUX_FW_AMUXBUSB_VMINUS:1;
      uint64_t MUX_FW_SARBUS0_VPLUS:1;
      uint64_t MUX_FW_SARBUS1_VPLUS:1;
      uint64_t MUX_FW_SARBUS0_VMINUS:1;
      uint64_t MUX_FW_SARBUS1_VMINUS:1;
      uint64_t MUX_FW_P4_COREIO0:1;
      uint64_t MUX_FW_P5_COREIO1:1;
      uint64_t MUX_FW_P6_COREIO2:1;
      uint64_t MUX_FW_P7_COREIO3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_SWITCH0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUX_FW_P0_VPLUS:1;
      uint64_t MUX_FW_P1_VPLUS:1;
      uint64_t MUX_FW_P2_VPLUS:1;
      uint64_t MUX_FW_P3_VPLUS:1;
      uint64_t MUX_FW_P4_VPLUS:1;
      uint64_t MUX_FW_P5_VPLUS:1;
      uint64_t MUX_FW_P6_VPLUS:1;
      uint64_t MUX_FW_P7_VPLUS:1;
      uint64_t MUX_FW_P0_VMINUS:1;
      uint64_t MUX_FW_P1_VMINUS:1;
      uint64_t MUX_FW_P2_VMINUS:1;
      uint64_t MUX_FW_P3_VMINUS:1;
      uint64_t MUX_FW_P4_VMINUS:1;
      uint64_t MUX_FW_P5_VMINUS:1;
      uint64_t MUX_FW_P6_VMINUS:1;
      uint64_t MUX_FW_P7_VMINUS:1;
      uint64_t MUX_FW_VSSA_VMINUS:1;
      uint64_t MUX_FW_TEMP_VPLUS:1;
      uint64_t MUX_FW_AMUXBUSA_VPLUS:1;
      uint64_t MUX_FW_AMUXBUSB_VPLUS:1;
      uint64_t MUX_FW_AMUXBUSA_VMINUS:1;
      uint64_t MUX_FW_AMUXBUSB_VMINUS:1;
      uint64_t MUX_FW_SARBUS0_VPLUS:1;
      uint64_t MUX_FW_SARBUS1_VPLUS:1;
      uint64_t MUX_FW_SARBUS0_VMINUS:1;
      uint64_t MUX_FW_SARBUS1_VMINUS:1;
      uint64_t MUX_FW_P4_COREIO0:1;
      uint64_t MUX_FW_P5_COREIO1:1;
      uint64_t MUX_FW_P6_COREIO2:1;
      uint64_t MUX_FW_P7_COREIO3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_SWITCH_CLEAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUX_FW_P4_DFT_INP:1;
      uint64_t MUX_FW_P5_DFT_INM:1;
      uint64_t MUX_FW_ADFT0_SARBUS0:1;
      uint64_t MUX_FW_ADFT1_SARBUS1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_SWITCH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUX_FW_P4_DFT_INP:1;
      uint64_t MUX_FW_P5_DFT_INM:1;
      uint64_t MUX_FW_ADFT0_SARBUS0:1;
      uint64_t MUX_FW_ADFT1_SARBUS1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_SWITCH_CLEAR1;

  uint8_t res9[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUX_HW_CTRL_P0:1;
      uint64_t MUX_HW_CTRL_P1:1;
      uint64_t MUX_HW_CTRL_P2:1;
      uint64_t MUX_HW_CTRL_P3:1;
      uint64_t MUX_HW_CTRL_P4:1;
      uint64_t MUX_HW_CTRL_P5:1;
      uint64_t MUX_HW_CTRL_P6:1;
      uint64_t MUX_HW_CTRL_P7:1;
      uint64_t reservedSpace0:8;
      uint64_t MUX_HW_CTRL_VSSA:1;
      uint64_t MUX_HW_CTRL_TEMP:1;
      uint64_t MUX_HW_CTRL_AMUXBUSA:1;
      uint64_t MUX_HW_CTRL_AMUXBUSB:1;
      uint64_t reservedSpace1:2;
      uint64_t MUX_HW_CTRL_SARBUS0:1;
      uint64_t MUX_HW_CTRL_SARBUS1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_SWITCH_HW_CTRL;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUX_FW_P0_VPLUS:1;
      uint64_t MUX_FW_P1_VPLUS:1;
      uint64_t MUX_FW_P2_VPLUS:1;
      uint64_t MUX_FW_P3_VPLUS:1;
      uint64_t MUX_FW_P4_VPLUS:1;
      uint64_t MUX_FW_P5_VPLUS:1;
      uint64_t MUX_FW_P6_VPLUS:1;
      uint64_t MUX_FW_P7_VPLUS:1;
      uint64_t MUX_FW_P0_VMINUS:1;
      uint64_t MUX_FW_P1_VMINUS:1;
      uint64_t MUX_FW_P2_VMINUS:1;
      uint64_t MUX_FW_P3_VMINUS:1;
      uint64_t MUX_FW_P4_VMINUS:1;
      uint64_t MUX_FW_P5_VMINUS:1;
      uint64_t MUX_FW_P6_VMINUS:1;
      uint64_t MUX_FW_P7_VMINUS:1;
      uint64_t MUX_FW_VSSA_VMINUS:1;
      uint64_t MUX_FW_TEMP_VPLUS:1;
      uint64_t MUX_FW_AMUXBUSA_VPLUS:1;
      uint64_t MUX_FW_AMUXBUSB_VPLUS:1;
      uint64_t MUX_FW_AMUXBUSA_VMINUS:1;
      uint64_t MUX_FW_AMUXBUSB_VMINUS:1;
      uint64_t MUX_FW_SARBUS0_VPLUS:1;
      uint64_t MUX_FW_SARBUS1_VPLUS:1;
      uint64_t MUX_FW_SARBUS0_VMINUS:1;
      uint64_t MUX_FW_SARBUS1_VMINUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_SWITCH_STATUS;

  uint8_t res11[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLOCK_SEL:1;
      uint64_t reservedSpace0:30;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUMP_CTRL;

  uint8_t res12[2940];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP_TRIM:3;
      uint64_t TRIMUNIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANA_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WOUND_RESOLUTION:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WOUNDING;

};

#define SAR (*(volatile struct SAR_tag *) 0x401a0000)

