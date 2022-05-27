#include <stdint.h>

struct SPR_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSIZE:11;
      uint64_t CNWAY:8;
      uint64_t CPA:1;
      uint64_t CLA:1;
      uint64_t CREPL:2;
      uint64_t CBSIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t CFIWA:1;
      uint64_t CFAHA:1;
      uint64_t CWPA:1;
      uint64_t CARCH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1CFG0;

};

#define SPR_0 (*(volatile struct SPR_0_tag *) 0x203)

struct SPR_1_tag
{
  uint32_t BUCSR;
};

#define SPR_1 (*(volatile struct SPR_1_tag *) 0x3f5)

struct SPR_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t Process_ID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID0;

  uint8_t res0[963];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAVN:2;
      uint64_t NTLBS:2;
      uint64_t reservedSpace0:2;
      uint64_t PIDSIZE:5;
      uint64_t NPIDS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMUCFG0;

};

#define SPR_2 (*(volatile struct SPR_2_tag *) 0x30)

struct Supervisor_Mode_SPRs_SPR_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t Process_ID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID0;

  uint8_t res0[963];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAVN:2;
      uint64_t NTLBS:2;
      uint64_t reservedSpace0:2;
      uint64_t PIDSIZE:5;
      uint64_t NPIDS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMUCFG0;

};

#define Supervisor_Mode_SPRs_SPR_0 (*(volatile struct Supervisor_Mode_SPRs_SPR_0_tag *) 0x30)

struct Supervisor_Mode_SPRs_SPR_1_tag
{
  uint32_t BUCSR;
};

#define Supervisor_Mode_SPRs_SPR_1 (*(volatile struct Supervisor_Mode_SPRs_SPR_1_tag *) 0x3f5)

struct Supervisor_Mode_SPRs_SPR_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSIZE:11;
      uint64_t CNWAY:8;
      uint64_t CPA:1;
      uint64_t CLA:1;
      uint64_t CREPL:2;
      uint64_t CBSIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t CFIWA:1;
      uint64_t CFAHA:1;
      uint64_t CWPA:1;
      uint64_t CARCH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1CFG0;

};

#define Supervisor_Mode_SPRs_SPR_2 (*(volatile struct Supervisor_Mode_SPRs_SPR_2_tag *) 0x203)

struct Flash_Memory_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EHV:1;
      uint64_t ESUS:1;
      uint64_t ERS:1;
      uint64_t PSUS:1;
      uint64_t PGM:1;
      uint64_t reservedSpace0:4;
      uint64_t PEG:1;
      uint64_t DONE:1;
      uint64_t PEAS:1;
      uint64_t reservedSpace1:2;
      uint64_t RWE:1;
      uint64_t EER:1;
      uint64_t MAS:1;
      uint64_t reservedSpace2:3;
      uint64_t LAS:3;
      uint64_t reservedSpace3:1;
      uint64_t SIZE:3;
      uint64_t reservedSpace4:4;
      uint64_t EDC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFLASH0_MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LLK:16;
      uint64_t MLK:2;
      uint64_t reservedSpace0:2;
      uint64_t TSLK:1;
      uint64_t reservedSpace1:10;
      uint64_t LME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFLASH0_LML;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HLK:12;
      uint64_t reservedSpace0:19;
      uint64_t HBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFLASH0_HBL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLK:16;
      uint64_t SMK:2;
      uint64_t reservedSpace0:2;
      uint64_t STSLK:1;
      uint64_t reservedSpace1:10;
      uint64_t SLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFLASH0_SLL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSL:16;
      uint64_t MSL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFLASH0_LMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSL:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFLASH0_HBS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t ADDR:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFLASH0_ADR;

  uint32_t CFLASH0_BIU0;
  uint32_t CFLASH0_BIU1;
  uint32_t CFLASH0_BIU2;
  uint32_t CFLASH0_BIU3;
  uint32_t CFLASH0_BIU4;
  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AID:1;
      uint64_t AIE:1;
      uint64_t AIS:1;
      uint64_t EIE:1;
      uint64_t MRV:1;
      uint64_t MRE:1;
      uint64_t reservedSpace0:10;
      uint64_t DSI:8;
      uint64_t reservedSpace1:7;
      uint64_t UTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFLASH0_UT0;

  uint32_t CFLASH0_UT1;
  uint32_t CFLASH0_UT2;
  uint32_t CFLASH0_UMISR0;
  uint32_t CFLASH0_UMISR1;
  uint32_t CFLASH0_UMISR2;
  uint32_t CFLASH0_UMISR3;
  uint32_t CFLASH0_UMISR4;
  uint8_t res1[16292];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EHV:1;
      uint64_t ESUS:1;
      uint64_t ERS:1;
      uint64_t PSUS:1;
      uint64_t PGM:1;
      uint64_t reservedSpace0:4;
      uint64_t PEG:1;
      uint64_t DONE:1;
      uint64_t PEAS:1;
      uint64_t reservedSpace1:2;
      uint64_t RWE:1;
      uint64_t EER:1;
      uint64_t MAS:1;
      uint64_t reservedSpace2:3;
      uint64_t LAS:3;
      uint64_t reservedSpace3:1;
      uint64_t SIZE:3;
      uint64_t reservedSpace4:4;
      uint64_t EDC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFLASH0_MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LLK:16;
      uint64_t MLK:2;
      uint64_t reservedSpace0:2;
      uint64_t TSLK:1;
      uint64_t reservedSpace1:10;
      uint64_t LME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFLASH0_LML;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HLK:12;
      uint64_t reservedSpace0:19;
      uint64_t HBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFLASH0_HBL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLK:16;
      uint64_t SMK:2;
      uint64_t reservedSpace0:2;
      uint64_t STSLK:1;
      uint64_t reservedSpace1:10;
      uint64_t SLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFLASH0_SLL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSL:16;
      uint64_t MSL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFLASH0_LMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSL:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFLASH0_HBS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t ADDR:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFLASH0_ADR;

  uint32_t DFLASH0_BIU0;
  uint32_t DFLASH0_BIU1;
  uint32_t DFLASH0_BIU2;
  uint32_t DFLASH0_BIU3;
  uint32_t DFLASH0_BIU4;
  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AID:1;
      uint64_t AIE:1;
      uint64_t AIS:1;
      uint64_t EIE:1;
      uint64_t MRV:1;
      uint64_t MRE:1;
      uint64_t reservedSpace0:10;
      uint64_t DSI:8;
      uint64_t reservedSpace1:7;
      uint64_t UTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFLASH0_UT0;

  uint32_t DFLASH0_UT1;
  uint32_t DFLASH0_UT2;
  uint32_t DFLASH0_UMISR0;
  uint32_t DFLASH0_UMISR1;
  uint32_t DFLASH0_UMISR2;
  uint32_t DFLASH0_UMISR3;
  uint32_t DFLASH0_UMISR4;
  uint8_t res3[147364];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EHV:1;
      uint64_t ESUS:1;
      uint64_t ERS:1;
      uint64_t PSUS:1;
      uint64_t PGM:1;
      uint64_t reservedSpace0:4;
      uint64_t PEG:1;
      uint64_t DONE:1;
      uint64_t PEAS:1;
      uint64_t reservedSpace1:2;
      uint64_t RWE:1;
      uint64_t EER:1;
      uint64_t MAS:1;
      uint64_t reservedSpace2:3;
      uint64_t LAS:2;
      uint64_t reservedSpace3:2;
      uint64_t SIZE:3;
      uint64_t reservedSpace4:4;
      uint64_t EDC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFLASH1_MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LLK:16;
      uint64_t MLK:2;
      uint64_t reservedSpace0:2;
      uint64_t TSLK:1;
      uint64_t reservedSpace1:10;
      uint64_t LME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFLASH1_LML;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HLK:1;
      uint64_t reservedSpace0:30;
      uint64_t HBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFLASH1_HBL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLK:1;
      uint64_t reservedSpace0:15;
      uint64_t SMK:2;
      uint64_t reservedSpace1:2;
      uint64_t STSLK:1;
      uint64_t reservedSpace2:10;
      uint64_t SLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFLASH1_SLL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MSL:2;
      uint64_t reservedSpace1:4;
      uint64_t LSL:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFLASH1_LMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSL:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFLASH1_HBS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t ADDR:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFLASH1_ADR;

  uint32_t CFLASH1_BIU0;
  uint32_t CFLASH1_BIU1;
  uint32_t CFLASH1_BIU2;
  uint32_t CFLASH1_BIU3;
  uint32_t CFLASH1_BIU4;
  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AID:1;
      uint64_t AIE:1;
      uint64_t AIS:1;
      uint64_t EIE:1;
      uint64_t MRV:1;
      uint64_t MRE:1;
      uint64_t reservedSpace0:10;
      uint64_t DSI:8;
      uint64_t reservedSpace1:7;
      uint64_t UTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFLASH1_UT0;

  uint32_t CFLASH1_UT1;
  uint32_t CFLASH1_UT2;
  uint32_t CFLASH1_UM0;
  uint32_t CFLASH1_UM1;
  uint32_t CFLASH1_UM2;
  uint32_t CFLASH1_UM3;
  uint32_t CFLASH1_UM4;
};

#define Flash_Memory (*(volatile struct Flash_Memory_tag *) 0xc3f88000)

struct Platform_Flash_Controller_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_P0_BFE:1;
      uint64_t B0_P0_PFLM:2;
      uint64_t B0_P0_IPFE:1;
      uint64_t B0_P0_DPFE:1;
      uint64_t B0_P0_BCFG:2;
      uint64_t B0_RWWC:1;
      uint64_t B0_P1_BFE:1;
      uint64_t B0_P1_PFLM:2;
      uint64_t B0_P1_IPFE:1;
      uint64_t B0_P1_DPFE:1;
      uint64_t B0_P1_BCFG:2;
      uint64_t BK0_RWWC:2;
      uint64_t BK0_RWSC:5;
      uint64_t BK0_WWSC:5;
      uint64_t BK0_APC:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B1_P0_BFE:1;
      uint64_t reservedSpace0:6;
      uint64_t BK1_RWWC_0:1;
      uint64_t B1_P1_BFE:1;
      uint64_t reservedSpace1:6;
      uint64_t BK1_RWWC_1:2;
      uint64_t BK1_RWSC:5;
      uint64_t BK1_WWSC:5;
      uint64_t BK1_APC:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0AP:2;
      uint64_t M1AP:2;
      uint64_t M2AP:2;
      uint64_t M3AP:2;
      uint64_t M4AP:2;
      uint64_t M5AP:2;
      uint64_t M6AP:2;
      uint64_t M7AP:2;
      uint64_t MPFD:8;
      uint64_t ARBM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFAPR;

};

#define Platform_Flash_Controller (*(volatile struct Platform_Flash_Controller_tag *) 0xffe8801c)

struct RGM_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t F_JTAG:1;
      uint64_t F_CORE:1;
      uint64_t F_SOFT:1;
      uint64_t F_CHKSTOP:1;
      uint64_t F_FMPLL:1;
      uint64_t F_CMU_OLR:1;
      uint64_t F_CMU_FHL:1;
      uint64_t F_LVD45:1;
      uint64_t F_FLASH:1;
      uint64_t reservedSpace0:6;
      uint64_t F_EXR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RGM_FES;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t F_LVD12_PD0:1;
      uint64_t F_LVD12_PD1:1;
      uint64_t F_SWT:1;
      uint64_t F_LVD27:1;
      uint64_t F_LVD27_VREG:1;
      uint64_t reservedSpace0:10;
      uint64_t F_POR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RGM_DES;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t D_JTAG:1;
      uint64_t D_CORE:1;
      uint64_t D_SOFT:1;
      uint64_t D_CHKSTOP:1;
      uint64_t D_FMPLL:1;
      uint64_t D_CMU_OLR:1;
      uint64_t D_CMU_FHL:1;
      uint64_t D_LVD45:1;
      uint64_t D_FLASH:1;
      uint64_t reservedSpace0:6;
      uint64_t D_EXR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RGM_FERD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t D_LVD12_PD0:1;
      uint64_t D_LVD12_PD1:1;
      uint64_t D_SWT:1;
      uint64_t D_LVD27:1;
      uint64_t D_LVD27_VREG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RGM_DERD;

  uint8_t res0[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AR_JTAG:1;
      uint64_t AR_CORE:1;
      uint64_t AR_SOFT:1;
      uint64_t AR_CHKSTOP:1;
      uint64_t AR_FMPLL:1;
      uint64_t AR_CMU_OLR:1;
      uint64_t AR_CMU_FHL:1;
      uint64_t AR_LVD45:1;
      uint64_t AR_FLASH:1;
      uint64_t reservedSpace0:6;
      uint64_t AR_EXR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RGM_FEAR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AR_LVD12_PD0:1;
      uint64_t AR_LVD12_PD1:1;
      uint64_t AR_SWT:1;
      uint64_t AR_LVD27:1;
      uint64_t AR_LVD27_VREG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RGM_DEAR;

  uint8_t res1[4];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SS_JTAG:1;
      uint64_t SS_CORE:1;
      uint64_t SS_SOFT:1;
      uint64_t SS_CHKSTOP:1;
      uint64_t SS_FMPLL:1;
      uint64_t SS_CMU_OLR:1;
      uint64_t SS_CMU_FHL:1;
      uint64_t SS_LVD45:1;
      uint64_t SS_FLASH:1;
      uint64_t reservedSpace0:6;
      uint64_t SS_EXR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RGM_FESS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t BOOT_FROM_BKP_RAM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RGM_STDBY;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BE_JTAG:1;
      uint64_t BE_CORE:1;
      uint64_t BE_SOFT:1;
      uint64_t BE_CHKSTOP:1;
      uint64_t BE_FMPLL:1;
      uint64_t BE_CMU_OLR:1;
      uint64_t BE_CMU_FHL:1;
      uint64_t BE_LVD45:1;
      uint64_t BE_FLASH:1;
      uint64_t reservedSpace0:6;
      uint64_t BE_EXR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RGM_FBRE;

};

#define RGM (*(volatile struct RGM_tag *) 0xc3fe4000)

struct CGM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CGM_OC_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SELCTL:4;
      uint64_t SELDIV:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CGM_OCDS_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SELSTAT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CGM_SC_SS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DIV0:4;
      uint64_t reservedSpace0:3;
      uint64_t DE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CGM_SC_DC0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DIV1:4;
      uint64_t reservedSpace0:3;
      uint64_t DE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CGM_SC_DC1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DIV2:4;
      uint64_t reservedSpace0:3;
      uint64_t DE2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CGM_SC_DC2;

};

#define CGM (*(volatile struct CGM_tag *) 0xc3fe0370)

struct FXOSC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t I_OSC:1;
      uint64_t OSCDIV:5;
      uint64_t reservedSpace1:2;
      uint64_t M_OSC:1;
      uint64_t EOCV:8;
      uint64_t reservedSpace2:7;
      uint64_t OSCBYP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FXOSC_CTL;

};

#define FXOSC (*(volatile struct FXOSC_tag *) 0xc3fe0000)

struct SXOSC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSCON:1;
      uint64_t S_OSC:1;
      uint64_t reservedSpace0:5;
      uint64_t I_OSC:1;
      uint64_t OSCDIV:5;
      uint64_t reservedSpace1:2;
      uint64_t M_OSC:1;
      uint64_t EOCV:8;
      uint64_t reservedSpace2:7;
      uint64_t OSCBYP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SXOSC_CTL;

};

#define SXOSC (*(volatile struct SXOSC_tag *) 0xc3fe0040)

struct SIRC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPRCON_STDBY:1;
      uint64_t reservedSpace0:3;
      uint64_t S_LPRC:1;
      uint64_t reservedSpace1:3;
      uint64_t LPRCDIV:5;
      uint64_t reservedSpace2:3;
      uint64_t LPRCTRIM:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPRC_CTL;

};

