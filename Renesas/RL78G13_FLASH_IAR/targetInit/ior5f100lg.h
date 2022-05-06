/*-------------------------------------------------------------------------
 *      Declarations of SFR registers, interrupt and callt vector addresses
 *      for RL78 microcontroller R5F100LG.
 *
 *      This file can be used by both the RL78
 *      Assembler, IASMRL78, and the C/C++ compiler, ICCRL78.
 *
 *      This header file is generated from the device file:
 *          DR5F100LG.DVF
 *          Copyright(C) 2012 Renesas
 *          Format version V3.00, File version V1.14
 *-------------------------------------------------------------------------*/

#ifndef __IOR5F100LG_H__
#define __IOR5F100LG_H__

#if !defined(__IASMRL78__) && !defined(__ICCRL78__)
  #error "IOR5F100LG.H file for use with RL78 Assembler or Compiler only"
#endif

#if defined(__IASMRL78__)
  #if __CORE__ != __S2__
    #error "IOR5F100LG.H file for use with IASMRL78 option --core S2 only"
  #endif
#endif
#if defined(__ICCRL78__)
  #if __CORE__ != __S2__
    #error "IOR5F100LG.H file for use with ICCRL78 option --core S2 only"
  #endif
#endif

#ifdef __IAR_SYSTEMS_ICC__

#ifndef _SYSTEM_BUILD
#pragma system_include
#endif

#pragma language=save
#pragma language=extended

/*----------------------------------------------
 * SFR bits (default names)
 *--------------------------------------------*/

#ifndef __RL78_BIT_STRUCTURE__
  #define __RL78_BIT_STRUCTURE__
  typedef struct
  {
    unsigned char no0:1;
    unsigned char no1:1;
    unsigned char no2:1;
    unsigned char no3:1;
    unsigned char no4:1;
    unsigned char no5:1;
    unsigned char no6:1;
    unsigned char no7:1;
  } __BITS8;
#endif

#ifndef __RL78_BIT_STRUCTURE2__
  #define __RL78_BIT_STRUCTURE2__
  typedef struct
  {
    unsigned short no0:1;
    unsigned short no1:1;
    unsigned short no2:1;
    unsigned short no3:1;
    unsigned short no4:1;
    unsigned short no5:1;
    unsigned short no6:1;
    unsigned short no7:1;
    unsigned short no8:1;
    unsigned short no9:1;
    unsigned short no10:1;
    unsigned short no11:1;
    unsigned short no12:1;
    unsigned short no13:1;
    unsigned short no14:1;
    unsigned short no15:1;
  } __BITS16;
#endif

/*----------------------------------------------
 *       SFR declarations
 *--------------------------------------------*/

__saddr __no_init volatile union
{
  unsigned char P0;
  __BITS8       P0_bit;
} @ 0xFFF00;

__saddr __no_init volatile union
{
  unsigned char P1;
  __BITS8       P1_bit;
} @ 0xFFF01;

__saddr __no_init volatile union
{
  unsigned char P2;
  __BITS8       P2_bit;
} @ 0xFFF02;

__saddr __no_init volatile union
{
  unsigned char P3;
  __BITS8       P3_bit;
} @ 0xFFF03;

__saddr __no_init volatile union
{
  unsigned char P4;
  __BITS8       P4_bit;
} @ 0xFFF04;

__saddr __no_init volatile union
{
  unsigned char P5;
  __BITS8       P5_bit;
} @ 0xFFF05;

__saddr __no_init volatile union
{
  unsigned char P6;
  __BITS8       P6_bit;
} @ 0xFFF06;

__saddr __no_init volatile union
{
  unsigned char P7;
  __BITS8       P7_bit;
} @ 0xFFF07;

__saddr __no_init volatile union
{
  unsigned char P12;
  __BITS8       P12_bit;
} @ 0xFFF0C;

__saddr __no_init volatile union
{
  unsigned char P13;
  __BITS8       P13_bit;
} @ 0xFFF0D;

__saddr __no_init volatile union
{
  unsigned char P14;
  __BITS8       P14_bit;
} @ 0xFFF0E;

__saddr __no_bit_access __no_init volatile union
{
  unsigned short SDR00;
  __BITS16       SDR00_bit;
  struct
  {
    union
    {
      unsigned char SIO00;
      __BITS8       SIO00_bit;
      unsigned char TXD0;
      __BITS8       TXD0_bit;
    };
    unsigned char :8;
  };
} @ 0xFFF10;

__saddr __no_bit_access __no_init volatile union
{
  unsigned short SDR01;
  __BITS16       SDR01_bit;
  struct
  {
    union
    {
      unsigned char RXD0;
      __BITS8       RXD0_bit;
      unsigned char SIO01;
      __BITS8       SIO01_bit;
    };
    unsigned char :8;
  };
} @ 0xFFF12;

__saddr __no_bit_access __no_init volatile union
{
  unsigned short TDR00;
  __BITS16       TDR00_bit;
} @ 0xFFF18;

__saddr __no_bit_access __no_init volatile union
{
  unsigned short TDR01;
  __BITS16       TDR01_bit;
  struct
  {
    union
    {
      unsigned char TDR01L;
      __BITS8       TDR01L_bit;
    };
    union
    {
      unsigned char TDR01H;
      __BITS8       TDR01H_bit;
    };
  };
} @ 0xFFF1A;

__saddr __no_bit_access __no_init volatile const union
{
  unsigned short ADCR;
  __BITS16       ADCR_bit;
  struct
  {
    unsigned char :8;
    union
    {
      unsigned char ADCRH;
      __BITS8       ADCRH_bit;
    };
  };
} @ 0xFFF1E;

