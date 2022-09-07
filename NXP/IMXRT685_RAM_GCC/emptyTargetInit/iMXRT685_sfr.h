#include <stdint.h>

struct CM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t Ignored_The_value_written_to_this_field_is_ignored:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICIALLU;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICIMVAU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCIMVAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t Level_Cache_level:2;
      uint64_t reservedSpace1:1;
      uint64_t SetWay_Cache_set_way:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCISW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCMVAU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCMVAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t Level_Cache_level:2;
      uint64_t reservedSpace1:1;
      uint64_t SetWay_Cache_set_way:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCSW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCIMVAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t Level_Cache_level:2;
      uint64_t reservedSpace1:1;
      uint64_t SetWay_Cache_set_way:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCISW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Ignored_Ignored:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BPIALL;

};

#define CM (*(volatile struct CM_tag *) 0xe000ef50)

struct ICB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTLINESNUM:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICTR;

  uint32_t ACTLR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUS0:1;
      uint64_t SU0:1;
      uint64_t SUS1:1;
      uint64_t SU1:1;
      uint64_t SUS2:1;
      uint64_t SU2:1;
      uint64_t SUS3:1;
      uint64_t SU3:1;
      uint64_t SUS4:1;
      uint64_t SU4:1;
      uint64_t SUS5:1;
      uint64_t SU5:1;
      uint64_t SUS6:1;
      uint64_t SU6:1;
      uint64_t SUS7:1;
      uint64_t SU7:1;
      uint64_t reservedSpace0:12;
      uint64_t SU10:1;
      uint64_t SUS10:1;
      uint64_t SU11:1;
      uint64_t SUS11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPPWR;

};

#define ICB (*(volatile struct ICB_tag *) 0xe000e004)

struct DCB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t C_DEBUGEN:1;
      uint64_t C_HALT:1;
      uint64_t C_STEP:1;
      uint64_t C_MASKINTS:1;
      uint64_t reservedSpace0:1;
      uint64_t C_SNAPSTALL:1;
      uint64_t reservedSpace1:10;
      uint64_t DBGKEY:15;
      uint64_t S_REGRDY:1;
      uint64_t S_HALT:1;
      uint64_t S_SLEEP:1;
      uint64_t S_LOCKUP:1;
      uint64_t S_SDE:1;
      uint64_t reservedSpace2:3;
      uint64_t S_RETIRE_ST:1;
      uint64_t S_RESET_ST:1;
      uint64_t S_RESTART_ST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DHCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGSEL:6;
      uint64_t reservedSpace0:10;
      uint64_t REGWnR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCRSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBGTMP:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCRDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VC_CORERESET:1;
      uint64_t reservedSpace0:3;
      uint64_t VC_MMERR:1;
      uint64_t VC_NOCPERR:1;
      uint64_t VC_CHKERR:1;
      uint64_t VC_STATERR:1;
      uint64_t VC_BUSERR:1;
      uint64_t VC_INTERR:1;
      uint64_t VC_HARDERR:1;
      uint64_t VC_SFERR:1;
      uint64_t reservedSpace1:4;
      uint64_t MON_EN:1;
      uint64_t MON_PEND:1;
      uint64_t MON_STEP:1;
      uint64_t MON_REQ:1;
      uint64_t SDME:1;
      uint64_t reservedSpace2:3;
      uint64_t TRCENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEMCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPIDENSEL:1;
      uint64_t INTSPIDEN:1;
      uint64_t SPNIDENSEL:1;
      uint64_t INTSPNIDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAUTHCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBRSELEN:1;
      uint64_t SBRSEL:1;
      uint64_t reservedSpace0:14;
      uint64_t CDS:1;
      uint64_t CDSKEY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSCSR;

};

#define DCB (*(volatile struct DCB_tag *) 0xe000edf0)

struct DIB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLI:1;
      uint64_t SLK:1;
      uint64_t nTT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSID:1;
      uint64_t reservedSpace0:1;
      uint64_t NSNID:1;
      uint64_t reservedSpace1:1;
      uint64_t SID:1;
      uint64_t reservedSpace2:1;
      uint64_t SNID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAUTHSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARCHPART:11;
      uint64_t reservedSpace0:1;
      uint64_t ARCHVER:3;
      uint64_t reservedSpace1:1;
      uint64_t REVISION:3;
      uint64_t reservedSpace2:1;
      uint64_t PRESENT:1;
      uint64_t ARCHITECT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDEVARCH;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAJOR:3;
      uint64_t reservedSpace0:1;
      uint64_t SUB:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDEVTYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DES_2:3;
      uint64_t reservedSpace0:1;
      uint64_t SIZE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DPIDR4;

  uint32_t DPIDR5;
  uint32_t DPIDR6;
  uint32_t DPIDR7;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PART_0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DPIDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PART_1:3;
      uint64_t reservedSpace0:1;
      uint64_t DES_0:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DPIDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DES_1:2;
      uint64_t reservedSpace0:1;
      uint64_t JEDEC:1;
      uint64_t REVISION:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DPIDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMOD:3;
      uint64_t reservedSpace0:1;
      uint64_t REVAND:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DPIDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRMBL_0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCIDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRMBL_1:3;
      uint64_t reservedSpace0:1;
      uint64_t CLASS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCIDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRMBL_2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCIDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRMBL_3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCIDR3;

};

#define DIB (*(volatile struct DIB_tag *) 0xe000efb0)

