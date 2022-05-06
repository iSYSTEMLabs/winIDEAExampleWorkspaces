/*-------------------------------------------------------------------------
 *      Declarations of extended SFR registers for RL78 microcontroller R5F100LG.
 *
 *      This file can be used by both the RL78,
 *      Assembler, ARL78, and the C/C++ compiler, ICCRL78.
 *
 *      This header file is generated from the device file:
 *          DR5F100LG.DVF
 *          Copyright(C) 2012 Renesas
 *          Format version V3.00, File version V1.14
 *-------------------------------------------------------------------------*/

#ifndef __IOR5F100LG_EXT_H__
#define __IOR5F100LG_EXT_H__

#if !defined(__IASMRL78__) && !defined(__ICCRL78__)
  #error "IOR5F100LG_EXT.H file for use with RL78 Assembler or Compiler only"
#endif

#if defined(__IASMRL78__)
  #if __CORE__ != __S2__
    #error "IOR5F100LG_EXT.H file for use with IASMRL78 option --core S2 only"
  #endif
#endif
#if defined(__ICCRL78__)
  #if __CORE__ != __S2__
    #error "IOR5F100LG_EXT.H file for use with ICCRL78 option --core S2 only"
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
 *       Extended SFR declarations
 *--------------------------------------------*/

__near __no_init volatile union
{
  unsigned char ADM2;
  __BITS8       ADM2_bit;
  struct
  {
    unsigned char  ADTYP:1;
    unsigned char  :1;
    unsigned char  AWC:1;
    unsigned char  ADRCK:1;
    unsigned char  :4;
  };
} @ 0xF0010;

__near __no_bit_access __no_init volatile union
{
  unsigned char ADUL;
  __BITS8       ADUL_bit;
} @ 0xF0011;

__near __no_bit_access __no_init volatile union
{
  unsigned char ADLL;
  __BITS8       ADLL_bit;
} @ 0xF0012;

__near __no_bit_access __no_init volatile union
{
  unsigned char ADTES;
  __BITS8       ADTES_bit;
} @ 0xF0013;

__near __no_init volatile union
{
  unsigned char PU0;
  __BITS8       PU0_bit;
} @ 0xF0030;

__near __no_init volatile union
{
  unsigned char PU1;
  __BITS8       PU1_bit;
} @ 0xF0031;

__near __no_init volatile union
{
  unsigned char PU3;
  __BITS8       PU3_bit;
} @ 0xF0033;

__near __no_init volatile union
{
  unsigned char PU4;
  __BITS8       PU4_bit;
} @ 0xF0034;

__near __no_init volatile union
{
  unsigned char PU5;
  __BITS8       PU5_bit;
} @ 0xF0035;

__near __no_init volatile union
{
  unsigned char PU7;
  __BITS8       PU7_bit;
} @ 0xF0037;

__near __no_init volatile union
{
  unsigned char PU12;
  __BITS8       PU12_bit;
} @ 0xF003C;

__near __no_init volatile union
{
  unsigned char PU14;
  __BITS8       PU14_bit;
} @ 0xF003E;

__near __no_init volatile union
{
  unsigned char PIM0;
  __BITS8       PIM0_bit;
} @ 0xF0040;

__near __no_init volatile union
{
  unsigned char PIM1;
  __BITS8       PIM1_bit;
} @ 0xF0041;

__near __no_init volatile union
{
  unsigned char PIM5;
  __BITS8       PIM5_bit;
} @ 0xF0045;

__near __no_init volatile union
{
  unsigned char POM0;
  __BITS8       POM0_bit;
} @ 0xF0050;

__near __no_init volatile union
{
  unsigned char POM1;
  __BITS8       POM1_bit;
} @ 0xF0051;

__near __no_init volatile union
{
  unsigned char POM5;
  __BITS8       POM5_bit;
} @ 0xF0055;

__near __no_init volatile union
{
  unsigned char POM7;
  __BITS8       POM7_bit;
} @ 0xF0057;