__sfr __no_init volatile union
{
  unsigned char PM0;
  __BITS8       PM0_bit;
} @ 0xFFF20;

__sfr __no_init volatile union
{
  unsigned char PM1;
  __BITS8       PM1_bit;
} @ 0xFFF21;

__sfr __no_init volatile union
{
  unsigned char PM2;
  __BITS8       PM2_bit;
} @ 0xFFF22;

__sfr __no_init volatile union
{
  unsigned char PM3;
  __BITS8       PM3_bit;
} @ 0xFFF23;

__sfr __no_init volatile union
{
  unsigned char PM4;
  __BITS8       PM4_bit;
} @ 0xFFF24;

__sfr __no_init volatile union
{
  unsigned char PM5;
  __BITS8       PM5_bit;
} @ 0xFFF25;

__sfr __no_init volatile union
{
  unsigned char PM6;
  __BITS8       PM6_bit;
} @ 0xFFF26;

__sfr __no_init volatile union
{
  unsigned char PM7;
  __BITS8       PM7_bit;
} @ 0xFFF27;

__sfr __no_init volatile union
{
  unsigned char PM12;
  __BITS8       PM12_bit;
} @ 0xFFF2C;

__sfr __no_init volatile union
{
  unsigned char PM14;
  __BITS8       PM14_bit;
} @ 0xFFF2E;

__sfr __no_init volatile union
{
  unsigned char ADM0;
  __BITS8       ADM0_bit;
  struct
  {
    unsigned char  ADCE:1;
    unsigned char  :6;
    unsigned char  ADCS:1;
  };
} @ 0xFFF30;

__sfr __no_init volatile union
{
  unsigned char ADS;
  __BITS8       ADS_bit;
} @ 0xFFF31;

__sfr __no_init volatile union
{
  unsigned char ADM1;
  __BITS8       ADM1_bit;
} @ 0xFFF32;

__sfr __no_init volatile union
{
  unsigned char KRM;
  __BITS8       KRM_bit;
} @ 0xFFF37;

__sfr __no_init volatile union
{
  unsigned char EGP0;
  __BITS8       EGP0_bit;
} @ 0xFFF38;

__sfr __no_init volatile union
{
  unsigned char EGN0;
  __BITS8       EGN0_bit;
} @ 0xFFF39;

__sfr __no_init volatile union
{
  unsigned char EGP1;
  __BITS8       EGP1_bit;
} @ 0xFFF3A;

__sfr __no_init volatile union
{
  unsigned char EGN1;
  __BITS8       EGN1_bit;
} @ 0xFFF3B;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short SDR02;
  __BITS16       SDR02_bit;
  struct
  {
    union
    {
      unsigned char SIO10;
      __BITS8       SIO10_bit;
      unsigned char TXD1;
      __BITS8       TXD1_bit;
    };
    unsigned char :8;
  };
} @ 0xFFF44;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short SDR03;
  __BITS16       SDR03_bit;
  struct
  {
    union
    {
      unsigned char RXD1;
      __BITS8       RXD1_bit;
      unsigned char SIO11;
      __BITS8       SIO11_bit;
    };
    unsigned char :8;
  };
} @ 0xFFF46;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short SDR10;
  __BITS16       SDR10_bit;
  struct
  {
    union
    {
      unsigned char SIO20;
      __BITS8       SIO20_bit;
      unsigned char TXD2;
      __BITS8       TXD2_bit;
    };
    unsigned char :8;
  };
} @ 0xFFF48;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short SDR11;
  __BITS16       SDR11_bit;
  struct
  {
    union
    {
      unsigned char RXD2;
      __BITS8       RXD2_bit;
      unsigned char SIO21;
      __BITS8       SIO21_bit;
    };
    unsigned char :8;
  };
} @ 0xFFF4A;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char IICA0;
  __BITS8       IICA0_bit;
} @ 0xFFF50;

__sfr __no_init volatile const union
{
  unsigned char IICS0;
  __BITS8       IICS0_bit;
  struct
  {
    unsigned char  SPD0:1;
    unsigned char  STD0:1;
    unsigned char  ACKD0:1;
    unsigned char  TRC0:1;
    unsigned char  COI0:1;
    unsigned char  EXC0:1;
    unsigned char  ALD0:1;
    unsigned char  MSTS0:1;
  };
} @ 0xFFF51;

__sfr __no_init volatile union
{
  unsigned char IICF0;
  __BITS8       IICF0_bit;
  struct
  {
    unsigned char  IICRSV0:1;
    unsigned char  STCEN0:1;
    unsigned char  :4;
    unsigned char  IICBSY0:1;
    unsigned char  STCF0:1;
  };
} @ 0xFFF52;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR02;
  __BITS16       TDR02_bit;
} @ 0xFFF64;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR03;
  __BITS16       TDR03_bit;
  struct
  {
    union
    {
      unsigned char TDR03L;
      __BITS8       TDR03L_bit;
    };
    union
    {
      unsigned char TDR03H;
      __BITS8       TDR03H_bit;
    };
  };
} @ 0xFFF66;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR04;
  __BITS16       TDR04_bit;
} @ 0xFFF68;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR05;
  __BITS16       TDR05_bit;
} @ 0xFFF6A;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR06;
  __BITS16       TDR06_bit;
} @ 0xFFF6C;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short TDR07;
  __BITS16       TDR07_bit;
} @ 0xFFF6E;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short ITMC;
  __BITS16       ITMC_bit;
} @ 0xFFF90;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char SEC;
  __BITS8       SEC_bit;
} @ 0xFFF92;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char MIN;
  __BITS8       MIN_bit;
} @ 0xFFF93;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char HOUR;
  __BITS8       HOUR_bit;
} @ 0xFFF94;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char WEEK;
  __BITS8       WEEK_bit;
} @ 0xFFF95;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char DAY;
  __BITS8       DAY_bit;
} @ 0xFFF96;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char MONTH;
  __BITS8       MONTH_bit;
} @ 0xFFF97;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char YEAR;
  __BITS8       YEAR_bit;
} @ 0xFFF98;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char SUBCUD;
  __BITS8       SUBCUD_bit;
} @ 0xFFF99;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char ALARMWM;
  __BITS8       ALARMWM_bit;
} @ 0xFFF9A;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char ALARMWH;
  __BITS8       ALARMWH_bit;
} @ 0xFFF9B;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char ALARMWW;
  __BITS8       ALARMWW_bit;
} @ 0xFFF9C;

