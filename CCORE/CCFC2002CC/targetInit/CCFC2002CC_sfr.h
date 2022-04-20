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

struct FLASH_tag
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
      uint64_t LAS02:3;
      uint64_t reservedSpace3:1;
      uint64_t SIZE02:3;
      uint64_t reservedSpace4:4;
      uint64_t EDC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFLASH_MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LLK015:16;
      uint64_t MLK01:2;
      uint64_t reservedSpace0:2;
      uint64_t TSLK:1;
      uint64_t reservedSpace1:10;
      uint64_t LME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFLASH_LML;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HLK05:6;
      uint64_t reservedSpace0:25;
      uint64_t HBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFLASH_HBL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLK015:16;
      uint64_t SMK01:2;
      uint64_t reservedSpace0:2;
      uint64_t STSLK:1;
      uint64_t reservedSpace1:10;
      uint64_t SLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFLASH_SLL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSL015:16;
      uint64_t MSL01:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFLASH_LMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSL05:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFLASH_HBS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t AD322:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFLASH_ADR;

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
      uint64_t reservedSpace0:7;
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
      uint64_t reservedSpace1:7;
      uint64_t BK1_RWWC_1:1;
      uint64_t BK1_RWWC_2:1;
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
      uint64_t reservedSpace0:2;
      uint64_t M2AP:2;
      uint64_t reservedSpace1:10;
      uint64_t M0PFD:1;
      uint64_t reservedSpace2:1;
      uint64_t M2PFD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFAPR;

  uint8_t res0[20];

  uint32_t CFLASH_UT0;
  uint32_t CFLASH_UT1;
  uint32_t CFLASH_UT2;
  uint32_t CFLASH_UMISR0;
  uint32_t CFLASH_UMISR1;
  uint32_t CFLASH_UMISR2;
  uint32_t CFLASH_UMISR3;
  uint32_t CFLASH_UMISR4;
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
      uint64_t LAS02:3;
      uint64_t reservedSpace3:1;
      uint64_t SIZE02:3;
      uint64_t reservedSpace4:4;
      uint64_t EDC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFLASH_MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LLK015:16;
      uint64_t MLK01:2;
      uint64_t reservedSpace0:2;
      uint64_t TSLK:1;
      uint64_t reservedSpace1:10;
      uint64_t LME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFLASH_LML;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLK015:16;
      uint64_t SMK01:2;
      uint64_t reservedSpace0:2;
      uint64_t STSLK:1;
      uint64_t reservedSpace1:10;
      uint64_t SLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFLASH_SLL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSL015:16;
      uint64_t MSL01:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFLASH_LMS;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t AD322:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFLASH_ADR;

  uint8_t res4[32];

  uint32_t DFLASH_UT0;
  uint32_t DFLASH_UT1;
  uint32_t DFLASH_UT2;
  uint32_t DFLASH_UMISR0;
  uint32_t DFLASH_UMISR1;
  uint32_t DFLASH_UMISR2;
  uint32_t DFLASH_UMISR3;
  uint32_t DFLASH_UMISR4;
};

#define FLASH (*(volatile struct FLASH_tag *) 0xc3f88000)

struct SIU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR_MASK03:4;
      uint64_t MAJOR_MASK03:4;
      uint64_t reservedSpace0:2;
      uint64_t PKG04:5;
      uint64_t CSP:1;
      uint64_t PARTNUM015:16;
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
      uint64_t PARTNUM1623:8;
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
      uint64_t EIF015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRE015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRER;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IREE015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IREER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFEE015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFEER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFE015:16;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR120_0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR120_1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR120_2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WPS:1;
      uint64_t WPE:1;
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
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
      uint64_t SRC01:2;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:2;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t PA01:2;
      uint64_t reservedSpace2:1;
      uint64_t APC:1;
      uint64_t SMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCR122;

  uint8_t res3[966];

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

  uint8_t res4[224];

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

  uint8_t res5[388];

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

  uint8_t res6[900];

  uint32_t PGPDO0;
  uint32_t PGPDO1;
  uint32_t PGPDO2;
  uint32_t PGPDO3;
  uint8_t res7[48];

  uint32_t PGPDI0;
  uint32_t PGPDI1;
  uint32_t PGPDI2;
  uint32_t PGPDI3;
  uint8_t res8[48];

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

  uint8_t res9[864];

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
  } __attribute__((aligned(4))) FMC5;

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

  uint8_t res10[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFCP03:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCPR;

};

#define SIU (*(volatile struct SIU_tag *) 0xc3f90004)

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
  } __attribute__((aligned(4))) WKPU_NSR;

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
  } __attribute__((aligned(4))) WKPU_NCR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIF_170:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WKPU_WISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRE_170:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WKPU_IRER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRE_170:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WKPU_WRER;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IREE_170:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WKPU_WIREER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFEE_170:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WKPU_WIFEER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFE_170:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WKPU_WIFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPUE_170:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WKPU_WIPUER;

};

#define WKPU (*(volatile struct WKPU_tag *) 0xc3f94000)

struct eMIOS_eMIOS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t GPRE07:8;
      uint64_t SRV03:4;
      uint64_t reservedSpace1:6;
      uint64_t GPREN:1;
      uint64_t ETB:1;
      uint64_t GTBE:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
      uint64_t DOZEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS_MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS_GFLAG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OU023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS_OUDIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHDIS023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS_UCDIS;

};