__near __no_init volatile union
{
  unsigned char PMC0;
  __BITS8       PMC0_bit;
} @ 0xF0060;

__near __no_init volatile union
{
  unsigned char PMC12;
  __BITS8       PMC12_bit;
} @ 0xF006C;

__near __no_init volatile union
{
  unsigned char PMC14;
  __BITS8       PMC14_bit;
} @ 0xF006E;

__near __no_init volatile union
{
  unsigned char NFEN0;
  __BITS8       NFEN0_bit;
} @ 0xF0070;

__near __no_init volatile union
{
  unsigned char NFEN1;
  __BITS8       NFEN1_bit;
} @ 0xF0071;

__near __no_init volatile union
{
  unsigned char ISC;
  __BITS8       ISC_bit;
} @ 0xF0073;

__near __no_bit_access __no_init volatile union
{
  unsigned char TIS0;
  __BITS8       TIS0_bit;
} @ 0xF0074;

__near __no_bit_access __no_init volatile union
{
  unsigned char ADPC;
  __BITS8       ADPC_bit;
} @ 0xF0076;

__near __no_bit_access __no_init volatile union
{
  unsigned char PIOR;
  __BITS8       PIOR_bit;
} @ 0xF0077;

__near __no_bit_access __no_init volatile union
{
  unsigned char IAWCTL;
  __BITS8       IAWCTL_bit;
} @ 0xF0078;

__near __no_init volatile union
{
  unsigned char GDIDIS;
  __BITS8       GDIDIS_bit;
} @ 0xF007D;

__near __no_init volatile union
{
  unsigned char DFLCTL;
  __BITS8       DFLCTL_bit;
  struct
  {
    unsigned char  DFLEN:1;
    unsigned char  :7;
  };
} @ 0xF0090;

__near __no_bit_access __no_init volatile union
{
  unsigned char HIOTRM;
  __BITS8       HIOTRM_bit;
} @ 0xF00A0;

__near __no_bit_access __no_init volatile union
{
  unsigned char HOCODIV;
  __BITS8       HOCODIV_bit;
} @ 0xF00A8;

__near __no_bit_access __no_init volatile const union
{
  unsigned char TEMPCAL0;
  __BITS8       TEMPCAL0_bit;
} @ 0xF00AC;

__near __no_bit_access __no_init volatile const union
{
  unsigned char TEMPCAL1;
  __BITS8       TEMPCAL1_bit;
} @ 0xF00AD;

__near __no_bit_access __no_init volatile const union
{
  unsigned char TEMPCAL2;
  __BITS8       TEMPCAL2_bit;
} @ 0xF00AE;

__near __no_bit_access __no_init volatile const union
{
  unsigned char TEMPCAL3;
  __BITS8       TEMPCAL3_bit;
} @ 0xF00AF;

__near __no_bit_access __no_init volatile union
{
  unsigned short MDCL;
  __BITS16       MDCL_bit;
} @ 0xF00E0;

__near __no_bit_access __no_init volatile union
{
  unsigned short MDCH;
  __BITS16       MDCH_bit;
} @ 0xF00E2;

__near __no_init volatile union
{
  unsigned char MDUC;
  __BITS8       MDUC_bit;
  struct
  {
    unsigned char  DIVST:1;
    unsigned char  MACSF:1;
    unsigned char  MACOF:1;
    unsigned char  MDSM:1;
    unsigned char  :2;
    unsigned char  MACMODE:1;
    unsigned char  DIVMODE:1;
  };
} @ 0xF00E8;

__near __no_init volatile union
{
  unsigned char PER0;
  __BITS8       PER0_bit;
  struct
  {
    unsigned char  TAU0EN:1;
    unsigned char  :1;
    unsigned char  SAU0EN:1;
    unsigned char  SAU1EN:1;
    unsigned char  IICA0EN:1;
    unsigned char  ADCEN:1;
    unsigned char  :1;
    unsigned char  RTCEN:1;
  };
} @ 0xF00F0;