__sfr __no_init volatile union
{
  unsigned char RTCC0;
  __BITS8       RTCC0_bit;
  struct
  {
    unsigned char  :5;
    unsigned char  RCLOE1:1;
    unsigned char  :1;
    unsigned char  RTCE:1;
  };
} @ 0xFFF9D;

__sfr __no_init volatile union
{
  unsigned char RTCC1;
  __BITS8       RTCC1_bit;
  struct
  {
    unsigned char  RWAIT:1;
    unsigned char  RWST:1;
    unsigned char  :1;
    unsigned char  RIFG:1;
    unsigned char  WAFG:1;
    unsigned char  :1;
    unsigned char  WALIE:1;
    unsigned char  WALE:1;
  };
} @ 0xFFF9E;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char CMC;
  __BITS8       CMC_bit;
} @ 0xFFFA0;

__sfr __no_init volatile union
{
  unsigned char CSC;
  __BITS8       CSC_bit;
  struct
  {
    unsigned char  HIOSTOP:1;
    unsigned char  :5;
    unsigned char  XTSTOP:1;
    unsigned char  MSTOP:1;
  };
} @ 0xFFFA1;

__sfr __no_init volatile const union
{
  unsigned char OSTC;
  __BITS8       OSTC_bit;
} @ 0xFFFA2;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char OSTS;
  __BITS8       OSTS_bit;
} @ 0xFFFA3;

__sfr __no_init volatile union
{
  unsigned char CKC;
  __BITS8       CKC_bit;
  struct
  {
    unsigned char  :3;
    unsigned char  SDIV:1;
    unsigned char  MCM0:1;
    unsigned char  MCS:1;
    unsigned char  CSS:1;
    unsigned char  CLS:1;
  };
} @ 0xFFFA4;

__sfr __no_init volatile union
{
  unsigned char CKS0;
  __BITS8       CKS0_bit;
  struct
  {
    unsigned char  :7;
    unsigned char  PCLOE0:1;
  };
} @ 0xFFFA5;

__sfr __no_init volatile union
{
  unsigned char CKS1;
  __BITS8       CKS1_bit;
  struct
  {
    unsigned char  :7;
    unsigned char  PCLOE1:1;
  };
} @ 0xFFFA6;

__sfr __no_bit_access __no_init volatile const union
{
  unsigned char RESF;
  __BITS8       RESF_bit;
} @ 0xFFFA8;

__sfr __no_init volatile union
{
  unsigned char LVIM;
  __BITS8       LVIM_bit;
  struct
  {
    unsigned char  LVIF:1;
    unsigned char  LVIOMSK:1;
    unsigned char  :5;
    unsigned char  LVISEN:1;
  };
} @ 0xFFFA9;

__sfr __no_init volatile union
{
  unsigned char LVIS;
  __BITS8       LVIS_bit;
  struct
  {
    unsigned char  LVILV:1;
    unsigned char  :6;
    unsigned char  LVIMD:1;
  };
} @ 0xFFFAA;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char WDTE;
  __BITS8       WDTE_bit;
} @ 0xFFFAB;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char CRCIN;
  __BITS8       CRCIN_bit;
} @ 0xFFFAC;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char DSA0;
  __BITS8       DSA0_bit;
} @ 0xFFFB0;

__sfr __no_bit_access __no_init volatile union
{
  unsigned char DSA1;
  __BITS8       DSA1_bit;
} @ 0xFFFB1;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short DRA0;
  __BITS16       DRA0_bit;
  struct
  {
    union
    {
      unsigned char DRA0L;
      __BITS8       DRA0L_bit;
    };
    union
    {
      unsigned char DRA0H;
      __BITS8       DRA0H_bit;
    };
  };
} @ 0xFFFB2;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short DRA1;
  __BITS16       DRA1_bit;
  struct
  {
    union
    {
      unsigned char DRA1L;
      __BITS8       DRA1L_bit;
    };
    union
    {
      unsigned char DRA1H;
      __BITS8       DRA1H_bit;
    };
  };
} @ 0xFFFB4;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short DBC0;
  __BITS16       DBC0_bit;
  struct
  {
    union
    {
      unsigned char DBC0L;
      __BITS8       DBC0L_bit;
    };
    union
    {
      unsigned char DBC0H;
      __BITS8       DBC0H_bit;
    };
  };
} @ 0xFFFB6;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short DBC1;
  __BITS16       DBC1_bit;
  struct
  {
    union
    {
      unsigned char DBC1L;
      __BITS8       DBC1L_bit;
    };
    union
    {
      unsigned char DBC1H;
      __BITS8       DBC1H_bit;
    };
  };
} @ 0xFFFB8;

