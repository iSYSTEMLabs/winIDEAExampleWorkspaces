#include <stdint.h>

struct FLASHIF_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t RWT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FRWTR;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t HNG:1;
      uint64_t CERS:1;
      uint64_t ESPS:1;
      uint64_t SERS:1;
      uint64_t PGMS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FSTR;

  uint8_t res1[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FSYNDN;

  uint8_t res2[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDYIE:1;
      uint64_t HANGIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FICR;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDYIF:1;
      uint64_t HANGIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FISR;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDYC:1;
      uint64_t HANGC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FICLR;

  uint8_t res5[215];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRMM:10;
      uint64_t reservedSpace0:6;
      uint64_t TTRMM:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRTRMM;

};

#define FLASHIF (*(volatile struct FLASHIF_tag *) 0x40000004)

struct UID_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t UID_bitfield:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UIDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UID_bitfield:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UIDR1;

};

#define UID (*(volatile struct UID_tag *) 0x40000200)

struct CLOCK_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t HCRE:1;
      uint64_t MOSCE:1;
      uint64_t reservedSpace0:1;
      uint64_t SOSCE:1;
      uint64_t PLLE:1;
      uint64_t RCS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCM_CTL;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HCRDY:1;
      uint64_t MORDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SORDY:1;
      uint64_t PLRDY:1;
      uint64_t RCM:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCM_STR;

  uint8_t res1[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STM:2;
      uint64_t DSTM:1;
      uint64_t reservedSpace0:1;
      uint64_t SPL:1;
      uint64_t reservedSpace1:11;
      uint64_t KEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STB_CTL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PONR:1;
      uint64_t INITX:1;
      uint64_t reservedSpace0:2;
      uint64_t SWDT:1;
      uint64_t HWDT:1;
      uint64_t CSVR:1;
      uint64_t FCSR:1;
      uint64_t SRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RST_STR;

  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BSC_PSR;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t APBC0:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) APBC0_PSR;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t APBC1:2;
      uint64_t reservedSpace0:2;
      uint64_t APBC1RST:1;
      uint64_t reservedSpace1:2;
      uint64_t APBC1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) APBC1_PSR;

  uint8_t res5[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SWDS:2;
      uint64_t reservedSpace0:5;
      uint64_t TESTB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SWC_PSR;

  uint8_t res6[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MOWT:4;
      uint64_t SOWT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSW_TMR;

  uint8_t res7[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t POWT:3;
      uint64_t reservedSpace0:1;
      uint64_t PINC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PSW_TMR;

  uint8_t res8[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLLM:4;
      uint64_t PLLK:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PLL_CTL1;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLLN:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PLL_CTL2;

  uint8_t res10[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MCSVE:1;
      uint64_t SCSVE:1;
      uint64_t reservedSpace0:6;
      uint64_t FCSDE:1;
      uint64_t FCSRE:1;
      uint64_t reservedSpace1:2;
      uint64_t FCD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CSV_CTL;

  uint8_t res11[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCMF:1;
      uint64_t SCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSV_STR;

  uint8_t res12[3];

  uint16_t FCSWH_CTL;
  uint8_t res13[2];

  uint16_t FCSWL_CTL;
  uint8_t res14[2];

  uint16_t FCSWD_CTL;
  uint8_t res15[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DPSWBE:1;
      uint64_t reservedSpace1:1;
      uint64_t DPHWBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DBWDT_CTL;

  uint8_t res16[11];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCSE:1;
      uint64_t SCSE:1;
      uint64_t PCSE:1;
      uint64_t reservedSpace0:2;
      uint64_t FCSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) INT_ENR;

  uint8_t res17[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCSI:1;
      uint64_t SCSI:1;
      uint64_t PCSI:1;
      uint64_t reservedSpace0:2;
      uint64_t FCSI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) INT_STR;

  uint8_t res18[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCSC:1;
      uint64_t SCSC:1;
      uint64_t PCSC:1;
      uint64_t reservedSpace0:2;
      uint64_t FCSC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) INT_CLR;

};

#define CLOCK (*(volatile struct CLOCK_tag *) 0x40010000)

struct HWWDT_tag
{
  uint32_t WDG_LDR;
  uint32_t WDG_VLR;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTEN:1;
      uint64_t RESEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WDG_CTL;

  uint8_t res0[3];

  uint8_t WDG_ICL;
  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WDG_RIS;

  uint8_t res2[3055];

  uint32_t WDG_LCK;
};

#define HWWDT (*(volatile struct HWWDT_tag *) 0x40011000)

struct SWWDT_tag
{
  uint32_t WDOGLOAD;
  uint32_t WDOGVALUE;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTEN:1;
      uint64_t RESEN:1;
      uint64_t TWD:2;
      uint64_t SPM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WDOGCONTROL;

  uint8_t res0[3];

  uint32_t WDOGINTCLR;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t RIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WDOGRIS;

  uint8_t res1[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TGR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WDOGSPMC;

  uint8_t res2[3047];

  uint32_t WDOGLOCK;
};

#define SWWDT (*(volatile struct SWWDT_tag *) 0x40012000)

struct DTIM_tag
{
  uint32_t TIMER1LOAD;
  uint32_t TIMER1VALUE;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ONESHOT:1;
      uint64_t TIMERSIZE:1;
      uint64_t TIMERPRE:2;
      uint64_t reservedSpace0:1;
      uint64_t INTENABLE:1;
      uint64_t TIMERMODE:1;
      uint64_t TIMEREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER1CONTROL;

  uint32_t TIMER1INTCLR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER1RIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER1RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER1MIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER1MIS;

  uint32_t TIMER1BGLOAD;
  uint8_t res0[4];

  uint32_t TIMER2LOAD;
  uint32_t TIMER2VALUE;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ONESHOT:1;
      uint64_t TIMERSIZE:1;
      uint64_t TIMERPRE:2;
      uint64_t reservedSpace0:1;
      uint64_t INTENABLE:1;
      uint64_t TIMERMODE:1;
      uint64_t TIMEREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER2CONTROL;

  uint32_t TIMER2INTCLR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER1RIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER2RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER1MIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER2MIS;

  uint32_t TIMER2BGLOAD;
};

#define DTIM (*(volatile struct DTIM_tag *) 0x40015000)

struct BTIOSEL03_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SEL01:4;
      uint64_t SEL23:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BTSEL0123;

};

#define BTIOSEL03 (*(volatile struct BTIOSEL03_tag *) 0x40025100)

struct SBSSR_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t SSSR0:1;
      uint64_t SSSR1:1;
      uint64_t SSSR2:1;
      uint64_t SSSR3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BTSSSR;

};

#define SBSSR (*(volatile struct SBSSR_tag *) 0x40025ffc)

struct QPRC0_tag
{
  uint16_t QPCR;
  uint8_t res0[2];

  uint16_t QRCR;
  uint8_t res1[2];

  uint16_t QPCCR;
  uint8_t res2[2];

  uint16_t QPRCR;
  uint8_t res3[2];

  uint16_t QMPR;
  uint8_t res4[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t QPCMIE:1;
      uint64_t QPCMF:1;
      uint64_t QPRCMIE:1;
      uint64_t QPRCMF:1;
      uint64_t OUZIE:1;
      uint64_t UFDF:1;
      uint64_t OFDF:1;
      uint64_t ZIIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CDCIE:1;
      uint64_t CDCF:1;
      uint64_t DIRPC:1;
      uint64_t DIROU:1;
      uint64_t QPCNRCMIE:1;
      uint64_t QPCNRCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRH;

  uint8_t res5[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PCM:2;
      uint64_t RCM:2;
      uint64_t PSTP:1;
      uint64_t CGSC:1;
      uint64_t RSEL:1;
      uint64_t SWAP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QCRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PCRM:2;
      uint64_t AES:2;
      uint64_t BES:2;
      uint64_t CGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QCRH;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ORNGMD:1;
      uint64_t ORNGF:1;
      uint64_t ORNGIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QECR;

  uint8_t res7[30];

  uint16_t QRCRR;
  uint16_t QPCRR;
};

#define QPRC0 (*(volatile struct QPRC0_tag *) 0x40026000)

struct QPRC0_NF_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t AINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t AINLV:1;
      uint64_t AINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NFCTLA;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t BINLV:1;
      uint64_t BINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NFCTLB;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ZINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t ZINLV:1;
      uint64_t ZINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NFCTLZ;

};

#define QPRC0_NF (*(volatile struct QPRC0_NF_tag *) 0x40026100)

struct ADC0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCS:1;
      uint64_t PCS:1;
      uint64_t PCNS:1;
      uint64_t reservedSpace0:3;
      uint64_t FDAS:1;
      uint64_t ADSTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVRIE:1;
      uint64_t CMPIE:1;
      uint64_t PCIE:1;
      uint64_t SCIE:1;
      uint64_t reservedSpace0:1;
      uint64_t CMPIF:1;
      uint64_t PCIF:1;
      uint64_t SCIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCR;

  uint8_t res0[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SFS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SFNS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SSTR:1;
      uint64_t SHEN:1;
      uint64_t RPT:1;
      uint64_t reservedSpace0:1;
      uint64_t SFCLR:1;
      uint64_t SOVR:1;
      uint64_t SFUL:1;
      uint64_t SEMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCCR;

  uint8_t res1[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SC:5;
      uint64_t reservedSpace0:3;
      uint64_t RS:2;
      uint64_t reservedSpace1:2;
      uint64_t INVL:1;
      uint64_t reservedSpace2:7;
      uint64_t SD:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN16:1;
      uint64_t AN17:1;
      uint64_t AN18:1;
      uint64_t AN19:1;
      uint64_t AN20:1;
      uint64_t AN21:1;
      uint64_t AN22:1;
      uint64_t AN23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN24:1;
      uint64_t AN25:1;
      uint64_t AN26:1;
      uint64_t AN27:1;
      uint64_t AN28:1;
      uint64_t AN29:1;
      uint64_t AN30:1;
      uint64_t AN31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS3;

  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN0:1;
      uint64_t AN1:1;
      uint64_t AN2:1;
      uint64_t AN3:1;
      uint64_t AN4:1;
      uint64_t AN5:1;
      uint64_t AN6:1;
      uint64_t AN7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN8:1;
      uint64_t AN9:1;
      uint64_t AN10:1;
      uint64_t AN11:1;
      uint64_t AN12:1;
      uint64_t AN13:1;
      uint64_t AN14:1;
      uint64_t AN15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS1;

  uint8_t res3[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PFS:2;
      uint64_t reservedSpace0:2;
      uint64_t TEST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PFNS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PSTR:1;
      uint64_t PHEN:1;
      uint64_t PEEN:1;
      uint64_t ESCE:1;
      uint64_t PFCLR:1;
      uint64_t POVR:1;
      uint64_t PFUL:1;
      uint64_t PEMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCCR;

  uint8_t res4[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PC:5;
      uint64_t reservedSpace0:3;
      uint64_t RS:3;
      uint64_t reservedSpace1:1;
      uint64_t INVL:1;
      uint64_t reservedSpace2:7;
      uint64_t PD:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t P1A:3;
      uint64_t P2A:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCIS;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCH:5;
      uint64_t CMD0:1;
      uint64_t CMD1:1;
      uint64_t CMPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMPCR;

  uint8_t res6[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMAD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS16:1;
      uint64_t TS17:1;
      uint64_t TS18:1;
      uint64_t TS19:1;
      uint64_t TS20:1;
      uint64_t TS21:1;
      uint64_t TS22:1;
      uint64_t TS23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS24:1;
      uint64_t TS25:1;
      uint64_t TS26:1;
      uint64_t TS27:1;
      uint64_t TS28:1;
      uint64_t TS29:1;
      uint64_t TS30:1;
      uint64_t TS31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS3;

  uint8_t res7[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS0:1;
      uint64_t TS1:1;
      uint64_t TS2:1;
      uint64_t TS3:1;
      uint64_t TS4:1;
      uint64_t TS5:1;
      uint64_t TS6:1;
      uint64_t TS7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS8:1;
      uint64_t TS9:1;
      uint64_t TS10:1;
      uint64_t TS11:1;
      uint64_t TS12:1;
      uint64_t TS13:1;
      uint64_t TS14:1;
      uint64_t TS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS1;

  uint8_t res8[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST1:5;
      uint64_t STX1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADST1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST0:5;
      uint64_t STX0:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADST0;

  uint8_t res9[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCT;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRTSL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PRTSL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCTSL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCTSL;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENBL:1;
      uint64_t READY:1;
      uint64_t reservedSpace0:6;
      uint64_t ENBLTIME:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADCEN;

  uint8_t res12[6];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WCMRCIF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCOOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WCMRCOT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RCOE:1;
      uint64_t RCOIE:1;
      uint64_t RCOIRS:1;
      uint64_t RCODC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMPCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WCCH:5;
      uint64_t WCMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMPSR;

  uint8_t res13[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMLD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WCMPDL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMHD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WCMPDH;

};

#define ADC0 (*(volatile struct ADC0_tag *) 0x40027000)

struct CRTRIM_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MCR_PSR;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TRD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MCR_FTRM;

  uint8_t res1[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MCR_TTRM;

  uint8_t res2[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRMLCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR_RLR;

};

#define CRTRIM (*(volatile struct CRTRIM_tag *) 0x4002e000)

struct EXTI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN0:1;
      uint64_t EN1:1;
      uint64_t EN2:1;
      uint64_t EN3:1;
      uint64_t EN4:1;
      uint64_t EN5:1;
      uint64_t EN6:1;
      uint64_t EN7:1;
      uint64_t EN8:1;
      uint64_t EN9:1;
      uint64_t EN10:1;
      uint64_t EN11:1;
      uint64_t EN12:1;
      uint64_t EN13:1;
      uint64_t EN14:1;
      uint64_t EN15:1;
      uint64_t EN16:1;
      uint64_t EN17:1;
      uint64_t EN18:1;
      uint64_t EN19:1;
      uint64_t EN20:1;
      uint64_t EN21:1;
      uint64_t EN22:1;
      uint64_t EN23:1;
      uint64_t EN24:1;
      uint64_t EN25:1;
      uint64_t EN26:1;
      uint64_t EN27:1;
      uint64_t EN28:1;
      uint64_t EN29:1;
      uint64_t EN30:1;
      uint64_t EN31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ER0:1;
      uint64_t ER1:1;
      uint64_t ER2:1;
      uint64_t ER3:1;
      uint64_t ER4:1;
      uint64_t ER5:1;
      uint64_t ER6:1;
      uint64_t ER7:1;
      uint64_t ER8:1;
      uint64_t ER9:1;
      uint64_t ER10:1;
      uint64_t ER11:1;
      uint64_t ER12:1;
      uint64_t ER13:1;
      uint64_t ER14:1;
      uint64_t ER15:1;
      uint64_t ER16:1;
      uint64_t ER17:1;
      uint64_t ER18:1;
      uint64_t ER19:1;
      uint64_t ER20:1;
      uint64_t ER21:1;
      uint64_t ER22:1;
      uint64_t ER23:1;
      uint64_t ER24:1;
      uint64_t ER25:1;
      uint64_t ER26:1;
      uint64_t ER27:1;
      uint64_t ER28:1;
      uint64_t ER29:1;
      uint64_t ER30:1;
      uint64_t ER31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECL0:1;
      uint64_t ECL1:1;
      uint64_t ECL2:1;
      uint64_t ECL3:1;
      uint64_t ECL4:1;
      uint64_t ECL5:1;
      uint64_t ECL6:1;
      uint64_t ECL7:1;
      uint64_t ECL8:1;
      uint64_t ECL9:1;
      uint64_t ECL10:1;
      uint64_t ECL11:1;
      uint64_t ECL12:1;
      uint64_t ECL13:1;
      uint64_t ECL14:1;
      uint64_t ECL15:1;
      uint64_t ECL16:1;
      uint64_t ECL17:1;
      uint64_t ECL18:1;
      uint64_t ECL19:1;
      uint64_t ECL20:1;
      uint64_t ECL21:1;
      uint64_t ECL22:1;
      uint64_t ECL23:1;
      uint64_t ECL24:1;
      uint64_t ECL25:1;
      uint64_t ECL26:1;
      uint64_t ECL27:1;
      uint64_t ECL28:1;
      uint64_t ECL29:1;
      uint64_t ECL30:1;
      uint64_t ECL31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LA0:1;
      uint64_t LB0:1;
      uint64_t LA1:1;
      uint64_t LB1:1;
      uint64_t LA2:1;
      uint64_t LB2:1;
      uint64_t LA3:1;
      uint64_t LB3:1;
      uint64_t LA4:1;
      uint64_t LB4:1;
      uint64_t LA5:1;
      uint64_t LB5:1;
      uint64_t LA6:1;
      uint64_t LB6:1;
      uint64_t LA7:1;
      uint64_t LB7:1;
      uint64_t LA8:1;
      uint64_t LB8:1;
      uint64_t LA9:1;
      uint64_t LB9:1;
      uint64_t LA10:1;
      uint64_t LB10:1;
      uint64_t LA11:1;
      uint64_t LB11:1;
      uint64_t LA12:1;
      uint64_t LB12:1;
      uint64_t LA13:1;
      uint64_t LB13:1;
      uint64_t LA14:1;
      uint64_t LB14:1;
      uint64_t LA15:1;
      uint64_t LB15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LA16:1;
      uint64_t LB16:1;
      uint64_t LA17:1;
      uint64_t LB17:1;
      uint64_t LA18:1;
      uint64_t LB18:1;
      uint64_t LA19:1;
      uint64_t LB19:1;
      uint64_t LA20:1;
      uint64_t LB20:1;
      uint64_t LA21:1;
      uint64_t LB21:1;
      uint64_t LA22:1;
      uint64_t LB22:1;
      uint64_t LA23:1;
      uint64_t LB23:1;
      uint64_t LA24:1;
      uint64_t LB24:1;
      uint64_t LA25:1;
      uint64_t LB25:1;
      uint64_t LA26:1;
      uint64_t LB26:1;
      uint64_t LA27:1;
      uint64_t LB27:1;
      uint64_t LA28:1;
      uint64_t LB28:1;
      uint64_t LA29:1;
      uint64_t LB29:1;
      uint64_t LA30:1;
      uint64_t LB30:1;
      uint64_t LA31:1;
      uint64_t LB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELVR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NMIRR;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NCL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NMICL;

};

#define EXTI (*(volatile struct EXTI_tag *) 0x40030000)

struct INTREQ_A_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ADCSCAN0:1;
      uint64_t ADCSCAN1:1;
      uint64_t ADCSCAN2:1;
      uint64_t IRQ0BT0:1;
      uint64_t IRQ0BT2:1;
      uint64_t IRQ0BT4:1;
      uint64_t IRQ0BT6:1;
      uint64_t MFS0RX:1;
      uint64_t MFS0TX:1;
      uint64_t MFS1RX:1;
      uint64_t MFS1TX:1;
      uint64_t MFS2RX:1;
      uint64_t MFS2TX:1;
      uint64_t MFS3RX:1;
      uint64_t MFS3TX:1;
      uint64_t MFS4RX:1;
      uint64_t MFS4TX:1;
      uint64_t MFS5RX:1;
      uint64_t MFS5TX:1;
      uint64_t MFS6RX:1;
      uint64_t MFS6TX:1;
      uint64_t MFS7RX:1;
      uint64_t MFS7TX:1;
      uint64_t EXINT0:1;
      uint64_t EXINT1:1;
      uint64_t EXINT2:1;
      uint64_t EXINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRQSEL;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMI:1;
      uint64_t HWINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXC02MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCSINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ00MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWWDTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ01MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LVDINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ02MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAVE0INT0:1;
      uint64_t WAVE0INT1:1;
      uint64_t WAVE0INT2:1;
      uint64_t WAVE0INT3:1;
      uint64_t WAVE1INT0:1;
      uint64_t WAVE1INT1:1;
      uint64_t WAVE1INT2:1;
      uint64_t WAVE1INT3:1;
      uint64_t WAVE2INT0:1;
      uint64_t WAVE2INT1:1;
      uint64_t WAVE2INT2:1;
      uint64_t WAVE2INT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ03MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT0:1;
      uint64_t EXTINT1:1;
      uint64_t EXTINT2:1;
      uint64_t EXTINT3:1;
      uint64_t EXTINT4:1;
      uint64_t EXTINT5:1;
      uint64_t EXTINT6:1;
      uint64_t EXTINT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ04MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT8:1;
      uint64_t EXTINT9:1;
      uint64_t EXTINT10:1;
      uint64_t EXTINT11:1;
      uint64_t EXTINT12:1;
      uint64_t EXTINT13:1;
      uint64_t EXTINT14:1;
      uint64_t EXTINT15:1;
      uint64_t EXTINT16:1;
      uint64_t EXTINT17:1;
      uint64_t EXTINT18:1;
      uint64_t EXTINT19:1;
      uint64_t EXTINT20:1;
      uint64_t EXTINT21:1;
      uint64_t EXTINT22:1;
      uint64_t EXTINT23:1;
      uint64_t EXTINT24:1;
      uint64_t EXTINT25:1;
      uint64_t EXTINT26:1;
      uint64_t EXTINT27:1;
      uint64_t EXTINT28:1;
      uint64_t EXTINT29:1;
      uint64_t EXTINT30:1;
      uint64_t EXTINT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ05MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMINT0:1;
      uint64_t TIMINT1:1;
      uint64_t QUD0INT0:1;
      uint64_t QUD0INT1:1;
      uint64_t QUD0INT2:1;
      uint64_t QUD0INT3:1;
      uint64_t QUD0INT4:1;
      uint64_t QUD0INT5:1;
      uint64_t QUD1INT0:1;
      uint64_t QUD1INT1:1;
      uint64_t QUD1INT2:1;
      uint64_t QUD1INT3:1;
      uint64_t QUD1INT4:1;
      uint64_t QUD1INT5:1;
      uint64_t QUD2INT0:1;
      uint64_t QUD2INT1:1;
      uint64_t QUD2INT2:1;
      uint64_t QUD2INT3:1;
      uint64_t QUD2INT4:1;
      uint64_t QUD2INT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ06MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ07MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t MFSINT2:1;
      uint64_t MFSINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ08MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ09MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t MFSINT2:1;
      uint64_t MFSINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ10MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ11MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t MFSINT2:1;
      uint64_t MFSINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ12MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ13MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t MFSINT2:1;
      uint64_t MFSINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ14MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ15MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t MFSINT2:1;
      uint64_t MFSINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ16MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ17MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t MFSINT2:1;
      uint64_t MFSINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ18MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t reservedSpace0:2;
      uint64_t DMAINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ19MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t MFSINT2:1;
      uint64_t MFSINT3:1;
      uint64_t DMAINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ20MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t reservedSpace0:2;
      uint64_t DMAINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ21MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t MFSINT2:1;
      uint64_t MFSINT3:1;
      uint64_t DMAINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ22MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPGINT0:1;
      uint64_t PPGINT1:1;
      uint64_t PPGINT2:1;
      uint64_t PPGINT3:1;
      uint64_t PPGINT4:1;
      uint64_t PPGINT5:1;
      uint64_t PPGINT6:1;
      uint64_t PPGINT7:1;
      uint64_t PPGINT8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ23MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCINT:1;
      uint64_t SOSCINT:1;
      uint64_t MPLLINT:1;
      uint64_t reservedSpace0:1;
      uint64_t WCINT:1;
      uint64_t RTCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ24MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCINT0:1;
      uint64_t ADCINT1:1;
      uint64_t ADCINT2:1;
      uint64_t ADCINT3:1;
      uint64_t ADCINT4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ25MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCINT0:1;
      uint64_t ADCINT1:1;
      uint64_t ADCINT2:1;
      uint64_t ADCINT3:1;
      uint64_t ADCINT4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ26MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCINT0:1;
      uint64_t ADCINT1:1;
      uint64_t ADCINT2:1;
      uint64_t ADCINT3:1;
      uint64_t ADCINT4:1;
      uint64_t LCDCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ27MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRT0INT0:1;
      uint64_t FRT0INT1:1;
      uint64_t FRT0INT2:1;
      uint64_t FRT0INT3:1;
      uint64_t FRT0INT4:1;
      uint64_t FRT0INT5:1;
      uint64_t FRT1INT0:1;
      uint64_t FRT1INT1:1;
      uint64_t FRT1INT2:1;
      uint64_t FRT1INT3:1;
      uint64_t FRT1INT4:1;
      uint64_t FRT1INT5:1;
      uint64_t FRT2INT0:1;
      uint64_t FRT2INT1:1;
      uint64_t FRT2INT2:1;
      uint64_t FRT2INT3:1;
      uint64_t FRT2INT4:1;
      uint64_t FRT2INT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ28MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICU0INT0:1;
      uint64_t ICU0INT1:1;
      uint64_t ICU0INT2:1;
      uint64_t ICU0INT3:1;
      uint64_t ICU1INT0:1;
      uint64_t ICU1INT1:1;
      uint64_t ICU1INT2:1;
      uint64_t ICU1INT3:1;
      uint64_t ICU2INT0:1;
      uint64_t ICU2INT1:1;
      uint64_t ICU2INT2:1;
      uint64_t ICU2INT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ29MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCU0INT0:1;
      uint64_t OCU0INT1:1;
      uint64_t OCU0INT2:1;
      uint64_t OCU0INT3:1;
      uint64_t OCU0INT4:1;
      uint64_t OCU0INT5:1;
      uint64_t OCU1INT0:1;
      uint64_t OCU1INT1:1;
      uint64_t OCU1INT2:1;
      uint64_t OCU1INT3:1;
      uint64_t OCU1INT4:1;
      uint64_t OCU1INT5:1;
      uint64_t OCU2INT0:1;
      uint64_t OCU2INT1:1;
      uint64_t OCU2INT2:1;
      uint64_t OCU2INT3:1;
      uint64_t OCU2INT4:1;
      uint64_t OCU2INT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ30MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
      uint64_t BTINT2:1;
      uint64_t BTINT3:1;
      uint64_t BTINT4:1;
      uint64_t BTINT5:1;
      uint64_t BTINT6:1;
      uint64_t BTINT7:1;
      uint64_t BTINT8:1;
      uint64_t BTINT9:1;
      uint64_t BTINT10:1;
      uint64_t BTINT11:1;
      uint64_t BTINT12:1;
      uint64_t BTINT13:1;
      uint64_t BTINT14:1;
      uint64_t BTINT15:1;
      uint64_t reservedSpace0:11;
      uint64_t FLASHINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ31MON;

};

#define INTREQ_A (*(volatile struct INTREQ_A_tag *) 0x40031000)

struct GPIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P00:1;
      uint64_t P01:1;
      uint64_t P02:1;
      uint64_t P03:1;
      uint64_t P04:1;
      uint64_t reservedSpace0:10;
      uint64_t P0F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR6;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR8;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE0:1;
      uint64_t reservedSpace0:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFRE;

  uint8_t res2[196];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P00:1;
      uint64_t P01:1;
      uint64_t P02:1;
      uint64_t P03:1;
      uint64_t P04:1;
      uint64_t reservedSpace0:10;
      uint64_t P0F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR6;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR8;

  uint8_t res4[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE0:1;
      uint64_t reservedSpace0:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCRE;

  uint8_t res5[196];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P00:1;
      uint64_t P01:1;
      uint64_t P02:1;
      uint64_t P03:1;
      uint64_t P04:1;
      uint64_t reservedSpace0:10;
      uint64_t P0F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR6;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR8;

  uint8_t res7[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE0:1;
      uint64_t reservedSpace0:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDRE;

  uint8_t res8[196];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P00:1;
      uint64_t P01:1;
      uint64_t P02:1;
      uint64_t P03:1;
      uint64_t P04:1;
      uint64_t reservedSpace0:10;
      uint64_t P0F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR6;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR8;

  uint8_t res10[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE0:1;
      uint64_t reservedSpace0:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIRE;

  uint8_t res11[196];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P00:1;
      uint64_t P01:1;
      uint64_t P02:1;
      uint64_t P03:1;
      uint64_t P04:1;
      uint64_t reservedSpace0:10;
      uint64_t P0F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR6;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR8;

  uint8_t res13[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE0:1;
      uint64_t reservedSpace0:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDORE;

  uint8_t res14[196];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AN00:1;
      uint64_t AN01:1;
      uint64_t AN02:1;
      uint64_t AN03:1;
      uint64_t AN04:1;
      uint64_t AN05:1;
      uint64_t AN06:1;
      uint64_t AN07:1;
      uint64_t AN08:1;
      uint64_t AN09:1;
      uint64_t AN10:1;
      uint64_t AN11:1;
      uint64_t AN12:1;
      uint64_t AN13:1;
      uint64_t AN14:1;
      uint64_t AN15:1;
      uint64_t AN16:1;
      uint64_t AN17:1;
      uint64_t AN18:1;
      uint64_t AN19:1;
      uint64_t AN20:1;
      uint64_t AN21:1;
      uint64_t AN22:1;
      uint64_t AN23:1;
      uint64_t AN24:1;
      uint64_t AN25:1;
      uint64_t AN26:1;
      uint64_t AN27:1;
      uint64_t AN28:1;
      uint64_t AN29:1;
      uint64_t AN30:1;
      uint64_t AN31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADE;

  uint8_t res15[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUBXC:2;
      uint64_t MAINXC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPSR;

  uint8_t res16[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMIS:1;
      uint64_t CROUTE:2;
      uint64_t reservedSpace0:1;
      uint64_t RTCCOE:2;
      uint64_t SUBOUTE:2;
      uint64_t reservedSpace1:8;
      uint64_t SWDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTO00E:2;
      uint64_t RTO01E:2;
      uint64_t RTO02E:2;
      uint64_t RTO03E:2;
      uint64_t RTO04E:2;
      uint64_t RTO05E:2;
      uint64_t DTTI0C:1;
      uint64_t IGTRG0:1;
      uint64_t reservedSpace0:2;
      uint64_t DTTI0S:2;
      uint64_t FRCK0S:2;
      uint64_t IC00S:3;
      uint64_t IC01S:3;
      uint64_t IC02S:3;
      uint64_t IC03S:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTO10E:2;
      uint64_t RTO11E:2;
      uint64_t RTO12E:2;
      uint64_t RTO13E:2;
      uint64_t RTO14E:2;
      uint64_t RTO15E:2;
      uint64_t DTTI1C:1;
      uint64_t reservedSpace0:3;
      uint64_t DTTI1S:2;
      uint64_t FRCK1S:2;
      uint64_t IC10S:3;
      uint64_t IC11S:3;
      uint64_t IC12S:3;
      uint64_t IC13S:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTO20E:2;
      uint64_t RTO21E:2;
      uint64_t RTO22E:2;
      uint64_t RTO23E:2;
      uint64_t RTO24E:2;
      uint64_t RTO25E:2;
      uint64_t DTTI2C:1;
      uint64_t reservedSpace0:3;
      uint64_t DTTI2S:2;
      uint64_t FRCK2S:2;
      uint64_t IC20S:3;
      uint64_t IC21S:3;
      uint64_t IC22S:3;
      uint64_t IC23S:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TIOA0E:2;
      uint64_t TIOB0S:3;
      uint64_t reservedSpace1:1;
      uint64_t TIOA1S:2;
      uint64_t TIOA1E:2;
      uint64_t TIOB1S:2;
      uint64_t reservedSpace2:4;
      uint64_t TIOA2E:2;
      uint64_t TIOB2S:2;
      uint64_t reservedSpace3:2;
      uint64_t TIOA3S:2;
      uint64_t TIOA3E:2;
      uint64_t TIOB3S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TIOA4E:2;
      uint64_t TIOB4S:2;
      uint64_t reservedSpace1:2;
      uint64_t TIOA5S:2;
      uint64_t TIOA5E:2;
      uint64_t TIOB5S:2;
      uint64_t reservedSpace2:4;
      uint64_t TIOA6E:2;
      uint64_t TIOB6S:2;
      uint64_t reservedSpace3:2;
      uint64_t TIOA7S:2;
      uint64_t TIOA7E:2;
      uint64_t TIOB7S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EINT00S:2;
      uint64_t EINT01S:2;
      uint64_t EINT02S:2;
      uint64_t EINT03S:2;
      uint64_t EINT04S:2;
      uint64_t EINT05S:2;
      uint64_t EINT06S:2;
      uint64_t EINT07S:2;
      uint64_t EINT08S:2;
      uint64_t EINT09S:2;
      uint64_t EINT10S:2;
      uint64_t EINT11S:2;
      uint64_t EINT12S:2;
      uint64_t EINT13S:2;
      uint64_t EINT14S:2;
      uint64_t EINT15S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SIN0S:2;
      uint64_t SOT0B:2;
      uint64_t SCK0B:2;
      uint64_t SIN1S:2;
      uint64_t SOT1B:2;
      uint64_t SCK1B:2;
      uint64_t SIN2S:2;
      uint64_t SOT2B:2;
      uint64_t SCK2B:2;
      uint64_t SIN3S:2;
      uint64_t SOT3B:2;
      uint64_t SCK3B:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR07;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTS4E:2;
      uint64_t CTS4S:2;
      uint64_t SIN4S:2;
      uint64_t SOT4B:2;
      uint64_t SCK4B:2;
      uint64_t SIN5S:2;
      uint64_t SOT5B:2;
      uint64_t SCK5B:2;
      uint64_t SIN6S:2;
      uint64_t SOT6B:2;
      uint64_t SCK6B:2;
      uint64_t SIN7S:2;
      uint64_t SOT7B:2;
      uint64_t SCK7B:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR08;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QAIN0S:2;
      uint64_t QBIN0S:2;
      uint64_t QZIN0S:2;
      uint64_t QAIN1S:2;
      uint64_t QBIN1S:2;
      uint64_t QZIN1S:2;
      uint64_t ADTRG0S:4;
      uint64_t ADTRG1S:4;
      uint64_t ADTRG2S:4;
      uint64_t CRX0S:2;
      uint64_t CTX0E:2;
      uint64_t CRX1S:2;
      uint64_t CTX1E:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR09;

  uint8_t res17[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TIOA8E:2;
      uint64_t TIOB8S:2;
      uint64_t reservedSpace1:2;
      uint64_t TIOA9S:2;
      uint64_t TIOA9E:2;
      uint64_t TIOB9S:2;
      uint64_t reservedSpace2:4;
      uint64_t TIOA10E:2;
      uint64_t TIOB10S:2;
      uint64_t reservedSpace3:2;
      uint64_t TIOA11S:2;
      uint64_t TIOA11E:2;
      uint64_t TIOB11S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TIOA12E:2;
      uint64_t TIOB12S:3;
      uint64_t reservedSpace1:1;
      uint64_t TIOA13S:2;
      uint64_t TIOA13E:2;
      uint64_t TIOB13S:2;
      uint64_t reservedSpace2:4;
      uint64_t TIOA14E:2;
      uint64_t TIOB14S:2;
      uint64_t reservedSpace3:2;
      uint64_t TIOA15S:2;
      uint64_t TIOA15E:2;
      uint64_t TIOB15S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QAIN2S:2;
      uint64_t QBIN2S:2;
      uint64_t QZIN2S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EINT16S:2;
      uint64_t EINT17S:2;
      uint64_t EINT18S:2;
      uint64_t EINT19S:2;
      uint64_t EINT20S:2;
      uint64_t EINT21S:2;
      uint64_t EINT22S:2;
      uint64_t EINT23S:2;
      uint64_t EINT24S:2;
      uint64_t EINT25S:2;
      uint64_t EINT26S:2;
      uint64_t EINT27S:2;
      uint64_t EINT28S:2;
      uint64_t EINT29S:2;
      uint64_t EINT30S:2;
      uint64_t EINT31S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SIN8S:2;
      uint64_t SOT8B:2;
      uint64_t SCK8B:2;
      uint64_t SIN9S:2;
      uint64_t SOT9B:2;
      uint64_t SCK9B:2;
      uint64_t SIN10S:2;
      uint64_t SOT10B:2;
      uint64_t SCK10B:2;
      uint64_t SIN11S:2;
      uint64_t SOT11B:2;
      uint64_t SCK11B:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SIN12S:2;
      uint64_t SOT12B:2;
      uint64_t SCK12B:2;
      uint64_t SIN13S:2;
      uint64_t SOT13B:2;
      uint64_t SCK13B:2;
      uint64_t SIN14S:2;
      uint64_t SOT14B:2;
      uint64_t SCK14B:2;
      uint64_t SIN15S:2;
      uint64_t SOT15B:2;
      uint64_t SCK15B:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CECR0B:2;
      uint64_t CECR1B:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR18;

  uint8_t res18[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QAIN0S:1;
      uint64_t QBIN0S:1;
      uint64_t QZIN0S:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SCS10B:2;
      uint64_t SCS11E:2;
      uint64_t reservedSpace1:4;
      uint64_t SCS30B:2;
      uint64_t SCS31E:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR22;

  uint8_t res19[164];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P00:1;
      uint64_t P01:1;
      uint64_t P02:1;
      uint64_t P03:1;
      uint64_t P04:1;
      uint64_t reservedSpace0:10;
      uint64_t P0F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR6;

  uint8_t res20[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR8;

  uint8_t res21[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE0:1;
      uint64_t reservedSpace0:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZRE;

  uint8_t res22[452];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P00:1;
      uint64_t P01:1;
      uint64_t P02:1;
      uint64_t P03:1;
      uint64_t P04:1;
      uint64_t reservedSpace0:10;
      uint64_t P0F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOER3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOER4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOER5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOER6;

  uint8_t res23[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOER8;

  uint8_t res24[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE0:1;
      uint64_t reservedSpace0:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOERE;

};

#define GPIO (*(volatile struct GPIO_tag *) 0x40033000)

struct LVD_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SVHI:5;
      uint64_t LVDIE:1;
      uint64_t reservedSpace1:2;
      uint64_t SVHR:5;
      uint64_t LVDRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) LVD_CTL;

  uint8_t res0[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LVDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LVD_STR;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LVDCL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LVD_CLR;

  uint8_t res2[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LVDLCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LVD_RLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t LVDRRDY:1;
      uint64_t LVDIRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LVD_STR2;

};

#define LVD (*(volatile struct LVD_tag *) 0x40035000)

struct DS_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ISUBSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) REG_CTL;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RTCCKE:1;
      uint64_t CECCKE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RCK_CTL;

  uint8_t res1[1787];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RTCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PMD_CTL;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WINITX:1;
      uint64_t WLVDH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WRFSR;

  uint8_t res3[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WRTCI:1;
      uint64_t WLVDI:1;
      uint64_t WUI0:1;
      uint64_t WUI1:1;
      uint64_t WUI2:1;
      uint64_t WUI3:1;
      uint64_t WUI4:1;
      uint64_t WUI5:1;
      uint64_t WCEC0I:1;
      uint64_t WCEC1I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WIFSR;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WRTCE:1;
      uint64_t WLVDE:1;
      uint64_t reservedSpace0:1;
      uint64_t WUE1:1;
      uint64_t WUE2:1;
      uint64_t WUE3:1;
      uint64_t WUE4:1;
      uint64_t WUE5:1;
      uint64_t WCEC0E:1;
      uint64_t WCEC1E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WIER;

  uint8_t res5[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WUI1LV:1;
      uint64_t WUI2LV:1;
      uint64_t WUI3LV:1;
      uint64_t WUI4LV:1;
      uint64_t WUI5LV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WILVR;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SRAMR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DSRAMR;

  uint8_t res7[235];

  uint8_t BUR01;
  uint8_t BUR02;
  uint8_t BUR03;
  uint8_t BUR04;
  uint8_t BUR05;
  uint8_t BUR06;
  uint8_t BUR07;
  uint8_t BUR08;
  uint8_t BUR09;
  uint8_t BUR10;
  uint8_t BUR11;
  uint8_t BUR12;
  uint8_t BUR13;
  uint8_t BUR14;
  uint8_t BUR15;
  uint8_t BUR16;
};

#define DS (*(volatile struct DS_tag *) 0x40035100)

struct CRC_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t CRC32:1;
      uint64_t LTLEND:1;
      uint64_t LSBFST:1;
      uint64_t CRCLTE:1;
      uint64_t CRCLSF:1;
      uint64_t FXOR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CRCCR;

  uint8_t res0[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCINIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCR;

};

#define CRC (*(volatile struct CRC_tag *) 0x40039000)

struct WC_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CTR:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCRD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RLC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WCIF:1;
      uint64_t WCIE:1;
      uint64_t CS:2;
      uint64_t reservedSpace0:2;
      uint64_t WCOP:1;
      uint64_t WCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCCR;

  uint8_t res0[13];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SEL_IN:2;
      uint64_t reservedSpace0:6;
      uint64_t SEL_OUT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CLK_SEL;

  uint8_t res1[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLK_EN:1;
      uint64_t CLK_EN_R:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CLK_EN;

};

#define WC (*(volatile struct WC_tag *) 0x4003a000)

struct RTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ST:1;
      uint64_t reservedSpace0:1;
      uint64_t RUN:1;
      uint64_t SRST:1;
      uint64_t SCST:1;
      uint64_t SCRST:1;
      uint64_t BUSY:1;
      uint64_t reservedSpace1:1;
      uint64_t MIEN:1;
      uint64_t HEN:1;
      uint64_t DEN:1;
      uint64_t MOEN:1;
      uint64_t YEN:1;
      uint64_t reservedSpace2:3;
      uint64_t INTSSI:1;
      uint64_t INTSI:1;
      uint64_t INTMI:1;
      uint64_t INTHI:1;
      uint64_t INTTMI:1;
      uint64_t INTALI:1;
      uint64_t INTERI:1;
      uint64_t INTCRI:1;
      uint64_t INTSSIE:1;
      uint64_t INTSIE:1;
      uint64_t INTMIE:1;
      uint64_t INTHIE:1;
      uint64_t INTTMIE:1;
      uint64_t INTALIE:1;
      uint64_t INTERIE:1;
      uint64_t INTCRIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CREAD:1;
      uint64_t reservedSpace0:7;
      uint64_t TMST:1;
      uint64_t TMEN:1;
      uint64_t TMRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
      uint64_t BR16:1;
      uint64_t BR17:1;
      uint64_t BR18:1;
      uint64_t BR19:1;
      uint64_t BR20:1;
      uint64_t BR21:1;
      uint64_t BR22:1;
      uint64_t BR23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTBR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t S:4;
      uint64_t TS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTSR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MI:4;
      uint64_t TMI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTMIR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t H:4;
      uint64_t TH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTHR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t D:4;
      uint64_t TD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTDR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DW:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTDW;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MO:4;
      uint64_t TMO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTMOR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t Y:4;
      uint64_t TY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTYR;

  uint8_t res0[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AMI:4;
      uint64_t TAMI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALMIR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AH:4;
      uint64_t TAH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALHR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AD:4;
      uint64_t TAD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALDR;

  uint8_t res1[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AMO:4;
      uint64_t TAMO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALMOR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AY:4;
      uint64_t TAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALYR;

  uint8_t res2[1];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TM:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTTR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCLKS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCLKS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCLKM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCLKM;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WTCAL:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WTCAL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCALEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCALEN;

  uint8_t res4[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTDIV;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTDIVEN:1;
      uint64_t WTDIVRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTDIVEN;

  uint8_t res5[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCALPRD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCALPRD;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCOSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCOSEL;

};

#define RTC (*(volatile struct RTC_tag *) 0x4003b000)

struct LSCRP_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t LCR_PRSLD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LCR_PRSLD;

};

#define LSCRP (*(volatile struct LSCRP_tag *) 0x4003c000)

struct PCG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSCK:16;
      uint64_t ADCCK:4;
      uint64_t reservedSpace0:4;
      uint64_t DMACK:1;
      uint64_t reservedSpace1:3;
      uint64_t GIOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKEN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRST:16;
      uint64_t ADCRST:4;
      uint64_t reservedSpace0:4;
      uint64_t DMARST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRST0;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTMCK:4;
      uint64_t reservedSpace0:4;
      uint64_t MFTCK:4;
      uint64_t reservedSpace1:4;
      uint64_t QDUCK:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKEN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTMRST:4;
      uint64_t reservedSpace0:4;
      uint64_t MFTRST:4;
      uint64_t reservedSpace1:4;
      uint64_t QDURST:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRST1;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CANCK:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKEN2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CANRST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRST2;

};

#define PCG (*(volatile struct PCG_tag *) 0x4003c100)

struct DMAC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t DH:4;
      uint64_t PR:1;
      uint64_t reservedSpace1:1;
      uint64_t DS_bitfield:1;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:16;
      uint64_t BC:4;
      uint64_t reservedSpace0:3;
      uint64_t IS:6;
      uint64_t ST:1;
      uint64_t PB:1;
      uint64_t EB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:15;
      uint64_t SS:3;
      uint64_t CI:1;
      uint64_t EI:1;
      uint64_t RD:1;
      uint64_t RS:1;
      uint64_t RC:1;
      uint64_t FD:1;
      uint64_t FS:1;
      uint64_t TW:2;
      uint64_t MS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACB0;

  uint32_t DMACSA0;
  uint32_t DMACDA0;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:16;
      uint64_t BC:4;
      uint64_t reservedSpace0:3;
      uint64_t IS:6;
      uint64_t ST:1;
      uint64_t PB:1;
      uint64_t EB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:15;
      uint64_t SS:3;
      uint64_t CI:1;
      uint64_t EI:1;
      uint64_t RD:1;
      uint64_t RS:1;
      uint64_t RC:1;
      uint64_t FD:1;
      uint64_t FS:1;
      uint64_t TW:2;
      uint64_t MS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACB1;

  uint32_t DMACSA1;
  uint32_t DMACDA1;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:16;
      uint64_t BC:4;
      uint64_t reservedSpace0:3;
      uint64_t IS:6;
      uint64_t ST:1;
      uint64_t PB:1;
      uint64_t EB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:15;
      uint64_t SS:3;
      uint64_t CI:1;
      uint64_t EI:1;
      uint64_t RD:1;
      uint64_t RS:1;
      uint64_t RC:1;
      uint64_t FD:1;
      uint64_t FS:1;
      uint64_t TW:2;
      uint64_t MS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACB2;

  uint32_t DMACSA2;
  uint32_t DMACDA2;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:16;
      uint64_t BC:4;
      uint64_t reservedSpace0:3;
      uint64_t IS:6;
      uint64_t ST:1;
      uint64_t PB:1;
      uint64_t EB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:15;
      uint64_t SS:3;
      uint64_t CI:1;
      uint64_t EI:1;
      uint64_t RD:1;
      uint64_t RS:1;
      uint64_t RC:1;
      uint64_t FD:1;
      uint64_t FS:1;
      uint64_t TW:2;
      uint64_t MS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACB3;

  uint32_t DMACSA3;
  uint32_t DMACDA3;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:16;
      uint64_t BC:4;
      uint64_t reservedSpace0:3;
      uint64_t IS:6;
      uint64_t ST:1;
      uint64_t PB:1;
      uint64_t EB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:15;
      uint64_t SS:3;
      uint64_t CI:1;
      uint64_t EI:1;
      uint64_t RD:1;
      uint64_t RS:1;
      uint64_t RC:1;
      uint64_t FD:1;
      uint64_t FS:1;
      uint64_t TW:2;
      uint64_t MS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACB4;

  uint32_t DMACSA4;
  uint32_t DMACDA4;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:16;
      uint64_t BC:4;
      uint64_t reservedSpace0:3;
      uint64_t IS:6;
      uint64_t ST:1;
      uint64_t PB:1;
      uint64_t EB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:15;
      uint64_t SS:3;
      uint64_t CI:1;
      uint64_t EI:1;
      uint64_t RD:1;
      uint64_t RS:1;
      uint64_t RC:1;
      uint64_t FD:1;
      uint64_t FS:1;
      uint64_t TW:2;
      uint64_t MS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACB5;

  uint32_t DMACSA5;
  uint32_t DMACDA5;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:16;
      uint64_t BC:4;
      uint64_t reservedSpace0:3;
      uint64_t IS:6;
      uint64_t ST:1;
      uint64_t PB:1;
      uint64_t EB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:15;
      uint64_t SS:3;
      uint64_t CI:1;
      uint64_t EI:1;
      uint64_t RD:1;
      uint64_t RS:1;
      uint64_t RC:1;
      uint64_t FD:1;
      uint64_t FS:1;
      uint64_t TW:2;
      uint64_t MS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACB6;

  uint32_t DMACSA6;
  uint32_t DMACDA6;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:16;
      uint64_t BC:4;
      uint64_t reservedSpace0:3;
      uint64_t IS:6;
      uint64_t ST:1;
      uint64_t PB:1;
      uint64_t EB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:15;
      uint64_t SS:3;
      uint64_t CI:1;
      uint64_t EI:1;
      uint64_t RD:1;
      uint64_t RS:1;
      uint64_t RC:1;
      uint64_t FD:1;
      uint64_t FS:1;
      uint64_t TW:2;
      uint64_t MS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACB7;

  uint32_t DMACSA7;
  uint32_t DMACDA7;
};

#define DMAC (*(volatile struct DMAC_tag *) 0x40060000)

struct MTB_DWT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCMP_STA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP_ADDR_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTCMP_STA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP_DATA_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSK_STA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP_MASK_START;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCMP_STO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP_ADDR_STOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTCMP_STO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP_DATA_STOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSK_STO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP_MASK_STOP;

  uint8_t res1[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t STAEN:2;
      uint64_t STPEN:2;
      uint64_t DSTA:2;
      uint64_t DSTP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCT;

  uint8_t res2[4015];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPNTID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPNTID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPNTID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPNTID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CID3;

};

#define MTB_DWT (*(volatile struct MTB_DWT_tag *) 0xf0001000)

struct FASTIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P00:1;
      uint64_t P01:1;
      uint64_t P02:1;
      uint64_t P03:1;
      uint64_t P04:1;
      uint64_t reservedSpace0:10;
      uint64_t P0F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIR6;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIR8;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE0:1;
      uint64_t reservedSpace0:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIRE;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P00:1;
      uint64_t P01:1;
      uint64_t P02:1;
      uint64_t P03:1;
      uint64_t P04:1;
      uint64_t reservedSpace0:10;
      uint64_t P0F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDOR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDOR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDOR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDOR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDOR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDOR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDOR6;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDOR8;

  uint8_t res4[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE0:1;
      uint64_t reservedSpace0:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDORE;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P15:1;
      uint64_t P14:1;
      uint64_t P13:1;
      uint64_t P12:1;
      uint64_t P11:1;
      uint64_t P10:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M_FPDIR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P47:1;
      uint64_t P46:1;
      uint64_t P3F:1;
      uint64_t P3E:1;
      uint64_t P3D:1;
      uint64_t P3C:1;
      uint64_t P3B:1;
      uint64_t P3A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M_FPDIR1;

  uint8_t res6[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P15:1;
      uint64_t P14:1;
      uint64_t P13:1;
      uint64_t P12:1;
      uint64_t P11:1;
      uint64_t P10:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M_FPDOR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P47:1;
      uint64_t P46:1;
      uint64_t P3F:1;
      uint64_t P3E:1;
      uint64_t P3D:1;
      uint64_t P3C:1;
      uint64_t P3B:1;
      uint64_t P3A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M_FPDOR1;

};

#define FASTIO (*(volatile struct FASTIO_tag *) 0xf8000000)