__near __no_bit_access __no_init volatile union
{
  unsigned char OSMC;
  __BITS8       OSMC_bit;
} @ 0xF00F3;

__near __no_init volatile union
{
  unsigned char RMC;
  __BITS8       RMC_bit;
  struct
  {
    unsigned char  :7;
    unsigned char  WDVOL:1;
  };
} @ 0xF00F4;

__near __no_init volatile union
{
  unsigned char RPECTL;
  __BITS8       RPECTL_bit;
  struct
  {
    unsigned char  RPEF:1;
    unsigned char  :6;
    unsigned char  RPERDIS:1;
  };
} @ 0xF00F5;

__near __no_bit_access __no_init volatile const union
{
  unsigned char BCDADJ;
  __BITS8       BCDADJ_bit;
} @ 0xF00FE;

__near __no_bit_access __no_init volatile const union
{
  unsigned short SSR00;
  __BITS16       SSR00_bit;
  struct
  {
    union
    {
      unsigned char SSR00L;
      __BITS8       SSR00L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0100;

__near __no_bit_access __no_init volatile const union
{
  unsigned short SSR01;
  __BITS16       SSR01_bit;
  struct
  {
    union
    {
      unsigned char SSR01L;
      __BITS8       SSR01L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0102;

__near __no_bit_access __no_init volatile const union
{
  unsigned short SSR02;
  __BITS16       SSR02_bit;
  struct
  {
    union
    {
      unsigned char SSR02L;
      __BITS8       SSR02L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0104;

__near __no_bit_access __no_init volatile const union
{
  unsigned short SSR03;
  __BITS16       SSR03_bit;
  struct
  {
    union
    {
      unsigned char SSR03L;
      __BITS8       SSR03L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0106;

__near __no_bit_access __no_init volatile union
{
  unsigned short SIR00;
  __BITS16       SIR00_bit;
  struct
  {
    union
    {
      unsigned char SIR00L;
      __BITS8       SIR00L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0108;

__near __no_bit_access __no_init volatile union
{
  unsigned short SIR01;
  __BITS16       SIR01_bit;
  struct
  {
    union
    {
      unsigned char SIR01L;
      __BITS8       SIR01L_bit;
    };
    unsigned char :8;
  };
} @ 0xF010A;

__near __no_bit_access __no_init volatile union
{
  unsigned short SIR02;
  __BITS16       SIR02_bit;
  struct
  {
    union
    {
      unsigned char SIR02L;
      __BITS8       SIR02L_bit;
    };
    unsigned char :8;
  };
} @ 0xF010C;

__near __no_bit_access __no_init volatile union
{
  unsigned short SIR03;
  __BITS16       SIR03_bit;
  struct
  {
    union
    {
      unsigned char SIR03L;
      __BITS8       SIR03L_bit;
    };
    unsigned char :8;
  };
} @ 0xF010E;

__near __no_bit_access __no_init volatile union
{
  unsigned short SMR00;
  __BITS16       SMR00_bit;
} @ 0xF0110;

__near __no_bit_access __no_init volatile union
{
  unsigned short SMR01;
  __BITS16       SMR01_bit;
} @ 0xF0112;

__near __no_bit_access __no_init volatile union
{
  unsigned short SMR02;
  __BITS16       SMR02_bit;
} @ 0xF0114;

__near __no_bit_access __no_init volatile union
{
  unsigned short SMR03;
  __BITS16       SMR03_bit;
} @ 0xF0116;

__near __no_bit_access __no_init volatile union
{
  unsigned short SCR00;
  __BITS16       SCR00_bit;
} @ 0xF0118;

__near __no_bit_access __no_init volatile union
{
  unsigned short SCR01;
  __BITS16       SCR01_bit;
} @ 0xF011A;

__near __no_bit_access __no_init volatile union
{
  unsigned short SCR02;
  __BITS16       SCR02_bit;
} @ 0xF011C;

__near __no_bit_access __no_init volatile union
{
  unsigned short SCR03;
  __BITS16       SCR03_bit;
} @ 0xF011E;

__near __no_init volatile const union
{
  unsigned short SE0;
  __BITS16       SE0_bit;
  struct
  {
    union
    {
      unsigned char SE0L;
      __BITS8       SE0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0120;

__near __no_init volatile union
{
  unsigned short SS0;
  __BITS16       SS0_bit;
  struct
  {
    union
    {
      unsigned char SS0L;
      __BITS8       SS0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0122;

__near __no_init volatile union
{
  unsigned short ST0;
  __BITS16       ST0_bit;
  struct
  {
    union
    {
      unsigned char ST0L;
      __BITS8       ST0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0124;

__near __no_bit_access __no_init volatile union
{
  unsigned short SPS0;
  __BITS16       SPS0_bit;
  struct
  {
    union
    {
      unsigned char SPS0L;
      __BITS8       SPS0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0126;

__near __no_bit_access __no_init volatile union
{
  unsigned short SO0;
  __BITS16       SO0_bit;
} @ 0xF0128;

__near __no_init volatile union
{
  unsigned short SOE0;
  __BITS16       SOE0_bit;
  struct
  {
    union
    {
      unsigned char SOE0L;
      __BITS8       SOE0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF012A;

__near __no_bit_access __no_init volatile union
{
  unsigned short SOL0;
  __BITS16       SOL0_bit;
  struct
  {
    union
    {
      unsigned char SOL0L;
      __BITS8       SOL0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0134;

__near __no_bit_access __no_init volatile union
{
  unsigned short SSC0;
  __BITS16       SSC0_bit;
  struct
  {
    union
    {
      unsigned char SSC0L;
      __BITS8       SSC0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0138;

__near __no_bit_access __no_init volatile const union
{
  unsigned short SSR10;
  __BITS16       SSR10_bit;
  struct
  {
    union
    {
      unsigned char SSR10L;
      __BITS8       SSR10L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0140;

__near __no_bit_access __no_init volatile const union
{
  unsigned short SSR11;
  __BITS16       SSR11_bit;
  struct
  {
    union
    {
      unsigned char SSR11L;
      __BITS8       SSR11L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0142;

__near __no_bit_access __no_init volatile union
{
  unsigned short SIR10;
  __BITS16       SIR10_bit;
  struct
  {
    union
    {
      unsigned char SIR10L;
      __BITS8       SIR10L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0148;

__near __no_bit_access __no_init volatile union
{
  unsigned short SIR11;
  __BITS16       SIR11_bit;
  struct
  {
    union
    {
      unsigned char SIR11L;
      __BITS8       SIR11L_bit;
    };
    unsigned char :8;
  };
} @ 0xF014A;

__near __no_bit_access __no_init volatile union
{
  unsigned short SMR10;
  __BITS16       SMR10_bit;
} @ 0xF0150;

__near __no_bit_access __no_init volatile union
{
  unsigned short SMR11;
  __BITS16       SMR11_bit;
} @ 0xF0152;

__near __no_bit_access __no_init volatile union
{
  unsigned short SCR10;
  __BITS16       SCR10_bit;
} @ 0xF0158;

__near __no_bit_access __no_init volatile union
{
  unsigned short SCR11;
  __BITS16       SCR11_bit;
} @ 0xF015A;

__near __no_init volatile const union
{
  unsigned short SE1;
  __BITS16       SE1_bit;
  struct
  {
    union
    {
      unsigned char SE1L;
      __BITS8       SE1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0160;

__near __no_init volatile union
{
  unsigned short SS1;
  __BITS16       SS1_bit;
  struct
  {
    union
    {
      unsigned char SS1L;
      __BITS8       SS1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0162;

__near __no_init volatile union
{
  unsigned short ST1;
  __BITS16       ST1_bit;
  struct
  {
    union
    {
      unsigned char ST1L;
      __BITS8       ST1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0164;

__near __no_bit_access __no_init volatile union
{
  unsigned short SPS1;
  __BITS16       SPS1_bit;
  struct
  {
    union
    {
      unsigned char SPS1L;
      __BITS8       SPS1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0166;

__near __no_bit_access __no_init volatile union
{
  unsigned short SO1;
  __BITS16       SO1_bit;
} @ 0xF0168;

__near __no_init volatile union
{
  unsigned short SOE1;
  __BITS16       SOE1_bit;
  struct
  {
    union
    {
      unsigned char SOE1L;
      __BITS8       SOE1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF016A;

__near __no_bit_access __no_init volatile union
{
  unsigned short SOL1;
  __BITS16       SOL1_bit;
  struct
  {
    union
    {
      unsigned char SOL1L;
      __BITS8       SOL1L_bit;
    };
    unsigned char :8;
  };
} @ 0xF0174;

__near __no_bit_access __no_init volatile const union
{
  unsigned short TCR00;
  __BITS16       TCR00_bit;
} @ 0xF0180;

__near __no_bit_access __no_init volatile const union
{
  unsigned short TCR01;
  __BITS16       TCR01_bit;
} @ 0xF0182;

__near __no_bit_access __no_init volatile const union
{
  unsigned short TCR02;
  __BITS16       TCR02_bit;
} @ 0xF0184;

__near __no_bit_access __no_init volatile const union
{
  unsigned short TCR03;
  __BITS16       TCR03_bit;
} @ 0xF0186;

__near __no_bit_access __no_init volatile const union
{
  unsigned short TCR04;
  __BITS16       TCR04_bit;
} @ 0xF0188;

__near __no_bit_access __no_init volatile const union
{
  unsigned short TCR05;
  __BITS16       TCR05_bit;
} @ 0xF018A;

__near __no_bit_access __no_init volatile const union
{
  unsigned short TCR06;
  __BITS16       TCR06_bit;
} @ 0xF018C;

__near __no_bit_access __no_init volatile const union
{
  unsigned short TCR07;
  __BITS16       TCR07_bit;
} @ 0xF018E;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR00;
  __BITS16       TMR00_bit;
} @ 0xF0190;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR01;
  __BITS16       TMR01_bit;
} @ 0xF0192;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR02;
  __BITS16       TMR02_bit;
} @ 0xF0194;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR03;
  __BITS16       TMR03_bit;
} @ 0xF0196;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR04;
  __BITS16       TMR04_bit;
} @ 0xF0198;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR05;
  __BITS16       TMR05_bit;
} @ 0xF019A;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR06;
  __BITS16       TMR06_bit;
} @ 0xF019C;

__near __no_bit_access __no_init volatile union
{
  unsigned short TMR07;
  __BITS16       TMR07_bit;
} @ 0xF019E;

__near __no_bit_access __no_init volatile const union
{
  unsigned short TSR00;
  __BITS16       TSR00_bit;
  struct
  {
    union
    {
      unsigned char TSR00L;
      __BITS8       TSR00L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01A0;

__near __no_bit_access __no_init volatile const union
{
  unsigned short TSR01;
  __BITS16       TSR01_bit;
  struct
  {
    union
    {
      unsigned char TSR01L;
      __BITS8       TSR01L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01A2;

__near __no_bit_access __no_init volatile const union
{
  unsigned short TSR02;
  __BITS16       TSR02_bit;
  struct
  {
    union
    {
      unsigned char TSR02L;
      __BITS8       TSR02L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01A4;

__near __no_bit_access __no_init volatile const union
{
  unsigned short TSR03;
  __BITS16       TSR03_bit;
  struct
  {
    union
    {
      unsigned char TSR03L;
      __BITS8       TSR03L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01A6;

__near __no_bit_access __no_init volatile const union
{
  unsigned short TSR04;
  __BITS16       TSR04_bit;
  struct
  {
    union
    {
      unsigned char TSR04L;
      __BITS8       TSR04L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01A8;

__near __no_bit_access __no_init volatile const union
{
  unsigned short TSR05;
  __BITS16       TSR05_bit;
  struct
  {
    union
    {
      unsigned char TSR05L;
      __BITS8       TSR05L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01AA;

__near __no_bit_access __no_init volatile const union
{
  unsigned short TSR06;
  __BITS16       TSR06_bit;
  struct
  {
    union
    {
      unsigned char TSR06L;
      __BITS8       TSR06L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01AC;

__near __no_bit_access __no_init volatile const union
{
  unsigned short TSR07;
  __BITS16       TSR07_bit;
  struct
  {
    union
    {
      unsigned char TSR07L;
      __BITS8       TSR07L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01AE;

__near __no_init volatile const union
{
  unsigned short TE0;
  __BITS16       TE0_bit;
  struct
  {
    union
    {
      unsigned char TE0L;
      __BITS8       TE0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01B0;

__near __no_init volatile union
{
  unsigned short TS0;
  __BITS16       TS0_bit;
  struct
  {
    union
    {
      unsigned char TS0L;
      __BITS8       TS0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01B2;

__near __no_init volatile union
{
  unsigned short TT0;
  __BITS16       TT0_bit;
  struct
  {
    union
    {
      unsigned char TT0L;
      __BITS8       TT0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01B4;

__near __no_bit_access __no_init volatile union
{
  unsigned short TPS0;
  __BITS16       TPS0_bit;
} @ 0xF01B6;

__near __no_bit_access __no_init volatile union
{
  unsigned short TO0;
  __BITS16       TO0_bit;
  struct
  {
    union
    {
      unsigned char TO0L;
      __BITS8       TO0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01B8;

__near __no_init volatile union
{
  unsigned short TOE0;
  __BITS16       TOE0_bit;
  struct
  {
    union
    {
      unsigned char TOE0L;
      __BITS8       TOE0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01BA;

__near __no_bit_access __no_init volatile union
{
  unsigned short TOL0;
  __BITS16       TOL0_bit;
  struct
  {
    union
    {
      unsigned char TOL0L;
      __BITS8       TOL0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01BC;

__near __no_bit_access __no_init volatile union
{
  unsigned short TOM0;
  __BITS16       TOM0_bit;
  struct
  {
    union
    {
      unsigned char TOM0L;
      __BITS8       TOM0L_bit;
    };
    unsigned char :8;
  };
} @ 0xF01BE;

__near __no_init volatile union
{
  unsigned char IICCTL00;
  __BITS8       IICCTL00_bit;
  struct
  {
    unsigned char  SPT0:1;
    unsigned char  STT0:1;
    unsigned char  ACKE0:1;
    unsigned char  WTIM0:1;
    unsigned char  SPIE0:1;
    unsigned char  WREL0:1;
    unsigned char  LREL0:1;
    unsigned char  IICE0:1;
  };
} @ 0xF0230;

__near __no_init volatile union
{
  unsigned char IICCTL01;
  __BITS8       IICCTL01_bit;
  struct
  {
    unsigned char  PRS0:1;
    unsigned char  :1;
    unsigned char  DFC0:1;
    unsigned char  SMC0:1;
    unsigned char  DAD0:1;
    unsigned char  CLD0:1;
    unsigned char  :1;
    unsigned char  WUP0:1;
  };
} @ 0xF0231;

__near __no_bit_access __no_init volatile union
{
  unsigned char IICWL0;
  __BITS8       IICWL0_bit;
} @ 0xF0232;

__near __no_bit_access __no_init volatile union
{
  unsigned char IICWH0;
  __BITS8       IICWH0_bit;
} @ 0xF0233;

__near __no_bit_access __no_init volatile union
{
  unsigned char SVA0;
  __BITS8       SVA0_bit;
} @ 0xF0234;

__near __no_init volatile union
{
  unsigned char CRC0CTL;
  __BITS8       CRC0CTL_bit;
  struct
  {
    unsigned char  :7;
    unsigned char  CRC0EN:1;
  };
} @ 0xF02F0;

__near __no_bit_access __no_init volatile union
{
  unsigned short PGCRCL;
  __BITS16       PGCRCL_bit;
} @ 0xF02F2;

__near __no_bit_access __no_init volatile union
{
  unsigned short CRCD;
  __BITS16       CRCD_bit;
} @ 0xF02FA;


#pragma language=restore

#endif /* __IAR_SYSTEMS_ICC__ */

#ifdef __IAR_SYSTEMS_ASM__

/*----------------------------------------------
 *       Extended SFR declarations
 *--------------------------------------------*/

ADM2       DEFINE  0xF0010
ADUL       DEFINE  0xF0011
ADLL       DEFINE  0xF0012
ADTES      DEFINE  0xF0013
PU0        DEFINE  0xF0030
PU1        DEFINE  0xF0031
PU3        DEFINE  0xF0033
PU4        DEFINE  0xF0034
PU5        DEFINE  0xF0035
PU7        DEFINE  0xF0037
PU12       DEFINE  0xF003C
PU14       DEFINE  0xF003E
PIM0       DEFINE  0xF0040
PIM1       DEFINE  0xF0041
PIM5       DEFINE  0xF0045
POM0       DEFINE  0xF0050
POM1       DEFINE  0xF0051
POM5       DEFINE  0xF0055
POM7       DEFINE  0xF0057
PMC0       DEFINE  0xF0060
PMC12      DEFINE  0xF006C
PMC14      DEFINE  0xF006E
NFEN0      DEFINE  0xF0070
NFEN1      DEFINE  0xF0071
ISC        DEFINE  0xF0073
TIS0       DEFINE  0xF0074
ADPC       DEFINE  0xF0076
PIOR       DEFINE  0xF0077
IAWCTL     DEFINE  0xF0078
GDIDIS     DEFINE  0xF007D
DFLCTL     DEFINE  0xF0090
HIOTRM     DEFINE  0xF00A0
HOCODIV    DEFINE  0xF00A8
TEMPCAL0   DEFINE  0xF00AC
TEMPCAL1   DEFINE  0xF00AD
TEMPCAL2   DEFINE  0xF00AE
TEMPCAL3   DEFINE  0xF00AF
MDCL       DEFINE  0xF00E0
MDCH       DEFINE  0xF00E2
MDUC       DEFINE  0xF00E8
PER0       DEFINE  0xF00F0
OSMC       DEFINE  0xF00F3
RMC        DEFINE  0xF00F4
RPECTL     DEFINE  0xF00F5
BCDADJ     DEFINE  0xF00FE
SSR00      DEFINE  0xF0100
SSR00L     DEFINE  0xF0100
SSR01      DEFINE  0xF0102
SSR01L     DEFINE  0xF0102
SSR02      DEFINE  0xF0104
SSR02L     DEFINE  0xF0104
SSR03      DEFINE  0xF0106
SSR03L     DEFINE  0xF0106
SIR00      DEFINE  0xF0108
SIR00L     DEFINE  0xF0108
SIR01      DEFINE  0xF010A
SIR01L     DEFINE  0xF010A
SIR02      DEFINE  0xF010C
SIR02L     DEFINE  0xF010C
SIR03      DEFINE  0xF010E
SIR03L     DEFINE  0xF010E
SMR00      DEFINE  0xF0110
SMR01      DEFINE  0xF0112
SMR02      DEFINE  0xF0114
SMR03      DEFINE  0xF0116
SCR00      DEFINE  0xF0118
SCR01      DEFINE  0xF011A
SCR02      DEFINE  0xF011C
SCR03      DEFINE  0xF011E
SE0        DEFINE  0xF0120
SE0L       DEFINE  0xF0120
SS0        DEFINE  0xF0122
SS0L       DEFINE  0xF0122
ST0        DEFINE  0xF0124
ST0L       DEFINE  0xF0124
SPS0       DEFINE  0xF0126
SPS0L      DEFINE  0xF0126
SO0        DEFINE  0xF0128
SOE0       DEFINE  0xF012A
SOE0L      DEFINE  0xF012A
SOL0       DEFINE  0xF0134
SOL0L      DEFINE  0xF0134
SSC0       DEFINE  0xF0138
SSC0L      DEFINE  0xF0138
SSR10      DEFINE  0xF0140
SSR10L     DEFINE  0xF0140
SSR11      DEFINE  0xF0142
SSR11L     DEFINE  0xF0142
SIR10      DEFINE  0xF0148
SIR10L     DEFINE  0xF0148
SIR11      DEFINE  0xF014A
SIR11L     DEFINE  0xF014A
SMR10      DEFINE  0xF0150
SMR11      DEFINE  0xF0152
SCR10      DEFINE  0xF0158
SCR11      DEFINE  0xF015A
SE1        DEFINE  0xF0160
SE1L       DEFINE  0xF0160
SS1        DEFINE  0xF0162
SS1L       DEFINE  0xF0162
ST1        DEFINE  0xF0164
ST1L       DEFINE  0xF0164
SPS1       DEFINE  0xF0166
SPS1L      DEFINE  0xF0166
SO1        DEFINE  0xF0168
SOE1       DEFINE  0xF016A
SOE1L      DEFINE  0xF016A
SOL1       DEFINE  0xF0174
SOL1L      DEFINE  0xF0174
TCR00      DEFINE  0xF0180
TCR01      DEFINE  0xF0182
TCR02      DEFINE  0xF0184
TCR03      DEFINE  0xF0186
TCR04      DEFINE  0xF0188
TCR05      DEFINE  0xF018A
TCR06      DEFINE  0xF018C
TCR07      DEFINE  0xF018E
TMR00      DEFINE  0xF0190
TMR01      DEFINE  0xF0192
TMR02      DEFINE  0xF0194
TMR03      DEFINE  0xF0196
TMR04      DEFINE  0xF0198
TMR05      DEFINE  0xF019A
TMR06      DEFINE  0xF019C
TMR07      DEFINE  0xF019E
TSR00      DEFINE  0xF01A0
TSR00L     DEFINE  0xF01A0
TSR01      DEFINE  0xF01A2
TSR01L     DEFINE  0xF01A2
TSR02      DEFINE  0xF01A4
TSR02L     DEFINE  0xF01A4
TSR03      DEFINE  0xF01A6
TSR03L     DEFINE  0xF01A6
TSR04      DEFINE  0xF01A8
TSR04L     DEFINE  0xF01A8
TSR05      DEFINE  0xF01AA
TSR05L     DEFINE  0xF01AA
TSR06      DEFINE  0xF01AC
TSR06L     DEFINE  0xF01AC
TSR07      DEFINE  0xF01AE
TSR07L     DEFINE  0xF01AE
TE0        DEFINE  0xF01B0
TE0L       DEFINE  0xF01B0
TS0        DEFINE  0xF01B2
TS0L       DEFINE  0xF01B2
TT0        DEFINE  0xF01B4
TT0L       DEFINE  0xF01B4
TPS0       DEFINE  0xF01B6
TO0        DEFINE  0xF01B8
TO0L       DEFINE  0xF01B8
TOE0       DEFINE  0xF01BA
TOE0L      DEFINE  0xF01BA
TOL0       DEFINE  0xF01BC
TOL0L      DEFINE  0xF01BC
TOM0       DEFINE  0xF01BE
TOM0L      DEFINE  0xF01BE
IICCTL00   DEFINE  0xF0230
IICCTL01   DEFINE  0xF0231
IICWL0     DEFINE  0xF0232
IICWH0     DEFINE  0xF0233
SVA0       DEFINE  0xF0234
CRC0CTL    DEFINE  0xF02F0
PGCRCL     DEFINE  0xF02F2
CRCD       DEFINE  0xF02FA

#endif /* __IAR_SYSTEMS_ASM__ */

#endif /* __IOR5F100LG_EXT_H__ */