__sfr __no_init volatile union
{
  unsigned char DMC0;
  __BITS8       DMC0_bit;
  struct
  {
    unsigned char  :4;
    unsigned char  DWAIT0:1;
    unsigned char  DS0:1;
    unsigned char  DRS0:1;
    unsigned char  STG0:1;
  };
} @ 0xFFFBA;

__sfr __no_init volatile union
{
  unsigned char DMC1;
  __BITS8       DMC1_bit;
  struct
  {
    unsigned char  :4;
    unsigned char  DWAIT1:1;
    unsigned char  DS1:1;
    unsigned char  DRS1:1;
    unsigned char  STG1:1;
  };
} @ 0xFFFBB;

__sfr __no_init volatile union
{
  unsigned char DRC0;
  __BITS8       DRC0_bit;
  struct
  {
    unsigned char  DST0:1;
    unsigned char  :6;
    unsigned char  DEN0:1;
  };
} @ 0xFFFBC;

__sfr __no_init volatile union
{
  unsigned char DRC1;
  __BITS8       DRC1_bit;
  struct
  {
    unsigned char  DST1:1;
    unsigned char  :6;
    unsigned char  DEN1:1;
  };
} @ 0xFFFBD;

__sfr __no_init volatile union
{
  unsigned short IF2;
  __BITS16       IF2_bit;
  struct
  {
    union
    {
      unsigned char IF2L;
      __BITS8       IF2L_bit;
      struct
      {
        unsigned char  TMIF05:1;
        unsigned char  TMIF06:1;
        unsigned char  TMIF07:1;
        unsigned char  PIF6:1;
        unsigned char  PIF7:1;
        unsigned char  PIF8:1;
        unsigned char  PIF9:1;
        unsigned char  PIF10:1;
      };
    };
    union
    {
      unsigned char IF2H;
      __BITS8       IF2H_bit;
      struct
      {
        unsigned char  PIF11:1;
        unsigned char  :4;
        unsigned char  MDIF:1;
        unsigned char  :1;
        unsigned char  FLIF:1;
      };
    };
  };
} @ 0xFFFD0;

__sfr __no_init volatile union
{
  unsigned short MK2;
  __BITS16       MK2_bit;
  struct
  {
    union
    {
      unsigned char MK2L;
      __BITS8       MK2L_bit;
      struct
      {
        unsigned char  TMMK05:1;
        unsigned char  TMMK06:1;
        unsigned char  TMMK07:1;
        unsigned char  PMK6:1;
        unsigned char  PMK7:1;
        unsigned char  PMK8:1;
        unsigned char  PMK9:1;
        unsigned char  PMK10:1;
      };
    };
    union
    {
      unsigned char MK2H;
      __BITS8       MK2H_bit;
      struct
      {
        unsigned char  PMK11:1;
        unsigned char  :4;
        unsigned char  MDMK:1;
        unsigned char  :1;
        unsigned char  FLMK:1;
      };
    };
  };
} @ 0xFFFD4;

__sfr __no_init volatile union
{
  unsigned short PR02;
  __BITS16       PR02_bit;
  struct
  {
    union
    {
      unsigned char PR02L;
      __BITS8       PR02L_bit;
      struct
      {
        unsigned char  TMPR005:1;
        unsigned char  TMPR006:1;
        unsigned char  TMPR007:1;
        unsigned char  PPR06:1;
        unsigned char  PPR07:1;
        unsigned char  PPR08:1;
        unsigned char  PPR09:1;
        unsigned char  PPR010:1;
      };
    };
    union
    {
      unsigned char PR02H;
      __BITS8       PR02H_bit;
      struct
      {
        unsigned char  PPR011:1;
        unsigned char  :4;
        unsigned char  MDPR0:1;
        unsigned char  :1;
        unsigned char  FLPR0:1;
      };
    };
  };
} @ 0xFFFD8;

__sfr __no_init volatile union
{
  unsigned short PR12;
  __BITS16       PR12_bit;
  struct
  {
    union
    {
      unsigned char PR12L;
      __BITS8       PR12L_bit;
      struct
      {
        unsigned char  TMPR105:1;
        unsigned char  TMPR106:1;
        unsigned char  TMPR107:1;
        unsigned char  PPR16:1;
        unsigned char  PPR17:1;
        unsigned char  PPR18:1;
        unsigned char  PPR19:1;
        unsigned char  PPR110:1;
      };
    };
    union
    {
      unsigned char PR12H;
      __BITS8       PR12H_bit;
      struct
      {
        unsigned char  PPR111:1;
        unsigned char  :4;
        unsigned char  MDPR1:1;
        unsigned char  :1;
        unsigned char  FLPR1:1;
      };
    };
  };
} @ 0xFFFDC;

__sfr __no_init volatile union
{
  unsigned short IF0;
  __BITS16       IF0_bit;
  struct
  {
    union
    {
      unsigned char IF0L;
      __BITS8       IF0L_bit;
      struct
      {
        unsigned char  WDTIIF:1;
        unsigned char  LVIIF:1;
        unsigned char  PIF0:1;
        unsigned char  PIF1:1;
        unsigned char  PIF2:1;
        unsigned char  PIF3:1;
        unsigned char  PIF4:1;
        unsigned char  PIF5:1;
      };
    };
    union
    {
      unsigned char IF0H;
      __BITS8       IF0H_bit;
      struct
      {
        unsigned char  CSIIF20:1;
        unsigned char  CSIIF21:1;
        unsigned char  SREIF2:1;
        unsigned char  DMAIF0:1;
        unsigned char  DMAIF1:1;
        unsigned char  CSIIF00:1;
        unsigned char  CSIIF01:1;
        unsigned char  SREIF0:1;
      };
      struct
      {
        unsigned char  IICIF20:1;
        unsigned char  IICIF21:1;
        unsigned char  :3;
        unsigned char  IICIF00:1;
        unsigned char  IICIF01:1;
        unsigned char  TMIF01H:1;
      };
      struct
      {
        unsigned char  STIF2:1;
        unsigned char  SRIF2:1;
        unsigned char  :3;
        unsigned char  STIF0:1;
        unsigned char  SRIF0:1;
        unsigned char  :1;
      };
    };
  };
} @ 0xFFFE0;