#define SIRC (*(volatile struct SIRC_tag *) 0xc3fe0080)

struct FIRC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t RCDIV:5;
      uint64_t reservedSpace1:3;
      uint64_t RCTRIM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RC_CTL;

};

#define FIRC (*(volatile struct FIRC_tag *) 0xc3fe0060)

struct FMPLL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PLL_FAIL_FLAG:1;
      uint64_t PLL_FAIL_MASK:1;
      uint64_t S_LOCK:1;
      uint64_t I_LOCK:1;
      uint64_t reservedSpace1:1;
      uint64_t UNLOCK_ONCE:1;
      uint64_t MODE_bitfield:1;
      uint64_t EN_PLL_SW:1;
      uint64_t reservedSpace2:7;
      uint64_t NDIV:7;
      uint64_t reservedSpace3:1;
      uint64_t ODF:2;
      uint64_t IDF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INC_STEP:15;
      uint64_t FM_EN:1;
      uint64_t MOD_PERIOD:13;
      uint64_t SPRD_SEL:1;
      uint64_t reservedSpace0:1;
      uint64_t STRB_BYPASS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

};

#define FMPLL (*(volatile struct FMPLL_tag *) 0xc3fe00a0)

struct CMU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CME_A:1;
      uint64_t RCDIV:2;
      uint64_t reservedSpace0:5;
      uint64_t CKSEL:2;
      uint64_t reservedSpace1:13;
      uint64_t SFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMU_CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMU_FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMU_HFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMU_LFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLRI:1;
      uint64_t FLLI:1;
      uint64_t FHHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMU_ISR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMU_MDR;

};

#define CMU (*(volatile struct CMU_tag *) 0xc3fe0100)