struct NVIC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER15;

  uint8_t res0[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER15;

  uint8_t res1[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR15;

  uint8_t res2[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR15;

  uint8_t res3[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR15;

  uint8_t res4[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS15;

  uint8_t res5[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR123;

};

#define NVIC (*(volatile struct NVIC_tag *) 0xe000e100)

struct SIG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STIR;

};

#define SIG (*(volatile struct SIG_tag *) 0xe000ef00)

struct SAU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t ALLNS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAU_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SREGION:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAU_TYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAU_RNR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BADDR:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAU_RBAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t NSC:1;
      uint64_t reservedSpace0:3;
      uint64_t LADDR:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAU_RLAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INVEP:1;
      uint64_t INVIS:1;
      uint64_t INVER:1;
      uint64_t AUVIOL:1;
      uint64_t INVTRAN:1;
      uint64_t LSPERR:1;
      uint64_t SFARVALID:1;
      uint64_t LSERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFAR;

};

#define SAU (*(volatile struct SAU_tag *) 0xe000edd0)

struct RSTCTL0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VDD_POR:1;
      uint64_t reservedSpace0:3;
      uint64_t PAD_RESET:1;
      uint64_t ARM_APD_RESET:1;
      uint64_t WDT0_RESET:1;
      uint64_t WDT1_RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSRSTSTAT;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t HIFI_DSP:1;
      uint64_t reservedSpace1:6;
      uint64_t POWERQUAD_bitfield:1;
      uint64_t CASPER_bitfield:1;
      uint64_t HASHCRYPT_bitfield:1;
      uint64_t PUF_bitfield:1;
      uint64_t RNG:1;
      uint64_t reservedSpace2:3;
      uint64_t FLEXSPI_OTFAD:1;
      uint64_t reservedSpace3:3;
      uint64_t USBHS_PHY:1;
      uint64_t USBHS_DEVICE:1;
      uint64_t USBHS_HOST:1;
      uint64_t USBHS_SRAM:1;
      uint64_t SCT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTCTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SDIO0:1;
      uint64_t SDIO1:1;
      uint64_t reservedSpace1:11;
      uint64_t ACMP0:1;
      uint64_t ADC0_bitfield:1;
      uint64_t reservedSpace2:7;
      uint64_t SHSGPIO0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTCTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UTICK0_bitfield:1;
      uint64_t WWDT0_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTCTL2;

  uint8_t res1[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t HIFI_DSP:1;
      uint64_t reservedSpace1:6;
      uint64_t POWERQUAD_bitfield:1;
      uint64_t CASPER_bitfield:1;
      uint64_t HASHCRYPT_bitfield:1;
      uint64_t PUF_bitfield:1;
      uint64_t RNG:1;
      uint64_t reservedSpace2:3;
      uint64_t FLEXSPI_OTFAD:1;
      uint64_t reservedSpace3:3;
      uint64_t USBHS_PHY:1;
      uint64_t USBHS_DEVICE:1;
      uint64_t USBHS_HOST:1;
      uint64_t USBHS_SRAM:1;
      uint64_t SCT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTCTL0_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SDIO0:1;
      uint64_t SDIO1:1;
      uint64_t reservedSpace1:11;
      uint64_t ACMP0:1;
      uint64_t ADC0_bitfield:1;
      uint64_t reservedSpace2:7;
      uint64_t SHSGPIO0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTCTL1_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UTICK0_bitfield:1;
      uint64_t WWDT0_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTCTL2_SET;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t HIFI_DSP:1;
      uint64_t reservedSpace1:6;
      uint64_t POWERQUAD_bitfield:1;
      uint64_t CASPER_bitfield:1;
      uint64_t HASHCRYPT_bitfield:1;
      uint64_t PUF_bitfield:1;
      uint64_t RNG:1;
      uint64_t reservedSpace2:3;
      uint64_t FLEXSPI_OTFAD:1;
      uint64_t reservedSpace3:3;
      uint64_t USBHS_PHY:1;
      uint64_t USBHS_DEVICE:1;
      uint64_t USBHS_HOST:1;
      uint64_t USBHS_SRAM:1;
      uint64_t SCT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTCTL0_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SDIO0:1;
      uint64_t SDIO1:1;
      uint64_t reservedSpace1:11;
      uint64_t ACMP0:1;
      uint64_t ADC0_bitfield:1;
      uint64_t reservedSpace2:7;
      uint64_t SHSGPIO0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTCTL1_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UTICK0_bitfield:1;
      uint64_t WWDT0_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTCTL2_CLR;

};

#define RSTCTL0 (*(volatile struct RSTCTL0_tag *) 0x40000000)

struct CLKCTL0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ROM_CTL_128KB:1;
      uint64_t reservedSpace1:5;
      uint64_t POWERQUAD_CLK:1;
      uint64_t CASPER_CLK:1;
      uint64_t HASHCRYPT_CLK:1;
      uint64_t PUF_CLK:1;
      uint64_t RNG_CLK:1;
      uint64_t reservedSpace2:3;
      uint64_t FLEXSPI_OTFAD_CLK:1;
      uint64_t OTP_CLK:1;
      uint64_t reservedSpace3:2;
      uint64_t USBHS_PHY_CLK:1;
      uint64_t USBHS_DEVICE_CLK:1;
      uint64_t USBHS_HOST_CLK:1;
      uint64_t USBHS_SRAM_CLK:1;
      uint64_t SCT_CLK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCCTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SDIO0_CLK:1;
      uint64_t SDIO1_CLK:1;
      uint64_t reservedSpace1:11;
      uint64_t ACMP0_CLK:1;
      uint64_t ADC0_CLK:1;
      uint64_t reservedSpace2:7;
      uint64_t SHSGPIO0_CLK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCCTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UTICK0_CLK:1;
      uint64_t WWDT0_CLK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCCTL2;

  uint8_t res0[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ROM_CTL_128KB_CLK:1;
      uint64_t reservedSpace1:5;
      uint64_t POWERQUAD_CLK:1;
      uint64_t CASPER_CLK:1;
      uint64_t HASHCRYPT_CLK:1;
      uint64_t PUF_CLK:1;
      uint64_t RNG_CLK:1;
      uint64_t reservedSpace2:3;
      uint64_t FLEXSPI_OTFAD_CLK:1;
      uint64_t OTP_CLK:1;
      uint64_t reservedSpace3:2;
      uint64_t USBHS_PHY_CLK:1;
      uint64_t USBHS_DEVICE_CLK:1;
      uint64_t USBHS_HOST_CLK:1;
      uint64_t USBHS_SRAM_CLK:1;
      uint64_t SCT_CLK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCCTL0_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SDIO0_CLK:1;
      uint64_t SDIO1_CLK:1;
      uint64_t reservedSpace1:11;
      uint64_t ACMP0_CLK:1;
      uint64_t ADC0_CLK:1;
      uint64_t reservedSpace2:7;
      uint64_t SHSGPIO0_CLK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCCTL1_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UTICK0_CLK:1;
      uint64_t WWDT0_CLK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCCTL2_SET;

  uint8_t res1[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ROM_CTL_128KB_CLK:1;
      uint64_t reservedSpace1:5;
      uint64_t POWERQUAD_CLK:1;
      uint64_t CASPER_CLK:1;
      uint64_t HASHCRYPT_CLK:1;
      uint64_t PUF_CLK:1;
      uint64_t RNG_CLK:1;
      uint64_t reservedSpace2:3;
      uint64_t FLEXSPI_OTFAD_CLK:1;
      uint64_t OTP_CLK:1;
      uint64_t reservedSpace3:2;
      uint64_t USBHS_PHY_CLK:1;
      uint64_t USBHS_DEVICE_CLK:1;
      uint64_t USBHS_HOST_CLK:1;
      uint64_t USBHS_SRAM_CLK:1;
      uint64_t SCT_CLK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCCTL0_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SDIO0_CLK:1;
      uint64_t SDIO1_CLK:1;
      uint64_t reservedSpace1:11;
      uint64_t ACMP0_CLK:1;
      uint64_t ADC0_CLK:1;
      uint64_t reservedSpace2:7;
      uint64_t SHSGPIO0_CLK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCCTL1_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UTICK0_CLK:1;
      uint64_t WWDT0_CLK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCCTL2_CLR;

  uint8_t res2[132];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIM_TEMPCO:5;
      uint64_t TRIM_COARSE:6;
      uint64_t TRIM_FINE:7;
      uint64_t TRIM_RANGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FFROCTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FFROCTL1;

  uint8_t res3[88];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LP_ENABLE:1;
      uint64_t BYPASS_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSOSCCTL0;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSOSCBYPASS;

  uint8_t res5[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t CLKRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPOSCCTL0;

  uint8_t res6[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA32KHZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSC32KHZCTL0;

  uint8_t res7[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPLL0CLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BYPASS:1;
      uint64_t RESET:1;
      uint64_t reservedSpace0:11;
      uint64_t HOLDRINGOFF_ENA:1;
      uint64_t reservedSpace1:2;
      uint64_t MULT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPLL0CTL0;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKTIMEDIV2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPLL0LOCKTIMEDIV2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NUM:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPLL0NUM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DENOM:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPLL0DENOM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFD0:6;
      uint64_t PFD0_CLKRDY:1;
      uint64_t PFD0_CLKGATE:1;
      uint64_t PFD1:6;
      uint64_t PFD1_CLKRDY:1;
      uint64_t PFD1_CLKGATE:1;
      uint64_t PFD2:6;
      uint64_t PFD2_CLKRDY:1;
      uint64_t PFD2_CLKGATE:1;
      uint64_t PFD3:6;
      uint64_t PFD3_CLKRDY:1;
      uint64_t PFD3_CLKGATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPLL0PFD;

  uint8_t res9[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAINPLLCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPPLLCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUX0PLLCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUX1PLLCLKDIV;

  uint8_t res10[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:23;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCPUAHBCLKDIV;

  uint8_t res11[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAINCLKSELA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAINCLKSELB;

  uint8_t res12[200];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCDIV0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCDIV1;

  uint8_t res13[280];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLEXSPIFCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLEXSPIFCLKDIV;

  uint8_t res14[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCTFCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCTFCLKDIV;

  uint8_t res15[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBHSFCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBHSFCLKDIV;

  uint8_t res16[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDIO0FCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDIO0FCLKDIV;

  uint8_t res17[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDIO1FCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDIO1FCLKDIV;

  uint8_t res18[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0FCLKSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0FCLKSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0FCLKDIV;

  uint8_t res19[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UTICKFCLKSEL;

  uint8_t res20[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDT0FCLKSEL;

  uint8_t res21[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WAKECLK32KHZSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t HALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WAKECLK32KHZDIV;

  uint8_t res22[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSTICKFCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSTICKFCLKDIV;

};

#define CLKCTL0 (*(volatile struct CLKCTL0_tag *) 0x40001010)

struct SYSCTL0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSPSTALL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPSTALL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:2;
      uint64_t M1:2;
      uint64_t M2:2;
      uint64_t M3:2;
      uint64_t M4:2;
      uint64_t M5:2;
      uint64_t M6:2;
      uint64_t M7:2;
      uint64_t M8:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBMATRIXPRIOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRPENABLE:1;
      uint64_t RDPENABLE:1;
      uint64_t CPRENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACKERENABLE;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMISRCSEL:7;
      uint64_t reservedSpace0:24;
      uint64_t NMIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M33NMISRCSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_STICK_CALIB:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSTEM_STICK_CALIB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_NSTICK_CALIB:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSTEM_NSTICK_CALIB;

  uint8_t res1[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR:4;
      uint64_t reservedSpace0:12;
      uint64_t MAJOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SILICONREV_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIXBIT:1;
      uint64_t MANU:11;
      uint64_t PARTNUM:16;
      uint64_t VERNUM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JTAG_ID;

  uint8_t res2[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AHB2APB0:1;
      uint64_t AHB2APB1:1;
      uint64_t CRC_Engine:1;
      uint64_t Casper:1;
      uint64_t DMAC0:1;
      uint64_t DMAC1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUTOCLKGATEOVERRIDE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAM_IF0:1;
      uint64_t SRAM_IF1:1;
      uint64_t SRAM_IF2:1;
      uint64_t SRAM_IF3:1;
      uint64_t SRAM_IF4:1;
      uint64_t SRAM_IF5:1;
      uint64_t SRAM_IF6:1;
      uint64_t SRAM_IF7:1;
      uint64_t SRAM_IF8:1;
      uint64_t SRAM_IF9:1;
      uint64_t SRAM_IF10:1;
      uint64_t SRAM_IF11:1;
      uint64_t SRAM_IF12:1;
      uint64_t SRAM_IF13:1;
      uint64_t SRAM_IF14:1;
      uint64_t SRAM_IF15:1;
      uint64_t SRAM_IF16:1;
      uint64_t SRAM_IF17:1;
      uint64_t SRAM_IF18:1;
      uint64_t SRAM_IF19:1;
      uint64_t SRAM_IF20:1;
      uint64_t SRAM_IF21:1;
      uint64_t SRAM_IF22:1;
      uint64_t SRAM_IF23:1;
      uint64_t SRAM_IF24:1;
      uint64_t SRAM_IF25:1;
      uint64_t SRAM_IF26:1;
      uint64_t SRAM_IF27:1;
      uint64_t SRAM_IF28:1;
      uint64_t SRAM_IF29:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUTOCLKGATEOVERRIDE1;

  uint8_t res3[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDIO_0:1;
      uint64_t SDIO_1:1;
      uint64_t USBHSPHY:1;
      uint64_t ADC:1;
      uint64_t MU:1;
      uint64_t ACMP:1;
      uint64_t PMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKGATEOVERRIDE0;

  uint8_t res4[92];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAM00_IF:1;
      uint64_t SRAM01_IF:1;
      uint64_t SRAM02_IF:1;
      uint64_t SRAM03_IF:1;
      uint64_t SRAM04_IF:1;
      uint64_t SRAM05_IF:1;
      uint64_t SRAM06_IF:1;
      uint64_t SRAM07_IF:1;
      uint64_t SRAM08_IF:1;
      uint64_t SRAM09_IF:1;
      uint64_t SRAM10_IF:1;
      uint64_t SRAM11_IF:1;
      uint64_t SRAM12_IF:1;
      uint64_t SRAM13_IF:1;
      uint64_t SRAM14_IF:1;
      uint64_t SRAM15_IF:1;
      uint64_t SRAM16_IF:1;
      uint64_t SRAM17_IF:1;
      uint64_t SRAM18_IF:1;
      uint64_t SRAM19_IF:1;
      uint64_t SRAM20_IF:1;
      uint64_t SRAM21_IF:1;
      uint64_t SRAM22_IF:1;
      uint64_t SRAM23_IF:1;
      uint64_t SRAM24_IF:1;
      uint64_t SRAM25_IF:1;
      uint64_t SRAM26_IF:1;
      uint64_t SRAM27_IF:1;
      uint64_t SRAM28_IF:1;
      uint64_t SRAM29_IF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB_SRAM_ACCESS_DISABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAM00_IF:1;
      uint64_t SRAM01_IF:1;
      uint64_t SRAM02_IF:1;
      uint64_t SRAM03_IF:1;
      uint64_t SRAM04_IF:1;
      uint64_t SRAM05_IF:1;
      uint64_t SRAM06_IF:1;
      uint64_t SRAM07_IF:1;
      uint64_t SRAM08_IF:1;
      uint64_t SRAM09_IF:1;
      uint64_t SRAM10_IF:1;
      uint64_t SRAM11_IF:1;
      uint64_t SRAM12_IF:1;
      uint64_t SRAM13_IF:1;
      uint64_t SRAM14_IF:1;
      uint64_t SRAM15_IF:1;
      uint64_t SRAM16_IF:1;
      uint64_t SRAM17_IF:1;
      uint64_t SRAM18_IF:1;
      uint64_t SRAM19_IF:1;
      uint64_t SRAM20_IF:1;
      uint64_t SRAM21_IF:1;
      uint64_t SRAM22_IF:1;
      uint64_t SRAM23_IF:1;
      uint64_t SRAM24_IF:1;
      uint64_t SRAM25_IF:1;
      uint64_t SRAM26_IF:1;
      uint64_t SRAM27_IF:1;
      uint64_t SRAM28_IF:1;
      uint64_t SRAM29_IF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_SRAM_ACCESS_DISABLE;

  uint8_t res5[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AHB_FLEXSPI_ACCESS_DISABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB_FLEXSPI_ACCESS_DISABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_FLEXSPI_ACCESS_DISABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_FLEXSPI_ACCESS_DISABLE;

  uint8_t res6[716];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AP_DEV_CLK:1;
      uint64_t POL_DEV_CLK:1;
      uint64_t AP_HOST_CLK:1;
      uint64_t POL_HOST_CLK:1;
      uint64_t HS_DEV_WAKEUP_N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBCLKCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEV_NEED_CLKST:1;
      uint64_t HOST_NEED_CLKST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBCLKSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKTIMEDIV2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHYPLL0LOCKTIMEDIV2;

  uint8_t res7[488];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAINCLK_SHUTOFF:1;
      uint64_t PMIC_MODE0:1;
      uint64_t PMIC_MODE1:1;
      uint64_t DEEP_PD:1;
      uint64_t VDDCOREREG_LP:1;
      uint64_t reservedSpace0:1;
      uint64_t PMCREF_LP:1;
      uint64_t HVD1V8_PD:1;
      uint64_t PORCORE_LP:1;
      uint64_t LVDCORE_LP:1;
      uint64_t HVDCORE_PD:1;
      uint64_t RBB_PD:1;
      uint64_t FBB_PD:1;
      uint64_t SYSXTAL_PD:1;
      uint64_t LPOSC_PD:1;
      uint64_t SFRO_PD:1;
      uint64_t FFRO_PD:1;
      uint64_t SYSPLLLDO_PD:1;
      uint64_t SYSPLLANA_PD:1;
      uint64_t AUDPLLLDO_PD:1;
      uint64_t AUDPLLANA_PD:1;
      uint64_t ADC_PD:1;
      uint64_t ADC_LP:1;
      uint64_t ADCTEMPSNS_PD:1;
      uint64_t reservedSpace1:1;
      uint64_t ACMP_PD:1;
      uint64_t HSPAD0_VDET_LP:1;
      uint64_t HSPAD0_REF_PD:1;
      uint64_t HSPAD2_VDET_LP:1;
      uint64_t HSPAD2_REF_PD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSLEEPCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PQ_SRAM_APD:1;
      uint64_t PQ_SRAM_PPD:1;
      uint64_t FLEXSPI_SRAM_APD:1;
      uint64_t FLEXSPI_SRAM_PPD:1;
      uint64_t USBHS_SRAM_APD:1;
      uint64_t USBHS_SRAM_PPD:1;
      uint64_t USDHC0_SRAM_APD:1;
      uint64_t USDHC0_SRAM_PPD:1;
      uint64_t USDHC1_SRAM_APD:1;
      uint64_t USDHC1_SRAM_PPD:1;
      uint64_t CASPER_SRAM_APD:1;
      uint64_t CASPER_SRAM_PPD:1;
      uint64_t reservedSpace0:12;
      uint64_t DSPCACHE_REGF_APD:1;
      uint64_t DSPCACHE_REGF_PPD:1;
      uint64_t DSPTCM_REGF_APD:1;
      uint64_t DSPTCM_REGF_PPD:1;
      uint64_t ROM_PD:1;
      uint64_t reservedSpace1:2;
      uint64_t SRAM_SLEEP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSLEEPCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAM_IF0_APD:1;
      uint64_t SRAM_IF1_APD:1;
      uint64_t SRAM_IF2_APD:1;
      uint64_t SRAM_IF3_APD:1;
      uint64_t SRAM_IF4_APD:1;
      uint64_t SRAM_IF5_APD:1;
      uint64_t SRAM_IF6_APD:1;
      uint64_t SRAM_IF7_APD:1;
      uint64_t SRAM_IF8_APD:1;
      uint64_t SRAM_IF9_APD:1;
      uint64_t SRAM_IF10_APD:1;
      uint64_t SRAM_IF11_APD:1;
      uint64_t SRAM_IF12_APD:1;
      uint64_t SRAM_IF13_APD:1;
      uint64_t SRAM_IF14_APD:1;
      uint64_t SRAM_IF15_APD:1;
      uint64_t SRAM_IF16_APD:1;
      uint64_t SRAM_IF17_APD:1;
      uint64_t SRAM_IF18_APD:1;
      uint64_t SRAM_IF19_APD:1;
      uint64_t SRAM_IF20_APD:1;
      uint64_t SRAM_IF21_APD:1;
      uint64_t SRAM_IF22_APD:1;
      uint64_t SRAM_IF23_APD:1;
      uint64_t SRAM_IF24_APD:1;
      uint64_t SRAM_IF25_APD:1;
      uint64_t SRAM_IF26_APD:1;
      uint64_t SRAM_IF27_APD:1;
      uint64_t SRAM_IF28_APD:1;
      uint64_t SRAM_IF29_APD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSLEEPCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAM_IF0_PPD:1;
      uint64_t SRAM_IF1_PPD:1;
      uint64_t SRAM_IF2_PPD:1;
      uint64_t SRAM_IF3_PPD:1;
      uint64_t SRAM_IF4_PPD:1;
      uint64_t SRAM_IF5_PPD:1;
      uint64_t SRAM_IF6_PPD:1;
      uint64_t SRAM_IF7_PPD:1;
      uint64_t SRAM_IF8_PPD:1;
      uint64_t SRAM_IF9_PPD:1;
      uint64_t SRAM_IF10_PPD:1;
      uint64_t SRAM_IF11_PPD:1;
      uint64_t SRAM_IF12_PPD:1;
      uint64_t SRAM_IF13_PPD:1;
      uint64_t SRAM_IF14_PPD:1;
      uint64_t SRAM_IF15_PPD:1;
      uint64_t SRAM_IF16_PPD:1;
      uint64_t SRAM_IF17_PPD:1;
      uint64_t SRAM_IF18_PPD:1;
      uint64_t SRAM_IF19_PPD:1;
      uint64_t SRAM_IF20_PPD:1;
      uint64_t SRAM_IF21_PPD:1;
      uint64_t SRAM_IF22_PPD:1;
      uint64_t SRAM_IF23_PPD:1;
      uint64_t SRAM_IF24_PPD:1;
      uint64_t SRAM_IF25_PPD:1;
      uint64_t SRAM_IF26_PPD:1;
      uint64_t SRAM_IF27_PPD:1;
      uint64_t SRAM_IF28_PPD:1;
      uint64_t SRAM_IF29_PPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSLEEPCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PMIC_MODE0:1;
      uint64_t PMIC_MODE1:1;
      uint64_t reservedSpace1:1;
      uint64_t VDDCOREREG_LP:1;
      uint64_t reservedSpace2:1;
      uint64_t PMCREF_LP:1;
      uint64_t HVD1V8_PD:1;
      uint64_t PORCORE_LP:1;
      uint64_t LVDCORE_LP:1;
      uint64_t HVDCORE_PD:1;
      uint64_t reservedSpace3:2;
      uint64_t SYSXTAL_PD:1;
      uint64_t LPOSC_PD:1;
      uint64_t SFRO_PD:1;
      uint64_t FFRO_PD:1;
      uint64_t SYSPLLLDO_PD:1;
      uint64_t SYSPLLANA_PD:1;
      uint64_t AUDPLLLDO_PD:1;
      uint64_t AUDPLLANA_PD:1;
      uint64_t ADC_PD:1;
      uint64_t ADC_LP:1;
      uint64_t ADCTEMPSNS_PD:1;
      uint64_t reservedSpace4:1;
      uint64_t ACMP_PD:1;
      uint64_t HSPAD0_VDET_LP:1;
      uint64_t HSPAD0_REF_PD:1;
      uint64_t HSPAD2_VDET_LP:1;
      uint64_t HSPAD2_REF_PD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDRUNCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PQ_SRAM_APD:1;
      uint64_t PQ_SRAM_PPD:1;
      uint64_t FLEXSPI_SRAM_APD:1;
      uint64_t FLEXSPI_SRAM_PPD:1;
      uint64_t USBHS_SRAM_APD:1;
      uint64_t USBHS_SRAM_PPD:1;
      uint64_t USDHC0_SRAM_APD:1;
      uint64_t USDHC0_SRAM_PPD:1;
      uint64_t USDHC1_SRAM_APD:1;
      uint64_t USDHC1_SRAM_PPD:1;
      uint64_t CASPER_SRAM_APD:1;
      uint64_t CASPER_SRAM_PPD:1;
      uint64_t reservedSpace0:12;
      uint64_t DSPCACHE_REGF_APD:1;
      uint64_t DSPCACHE_REGF_PPD:1;
      uint64_t DSPTCM_REGF_APD:1;
      uint64_t DSPTCM_REGF_PPD:1;
      uint64_t ROM_PD:1;
      uint64_t reservedSpace1:2;
      uint64_t SRAM_SLEEP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDRUNCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAM_IF0_APD:1;
      uint64_t SRAM_IF1_APD:1;
      uint64_t SRAM_IF2_APD:1;
      uint64_t SRAM_IF3_APD:1;
      uint64_t SRAM_IF4_APD:1;
      uint64_t SRAM_IF5_APD:1;
      uint64_t SRAM_IF6_APD:1;
      uint64_t SRAM_IF7_APD:1;
      uint64_t SRAM_IF8_APD:1;
      uint64_t SRAM_IF9_APD:1;
      uint64_t SRAM_IF10_APD:1;
      uint64_t SRAM_IF11_APD:1;
      uint64_t SRAM_IF12_APD:1;
      uint64_t SRAM_IF13_APD:1;
      uint64_t SRAM_IF14_APD:1;
      uint64_t SRAM_IF15_APD:1;
      uint64_t SRAM_IF16_APD:1;
      uint64_t SRAM_IF17_APD:1;
      uint64_t SRAM_IF18_APD:1;
      uint64_t SRAM_IF19_APD:1;
      uint64_t SRAM_IF20_APD:1;
      uint64_t SRAM_IF21_APD:1;
      uint64_t SRAM_IF22_APD:1;
      uint64_t SRAM_IF23_APD:1;
      uint64_t SRAM_IF24_APD:1;
      uint64_t SRAM_IF25_APD:1;
      uint64_t SRAM_IF26_APD:1;
      uint64_t SRAM_IF27_APD:1;
      uint64_t SRAM_IF28_APD:1;
      uint64_t SRAM_IF29_APD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDRUNCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAM_IF0_PPD:1;
      uint64_t SRAM_IF1_PPD:1;
      uint64_t SRAM_IF2_PPD:1;
      uint64_t SRAM_IF3_PPD:1;
      uint64_t SRAM_IF4_PPD:1;
      uint64_t SRAM_IF5_PPD:1;
      uint64_t SRAM_IF6_PPD:1;
      uint64_t SRAM_IF7_PPD:1;
      uint64_t SRAM_IF8_PPD:1;
      uint64_t SRAM_IF9_PPD:1;
      uint64_t SRAM_IF10_PPD:1;
      uint64_t SRAM_IF11_PPD:1;
      uint64_t SRAM_IF12_PPD:1;
      uint64_t SRAM_IF13_PPD:1;
      uint64_t SRAM_IF14_PPD:1;
      uint64_t SRAM_IF15_PPD:1;
      uint64_t SRAM_IF16_PPD:1;
      uint64_t SRAM_IF17_PPD:1;
      uint64_t SRAM_IF18_PPD:1;
      uint64_t SRAM_IF19_PPD:1;
      uint64_t SRAM_IF20_PPD:1;
      uint64_t SRAM_IF21_PPD:1;
      uint64_t SRAM_IF22_PPD:1;
      uint64_t SRAM_IF23_PPD:1;
      uint64_t SRAM_IF24_PPD:1;
      uint64_t SRAM_IF25_PPD:1;
      uint64_t SRAM_IF26_PPD:1;
      uint64_t SRAM_IF27_PPD:1;
      uint64_t SRAM_IF28_PPD:1;
      uint64_t SRAM_IF29_PPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDRUNCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PMIC_MODE0:1;
      uint64_t PMIC_MODE1:1;
      uint64_t reservedSpace1:1;
      uint64_t VDDCOREREG_LP:1;
      uint64_t reservedSpace2:1;
      uint64_t PMCREF_LP:1;
      uint64_t HVD1V8_PD:1;
      uint64_t PORCORE_LP:1;
      uint64_t LVDCORE_LP:1;
      uint64_t HVDCORE_PD:1;
      uint64_t RBB_PD:1;
      uint64_t FBB_PD:1;
      uint64_t SYSXTAL_PD:1;
      uint64_t LPOSC_PD:1;
      uint64_t SFRO_PD:1;
      uint64_t FFRO_PD:1;
      uint64_t SYSPLLLDO_PD:1;
      uint64_t SYSPLLANA_PD:1;
      uint64_t AUDPLLLDO_PD:1;
      uint64_t AUDPLLANA_PD:1;
      uint64_t ADC_PD:1;
      uint64_t ADC_LP:1;
      uint64_t ADCTEMPSNS_PD:1;
      uint64_t reservedSpace3:1;
      uint64_t ACMP_PD:1;
      uint64_t HSPAD0_VDET_LP:1;
      uint64_t HSPAD0_REF_PD:1;
      uint64_t HSPAD2_VDET_LP:1;
      uint64_t HSPAD2_REF_PD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDRUNCFG0_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PQ_SRAM_APD:1;
      uint64_t PQ_SRAM_PPD:1;
      uint64_t FLEXSPI_SRAM_APD:1;
      uint64_t FLEXSPI_SRAM_PPD:1;
      uint64_t USBHS_SRAM_APD:1;
      uint64_t USBHS_SRAM_PPD:1;
      uint64_t USDHC0_SRAM_APD:1;
      uint64_t USDHC0_SRAM_PPD:1;
      uint64_t USDHC1_SRAM_APD:1;
      uint64_t USDHC1_SRAM_PPD:1;
      uint64_t CASPER_SRAM_APD:1;
      uint64_t CASPER_SRAM_PPD:1;
      uint64_t reservedSpace0:12;
      uint64_t DSPCACHE_REGF_APD:1;
      uint64_t DSPCACHE_REGF_PPD:1;
      uint64_t DSPTCM_REGF_APD:1;
      uint64_t DSPTCM_REGF_PPD:1;
      uint64_t ROM_PD:1;
      uint64_t reservedSpace1:2;
      uint64_t SRAM_SLEEP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDRUNCFG1_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAM_IF0_APD:1;
      uint64_t SRAM_IF1_APD:1;
      uint64_t SRAM_IF2_APD:1;
      uint64_t SRAM_IF3_APD:1;
      uint64_t SRAM_IF4_APD:1;
      uint64_t SRAM_IF5_APD:1;
      uint64_t SRAM_IF6_APD:1;
      uint64_t SRAM_IF7_APD:1;
      uint64_t SRAM_IF8_APD:1;
      uint64_t SRAM_IF9_APD:1;
      uint64_t SRAM_IF10_APD:1;
      uint64_t SRAM_IF11_APD:1;
      uint64_t SRAM_IF12_APD:1;
      uint64_t SRAM_IF13_APD:1;
      uint64_t SRAM_IF14_APD:1;
      uint64_t SRAM_IF15_APD:1;
      uint64_t SRAM_IF16_APD:1;
      uint64_t SRAM_IF17_APD:1;
      uint64_t SRAM_IF18_APD:1;
      uint64_t SRAM_IF19_APD:1;
      uint64_t SRAM_IF20_APD:1;
      uint64_t SRAM_IF21_APD:1;
      uint64_t SRAM_IF22_APD:1;
      uint64_t SRAM_IF23_APD:1;
      uint64_t SRAM_IF24_APD:1;
      uint64_t SRAM_IF25_APD:1;
      uint64_t SRAM_IF26_APD:1;
      uint64_t SRAM_IF27_APD:1;
      uint64_t SRAM_IF28_APD:1;
      uint64_t SRAM_IF29_APD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDRUNCFG2_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAM_IF0_PPD:1;
      uint64_t SRAM_IF1_PPD:1;
      uint64_t SRAM_IF2_PPD:1;
      uint64_t SRAM_IF3_PPD:1;
      uint64_t SRAM_IF4_PPD:1;
      uint64_t SRAM_IF5_PPD:1;
      uint64_t SRAM_IF6_PPD:1;
      uint64_t SRAM_IF7_PPD:1;
      uint64_t SRAM_IF8_PPD:1;
      uint64_t SRAM_IF9_PPD:1;
      uint64_t SRAM_IF10_PPD:1;
      uint64_t SRAM_IF11_PPD:1;
      uint64_t SRAM_IF12_PPD:1;
      uint64_t SRAM_IF13_PPD:1;
      uint64_t SRAM_IF14_PPD:1;
      uint64_t SRAM_IF15_PPD:1;
      uint64_t SRAM_IF16_PPD:1;
      uint64_t SRAM_IF17_PPD:1;
      uint64_t SRAM_IF18_PPD:1;
      uint64_t SRAM_IF19_PPD:1;
      uint64_t SRAM_IF20_PPD:1;
      uint64_t SRAM_IF21_PPD:1;
      uint64_t SRAM_IF22_PPD:1;
      uint64_t SRAM_IF23_PPD:1;
      uint64_t SRAM_IF24_PPD:1;
      uint64_t SRAM_IF25_PPD:1;
      uint64_t SRAM_IF26_PPD:1;
      uint64_t SRAM_IF27_PPD:1;
      uint64_t SRAM_IF28_PPD:1;
      uint64_t SRAM_IF29_PPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDRUNCFG3_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PMIC_MODE0:1;
      uint64_t PMIC_MODE1:1;
      uint64_t reservedSpace1:1;
      uint64_t VDDCOREREG_LP:1;
      uint64_t reservedSpace2:1;
      uint64_t PMCREF_LP:1;
      uint64_t HVD1V8_PD:1;
      uint64_t PORCORE_LP:1;
      uint64_t LVDCORE_LP:1;
      uint64_t HVDCORE_PD:1;
      uint64_t RBB_PD:1;
      uint64_t FBB_PD:1;
      uint64_t SYSXTAL_PD:1;
      uint64_t LPOSC_PD:1;
      uint64_t SFRO_PD:1;
      uint64_t FFRO_PD:1;
      uint64_t SYSPLLLDO_PD:1;
      uint64_t SYSPLLANA_PD:1;
      uint64_t AUDPLLLDO_PD:1;
      uint64_t AUDPLLANA_PD:1;
      uint64_t ADC_PD:1;
      uint64_t ADC_LP:1;
      uint64_t ADCTEMPSNS_PD:1;
      uint64_t reservedSpace3:1;
      uint64_t ACMP_PD:1;
      uint64_t HSPAD0_VDET_LP:1;
      uint64_t HSPAD0_REF_PD:1;
      uint64_t HSPAD2_VDET_LP:1;
      uint64_t HSPAD2_REF_PD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDRUNCFG0_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PQ_SRAM_APD:1;
      uint64_t PQ_SRAM_PPD:1;
      uint64_t FLEXSPI_SRAM_APD:1;
      uint64_t FLEXSPI_SRAM_PPD:1;
      uint64_t USBHS_SRAM_APD:1;
      uint64_t USBHS_SRAM_PPD:1;
      uint64_t USDHC0_SRAM_APD:1;
      uint64_t USDHC0_SRAM_PPD:1;
      uint64_t USDHC1_SRAM_APD:1;
      uint64_t USDHC1_SRAM_PPD:1;
      uint64_t CASPER_SRAM_APD:1;
      uint64_t CASPER_SRAM_PPD:1;
      uint64_t reservedSpace0:12;
      uint64_t DSPCACHE_REGF_APD:1;
      uint64_t DSPCACHE_REGF_PPD:1;
      uint64_t DSPTCM_REGF_APD:1;
      uint64_t DSPTCM_REGF_PPD:1;
      uint64_t ROM_PD:1;
      uint64_t reservedSpace1:2;
      uint64_t SRAM_SLEEP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDRUNCFG1_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAM_IF0_APD:1;
      uint64_t SRAM_IF1_APD:1;
      uint64_t SRAM_IF2_APD:1;
      uint64_t SRAM_IF3_APD:1;
      uint64_t SRAM_IF4_APD:1;
      uint64_t SRAM_IF5_APD:1;
      uint64_t SRAM_IF6_APD:1;
      uint64_t SRAM_IF7_APD:1;
      uint64_t SRAM_IF8_APD:1;
      uint64_t SRAM_IF9_APD:1;
      uint64_t SRAM_IF10_APD:1;
      uint64_t SRAM_IF11_APD:1;
      uint64_t SRAM_IF12_APD:1;
      uint64_t SRAM_IF13_APD:1;
      uint64_t SRAM_IF14_APD:1;
      uint64_t SRAM_IF15_APD:1;
      uint64_t SRAM_IF16_APD:1;
      uint64_t SRAM_IF17_APD:1;
      uint64_t SRAM_IF18_APD:1;
      uint64_t SRAM_IF19_APD:1;
      uint64_t SRAM_IF20_APD:1;
      uint64_t SRAM_IF21_APD:1;
      uint64_t SRAM_IF22_APD:1;
      uint64_t SRAM_IF23_APD:1;
      uint64_t SRAM_IF24_APD:1;
      uint64_t SRAM_IF25_APD:1;
      uint64_t SRAM_IF26_APD:1;
      uint64_t SRAM_IF27_APD:1;
      uint64_t SRAM_IF28_APD:1;
      uint64_t SRAM_IF29_APD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDRUNCFG2_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAM_IF0_PPD:1;
      uint64_t SRAM_IF1_PPD:1;
      uint64_t SRAM_IF2_PPD:1;
      uint64_t SRAM_IF3_PPD:1;
      uint64_t SRAM_IF4_PPD:1;
      uint64_t SRAM_IF5_PPD:1;
      uint64_t SRAM_IF6_PPD:1;
      uint64_t SRAM_IF7_PPD:1;
      uint64_t SRAM_IF8_PPD:1;
      uint64_t SRAM_IF9_PPD:1;
      uint64_t SRAM_IF10_PPD:1;
      uint64_t SRAM_IF11_PPD:1;
      uint64_t SRAM_IF12_PPD:1;
      uint64_t SRAM_IF13_PPD:1;
      uint64_t SRAM_IF14_PPD:1;
      uint64_t SRAM_IF15_PPD:1;
      uint64_t SRAM_IF16_PPD:1;
      uint64_t SRAM_IF17_PPD:1;
      uint64_t SRAM_IF18_PPD:1;
      uint64_t SRAM_IF19_PPD:1;
      uint64_t SRAM_IF20_PPD:1;
      uint64_t SRAM_IF21_PPD:1;
      uint64_t SRAM_IF22_PPD:1;
      uint64_t SRAM_IF23_PPD:1;
      uint64_t SRAM_IF24_PPD:1;
      uint64_t SRAM_IF25_PPD:1;
      uint64_t SRAM_IF26_PPD:1;
      uint64_t SRAM_IF27_PPD:1;
      uint64_t SRAM_IF28_PPD:1;
      uint64_t SRAM_IF29_PPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDRUNCFG3_CLR;

  uint8_t res8[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDT0:1;
      uint64_t DMAC0:1;
      uint64_t NSHSGPIO_INT0:1;
      uint64_t NSHSGPIO_INT1:1;
      uint64_t GPIO_INT0_IRQ0:1;
      uint64_t GPIO_INT0_IRQ1:1;
      uint64_t GPIO_INT0_IRQ2:1;
      uint64_t GPIO_INT0_IRQ3:1;
      uint64_t UTICK0_bitfield:1;
      uint64_t MRT0_bitfield:1;
      uint64_t CT32BIT0:1;
      uint64_t CT32BIT1:1;
      uint64_t SCT0:1;
      uint64_t CT32BIT3:1;
      uint64_t FLEXCOMM0_bitfield:1;
      uint64_t FLEXCOMM1_bitfield:1;
      uint64_t FLEXCOMM2_bitfield:1;
      uint64_t FLEXCOMM3_bitfield:1;
      uint64_t FLEXCOMM4_bitfield:1;
      uint64_t FLEXCOMM5_bitfield:1;
      uint64_t FLEXCOMM14_bitfield:1;
      uint64_t FLEXCOMM15_bitfield:1;
      uint64_t ADC0_bitfield:1;
      uint64_t reservedSpace0:1;
      uint64_t ACMP:1;
      uint64_t DMIC0_bitfield:1;
      uint64_t reservedSpace1:1;
      uint64_t HYPERVISOR:1;
      uint64_t SECUREVIOLATION:1;
      uint64_t HWVAD0:1;
      uint64_t reservedSpace2:1;
      uint64_t RNG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STARTEN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC_LITE0_ALARM_or_WAKEUP:1;
      uint64_t reservedSpace0:1;
      uint64_t MU:1;
      uint64_t GPIO_INT0_IRQ4:1;
      uint64_t GPIO_INT0_IRQ5:1;
      uint64_t GPIO_INT0_IRQ6:1;
      uint64_t GPIO_INT0_IRQ7:1;
      uint64_t CT32BIT2:1;
      uint64_t CT32BIT4:1;
      uint64_t OS_EVENT_TIMER_WU:1;
      uint64_t FLEXSPI_bitfield:1;
      uint64_t FLEXCOMM6_bitfield:1;
      uint64_t FLEXCOMM7_bitfield:1;
      uint64_t SDIO0:1;
      uint64_t SDIO1:1;
      uint64_t SHSGPIO_INT0:1;
      uint64_t SHSGPIO_INT1:1;
      uint64_t I3C0:1;
      uint64_t USB_IRQ:1;
      uint64_t USB_NEEDCLK:1;
      uint64_t reservedSpace1:2;
      uint64_t DMAC1:1;
      uint64_t PUF_bitfield:1;
      uint64_t POWERQUAD_bitfield:1;
      uint64_t CASPER_bitfield:1;
      uint64_t PMIC:1;
      uint64_t SHA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STARTEN1;

  uint8_t res9[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDT0:1;
      uint64_t DMAC0:1;
      uint64_t NSHSGPIO_INT0:1;
      uint64_t NSHSGPIO_INT1:1;
      uint64_t GPIO_INT0_IRQ0:1;
      uint64_t GPIO_INT0_IRQ1:1;
      uint64_t GPIO_INT0_IRQ2:1;
      uint64_t GPIO_INT0_IRQ3:1;
      uint64_t UTICK0_bitfield:1;
      uint64_t MRT0_bitfield:1;
      uint64_t CT32BIT0:1;
      uint64_t CT32BIT1:1;
      uint64_t SCT0:1;
      uint64_t CT32BIT3:1;
      uint64_t FLEXCOMM0_bitfield:1;
      uint64_t FLEXCOMM1_bitfield:1;
      uint64_t FLEXCOMM2_bitfield:1;
      uint64_t FLEXCOMM3_bitfield:1;
      uint64_t FLEXCOMM4_bitfield:1;
      uint64_t FLEXCOMM5_bitfield:1;
      uint64_t FLEXCOMM14_bitfield:1;
      uint64_t FLEXCOMM15_bitfield:1;
      uint64_t ADC0_bitfield:1;
      uint64_t reservedSpace0:1;
      uint64_t ACMP:1;
      uint64_t DMIC0_bitfield:1;
      uint64_t reservedSpace1:1;
      uint64_t HYPERVISOR:1;
      uint64_t SECUREVIOLATION:1;
      uint64_t HWVAD0:1;
      uint64_t reservedSpace2:1;
      uint64_t RNG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STARTEN0_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC_LITE0_ALARM_or_WAKEUP:1;
      uint64_t reservedSpace0:1;
      uint64_t MU:1;
      uint64_t GPIO_INT0_IRQ4:1;
      uint64_t GPIO_INT0_IRQ5:1;
      uint64_t GPIO_INT0_IRQ6:1;
      uint64_t GPIO_INT0_IRQ7:1;
      uint64_t CT32BIT2:1;
      uint64_t CT32BIT4:1;
      uint64_t OS_EVENT_TIMER_WU:1;
      uint64_t FLEXSPI_bitfield:1;
      uint64_t FLEXCOMM6_bitfield:1;
      uint64_t FLEXCOMM7_bitfield:1;
      uint64_t SDIO0:1;
      uint64_t SDIO1:1;
      uint64_t SHSGPIO_INT0:1;
      uint64_t SHSGPIO_INT1:1;
      uint64_t I3C0:1;
      uint64_t USB_IRQ:1;
      uint64_t USB_NEEDCLK:1;
      uint64_t reservedSpace1:2;
      uint64_t DMAC1:1;
      uint64_t PUF_bitfield:1;
      uint64_t POWERQUAD_bitfield:1;
      uint64_t CASPER_bitfield:1;
      uint64_t PMIC:1;
      uint64_t SHA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STARTEN1_SET;

  uint8_t res10[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDT0:1;
      uint64_t DMAC0:1;
      uint64_t NSHSGPIO_INT0:1;
      uint64_t NSHSGPIO_INT1:1;
      uint64_t GPIO_INT0_IRQ0:1;
      uint64_t GPIO_INT0_IRQ1:1;
      uint64_t GPIO_INT0_IRQ2:1;
      uint64_t GPIO_INT0_IRQ3:1;
      uint64_t UTICK0_bitfield:1;
      uint64_t MRT0_bitfield:1;
      uint64_t CT32BIT0:1;
      uint64_t CT32BIT1:1;
      uint64_t SCT0:1;
      uint64_t CT32BIT3:1;
      uint64_t FLEXCOMM0_bitfield:1;
      uint64_t FLEXCOMM1_bitfield:1;
      uint64_t FLEXCOMM2_bitfield:1;
      uint64_t FLEXCOMM3_bitfield:1;
      uint64_t FLEXCOMM4_bitfield:1;
      uint64_t FLEXCOMM5_bitfield:1;
      uint64_t FLEXCOMM14_bitfield:1;
      uint64_t FLEXCOMM15_bitfield:1;
      uint64_t ADC0_bitfield:1;
      uint64_t reservedSpace0:1;
      uint64_t ACMP:1;
      uint64_t DMIC0_bitfield:1;
      uint64_t reservedSpace1:1;
      uint64_t HYPERVISOR:1;
      uint64_t SECUREVIOLATION:1;
      uint64_t HWVAD0:1;
      uint64_t reservedSpace2:1;
      uint64_t RNG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STARTEN0_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC_LITE0_ALARM_or_WAKEUP:1;
      uint64_t reservedSpace0:1;
      uint64_t MU:1;
      uint64_t GPIO_INT0_IRQ4:1;
      uint64_t GPIO_INT0_IRQ5:1;
      uint64_t GPIO_INT0_IRQ6:1;
      uint64_t GPIO_INT0_IRQ7:1;
      uint64_t CT32BIT2:1;
      uint64_t CT32BIT4:1;
      uint64_t OS_EVENT_TIMER_WU:1;
      uint64_t FLEXSPI_bitfield:1;
      uint64_t FLEXCOMM6_bitfield:1;
      uint64_t FLEXCOMM7_bitfield:1;
      uint64_t SDIO0:1;
      uint64_t SDIO1:1;
      uint64_t SHSGPIO_INT0:1;
      uint64_t SHSGPIO_INT1:1;
      uint64_t I3C0:1;
      uint64_t USB_IRQ:1;
      uint64_t USB_NEEDCLK:1;
      uint64_t reservedSpace1:2;
      uint64_t DMAC1:1;
      uint64_t PUF_bitfield:1;
      uint64_t POWERQUAD_bitfield:1;
      uint64_t CASPER_bitfield:1;
      uint64_t PMIC:1;
      uint64_t SHA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STARTEN1_CLR;

  uint8_t res11[184];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FORCEWAKE:1;
      uint64_t FCWAKE:1;
      uint64_t DMICWAKE:1;
      uint64_t DMAC0WAKE:1;
      uint64_t DMAC1WAKE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWWAKE;

  uint8_t res12[1740];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOTSTATESEED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOOTSTATESEED0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOTSTATESEED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOOTSTATESEED1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOTSTATESEED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOOTSTATESEED2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOTSTATESEED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOOTSTATESEED3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOTSTATESEED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOOTSTATESEED4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOTSTATESEED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOOTSTATESEED5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOTSTATESEED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOOTSTATESEED6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOTSTATESEED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOOTSTATESEED7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOTSTATEHMAC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOOTSTATEHMAC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOTSTATEHMAC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOOTSTATEHMAC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOTSTATEHMAC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOOTSTATEHMAC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOTSTATEHMAC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOOTSTATEHMAC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOTSTATEHMAC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOOTSTATEHMAC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOTSTATEHMAC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOOTSTATEHMAC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOTSTATEHMAC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOOTSTATEHMAC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOTSTATEHMAC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOOTSTATEHMAC7;

  uint8_t res13[104];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RASRCN:4;
      uint64_t RASRCP:4;
      uint64_t FASTFRZ:1;
      uint64_t FREEZE:1;
      uint64_t COMPTQ:1;
      uint64_t COMPEN:1;
      uint64_t reservedSpace0:4;
      uint64_t NASRCN:4;
      uint64_t NASRCP:4;
      uint64_t COMPOK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLEXSPIPADCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RASRCN:4;
      uint64_t RASRCP:4;
      uint64_t FASTFRZ:1;
      uint64_t FREEZE:1;
      uint64_t COMPTQ:1;
      uint64_t COMPEN:1;
      uint64_t reservedSpace0:4;
      uint64_t NASRCN:4;
      uint64_t NASRCP:4;
      uint64_t COMPOK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDIOPADCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DICEHWREG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DICEHWREG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DICEHWREG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DICEHWREG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DICEHWREG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DICEHWREG_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DICEHWREG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DICEHWREG_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DICEHWREG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DICEHWREG_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DICEHWREG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DICEHWREG_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DICEHWREG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DICEHWREG_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DICEHWREG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DICEHWREG_7;

  uint8_t res14[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t uuid:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UUID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t uuid:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UUID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t uuid:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UUID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t uuid:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UUID3;

  uint8_t res15[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AESKEY_SRCSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AESKEY_SRCSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTFADKEY_SRCSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTFADKEY_SRCSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HASHHWKEYDISABLE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HASHHWKEYDISABLE;

  uint8_t res16[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBG_LOCKEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBG_LOCKEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBGEN:2;
      uint64_t NIDEN:2;
      uint64_t SPIDEN:2;
      uint64_t SPNIDEN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBG_FEATURES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBGEN:2;
      uint64_t NIDEN:2;
      uint64_t SPIDEN:2;
      uint64_t SPNIDEN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBG_FEATURES_DP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HWUNLOCK_DISABLE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWUNLOCK_DISABLE;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CS_PROTCPU0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_PROTCPU0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CS_PROTCPU1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_PROTCPU1;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBG_AUTH_SCRATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBG_AUTH_SCRATCH;

  uint8_t res19[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY_BLOCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEY_BLOCK;

};

#define SYSCTL0 (*(volatile struct SYSCTL0_tag *) 0x4000200c)

struct IOPCTL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO0_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO1_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO2_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO3_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO5_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO6_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO7_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FC15_I2C_SCL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:4;
      uint64_t PUPDENA:1;
      uint64_t PUPDSEL:1;
      uint64_t IBENA:1;
      uint64_t SLEWRATE:1;
      uint64_t FULLDRIVE:1;
      uint64_t AMENA:1;
      uint64_t ODENA:1;
      uint64_t IIENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FC15_I2C_SDA;

};

#define IOPCTL (*(volatile struct IOPCTL_tag *) 0x40004000)

struct PUF_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ZEROIZE:1;
      uint64_t ENROLL:1;
      uint64_t START:1;
      uint64_t GENERATEKEY:1;
      uint64_t SETKEY:1;
      uint64_t reservedSpace0:1;
      uint64_t GETKEY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYIDX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYINDEX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYSIZE:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYSIZE;

  uint8_t res0[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SUCCESS:1;
      uint64_t ERROR:1;
      uint64_t reservedSpace0:1;
      uint64_t KEYINREQ:1;
      uint64_t KEYOUTAVAIL:1;
      uint64_t CODEINREQ:1;
      uint64_t CODEOUTAVAIL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALLOWENROLL:1;
      uint64_t ALLOWSTART:1;
      uint64_t ALLOWSETKEY:1;
      uint64_t ALLOWGETKEY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALLOW;

  uint8_t res2[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYIN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYINPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CODEIN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CODEINPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CODEOUT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CODEOUTPUT;

  uint8_t res3[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYOUTIDX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYOUTINDEX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYOUT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYOUTPUT;

  uint8_t res4[116];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSTAT;

  uint8_t res5[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERSION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READYEN:1;
      uint64_t SUCCESEN:1;
      uint64_t ERROREN:1;
      uint64_t reservedSpace0:1;
      uint64_t KEYINREQEN:1;
      uint64_t KEYOUTAVAILEN:1;
      uint64_t CODEINREQEN:1;
      uint64_t CODEOUTAVAILEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READY:1;
      uint64_t SUCCESS:1;
      uint64_t ERROR:1;
      uint64_t reservedSpace0:1;
      uint64_t KEYINREQ:1;
      uint64_t KEYOUTAVAIL:1;
      uint64_t CODEINREQ:1;
      uint64_t CODEOUTAVAIL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAM_ON:1;
      uint64_t reservedSpace0:1;
      uint64_t CK_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKENROLL_SETKEY:1;
      uint64_t BLOCKKEYOUTPUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  uint8_t res6[240];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY0:2;
      uint64_t KEY1:2;
      uint64_t KEY2:2;
      uint64_t KEY3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYLOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY0:2;
      uint64_t KEY1:2;
      uint64_t KEY2:2;
      uint64_t KEY3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY0:2;
      uint64_t KEY1:2;
      uint64_t KEY2:2;
      uint64_t KEY3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYRESET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t IDX1:2;
      uint64_t IDX2:2;
      uint64_t IDX3:2;
      uint64_t IDX4:2;
      uint64_t IDX5:2;
      uint64_t IDX6:2;
      uint64_t IDX7:2;
      uint64_t reservedSpace1:14;
      uint64_t LOCK_IDX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDXBLK_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDX8:2;
      uint64_t IDX9:2;
      uint64_t IDX10:2;
      uint64_t IDX11:2;
      uint64_t IDX12:2;
      uint64_t IDX13:2;
      uint64_t IDX14:2;
      uint64_t IDX15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDXBLK_H_DP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYMASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYMASK_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYMASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYMASK_1;

  uint8_t res7[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDX8:2;
      uint64_t IDX9:2;
      uint64_t IDX10:2;
      uint64_t IDX11:2;
      uint64_t IDX12:2;
      uint64_t IDX13:2;
      uint64_t IDX14:2;
      uint64_t IDX15:2;
      uint64_t reservedSpace0:14;
      uint64_t LOCK_IDX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDXBLK_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDX0:2;
      uint64_t IDX1:2;
      uint64_t IDX2:2;
      uint64_t IDX3:2;
      uint64_t IDX4:2;
      uint64_t IDX5:2;
      uint64_t IDX6:2;
      uint64_t IDX7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDXBLK_L_DP;

};

#define PUF (*(volatile struct PUF_tag *) 0x40006000)

struct WWDT0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDEN:1;
      uint64_t WDRESET:1;
      uint64_t WDTOF:1;
      uint64_t WDINT:1;
      uint64_t WDPROTECT:1;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TV;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WARNINT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WARNINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WINDOW:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WINDOW;

};

#define WWDT0 (*(volatile struct WWDT0_tag *) 0x4000e000)

struct WWDT1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDEN:1;
      uint64_t WDRESET:1;
      uint64_t WDTOF:1;
      uint64_t WDINT:1;
      uint64_t WDPROTECT:1;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TV;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WARNINT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WARNINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WINDOW:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WINDOW;

};

#define WWDT1 (*(volatile struct WWDT1_tag *) 0x4002e000)

struct UTICK0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DELAYVAL:31;
      uint64_t REPEAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTR:1;
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPEN0:1;
      uint64_t CAPEN1:1;
      uint64_t CAPEN2:1;
      uint64_t CAPEN3:1;
      uint64_t reservedSpace0:4;
      uint64_t CAPPOL0:1;
      uint64_t CAPPOL1:1;
      uint64_t CAPPOL2:1;
      uint64_t CAPPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPCLR0:1;
      uint64_t CAPCLR1:1;
      uint64_t CAPCLR2:1;
      uint64_t CAPCLR3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAPCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP_VALUE:31;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP_VALUE:31;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP_VALUE:31;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP_VALUE:31;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_3;

};

#define UTICK0 (*(volatile struct UTICK0_tag *) 0x4000f000)

struct RSTCTL1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VDD_POR:1;
      uint64_t reservedSpace0:3;
      uint64_t PAD_RESET:1;
      uint64_t ARM_APD_RESET:1;
      uint64_t WDT0_RESET:1;
      uint64_t WDT1_RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSRSTSTAT;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t FLEXCOMM0_RST:1;
      uint64_t FLEXCOMM1_RST:1;
      uint64_t FLEXCOMM2_RST:1;
      uint64_t FLEXCOMM3_RST:1;
      uint64_t FLEXCOMM4_RST:1;
      uint64_t FLEXCOMM5_RST:1;
      uint64_t FLEXCOMM6_RST:1;
      uint64_t FLEXCOMM7_RST:1;
      uint64_t reservedSpace1:6;
      uint64_t FLEXCOMM14_SPI_RST:1;
      uint64_t FLEXCOMM15_I2C_RST:1;
      uint64_t DMIC0_RST:1;
      uint64_t reservedSpace2:2;
      uint64_t OSEVT_TIMER_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTCTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSGPIO0_RST:1;
      uint64_t HSGPIO1_RST:1;
      uint64_t HSGPIO2_RST:1;
      uint64_t HSGPIO3_RST:1;
      uint64_t HSGPIO4_RST:1;
      uint64_t HSGPIO5_RST:1;
      uint64_t HSGPIO6_RST:1;
      uint64_t HSGPIO7_RST:1;
      uint64_t reservedSpace0:8;
      uint64_t CRC_RST:1;
      uint64_t reservedSpace1:6;
      uint64_t DMAC0_RST:1;
      uint64_t DMAC1_RST:1;
      uint64_t reservedSpace2:3;
      uint64_t MU_RST:1;
      uint64_t SEMA_RST:1;
      uint64_t reservedSpace3:1;
      uint64_t FREQME_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTCTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CT32BIT0_RST:1;
      uint64_t CT32BIT1_RST:1;
      uint64_t CT32BIT2_RST:1;
      uint64_t CT32BIT3_RST:1;
      uint64_t CT32BIT4_RST:1;
      uint64_t reservedSpace0:3;
      uint64_t MRT0_RST:1;
      uint64_t reservedSpace1:1;
      uint64_t WWDT1_RST:1;
      uint64_t reservedSpace2:5;
      uint64_t I3C0_RST:1;
      uint64_t reservedSpace3:13;
      uint64_t GPIOINTCTL_RST:1;
      uint64_t PIMCTL_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTCTL2;

  uint8_t res1[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t FLEXCOMM0_RST_SET:1;
      uint64_t FLEXCOMM1_RST_SET:1;
      uint64_t FLEXCOMM2_RST_SET:1;
      uint64_t FLEXCOMM3_RST_SET:1;
      uint64_t FLEXCOMM4_RST_SET:1;
      uint64_t FLEXCOMM5_RST_SET:1;
      uint64_t FLEXCOMM6_RST_SET:1;
      uint64_t FLEXCOMM7_RST_SET:1;
      uint64_t reservedSpace1:6;
      uint64_t FLEXCOMM14_SPI_RST_SET:1;
      uint64_t FLEXCOMM15_I2C_RST_SET:1;
      uint64_t DMIC0_RST_SET:1;
      uint64_t reservedSpace2:2;
      uint64_t OSEVT_TIMER_RST_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTCTL0_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSGPIO0_RST_SET:1;
      uint64_t HSGPIO1_RST_SET:1;
      uint64_t HSGPIO2_RST_SET:1;
      uint64_t HSGPIO3_RST_SET:1;
      uint64_t HSGPIO4_RST_SET:1;
      uint64_t HSGPIO5_RST_SET:1;
      uint64_t HSGPIO6_RST_SET:1;
      uint64_t HSGPIO7_RST_SET:1;
      uint64_t reservedSpace0:8;
      uint64_t CRC_RST_SET:1;
      uint64_t reservedSpace1:6;
      uint64_t DMAC0_RST_SET:1;
      uint64_t DMAC1_RST_SET:1;
      uint64_t reservedSpace2:3;
      uint64_t MU_RST_SET:1;
      uint64_t SEMA_RST_SET:1;
      uint64_t reservedSpace3:1;
      uint64_t FREQME_RST_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTCTL1_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CT32BIT0_RST_SET:1;
      uint64_t CT32BIT1_RST_SET:1;
      uint64_t CT32BIT2_RST_SET:1;
      uint64_t CT32BIT3_RST_SET:1;
      uint64_t CT32BIT4_RST_SET:1;
      uint64_t reservedSpace0:3;
      uint64_t MRT0_RST_SET:1;
      uint64_t reservedSpace1:1;
      uint64_t WWDT1_RST_SET:1;
      uint64_t reservedSpace2:5;
      uint64_t I3C0_RST_SET:1;
      uint64_t reservedSpace3:13;
      uint64_t GPIOINTCTL_RST_SET:1;
      uint64_t PIMCTL_RST_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTCTL2_SET;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t FLEXCOMM0_RST_CLR:1;
      uint64_t FLEXCOMM1_RST_CLR:1;
      uint64_t FLEXCOMM2_RST_CLR:1;
      uint64_t FLEXCOMM3_RST_CLR:1;
      uint64_t FLEXCOMM4_RST_CLR:1;
      uint64_t FLEXCOMM5_RST_CLR:1;
      uint64_t FLEXCOMM6_RST_CLR:1;
      uint64_t FLEXCOMM7_RST_CLR:1;
      uint64_t reservedSpace1:6;
      uint64_t FLEXCOMM14_SPI_RST_CLR:1;
      uint64_t FLEXCOMM15_I2C_RST_CLR:1;
      uint64_t DMIC0_RST_CLR:1;
      uint64_t reservedSpace2:2;
      uint64_t OSEVT_TIMER_RST_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTCTL0_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSGPIO0_RST_CLR:1;
      uint64_t HSGPIO1_RST_CLR:1;
      uint64_t HSGPIO2_RST_CLR:1;
      uint64_t HSGPIO3_RST_CLR:1;
      uint64_t HSGPIO4_RST_CLR:1;
      uint64_t HSGPIO5_RST_CLR:1;
      uint64_t HSGPIO6_RST_CLR:1;
      uint64_t HSGPIO7_RST_CLR:1;
      uint64_t reservedSpace0:8;
      uint64_t CRC_RST_CLR:1;
      uint64_t reservedSpace1:6;
      uint64_t DMAC0_RST_CLR:1;
      uint64_t DMAC1_RST_CLR:1;
      uint64_t reservedSpace2:3;
      uint64_t MU_RST_CLR:1;
      uint64_t SEMA_RST_CLR:1;
      uint64_t reservedSpace3:1;
      uint64_t FREQME_RST_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTCTL1_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CT32BIT0_RST_CLR:1;
      uint64_t CT32BIT1_RST_CLR:1;
      uint64_t CT32BIT2_RST_CLR:1;
      uint64_t CT32BIT3_RST_CLR:1;
      uint64_t CT32BIT4_RST_CLR:1;
      uint64_t reservedSpace0:3;
      uint64_t MRT0_RST_CLR:1;
      uint64_t reservedSpace1:1;
      uint64_t WWDT1_RST_CLR:1;
      uint64_t reservedSpace2:5;
      uint64_t I3C0_RST_CLR:1;
      uint64_t reservedSpace3:13;
      uint64_t GPIOINTCTL_RST_CLR:1;
      uint64_t PIMCTL_RST_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTCTL2_CLR;

};

#define RSTCTL1 (*(volatile struct RSTCTL1_tag *) 0x40020000)

struct CLKCTL1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t FC0_CLK:1;
      uint64_t FC1_CLK:1;
      uint64_t FC2_CLK:1;
      uint64_t FC3_CLK:1;
      uint64_t FC4_CLK:1;
      uint64_t FC5_CLK:1;
      uint64_t FC6_CLK:1;
      uint64_t FC7_CLK:1;
      uint64_t reservedSpace1:6;
      uint64_t FC14_SPI_CLK:1;
      uint64_t FC15_I2C_CLK:1;
      uint64_t DMIC0_CLK:1;
      uint64_t reservedSpace2:2;
      uint64_t OSEVENT_TIMER_CLK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCCTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSGPIO0_CLK:1;
      uint64_t HSGPIO1_CLK:1;
      uint64_t HSGPIO2_CLK:1;
      uint64_t HSGPIO3_CLK:1;
      uint64_t HSGPIO4_CLK:1;
      uint64_t HSGPIO5_CLK:1;
      uint64_t HSGPIO6_CLK:1;
      uint64_t HSGPIO7_CLK:1;
      uint64_t reservedSpace0:8;
      uint64_t CRC_CLK:1;
      uint64_t reservedSpace1:6;
      uint64_t DMAC0_CLK:1;
      uint64_t DMAC1_CLK:1;
      uint64_t reservedSpace2:3;
      uint64_t MU_CLK:1;
      uint64_t SEMA_CLK:1;
      uint64_t reservedSpace3:1;
      uint64_t FREQME_CLK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCCTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CT32BIT0_CLK:1;
      uint64_t CT32BIT1_CLK:1;
      uint64_t CT32BIT2_CLK:1;
      uint64_t CT32BIT3_CLK:1;
      uint64_t CT32BIT4_CLK:1;
      uint64_t reservedSpace0:2;
      uint64_t RTC_LITE_CLK:1;
      uint64_t MRT0_CLK:1;
      uint64_t reservedSpace1:1;
      uint64_t WWDT1_CLK:1;
      uint64_t reservedSpace2:5;
      uint64_t I3C0_CLK:1;
      uint64_t reservedSpace3:13;
      uint64_t GPIOINTCTL_CLK:1;
      uint64_t PIMCTL_CLK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCCTL2;

  uint8_t res0[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t FC0_CLK_SET:1;
      uint64_t FC1_CLK_SET:1;
      uint64_t FC2_CLK_SET:1;
      uint64_t FC3_CLK_SET:1;
      uint64_t FC4_CLK_SET:1;
      uint64_t FC5_CLK_SET:1;
      uint64_t FC6_CLK_SET:1;
      uint64_t FC7_CLK_SET:1;
      uint64_t reservedSpace1:6;
      uint64_t FC14_SPI_CLK_SET:1;
      uint64_t FC15_I2C_CLK_SET:1;
      uint64_t DMIC0_CLK_SET:1;
      uint64_t reservedSpace2:2;
      uint64_t OSEVENT_TIMER_CLK_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCCTL0_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSGPIO0_CLK_SET:1;
      uint64_t HSGPIO1_CLK_SET:1;
      uint64_t HSGPIO2_CLK_SET:1;
      uint64_t HSGPIO3_CLK_SET:1;
      uint64_t HSGPIO4_CLK_SET:1;
      uint64_t HSGPIO5_CLK_SET:1;
      uint64_t HSGPIO6_CLK_SET:1;
      uint64_t HSGPIO7_CLK_SET:1;
      uint64_t reservedSpace0:8;
      uint64_t CRC_CLK_SET:1;
      uint64_t reservedSpace1:6;
      uint64_t DMAC0_CLK_SET:1;
      uint64_t DMAC1_CLK_SET:1;
      uint64_t reservedSpace2:3;
      uint64_t MU_CLK_SET:1;
      uint64_t SEMA_CLK_SET:1;
      uint64_t reservedSpace3:1;
      uint64_t FREQME_CLK_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCCTL1_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CT32BIT0_CLK_SET:1;
      uint64_t CT32BIT1_CLK_SET:1;
      uint64_t CT32BIT2_CLK_SET:1;
      uint64_t CT32BIT3_CLK_SET:1;
      uint64_t CT32BIT4_CLK_SET:1;
      uint64_t reservedSpace0:2;
      uint64_t RTC_LITE_CLK_SET:1;
      uint64_t MRT0_CLK_SET:1;
      uint64_t reservedSpace1:1;
      uint64_t WWDT1_CLK_SET:1;
      uint64_t reservedSpace2:5;
      uint64_t I3C0_CLK_SET:1;
      uint64_t reservedSpace3:13;
      uint64_t GPIOINTCTL_CLK_SET:1;
      uint64_t PIMCTL_CLK_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCCTL2_SET;

  uint8_t res1[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t FC0_CLK_CLR:1;
      uint64_t FC1_CLK_CLR:1;
      uint64_t FC2_CLK_CLR:1;
      uint64_t FC3_CLK_CLR:1;
      uint64_t FC4_CLK_CLR:1;
      uint64_t FC5_CLK_CLR:1;
      uint64_t FC6_CLK_CLR:1;
      uint64_t FC7_CLK_CLR:1;
      uint64_t reservedSpace1:6;
      uint64_t FC14_SPI_CLK_CLR:1;
      uint64_t FC15_I2C_CLK_CLR:1;
      uint64_t DMIC0_CLK_CLR:1;
      uint64_t reservedSpace2:2;
      uint64_t OSEVENT_TIMER_CLK_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCCTL0_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSGPIO0_CLK_CLR:1;
      uint64_t HSGPIO1_CLK_CLR:1;
      uint64_t HSGPIO2_CLK_CLR:1;
      uint64_t HSGPIO3_CLK_CLR:1;
      uint64_t HSGPIO4_CLK_CLR:1;
      uint64_t HSGPIO5_CLK_CLR:1;
      uint64_t HSGPIO6_CLK_CLR:1;
      uint64_t HSGPIO7_CLK_CLR:1;
      uint64_t reservedSpace0:8;
      uint64_t CRC_CLK_CLR:1;
      uint64_t reservedSpace1:6;
      uint64_t DMAC0_CLK_CLR:1;
      uint64_t DMAC1_CLK_CLR:1;
      uint64_t reservedSpace2:3;
      uint64_t MU_CLK_CLR:1;
      uint64_t SEMA_CLK_CLR:1;
      uint64_t reservedSpace3:1;
      uint64_t FREQME_CLK_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCCTL1_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CT32BIT0_CLK_CLR:1;
      uint64_t CT32BIT1_CLK_CLR:1;
      uint64_t CT32BIT2_CLK_CLR:1;
      uint64_t CT32BIT3_CLK_CLR:1;
      uint64_t CT32BIT4_CLK_CLR:1;
      uint64_t reservedSpace0:2;
      uint64_t RTC_LITE_CLK_CLR:1;
      uint64_t MRT0_CLK_CLR:1;
      uint64_t reservedSpace1:1;
      uint64_t WWDT1_CLK_CLR:1;
      uint64_t reservedSpace2:5;
      uint64_t I3C0_CLK_CLR:1;
      uint64_t reservedSpace3:13;
      uint64_t GPIOINTCTL_CLK_CLR:1;
      uint64_t PIMCTL_CLK_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCCTL2_CLR;

  uint8_t res2[388];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIOPLL0CLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BYPASS:1;
      uint64_t RESET:1;
      uint64_t reservedSpace0:11;
      uint64_t HOLDRINGOFF_ENA:1;
      uint64_t reservedSpace1:2;
      uint64_t MULT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIOPLL0CTL0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKTIMEDIV2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIOPLL0LOCKTIMEDIV2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NUM:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIOPLL0NUM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DENOM:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIOPLL0DENOM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFD0:6;
      uint64_t PFD0_CLKRDY:1;
      uint64_t PFD0_CLKGATE:1;
      uint64_t PFD1:6;
      uint64_t PFD1_CLKRDY:1;
      uint64_t PFD1_CLKGATE:1;
      uint64_t PFD2:6;
      uint64_t PFD2_CLKRDY:1;
      uint64_t PFD2_CLKGATE:1;
      uint64_t PFD3:6;
      uint64_t PFD3_CLKRDY:1;
      uint64_t PFD3_CLKGATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIOPLL0PFD;

  uint8_t res4[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIOPLLCLKDIV;

  uint8_t res5[444];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPCPUCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSPMRAMCLKDIV:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPMAINRAMCLKDIV;

  uint8_t res6[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPCPUCLKSELA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPCPUCLKSELB;

  uint8_t res7[72];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSEVENTFCLKSEL;

  uint8_t res8[572];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRG14CLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t MULT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRG14CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FC14FCLKSEL;

  uint8_t res9[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRG15CLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t MULT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRG15CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FC15FCLKSEL;

  uint8_t res10[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRGPLLCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMIC0FCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMIC0FCLKDIV;

  uint8_t res11[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BITFCLKSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BITFCLKSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BITFCLKSEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BITFCLKSEL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BITFCLKSEL4;

  uint8_t res12[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIOMCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIOMCLKDIV;

  uint8_t res13[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKOUTSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKOUTSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKOUTDIV;

  uint8_t res14[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I3C0FCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I3C0FCLKSTCSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I3C0FCLKSTCDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I3C0FCLKSDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I3C0FCLKDIV;

  uint8_t res15[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDT1FCLKSEL;

  uint8_t res16[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACMP0FCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACMP0FCLKDIV;

};

#define CLKCTL1 (*(volatile struct CLKCTL1_tag *) 0x40021010)

struct CLKCTL1_FLEXCOMM_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRGCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t MULT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRGCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFCLKSEL;

};

#define CLKCTL1_FLEXCOMM_0 (*(volatile struct CLKCTL1_FLEXCOMM_0_tag *) 0x40021500)

struct CLKCTL1_FLEXCOMM_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRGCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t MULT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRGCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFCLKSEL;

};

#define CLKCTL1_FLEXCOMM_1 (*(volatile struct CLKCTL1_FLEXCOMM_1_tag *) 0x40021520)

struct CLKCTL1_FLEXCOMM_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRGCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t MULT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRGCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFCLKSEL;

};

#define CLKCTL1_FLEXCOMM_2 (*(volatile struct CLKCTL1_FLEXCOMM_2_tag *) 0x40021540)

struct CLKCTL1_FLEXCOMM_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRGCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t MULT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRGCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFCLKSEL;

};

#define CLKCTL1_FLEXCOMM_3 (*(volatile struct CLKCTL1_FLEXCOMM_3_tag *) 0x40021560)

struct CLKCTL1_FLEXCOMM_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRGCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t MULT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRGCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFCLKSEL;

};

#define CLKCTL1_FLEXCOMM_4 (*(volatile struct CLKCTL1_FLEXCOMM_4_tag *) 0x40021580)

struct CLKCTL1_FLEXCOMM_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRGCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t MULT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRGCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFCLKSEL;

};

#define CLKCTL1_FLEXCOMM_5 (*(volatile struct CLKCTL1_FLEXCOMM_5_tag *) 0x400215a0)

struct CLKCTL1_FLEXCOMM_6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRGCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t MULT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRGCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFCLKSEL;

};

#define CLKCTL1_FLEXCOMM_6 (*(volatile struct CLKCTL1_FLEXCOMM_6_tag *) 0x400215c0)

struct CLKCTL1_FLEXCOMM_7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRGCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t MULT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRGCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFCLKSEL;

};

#define CLKCTL1_FLEXCOMM_7 (*(volatile struct CLKCTL1_FLEXCOMM_7_tag *) 0x400215e0)

struct SYSCTL1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCLKPINDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCLKPINDIR;

  uint8_t res0[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMISRCSEL:5;
      uint64_t reservedSpace0:26;
      uint64_t NMIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSPNMISRCSEL;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCKINSEL:2;
      uint64_t reservedSpace0:6;
      uint64_t WSINSEL:2;
      uint64_t reservedSpace1:6;
      uint64_t DATAINSEL:2;
      uint64_t reservedSpace2:6;
      uint64_t DATAOUTSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCCTRLSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCKINSEL:2;
      uint64_t reservedSpace0:6;
      uint64_t WSINSEL:2;
      uint64_t reservedSpace1:6;
      uint64_t DATAINSEL:2;
      uint64_t reservedSpace2:6;
      uint64_t DATAOUTSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCCTRLSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCKINSEL:2;
      uint64_t reservedSpace0:6;
      uint64_t WSINSEL:2;
      uint64_t reservedSpace1:6;
      uint64_t DATAINSEL:2;
      uint64_t reservedSpace2:6;
      uint64_t DATAOUTSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCCTRLSEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCKINSEL:2;
      uint64_t reservedSpace0:6;
      uint64_t WSINSEL:2;
      uint64_t reservedSpace1:6;
      uint64_t DATAINSEL:2;
      uint64_t reservedSpace2:6;
      uint64_t DATAOUTSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCCTRLSEL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCKINSEL:2;
      uint64_t reservedSpace0:6;
      uint64_t WSINSEL:2;
      uint64_t reservedSpace1:6;
      uint64_t DATAINSEL:2;
      uint64_t reservedSpace2:6;
      uint64_t DATAOUTSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCCTRLSEL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCKINSEL:2;
      uint64_t reservedSpace0:6;
      uint64_t WSINSEL:2;
      uint64_t reservedSpace1:6;
      uint64_t DATAINSEL:2;
      uint64_t reservedSpace2:6;
      uint64_t DATAOUTSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCCTRLSEL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCKINSEL:2;
      uint64_t reservedSpace0:6;
      uint64_t WSINSEL:2;
      uint64_t reservedSpace1:6;
      uint64_t DATAINSEL:2;
      uint64_t reservedSpace2:6;
      uint64_t DATAOUTSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCCTRLSEL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCKINSEL:2;
      uint64_t reservedSpace0:6;
      uint64_t WSINSEL:2;
      uint64_t reservedSpace1:6;
      uint64_t DATAINSEL:2;
      uint64_t reservedSpace2:6;
      uint64_t DATAOUTSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCCTRLSEL7;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHAREDSCKSEL:3;
      uint64_t reservedSpace0:1;
      uint64_t SHAREDWSSEL:3;
      uint64_t reservedSpace1:1;
      uint64_t SHAREDDATASEL:3;
      uint64_t reservedSpace2:5;
      uint64_t FC0DATAOUTEN:1;
      uint64_t FC1DATAOUTEN:1;
      uint64_t F20DATAOUTEN:1;
      uint64_t FC3DATAOUTEN:1;
      uint64_t FC4DATAOUTEN:1;
      uint64_t FC5DATAOUTEN:1;
      uint64_t FC6DATAOUTEN:1;
      uint64_t FC7DATAOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHAREDCTRLSET0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHAREDSCKSEL:3;
      uint64_t reservedSpace0:1;
      uint64_t SHAREDWSSEL:3;
      uint64_t reservedSpace1:1;
      uint64_t SHAREDDATASEL:3;
      uint64_t reservedSpace2:5;
      uint64_t FC0DATAOUTEN:1;
      uint64_t FC1DATAOUTEN:1;
      uint64_t F20DATAOUTEN:1;
      uint64_t FC3DATAOUTEN:1;
      uint64_t FC4DATAOUTEN:1;
      uint64_t FC5DATAOUTEN:1;
      uint64_t FC6DATAOUTEN:1;
      uint64_t FC7DATAOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHAREDCTRLSET1;

  uint8_t res3[376];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEVPULSEGEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXEVPULSEGEN;

};

#define SYSCTL1 (*(volatile struct SYSCTL1_tag *) 0x40022010)

struct PINT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMODE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENRL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENRL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENRL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENAF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IENF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENAF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIENF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENAF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIENF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RISE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FDET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FALL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSTAT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_PMATCH:1;
      uint64_t ENA_RXEV:1;
      uint64_t reservedSpace0:22;
      uint64_t PMAT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SRC0:3;
      uint64_t SRC1:3;
      uint64_t SRC2:3;
      uint64_t SRC3:3;
      uint64_t SRC4:3;
      uint64_t SRC5:3;
      uint64_t SRC6:3;
      uint64_t SRC7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROD_ENDPTS0:1;
      uint64_t PROD_ENDPTS1:1;
      uint64_t PROD_ENDPTS2:1;
      uint64_t PROD_ENDPTS3:1;
      uint64_t PROD_ENDPTS4:1;
      uint64_t PROD_ENDPTS5:1;
      uint64_t PROD_ENDPTS6:1;
      uint64_t reservedSpace0:1;
      uint64_t CFG0:3;
      uint64_t CFG1:3;
      uint64_t CFG2:3;
      uint64_t CFG3:3;
      uint64_t CFG4:3;
      uint64_t CFG5:3;
      uint64_t CFG6:3;
      uint64_t CFG7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMCFG;

};

#define PINT (*(volatile struct PINT_tag *) 0x40025000)

struct INPUTMUX_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCT_IN_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCT0_IN_SEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCT_IN_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCT0_IN_SEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCT_IN_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCT0_IN_SEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCT_IN_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCT0_IN_SEL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCT_IN_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCT0_IN_SEL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCT_IN_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCT0_IN_SEL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCT_IN_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCT0_IN_SEL6;

  uint8_t res0[228];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINT_SEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINT_SEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINT_SEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINT_SEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINT_SEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINT_SEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINT_SEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINT_SEL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINT_SEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINT_SEL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINT_SEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINT_SEL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINT_SEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINT_SEL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINT_SEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINT_SEL7;

  uint8_t res1[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSP_INT_SEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSP_INT_SEL_26;

  uint8_t res2[84];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_SEL_31;

  uint8_t res3[128];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAC0_OTRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_OTRIG_SEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAC0_OTRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_OTRIG_SEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAC0_OTRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_OTRIG_SEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAC0_OTRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_OTRIG_SEL3;

  uint8_t res4[240];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_ITRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_SEL_31;

  uint8_t res5[128];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAC1_OTRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_OTRIG_SEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAC1_OTRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_OTRIG_SEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAC1_OTRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_OTRIG_SEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAC1_OTRIG_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_OTRIG_SEL3;

  uint8_t res6[496];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMEASURE_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMEASURE_CH_SEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMEASURE_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMEASURE_CH_SEL1;

  uint8_t res7[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLEXCOMM0_RX:1;
      uint64_t FLEXCOMM0_TX:1;
      uint64_t FLEXCOMM1_RX:1;
      uint64_t FLEXCOMM1_TX:1;
      uint64_t FLEXCOMM2_RX:1;
      uint64_t FLEXCOMM2_TX:1;
      uint64_t FLEXCOMM3_RX:1;
      uint64_t FLEXCOMM3_TX:1;
      uint64_t FLEXCOMM4_RX:1;
      uint64_t FLEXCOMM4_TX:1;
      uint64_t FLEXCOMM5_RX:1;
      uint64_t FLEXCOMM5_TX:1;
      uint64_t FLEXCOMM6_RX:1;
      uint64_t FLEXCOMM6_TX:1;
      uint64_t FLEXCOMM7_RX:1;
      uint64_t FLEXCOMM7_TX:1;
      uint64_t DMIC0CH0:1;
      uint64_t DMIC0CH1:1;
      uint64_t DMIC0CH2:1;
      uint64_t DMIC0CH3:1;
      uint64_t DMIC0CH4:1;
      uint64_t DMIC0CH5:1;
      uint64_t DMIC0CH6:1;
      uint64_t DMIC0CH7:1;
      uint64_t I3C0_RX:1;
      uint64_t I3C0_TX:1;
      uint64_t FLEXCOMM14_RX:1;
      uint64_t FLEXCOMM14_TX:1;
      uint64_t FLEXSPI_RX:1;
      uint64_t FLEXSPI_TX:1;
      uint64_t HASHCRYPT_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_REQ_ENA0;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLEXCOMM0_RX:1;
      uint64_t FLEXCOMM0_TX:1;
      uint64_t FLEXCOMM1_RX:1;
      uint64_t FLEXCOMM1_TX:1;
      uint64_t FLEXCOMM2_RX:1;
      uint64_t FLEXCOMM2_TX:1;
      uint64_t FLEXCOMM3_RX:1;
      uint64_t FLEXCOMM3_TX:1;
      uint64_t FLEXCOMM4_RX:1;
      uint64_t FLEXCOMM4_TX:1;
      uint64_t FLEXCOMM5_RX:1;
      uint64_t FLEXCOMM5_TX:1;
      uint64_t FLEXCOMM6_RX:1;
      uint64_t FLEXCOMM6_TX:1;
      uint64_t FLEXCOMM7_RX:1;
      uint64_t FLEXCOMM7_TX:1;
      uint64_t DMIC0CH0:1;
      uint64_t DMIC0CH1:1;
      uint64_t DMIC0CH2:1;
      uint64_t DMIC0CH3:1;
      uint64_t DMIC0CH4:1;
      uint64_t DMIC0CH5:1;
      uint64_t DMIC0CH6:1;
      uint64_t DMIC0CH7:1;
      uint64_t I3C0_RX:1;
      uint64_t I3C0_TX:1;
      uint64_t FLEXCOMM14_RX:1;
      uint64_t FLEXCOMM14_TX:1;
      uint64_t FLEXSPI_RX:1;
      uint64_t FLEXSPI_TX:1;
      uint64_t HASHCRYPT_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_REQ_ENA0_SET;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLEXCOMM0_RX:1;
      uint64_t FLEXCOMM0_TX:1;
      uint64_t FLEXCOMM1_RX:1;
      uint64_t FLEXCOMM1_TX:1;
      uint64_t FLEXCOMM2_RX:1;
      uint64_t FLEXCOMM2_TX:1;
      uint64_t FLEXCOMM3_RX:1;
      uint64_t FLEXCOMM3_TX:1;
      uint64_t FLEXCOMM4_RX:1;
      uint64_t FLEXCOMM4_TX:1;
      uint64_t FLEXCOMM5_RX:1;
      uint64_t FLEXCOMM5_TX:1;
      uint64_t FLEXCOMM6_RX:1;
      uint64_t FLEXCOMM6_TX:1;
      uint64_t FLEXCOMM7_RX:1;
      uint64_t FLEXCOMM7_TX:1;
      uint64_t DMIC0CH0:1;
      uint64_t DMIC0CH1:1;
      uint64_t DMIC0CH2:1;
      uint64_t DMIC0CH3:1;
      uint64_t DMIC0CH4:1;
      uint64_t DMIC0CH5:1;
      uint64_t DMIC0CH6:1;
      uint64_t DMIC0CH7:1;
      uint64_t I3C0_RX:1;
      uint64_t I3C0_TX:1;
      uint64_t FLEXCOMM14_RX:1;
      uint64_t FLEXCOMM14_TX:1;
      uint64_t FLEXSPI_RX:1;
      uint64_t FLEXSPI_TX:1;
      uint64_t HASHCRYPT_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_REQ_ENA0_CLR;

  uint8_t res10[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLEXCOMM0_RX:1;
      uint64_t FLEXCOMM0_TX:1;
      uint64_t FLEXCOMM1_RX:1;
      uint64_t FLEXCOMM1_TX:1;
      uint64_t FLEXCOMM2_RX:1;
      uint64_t FLEXCOMM2_TX:1;
      uint64_t FLEXCOMM3_RX:1;
      uint64_t FLEXCOMM3_TX:1;
      uint64_t FLEXCOMM4_RX:1;
      uint64_t FLEXCOMM4_TX:1;
      uint64_t FLEXCOMM5_RX:1;
      uint64_t FLEXCOMM5_TX:1;
      uint64_t FLEXCOMM6_RX:1;
      uint64_t FLEXCOMM6_TX:1;
      uint64_t FLEXCOMM7_RX:1;
      uint64_t FLEXCOMM7_TX:1;
      uint64_t DMIC0CH0:1;
      uint64_t DMIC0CH1:1;
      uint64_t DMIC0CH2:1;
      uint64_t DMIC0CH3:1;
      uint64_t DMIC0CH4:1;
      uint64_t DMIC0CH5:1;
      uint64_t DMIC0CH6:1;
      uint64_t DMIC0CH7:1;
      uint64_t I3C0_RX:1;
      uint64_t I3C0_TX:1;
      uint64_t FLEXCOMM14_RX:1;
      uint64_t FLEXCOMM14_TX:1;
      uint64_t FLEXSPI_RX:1;
      uint64_t FLEXSPI_TX:1;
      uint64_t HASHCRYPT_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_REQ_ENA0;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLEXCOMM0_RX:1;
      uint64_t FLEXCOMM0_TX:1;
      uint64_t FLEXCOMM1_RX:1;
      uint64_t FLEXCOMM1_TX:1;
      uint64_t FLEXCOMM2_RX:1;
      uint64_t FLEXCOMM2_TX:1;
      uint64_t FLEXCOMM3_RX:1;
      uint64_t FLEXCOMM3_TX:1;
      uint64_t FLEXCOMM4_RX:1;
      uint64_t FLEXCOMM4_TX:1;
      uint64_t FLEXCOMM5_RX:1;
      uint64_t FLEXCOMM5_TX:1;
      uint64_t FLEXCOMM6_RX:1;
      uint64_t FLEXCOMM6_TX:1;
      uint64_t FLEXCOMM7_RX:1;
      uint64_t FLEXCOMM7_TX:1;
      uint64_t DMIC0CH0:1;
      uint64_t DMIC0CH1:1;
      uint64_t DMIC0CH2:1;
      uint64_t DMIC0CH3:1;
      uint64_t DMIC0CH4:1;
      uint64_t DMIC0CH5:1;
      uint64_t DMIC0CH6:1;
      uint64_t DMIC0CH7:1;
      uint64_t I3C0_RX:1;
      uint64_t I3C0_TX:1;
      uint64_t FLEXCOMM14_RX:1;
      uint64_t FLEXCOMM14_TX:1;
      uint64_t FLEXSPI_RX:1;
      uint64_t FLEXSPI_TX:1;
      uint64_t HASHCRYPT_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_REQ_ENA0_SET;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLEXCOMM0_RX:1;
      uint64_t FLEXCOMM0_TX:1;
      uint64_t FLEXCOMM1_RX:1;
      uint64_t FLEXCOMM1_TX:1;
      uint64_t FLEXCOMM2_RX:1;
      uint64_t FLEXCOMM2_TX:1;
      uint64_t FLEXCOMM3_RX:1;
      uint64_t FLEXCOMM3_TX:1;
      uint64_t FLEXCOMM4_RX:1;
      uint64_t FLEXCOMM4_TX:1;
      uint64_t FLEXCOMM5_RX:1;
      uint64_t FLEXCOMM5_TX:1;
      uint64_t FLEXCOMM6_RX:1;
      uint64_t FLEXCOMM6_TX:1;
      uint64_t FLEXCOMM7_RX:1;
      uint64_t FLEXCOMM7_TX:1;
      uint64_t DMIC0CH0:1;
      uint64_t DMIC0CH1:1;
      uint64_t DMIC0CH2:1;
      uint64_t DMIC0CH3:1;
      uint64_t DMIC0CH4:1;
      uint64_t DMIC0CH5:1;
      uint64_t DMIC0CH6:1;
      uint64_t DMIC0CH7:1;
      uint64_t I3C0_RX:1;
      uint64_t I3C0_TX:1;
      uint64_t FLEXCOMM14_RX:1;
      uint64_t FLEXCOMM14_TX:1;
      uint64_t FLEXSPI_RX:1;
      uint64_t FLEXSPI_TX:1;
      uint64_t HASHCRYPT_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_REQ_ENA0_CLR;

  uint8_t res13[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAC0_ITRIG_INMUX0:1;
      uint64_t DMAC0_ITRIG_INMUX1:1;
      uint64_t DMAC0_ITRIG_INMUX2:1;
      uint64_t DMAC0_ITRIG_INMUX3:1;
      uint64_t DMAC0_ITRIG_INMUX4:1;
      uint64_t DMAC0_ITRIG_INMUX5:1;
      uint64_t DMAC0_ITRIG_INMUX6:1;
      uint64_t DMAC0_ITRIG_INMUX7:1;
      uint64_t DMAC0_ITRIG_INMUX8:1;
      uint64_t DMAC0_ITRIG_INMUX9:1;
      uint64_t DMAC0_ITRIG_INMUX10:1;
      uint64_t DMAC0_ITRIG_INMUX11:1;
      uint64_t DMAC0_ITRIG_INMUX12:1;
      uint64_t DMAC0_ITRIG_INMUX13:1;
      uint64_t DMAC0_ITRIG_INMUX14:1;
      uint64_t DMAC0_ITRIG_INMUX15:1;
      uint64_t DMAC0_ITRIG_INMUX16:1;
      uint64_t DMAC0_ITRIG_INMUX17:1;
      uint64_t DMAC0_ITRIG_INMUX18:1;
      uint64_t DMAC0_ITRIG_INMUX19:1;
      uint64_t DMAC0_ITRIG_INMUX20:1;
      uint64_t DMAC0_ITRIG_INMUX21:1;
      uint64_t DMAC0_ITRIG_INMUX22:1;
      uint64_t DMAC0_ITRIG_INMUX23:1;
      uint64_t DMAC0_ITRIG_INMUX24:1;
      uint64_t DMAC0_ITRIG_INMUX25:1;
      uint64_t DMAC0_ITRIG_INMUX26:1;
      uint64_t DMAC0_ITRIG_INMUX27:1;
      uint64_t DMAC0_ITRIG_INMUX28:1;
      uint64_t DMAC0_ITRIG_INMUX29:1;
      uint64_t DMAC0_ITRIG_INMUX30:1;
      uint64_t DMAC0_ITRIG_INMUX31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_ENA0;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAC0_ITRIG_INMUX0:1;
      uint64_t DMAC0_ITRIG_INMUX1:1;
      uint64_t DMAC0_ITRIG_INMUX2:1;
      uint64_t DMAC0_ITRIG_INMUX3:1;
      uint64_t DMAC0_ITRIG_INMUX4:1;
      uint64_t DMAC0_ITRIG_INMUX5:1;
      uint64_t DMAC0_ITRIG_INMUX6:1;
      uint64_t DMAC0_ITRIG_INMUX7:1;
      uint64_t DMAC0_ITRIG_INMUX8:1;
      uint64_t DMAC0_ITRIG_INMUX9:1;
      uint64_t DMAC0_ITRIG_INMUX10:1;
      uint64_t DMAC0_ITRIG_INMUX11:1;
      uint64_t DMAC0_ITRIG_INMUX12:1;
      uint64_t DMAC0_ITRIG_INMUX13:1;
      uint64_t DMAC0_ITRIG_INMUX14:1;
      uint64_t DMAC0_ITRIG_INMUX15:1;
      uint64_t DMAC0_ITRIG_INMUX16:1;
      uint64_t DMAC0_ITRIG_INMUX17:1;
      uint64_t DMAC0_ITRIG_INMUX18:1;
      uint64_t DMAC0_ITRIG_INMUX19:1;
      uint64_t DMAC0_ITRIG_INMUX20:1;
      uint64_t DMAC0_ITRIG_INMUX21:1;
      uint64_t DMAC0_ITRIG_INMUX22:1;
      uint64_t DMAC0_ITRIG_INMUX23:1;
      uint64_t DMAC0_ITRIG_INMUX24:1;
      uint64_t DMAC0_ITRIG_INMUX25:1;
      uint64_t DMAC0_ITRIG_INMUX26:1;
      uint64_t DMAC0_ITRIG_INMUX27:1;
      uint64_t DMAC0_ITRIG_INMUX28:1;
      uint64_t DMAC0_ITRIG_INMUX29:1;
      uint64_t DMAC0_ITRIG_INMUX30:1;
      uint64_t DMAC0_ITRIG_INMUX31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_ENA0_SET;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAC0_ITRIG_INMUX0:1;
      uint64_t DMAC0_ITRIG_INMUX1:1;
      uint64_t DMAC0_ITRIG_INMUX2:1;
      uint64_t DMAC0_ITRIG_INMUX3:1;
      uint64_t DMAC0_ITRIG_INMUX4:1;
      uint64_t DMAC0_ITRIG_INMUX5:1;
      uint64_t DMAC0_ITRIG_INMUX6:1;
      uint64_t DMAC0_ITRIG_INMUX7:1;
      uint64_t DMAC0_ITRIG_INMUX8:1;
      uint64_t DMAC0_ITRIG_INMUX9:1;
      uint64_t DMAC0_ITRIG_INMUX10:1;
      uint64_t DMAC0_ITRIG_INMUX11:1;
      uint64_t DMAC0_ITRIG_INMUX12:1;
      uint64_t DMAC0_ITRIG_INMUX13:1;
      uint64_t DMAC0_ITRIG_INMUX14:1;
      uint64_t DMAC0_ITRIG_INMUX15:1;
      uint64_t DMAC0_ITRIG_INMUX16:1;
      uint64_t DMAC0_ITRIG_INMUX17:1;
      uint64_t DMAC0_ITRIG_INMUX18:1;
      uint64_t DMAC0_ITRIG_INMUX19:1;
      uint64_t DMAC0_ITRIG_INMUX20:1;
      uint64_t DMAC0_ITRIG_INMUX21:1;
      uint64_t DMAC0_ITRIG_INMUX22:1;
      uint64_t DMAC0_ITRIG_INMUX23:1;
      uint64_t DMAC0_ITRIG_INMUX24:1;
      uint64_t DMAC0_ITRIG_INMUX25:1;
      uint64_t DMAC0_ITRIG_INMUX26:1;
      uint64_t DMAC0_ITRIG_INMUX27:1;
      uint64_t DMAC0_ITRIG_INMUX28:1;
      uint64_t DMAC0_ITRIG_INMUX29:1;
      uint64_t DMAC0_ITRIG_INMUX30:1;
      uint64_t DMAC0_ITRIG_INMUX31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC0_ITRIG_ENA0_CLR;

  uint8_t res16[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAC1_ITRIG_INMUX0:1;
      uint64_t DMAC1_ITRIG_INMUX1:1;
      uint64_t DMAC1_ITRIG_INMUX2:1;
      uint64_t DMAC1_ITRIG_INMUX3:1;
      uint64_t DMAC1_ITRIG_INMUX4:1;
      uint64_t DMAC1_ITRIG_INMUX5:1;
      uint64_t DMAC1_ITRIG_INMUX6:1;
      uint64_t DMAC1_ITRIG_INMUX7:1;
      uint64_t DMAC1_ITRIG_INMUX8:1;
      uint64_t DMAC1_ITRIG_INMUX9:1;
      uint64_t DMAC1_ITRIG_INMUX10:1;
      uint64_t DMAC1_ITRIG_INMUX11:1;
      uint64_t DMAC1_ITRIG_INMUX12:1;
      uint64_t DMAC1_ITRIG_INMUX13:1;
      uint64_t DMAC1_ITRIG_INMUX14:1;
      uint64_t DMAC1_ITRIG_INMUX15:1;
      uint64_t DMAC1_ITRIG_INMUX16:1;
      uint64_t DMAC1_ITRIG_INMUX17:1;
      uint64_t DMAC1_ITRIG_INMUX18:1;
      uint64_t DMAC1_ITRIG_INMUX19:1;
      uint64_t DMAC1_ITRIG_INMUX20:1;
      uint64_t DMAC1_ITRIG_INMUX21:1;
      uint64_t DMAC1_ITRIG_INMUX22:1;
      uint64_t DMAC1_ITRIG_INMUX23:1;
      uint64_t DMAC1_ITRIG_INMUX24:1;
      uint64_t DMAC1_ITRIG_INMUX25:1;
      uint64_t DMAC1_ITRIG_INMUX26:1;
      uint64_t DMAC1_ITRIG_INMUX27:1;
      uint64_t DMAC1_ITRIG_INMUX28:1;
      uint64_t DMAC1_ITRIG_INMUX29:1;
      uint64_t DMAC1_ITRIG_INMUX30:1;
      uint64_t DMAC1_ITRIG_INMUX31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_ENA0;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAC1_ITRIG_INMUX0:1;
      uint64_t DMAC1_ITRIG_INMUX1:1;
      uint64_t DMAC1_ITRIG_INMUX2:1;
      uint64_t DMAC1_ITRIG_INMUX3:1;
      uint64_t DMAC1_ITRIG_INMUX4:1;
      uint64_t DMAC1_ITRIG_INMUX5:1;
      uint64_t DMAC1_ITRIG_INMUX6:1;
      uint64_t DMAC1_ITRIG_INMUX7:1;
      uint64_t DMAC1_ITRIG_INMUX8:1;
      uint64_t DMAC1_ITRIG_INMUX9:1;
      uint64_t DMAC1_ITRIG_INMUX10:1;
      uint64_t DMAC1_ITRIG_INMUX11:1;
      uint64_t DMAC1_ITRIG_INMUX12:1;
      uint64_t DMAC1_ITRIG_INMUX13:1;
      uint64_t DMAC1_ITRIG_INMUX14:1;
      uint64_t DMAC1_ITRIG_INMUX15:1;
      uint64_t DMAC1_ITRIG_INMUX16:1;
      uint64_t DMAC1_ITRIG_INMUX17:1;
      uint64_t DMAC1_ITRIG_INMUX18:1;
      uint64_t DMAC1_ITRIG_INMUX19:1;
      uint64_t DMAC1_ITRIG_INMUX20:1;
      uint64_t DMAC1_ITRIG_INMUX21:1;
      uint64_t DMAC1_ITRIG_INMUX22:1;
      uint64_t DMAC1_ITRIG_INMUX23:1;
      uint64_t DMAC1_ITRIG_INMUX24:1;
      uint64_t DMAC1_ITRIG_INMUX25:1;
      uint64_t DMAC1_ITRIG_INMUX26:1;
      uint64_t DMAC1_ITRIG_INMUX27:1;
      uint64_t DMAC1_ITRIG_INMUX28:1;
      uint64_t DMAC1_ITRIG_INMUX29:1;
      uint64_t DMAC1_ITRIG_INMUX30:1;
      uint64_t DMAC1_ITRIG_INMUX31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_ENA0_SET;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAC1_ITRIG_INMUX0:1;
      uint64_t DMAC1_ITRIG_INMUX1:1;
      uint64_t DMAC1_ITRIG_INMUX2:1;
      uint64_t DMAC1_ITRIG_INMUX3:1;
      uint64_t DMAC1_ITRIG_INMUX4:1;
      uint64_t DMAC1_ITRIG_INMUX5:1;
      uint64_t DMAC1_ITRIG_INMUX6:1;
      uint64_t DMAC1_ITRIG_INMUX7:1;
      uint64_t DMAC1_ITRIG_INMUX8:1;
      uint64_t DMAC1_ITRIG_INMUX9:1;
      uint64_t DMAC1_ITRIG_INMUX10:1;
      uint64_t DMAC1_ITRIG_INMUX11:1;
      uint64_t DMAC1_ITRIG_INMUX12:1;
      uint64_t DMAC1_ITRIG_INMUX13:1;
      uint64_t DMAC1_ITRIG_INMUX14:1;
      uint64_t DMAC1_ITRIG_INMUX15:1;
      uint64_t DMAC1_ITRIG_INMUX16:1;
      uint64_t DMAC1_ITRIG_INMUX17:1;
      uint64_t DMAC1_ITRIG_INMUX18:1;
      uint64_t DMAC1_ITRIG_INMUX19:1;
      uint64_t DMAC1_ITRIG_INMUX20:1;
      uint64_t DMAC1_ITRIG_INMUX21:1;
      uint64_t DMAC1_ITRIG_INMUX22:1;
      uint64_t DMAC1_ITRIG_INMUX23:1;
      uint64_t DMAC1_ITRIG_INMUX24:1;
      uint64_t DMAC1_ITRIG_INMUX25:1;
      uint64_t DMAC1_ITRIG_INMUX26:1;
      uint64_t DMAC1_ITRIG_INMUX27:1;
      uint64_t DMAC1_ITRIG_INMUX28:1;
      uint64_t DMAC1_ITRIG_INMUX29:1;
      uint64_t DMAC1_ITRIG_INMUX30:1;
      uint64_t DMAC1_ITRIG_INMUX31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC1_ITRIG_ENA0_CLR;

};

#define INPUTMUX (*(volatile struct INPUTMUX_tag *) 0x40026000)

struct INPUTMUX_CT32BIT_CAP_SEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPn_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BIT_CAP_SEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPn_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BIT_CAP_SEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPn_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BIT_CAP_SEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPn_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BIT_CAP_SEL3;

};

#define INPUTMUX_CT32BIT_CAP_SEL_0 (*(volatile struct INPUTMUX_CT32BIT_CAP_SEL_0_tag *) 0x40026600)

struct INPUTMUX_CT32BIT_CAP_SEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPn_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BIT_CAP_SEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPn_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BIT_CAP_SEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPn_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BIT_CAP_SEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPn_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BIT_CAP_SEL3;

};

#define INPUTMUX_CT32BIT_CAP_SEL_1 (*(volatile struct INPUTMUX_CT32BIT_CAP_SEL_1_tag *) 0x40026610)

struct INPUTMUX_CT32BIT_CAP_SEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPn_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BIT_CAP_SEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPn_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BIT_CAP_SEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPn_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BIT_CAP_SEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPn_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BIT_CAP_SEL3;

};

#define INPUTMUX_CT32BIT_CAP_SEL_2 (*(volatile struct INPUTMUX_CT32BIT_CAP_SEL_2_tag *) 0x40026620)

struct INPUTMUX_CT32BIT_CAP_SEL_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPn_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BIT_CAP_SEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPn_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BIT_CAP_SEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPn_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BIT_CAP_SEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPn_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BIT_CAP_SEL3;

};

#define INPUTMUX_CT32BIT_CAP_SEL_3 (*(volatile struct INPUTMUX_CT32BIT_CAP_SEL_3_tag *) 0x40026630)

struct INPUTMUX_CT32BIT_CAP_SEL_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPn_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BIT_CAP_SEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPn_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BIT_CAP_SEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPn_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BIT_CAP_SEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPn_SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CT32BIT_CAP_SEL3;

};

#define INPUTMUX_CT32BIT_CAP_SEL_4 (*(volatile struct INPUTMUX_CT32BIT_CAP_SEL_4_tag *) 0x40026640)

struct CTIMER0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0INT:1;
      uint64_t MR1INT:1;
      uint64_t MR2INT:1;
      uint64_t MR3INT:1;
      uint64_t CR0INT:1;
      uint64_t CR1INT:1;
      uint64_t CR2INT:1;
      uint64_t CR3INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t CRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0I:1;
      uint64_t MR0R:1;
      uint64_t MR0S:1;
      uint64_t MR1I:1;
      uint64_t MR1R:1;
      uint64_t MR1S:1;
      uint64_t MR2I:1;
      uint64_t MR2R:1;
      uint64_t MR2S:1;
      uint64_t MR3I:1;
      uint64_t MR3R:1;
      uint64_t MR3S:1;
      uint64_t reservedSpace0:12;
      uint64_t MR0RL:1;
      uint64_t MR1RL:1;
      uint64_t MR2RL:1;
      uint64_t MR3RL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP0RE:1;
      uint64_t CAP0FE:1;
      uint64_t CAP0I:1;
      uint64_t CAP1RE:1;
      uint64_t CAP1FE:1;
      uint64_t CAP1I:1;
      uint64_t CAP2RE:1;
      uint64_t CAP2FE:1;
      uint64_t CAP2I:1;
      uint64_t CAP3RE:1;
      uint64_t CAP3FE:1;
      uint64_t CAP3I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM0:1;
      uint64_t EM1:1;
      uint64_t EM2:1;
      uint64_t EM3:1;
      uint64_t EMC0:2;
      uint64_t EMC1:2;
      uint64_t EMC2:2;
      uint64_t EMC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMR;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTMODE:2;
      uint64_t CINSEL:2;
      uint64_t ENCC:1;
      uint64_t SELCC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWMEN0:1;
      uint64_t PWMEN1:1;
      uint64_t PWMEN2:1;
      uint64_t PWMEN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH_Shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH_Shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH_Shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH_Shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_3;

};

#define CTIMER0 (*(volatile struct CTIMER0_tag *) 0x40028000)

struct CTIMER1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0INT:1;
      uint64_t MR1INT:1;
      uint64_t MR2INT:1;
      uint64_t MR3INT:1;
      uint64_t CR0INT:1;
      uint64_t CR1INT:1;
      uint64_t CR2INT:1;
      uint64_t CR3INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t CRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0I:1;
      uint64_t MR0R:1;
      uint64_t MR0S:1;
      uint64_t MR1I:1;
      uint64_t MR1R:1;
      uint64_t MR1S:1;
      uint64_t MR2I:1;
      uint64_t MR2R:1;
      uint64_t MR2S:1;
      uint64_t MR3I:1;
      uint64_t MR3R:1;
      uint64_t MR3S:1;
      uint64_t reservedSpace0:12;
      uint64_t MR0RL:1;
      uint64_t MR1RL:1;
      uint64_t MR2RL:1;
      uint64_t MR3RL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP0RE:1;
      uint64_t CAP0FE:1;
      uint64_t CAP0I:1;
      uint64_t CAP1RE:1;
      uint64_t CAP1FE:1;
      uint64_t CAP1I:1;
      uint64_t CAP2RE:1;
      uint64_t CAP2FE:1;
      uint64_t CAP2I:1;
      uint64_t CAP3RE:1;
      uint64_t CAP3FE:1;
      uint64_t CAP3I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM0:1;
      uint64_t EM1:1;
      uint64_t EM2:1;
      uint64_t EM3:1;
      uint64_t EMC0:2;
      uint64_t EMC1:2;
      uint64_t EMC2:2;
      uint64_t EMC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMR;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTMODE:2;
      uint64_t CINSEL:2;
      uint64_t ENCC:1;
      uint64_t SELCC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWMEN0:1;
      uint64_t PWMEN1:1;
      uint64_t PWMEN2:1;
      uint64_t PWMEN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH_Shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH_Shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH_Shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH_Shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_3;

};

#define CTIMER1 (*(volatile struct CTIMER1_tag *) 0x40029000)

struct CTIMER2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0INT:1;
      uint64_t MR1INT:1;
      uint64_t MR2INT:1;
      uint64_t MR3INT:1;
      uint64_t CR0INT:1;
      uint64_t CR1INT:1;
      uint64_t CR2INT:1;
      uint64_t CR3INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t CRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0I:1;
      uint64_t MR0R:1;
      uint64_t MR0S:1;
      uint64_t MR1I:1;
      uint64_t MR1R:1;
      uint64_t MR1S:1;
      uint64_t MR2I:1;
      uint64_t MR2R:1;
      uint64_t MR2S:1;
      uint64_t MR3I:1;
      uint64_t MR3R:1;
      uint64_t MR3S:1;
      uint64_t reservedSpace0:12;
      uint64_t MR0RL:1;
      uint64_t MR1RL:1;
      uint64_t MR2RL:1;
      uint64_t MR3RL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP0RE:1;
      uint64_t CAP0FE:1;
      uint64_t CAP0I:1;
      uint64_t CAP1RE:1;
      uint64_t CAP1FE:1;
      uint64_t CAP1I:1;
      uint64_t CAP2RE:1;
      uint64_t CAP2FE:1;
      uint64_t CAP2I:1;
      uint64_t CAP3RE:1;
      uint64_t CAP3FE:1;
      uint64_t CAP3I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM0:1;
      uint64_t EM1:1;
      uint64_t EM2:1;
      uint64_t EM3:1;
      uint64_t EMC0:2;
      uint64_t EMC1:2;
      uint64_t EMC2:2;
      uint64_t EMC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMR;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTMODE:2;
      uint64_t CINSEL:2;
      uint64_t ENCC:1;
      uint64_t SELCC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWMEN0:1;
      uint64_t PWMEN1:1;
      uint64_t PWMEN2:1;
      uint64_t PWMEN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH_Shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH_Shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH_Shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH_Shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_3;

};

#define CTIMER2 (*(volatile struct CTIMER2_tag *) 0x4002a000)

struct CTIMER3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0INT:1;
      uint64_t MR1INT:1;
      uint64_t MR2INT:1;
      uint64_t MR3INT:1;
      uint64_t CR0INT:1;
      uint64_t CR1INT:1;
      uint64_t CR2INT:1;
      uint64_t CR3INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t CRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0I:1;
      uint64_t MR0R:1;
      uint64_t MR0S:1;
      uint64_t MR1I:1;
      uint64_t MR1R:1;
      uint64_t MR1S:1;
      uint64_t MR2I:1;
      uint64_t MR2R:1;
      uint64_t MR2S:1;
      uint64_t MR3I:1;
      uint64_t MR3R:1;
      uint64_t MR3S:1;
      uint64_t reservedSpace0:12;
      uint64_t MR0RL:1;
      uint64_t MR1RL:1;
      uint64_t MR2RL:1;
      uint64_t MR3RL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP0RE:1;
      uint64_t CAP0FE:1;
      uint64_t CAP0I:1;
      uint64_t CAP1RE:1;
      uint64_t CAP1FE:1;
      uint64_t CAP1I:1;
      uint64_t CAP2RE:1;
      uint64_t CAP2FE:1;
      uint64_t CAP2I:1;
      uint64_t CAP3RE:1;
      uint64_t CAP3FE:1;
      uint64_t CAP3I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM0:1;
      uint64_t EM1:1;
      uint64_t EM2:1;
      uint64_t EM3:1;
      uint64_t EMC0:2;
      uint64_t EMC1:2;
      uint64_t EMC2:2;
      uint64_t EMC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMR;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTMODE:2;
      uint64_t CINSEL:2;
      uint64_t ENCC:1;
      uint64_t SELCC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWMEN0:1;
      uint64_t PWMEN1:1;
      uint64_t PWMEN2:1;
      uint64_t PWMEN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH_Shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH_Shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH_Shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH_Shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_3;

};

#define CTIMER3 (*(volatile struct CTIMER3_tag *) 0x4002b000)

struct CTIMER4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0INT:1;
      uint64_t MR1INT:1;
      uint64_t MR2INT:1;
      uint64_t MR3INT:1;
      uint64_t CR0INT:1;
      uint64_t CR1INT:1;
      uint64_t CR2INT:1;
      uint64_t CR3INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t CRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0I:1;
      uint64_t MR0R:1;
      uint64_t MR0S:1;
      uint64_t MR1I:1;
      uint64_t MR1R:1;
      uint64_t MR1S:1;
      uint64_t MR2I:1;
      uint64_t MR2R:1;
      uint64_t MR2S:1;
      uint64_t MR3I:1;
      uint64_t MR3R:1;
      uint64_t MR3S:1;
      uint64_t reservedSpace0:12;
      uint64_t MR0RL:1;
      uint64_t MR1RL:1;
      uint64_t MR2RL:1;
      uint64_t MR3RL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP0RE:1;
      uint64_t CAP0FE:1;
      uint64_t CAP0I:1;
      uint64_t CAP1RE:1;
      uint64_t CAP1FE:1;
      uint64_t CAP1I:1;
      uint64_t CAP2RE:1;
      uint64_t CAP2FE:1;
      uint64_t CAP2I:1;
      uint64_t CAP3RE:1;
      uint64_t CAP3FE:1;
      uint64_t CAP3I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM0:1;
      uint64_t EM1:1;
      uint64_t EM2:1;
      uint64_t EM3:1;
      uint64_t EMC0:2;
      uint64_t EMC1:2;
      uint64_t EMC2:2;
      uint64_t EMC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMR;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTMODE:2;
      uint64_t CINSEL:2;
      uint64_t ENCC:1;
      uint64_t SELCC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWMEN0:1;
      uint64_t PWMEN1:1;
      uint64_t PWMEN2:1;
      uint64_t PWMEN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH_Shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH_Shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH_Shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH_Shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_3;

};

#define CTIMER4 (*(volatile struct CTIMER4_tag *) 0x4002c000)

struct MRT0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOC:4;
      uint64_t NOB:5;
      uint64_t reservedSpace0:22;
      uint64_t MULTITASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CHAN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDLE_CH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GFLAG0:1;
      uint64_t GFLAG1:1;
      uint64_t GFLAG2:1;
      uint64_t GFLAG3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_FLAG;

};

#define MRT0 (*(volatile struct MRT0_tag *) 0x4002d0f0)

struct MRT0_CHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IVALUE:24;
      uint64_t reservedSpace0:7;
      uint64_t LOAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTEN:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTFLAG:1;
      uint64_t RUN:1;
      uint64_t INUSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

};

#define MRT0_CHANNEL_0 (*(volatile struct MRT0_CHANNEL_0_tag *) 0x4002d000)

struct MRT0_CHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IVALUE:24;
      uint64_t reservedSpace0:7;
      uint64_t LOAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTEN:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTFLAG:1;
      uint64_t RUN:1;
      uint64_t INUSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

};

#define MRT0_CHANNEL_1 (*(volatile struct MRT0_CHANNEL_1_tag *) 0x4002d010)

struct MRT0_CHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IVALUE:24;
      uint64_t reservedSpace0:7;
      uint64_t LOAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTEN:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTFLAG:1;
      uint64_t RUN:1;
      uint64_t INUSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

};

#define MRT0_CHANNEL_2 (*(volatile struct MRT0_CHANNEL_2_tag *) 0x4002d020)

struct MRT0_CHANNEL_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IVALUE:24;
      uint64_t reservedSpace0:7;
      uint64_t LOAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTEN:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTFLAG:1;
      uint64_t RUN:1;
      uint64_t INUSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

};

#define MRT0_CHANNEL_3 (*(volatile struct MRT0_CHANNEL_3_tag *) 0x4002d030)

struct RTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRESET:1;
      uint64_t reservedSpace0:1;
      uint64_t ALARM1HZ:1;
      uint64_t WAKE1KHZ:1;
      uint64_t ALARMDPD_EN:1;
      uint64_t WAKEDPD_EN:1;
      uint64_t RTC1KHZ_EN:1;
      uint64_t RTC_EN:1;
      uint64_t RTC_OSC_PD:1;
      uint64_t reservedSpace1:1;
      uint64_t RTC_SUBSEC_ENA:1;
      uint64_t reservedSpace2:17;
      uint64_t RTC_OSC_loadcap:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COUNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WAKE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC_SUBSEC:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUBSEC;

  uint8_t res0[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPREG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPREG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPREG_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPREG_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPREG_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPREG_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPREG_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPREG_7;

};

#define RTC (*(volatile struct RTC_tag *) 0x40030000)

struct CACHE64_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENCACHE:1;
      uint64_t ENWRBUF:1;
      uint64_t reservedSpace0:22;
      uint64_t INVW0:1;
      uint64_t PUSHW0:1;
      uint64_t INVW1:1;
      uint64_t PUSHW1:1;
      uint64_t reservedSpace1:3;
      uint64_t GO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LGO:1;
      uint64_t reservedSpace0:1;
      uint64_t CACHEADDR:12;
      uint64_t WSEL:1;
      uint64_t reservedSpace1:1;
      uint64_t TDSEL:1;
      uint64_t reservedSpace2:3;
      uint64_t LCIVB:1;
      uint64_t LCIMB:1;
      uint64_t LCWAY:1;
      uint64_t reservedSpace3:1;
      uint64_t LCMD:2;
      uint64_t LADSEL:1;
      uint64_t LACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LGO:1;
      uint64_t PHYADDR27_1:27;
      uint64_t reservedSpace0:1;
      uint64_t PHYADDR31_29:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCVR;

};

#define CACHE64 (*(volatile struct CACHE64_tag *) 0x40033800)

struct CACHE64_POLSEL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t REG0_TOP:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG0_TOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t REG1_TOP:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG1_TOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG0_POLICY:2;
      uint64_t REG1_POLICY:2;
      uint64_t REG02_POLICY:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POLSEL;

};

#define CACHE64_POLSEL (*(volatile struct CACHE64_POLSEL_tag *) 0x40033014)

struct GPIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR_7;

  uint8_t res0[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_7;

  uint8_t res1[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN_7;

  uint8_t res2[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN_7;

  uint8_t res3[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_7;

  uint8_t res4[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_7;

  uint8_t res5[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT_7;

  uint8_t res6[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSET_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSET_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSET_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSET_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSET_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSET_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSET_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSET_7;

  uint8_t res7[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRCLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRCLR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRCLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRCLR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRCLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRCLR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRCLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRCLR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRCLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRCLR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRCLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRCLR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRCLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRCLR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRCLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRCLR_7;

  uint8_t res8[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRNOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRNOT_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRNOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRNOT_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRNOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRNOT_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRNOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRNOT_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRNOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRNOT_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRNOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRNOT_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRNOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRNOT_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRNOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRNOT_7;

  uint8_t res9[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENA_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENA_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENA_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENA_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENA_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENA_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENA_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENA_7;

  uint8_t res10[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENB_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENB_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENB_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENB_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENB_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENB_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENB_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENB_7;

  uint8_t res11[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_CTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPOL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_CTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPOL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_CTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPOL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_CTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPOL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_CTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPOL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_CTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPOL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_CTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPOL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_CTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPOL_7;

  uint8_t res12[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDG_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDG_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDG_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDG_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDG_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDG_7;

  uint8_t res13[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATA_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATA_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATA_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATA_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATA_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATA_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATA_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATA_7;

  uint8_t res14[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATB_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATB_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATB_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATB_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATB_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATB_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATB_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATB_7;

};

#define GPIO (*(volatile struct GPIO_tag *) 0x40102000)

struct GPIO_B_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__31;

};

#define GPIO_B_0 (*(volatile struct GPIO_B_0_tag *) 0x40100000)

struct GPIO_B_1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__31;

};

#define GPIO_B_1 (*(volatile struct GPIO_B_1_tag *) 0x40100020)

struct GPIO_B_2_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__31;

};

#define GPIO_B_2 (*(volatile struct GPIO_B_2_tag *) 0x40100040)

struct GPIO_B_3_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__31;

};

#define GPIO_B_3 (*(volatile struct GPIO_B_3_tag *) 0x40100060)

struct GPIO_B_4_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__31;

};

#define GPIO_B_4 (*(volatile struct GPIO_B_4_tag *) 0x40100080)

struct GPIO_B_5_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__31;

};

#define GPIO_B_5 (*(volatile struct GPIO_B_5_tag *) 0x401000a0)

struct GPIO_B_6_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__31;

};

#define GPIO_B_6 (*(volatile struct GPIO_B_6_tag *) 0x401000c0)

struct GPIO_B_7_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__31;

};

#define GPIO_B_7 (*(volatile struct GPIO_B_7_tag *) 0x401000e0)

struct GPIO_W_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__31;

};

#define GPIO_W_0 (*(volatile struct GPIO_W_0_tag *) 0x40101000)

struct GPIO_W_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__31;

};

#define GPIO_W_1 (*(volatile struct GPIO_W_1_tag *) 0x40101080)

struct GPIO_W_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__31;

};

#define GPIO_W_2 (*(volatile struct GPIO_W_2_tag *) 0x40101100)

struct GPIO_W_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__31;

};

#define GPIO_W_3 (*(volatile struct GPIO_W_3_tag *) 0x40101180)

struct GPIO_W_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__31;

};

#define GPIO_W_4 (*(volatile struct GPIO_W_4_tag *) 0x40101200)

struct GPIO_W_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__31;

};

#define GPIO_W_5 (*(volatile struct GPIO_W_5_tag *) 0x40101280)

struct GPIO_W_6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__31;

};

#define GPIO_W_6 (*(volatile struct GPIO_W_6_tag *) 0x40101300)

struct GPIO_W_7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__31;

};

#define GPIO_W_7 (*(volatile struct GPIO_W_7_tag *) 0x40101380)

struct SECGPIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR_7;

  uint8_t res0[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_7;

  uint8_t res1[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN_7;

  uint8_t res2[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN_7;

  uint8_t res3[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_7;

  uint8_t res4[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_7;

  uint8_t res5[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT_7;

  uint8_t res6[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSET_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSET_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSET_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSET_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSET_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSET_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSET_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSET_7;

  uint8_t res7[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRCLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRCLR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRCLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRCLR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRCLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRCLR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRCLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRCLR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRCLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRCLR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRCLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRCLR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRCLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRCLR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRCLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRCLR_7;

  uint8_t res8[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRNOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRNOT_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRNOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRNOT_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRNOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRNOT_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRNOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRNOT_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRNOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRNOT_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRNOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRNOT_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRNOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRNOT_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRNOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRNOT_7;

  uint8_t res9[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENA_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENA_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENA_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENA_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENA_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENA_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENA_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENA_7;

  uint8_t res10[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENB_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENB_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENB_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENB_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENB_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENB_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENB_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENB_7;

  uint8_t res11[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_CTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPOL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_CTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPOL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_CTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPOL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_CTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPOL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_CTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPOL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_CTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPOL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_CTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPOL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_CTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPOL_7;

  uint8_t res12[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDG_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDG_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDG_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDG_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDG_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDG_7;

  uint8_t res13[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATA_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATA_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATA_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATA_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATA_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATA_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATA_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATA_7;

  uint8_t res14[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATB_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATB_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATB_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATB_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATB_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATB_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATB_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATB_7;

};

#define SECGPIO (*(volatile struct SECGPIO_tag *) 0x40156000)

struct SECGPIO_B_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__31;

};

#define SECGPIO_B_0 (*(volatile struct SECGPIO_B_0_tag *) 0x40154000)

struct SECGPIO_B_1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__31;

};

#define SECGPIO_B_1 (*(volatile struct SECGPIO_B_1_tag *) 0x40154020)

struct SECGPIO_B_2_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__31;

};

#define SECGPIO_B_2 (*(volatile struct SECGPIO_B_2_tag *) 0x40154040)

struct SECGPIO_B_3_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__31;

};

#define SECGPIO_B_3 (*(volatile struct SECGPIO_B_3_tag *) 0x40154060)

struct SECGPIO_B_4_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__31;

};

#define SECGPIO_B_4 (*(volatile struct SECGPIO_B_4_tag *) 0x40154080)

struct SECGPIO_B_5_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__31;

};

#define SECGPIO_B_5 (*(volatile struct SECGPIO_B_5_tag *) 0x401540a0)

struct SECGPIO_B_6_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__31;

};

#define SECGPIO_B_6 (*(volatile struct SECGPIO_B_6_tag *) 0x401540c0)

struct SECGPIO_B_7_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B__31;

};

#define SECGPIO_B_7 (*(volatile struct SECGPIO_B_7_tag *) 0x401540e0)

struct SECGPIO_W_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__31;

};

#define SECGPIO_W_0 (*(volatile struct SECGPIO_W_0_tag *) 0x40155000)

struct SECGPIO_W_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__31;

};

#define SECGPIO_W_1 (*(volatile struct SECGPIO_W_1_tag *) 0x40155080)

struct SECGPIO_W_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__31;

};

#define SECGPIO_W_2 (*(volatile struct SECGPIO_W_2_tag *) 0x40155100)

struct SECGPIO_W_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__31;

};

#define SECGPIO_W_3 (*(volatile struct SECGPIO_W_3_tag *) 0x40155180)

struct SECGPIO_W_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__31;

};

#define SECGPIO_W_4 (*(volatile struct SECGPIO_W_4_tag *) 0x40155200)

struct SECGPIO_W_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__31;

};

#define SECGPIO_W_5 (*(volatile struct SECGPIO_W_5_tag *) 0x40155280)

struct SECGPIO_W_6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__31;

};

#define SECGPIO_W_6 (*(volatile struct SECGPIO_W_6_tag *) 0x40155300)

struct SECGPIO_W_7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W__31;

};

#define SECGPIO_W_7 (*(volatile struct SECGPIO_W_7_tag *) 0x40155380)

struct DMA0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ACTIVEINT:1;
      uint64_t ACTIVEERRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t OFFSET:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRAMBASE;

  uint8_t res0[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENABLESET0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENABLECLR0;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACTIVE0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BSY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUSY0;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRINT0;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTEN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET0;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR0;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTA0;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTB0;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETVALID0;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETTRIG0;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ABORTCTRL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ABORT0;

};

#define DMA0 (*(volatile struct DMA0_tag *) 0x40104000)

struct DMA0_CHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_0 (*(volatile struct DMA0_CHANNEL_0_tag *) 0x40104400)

struct DMA0_CHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_1 (*(volatile struct DMA0_CHANNEL_1_tag *) 0x40104410)

struct DMA0_CHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_2 (*(volatile struct DMA0_CHANNEL_2_tag *) 0x40104420)

struct DMA0_CHANNEL_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_3 (*(volatile struct DMA0_CHANNEL_3_tag *) 0x40104430)

struct DMA0_CHANNEL_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_4 (*(volatile struct DMA0_CHANNEL_4_tag *) 0x40104440)

struct DMA0_CHANNEL_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_5 (*(volatile struct DMA0_CHANNEL_5_tag *) 0x40104450)

struct DMA0_CHANNEL_6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_6 (*(volatile struct DMA0_CHANNEL_6_tag *) 0x40104460)

struct DMA0_CHANNEL_7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_7 (*(volatile struct DMA0_CHANNEL_7_tag *) 0x40104470)

struct DMA0_CHANNEL_8_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_8 (*(volatile struct DMA0_CHANNEL_8_tag *) 0x40104480)

struct DMA0_CHANNEL_9_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_9 (*(volatile struct DMA0_CHANNEL_9_tag *) 0x40104490)

struct DMA0_CHANNEL_10_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_10 (*(volatile struct DMA0_CHANNEL_10_tag *) 0x401044a0)

struct DMA0_CHANNEL_11_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_11 (*(volatile struct DMA0_CHANNEL_11_tag *) 0x401044b0)

struct DMA0_CHANNEL_12_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_12 (*(volatile struct DMA0_CHANNEL_12_tag *) 0x401044c0)

struct DMA0_CHANNEL_13_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_13 (*(volatile struct DMA0_CHANNEL_13_tag *) 0x401044d0)

struct DMA0_CHANNEL_14_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_14 (*(volatile struct DMA0_CHANNEL_14_tag *) 0x401044e0)

struct DMA0_CHANNEL_15_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_15 (*(volatile struct DMA0_CHANNEL_15_tag *) 0x401044f0)

struct DMA0_CHANNEL_16_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_16 (*(volatile struct DMA0_CHANNEL_16_tag *) 0x40104500)

struct DMA0_CHANNEL_17_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_17 (*(volatile struct DMA0_CHANNEL_17_tag *) 0x40104510)

struct DMA0_CHANNEL_18_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_18 (*(volatile struct DMA0_CHANNEL_18_tag *) 0x40104520)

struct DMA0_CHANNEL_19_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_19 (*(volatile struct DMA0_CHANNEL_19_tag *) 0x40104530)

struct DMA0_CHANNEL_20_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_20 (*(volatile struct DMA0_CHANNEL_20_tag *) 0x40104540)

struct DMA0_CHANNEL_21_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_21 (*(volatile struct DMA0_CHANNEL_21_tag *) 0x40104550)

struct DMA0_CHANNEL_22_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_22 (*(volatile struct DMA0_CHANNEL_22_tag *) 0x40104560)

struct DMA0_CHANNEL_23_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_23 (*(volatile struct DMA0_CHANNEL_23_tag *) 0x40104570)

struct DMA0_CHANNEL_24_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_24 (*(volatile struct DMA0_CHANNEL_24_tag *) 0x40104580)

struct DMA0_CHANNEL_25_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_25 (*(volatile struct DMA0_CHANNEL_25_tag *) 0x40104590)

struct DMA0_CHANNEL_26_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_26 (*(volatile struct DMA0_CHANNEL_26_tag *) 0x401045a0)

struct DMA0_CHANNEL_27_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_27 (*(volatile struct DMA0_CHANNEL_27_tag *) 0x401045b0)

struct DMA0_CHANNEL_28_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_28 (*(volatile struct DMA0_CHANNEL_28_tag *) 0x401045c0)

struct DMA0_CHANNEL_29_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_29 (*(volatile struct DMA0_CHANNEL_29_tag *) 0x401045d0)

struct DMA0_CHANNEL_30_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_30 (*(volatile struct DMA0_CHANNEL_30_tag *) 0x401045e0)

struct DMA0_CHANNEL_31_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_31 (*(volatile struct DMA0_CHANNEL_31_tag *) 0x401045f0)

struct DMA1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ACTIVEINT:1;
      uint64_t ACTIVEERRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t OFFSET:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRAMBASE;

  uint8_t res0[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENABLESET0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENABLECLR0;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACTIVE0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BSY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUSY0;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRINT0;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTEN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET0;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR0;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTA0;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTB0;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETVALID0;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETTRIG0;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ABORTCTRL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ABORT0;

};

#define DMA1 (*(volatile struct DMA1_tag *) 0x40105000)

struct DMA1_CHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_0 (*(volatile struct DMA1_CHANNEL_0_tag *) 0x40105400)

struct DMA1_CHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_1 (*(volatile struct DMA1_CHANNEL_1_tag *) 0x40105410)

struct DMA1_CHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_2 (*(volatile struct DMA1_CHANNEL_2_tag *) 0x40105420)

struct DMA1_CHANNEL_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_3 (*(volatile struct DMA1_CHANNEL_3_tag *) 0x40105430)

struct DMA1_CHANNEL_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_4 (*(volatile struct DMA1_CHANNEL_4_tag *) 0x40105440)

struct DMA1_CHANNEL_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_5 (*(volatile struct DMA1_CHANNEL_5_tag *) 0x40105450)

struct DMA1_CHANNEL_6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_6 (*(volatile struct DMA1_CHANNEL_6_tag *) 0x40105460)

struct DMA1_CHANNEL_7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_7 (*(volatile struct DMA1_CHANNEL_7_tag *) 0x40105470)

struct DMA1_CHANNEL_8_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_8 (*(volatile struct DMA1_CHANNEL_8_tag *) 0x40105480)

struct DMA1_CHANNEL_9_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_9 (*(volatile struct DMA1_CHANNEL_9_tag *) 0x40105490)

struct DMA1_CHANNEL_10_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_10 (*(volatile struct DMA1_CHANNEL_10_tag *) 0x401054a0)

struct DMA1_CHANNEL_11_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_11 (*(volatile struct DMA1_CHANNEL_11_tag *) 0x401054b0)

struct DMA1_CHANNEL_12_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_12 (*(volatile struct DMA1_CHANNEL_12_tag *) 0x401054c0)

struct DMA1_CHANNEL_13_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_13 (*(volatile struct DMA1_CHANNEL_13_tag *) 0x401054d0)

struct DMA1_CHANNEL_14_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_14 (*(volatile struct DMA1_CHANNEL_14_tag *) 0x401054e0)

struct DMA1_CHANNEL_15_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_15 (*(volatile struct DMA1_CHANNEL_15_tag *) 0x401054f0)

struct DMA1_CHANNEL_16_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_16 (*(volatile struct DMA1_CHANNEL_16_tag *) 0x40105500)

struct DMA1_CHANNEL_17_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_17 (*(volatile struct DMA1_CHANNEL_17_tag *) 0x40105510)

struct DMA1_CHANNEL_18_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_18 (*(volatile struct DMA1_CHANNEL_18_tag *) 0x40105520)

struct DMA1_CHANNEL_19_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_19 (*(volatile struct DMA1_CHANNEL_19_tag *) 0x40105530)

struct DMA1_CHANNEL_20_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_20 (*(volatile struct DMA1_CHANNEL_20_tag *) 0x40105540)

struct DMA1_CHANNEL_21_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_21 (*(volatile struct DMA1_CHANNEL_21_tag *) 0x40105550)

struct DMA1_CHANNEL_22_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_22 (*(volatile struct DMA1_CHANNEL_22_tag *) 0x40105560)

struct DMA1_CHANNEL_23_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_23 (*(volatile struct DMA1_CHANNEL_23_tag *) 0x40105570)

struct DMA1_CHANNEL_24_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_24 (*(volatile struct DMA1_CHANNEL_24_tag *) 0x40105580)

struct DMA1_CHANNEL_25_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_25 (*(volatile struct DMA1_CHANNEL_25_tag *) 0x40105590)

struct DMA1_CHANNEL_26_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_26 (*(volatile struct DMA1_CHANNEL_26_tag *) 0x401055a0)

struct DMA1_CHANNEL_27_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_27 (*(volatile struct DMA1_CHANNEL_27_tag *) 0x401055b0)

struct DMA1_CHANNEL_28_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_28 (*(volatile struct DMA1_CHANNEL_28_tag *) 0x401055c0)

struct DMA1_CHANNEL_29_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_29 (*(volatile struct DMA1_CHANNEL_29_tag *) 0x401055d0)

struct DMA1_CHANNEL_30_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_30 (*(volatile struct DMA1_CHANNEL_30_tag *) 0x401055e0)

struct DMA1_CHANNEL_31_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA1_CHANNEL_31 (*(volatile struct DMA1_CHANNEL_31_tag *) 0x401055f0)

struct FLEXCOMM0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSEL:3;
      uint64_t LOCK:1;
      uint64_t USARTPRESENT:1;
      uint64_t SPIPRESENT:1;
      uint64_t I2CPRESENT:1;
      uint64_t I2SPRESENT:1;
      uint64_t reservedSpace0:4;
      uint64_t ID:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSELID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

};

#define FLEXCOMM0 (*(volatile struct FLEXCOMM0_tag *) 0x40106ff8)

struct FLEXCOMM1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSEL:3;
      uint64_t LOCK:1;
      uint64_t USARTPRESENT:1;
      uint64_t SPIPRESENT:1;
      uint64_t I2CPRESENT:1;
      uint64_t I2SPRESENT:1;
      uint64_t reservedSpace0:4;
      uint64_t ID:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSELID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

};

#define FLEXCOMM1 (*(volatile struct FLEXCOMM1_tag *) 0x40107ff8)

struct FLEXCOMM2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSEL:3;
      uint64_t LOCK:1;
      uint64_t USARTPRESENT:1;
      uint64_t SPIPRESENT:1;
      uint64_t I2CPRESENT:1;
      uint64_t I2SPRESENT:1;
      uint64_t reservedSpace0:4;
      uint64_t ID:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSELID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

};

#define FLEXCOMM2 (*(volatile struct FLEXCOMM2_tag *) 0x40108ff8)

struct FLEXCOMM3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSEL:3;
      uint64_t LOCK:1;
      uint64_t USARTPRESENT:1;
      uint64_t SPIPRESENT:1;
      uint64_t I2CPRESENT:1;
      uint64_t I2SPRESENT:1;
      uint64_t reservedSpace0:4;
      uint64_t ID:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSELID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

};

#define FLEXCOMM3 (*(volatile struct FLEXCOMM3_tag *) 0x40109ff8)

struct FLEXCOMM4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSEL:3;
      uint64_t LOCK:1;
      uint64_t USARTPRESENT:1;
      uint64_t SPIPRESENT:1;
      uint64_t I2CPRESENT:1;
      uint64_t I2SPRESENT:1;
      uint64_t reservedSpace0:4;
      uint64_t ID:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSELID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

};

#define FLEXCOMM4 (*(volatile struct FLEXCOMM4_tag *) 0x40122ff8)

struct FLEXCOMM5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSEL:3;
      uint64_t LOCK:1;
      uint64_t USARTPRESENT:1;
      uint64_t SPIPRESENT:1;
      uint64_t I2CPRESENT:1;
      uint64_t I2SPRESENT:1;
      uint64_t reservedSpace0:4;
      uint64_t ID:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSELID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

};

#define FLEXCOMM5 (*(volatile struct FLEXCOMM5_tag *) 0x40123ff8)

struct FLEXCOMM6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSEL:3;
      uint64_t LOCK:1;
      uint64_t USARTPRESENT:1;
      uint64_t SPIPRESENT:1;
      uint64_t I2CPRESENT:1;
      uint64_t I2SPRESENT:1;
      uint64_t reservedSpace0:4;
      uint64_t ID:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSELID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

};

#define FLEXCOMM6 (*(volatile struct FLEXCOMM6_tag *) 0x40124ff8)

struct FLEXCOMM7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSEL:3;
      uint64_t LOCK:1;
      uint64_t USARTPRESENT:1;
      uint64_t SPIPRESENT:1;
      uint64_t I2CPRESENT:1;
      uint64_t I2SPRESENT:1;
      uint64_t reservedSpace0:4;
      uint64_t ID:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSELID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

};

#define FLEXCOMM7 (*(volatile struct FLEXCOMM7_tag *) 0x40125ff8)

struct FLEXCOMM14_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSEL:3;
      uint64_t LOCK:1;
      uint64_t USARTPRESENT:1;
      uint64_t SPIPRESENT:1;
      uint64_t I2CPRESENT:1;
      uint64_t I2SPRESENT:1;
      uint64_t reservedSpace0:4;
      uint64_t ID:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSELID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

};

#define FLEXCOMM14 (*(volatile struct FLEXCOMM14_tag *) 0x40126ff8)

struct FLEXCOMM15_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSEL:3;
      uint64_t LOCK:1;
      uint64_t USARTPRESENT:1;
      uint64_t SPIPRESENT:1;
      uint64_t I2CPRESENT:1;
      uint64_t I2SPRESENT:1;
      uint64_t reservedSpace0:4;
      uint64_t ID:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSELID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

};

#define FLEXCOMM15 (*(volatile struct FLEXCOMM15_tag *) 0x40127ff8)

struct I2C0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTEN:1;
      uint64_t SLVEN:1;
      uint64_t MONEN:1;
      uint64_t TIMEOUTEN:1;
      uint64_t MONCLKSTR:1;
      uint64_t HSCAPABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t MSTSTATE:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace1:1;
      uint64_t SLVPENDING:1;
      uint64_t SLVSTATE:2;
      uint64_t SLVNOTSTR:1;
      uint64_t SLVIDX:2;
      uint64_t SLVSEL:1;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t MONACTIVE:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace2:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGEN:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERREN:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTREN:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELEN:1;
      uint64_t MONRDYEN:1;
      uint64_t MONOVEN:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLEEN:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTEN:1;
      uint64_t SCLTIMEOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGCLR:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERRCLR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGCLR:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTRCLR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELCLR:1;
      uint64_t MONRDYCLR:1;
      uint64_t MONOVCLR:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLECLR:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTCLR:1;
      uint64_t SCLTIMEOUTCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOMIN:4;
      uint64_t TO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDING:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTCONTINUE:1;
      uint64_t MSTSTART:1;
      uint64_t MSTSTOP:1;
      uint64_t MSTDMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTSCLLOW:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTSCLHIGH:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTDAT;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLVCONTINUE:1;
      uint64_t SLVNACK:1;
      uint64_t reservedSpace0:1;
      uint64_t SLVDMA:1;
      uint64_t reservedSpace1:4;
      uint64_t AUTOACK:1;
      uint64_t AUTOMATCHREAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVDAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUALMODE0:1;
      uint64_t SLVQUAL0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVQUAL0;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MONRXDAT:8;
      uint64_t MONSTART:1;
      uint64_t MONRESTART:1;
      uint64_t MONNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MONRXDAT;

  uint8_t res3[1912];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define I2C0 (*(volatile struct I2C0_tag *) 0x40106800)

struct I2C1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTEN:1;
      uint64_t SLVEN:1;
      uint64_t MONEN:1;
      uint64_t TIMEOUTEN:1;
      uint64_t MONCLKSTR:1;
      uint64_t HSCAPABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t MSTSTATE:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace1:1;
      uint64_t SLVPENDING:1;
      uint64_t SLVSTATE:2;
      uint64_t SLVNOTSTR:1;
      uint64_t SLVIDX:2;
      uint64_t SLVSEL:1;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t MONACTIVE:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace2:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGEN:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERREN:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTREN:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELEN:1;
      uint64_t MONRDYEN:1;
      uint64_t MONOVEN:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLEEN:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTEN:1;
      uint64_t SCLTIMEOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGCLR:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERRCLR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGCLR:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTRCLR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELCLR:1;
      uint64_t MONRDYCLR:1;
      uint64_t MONOVCLR:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLECLR:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTCLR:1;
      uint64_t SCLTIMEOUTCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOMIN:4;
      uint64_t TO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDING:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTCONTINUE:1;
      uint64_t MSTSTART:1;
      uint64_t MSTSTOP:1;
      uint64_t MSTDMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTSCLLOW:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTSCLHIGH:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTDAT;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLVCONTINUE:1;
      uint64_t SLVNACK:1;
      uint64_t reservedSpace0:1;
      uint64_t SLVDMA:1;
      uint64_t reservedSpace1:4;
      uint64_t AUTOACK:1;
      uint64_t AUTOMATCHREAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVDAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUALMODE0:1;
      uint64_t SLVQUAL0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVQUAL0;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MONRXDAT:8;
      uint64_t MONSTART:1;
      uint64_t MONRESTART:1;
      uint64_t MONNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MONRXDAT;

  uint8_t res3[1912];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define I2C1 (*(volatile struct I2C1_tag *) 0x40107800)

struct I2C2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTEN:1;
      uint64_t SLVEN:1;
      uint64_t MONEN:1;
      uint64_t TIMEOUTEN:1;
      uint64_t MONCLKSTR:1;
      uint64_t HSCAPABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t MSTSTATE:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace1:1;
      uint64_t SLVPENDING:1;
      uint64_t SLVSTATE:2;
      uint64_t SLVNOTSTR:1;
      uint64_t SLVIDX:2;
      uint64_t SLVSEL:1;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t MONACTIVE:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace2:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGEN:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERREN:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTREN:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELEN:1;
      uint64_t MONRDYEN:1;
      uint64_t MONOVEN:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLEEN:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTEN:1;
      uint64_t SCLTIMEOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGCLR:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERRCLR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGCLR:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTRCLR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELCLR:1;
      uint64_t MONRDYCLR:1;
      uint64_t MONOVCLR:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLECLR:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTCLR:1;
      uint64_t SCLTIMEOUTCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOMIN:4;
      uint64_t TO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDING:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTCONTINUE:1;
      uint64_t MSTSTART:1;
      uint64_t MSTSTOP:1;
      uint64_t MSTDMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTSCLLOW:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTSCLHIGH:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTDAT;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLVCONTINUE:1;
      uint64_t SLVNACK:1;
      uint64_t reservedSpace0:1;
      uint64_t SLVDMA:1;
      uint64_t reservedSpace1:4;
      uint64_t AUTOACK:1;
      uint64_t AUTOMATCHREAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVDAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUALMODE0:1;
      uint64_t SLVQUAL0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVQUAL0;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MONRXDAT:8;
      uint64_t MONSTART:1;
      uint64_t MONRESTART:1;
      uint64_t MONNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MONRXDAT;

  uint8_t res3[1912];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define I2C2 (*(volatile struct I2C2_tag *) 0x40108800)

struct I2C3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTEN:1;
      uint64_t SLVEN:1;
      uint64_t MONEN:1;
      uint64_t TIMEOUTEN:1;
      uint64_t MONCLKSTR:1;
      uint64_t HSCAPABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t MSTSTATE:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace1:1;
      uint64_t SLVPENDING:1;
      uint64_t SLVSTATE:2;
      uint64_t SLVNOTSTR:1;
      uint64_t SLVIDX:2;
      uint64_t SLVSEL:1;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t MONACTIVE:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace2:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGEN:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERREN:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTREN:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELEN:1;
      uint64_t MONRDYEN:1;
      uint64_t MONOVEN:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLEEN:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTEN:1;
      uint64_t SCLTIMEOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGCLR:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERRCLR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGCLR:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTRCLR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELCLR:1;
      uint64_t MONRDYCLR:1;
      uint64_t MONOVCLR:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLECLR:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTCLR:1;
      uint64_t SCLTIMEOUTCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOMIN:4;
      uint64_t TO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDING:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTCONTINUE:1;
      uint64_t MSTSTART:1;
      uint64_t MSTSTOP:1;
      uint64_t MSTDMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTSCLLOW:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTSCLHIGH:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTDAT;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLVCONTINUE:1;
      uint64_t SLVNACK:1;
      uint64_t reservedSpace0:1;
      uint64_t SLVDMA:1;
      uint64_t reservedSpace1:4;
      uint64_t AUTOACK:1;
      uint64_t AUTOMATCHREAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVDAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUALMODE0:1;
      uint64_t SLVQUAL0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVQUAL0;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MONRXDAT:8;
      uint64_t MONSTART:1;
      uint64_t MONRESTART:1;
      uint64_t MONNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MONRXDAT;

  uint8_t res3[1912];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define I2C3 (*(volatile struct I2C3_tag *) 0x40109800)

struct I2C4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTEN:1;
      uint64_t SLVEN:1;
      uint64_t MONEN:1;
      uint64_t TIMEOUTEN:1;
      uint64_t MONCLKSTR:1;
      uint64_t HSCAPABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t MSTSTATE:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace1:1;
      uint64_t SLVPENDING:1;
      uint64_t SLVSTATE:2;
      uint64_t SLVNOTSTR:1;
      uint64_t SLVIDX:2;
      uint64_t SLVSEL:1;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t MONACTIVE:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace2:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGEN:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERREN:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTREN:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELEN:1;
      uint64_t MONRDYEN:1;
      uint64_t MONOVEN:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLEEN:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTEN:1;
      uint64_t SCLTIMEOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGCLR:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERRCLR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGCLR:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTRCLR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELCLR:1;
      uint64_t MONRDYCLR:1;
      uint64_t MONOVCLR:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLECLR:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTCLR:1;
      uint64_t SCLTIMEOUTCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOMIN:4;
      uint64_t TO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDING:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTCONTINUE:1;
      uint64_t MSTSTART:1;
      uint64_t MSTSTOP:1;
      uint64_t MSTDMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTSCLLOW:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTSCLHIGH:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTDAT;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLVCONTINUE:1;
      uint64_t SLVNACK:1;
      uint64_t reservedSpace0:1;
      uint64_t SLVDMA:1;
      uint64_t reservedSpace1:4;
      uint64_t AUTOACK:1;
      uint64_t AUTOMATCHREAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVDAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUALMODE0:1;
      uint64_t SLVQUAL0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVQUAL0;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MONRXDAT:8;
      uint64_t MONSTART:1;
      uint64_t MONRESTART:1;
      uint64_t MONNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MONRXDAT;

  uint8_t res3[1912];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define I2C4 (*(volatile struct I2C4_tag *) 0x40122800)

struct I2C5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTEN:1;
      uint64_t SLVEN:1;
      uint64_t MONEN:1;
      uint64_t TIMEOUTEN:1;
      uint64_t MONCLKSTR:1;
      uint64_t HSCAPABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t MSTSTATE:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace1:1;
      uint64_t SLVPENDING:1;
      uint64_t SLVSTATE:2;
      uint64_t SLVNOTSTR:1;
      uint64_t SLVIDX:2;
      uint64_t SLVSEL:1;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t MONACTIVE:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace2:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGEN:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERREN:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTREN:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELEN:1;
      uint64_t MONRDYEN:1;
      uint64_t MONOVEN:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLEEN:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTEN:1;
      uint64_t SCLTIMEOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGCLR:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERRCLR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGCLR:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTRCLR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELCLR:1;
      uint64_t MONRDYCLR:1;
      uint64_t MONOVCLR:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLECLR:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTCLR:1;
      uint64_t SCLTIMEOUTCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOMIN:4;
      uint64_t TO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDING:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTCONTINUE:1;
      uint64_t MSTSTART:1;
      uint64_t MSTSTOP:1;
      uint64_t MSTDMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTSCLLOW:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTSCLHIGH:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTDAT;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLVCONTINUE:1;
      uint64_t SLVNACK:1;
      uint64_t reservedSpace0:1;
      uint64_t SLVDMA:1;
      uint64_t reservedSpace1:4;
      uint64_t AUTOACK:1;
      uint64_t AUTOMATCHREAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVDAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUALMODE0:1;
      uint64_t SLVQUAL0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVQUAL0;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MONRXDAT:8;
      uint64_t MONSTART:1;
      uint64_t MONRESTART:1;
      uint64_t MONNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MONRXDAT;

  uint8_t res3[1912];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define I2C5 (*(volatile struct I2C5_tag *) 0x40123800)

struct I2C6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTEN:1;
      uint64_t SLVEN:1;
      uint64_t MONEN:1;
      uint64_t TIMEOUTEN:1;
      uint64_t MONCLKSTR:1;
      uint64_t HSCAPABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t MSTSTATE:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace1:1;
      uint64_t SLVPENDING:1;
      uint64_t SLVSTATE:2;
      uint64_t SLVNOTSTR:1;
      uint64_t SLVIDX:2;
      uint64_t SLVSEL:1;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t MONACTIVE:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace2:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGEN:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERREN:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTREN:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELEN:1;
      uint64_t MONRDYEN:1;
      uint64_t MONOVEN:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLEEN:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTEN:1;
      uint64_t SCLTIMEOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGCLR:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERRCLR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGCLR:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTRCLR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELCLR:1;
      uint64_t MONRDYCLR:1;
      uint64_t MONOVCLR:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLECLR:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTCLR:1;
      uint64_t SCLTIMEOUTCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOMIN:4;
      uint64_t TO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDING:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTCONTINUE:1;
      uint64_t MSTSTART:1;
      uint64_t MSTSTOP:1;
      uint64_t MSTDMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTSCLLOW:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTSCLHIGH:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTDAT;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLVCONTINUE:1;
      uint64_t SLVNACK:1;
      uint64_t reservedSpace0:1;
      uint64_t SLVDMA:1;
      uint64_t reservedSpace1:4;
      uint64_t AUTOACK:1;
      uint64_t AUTOMATCHREAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVDAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUALMODE0:1;
      uint64_t SLVQUAL0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVQUAL0;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MONRXDAT:8;
      uint64_t MONSTART:1;
      uint64_t MONRESTART:1;
      uint64_t MONNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MONRXDAT;

  uint8_t res3[1912];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define I2C6 (*(volatile struct I2C6_tag *) 0x40124800)

struct I2C7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTEN:1;
      uint64_t SLVEN:1;
      uint64_t MONEN:1;
      uint64_t TIMEOUTEN:1;
      uint64_t MONCLKSTR:1;
      uint64_t HSCAPABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t MSTSTATE:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace1:1;
      uint64_t SLVPENDING:1;
      uint64_t SLVSTATE:2;
      uint64_t SLVNOTSTR:1;
      uint64_t SLVIDX:2;
      uint64_t SLVSEL:1;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t MONACTIVE:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace2:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGEN:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERREN:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTREN:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELEN:1;
      uint64_t MONRDYEN:1;
      uint64_t MONOVEN:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLEEN:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTEN:1;
      uint64_t SCLTIMEOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGCLR:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERRCLR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGCLR:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTRCLR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELCLR:1;
      uint64_t MONRDYCLR:1;
      uint64_t MONOVCLR:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLECLR:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTCLR:1;
      uint64_t SCLTIMEOUTCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOMIN:4;
      uint64_t TO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDING:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTCONTINUE:1;
      uint64_t MSTSTART:1;
      uint64_t MSTSTOP:1;
      uint64_t MSTDMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTSCLLOW:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTSCLHIGH:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTDAT;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLVCONTINUE:1;
      uint64_t SLVNACK:1;
      uint64_t reservedSpace0:1;
      uint64_t SLVDMA:1;
      uint64_t reservedSpace1:4;
      uint64_t AUTOACK:1;
      uint64_t AUTOMATCHREAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVDAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUALMODE0:1;
      uint64_t SLVQUAL0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVQUAL0;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MONRXDAT:8;
      uint64_t MONSTART:1;
      uint64_t MONRESTART:1;
      uint64_t MONNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MONRXDAT;

  uint8_t res3[1912];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define I2C7 (*(volatile struct I2C7_tag *) 0x40125800)

struct I2C15_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTEN:1;
      uint64_t SLVEN:1;
      uint64_t MONEN:1;
      uint64_t TIMEOUTEN:1;
      uint64_t MONCLKSTR:1;
      uint64_t HSCAPABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t MSTSTATE:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace1:1;
      uint64_t SLVPENDING:1;
      uint64_t SLVSTATE:2;
      uint64_t SLVNOTSTR:1;
      uint64_t SLVIDX:2;
      uint64_t SLVSEL:1;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t MONACTIVE:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace2:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGEN:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERREN:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTREN:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELEN:1;
      uint64_t MONRDYEN:1;
      uint64_t MONOVEN:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLEEN:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTEN:1;
      uint64_t SCLTIMEOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGCLR:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERRCLR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGCLR:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTRCLR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELCLR:1;
      uint64_t MONRDYCLR:1;
      uint64_t MONOVCLR:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLECLR:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTCLR:1;
      uint64_t SCLTIMEOUTCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOMIN:4;
      uint64_t TO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDING:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTCONTINUE:1;
      uint64_t MSTSTART:1;
      uint64_t MSTSTOP:1;
      uint64_t MSTDMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTSCLLOW:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTSCLHIGH:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTDAT;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLVCONTINUE:1;
      uint64_t SLVNACK:1;
      uint64_t reservedSpace0:1;
      uint64_t SLVDMA:1;
      uint64_t reservedSpace1:4;
      uint64_t AUTOACK:1;
      uint64_t AUTOMATCHREAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVDAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
      uint64_t reservedSpace0:7;
      uint64_t AUTONACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUALMODE0:1;
      uint64_t SLVQUAL0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVQUAL0;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MONRXDAT:8;
      uint64_t MONSTART:1;
      uint64_t MONRESTART:1;
      uint64_t MONNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MONRXDAT;

  uint8_t res3[1912];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define I2C15 (*(volatile struct I2C15_tag *) 0x40127800)

struct I2S0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAINENABLE:1;
      uint64_t DATAPAUSE:1;
      uint64_t PAIRCOUNT:2;
      uint64_t MSTSLVCFG:2;
      uint64_t MODE:2;
      uint64_t RIGHTLOW:1;
      uint64_t LEFTJUST:1;
      uint64_t ONECHANNEL:1;
      uint64_t PDMDATA:1;
      uint64_t SCK_POL:1;
      uint64_t WS_POL:1;
      uint64_t reservedSpace0:2;
      uint64_t DATALEN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAMELEN:11;
      uint64_t reservedSpace0:5;
      uint64_t POSITION:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  uint8_t res1[480];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t TXI2SE0:1;
      uint64_t PACK48:1;
      uint64_t SIZE:2;
      uint64_t reservedSpace0:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR48H;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD48H;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD48HNOPOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res6[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Aperture:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define I2S0 (*(volatile struct I2S0_tag *) 0x40106c00)

struct I2S0_SECCHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S0_SECCHANNEL_0 (*(volatile struct I2S0_SECCHANNEL_0_tag *) 0x40106c20)

struct I2S0_SECCHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S0_SECCHANNEL_1 (*(volatile struct I2S0_SECCHANNEL_1_tag *) 0x40106c40)

struct I2S0_SECCHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S0_SECCHANNEL_2 (*(volatile struct I2S0_SECCHANNEL_2_tag *) 0x40106c60)

struct I2S1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAINENABLE:1;
      uint64_t DATAPAUSE:1;
      uint64_t PAIRCOUNT:2;
      uint64_t MSTSLVCFG:2;
      uint64_t MODE:2;
      uint64_t RIGHTLOW:1;
      uint64_t LEFTJUST:1;
      uint64_t ONECHANNEL:1;
      uint64_t PDMDATA:1;
      uint64_t SCK_POL:1;
      uint64_t WS_POL:1;
      uint64_t reservedSpace0:2;
      uint64_t DATALEN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAMELEN:11;
      uint64_t reservedSpace0:5;
      uint64_t POSITION:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  uint8_t res1[480];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t TXI2SE0:1;
      uint64_t PACK48:1;
      uint64_t SIZE:2;
      uint64_t reservedSpace0:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR48H;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD48H;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD48HNOPOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res6[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Aperture:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define I2S1 (*(volatile struct I2S1_tag *) 0x40107c00)

struct I2S1_SECCHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S1_SECCHANNEL_0 (*(volatile struct I2S1_SECCHANNEL_0_tag *) 0x40107c20)

struct I2S1_SECCHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S1_SECCHANNEL_1 (*(volatile struct I2S1_SECCHANNEL_1_tag *) 0x40107c40)

struct I2S1_SECCHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S1_SECCHANNEL_2 (*(volatile struct I2S1_SECCHANNEL_2_tag *) 0x40107c60)

struct I2S2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAINENABLE:1;
      uint64_t DATAPAUSE:1;
      uint64_t PAIRCOUNT:2;
      uint64_t MSTSLVCFG:2;
      uint64_t MODE:2;
      uint64_t RIGHTLOW:1;
      uint64_t LEFTJUST:1;
      uint64_t ONECHANNEL:1;
      uint64_t PDMDATA:1;
      uint64_t SCK_POL:1;
      uint64_t WS_POL:1;
      uint64_t reservedSpace0:2;
      uint64_t DATALEN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAMELEN:11;
      uint64_t reservedSpace0:5;
      uint64_t POSITION:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  uint8_t res1[480];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t TXI2SE0:1;
      uint64_t PACK48:1;
      uint64_t SIZE:2;
      uint64_t reservedSpace0:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR48H;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD48H;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD48HNOPOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res6[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Aperture:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define I2S2 (*(volatile struct I2S2_tag *) 0x40108c00)

struct I2S2_SECCHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S2_SECCHANNEL_0 (*(volatile struct I2S2_SECCHANNEL_0_tag *) 0x40108c20)

struct I2S2_SECCHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S2_SECCHANNEL_1 (*(volatile struct I2S2_SECCHANNEL_1_tag *) 0x40108c40)

struct I2S2_SECCHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S2_SECCHANNEL_2 (*(volatile struct I2S2_SECCHANNEL_2_tag *) 0x40108c60)

struct I2S3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAINENABLE:1;
      uint64_t DATAPAUSE:1;
      uint64_t PAIRCOUNT:2;
      uint64_t MSTSLVCFG:2;
      uint64_t MODE:2;
      uint64_t RIGHTLOW:1;
      uint64_t LEFTJUST:1;
      uint64_t ONECHANNEL:1;
      uint64_t PDMDATA:1;
      uint64_t SCK_POL:1;
      uint64_t WS_POL:1;
      uint64_t reservedSpace0:2;
      uint64_t DATALEN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAMELEN:11;
      uint64_t reservedSpace0:5;
      uint64_t POSITION:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  uint8_t res1[480];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t TXI2SE0:1;
      uint64_t PACK48:1;
      uint64_t SIZE:2;
      uint64_t reservedSpace0:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR48H;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD48H;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD48HNOPOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res6[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Aperture:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define I2S3 (*(volatile struct I2S3_tag *) 0x40109c00)

struct I2S3_SECCHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S3_SECCHANNEL_0 (*(volatile struct I2S3_SECCHANNEL_0_tag *) 0x40109c20)

struct I2S3_SECCHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S3_SECCHANNEL_1 (*(volatile struct I2S3_SECCHANNEL_1_tag *) 0x40109c40)

struct I2S3_SECCHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S3_SECCHANNEL_2 (*(volatile struct I2S3_SECCHANNEL_2_tag *) 0x40109c60)

struct I2S4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAINENABLE:1;
      uint64_t DATAPAUSE:1;
      uint64_t PAIRCOUNT:2;
      uint64_t MSTSLVCFG:2;
      uint64_t MODE:2;
      uint64_t RIGHTLOW:1;
      uint64_t LEFTJUST:1;
      uint64_t ONECHANNEL:1;
      uint64_t PDMDATA:1;
      uint64_t SCK_POL:1;
      uint64_t WS_POL:1;
      uint64_t reservedSpace0:2;
      uint64_t DATALEN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAMELEN:11;
      uint64_t reservedSpace0:5;
      uint64_t POSITION:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  uint8_t res1[480];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t TXI2SE0:1;
      uint64_t PACK48:1;
      uint64_t SIZE:2;
      uint64_t reservedSpace0:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR48H;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD48H;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD48HNOPOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res6[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Aperture:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define I2S4 (*(volatile struct I2S4_tag *) 0x40122c00)

struct I2S4_SECCHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S4_SECCHANNEL_0 (*(volatile struct I2S4_SECCHANNEL_0_tag *) 0x40122c20)

struct I2S4_SECCHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S4_SECCHANNEL_1 (*(volatile struct I2S4_SECCHANNEL_1_tag *) 0x40122c40)

struct I2S4_SECCHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S4_SECCHANNEL_2 (*(volatile struct I2S4_SECCHANNEL_2_tag *) 0x40122c60)

struct I2S5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAINENABLE:1;
      uint64_t DATAPAUSE:1;
      uint64_t PAIRCOUNT:2;
      uint64_t MSTSLVCFG:2;
      uint64_t MODE:2;
      uint64_t RIGHTLOW:1;
      uint64_t LEFTJUST:1;
      uint64_t ONECHANNEL:1;
      uint64_t PDMDATA:1;
      uint64_t SCK_POL:1;
      uint64_t WS_POL:1;
      uint64_t reservedSpace0:2;
      uint64_t DATALEN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAMELEN:11;
      uint64_t reservedSpace0:5;
      uint64_t POSITION:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  uint8_t res1[480];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t TXI2SE0:1;
      uint64_t PACK48:1;
      uint64_t SIZE:2;
      uint64_t reservedSpace0:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR48H;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD48H;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD48HNOPOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res6[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Aperture:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define I2S5 (*(volatile struct I2S5_tag *) 0x40123c00)

struct I2S5_SECCHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S5_SECCHANNEL_0 (*(volatile struct I2S5_SECCHANNEL_0_tag *) 0x40123c20)

struct I2S5_SECCHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S5_SECCHANNEL_1 (*(volatile struct I2S5_SECCHANNEL_1_tag *) 0x40123c40)

struct I2S5_SECCHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S5_SECCHANNEL_2 (*(volatile struct I2S5_SECCHANNEL_2_tag *) 0x40123c60)

struct I2S6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAINENABLE:1;
      uint64_t DATAPAUSE:1;
      uint64_t PAIRCOUNT:2;
      uint64_t MSTSLVCFG:2;
      uint64_t MODE:2;
      uint64_t RIGHTLOW:1;
      uint64_t LEFTJUST:1;
      uint64_t ONECHANNEL:1;
      uint64_t PDMDATA:1;
      uint64_t SCK_POL:1;
      uint64_t WS_POL:1;
      uint64_t reservedSpace0:2;
      uint64_t DATALEN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAMELEN:11;
      uint64_t reservedSpace0:5;
      uint64_t POSITION:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  uint8_t res1[480];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t TXI2SE0:1;
      uint64_t PACK48:1;
      uint64_t SIZE:2;
      uint64_t reservedSpace0:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR48H;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD48H;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD48HNOPOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res6[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Aperture:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define I2S6 (*(volatile struct I2S6_tag *) 0x40124c00)

struct I2S6_SECCHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S6_SECCHANNEL_0 (*(volatile struct I2S6_SECCHANNEL_0_tag *) 0x40124c20)

struct I2S6_SECCHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S6_SECCHANNEL_1 (*(volatile struct I2S6_SECCHANNEL_1_tag *) 0x40124c40)

struct I2S6_SECCHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S6_SECCHANNEL_2 (*(volatile struct I2S6_SECCHANNEL_2_tag *) 0x40124c60)

struct I2S7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAINENABLE:1;
      uint64_t DATAPAUSE:1;
      uint64_t PAIRCOUNT:2;
      uint64_t MSTSLVCFG:2;
      uint64_t MODE:2;
      uint64_t RIGHTLOW:1;
      uint64_t LEFTJUST:1;
      uint64_t ONECHANNEL:1;
      uint64_t PDMDATA:1;
      uint64_t SCK_POL:1;
      uint64_t WS_POL:1;
      uint64_t reservedSpace0:2;
      uint64_t DATALEN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAMELEN:11;
      uint64_t reservedSpace0:5;
      uint64_t POSITION:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  uint8_t res1[480];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t TXI2SE0:1;
      uint64_t PACK48:1;
      uint64_t SIZE:2;
      uint64_t reservedSpace0:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR48H;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD48H;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD48HNOPOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res6[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Aperture:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define I2S7 (*(volatile struct I2S7_tag *) 0x40125c00)

struct I2S7_SECCHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S7_SECCHANNEL_0 (*(volatile struct I2S7_SECCHANNEL_0_tag *) 0x40125c20)

struct I2S7_SECCHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S7_SECCHANNEL_1 (*(volatile struct I2S7_SECCHANNEL_1_tag *) 0x40125c40)

struct I2S7_SECCHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S7_SECCHANNEL_2 (*(volatile struct I2S7_SECCHANNEL_2_tag *) 0x40125c60)

struct SPI0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t MASTER:1;
      uint64_t LSBF:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t reservedSpace1:1;
      uint64_t LOOP:1;
      uint64_t SPOL0:1;
      uint64_t SPOL1:1;
      uint64_t SPOL2:1;
      uint64_t SPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRE_DELAY:4;
      uint64_t POST_DELAY:4;
      uint64_t FRAME_DELAY:4;
      uint64_t TRANSFER_DELAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t STALLED:1;
      uint64_t ENDTRANSFER:1;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res1[2516];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXSSEL0_N:1;
      uint64_t TXSSEL1_N:1;
      uint64_t TXSSEL2_N:1;
      uint64_t TXSSEL3_N:1;
      uint64_t EOT:1;
      uint64_t EOF:1;
      uint64_t RXIGNORE:1;
      uint64_t TXIGNORE:1;
      uint64_t LEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res7[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define SPI0 (*(volatile struct SPI0_tag *) 0x40106400)

struct SPI1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t MASTER:1;
      uint64_t LSBF:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t reservedSpace1:1;
      uint64_t LOOP:1;
      uint64_t SPOL0:1;
      uint64_t SPOL1:1;
      uint64_t SPOL2:1;
      uint64_t SPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRE_DELAY:4;
      uint64_t POST_DELAY:4;
      uint64_t FRAME_DELAY:4;
      uint64_t TRANSFER_DELAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t STALLED:1;
      uint64_t ENDTRANSFER:1;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res1[2516];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXSSEL0_N:1;
      uint64_t TXSSEL1_N:1;
      uint64_t TXSSEL2_N:1;
      uint64_t TXSSEL3_N:1;
      uint64_t EOT:1;
      uint64_t EOF:1;
      uint64_t RXIGNORE:1;
      uint64_t TXIGNORE:1;
      uint64_t LEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res7[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define SPI1 (*(volatile struct SPI1_tag *) 0x40107400)

struct SPI2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t MASTER:1;
      uint64_t LSBF:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t reservedSpace1:1;
      uint64_t LOOP:1;
      uint64_t SPOL0:1;
      uint64_t SPOL1:1;
      uint64_t SPOL2:1;
      uint64_t SPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRE_DELAY:4;
      uint64_t POST_DELAY:4;
      uint64_t FRAME_DELAY:4;
      uint64_t TRANSFER_DELAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t STALLED:1;
      uint64_t ENDTRANSFER:1;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res1[2516];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXSSEL0_N:1;
      uint64_t TXSSEL1_N:1;
      uint64_t TXSSEL2_N:1;
      uint64_t TXSSEL3_N:1;
      uint64_t EOT:1;
      uint64_t EOF:1;
      uint64_t RXIGNORE:1;
      uint64_t TXIGNORE:1;
      uint64_t LEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res7[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define SPI2 (*(volatile struct SPI2_tag *) 0x40108400)

struct SPI3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t MASTER:1;
      uint64_t LSBF:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t reservedSpace1:1;
      uint64_t LOOP:1;
      uint64_t SPOL0:1;
      uint64_t SPOL1:1;
      uint64_t SPOL2:1;
      uint64_t SPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRE_DELAY:4;
      uint64_t POST_DELAY:4;
      uint64_t FRAME_DELAY:4;
      uint64_t TRANSFER_DELAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t STALLED:1;
      uint64_t ENDTRANSFER:1;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res1[2516];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXSSEL0_N:1;
      uint64_t TXSSEL1_N:1;
      uint64_t TXSSEL2_N:1;
      uint64_t TXSSEL3_N:1;
      uint64_t EOT:1;
      uint64_t EOF:1;
      uint64_t RXIGNORE:1;
      uint64_t TXIGNORE:1;
      uint64_t LEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res7[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define SPI3 (*(volatile struct SPI3_tag *) 0x40109400)

struct SPI4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t MASTER:1;
      uint64_t LSBF:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t reservedSpace1:1;
      uint64_t LOOP:1;
      uint64_t SPOL0:1;
      uint64_t SPOL1:1;
      uint64_t SPOL2:1;
      uint64_t SPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRE_DELAY:4;
      uint64_t POST_DELAY:4;
      uint64_t FRAME_DELAY:4;
      uint64_t TRANSFER_DELAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t STALLED:1;
      uint64_t ENDTRANSFER:1;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res1[2516];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXSSEL0_N:1;
      uint64_t TXSSEL1_N:1;
      uint64_t TXSSEL2_N:1;
      uint64_t TXSSEL3_N:1;
      uint64_t EOT:1;
      uint64_t EOF:1;
      uint64_t RXIGNORE:1;
      uint64_t TXIGNORE:1;
      uint64_t LEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res7[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define SPI4 (*(volatile struct SPI4_tag *) 0x40122400)

struct SPI5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t MASTER:1;
      uint64_t LSBF:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t reservedSpace1:1;
      uint64_t LOOP:1;
      uint64_t SPOL0:1;
      uint64_t SPOL1:1;
      uint64_t SPOL2:1;
      uint64_t SPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRE_DELAY:4;
      uint64_t POST_DELAY:4;
      uint64_t FRAME_DELAY:4;
      uint64_t TRANSFER_DELAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t STALLED:1;
      uint64_t ENDTRANSFER:1;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res1[2516];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXSSEL0_N:1;
      uint64_t TXSSEL1_N:1;
      uint64_t TXSSEL2_N:1;
      uint64_t TXSSEL3_N:1;
      uint64_t EOT:1;
      uint64_t EOF:1;
      uint64_t RXIGNORE:1;
      uint64_t TXIGNORE:1;
      uint64_t LEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res7[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define SPI5 (*(volatile struct SPI5_tag *) 0x40123400)

struct SPI6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t MASTER:1;
      uint64_t LSBF:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t reservedSpace1:1;
      uint64_t LOOP:1;
      uint64_t SPOL0:1;
      uint64_t SPOL1:1;
      uint64_t SPOL2:1;
      uint64_t SPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRE_DELAY:4;
      uint64_t POST_DELAY:4;
      uint64_t FRAME_DELAY:4;
      uint64_t TRANSFER_DELAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t STALLED:1;
      uint64_t ENDTRANSFER:1;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res1[2516];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXSSEL0_N:1;
      uint64_t TXSSEL1_N:1;
      uint64_t TXSSEL2_N:1;
      uint64_t TXSSEL3_N:1;
      uint64_t EOT:1;
      uint64_t EOF:1;
      uint64_t RXIGNORE:1;
      uint64_t TXIGNORE:1;
      uint64_t LEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res7[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define SPI6 (*(volatile struct SPI6_tag *) 0x40124400)

struct SPI7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t MASTER:1;
      uint64_t LSBF:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t reservedSpace1:1;
      uint64_t LOOP:1;
      uint64_t SPOL0:1;
      uint64_t SPOL1:1;
      uint64_t SPOL2:1;
      uint64_t SPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRE_DELAY:4;
      uint64_t POST_DELAY:4;
      uint64_t FRAME_DELAY:4;
      uint64_t TRANSFER_DELAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t STALLED:1;
      uint64_t ENDTRANSFER:1;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res1[2516];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXSSEL0_N:1;
      uint64_t TXSSEL1_N:1;
      uint64_t TXSSEL2_N:1;
      uint64_t TXSSEL3_N:1;
      uint64_t EOT:1;
      uint64_t EOF:1;
      uint64_t RXIGNORE:1;
      uint64_t TXIGNORE:1;
      uint64_t LEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res7[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define SPI7 (*(volatile struct SPI7_tag *) 0x40125400)

struct SPI14_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t MASTER:1;
      uint64_t LSBF:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t reservedSpace1:1;
      uint64_t LOOP:1;
      uint64_t SPOL0:1;
      uint64_t SPOL1:1;
      uint64_t SPOL2:1;
      uint64_t SPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRE_DELAY:4;
      uint64_t POST_DELAY:4;
      uint64_t FRAME_DELAY:4;
      uint64_t TRANSFER_DELAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t STALLED:1;
      uint64_t ENDTRANSFER:1;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res1[2516];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXSSEL0_N:1;
      uint64_t TXSSEL1_N:1;
      uint64_t TXSSEL2_N:1;
      uint64_t TXSSEL3_N:1;
      uint64_t EOT:1;
      uint64_t EOF:1;
      uint64_t RXIGNORE:1;
      uint64_t TXIGNORE:1;
      uint64_t LEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res7[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define SPI14 (*(volatile struct SPI14_tag *) 0x40126400)

struct USART0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t DATALEN:2;
      uint64_t PARITYSEL:2;
      uint64_t STOPLEN:1;
      uint64_t MODE32K:1;
      uint64_t LINMODE:1;
      uint64_t CTSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t SYNCEN:1;
      uint64_t CLKPOL:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMST:1;
      uint64_t LOOP:1;
      uint64_t reservedSpace3:2;
      uint64_t OETA:1;
      uint64_t AUTOADDR:1;
      uint64_t OESEL:1;
      uint64_t OEPOL:1;
      uint64_t RXPOL:1;
      uint64_t TXPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TXBRKEN:1;
      uint64_t ADDRDET:1;
      uint64_t reservedSpace1:3;
      uint64_t TXDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t CC:1;
      uint64_t CLRCCONRX:1;
      uint64_t reservedSpace3:6;
      uint64_t AUTOBAUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXIDLE:1;
      uint64_t CTS:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISSTAT:1;
      uint64_t reservedSpace2:3;
      uint64_t RXBRK:1;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLEEN:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSEN:1;
      uint64_t TXDISEN:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKEN:1;
      uint64_t STARTEN:1;
      uint64_t FRAMERREN:1;
      uint64_t PARITYERREN:1;
      uint64_t RXNOISEEN:1;
      uint64_t ABERREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLECLR:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSCLR:1;
      uint64_t TXDISCLR:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKCLR:1;
      uint64_t STARTCLR:1;
      uint64_t FRAMERRCLR:1;
      uint64_t PARITYERRCLR:1;
      uint64_t RXNOISECLR:1;
      uint64_t ABERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRGVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISINT:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSRVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR;

  uint8_t res1[3536];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res7[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define USART0 (*(volatile struct USART0_tag *) 0x40106000)

struct USART1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t DATALEN:2;
      uint64_t PARITYSEL:2;
      uint64_t STOPLEN:1;
      uint64_t MODE32K:1;
      uint64_t LINMODE:1;
      uint64_t CTSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t SYNCEN:1;
      uint64_t CLKPOL:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMST:1;
      uint64_t LOOP:1;
      uint64_t reservedSpace3:2;
      uint64_t OETA:1;
      uint64_t AUTOADDR:1;
      uint64_t OESEL:1;
      uint64_t OEPOL:1;
      uint64_t RXPOL:1;
      uint64_t TXPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TXBRKEN:1;
      uint64_t ADDRDET:1;
      uint64_t reservedSpace1:3;
      uint64_t TXDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t CC:1;
      uint64_t CLRCCONRX:1;
      uint64_t reservedSpace3:6;
      uint64_t AUTOBAUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXIDLE:1;
      uint64_t CTS:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISSTAT:1;
      uint64_t reservedSpace2:3;
      uint64_t RXBRK:1;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLEEN:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSEN:1;
      uint64_t TXDISEN:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKEN:1;
      uint64_t STARTEN:1;
      uint64_t FRAMERREN:1;
      uint64_t PARITYERREN:1;
      uint64_t RXNOISEEN:1;
      uint64_t ABERREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLECLR:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSCLR:1;
      uint64_t TXDISCLR:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKCLR:1;
      uint64_t STARTCLR:1;
      uint64_t FRAMERRCLR:1;
      uint64_t PARITYERRCLR:1;
      uint64_t RXNOISECLR:1;
      uint64_t ABERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRGVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISINT:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSRVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR;

  uint8_t res1[3536];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res7[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define USART1 (*(volatile struct USART1_tag *) 0x40107000)

struct USART2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t DATALEN:2;
      uint64_t PARITYSEL:2;
      uint64_t STOPLEN:1;
      uint64_t MODE32K:1;
      uint64_t LINMODE:1;
      uint64_t CTSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t SYNCEN:1;
      uint64_t CLKPOL:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMST:1;
      uint64_t LOOP:1;
      uint64_t reservedSpace3:2;
      uint64_t OETA:1;
      uint64_t AUTOADDR:1;
      uint64_t OESEL:1;
      uint64_t OEPOL:1;
      uint64_t RXPOL:1;
      uint64_t TXPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TXBRKEN:1;
      uint64_t ADDRDET:1;
      uint64_t reservedSpace1:3;
      uint64_t TXDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t CC:1;
      uint64_t CLRCCONRX:1;
      uint64_t reservedSpace3:6;
      uint64_t AUTOBAUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXIDLE:1;
      uint64_t CTS:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISSTAT:1;
      uint64_t reservedSpace2:3;
      uint64_t RXBRK:1;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLEEN:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSEN:1;
      uint64_t TXDISEN:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKEN:1;
      uint64_t STARTEN:1;
      uint64_t FRAMERREN:1;
      uint64_t PARITYERREN:1;
      uint64_t RXNOISEEN:1;
      uint64_t ABERREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLECLR:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSCLR:1;
      uint64_t TXDISCLR:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKCLR:1;
      uint64_t STARTCLR:1;
      uint64_t FRAMERRCLR:1;
      uint64_t PARITYERRCLR:1;
      uint64_t RXNOISECLR:1;
      uint64_t ABERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRGVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISINT:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSRVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR;

  uint8_t res1[3536];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res7[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define USART2 (*(volatile struct USART2_tag *) 0x40108000)

struct USART3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t DATALEN:2;
      uint64_t PARITYSEL:2;
      uint64_t STOPLEN:1;
      uint64_t MODE32K:1;
      uint64_t LINMODE:1;
      uint64_t CTSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t SYNCEN:1;
      uint64_t CLKPOL:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMST:1;
      uint64_t LOOP:1;
      uint64_t reservedSpace3:2;
      uint64_t OETA:1;
      uint64_t AUTOADDR:1;
      uint64_t OESEL:1;
      uint64_t OEPOL:1;
      uint64_t RXPOL:1;
      uint64_t TXPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TXBRKEN:1;
      uint64_t ADDRDET:1;
      uint64_t reservedSpace1:3;
      uint64_t TXDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t CC:1;
      uint64_t CLRCCONRX:1;
      uint64_t reservedSpace3:6;
      uint64_t AUTOBAUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXIDLE:1;
      uint64_t CTS:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISSTAT:1;
      uint64_t reservedSpace2:3;
      uint64_t RXBRK:1;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLEEN:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSEN:1;
      uint64_t TXDISEN:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKEN:1;
      uint64_t STARTEN:1;
      uint64_t FRAMERREN:1;
      uint64_t PARITYERREN:1;
      uint64_t RXNOISEEN:1;
      uint64_t ABERREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLECLR:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSCLR:1;
      uint64_t TXDISCLR:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKCLR:1;
      uint64_t STARTCLR:1;
      uint64_t FRAMERRCLR:1;
      uint64_t PARITYERRCLR:1;
      uint64_t RXNOISECLR:1;
      uint64_t ABERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRGVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISINT:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSRVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR;

  uint8_t res1[3536];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res7[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define USART3 (*(volatile struct USART3_tag *) 0x40109000)

struct USART4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t DATALEN:2;
      uint64_t PARITYSEL:2;
      uint64_t STOPLEN:1;
      uint64_t MODE32K:1;
      uint64_t LINMODE:1;
      uint64_t CTSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t SYNCEN:1;
      uint64_t CLKPOL:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMST:1;
      uint64_t LOOP:1;
      uint64_t reservedSpace3:2;
      uint64_t OETA:1;
      uint64_t AUTOADDR:1;
      uint64_t OESEL:1;
      uint64_t OEPOL:1;
      uint64_t RXPOL:1;
      uint64_t TXPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TXBRKEN:1;
      uint64_t ADDRDET:1;
      uint64_t reservedSpace1:3;
      uint64_t TXDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t CC:1;
      uint64_t CLRCCONRX:1;
      uint64_t reservedSpace3:6;
      uint64_t AUTOBAUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXIDLE:1;
      uint64_t CTS:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISSTAT:1;
      uint64_t reservedSpace2:3;
      uint64_t RXBRK:1;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLEEN:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSEN:1;
      uint64_t TXDISEN:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKEN:1;
      uint64_t STARTEN:1;
      uint64_t FRAMERREN:1;
      uint64_t PARITYERREN:1;
      uint64_t RXNOISEEN:1;
      uint64_t ABERREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLECLR:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSCLR:1;
      uint64_t TXDISCLR:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKCLR:1;
      uint64_t STARTCLR:1;
      uint64_t FRAMERRCLR:1;
      uint64_t PARITYERRCLR:1;
      uint64_t RXNOISECLR:1;
      uint64_t ABERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRGVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISINT:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSRVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR;

  uint8_t res1[3536];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res7[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define USART4 (*(volatile struct USART4_tag *) 0x40122000)

struct USART5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t DATALEN:2;
      uint64_t PARITYSEL:2;
      uint64_t STOPLEN:1;
      uint64_t MODE32K:1;
      uint64_t LINMODE:1;
      uint64_t CTSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t SYNCEN:1;
      uint64_t CLKPOL:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMST:1;
      uint64_t LOOP:1;
      uint64_t reservedSpace3:2;
      uint64_t OETA:1;
      uint64_t AUTOADDR:1;
      uint64_t OESEL:1;
      uint64_t OEPOL:1;
      uint64_t RXPOL:1;
      uint64_t TXPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TXBRKEN:1;
      uint64_t ADDRDET:1;
      uint64_t reservedSpace1:3;
      uint64_t TXDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t CC:1;
      uint64_t CLRCCONRX:1;
      uint64_t reservedSpace3:6;
      uint64_t AUTOBAUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXIDLE:1;
      uint64_t CTS:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISSTAT:1;
      uint64_t reservedSpace2:3;
      uint64_t RXBRK:1;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLEEN:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSEN:1;
      uint64_t TXDISEN:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKEN:1;
      uint64_t STARTEN:1;
      uint64_t FRAMERREN:1;
      uint64_t PARITYERREN:1;
      uint64_t RXNOISEEN:1;
      uint64_t ABERREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLECLR:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSCLR:1;
      uint64_t TXDISCLR:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKCLR:1;
      uint64_t STARTCLR:1;
      uint64_t FRAMERRCLR:1;
      uint64_t PARITYERRCLR:1;
      uint64_t RXNOISECLR:1;
      uint64_t ABERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRGVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISINT:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSRVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR;

  uint8_t res1[3536];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res7[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define USART5 (*(volatile struct USART5_tag *) 0x40123000)

struct USART6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t DATALEN:2;
      uint64_t PARITYSEL:2;
      uint64_t STOPLEN:1;
      uint64_t MODE32K:1;
      uint64_t LINMODE:1;
      uint64_t CTSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t SYNCEN:1;
      uint64_t CLKPOL:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMST:1;
      uint64_t LOOP:1;
      uint64_t reservedSpace3:2;
      uint64_t OETA:1;
      uint64_t AUTOADDR:1;
      uint64_t OESEL:1;
      uint64_t OEPOL:1;
      uint64_t RXPOL:1;
      uint64_t TXPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TXBRKEN:1;
      uint64_t ADDRDET:1;
      uint64_t reservedSpace1:3;
      uint64_t TXDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t CC:1;
      uint64_t CLRCCONRX:1;
      uint64_t reservedSpace3:6;
      uint64_t AUTOBAUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXIDLE:1;
      uint64_t CTS:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISSTAT:1;
      uint64_t reservedSpace2:3;
      uint64_t RXBRK:1;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLEEN:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSEN:1;
      uint64_t TXDISEN:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKEN:1;
      uint64_t STARTEN:1;
      uint64_t FRAMERREN:1;
      uint64_t PARITYERREN:1;
      uint64_t RXNOISEEN:1;
      uint64_t ABERREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLECLR:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSCLR:1;
      uint64_t TXDISCLR:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKCLR:1;
      uint64_t STARTCLR:1;
      uint64_t FRAMERRCLR:1;
      uint64_t PARITYERRCLR:1;
      uint64_t RXNOISECLR:1;
      uint64_t ABERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRGVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISINT:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSRVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR;

  uint8_t res1[3536];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res7[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define USART6 (*(volatile struct USART6_tag *) 0x40124000)

struct USART7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t DATALEN:2;
      uint64_t PARITYSEL:2;
      uint64_t STOPLEN:1;
      uint64_t MODE32K:1;
      uint64_t LINMODE:1;
      uint64_t CTSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t SYNCEN:1;
      uint64_t CLKPOL:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMST:1;
      uint64_t LOOP:1;
      uint64_t reservedSpace3:2;
      uint64_t OETA:1;
      uint64_t AUTOADDR:1;
      uint64_t OESEL:1;
      uint64_t OEPOL:1;
      uint64_t RXPOL:1;
      uint64_t TXPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TXBRKEN:1;
      uint64_t ADDRDET:1;
      uint64_t reservedSpace1:3;
      uint64_t TXDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t CC:1;
      uint64_t CLRCCONRX:1;
      uint64_t reservedSpace3:6;
      uint64_t AUTOBAUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXIDLE:1;
      uint64_t CTS:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISSTAT:1;
      uint64_t reservedSpace2:3;
      uint64_t RXBRK:1;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLEEN:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSEN:1;
      uint64_t TXDISEN:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKEN:1;
      uint64_t STARTEN:1;
      uint64_t FRAMERREN:1;
      uint64_t PARITYERREN:1;
      uint64_t RXNOISEEN:1;
      uint64_t ABERREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLECLR:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSCLR:1;
      uint64_t TXDISCLR:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKCLR:1;
      uint64_t STARTCLR:1;
      uint64_t FRAMERRCLR:1;
      uint64_t PARITYERRCLR:1;
      uint64_t RXNOISECLR:1;
      uint64_t ABERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRGVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISINT:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSRVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR;

  uint8_t res1[3536];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSIZE;

  uint8_t res7[432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APERTURE:8;
      uint64_t MINOR_REV:4;
      uint64_t MAJOR_REV:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define USART7 (*(volatile struct USART7_tag *) 0x40125000)

struct MUA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEATURE:16;
      uint64_t MINOR:8;
      uint64_t MAJOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAMETER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAR;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_3;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_3;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Fn:3;
      uint64_t reservedSpace0:1;
      uint64_t EP:1;
      uint64_t PM:2;
      uint64_t RS:1;
      uint64_t FUP:1;
      uint64_t RDIP:1;
      uint64_t RAIP:1;
      uint64_t reservedSpace1:9;
      uint64_t TEn:4;
      uint64_t RFn:4;
      uint64_t GIPn:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Fn:3;
      uint64_t reservedSpace0:2;
      uint64_t MUR:1;
      uint64_t RDIE:1;
      uint64_t reservedSpace1:5;
      uint64_t RAIE:1;
      uint64_t reservedSpace2:3;
      uint64_t GIRn:4;
      uint64_t TIEn:4;
      uint64_t RIEn:4;
      uint64_t GIEn:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

};

#define MUA (*(volatile struct MUA_tag *) 0x40110000)

struct OSTIMER0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVTIMER_COUNT_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTIMERL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVTIMER_COUNT_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTIMERH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTUREn_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAPTUREn_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTUREn_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAPTUREn_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCHn_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATCHn_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCHn_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATCHn_H;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSTIMER_INTRFLAG:1;
      uint64_t OSTIMER_INTENA:1;
      uint64_t MATCH_WR_RDYn:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSEVENT_CTRL;

};

#define OSTIMER0 (*(volatile struct OSTIMER0_tag *) 0x40113000)

struct DMIC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN_CH0:1;
      uint64_t EN_CH1:1;
      uint64_t EN_CH2:1;
      uint64_t EN_CH3:1;
      uint64_t EN_CH4:1;
      uint64_t EN_CH5:1;
      uint64_t EN_CH6:1;
      uint64_t EN_CH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANEN;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USE2FS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USE2FS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_SYNC_EN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBAL_SYNC_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCOUNTVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBAL_COUNT_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DECRESET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DECRESET;

  uint8_t res1[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPUTGAIN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWVADGAIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HPFS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWVADHPFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ST10:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWVADST10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSTT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWVADRSTT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THGN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWVADTHGN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THGS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWVADTHGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOWZ:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWVADLOWZ;

};

#define DMIC0 (*(volatile struct DMIC0_tag *) 0x40121f00)

struct DMIC0_CHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDMDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVHFCLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PREAC2FSCOEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PREAC4FSCOEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GAIN:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAINSHIFT;

  uint8_t res0[108];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t RESETN:1;
      uint64_t INTEN:1;
      uint64_t DMAEN:1;
      uint64_t reservedSpace0:12;
      uint64_t TRIGLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:1;
      uint64_t OVERRUN:1;
      uint64_t UNDERRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHY_FALL:1;
      uint64_t PHY_HALF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PHY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCPOLE:2;
      uint64_t reservedSpace0:2;
      uint64_t DCGAIN:4;
      uint64_t SATURATEAT16BIT:1;
      uint64_t SIGNEXTEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DC_CTRL;

};

#define DMIC0_CHANNEL_0 (*(volatile struct DMIC0_CHANNEL_0_tag *) 0x40121000)

struct DMIC0_CHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDMDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVHFCLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PREAC2FSCOEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PREAC4FSCOEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GAIN:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAINSHIFT;

  uint8_t res0[108];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t RESETN:1;
      uint64_t INTEN:1;
      uint64_t DMAEN:1;
      uint64_t reservedSpace0:12;
      uint64_t TRIGLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:1;
      uint64_t OVERRUN:1;
      uint64_t UNDERRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHY_FALL:1;
      uint64_t PHY_HALF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PHY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCPOLE:2;
      uint64_t reservedSpace0:2;
      uint64_t DCGAIN:4;
      uint64_t SATURATEAT16BIT:1;
      uint64_t SIGNEXTEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DC_CTRL;

};

#define DMIC0_CHANNEL_1 (*(volatile struct DMIC0_CHANNEL_1_tag *) 0x40121100)

struct DMIC0_CHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDMDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVHFCLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PREAC2FSCOEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PREAC4FSCOEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GAIN:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAINSHIFT;

  uint8_t res0[108];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t RESETN:1;
      uint64_t INTEN:1;
      uint64_t DMAEN:1;
      uint64_t reservedSpace0:12;
      uint64_t TRIGLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:1;
      uint64_t OVERRUN:1;
      uint64_t UNDERRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHY_FALL:1;
      uint64_t PHY_HALF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PHY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCPOLE:2;
      uint64_t reservedSpace0:2;
      uint64_t DCGAIN:4;
      uint64_t SATURATEAT16BIT:1;
      uint64_t SIGNEXTEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DC_CTRL;

};

#define DMIC0_CHANNEL_2 (*(volatile struct DMIC0_CHANNEL_2_tag *) 0x40121200)

struct DMIC0_CHANNEL_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDMDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVHFCLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PREAC2FSCOEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PREAC4FSCOEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GAIN:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAINSHIFT;

  uint8_t res0[108];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t RESETN:1;
      uint64_t INTEN:1;
      uint64_t DMAEN:1;
      uint64_t reservedSpace0:12;
      uint64_t TRIGLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:1;
      uint64_t OVERRUN:1;
      uint64_t UNDERRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHY_FALL:1;
      uint64_t PHY_HALF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PHY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCPOLE:2;
      uint64_t reservedSpace0:2;
      uint64_t DCGAIN:4;
      uint64_t SATURATEAT16BIT:1;
      uint64_t SIGNEXTEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DC_CTRL;

};

#define DMIC0_CHANNEL_3 (*(volatile struct DMIC0_CHANNEL_3_tag *) 0x40121300)

struct DMIC0_CHANNEL_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDMDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVHFCLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PREAC2FSCOEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PREAC4FSCOEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GAIN:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAINSHIFT;

  uint8_t res0[108];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t RESETN:1;
      uint64_t INTEN:1;
      uint64_t DMAEN:1;
      uint64_t reservedSpace0:12;
      uint64_t TRIGLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:1;
      uint64_t OVERRUN:1;
      uint64_t UNDERRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHY_FALL:1;
      uint64_t PHY_HALF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PHY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCPOLE:2;
      uint64_t reservedSpace0:2;
      uint64_t DCGAIN:4;
      uint64_t SATURATEAT16BIT:1;
      uint64_t SIGNEXTEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DC_CTRL;

};

#define DMIC0_CHANNEL_4 (*(volatile struct DMIC0_CHANNEL_4_tag *) 0x40121400)

struct DMIC0_CHANNEL_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDMDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVHFCLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PREAC2FSCOEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PREAC4FSCOEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GAIN:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAINSHIFT;

  uint8_t res0[108];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t RESETN:1;
      uint64_t INTEN:1;
      uint64_t DMAEN:1;
      uint64_t reservedSpace0:12;
      uint64_t TRIGLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:1;
      uint64_t OVERRUN:1;
      uint64_t UNDERRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHY_FALL:1;
      uint64_t PHY_HALF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PHY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCPOLE:2;
      uint64_t reservedSpace0:2;
      uint64_t DCGAIN:4;
      uint64_t SATURATEAT16BIT:1;
      uint64_t SIGNEXTEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DC_CTRL;

};

#define DMIC0_CHANNEL_5 (*(volatile struct DMIC0_CHANNEL_5_tag *) 0x40121500)

struct DMIC0_CHANNEL_6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDMDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVHFCLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PREAC2FSCOEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PREAC4FSCOEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GAIN:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAINSHIFT;

  uint8_t res0[108];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t RESETN:1;
      uint64_t INTEN:1;
      uint64_t DMAEN:1;
      uint64_t reservedSpace0:12;
      uint64_t TRIGLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:1;
      uint64_t OVERRUN:1;
      uint64_t UNDERRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHY_FALL:1;
      uint64_t PHY_HALF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PHY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCPOLE:2;
      uint64_t reservedSpace0:2;
      uint64_t DCGAIN:4;
      uint64_t SATURATEAT16BIT:1;
      uint64_t SIGNEXTEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DC_CTRL;

};

#define DMIC0_CHANNEL_6 (*(volatile struct DMIC0_CHANNEL_6_tag *) 0x40121600)

struct DMIC0_CHANNEL_7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDMDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVHFCLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PREAC2FSCOEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PREAC4FSCOEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GAIN:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAINSHIFT;

  uint8_t res0[108];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t RESETN:1;
      uint64_t INTEN:1;
      uint64_t DMAEN:1;
      uint64_t reservedSpace0:12;
      uint64_t TRIGLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:1;
      uint64_t OVERRUN:1;
      uint64_t UNDERRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHY_FALL:1;
      uint64_t PHY_HALF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PHY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCPOLE:2;
      uint64_t reservedSpace0:2;
      uint64_t DCGAIN:4;
      uint64_t SATURATEAT16BIT:1;
      uint64_t SIGNEXTEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DC_CTRL;

};

#define DMIC0_CHANNEL_7 (*(volatile struct DMIC0_CHANNEL_7_tag *) 0x40121700)

struct OCOTP_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_174;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_176;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_184;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_185;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_188;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_189;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_190;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_192;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_198;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_199;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_200;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_202;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_203;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_204;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_205;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_206;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_207;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_208;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_209;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_222;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_228;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_230;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_232;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_233;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_234;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_235;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_236;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_237;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_238;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_239;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_240;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_241;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_242;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_243;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_244;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_245;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_246;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_247;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_248;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_249;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_250;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_251;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_252;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_253;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_254;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_255;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_256;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_257;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_258;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_259;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_260;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_261;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_262;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_263;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_264;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_265;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_266;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_267;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_268;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_269;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_270;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_271;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_272;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_273;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_274;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_275;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_276;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_277;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_278;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_279;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_280;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_281;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_282;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_283;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_284;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_285;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_286;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_287;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_288;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_289;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_290;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_291;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_292;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_293;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_294;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_295;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_296;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_297;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_298;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_299;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_300;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_301;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_302;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_303;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_304;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_305;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_306;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_307;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_308;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_309;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_310;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_311;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_312;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_313;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_314;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_315;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_316;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_317;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_318;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_319;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_320;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_321;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_322;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_323;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_324;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_325;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_326;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_327;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_328;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_329;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_330;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_331;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_332;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_333;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_334;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_335;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_336;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_337;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_338;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_339;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_340;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_341;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_342;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_343;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_344;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_345;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_346;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_347;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_348;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_349;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_350;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_351;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_352;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_353;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_354;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_355;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_356;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_357;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_358;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_359;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_360;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_361;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_362;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_363;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_364;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_365;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_366;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_367;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_368;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_369;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_370;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_371;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_372;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_373;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_374;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_375;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_376;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_377;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_378;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_379;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_380;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_381;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_382;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_383;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_384;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_385;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_386;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_387;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_388;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_389;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_390;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_391;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_392;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_393;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_394;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_395;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_396;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_397;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_398;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_399;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_400;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_401;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_402;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_403;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_404;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_405;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_406;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_407;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_408;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_409;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_410;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_411;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_412;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_413;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_414;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_415;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_416;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_417;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_418;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_419;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_420;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_421;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_422;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_423;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_424;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_425;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_426;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_427;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_428;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_429;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_430;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_431;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_432;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_433;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_434;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_435;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_436;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_437;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_438;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_439;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_440;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_441;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_442;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_443;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_444;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_445;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_446;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_447;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_448;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_449;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_450;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_451;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_452;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_453;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_454;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_455;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_456;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_457;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_458;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_459;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_460;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_461;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_462;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_463;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_464;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_465;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_466;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_467;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_468;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_469;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_470;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_471;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_472;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_473;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_474;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_475;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_476;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_477;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_478;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_479;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_480;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_481;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_482;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_483;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_484;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_485;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_486;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_487;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_488;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_489;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_490;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_491;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_492;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_493;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_494;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t shadow:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_SHADOW_495;

  uint8_t res0[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:9;
      uint64_t reservedSpace0:2;
      uint64_t RELOAD_SHADOWS:1;
      uint64_t CRC_TEST:1;
      uint64_t reservedSpace1:2;
      uint64_t WORDLOCK:1;
      uint64_t WR_UNLOCK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_PDN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRITE_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_WRITE_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_READ_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READ_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_READ_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:4;
      uint64_t reservedSpace0:25;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_CLK_DIV;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_START_ADDR:9;
      uint64_t reservedSpace0:3;
      uint64_t CRC_END_ADDR:9;
      uint64_t reservedSpace1:3;
      uint64_t CRC_REF_ADDR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_CRC_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_CRC_VALUE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t SEC:1;
      uint64_t DED:1;
      uint64_t LOCKED:1;
      uint64_t PROGFAIL:1;
      uint64_t ACK:1;
      uint64_t PWOK:1;
      uint64_t reservedSpace1:5;
      uint64_t SEC_RELOAD:1;
      uint64_t DED_RELOAD:1;
      uint64_t BUSY:1;
      uint64_t ERROR:1;
      uint64_t CRC_FAIL:1;
      uint64_t FUSE_LATCHED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_STATUS;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STEP_VER:16;
      uint64_t MINOR_VER:8;
      uint64_t MAJOR_VER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTP_VERSION;

};

#define OCOTP (*(volatile struct OCOTP_tag *) 0x40130000)

struct FLEXSPI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRESET:1;
      uint64_t MDIS:1;
      uint64_t reservedSpace0:2;
      uint64_t RXCLKSRC:2;
      uint64_t reservedSpace1:2;
      uint64_t SERCLKDIV:3;
      uint64_t HSEN:1;
      uint64_t DOZEEN:1;
      uint64_t COMBINATIONEN:1;
      uint64_t SCKFREERUNEN:1;
      uint64_t LEARNEN:1;
      uint64_t IPGRANTWAIT:8;
      uint64_t AHBGRANTWAIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AHBBUSWAIT:16;
      uint64_t SEQWAIT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t CLRAHBBUFOPT:1;
      uint64_t reservedSpace1:2;
      uint64_t CLRLEARNPHASE:1;
      uint64_t SAMEDEVICEEN:1;
      uint64_t reservedSpace2:3;
      uint64_t SCKBDIFFOPT:1;
      uint64_t reservedSpace3:4;
      uint64_t RESUMEWAIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APAREN:1;
      uint64_t reservedSpace0:2;
      uint64_t CACHABLEEN:1;
      uint64_t BUFFERABLEEN:1;
      uint64_t PREFETCHEN:1;
      uint64_t READADDROPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPCMDDONEEN:1;
      uint64_t IPCMDGEEN:1;
      uint64_t AHBCMDGEEN:1;
      uint64_t IPCMDERREN:1;
      uint64_t AHBCMDERREN:1;
      uint64_t IPRXWAEN:1;
      uint64_t IPTXWEEN:1;
      uint64_t DATALEARNFAILEN:1;
      uint64_t SCKSTOPBYRDEN:1;
      uint64_t SCKSTOPBYWREN:1;
      uint64_t AHBBUSTIMEOUTEN:1;
      uint64_t SEQTIMEOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPCMDDONE:1;
      uint64_t IPCMDGE:1;
      uint64_t AHBCMDGE:1;
      uint64_t IPCMDERR:1;
      uint64_t AHBCMDERR:1;
      uint64_t IPRXWA:1;
      uint64_t IPTXWE:1;
      uint64_t DATALEARNFAIL:1;
      uint64_t SCKSTOPBYRD:1;
      uint64_t SCKSTOPBYWR:1;
      uint64_t AHBBUSTIMEOUT:1;
      uint64_t SEQTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUTKEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCK:1;
      uint64_t UNLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUFSZ:9;
      uint64_t reservedSpace0:7;
      uint64_t MSTRID:4;
      uint64_t reservedSpace1:4;
      uint64_t PRIORITY:3;
      uint64_t reservedSpace2:4;
      uint64_t PREFETCHEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBRXBUF0CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUFSZ:9;
      uint64_t reservedSpace0:7;
      uint64_t MSTRID:4;
      uint64_t reservedSpace1:4;
      uint64_t PRIORITY:3;
      uint64_t reservedSpace2:4;
      uint64_t PREFETCHEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBRXBUF1CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUFSZ:9;
      uint64_t reservedSpace0:7;
      uint64_t MSTRID:4;
      uint64_t reservedSpace1:4;
      uint64_t PRIORITY:3;
      uint64_t reservedSpace2:4;
      uint64_t PREFETCHEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBRXBUF2CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUFSZ:9;
      uint64_t reservedSpace0:7;
      uint64_t MSTRID:4;
      uint64_t reservedSpace1:4;
      uint64_t PRIORITY:3;
      uint64_t reservedSpace2:4;
      uint64_t PREFETCHEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBRXBUF3CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUFSZ:9;
      uint64_t reservedSpace0:7;
      uint64_t MSTRID:4;
      uint64_t reservedSpace1:4;
      uint64_t PRIORITY:3;
      uint64_t reservedSpace2:4;
      uint64_t PREFETCHEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBRXBUF4CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUFSZ:9;
      uint64_t reservedSpace0:7;
      uint64_t MSTRID:4;
      uint64_t reservedSpace1:4;
      uint64_t PRIORITY:3;
      uint64_t reservedSpace2:4;
      uint64_t PREFETCHEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBRXBUF5CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUFSZ:9;
      uint64_t reservedSpace0:7;
      uint64_t MSTRID:4;
      uint64_t reservedSpace1:4;
      uint64_t PRIORITY:3;
      uint64_t reservedSpace2:4;
      uint64_t PREFETCHEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBRXBUF6CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUFSZ:9;
      uint64_t reservedSpace0:7;
      uint64_t MSTRID:4;
      uint64_t reservedSpace1:4;
      uint64_t PRIORITY:3;
      uint64_t reservedSpace2:4;
      uint64_t PREFETCHEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBRXBUF7CR0;

  uint8_t res0[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLSHSZ:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLSHA1CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLSHSZ:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLSHA2CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLSHSZ:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLSHB1CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLSHSZ:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLSHB2CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCSS:5;
      uint64_t TCSH:5;
      uint64_t WA:1;
      uint64_t CAS:4;
      uint64_t CSINTERVALUNIT:1;
      uint64_t CSINTERVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLSHCR1A1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCSS:5;
      uint64_t TCSH:5;
      uint64_t WA:1;
      uint64_t CAS:4;
      uint64_t CSINTERVALUNIT:1;
      uint64_t CSINTERVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLSHCR1A2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCSS:5;
      uint64_t TCSH:5;
      uint64_t WA:1;
      uint64_t CAS:4;
      uint64_t CSINTERVALUNIT:1;
      uint64_t CSINTERVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLSHCR1B1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCSS:5;
      uint64_t TCSH:5;
      uint64_t WA:1;
      uint64_t CAS:4;
      uint64_t CSINTERVALUNIT:1;
      uint64_t CSINTERVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLSHCR1B2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARDSEQID:5;
      uint64_t ARDSEQNUM:3;
      uint64_t AWRSEQID:5;
      uint64_t AWRSEQNUM:3;
      uint64_t AWRWAIT:12;
      uint64_t AWRWAITUNIT:3;
      uint64_t CLRINSTRPTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLSHCR2A1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARDSEQID:5;
      uint64_t ARDSEQNUM:3;
      uint64_t AWRSEQID:5;
      uint64_t AWRSEQNUM:3;
      uint64_t AWRWAIT:12;
      uint64_t AWRWAITUNIT:3;
      uint64_t CLRINSTRPTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLSHCR2A2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARDSEQID:5;
      uint64_t ARDSEQNUM:3;
      uint64_t AWRSEQID:5;
      uint64_t AWRSEQNUM:3;
      uint64_t AWRWAIT:12;
      uint64_t AWRWAITUNIT:3;
      uint64_t CLRINSTRPTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLSHCR2B1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARDSEQID:5;
      uint64_t ARDSEQNUM:3;
      uint64_t AWRSEQID:5;
      uint64_t AWRSEQNUM:3;
      uint64_t AWRWAIT:12;
      uint64_t AWRWAITUNIT:3;
      uint64_t CLRINSTRPTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLSHCR2B2;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WMOPT1:1;
      uint64_t reservedSpace0:1;
      uint64_t WMENA:1;
      uint64_t WMENB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLSHCR4;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SFAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATSZ:16;
      uint64_t ISEQID:5;
      uint64_t reservedSpace0:3;
      uint64_t ISEQNUM:3;
      uint64_t reservedSpace1:4;
      uint64_t IPAREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPCR1;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPCMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRIPRXF:1;
      uint64_t RXDMAEN:1;
      uint64_t RXWMRK:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPRXFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRIPTXF:1;
      uint64_t TXDMAEN:1;
      uint64_t TXWMRK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPTXFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLLEN:1;
      uint64_t DLLRESET:1;
      uint64_t reservedSpace0:1;
      uint64_t SLVDLYTARGET:4;
      uint64_t reservedSpace1:1;
      uint64_t OVRDEN:1;
      uint64_t OVRDVAL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLLCRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLLEN:1;
      uint64_t DLLRESET:1;
      uint64_t reservedSpace0:1;
      uint64_t SLVDLYTARGET:4;
      uint64_t reservedSpace1:1;
      uint64_t OVRDEN:1;
      uint64_t OVRDVAL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLLCRB;

  uint8_t res4[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEQIDLE:1;
      uint64_t ARBIDLE:1;
      uint64_t ARBCMDSRC:2;
      uint64_t DATALEARNPHASEA:4;
      uint64_t DATALEARNPHASEB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AHBCMDERRID:5;
      uint64_t reservedSpace0:3;
      uint64_t AHBCMDERRCODE:4;
      uint64_t reservedSpace1:4;
      uint64_t IPCMDERRID:5;
      uint64_t reservedSpace2:3;
      uint64_t IPCMDERRCODE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASLVLOCK:1;
      uint64_t AREFLOCK:1;
      uint64_t ASLVSEL:6;
      uint64_t AREFSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BSLVLOCK:1;
      uint64_t BREFLOCK:1;
      uint64_t BSLVSEL:6;
      uint64_t BREFSEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
      uint64_t BUFID:3;
      uint64_t reservedSpace0:12;
      uint64_t DATLFT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBSPNDSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FILL:8;
      uint64_t reservedSpace0:8;
      uint64_t RDCNTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPRXFSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FILL:8;
      uint64_t reservedSpace0:8;
      uint64_t WRCNTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPTXFSTS;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFDR_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFDR_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPERAND0:8;
      uint64_t NUM_PADS0:2;
      uint64_t OPCODE0:6;
      uint64_t OPERAND1:8;
      uint64_t NUM_PADS1:2;
      uint64_t OPCODE1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_127;

};

#define FLEXSPI (*(volatile struct FLEXSPI_tag *) 0x40134000)

struct OTFAD_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t FLDM:1;
      uint64_t reservedSpace1:3;
      uint64_t RRAE:1;
      uint64_t reservedSpace2:23;
      uint64_t GE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MDPCP:1;
      uint64_t MODE:2;
      uint64_t NCTX:4;
      uint64_t reservedSpace1:16;
      uint64_t HRL:4;
      uint64_t RRAM:1;
      uint64_t GEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

};

#define OTFAD (*(volatile struct OTFAD_tag *) 0x40134c00)

struct OTFAD_CTX_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_KEY0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_KEY1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_KEY2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_KEY3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_CTR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_CTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t SRTADDR:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_RGD_W0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t ADE:1;
      uint64_t RO:1;
      uint64_t reservedSpace0:7;
      uint64_t ENDADDR:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_RGD_W1;

};

#define OTFAD_CTX_0 (*(volatile struct OTFAD_CTX_0_tag *) 0x40134d00)

struct OTFAD_CTX_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_KEY0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_KEY1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_KEY2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_KEY3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_CTR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_CTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t SRTADDR:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_RGD_W0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t ADE:1;
      uint64_t RO:1;
      uint64_t reservedSpace0:7;
      uint64_t ENDADDR:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_RGD_W1;

};

#define OTFAD_CTX_1 (*(volatile struct OTFAD_CTX_1_tag *) 0x40134d40)

struct OTFAD_CTX_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_KEY0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_KEY1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_KEY2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_KEY3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_CTR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_CTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t SRTADDR:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_RGD_W0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t ADE:1;
      uint64_t RO:1;
      uint64_t reservedSpace0:7;
      uint64_t ENDADDR:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_RGD_W1;

};

#define OTFAD_CTX_2 (*(volatile struct OTFAD_CTX_2_tag *) 0x40134d80)

struct OTFAD_CTX_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_KEY0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_KEY1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_KEY2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_KEY3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_CTR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_CTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t SRTADDR:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_RGD_W0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t ADE:1;
      uint64_t RO:1;
      uint64_t reservedSpace0:7;
      uint64_t ENDADDR:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX_RGD_W1;

};

#define OTFAD_CTX_3 (*(volatile struct OTFAD_CTX_3_tag *) 0x40134dc0)

struct USDHC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DS_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DS_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLKSIZE:13;
      uint64_t reservedSpace0:3;
      uint64_t BLKCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLK_ATT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDARG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD_ARG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RSPTYP:2;
      uint64_t reservedSpace1:1;
      uint64_t CCCEN:1;
      uint64_t CICEN:1;
      uint64_t DPSEL:1;
      uint64_t CMDTYP:2;
      uint64_t CMDINX:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD_XFR_TYP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRSP0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD_RSP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRSP1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD_RSP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRSP2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD_RSP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRSP3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD_RSP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATCONT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA_BUFF_ACC_PORT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIHB:1;
      uint64_t CDIHB:1;
      uint64_t DLA:1;
      uint64_t SDSTB:1;
      uint64_t IPGOFF:1;
      uint64_t HCKOFF:1;
      uint64_t PEROFF:1;
      uint64_t SDOFF:1;
      uint64_t WTA:1;
      uint64_t RTA:1;
      uint64_t BWEN:1;
      uint64_t BREN:1;
      uint64_t RTR:1;
      uint64_t reservedSpace0:2;
      uint64_t TSCD:1;
      uint64_t CINST:1;
      uint64_t reservedSpace1:1;
      uint64_t CDPL:1;
      uint64_t WPSPL:1;
      uint64_t reservedSpace2:3;
      uint64_t CLSL:1;
      uint64_t DLSL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRES_STATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DTW:2;
      uint64_t D3CD:1;
      uint64_t EMODE:2;
      uint64_t CDTL:1;
      uint64_t CDSS:1;
      uint64_t DMASEL:2;
      uint64_t reservedSpace1:6;
      uint64_t SABGREQ:1;
      uint64_t CREQ:1;
      uint64_t RWCTL:1;
      uint64_t IABG:1;
      uint64_t RD_DONE_NO_8CLK:1;
      uint64_t RD_WAIT_POINT:3;
      uint64_t WECINT:1;
      uint64_t WECINS:1;
      uint64_t WECRM:1;
      uint64_t BURST_LEN_EN:3;
      uint64_t NON_EXACT_BLK_RD:1;
      uint64_t RD_NO8CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PROT_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t DVS:4;
      uint64_t SDCLKFS:8;
      uint64_t DTOCV:4;
      uint64_t reservedSpace1:3;
      uint64_t IPP_RST_N:1;
      uint64_t RSTA:1;
      uint64_t RSTC:1;
      uint64_t RSTD:1;
      uint64_t INITA:1;
      uint64_t RSTT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:1;
      uint64_t TC:1;
      uint64_t BGE:1;
      uint64_t DINT:1;
      uint64_t BWR:1;
      uint64_t BRR:1;
      uint64_t CINS:1;
      uint64_t CRM:1;
      uint64_t CINT:1;
      uint64_t reservedSpace0:3;
      uint64_t RTE:1;
      uint64_t reservedSpace1:1;
      uint64_t TP:1;
      uint64_t reservedSpace2:1;
      uint64_t CTOE:1;
      uint64_t CCE:1;
      uint64_t CEBE:1;
      uint64_t CIE:1;
      uint64_t DTOE:1;
      uint64_t DCE:1;
      uint64_t DEBE:1;
      uint64_t reservedSpace3:1;
      uint64_t AC12E:1;
      uint64_t reservedSpace4:1;
      uint64_t TNE:1;
      uint64_t reservedSpace5:1;
      uint64_t DMAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCSEN:1;
      uint64_t TCSEN:1;
      uint64_t BGESEN:1;
      uint64_t DINTSEN:1;
      uint64_t BWRSEN:1;
      uint64_t BRRSEN:1;
      uint64_t CINSSEN:1;
      uint64_t CRMSEN:1;
      uint64_t CINTSEN:1;
      uint64_t reservedSpace0:3;
      uint64_t RTESEN:1;
      uint64_t reservedSpace1:1;
      uint64_t TPSEN:1;
      uint64_t reservedSpace2:1;
      uint64_t CTOESEN:1;
      uint64_t CCESEN:1;
      uint64_t CEBESEN:1;
      uint64_t CIESEN:1;
      uint64_t DTOESEN:1;
      uint64_t DCESEN:1;
      uint64_t DEBESEN:1;
      uint64_t reservedSpace3:1;
      uint64_t AC12ESEN:1;
      uint64_t reservedSpace4:1;
      uint64_t TNESEN:1;
      uint64_t reservedSpace5:1;
      uint64_t DMAESEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_STATUS_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCIEN:1;
      uint64_t TCIEN:1;
      uint64_t BGEIEN:1;
      uint64_t DINTIEN:1;
      uint64_t BWRIEN:1;
      uint64_t BRRIEN:1;
      uint64_t CINSIEN:1;
      uint64_t CRMIEN:1;
      uint64_t CINTIEN:1;
      uint64_t reservedSpace0:3;
      uint64_t RTEIEN:1;
      uint64_t reservedSpace1:1;
      uint64_t TPIEN:1;
      uint64_t reservedSpace2:1;
      uint64_t CTOEIEN:1;
      uint64_t CCEIEN:1;
      uint64_t CEBEIEN:1;
      uint64_t CIEIEN:1;
      uint64_t DTOEIEN:1;
      uint64_t DCEIEN:1;
      uint64_t DEBEIEN:1;
      uint64_t reservedSpace3:1;
      uint64_t AC12EIEN:1;
      uint64_t reservedSpace4:1;
      uint64_t TNEIEN:1;
      uint64_t reservedSpace5:1;
      uint64_t DMAEIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_SIGNAL_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AC12NE:1;
      uint64_t AC12TOE:1;
      uint64_t AC12EBE:1;
      uint64_t AC12CE:1;
      uint64_t AC12IE:1;
      uint64_t reservedSpace0:2;
      uint64_t CNIBAC12E:1;
      uint64_t reservedSpace1:14;
      uint64_t EXECUTE_TUNING:1;
      uint64_t SMP_CLK_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUTOCMD12_ERR_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDR50_SUPPORT:1;
      uint64_t SDR104_SUPPORT:1;
      uint64_t DDR50_SUPPORT:1;
      uint64_t reservedSpace0:5;
      uint64_t TIME_COUNT_RETUNING:4;
      uint64_t reservedSpace1:1;
      uint64_t USE_TUNING_SDR50:1;
      uint64_t RETUNING_MODE:2;
      uint64_t MBL:3;
      uint64_t reservedSpace2:1;
      uint64_t ADMAS:1;
      uint64_t HSS:1;
      uint64_t DMAS:1;
      uint64_t SRS:1;
      uint64_t VS33:1;
      uint64_t VS30:1;
      uint64_t VS18:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HOST_CTRL_CAP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD_WML:8;
      uint64_t RD_BRST_LEN:5;
      uint64_t reservedSpace0:3;
      uint64_t WR_WML:8;
      uint64_t WR_BRST_LEN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTMK_LVL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAEN:1;
      uint64_t BCEN:1;
      uint64_t AC12EN:1;
      uint64_t DDR_EN:1;
      uint64_t DTDSEL:1;
      uint64_t MSBSEL:1;
      uint64_t NIBBLE_POS:1;
      uint64_t AC23EN:1;
      uint64_t reservedSpace0:14;
      uint64_t EXE_TUNE:1;
      uint64_t SMP_CLK_SEL:1;
      uint64_t AUTO_TUNE_EN:1;
      uint64_t FBCLK_SEL:1;
      uint64_t HS400_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIX_CTRL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEVTAC12NE:1;
      uint64_t FEVTAC12TOE:1;
      uint64_t FEVTAC12CE:1;
      uint64_t FEVTAC12EBE:1;
      uint64_t FEVTAC12IE:1;
      uint64_t reservedSpace0:2;
      uint64_t FEVTCNIBAC12E:1;
      uint64_t reservedSpace1:8;
      uint64_t FEVTCTOE:1;
      uint64_t FEVTCCE:1;
      uint64_t FEVTCEBE:1;
      uint64_t FEVTCIE:1;
      uint64_t FEVTDTOE:1;
      uint64_t FEVTDCE:1;
      uint64_t FEVTDEBE:1;
      uint64_t reservedSpace2:1;
      uint64_t FEVTAC12E:1;
      uint64_t reservedSpace3:1;
      uint64_t FEVTTNE:1;
      uint64_t reservedSpace4:1;
      uint64_t FEVTDMAE:1;
      uint64_t reservedSpace5:2;
      uint64_t FEVTCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FORCE_EVENT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADMAES:2;
      uint64_t ADMALME:1;
      uint64_t ADMADCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMA_ERR_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADS_ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMA_SYS_ADDR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLL_CTRL_ENABLE:1;
      uint64_t DLL_CTRL_RESET:1;
      uint64_t DLL_CTRL_SLV_FORCE_UPD:1;
      uint64_t DLL_CTRL_SLV_DLY_TARGET0:4;
      uint64_t DLL_CTRL_GATE_UPDATE:1;
      uint64_t DLL_CTRL_SLV_OVERRIDE:1;
      uint64_t DLL_CTRL_SLV_OVERRIDE_VAL:7;
      uint64_t DLL_CTRL_SLV_DLY_TARGET1:3;
      uint64_t reservedSpace0:1;
      uint64_t DLL_CTRL_SLV_UPDATE_INT:8;
      uint64_t DLL_CTRL_REF_UPDATE_INT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLL_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLL_STS_SLV_LOCK:1;
      uint64_t DLL_STS_REF_LOCK:1;
      uint64_t DLL_STS_SLV_SEL:7;
      uint64_t DLL_STS_REF_SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLL_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLY_CELL_SET_POST:4;
      uint64_t DLY_CELL_SET_OUT:4;
      uint64_t DLY_CELL_SET_PRE:7;
      uint64_t NXT_ERR:1;
      uint64_t TAP_SEL_POST:4;
      uint64_t TAP_SEL_OUT:4;
      uint64_t TAP_SEL_PRE:7;
      uint64_t PRE_ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_TUNE_CTRL_STATUS;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STROBE_DLL_CTRL_ENABLE:1;
      uint64_t STROBE_DLL_CTRL_RESET:1;
      uint64_t STROBE_DLL_CTRL_SLV_FORCE_UPD:1;
      uint64_t STROBE_DLL_CTRL_SLV_DLY_TARGET:3;
      uint64_t STROBE_DLL_CTRL_GATE_UPDATE_0:1;
      uint64_t STROBE_DLL_CTRL_GATE_UPDATE_1:1;
      uint64_t STROBE_DLL_CTRL_SLV_OVERRIDE:1;
      uint64_t STROBE_DLL_CTRL_SLV_OVERRIDE_VAL:7;
      uint64_t reservedSpace0:4;
      uint64_t STROBE_DLL_CTRL_SLV_UPDATE_INT:8;
      uint64_t STROBE_DLL_CTRL_REF_UPDATE_INT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STROBE_DLL_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STROBE_DLL_STS_SLV_LOCK:1;
      uint64_t STROBE_DLL_STS_REF_LOCK:1;
      uint64_t STROBE_DLL_STS_SLV_SEL:7;
      uint64_t STROBE_DLL_STS_REF_SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STROBE_DLL_STATUS;

  uint8_t res3[72];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t VSELECT:1;
      uint64_t reservedSpace1:1;
      uint64_t AC12_WR_CHKBUSY_EN:1;
      uint64_t reservedSpace2:4;
      uint64_t FRC_SDCLK_ON:1;
      uint64_t reservedSpace3:6;
      uint64_t CRC_CHK_DIS:1;
      uint64_t reservedSpace4:15;
      uint64_t CMD_BYTE_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VEND_SPEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTOCV_ACK:4;
      uint64_t BOOT_ACK:1;
      uint64_t BOOT_MODE:1;
      uint64_t BOOT_EN:1;
      uint64_t AUTO_SABG_EN:1;
      uint64_t DISABLE_TIME_OUT:1;
      uint64_t reservedSpace0:7;
      uint64_t BOOT_BLK_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_BOOT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t CARD_INT_D3_TEST:1;
      uint64_t TUNING_8bit_EN:1;
      uint64_t TUNING_1bit_EN:1;
      uint64_t TUNING_CMD_EN:1;
      uint64_t reservedSpace1:3;
      uint64_t HS400_WR_CLK_STOP_EN:1;
      uint64_t HS400_RD_CLK_STOP_EN:1;
      uint64_t ACMD23_ARGU2_EN:1;
      uint64_t reservedSpace2:1;
      uint64_t AHB_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VEND_SPEC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TUNING_START_TAP:8;
      uint64_t TUNING_COUNTER:8;
      uint64_t TUNING_STEP:3;
      uint64_t reservedSpace0:1;
      uint64_t TUNING_WINDOW:3;
      uint64_t reservedSpace1:1;
      uint64_t STD_TUNING_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TUNING_CTRL;

};

#define USDHC0 (*(volatile struct USDHC0_tag *) 0x40136000)

struct USDHC1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DS_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DS_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLKSIZE:13;
      uint64_t reservedSpace0:3;
      uint64_t BLKCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLK_ATT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDARG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD_ARG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RSPTYP:2;
      uint64_t reservedSpace1:1;
      uint64_t CCCEN:1;
      uint64_t CICEN:1;
      uint64_t DPSEL:1;
      uint64_t CMDTYP:2;
      uint64_t CMDINX:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD_XFR_TYP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRSP0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD_RSP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRSP1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD_RSP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRSP2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD_RSP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRSP3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD_RSP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATCONT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA_BUFF_ACC_PORT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIHB:1;
      uint64_t CDIHB:1;
      uint64_t DLA:1;
      uint64_t SDSTB:1;
      uint64_t IPGOFF:1;
      uint64_t HCKOFF:1;
      uint64_t PEROFF:1;
      uint64_t SDOFF:1;
      uint64_t WTA:1;
      uint64_t RTA:1;
      uint64_t BWEN:1;
      uint64_t BREN:1;
      uint64_t RTR:1;
      uint64_t reservedSpace0:2;
      uint64_t TSCD:1;
      uint64_t CINST:1;
      uint64_t reservedSpace1:1;
      uint64_t CDPL:1;
      uint64_t WPSPL:1;
      uint64_t reservedSpace2:3;
      uint64_t CLSL:1;
      uint64_t DLSL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRES_STATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DTW:2;
      uint64_t D3CD:1;
      uint64_t EMODE:2;
      uint64_t CDTL:1;
      uint64_t CDSS:1;
      uint64_t DMASEL:2;
      uint64_t reservedSpace1:6;
      uint64_t SABGREQ:1;
      uint64_t CREQ:1;
      uint64_t RWCTL:1;
      uint64_t IABG:1;
      uint64_t RD_DONE_NO_8CLK:1;
      uint64_t RD_WAIT_POINT:3;
      uint64_t WECINT:1;
      uint64_t WECINS:1;
      uint64_t WECRM:1;
      uint64_t BURST_LEN_EN:3;
      uint64_t NON_EXACT_BLK_RD:1;
      uint64_t RD_NO8CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PROT_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t DVS:4;
      uint64_t SDCLKFS:8;
      uint64_t DTOCV:4;
      uint64_t reservedSpace1:3;
      uint64_t IPP_RST_N:1;
      uint64_t RSTA:1;
      uint64_t RSTC:1;
      uint64_t RSTD:1;
      uint64_t INITA:1;
      uint64_t RSTT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:1;
      uint64_t TC:1;
      uint64_t BGE:1;
      uint64_t DINT:1;
      uint64_t BWR:1;
      uint64_t BRR:1;
      uint64_t CINS:1;
      uint64_t CRM:1;
      uint64_t CINT:1;
      uint64_t reservedSpace0:3;
      uint64_t RTE:1;
      uint64_t reservedSpace1:1;
      uint64_t TP:1;
      uint64_t reservedSpace2:1;
      uint64_t CTOE:1;
      uint64_t CCE:1;
      uint64_t CEBE:1;
      uint64_t CIE:1;
      uint64_t DTOE:1;
      uint64_t DCE:1;
      uint64_t DEBE:1;
      uint64_t reservedSpace3:1;
      uint64_t AC12E:1;
      uint64_t reservedSpace4:1;
      uint64_t TNE:1;
      uint64_t reservedSpace5:1;
      uint64_t DMAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCSEN:1;
      uint64_t TCSEN:1;
      uint64_t BGESEN:1;
      uint64_t DINTSEN:1;
      uint64_t BWRSEN:1;
      uint64_t BRRSEN:1;
      uint64_t CINSSEN:1;
      uint64_t CRMSEN:1;
      uint64_t CINTSEN:1;
      uint64_t reservedSpace0:3;
      uint64_t RTESEN:1;
      uint64_t reservedSpace1:1;
      uint64_t TPSEN:1;
      uint64_t reservedSpace2:1;
      uint64_t CTOESEN:1;
      uint64_t CCESEN:1;
      uint64_t CEBESEN:1;
      uint64_t CIESEN:1;
      uint64_t DTOESEN:1;
      uint64_t DCESEN:1;
      uint64_t DEBESEN:1;
      uint64_t reservedSpace3:1;
      uint64_t AC12ESEN:1;
      uint64_t reservedSpace4:1;
      uint64_t TNESEN:1;
      uint64_t reservedSpace5:1;
      uint64_t DMAESEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_STATUS_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCIEN:1;
      uint64_t TCIEN:1;
      uint64_t BGEIEN:1;
      uint64_t DINTIEN:1;
      uint64_t BWRIEN:1;
      uint64_t BRRIEN:1;
      uint64_t CINSIEN:1;
      uint64_t CRMIEN:1;
      uint64_t CINTIEN:1;
      uint64_t reservedSpace0:3;
      uint64_t RTEIEN:1;
      uint64_t reservedSpace1:1;
      uint64_t TPIEN:1;
      uint64_t reservedSpace2:1;
      uint64_t CTOEIEN:1;
      uint64_t CCEIEN:1;
      uint64_t CEBEIEN:1;
      uint64_t CIEIEN:1;
      uint64_t DTOEIEN:1;
      uint64_t DCEIEN:1;
      uint64_t DEBEIEN:1;
      uint64_t reservedSpace3:1;
      uint64_t AC12EIEN:1;
      uint64_t reservedSpace4:1;
      uint64_t TNEIEN:1;
      uint64_t reservedSpace5:1;
      uint64_t DMAEIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_SIGNAL_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AC12NE:1;
      uint64_t AC12TOE:1;
      uint64_t AC12EBE:1;
      uint64_t AC12CE:1;
      uint64_t AC12IE:1;
      uint64_t reservedSpace0:2;
      uint64_t CNIBAC12E:1;
      uint64_t reservedSpace1:14;
      uint64_t EXECUTE_TUNING:1;
      uint64_t SMP_CLK_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUTOCMD12_ERR_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDR50_SUPPORT:1;
      uint64_t SDR104_SUPPORT:1;
      uint64_t DDR50_SUPPORT:1;
      uint64_t reservedSpace0:5;
      uint64_t TIME_COUNT_RETUNING:4;
      uint64_t reservedSpace1:1;
      uint64_t USE_TUNING_SDR50:1;
      uint64_t RETUNING_MODE:2;
      uint64_t MBL:3;
      uint64_t reservedSpace2:1;
      uint64_t ADMAS:1;
      uint64_t HSS:1;
      uint64_t DMAS:1;
      uint64_t SRS:1;
      uint64_t VS33:1;
      uint64_t VS30:1;
      uint64_t VS18:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HOST_CTRL_CAP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD_WML:8;
      uint64_t RD_BRST_LEN:5;
      uint64_t reservedSpace0:3;
      uint64_t WR_WML:8;
      uint64_t WR_BRST_LEN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTMK_LVL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAEN:1;
      uint64_t BCEN:1;
      uint64_t AC12EN:1;
      uint64_t DDR_EN:1;
      uint64_t DTDSEL:1;
      uint64_t MSBSEL:1;
      uint64_t NIBBLE_POS:1;
      uint64_t AC23EN:1;
      uint64_t reservedSpace0:14;
      uint64_t EXE_TUNE:1;
      uint64_t SMP_CLK_SEL:1;
      uint64_t AUTO_TUNE_EN:1;
      uint64_t FBCLK_SEL:1;
      uint64_t HS400_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIX_CTRL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEVTAC12NE:1;
      uint64_t FEVTAC12TOE:1;
      uint64_t FEVTAC12CE:1;
      uint64_t FEVTAC12EBE:1;
      uint64_t FEVTAC12IE:1;
      uint64_t reservedSpace0:2;
      uint64_t FEVTCNIBAC12E:1;
      uint64_t reservedSpace1:8;
      uint64_t FEVTCTOE:1;
      uint64_t FEVTCCE:1;
      uint64_t FEVTCEBE:1;
      uint64_t FEVTCIE:1;
      uint64_t FEVTDTOE:1;
      uint64_t FEVTDCE:1;
      uint64_t FEVTDEBE:1;
      uint64_t reservedSpace2:1;
      uint64_t FEVTAC12E:1;
      uint64_t reservedSpace3:1;
      uint64_t FEVTTNE:1;
      uint64_t reservedSpace4:1;
      uint64_t FEVTDMAE:1;
      uint64_t reservedSpace5:2;
      uint64_t FEVTCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FORCE_EVENT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADMAES:2;
      uint64_t ADMALME:1;
      uint64_t ADMADCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMA_ERR_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADS_ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMA_SYS_ADDR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLL_CTRL_ENABLE:1;
      uint64_t DLL_CTRL_RESET:1;
      uint64_t DLL_CTRL_SLV_FORCE_UPD:1;
      uint64_t DLL_CTRL_SLV_DLY_TARGET0:4;
      uint64_t DLL_CTRL_GATE_UPDATE:1;
      uint64_t DLL_CTRL_SLV_OVERRIDE:1;
      uint64_t DLL_CTRL_SLV_OVERRIDE_VAL:7;
      uint64_t DLL_CTRL_SLV_DLY_TARGET1:3;
      uint64_t reservedSpace0:1;
      uint64_t DLL_CTRL_SLV_UPDATE_INT:8;
      uint64_t DLL_CTRL_REF_UPDATE_INT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLL_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLL_STS_SLV_LOCK:1;
      uint64_t DLL_STS_REF_LOCK:1;
      uint64_t DLL_STS_SLV_SEL:7;
      uint64_t DLL_STS_REF_SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLL_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLY_CELL_SET_POST:4;
      uint64_t DLY_CELL_SET_OUT:4;
      uint64_t DLY_CELL_SET_PRE:7;
      uint64_t NXT_ERR:1;
      uint64_t TAP_SEL_POST:4;
      uint64_t TAP_SEL_OUT:4;
      uint64_t TAP_SEL_PRE:7;
      uint64_t PRE_ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_TUNE_CTRL_STATUS;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STROBE_DLL_CTRL_ENABLE:1;
      uint64_t STROBE_DLL_CTRL_RESET:1;
      uint64_t STROBE_DLL_CTRL_SLV_FORCE_UPD:1;
      uint64_t STROBE_DLL_CTRL_SLV_DLY_TARGET:3;
      uint64_t STROBE_DLL_CTRL_GATE_UPDATE_0:1;
      uint64_t STROBE_DLL_CTRL_GATE_UPDATE_1:1;
      uint64_t STROBE_DLL_CTRL_SLV_OVERRIDE:1;
      uint64_t STROBE_DLL_CTRL_SLV_OVERRIDE_VAL:7;
      uint64_t reservedSpace0:4;
      uint64_t STROBE_DLL_CTRL_SLV_UPDATE_INT:8;
      uint64_t STROBE_DLL_CTRL_REF_UPDATE_INT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STROBE_DLL_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STROBE_DLL_STS_SLV_LOCK:1;
      uint64_t STROBE_DLL_STS_REF_LOCK:1;
      uint64_t STROBE_DLL_STS_SLV_SEL:7;
      uint64_t STROBE_DLL_STS_REF_SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STROBE_DLL_STATUS;

  uint8_t res3[72];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t VSELECT:1;
      uint64_t reservedSpace1:1;
      uint64_t AC12_WR_CHKBUSY_EN:1;
      uint64_t reservedSpace2:4;
      uint64_t FRC_SDCLK_ON:1;
      uint64_t reservedSpace3:6;
      uint64_t CRC_CHK_DIS:1;
      uint64_t reservedSpace4:15;
      uint64_t CMD_BYTE_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VEND_SPEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTOCV_ACK:4;
      uint64_t BOOT_ACK:1;
      uint64_t BOOT_MODE:1;
      uint64_t BOOT_EN:1;
      uint64_t AUTO_SABG_EN:1;
      uint64_t DISABLE_TIME_OUT:1;
      uint64_t reservedSpace0:7;
      uint64_t BOOT_BLK_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_BOOT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t CARD_INT_D3_TEST:1;
      uint64_t TUNING_8bit_EN:1;
      uint64_t TUNING_1bit_EN:1;
      uint64_t TUNING_CMD_EN:1;
      uint64_t reservedSpace1:3;
      uint64_t HS400_WR_CLK_STOP_EN:1;
      uint64_t HS400_RD_CLK_STOP_EN:1;
      uint64_t ACMD23_ARGU2_EN:1;
      uint64_t reservedSpace2:1;
      uint64_t AHB_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VEND_SPEC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TUNING_START_TAP:8;
      uint64_t TUNING_COUNTER:8;
      uint64_t TUNING_STEP:3;
      uint64_t reservedSpace0:1;
      uint64_t TUNING_WINDOW:3;
      uint64_t reservedSpace1:1;
      uint64_t STD_TUNING_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TUNING_CTRL;

};

#define USDHC1 (*(volatile struct USDHC1_tag *) 0x40137000)

struct CMP_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEATURE:16;
      uint64_t MINOR:8;
      uint64_t MAJOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HYSTCTR:2;
      uint64_t reservedSpace0:2;
      uint64_t FILTER_CNT:3;
      uint64_t reservedSpace1:1;
      uint64_t EN:1;
      uint64_t OPE:1;
      uint64_t COS:1;
      uint64_t INVT:1;
      uint64_t PMODE:1;
      uint64_t reservedSpace2:1;
      uint64_t WE:1;
      uint64_t SE:1;
      uint64_t FPR:8;
      uint64_t COUT:1;
      uint64_t CFF:1;
      uint64_t CFR:1;
      uint64_t IEF:1;
      uint64_t IER:1;
      uint64_t reservedSpace3:1;
      uint64_t DMAEN:1;
      uint64_t LINKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VOSEL:8;
      uint64_t DMODE:1;
      uint64_t VRSEL:1;
      uint64_t DACEN:1;
      uint64_t reservedSpace0:5;
      uint64_t CHN0:1;
      uint64_t CHN1:1;
      uint64_t CHN2:1;
      uint64_t CHN3:1;
      uint64_t CHN4:1;
      uint64_t CHN5:1;
      uint64_t reservedSpace1:2;
      uint64_t MSEL:3;
      uint64_t reservedSpace2:1;
      uint64_t PSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACOn:6;
      uint64_t reservedSpace0:2;
      uint64_t INITMOD:6;
      uint64_t NSAM:2;
      uint64_t CH0F:1;
      uint64_t CH1F:1;
      uint64_t CH2F:1;
      uint64_t CH3F:1;
      uint64_t CH4F:1;
      uint64_t CH5F:1;
      uint64_t reservedSpace1:3;
      uint64_t FXMXCH:3;
      uint64_t reservedSpace2:1;
      uint64_t FXMP:1;
      uint64_t RRIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t ACPH2TC:3;
      uint64_t reservedSpace1:1;
      uint64_t ACPH1TC:3;
      uint64_t reservedSpace2:1;
      uint64_t ACSAT:3;
      uint64_t reservedSpace3:1;
      uint64_t DMCS:1;
      uint64_t reservedSpace4:3;
      uint64_t RDIVE:1;
      uint64_t reservedSpace5:3;
      uint64_t NCHCTEN:1;
      uint64_t reservedSpace6:3;
      uint64_t PCHCTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_TIMER_RELOAD:28;
      uint64_t reservedSpace0:3;
      uint64_t RR_TIMER_ENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_TIMER_CR;

};

#define CMP (*(volatile struct CMP_tag *) 0x40139000)

struct ADC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIG_NUM:8;
      uint64_t FIFOSIZE:8;
      uint64_t CV_NUM:8;
      uint64_t CMD_NUM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCEN:1;
      uint64_t RST:1;
      uint64_t DOZEN:1;
      uint64_t reservedSpace0:5;
      uint64_t RSTFIFO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t FOF:1;
      uint64_t reservedSpace0:14;
      uint64_t TRGACT:4;
      uint64_t reservedSpace1:4;
      uint64_t CMDACT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWMIE:1;
      uint64_t FOFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWMDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPRICTRL:1;
      uint64_t reservedSpace0:3;
      uint64_t PWRSEL:2;
      uint64_t REFSEL:2;
      uint64_t reservedSpace1:8;
      uint64_t PUDLY:8;
      uint64_t reservedSpace2:4;
      uint64_t PWREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAUSEDLY:9;
      uint64_t reservedSpace0:22;
      uint64_t PAUSEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAUSE;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCOUNT:5;
      uint64_t reservedSpace0:11;
      uint64_t FWMARK:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWT0:1;
      uint64_t SWT1:1;
      uint64_t SWT2:1;
      uint64_t SWT3:1;
      uint64_t SWT4:1;
      uint64_t SWT5:1;
      uint64_t SWT6:1;
      uint64_t SWT7:1;
      uint64_t SWT8:1;
      uint64_t SWT9:1;
      uint64_t SWT10:1;
      uint64_t SWT11:1;
      uint64_t SWT12:1;
      uint64_t SWT13:1;
      uint64_t SWT14:1;
      uint64_t SWT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWTRIG;

  uint8_t res2[136];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TPRI:4;
      uint64_t reservedSpace1:4;
      uint64_t TDLY:4;
      uint64_t reservedSpace2:4;
      uint64_t TCMD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TPRI:4;
      uint64_t reservedSpace1:4;
      uint64_t TDLY:4;
      uint64_t reservedSpace2:4;
      uint64_t TCMD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TPRI:4;
      uint64_t reservedSpace1:4;
      uint64_t TDLY:4;
      uint64_t reservedSpace2:4;
      uint64_t TCMD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TPRI:4;
      uint64_t reservedSpace1:4;
      uint64_t TDLY:4;
      uint64_t reservedSpace2:4;
      uint64_t TCMD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TPRI:4;
      uint64_t reservedSpace1:4;
      uint64_t TDLY:4;
      uint64_t reservedSpace2:4;
      uint64_t TCMD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TPRI:4;
      uint64_t reservedSpace1:4;
      uint64_t TDLY:4;
      uint64_t reservedSpace2:4;
      uint64_t TCMD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TPRI:4;
      uint64_t reservedSpace1:4;
      uint64_t TDLY:4;
      uint64_t reservedSpace2:4;
      uint64_t TCMD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TPRI:4;
      uint64_t reservedSpace1:4;
      uint64_t TDLY:4;
      uint64_t reservedSpace2:4;
      uint64_t TCMD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TPRI:4;
      uint64_t reservedSpace1:4;
      uint64_t TDLY:4;
      uint64_t reservedSpace2:4;
      uint64_t TCMD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TPRI:4;
      uint64_t reservedSpace1:4;
      uint64_t TDLY:4;
      uint64_t reservedSpace2:4;
      uint64_t TCMD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TPRI:4;
      uint64_t reservedSpace1:4;
      uint64_t TDLY:4;
      uint64_t reservedSpace2:4;
      uint64_t TCMD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TPRI:4;
      uint64_t reservedSpace1:4;
      uint64_t TDLY:4;
      uint64_t reservedSpace2:4;
      uint64_t TCMD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TPRI:4;
      uint64_t reservedSpace1:4;
      uint64_t TDLY:4;
      uint64_t reservedSpace2:4;
      uint64_t TCMD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TPRI:4;
      uint64_t reservedSpace1:4;
      uint64_t TDLY:4;
      uint64_t reservedSpace2:4;
      uint64_t TCMD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TPRI:4;
      uint64_t reservedSpace1:4;
      uint64_t TDLY:4;
      uint64_t reservedSpace2:4;
      uint64_t TCMD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TPRI:4;
      uint64_t reservedSpace1:4;
      uint64_t TDLY:4;
      uint64_t reservedSpace2:4;
      uint64_t TCMD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;

  union