__sfr __no_init volatile union
{
  unsigned short IF1;
  __BITS16       IF1_bit;
  struct
  {
    union
    {
      unsigned char IF1L;
      __BITS8       IF1L_bit;
      struct
      {
        unsigned char  CSIIF10:1;
        unsigned char  CSIIF11:1;
        unsigned char  SREIF1:1;
        unsigned char  IICAIF0:1;
        unsigned char  TMIF00:1;
        unsigned char  TMIF01:1;
        unsigned char  TMIF02:1;
        unsigned char  TMIF03:1;
      };
      struct
      {
        unsigned char  IICIF10:1;
        unsigned char  IICIF11:1;
        unsigned char  TMIF03H:1;
        unsigned char  :5;
      };
      struct
      {
        unsigned char  STIF1:1;
        unsigned char  SRIF1:1;
        unsigned char  :6;
      };
    };
    union
    {
      unsigned char IF1H;
      __BITS8       IF1H_bit;
      struct
      {
        unsigned char  ADIF:1;
        unsigned char  RTCIF:1;
        unsigned char  ITIF:1;
        unsigned char  KRIF:1;
        unsigned char  :3;
        unsigned char  TMIF04:1;
      };
    };
  };
} @ 0xFFFE2;

__sfr __no_init volatile union
{
  unsigned short MK0;
  __BITS16       MK0_bit;
  struct
  {
    union
    {
      unsigned char MK0L;
      __BITS8       MK0L_bit;
      struct
      {
        unsigned char  WDTIMK:1;
        unsigned char  LVIMK:1;
        unsigned char  PMK0:1;
        unsigned char  PMK1:1;
        unsigned char  PMK2:1;
        unsigned char  PMK3:1;
        unsigned char  PMK4:1;
        unsigned char  PMK5:1;
      };
    };
    union
    {
      unsigned char MK0H;
      __BITS8       MK0H_bit;
      struct
      {
        unsigned char  CSIMK20:1;
        unsigned char  CSIMK21:1;
        unsigned char  SREMK2:1;
        unsigned char  DMAMK0:1;
        unsigned char  DMAMK1:1;
        unsigned char  CSIMK00:1;
        unsigned char  CSIMK01:1;
        unsigned char  SREMK0:1;
      };
      struct
      {
        unsigned char  IICMK20:1;
        unsigned char  IICMK21:1;
        unsigned char  :3;
        unsigned char  IICMK00:1;
        unsigned char  IICMK01:1;
        unsigned char  TMMK01H:1;
      };
      struct
      {
        unsigned char  STMK2:1;
        unsigned char  SRMK2:1;
        unsigned char  :3;
        unsigned char  STMK0:1;
        unsigned char  SRMK0:1;
        unsigned char  :1;
      };
    };
  };
} @ 0xFFFE4;

__sfr __no_init volatile union
{
  unsigned short MK1;
  __BITS16       MK1_bit;
  struct
  {
    union
    {
      unsigned char MK1L;
      __BITS8       MK1L_bit;
      struct
      {
        unsigned char  CSIMK10:1;
        unsigned char  CSIMK11:1;
        unsigned char  SREMK1:1;
        unsigned char  IICAMK0:1;
        unsigned char  TMMK00:1;
        unsigned char  TMMK01:1;
        unsigned char  TMMK02:1;
        unsigned char  TMMK03:1;
      };
      struct
      {
        unsigned char  IICMK10:1;
        unsigned char  IICMK11:1;
        unsigned char  TMMK03H:1;
        unsigned char  :5;
      };
      struct
      {
        unsigned char  STMK1:1;
        unsigned char  SRMK1:1;
        unsigned char  :6;
      };
    };
    union
    {
      unsigned char MK1H;
      __BITS8       MK1H_bit;
      struct
      {
        unsigned char  ADMK:1;
        unsigned char  RTCMK:1;
        unsigned char  ITMK:1;
        unsigned char  KRMK:1;
        unsigned char  :3;
        unsigned char  TMMK04:1;
      };
    };
  };
} @ 0xFFFE6;

__sfr __no_init volatile union
{
  unsigned short PR00;
  __BITS16       PR00_bit;
  struct
  {
    union
    {
      unsigned char PR00L;
      __BITS8       PR00L_bit;
      struct
      {
        unsigned char  WDTIPR0:1;
        unsigned char  LVIPR0:1;
        unsigned char  PPR00:1;
        unsigned char  PPR01:1;
        unsigned char  PPR02:1;
        unsigned char  PPR03:1;
        unsigned char  PPR04:1;
        unsigned char  PPR05:1;
      };
    };
    union
    {
      unsigned char PR00H;
      __BITS8       PR00H_bit;
      struct
      {
        unsigned char  CSIPR020:1;
        unsigned char  CSIPR021:1;
        unsigned char  SREPR02:1;
        unsigned char  DMAPR00:1;
        unsigned char  DMAPR01:1;
        unsigned char  CSIPR000:1;
        unsigned char  CSIPR001:1;
        unsigned char  SREPR00:1;
      };
      struct
      {
        unsigned char  IICPR020:1;
        unsigned char  IICPR021:1;
        unsigned char  :3;
        unsigned char  IICPR000:1;
        unsigned char  IICPR001:1;
        unsigned char  TMPR001H:1;
      };
      struct
      {
        unsigned char  STPR02:1;
        unsigned char  SRPR02:1;
        unsigned char  :3;
        unsigned char  STPR00:1;
        unsigned char  SRPR00:1;
        unsigned char  :1;
      };
    };
  };
} @ 0xFFFE8;