struct MODE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t S_SYSCLK:4;
      uint64_t S_16MHz_IRC:1;
      uint64_t S_XOSC0:1;
      uint64_t S_PLL0:1;
      uint64_t reservedSpace0:9;
      uint64_t S_CFLA:2;
      uint64_t S_DFLA:2;
      uint64_t S_MVR:1;
      uint64_t reservedSpace1:5;
      uint64_t S_DC:1;
      uint64_t S_MTRANS:1;
      uint64_t S_CURRENT_MODE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_GS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:16;
      uint64_t reservedSpace0:12;
      uint64_t TARGET_MODE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_MCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t TEST:1;
      uint64_t SAFE:1;
      uint64_t DRUN:1;
      uint64_t RUN0:1;
      uint64_t RUN1:1;
      uint64_t RUN2:1;
      uint64_t RUN3:1;
      uint64_t HALT0:1;
      uint64_t reservedSpace0:1;
      uint64_t STOP0:1;
      uint64_t reservedSpace1:2;
      uint64_t STANDBY0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_ME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I_MTC:1;
      uint64_t I_SAFE:1;
      uint64_t I_IMODE:1;
      uint64_t I_ICONF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_IS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M_MTC:1;
      uint64_t M_SAFE:1;
      uint64_t M_IMODE:1;
      uint64_t M_ICONF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S_SEA:1;
      uint64_t S_NMA:1;
      uint64_t S_DMA:1;
      uint64_t S_MRI:1;
      uint64_t S_MTI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_IMTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDP_PRPH_0_31:1;
      uint64_t CDP_PRPH_32_63:1;
      uint64_t CDP_PRPH_64_95:1;
      uint64_t CDP_PRPH_96_127:1;
      uint64_t reservedSpace0:3;
      uint64_t CDP_PRPH_0_143:1;
      uint64_t CFLASH_SC:1;
      uint64_t DFLASH_SC:1;
      uint64_t SYSCLK_SW:1;
      uint64_t reservedSpace1:1;
      uint64_t FIRC_SC:1;
      uint64_t FXOSC_SC:1;
      uint64_t FMPLL_SC:1;
      uint64_t reservedSpace2:1;
      uint64_t SMR:1;
      uint64_t reservedSpace3:2;
      uint64_t CORE_DBG:1;
      uint64_t PMC_PROG:1;
      uint64_t reservedSpace4:2;
      uint64_t MPH_BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_DMTS;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLK:4;
      uint64_t MHz_IRCON:1;
      uint64_t XOSC0ON:1;
      uint64_t PLL0ON:1;
      uint64_t reservedSpace0:9;
      uint64_t CFLAON:2;
      uint64_t DFLAON:2;
      uint64_t MVRON:1;
      uint64_t reservedSpace1:2;
      uint64_t PDO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_RESET_MC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLK:4;
      uint64_t MHz_IRCON:1;
      uint64_t XOSC0ON:1;
      uint64_t PLL0ON:1;
      uint64_t reservedSpace0:9;
      uint64_t CFLAON:2;
      uint64_t DFLAON:2;
      uint64_t MVRON:1;
      uint64_t reservedSpace1:2;
      uint64_t PDO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_TEST_MC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLK:4;
      uint64_t MHz_IRCON:1;
      uint64_t XOSC0ON:1;
      uint64_t PLL0ON:1;
      uint64_t reservedSpace0:9;
      uint64_t CFLAON:2;
      uint64_t DFLAON:2;
      uint64_t MVRON:1;
      uint64_t reservedSpace1:2;
      uint64_t PDO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_SAFE_MC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLK:4;
      uint64_t MHz_IRCON:1;
      uint64_t XOSC0ON:1;
      uint64_t PLL0ON:1;
      uint64_t reservedSpace0:9;
      uint64_t CFLAON:2;
      uint64_t DFLAON:2;
      uint64_t MVRON:1;
      uint64_t reservedSpace1:2;
      uint64_t PDO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_DRUN_MC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLK:4;
      uint64_t MHz_IRCON:1;
      uint64_t XOSC0ON:1;
      uint64_t PLL0ON:1;
      uint64_t reservedSpace0:9;
      uint64_t CFLAON:2;
      uint64_t DFLAON:2;
      uint64_t MVRON:1;
      uint64_t reservedSpace1:2;
      uint64_t PDO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_RUN0_MC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLK:4;
      uint64_t MHz_IRCON:1;
      uint64_t XOSC0ON:1;
      uint64_t PLL0ON:1;
      uint64_t reservedSpace0:9;
      uint64_t CFLAON:2;
      uint64_t DFLAON:2;
      uint64_t MVRON:1;
      uint64_t reservedSpace1:2;
      uint64_t PDO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_RUN1_MC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLK:4;
      uint64_t MHz_IRCON:1;
      uint64_t XOSC0ON:1;
      uint64_t PLL0ON:1;
      uint64_t reservedSpace0:9;
      uint64_t CFLAON:2;
      uint64_t DFLAON:2;
      uint64_t MVRON:1;
      uint64_t reservedSpace1:2;
      uint64_t PDO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_RUN2_MC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLK:4;
      uint64_t MHz_IRCON:1;
      uint64_t XOSC0ON:1;
      uint64_t PLL0ON:1;
      uint64_t reservedSpace0:9;
      uint64_t CFLAON:2;
      uint64_t DFLAON:2;
      uint64_t MVRON:1;
      uint64_t reservedSpace1:2;
      uint64_t PDO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_RUN3_MC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLK:4;
      uint64_t MHz_IRCON:1;
      uint64_t XOSC0ON:1;
      uint64_t PLL0ON:1;
      uint64_t reservedSpace0:9;
      uint64_t CFLAON:2;
      uint64_t DFLAON:2;
      uint64_t MVRON:1;
      uint64_t reservedSpace1:2;
      uint64_t PDO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_HALT0_MC;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLK:4;
      uint64_t MHz_IRCON:1;
      uint64_t XOSC0ON:1;
      uint64_t PLL0ON:1;
      uint64_t reservedSpace0:9;
      uint64_t CFLAON:2;
      uint64_t DFLAON:2;
      uint64_t MVRON:1;
      uint64_t reservedSpace1:2;
      uint64_t PDO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_STOP0_MC;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLK:4;
      uint64_t MHz_IRCON:1;
      uint64_t XOSC0ON:1;
      uint64_t PLL0ON:1;
      uint64_t reservedSpace0:9;
      uint64_t CFLAON:2;
      uint64_t DFLAON:2;
      uint64_t MVRON:1;
      uint64_t reservedSpace1:2;
      uint64_t PDO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_STANDBY0_MC;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t S_DSPI02:3;
      uint64_t reservedSpace1:9;
      uint64_t S_FlexCAN05:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_PS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S_ADC0:1;
      uint64_t reservedSpace0:11;
      uint64_t S_I2C_DMA0:1;
      uint64_t reservedSpace1:3;
      uint64_t S_LIN_FLEX03:4;
      uint64_t reservedSpace2:5;
      uint64_t S_CTUL:1;
      uint64_t reservedSpace3:2;
      uint64_t S_CANSampler_Peripheral_status:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_PS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t S_SIUL:1;
      uint64_t S_WKPU:1;
      uint64_t reservedSpace1:2;
      uint64_t S_eMIOS01:2;
      uint64_t reservedSpace2:17;
      uint64_t S_RTC_API:1;
      uint64_t S_PIT_RTI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_PS2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t S_CMU0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_PS3;

  uint8_t res4[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t TEST:1;
      uint64_t SAFE:1;
      uint64_t DRUN:1;
      uint64_t RUN0:1;
      uint64_t RUN1:1;
      uint64_t RUN2:1;
      uint64_t RUN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_RUN_PC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t TEST:1;
      uint64_t SAFE:1;
      uint64_t DRUN:1;
      uint64_t RUN0:1;
      uint64_t RUN1:1;
      uint64_t RUN2:1;
      uint64_t RUN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_RUN_PC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t TEST:1;
      uint64_t SAFE:1;
      uint64_t DRUN:1;
      uint64_t RUN0:1;
      uint64_t RUN1:1;
      uint64_t RUN2:1;
      uint64_t RUN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_RUN_PC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t TEST:1;
      uint64_t SAFE:1;
      uint64_t DRUN:1;
      uint64_t RUN0:1;
      uint64_t RUN1:1;
      uint64_t RUN2:1;
      uint64_t RUN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_RUN_PC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t TEST:1;
      uint64_t SAFE:1;
      uint64_t DRUN:1;
      uint64_t RUN0:1;
      uint64_t RUN1:1;
      uint64_t RUN2:1;
      uint64_t RUN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_RUN_PC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t TEST:1;
      uint64_t SAFE:1;
      uint64_t DRUN:1;
      uint64_t RUN0:1;
      uint64_t RUN1:1;
      uint64_t RUN2:1;
      uint64_t RUN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_RUN_PC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t TEST:1;
      uint64_t SAFE:1;
      uint64_t DRUN:1;
      uint64_t RUN0:1;
      uint64_t RUN1:1;
      uint64_t RUN2:1;
      uint64_t RUN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_RUN_PC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t TEST:1;
      uint64_t SAFE:1;
      uint64_t DRUN:1;
      uint64_t RUN0:1;
      uint64_t RUN1:1;
      uint64_t RUN2:1;
      uint64_t RUN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_RUN_PC7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HALT0:1;
      uint64_t reservedSpace1:1;
      uint64_t STOP0:1;
      uint64_t reservedSpace2:2;
      uint64_t STANDBY0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_LP_PC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HALT0:1;
      uint64_t reservedSpace1:1;
      uint64_t STOP0:1;
      uint64_t reservedSpace2:2;
      uint64_t STANDBY0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_LP_PC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HALT0:1;
      uint64_t reservedSpace1:1;
      uint64_t STOP0:1;
      uint64_t reservedSpace2:2;
      uint64_t STANDBY0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_LP_PC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HALT0:1;
      uint64_t reservedSpace1:1;
      uint64_t STOP0:1;
      uint64_t reservedSpace2:2;
      uint64_t STANDBY0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_LP_PC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HALT0:1;
      uint64_t reservedSpace1:1;
      uint64_t STOP0:1;
      uint64_t reservedSpace2:2;
      uint64_t STANDBY0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_LP_PC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HALT0:1;
      uint64_t reservedSpace1:1;
      uint64_t STOP0:1;
      uint64_t reservedSpace2:2;
      uint64_t STANDBY0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_LP_PC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HALT0:1;
      uint64_t reservedSpace1:1;
      uint64_t STOP0:1;
      uint64_t reservedSpace2:2;
      uint64_t STANDBY0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_LP_PC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HALT0:1;
      uint64_t reservedSpace1:1;
      uint64_t STOP0:1;
      uint64_t reservedSpace2:2;
      uint64_t STANDBY0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME_LP_PC7;

  uint8_t res5[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ME_PCTL4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ME_PCTL5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ME_PCTL6;

  uint8_t res6[9];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ME_PCTL16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ME_PCTL17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ME_PCTL18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ME_PCTL19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ME_PCTL20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ME_PCTL21;

  uint8_t res7[10];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ME_PCTL32;

  uint8_t res8[11];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ME_PCTL44;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ME_PCTL48;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ME_PCTL49;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ME_PCTL50;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ME_PCTL51;

  uint8_t res10[5];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ME_PCTL57;

  uint8_t res11[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ME_PCTL60;

  uint8_t res12[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ME_PCTL68;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ME_PCTL69;

  uint8_t res13[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ME_PCTL72;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ME_PCTL73;

  uint8_t res14[17];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ME_PCTL91;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ME_PCTL92;

  uint8_t res15[11];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ME_PCTL104;

};

#define MODE (*(volatile struct MODE_tag *) 0xc3fdc000)

struct DMA_MUX_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCONFIG0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCONFIG1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCONFIG2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCONFIG3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCONFIG4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCONFIG5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCONFIG6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCONFIG7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCONFIG8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCONFIG9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCONFIG10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCONFIG11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCONFIG12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCONFIG13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCONFIG14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCONFIG15;

};

#define DMA_MUX (*(volatile struct DMA_MUX_tag *) 0xfffdc000)

struct XBAR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTR_0:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTR_1:3;
      uint64_t reservedSpace1:1;
      uint64_t MSTR_2:3;
      uint64_t reservedSpace2:1;
      uint64_t MSTR_3:3;
      uint64_t reservedSpace3:1;
      uint64_t MSTR_4:3;
      uint64_t reservedSpace4:1;
      uint64_t MSTR_5:3;
      uint64_t reservedSpace5:1;
      uint64_t MSTR_6:3;
      uint64_t reservedSpace6:1;
      uint64_t MSTR_7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_MPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTR_0:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTR_1:3;
      uint64_t reservedSpace1:1;
      uint64_t MSTR_2:3;
      uint64_t reservedSpace2:1;
      uint64_t MSTR_3:3;
      uint64_t reservedSpace3:1;
      uint64_t MSTR_4:3;
      uint64_t reservedSpace4:1;
      uint64_t MSTR_5:3;
      uint64_t reservedSpace5:1;
      uint64_t MSTR_6:3;
      uint64_t reservedSpace6:1;
      uint64_t MSTR_7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_AMPR0;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE:8;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_SGPCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE:8;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ASGPCR0;

  uint8_t res1[232];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTR_0:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTR_1:3;
      uint64_t reservedSpace1:1;
      uint64_t MSTR_2:3;
      uint64_t reservedSpace2:1;
      uint64_t MSTR_3:3;
      uint64_t reservedSpace3:1;
      uint64_t MSTR_4:3;
      uint64_t reservedSpace4:1;
      uint64_t MSTR_5:3;
      uint64_t reservedSpace5:1;
      uint64_t MSTR_6:3;
      uint64_t reservedSpace6:1;
      uint64_t MSTR_7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_MPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTR_0:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTR_1:3;
      uint64_t reservedSpace1:1;
      uint64_t MSTR_2:3;
      uint64_t reservedSpace2:1;
      uint64_t MSTR_3:3;
      uint64_t reservedSpace3:1;
      uint64_t MSTR_4:3;
      uint64_t reservedSpace4:1;
      uint64_t MSTR_5:3;
      uint64_t reservedSpace5:1;
      uint64_t MSTR_6:3;
      uint64_t reservedSpace6:1;
      uint64_t MSTR_7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_AMPR1;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE:8;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_SGPCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE:8;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ASGPCR1;

  uint8_t res3[232];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTR_0:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTR_1:3;
      uint64_t reservedSpace1:1;
      uint64_t MSTR_2:3;
      uint64_t reservedSpace2:1;
      uint64_t MSTR_3:3;
      uint64_t reservedSpace3:1;
      uint64_t MSTR_4:3;
      uint64_t reservedSpace4:1;
      uint64_t MSTR_5:3;
      uint64_t reservedSpace5:1;
      uint64_t MSTR_6:3;
      uint64_t reservedSpace6:1;
      uint64_t MSTR_7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_MPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTR_0:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTR_1:3;
      uint64_t reservedSpace1:1;
      uint64_t MSTR_2:3;
      uint64_t reservedSpace2:1;
      uint64_t MSTR_3:3;
      uint64_t reservedSpace3:1;
      uint64_t MSTR_4:3;
      uint64_t reservedSpace4:1;
      uint64_t MSTR_5:3;
      uint64_t reservedSpace5:1;
      uint64_t MSTR_6:3;
      uint64_t reservedSpace6:1;
      uint64_t MSTR_7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_AMPR2;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE:8;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_SGPCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE:8;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ASGPCR2;

  uint8_t res5[232];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTR_0:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTR_1:3;
      uint64_t reservedSpace1:1;
      uint64_t MSTR_2:3;
      uint64_t reservedSpace2:1;
      uint64_t MSTR_3:3;
      uint64_t reservedSpace3:1;
      uint64_t MSTR_4:3;
      uint64_t reservedSpace4:1;
      uint64_t MSTR_5:3;
      uint64_t reservedSpace5:1;
      uint64_t MSTR_6:3;
      uint64_t reservedSpace6:1;
      uint64_t MSTR_7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_MPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTR_0:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTR_1:3;
      uint64_t reservedSpace1:1;
      uint64_t MSTR_2:3;
      uint64_t reservedSpace2:1;
      uint64_t MSTR_3:3;
      uint64_t reservedSpace3:1;
      uint64_t MSTR_4:3;
      uint64_t reservedSpace4:1;
      uint64_t MSTR_5:3;
      uint64_t reservedSpace5:1;
      uint64_t MSTR_6:3;
      uint64_t reservedSpace6:1;
      uint64_t MSTR_7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_AMPR3;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE:8;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_SGPCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE:8;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ASGPCR3;

  uint8_t res7[232];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTR_0:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTR_1:3;
      uint64_t reservedSpace1:1;
      uint64_t MSTR_2:3;
      uint64_t reservedSpace2:1;
      uint64_t MSTR_3:3;
      uint64_t reservedSpace3:1;
      uint64_t MSTR_4:3;
      uint64_t reservedSpace4:1;
      uint64_t MSTR_5:3;
      uint64_t reservedSpace5:1;
      uint64_t MSTR_6:3;
      uint64_t reservedSpace6:1;
      uint64_t MSTR_7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_MPR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTR_0:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTR_1:3;
      uint64_t reservedSpace1:1;
      uint64_t MSTR_2:3;
      uint64_t reservedSpace2:1;
      uint64_t MSTR_3:3;
      uint64_t reservedSpace3:1;
      uint64_t MSTR_4:3;
      uint64_t reservedSpace4:1;
      uint64_t MSTR_5:3;
      uint64_t reservedSpace5:1;
      uint64_t MSTR_6:3;
      uint64_t reservedSpace6:1;
      uint64_t MSTR_7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_AMPR4;

  uint8_t res8[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE:8;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_SGPCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE:8;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ASGPCR4;

  uint8_t res9[232];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTR_0:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTR_1:3;
      uint64_t reservedSpace1:1;
      uint64_t MSTR_2:3;
      uint64_t reservedSpace2:1;
      uint64_t MSTR_3:3;
      uint64_t reservedSpace3:1;
      uint64_t MSTR_4:3;
      uint64_t reservedSpace4:1;
      uint64_t MSTR_5:3;
      uint64_t reservedSpace5:1;
      uint64_t MSTR_6:3;
      uint64_t reservedSpace6:1;
      uint64_t MSTR_7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_MPR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTR_0:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTR_1:3;
      uint64_t reservedSpace1:1;
      uint64_t MSTR_2:3;
      uint64_t reservedSpace2:1;
      uint64_t MSTR_3:3;
      uint64_t reservedSpace3:1;
      uint64_t MSTR_4:3;
      uint64_t reservedSpace4:1;
      uint64_t MSTR_5:3;
      uint64_t reservedSpace5:1;
      uint64_t MSTR_6:3;
      uint64_t reservedSpace6:1;
      uint64_t MSTR_7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_AMPR5;

  uint8_t res10[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE:8;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_SGPCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE:8;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ASGPCR5;

  uint8_t res11[232];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTR_0:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTR_1:3;
      uint64_t reservedSpace1:1;
      uint64_t MSTR_2:3;
      uint64_t reservedSpace2:1;
      uint64_t MSTR_3:3;
      uint64_t reservedSpace3:1;
      uint64_t MSTR_4:3;
      uint64_t reservedSpace4:1;
      uint64_t MSTR_5:3;
      uint64_t reservedSpace5:1;
      uint64_t MSTR_6:3;
      uint64_t reservedSpace6:1;
      uint64_t MSTR_7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_MPR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTR_0:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTR_1:3;
      uint64_t reservedSpace1:1;
      uint64_t MSTR_2:3;
      uint64_t reservedSpace2:1;
      uint64_t MSTR_3:3;
      uint64_t reservedSpace3:1;
      uint64_t MSTR_4:3;
      uint64_t reservedSpace4:1;
      uint64_t MSTR_5:3;
      uint64_t reservedSpace5:1;
      uint64_t MSTR_6:3;
      uint64_t reservedSpace6:1;
      uint64_t MSTR_7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_AMPR6;

  uint8_t res12[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE:8;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_SGPCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE:8;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ASGPCR6;

  uint8_t res13[232];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTR_0:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTR_1:3;
      uint64_t reservedSpace1:1;
      uint64_t MSTR_2:3;
      uint64_t reservedSpace2:1;
      uint64_t MSTR_3:3;
      uint64_t reservedSpace3:1;
      uint64_t MSTR_4:3;
      uint64_t reservedSpace4:1;
      uint64_t MSTR_5:3;
      uint64_t reservedSpace5:1;
      uint64_t MSTR_6:3;
      uint64_t reservedSpace6:1;
      uint64_t MSTR_7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_MPR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTR_0:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTR_1:3;
      uint64_t reservedSpace1:1;
      uint64_t MSTR_2:3;
      uint64_t reservedSpace2:1;
      uint64_t MSTR_3:3;
      uint64_t reservedSpace3:1;
      uint64_t MSTR_4:3;
      uint64_t reservedSpace4:1;
      uint64_t MSTR_5:3;
      uint64_t reservedSpace5:1;
      uint64_t MSTR_6:3;
      uint64_t reservedSpace6:1;
      uint64_t MSTR_7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_AMPR7;

  uint8_t res14[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE:8;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_SGPCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE:8;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ASGPCR7;

  uint8_t res15[232];

  uint32_t XBAR_MGPCR0;
  uint8_t res16[252];

  uint32_t XBAR_MGPCR1;
  uint8_t res17[252];

  uint32_t XBAR_MGPCR2;
  uint8_t res18[252];

  uint32_t XBAR_MGPCR3;
  uint8_t res19[252];

  uint32_t XBAR_MGPCR4;
  uint8_t res20[252];

  uint32_t XBAR_MGPCR5;
  uint8_t res21[252];

  uint32_t XBAR_MGPCR6;
  uint8_t res22[252];

  uint32_t XBAR_MGPCR7;
};

#define XBAR (*(volatile struct XBAR_tag *) 0xfff04000)

struct MPU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:7;
      uint64_t NRGD:4;
      uint64_t NSP:4;
      uint64_t HRL:4;
      uint64_t reservedSpace1:4;
      uint64_t SPERR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_CESR;

  uint8_t res0[12];

  uint32_t MPU_EAR0;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERW:1;
      uint64_t EATTR:3;
      uint64_t EMN:4;
      uint64_t EPID:8;
      uint64_t EACD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_EDR0;

  uint32_t MPU_EAR1;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERW:1;
      uint64_t EATTR:3;
      uint64_t EMN:4;
      uint64_t EPID:8;
      uint64_t EACD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_EDR1;

  uint32_t MPU_EAR2;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERW:1;
      uint64_t EATTR:3;
      uint64_t EMN:4;
      uint64_t EPID:8;
      uint64_t EACD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_EDR2;

  uint8_t res1[984];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD0_W0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD0_W1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t M2PE:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t M3PE:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD0_W2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD0_W3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD1_W0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD1_W1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t M2PE:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t M3PE:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD1_W2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD1_W3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD2_W0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD2_W1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t M2PE:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t M3PE:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD2_W2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD2_W3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD3_W0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD3_W1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t M2PE:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t M3PE:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD3_W2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD3_W3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD4_W0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD4_W1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t M2PE:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t M3PE:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD4_W2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD4_W3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD5_W0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD5_W1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t M2PE:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t M3PE:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD5_W2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD5_W3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD6_W0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD6_W1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t M2PE:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t M3PE:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD6_W2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD6_W3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD7_W0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD7_W1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t M2PE:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t M3PE:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD7_W2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGD7_W3;

  uint8_t res2[896];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t M2PE:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t M3PE:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGDAAC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t M2PE:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t M3PE:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGDAAC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t M2PE:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t M3PE:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGDAAC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t M2PE:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t M3PE:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGDAAC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t M2PE:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t M3PE:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGDAAC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t M2PE:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t M3PE:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGDAAC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t M2PE:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t M3PE:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGDAAC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t M2PE:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t M3PE:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RGDAAC7;

};

#define MPU (*(volatile struct MPU_tag *) 0xfff10000)

struct INTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HVEN:1;
      uint64_t reservedSpace0:4;
      uint64_t VTES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_MCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_CPR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t INTVEC:9;
      uint64_t VTBA:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_IACKR;

  uint8_t res2[4];

  uint32_t INTC_EOIR;
  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR3:1;
      uint64_t SET3:1;
      uint64_t reservedSpace0:6;
      uint64_t CLR2:1;
      uint64_t SET2:1;
      uint64_t reservedSpace1:6;
      uint64_t CLR1:1;
      uint64_t SET1:1;
      uint64_t reservedSpace2:6;
      uint64_t CLR0:1;
      uint64_t SET0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_SSCIR0_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR7:1;
      uint64_t SET7:1;
      uint64_t reservedSpace0:6;
      uint64_t CLR6:1;
      uint64_t SET6:1;
      uint64_t reservedSpace1:6;
      uint64_t CLR5:1;
      uint64_t SET5:1;
      uint64_t reservedSpace2:6;
      uint64_t CLR4:1;
      uint64_t SET4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_SSCIR4_7;

  uint8_t res4[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI3:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI2:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI1:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI0:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR0_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI7:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI6:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI5:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI4:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR4_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI11:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI10:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI9:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI8:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR8_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI15:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI14:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI13:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI12:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR12_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI19:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI18:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI17:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI16:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR16_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI23:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI22:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI21:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI20:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR20_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI27:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI26:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI25:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI24:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR24_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI31:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI30:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI29:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI28:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR28_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI35:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI34:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI33:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI32:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR32_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI39:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI38:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI37:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI36:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR36_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI43:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI42:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI41:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI40:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR40_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI47:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI46:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI45:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI44:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR44_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI51:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI50:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI49:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI48:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR48_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI55:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI54:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI53:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI52:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR52_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI59:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI58:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI57:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI56:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR56_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI63:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI62:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI61:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI60:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR60_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI67:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI66:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI65:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI64:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR64_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI71:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI70:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI69:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI68:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR68_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI75:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI74:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI73:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI72:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR72_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI79:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI78:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI77:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI76:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR76_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI83:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI82:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI81:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI80:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR80_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI87:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI86:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI85:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI84:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR84_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI91:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI90:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI89:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI88:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR88_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI95:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI94:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI93:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI92:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR92_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI99:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI98:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI97:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI96:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR96_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI103:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI102:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI101:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI100:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR100_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI107:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI106:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI105:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI104:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR104_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI111:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI110:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI109:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI108:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR108_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI115:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI114:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI113:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI112:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR112_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI119:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI118:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI117:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI116:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR116_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI123:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI122:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI121:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI120:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR120_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI127:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI126:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI125:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI124:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR124_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI131:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI130:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI129:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI128:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR128_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI135:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI134:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI133:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI132:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR132_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI139:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI138:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI137:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI136:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR136_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI143:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI142:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI141:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI140:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR140_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI147:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI146:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI145:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI144:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR144_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI151:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI150:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI149:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI148:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR148_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI155:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI154:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI153:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI152:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR152_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI159:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI158:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI157:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI156:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR156_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI163:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI162:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI161:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI160:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR160_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI167:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI166:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI165:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI164:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR164_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI171:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI170:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI169:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI168:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR168_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI175:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI174:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI173:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI172:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR172_175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI179:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI178:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI177:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI176:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR176_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI183:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI182:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI181:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI180:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR180_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI187:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI186:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI185:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI184:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR184_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI191:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI190:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI189:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI188:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR188_191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI195:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI194:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI193:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI192:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR192_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI199:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI198:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI197:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI196:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR196_199;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI203:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI202:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI201:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI200:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR200_203;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI207:4;
      uint64_t reservedSpace0:4;
      uint64_t PRI206:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI205:4;
      uint64_t reservedSpace2:4;
      uint64_t PRI204:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR204_207;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t PRI209:4;
      uint64_t reservedSpace1:4;
      uint64_t PRI208:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR208_209;

};

#define INTC (*(volatile struct INTC_tag *) 0xfff48000)

struct SIUL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR_MASK:4;
      uint64_t MAJOR_MASK:4;
      uint64_t reservedSpace0:2;
      uint64_t PKG:5;
      uint64_t CSP:1;
      uint64_t PARTNUM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t EE:1;
      uint64_t reservedSpace1:3;
      uint64_t PARTNUM:8;
      uint64_t reservedSpace2:7;
      uint64_t FLASH_SIZE_2:4;
      uint64_t FLASH_SIZE_1:4;
      uint64_t SF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIDR2;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRE:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRER;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IREE:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IREER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFEE:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFEER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFE:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFER;

  uint8_t res2[12];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR39;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR40;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR41;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR42;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR43;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR44;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR45;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR46;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR47;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR48;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR49;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR50;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR51;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR52;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR53;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR54;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR55;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR56;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR57;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR58;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR59;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR60;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR61;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR62;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR63;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR64;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR65;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR66;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR67;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR68;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR69;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR70;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR71;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR72;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR73;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR74;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR75;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR76;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR77;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR78;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR79;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR80;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR81;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR82;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR83;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR84;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR85;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR86;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR87;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR88;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR89;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR90;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR91;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR92;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR93;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR94;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR95;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR96;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR97;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR98;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR99;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR100;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR101;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR102;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR103;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR104;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR105;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR106;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR107;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR108;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR109;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR110;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR111;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR112;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR113;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR114;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR115;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR116;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR117;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR118;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR119;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR120;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR121;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR122;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR123;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR124;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR125;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR126;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR127;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR128;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR129;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR130;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR131;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR132;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR133;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR134;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR135;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR136;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR137;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR138;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR139;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR140;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR141;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR142;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR143;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR144;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR145;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR146;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR147;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR148;

  uint8_t res3[918];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADSEL3:4;
      uint64_t reservedSpace0:4;
      uint64_t PADSEL2:4;
      uint64_t reservedSpace1:4;
      uint64_t PADSEL1:4;
      uint64_t reservedSpace2:4;
      uint64_t PADSEL0:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSMI0_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADSEL7:4;
      uint64_t reservedSpace0:4;
      uint64_t PADSEL6:4;
      uint64_t reservedSpace1:4;
      uint64_t PADSEL5:4;
      uint64_t reservedSpace2:4;
      uint64_t PADSEL4:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSMI4_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADSEL11:4;
      uint64_t reservedSpace0:4;
      uint64_t PADSEL10:4;
      uint64_t reservedSpace1:4;
      uint64_t PADSEL9:4;
      uint64_t reservedSpace2:4;
      uint64_t PADSEL8:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSMI8_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADSEL15:4;
      uint64_t reservedSpace0:4;
      uint64_t PADSEL14:4;
      uint64_t reservedSpace1:4;
      uint64_t PADSEL13:4;
      uint64_t reservedSpace2:4;
      uint64_t PADSEL12:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSMI12_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADSEL19:4;
      uint64_t reservedSpace0:4;
      uint64_t PADSEL18:4;
      uint64_t reservedSpace1:4;
      uint64_t PADSEL17:4;
      uint64_t reservedSpace2:4;
      uint64_t PADSEL16:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSMI16_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADSEL23:4;
      uint64_t reservedSpace0:4;
      uint64_t PADSEL22:4;
      uint64_t reservedSpace1:4;
      uint64_t PADSEL21:4;
      uint64_t reservedSpace2:4;
      uint64_t PADSEL20:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSMI20_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADSEL27:4;
      uint64_t reservedSpace0:4;
      uint64_t PADSEL26:4;
      uint64_t reservedSpace1:4;
      uint64_t PADSEL25:4;
      uint64_t reservedSpace2:4;
      uint64_t PADSEL24:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSMI24_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADSEL31:4;
      uint64_t reservedSpace0:4;
      uint64_t PADSEL30:4;
      uint64_t reservedSpace1:4;
      uint64_t PADSEL29:4;
      uint64_t reservedSpace2:4;
      uint64_t PADSEL28:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSMI28_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADSEL35:4;
      uint64_t reservedSpace0:4;
      uint64_t PADSEL34:4;
      uint64_t reservedSpace1:4;
      uint64_t PADSEL33:4;
      uint64_t reservedSpace2:4;
      uint64_t PADSEL32:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSMI32_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADSEL39:4;
      uint64_t reservedSpace0:4;
      uint64_t PADSEL38:4;
      uint64_t reservedSpace1:4;
      uint64_t PADSEL37:4;
      uint64_t reservedSpace2:4;
      uint64_t PADSEL36:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSMI36_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADSEL43:4;
      uint64_t reservedSpace0:4;
      uint64_t PADSEL42:4;
      uint64_t reservedSpace1:4;
      uint64_t PADSEL41:4;
      uint64_t reservedSpace2:4;
      uint64_t PADSEL40:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSMI40_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADSEL47:4;
      uint64_t reservedSpace0:4;
      uint64_t PADSEL46:4;
      uint64_t reservedSpace1:4;
      uint64_t PADSEL45:4;
      uint64_t reservedSpace2:4;
      uint64_t PADSEL44:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSMI44_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADSEL51:4;
      uint64_t reservedSpace0:4;
      uint64_t PADSEL50:4;
      uint64_t reservedSpace1:4;
      uint64_t PADSEL49:4;
      uint64_t reservedSpace2:4;
      uint64_t PADSEL48:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSMI48_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADSEL55:4;
      uint64_t reservedSpace0:4;
      uint64_t PADSEL54:4;
      uint64_t reservedSpace1:4;
      uint64_t PADSEL53:4;
      uint64_t reservedSpace2:4;
      uint64_t PADSEL52:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSMI52_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADSEL59:4;
      uint64_t reservedSpace0:4;
      uint64_t PADSEL58:4;
      uint64_t reservedSpace1:4;
      uint64_t PADSEL57:4;
      uint64_t reservedSpace2:4;
      uint64_t PADSEL56:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSMI56_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADSEL63:4;
      uint64_t reservedSpace0:4;
      uint64_t PADSEL62:4;
      uint64_t reservedSpace1:4;
      uint64_t PADSEL61:4;
      uint64_t reservedSpace2:4;
      uint64_t PADSEL60:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSMI60_63;

  uint8_t res4[192];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO0_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO7:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO6:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO5:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO4_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO11:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO10:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO9:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO8_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO15:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO14:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO13:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO12_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO19:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO18:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO17:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO16_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO23:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO22:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO21:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO20:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO20_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO27:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO26:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO25:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO24:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO24_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO31:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO30:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO29:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO28:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO28_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO35:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO34:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO33:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO32:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO32_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO39:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO38:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO37:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO36:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO36_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO43:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO42:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO41:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO40:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO40_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO47:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO46:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO45:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO44:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO44_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO51:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO50:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO49:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO48:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO48_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO55:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO54:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO53:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO52:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO52_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO59:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO58:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO57:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO56:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO56_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO63:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO62:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO61:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO60:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO60_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO67:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO66:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO65:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO64:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO64_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO71:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO70:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO69:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO68:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO68_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO75:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO74:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO73:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO72:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO72_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO79:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO78:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO77:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO76:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO76_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO83:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO82:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO81:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO80:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO80_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO87:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO86:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO85:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO84:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO84_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO91:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO90:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO89:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO88:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO88_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO95:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO94:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO93:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO92:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO92_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO99:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO98:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO97:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO96:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO96_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO103:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO102:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO101:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO100:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO100_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO107:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO106:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO105:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO104:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO104_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO111:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO110:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO109:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO108:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO108_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO115:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO114:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO113:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO112:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO112_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO119:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO118:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO117:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO116:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO116_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO123:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO122:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO121:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO120:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO120_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO127:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO126:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO125:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO124:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO124_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO131:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO130:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO129:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO128:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO128_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO135:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO134:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO133:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO132:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO132_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO139:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO138:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO137:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO136:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO136_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO143:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO142:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO141:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO140:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO140_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO147:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO146:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO145:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO144:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO144_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO151:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO150:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO149:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO148:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO148_151;

  uint8_t res5[360];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI0_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI7:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI6:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI5:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI4_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI11:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI10:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI9:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI8_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI15:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI14:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI13:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI12_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI19:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI18:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI17:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI16_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI23:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI22:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI21:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI20:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI20_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI27:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI26:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI25:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI24:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI24_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI31:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI30:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI29:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI28:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI28_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI35:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI34:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI33:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI32:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI32_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI39:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI38:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI37:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI36:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI36_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI43:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI42:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI41:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI40:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI40_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI47:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI46:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI45:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI44:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI44_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI51:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI50:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI49:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI48:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI48_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI55:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI54:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI53:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI52:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI52_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI59:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI58:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI57:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI56:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI56_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI63:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI62:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI61:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI60:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI60_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI67:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI66:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI65:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI64:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI64_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI71:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI70:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI69:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI68:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI68_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI75:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI74:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI73:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI72:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI72_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI79:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI78:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI77:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI76:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI76_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI83:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI82:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI81:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI80:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI80_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI87:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI86:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI85:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI84:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI84_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI91:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI90:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI89:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI88:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI88_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI95:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI94:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI93:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI92:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI92_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI99:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI98:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI97:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI96:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI96_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI103:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI102:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI101:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI100:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI100_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI107:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI106:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI105:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI104:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI104_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI111:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI110:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI109:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI108:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI108_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI115:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI114:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI113:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI112:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI112_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI119:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI118:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI117:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI116:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI116_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI123:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI122:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI121:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI120:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI120_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI127:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI126:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI125:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI124:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI124_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI131:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI130:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI129:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI128:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI128_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI135:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI134:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI133:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI132:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI132_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI139:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI138:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI137:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI136:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI136_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI143:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI142:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI141:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI140:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI140_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI147:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI146:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI145:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI144:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI144_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI151:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI150:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI149:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI148:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI148_151;

  uint8_t res6[872];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPDO1:16;
      uint64_t PPDO0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PGPDO0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPDO3:16;
      uint64_t PPDO2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PGPDO1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPDO5:16;
      uint64_t PPDO4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PGPDO2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPDO7:16;
      uint64_t PPDO6:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PGPDO3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPDO9:16;
      uint64_t PPDO8:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PGPDO4;

  uint8_t res7[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPDI1:16;
      uint64_t PPDI0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PGPDI0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPDI3:16;
      uint64_t PPDI2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PGPDI1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPDI5:16;
      uint64_t PPDI4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PGPDI2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPDI7:16;
      uint64_t PPDI6:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PGPDI3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPDI9:16;
      uint64_t PPDI8:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PGPDI4;

  uint8_t res8[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO0:16;
      uint64_t MASK0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO1:16;
      uint64_t MASK1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO2:16;
      uint64_t MASK2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO3:16;
      uint64_t MASK3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO4:16;
      uint64_t MASK4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO5:16;
      uint64_t MASK5:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO6:16;
      uint64_t MASK6:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO7:16;
      uint64_t MASK7:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO8:16;
      uint64_t MASK8:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO9:16;
      uint64_t MASK9:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO9;

  uint8_t res9[856];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT0:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT2:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT4:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT5:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT6:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMC7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT8:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMC8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT9:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMC9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT10:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMC10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT11:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMC11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT12:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMC12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT13:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMC13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT14:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMC14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMC15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT16:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMC16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT17:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMC17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT18:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMC18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT19:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMC19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT20:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMC20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT21:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMC21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT22:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMC22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT23:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMC23;

  uint8_t res10[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFCP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCPR;

};

#define SIUL (*(volatile struct SIUL_tag *) 0xc3f90004)

struct ECSM_tag
{
  uint16_t PCT;
  uint16_t REV;
  uint8_t res0[4];

  uint32_t IMC;
  uint8_t res1[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRILVL:4;
      uint64_t reservedSpace0:3;
      uint64_t ENBWCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MWCR;

  uint8_t res2[11];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t FB1SI:1;
      uint64_t FB1AI:1;
      uint64_t FB0SI:1;
      uint64_t FB0AI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MIR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUDCR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUDCR;

  uint8_t res4[27];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EFNCR:1;
      uint64_t ERNCR:1;
      uint64_t reservedSpace0:2;
      uint64_t EF1BR:1;
      uint64_t ER1BR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ECR;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FNCE:1;
      uint64_t RNCE:1;
      uint64_t reservedSpace0:2;
      uint64_t F1BC:1;
      uint64_t R1BC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ESR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ERRBIT:7;
      uint64_t reservedSpace0:1;
      uint64_t FR1NCI:1;
      uint64_t FRCNCI:1;
      uint64_t reservedSpace1:2;
      uint64_t FR11BI:1;
      uint64_t FRC1BI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EEGR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEAR;

  uint8_t res8[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FEMR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FEMR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROTECTION:4;
      uint64_t SIZE:3;
      uint64_t WRITE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FEAT;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REAR;

  uint8_t res10[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RESR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RESR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t REMR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) REMR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROTECTION:4;
      uint64_t SIZE:3;
      uint64_t WRITE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) REAT;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REDR;

};

#define ECSM (*(volatile struct ECSM_tag *) 0xfff40000)

struct STM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t FRZ:1;
      uint64_t reservedSpace0:6;
      uint64_t CPS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STM_CR;

  uint32_t STM_CNT;
  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STM_CCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STM_CIR0;

  uint32_t STM_CMP0;
  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STM_CCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STM_CIR1;

  uint32_t STM_CMP1;
  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STM_CCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STM_CIR2;

  uint32_t STM_CMP2;
  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STM_CCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STM_CIR3;

  uint32_t STM_CMP3;
};

#define STM (*(volatile struct STM_tag *) 0xfff3c000)

struct RTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t SUPV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCSUPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APIVAL_90:10;
      uint64_t DIV32EN:1;
      uint64_t DIV512EN:1;
      uint64_t CLKSEL_10:2;
      uint64_t APIIE:1;
      uint64_t APIEN:1;
      uint64_t RTCVAL_110:12;
      uint64_t ROVREN:1;
      uint64_t FRZEN:1;
      uint64_t RTCIE:1;
      uint64_t CNTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t ROVRF:1;
      uint64_t reservedSpace1:2;
      uint64_t APIF:1;
      uint64_t reservedSpace2:15;
      uint64_t RTCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCS;

  uint32_t RTCCNT;
};

#define RTC (*(volatile struct RTC_tag *) 0xc3fec000)

struct eMIOS_eMIOS0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t GPRE:8;
      uint64_t reservedSpace1:10;
      uint64_t GPREN:1;
      uint64_t reservedSpace2:1;
      uint64_t GTBE:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_MCR;

  uint32_t EMIOS0_GFLAG;
  uint32_t EMIOS0_OUDIS;
  uint32_t EMIOS0_UCDIS;
  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC0_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC0_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC0_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC0_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC0_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC0_ALTA;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC1_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC1_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC1_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC1_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC1_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC1_ALTA;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC2_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC2_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC2_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC2_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC2_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC2_ALTA;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC3_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC3_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC3_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC3_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC3_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC3_ALTA;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC4_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC4_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC4_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC4_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC4_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC4_ALTA;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC5_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC5_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC5_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC5_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC5_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC5_ALTA;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC6_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC6_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC6_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC6_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC6_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC6_ALTA;

  uint8_t res7[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC7_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC7_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC7_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC7_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC7_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC7_ALTA;

  uint8_t res8[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC8_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC8_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC8_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC8_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC8_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC8_ALTA;

  uint8_t res9[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC9_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC9_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC9_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC9_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC9_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC9_ALTA;

  uint8_t res10[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC10_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC10_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC10_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC10_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC10_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC10_ALTA;

  uint8_t res11[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC11_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC11_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC11_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC11_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC11_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC11_ALTA;

  uint8_t res12[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC12_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC12_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC12_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC12_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC12_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC12_ALTA;

  uint8_t res13[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC13_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC13_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC13_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC13_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC13_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC13_ALTA;

  uint8_t res14[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC14_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC14_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC14_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC14_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC14_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC14_ALTA;

  uint8_t res15[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC15_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC15_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC15_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC15_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC15_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC15_ALTA;

  uint8_t res16[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC16_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC16_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC16_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC16_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC16_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC16_ALTA;

  uint8_t res17[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC17_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC17_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC17_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC17_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC17_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC17_ALTA;

  uint8_t res18[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC18_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC18_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC18_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC18_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC18_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC18_ALTA;

  uint8_t res19[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC19_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC19_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC19_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC19_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC19_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC19_ALTA;

  uint8_t res20[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC20_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC20_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC20_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC20_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC20_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC20_ALTA;

  uint8_t res21[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC21_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC21_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC21_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC21_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC21_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC21_ALTA;

  uint8_t res22[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC22_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC22_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC22_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC22_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC22_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC22_ALTA;

  uint8_t res23[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC23_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC23_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC23_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC23_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC23_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC23_ALTA;

  uint8_t res24[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC24_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC24_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC24_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC24_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC24_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC24_ALTA;

  uint8_t res25[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC25_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC25_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC25_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC25_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC25_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC25_ALTA;

  uint8_t res26[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC26_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC26_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC26_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC26_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC26_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC26_ALTA;

  uint8_t res27[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC27_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC27_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC27_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC27_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC27_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC27_ALTA;

  uint8_t res28[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC28_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC28_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC28_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC28_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC28_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC28_ALTA;

  uint8_t res29[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC29_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC29_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC29_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC29_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC29_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC29_ALTA;

  uint8_t res30[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC30_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC30_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC30_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC30_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC30_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC30_ALTA;

  uint8_t res31[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC31_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC31_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC31_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC31_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC31_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC31_ALTA;

};

#define eMIOS_eMIOS0 (*(volatile struct eMIOS_eMIOS0_tag *) 0xc3fa0000)

struct eMIOS_eMIOS1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t GPRE:8;
      uint64_t reservedSpace1:10;
      uint64_t GPREN:1;
      uint64_t reservedSpace2:1;
      uint64_t GTBE:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_MCR;

  uint32_t EMIOS1_GFLAG;
  uint32_t EMIOS1_OUDIS;
  uint32_t EMIOS1_UCDIS;
  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC0_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC0_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC0_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC0_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC0_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC0_ALTA;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC1_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC1_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC1_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC1_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC1_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC1_ALTA;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC2_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC2_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC2_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC2_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC2_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC2_ALTA;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC3_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC3_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC3_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC3_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC3_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC3_ALTA;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC4_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC4_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC4_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC4_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC4_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC4_ALTA;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC5_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC5_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC5_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC5_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC5_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC5_ALTA;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC6_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC6_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC6_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC6_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC6_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC6_ALTA;

  uint8_t res7[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC7_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC7_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC7_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC7_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC7_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC7_ALTA;

  uint8_t res8[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC8_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC8_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC8_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC8_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC8_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC8_ALTA;

  uint8_t res9[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC9_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC9_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC9_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC9_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC9_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC9_ALTA;

  uint8_t res10[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC10_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC10_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC10_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC10_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC10_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC10_ALTA;

  uint8_t res11[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC11_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC11_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC11_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC11_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC11_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC11_ALTA;

  uint8_t res12[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC12_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC12_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC12_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC12_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC12_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC12_ALTA;

  uint8_t res13[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC13_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC13_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC13_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC13_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC13_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC13_ALTA;

  uint8_t res14[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC14_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC14_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC14_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC14_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC14_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC14_ALTA;

  uint8_t res15[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC15_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC15_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC15_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC15_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC15_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC15_ALTA;

  uint8_t res16[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC16_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC16_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC16_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC16_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC16_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC16_ALTA;

  uint8_t res17[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC17_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC17_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC17_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC17_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC17_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC17_ALTA;

  uint8_t res18[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC18_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC18_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC18_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC18_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC18_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC18_ALTA;

  uint8_t res19[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC19_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC19_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC19_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC19_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC19_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC19_ALTA;

  uint8_t res20[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC20_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC20_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC20_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC20_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC20_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC20_ALTA;

  uint8_t res21[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC21_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC21_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC21_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC21_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC21_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC21_ALTA;

  uint8_t res22[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC22_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC22_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC22_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC22_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC22_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC22_ALTA;

  uint8_t res23[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC23_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC23_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC23_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC23_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC23_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC23_ALTA;

  uint8_t res24[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC24_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC24_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC24_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC24_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC24_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC24_ALTA;

  uint8_t res25[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC25_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC25_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC25_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC25_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC25_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC25_ALTA;

  uint8_t res26[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC26_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC26_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC26_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC26_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC26_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC26_ALTA;

  uint8_t res27[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC27_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC27_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC27_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC27_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC27_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC27_ALTA;

  uint8_t res28[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC28_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC28_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC28_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC28_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC28_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC28_ALTA;

  uint8_t res29[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC29_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC29_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC29_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC29_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC29_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC29_ALTA;

  uint8_t res30[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC30_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC30_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC30_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC30_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC30_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC30_ALTA;

  uint8_t res31[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC31_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC31_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC31_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_bitfield:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t reservedSpace3:3;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC31_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_FLAGC:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL_OVFLC:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR_OVRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC31_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC31_ALTA;

};

#define eMIOS_eMIOS1 (*(volatile struct eMIOS_eMIOS1_tag *) 0xc3fa4000)

struct WKPU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t NOVF:1;
      uint64_t NIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t NFE:1;
      uint64_t NFEE:1;
      uint64_t NREE:1;
      uint64_t reservedSpace1:1;
      uint64_t NWRE:1;
      uint64_t NDSS:2;
      uint64_t NLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIF:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRE:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRE:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRER;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IREE:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WIREER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFEE:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WIFEER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFE:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WIFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPUE:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WIPUER;

};

#define WKPU (*(volatile struct WKPU_tag *) 0xc3f94000)

struct SSCM_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BMODE:3;
      uint64_t reservedSpace1:3;
      uint64_t NXEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DVLD:1;
      uint64_t DTSZ:4;
      uint64_t PVLB:1;
      uint64_t PRSZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MEMCONFIG;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RAE:1;
      uint64_t PAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ERROR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DEBUG_MODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DEBUGPORT;

  uint8_t res1[2];

  uint32_t PWCMPH;
  uint32_t PWCMPL;
};

#define SSCM (*(volatile struct SSCM_tag *) 0xc3fd8000)

struct ADC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWDN:1;
      uint64_t reservedSpace0:4;
      uint64_t ACKO:1;
      uint64_t ABORT:1;
      uint64_t ABORTCHAIN:1;
      uint64_t ADCLKSEL:1;
      uint64_t reservedSpace1:8;
      uint64_t CTUEN:1;
      uint64_t reservedSpace2:2;
      uint64_t JSTART:1;
      uint64_t JEDGE:1;
      uint64_t JTRGEN:1;
      uint64_t reservedSpace3:1;
      uint64_t NSTART:1;
      uint64_t reservedSpace4:4;
      uint64_t MODE_bitfield:1;
      uint64_t WLSIDE:1;
      uint64_t OWREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCSTATUS:3;
      uint64_t reservedSpace0:2;
      uint64_t ACKO:1;
      uint64_t reservedSpace1:3;
      uint64_t CHADDR:7;
      uint64_t CTUSTART:1;
      uint64_t reservedSpace2:3;
      uint64_t JSTART:1;
      uint64_t reservedSpace3:2;
      uint64_t JABORT:1;
      uint64_t NSTART:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_MSR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECH:1;
      uint64_t EOC:1;
      uint64_t JECH:1;
      uint64_t JEOC:1;
      uint64_t EOCTU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_ISR;

  uint32_t ADC0_CEOCFR0;
  uint32_t ADC0_CEOCFR1;
  uint32_t ADC0_CEOCFR2;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSKECH:1;
      uint64_t MSKEOC:1;
      uint64_t MSKJECH:1;
      uint64_t MSKJEOC:1;
      uint64_t MSKEOCTU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_IMR;

  uint32_t ADC0_CIMR0;
  uint32_t ADC0_CIMR1;
  uint32_t ADC0_CIMR2;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDG0L:1;
      uint64_t WDG0H:1;
      uint64_t WDG1L:1;
      uint64_t WDG1H:1;
      uint64_t WDG2L:1;
      uint64_t WDG2H:1;
      uint64_t WDG3L:1;
      uint64_t WDG3H:1;
      uint64_t WDG4L:1;
      uint64_t WDG4H:1;
      uint64_t WDG5L:1;
      uint64_t WDG5H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_WTISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSKWDG0L:1;
      uint64_t MSKWDG0H:1;
      uint64_t MSKWDG1L:1;
      uint64_t MSKWDG1H:1;
      uint64_t MSKWDG2L:1;
      uint64_t MSKWDG2H:1;
      uint64_t MSKWDG3L:1;
      uint64_t MSKWDG3H:1;
      uint64_t MSKWDG4L:1;
      uint64_t MSKWDG4H:1;
      uint64_t MSKWDG5L:1;
      uint64_t MSKWDG5H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_WTIMR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAEN:1;
      uint64_t DCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_DMAE;

  uint32_t ADC0_DMAR0;
  uint32_t ADC0_DMAR1;
  uint32_t ADC0_DMAR2;
  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:10;
      uint64_t reservedSpace0:6;
      uint64_t THRH:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_THRHLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:10;
      uint64_t reservedSpace0:6;
      uint64_t THRH:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_THRHLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:10;
      uint64_t reservedSpace0:6;
      uint64_t THRH:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_THRHLR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:10;
      uint64_t reservedSpace0:6;
      uint64_t THRH:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_THRHLR3;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRECONV:1;
      uint64_t PREVAL0:2;
      uint64_t PREVAL1:2;
      uint64_t PREVAL2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_PSCR;

  uint32_t ADC0_PSR0;
  uint32_t ADC0_PSR1;
  uint32_t ADC0_PSR2;
  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPSAMP:8;
      uint64_t reservedSpace0:1;
      uint64_t INPCMP:2;
      uint64_t reservedSpace1:1;
      uint64_t OFFSHIFT:2;
      uint64_t reservedSpace2:1;
      uint64_t INPLATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CTR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPSAMP:8;
      uint64_t reservedSpace0:1;
      uint64_t INPCMP:2;
      uint64_t reservedSpace1:1;
      uint64_t OFFSHIFT:2;
      uint64_t reservedSpace2:1;
      uint64_t INPLATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPSAMP:8;
      uint64_t reservedSpace0:1;
      uint64_t INPCMP:2;
      uint64_t reservedSpace1:1;
      uint64_t OFFSHIFT:2;
      uint64_t reservedSpace2:1;
      uint64_t INPLATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CTR2;

  uint8_t res5[4];

  uint32_t ADC0_NCMR0;
  uint32_t ADC0_NCMR1;
  uint32_t ADC0_NCMR2;
  uint8_t res6[4];

  uint32_t ADC0_JCMR0;
  uint32_t ADC0_JCMR1;
  uint32_t ADC0_JCMR2;
  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSD:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_DSDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_PDEDR;

  uint8_t res8[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR15;

  uint8_t res9[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR59;

  uint8_t res10[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:10;
      uint64_t CDATA:16;
      uint64_t CDATA_R:10;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:10;
      uint64_t reservedSpace0:6;
      uint64_t THRH:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_THRHLR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:10;
      uint64_t reservedSpace0:6;
      uint64_t THRH:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_THRHLR5;

  uint8_t res11[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH0:4;
      uint64_t WSEL_CH1:4;
      uint64_t WSEL_CH2:4;
      uint64_t WSEL_CH3:4;
      uint64_t WSEL_CH4:4;
      uint64_t WSEL_CH5:4;
      uint64_t WSEL_CH6:4;
      uint64_t WSEL_CH7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CWSELR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH0:4;
      uint64_t WSEL_CH1:4;
      uint64_t WSEL_CH2:4;
      uint64_t WSEL_CH3:4;
      uint64_t WSEL_CH4:4;
      uint64_t WSEL_CH5:4;
      uint64_t WSEL_CH6:4;
      uint64_t WSEL_CH7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CWSELR1;

  uint8_t res12[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH0:4;
      uint64_t WSEL_CH1:4;
      uint64_t WSEL_CH2:4;
      uint64_t WSEL_CH3:4;
      uint64_t WSEL_CH4:4;
      uint64_t WSEL_CH5:4;
      uint64_t WSEL_CH6:4;
      uint64_t WSEL_CH7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CWSELR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH0:4;
      uint64_t WSEL_CH1:4;
      uint64_t WSEL_CH2:4;
      uint64_t WSEL_CH3:4;
      uint64_t WSEL_CH4:4;
      uint64_t WSEL_CH5:4;
      uint64_t WSEL_CH6:4;
      uint64_t WSEL_CH7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CWSELR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH0:4;
      uint64_t WSEL_CH1:4;
      uint64_t WSEL_CH2:4;
      uint64_t WSEL_CH3:4;
      uint64_t WSEL_CH4:4;
      uint64_t WSEL_CH5:4;
      uint64_t WSEL_CH6:4;
      uint64_t WSEL_CH7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CWSELR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH0:4;
      uint64_t WSEL_CH1:4;
      uint64_t WSEL_CH2:4;
      uint64_t WSEL_CH3:4;
      uint64_t WSEL_CH4:4;
      uint64_t WSEL_CH5:4;
      uint64_t WSEL_CH6:4;
      uint64_t WSEL_CH7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CWSELR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH0:4;
      uint64_t WSEL_CH1:4;
      uint64_t WSEL_CH2:4;
      uint64_t WSEL_CH3:4;
      uint64_t WSEL_CH4:4;
      uint64_t WSEL_CH5:4;
      uint64_t WSEL_CH6:4;
      uint64_t WSEL_CH7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CWSELR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH0:4;
      uint64_t WSEL_CH1:4;
      uint64_t WSEL_CH2:4;
      uint64_t WSEL_CH3:4;
      uint64_t WSEL_CH4:4;
      uint64_t WSEL_CH5:4;
      uint64_t WSEL_CH6:4;
      uint64_t WSEL_CH7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CWSELR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH0:4;
      uint64_t WSEL_CH1:4;
      uint64_t WSEL_CH2:4;
      uint64_t WSEL_CH3:4;
      uint64_t WSEL_CH4:4;
      uint64_t WSEL_CH5:4;
      uint64_t WSEL_CH6:4;
      uint64_t WSEL_CH7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CWSELR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH0:4;
      uint64_t WSEL_CH1:4;
      uint64_t WSEL_CH2:4;
      uint64_t WSEL_CH3:4;
      uint64_t WSEL_CH4:4;
      uint64_t WSEL_CH5:4;
      uint64_t WSEL_CH6:4;
      uint64_t WSEL_CH7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CWSELR11;

  uint32_t ADC0_CWENR0;
  uint32_t ADC0_CWENR1;
  uint32_t ADC0_CWENR2;
  uint8_t res13[4];

  uint32_t ADC0_AWORR0;
  uint32_t ADC0_AWORR1;
  uint32_t ADC0_AWORR2;
  uint8_t res14[15620];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWDN:1;
      uint64_t reservedSpace0:4;
      uint64_t ACKO:1;
      uint64_t ABORT:1;
      uint64_t ABORTCHAIN:1;
      uint64_t ADCLKSEL:1;
      uint64_t reservedSpace1:8;
      uint64_t CTUEN:1;
      uint64_t reservedSpace2:2;
      uint64_t JSTART:1;
      uint64_t JEDGE:1;
      uint64_t JTRGEN:1;
      uint64_t reservedSpace3:1;
      uint64_t NSTART:1;
      uint64_t reservedSpace4:4;
      uint64_t MODE_bitfield:1;
      uint64_t WLSIDE:1;
      uint64_t OWREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCSTATUS:3;
      uint64_t reservedSpace0:2;
      uint64_t ACKO:1;
      uint64_t reservedSpace1:3;
      uint64_t CHADDR:7;
      uint64_t CTUSTART:1;
      uint64_t reservedSpace2:3;
      uint64_t JSTART:1;
      uint64_t reservedSpace3:2;
      uint64_t JABORT:1;
      uint64_t NSTART:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_MSR;

  uint8_t res15[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECH:1;
      uint64_t EOC:1;
      uint64_t JECH:1;
      uint64_t JEOC:1;
      uint64_t EOCTU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_ISR;

  uint32_t ADC1_CEOCFR0;
  uint8_t res16[4];

  uint32_t ADC1_CEOCFR1;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSKECH:1;
      uint64_t MSKEOC:1;
      uint64_t MSKJECH:1;
      uint64_t MSKJEOC:1;
      uint64_t MSKEOCTU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_IMR;

  uint32_t ADC1_CIMR0;
  uint32_t ADC1_CIMR1;
  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDG0L:1;
      uint64_t WDG0H:1;
      uint64_t WDG1L:1;
      uint64_t WDG1H:1;
      uint64_t WDG2L:1;
      uint64_t WDG2H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_WTISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSKWDG0L:1;
      uint64_t MSKWDG0H:1;
      uint64_t MSKWDG1L:1;
      uint64_t MSKWDG1H:1;
      uint64_t MSKWDG2L:1;
      uint64_t MSKWDG2H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_WTIMR;

  uint8_t res18[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAEN:1;
      uint64_t DCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_DMAE;

  uint32_t ADC1_DMAR0;
  uint32_t ADC1_DMAR1;
  uint8_t res19[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_THRHLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_THRHLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_THRHLR2;

  uint8_t res20[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRECONV:1;
      uint64_t PREVAL0:2;
      uint64_t PREVAL1:2;
      uint64_t PREVAL2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_PSCR;

  uint32_t ADC1_PSR0;
  uint32_t ADC1_PSR1;
  uint8_t res21[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPSAMP:8;
      uint64_t reservedSpace0:1;
      uint64_t INPCMP:2;
      uint64_t reservedSpace1:1;
      uint64_t OFFSHIFT:2;
      uint64_t reservedSpace2:1;
      uint64_t INPLATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CTR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPSAMP:8;
      uint64_t reservedSpace0:1;
      uint64_t INPCMP:2;
      uint64_t reservedSpace1:1;
      uint64_t OFFSHIFT:2;
      uint64_t reservedSpace2:1;
      uint64_t INPLATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CTR1;

  uint8_t res22[8];

  uint32_t ADC1_NCMR0;
  uint32_t ADC1_NCMR1;
  uint8_t res23[8];

  uint32_t ADC1_JCMR0;
  uint32_t ADC1_JCMR1;
  uint8_t res24[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_PDEDR;

  uint8_t res25[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:12;
      uint64_t CDATA:16;
      uint64_t CDATA_R:12;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:12;
      uint64_t CDATA:16;
      uint64_t CDATA_R:12;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:12;
      uint64_t CDATA:16;
      uint64_t CDATA_R:12;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:12;
      uint64_t CDATA:16;
      uint64_t CDATA_R:12;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:12;
      uint64_t CDATA:16;
      uint64_t CDATA_R:12;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:12;
      uint64_t CDATA:16;
      uint64_t CDATA_R:12;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:12;
      uint64_t CDATA:16;
      uint64_t CDATA_R:12;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CDR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:12;
      uint64_t CDATA:16;
      uint64_t CDATA_R:12;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CDR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:12;
      uint64_t CDATA:16;
      uint64_t CDATA_R:12;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CDR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:12;
      uint64_t CDATA:16;
      uint64_t CDATA_R:12;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CDR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:12;
      uint64_t CDATA:16;
      uint64_t CDATA_R:12;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CDR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:12;
      uint64_t CDATA:16;
      uint64_t CDATA_R:12;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CDR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:12;
      uint64_t CDATA:16;
      uint64_t CDATA_R:12;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CDR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:12;
      uint64_t CDATA:16;
      uint64_t CDATA_R:12;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CDR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:12;
      uint64_t CDATA:16;
      uint64_t CDATA_R:12;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CDR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:12;
      uint64_t CDATA:16;
      uint64_t CDATA_R:12;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CDR15;

  uint8_t res26[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:12;
      uint64_t CDATA:16;
      uint64_t CDATA_R:12;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CDR32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:12;
      uint64_t CDATA:16;
      uint64_t CDATA_R:12;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CDR33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:12;
      uint64_t CDATA:16;
      uint64_t CDATA_R:12;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CDR34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:12;
      uint64_t CDATA:16;
      uint64_t CDATA_R:12;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CDR35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:12;
      uint64_t CDATA:16;
      uint64_t CDATA_R:12;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CDR36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:12;
      uint64_t CDATA:16;
      uint64_t CDATA_R:12;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CDR37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:12;
      uint64_t CDATA:16;
      uint64_t CDATA_R:12;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CDR38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA_L:12;
      uint64_t CDATA:16;
      uint64_t CDATA_R:12;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_CDR39;

  uint8_t res27[272];

  uint32_t ADC1_CWSEL0;
  uint32_t ADC1_CWSEL1;
  uint8_t res28[8];

  uint32_t ADC1_CWSEL4;
  uint8_t res29[28];

  uint32_t ADC1_CWENR0;
  uint32_t ADC1_CWENR1;
  uint8_t res30[8];

  uint32_t ADC1_AWORR0;
  uint32_t ADC1_AWORR1;
};

#define ADC (*(volatile struct ADC_tag *) 0xffe00000)

struct SWT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WEN:1;
      uint64_t FRZ:1;
      uint64_t STP:1;
      uint64_t CSL:1;
      uint64_t SLK:1;
      uint64_t HLK:1;
      uint64_t ITR:1;
      uint64_t WND:1;
      uint64_t RIA:1;
      uint64_t reservedSpace0:15;
      uint64_t MAP_70:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWT_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWT_IR;

  uint32_t SWT_TO;
  uint32_t SWT_WN;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWT_SR;

  uint32_t SWT_CO;
};

#define SWT (*(volatile struct SWT_tag *) 0xfff38000)

struct DSPI_DSPI_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HALT:1;
      uint64_t reservedSpace0:7;
      uint64_t SMPL_PT:2;
      uint64_t reservedSpace1:2;
      uint64_t DIS_RXF:1;
      uint64_t DIS_TXF:1;
      uint64_t MDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t PCSIS:6;
      uint64_t reservedSpace3:2;
      uint64_t ROOE:1;
      uint64_t PCSSE:1;
      uint64_t MTFE:1;
      uint64_t FRZ:1;
      uint64_t DCONF:2;
      uint64_t CONT_SCKE:1;
      uint64_t MSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_MCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SPI_TCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_CTAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_CTAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_CTAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_CTAR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_CTAR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_CTAR5;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POPNXTPTR:4;
      uint64_t RXCTR:4;
      uint64_t TXNXTPTR:4;
      uint64_t TXCTR:4;
      uint64_t reservedSpace0:1;
      uint64_t RFDF:1;
      uint64_t reservedSpace1:1;
      uint64_t RFOF:1;
      uint64_t reservedSpace2:5;
      uint64_t TFFF:1;
      uint64_t reservedSpace3:1;
      uint64_t TFUF:1;
      uint64_t EOQF:1;
      uint64_t reservedSpace4:1;
      uint64_t TXRXS:1;
      uint64_t TCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RFDF_DIRS:1;
      uint64_t RFDF_RE:1;
      uint64_t reservedSpace1:1;
      uint64_t RFOF_RE:1;
      uint64_t reservedSpace2:4;
      uint64_t TFFF_DIRS:1;
      uint64_t TFFF_RE:1;
      uint64_t reservedSpace3:1;
      uint64_t TFUF_RE:1;
      uint64_t EOQF_RE:1;
      uint64_t reservedSpace4:2;
      uint64_t TCF_RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_RSER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t PCS:6;
      uint64_t reservedSpace0:4;
      uint64_t CTCNT:1;
      uint64_t EOQ:1;
      uint64_t CTAS:3;
      uint64_t CONT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_PUSHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_POPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXCMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_TXFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXCMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_TXFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXCMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_TXFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXCMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_TXFR3;

  uint8_t res2[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_RXFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_RXFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_RXFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_RXFR3;

};

#define DSPI_DSPI_0 (*(volatile struct DSPI_DSPI_0_tag *) 0xfff90000)

struct DSPI_DSPI_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HALT:1;
      uint64_t reservedSpace0:7;
      uint64_t SMPL_PT:2;
      uint64_t reservedSpace1:2;
      uint64_t DIS_RXF:1;
      uint64_t DIS_TXF:1;
      uint64_t MDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t PCSIS:6;
      uint64_t reservedSpace3:2;
      uint64_t ROOE:1;
      uint64_t PCSSE:1;
      uint64_t MTFE:1;
      uint64_t FRZ:1;
      uint64_t DCONF:2;
      uint64_t CONT_SCKE:1;
      uint64_t MSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_MCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SPI_TCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_CTAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_CTAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_CTAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_CTAR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_CTAR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_CTAR5;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POPNXTPTR:4;
      uint64_t RXCTR:4;
      uint64_t TXNXTPTR:4;
      uint64_t TXCTR:4;
      uint64_t reservedSpace0:1;
      uint64_t RFDF:1;
      uint64_t reservedSpace1:1;
      uint64_t RFOF:1;
      uint64_t reservedSpace2:5;
      uint64_t TFFF:1;
      uint64_t reservedSpace3:1;
      uint64_t TFUF:1;
      uint64_t EOQF:1;
      uint64_t reservedSpace4:1;
      uint64_t TXRXS:1;
      uint64_t TCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RFDF_DIRS:1;
      uint64_t RFDF_RE:1;
      uint64_t reservedSpace1:1;
      uint64_t RFOF_RE:1;
      uint64_t reservedSpace2:4;
      uint64_t TFFF_DIRS:1;
      uint64_t TFFF_RE:1;
      uint64_t reservedSpace3:1;
      uint64_t TFUF_RE:1;
      uint64_t EOQF_RE:1;
      uint64_t reservedSpace4:2;
      uint64_t TCF_RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_RSER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t PCS:6;
      uint64_t reservedSpace0:4;
      uint64_t CTCNT:1;
      uint64_t EOQ:1;
      uint64_t CTAS:3;
      uint64_t CONT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_PUSHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_POPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXCMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_TXFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXCMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_TXFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXCMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_TXFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXCMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_TXFR3;

  uint8_t res2[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_RXFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_RXFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_RXFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_RXFR3;

};

#define DSPI_DSPI_1 (*(volatile struct DSPI_DSPI_1_tag *) 0xfff94000)

struct DSPI_DSPI_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HALT:1;
      uint64_t reservedSpace0:7;
      uint64_t SMPL_PT:2;
      uint64_t reservedSpace1:2;
      uint64_t DIS_RXF:1;
      uint64_t DIS_TXF:1;
      uint64_t MDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t PCSIS:6;
      uint64_t reservedSpace3:2;
      uint64_t ROOE:1;
      uint64_t PCSSE:1;
      uint64_t MTFE:1;
      uint64_t FRZ:1;
      uint64_t DCONF:2;
      uint64_t CONT_SCKE:1;
      uint64_t MSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_MCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SPI_TCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_CTAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_CTAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_CTAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_CTAR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_CTAR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_CTAR5;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POPNXTPTR:4;
      uint64_t RXCTR:4;
      uint64_t TXNXTPTR:4;
      uint64_t TXCTR:4;
      uint64_t reservedSpace0:1;
      uint64_t RFDF:1;
      uint64_t reservedSpace1:1;
      uint64_t RFOF:1;
      uint64_t reservedSpace2:5;
      uint64_t TFFF:1;
      uint64_t reservedSpace3:1;
      uint64_t TFUF:1;
      uint64_t EOQF:1;
      uint64_t reservedSpace4:1;
      uint64_t TXRXS:1;
      uint64_t TCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RFDF_DIRS:1;
      uint64_t RFDF_RE:1;
      uint64_t reservedSpace1:1;
      uint64_t RFOF_RE:1;
      uint64_t reservedSpace2:4;
      uint64_t TFFF_DIRS:1;
      uint64_t TFFF_RE:1;
      uint64_t reservedSpace3:1;
      uint64_t TFUF_RE:1;
      uint64_t EOQF_RE:1;
      uint64_t reservedSpace4:2;
      uint64_t TCF_RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_RSER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t PCS:6;
      uint64_t reservedSpace0:4;
      uint64_t CTCNT:1;
      uint64_t EOQ:1;
      uint64_t CTAS:3;
      uint64_t CONT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_PUSHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_POPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXCMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_TXFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXCMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_TXFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXCMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_TXFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXCMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_TXFR3;

  uint8_t res2[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_RXFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_RXFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_RXFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_RXFR3;

};

#define DSPI_DSPI_2 (*(volatile struct DSPI_DSPI_2_tag *) 0xfff98000)

struct DSPI_DSPI_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HALT:1;
      uint64_t reservedSpace0:7;
      uint64_t SMPL_PT:2;
      uint64_t reservedSpace1:2;
      uint64_t DIS_RXF:1;
      uint64_t DIS_TXF:1;
      uint64_t MDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t PCSIS:6;
      uint64_t reservedSpace3:2;
      uint64_t ROOE:1;
      uint64_t PCSSE:1;
      uint64_t MTFE:1;
      uint64_t FRZ:1;
      uint64_t DCONF:2;
      uint64_t CONT_SCKE:1;
      uint64_t MSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI3_MCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SPI_TCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI3_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI3_CTAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI3_CTAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI3_CTAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI3_CTAR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI3_CTAR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI3_CTAR5;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POPNXTPTR:4;
      uint64_t RXCTR:4;
      uint64_t TXNXTPTR:4;
      uint64_t TXCTR:4;
      uint64_t reservedSpace0:1;
      uint64_t RFDF:1;
      uint64_t reservedSpace1:1;
      uint64_t RFOF:1;
      uint64_t reservedSpace2:5;
      uint64_t TFFF:1;
      uint64_t reservedSpace3:1;
      uint64_t TFUF:1;
      uint64_t EOQF:1;
      uint64_t reservedSpace4:1;
      uint64_t TXRXS:1;
      uint64_t TCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI3_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RFDF_DIRS:1;
      uint64_t RFDF_RE:1;
      uint64_t reservedSpace1:1;
      uint64_t RFOF_RE:1;
      uint64_t reservedSpace2:4;
      uint64_t TFFF_DIRS:1;
      uint64_t TFFF_RE:1;
      uint64_t reservedSpace3:1;
      uint64_t TFUF_RE:1;
      uint64_t EOQF_RE:1;
      uint64_t reservedSpace4:2;
      uint64_t TCF_RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI3_RSER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t PCS:6;
      uint64_t reservedSpace0:4;
      uint64_t CTCNT:1;
      uint64_t EOQ:1;
      uint64_t CTAS:3;
      uint64_t CONT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI3_PUSHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI3_POPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXCMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI3_TXFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXCMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI3_TXFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXCMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI3_TXFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXCMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI3_TXFR3;

  uint8_t res2[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI3_RXFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI3_RXFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI3_RXFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI3_RXFR3;

};

#define DSPI_DSPI_3 (*(volatile struct DSPI_DSPI_3_tag *) 0xfff9c000)

struct DSPI_DSPI_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HALT:1;
      uint64_t reservedSpace0:7;
      uint64_t SMPL_PT:2;
      uint64_t reservedSpace1:2;
      uint64_t DIS_RXF:1;
      uint64_t DIS_TXF:1;
      uint64_t MDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t PCSIS:6;
      uint64_t reservedSpace3:2;
      uint64_t ROOE:1;
      uint64_t PCSSE:1;
      uint64_t MTFE:1;
      uint64_t FRZ:1;
      uint64_t DCONF:2;
      uint64_t CONT_SCKE:1;
      uint64_t MSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI4_MCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SPI_TCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI4_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI4_CTAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI4_CTAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI4_CTAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI4_CTAR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI4_CTAR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI4_CTAR5;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POPNXTPTR:4;
      uint64_t RXCTR:4;
      uint64_t TXNXTPTR:4;
      uint64_t TXCTR:4;
      uint64_t reservedSpace0:1;
      uint64_t RFDF:1;
      uint64_t reservedSpace1:1;
      uint64_t RFOF:1;
      uint64_t reservedSpace2:5;
      uint64_t TFFF:1;
      uint64_t reservedSpace3:1;
      uint64_t TFUF:1;
      uint64_t EOQF:1;
      uint64_t reservedSpace4:1;
      uint64_t TXRXS:1;
      uint64_t TCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI4_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RFDF_DIRS:1;
      uint64_t RFDF_RE:1;
      uint64_t reservedSpace1:1;
      uint64_t RFOF_RE:1;
      uint64_t reservedSpace2:4;
      uint64_t TFFF_DIRS:1;
      uint64_t TFFF_RE:1;
      uint64_t reservedSpace3:1;
      uint64_t TFUF_RE:1;
      uint64_t EOQF_RE:1;
      uint64_t reservedSpace4:2;
      uint64_t TCF_RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI4_RSER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t PCS:6;
      uint64_t reservedSpace0:4;
      uint64_t CTCNT:1;
      uint64_t EOQ:1;
      uint64_t CTAS:3;
      uint64_t CONT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI4_PUSHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI4_POPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXCMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI4_TXFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXCMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI4_TXFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXCMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI4_TXFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXCMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI4_TXFR3;

  uint8_t res2[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI4_RXFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI4_RXFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI4_RXFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI4_RXFR3;

};

#define DSPI_DSPI_4 (*(volatile struct DSPI_DSPI_4_tag *) 0xfffa0000)

struct DSPI_DSPI_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HALT:1;
      uint64_t reservedSpace0:7;
      uint64_t SMPL_PT:2;
      uint64_t reservedSpace1:2;
      uint64_t DIS_RXF:1;
      uint64_t DIS_TXF:1;
      uint64_t MDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t PCSIS:6;
      uint64_t reservedSpace3:2;
      uint64_t ROOE:1;
      uint64_t PCSSE:1;
      uint64_t MTFE:1;
      uint64_t FRZ:1;
      uint64_t DCONF:2;
      uint64_t CONT_SCKE:1;
      uint64_t MSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI5_MCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SPI_TCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI5_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI5_CTAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI5_CTAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI5_CTAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI5_CTAR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI5_CTAR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:4;
      uint64_t DT:4;
      uint64_t ASC:4;
      uint64_t CSSCK:4;
      uint64_t PBR:2;
      uint64_t PDT:2;
      uint64_t PASC:2;
      uint64_t PCSSCK:2;
      uint64_t LSBFE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t FMSZ:4;
      uint64_t DBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI5_CTAR5;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POPNXTPTR:4;
      uint64_t RXCTR:4;
      uint64_t TXNXTPTR:4;
      uint64_t TXCTR:4;
      uint64_t reservedSpace0:1;
      uint64_t RFDF:1;
      uint64_t reservedSpace1:1;
      uint64_t RFOF:1;
      uint64_t reservedSpace2:5;
      uint64_t TFFF:1;
      uint64_t reservedSpace3:1;
      uint64_t TFUF:1;
      uint64_t EOQF:1;
      uint64_t reservedSpace4:1;
      uint64_t TXRXS:1;
      uint64_t TCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI5_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RFDF_DIRS:1;
      uint64_t RFDF_RE:1;
      uint64_t reservedSpace1:1;
      uint64_t RFOF_RE:1;
      uint64_t reservedSpace2:4;
      uint64_t TFFF_DIRS:1;
      uint64_t TFFF_RE:1;
      uint64_t reservedSpace3:1;
      uint64_t TFUF_RE:1;
      uint64_t EOQF_RE:1;
      uint64_t reservedSpace4:2;
      uint64_t TCF_RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI5_RSER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t PCS:6;
      uint64_t reservedSpace0:4;
      uint64_t CTCNT:1;
      uint64_t EOQ:1;
      uint64_t CTAS:3;
      uint64_t CONT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI5_PUSHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI5_POPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXCMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI5_TXFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXCMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI5_TXFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXCMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI5_TXFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXCMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI5_TXFR3;

  uint8_t res2[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI5_RXFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI5_RXFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI5_RXFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI5_RXFR3;

};

#define DSPI_DSPI_5 (*(volatile struct DSPI_DSPI_5_tag *) 0xfffa4000)

struct CANS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAN_SMPLR_EN:1;
      uint64_t BRP:5;
      uint64_t CAN_RX_SEL:3;
      uint64_t Mode:1;
      uint64_t reservedSpace0:3;
      uint64_t Active_CK:1;
      uint64_t BUSY:1;
      uint64_t RX_COMPLETE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CANS_CR;

  uint32_t CAN_SR0;
  uint32_t CAN_SR1;
  uint32_t CAN_SR2;
  uint32_t CAN_SR3;
  uint32_t CAN_SR4;
  uint32_t CAN_SR5;
  uint32_t CAN_SR6;
  uint32_t CAN_SR7;
  uint32_t CAN_SR8;
  uint32_t CAN_SR9;
  uint32_t CAN_SR10;
  uint32_t CAN_SR11;
};

#define CANS (*(volatile struct CANS_tag *) 0xffe70000)

struct I2C_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IBAD;

  uint8_t IBFD;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t IBDOZE:1;
      uint64_t DMEAN:1;
      uint64_t RSTA:1;
      uint64_t NOACK:1;
      uint64_t Tx_Rx:1;
      uint64_t MS_SL:1;
      uint64_t IBIE:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IBCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RXAK:1;
      uint64_t IBIF:1;
      uint64_t SRW:1;
      uint64_t reservedSpace0:1;
      uint64_t IBAL:1;
      uint64_t IBB:1;
      uint64_t IAAS:1;
      uint64_t TCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IBSR;

  uint8_t IBDR;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t BIIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IBIC;

};

#define I2C (*(volatile struct I2C_tag *) 0xffe30000)

struct PIT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PITMCR;

  uint8_t res0[252];

  uint32_t LDVAL0;
  uint32_t CVAL0;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG0;

  uint32_t LDVAL1;
  uint32_t CVAL1;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG1;

  uint32_t LDVAL2;
  uint32_t CVAL2;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG2;

  uint32_t LDVAL3;
  uint32_t CVAL3;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG3;

  uint32_t LDVAL4;
  uint32_t CVAL4;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG4;

  uint32_t LDVAL5;
  uint32_t CVAL5;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG5;

  uint32_t LDVAL6;
  uint32_t CVAL6;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG6;

  uint32_t LDVAL7;
  uint32_t CVAL7;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG7;

};

#define PIT (*(volatile struct PIT_tag *) 0xc3ff0000)

struct CTU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t TRGI:1;
      uint64_t TRGIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_CSR;

  uint8_t res0[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_FLAG:1;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR63;

};

#define CTU (*(volatile struct CTU_tag *) 0xffe64000)

struct LINFlex_LINFlex_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t SLEEP:1;
      uint64_t RBLM:1;
      uint64_t SBDT:1;
      uint64_t MME:1;
      uint64_t LBKM:1;
      uint64_t SFTM:1;
      uint64_t BF:1;
      uint64_t MBL:4;
      uint64_t AWUM:1;
      uint64_t LASE:1;
      uint64_t CFD:1;
      uint64_t CCD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_LINCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRIE:1;
      uint64_t DTIE:1;
      uint64_t DRIE:1;
      uint64_t DBEIE:1;
      uint64_t DBFIE:1;
      uint64_t WUIE:1;
      uint64_t LSIE:1;
      uint64_t BOIE:1;
      uint64_t FEIE:1;
      uint64_t reservedSpace0:2;
      uint64_t HEIE:1;
      uint64_t CEIE:1;
      uint64_t BEIE:1;
      uint64_t OCIE:1;
      uint64_t SZIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_LINIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRF:1;
      uint64_t DTF:1;
      uint64_t DRF:1;
      uint64_t DBEF:1;
      uint64_t DBFF:1;
      uint64_t WUF:1;
      uint64_t RPS:1;
      uint64_t RBSY:1;
      uint64_t reservedSpace0:1;
      uint64_t RMB:1;
      uint64_t reservedSpace1:2;
      uint64_t LINS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_LINSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t reservedSpace0:6;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t IDPEF:1;
      uint64_t BDEF:1;
      uint64_t SFEF:1;
      uint64_t CEF:1;
      uint64_t BEF:1;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_LINESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UART:1;
      uint64_t WL:1;
      uint64_t PCE:1;
      uint64_t OP:1;
      uint64_t TXEN:1;
      uint64_t RXEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RDFL:2;
      uint64_t reservedSpace1:1;
      uint64_t TDFL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_UARTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t DTF:1;
      uint64_t DRF:1;
      uint64_t reservedSpace0:2;
      uint64_t WUF:1;
      uint64_t RPS:1;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t RMB:1;
      uint64_t PE:4;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_UARTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:8;
      uint64_t TOCE:1;
      uint64_t IOT:1;
      uint64_t LTOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_LINTCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OC1:8;
      uint64_t OC2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_LINOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTO:7;
      uint64_t reservedSpace0:1;
      uint64_t RTO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_LINTOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_F:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_LINFBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_M:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_LINIBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_LINCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HTRQ:1;
      uint64_t ABRQ:1;
      uint64_t DTRQ:1;
      uint64_t DDRQ:1;
      uint64_t WURQ:1;
      uint64_t IOPE:1;
      uint64_t IOBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_LINCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_BIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_BDRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4:8;
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_BDRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFMI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_IFMI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_IFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_IFCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_IFCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_IFCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_IFCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_IFCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_IFCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_IFCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_IFCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_IFCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_IFCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_IFCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_IFCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_IFCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_IFCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_IFCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex0_IFCR15;

};

#define LINFlex_LINFlex_0 (*(volatile struct LINFlex_LINFlex_0_tag *) 0xffe40000)

struct LINFlex_LINFlex_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t SLEEP:1;
      uint64_t RBLM:1;
      uint64_t SBDT:1;
      uint64_t MME:1;
      uint64_t LBKM:1;
      uint64_t SFTM:1;
      uint64_t BF:1;
      uint64_t MBL:4;
      uint64_t AWUM:1;
      uint64_t LASE:1;
      uint64_t CFD:1;
      uint64_t CCD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_LINCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRIE:1;
      uint64_t DTIE:1;
      uint64_t DRIE:1;
      uint64_t DBEIE:1;
      uint64_t DBFIE:1;
      uint64_t WUIE:1;
      uint64_t LSIE:1;
      uint64_t BOIE:1;
      uint64_t FEIE:1;
      uint64_t reservedSpace0:2;
      uint64_t HEIE:1;
      uint64_t CEIE:1;
      uint64_t BEIE:1;
      uint64_t OCIE:1;
      uint64_t SZIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_LINIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRF:1;
      uint64_t DTF:1;
      uint64_t DRF:1;
      uint64_t DBEF:1;
      uint64_t DBFF:1;
      uint64_t WUF:1;
      uint64_t RPS:1;
      uint64_t RBSY:1;
      uint64_t reservedSpace0:1;
      uint64_t RMB:1;
      uint64_t reservedSpace1:2;
      uint64_t LINS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_LINSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t reservedSpace0:6;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t IDPEF:1;
      uint64_t BDEF:1;
      uint64_t SFEF:1;
      uint64_t CEF:1;
      uint64_t BEF:1;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_LINESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UART:1;
      uint64_t WL:1;
      uint64_t PCE:1;
      uint64_t OP:1;
      uint64_t TXEN:1;
      uint64_t RXEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RDFL:2;
      uint64_t reservedSpace1:1;
      uint64_t TDFL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_UARTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t DTF:1;
      uint64_t DRF:1;
      uint64_t reservedSpace0:2;
      uint64_t WUF:1;
      uint64_t RPS:1;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t RMB:1;
      uint64_t PE:4;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_UARTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:8;
      uint64_t TOCE:1;
      uint64_t IOT:1;
      uint64_t LTOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_LINTCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OC1:8;
      uint64_t OC2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_LINOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTO:7;
      uint64_t reservedSpace0:1;
      uint64_t RTO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_LINTOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_F:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_LINFBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_M:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_LINIBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_LINCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HTRQ:1;
      uint64_t ABRQ:1;
      uint64_t DTRQ:1;
      uint64_t DDRQ:1;
      uint64_t WURQ:1;
      uint64_t IOPE:1;
      uint64_t IOBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_LINCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_BIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_BDRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4:8;
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_BDRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFMI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_IFMI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_IFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_IFCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_IFCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_IFCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_IFCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_IFCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_IFCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_IFCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_IFCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_IFCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_IFCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_IFCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_IFCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_IFCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_IFCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_IFCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex1_IFCR15;

};

#define LINFlex_LINFlex_1 (*(volatile struct LINFlex_LINFlex_1_tag *) 0xffe44000)

struct LINFlex_LINFlex_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t SLEEP:1;
      uint64_t RBLM:1;
      uint64_t SBDT:1;
      uint64_t MME:1;
      uint64_t LBKM:1;
      uint64_t SFTM:1;
      uint64_t BF:1;
      uint64_t MBL:4;
      uint64_t AWUM:1;
      uint64_t LASE:1;
      uint64_t CFD:1;
      uint64_t CCD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_LINCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRIE:1;
      uint64_t DTIE:1;
      uint64_t DRIE:1;
      uint64_t DBEIE:1;
      uint64_t DBFIE:1;
      uint64_t WUIE:1;
      uint64_t LSIE:1;
      uint64_t BOIE:1;
      uint64_t FEIE:1;
      uint64_t reservedSpace0:2;
      uint64_t HEIE:1;
      uint64_t CEIE:1;
      uint64_t BEIE:1;
      uint64_t OCIE:1;
      uint64_t SZIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_LINIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRF:1;
      uint64_t DTF:1;
      uint64_t DRF:1;
      uint64_t DBEF:1;
      uint64_t DBFF:1;
      uint64_t WUF:1;
      uint64_t RPS:1;
      uint64_t RBSY:1;
      uint64_t reservedSpace0:1;
      uint64_t RMB:1;
      uint64_t reservedSpace1:2;
      uint64_t LINS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_LINSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t reservedSpace0:6;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t IDPEF:1;
      uint64_t BDEF:1;
      uint64_t SFEF:1;
      uint64_t CEF:1;
      uint64_t BEF:1;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_LINESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UART:1;
      uint64_t WL:1;
      uint64_t PCE:1;
      uint64_t OP:1;
      uint64_t TXEN:1;
      uint64_t RXEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RDFL:2;
      uint64_t reservedSpace1:1;
      uint64_t TDFL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_UARTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t DTF:1;
      uint64_t DRF:1;
      uint64_t reservedSpace0:2;
      uint64_t WUF:1;
      uint64_t RPS:1;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t RMB:1;
      uint64_t PE:4;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_UARTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:8;
      uint64_t TOCE:1;
      uint64_t IOT:1;
      uint64_t LTOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_LINTCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OC1:8;
      uint64_t OC2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_LINOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTO:7;
      uint64_t reservedSpace0:1;
      uint64_t RTO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_LINTOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_F:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_LINFBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_M:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_LINIBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_LINCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HTRQ:1;
      uint64_t ABRQ:1;
      uint64_t DTRQ:1;
      uint64_t DDRQ:1;
      uint64_t WURQ:1;
      uint64_t IOPE:1;
      uint64_t IOBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_LINCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_BIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_BDRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4:8;
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_BDRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFMI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_IFMI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_IFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_IFCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_IFCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_IFCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_IFCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_IFCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_IFCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_IFCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_IFCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_IFCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_IFCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_IFCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_IFCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_IFCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_IFCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_IFCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex2_IFCR15;

};

#define LINFlex_LINFlex_2 (*(volatile struct LINFlex_LINFlex_2_tag *) 0xffe48000)

struct LINFlex_LINFlex_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t SLEEP:1;
      uint64_t RBLM:1;
      uint64_t SBDT:1;
      uint64_t MME:1;
      uint64_t LBKM:1;
      uint64_t SFTM:1;
      uint64_t BF:1;
      uint64_t MBL:4;
      uint64_t AWUM:1;
      uint64_t LASE:1;
      uint64_t CFD:1;
      uint64_t CCD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_LINCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRIE:1;
      uint64_t DTIE:1;
      uint64_t DRIE:1;
      uint64_t DBEIE:1;
      uint64_t DBFIE:1;
      uint64_t WUIE:1;
      uint64_t LSIE:1;
      uint64_t BOIE:1;
      uint64_t FEIE:1;
      uint64_t reservedSpace0:2;
      uint64_t HEIE:1;
      uint64_t CEIE:1;
      uint64_t BEIE:1;
      uint64_t OCIE:1;
      uint64_t SZIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_LINIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRF:1;
      uint64_t DTF:1;
      uint64_t DRF:1;
      uint64_t DBEF:1;
      uint64_t DBFF:1;
      uint64_t WUF:1;
      uint64_t RPS:1;
      uint64_t RBSY:1;
      uint64_t reservedSpace0:1;
      uint64_t RMB:1;
      uint64_t reservedSpace1:2;
      uint64_t LINS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_LINSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t reservedSpace0:6;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t IDPEF:1;
      uint64_t BDEF:1;
      uint64_t SFEF:1;
      uint64_t CEF:1;
      uint64_t BEF:1;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_LINESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UART:1;
      uint64_t WL:1;
      uint64_t PCE:1;
      uint64_t OP:1;
      uint64_t TXEN:1;
      uint64_t RXEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RDFL:2;
      uint64_t reservedSpace1:1;
      uint64_t TDFL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_UARTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t DTF:1;
      uint64_t DRF:1;
      uint64_t reservedSpace0:2;
      uint64_t WUF:1;
      uint64_t RPS:1;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t RMB:1;
      uint64_t PE:4;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_UARTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:8;
      uint64_t TOCE:1;
      uint64_t IOT:1;
      uint64_t LTOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_LINTCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OC1:8;
      uint64_t OC2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_LINOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTO:7;
      uint64_t reservedSpace0:1;
      uint64_t RTO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_LINTOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_F:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_LINFBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_M:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_LINIBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_LINCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HTRQ:1;
      uint64_t ABRQ:1;
      uint64_t DTRQ:1;
      uint64_t DDRQ:1;
      uint64_t WURQ:1;
      uint64_t IOPE:1;
      uint64_t IOBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_LINCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_BIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_BDRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4:8;
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_BDRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFMI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_IFMI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_IFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_IFCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_IFCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_IFCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_IFCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_IFCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_IFCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_IFCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_IFCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_IFCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_IFCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_IFCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_IFCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_IFCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_IFCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_IFCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex3_IFCR15;

};

#define LINFlex_LINFlex_3 (*(volatile struct LINFlex_LINFlex_3_tag *) 0xffe4c000)

struct LINFlex_LINFlex_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t SLEEP:1;
      uint64_t RBLM:1;
      uint64_t SBDT:1;
      uint64_t MME:1;
      uint64_t LBKM:1;
      uint64_t SFTM:1;
      uint64_t BF:1;
      uint64_t MBL:4;
      uint64_t AWUM:1;
      uint64_t LASE:1;
      uint64_t CFD:1;
      uint64_t CCD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_LINCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRIE:1;
      uint64_t DTIE:1;
      uint64_t DRIE:1;
      uint64_t DBEIE:1;
      uint64_t DBFIE:1;
      uint64_t WUIE:1;
      uint64_t LSIE:1;
      uint64_t BOIE:1;
      uint64_t FEIE:1;
      uint64_t reservedSpace0:2;
      uint64_t HEIE:1;
      uint64_t CEIE:1;
      uint64_t BEIE:1;
      uint64_t OCIE:1;
      uint64_t SZIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_LINIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRF:1;
      uint64_t DTF:1;
      uint64_t DRF:1;
      uint64_t DBEF:1;
      uint64_t DBFF:1;
      uint64_t WUF:1;
      uint64_t RPS:1;
      uint64_t RBSY:1;
      uint64_t reservedSpace0:1;
      uint64_t RMB:1;
      uint64_t reservedSpace1:2;
      uint64_t LINS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_LINSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t reservedSpace0:6;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t IDPEF:1;
      uint64_t BDEF:1;
      uint64_t SFEF:1;
      uint64_t CEF:1;
      uint64_t BEF:1;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_LINESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UART:1;
      uint64_t WL:1;
      uint64_t PCE:1;
      uint64_t OP:1;
      uint64_t TXEN:1;
      uint64_t RXEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RDFL:2;
      uint64_t reservedSpace1:1;
      uint64_t TDFL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_UARTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t DTF:1;
      uint64_t DRF:1;
      uint64_t reservedSpace0:2;
      uint64_t WUF:1;
      uint64_t RPS:1;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t RMB:1;
      uint64_t PE:4;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_UARTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:8;
      uint64_t TOCE:1;
      uint64_t IOT:1;
      uint64_t LTOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_LINTCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OC1:8;
      uint64_t OC2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_LINOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTO:7;
      uint64_t reservedSpace0:1;
      uint64_t RTO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_LINTOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_F:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_LINFBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_M:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_LINIBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_LINCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HTRQ:1;
      uint64_t ABRQ:1;
      uint64_t DTRQ:1;
      uint64_t DDRQ:1;
      uint64_t WURQ:1;
      uint64_t IOPE:1;
      uint64_t IOBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_LINCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_BIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_BDRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4:8;
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_BDRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFMI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_IFMI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_IFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_IFCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_IFCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_IFCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_IFCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_IFCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_IFCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_IFCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_IFCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_IFCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_IFCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_IFCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_IFCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_IFCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_IFCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_IFCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex4_IFCR15;

};

#define LINFlex_LINFlex_4 (*(volatile struct LINFlex_LINFlex_4_tag *) 0xffe50000)

struct LINFlex_LINFlex_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t SLEEP:1;
      uint64_t RBLM:1;
      uint64_t SBDT:1;
      uint64_t MME:1;
      uint64_t LBKM:1;
      uint64_t SFTM:1;
      uint64_t BF:1;
      uint64_t MBL:4;
      uint64_t AWUM:1;
      uint64_t LASE:1;
      uint64_t CFD:1;
      uint64_t CCD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_LINCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRIE:1;
      uint64_t DTIE:1;
      uint64_t DRIE:1;
      uint64_t DBEIE:1;
      uint64_t DBFIE:1;
      uint64_t WUIE:1;
      uint64_t LSIE:1;
      uint64_t BOIE:1;
      uint64_t FEIE:1;
      uint64_t reservedSpace0:2;
      uint64_t HEIE:1;
      uint64_t CEIE:1;
      uint64_t BEIE:1;
      uint64_t OCIE:1;
      uint64_t SZIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_LINIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRF:1;
      uint64_t DTF:1;
      uint64_t DRF:1;
      uint64_t DBEF:1;
      uint64_t DBFF:1;
      uint64_t WUF:1;
      uint64_t RPS:1;
      uint64_t RBSY:1;
      uint64_t reservedSpace0:1;
      uint64_t RMB:1;
      uint64_t reservedSpace1:2;
      uint64_t LINS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_LINSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t reservedSpace0:6;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t IDPEF:1;
      uint64_t BDEF:1;
      uint64_t SFEF:1;
      uint64_t CEF:1;
      uint64_t BEF:1;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_LINESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UART:1;
      uint64_t WL:1;
      uint64_t PCE:1;
      uint64_t OP:1;
      uint64_t TXEN:1;
      uint64_t RXEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RDFL:2;
      uint64_t reservedSpace1:1;
      uint64_t TDFL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_UARTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t DTF:1;
      uint64_t DRF:1;
      uint64_t reservedSpace0:2;
      uint64_t WUF:1;
      uint64_t RPS:1;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t RMB:1;
      uint64_t PE:4;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_UARTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:8;
      uint64_t TOCE:1;
      uint64_t IOT:1;
      uint64_t LTOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_LINTCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OC1:8;
      uint64_t OC2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_LINOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTO:7;
      uint64_t reservedSpace0:1;
      uint64_t RTO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_LINTOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_F:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_LINFBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_M:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_LINIBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_LINCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HTRQ:1;
      uint64_t ABRQ:1;
      uint64_t DTRQ:1;
      uint64_t DDRQ:1;
      uint64_t WURQ:1;
      uint64_t IOPE:1;
      uint64_t IOBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_LINCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_BIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_BDRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4:8;
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_BDRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFMI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_IFMI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_IFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_IFCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_IFCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_IFCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_IFCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_IFCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_IFCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_IFCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_IFCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_IFCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_IFCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_IFCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_IFCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_IFCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_IFCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_IFCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex5_IFCR15;

};

#define LINFlex_LINFlex_5 (*(volatile struct LINFlex_LINFlex_5_tag *) 0xffe54000)

struct LINFlex_LINFlex_6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t SLEEP:1;
      uint64_t RBLM:1;
      uint64_t SBDT:1;
      uint64_t MME:1;
      uint64_t LBKM:1;
      uint64_t SFTM:1;
      uint64_t BF:1;
      uint64_t MBL:4;
      uint64_t AWUM:1;
      uint64_t LASE:1;
      uint64_t CFD:1;
      uint64_t CCD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_LINCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRIE:1;
      uint64_t DTIE:1;
      uint64_t DRIE:1;
      uint64_t DBEIE:1;
      uint64_t DBFIE:1;
      uint64_t WUIE:1;
      uint64_t LSIE:1;
      uint64_t BOIE:1;
      uint64_t FEIE:1;
      uint64_t reservedSpace0:2;
      uint64_t HEIE:1;
      uint64_t CEIE:1;
      uint64_t BEIE:1;
      uint64_t OCIE:1;
      uint64_t SZIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_LINIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRF:1;
      uint64_t DTF:1;
      uint64_t DRF:1;
      uint64_t DBEF:1;
      uint64_t DBFF:1;
      uint64_t WUF:1;
      uint64_t RPS:1;
      uint64_t RBSY:1;
      uint64_t reservedSpace0:1;
      uint64_t RMB:1;
      uint64_t reservedSpace1:2;
      uint64_t LINS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_LINSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t reservedSpace0:6;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t IDPEF:1;
      uint64_t BDEF:1;
      uint64_t SFEF:1;
      uint64_t CEF:1;
      uint64_t BEF:1;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_LINESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UART:1;
      uint64_t WL:1;
      uint64_t PCE:1;
      uint64_t OP:1;
      uint64_t TXEN:1;
      uint64_t RXEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RDFL:2;
      uint64_t reservedSpace1:1;
      uint64_t TDFL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_UARTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t DTF:1;
      uint64_t DRF:1;
      uint64_t reservedSpace0:2;
      uint64_t WUF:1;
      uint64_t RPS:1;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t RMB:1;
      uint64_t PE:4;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_UARTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:8;
      uint64_t TOCE:1;
      uint64_t IOT:1;
      uint64_t LTOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_LINTCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OC1:8;
      uint64_t OC2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_LINOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTO:7;
      uint64_t reservedSpace0:1;
      uint64_t RTO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_LINTOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_F:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_LINFBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_M:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_LINIBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_LINCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HTRQ:1;
      uint64_t ABRQ:1;
      uint64_t DTRQ:1;
      uint64_t DDRQ:1;
      uint64_t WURQ:1;
      uint64_t IOPE:1;
      uint64_t IOBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_LINCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_BIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_BDRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4:8;
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_BDRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFMI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_IFMI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_IFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_IFCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_IFCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_IFCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_IFCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_IFCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_IFCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_IFCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_IFCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_IFCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_IFCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_IFCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_IFCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_IFCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_IFCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_IFCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex6_IFCR15;

};

#define LINFlex_LINFlex_6 (*(volatile struct LINFlex_LINFlex_6_tag *) 0xffe58000)

struct LINFlex_LINFlex_7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t SLEEP:1;
      uint64_t RBLM:1;
      uint64_t SBDT:1;
      uint64_t MME:1;
      uint64_t LBKM:1;
      uint64_t SFTM:1;
      uint64_t BF:1;
      uint64_t MBL:4;
      uint64_t AWUM:1;
      uint64_t LASE:1;
      uint64_t CFD:1;
      uint64_t CCD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_LINCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRIE:1;
      uint64_t DTIE:1;
      uint64_t DRIE:1;
      uint64_t DBEIE:1;
      uint64_t DBFIE:1;
      uint64_t WUIE:1;
      uint64_t LSIE:1;
      uint64_t BOIE:1;
      uint64_t FEIE:1;
      uint64_t reservedSpace0:2;
      uint64_t HEIE:1;
      uint64_t CEIE:1;
      uint64_t BEIE:1;
      uint64_t OCIE:1;
      uint64_t SZIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_LINIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRF:1;
      uint64_t DTF:1;
      uint64_t DRF:1;
      uint64_t DBEF:1;
      uint64_t DBFF:1;
      uint64_t WUF:1;
      uint64_t RPS:1;
      uint64_t RBSY:1;
      uint64_t reservedSpace0:1;
      uint64_t RMB:1;
      uint64_t reservedSpace1:2;
      uint64_t LINS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_LINSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t reservedSpace0:6;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t IDPEF:1;
      uint64_t BDEF:1;
      uint64_t SFEF:1;
      uint64_t CEF:1;
      uint64_t BEF:1;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_LINESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UART:1;
      uint64_t WL:1;
      uint64_t PCE:1;
      uint64_t OP:1;
      uint64_t TXEN:1;
      uint64_t RXEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RDFL:2;
      uint64_t reservedSpace1:1;
      uint64_t TDFL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_UARTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t DTF:1;
      uint64_t DRF:1;
      uint64_t reservedSpace0:2;
      uint64_t WUF:1;
      uint64_t RPS:1;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t RMB:1;
      uint64_t PE:4;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_UARTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:8;
      uint64_t TOCE:1;
      uint64_t IOT:1;
      uint64_t LTOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_LINTCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OC1:8;
      uint64_t OC2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_LINOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTO:7;
      uint64_t reservedSpace0:1;
      uint64_t RTO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_LINTOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_F:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_LINFBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_M:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_LINIBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_LINCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HTRQ:1;
      uint64_t ABRQ:1;
      uint64_t DTRQ:1;
      uint64_t DDRQ:1;
      uint64_t WURQ:1;
      uint64_t IOPE:1;
      uint64_t IOBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_LINCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_BIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_BDRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4:8;
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_BDRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFMI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_IFMI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_IFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_IFCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_IFCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_IFCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_IFCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_IFCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_IFCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_IFCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_IFCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_IFCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_IFCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_IFCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_IFCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_IFCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_IFCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_IFCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFlex7_IFCR15;

};

#define LINFlex_LINFlex_7 (*(volatile struct LINFlex_LINFlex_7_tag *) 0xffe5c000)

struct PCU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
      uint64_t TEST:1;
      uint64_t SAFE:1;
      uint64_t DRUN:1;
      uint64_t RUN:4;
      uint64_t HALT0:1;
      uint64_t reservedSpace0:1;
      uint64_t STOP0:1;
      uint64_t reservedSpace1:2;
      uint64_t STBY0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCU_PCONF0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
      uint64_t TEST:1;
      uint64_t SAFE:1;
      uint64_t DRUN:1;
      uint64_t RUN:4;
      uint64_t HALT0:1;
      uint64_t reservedSpace0:1;
      uint64_t STOP0:1;
      uint64_t reservedSpace1:2;
      uint64_t STBY0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCU_PCONF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
      uint64_t TEST:1;
      uint64_t SAFE:1;
      uint64_t DRUN:1;
      uint64_t RUN:4;
      uint64_t HALT0:1;
      uint64_t reservedSpace0:1;
      uint64_t STOP0:1;
      uint64_t reservedSpace1:2;
      uint64_t STBY0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCU_PCONF2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
      uint64_t TEST:1;
      uint64_t SAFE:1;
      uint64_t DRUN:1;
      uint64_t RUN:4;
      uint64_t HALT0:1;
      uint64_t reservedSpace0:1;
      uint64_t STOP0:1;
      uint64_t reservedSpace1:2;
      uint64_t STBY0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCU_PCONF3;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCU_PSTAT;

  uint8_t res1[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t V_LVD_MASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VREG_CTL;

};

#define PCU (*(volatile struct PCU_tag *) 0xc3fe8000)