#define eMIOS_eMIOS (*(volatile struct eMIOS_eMIOS_tag *) 0xc3fa0000)

struct eMIOS_eMIOS0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC0_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC0_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC0_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC0_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC0_SS;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC1_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC1_B;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC1_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC1_SS;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC2_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC2_B;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC2_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC2_SS;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC3_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC3_B;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC3_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC3_SS;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC4_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC4_B;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC4_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC4_SS;

  uint8_t res8[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC5_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC5_B;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC5_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC5_SS;

  uint8_t res10[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC6_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC6_B;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC6_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC6_SS;

  uint8_t res12[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC7_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC7_B;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC7_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC7_SS;

  uint8_t res14[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC8_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC8_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC8_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC8_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC8_SS;

  uint8_t res15[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC9_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC9_B;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC9_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC9_SS;

  uint8_t res17[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC10_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC10_B;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC10_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC10_SS;

  uint8_t res19[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC11_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC11_B;

  uint8_t res20[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC11_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC11_SS;

  uint8_t res21[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC12_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC12_B;

  uint8_t res22[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC12_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC12_SS;

  uint8_t res23[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC13_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC13_B;

  uint8_t res24[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC13_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC13_SS;

  uint8_t res25[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC14_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC14_B;

  uint8_t res26[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC14_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC14_SS;

  uint8_t res27[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC15_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC15_B;

  uint8_t res28[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC15_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC15_SS;

  uint8_t res29[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC16_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC16_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC16_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC16_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC16_SS;

  uint8_t res30[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC17_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC17_B;

  uint8_t res31[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC17_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC17_SS;

  uint8_t res32[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC18_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC18_B;

  uint8_t res33[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC18_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC18_SS;

  uint8_t res34[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC19_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC19_B;

  uint8_t res35[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC19_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC19_SS;

  uint8_t res36[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC20_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC20_B;

  uint8_t res37[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC20_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC20_SS;

  uint8_t res38[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC21_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC21_B;

  uint8_t res39[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC21_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC21_SS;

  uint8_t res40[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC22_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC22_B;

  uint8_t res41[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC22_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC22_SS;

  uint8_t res42[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC23_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC23_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC23_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC23_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC23_SS;

  uint8_t res43[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC24_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC24_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC24_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC24_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC24_SS;

  uint8_t res44[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC25_A;

  uint8_t res45[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC25_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC25_SS;

  uint8_t res46[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC26_A;

  uint8_t res47[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC26_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC26_SS;

  uint8_t res48[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC27_A;

  uint8_t res49[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC27_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS0_UC27_SS;

};

#define eMIOS_eMIOS0 (*(volatile struct eMIOS_eMIOS0_tag *) 0xc3fa0020)

struct eMIOS_eMIOS1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC0_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC0_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC0_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC0_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC0_SS;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC1_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC1_B;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC1_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC1_SS;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC2_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC2_B;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC2_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC2_SS;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC3_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC3_B;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC3_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC3_SS;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC4_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC4_B;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC4_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC4_SS;

  uint8_t res8[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC5_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC5_B;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC5_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC5_SS;

  uint8_t res10[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC6_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC6_B;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC6_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC6_SS;

  uint8_t res12[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC7_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC7_B;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC7_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC7_SS;

  uint8_t res14[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC8_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC8_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC8_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC8_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC8_SS;

  uint8_t res15[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC9_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC9_B;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC9_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC9_SS;

  uint8_t res17[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC10_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC10_B;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC10_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC10_SS;

  uint8_t res19[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC11_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC11_B;

  uint8_t res20[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC11_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC11_SS;

  uint8_t res21[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC12_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC12_B;

  uint8_t res22[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC12_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC12_SS;

  uint8_t res23[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC13_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC13_B;

  uint8_t res24[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC13_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC13_SS;

  uint8_t res25[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC14_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC14_B;

  uint8_t res26[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC14_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC14_SS;

  uint8_t res27[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC15_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC15_B;

  uint8_t res28[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC15_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC15_SS;

  uint8_t res29[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC16_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC16_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC16_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC16_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC16_SS;

  uint8_t res30[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC17_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC17_B;

  uint8_t res31[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC17_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC17_SS;

  uint8_t res32[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC18_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC18_B;

  uint8_t res33[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC18_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC18_SS;

  uint8_t res34[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC19_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC19_B;

  uint8_t res35[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC19_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC19_SS;

  uint8_t res36[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC20_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC20_B;

  uint8_t res37[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC20_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC20_SS;

  uint8_t res38[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC21_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC21_B;

  uint8_t res39[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC21_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC21_SS;

  uint8_t res40[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC22_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC22_B;

  uint8_t res41[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC22_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC22_SS;

  uint8_t res42[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC23_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC23_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC23_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC23_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC23_SS;

  uint8_t res43[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC24_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC24_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC24_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC24_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC24_SS;

  uint8_t res44[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC25_A;

  uint8_t res45[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC25_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC25_SS;

  uint8_t res46[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC26_A;

  uint8_t res47[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC26_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC26_SS;

  uint8_t res48[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A023:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC27_A;

  uint8_t res49[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE06:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL01:1;
      uint64_t reservedSpace0:2;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF03:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE01:2;
      uint64_t ODISSL01:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC27_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMIOS1_UC27_SS;

};

#define eMIOS_eMIOS1 (*(volatile struct eMIOS_eMIOS1_tag *) 0xc3fa4020)

struct BAM_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t BOOT_ID07:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RCHW;

};

#define BAM (*(volatile struct BAM_tag *) 0xffffc000)

struct SSCM_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t ABD:1;
      uint64_t reservedSpace1:1;
      uint64_t BMODE_20:3;
      uint64_t reservedSpace2:19;
      uint64_t NXEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DVLD:1;
      uint64_t reservedSpace0:4;
      uint64_t IVLD:1;
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
      uint64_t DEBUG_MODE_20:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DEBUGPORT;

  uint8_t res1[2];

  uint32_t PWCMPH;
  uint32_t PWCMPL;
};

#define SSCM (*(volatile struct SSCM_tag *) 0xc3fd8000)

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
      uint64_t S_RTCAPI_Peripheral_status:1;
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

struct OSC_tag
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

  uint8_t res0[60];

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
      uint64_t reservedSpace1:3;
      uint64_t EOCV:8;
      uint64_t reservedSpace2:7;
      uint64_t OSCBYP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SXOSC_CTL;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t FIRCON_STDBY:1;
      uint64_t reservedSpace1:2;
      uint64_t FIRCDIV:5;
      uint64_t reservedSpace2:3;
      uint64_t FIRCTRIM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RC_CTL;

  uint8_t res2[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIRCON_STDBY:1;
      uint64_t reservedSpace0:3;
      uint64_t S_SIRC:1;
      uint64_t reservedSpace1:3;
      uint64_t SIRCDIV:5;
      uint64_t reservedSpace2:3;
      uint64_t SIRCTRIM:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIRC_CTL;

};

#define OSC (*(volatile struct OSC_tag *) 0xc3fe0000)

struct PLL_tag
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
  } __attribute__((aligned(4))) PLLD0_CR;

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
  } __attribute__((aligned(4))) PLLD0_MR;

};

#define PLL (*(volatile struct PLL_tag *) 0xc3fe00a0)

struct CMU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CME_A:1;
      uint64_t RCDIV01:2;
      uint64_t reservedSpace0:5;
      uint64_t CKSEL1:2;
      uint64_t reservedSpace1:13;
      uint64_t SFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMU0_CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t FD019:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMU0_FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF011:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMU0_HFREFR_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF011:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMU0_LFREFR_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLRI:1;
      uint64_t FLLI:1;
      uint64_t FHHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMU0_ISR;

  uint32_t CMU0_IMR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD019:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMU0_MDR;

};

#define CMU (*(volatile struct CMU_tag *) 0xc3fe0100)

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

struct Frequency_modulated_phase_locked_loop_tag
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
      uint64_t i_LOCK:1;
      uint64_t reservedSpace1:1;
      uint64_t UN_LOCK_ONCE:1;
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

#define Frequency_modulated_phase_locked_loop (*(volatile struct Frequency_modulated_phase_locked_loop_tag *) 0xc3fe00a0)

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
      uint64_t F_PLL0:1;
      uint64_t F_CMU0_OLR:1;
      uint64_t F_CMU0_FHL:1;
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
      uint64_t reservedSpace0:11;
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
      uint64_t reservedSpace0:2;
      uint64_t D_PLL0:1;
      uint64_t D_CMU0_OLR:1;
      uint64_t D_CMU0_FHL:1;
      uint64_t D_LVD45:1;
      uint64_t D_FLASH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RGM_FERD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t D_SWT:1;
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
      uint64_t AR_CHKSTOP:1;
      uint64_t reservedSpace0:1;
      uint64_t AR_PLL0:1;
      uint64_t AR_CMU0_OLR:1;
      uint64_t AR_CMU0_FHL:1;
      uint64_t AR_LVD45:1;
      uint64_t AR_FLASH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RGM_FEAR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t AR_SWT:1;
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
      uint64_t SS_PLL0:1;
      uint64_t SS_CMU0_OLR:1;
      uint64_t SS_CMU0_FHL:1;
      uint64_t SS_LVD45:1;
      uint64_t SS_FLASH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RGM_FESS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DRUN_CFLA:1;
      uint64_t reservedSpace0:1;
      uint64_t DRUN_DFLA:1;
      uint64_t reservedSpace1:4;
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
      uint64_t BE_PLL0:1;
      uint64_t BE_CMU0_OLR:1;
      uint64_t BE_CMU0_FHL:1;
      uint64_t BE_LVD45:1;
      uint64_t BE_FLASH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RGM_FBRE;

};

#define RGM (*(volatile struct RGM_tag *) 0xc3fe4000)

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

};

#define PIT (*(volatile struct PIT_tag *) 0xc3ff0000)

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC_CH0:1;
      uint64_t EOC_CH1:1;
      uint64_t EOC_CH2:1;
      uint64_t EOC_CH3:1;
      uint64_t EOC_CH4:1;
      uint64_t EOC_CH5:1;
      uint64_t EOC_CH6:1;
      uint64_t EOC_CH7:1;
      uint64_t EOC_CH8:1;
      uint64_t EOC_CH9:1;
      uint64_t EOC_CH10:1;
      uint64_t EOC_CH11:1;
      uint64_t EOC_CH12:1;
      uint64_t EOC_CH13:1;
      uint64_t EOC_CH14:1;
      uint64_t EOC_CH15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CEOCFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC_CH32:1;
      uint64_t EOC_CH33:1;
      uint64_t EOC_CH34:1;
      uint64_t EOC_CH35:1;
      uint64_t EOC_CH36:1;
      uint64_t EOC_CH37:1;
      uint64_t EOC_CH38:1;
      uint64_t EOC_CH39:1;
      uint64_t EOC_CH40:1;
      uint64_t EOC_CH41:1;
      uint64_t EOC_CH42:1;
      uint64_t EOC_CH43:1;
      uint64_t EOC_CH44:1;
      uint64_t EOC_CH45:1;
      uint64_t EOC_CH46:1;
      uint64_t EOC_CH47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CEOCFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC_CH64:1;
      uint64_t EOC_CH65:1;
      uint64_t EOC_CH66:1;
      uint64_t EOC_CH67:1;
      uint64_t EOC_CH68:1;
      uint64_t EOC_CH69:1;
      uint64_t EOC_CH70:1;
      uint64_t EOC_CH71:1;
      uint64_t EOC_CH72:1;
      uint64_t EOC_CH73:1;
      uint64_t EOC_CH74:1;
      uint64_t EOC_CH75:1;
      uint64_t EOC_CH76:1;
      uint64_t EOC_CH77:1;
      uint64_t EOC_CH78:1;
      uint64_t EOC_CH79:1;
      uint64_t EOC_CH80:1;
      uint64_t EOC_CH81:1;
      uint64_t EOC_CH82:1;
      uint64_t EOC_CH83:1;
      uint64_t EOC_CH84:1;
      uint64_t EOC_CH85:1;
      uint64_t EOC_CH86:1;
      uint64_t EOC_CH87:1;
      uint64_t EOC_CH88:1;
      uint64_t EOC_CH89:1;
      uint64_t EOC_CH90:1;
      uint64_t EOC_CH91:1;
      uint64_t EOC_CH92:1;
      uint64_t EOC_CH93:1;
      uint64_t EOC_CH94:1;
      uint64_t EOC_CH95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CEOCFR2;

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIM0:1;
      uint64_t CIM1:1;
      uint64_t CIM2:1;
      uint64_t CIM3:1;
      uint64_t CIM4:1;
      uint64_t CIM5:1;
      uint64_t CIM6:1;
      uint64_t CIM7:1;
      uint64_t CIM8:1;
      uint64_t CIM9:1;
      uint64_t CIM10:1;
      uint64_t CIM11:1;
      uint64_t CIM12:1;
      uint64_t CIM13:1;
      uint64_t CIM14:1;
      uint64_t CIM15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CIMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIM32:1;
      uint64_t CIM33:1;
      uint64_t CIM34:1;
      uint64_t CIM35:1;
      uint64_t CIM36:1;
      uint64_t CIM37:1;
      uint64_t CIM38:1;
      uint64_t CIM39:1;
      uint64_t CIM40:1;
      uint64_t CIM41:1;
      uint64_t CIM42:1;
      uint64_t CIM43:1;
      uint64_t CIM44:1;
      uint64_t CIM45:1;
      uint64_t CIM46:1;
      uint64_t CIM47:1;
      uint64_t CIM48:1;
      uint64_t CIM49:1;
      uint64_t CIM50:1;
      uint64_t CIM51:1;
      uint64_t CIM52:1;
      uint64_t CIM53:1;
      uint64_t CIM54:1;
      uint64_t CIM55:1;
      uint64_t CIM56:1;
      uint64_t CIM57:1;
      uint64_t CIM58:1;
      uint64_t CIM59:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CIMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIM64:1;
      uint64_t CIM65:1;
      uint64_t CIM66:1;
      uint64_t CIM67:1;
      uint64_t CIM68:1;
      uint64_t CIM69:1;
      uint64_t CIM70:1;
      uint64_t CIM71:1;
      uint64_t CIM72:1;
      uint64_t CIM73:1;
      uint64_t CIM74:1;
      uint64_t CIM75:1;
      uint64_t CIM76:1;
      uint64_t CIM77:1;
      uint64_t CIM78:1;
      uint64_t CIM79:1;
      uint64_t CIM80:1;
      uint64_t CIM81:1;
      uint64_t CIM82:1;
      uint64_t CIM83:1;
      uint64_t CIM84:1;
      uint64_t CIM85:1;
      uint64_t CIM86:1;
      uint64_t CIM87:1;
      uint64_t CIM88:1;
      uint64_t CIM89:1;
      uint64_t CIM90:1;
      uint64_t CIM91:1;
      uint64_t CIM92:1;
      uint64_t CIM93:1;
      uint64_t CIM94:1;
      uint64_t CIM95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CIMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDG0L:1;
      uint64_t WDG1L:1;
      uint64_t WDG2L:1;
      uint64_t WDG3L:1;
      uint64_t WDG0H:1;
      uint64_t WDG1H:1;
      uint64_t WDG2H:1;
      uint64_t WDG3H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_WTISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MSKWDG0H:1;
      uint64_t MSKWDG0L:1;
      uint64_t reservedSpace1:1;
      uint64_t MSKWDG1H:1;
      uint64_t MSKWDG1L:1;
      uint64_t reservedSpace2:1;
      uint64_t MSKWDG2H:1;
      uint64_t MSKWDG2L:1;
      uint64_t reservedSpace3:1;
      uint64_t MSKWDG3H:1;
      uint64_t MSKWDG3L:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_WTIMR;

  uint8_t res1[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRCH:7;
      uint64_t reservedSpace0:8;
      uint64_t THREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Threshold_Control_Register_TRC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRCH:7;
      uint64_t reservedSpace0:8;
      uint64_t THREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Threshold_Control_Register_TRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRCH:7;
      uint64_t reservedSpace0:8;
      uint64_t THREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Threshold_Control_Register_TRC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRCH:7;
      uint64_t reservedSpace0:8;
      uint64_t THREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Threshold_Control_Register_TRC3;

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

  uint8_t res2[16];

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
  } __attribute__((aligned(4))) Presampling_Control_Register_PSCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRES0:1;
      uint64_t PRES1:1;
      uint64_t PRES2:1;
      uint64_t PRES3:1;
      uint64_t PRES4:1;
      uint64_t PRES5:1;
      uint64_t PRES6:1;
      uint64_t PRES7:1;
      uint64_t PRES8:1;
      uint64_t PRES9:1;
      uint64_t PRES10:1;
      uint64_t PRES11:1;
      uint64_t PRES12:1;
      uint64_t PRES13:1;
      uint64_t PRES14:1;
      uint64_t PRES15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Presampling_Register_PSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRES32:1;
      uint64_t PRES33:1;
      uint64_t PRES34:1;
      uint64_t PRES35:1;
      uint64_t PRES36:1;
      uint64_t PRES37:1;
      uint64_t PRES38:1;
      uint64_t PRES39:1;
      uint64_t PRES40:1;
      uint64_t PRES41:1;
      uint64_t PRES42:1;
      uint64_t PRES43:1;
      uint64_t PRES44:1;
      uint64_t PRES45:1;
      uint64_t PRES46:1;
      uint64_t PRES47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Presampling_Register_PSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRES64:1;
      uint64_t PRES65:1;
      uint64_t PRES66:1;
      uint64_t PRES67:1;
      uint64_t PRES68:1;
      uint64_t PRES69:1;
      uint64_t PRES70:1;
      uint64_t PRES71:1;
      uint64_t PRES72:1;
      uint64_t PRES73:1;
      uint64_t PRES74:1;
      uint64_t PRES75:1;
      uint64_t PRES76:1;
      uint64_t PRES77:1;
      uint64_t PRES78:1;
      uint64_t PRES79:1;
      uint64_t PRES80:1;
      uint64_t PRES81:1;
      uint64_t PRES82:1;
      uint64_t PRES83:1;
      uint64_t PRES84:1;
      uint64_t PRES85:1;
      uint64_t PRES86:1;
      uint64_t PRES87:1;
      uint64_t PRES88:1;
      uint64_t PRES89:1;
      uint64_t PRES90:1;
      uint64_t PRES91:1;
      uint64_t PRES92:1;
      uint64_t PRES93:1;
      uint64_t PRES94:1;
      uint64_t PRES95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Presampling_Register_PSR2;

  uint8_t res3[4];

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

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
      uint64_t CH4:1;
      uint64_t CH5:1;
      uint64_t CH6:1;
      uint64_t CH7:1;
      uint64_t CH8:1;
      uint64_t CH9:1;
      uint64_t CH10:1;
      uint64_t CH11:1;
      uint64_t CH12:1;
      uint64_t CH13:1;
      uint64_t CH14:1;
      uint64_t CH15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_NCMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH32:1;
      uint64_t CH33:1;
      uint64_t CH34:1;
      uint64_t CH35:1;
      uint64_t CH36:1;
      uint64_t CH37:1;
      uint64_t CH38:1;
      uint64_t CH39:1;
      uint64_t CH40:1;
      uint64_t CH41:1;
      uint64_t CH42:1;
      uint64_t CH43:1;
      uint64_t CH44:1;
      uint64_t CH45:1;
      uint64_t CH46:1;
      uint64_t CH47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_NCMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH64:1;
      uint64_t CH65:1;
      uint64_t CH66:1;
      uint64_t CH67:1;
      uint64_t CH68:1;
      uint64_t CH69:1;
      uint64_t CH70:1;
      uint64_t CH71:1;
      uint64_t CH72:1;
      uint64_t CH73:1;
      uint64_t CH74:1;
      uint64_t CH75:1;
      uint64_t CH76:1;
      uint64_t CH77:1;
      uint64_t CH78:1;
      uint64_t CH79:1;
      uint64_t CH80:1;
      uint64_t CH81:1;
      uint64_t CH82:1;
      uint64_t CH83:1;
      uint64_t CH84:1;
      uint64_t CH85:1;
      uint64_t CH86:1;
      uint64_t CH87:1;
      uint64_t CH88:1;
      uint64_t CH89:1;
      uint64_t CH90:1;
      uint64_t CH91:1;
      uint64_t CH92:1;
      uint64_t CH93:1;
      uint64_t CH94:1;
      uint64_t CH95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_NCMR2;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
      uint64_t CH4:1;
      uint64_t CH5:1;
      uint64_t CH6:1;
      uint64_t CH7:1;
      uint64_t CH8:1;
      uint64_t CH9:1;
      uint64_t CH10:1;
      uint64_t CH11:1;
      uint64_t CH12:1;
      uint64_t CH13:1;
      uint64_t CH14:1;
      uint64_t CH15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_JCMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH32:1;
      uint64_t CH33:1;
      uint64_t CH34:1;
      uint64_t CH35:1;
      uint64_t CH36:1;
      uint64_t CH37:1;
      uint64_t CH38:1;
      uint64_t CH39:1;
      uint64_t CH40:1;
      uint64_t CH41:1;
      uint64_t CH42:1;
      uint64_t CH43:1;
      uint64_t CH44:1;
      uint64_t CH45:1;
      uint64_t CH46:1;
      uint64_t CH47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_JCMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH64:1;
      uint64_t CH65:1;
      uint64_t CH66:1;
      uint64_t CH67:1;
      uint64_t CH68:1;
      uint64_t CH69:1;
      uint64_t CH70:1;
      uint64_t CH71:1;
      uint64_t CH72:1;
      uint64_t CH73:1;
      uint64_t CH74:1;
      uint64_t CH75:1;
      uint64_t CH76:1;
      uint64_t CH77:1;
      uint64_t CH78:1;
      uint64_t CH79:1;
      uint64_t CH80:1;
      uint64_t CH81:1;
      uint64_t CH82:1;
      uint64_t CH83:1;
      uint64_t CH84:1;
      uint64_t CH85:1;
      uint64_t CH86:1;
      uint64_t CH87:1;
      uint64_t CH88:1;
      uint64_t CH89:1;
      uint64_t CH90:1;
      uint64_t CH91:1;
      uint64_t CH92:1;
      uint64_t CH93:1;
      uint64_t CH94:1;
      uint64_t CH95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_JCMR2;

  uint8_t res6[4];

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

  uint8_t res7[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR15;

  uint8_t res8[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR59;

  uint8_t res9[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
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
      uint64_t CDATA:10;
      uint64_t reservedSpace0:6;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_CDR95;

};

#define ADC (*(volatile struct ADC_tag *) 0xffe00000)

struct I2C_tag
{
  uint8_t IBAD;
  uint8_t IBFD;
  uint8_t IBCR;
  uint8_t IBSR;
  uint8_t IBDR;
  uint8_t IBIC;
};

#define I2C (*(volatile struct I2C_tag *) 0xffe30000)

struct LINFlex_LINFlex0_tag
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
      uint64_t MBL03:4;
      uint64_t AWUM:1;
      uint64_t LASE:1;
      uint64_t CFD:1;
      uint64_t CCD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCR1;

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
  } __attribute__((aligned(4))) LINIER;

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
      uint64_t LINS03:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINSR;

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
  } __attribute__((aligned(4))) LINESR;

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
      uint64_t RDFL01:2;
      uint64_t reservedSpace1:1;
      uint64_t TDFL01:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCR;

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
      uint64_t PE0:1;
      uint64_t PE1:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT07:8;
      uint64_t TOCE:1;
      uint64_t IOT:1;
      uint64_t LTOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINTCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OC1:8;
      uint64_t OC2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTO06:7;
      uint64_t reservedSpace0:1;
      uint64_t RTO03:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINTOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_F03:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_M012:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINIBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF07:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCFR;

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
  } __attribute__((aligned(4))) LINCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL05:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BIDR;

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
  } __attribute__((aligned(4))) BDRL;

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
  } __attribute__((aligned(4))) BDRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACT07:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFMI04:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFM07:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR15;

};

#define LINFlex_LINFlex0 (*(volatile struct LINFlex_LINFlex0_tag *) 0xffe40000)

struct LINFlex_LINFlex1_tag
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
      uint64_t MBL03:4;
      uint64_t AWUM:1;
      uint64_t LASE:1;
      uint64_t CFD:1;
      uint64_t CCD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCR1;

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
  } __attribute__((aligned(4))) LINIER;

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
      uint64_t LINS03:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINSR;

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
  } __attribute__((aligned(4))) LINESR;

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
      uint64_t RDFL01:2;
      uint64_t reservedSpace1:1;
      uint64_t TDFL01:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCR;

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
      uint64_t PE0:1;
      uint64_t PE1:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT07:8;
      uint64_t TOCE:1;
      uint64_t IOT:1;
      uint64_t LTOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINTCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OC1:8;
      uint64_t OC2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTO06:7;
      uint64_t reservedSpace0:1;
      uint64_t RTO03:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINTOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_F03:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_M012:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINIBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF07:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCFR;

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
  } __attribute__((aligned(4))) LINCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL05:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BIDR;

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
  } __attribute__((aligned(4))) BDRL;

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
  } __attribute__((aligned(4))) BDRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACT07:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFMI04:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFM07:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR15;

};

#define LINFlex_LINFlex1 (*(volatile struct LINFlex_LINFlex1_tag *) 0xffe44000)

struct LINFlex_LINFlex2_tag
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
      uint64_t MBL03:4;
      uint64_t AWUM:1;
      uint64_t LASE:1;
      uint64_t CFD:1;
      uint64_t CCD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCR1;

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
  } __attribute__((aligned(4))) LINIER;

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
      uint64_t LINS03:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINSR;

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
  } __attribute__((aligned(4))) LINESR;

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
      uint64_t RDFL01:2;
      uint64_t reservedSpace1:1;
      uint64_t TDFL01:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCR;

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
      uint64_t PE0:1;
      uint64_t PE1:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT07:8;
      uint64_t TOCE:1;
      uint64_t IOT:1;
      uint64_t LTOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINTCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OC1:8;
      uint64_t OC2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTO06:7;
      uint64_t reservedSpace0:1;
      uint64_t RTO03:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINTOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_F03:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_M012:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINIBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF07:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCFR;

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
  } __attribute__((aligned(4))) LINCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL05:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BIDR;

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
  } __attribute__((aligned(4))) BDRL;

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
  } __attribute__((aligned(4))) BDRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACT07:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFMI04:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFM07:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR15;

};

#define LINFlex_LINFlex2 (*(volatile struct LINFlex_LINFlex2_tag *) 0xffe48000)

struct LINFlex_LINFlex3_tag
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
      uint64_t MBL03:4;
      uint64_t AWUM:1;
      uint64_t LASE:1;
      uint64_t CFD:1;
      uint64_t CCD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCR1;

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
  } __attribute__((aligned(4))) LINIER;

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
      uint64_t LINS03:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINSR;

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
  } __attribute__((aligned(4))) LINESR;

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
      uint64_t RDFL01:2;
      uint64_t reservedSpace1:1;
      uint64_t TDFL01:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCR;

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
      uint64_t PE0:1;
      uint64_t PE1:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT07:8;
      uint64_t TOCE:1;
      uint64_t IOT:1;
      uint64_t LTOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINTCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OC1:8;
      uint64_t OC2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTO06:7;
      uint64_t reservedSpace0:1;
      uint64_t RTO03:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINTOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_F03:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_M012:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINIBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF07:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCFR;

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
  } __attribute__((aligned(4))) LINCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL05:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BIDR;

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
  } __attribute__((aligned(4))) BDRL;

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
  } __attribute__((aligned(4))) BDRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACT07:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFMI04:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFM07:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID05:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL02:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR15;

};

#define LINFlex_LINFlex3 (*(volatile struct LINFlex_LINFlex3_tag *) 0xffe4c000)

struct CTU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE:6;
      uint64_t reservedSpace0:1;
      uint64_t CLR_FLAG:1;
      uint64_t reservedSpace1:7;
      uint64_t TM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTU_EVTCFGR63;

};

#define CTU (*(volatile struct CTU_tag *) 0xffe64030)

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
    uint64_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
      uint64_t reservedSpace1:5;
      uint64_t ENADDR:27;
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
      uint64_t VLD:1;
      uint64_t reservedSpace2:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(16))) MPU_RGD0;

  union
  {
    uint64_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
      uint64_t reservedSpace1:5;
      uint64_t ENADDR:27;
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
      uint64_t VLD:1;
      uint64_t reservedSpace2:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(16))) MPU_RGD1;

  union
  {
    uint64_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
      uint64_t reservedSpace1:5;
      uint64_t ENADDR:27;
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
      uint64_t VLD:1;
      uint64_t reservedSpace2:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(16))) MPU_RGD2;

  union
  {
    uint64_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
      uint64_t reservedSpace1:5;
      uint64_t ENADDR:27;
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
      uint64_t VLD:1;
      uint64_t reservedSpace2:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(16))) MPU_RGD3;

  union
  {
    uint64_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
      uint64_t reservedSpace1:5;
      uint64_t ENADDR:27;
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
      uint64_t VLD:1;
      uint64_t reservedSpace2:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(16))) MPU_RGD4;

  union
  {
    uint64_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
      uint64_t reservedSpace1:5;
      uint64_t ENADDR:27;
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
      uint64_t VLD:1;
      uint64_t reservedSpace2:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(16))) MPU_RGD5;

  union
  {
    uint64_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
      uint64_t reservedSpace1:5;
      uint64_t ENADDR:27;
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
      uint64_t VLD:1;
      uint64_t reservedSpace2:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(16))) MPU_RGD6;

  union
  {
    uint64_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
      uint64_t reservedSpace1:5;
      uint64_t ENADDR:27;
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
      uint64_t VLD:1;
      uint64_t reservedSpace2:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(16))) MPU_RGD7;

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
      uint64_t CPS_70:8;
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

struct ECSM_tag
{
  uint16_t ECSM_PCT;
  uint16_t ECSM_PLREV;
  uint8_t res0[4];

  uint32_t ECSM_IOPMC;
  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t R:1;
      uint64_t POR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ECSM_MRSR;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRILVL03:4;
      uint64_t reservedSpace0:3;
      uint64_t ENBWCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ECSM_MWCR;

  uint8_t res3[11];

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
  } __attribute__((aligned(1))) ECSM_MIR;

  uint8_t res4[4];

  uint32_t ECSM_MUDCR;
  uint8_t res5[27];

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
  } __attribute__((aligned(1))) ECSM_ECR;

  uint8_t res6[3];

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
  } __attribute__((aligned(1))) ECSM_ESR;

  uint8_t res7[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ERRBIT06:7;
      uint64_t reservedSpace0:1;
      uint64_t FR1NCI:1;
      uint64_t FRCNCI:1;
      uint64_t reservedSpace1:2;
      uint64_t FR11BI:1;
      uint64_t FRC1BI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ECSM_EEGR;

  uint8_t res8[4];

  uint32_t ECSM_PFEAR;
  uint8_t res9[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FEMR03:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ECSM_PFEMR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROTECTION03:4;
      uint64_t SIZE02:3;
      uint64_t WRITE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ECSM_PFEAT;

  uint8_t res10[4];

  uint32_t ECSM_PFEDR;
  uint32_t ECSM_PREAR;
  uint8_t res11[1];

  uint8_t ECSM_PRESR;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t REMR03:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ECSM_PREMR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROTECTION03:4;
      uint64_t SIZE02:3;
      uint64_t WRITE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ECSM_PREAT;

  uint8_t res12[4];

  uint32_t ECSM_PREDR;
};

#define ECSM (*(volatile struct ECSM_tag *) 0xfff40000)

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
      uint64_t PRI03:4;
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
      uint64_t VTBA:20;
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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PRI210:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_PSR210;

};

#define INTC (*(volatile struct INTC_tag *) 0xfff48000)

struct DSPI_DSPI0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HALT:1;
      uint64_t reservedSpace0:7;
      uint64_t SMPL_PT01:2;
      uint64_t CLR_RXF:1;
      uint64_t CLR_TXF:1;
      uint64_t DIS_RXF:1;
      uint64_t DIS_TXF:1;
      uint64_t MDIS:1;
      uint64_t reservedSpace1:1;
      uint64_t PCSIS05:6;
      uint64_t reservedSpace2:2;
      uint64_t ROOE:1;
      uint64_t PCSSE:1;
      uint64_t MTFE:1;
      uint64_t FRZ:1;
      uint64_t DCONF01:2;
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
      uint64_t SPI_TCNT015:16;
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
      uint64_t POPNXTPTR03:4;
      uint64_t RXCTR03:4;
      uint64_t TXNXTPTR03:4;
      uint64_t TXCTR03:4;
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
      uint64_t TXDATA015:16;
      uint64_t PCS05:6;
      uint64_t reservedSpace0:4;
      uint64_t CTCNT:1;
      uint64_t EOQ:1;
      uint64_t CTAS02:3;
      uint64_t CONT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_PUSHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_POPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA015:16;
      uint64_t TXCMD015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_TXFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA015:16;
      uint64_t TXCMD015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_TXFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA015:16;
      uint64_t TXCMD015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_TXFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA015:16;
      uint64_t TXCMD015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_TXFR3;

  uint8_t res2[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_RXFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_RXFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_RXFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI0_RXFR3;

};

#define DSPI_DSPI0 (*(volatile struct DSPI_DSPI0_tag *) 0xfff90000)

struct DSPI_DSPI1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HALT:1;
      uint64_t reservedSpace0:7;
      uint64_t SMPL_PT01:2;
      uint64_t CLR_RXF:1;
      uint64_t CLR_TXF:1;
      uint64_t DIS_RXF:1;
      uint64_t DIS_TXF:1;
      uint64_t MDIS:1;
      uint64_t reservedSpace1:1;
      uint64_t PCSIS05:6;
      uint64_t reservedSpace2:2;
      uint64_t ROOE:1;
      uint64_t PCSSE:1;
      uint64_t MTFE:1;
      uint64_t FRZ:1;
      uint64_t DCONF01:2;
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
      uint64_t SPI_TCNT015:16;
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
      uint64_t POPNXTPTR03:4;
      uint64_t RXCTR03:4;
      uint64_t TXNXTPTR03:4;
      uint64_t TXCTR03:4;
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
      uint64_t TXDATA015:16;
      uint64_t PCS05:6;
      uint64_t reservedSpace0:4;
      uint64_t CTCNT:1;
      uint64_t EOQ:1;
      uint64_t CTAS02:3;
      uint64_t CONT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_PUSHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_POPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA015:16;
      uint64_t TXCMD015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_TXFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA015:16;
      uint64_t TXCMD015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_TXFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA015:16;
      uint64_t TXCMD015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_TXFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA015:16;
      uint64_t TXCMD015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_TXFR3;

  uint8_t res2[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_RXFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_RXFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_RXFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI1_RXFR3;

};

#define DSPI_DSPI1 (*(volatile struct DSPI_DSPI1_tag *) 0xfff94000)

struct DSPI_DSPI2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HALT:1;
      uint64_t reservedSpace0:7;
      uint64_t SMPL_PT01:2;
      uint64_t CLR_RXF:1;
      uint64_t CLR_TXF:1;
      uint64_t DIS_RXF:1;
      uint64_t DIS_TXF:1;
      uint64_t MDIS:1;
      uint64_t reservedSpace1:1;
      uint64_t PCSIS05:6;
      uint64_t reservedSpace2:2;
      uint64_t ROOE:1;
      uint64_t PCSSE:1;
      uint64_t MTFE:1;
      uint64_t FRZ:1;
      uint64_t DCONF01:2;
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
      uint64_t SPI_TCNT015:16;
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
      uint64_t POPNXTPTR03:4;
      uint64_t RXCTR03:4;
      uint64_t TXNXTPTR03:4;
      uint64_t TXCTR03:4;
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
      uint64_t TXDATA015:16;
      uint64_t PCS05:6;
      uint64_t reservedSpace0:4;
      uint64_t CTCNT:1;
      uint64_t EOQ:1;
      uint64_t CTAS02:3;
      uint64_t CONT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_PUSHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_POPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA015:16;
      uint64_t TXCMD015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_TXFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA015:16;
      uint64_t TXCMD015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_TXFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA015:16;
      uint64_t TXCMD015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_TXFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA015:16;
      uint64_t TXCMD015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_TXFR3;

  uint8_t res2[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_RXFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_RXFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_RXFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA015:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPI2_RXFR3;

};

#define DSPI_DSPI2 (*(volatile struct DSPI_DSPI2_tag *) 0xfff98000)