__sfr __no_init volatile union
{
  unsigned short PR01;
  __BITS16       PR01_bit;
  struct
  {
    union
    {
      unsigned char PR01L;
      __BITS8       PR01L_bit;
      struct
      {
        unsigned char  CSIPR010:1;
        unsigned char  CSIPR011:1;
        unsigned char  SREPR01:1;
        unsigned char  IICAPR00:1;
        unsigned char  TMPR000:1;
        unsigned char  TMPR001:1;
        unsigned char  TMPR002:1;
        unsigned char  TMPR003:1;
      };
      struct
      {
        unsigned char  IICPR010:1;
        unsigned char  IICPR011:1;
        unsigned char  TMPR003H:1;
        unsigned char  :5;
      };
      struct
      {
        unsigned char  STPR01:1;
        unsigned char  SRPR01:1;
        unsigned char  :6;
      };
    };
    union
    {
      unsigned char PR01H;
      __BITS8       PR01H_bit;
      struct
      {
        unsigned char  ADPR0:1;
        unsigned char  RTCPR0:1;
        unsigned char  ITPR0:1;
        unsigned char  KRPR0:1;
        unsigned char  :3;
        unsigned char  TMPR004:1;
      };
    };
  };
} @ 0xFFFEA;

__sfr __no_init volatile union
{
  unsigned short PR10;
  __BITS16       PR10_bit;
  struct
  {
    union
    {
      unsigned char PR10L;
      __BITS8       PR10L_bit;
      struct
      {
        unsigned char  WDTIPR1:1;
        unsigned char  LVIPR1:1;
        unsigned char  PPR10:1;
        unsigned char  PPR11:1;
        unsigned char  PPR12:1;
        unsigned char  PPR13:1;
        unsigned char  PPR14:1;
        unsigned char  PPR15:1;
      };
    };
    union
    {
      unsigned char PR10H;
      __BITS8       PR10H_bit;
      struct
      {
        unsigned char  CSIPR120:1;
        unsigned char  CSIPR121:1;
        unsigned char  SREPR12:1;
        unsigned char  DMAPR10:1;
        unsigned char  DMAPR11:1;
        unsigned char  CSIPR100:1;
        unsigned char  CSIPR101:1;
        unsigned char  SREPR10:1;
      };
      struct
      {
        unsigned char  IICPR120:1;
        unsigned char  IICPR121:1;
        unsigned char  :3;
        unsigned char  IICPR100:1;
        unsigned char  IICPR101:1;
        unsigned char  TMPR101H:1;
      };
      struct
      {
        unsigned char  STPR12:1;
        unsigned char  SRPR12:1;
        unsigned char  :3;
        unsigned char  STPR10:1;
        unsigned char  SRPR10:1;
        unsigned char  :1;
      };
    };
  };
} @ 0xFFFEC;

__sfr __no_init volatile union
{
  unsigned short PR11;
  __BITS16       PR11_bit;
  struct
  {
    union
    {
      unsigned char PR11L;
      __BITS8       PR11L_bit;
      struct
      {
        unsigned char  CSIPR110:1;
        unsigned char  CSIPR111:1;
        unsigned char  SREPR11:1;
        unsigned char  IICAPR10:1;
        unsigned char  TMPR100:1;
        unsigned char  TMPR101:1;
        unsigned char  TMPR102:1;
        unsigned char  TMPR103:1;
      };
      struct
      {
        unsigned char  IICPR110:1;
        unsigned char  IICPR111:1;
        unsigned char  TMPR103H:1;
        unsigned char  :5;
      };
      struct
      {
        unsigned char  STPR11:1;
        unsigned char  SRPR11:1;
        unsigned char  :6;
      };
    };
    union
    {
      unsigned char PR11H;
      __BITS8       PR11H_bit;
      struct
      {
        unsigned char  ADPR1:1;
        unsigned char  RTCPR1:1;
        unsigned char  ITPR1:1;
        unsigned char  KRPR1:1;
        unsigned char  :3;
        unsigned char  TMPR104:1;
      };
    };
  };
} @ 0xFFFEE;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short MDAL;
  __BITS16       MDAL_bit;
  unsigned short MULA;
  __BITS16       MULA_bit;
} @ 0xFFFF0;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short MDAH;
  __BITS16       MDAH_bit;
  unsigned short MULB;
  __BITS16       MULB_bit;
} @ 0xFFFF2;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short MDBH;
  __BITS16       MDBH_bit;
  unsigned short MULOH;
  __BITS16       MULOH_bit;
} @ 0xFFFF4;

__sfr __no_bit_access __no_init volatile union
{
  unsigned short MDBL;
  __BITS16       MDBL_bit;
  unsigned short MULOL;
  __BITS16       MULOL_bit;
} @ 0xFFFF6;

__sfr __no_init volatile union
{
  unsigned char PMC;
  __BITS8       PMC_bit;
  struct
  {
    unsigned char  MAA:1;
    unsigned char  :7;
  };
} @ 0xFFFFE;


#pragma language=restore

#endif /* __IAR_SYSTEMS_ICC__ */

#ifdef __IAR_SYSTEMS_ASM__

/*----------------------------------------------
 *       SFR declarations
 *--------------------------------------------*/

P0         DEFINE  0xFFF00
P1         DEFINE  0xFFF01
P2         DEFINE  0xFFF02
P3         DEFINE  0xFFF03
P4         DEFINE  0xFFF04
P5         DEFINE  0xFFF05
P6         DEFINE  0xFFF06
P7         DEFINE  0xFFF07
P12        DEFINE  0xFFF0C
P13        DEFINE  0xFFF0D
P14        DEFINE  0xFFF0E
SDR00      DEFINE  0xFFF10
SIO00      DEFINE  0xFFF10
TXD0       DEFINE  0xFFF10
SDR01      DEFINE  0xFFF12
RXD0       DEFINE  0xFFF12
SIO01      DEFINE  0xFFF12
TDR00      DEFINE  0xFFF18
TDR01      DEFINE  0xFFF1A
TDR01L     DEFINE  0xFFF1A
TDR01H     DEFINE  0xFFF1B
ADCR       DEFINE  0xFFF1E
ADCRH      DEFINE  0xFFF1F
PM0        DEFINE  0xFFF20
PM1        DEFINE  0xFFF21
PM2        DEFINE  0xFFF22
PM3        DEFINE  0xFFF23
PM4        DEFINE  0xFFF24
PM5        DEFINE  0xFFF25
PM6        DEFINE  0xFFF26
PM7        DEFINE  0xFFF27
PM12       DEFINE  0xFFF2C
PM14       DEFINE  0xFFF2E
ADM0       DEFINE  0xFFF30
ADS        DEFINE  0xFFF31
ADM1       DEFINE  0xFFF32
KRM        DEFINE  0xFFF37
EGP0       DEFINE  0xFFF38
EGN0       DEFINE  0xFFF39
EGP1       DEFINE  0xFFF3A
EGN1       DEFINE  0xFFF3B
SDR02      DEFINE  0xFFF44
SIO10      DEFINE  0xFFF44
TXD1       DEFINE  0xFFF44
SDR03      DEFINE  0xFFF46
RXD1       DEFINE  0xFFF46
SIO11      DEFINE  0xFFF46
SDR10      DEFINE  0xFFF48
SIO20      DEFINE  0xFFF48
TXD2       DEFINE  0xFFF48
SDR11      DEFINE  0xFFF4A
RXD2       DEFINE  0xFFF4A
SIO21      DEFINE  0xFFF4A
IICA0      DEFINE  0xFFF50
IICS0      DEFINE  0xFFF51
IICF0      DEFINE  0xFFF52
TDR02      DEFINE  0xFFF64
TDR03      DEFINE  0xFFF66
TDR03L     DEFINE  0xFFF66
TDR03H     DEFINE  0xFFF67
TDR04      DEFINE  0xFFF68
TDR05      DEFINE  0xFFF6A
TDR06      DEFINE  0xFFF6C
TDR07      DEFINE  0xFFF6E
ITMC       DEFINE  0xFFF90
SEC        DEFINE  0xFFF92
MIN        DEFINE  0xFFF93
HOUR       DEFINE  0xFFF94
WEEK       DEFINE  0xFFF95
DAY        DEFINE  0xFFF96
MONTH      DEFINE  0xFFF97
YEAR       DEFINE  0xFFF98
SUBCUD     DEFINE  0xFFF99
ALARMWM    DEFINE  0xFFF9A
ALARMWH    DEFINE  0xFFF9B
ALARMWW    DEFINE  0xFFF9C
RTCC0      DEFINE  0xFFF9D
RTCC1      DEFINE  0xFFF9E
CMC        DEFINE  0xFFFA0
CSC        DEFINE  0xFFFA1
OSTC       DEFINE  0xFFFA2
OSTS       DEFINE  0xFFFA3
CKC        DEFINE  0xFFFA4
CKS0       DEFINE  0xFFFA5
CKS1       DEFINE  0xFFFA6
RESF       DEFINE  0xFFFA8
LVIM       DEFINE  0xFFFA9
LVIS       DEFINE  0xFFFAA
WDTE       DEFINE  0xFFFAB
CRCIN      DEFINE  0xFFFAC
DSA0       DEFINE  0xFFFB0
DSA1       DEFINE  0xFFFB1
DRA0       DEFINE  0xFFFB2
DRA0L      DEFINE  0xFFFB2
DRA0H      DEFINE  0xFFFB3
DRA1       DEFINE  0xFFFB4
DRA1L      DEFINE  0xFFFB4
DRA1H      DEFINE  0xFFFB5
DBC0       DEFINE  0xFFFB6
DBC0L      DEFINE  0xFFFB6
DBC0H      DEFINE  0xFFFB7
DBC1       DEFINE  0xFFFB8
DBC1L      DEFINE  0xFFFB8
DBC1H      DEFINE  0xFFFB9
DMC0       DEFINE  0xFFFBA
DMC1       DEFINE  0xFFFBB
DRC0       DEFINE  0xFFFBC
DRC1       DEFINE  0xFFFBD
IF2        DEFINE  0xFFFD0
IF2L       DEFINE  0xFFFD0
IF2H       DEFINE  0xFFFD1
MK2        DEFINE  0xFFFD4
MK2L       DEFINE  0xFFFD4
MK2H       DEFINE  0xFFFD5
PR02       DEFINE  0xFFFD8
PR02L      DEFINE  0xFFFD8
PR02H      DEFINE  0xFFFD9
PR12       DEFINE  0xFFFDC
PR12L      DEFINE  0xFFFDC
PR12H      DEFINE  0xFFFDD
IF0        DEFINE  0xFFFE0
IF0L       DEFINE  0xFFFE0
IF0H       DEFINE  0xFFFE1
IF1        DEFINE  0xFFFE2
IF1L       DEFINE  0xFFFE2
IF1H       DEFINE  0xFFFE3
MK0        DEFINE  0xFFFE4
MK0L       DEFINE  0xFFFE4
MK0H       DEFINE  0xFFFE5
MK1        DEFINE  0xFFFE6
MK1L       DEFINE  0xFFFE6
MK1H       DEFINE  0xFFFE7
PR00       DEFINE  0xFFFE8
PR00L      DEFINE  0xFFFE8
PR00H      DEFINE  0xFFFE9
PR01       DEFINE  0xFFFEA
PR01L      DEFINE  0xFFFEA
PR01H      DEFINE  0xFFFEB
PR10       DEFINE  0xFFFEC
PR10L      DEFINE  0xFFFEC
PR10H      DEFINE  0xFFFED
PR11       DEFINE  0xFFFEE
PR11L      DEFINE  0xFFFEE
PR11H      DEFINE  0xFFFEF
MDAL       DEFINE  0xFFFF0
MULA       DEFINE  0xFFFF0
MDAH       DEFINE  0xFFFF2
MULB       DEFINE  0xFFFF2
MDBH       DEFINE  0xFFFF4
MULOH      DEFINE  0xFFFF4
MDBL       DEFINE  0xFFFF6
MULOL      DEFINE  0xFFFF6
PMC        DEFINE  0xFFFFE

#endif /* __IAR_SYSTEMS_ASM__ */

/*----------------------------------------------
 *       Interrupt vector addresses
 *--------------------------------------------*/

#define RST_vect                 (0x00)
#define INTDBG_vect              (0x02)
#define INTWDTI_vect             (0x04)
#define INTLVI_vect              (0x06)
#define INTP0_vect               (0x08)
#define INTP1_vect               (0x0A)
#define INTP2_vect               (0x0C)
#define INTP3_vect               (0x0E)
#define INTP4_vect               (0x10)
#define INTP5_vect               (0x12)
#define INTCSI20_vect            (0x14)
#define INTIIC20_vect            (0x14)
#define INTST2_vect              (0x14)
#define INTCSI21_vect            (0x16)
#define INTIIC21_vect            (0x16)
#define INTSR2_vect              (0x16)
#define INTSRE2_vect             (0x18)
#define INTDMA0_vect             (0x1A)
#define INTDMA1_vect             (0x1C)
#define INTCSI00_vect            (0x1E)
#define INTIIC00_vect            (0x1E)
#define INTST0_vect              (0x1E)
#define INTCSI01_vect            (0x20)
#define INTIIC01_vect            (0x20)
#define INTSR0_vect              (0x20)
#define INTSRE0_vect             (0x22)
#define INTTM01H_vect            (0x22)
#define INTCSI10_vect            (0x24)
#define INTIIC10_vect            (0x24)
#define INTST1_vect              (0x24)
#define INTCSI11_vect            (0x26)
#define INTIIC11_vect            (0x26)
#define INTSR1_vect              (0x26)
#define INTSRE1_vect             (0x28)
#define INTTM03H_vect            (0x28)
#define INTIICA0_vect            (0x2A)
#define INTTM00_vect             (0x2C)
#define INTTM01_vect             (0x2E)
#define INTTM02_vect             (0x30)
#define INTTM03_vect             (0x32)
#define INTAD_vect               (0x34)
#define INTRTC_vect              (0x36)
#define INTIT_vect               (0x38)
#define INTKR_vect               (0x3A)
#define INTTM04_vect             (0x42)
#define INTTM05_vect             (0x44)
#define INTTM06_vect             (0x46)
#define INTTM07_vect             (0x48)
#define INTP6_vect               (0x4A)
#define INTP7_vect               (0x4C)
#define INTP8_vect               (0x4E)
#define INTP9_vect               (0x50)
#define INTP10_vect              (0x52)
#define INTP11_vect              (0x54)
#define INTMD_vect               (0x5E)
#define INTFL_vect               (0x62)
#define BRK_I_vect               (0x7E)

/*----------------------------------------------
 *       Callt vector addresses
 *--------------------------------------------*/

#define CALLT_80_vect            (0x80)
#define CALLT_82_vect            (0x82)
#define CALLT_84_vect            (0x84)
#define CALLT_86_vect            (0x86)
#define CALLT_88_vect            (0x88)
#define CALLT_8A_vect            (0x8A)
#define CALLT_8C_vect            (0x8C)
#define CALLT_8E_vect            (0x8E)
#define CALLT_90_vect            (0x90)
#define CALLT_92_vect            (0x92)
#define CALLT_94_vect            (0x94)
#define CALLT_96_vect            (0x96)
#define CALLT_98_vect            (0x98)
#define CALLT_9A_vect            (0x9A)
#define CALLT_9C_vect            (0x9C)
#define CALLT_9E_vect            (0x9E)
#define CALLT_A0_vect            (0xA0)
#define CALLT_A2_vect            (0xA2)
#define CALLT_A4_vect            (0xA4)
#define CALLT_A6_vect            (0xA6)
#define CALLT_A8_vect            (0xA8)
#define CALLT_AA_vect            (0xAA)
#define CALLT_AC_vect            (0xAC)
#define CALLT_AE_vect            (0xAE)
#define CALLT_B0_vect            (0xB0)
#define CALLT_B2_vect            (0xB2)
#define CALLT_B4_vect            (0xB4)
#define CALLT_B6_vect            (0xB6)
#define CALLT_B8_vect            (0xB8)
#define CALLT_BA_vect            (0xBA)
#define CALLT_BC_vect            (0xBC)
#define CALLT_BE_vect            (0xBE)

#endif /* __IOR5F100LG_H__ */
