#define SYNCR *(volatile unsigned int*) 0xC3F80000 
#define SYNSR *(volatile unsigned int*) 0xC3F80004
#define PLL_LOCK_STATUS_BIT (1<<3)

#include "typedefs.h"

#ifdef  __cplusplus
extern "C" {
#endif

#ifdef __MWERKS__
#pragma push
#pragma ANSI_strict off
#endif

/****************************************************************/
/*                                                              */
/* Global definitions and aliases */
/*                                                              */
/****************************************************************/
#define PIT       	PIT_RTI
#define SIU       	SIUL

/****************************************************************/
/*                                                              */
/* Module: SIUL  */
/*                                                              */
/****************************************************************/

   typedef union {   /* MIDR1 - MCU ID Register #1 */
      vuint32_t R;
      struct {
         vuint32_t  PARTNUM:16;        /* MCU Part Number */
         vuint32_t  CSP:1;             /* CSP Package */
         vuint32_t  PKG:5;             /* Package Settings */
         vuint32_t:2;
#ifndef USE_FIELD_ALIASES_SIUL
         vuint32_t  MAJOR_MASK:4;      /* Major Mask Revision */
#else
         vuint32_t  MAJORMASK:4;         /* deprecated name - please avoid */
#endif
#ifndef USE_FIELD_ALIASES_SIUL
         vuint32_t  MINOR_MASK:4;      /* Minor Mask Revision */
#else
         vuint32_t  MINORMASK:4;         /* deprecated name - please avoid */
#endif
      } B;
   } SIUL_MIDR1_32B_tag;

   typedef union {   /* MIDR2 - MCU ID Register #2 */
      vuint32_t R;
      struct {
         vuint32_t  SF:1;              /* Manufacturer */
         vuint32_t  FLASH_SIZE_1:4;    /* Coarse Flash Memory Size */
         vuint32_t  FLASH_SIZE_2:4;    /* Fine Flash Memory Size */
         vuint32_t:7;
#ifndef USE_FIELD_ALIASES_SIUL
         vuint32_t  PARTNUM2:8;        /* MCU Part Number */
#else
         vuint32_t  PARTNUM:8;           /* deprecated name - please avoid */
#endif
         vuint32_t  TBD:1;             /* Optional Bit */
         vuint32_t:2;
         vuint32_t  EE:1;              /* Data Flash Present */
         vuint32_t:3;
         vuint32_t  FR:1;              /* Flexray Present */
      } B;
   } SIUL_MIDR2_32B_tag;

   typedef union {   /* ISR - Interrupt Status Flag Register */
      vuint32_t R;
      struct {
         vuint32_t  EIF31:1;           /* External Interrupt Status Flag */
         vuint32_t  EIF30:1;           /* External Interrupt Status Flag */
         vuint32_t  EIF29:1;           /* External Interrupt Status Flag */
         vuint32_t  EIF28:1;           /* External Interrupt Status Flag */
         vuint32_t  EIF27:1;           /* External Interrupt Status Flag */
         vuint32_t  EIF26:1;           /* External Interrupt Status Flag */
         vuint32_t  EIF25:1;           /* External Interrupt Status Flag */
         vuint32_t  EIF24:1;           /* External Interrupt Status Flag */
         vuint32_t  EIF23:1;           /* External Interrupt Status Flag */
         vuint32_t  EIF22:1;           /* External Interrupt Status Flag */
         vuint32_t  EIF21:1;           /* External Interrupt Status Flag */
         vuint32_t  EIF20:1;           /* External Interrupt Status Flag */
         vuint32_t  EIF19:1;           /* External Interrupt Status Flag */
         vuint32_t  EIF18:1;           /* External Interrupt Status Flag */
         vuint32_t  EIF17:1;           /* External Interrupt Status Flag */
         vuint32_t  EIF16:1;           /* External Interrupt Status Flag */
         vuint32_t  EIF15:1;           /* External Interrupt Status Flag */
         vuint32_t  EIF14:1;           /* External Interrupt Status Flag */
         vuint32_t  EIF13:1;           /* External Interrupt Status Flag */
         vuint32_t  EIF12:1;           /* External Interrupt Status Flag */
         vuint32_t  EIF11:1;           /* External Interrupt Status Flag */
         vuint32_t  EIF10:1;           /* External Interrupt Status Flag */
         vuint32_t  EIF9:1;            /* External Interrupt Status Flag */
         vuint32_t  EIF8:1;            /* External Interrupt Status Flag */
         vuint32_t  EIF7:1;            /* External Interrupt Status Flag */
         vuint32_t  EIF6:1;            /* External Interrupt Status Flag */
         vuint32_t  EIF5:1;            /* External Interrupt Status Flag */
         vuint32_t  EIF4:1;            /* External Interrupt Status Flag */
         vuint32_t  EIF3:1;            /* External Interrupt Status Flag */
         vuint32_t  EIF2:1;            /* External Interrupt Status Flag */
         vuint32_t  EIF1:1;            /* External Interrupt Status Flag */
         vuint32_t  EIF0:1;            /* External Interrupt Status Flag */
      } B;
   } SIUL_ISR_32B_tag;

   typedef union {   /* IRER - Interrupt Request Enable Register */
      vuint32_t R;
      struct {
         vuint32_t  EIRE31:1;          /* Enable External Interrupt Requests */
         vuint32_t  EIRE30:1;          /* Enable External Interrupt Requests */
         vuint32_t  EIRE29:1;          /* Enable External Interrupt Requests */
         vuint32_t  EIRE28:1;          /* Enable External Interrupt Requests */
         vuint32_t  EIRE27:1;          /* Enable External Interrupt Requests */
         vuint32_t  EIRE26:1;          /* Enable External Interrupt Requests */
         vuint32_t  EIRE25:1;          /* Enable External Interrupt Requests */
         vuint32_t  EIRE24:1;          /* Enable External Interrupt Requests */
         vuint32_t  EIRE23:1;          /* Enable External Interrupt Requests */
         vuint32_t  EIRE22:1;          /* Enable External Interrupt Requests */
         vuint32_t  EIRE21:1;          /* Enable External Interrupt Requests */
         vuint32_t  EIRE20:1;          /* Enable External Interrupt Requests */
         vuint32_t  EIRE19:1;          /* Enable External Interrupt Requests */
         vuint32_t  EIRE18:1;          /* Enable External Interrupt Requests */
         vuint32_t  EIRE17:1;          /* Enable External Interrupt Requests */
         vuint32_t  EIRE16:1;          /* Enable External Interrupt Requests */
         vuint32_t  EIRE15:1;          /* Enable External Interrupt Requests */
         vuint32_t  EIRE14:1;          /* Enable External Interrupt Requests */
         vuint32_t  EIRE13:1;          /* Enable External Interrupt Requests */
         vuint32_t  EIRE12:1;          /* Enable External Interrupt Requests */
         vuint32_t  EIRE11:1;          /* Enable External Interrupt Requests */
         vuint32_t  EIRE10:1;          /* Enable External Interrupt Requests */
         vuint32_t  EIRE9:1;           /* Enable External Interrupt Requests */
         vuint32_t  EIRE8:1;           /* Enable External Interrupt Requests */
         vuint32_t  EIRE7:1;           /* Enable External Interrupt Requests */
         vuint32_t  EIRE6:1;           /* Enable External Interrupt Requests */
         vuint32_t  EIRE5:1;           /* Enable External Interrupt Requests */
         vuint32_t  EIRE4:1;           /* Enable External Interrupt Requests */
         vuint32_t  EIRE3:1;           /* Enable External Interrupt Requests */
         vuint32_t  EIRE2:1;           /* Enable External Interrupt Requests */
         vuint32_t  EIRE1:1;           /* Enable External Interrupt Requests */
         vuint32_t  EIRE0:1;           /* Enable External Interrupt Requests */
      } B;
   } SIUL_IRER_32B_tag;

   typedef union {   /* IREER - Interrupt Rising Edge Event Enable */
      vuint32_t R;
      struct {
         vuint32_t  IREE31:1;          /* Enable rising-edge events */
         vuint32_t  IREE30:1;          /* Enable rising-edge events */
         vuint32_t  IREE29:1;          /* Enable rising-edge events */
         vuint32_t  IREE28:1;          /* Enable rising-edge events */
         vuint32_t  IREE27:1;          /* Enable rising-edge events */
         vuint32_t  IREE26:1;          /* Enable rising-edge events */
         vuint32_t  IREE25:1;          /* Enable rising-edge events */
         vuint32_t  IREE24:1;          /* Enable rising-edge events */
         vuint32_t  IREE23:1;          /* Enable rising-edge events */
         vuint32_t  IREE22:1;          /* Enable rising-edge events */
         vuint32_t  IREE21:1;          /* Enable rising-edge events */
         vuint32_t  IREE20:1;          /* Enable rising-edge events */
         vuint32_t  IREE19:1;          /* Enable rising-edge events */
         vuint32_t  IREE18:1;          /* Enable rising-edge events */
         vuint32_t  IREE17:1;          /* Enable rising-edge events */
         vuint32_t  IREE16:1;          /* Enable rising-edge events */
         vuint32_t  IREE15:1;          /* Enable rising-edge events */
         vuint32_t  IREE14:1;          /* Enable rising-edge events */
         vuint32_t  IREE13:1;          /* Enable rising-edge events */
         vuint32_t  IREE12:1;          /* Enable rising-edge events */
         vuint32_t  IREE11:1;          /* Enable rising-edge events */
         vuint32_t  IREE10:1;          /* Enable rising-edge events */
         vuint32_t  IREE9:1;           /* Enable rising-edge events */
         vuint32_t  IREE8:1;           /* Enable rising-edge events */
         vuint32_t  IREE7:1;           /* Enable rising-edge events */
         vuint32_t  IREE6:1;           /* Enable rising-edge events */
         vuint32_t  IREE5:1;           /* Enable rising-edge events */
         vuint32_t  IREE4:1;           /* Enable rising-edge events */
         vuint32_t  IREE3:1;           /* Enable rising-edge events */
         vuint32_t  IREE2:1;           /* Enable rising-edge events */
         vuint32_t  IREE1:1;           /* Enable rising-edge events */
         vuint32_t  IREE0:1;           /* Enable rising-edge events */
      } B;
   } SIUL_IREER_32B_tag;

   typedef union {   /* IFEER - Interrupt Falling-Edge Event Enable */
      vuint32_t R;
      struct {
         vuint32_t  IFEE31:1;          /* Enable Falling Edge Events */
         vuint32_t  IFEE30:1;          /* Enable Falling Edge Events */
         vuint32_t  IFEE29:1;          /* Enable Falling Edge Events */
         vuint32_t  IFEE28:1;          /* Enable Falling Edge Events */
         vuint32_t  IFEE27:1;          /* Enable Falling Edge Events */
         vuint32_t  IFEE26:1;          /* Enable Falling Edge Events */
         vuint32_t  IFEE25:1;          /* Enable Falling Edge Events */
         vuint32_t  IFEE24:1;          /* Enable Falling Edge Events */
         vuint32_t  IFEE23:1;          /* Enable Falling Edge Events */
         vuint32_t  IFEE22:1;          /* Enable Falling Edge Events */
         vuint32_t  IFEE21:1;          /* Enable Falling Edge Events */
         vuint32_t  IFEE20:1;          /* Enable Falling Edge Events */
         vuint32_t  IFEE19:1;          /* Enable Falling Edge Events */
         vuint32_t  IFEE18:1;          /* Enable Falling Edge Events */
         vuint32_t  IFEE17:1;          /* Enable Falling Edge Events */
         vuint32_t  IFEE16:1;          /* Enable Falling Edge Events */
         vuint32_t  IFEE15:1;          /* Enable Falling Edge Events */
         vuint32_t  IFEE14:1;          /* Enable Falling Edge Events */
         vuint32_t  IFEE13:1;          /* Enable Falling Edge Events */
         vuint32_t  IFEE12:1;          /* Enable Falling Edge Events */
         vuint32_t  IFEE11:1;          /* Enable Falling Edge Events */
         vuint32_t  IFEE10:1;          /* Enable Falling Edge Events */
         vuint32_t  IFEE9:1;           /* Enable Falling Edge Events */
         vuint32_t  IFEE8:1;           /* Enable Falling Edge Events */
         vuint32_t  IFEE7:1;           /* Enable Falling Edge Events */
         vuint32_t  IFEE6:1;           /* Enable Falling Edge Events */
         vuint32_t  IFEE5:1;           /* Enable Falling Edge Events */
         vuint32_t  IFEE4:1;           /* Enable Falling Edge Events */
         vuint32_t  IFEE3:1;           /* Enable Falling Edge Events */
         vuint32_t  IFEE2:1;           /* Enable Falling Edge Events */
         vuint32_t  IFEE1:1;           /* Enable Falling Edge Events */
         vuint32_t  IFEE0:1;           /* Enable Falling Edge Events */
      } B;
   } SIUL_IFEER_32B_tag;

   typedef union {   /* IFER Interrupt Filter Enable Register */
      vuint32_t R;
      struct {
         vuint32_t  IFE31:1;           /* Enable Digital Glitch Filter */
         vuint32_t  IFE30:1;           /* Enable Digital Glitch Filter */
         vuint32_t  IFE29:1;           /* Enable Digital Glitch Filter */
         vuint32_t  IFE28:1;           /* Enable Digital Glitch Filter */
         vuint32_t  IFE27:1;           /* Enable Digital Glitch Filter */
         vuint32_t  IFE26:1;           /* Enable Digital Glitch Filter */
         vuint32_t  IFE25:1;           /* Enable Digital Glitch Filter */
         vuint32_t  IFE24:1;           /* Enable Digital Glitch Filter */
         vuint32_t  IFE23:1;           /* Enable Digital Glitch Filter */
         vuint32_t  IFE22:1;           /* Enable Digital Glitch Filter */
         vuint32_t  IFE21:1;           /* Enable Digital Glitch Filter */
         vuint32_t  IFE20:1;           /* Enable Digital Glitch Filter */
         vuint32_t  IFE19:1;           /* Enable Digital Glitch Filter */
         vuint32_t  IFE18:1;           /* Enable Digital Glitch Filter */
         vuint32_t  IFE17:1;           /* Enable Digital Glitch Filter */
         vuint32_t  IFE16:1;           /* Enable Digital Glitch Filter */
         vuint32_t  IFE15:1;           /* Enable Digital Glitch Filter */
         vuint32_t  IFE14:1;           /* Enable Digital Glitch Filter */
         vuint32_t  IFE13:1;           /* Enable Digital Glitch Filter */
         vuint32_t  IFE12:1;           /* Enable Digital Glitch Filter */
         vuint32_t  IFE11:1;           /* Enable Digital Glitch Filter */
         vuint32_t  IFE10:1;           /* Enable Digital Glitch Filter */
         vuint32_t  IFE9:1;            /* Enable Digital Glitch Filter */
         vuint32_t  IFE8:1;            /* Enable Digital Glitch Filter */
         vuint32_t  IFE7:1;            /* Enable Digital Glitch Filter */
         vuint32_t  IFE6:1;            /* Enable Digital Glitch Filter */
         vuint32_t  IFE5:1;            /* Enable Digital Glitch Filter */
         vuint32_t  IFE4:1;            /* Enable Digital Glitch Filter */
         vuint32_t  IFE3:1;            /* Enable Digital Glitch Filter */
         vuint32_t  IFE2:1;            /* Enable Digital Glitch Filter */
         vuint32_t  IFE1:1;            /* Enable Digital Glitch Filter */
         vuint32_t  IFE0:1;            /* Enable Digital Glitch Filter */
      } B;
   } SIUL_IFER_32B_tag;


   /* Register layout for all registers PCR... */

   typedef union {   /* PCR - Pad Configuration Register */
      vuint16_t R;
      struct {
         vuint16_t:1;
#ifndef USE_FIELD_ALIASES_SIUL
         vuint16_t  SMC:1;             /* Safe Mode Control */
#else
         vuint16_t  SME:1;               /* deprecated name - please avoid */
#endif
         vuint16_t  APC:1;             /* Analog Pad Control */
         vuint16_t:1;
         vuint16_t  PA:2;              /* Pad Output Assignment */
         vuint16_t  OBE:1;             /* Output Buffer Enable */
         vuint16_t  IBE:1;             /* Input Buffer Enable */
#ifndef USE_FIELD_ALIASES_SIUL
         vuint16_t  DSC:2;             /* Drive Strength Control */
#else
         vuint16_t  DCS:2;               /* deprecated name - please avoid */
#endif
         vuint16_t  ODE:1;             /* Open Drain Output Enable */
         vuint16_t  HYS:1;             /* Input Hysteresis */
         vuint16_t  SRC:2;             /* Slew Rate Control */
         vuint16_t  WPE:1;             /* Weak Pull Up/Down Enable */
         vuint16_t  WPS:1;             /* Weak Pull Up/Down Select */
      } B;
   } SIUL_PCR_16B_tag;


   /* Register layout for all registers PSMI... */

   typedef union {   /* PSMI - Pad Selection for Multiplexed Inputs */
      vuint8_t R;
      struct {
         vuint8_t:4;
         vuint8_t   PADSEL:4;          /* Pad selection for pin */
      } B;
   } SIUL_PSMI_8B_tag;


   /* Register layout for all registers PSMI... */

   typedef union {   /* PSMI - Pad Selection for Multiplexed Inputs */
      vuint32_t R;
      struct {
         vuint32_t:4;
         vuint32_t  PADSEL0:4;         /* Pad selection for pin */
         vuint32_t:4;
         vuint32_t  PADSEL1:4;         /* Pad selection for pin */
         vuint32_t:4;
         vuint32_t  PADSEL2:4;         /* Pad selection for pin */
         vuint32_t:4;
         vuint32_t  PADSEL3:4;         /* Pad selection for pin */
      } B;
   } SIUL_PSMI_32B_tag;


   /* Register layout for all registers GPDO... */

   typedef union {   /* GPDO - GPIO Pad Data Output Register */
      vuint8_t R;
      struct {
         vuint8_t:7;
         vuint8_t   PDO:1;             /* Pad Data Out */
      } B;
   } SIUL_GPDO_8B_tag;


   /* Register layout for all registers GPDO... */

   typedef union {   /* GPDO - GPIO Pad Data Output Register */
      vuint32_t R;
      struct {
         vuint32_t:7;
         vuint32_t  PDO0:1;            /* Pad Data Out */
         vuint32_t:7;
         vuint32_t  PDO1:1;            /* Pad Data Out */
         vuint32_t:7;
         vuint32_t  PDO2:1;            /* Pad Data Out */
         vuint32_t:7;
         vuint32_t  PDO3:1;            /* Pad Data Out */
      } B;
   } SIUL_GPDO_32B_tag;


   /* Register layout for all registers GPDI... */

   typedef union {   /* GPDI - GPIO Pad Data Input Register */
      vuint8_t R;
      struct {
         vuint8_t:7;
         vuint8_t   PDI:1;             /* Pad Data In */
      } B;
   } SIUL_GPDI_8B_tag;


   /* Register layout for all registers GPDI... */

   typedef union {   /* GPDI - GPIO Pad Data Input Register */
      vuint32_t R;
      struct {
         vuint32_t:7;
         vuint32_t  PDI0:1;            /* Pad Data In */
         vuint32_t:7;
         vuint32_t  PDI1:1;            /* Pad Data In */
         vuint32_t:7;
         vuint32_t  PDI2:1;            /* Pad Data In */
         vuint32_t:7;
         vuint32_t  PDI3:1;            /* Pad Data In */
      } B;
   } SIUL_GPDI_32B_tag;


   /* Register layout for all registers PGPDO... */

   typedef union {   /* PGPDO - Parallel GPIO Pad Data Out Register */
      vuint16_t R;
   } SIUL_PGPDO_16B_tag;


   /* Register layout for all registers PGPDI... */

   typedef union {   /* PGPDI - Parallel GPIO Pad Data In Register */
      vuint16_t R;
   } SIUL_PGPDI_16B_tag;


   /* Register layout for all registers MPGPDO... */

   typedef union {   /* MPGPDO - Masked Parallel GPIO Pad Data Out Register */
      vuint32_t R;
      struct {
         vuint32_t  MASK:16;           /* Mask Field */
         vuint32_t  MPPDO:16;          /* Masked Parallel Pad Data Out */
      } B;
   } SIUL_MPGPDO_32B_tag;


   /* Register layout for all registers IFMC... */

   typedef union {   /* IFMC - Interrupt Filter Maximum Counter Register */
      vuint32_t R;
      struct {
         vuint32_t:28;
         vuint32_t  MAXCNT:4;          /* Maximum Interrupt Filter Counter Setting */
      } B;
   } SIUL_IFMC_32B_tag;

   typedef union {   /* IFCPR - Inerrupt Filter Clock Prescaler Register */
      vuint32_t R;
      struct {
         vuint32_t:28;
         vuint32_t  IFCP:4;            /* Interrupt Filter Clock Prescaler Setting */
      } B;
   } SIUL_IFCPR_32B_tag;



   typedef struct SIUL_struct_tag { /* start of SIUL_tag */
      int8_t SIUL_reserved_0000_C[4];
      union {
         SIUL_MIDR1_32B_tag MIDR;          /* deprecated - please avoid */

                                           /* MIDR1 - MCU ID Register #1 */
         SIUL_MIDR1_32B_tag MIDR1;         /* offset: 0x0004 size: 32 bit */

      };
                                           /* MIDR2 - MCU ID Register #2 */
      SIUL_MIDR2_32B_tag MIDR2;            /* offset: 0x0008 size: 32 bit */
      int8_t SIUL_reserved_000C[8];
                                 /* ISR - Interrupt Status Flag Register */
      SIUL_ISR_32B_tag ISR;                /* offset: 0x0014 size: 32 bit */
                             /* IRER - Interrupt Request Enable Register */
      SIUL_IRER_32B_tag IRER;              /* offset: 0x0018 size: 32 bit */
      int8_t SIUL_reserved_001C[12];
                           /* IREER - Interrupt Rising Edge Event Enable */
      SIUL_IREER_32B_tag IREER;            /* offset: 0x0028 size: 32 bit */
                          /* IFEER - Interrupt Falling-Edge Event Enable */
      SIUL_IFEER_32B_tag IFEER;            /* offset: 0x002C size: 32 bit */
                                /* IFER Interrupt Filter Enable Register */
      SIUL_IFER_32B_tag IFER;              /* offset: 0x0030 size: 32 bit */
      int8_t SIUL_reserved_0034_C[12];
      union {
                                     /* PCR - Pad Configuration Register */
         SIUL_PCR_16B_tag PCR[512];        /* offset: 0x0040  (0x0002 x 512) */

         struct {
                                     /* PCR - Pad Configuration Register */
            SIUL_PCR_16B_tag PCR0;         /* offset: 0x0040 size: 16 bit */
            SIUL_PCR_16B_tag PCR1;         /* offset: 0x0042 size: 16 bit */
            SIUL_PCR_16B_tag PCR2;         /* offset: 0x0044 size: 16 bit */
            SIUL_PCR_16B_tag PCR3;         /* offset: 0x0046 size: 16 bit */
            SIUL_PCR_16B_tag PCR4;         /* offset: 0x0048 size: 16 bit */
            SIUL_PCR_16B_tag PCR5;         /* offset: 0x004A size: 16 bit */
            SIUL_PCR_16B_tag PCR6;         /* offset: 0x004C size: 16 bit */
            SIUL_PCR_16B_tag PCR7;         /* offset: 0x004E size: 16 bit */
            SIUL_PCR_16B_tag PCR8;         /* offset: 0x0050 size: 16 bit */
            SIUL_PCR_16B_tag PCR9;         /* offset: 0x0052 size: 16 bit */
            SIUL_PCR_16B_tag PCR10;        /* offset: 0x0054 size: 16 bit */
            SIUL_PCR_16B_tag PCR11;        /* offset: 0x0056 size: 16 bit */
            SIUL_PCR_16B_tag PCR12;        /* offset: 0x0058 size: 16 bit */
            SIUL_PCR_16B_tag PCR13;        /* offset: 0x005A size: 16 bit */
            SIUL_PCR_16B_tag PCR14;        /* offset: 0x005C size: 16 bit */
            SIUL_PCR_16B_tag PCR15;        /* offset: 0x005E size: 16 bit */
            SIUL_PCR_16B_tag PCR16;        /* offset: 0x0060 size: 16 bit */
            SIUL_PCR_16B_tag PCR17;        /* offset: 0x0062 size: 16 bit */
            SIUL_PCR_16B_tag PCR18;        /* offset: 0x0064 size: 16 bit */
            SIUL_PCR_16B_tag PCR19;        /* offset: 0x0066 size: 16 bit */
            SIUL_PCR_16B_tag PCR20;        /* offset: 0x0068 size: 16 bit */
            SIUL_PCR_16B_tag PCR21;        /* offset: 0x006A size: 16 bit */
            SIUL_PCR_16B_tag PCR22;        /* offset: 0x006C size: 16 bit */
            SIUL_PCR_16B_tag PCR23;        /* offset: 0x006E size: 16 bit */
            SIUL_PCR_16B_tag PCR24;        /* offset: 0x0070 size: 16 bit */
            SIUL_PCR_16B_tag PCR25;        /* offset: 0x0072 size: 16 bit */
            SIUL_PCR_16B_tag PCR26;        /* offset: 0x0074 size: 16 bit */
            SIUL_PCR_16B_tag PCR27;        /* offset: 0x0076 size: 16 bit */
            SIUL_PCR_16B_tag PCR28;        /* offset: 0x0078 size: 16 bit */
            SIUL_PCR_16B_tag PCR29;        /* offset: 0x007A size: 16 bit */
            SIUL_PCR_16B_tag PCR30;        /* offset: 0x007C size: 16 bit */
            SIUL_PCR_16B_tag PCR31;        /* offset: 0x007E size: 16 bit */
            SIUL_PCR_16B_tag PCR32;        /* offset: 0x0080 size: 16 bit */
            SIUL_PCR_16B_tag PCR33;        /* offset: 0x0082 size: 16 bit */
            SIUL_PCR_16B_tag PCR34;        /* offset: 0x0084 size: 16 bit */
            SIUL_PCR_16B_tag PCR35;        /* offset: 0x0086 size: 16 bit */
            SIUL_PCR_16B_tag PCR36;        /* offset: 0x0088 size: 16 bit */
            SIUL_PCR_16B_tag PCR37;        /* offset: 0x008A size: 16 bit */
            SIUL_PCR_16B_tag PCR38;        /* offset: 0x008C size: 16 bit */
            SIUL_PCR_16B_tag PCR39;        /* offset: 0x008E size: 16 bit */
            SIUL_PCR_16B_tag PCR40;        /* offset: 0x0090 size: 16 bit */
            SIUL_PCR_16B_tag PCR41;        /* offset: 0x0092 size: 16 bit */
            SIUL_PCR_16B_tag PCR42;        /* offset: 0x0094 size: 16 bit */
            SIUL_PCR_16B_tag PCR43;        /* offset: 0x0096 size: 16 bit */
            SIUL_PCR_16B_tag PCR44;        /* offset: 0x0098 size: 16 bit */
            SIUL_PCR_16B_tag PCR45;        /* offset: 0x009A size: 16 bit */
            SIUL_PCR_16B_tag PCR46;        /* offset: 0x009C size: 16 bit */
            SIUL_PCR_16B_tag PCR47;        /* offset: 0x009E size: 16 bit */
            SIUL_PCR_16B_tag PCR48;        /* offset: 0x00A0 size: 16 bit */
            SIUL_PCR_16B_tag PCR49;        /* offset: 0x00A2 size: 16 bit */
            SIUL_PCR_16B_tag PCR50;        /* offset: 0x00A4 size: 16 bit */
            SIUL_PCR_16B_tag PCR51;        /* offset: 0x00A6 size: 16 bit */
            SIUL_PCR_16B_tag PCR52;        /* offset: 0x00A8 size: 16 bit */
            SIUL_PCR_16B_tag PCR53;        /* offset: 0x00AA size: 16 bit */
            SIUL_PCR_16B_tag PCR54;        /* offset: 0x00AC size: 16 bit */
            SIUL_PCR_16B_tag PCR55;        /* offset: 0x00AE size: 16 bit */
            SIUL_PCR_16B_tag PCR56;        /* offset: 0x00B0 size: 16 bit */
            SIUL_PCR_16B_tag PCR57;        /* offset: 0x00B2 size: 16 bit */
            SIUL_PCR_16B_tag PCR58;        /* offset: 0x00B4 size: 16 bit */
            SIUL_PCR_16B_tag PCR59;        /* offset: 0x00B6 size: 16 bit */
            SIUL_PCR_16B_tag PCR60;        /* offset: 0x00B8 size: 16 bit */
            SIUL_PCR_16B_tag PCR61;        /* offset: 0x00BA size: 16 bit */
            SIUL_PCR_16B_tag PCR62;        /* offset: 0x00BC size: 16 bit */
            SIUL_PCR_16B_tag PCR63;        /* offset: 0x00BE size: 16 bit */
            SIUL_PCR_16B_tag PCR64;        /* offset: 0x00C0 size: 16 bit */
            SIUL_PCR_16B_tag PCR65;        /* offset: 0x00C2 size: 16 bit */
            SIUL_PCR_16B_tag PCR66;        /* offset: 0x00C4 size: 16 bit */
            SIUL_PCR_16B_tag PCR67;        /* offset: 0x00C6 size: 16 bit */
            SIUL_PCR_16B_tag PCR68;        /* offset: 0x00C8 size: 16 bit */
            SIUL_PCR_16B_tag PCR69;        /* offset: 0x00CA size: 16 bit */
            SIUL_PCR_16B_tag PCR70;        /* offset: 0x00CC size: 16 bit */
            SIUL_PCR_16B_tag PCR71;        /* offset: 0x00CE size: 16 bit */
            SIUL_PCR_16B_tag PCR72;        /* offset: 0x00D0 size: 16 bit */
            SIUL_PCR_16B_tag PCR73;        /* offset: 0x00D2 size: 16 bit */
            SIUL_PCR_16B_tag PCR74;        /* offset: 0x00D4 size: 16 bit */
            SIUL_PCR_16B_tag PCR75;        /* offset: 0x00D6 size: 16 bit */
            SIUL_PCR_16B_tag PCR76;        /* offset: 0x00D8 size: 16 bit */
            SIUL_PCR_16B_tag PCR77;        /* offset: 0x00DA size: 16 bit */
            SIUL_PCR_16B_tag PCR78;        /* offset: 0x00DC size: 16 bit */
            SIUL_PCR_16B_tag PCR79;        /* offset: 0x00DE size: 16 bit */
            SIUL_PCR_16B_tag PCR80;        /* offset: 0x00E0 size: 16 bit */
            SIUL_PCR_16B_tag PCR81;        /* offset: 0x00E2 size: 16 bit */
            SIUL_PCR_16B_tag PCR82;        /* offset: 0x00E4 size: 16 bit */
            SIUL_PCR_16B_tag PCR83;        /* offset: 0x00E6 size: 16 bit */
            SIUL_PCR_16B_tag PCR84;        /* offset: 0x00E8 size: 16 bit */
            SIUL_PCR_16B_tag PCR85;        /* offset: 0x00EA size: 16 bit */
            SIUL_PCR_16B_tag PCR86;        /* offset: 0x00EC size: 16 bit */
            SIUL_PCR_16B_tag PCR87;        /* offset: 0x00EE size: 16 bit */
            SIUL_PCR_16B_tag PCR88;        /* offset: 0x00F0 size: 16 bit */
            SIUL_PCR_16B_tag PCR89;        /* offset: 0x00F2 size: 16 bit */
            SIUL_PCR_16B_tag PCR90;        /* offset: 0x00F4 size: 16 bit */
            SIUL_PCR_16B_tag PCR91;        /* offset: 0x00F6 size: 16 bit */
            SIUL_PCR_16B_tag PCR92;        /* offset: 0x00F8 size: 16 bit */
            SIUL_PCR_16B_tag PCR93;        /* offset: 0x00FA size: 16 bit */
            SIUL_PCR_16B_tag PCR94;        /* offset: 0x00FC size: 16 bit */
            SIUL_PCR_16B_tag PCR95;        /* offset: 0x00FE size: 16 bit */
            SIUL_PCR_16B_tag PCR96;        /* offset: 0x0100 size: 16 bit */
            SIUL_PCR_16B_tag PCR97;        /* offset: 0x0102 size: 16 bit */
            SIUL_PCR_16B_tag PCR98;        /* offset: 0x0104 size: 16 bit */
            SIUL_PCR_16B_tag PCR99;        /* offset: 0x0106 size: 16 bit */
            SIUL_PCR_16B_tag PCR100;       /* offset: 0x0108 size: 16 bit */
            SIUL_PCR_16B_tag PCR101;       /* offset: 0x010A size: 16 bit */
            SIUL_PCR_16B_tag PCR102;       /* offset: 0x010C size: 16 bit */
            SIUL_PCR_16B_tag PCR103;       /* offset: 0x010E size: 16 bit */
            SIUL_PCR_16B_tag PCR104;       /* offset: 0x0110 size: 16 bit */
            SIUL_PCR_16B_tag PCR105;       /* offset: 0x0112 size: 16 bit */
            SIUL_PCR_16B_tag PCR106;       /* offset: 0x0114 size: 16 bit */
            SIUL_PCR_16B_tag PCR107;       /* offset: 0x0116 size: 16 bit */
            SIUL_PCR_16B_tag PCR108;       /* offset: 0x0118 size: 16 bit */
            SIUL_PCR_16B_tag PCR109;       /* offset: 0x011A size: 16 bit */
            SIUL_PCR_16B_tag PCR110;       /* offset: 0x011C size: 16 bit */
            SIUL_PCR_16B_tag PCR111;       /* offset: 0x011E size: 16 bit */
            SIUL_PCR_16B_tag PCR112;       /* offset: 0x0120 size: 16 bit */
            SIUL_PCR_16B_tag PCR113;       /* offset: 0x0122 size: 16 bit */
            SIUL_PCR_16B_tag PCR114;       /* offset: 0x0124 size: 16 bit */
            SIUL_PCR_16B_tag PCR115;       /* offset: 0x0126 size: 16 bit */
            SIUL_PCR_16B_tag PCR116;       /* offset: 0x0128 size: 16 bit */
            SIUL_PCR_16B_tag PCR117;       /* offset: 0x012A size: 16 bit */
            SIUL_PCR_16B_tag PCR118;       /* offset: 0x012C size: 16 bit */
            SIUL_PCR_16B_tag PCR119;       /* offset: 0x012E size: 16 bit */
            SIUL_PCR_16B_tag PCR120;       /* offset: 0x0130 size: 16 bit */
            SIUL_PCR_16B_tag PCR121;       /* offset: 0x0132 size: 16 bit */
            SIUL_PCR_16B_tag PCR122;       /* offset: 0x0134 size: 16 bit */
            SIUL_PCR_16B_tag PCR123;       /* offset: 0x0136 size: 16 bit */
            SIUL_PCR_16B_tag PCR124;       /* offset: 0x0138 size: 16 bit */
            SIUL_PCR_16B_tag PCR125;       /* offset: 0x013A size: 16 bit */
            SIUL_PCR_16B_tag PCR126;       /* offset: 0x013C size: 16 bit */
            SIUL_PCR_16B_tag PCR127;       /* offset: 0x013E size: 16 bit */
            SIUL_PCR_16B_tag PCR128;       /* offset: 0x0140 size: 16 bit */
            SIUL_PCR_16B_tag PCR129;       /* offset: 0x0142 size: 16 bit */
            SIUL_PCR_16B_tag PCR130;       /* offset: 0x0144 size: 16 bit */
            SIUL_PCR_16B_tag PCR131;       /* offset: 0x0146 size: 16 bit */
            SIUL_PCR_16B_tag PCR132;       /* offset: 0x0148 size: 16 bit */
            SIUL_PCR_16B_tag PCR133;       /* offset: 0x014A size: 16 bit */
            SIUL_PCR_16B_tag PCR134;       /* offset: 0x014C size: 16 bit */
            SIUL_PCR_16B_tag PCR135;       /* offset: 0x014E size: 16 bit */
            SIUL_PCR_16B_tag PCR136;       /* offset: 0x0150 size: 16 bit */
            SIUL_PCR_16B_tag PCR137;       /* offset: 0x0152 size: 16 bit */
            SIUL_PCR_16B_tag PCR138;       /* offset: 0x0154 size: 16 bit */
            SIUL_PCR_16B_tag PCR139;       /* offset: 0x0156 size: 16 bit */
            SIUL_PCR_16B_tag PCR140;       /* offset: 0x0158 size: 16 bit */
            SIUL_PCR_16B_tag PCR141;       /* offset: 0x015A size: 16 bit */
            SIUL_PCR_16B_tag PCR142;       /* offset: 0x015C size: 16 bit */
            SIUL_PCR_16B_tag PCR143;       /* offset: 0x015E size: 16 bit */
            SIUL_PCR_16B_tag PCR144;       /* offset: 0x0160 size: 16 bit */
            SIUL_PCR_16B_tag PCR145;       /* offset: 0x0162 size: 16 bit */
            SIUL_PCR_16B_tag PCR146;       /* offset: 0x0164 size: 16 bit */
            SIUL_PCR_16B_tag PCR147;       /* offset: 0x0166 size: 16 bit */
            SIUL_PCR_16B_tag PCR148;       /* offset: 0x0168 size: 16 bit */
            SIUL_PCR_16B_tag PCR149;       /* offset: 0x016A size: 16 bit */
            SIUL_PCR_16B_tag PCR150;       /* offset: 0x016C size: 16 bit */
            SIUL_PCR_16B_tag PCR151;       /* offset: 0x016E size: 16 bit */
            SIUL_PCR_16B_tag PCR152;       /* offset: 0x0170 size: 16 bit */
            SIUL_PCR_16B_tag PCR153;       /* offset: 0x0172 size: 16 bit */
            SIUL_PCR_16B_tag PCR154;       /* offset: 0x0174 size: 16 bit */
            SIUL_PCR_16B_tag PCR155;       /* offset: 0x0176 size: 16 bit */
            SIUL_PCR_16B_tag PCR156;       /* offset: 0x0178 size: 16 bit */
            SIUL_PCR_16B_tag PCR157;       /* offset: 0x017A size: 16 bit */
            SIUL_PCR_16B_tag PCR158;       /* offset: 0x017C size: 16 bit */
            SIUL_PCR_16B_tag PCR159;       /* offset: 0x017E size: 16 bit */
            SIUL_PCR_16B_tag PCR160;       /* offset: 0x0180 size: 16 bit */
            SIUL_PCR_16B_tag PCR161;       /* offset: 0x0182 size: 16 bit */
            SIUL_PCR_16B_tag PCR162;       /* offset: 0x0184 size: 16 bit */
            SIUL_PCR_16B_tag PCR163;       /* offset: 0x0186 size: 16 bit */
            SIUL_PCR_16B_tag PCR164;       /* offset: 0x0188 size: 16 bit */
            SIUL_PCR_16B_tag PCR165;       /* offset: 0x018A size: 16 bit */
            SIUL_PCR_16B_tag PCR166;       /* offset: 0x018C size: 16 bit */
            SIUL_PCR_16B_tag PCR167;       /* offset: 0x018E size: 16 bit */
            SIUL_PCR_16B_tag PCR168;       /* offset: 0x0190 size: 16 bit */
            SIUL_PCR_16B_tag PCR169;       /* offset: 0x0192 size: 16 bit */
            SIUL_PCR_16B_tag PCR170;       /* offset: 0x0194 size: 16 bit */
            SIUL_PCR_16B_tag PCR171;       /* offset: 0x0196 size: 16 bit */
            SIUL_PCR_16B_tag PCR172;       /* offset: 0x0198 size: 16 bit */
            SIUL_PCR_16B_tag PCR173;       /* offset: 0x019A size: 16 bit */
            SIUL_PCR_16B_tag PCR174;       /* offset: 0x019C size: 16 bit */
            SIUL_PCR_16B_tag PCR175;       /* offset: 0x019E size: 16 bit */
            SIUL_PCR_16B_tag PCR176;       /* offset: 0x01A0 size: 16 bit */
            SIUL_PCR_16B_tag PCR177;       /* offset: 0x01A2 size: 16 bit */
            SIUL_PCR_16B_tag PCR178;       /* offset: 0x01A4 size: 16 bit */
            SIUL_PCR_16B_tag PCR179;       /* offset: 0x01A6 size: 16 bit */
            SIUL_PCR_16B_tag PCR180;       /* offset: 0x01A8 size: 16 bit */
            SIUL_PCR_16B_tag PCR181;       /* offset: 0x01AA size: 16 bit */
            SIUL_PCR_16B_tag PCR182;       /* offset: 0x01AC size: 16 bit */
            SIUL_PCR_16B_tag PCR183;       /* offset: 0x01AE size: 16 bit */
            SIUL_PCR_16B_tag PCR184;       /* offset: 0x01B0 size: 16 bit */
            SIUL_PCR_16B_tag PCR185;       /* offset: 0x01B2 size: 16 bit */
            SIUL_PCR_16B_tag PCR186;       /* offset: 0x01B4 size: 16 bit */
            SIUL_PCR_16B_tag PCR187;       /* offset: 0x01B6 size: 16 bit */
            SIUL_PCR_16B_tag PCR188;       /* offset: 0x01B8 size: 16 bit */
            SIUL_PCR_16B_tag PCR189;       /* offset: 0x01BA size: 16 bit */
            SIUL_PCR_16B_tag PCR190;       /* offset: 0x01BC size: 16 bit */
            SIUL_PCR_16B_tag PCR191;       /* offset: 0x01BE size: 16 bit */
            SIUL_PCR_16B_tag PCR192;       /* offset: 0x01C0 size: 16 bit */
            SIUL_PCR_16B_tag PCR193;       /* offset: 0x01C2 size: 16 bit */
            SIUL_PCR_16B_tag PCR194;       /* offset: 0x01C4 size: 16 bit */
            SIUL_PCR_16B_tag PCR195;       /* offset: 0x01C6 size: 16 bit */
            SIUL_PCR_16B_tag PCR196;       /* offset: 0x01C8 size: 16 bit */
            SIUL_PCR_16B_tag PCR197;       /* offset: 0x01CA size: 16 bit */
            SIUL_PCR_16B_tag PCR198;       /* offset: 0x01CC size: 16 bit */
            SIUL_PCR_16B_tag PCR199;       /* offset: 0x01CE size: 16 bit */
            SIUL_PCR_16B_tag PCR200;       /* offset: 0x01D0 size: 16 bit */
            SIUL_PCR_16B_tag PCR201;       /* offset: 0x01D2 size: 16 bit */
            SIUL_PCR_16B_tag PCR202;       /* offset: 0x01D4 size: 16 bit */
            SIUL_PCR_16B_tag PCR203;       /* offset: 0x01D6 size: 16 bit */
            SIUL_PCR_16B_tag PCR204;       /* offset: 0x01D8 size: 16 bit */
            SIUL_PCR_16B_tag PCR205;       /* offset: 0x01DA size: 16 bit */
            SIUL_PCR_16B_tag PCR206;       /* offset: 0x01DC size: 16 bit */
            SIUL_PCR_16B_tag PCR207;       /* offset: 0x01DE size: 16 bit */
            SIUL_PCR_16B_tag PCR208;       /* offset: 0x01E0 size: 16 bit */
            SIUL_PCR_16B_tag PCR209;       /* offset: 0x01E2 size: 16 bit */
            SIUL_PCR_16B_tag PCR210;       /* offset: 0x01E4 size: 16 bit */
            SIUL_PCR_16B_tag PCR211;       /* offset: 0x01E6 size: 16 bit */
            SIUL_PCR_16B_tag PCR212;       /* offset: 0x01E8 size: 16 bit */
            SIUL_PCR_16B_tag PCR213;       /* offset: 0x01EA size: 16 bit */
            SIUL_PCR_16B_tag PCR214;       /* offset: 0x01EC size: 16 bit */
            SIUL_PCR_16B_tag PCR215;       /* offset: 0x01EE size: 16 bit */
            SIUL_PCR_16B_tag PCR216;       /* offset: 0x01F0 size: 16 bit */
            SIUL_PCR_16B_tag PCR217;       /* offset: 0x01F2 size: 16 bit */
            SIUL_PCR_16B_tag PCR218;       /* offset: 0x01F4 size: 16 bit */
            SIUL_PCR_16B_tag PCR219;       /* offset: 0x01F6 size: 16 bit */
            SIUL_PCR_16B_tag PCR220;       /* offset: 0x01F8 size: 16 bit */
            SIUL_PCR_16B_tag PCR221;       /* offset: 0x01FA size: 16 bit */
            SIUL_PCR_16B_tag PCR222;       /* offset: 0x01FC size: 16 bit */
            SIUL_PCR_16B_tag PCR223;       /* offset: 0x01FE size: 16 bit */
            SIUL_PCR_16B_tag PCR224;       /* offset: 0x0200 size: 16 bit */
            SIUL_PCR_16B_tag PCR225;       /* offset: 0x0202 size: 16 bit */
            SIUL_PCR_16B_tag PCR226;       /* offset: 0x0204 size: 16 bit */
            SIUL_PCR_16B_tag PCR227;       /* offset: 0x0206 size: 16 bit */
            SIUL_PCR_16B_tag PCR228;       /* offset: 0x0208 size: 16 bit */
            SIUL_PCR_16B_tag PCR229;       /* offset: 0x020A size: 16 bit */
            SIUL_PCR_16B_tag PCR230;       /* offset: 0x020C size: 16 bit */
            SIUL_PCR_16B_tag PCR231;       /* offset: 0x020E size: 16 bit */
            SIUL_PCR_16B_tag PCR232;       /* offset: 0x0210 size: 16 bit */
            SIUL_PCR_16B_tag PCR233;       /* offset: 0x0212 size: 16 bit */
            SIUL_PCR_16B_tag PCR234;       /* offset: 0x0214 size: 16 bit */
            SIUL_PCR_16B_tag PCR235;       /* offset: 0x0216 size: 16 bit */
            SIUL_PCR_16B_tag PCR236;       /* offset: 0x0218 size: 16 bit */
            SIUL_PCR_16B_tag PCR237;       /* offset: 0x021A size: 16 bit */
            SIUL_PCR_16B_tag PCR238;       /* offset: 0x021C size: 16 bit */
            SIUL_PCR_16B_tag PCR239;       /* offset: 0x021E size: 16 bit */
            SIUL_PCR_16B_tag PCR240;       /* offset: 0x0220 size: 16 bit */
            SIUL_PCR_16B_tag PCR241;       /* offset: 0x0222 size: 16 bit */
            SIUL_PCR_16B_tag PCR242;       /* offset: 0x0224 size: 16 bit */
            SIUL_PCR_16B_tag PCR243;       /* offset: 0x0226 size: 16 bit */
            SIUL_PCR_16B_tag PCR244;       /* offset: 0x0228 size: 16 bit */
            SIUL_PCR_16B_tag PCR245;       /* offset: 0x022A size: 16 bit */
            SIUL_PCR_16B_tag PCR246;       /* offset: 0x022C size: 16 bit */
            SIUL_PCR_16B_tag PCR247;       /* offset: 0x022E size: 16 bit */
            SIUL_PCR_16B_tag PCR248;       /* offset: 0x0230 size: 16 bit */
            SIUL_PCR_16B_tag PCR249;       /* offset: 0x0232 size: 16 bit */
            SIUL_PCR_16B_tag PCR250;       /* offset: 0x0234 size: 16 bit */
            SIUL_PCR_16B_tag PCR251;       /* offset: 0x0236 size: 16 bit */
            SIUL_PCR_16B_tag PCR252;       /* offset: 0x0238 size: 16 bit */
            SIUL_PCR_16B_tag PCR253;       /* offset: 0x023A size: 16 bit */
            SIUL_PCR_16B_tag PCR254;       /* offset: 0x023C size: 16 bit */
            SIUL_PCR_16B_tag PCR255;       /* offset: 0x023E size: 16 bit */
            SIUL_PCR_16B_tag PCR256;       /* offset: 0x0240 size: 16 bit */
            SIUL_PCR_16B_tag PCR257;       /* offset: 0x0242 size: 16 bit */
            SIUL_PCR_16B_tag PCR258;       /* offset: 0x0244 size: 16 bit */
            SIUL_PCR_16B_tag PCR259;       /* offset: 0x0246 size: 16 bit */
            SIUL_PCR_16B_tag PCR260;       /* offset: 0x0248 size: 16 bit */
            SIUL_PCR_16B_tag PCR261;       /* offset: 0x024A size: 16 bit */
            SIUL_PCR_16B_tag PCR262;       /* offset: 0x024C size: 16 bit */
            SIUL_PCR_16B_tag PCR263;       /* offset: 0x024E size: 16 bit */
            SIUL_PCR_16B_tag PCR264;       /* offset: 0x0250 size: 16 bit */
            SIUL_PCR_16B_tag PCR265;       /* offset: 0x0252 size: 16 bit */
            SIUL_PCR_16B_tag PCR266;       /* offset: 0x0254 size: 16 bit */
            SIUL_PCR_16B_tag PCR267;       /* offset: 0x0256 size: 16 bit */
            SIUL_PCR_16B_tag PCR268;       /* offset: 0x0258 size: 16 bit */
            SIUL_PCR_16B_tag PCR269;       /* offset: 0x025A size: 16 bit */
            SIUL_PCR_16B_tag PCR270;       /* offset: 0x025C size: 16 bit */
            SIUL_PCR_16B_tag PCR271;       /* offset: 0x025E size: 16 bit */
            SIUL_PCR_16B_tag PCR272;       /* offset: 0x0260 size: 16 bit */
            SIUL_PCR_16B_tag PCR273;       /* offset: 0x0262 size: 16 bit */
            SIUL_PCR_16B_tag PCR274;       /* offset: 0x0264 size: 16 bit */
            SIUL_PCR_16B_tag PCR275;       /* offset: 0x0266 size: 16 bit */
            SIUL_PCR_16B_tag PCR276;       /* offset: 0x0268 size: 16 bit */
            SIUL_PCR_16B_tag PCR277;       /* offset: 0x026A size: 16 bit */
            SIUL_PCR_16B_tag PCR278;       /* offset: 0x026C size: 16 bit */
            SIUL_PCR_16B_tag PCR279;       /* offset: 0x026E size: 16 bit */
            SIUL_PCR_16B_tag PCR280;       /* offset: 0x0270 size: 16 bit */
            SIUL_PCR_16B_tag PCR281;       /* offset: 0x0272 size: 16 bit */
            SIUL_PCR_16B_tag PCR282;       /* offset: 0x0274 size: 16 bit */
            SIUL_PCR_16B_tag PCR283;       /* offset: 0x0276 size: 16 bit */
            SIUL_PCR_16B_tag PCR284;       /* offset: 0x0278 size: 16 bit */
            SIUL_PCR_16B_tag PCR285;       /* offset: 0x027A size: 16 bit */
            SIUL_PCR_16B_tag PCR286;       /* offset: 0x027C size: 16 bit */
            SIUL_PCR_16B_tag PCR287;       /* offset: 0x027E size: 16 bit */
            SIUL_PCR_16B_tag PCR288;       /* offset: 0x0280 size: 16 bit */
            SIUL_PCR_16B_tag PCR289;       /* offset: 0x0282 size: 16 bit */
            SIUL_PCR_16B_tag PCR290;       /* offset: 0x0284 size: 16 bit */
            SIUL_PCR_16B_tag PCR291;       /* offset: 0x0286 size: 16 bit */
            SIUL_PCR_16B_tag PCR292;       /* offset: 0x0288 size: 16 bit */
            SIUL_PCR_16B_tag PCR293;       /* offset: 0x028A size: 16 bit */
            SIUL_PCR_16B_tag PCR294;       /* offset: 0x028C size: 16 bit */
            SIUL_PCR_16B_tag PCR295;       /* offset: 0x028E size: 16 bit */
            SIUL_PCR_16B_tag PCR296;       /* offset: 0x0290 size: 16 bit */
            SIUL_PCR_16B_tag PCR297;       /* offset: 0x0292 size: 16 bit */
            SIUL_PCR_16B_tag PCR298;       /* offset: 0x0294 size: 16 bit */
            SIUL_PCR_16B_tag PCR299;       /* offset: 0x0296 size: 16 bit */
            SIUL_PCR_16B_tag PCR300;       /* offset: 0x0298 size: 16 bit */
            SIUL_PCR_16B_tag PCR301;       /* offset: 0x029A size: 16 bit */
            SIUL_PCR_16B_tag PCR302;       /* offset: 0x029C size: 16 bit */
            SIUL_PCR_16B_tag PCR303;       /* offset: 0x029E size: 16 bit */
            SIUL_PCR_16B_tag PCR304;       /* offset: 0x02A0 size: 16 bit */
            SIUL_PCR_16B_tag PCR305;       /* offset: 0x02A2 size: 16 bit */
            SIUL_PCR_16B_tag PCR306;       /* offset: 0x02A4 size: 16 bit */
            SIUL_PCR_16B_tag PCR307;       /* offset: 0x02A6 size: 16 bit */
            SIUL_PCR_16B_tag PCR308;       /* offset: 0x02A8 size: 16 bit */
            SIUL_PCR_16B_tag PCR309;       /* offset: 0x02AA size: 16 bit */
            SIUL_PCR_16B_tag PCR310;       /* offset: 0x02AC size: 16 bit */
            SIUL_PCR_16B_tag PCR311;       /* offset: 0x02AE size: 16 bit */
            SIUL_PCR_16B_tag PCR312;       /* offset: 0x02B0 size: 16 bit */
            SIUL_PCR_16B_tag PCR313;       /* offset: 0x02B2 size: 16 bit */
            SIUL_PCR_16B_tag PCR314;       /* offset: 0x02B4 size: 16 bit */
            SIUL_PCR_16B_tag PCR315;       /* offset: 0x02B6 size: 16 bit */
            SIUL_PCR_16B_tag PCR316;       /* offset: 0x02B8 size: 16 bit */
            SIUL_PCR_16B_tag PCR317;       /* offset: 0x02BA size: 16 bit */
            SIUL_PCR_16B_tag PCR318;       /* offset: 0x02BC size: 16 bit */
            SIUL_PCR_16B_tag PCR319;       /* offset: 0x02BE size: 16 bit */
            SIUL_PCR_16B_tag PCR320;       /* offset: 0x02C0 size: 16 bit */
            SIUL_PCR_16B_tag PCR321;       /* offset: 0x02C2 size: 16 bit */
            SIUL_PCR_16B_tag PCR322;       /* offset: 0x02C4 size: 16 bit */
            SIUL_PCR_16B_tag PCR323;       /* offset: 0x02C6 size: 16 bit */
            SIUL_PCR_16B_tag PCR324;       /* offset: 0x02C8 size: 16 bit */
            SIUL_PCR_16B_tag PCR325;       /* offset: 0x02CA size: 16 bit */
            SIUL_PCR_16B_tag PCR326;       /* offset: 0x02CC size: 16 bit */
            SIUL_PCR_16B_tag PCR327;       /* offset: 0x02CE size: 16 bit */
            SIUL_PCR_16B_tag PCR328;       /* offset: 0x02D0 size: 16 bit */
            SIUL_PCR_16B_tag PCR329;       /* offset: 0x02D2 size: 16 bit */
            SIUL_PCR_16B_tag PCR330;       /* offset: 0x02D4 size: 16 bit */
            SIUL_PCR_16B_tag PCR331;       /* offset: 0x02D6 size: 16 bit */
            SIUL_PCR_16B_tag PCR332;       /* offset: 0x02D8 size: 16 bit */
            SIUL_PCR_16B_tag PCR333;       /* offset: 0x02DA size: 16 bit */
            SIUL_PCR_16B_tag PCR334;       /* offset: 0x02DC size: 16 bit */
            SIUL_PCR_16B_tag PCR335;       /* offset: 0x02DE size: 16 bit */
            SIUL_PCR_16B_tag PCR336;       /* offset: 0x02E0 size: 16 bit */
            SIUL_PCR_16B_tag PCR337;       /* offset: 0x02E2 size: 16 bit */
            SIUL_PCR_16B_tag PCR338;       /* offset: 0x02E4 size: 16 bit */
            SIUL_PCR_16B_tag PCR339;       /* offset: 0x02E6 size: 16 bit */
            SIUL_PCR_16B_tag PCR340;       /* offset: 0x02E8 size: 16 bit */
            SIUL_PCR_16B_tag PCR341;       /* offset: 0x02EA size: 16 bit */
            SIUL_PCR_16B_tag PCR342;       /* offset: 0x02EC size: 16 bit */
            SIUL_PCR_16B_tag PCR343;       /* offset: 0x02EE size: 16 bit */
            SIUL_PCR_16B_tag PCR344;       /* offset: 0x02F0 size: 16 bit */
            SIUL_PCR_16B_tag PCR345;       /* offset: 0x02F2 size: 16 bit */
            SIUL_PCR_16B_tag PCR346;       /* offset: 0x02F4 size: 16 bit */
            SIUL_PCR_16B_tag PCR347;       /* offset: 0x02F6 size: 16 bit */
            SIUL_PCR_16B_tag PCR348;       /* offset: 0x02F8 size: 16 bit */
            SIUL_PCR_16B_tag PCR349;       /* offset: 0x02FA size: 16 bit */
            SIUL_PCR_16B_tag PCR350;       /* offset: 0x02FC size: 16 bit */
            SIUL_PCR_16B_tag PCR351;       /* offset: 0x02FE size: 16 bit */
            SIUL_PCR_16B_tag PCR352;       /* offset: 0x0300 size: 16 bit */
            SIUL_PCR_16B_tag PCR353;       /* offset: 0x0302 size: 16 bit */
            SIUL_PCR_16B_tag PCR354;       /* offset: 0x0304 size: 16 bit */
            SIUL_PCR_16B_tag PCR355;       /* offset: 0x0306 size: 16 bit */
            SIUL_PCR_16B_tag PCR356;       /* offset: 0x0308 size: 16 bit */
            SIUL_PCR_16B_tag PCR357;       /* offset: 0x030A size: 16 bit */
            SIUL_PCR_16B_tag PCR358;       /* offset: 0x030C size: 16 bit */
            SIUL_PCR_16B_tag PCR359;       /* offset: 0x030E size: 16 bit */
            SIUL_PCR_16B_tag PCR360;       /* offset: 0x0310 size: 16 bit */
            SIUL_PCR_16B_tag PCR361;       /* offset: 0x0312 size: 16 bit */
            SIUL_PCR_16B_tag PCR362;       /* offset: 0x0314 size: 16 bit */
            SIUL_PCR_16B_tag PCR363;       /* offset: 0x0316 size: 16 bit */
            SIUL_PCR_16B_tag PCR364;       /* offset: 0x0318 size: 16 bit */
            SIUL_PCR_16B_tag PCR365;       /* offset: 0x031A size: 16 bit */
            SIUL_PCR_16B_tag PCR366;       /* offset: 0x031C size: 16 bit */
            SIUL_PCR_16B_tag PCR367;       /* offset: 0x031E size: 16 bit */
            SIUL_PCR_16B_tag PCR368;       /* offset: 0x0320 size: 16 bit */
            SIUL_PCR_16B_tag PCR369;       /* offset: 0x0322 size: 16 bit */
            SIUL_PCR_16B_tag PCR370;       /* offset: 0x0324 size: 16 bit */
            SIUL_PCR_16B_tag PCR371;       /* offset: 0x0326 size: 16 bit */
            SIUL_PCR_16B_tag PCR372;       /* offset: 0x0328 size: 16 bit */
            SIUL_PCR_16B_tag PCR373;       /* offset: 0x032A size: 16 bit */
            SIUL_PCR_16B_tag PCR374;       /* offset: 0x032C size: 16 bit */
            SIUL_PCR_16B_tag PCR375;       /* offset: 0x032E size: 16 bit */
            SIUL_PCR_16B_tag PCR376;       /* offset: 0x0330 size: 16 bit */
            SIUL_PCR_16B_tag PCR377;       /* offset: 0x0332 size: 16 bit */
            SIUL_PCR_16B_tag PCR378;       /* offset: 0x0334 size: 16 bit */
            SIUL_PCR_16B_tag PCR379;       /* offset: 0x0336 size: 16 bit */
            SIUL_PCR_16B_tag PCR380;       /* offset: 0x0338 size: 16 bit */
            SIUL_PCR_16B_tag PCR381;       /* offset: 0x033A size: 16 bit */
            SIUL_PCR_16B_tag PCR382;       /* offset: 0x033C size: 16 bit */
            SIUL_PCR_16B_tag PCR383;       /* offset: 0x033E size: 16 bit */
            SIUL_PCR_16B_tag PCR384;       /* offset: 0x0340 size: 16 bit */
            SIUL_PCR_16B_tag PCR385;       /* offset: 0x0342 size: 16 bit */
            SIUL_PCR_16B_tag PCR386;       /* offset: 0x0344 size: 16 bit */
            SIUL_PCR_16B_tag PCR387;       /* offset: 0x0346 size: 16 bit */
            SIUL_PCR_16B_tag PCR388;       /* offset: 0x0348 size: 16 bit */
            SIUL_PCR_16B_tag PCR389;       /* offset: 0x034A size: 16 bit */
            SIUL_PCR_16B_tag PCR390;       /* offset: 0x034C size: 16 bit */
            SIUL_PCR_16B_tag PCR391;       /* offset: 0x034E size: 16 bit */
            SIUL_PCR_16B_tag PCR392;       /* offset: 0x0350 size: 16 bit */
            SIUL_PCR_16B_tag PCR393;       /* offset: 0x0352 size: 16 bit */
            SIUL_PCR_16B_tag PCR394;       /* offset: 0x0354 size: 16 bit */
            SIUL_PCR_16B_tag PCR395;       /* offset: 0x0356 size: 16 bit */
            SIUL_PCR_16B_tag PCR396;       /* offset: 0x0358 size: 16 bit */
            SIUL_PCR_16B_tag PCR397;       /* offset: 0x035A size: 16 bit */
            SIUL_PCR_16B_tag PCR398;       /* offset: 0x035C size: 16 bit */
            SIUL_PCR_16B_tag PCR399;       /* offset: 0x035E size: 16 bit */
            SIUL_PCR_16B_tag PCR400;       /* offset: 0x0360 size: 16 bit */
            SIUL_PCR_16B_tag PCR401;       /* offset: 0x0362 size: 16 bit */
            SIUL_PCR_16B_tag PCR402;       /* offset: 0x0364 size: 16 bit */
            SIUL_PCR_16B_tag PCR403;       /* offset: 0x0366 size: 16 bit */
            SIUL_PCR_16B_tag PCR404;       /* offset: 0x0368 size: 16 bit */
            SIUL_PCR_16B_tag PCR405;       /* offset: 0x036A size: 16 bit */
            SIUL_PCR_16B_tag PCR406;       /* offset: 0x036C size: 16 bit */
            SIUL_PCR_16B_tag PCR407;       /* offset: 0x036E size: 16 bit */
            SIUL_PCR_16B_tag PCR408;       /* offset: 0x0370 size: 16 bit */
            SIUL_PCR_16B_tag PCR409;       /* offset: 0x0372 size: 16 bit */
            SIUL_PCR_16B_tag PCR410;       /* offset: 0x0374 size: 16 bit */
            SIUL_PCR_16B_tag PCR411;       /* offset: 0x0376 size: 16 bit */
            SIUL_PCR_16B_tag PCR412;       /* offset: 0x0378 size: 16 bit */
            SIUL_PCR_16B_tag PCR413;       /* offset: 0x037A size: 16 bit */
            SIUL_PCR_16B_tag PCR414;       /* offset: 0x037C size: 16 bit */
            SIUL_PCR_16B_tag PCR415;       /* offset: 0x037E size: 16 bit */
            SIUL_PCR_16B_tag PCR416;       /* offset: 0x0380 size: 16 bit */
            SIUL_PCR_16B_tag PCR417;       /* offset: 0x0382 size: 16 bit */
            SIUL_PCR_16B_tag PCR418;       /* offset: 0x0384 size: 16 bit */
            SIUL_PCR_16B_tag PCR419;       /* offset: 0x0386 size: 16 bit */
            SIUL_PCR_16B_tag PCR420;       /* offset: 0x0388 size: 16 bit */
            SIUL_PCR_16B_tag PCR421;       /* offset: 0x038A size: 16 bit */
            SIUL_PCR_16B_tag PCR422;       /* offset: 0x038C size: 16 bit */
            SIUL_PCR_16B_tag PCR423;       /* offset: 0x038E size: 16 bit */
            SIUL_PCR_16B_tag PCR424;       /* offset: 0x0390 size: 16 bit */
            SIUL_PCR_16B_tag PCR425;       /* offset: 0x0392 size: 16 bit */
            SIUL_PCR_16B_tag PCR426;       /* offset: 0x0394 size: 16 bit */
            SIUL_PCR_16B_tag PCR427;       /* offset: 0x0396 size: 16 bit */
            SIUL_PCR_16B_tag PCR428;       /* offset: 0x0398 size: 16 bit */
            SIUL_PCR_16B_tag PCR429;       /* offset: 0x039A size: 16 bit */
            SIUL_PCR_16B_tag PCR430;       /* offset: 0x039C size: 16 bit */
            SIUL_PCR_16B_tag PCR431;       /* offset: 0x039E size: 16 bit */
            SIUL_PCR_16B_tag PCR432;       /* offset: 0x03A0 size: 16 bit */
            SIUL_PCR_16B_tag PCR433;       /* offset: 0x03A2 size: 16 bit */
            SIUL_PCR_16B_tag PCR434;       /* offset: 0x03A4 size: 16 bit */
            SIUL_PCR_16B_tag PCR435;       /* offset: 0x03A6 size: 16 bit */
            SIUL_PCR_16B_tag PCR436;       /* offset: 0x03A8 size: 16 bit */
            SIUL_PCR_16B_tag PCR437;       /* offset: 0x03AA size: 16 bit */
            SIUL_PCR_16B_tag PCR438;       /* offset: 0x03AC size: 16 bit */
            SIUL_PCR_16B_tag PCR439;       /* offset: 0x03AE size: 16 bit */
            SIUL_PCR_16B_tag PCR440;       /* offset: 0x03B0 size: 16 bit */
            SIUL_PCR_16B_tag PCR441;       /* offset: 0x03B2 size: 16 bit */
            SIUL_PCR_16B_tag PCR442;       /* offset: 0x03B4 size: 16 bit */
            SIUL_PCR_16B_tag PCR443;       /* offset: 0x03B6 size: 16 bit */
            SIUL_PCR_16B_tag PCR444;       /* offset: 0x03B8 size: 16 bit */
            SIUL_PCR_16B_tag PCR445;       /* offset: 0x03BA size: 16 bit */
            SIUL_PCR_16B_tag PCR446;       /* offset: 0x03BC size: 16 bit */
            SIUL_PCR_16B_tag PCR447;       /* offset: 0x03BE size: 16 bit */
            SIUL_PCR_16B_tag PCR448;       /* offset: 0x03C0 size: 16 bit */
            SIUL_PCR_16B_tag PCR449;       /* offset: 0x03C2 size: 16 bit */
            SIUL_PCR_16B_tag PCR450;       /* offset: 0x03C4 size: 16 bit */
            SIUL_PCR_16B_tag PCR451;       /* offset: 0x03C6 size: 16 bit */
            SIUL_PCR_16B_tag PCR452;       /* offset: 0x03C8 size: 16 bit */
            SIUL_PCR_16B_tag PCR453;       /* offset: 0x03CA size: 16 bit */
            SIUL_PCR_16B_tag PCR454;       /* offset: 0x03CC size: 16 bit */
            SIUL_PCR_16B_tag PCR455;       /* offset: 0x03CE size: 16 bit */
            SIUL_PCR_16B_tag PCR456;       /* offset: 0x03D0 size: 16 bit */
            SIUL_PCR_16B_tag PCR457;       /* offset: 0x03D2 size: 16 bit */
            SIUL_PCR_16B_tag PCR458;       /* offset: 0x03D4 size: 16 bit */
            SIUL_PCR_16B_tag PCR459;       /* offset: 0x03D6 size: 16 bit */
            SIUL_PCR_16B_tag PCR460;       /* offset: 0x03D8 size: 16 bit */
            SIUL_PCR_16B_tag PCR461;       /* offset: 0x03DA size: 16 bit */
            SIUL_PCR_16B_tag PCR462;       /* offset: 0x03DC size: 16 bit */
            SIUL_PCR_16B_tag PCR463;       /* offset: 0x03DE size: 16 bit */
            SIUL_PCR_16B_tag PCR464;       /* offset: 0x03E0 size: 16 bit */
            SIUL_PCR_16B_tag PCR465;       /* offset: 0x03E2 size: 16 bit */
            SIUL_PCR_16B_tag PCR466;       /* offset: 0x03E4 size: 16 bit */
            SIUL_PCR_16B_tag PCR467;       /* offset: 0x03E6 size: 16 bit */
            SIUL_PCR_16B_tag PCR468;       /* offset: 0x03E8 size: 16 bit */
            SIUL_PCR_16B_tag PCR469;       /* offset: 0x03EA size: 16 bit */
            SIUL_PCR_16B_tag PCR470;       /* offset: 0x03EC size: 16 bit */
            SIUL_PCR_16B_tag PCR471;       /* offset: 0x03EE size: 16 bit */
            SIUL_PCR_16B_tag PCR472;       /* offset: 0x03F0 size: 16 bit */
            SIUL_PCR_16B_tag PCR473;       /* offset: 0x03F2 size: 16 bit */
            SIUL_PCR_16B_tag PCR474;       /* offset: 0x03F4 size: 16 bit */
            SIUL_PCR_16B_tag PCR475;       /* offset: 0x03F6 size: 16 bit */
            SIUL_PCR_16B_tag PCR476;       /* offset: 0x03F8 size: 16 bit */
            SIUL_PCR_16B_tag PCR477;       /* offset: 0x03FA size: 16 bit */
            SIUL_PCR_16B_tag PCR478;       /* offset: 0x03FC size: 16 bit */
            SIUL_PCR_16B_tag PCR479;       /* offset: 0x03FE size: 16 bit */
            SIUL_PCR_16B_tag PCR480;       /* offset: 0x0400 size: 16 bit */
            SIUL_PCR_16B_tag PCR481;       /* offset: 0x0402 size: 16 bit */
            SIUL_PCR_16B_tag PCR482;       /* offset: 0x0404 size: 16 bit */
            SIUL_PCR_16B_tag PCR483;       /* offset: 0x0406 size: 16 bit */
            SIUL_PCR_16B_tag PCR484;       /* offset: 0x0408 size: 16 bit */
            SIUL_PCR_16B_tag PCR485;       /* offset: 0x040A size: 16 bit */
            SIUL_PCR_16B_tag PCR486;       /* offset: 0x040C size: 16 bit */
            SIUL_PCR_16B_tag PCR487;       /* offset: 0x040E size: 16 bit */
            SIUL_PCR_16B_tag PCR488;       /* offset: 0x0410 size: 16 bit */
            SIUL_PCR_16B_tag PCR489;       /* offset: 0x0412 size: 16 bit */
            SIUL_PCR_16B_tag PCR490;       /* offset: 0x0414 size: 16 bit */
            SIUL_PCR_16B_tag PCR491;       /* offset: 0x0416 size: 16 bit */
            SIUL_PCR_16B_tag PCR492;       /* offset: 0x0418 size: 16 bit */
            SIUL_PCR_16B_tag PCR493;       /* offset: 0x041A size: 16 bit */
            SIUL_PCR_16B_tag PCR494;       /* offset: 0x041C size: 16 bit */
            SIUL_PCR_16B_tag PCR495;       /* offset: 0x041E size: 16 bit */
            SIUL_PCR_16B_tag PCR496;       /* offset: 0x0420 size: 16 bit */
            SIUL_PCR_16B_tag PCR497;       /* offset: 0x0422 size: 16 bit */
            SIUL_PCR_16B_tag PCR498;       /* offset: 0x0424 size: 16 bit */
            SIUL_PCR_16B_tag PCR499;       /* offset: 0x0426 size: 16 bit */
            SIUL_PCR_16B_tag PCR500;       /* offset: 0x0428 size: 16 bit */
            SIUL_PCR_16B_tag PCR501;       /* offset: 0x042A size: 16 bit */
            SIUL_PCR_16B_tag PCR502;       /* offset: 0x042C size: 16 bit */
            SIUL_PCR_16B_tag PCR503;       /* offset: 0x042E size: 16 bit */
            SIUL_PCR_16B_tag PCR504;       /* offset: 0x0430 size: 16 bit */
            SIUL_PCR_16B_tag PCR505;       /* offset: 0x0432 size: 16 bit */
            SIUL_PCR_16B_tag PCR506;       /* offset: 0x0434 size: 16 bit */
            SIUL_PCR_16B_tag PCR507;       /* offset: 0x0436 size: 16 bit */
            SIUL_PCR_16B_tag PCR508;       /* offset: 0x0438 size: 16 bit */
            SIUL_PCR_16B_tag PCR509;       /* offset: 0x043A size: 16 bit */
            SIUL_PCR_16B_tag PCR510;       /* offset: 0x043C size: 16 bit */
            SIUL_PCR_16B_tag PCR511;       /* offset: 0x043E size: 16 bit */
         };

      };
      int8_t SIUL_reserved_0440_C[192];
      union {
                          /* PSMI - Pad Selection for Multiplexed Inputs */
         SIUL_PSMI_32B_tag PSMI_32B[64];   /* offset: 0x0500  (0x0004 x 64) */

                          /* PSMI - Pad Selection for Multiplexed Inputs */
         SIUL_PSMI_8B_tag PSMI[256];       /* offset: 0x0500  (0x0001 x 256) */

         struct {
                          /* PSMI - Pad Selection for Multiplexed Inputs */
            SIUL_PSMI_32B_tag PSMI0_3;     /* offset: 0x0500 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI4_7;     /* offset: 0x0504 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI8_11;    /* offset: 0x0508 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI12_15;   /* offset: 0x050C size: 32 bit */
            SIUL_PSMI_32B_tag PSMI16_19;   /* offset: 0x0510 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI20_23;   /* offset: 0x0514 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI24_27;   /* offset: 0x0518 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI28_31;   /* offset: 0x051C size: 32 bit */
            SIUL_PSMI_32B_tag PSMI32_35;   /* offset: 0x0520 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI36_39;   /* offset: 0x0524 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI40_43;   /* offset: 0x0528 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI44_47;   /* offset: 0x052C size: 32 bit */
            SIUL_PSMI_32B_tag PSMI48_51;   /* offset: 0x0530 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI52_55;   /* offset: 0x0534 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI56_59;   /* offset: 0x0538 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI60_63;   /* offset: 0x053C size: 32 bit */
            SIUL_PSMI_32B_tag PSMI64_67;   /* offset: 0x0540 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI68_71;   /* offset: 0x0544 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI72_75;   /* offset: 0x0548 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI76_79;   /* offset: 0x054C size: 32 bit */
            SIUL_PSMI_32B_tag PSMI80_83;   /* offset: 0x0550 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI84_87;   /* offset: 0x0554 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI88_91;   /* offset: 0x0558 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI92_95;   /* offset: 0x055C size: 32 bit */
            SIUL_PSMI_32B_tag PSMI96_99;   /* offset: 0x0560 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI100_103;  /* offset: 0x0564 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI104_107;  /* offset: 0x0568 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI108_111;  /* offset: 0x056C size: 32 bit */
            SIUL_PSMI_32B_tag PSMI112_115;  /* offset: 0x0570 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI116_119;  /* offset: 0x0574 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI120_123;  /* offset: 0x0578 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI124_127;  /* offset: 0x057C size: 32 bit */
            SIUL_PSMI_32B_tag PSMI128_131;  /* offset: 0x0580 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI132_135;  /* offset: 0x0584 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI136_139;  /* offset: 0x0588 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI140_143;  /* offset: 0x058C size: 32 bit */
            SIUL_PSMI_32B_tag PSMI144_147;  /* offset: 0x0590 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI148_151;  /* offset: 0x0594 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI152_155;  /* offset: 0x0598 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI156_159;  /* offset: 0x059C size: 32 bit */
            SIUL_PSMI_32B_tag PSMI160_163;  /* offset: 0x05A0 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI164_167;  /* offset: 0x05A4 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI168_171;  /* offset: 0x05A8 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI172_175;  /* offset: 0x05AC size: 32 bit */
            SIUL_PSMI_32B_tag PSMI176_179;  /* offset: 0x05B0 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI180_183;  /* offset: 0x05B4 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI184_187;  /* offset: 0x05B8 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI188_191;  /* offset: 0x05BC size: 32 bit */
            SIUL_PSMI_32B_tag PSMI192_195;  /* offset: 0x05C0 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI196_199;  /* offset: 0x05C4 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI200_203;  /* offset: 0x05C8 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI204_207;  /* offset: 0x05CC size: 32 bit */
            SIUL_PSMI_32B_tag PSMI208_211;  /* offset: 0x05D0 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI212_215;  /* offset: 0x05D4 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI216_219;  /* offset: 0x05D8 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI220_223;  /* offset: 0x05DC size: 32 bit */
            SIUL_PSMI_32B_tag PSMI224_227;  /* offset: 0x05E0 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI228_231;  /* offset: 0x05E4 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI232_235;  /* offset: 0x05E8 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI236_239;  /* offset: 0x05EC size: 32 bit */
            SIUL_PSMI_32B_tag PSMI240_243;  /* offset: 0x05F0 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI244_247;  /* offset: 0x05F4 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI248_251;  /* offset: 0x05F8 size: 32 bit */
            SIUL_PSMI_32B_tag PSMI252_255;  /* offset: 0x05FC size: 32 bit */
         };

         struct {
                          /* PSMI - Pad Selection for Multiplexed Inputs */
            SIUL_PSMI_8B_tag PSMI0;        /* offset: 0x0500 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI1;        /* offset: 0x0501 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI2;        /* offset: 0x0502 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI3;        /* offset: 0x0503 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI4;        /* offset: 0x0504 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI5;        /* offset: 0x0505 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI6;        /* offset: 0x0506 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI7;        /* offset: 0x0507 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI8;        /* offset: 0x0508 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI9;        /* offset: 0x0509 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI10;       /* offset: 0x050A size: 8 bit */
            SIUL_PSMI_8B_tag PSMI11;       /* offset: 0x050B size: 8 bit */
            SIUL_PSMI_8B_tag PSMI12;       /* offset: 0x050C size: 8 bit */
            SIUL_PSMI_8B_tag PSMI13;       /* offset: 0x050D size: 8 bit */
            SIUL_PSMI_8B_tag PSMI14;       /* offset: 0x050E size: 8 bit */
            SIUL_PSMI_8B_tag PSMI15;       /* offset: 0x050F size: 8 bit */
            SIUL_PSMI_8B_tag PSMI16;       /* offset: 0x0510 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI17;       /* offset: 0x0511 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI18;       /* offset: 0x0512 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI19;       /* offset: 0x0513 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI20;       /* offset: 0x0514 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI21;       /* offset: 0x0515 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI22;       /* offset: 0x0516 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI23;       /* offset: 0x0517 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI24;       /* offset: 0x0518 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI25;       /* offset: 0x0519 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI26;       /* offset: 0x051A size: 8 bit */
            SIUL_PSMI_8B_tag PSMI27;       /* offset: 0x051B size: 8 bit */
            SIUL_PSMI_8B_tag PSMI28;       /* offset: 0x051C size: 8 bit */
            SIUL_PSMI_8B_tag PSMI29;       /* offset: 0x051D size: 8 bit */
            SIUL_PSMI_8B_tag PSMI30;       /* offset: 0x051E size: 8 bit */
            SIUL_PSMI_8B_tag PSMI31;       /* offset: 0x051F size: 8 bit */
            SIUL_PSMI_8B_tag PSMI32;       /* offset: 0x0520 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI33;       /* offset: 0x0521 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI34;       /* offset: 0x0522 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI35;       /* offset: 0x0523 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI36;       /* offset: 0x0524 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI37;       /* offset: 0x0525 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI38;       /* offset: 0x0526 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI39;       /* offset: 0x0527 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI40;       /* offset: 0x0528 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI41;       /* offset: 0x0529 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI42;       /* offset: 0x052A size: 8 bit */
            SIUL_PSMI_8B_tag PSMI43;       /* offset: 0x052B size: 8 bit */
            SIUL_PSMI_8B_tag PSMI44;       /* offset: 0x052C size: 8 bit */
            SIUL_PSMI_8B_tag PSMI45;       /* offset: 0x052D size: 8 bit */
            SIUL_PSMI_8B_tag PSMI46;       /* offset: 0x052E size: 8 bit */
            SIUL_PSMI_8B_tag PSMI47;       /* offset: 0x052F size: 8 bit */
            SIUL_PSMI_8B_tag PSMI48;       /* offset: 0x0530 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI49;       /* offset: 0x0531 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI50;       /* offset: 0x0532 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI51;       /* offset: 0x0533 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI52;       /* offset: 0x0534 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI53;       /* offset: 0x0535 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI54;       /* offset: 0x0536 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI55;       /* offset: 0x0537 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI56;       /* offset: 0x0538 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI57;       /* offset: 0x0539 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI58;       /* offset: 0x053A size: 8 bit */
            SIUL_PSMI_8B_tag PSMI59;       /* offset: 0x053B size: 8 bit */
            SIUL_PSMI_8B_tag PSMI60;       /* offset: 0x053C size: 8 bit */
            SIUL_PSMI_8B_tag PSMI61;       /* offset: 0x053D size: 8 bit */
            SIUL_PSMI_8B_tag PSMI62;       /* offset: 0x053E size: 8 bit */
            SIUL_PSMI_8B_tag PSMI63;       /* offset: 0x053F size: 8 bit */
            SIUL_PSMI_8B_tag PSMI64;       /* offset: 0x0540 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI65;       /* offset: 0x0541 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI66;       /* offset: 0x0542 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI67;       /* offset: 0x0543 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI68;       /* offset: 0x0544 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI69;       /* offset: 0x0545 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI70;       /* offset: 0x0546 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI71;       /* offset: 0x0547 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI72;       /* offset: 0x0548 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI73;       /* offset: 0x0549 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI74;       /* offset: 0x054A size: 8 bit */
            SIUL_PSMI_8B_tag PSMI75;       /* offset: 0x054B size: 8 bit */
            SIUL_PSMI_8B_tag PSMI76;       /* offset: 0x054C size: 8 bit */
            SIUL_PSMI_8B_tag PSMI77;       /* offset: 0x054D size: 8 bit */
            SIUL_PSMI_8B_tag PSMI78;       /* offset: 0x054E size: 8 bit */
            SIUL_PSMI_8B_tag PSMI79;       /* offset: 0x054F size: 8 bit */
            SIUL_PSMI_8B_tag PSMI80;       /* offset: 0x0550 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI81;       /* offset: 0x0551 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI82;       /* offset: 0x0552 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI83;       /* offset: 0x0553 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI84;       /* offset: 0x0554 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI85;       /* offset: 0x0555 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI86;       /* offset: 0x0556 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI87;       /* offset: 0x0557 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI88;       /* offset: 0x0558 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI89;       /* offset: 0x0559 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI90;       /* offset: 0x055A size: 8 bit */
            SIUL_PSMI_8B_tag PSMI91;       /* offset: 0x055B size: 8 bit */
            SIUL_PSMI_8B_tag PSMI92;       /* offset: 0x055C size: 8 bit */
            SIUL_PSMI_8B_tag PSMI93;       /* offset: 0x055D size: 8 bit */
            SIUL_PSMI_8B_tag PSMI94;       /* offset: 0x055E size: 8 bit */
            SIUL_PSMI_8B_tag PSMI95;       /* offset: 0x055F size: 8 bit */
            SIUL_PSMI_8B_tag PSMI96;       /* offset: 0x0560 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI97;       /* offset: 0x0561 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI98;       /* offset: 0x0562 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI99;       /* offset: 0x0563 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI100;      /* offset: 0x0564 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI101;      /* offset: 0x0565 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI102;      /* offset: 0x0566 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI103;      /* offset: 0x0567 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI104;      /* offset: 0x0568 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI105;      /* offset: 0x0569 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI106;      /* offset: 0x056A size: 8 bit */
            SIUL_PSMI_8B_tag PSMI107;      /* offset: 0x056B size: 8 bit */
            SIUL_PSMI_8B_tag PSMI108;      /* offset: 0x056C size: 8 bit */
            SIUL_PSMI_8B_tag PSMI109;      /* offset: 0x056D size: 8 bit */
            SIUL_PSMI_8B_tag PSMI110;      /* offset: 0x056E size: 8 bit */
            SIUL_PSMI_8B_tag PSMI111;      /* offset: 0x056F size: 8 bit */
            SIUL_PSMI_8B_tag PSMI112;      /* offset: 0x0570 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI113;      /* offset: 0x0571 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI114;      /* offset: 0x0572 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI115;      /* offset: 0x0573 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI116;      /* offset: 0x0574 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI117;      /* offset: 0x0575 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI118;      /* offset: 0x0576 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI119;      /* offset: 0x0577 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI120;      /* offset: 0x0578 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI121;      /* offset: 0x0579 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI122;      /* offset: 0x057A size: 8 bit */
            SIUL_PSMI_8B_tag PSMI123;      /* offset: 0x057B size: 8 bit */
            SIUL_PSMI_8B_tag PSMI124;      /* offset: 0x057C size: 8 bit */
            SIUL_PSMI_8B_tag PSMI125;      /* offset: 0x057D size: 8 bit */
            SIUL_PSMI_8B_tag PSMI126;      /* offset: 0x057E size: 8 bit */
            SIUL_PSMI_8B_tag PSMI127;      /* offset: 0x057F size: 8 bit */
            SIUL_PSMI_8B_tag PSMI128;      /* offset: 0x0580 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI129;      /* offset: 0x0581 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI130;      /* offset: 0x0582 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI131;      /* offset: 0x0583 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI132;      /* offset: 0x0584 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI133;      /* offset: 0x0585 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI134;      /* offset: 0x0586 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI135;      /* offset: 0x0587 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI136;      /* offset: 0x0588 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI137;      /* offset: 0x0589 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI138;      /* offset: 0x058A size: 8 bit */
            SIUL_PSMI_8B_tag PSMI139;      /* offset: 0x058B size: 8 bit */
            SIUL_PSMI_8B_tag PSMI140;      /* offset: 0x058C size: 8 bit */
            SIUL_PSMI_8B_tag PSMI141;      /* offset: 0x058D size: 8 bit */
            SIUL_PSMI_8B_tag PSMI142;      /* offset: 0x058E size: 8 bit */
            SIUL_PSMI_8B_tag PSMI143;      /* offset: 0x058F size: 8 bit */
            SIUL_PSMI_8B_tag PSMI144;      /* offset: 0x0590 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI145;      /* offset: 0x0591 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI146;      /* offset: 0x0592 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI147;      /* offset: 0x0593 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI148;      /* offset: 0x0594 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI149;      /* offset: 0x0595 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI150;      /* offset: 0x0596 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI151;      /* offset: 0x0597 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI152;      /* offset: 0x0598 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI153;      /* offset: 0x0599 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI154;      /* offset: 0x059A size: 8 bit */
            SIUL_PSMI_8B_tag PSMI155;      /* offset: 0x059B size: 8 bit */
            SIUL_PSMI_8B_tag PSMI156;      /* offset: 0x059C size: 8 bit */
            SIUL_PSMI_8B_tag PSMI157;      /* offset: 0x059D size: 8 bit */
            SIUL_PSMI_8B_tag PSMI158;      /* offset: 0x059E size: 8 bit */
            SIUL_PSMI_8B_tag PSMI159;      /* offset: 0x059F size: 8 bit */
            SIUL_PSMI_8B_tag PSMI160;      /* offset: 0x05A0 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI161;      /* offset: 0x05A1 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI162;      /* offset: 0x05A2 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI163;      /* offset: 0x05A3 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI164;      /* offset: 0x05A4 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI165;      /* offset: 0x05A5 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI166;      /* offset: 0x05A6 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI167;      /* offset: 0x05A7 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI168;      /* offset: 0x05A8 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI169;      /* offset: 0x05A9 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI170;      /* offset: 0x05AA size: 8 bit */
            SIUL_PSMI_8B_tag PSMI171;      /* offset: 0x05AB size: 8 bit */
            SIUL_PSMI_8B_tag PSMI172;      /* offset: 0x05AC size: 8 bit */
            SIUL_PSMI_8B_tag PSMI173;      /* offset: 0x05AD size: 8 bit */
            SIUL_PSMI_8B_tag PSMI174;      /* offset: 0x05AE size: 8 bit */
            SIUL_PSMI_8B_tag PSMI175;      /* offset: 0x05AF size: 8 bit */
            SIUL_PSMI_8B_tag PSMI176;      /* offset: 0x05B0 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI177;      /* offset: 0x05B1 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI178;      /* offset: 0x05B2 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI179;      /* offset: 0x05B3 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI180;      /* offset: 0x05B4 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI181;      /* offset: 0x05B5 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI182;      /* offset: 0x05B6 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI183;      /* offset: 0x05B7 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI184;      /* offset: 0x05B8 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI185;      /* offset: 0x05B9 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI186;      /* offset: 0x05BA size: 8 bit */
            SIUL_PSMI_8B_tag PSMI187;      /* offset: 0x05BB size: 8 bit */
            SIUL_PSMI_8B_tag PSMI188;      /* offset: 0x05BC size: 8 bit */
            SIUL_PSMI_8B_tag PSMI189;      /* offset: 0x05BD size: 8 bit */
            SIUL_PSMI_8B_tag PSMI190;      /* offset: 0x05BE size: 8 bit */
            SIUL_PSMI_8B_tag PSMI191;      /* offset: 0x05BF size: 8 bit */
            SIUL_PSMI_8B_tag PSMI192;      /* offset: 0x05C0 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI193;      /* offset: 0x05C1 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI194;      /* offset: 0x05C2 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI195;      /* offset: 0x05C3 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI196;      /* offset: 0x05C4 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI197;      /* offset: 0x05C5 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI198;      /* offset: 0x05C6 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI199;      /* offset: 0x05C7 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI200;      /* offset: 0x05C8 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI201;      /* offset: 0x05C9 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI202;      /* offset: 0x05CA size: 8 bit */
            SIUL_PSMI_8B_tag PSMI203;      /* offset: 0x05CB size: 8 bit */
            SIUL_PSMI_8B_tag PSMI204;      /* offset: 0x05CC size: 8 bit */
            SIUL_PSMI_8B_tag PSMI205;      /* offset: 0x05CD size: 8 bit */
            SIUL_PSMI_8B_tag PSMI206;      /* offset: 0x05CE size: 8 bit */
            SIUL_PSMI_8B_tag PSMI207;      /* offset: 0x05CF size: 8 bit */
            SIUL_PSMI_8B_tag PSMI208;      /* offset: 0x05D0 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI209;      /* offset: 0x05D1 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI210;      /* offset: 0x05D2 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI211;      /* offset: 0x05D3 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI212;      /* offset: 0x05D4 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI213;      /* offset: 0x05D5 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI214;      /* offset: 0x05D6 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI215;      /* offset: 0x05D7 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI216;      /* offset: 0x05D8 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI217;      /* offset: 0x05D9 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI218;      /* offset: 0x05DA size: 8 bit */
            SIUL_PSMI_8B_tag PSMI219;      /* offset: 0x05DB size: 8 bit */
            SIUL_PSMI_8B_tag PSMI220;      /* offset: 0x05DC size: 8 bit */
            SIUL_PSMI_8B_tag PSMI221;      /* offset: 0x05DD size: 8 bit */
            SIUL_PSMI_8B_tag PSMI222;      /* offset: 0x05DE size: 8 bit */
            SIUL_PSMI_8B_tag PSMI223;      /* offset: 0x05DF size: 8 bit */
            SIUL_PSMI_8B_tag PSMI224;      /* offset: 0x05E0 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI225;      /* offset: 0x05E1 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI226;      /* offset: 0x05E2 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI227;      /* offset: 0x05E3 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI228;      /* offset: 0x05E4 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI229;      /* offset: 0x05E5 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI230;      /* offset: 0x05E6 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI231;      /* offset: 0x05E7 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI232;      /* offset: 0x05E8 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI233;      /* offset: 0x05E9 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI234;      /* offset: 0x05EA size: 8 bit */
            SIUL_PSMI_8B_tag PSMI235;      /* offset: 0x05EB size: 8 bit */
            SIUL_PSMI_8B_tag PSMI236;      /* offset: 0x05EC size: 8 bit */
            SIUL_PSMI_8B_tag PSMI237;      /* offset: 0x05ED size: 8 bit */
            SIUL_PSMI_8B_tag PSMI238;      /* offset: 0x05EE size: 8 bit */
            SIUL_PSMI_8B_tag PSMI239;      /* offset: 0x05EF size: 8 bit */
            SIUL_PSMI_8B_tag PSMI240;      /* offset: 0x05F0 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI241;      /* offset: 0x05F1 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI242;      /* offset: 0x05F2 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI243;      /* offset: 0x05F3 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI244;      /* offset: 0x05F4 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI245;      /* offset: 0x05F5 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI246;      /* offset: 0x05F6 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI247;      /* offset: 0x05F7 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI248;      /* offset: 0x05F8 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI249;      /* offset: 0x05F9 size: 8 bit */
            SIUL_PSMI_8B_tag PSMI250;      /* offset: 0x05FA size: 8 bit */
            SIUL_PSMI_8B_tag PSMI251;      /* offset: 0x05FB size: 8 bit */
            SIUL_PSMI_8B_tag PSMI252;      /* offset: 0x05FC size: 8 bit */
            SIUL_PSMI_8B_tag PSMI253;      /* offset: 0x05FD size: 8 bit */
            SIUL_PSMI_8B_tag PSMI254;      /* offset: 0x05FE size: 8 bit */
            SIUL_PSMI_8B_tag PSMI255;      /* offset: 0x05FF size: 8 bit */
         };

      };
      union {
                                 /* GPDO - GPIO Pad Data Output Register */
         SIUL_GPDO_32B_tag GPDO_32B[128];  /* offset: 0x0600  (0x0004 x 128) */

                                 /* GPDO - GPIO Pad Data Output Register */
         SIUL_GPDO_8B_tag GPDO[512];       /* offset: 0x0600  (0x0001 x 512) */

         struct {
                                 /* GPDO - GPIO Pad Data Output Register */
            SIUL_GPDO_32B_tag GPDO0_3;     /* offset: 0x0600 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO4_7;     /* offset: 0x0604 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO8_11;    /* offset: 0x0608 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO12_15;   /* offset: 0x060C size: 32 bit */
            SIUL_GPDO_32B_tag GPDO16_19;   /* offset: 0x0610 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO20_23;   /* offset: 0x0614 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO24_27;   /* offset: 0x0618 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO28_31;   /* offset: 0x061C size: 32 bit */
            SIUL_GPDO_32B_tag GPDO32_35;   /* offset: 0x0620 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO36_39;   /* offset: 0x0624 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO40_43;   /* offset: 0x0628 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO44_47;   /* offset: 0x062C size: 32 bit */
            SIUL_GPDO_32B_tag GPDO48_51;   /* offset: 0x0630 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO52_55;   /* offset: 0x0634 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO56_59;   /* offset: 0x0638 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO60_63;   /* offset: 0x063C size: 32 bit */
            SIUL_GPDO_32B_tag GPDO64_67;   /* offset: 0x0640 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO68_71;   /* offset: 0x0644 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO72_75;   /* offset: 0x0648 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO76_79;   /* offset: 0x064C size: 32 bit */
            SIUL_GPDO_32B_tag GPDO80_83;   /* offset: 0x0650 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO84_87;   /* offset: 0x0654 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO88_91;   /* offset: 0x0658 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO92_95;   /* offset: 0x065C size: 32 bit */
            SIUL_GPDO_32B_tag GPDO96_99;   /* offset: 0x0660 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO100_103;  /* offset: 0x0664 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO104_107;  /* offset: 0x0668 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO108_111;  /* offset: 0x066C size: 32 bit */
            SIUL_GPDO_32B_tag GPDO112_115;  /* offset: 0x0670 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO116_119;  /* offset: 0x0674 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO120_123;  /* offset: 0x0678 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO124_127;  /* offset: 0x067C size: 32 bit */
            SIUL_GPDO_32B_tag GPDO128_131;  /* offset: 0x0680 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO132_135;  /* offset: 0x0684 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO136_139;  /* offset: 0x0688 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO140_143;  /* offset: 0x068C size: 32 bit */
            SIUL_GPDO_32B_tag GPDO144_147;  /* offset: 0x0690 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO148_151;  /* offset: 0x0694 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO152_155;  /* offset: 0x0698 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO156_159;  /* offset: 0x069C size: 32 bit */
            SIUL_GPDO_32B_tag GPDO160_163;  /* offset: 0x06A0 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO164_167;  /* offset: 0x06A4 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO168_171;  /* offset: 0x06A8 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO172_175;  /* offset: 0x06AC size: 32 bit */
            SIUL_GPDO_32B_tag GPDO176_179;  /* offset: 0x06B0 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO180_183;  /* offset: 0x06B4 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO184_187;  /* offset: 0x06B8 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO188_191;  /* offset: 0x06BC size: 32 bit */
            SIUL_GPDO_32B_tag GPDO192_195;  /* offset: 0x06C0 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO196_199;  /* offset: 0x06C4 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO200_203;  /* offset: 0x06C8 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO204_207;  /* offset: 0x06CC size: 32 bit */
            SIUL_GPDO_32B_tag GPDO208_211;  /* offset: 0x06D0 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO212_215;  /* offset: 0x06D4 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO216_219;  /* offset: 0x06D8 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO220_223;  /* offset: 0x06DC size: 32 bit */
            SIUL_GPDO_32B_tag GPDO224_227;  /* offset: 0x06E0 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO228_231;  /* offset: 0x06E4 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO232_235;  /* offset: 0x06E8 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO236_239;  /* offset: 0x06EC size: 32 bit */
            SIUL_GPDO_32B_tag GPDO240_243;  /* offset: 0x06F0 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO244_247;  /* offset: 0x06F4 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO248_251;  /* offset: 0x06F8 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO252_255;  /* offset: 0x06FC size: 32 bit */
            SIUL_GPDO_32B_tag GPDO256_259;  /* offset: 0x0700 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO260_263;  /* offset: 0x0704 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO264_267;  /* offset: 0x0708 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO268_271;  /* offset: 0x070C size: 32 bit */
            SIUL_GPDO_32B_tag GPDO272_275;  /* offset: 0x0710 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO276_279;  /* offset: 0x0714 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO280_283;  /* offset: 0x0718 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO284_287;  /* offset: 0x071C size: 32 bit */
            SIUL_GPDO_32B_tag GPDO288_291;  /* offset: 0x0720 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO292_295;  /* offset: 0x0724 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO296_299;  /* offset: 0x0728 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO300_303;  /* offset: 0x072C size: 32 bit */
            SIUL_GPDO_32B_tag GPDO304_307;  /* offset: 0x0730 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO308_311;  /* offset: 0x0734 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO312_315;  /* offset: 0x0738 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO316_319;  /* offset: 0x073C size: 32 bit */
            SIUL_GPDO_32B_tag GPDO320_323;  /* offset: 0x0740 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO324_327;  /* offset: 0x0744 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO328_331;  /* offset: 0x0748 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO332_335;  /* offset: 0x074C size: 32 bit */
            SIUL_GPDO_32B_tag GPDO336_339;  /* offset: 0x0750 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO340_343;  /* offset: 0x0754 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO344_347;  /* offset: 0x0758 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO348_351;  /* offset: 0x075C size: 32 bit */
            SIUL_GPDO_32B_tag GPDO352_355;  /* offset: 0x0760 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO356_359;  /* offset: 0x0764 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO360_363;  /* offset: 0x0768 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO364_367;  /* offset: 0x076C size: 32 bit */
            SIUL_GPDO_32B_tag GPDO368_371;  /* offset: 0x0770 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO372_375;  /* offset: 0x0774 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO376_379;  /* offset: 0x0778 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO380_383;  /* offset: 0x077C size: 32 bit */
            SIUL_GPDO_32B_tag GPDO384_387;  /* offset: 0x0780 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO388_391;  /* offset: 0x0784 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO392_395;  /* offset: 0x0788 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO396_399;  /* offset: 0x078C size: 32 bit */
            SIUL_GPDO_32B_tag GPDO400_403;  /* offset: 0x0790 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO404_407;  /* offset: 0x0794 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO408_411;  /* offset: 0x0798 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO412_415;  /* offset: 0x079C size: 32 bit */
            SIUL_GPDO_32B_tag GPDO416_419;  /* offset: 0x07A0 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO420_423;  /* offset: 0x07A4 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO424_427;  /* offset: 0x07A8 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO428_431;  /* offset: 0x07AC size: 32 bit */
            SIUL_GPDO_32B_tag GPDO432_435;  /* offset: 0x07B0 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO436_439;  /* offset: 0x07B4 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO440_443;  /* offset: 0x07B8 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO444_447;  /* offset: 0x07BC size: 32 bit */
            SIUL_GPDO_32B_tag GPDO448_451;  /* offset: 0x07C0 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO452_455;  /* offset: 0x07C4 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO456_459;  /* offset: 0x07C8 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO460_463;  /* offset: 0x07CC size: 32 bit */
            SIUL_GPDO_32B_tag GPDO464_467;  /* offset: 0x07D0 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO468_471;  /* offset: 0x07D4 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO472_475;  /* offset: 0x07D8 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO476_479;  /* offset: 0x07DC size: 32 bit */
            SIUL_GPDO_32B_tag GPDO480_483;  /* offset: 0x07E0 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO484_487;  /* offset: 0x07E4 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO488_491;  /* offset: 0x07E8 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO492_495;  /* offset: 0x07EC size: 32 bit */
            SIUL_GPDO_32B_tag GPDO496_499;  /* offset: 0x07F0 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO500_503;  /* offset: 0x07F4 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO504_507;  /* offset: 0x07F8 size: 32 bit */
            SIUL_GPDO_32B_tag GPDO508_511;  /* offset: 0x07FC size: 32 bit */
         };

         struct {
                                 /* GPDO - GPIO Pad Data Output Register */
            SIUL_GPDO_8B_tag GPDO0;        /* offset: 0x0600 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO1;        /* offset: 0x0601 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO2;        /* offset: 0x0602 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO3;        /* offset: 0x0603 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO4;        /* offset: 0x0604 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO5;        /* offset: 0x0605 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO6;        /* offset: 0x0606 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO7;        /* offset: 0x0607 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO8;        /* offset: 0x0608 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO9;        /* offset: 0x0609 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO10;       /* offset: 0x060A size: 8 bit */
            SIUL_GPDO_8B_tag GPDO11;       /* offset: 0x060B size: 8 bit */
            SIUL_GPDO_8B_tag GPDO12;       /* offset: 0x060C size: 8 bit */
            SIUL_GPDO_8B_tag GPDO13;       /* offset: 0x060D size: 8 bit */
            SIUL_GPDO_8B_tag GPDO14;       /* offset: 0x060E size: 8 bit */
            SIUL_GPDO_8B_tag GPDO15;       /* offset: 0x060F size: 8 bit */
            SIUL_GPDO_8B_tag GPDO16;       /* offset: 0x0610 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO17;       /* offset: 0x0611 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO18;       /* offset: 0x0612 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO19;       /* offset: 0x0613 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO20;       /* offset: 0x0614 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO21;       /* offset: 0x0615 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO22;       /* offset: 0x0616 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO23;       /* offset: 0x0617 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO24;       /* offset: 0x0618 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO25;       /* offset: 0x0619 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO26;       /* offset: 0x061A size: 8 bit */
            SIUL_GPDO_8B_tag GPDO27;       /* offset: 0x061B size: 8 bit */
            SIUL_GPDO_8B_tag GPDO28;       /* offset: 0x061C size: 8 bit */
            SIUL_GPDO_8B_tag GPDO29;       /* offset: 0x061D size: 8 bit */
            SIUL_GPDO_8B_tag GPDO30;       /* offset: 0x061E size: 8 bit */
            SIUL_GPDO_8B_tag GPDO31;       /* offset: 0x061F size: 8 bit */
            SIUL_GPDO_8B_tag GPDO32;       /* offset: 0x0620 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO33;       /* offset: 0x0621 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO34;       /* offset: 0x0622 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO35;       /* offset: 0x0623 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO36;       /* offset: 0x0624 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO37;       /* offset: 0x0625 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO38;       /* offset: 0x0626 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO39;       /* offset: 0x0627 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO40;       /* offset: 0x0628 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO41;       /* offset: 0x0629 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO42;       /* offset: 0x062A size: 8 bit */
            SIUL_GPDO_8B_tag GPDO43;       /* offset: 0x062B size: 8 bit */
            SIUL_GPDO_8B_tag GPDO44;       /* offset: 0x062C size: 8 bit */
            SIUL_GPDO_8B_tag GPDO45;       /* offset: 0x062D size: 8 bit */
            SIUL_GPDO_8B_tag GPDO46;       /* offset: 0x062E size: 8 bit */
            SIUL_GPDO_8B_tag GPDO47;       /* offset: 0x062F size: 8 bit */
            SIUL_GPDO_8B_tag GPDO48;       /* offset: 0x0630 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO49;       /* offset: 0x0631 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO50;       /* offset: 0x0632 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO51;       /* offset: 0x0633 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO52;       /* offset: 0x0634 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO53;       /* offset: 0x0635 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO54;       /* offset: 0x0636 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO55;       /* offset: 0x0637 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO56;       /* offset: 0x0638 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO57;       /* offset: 0x0639 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO58;       /* offset: 0x063A size: 8 bit */
            SIUL_GPDO_8B_tag GPDO59;       /* offset: 0x063B size: 8 bit */
            SIUL_GPDO_8B_tag GPDO60;       /* offset: 0x063C size: 8 bit */
            SIUL_GPDO_8B_tag GPDO61;       /* offset: 0x063D size: 8 bit */
            SIUL_GPDO_8B_tag GPDO62;       /* offset: 0x063E size: 8 bit */
            SIUL_GPDO_8B_tag GPDO63;       /* offset: 0x063F size: 8 bit */
            SIUL_GPDO_8B_tag GPDO64;       /* offset: 0x0640 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO65;       /* offset: 0x0641 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO66;       /* offset: 0x0642 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO67;       /* offset: 0x0643 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO68;       /* offset: 0x0644 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO69;       /* offset: 0x0645 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO70;       /* offset: 0x0646 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO71;       /* offset: 0x0647 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO72;       /* offset: 0x0648 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO73;       /* offset: 0x0649 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO74;       /* offset: 0x064A size: 8 bit */
            SIUL_GPDO_8B_tag GPDO75;       /* offset: 0x064B size: 8 bit */
            SIUL_GPDO_8B_tag GPDO76;       /* offset: 0x064C size: 8 bit */
            SIUL_GPDO_8B_tag GPDO77;       /* offset: 0x064D size: 8 bit */
            SIUL_GPDO_8B_tag GPDO78;       /* offset: 0x064E size: 8 bit */
            SIUL_GPDO_8B_tag GPDO79;       /* offset: 0x064F size: 8 bit */
            SIUL_GPDO_8B_tag GPDO80;       /* offset: 0x0650 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO81;       /* offset: 0x0651 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO82;       /* offset: 0x0652 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO83;       /* offset: 0x0653 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO84;       /* offset: 0x0654 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO85;       /* offset: 0x0655 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO86;       /* offset: 0x0656 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO87;       /* offset: 0x0657 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO88;       /* offset: 0x0658 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO89;       /* offset: 0x0659 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO90;       /* offset: 0x065A size: 8 bit */
            SIUL_GPDO_8B_tag GPDO91;       /* offset: 0x065B size: 8 bit */
            SIUL_GPDO_8B_tag GPDO92;       /* offset: 0x065C size: 8 bit */
            SIUL_GPDO_8B_tag GPDO93;       /* offset: 0x065D size: 8 bit */
            SIUL_GPDO_8B_tag GPDO94;       /* offset: 0x065E size: 8 bit */
            SIUL_GPDO_8B_tag GPDO95;       /* offset: 0x065F size: 8 bit */
            SIUL_GPDO_8B_tag GPDO96;       /* offset: 0x0660 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO97;       /* offset: 0x0661 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO98;       /* offset: 0x0662 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO99;       /* offset: 0x0663 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO100;      /* offset: 0x0664 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO101;      /* offset: 0x0665 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO102;      /* offset: 0x0666 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO103;      /* offset: 0x0667 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO104;      /* offset: 0x0668 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO105;      /* offset: 0x0669 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO106;      /* offset: 0x066A size: 8 bit */
            SIUL_GPDO_8B_tag GPDO107;      /* offset: 0x066B size: 8 bit */
            SIUL_GPDO_8B_tag GPDO108;      /* offset: 0x066C size: 8 bit */
            SIUL_GPDO_8B_tag GPDO109;      /* offset: 0x066D size: 8 bit */
            SIUL_GPDO_8B_tag GPDO110;      /* offset: 0x066E size: 8 bit */
            SIUL_GPDO_8B_tag GPDO111;      /* offset: 0x066F size: 8 bit */
            SIUL_GPDO_8B_tag GPDO112;      /* offset: 0x0670 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO113;      /* offset: 0x0671 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO114;      /* offset: 0x0672 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO115;      /* offset: 0x0673 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO116;      /* offset: 0x0674 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO117;      /* offset: 0x0675 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO118;      /* offset: 0x0676 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO119;      /* offset: 0x0677 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO120;      /* offset: 0x0678 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO121;      /* offset: 0x0679 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO122;      /* offset: 0x067A size: 8 bit */
            SIUL_GPDO_8B_tag GPDO123;      /* offset: 0x067B size: 8 bit */
            SIUL_GPDO_8B_tag GPDO124;      /* offset: 0x067C size: 8 bit */
            SIUL_GPDO_8B_tag GPDO125;      /* offset: 0x067D size: 8 bit */
            SIUL_GPDO_8B_tag GPDO126;      /* offset: 0x067E size: 8 bit */
            SIUL_GPDO_8B_tag GPDO127;      /* offset: 0x067F size: 8 bit */
            SIUL_GPDO_8B_tag GPDO128;      /* offset: 0x0680 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO129;      /* offset: 0x0681 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO130;      /* offset: 0x0682 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO131;      /* offset: 0x0683 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO132;      /* offset: 0x0684 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO133;      /* offset: 0x0685 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO134;      /* offset: 0x0686 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO135;      /* offset: 0x0687 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO136;      /* offset: 0x0688 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO137;      /* offset: 0x0689 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO138;      /* offset: 0x068A size: 8 bit */
            SIUL_GPDO_8B_tag GPDO139;      /* offset: 0x068B size: 8 bit */
            SIUL_GPDO_8B_tag GPDO140;      /* offset: 0x068C size: 8 bit */
            SIUL_GPDO_8B_tag GPDO141;      /* offset: 0x068D size: 8 bit */
            SIUL_GPDO_8B_tag GPDO142;      /* offset: 0x068E size: 8 bit */
            SIUL_GPDO_8B_tag GPDO143;      /* offset: 0x068F size: 8 bit */
            SIUL_GPDO_8B_tag GPDO144;      /* offset: 0x0690 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO145;      /* offset: 0x0691 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO146;      /* offset: 0x0692 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO147;      /* offset: 0x0693 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO148;      /* offset: 0x0694 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO149;      /* offset: 0x0695 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO150;      /* offset: 0x0696 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO151;      /* offset: 0x0697 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO152;      /* offset: 0x0698 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO153;      /* offset: 0x0699 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO154;      /* offset: 0x069A size: 8 bit */
            SIUL_GPDO_8B_tag GPDO155;      /* offset: 0x069B size: 8 bit */
            SIUL_GPDO_8B_tag GPDO156;      /* offset: 0x069C size: 8 bit */
            SIUL_GPDO_8B_tag GPDO157;      /* offset: 0x069D size: 8 bit */
            SIUL_GPDO_8B_tag GPDO158;      /* offset: 0x069E size: 8 bit */
            SIUL_GPDO_8B_tag GPDO159;      /* offset: 0x069F size: 8 bit */
            SIUL_GPDO_8B_tag GPDO160;      /* offset: 0x06A0 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO161;      /* offset: 0x06A1 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO162;      /* offset: 0x06A2 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO163;      /* offset: 0x06A3 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO164;      /* offset: 0x06A4 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO165;      /* offset: 0x06A5 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO166;      /* offset: 0x06A6 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO167;      /* offset: 0x06A7 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO168;      /* offset: 0x06A8 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO169;      /* offset: 0x06A9 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO170;      /* offset: 0x06AA size: 8 bit */
            SIUL_GPDO_8B_tag GPDO171;      /* offset: 0x06AB size: 8 bit */
            SIUL_GPDO_8B_tag GPDO172;      /* offset: 0x06AC size: 8 bit */
            SIUL_GPDO_8B_tag GPDO173;      /* offset: 0x06AD size: 8 bit */
            SIUL_GPDO_8B_tag GPDO174;      /* offset: 0x06AE size: 8 bit */
            SIUL_GPDO_8B_tag GPDO175;      /* offset: 0x06AF size: 8 bit */
            SIUL_GPDO_8B_tag GPDO176;      /* offset: 0x06B0 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO177;      /* offset: 0x06B1 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO178;      /* offset: 0x06B2 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO179;      /* offset: 0x06B3 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO180;      /* offset: 0x06B4 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO181;      /* offset: 0x06B5 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO182;      /* offset: 0x06B6 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO183;      /* offset: 0x06B7 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO184;      /* offset: 0x06B8 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO185;      /* offset: 0x06B9 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO186;      /* offset: 0x06BA size: 8 bit */
            SIUL_GPDO_8B_tag GPDO187;      /* offset: 0x06BB size: 8 bit */
            SIUL_GPDO_8B_tag GPDO188;      /* offset: 0x06BC size: 8 bit */
            SIUL_GPDO_8B_tag GPDO189;      /* offset: 0x06BD size: 8 bit */
            SIUL_GPDO_8B_tag GPDO190;      /* offset: 0x06BE size: 8 bit */
            SIUL_GPDO_8B_tag GPDO191;      /* offset: 0x06BF size: 8 bit */
            SIUL_GPDO_8B_tag GPDO192;      /* offset: 0x06C0 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO193;      /* offset: 0x06C1 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO194;      /* offset: 0x06C2 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO195;      /* offset: 0x06C3 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO196;      /* offset: 0x06C4 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO197;      /* offset: 0x06C5 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO198;      /* offset: 0x06C6 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO199;      /* offset: 0x06C7 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO200;      /* offset: 0x06C8 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO201;      /* offset: 0x06C9 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO202;      /* offset: 0x06CA size: 8 bit */
            SIUL_GPDO_8B_tag GPDO203;      /* offset: 0x06CB size: 8 bit */
            SIUL_GPDO_8B_tag GPDO204;      /* offset: 0x06CC size: 8 bit */
            SIUL_GPDO_8B_tag GPDO205;      /* offset: 0x06CD size: 8 bit */
            SIUL_GPDO_8B_tag GPDO206;      /* offset: 0x06CE size: 8 bit */
            SIUL_GPDO_8B_tag GPDO207;      /* offset: 0x06CF size: 8 bit */
            SIUL_GPDO_8B_tag GPDO208;      /* offset: 0x06D0 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO209;      /* offset: 0x06D1 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO210;      /* offset: 0x06D2 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO211;      /* offset: 0x06D3 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO212;      /* offset: 0x06D4 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO213;      /* offset: 0x06D5 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO214;      /* offset: 0x06D6 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO215;      /* offset: 0x06D7 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO216;      /* offset: 0x06D8 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO217;      /* offset: 0x06D9 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO218;      /* offset: 0x06DA size: 8 bit */
            SIUL_GPDO_8B_tag GPDO219;      /* offset: 0x06DB size: 8 bit */
            SIUL_GPDO_8B_tag GPDO220;      /* offset: 0x06DC size: 8 bit */
            SIUL_GPDO_8B_tag GPDO221;      /* offset: 0x06DD size: 8 bit */
            SIUL_GPDO_8B_tag GPDO222;      /* offset: 0x06DE size: 8 bit */
            SIUL_GPDO_8B_tag GPDO223;      /* offset: 0x06DF size: 8 bit */
            SIUL_GPDO_8B_tag GPDO224;      /* offset: 0x06E0 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO225;      /* offset: 0x06E1 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO226;      /* offset: 0x06E2 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO227;      /* offset: 0x06E3 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO228;      /* offset: 0x06E4 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO229;      /* offset: 0x06E5 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO230;      /* offset: 0x06E6 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO231;      /* offset: 0x06E7 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO232;      /* offset: 0x06E8 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO233;      /* offset: 0x06E9 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO234;      /* offset: 0x06EA size: 8 bit */
            SIUL_GPDO_8B_tag GPDO235;      /* offset: 0x06EB size: 8 bit */
            SIUL_GPDO_8B_tag GPDO236;      /* offset: 0x06EC size: 8 bit */
            SIUL_GPDO_8B_tag GPDO237;      /* offset: 0x06ED size: 8 bit */
            SIUL_GPDO_8B_tag GPDO238;      /* offset: 0x06EE size: 8 bit */
            SIUL_GPDO_8B_tag GPDO239;      /* offset: 0x06EF size: 8 bit */
            SIUL_GPDO_8B_tag GPDO240;      /* offset: 0x06F0 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO241;      /* offset: 0x06F1 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO242;      /* offset: 0x06F2 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO243;      /* offset: 0x06F3 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO244;      /* offset: 0x06F4 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO245;      /* offset: 0x06F5 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO246;      /* offset: 0x06F6 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO247;      /* offset: 0x06F7 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO248;      /* offset: 0x06F8 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO249;      /* offset: 0x06F9 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO250;      /* offset: 0x06FA size: 8 bit */
            SIUL_GPDO_8B_tag GPDO251;      /* offset: 0x06FB size: 8 bit */
            SIUL_GPDO_8B_tag GPDO252;      /* offset: 0x06FC size: 8 bit */
            SIUL_GPDO_8B_tag GPDO253;      /* offset: 0x06FD size: 8 bit */
            SIUL_GPDO_8B_tag GPDO254;      /* offset: 0x06FE size: 8 bit */
            SIUL_GPDO_8B_tag GPDO255;      /* offset: 0x06FF size: 8 bit */
            SIUL_GPDO_8B_tag GPDO256;      /* offset: 0x0700 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO257;      /* offset: 0x0701 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO258;      /* offset: 0x0702 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO259;      /* offset: 0x0703 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO260;      /* offset: 0x0704 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO261;      /* offset: 0x0705 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO262;      /* offset: 0x0706 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO263;      /* offset: 0x0707 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO264;      /* offset: 0x0708 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO265;      /* offset: 0x0709 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO266;      /* offset: 0x070A size: 8 bit */
            SIUL_GPDO_8B_tag GPDO267;      /* offset: 0x070B size: 8 bit */
            SIUL_GPDO_8B_tag GPDO268;      /* offset: 0x070C size: 8 bit */
            SIUL_GPDO_8B_tag GPDO269;      /* offset: 0x070D size: 8 bit */
            SIUL_GPDO_8B_tag GPDO270;      /* offset: 0x070E size: 8 bit */
            SIUL_GPDO_8B_tag GPDO271;      /* offset: 0x070F size: 8 bit */
            SIUL_GPDO_8B_tag GPDO272;      /* offset: 0x0710 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO273;      /* offset: 0x0711 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO274;      /* offset: 0x0712 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO275;      /* offset: 0x0713 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO276;      /* offset: 0x0714 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO277;      /* offset: 0x0715 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO278;      /* offset: 0x0716 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO279;      /* offset: 0x0717 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO280;      /* offset: 0x0718 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO281;      /* offset: 0x0719 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO282;      /* offset: 0x071A size: 8 bit */
            SIUL_GPDO_8B_tag GPDO283;      /* offset: 0x071B size: 8 bit */
            SIUL_GPDO_8B_tag GPDO284;      /* offset: 0x071C size: 8 bit */
            SIUL_GPDO_8B_tag GPDO285;      /* offset: 0x071D size: 8 bit */
            SIUL_GPDO_8B_tag GPDO286;      /* offset: 0x071E size: 8 bit */
            SIUL_GPDO_8B_tag GPDO287;      /* offset: 0x071F size: 8 bit */
            SIUL_GPDO_8B_tag GPDO288;      /* offset: 0x0720 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO289;      /* offset: 0x0721 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO290;      /* offset: 0x0722 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO291;      /* offset: 0x0723 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO292;      /* offset: 0x0724 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO293;      /* offset: 0x0725 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO294;      /* offset: 0x0726 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO295;      /* offset: 0x0727 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO296;      /* offset: 0x0728 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO297;      /* offset: 0x0729 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO298;      /* offset: 0x072A size: 8 bit */
            SIUL_GPDO_8B_tag GPDO299;      /* offset: 0x072B size: 8 bit */
            SIUL_GPDO_8B_tag GPDO300;      /* offset: 0x072C size: 8 bit */
            SIUL_GPDO_8B_tag GPDO301;      /* offset: 0x072D size: 8 bit */
            SIUL_GPDO_8B_tag GPDO302;      /* offset: 0x072E size: 8 bit */
            SIUL_GPDO_8B_tag GPDO303;      /* offset: 0x072F size: 8 bit */
            SIUL_GPDO_8B_tag GPDO304;      /* offset: 0x0730 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO305;      /* offset: 0x0731 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO306;      /* offset: 0x0732 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO307;      /* offset: 0x0733 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO308;      /* offset: 0x0734 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO309;      /* offset: 0x0735 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO310;      /* offset: 0x0736 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO311;      /* offset: 0x0737 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO312;      /* offset: 0x0738 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO313;      /* offset: 0x0739 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO314;      /* offset: 0x073A size: 8 bit */
            SIUL_GPDO_8B_tag GPDO315;      /* offset: 0x073B size: 8 bit */
            SIUL_GPDO_8B_tag GPDO316;      /* offset: 0x073C size: 8 bit */
            SIUL_GPDO_8B_tag GPDO317;      /* offset: 0x073D size: 8 bit */
            SIUL_GPDO_8B_tag GPDO318;      /* offset: 0x073E size: 8 bit */
            SIUL_GPDO_8B_tag GPDO319;      /* offset: 0x073F size: 8 bit */
            SIUL_GPDO_8B_tag GPDO320;      /* offset: 0x0740 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO321;      /* offset: 0x0741 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO322;      /* offset: 0x0742 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO323;      /* offset: 0x0743 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO324;      /* offset: 0x0744 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO325;      /* offset: 0x0745 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO326;      /* offset: 0x0746 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO327;      /* offset: 0x0747 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO328;      /* offset: 0x0748 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO329;      /* offset: 0x0749 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO330;      /* offset: 0x074A size: 8 bit */
            SIUL_GPDO_8B_tag GPDO331;      /* offset: 0x074B size: 8 bit */
            SIUL_GPDO_8B_tag GPDO332;      /* offset: 0x074C size: 8 bit */
            SIUL_GPDO_8B_tag GPDO333;      /* offset: 0x074D size: 8 bit */
            SIUL_GPDO_8B_tag GPDO334;      /* offset: 0x074E size: 8 bit */
            SIUL_GPDO_8B_tag GPDO335;      /* offset: 0x074F size: 8 bit */
            SIUL_GPDO_8B_tag GPDO336;      /* offset: 0x0750 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO337;      /* offset: 0x0751 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO338;      /* offset: 0x0752 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO339;      /* offset: 0x0753 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO340;      /* offset: 0x0754 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO341;      /* offset: 0x0755 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO342;      /* offset: 0x0756 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO343;      /* offset: 0x0757 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO344;      /* offset: 0x0758 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO345;      /* offset: 0x0759 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO346;      /* offset: 0x075A size: 8 bit */
            SIUL_GPDO_8B_tag GPDO347;      /* offset: 0x075B size: 8 bit */
            SIUL_GPDO_8B_tag GPDO348;      /* offset: 0x075C size: 8 bit */
            SIUL_GPDO_8B_tag GPDO349;      /* offset: 0x075D size: 8 bit */
            SIUL_GPDO_8B_tag GPDO350;      /* offset: 0x075E size: 8 bit */
            SIUL_GPDO_8B_tag GPDO351;      /* offset: 0x075F size: 8 bit */
            SIUL_GPDO_8B_tag GPDO352;      /* offset: 0x0760 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO353;      /* offset: 0x0761 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO354;      /* offset: 0x0762 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO355;      /* offset: 0x0763 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO356;      /* offset: 0x0764 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO357;      /* offset: 0x0765 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO358;      /* offset: 0x0766 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO359;      /* offset: 0x0767 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO360;      /* offset: 0x0768 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO361;      /* offset: 0x0769 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO362;      /* offset: 0x076A size: 8 bit */
            SIUL_GPDO_8B_tag GPDO363;      /* offset: 0x076B size: 8 bit */
            SIUL_GPDO_8B_tag GPDO364;      /* offset: 0x076C size: 8 bit */
            SIUL_GPDO_8B_tag GPDO365;      /* offset: 0x076D size: 8 bit */
            SIUL_GPDO_8B_tag GPDO366;      /* offset: 0x076E size: 8 bit */
            SIUL_GPDO_8B_tag GPDO367;      /* offset: 0x076F size: 8 bit */
            SIUL_GPDO_8B_tag GPDO368;      /* offset: 0x0770 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO369;      /* offset: 0x0771 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO370;      /* offset: 0x0772 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO371;      /* offset: 0x0773 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO372;      /* offset: 0x0774 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO373;      /* offset: 0x0775 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO374;      /* offset: 0x0776 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO375;      /* offset: 0x0777 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO376;      /* offset: 0x0778 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO377;      /* offset: 0x0779 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO378;      /* offset: 0x077A size: 8 bit */
            SIUL_GPDO_8B_tag GPDO379;      /* offset: 0x077B size: 8 bit */
            SIUL_GPDO_8B_tag GPDO380;      /* offset: 0x077C size: 8 bit */
            SIUL_GPDO_8B_tag GPDO381;      /* offset: 0x077D size: 8 bit */
            SIUL_GPDO_8B_tag GPDO382;      /* offset: 0x077E size: 8 bit */
            SIUL_GPDO_8B_tag GPDO383;      /* offset: 0x077F size: 8 bit */
            SIUL_GPDO_8B_tag GPDO384;      /* offset: 0x0780 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO385;      /* offset: 0x0781 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO386;      /* offset: 0x0782 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO387;      /* offset: 0x0783 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO388;      /* offset: 0x0784 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO389;      /* offset: 0x0785 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO390;      /* offset: 0x0786 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO391;      /* offset: 0x0787 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO392;      /* offset: 0x0788 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO393;      /* offset: 0x0789 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO394;      /* offset: 0x078A size: 8 bit */
            SIUL_GPDO_8B_tag GPDO395;      /* offset: 0x078B size: 8 bit */
            SIUL_GPDO_8B_tag GPDO396;      /* offset: 0x078C size: 8 bit */
            SIUL_GPDO_8B_tag GPDO397;      /* offset: 0x078D size: 8 bit */
            SIUL_GPDO_8B_tag GPDO398;      /* offset: 0x078E size: 8 bit */
            SIUL_GPDO_8B_tag GPDO399;      /* offset: 0x078F size: 8 bit */
            SIUL_GPDO_8B_tag GPDO400;      /* offset: 0x0790 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO401;      /* offset: 0x0791 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO402;      /* offset: 0x0792 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO403;      /* offset: 0x0793 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO404;      /* offset: 0x0794 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO405;      /* offset: 0x0795 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO406;      /* offset: 0x0796 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO407;      /* offset: 0x0797 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO408;      /* offset: 0x0798 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO409;      /* offset: 0x0799 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO410;      /* offset: 0x079A size: 8 bit */
            SIUL_GPDO_8B_tag GPDO411;      /* offset: 0x079B size: 8 bit */
            SIUL_GPDO_8B_tag GPDO412;      /* offset: 0x079C size: 8 bit */
            SIUL_GPDO_8B_tag GPDO413;      /* offset: 0x079D size: 8 bit */
            SIUL_GPDO_8B_tag GPDO414;      /* offset: 0x079E size: 8 bit */
            SIUL_GPDO_8B_tag GPDO415;      /* offset: 0x079F size: 8 bit */
            SIUL_GPDO_8B_tag GPDO416;      /* offset: 0x07A0 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO417;      /* offset: 0x07A1 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO418;      /* offset: 0x07A2 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO419;      /* offset: 0x07A3 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO420;      /* offset: 0x07A4 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO421;      /* offset: 0x07A5 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO422;      /* offset: 0x07A6 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO423;      /* offset: 0x07A7 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO424;      /* offset: 0x07A8 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO425;      /* offset: 0x07A9 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO426;      /* offset: 0x07AA size: 8 bit */
            SIUL_GPDO_8B_tag GPDO427;      /* offset: 0x07AB size: 8 bit */
            SIUL_GPDO_8B_tag GPDO428;      /* offset: 0x07AC size: 8 bit */
            SIUL_GPDO_8B_tag GPDO429;      /* offset: 0x07AD size: 8 bit */
            SIUL_GPDO_8B_tag GPDO430;      /* offset: 0x07AE size: 8 bit */
            SIUL_GPDO_8B_tag GPDO431;      /* offset: 0x07AF size: 8 bit */
            SIUL_GPDO_8B_tag GPDO432;      /* offset: 0x07B0 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO433;      /* offset: 0x07B1 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO434;      /* offset: 0x07B2 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO435;      /* offset: 0x07B3 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO436;      /* offset: 0x07B4 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO437;      /* offset: 0x07B5 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO438;      /* offset: 0x07B6 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO439;      /* offset: 0x07B7 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO440;      /* offset: 0x07B8 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO441;      /* offset: 0x07B9 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO442;      /* offset: 0x07BA size: 8 bit */
            SIUL_GPDO_8B_tag GPDO443;      /* offset: 0x07BB size: 8 bit */
            SIUL_GPDO_8B_tag GPDO444;      /* offset: 0x07BC size: 8 bit */
            SIUL_GPDO_8B_tag GPDO445;      /* offset: 0x07BD size: 8 bit */
            SIUL_GPDO_8B_tag GPDO446;      /* offset: 0x07BE size: 8 bit */
            SIUL_GPDO_8B_tag GPDO447;      /* offset: 0x07BF size: 8 bit */
            SIUL_GPDO_8B_tag GPDO448;      /* offset: 0x07C0 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO449;      /* offset: 0x07C1 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO450;      /* offset: 0x07C2 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO451;      /* offset: 0x07C3 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO452;      /* offset: 0x07C4 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO453;      /* offset: 0x07C5 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO454;      /* offset: 0x07C6 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO455;      /* offset: 0x07C7 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO456;      /* offset: 0x07C8 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO457;      /* offset: 0x07C9 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO458;      /* offset: 0x07CA size: 8 bit */
            SIUL_GPDO_8B_tag GPDO459;      /* offset: 0x07CB size: 8 bit */
            SIUL_GPDO_8B_tag GPDO460;      /* offset: 0x07CC size: 8 bit */
            SIUL_GPDO_8B_tag GPDO461;      /* offset: 0x07CD size: 8 bit */
            SIUL_GPDO_8B_tag GPDO462;      /* offset: 0x07CE size: 8 bit */
            SIUL_GPDO_8B_tag GPDO463;      /* offset: 0x07CF size: 8 bit */
            SIUL_GPDO_8B_tag GPDO464;      /* offset: 0x07D0 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO465;      /* offset: 0x07D1 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO466;      /* offset: 0x07D2 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO467;      /* offset: 0x07D3 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO468;      /* offset: 0x07D4 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO469;      /* offset: 0x07D5 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO470;      /* offset: 0x07D6 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO471;      /* offset: 0x07D7 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO472;      /* offset: 0x07D8 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO473;      /* offset: 0x07D9 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO474;      /* offset: 0x07DA size: 8 bit */
            SIUL_GPDO_8B_tag GPDO475;      /* offset: 0x07DB size: 8 bit */
            SIUL_GPDO_8B_tag GPDO476;      /* offset: 0x07DC size: 8 bit */
            SIUL_GPDO_8B_tag GPDO477;      /* offset: 0x07DD size: 8 bit */
            SIUL_GPDO_8B_tag GPDO478;      /* offset: 0x07DE size: 8 bit */
            SIUL_GPDO_8B_tag GPDO479;      /* offset: 0x07DF size: 8 bit */
            SIUL_GPDO_8B_tag GPDO480;      /* offset: 0x07E0 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO481;      /* offset: 0x07E1 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO482;      /* offset: 0x07E2 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO483;      /* offset: 0x07E3 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO484;      /* offset: 0x07E4 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO485;      /* offset: 0x07E5 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO486;      /* offset: 0x07E6 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO487;      /* offset: 0x07E7 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO488;      /* offset: 0x07E8 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO489;      /* offset: 0x07E9 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO490;      /* offset: 0x07EA size: 8 bit */
            SIUL_GPDO_8B_tag GPDO491;      /* offset: 0x07EB size: 8 bit */
            SIUL_GPDO_8B_tag GPDO492;      /* offset: 0x07EC size: 8 bit */
            SIUL_GPDO_8B_tag GPDO493;      /* offset: 0x07ED size: 8 bit */
            SIUL_GPDO_8B_tag GPDO494;      /* offset: 0x07EE size: 8 bit */
            SIUL_GPDO_8B_tag GPDO495;      /* offset: 0x07EF size: 8 bit */
            SIUL_GPDO_8B_tag GPDO496;      /* offset: 0x07F0 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO497;      /* offset: 0x07F1 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO498;      /* offset: 0x07F2 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO499;      /* offset: 0x07F3 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO500;      /* offset: 0x07F4 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO501;      /* offset: 0x07F5 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO502;      /* offset: 0x07F6 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO503;      /* offset: 0x07F7 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO504;      /* offset: 0x07F8 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO505;      /* offset: 0x07F9 size: 8 bit */
            SIUL_GPDO_8B_tag GPDO506;      /* offset: 0x07FA size: 8 bit */
            SIUL_GPDO_8B_tag GPDO507;      /* offset: 0x07FB size: 8 bit */
            SIUL_GPDO_8B_tag GPDO508;      /* offset: 0x07FC size: 8 bit */
            SIUL_GPDO_8B_tag GPDO509;      /* offset: 0x07FD size: 8 bit */
            SIUL_GPDO_8B_tag GPDO510;      /* offset: 0x07FE size: 8 bit */
            SIUL_GPDO_8B_tag GPDO511;      /* offset: 0x07FF size: 8 bit */
         };

      };
      union {
                                  /* GPDI - GPIO Pad Data Input Register */
         SIUL_GPDI_32B_tag GPDI_32B[128];  /* offset: 0x0800  (0x0004 x 128) */

                                  /* GPDI - GPIO Pad Data Input Register */
         SIUL_GPDI_8B_tag GPDI[512];       /* offset: 0x0800  (0x0001 x 512) */

         struct {
                                  /* GPDI - GPIO Pad Data Input Register */
            SIUL_GPDI_32B_tag GPDI0_3;     /* offset: 0x0800 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI4_7;     /* offset: 0x0804 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI8_11;    /* offset: 0x0808 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI12_15;   /* offset: 0x080C size: 32 bit */
            SIUL_GPDI_32B_tag GPDI16_19;   /* offset: 0x0810 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI20_23;   /* offset: 0x0814 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI24_27;   /* offset: 0x0818 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI28_31;   /* offset: 0x081C size: 32 bit */
            SIUL_GPDI_32B_tag GPDI32_35;   /* offset: 0x0820 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI36_39;   /* offset: 0x0824 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI40_43;   /* offset: 0x0828 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI44_47;   /* offset: 0x082C size: 32 bit */
            SIUL_GPDI_32B_tag GPDI48_51;   /* offset: 0x0830 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI52_55;   /* offset: 0x0834 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI56_59;   /* offset: 0x0838 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI60_63;   /* offset: 0x083C size: 32 bit */
            SIUL_GPDI_32B_tag GPDI64_67;   /* offset: 0x0840 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI68_71;   /* offset: 0x0844 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI72_75;   /* offset: 0x0848 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI76_79;   /* offset: 0x084C size: 32 bit */
            SIUL_GPDI_32B_tag GPDI80_83;   /* offset: 0x0850 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI84_87;   /* offset: 0x0854 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI88_91;   /* offset: 0x0858 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI92_95;   /* offset: 0x085C size: 32 bit */
            SIUL_GPDI_32B_tag GPDI96_99;   /* offset: 0x0860 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI100_103;  /* offset: 0x0864 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI104_107;  /* offset: 0x0868 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI108_111;  /* offset: 0x086C size: 32 bit */
            SIUL_GPDI_32B_tag GPDI112_115;  /* offset: 0x0870 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI116_119;  /* offset: 0x0874 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI120_123;  /* offset: 0x0878 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI124_127;  /* offset: 0x087C size: 32 bit */
            SIUL_GPDI_32B_tag GPDI128_131;  /* offset: 0x0880 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI132_135;  /* offset: 0x0884 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI136_139;  /* offset: 0x0888 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI140_143;  /* offset: 0x088C size: 32 bit */
            SIUL_GPDI_32B_tag GPDI144_147;  /* offset: 0x0890 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI148_151;  /* offset: 0x0894 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI152_155;  /* offset: 0x0898 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI156_159;  /* offset: 0x089C size: 32 bit */
            SIUL_GPDI_32B_tag GPDI160_163;  /* offset: 0x08A0 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI164_167;  /* offset: 0x08A4 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI168_171;  /* offset: 0x08A8 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI172_175;  /* offset: 0x08AC size: 32 bit */
            SIUL_GPDI_32B_tag GPDI176_179;  /* offset: 0x08B0 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI180_183;  /* offset: 0x08B4 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI184_187;  /* offset: 0x08B8 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI188_191;  /* offset: 0x08BC size: 32 bit */
            SIUL_GPDI_32B_tag GPDI192_195;  /* offset: 0x08C0 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI196_199;  /* offset: 0x08C4 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI200_203;  /* offset: 0x08C8 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI204_207;  /* offset: 0x08CC size: 32 bit */
            SIUL_GPDI_32B_tag GPDI208_211;  /* offset: 0x08D0 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI212_215;  /* offset: 0x08D4 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI216_219;  /* offset: 0x08D8 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI220_223;  /* offset: 0x08DC size: 32 bit */
            SIUL_GPDI_32B_tag GPDI224_227;  /* offset: 0x08E0 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI228_231;  /* offset: 0x08E4 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI232_235;  /* offset: 0x08E8 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI236_239;  /* offset: 0x08EC size: 32 bit */
            SIUL_GPDI_32B_tag GPDI240_243;  /* offset: 0x08F0 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI244_247;  /* offset: 0x08F4 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI248_251;  /* offset: 0x08F8 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI252_255;  /* offset: 0x08FC size: 32 bit */
            SIUL_GPDI_32B_tag GPDI256_259;  /* offset: 0x0900 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI260_263;  /* offset: 0x0904 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI264_267;  /* offset: 0x0908 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI268_271;  /* offset: 0x090C size: 32 bit */
            SIUL_GPDI_32B_tag GPDI272_275;  /* offset: 0x0910 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI276_279;  /* offset: 0x0914 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI280_283;  /* offset: 0x0918 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI284_287;  /* offset: 0x091C size: 32 bit */
            SIUL_GPDI_32B_tag GPDI288_291;  /* offset: 0x0920 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI292_295;  /* offset: 0x0924 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI296_299;  /* offset: 0x0928 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI300_303;  /* offset: 0x092C size: 32 bit */
            SIUL_GPDI_32B_tag GPDI304_307;  /* offset: 0x0930 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI308_311;  /* offset: 0x0934 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI312_315;  /* offset: 0x0938 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI316_319;  /* offset: 0x093C size: 32 bit */
            SIUL_GPDI_32B_tag GPDI320_323;  /* offset: 0x0940 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI324_327;  /* offset: 0x0944 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI328_331;  /* offset: 0x0948 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI332_335;  /* offset: 0x094C size: 32 bit */
            SIUL_GPDI_32B_tag GPDI336_339;  /* offset: 0x0950 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI340_343;  /* offset: 0x0954 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI344_347;  /* offset: 0x0958 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI348_351;  /* offset: 0x095C size: 32 bit */
            SIUL_GPDI_32B_tag GPDI352_355;  /* offset: 0x0960 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI356_359;  /* offset: 0x0964 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI360_363;  /* offset: 0x0968 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI364_367;  /* offset: 0x096C size: 32 bit */
            SIUL_GPDI_32B_tag GPDI368_371;  /* offset: 0x0970 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI372_375;  /* offset: 0x0974 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI376_379;  /* offset: 0x0978 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI380_383;  /* offset: 0x097C size: 32 bit */
            SIUL_GPDI_32B_tag GPDI384_387;  /* offset: 0x0980 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI388_391;  /* offset: 0x0984 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI392_395;  /* offset: 0x0988 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI396_399;  /* offset: 0x098C size: 32 bit */
            SIUL_GPDI_32B_tag GPDI400_403;  /* offset: 0x0990 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI404_407;  /* offset: 0x0994 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI408_411;  /* offset: 0x0998 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI412_415;  /* offset: 0x099C size: 32 bit */
            SIUL_GPDI_32B_tag GPDI416_419;  /* offset: 0x09A0 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI420_423;  /* offset: 0x09A4 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI424_427;  /* offset: 0x09A8 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI428_431;  /* offset: 0x09AC size: 32 bit */
            SIUL_GPDI_32B_tag GPDI432_435;  /* offset: 0x09B0 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI436_439;  /* offset: 0x09B4 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI440_443;  /* offset: 0x09B8 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI444_447;  /* offset: 0x09BC size: 32 bit */
            SIUL_GPDI_32B_tag GPDI448_451;  /* offset: 0x09C0 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI452_455;  /* offset: 0x09C4 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI456_459;  /* offset: 0x09C8 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI460_463;  /* offset: 0x09CC size: 32 bit */
            SIUL_GPDI_32B_tag GPDI464_467;  /* offset: 0x09D0 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI468_471;  /* offset: 0x09D4 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI472_475;  /* offset: 0x09D8 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI476_479;  /* offset: 0x09DC size: 32 bit */
            SIUL_GPDI_32B_tag GPDI480_483;  /* offset: 0x09E0 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI484_487;  /* offset: 0x09E4 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI488_491;  /* offset: 0x09E8 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI492_495;  /* offset: 0x09EC size: 32 bit */
            SIUL_GPDI_32B_tag GPDI496_499;  /* offset: 0x09F0 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI500_503;  /* offset: 0x09F4 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI504_507;  /* offset: 0x09F8 size: 32 bit */
            SIUL_GPDI_32B_tag GPDI508_511;  /* offset: 0x09FC size: 32 bit */
         };

         struct {
                                  /* GPDI - GPIO Pad Data Input Register */
            SIUL_GPDI_8B_tag GPDI0;        /* offset: 0x0800 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI1;        /* offset: 0x0801 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI2;        /* offset: 0x0802 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI3;        /* offset: 0x0803 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI4;        /* offset: 0x0804 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI5;        /* offset: 0x0805 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI6;        /* offset: 0x0806 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI7;        /* offset: 0x0807 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI8;        /* offset: 0x0808 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI9;        /* offset: 0x0809 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI10;       /* offset: 0x080A size: 8 bit */
            SIUL_GPDI_8B_tag GPDI11;       /* offset: 0x080B size: 8 bit */
            SIUL_GPDI_8B_tag GPDI12;       /* offset: 0x080C size: 8 bit */
            SIUL_GPDI_8B_tag GPDI13;       /* offset: 0x080D size: 8 bit */
            SIUL_GPDI_8B_tag GPDI14;       /* offset: 0x080E size: 8 bit */
            SIUL_GPDI_8B_tag GPDI15;       /* offset: 0x080F size: 8 bit */
            SIUL_GPDI_8B_tag GPDI16;       /* offset: 0x0810 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI17;       /* offset: 0x0811 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI18;       /* offset: 0x0812 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI19;       /* offset: 0x0813 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI20;       /* offset: 0x0814 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI21;       /* offset: 0x0815 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI22;       /* offset: 0x0816 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI23;       /* offset: 0x0817 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI24;       /* offset: 0x0818 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI25;       /* offset: 0x0819 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI26;       /* offset: 0x081A size: 8 bit */
            SIUL_GPDI_8B_tag GPDI27;       /* offset: 0x081B size: 8 bit */
            SIUL_GPDI_8B_tag GPDI28;       /* offset: 0x081C size: 8 bit */
            SIUL_GPDI_8B_tag GPDI29;       /* offset: 0x081D size: 8 bit */
            SIUL_GPDI_8B_tag GPDI30;       /* offset: 0x081E size: 8 bit */
            SIUL_GPDI_8B_tag GPDI31;       /* offset: 0x081F size: 8 bit */
            SIUL_GPDI_8B_tag GPDI32;       /* offset: 0x0820 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI33;       /* offset: 0x0821 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI34;       /* offset: 0x0822 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI35;       /* offset: 0x0823 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI36;       /* offset: 0x0824 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI37;       /* offset: 0x0825 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI38;       /* offset: 0x0826 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI39;       /* offset: 0x0827 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI40;       /* offset: 0x0828 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI41;       /* offset: 0x0829 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI42;       /* offset: 0x082A size: 8 bit */
            SIUL_GPDI_8B_tag GPDI43;       /* offset: 0x082B size: 8 bit */
            SIUL_GPDI_8B_tag GPDI44;       /* offset: 0x082C size: 8 bit */
            SIUL_GPDI_8B_tag GPDI45;       /* offset: 0x082D size: 8 bit */
            SIUL_GPDI_8B_tag GPDI46;       /* offset: 0x082E size: 8 bit */
            SIUL_GPDI_8B_tag GPDI47;       /* offset: 0x082F size: 8 bit */
            SIUL_GPDI_8B_tag GPDI48;       /* offset: 0x0830 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI49;       /* offset: 0x0831 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI50;       /* offset: 0x0832 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI51;       /* offset: 0x0833 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI52;       /* offset: 0x0834 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI53;       /* offset: 0x0835 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI54;       /* offset: 0x0836 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI55;       /* offset: 0x0837 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI56;       /* offset: 0x0838 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI57;       /* offset: 0x0839 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI58;       /* offset: 0x083A size: 8 bit */
            SIUL_GPDI_8B_tag GPDI59;       /* offset: 0x083B size: 8 bit */
            SIUL_GPDI_8B_tag GPDI60;       /* offset: 0x083C size: 8 bit */
            SIUL_GPDI_8B_tag GPDI61;       /* offset: 0x083D size: 8 bit */
            SIUL_GPDI_8B_tag GPDI62;       /* offset: 0x083E size: 8 bit */
            SIUL_GPDI_8B_tag GPDI63;       /* offset: 0x083F size: 8 bit */
            SIUL_GPDI_8B_tag GPDI64;       /* offset: 0x0840 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI65;       /* offset: 0x0841 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI66;       /* offset: 0x0842 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI67;       /* offset: 0x0843 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI68;       /* offset: 0x0844 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI69;       /* offset: 0x0845 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI70;       /* offset: 0x0846 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI71;       /* offset: 0x0847 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI72;       /* offset: 0x0848 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI73;       /* offset: 0x0849 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI74;       /* offset: 0x084A size: 8 bit */
            SIUL_GPDI_8B_tag GPDI75;       /* offset: 0x084B size: 8 bit */
            SIUL_GPDI_8B_tag GPDI76;       /* offset: 0x084C size: 8 bit */
            SIUL_GPDI_8B_tag GPDI77;       /* offset: 0x084D size: 8 bit */
            SIUL_GPDI_8B_tag GPDI78;       /* offset: 0x084E size: 8 bit */
            SIUL_GPDI_8B_tag GPDI79;       /* offset: 0x084F size: 8 bit */
            SIUL_GPDI_8B_tag GPDI80;       /* offset: 0x0850 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI81;       /* offset: 0x0851 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI82;       /* offset: 0x0852 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI83;       /* offset: 0x0853 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI84;       /* offset: 0x0854 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI85;       /* offset: 0x0855 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI86;       /* offset: 0x0856 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI87;       /* offset: 0x0857 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI88;       /* offset: 0x0858 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI89;       /* offset: 0x0859 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI90;       /* offset: 0x085A size: 8 bit */
            SIUL_GPDI_8B_tag GPDI91;       /* offset: 0x085B size: 8 bit */
            SIUL_GPDI_8B_tag GPDI92;       /* offset: 0x085C size: 8 bit */
            SIUL_GPDI_8B_tag GPDI93;       /* offset: 0x085D size: 8 bit */
            SIUL_GPDI_8B_tag GPDI94;       /* offset: 0x085E size: 8 bit */
            SIUL_GPDI_8B_tag GPDI95;       /* offset: 0x085F size: 8 bit */
            SIUL_GPDI_8B_tag GPDI96;       /* offset: 0x0860 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI97;       /* offset: 0x0861 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI98;       /* offset: 0x0862 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI99;       /* offset: 0x0863 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI100;      /* offset: 0x0864 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI101;      /* offset: 0x0865 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI102;      /* offset: 0x0866 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI103;      /* offset: 0x0867 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI104;      /* offset: 0x0868 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI105;      /* offset: 0x0869 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI106;      /* offset: 0x086A size: 8 bit */
            SIUL_GPDI_8B_tag GPDI107;      /* offset: 0x086B size: 8 bit */
            SIUL_GPDI_8B_tag GPDI108;      /* offset: 0x086C size: 8 bit */
            SIUL_GPDI_8B_tag GPDI109;      /* offset: 0x086D size: 8 bit */
            SIUL_GPDI_8B_tag GPDI110;      /* offset: 0x086E size: 8 bit */
            SIUL_GPDI_8B_tag GPDI111;      /* offset: 0x086F size: 8 bit */
            SIUL_GPDI_8B_tag GPDI112;      /* offset: 0x0870 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI113;      /* offset: 0x0871 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI114;      /* offset: 0x0872 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI115;      /* offset: 0x0873 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI116;      /* offset: 0x0874 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI117;      /* offset: 0x0875 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI118;      /* offset: 0x0876 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI119;      /* offset: 0x0877 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI120;      /* offset: 0x0878 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI121;      /* offset: 0x0879 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI122;      /* offset: 0x087A size: 8 bit */
            SIUL_GPDI_8B_tag GPDI123;      /* offset: 0x087B size: 8 bit */
            SIUL_GPDI_8B_tag GPDI124;      /* offset: 0x087C size: 8 bit */
            SIUL_GPDI_8B_tag GPDI125;      /* offset: 0x087D size: 8 bit */
            SIUL_GPDI_8B_tag GPDI126;      /* offset: 0x087E size: 8 bit */
            SIUL_GPDI_8B_tag GPDI127;      /* offset: 0x087F size: 8 bit */
            SIUL_GPDI_8B_tag GPDI128;      /* offset: 0x0880 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI129;      /* offset: 0x0881 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI130;      /* offset: 0x0882 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI131;      /* offset: 0x0883 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI132;      /* offset: 0x0884 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI133;      /* offset: 0x0885 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI134;      /* offset: 0x0886 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI135;      /* offset: 0x0887 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI136;      /* offset: 0x0888 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI137;      /* offset: 0x0889 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI138;      /* offset: 0x088A size: 8 bit */
            SIUL_GPDI_8B_tag GPDI139;      /* offset: 0x088B size: 8 bit */
            SIUL_GPDI_8B_tag GPDI140;      /* offset: 0x088C size: 8 bit */
            SIUL_GPDI_8B_tag GPDI141;      /* offset: 0x088D size: 8 bit */
            SIUL_GPDI_8B_tag GPDI142;      /* offset: 0x088E size: 8 bit */
            SIUL_GPDI_8B_tag GPDI143;      /* offset: 0x088F size: 8 bit */
            SIUL_GPDI_8B_tag GPDI144;      /* offset: 0x0890 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI145;      /* offset: 0x0891 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI146;      /* offset: 0x0892 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI147;      /* offset: 0x0893 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI148;      /* offset: 0x0894 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI149;      /* offset: 0x0895 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI150;      /* offset: 0x0896 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI151;      /* offset: 0x0897 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI152;      /* offset: 0x0898 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI153;      /* offset: 0x0899 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI154;      /* offset: 0x089A size: 8 bit */
            SIUL_GPDI_8B_tag GPDI155;      /* offset: 0x089B size: 8 bit */
            SIUL_GPDI_8B_tag GPDI156;      /* offset: 0x089C size: 8 bit */
            SIUL_GPDI_8B_tag GPDI157;      /* offset: 0x089D size: 8 bit */
            SIUL_GPDI_8B_tag GPDI158;      /* offset: 0x089E size: 8 bit */
            SIUL_GPDI_8B_tag GPDI159;      /* offset: 0x089F size: 8 bit */
            SIUL_GPDI_8B_tag GPDI160;      /* offset: 0x08A0 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI161;      /* offset: 0x08A1 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI162;      /* offset: 0x08A2 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI163;      /* offset: 0x08A3 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI164;      /* offset: 0x08A4 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI165;      /* offset: 0x08A5 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI166;      /* offset: 0x08A6 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI167;      /* offset: 0x08A7 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI168;      /* offset: 0x08A8 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI169;      /* offset: 0x08A9 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI170;      /* offset: 0x08AA size: 8 bit */
            SIUL_GPDI_8B_tag GPDI171;      /* offset: 0x08AB size: 8 bit */
            SIUL_GPDI_8B_tag GPDI172;      /* offset: 0x08AC size: 8 bit */
            SIUL_GPDI_8B_tag GPDI173;      /* offset: 0x08AD size: 8 bit */
            SIUL_GPDI_8B_tag GPDI174;      /* offset: 0x08AE size: 8 bit */
            SIUL_GPDI_8B_tag GPDI175;      /* offset: 0x08AF size: 8 bit */
            SIUL_GPDI_8B_tag GPDI176;      /* offset: 0x08B0 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI177;      /* offset: 0x08B1 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI178;      /* offset: 0x08B2 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI179;      /* offset: 0x08B3 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI180;      /* offset: 0x08B4 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI181;      /* offset: 0x08B5 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI182;      /* offset: 0x08B6 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI183;      /* offset: 0x08B7 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI184;      /* offset: 0x08B8 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI185;      /* offset: 0x08B9 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI186;      /* offset: 0x08BA size: 8 bit */
            SIUL_GPDI_8B_tag GPDI187;      /* offset: 0x08BB size: 8 bit */
            SIUL_GPDI_8B_tag GPDI188;      /* offset: 0x08BC size: 8 bit */
            SIUL_GPDI_8B_tag GPDI189;      /* offset: 0x08BD size: 8 bit */
            SIUL_GPDI_8B_tag GPDI190;      /* offset: 0x08BE size: 8 bit */
            SIUL_GPDI_8B_tag GPDI191;      /* offset: 0x08BF size: 8 bit */
            SIUL_GPDI_8B_tag GPDI192;      /* offset: 0x08C0 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI193;      /* offset: 0x08C1 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI194;      /* offset: 0x08C2 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI195;      /* offset: 0x08C3 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI196;      /* offset: 0x08C4 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI197;      /* offset: 0x08C5 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI198;      /* offset: 0x08C6 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI199;      /* offset: 0x08C7 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI200;      /* offset: 0x08C8 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI201;      /* offset: 0x08C9 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI202;      /* offset: 0x08CA size: 8 bit */
            SIUL_GPDI_8B_tag GPDI203;      /* offset: 0x08CB size: 8 bit */
            SIUL_GPDI_8B_tag GPDI204;      /* offset: 0x08CC size: 8 bit */
            SIUL_GPDI_8B_tag GPDI205;      /* offset: 0x08CD size: 8 bit */
            SIUL_GPDI_8B_tag GPDI206;      /* offset: 0x08CE size: 8 bit */
            SIUL_GPDI_8B_tag GPDI207;      /* offset: 0x08CF size: 8 bit */
            SIUL_GPDI_8B_tag GPDI208;      /* offset: 0x08D0 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI209;      /* offset: 0x08D1 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI210;      /* offset: 0x08D2 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI211;      /* offset: 0x08D3 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI212;      /* offset: 0x08D4 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI213;      /* offset: 0x08D5 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI214;      /* offset: 0x08D6 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI215;      /* offset: 0x08D7 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI216;      /* offset: 0x08D8 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI217;      /* offset: 0x08D9 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI218;      /* offset: 0x08DA size: 8 bit */
            SIUL_GPDI_8B_tag GPDI219;      /* offset: 0x08DB size: 8 bit */
            SIUL_GPDI_8B_tag GPDI220;      /* offset: 0x08DC size: 8 bit */
            SIUL_GPDI_8B_tag GPDI221;      /* offset: 0x08DD size: 8 bit */
            SIUL_GPDI_8B_tag GPDI222;      /* offset: 0x08DE size: 8 bit */
            SIUL_GPDI_8B_tag GPDI223;      /* offset: 0x08DF size: 8 bit */
            SIUL_GPDI_8B_tag GPDI224;      /* offset: 0x08E0 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI225;      /* offset: 0x08E1 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI226;      /* offset: 0x08E2 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI227;      /* offset: 0x08E3 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI228;      /* offset: 0x08E4 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI229;      /* offset: 0x08E5 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI230;      /* offset: 0x08E6 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI231;      /* offset: 0x08E7 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI232;      /* offset: 0x08E8 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI233;      /* offset: 0x08E9 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI234;      /* offset: 0x08EA size: 8 bit */
            SIUL_GPDI_8B_tag GPDI235;      /* offset: 0x08EB size: 8 bit */
            SIUL_GPDI_8B_tag GPDI236;      /* offset: 0x08EC size: 8 bit */
            SIUL_GPDI_8B_tag GPDI237;      /* offset: 0x08ED size: 8 bit */
            SIUL_GPDI_8B_tag GPDI238;      /* offset: 0x08EE size: 8 bit */
            SIUL_GPDI_8B_tag GPDI239;      /* offset: 0x08EF size: 8 bit */
            SIUL_GPDI_8B_tag GPDI240;      /* offset: 0x08F0 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI241;      /* offset: 0x08F1 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI242;      /* offset: 0x08F2 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI243;      /* offset: 0x08F3 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI244;      /* offset: 0x08F4 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI245;      /* offset: 0x08F5 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI246;      /* offset: 0x08F6 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI247;      /* offset: 0x08F7 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI248;      /* offset: 0x08F8 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI249;      /* offset: 0x08F9 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI250;      /* offset: 0x08FA size: 8 bit */
            SIUL_GPDI_8B_tag GPDI251;      /* offset: 0x08FB size: 8 bit */
            SIUL_GPDI_8B_tag GPDI252;      /* offset: 0x08FC size: 8 bit */
            SIUL_GPDI_8B_tag GPDI253;      /* offset: 0x08FD size: 8 bit */
            SIUL_GPDI_8B_tag GPDI254;      /* offset: 0x08FE size: 8 bit */
            SIUL_GPDI_8B_tag GPDI255;      /* offset: 0x08FF size: 8 bit */
            SIUL_GPDI_8B_tag GPDI256;      /* offset: 0x0900 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI257;      /* offset: 0x0901 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI258;      /* offset: 0x0902 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI259;      /* offset: 0x0903 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI260;      /* offset: 0x0904 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI261;      /* offset: 0x0905 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI262;      /* offset: 0x0906 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI263;      /* offset: 0x0907 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI264;      /* offset: 0x0908 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI265;      /* offset: 0x0909 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI266;      /* offset: 0x090A size: 8 bit */
            SIUL_GPDI_8B_tag GPDI267;      /* offset: 0x090B size: 8 bit */
            SIUL_GPDI_8B_tag GPDI268;      /* offset: 0x090C size: 8 bit */
            SIUL_GPDI_8B_tag GPDI269;      /* offset: 0x090D size: 8 bit */
            SIUL_GPDI_8B_tag GPDI270;      /* offset: 0x090E size: 8 bit */
            SIUL_GPDI_8B_tag GPDI271;      /* offset: 0x090F size: 8 bit */
            SIUL_GPDI_8B_tag GPDI272;      /* offset: 0x0910 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI273;      /* offset: 0x0911 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI274;      /* offset: 0x0912 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI275;      /* offset: 0x0913 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI276;      /* offset: 0x0914 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI277;      /* offset: 0x0915 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI278;      /* offset: 0x0916 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI279;      /* offset: 0x0917 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI280;      /* offset: 0x0918 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI281;      /* offset: 0x0919 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI282;      /* offset: 0x091A size: 8 bit */
            SIUL_GPDI_8B_tag GPDI283;      /* offset: 0x091B size: 8 bit */
            SIUL_GPDI_8B_tag GPDI284;      /* offset: 0x091C size: 8 bit */
            SIUL_GPDI_8B_tag GPDI285;      /* offset: 0x091D size: 8 bit */
            SIUL_GPDI_8B_tag GPDI286;      /* offset: 0x091E size: 8 bit */
            SIUL_GPDI_8B_tag GPDI287;      /* offset: 0x091F size: 8 bit */
            SIUL_GPDI_8B_tag GPDI288;      /* offset: 0x0920 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI289;      /* offset: 0x0921 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI290;      /* offset: 0x0922 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI291;      /* offset: 0x0923 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI292;      /* offset: 0x0924 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI293;      /* offset: 0x0925 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI294;      /* offset: 0x0926 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI295;      /* offset: 0x0927 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI296;      /* offset: 0x0928 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI297;      /* offset: 0x0929 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI298;      /* offset: 0x092A size: 8 bit */
            SIUL_GPDI_8B_tag GPDI299;      /* offset: 0x092B size: 8 bit */
            SIUL_GPDI_8B_tag GPDI300;      /* offset: 0x092C size: 8 bit */
            SIUL_GPDI_8B_tag GPDI301;      /* offset: 0x092D size: 8 bit */
            SIUL_GPDI_8B_tag GPDI302;      /* offset: 0x092E size: 8 bit */
            SIUL_GPDI_8B_tag GPDI303;      /* offset: 0x092F size: 8 bit */
            SIUL_GPDI_8B_tag GPDI304;      /* offset: 0x0930 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI305;      /* offset: 0x0931 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI306;      /* offset: 0x0932 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI307;      /* offset: 0x0933 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI308;      /* offset: 0x0934 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI309;      /* offset: 0x0935 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI310;      /* offset: 0x0936 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI311;      /* offset: 0x0937 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI312;      /* offset: 0x0938 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI313;      /* offset: 0x0939 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI314;      /* offset: 0x093A size: 8 bit */
            SIUL_GPDI_8B_tag GPDI315;      /* offset: 0x093B size: 8 bit */
            SIUL_GPDI_8B_tag GPDI316;      /* offset: 0x093C size: 8 bit */
            SIUL_GPDI_8B_tag GPDI317;      /* offset: 0x093D size: 8 bit */
            SIUL_GPDI_8B_tag GPDI318;      /* offset: 0x093E size: 8 bit */
            SIUL_GPDI_8B_tag GPDI319;      /* offset: 0x093F size: 8 bit */
            SIUL_GPDI_8B_tag GPDI320;      /* offset: 0x0940 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI321;      /* offset: 0x0941 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI322;      /* offset: 0x0942 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI323;      /* offset: 0x0943 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI324;      /* offset: 0x0944 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI325;      /* offset: 0x0945 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI326;      /* offset: 0x0946 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI327;      /* offset: 0x0947 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI328;      /* offset: 0x0948 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI329;      /* offset: 0x0949 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI330;      /* offset: 0x094A size: 8 bit */
            SIUL_GPDI_8B_tag GPDI331;      /* offset: 0x094B size: 8 bit */
            SIUL_GPDI_8B_tag GPDI332;      /* offset: 0x094C size: 8 bit */
            SIUL_GPDI_8B_tag GPDI333;      /* offset: 0x094D size: 8 bit */
            SIUL_GPDI_8B_tag GPDI334;      /* offset: 0x094E size: 8 bit */
            SIUL_GPDI_8B_tag GPDI335;      /* offset: 0x094F size: 8 bit */
            SIUL_GPDI_8B_tag GPDI336;      /* offset: 0x0950 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI337;      /* offset: 0x0951 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI338;      /* offset: 0x0952 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI339;      /* offset: 0x0953 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI340;      /* offset: 0x0954 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI341;      /* offset: 0x0955 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI342;      /* offset: 0x0956 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI343;      /* offset: 0x0957 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI344;      /* offset: 0x0958 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI345;      /* offset: 0x0959 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI346;      /* offset: 0x095A size: 8 bit */
            SIUL_GPDI_8B_tag GPDI347;      /* offset: 0x095B size: 8 bit */
            SIUL_GPDI_8B_tag GPDI348;      /* offset: 0x095C size: 8 bit */
            SIUL_GPDI_8B_tag GPDI349;      /* offset: 0x095D size: 8 bit */
            SIUL_GPDI_8B_tag GPDI350;      /* offset: 0x095E size: 8 bit */
            SIUL_GPDI_8B_tag GPDI351;      /* offset: 0x095F size: 8 bit */
            SIUL_GPDI_8B_tag GPDI352;      /* offset: 0x0960 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI353;      /* offset: 0x0961 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI354;      /* offset: 0x0962 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI355;      /* offset: 0x0963 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI356;      /* offset: 0x0964 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI357;      /* offset: 0x0965 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI358;      /* offset: 0x0966 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI359;      /* offset: 0x0967 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI360;      /* offset: 0x0968 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI361;      /* offset: 0x0969 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI362;      /* offset: 0x096A size: 8 bit */
            SIUL_GPDI_8B_tag GPDI363;      /* offset: 0x096B size: 8 bit */
            SIUL_GPDI_8B_tag GPDI364;      /* offset: 0x096C size: 8 bit */
            SIUL_GPDI_8B_tag GPDI365;      /* offset: 0x096D size: 8 bit */
            SIUL_GPDI_8B_tag GPDI366;      /* offset: 0x096E size: 8 bit */
            SIUL_GPDI_8B_tag GPDI367;      /* offset: 0x096F size: 8 bit */
            SIUL_GPDI_8B_tag GPDI368;      /* offset: 0x0970 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI369;      /* offset: 0x0971 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI370;      /* offset: 0x0972 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI371;      /* offset: 0x0973 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI372;      /* offset: 0x0974 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI373;      /* offset: 0x0975 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI374;      /* offset: 0x0976 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI375;      /* offset: 0x0977 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI376;      /* offset: 0x0978 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI377;      /* offset: 0x0979 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI378;      /* offset: 0x097A size: 8 bit */
            SIUL_GPDI_8B_tag GPDI379;      /* offset: 0x097B size: 8 bit */
            SIUL_GPDI_8B_tag GPDI380;      /* offset: 0x097C size: 8 bit */
            SIUL_GPDI_8B_tag GPDI381;      /* offset: 0x097D size: 8 bit */
            SIUL_GPDI_8B_tag GPDI382;      /* offset: 0x097E size: 8 bit */
            SIUL_GPDI_8B_tag GPDI383;      /* offset: 0x097F size: 8 bit */
            SIUL_GPDI_8B_tag GPDI384;      /* offset: 0x0980 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI385;      /* offset: 0x0981 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI386;      /* offset: 0x0982 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI387;      /* offset: 0x0983 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI388;      /* offset: 0x0984 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI389;      /* offset: 0x0985 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI390;      /* offset: 0x0986 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI391;      /* offset: 0x0987 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI392;      /* offset: 0x0988 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI393;      /* offset: 0x0989 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI394;      /* offset: 0x098A size: 8 bit */
            SIUL_GPDI_8B_tag GPDI395;      /* offset: 0x098B size: 8 bit */
            SIUL_GPDI_8B_tag GPDI396;      /* offset: 0x098C size: 8 bit */
            SIUL_GPDI_8B_tag GPDI397;      /* offset: 0x098D size: 8 bit */
            SIUL_GPDI_8B_tag GPDI398;      /* offset: 0x098E size: 8 bit */
            SIUL_GPDI_8B_tag GPDI399;      /* offset: 0x098F size: 8 bit */
            SIUL_GPDI_8B_tag GPDI400;      /* offset: 0x0990 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI401;      /* offset: 0x0991 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI402;      /* offset: 0x0992 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI403;      /* offset: 0x0993 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI404;      /* offset: 0x0994 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI405;      /* offset: 0x0995 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI406;      /* offset: 0x0996 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI407;      /* offset: 0x0997 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI408;      /* offset: 0x0998 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI409;      /* offset: 0x0999 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI410;      /* offset: 0x099A size: 8 bit */
            SIUL_GPDI_8B_tag GPDI411;      /* offset: 0x099B size: 8 bit */
            SIUL_GPDI_8B_tag GPDI412;      /* offset: 0x099C size: 8 bit */
            SIUL_GPDI_8B_tag GPDI413;      /* offset: 0x099D size: 8 bit */
            SIUL_GPDI_8B_tag GPDI414;      /* offset: 0x099E size: 8 bit */
            SIUL_GPDI_8B_tag GPDI415;      /* offset: 0x099F size: 8 bit */
            SIUL_GPDI_8B_tag GPDI416;      /* offset: 0x09A0 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI417;      /* offset: 0x09A1 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI418;      /* offset: 0x09A2 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI419;      /* offset: 0x09A3 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI420;      /* offset: 0x09A4 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI421;      /* offset: 0x09A5 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI422;      /* offset: 0x09A6 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI423;      /* offset: 0x09A7 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI424;      /* offset: 0x09A8 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI425;      /* offset: 0x09A9 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI426;      /* offset: 0x09AA size: 8 bit */
            SIUL_GPDI_8B_tag GPDI427;      /* offset: 0x09AB size: 8 bit */
            SIUL_GPDI_8B_tag GPDI428;      /* offset: 0x09AC size: 8 bit */
            SIUL_GPDI_8B_tag GPDI429;      /* offset: 0x09AD size: 8 bit */
            SIUL_GPDI_8B_tag GPDI430;      /* offset: 0x09AE size: 8 bit */
            SIUL_GPDI_8B_tag GPDI431;      /* offset: 0x09AF size: 8 bit */
            SIUL_GPDI_8B_tag GPDI432;      /* offset: 0x09B0 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI433;      /* offset: 0x09B1 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI434;      /* offset: 0x09B2 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI435;      /* offset: 0x09B3 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI436;      /* offset: 0x09B4 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI437;      /* offset: 0x09B5 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI438;      /* offset: 0x09B6 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI439;      /* offset: 0x09B7 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI440;      /* offset: 0x09B8 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI441;      /* offset: 0x09B9 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI442;      /* offset: 0x09BA size: 8 bit */
            SIUL_GPDI_8B_tag GPDI443;      /* offset: 0x09BB size: 8 bit */
            SIUL_GPDI_8B_tag GPDI444;      /* offset: 0x09BC size: 8 bit */
            SIUL_GPDI_8B_tag GPDI445;      /* offset: 0x09BD size: 8 bit */
            SIUL_GPDI_8B_tag GPDI446;      /* offset: 0x09BE size: 8 bit */
            SIUL_GPDI_8B_tag GPDI447;      /* offset: 0x09BF size: 8 bit */
            SIUL_GPDI_8B_tag GPDI448;      /* offset: 0x09C0 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI449;      /* offset: 0x09C1 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI450;      /* offset: 0x09C2 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI451;      /* offset: 0x09C3 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI452;      /* offset: 0x09C4 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI453;      /* offset: 0x09C5 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI454;      /* offset: 0x09C6 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI455;      /* offset: 0x09C7 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI456;      /* offset: 0x09C8 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI457;      /* offset: 0x09C9 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI458;      /* offset: 0x09CA size: 8 bit */
            SIUL_GPDI_8B_tag GPDI459;      /* offset: 0x09CB size: 8 bit */
            SIUL_GPDI_8B_tag GPDI460;      /* offset: 0x09CC size: 8 bit */
            SIUL_GPDI_8B_tag GPDI461;      /* offset: 0x09CD size: 8 bit */
            SIUL_GPDI_8B_tag GPDI462;      /* offset: 0x09CE size: 8 bit */
            SIUL_GPDI_8B_tag GPDI463;      /* offset: 0x09CF size: 8 bit */
            SIUL_GPDI_8B_tag GPDI464;      /* offset: 0x09D0 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI465;      /* offset: 0x09D1 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI466;      /* offset: 0x09D2 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI467;      /* offset: 0x09D3 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI468;      /* offset: 0x09D4 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI469;      /* offset: 0x09D5 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI470;      /* offset: 0x09D6 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI471;      /* offset: 0x09D7 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI472;      /* offset: 0x09D8 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI473;      /* offset: 0x09D9 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI474;      /* offset: 0x09DA size: 8 bit */
            SIUL_GPDI_8B_tag GPDI475;      /* offset: 0x09DB size: 8 bit */
            SIUL_GPDI_8B_tag GPDI476;      /* offset: 0x09DC size: 8 bit */
            SIUL_GPDI_8B_tag GPDI477;      /* offset: 0x09DD size: 8 bit */
            SIUL_GPDI_8B_tag GPDI478;      /* offset: 0x09DE size: 8 bit */
            SIUL_GPDI_8B_tag GPDI479;      /* offset: 0x09DF size: 8 bit */
            SIUL_GPDI_8B_tag GPDI480;      /* offset: 0x09E0 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI481;      /* offset: 0x09E1 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI482;      /* offset: 0x09E2 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI483;      /* offset: 0x09E3 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI484;      /* offset: 0x09E4 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI485;      /* offset: 0x09E5 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI486;      /* offset: 0x09E6 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI487;      /* offset: 0x09E7 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI488;      /* offset: 0x09E8 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI489;      /* offset: 0x09E9 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI490;      /* offset: 0x09EA size: 8 bit */
            SIUL_GPDI_8B_tag GPDI491;      /* offset: 0x09EB size: 8 bit */
            SIUL_GPDI_8B_tag GPDI492;      /* offset: 0x09EC size: 8 bit */
            SIUL_GPDI_8B_tag GPDI493;      /* offset: 0x09ED size: 8 bit */
            SIUL_GPDI_8B_tag GPDI494;      /* offset: 0x09EE size: 8 bit */
            SIUL_GPDI_8B_tag GPDI495;      /* offset: 0x09EF size: 8 bit */
            SIUL_GPDI_8B_tag GPDI496;      /* offset: 0x09F0 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI497;      /* offset: 0x09F1 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI498;      /* offset: 0x09F2 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI499;      /* offset: 0x09F3 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI500;      /* offset: 0x09F4 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI501;      /* offset: 0x09F5 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI502;      /* offset: 0x09F6 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI503;      /* offset: 0x09F7 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI504;      /* offset: 0x09F8 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI505;      /* offset: 0x09F9 size: 8 bit */
            SIUL_GPDI_8B_tag GPDI506;      /* offset: 0x09FA size: 8 bit */
            SIUL_GPDI_8B_tag GPDI507;      /* offset: 0x09FB size: 8 bit */
            SIUL_GPDI_8B_tag GPDI508;      /* offset: 0x09FC size: 8 bit */
            SIUL_GPDI_8B_tag GPDI509;      /* offset: 0x09FD size: 8 bit */
            SIUL_GPDI_8B_tag GPDI510;      /* offset: 0x09FE size: 8 bit */
            SIUL_GPDI_8B_tag GPDI511;      /* offset: 0x09FF size: 8 bit */
         };

      };
      int8_t SIUL_reserved_0A00_C[512];
      union {
                          /* PGPDO - Parallel GPIO Pad Data Out Register */
         SIUL_PGPDO_16B_tag PGPDO[32];     /* offset: 0x0C00  (0x0002 x 32) */

         struct {
                          /* PGPDO - Parallel GPIO Pad Data Out Register */
            SIUL_PGPDO_16B_tag PGPDO0;     /* offset: 0x0C00 size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO1;     /* offset: 0x0C02 size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO2;     /* offset: 0x0C04 size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO3;     /* offset: 0x0C06 size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO4;     /* offset: 0x0C08 size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO5;     /* offset: 0x0C0A size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO6;     /* offset: 0x0C0C size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO7;     /* offset: 0x0C0E size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO8;     /* offset: 0x0C10 size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO9;     /* offset: 0x0C12 size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO10;    /* offset: 0x0C14 size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO11;    /* offset: 0x0C16 size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO12;    /* offset: 0x0C18 size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO13;    /* offset: 0x0C1A size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO14;    /* offset: 0x0C1C size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO15;    /* offset: 0x0C1E size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO16;    /* offset: 0x0C20 size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO17;    /* offset: 0x0C22 size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO18;    /* offset: 0x0C24 size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO19;    /* offset: 0x0C26 size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO20;    /* offset: 0x0C28 size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO21;    /* offset: 0x0C2A size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO22;    /* offset: 0x0C2C size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO23;    /* offset: 0x0C2E size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO24;    /* offset: 0x0C30 size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO25;    /* offset: 0x0C32 size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO26;    /* offset: 0x0C34 size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO27;    /* offset: 0x0C36 size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO28;    /* offset: 0x0C38 size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO29;    /* offset: 0x0C3A size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO30;    /* offset: 0x0C3C size: 16 bit */
            SIUL_PGPDO_16B_tag PGPDO31;    /* offset: 0x0C3E size: 16 bit */
         };

      };
      union {
                           /* PGPDI - Parallel GPIO Pad Data In Register */
         SIUL_PGPDI_16B_tag PGPDI[32];     /* offset: 0x0C40  (0x0002 x 32) */

         struct {
                           /* PGPDI - Parallel GPIO Pad Data In Register */
            SIUL_PGPDI_16B_tag PGPDI0;     /* offset: 0x0C40 size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI1;     /* offset: 0x0C42 size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI2;     /* offset: 0x0C44 size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI3;     /* offset: 0x0C46 size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI4;     /* offset: 0x0C48 size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI5;     /* offset: 0x0C4A size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI6;     /* offset: 0x0C4C size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI7;     /* offset: 0x0C4E size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI8;     /* offset: 0x0C50 size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI9;     /* offset: 0x0C52 size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI10;    /* offset: 0x0C54 size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI11;    /* offset: 0x0C56 size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI12;    /* offset: 0x0C58 size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI13;    /* offset: 0x0C5A size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI14;    /* offset: 0x0C5C size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI15;    /* offset: 0x0C5E size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI16;    /* offset: 0x0C60 size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI17;    /* offset: 0x0C62 size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI18;    /* offset: 0x0C64 size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI19;    /* offset: 0x0C66 size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI20;    /* offset: 0x0C68 size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI21;    /* offset: 0x0C6A size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI22;    /* offset: 0x0C6C size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI23;    /* offset: 0x0C6E size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI24;    /* offset: 0x0C70 size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI25;    /* offset: 0x0C72 size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI26;    /* offset: 0x0C74 size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI27;    /* offset: 0x0C76 size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI28;    /* offset: 0x0C78 size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI29;    /* offset: 0x0C7A size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI30;    /* offset: 0x0C7C size: 16 bit */
            SIUL_PGPDI_16B_tag PGPDI31;    /* offset: 0x0C7E size: 16 bit */
         };

      };
      union {
                  /* MPGPDO - Masked Parallel GPIO Pad Data Out Register */
         SIUL_MPGPDO_32B_tag MPGPDO[32];   /* offset: 0x0C80  (0x0004 x 32) */

         struct {
                  /* MPGPDO - Masked Parallel GPIO Pad Data Out Register */
            SIUL_MPGPDO_32B_tag MPGPDO0;   /* offset: 0x0C80 size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO1;   /* offset: 0x0C84 size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO2;   /* offset: 0x0C88 size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO3;   /* offset: 0x0C8C size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO4;   /* offset: 0x0C90 size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO5;   /* offset: 0x0C94 size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO6;   /* offset: 0x0C98 size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO7;   /* offset: 0x0C9C size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO8;   /* offset: 0x0CA0 size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO9;   /* offset: 0x0CA4 size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO10;  /* offset: 0x0CA8 size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO11;  /* offset: 0x0CAC size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO12;  /* offset: 0x0CB0 size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO13;  /* offset: 0x0CB4 size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO14;  /* offset: 0x0CB8 size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO15;  /* offset: 0x0CBC size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO16;  /* offset: 0x0CC0 size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO17;  /* offset: 0x0CC4 size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO18;  /* offset: 0x0CC8 size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO19;  /* offset: 0x0CCC size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO20;  /* offset: 0x0CD0 size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO21;  /* offset: 0x0CD4 size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO22;  /* offset: 0x0CD8 size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO23;  /* offset: 0x0CDC size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO24;  /* offset: 0x0CE0 size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO25;  /* offset: 0x0CE4 size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO26;  /* offset: 0x0CE8 size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO27;  /* offset: 0x0CEC size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO28;  /* offset: 0x0CF0 size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO29;  /* offset: 0x0CF4 size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO30;  /* offset: 0x0CF8 size: 32 bit */
            SIUL_MPGPDO_32B_tag MPGPDO31;  /* offset: 0x0CFC size: 32 bit */
         };

      };
      int8_t SIUL_reserved_0D00_C[768];
      union {
                     /* IFMC - Interrupt Filter Maximum Counter Register */
         SIUL_IFMC_32B_tag IFMC[32];       /* offset: 0x1000  (0x0004 x 32) */

         struct {
                     /* IFMC - Interrupt Filter Maximum Counter Register */
            SIUL_IFMC_32B_tag IFMC0;       /* offset: 0x1000 size: 32 bit */
            SIUL_IFMC_32B_tag IFMC1;       /* offset: 0x1004 size: 32 bit */
            SIUL_IFMC_32B_tag IFMC2;       /* offset: 0x1008 size: 32 bit */
            SIUL_IFMC_32B_tag IFMC3;       /* offset: 0x100C size: 32 bit */
            SIUL_IFMC_32B_tag IFMC4;       /* offset: 0x1010 size: 32 bit */
            SIUL_IFMC_32B_tag IFMC5;       /* offset: 0x1014 size: 32 bit */
            SIUL_IFMC_32B_tag IFMC6;       /* offset: 0x1018 size: 32 bit */
            SIUL_IFMC_32B_tag IFMC7;       /* offset: 0x101C size: 32 bit */
            SIUL_IFMC_32B_tag IFMC8;       /* offset: 0x1020 size: 32 bit */
            SIUL_IFMC_32B_tag IFMC9;       /* offset: 0x1024 size: 32 bit */
            SIUL_IFMC_32B_tag IFMC10;      /* offset: 0x1028 size: 32 bit */
            SIUL_IFMC_32B_tag IFMC11;      /* offset: 0x102C size: 32 bit */
            SIUL_IFMC_32B_tag IFMC12;      /* offset: 0x1030 size: 32 bit */
            SIUL_IFMC_32B_tag IFMC13;      /* offset: 0x1034 size: 32 bit */
            SIUL_IFMC_32B_tag IFMC14;      /* offset: 0x1038 size: 32 bit */
            SIUL_IFMC_32B_tag IFMC15;      /* offset: 0x103C size: 32 bit */
            SIUL_IFMC_32B_tag IFMC16;      /* offset: 0x1040 size: 32 bit */
            SIUL_IFMC_32B_tag IFMC17;      /* offset: 0x1044 size: 32 bit */
            SIUL_IFMC_32B_tag IFMC18;      /* offset: 0x1048 size: 32 bit */
            SIUL_IFMC_32B_tag IFMC19;      /* offset: 0x104C size: 32 bit */
            SIUL_IFMC_32B_tag IFMC20;      /* offset: 0x1050 size: 32 bit */
            SIUL_IFMC_32B_tag IFMC21;      /* offset: 0x1054 size: 32 bit */
            SIUL_IFMC_32B_tag IFMC22;      /* offset: 0x1058 size: 32 bit */
            SIUL_IFMC_32B_tag IFMC23;      /* offset: 0x105C size: 32 bit */
            SIUL_IFMC_32B_tag IFMC24;      /* offset: 0x1060 size: 32 bit */
            SIUL_IFMC_32B_tag IFMC25;      /* offset: 0x1064 size: 32 bit */
            SIUL_IFMC_32B_tag IFMC26;      /* offset: 0x1068 size: 32 bit */
            SIUL_IFMC_32B_tag IFMC27;      /* offset: 0x106C size: 32 bit */
            SIUL_IFMC_32B_tag IFMC28;      /* offset: 0x1070 size: 32 bit */
            SIUL_IFMC_32B_tag IFMC29;      /* offset: 0x1074 size: 32 bit */
            SIUL_IFMC_32B_tag IFMC30;      /* offset: 0x1078 size: 32 bit */
            SIUL_IFMC_32B_tag IFMC31;      /* offset: 0x107C size: 32 bit */
         };

      };
                     /* IFCPR - Inerrupt Filter Clock Prescaler Register */
      SIUL_IFCPR_32B_tag IFCPR;            /* offset: 0x1080 size: 32 bit */
   } SIUL_tag;


#define SIUL  (*(volatile SIUL_tag *) 0xC3F90000UL)

/****************************************************************/
/*                                                              */
/* Module: PIT_RTI  */
/*                                                              */
/****************************************************************/

   typedef union {   /* PIT_RTI_PITMCR - PIT Module Control Register */
      vuint32_t R;
      struct {
         vuint32_t:30;
         vuint32_t  MDIS:1;            /* Module Disable. Disable the module clock */
         vuint32_t  FRZ:1;             /* Freeze. Allows the timers to be stoppedwhen the device enters debug mode */
      } B;
   } PIT_RTI_PITMCR_32B_tag;


   /* Register layout for all registers LDVAL... */

   typedef union {   /* PIT_RTI_LDVAL - Timer Load Value Register */
      vuint32_t R;
      struct {
         vuint32_t  TSV:32;            /* Time Start Value Bits */
      } B;
   } PIT_RTI_LDVAL_32B_tag;


   /* Register layout for all registers CVAL... */

   typedef union {   /* PIT_RTI_CVAL - Current Timer Value Register */
      vuint32_t R;
      struct {
         vuint32_t  TVL:32;            /* Current Timer Value Bits */
      } B;
   } PIT_RTI_CVAL_32B_tag;


   /* Register layout for all registers TCTRL... */

   typedef union {   /* PIT_RTI_TCTRL - Timer Control Register */
      vuint32_t R;
      struct {
         vuint32_t:30;
         vuint32_t  TIE:1;             /* Timer Interrupt Enable Bit */
         vuint32_t  TEN:1;             /* Timer Enable Bit */
      } B;
   } PIT_RTI_TCTRL_32B_tag;


   /* Register layout for all registers TFLG... */

   typedef union {   /* PIT_RTI_TFLG - Timer Flag Register */
      vuint32_t R;
      struct {
         vuint32_t:31;
         vuint32_t  TIF:1;             /* Timer Interrupt Flag Bit */
      } B;
   } PIT_RTI_TFLG_32B_tag;


   typedef struct PIT_RTI_CHANNEL_struct_tag {

                            /* PIT_RTI_LDVAL - Timer Load Value Register */
      PIT_RTI_LDVAL_32B_tag LDVAL;        /* relative offset: 0x0000 */
                          /* PIT_RTI_CVAL - Current Timer Value Register */
      PIT_RTI_CVAL_32B_tag CVAL;          /* relative offset: 0x0004 */
                               /* PIT_RTI_TCTRL - Timer Control Register */
      PIT_RTI_TCTRL_32B_tag TCTRL;        /* relative offset: 0x0008 */
                                   /* PIT_RTI_TFLG - Timer Flag Register */
      PIT_RTI_TFLG_32B_tag TFLG;          /* relative offset: 0x000C */

   } PIT_RTI_CHANNEL_tag;


   typedef struct PIT_RTI_struct_tag { /* start of PIT_RTI_tag */
                         /* PIT_RTI_PITMCR - PIT Module Control Register */
      PIT_RTI_PITMCR_32B_tag PITMCR;       /* offset: 0x0000 size: 32 bit */
      int8_t PIT_RTI_reserved_0004_C[252];
      union {
                                                /*  Register set CHANNEL */
         PIT_RTI_CHANNEL_tag CHANNEL[4];   /* offset: 0x0100  (0x0010 x 4) */

		 PIT_RTI_CHANNEL_tag CH[4];   /* offset: 0x0100  (0x0010 x 4) */

         struct {
                            /* PIT_RTI_LDVAL - Timer Load Value Register */
            PIT_RTI_LDVAL_32B_tag LDVAL0;  /* offset: 0x0100 size: 32 bit */
                          /* PIT_RTI_CVAL - Current Timer Value Register */
            PIT_RTI_CVAL_32B_tag CVAL0;    /* offset: 0x0104 size: 32 bit */
                               /* PIT_RTI_TCTRL - Timer Control Register */
            PIT_RTI_TCTRL_32B_tag TCTRL0;  /* offset: 0x0108 size: 32 bit */
                                   /* PIT_RTI_TFLG - Timer Flag Register */
            PIT_RTI_TFLG_32B_tag TFLG0;    /* offset: 0x010C size: 32 bit */
                            /* PIT_RTI_LDVAL - Timer Load Value Register */
            PIT_RTI_LDVAL_32B_tag LDVAL1;  /* offset: 0x0110 size: 32 bit */
                          /* PIT_RTI_CVAL - Current Timer Value Register */
            PIT_RTI_CVAL_32B_tag CVAL1;    /* offset: 0x0114 size: 32 bit */
                               /* PIT_RTI_TCTRL - Timer Control Register */
            PIT_RTI_TCTRL_32B_tag TCTRL1;  /* offset: 0x0118 size: 32 bit */
                                   /* PIT_RTI_TFLG - Timer Flag Register */
            PIT_RTI_TFLG_32B_tag TFLG1;    /* offset: 0x011C size: 32 bit */
                            /* PIT_RTI_LDVAL - Timer Load Value Register */
            PIT_RTI_LDVAL_32B_tag LDVAL2;  /* offset: 0x0120 size: 32 bit */
                          /* PIT_RTI_CVAL - Current Timer Value Register */
            PIT_RTI_CVAL_32B_tag CVAL2;    /* offset: 0x0124 size: 32 bit */
                               /* PIT_RTI_TCTRL - Timer Control Register */
            PIT_RTI_TCTRL_32B_tag TCTRL2;  /* offset: 0x0128 size: 32 bit */
                                   /* PIT_RTI_TFLG - Timer Flag Register */
            PIT_RTI_TFLG_32B_tag TFLG2;    /* offset: 0x012C size: 32 bit */
                            /* PIT_RTI_LDVAL - Timer Load Value Register */
            PIT_RTI_LDVAL_32B_tag LDVAL3;  /* offset: 0x0130 size: 32 bit */
                          /* PIT_RTI_CVAL - Current Timer Value Register */
            PIT_RTI_CVAL_32B_tag CVAL3;    /* offset: 0x0134 size: 32 bit */
                               /* PIT_RTI_TCTRL - Timer Control Register */
            PIT_RTI_TCTRL_32B_tag TCTRL3;  /* offset: 0x0138 size: 32 bit */
                                   /* PIT_RTI_TFLG - Timer Flag Register */
            PIT_RTI_TFLG_32B_tag TFLG3;    /* offset: 0x013C size: 32 bit */
         };

      };
   } PIT_RTI_tag;


#define PIT_RTI (*(volatile PIT_RTI_tag *) 0xC3FF0000UL)

/****************************************************************/
/*                                                              */
/* Module: INTC  */
/*                                                              */
/****************************************************************/

   typedef union {   /* BCR - Block Configuration Register */
      vuint32_t R;
      struct {
         vuint32_t:18;
         vuint32_t  VTES_PRC1:1;       /* Vector Table Entry Size - Processor 1 */
         vuint32_t:4;
         vuint32_t  HVEN_PRC1:1;       /* Hardware Vector Enable - Processor 1 */
         vuint32_t:2;
#ifndef USE_FIELD_ALIASES_INTC
         vuint32_t  VTES_PRC0:1;       /* Vector Table Entry Size - Processor 0 */
#else
         vuint32_t  VTES:1;              /* deprecated name - please avoid */
#endif
         vuint32_t:4;
#ifndef USE_FIELD_ALIASES_INTC
         vuint32_t  HVEN_PRC0:1;       /* Hardware Vector Enable - Processor 0 */
#else
         vuint32_t  HVEN:1;              /* deprecated name - please avoid */
#endif
      } B;
   } INTC_BCR_32B_tag;

   typedef union {   /* CPR - Current Priority Register - Processor 0 */
      vuint32_t R;
      struct {
         vuint32_t:28;
         vuint32_t  PRI:4;             /* Priority Bits */
      } B;
   } INTC_CPR_PRC0_32B_tag;

   typedef union {   /* CPR - Current Priority Register - Processor 1 */
      vuint32_t R;
      struct {
         vuint32_t:28;
         vuint32_t  PRI:4;             /* Priority Bits */
      } B;
   } INTC_CPR_PRC1_32B_tag;

   typedef union {   /* IACKR- Interrupt Acknowledge Register - Processor 0 */
      vuint32_t R;
      struct {
#ifndef USE_FIELD_ALIASES_INTC
         vuint32_t  VTBA_PRC0:21;      /* Vector Table Base Address - Processor 0 */
#else
         vuint32_t  VTBA:21;             /* deprecated name - please avoid */
#endif
#ifndef USE_FIELD_ALIASES_INTC
         vuint32_t  INTEC_PRC0:9;      /* Interrupt Vector - Processor 0 */
#else
         vuint32_t  INTVEC:9;            /* deprecated name - please avoid */
#endif
         vuint32_t:2;
      } B;
   } INTC_IACKR_PRC0_32B_tag;

   typedef union {   /* IACKR- Interrupt Acknowledge Register - Processor 1 */
      vuint32_t R;
      struct {
         vuint32_t  VTBA_PRC1:21;      /* Vector Table Base Address - Processor 1 */
         vuint32_t  INTEC_PRC1:9;      /* Interrupt Vector - Processor 1 */
         vuint32_t:2;
      } B;
   } INTC_IACKR_PRC1_32B_tag;

   typedef union {   /* EOIR- End of Interrupt Register - Processor 0 */
      vuint32_t R;
   } INTC_EOIR_PRC0_32B_tag;

   typedef union {   /* EOIR- End of Interrupt Register - Processor 1 */
      vuint32_t R;
   } INTC_EOIR_PRC1_32B_tag;


   /* Register layout for all registers SSCIR... */

   typedef union {   /* SSCIR0-7 INTC Software Set/Clear Interrupt Registers */
      vuint8_t R;
      struct {
         vuint8_t:6;
         vuint8_t   SET:1;             /* Set Flag bit */
         vuint8_t   CLR:1;             /* Clear Flag bit */
      } B;
   } INTC_SSCIR_8B_tag;

   typedef union {   /* SSCIR0_3 - Software Set/Clear Interrupt Registers */
      vuint32_t R;
      struct {
         vuint32_t:6;
         vuint32_t  SET0:1;            /* Set Flag 0 bit */
         vuint32_t  CLR0:1;            /* Clear Flag 0 bit */
         vuint32_t:6;
         vuint32_t  SET1:1;            /* Set Flag 1 bit */
         vuint32_t  CLR1:1;            /* Clear Flag 1 bit */
         vuint32_t:6;
         vuint32_t  SET2:1;            /* Set Flag 2 bit */
         vuint32_t  CLR2:1;            /* Clear Flag 2 bit */
         vuint32_t:6;
         vuint32_t  SET3:1;            /* Set Flag 3 bit */
         vuint32_t  CLR3:1;            /* Clear Flag 3 bit */
      } B;
   } INTC_SSCIR0_3_32B_tag;

   typedef union {   /* SSCIR4_7 - Software Set/Clear Interrupt Registers */
      vuint32_t R;
      struct {
         vuint32_t:6;
         vuint32_t  SET4:1;            /* Set Flag 4 bit */
         vuint32_t  CLR4:1;            /* Clear Flag 4 bit */
         vuint32_t:6;
         vuint32_t  SET5:1;            /* Set Flag 5 bit */
         vuint32_t  CLR5:1;            /* Clear Flag 5 bit */
         vuint32_t:6;
         vuint32_t  SET6:1;            /* Set Flag 6 bit */
         vuint32_t  CLR6:1;            /* Clear Flag 6 bit */
         vuint32_t:6;
         vuint32_t  SET7:1;            /* Set Flag 7 bit */
         vuint32_t  CLR7:1;            /* Clear Flag 7 bit */
      } B;
   } INTC_SSCIR4_7_32B_tag;


   /* Register layout for all registers PSR... */

   typedef union {   /* PSR0-511 - Priority Select Registers */
      vuint8_t R;
      struct {
         vuint8_t   PRC_SEL:2;         /* Processor Select */
         vuint8_t:2;
         vuint8_t   PRI:4;             /* Priority Select */
      } B;
   } INTC_PSR_8B_tag;


   /* Register layout for all registers PSR... */

   typedef union {   /* PSR0_3 - 508_511 - Priority Select Registers */
      vuint32_t R;
      struct {
         vuint32_t  PRC_SEL0:2;        /* Processor Select - Entry 0 */
         vuint32_t:2;
         vuint32_t  PRI0:4;            /* Priority Select - Entry 0 */
         vuint32_t  PRC_SEL1:2;        /* Processor Select - Entry 1 */
         vuint32_t:2;
         vuint32_t  PRI1:4;            /* Priority Select - Entry 1 */
         vuint32_t  PRC_SEL2:2;        /* Processor Select - Entry 2 */
         vuint32_t:2;
         vuint32_t  PRI2:4;            /* Priority Select - Entry 2 */
         vuint32_t  PRC_SEL3:2;        /* Processor Select - Entry 3 */
         vuint32_t:2;
         vuint32_t  PRI3:4;            /* Priority Select - Entry 3 */
      } B;
   } INTC_PSR_32B_tag;



   typedef struct INTC_struct_tag { /* start of INTC_tag */
      union {
         INTC_BCR_32B_tag MCR;             /* deprecated - please avoid */

                                   /* BCR - Block Configuration Register */
         INTC_BCR_32B_tag BCR;             /* offset: 0x0000 size: 32 bit */

      };
      int8_t INTC_reserved_0004_C[4];
      union {
                        /* CPR - Current Priority Register - Processor 0 */
         INTC_CPR_PRC0_32B_tag CPR_PRC0;   /* offset: 0x0008 size: 32 bit */

         INTC_CPR_PRC0_32B_tag CPR;        /* deprecated - please avoid */

      };
                        /* CPR - Current Priority Register - Processor 1 */
      INTC_CPR_PRC1_32B_tag CPR_PRC1;      /* offset: 0x000C size: 32 bit */
      union {
                  /* IACKR- Interrupt Acknowledge Register - Processor 0 */
         INTC_IACKR_PRC0_32B_tag IACKR_PRC0;  /* offset: 0x0010 size: 32 bit */

         INTC_IACKR_PRC0_32B_tag IACKR;    /* deprecated - please avoid */

      };
                  /* IACKR- Interrupt Acknowledge Register - Processor 1 */
      INTC_IACKR_PRC1_32B_tag IACKR_PRC1;  /* offset: 0x0014 size: 32 bit */
      union {
                        /* EOIR- End of Interrupt Register - Processor 0 */
         INTC_EOIR_PRC0_32B_tag EOIR_PRC0;  /* offset: 0x0018 size: 32 bit */

         INTC_EOIR_PRC0_32B_tag EOIR;      /* deprecated - please avoid */

      };
                        /* EOIR- End of Interrupt Register - Processor 1 */
      INTC_EOIR_PRC1_32B_tag EOIR_PRC1;    /* offset: 0x001C size: 32 bit */
      union {
                 /* SSCIR0-7 INTC Software Set/Clear Interrupt Registers */
         INTC_SSCIR_8B_tag SSCIR[8];       /* offset: 0x0020  (0x0001 x 8) */

         struct {
                 /* SSCIR0-7 INTC Software Set/Clear Interrupt Registers */
            INTC_SSCIR_8B_tag SSCIR0;      /* offset: 0x0020 size: 8 bit */
            INTC_SSCIR_8B_tag SSCIR1;      /* offset: 0x0021 size: 8 bit */
            INTC_SSCIR_8B_tag SSCIR2;      /* offset: 0x0022 size: 8 bit */
            INTC_SSCIR_8B_tag SSCIR3;      /* offset: 0x0023 size: 8 bit */
            INTC_SSCIR_8B_tag SSCIR4;      /* offset: 0x0024 size: 8 bit */
            INTC_SSCIR_8B_tag SSCIR5;      /* offset: 0x0025 size: 8 bit */
            INTC_SSCIR_8B_tag SSCIR6;      /* offset: 0x0026 size: 8 bit */
            INTC_SSCIR_8B_tag SSCIR7;      /* offset: 0x0027 size: 8 bit */
         };

         struct {
                    /* SSCIR0_3 - Software Set/Clear Interrupt Registers */
            INTC_SSCIR0_3_32B_tag SSCIR0_3;  /* offset: 0x0020 size: 32 bit */
                    /* SSCIR4_7 - Software Set/Clear Interrupt Registers */
            INTC_SSCIR4_7_32B_tag SSCIR4_7;  /* offset: 0x0024 size: 32 bit */
         };

      };
      int8_t INTC_reserved_0028_C[24];
      union {
                         /* PSR0_3 - 508_511 - Priority Select Registers */
         INTC_PSR_32B_tag PSR_32B[128];    /* offset: 0x0040  (0x0004 x 128) */

                                 /* PSR0-511 - Priority Select Registers */
         INTC_PSR_8B_tag PSR[512];         /* offset: 0x0040  (0x0001 x 512) */

         struct {
                         /* PSR0_3 - 508_511 - Priority Select Registers */
            INTC_PSR_32B_tag PSR0_3;       /* offset: 0x0040 size: 32 bit */
            INTC_PSR_32B_tag PSR4_7;       /* offset: 0x0044 size: 32 bit */
            INTC_PSR_32B_tag PSR8_11;      /* offset: 0x0048 size: 32 bit */
            INTC_PSR_32B_tag PSR12_15;     /* offset: 0x004C size: 32 bit */
            INTC_PSR_32B_tag PSR16_19;     /* offset: 0x0050 size: 32 bit */
            INTC_PSR_32B_tag PSR20_23;     /* offset: 0x0054 size: 32 bit */
            INTC_PSR_32B_tag PSR24_27;     /* offset: 0x0058 size: 32 bit */
            INTC_PSR_32B_tag PSR28_31;     /* offset: 0x005C size: 32 bit */
            INTC_PSR_32B_tag PSR32_35;     /* offset: 0x0060 size: 32 bit */
            INTC_PSR_32B_tag PSR36_39;     /* offset: 0x0064 size: 32 bit */
            INTC_PSR_32B_tag PSR40_43;     /* offset: 0x0068 size: 32 bit */
            INTC_PSR_32B_tag PSR44_47;     /* offset: 0x006C size: 32 bit */
            INTC_PSR_32B_tag PSR48_51;     /* offset: 0x0070 size: 32 bit */
            INTC_PSR_32B_tag PSR52_55;     /* offset: 0x0074 size: 32 bit */
            INTC_PSR_32B_tag PSR56_59;     /* offset: 0x0078 size: 32 bit */
            INTC_PSR_32B_tag PSR60_63;     /* offset: 0x007C size: 32 bit */
            INTC_PSR_32B_tag PSR64_67;     /* offset: 0x0080 size: 32 bit */
            INTC_PSR_32B_tag PSR68_71;     /* offset: 0x0084 size: 32 bit */
            INTC_PSR_32B_tag PSR72_75;     /* offset: 0x0088 size: 32 bit */
            INTC_PSR_32B_tag PSR76_79;     /* offset: 0x008C size: 32 bit */
            INTC_PSR_32B_tag PSR80_83;     /* offset: 0x0090 size: 32 bit */
            INTC_PSR_32B_tag PSR84_87;     /* offset: 0x0094 size: 32 bit */
            INTC_PSR_32B_tag PSR88_91;     /* offset: 0x0098 size: 32 bit */
            INTC_PSR_32B_tag PSR92_95;     /* offset: 0x009C size: 32 bit */
            INTC_PSR_32B_tag PSR96_99;     /* offset: 0x00A0 size: 32 bit */
            INTC_PSR_32B_tag PSR100_103;   /* offset: 0x00A4 size: 32 bit */
            INTC_PSR_32B_tag PSR104_107;   /* offset: 0x00A8 size: 32 bit */
            INTC_PSR_32B_tag PSR108_111;   /* offset: 0x00AC size: 32 bit */
            INTC_PSR_32B_tag PSR112_115;   /* offset: 0x00B0 size: 32 bit */
            INTC_PSR_32B_tag PSR116_119;   /* offset: 0x00B4 size: 32 bit */
            INTC_PSR_32B_tag PSR120_123;   /* offset: 0x00B8 size: 32 bit */
            INTC_PSR_32B_tag PSR124_127;   /* offset: 0x00BC size: 32 bit */
            INTC_PSR_32B_tag PSR128_131;   /* offset: 0x00C0 size: 32 bit */
            INTC_PSR_32B_tag PSR132_135;   /* offset: 0x00C4 size: 32 bit */
            INTC_PSR_32B_tag PSR136_139;   /* offset: 0x00C8 size: 32 bit */
            INTC_PSR_32B_tag PSR140_143;   /* offset: 0x00CC size: 32 bit */
            INTC_PSR_32B_tag PSR144_147;   /* offset: 0x00D0 size: 32 bit */
            INTC_PSR_32B_tag PSR148_151;   /* offset: 0x00D4 size: 32 bit */
            INTC_PSR_32B_tag PSR152_155;   /* offset: 0x00D8 size: 32 bit */
            INTC_PSR_32B_tag PSR156_159;   /* offset: 0x00DC size: 32 bit */
            INTC_PSR_32B_tag PSR160_163;   /* offset: 0x00E0 size: 32 bit */
            INTC_PSR_32B_tag PSR164_167;   /* offset: 0x00E4 size: 32 bit */
            INTC_PSR_32B_tag PSR168_171;   /* offset: 0x00E8 size: 32 bit */
            INTC_PSR_32B_tag PSR172_175;   /* offset: 0x00EC size: 32 bit */
            INTC_PSR_32B_tag PSR176_179;   /* offset: 0x00F0 size: 32 bit */
            INTC_PSR_32B_tag PSR180_183;   /* offset: 0x00F4 size: 32 bit */
            INTC_PSR_32B_tag PSR184_187;   /* offset: 0x00F8 size: 32 bit */
            INTC_PSR_32B_tag PSR188_191;   /* offset: 0x00FC size: 32 bit */
            INTC_PSR_32B_tag PSR192_195;   /* offset: 0x0100 size: 32 bit */
            INTC_PSR_32B_tag PSR196_199;   /* offset: 0x0104 size: 32 bit */
            INTC_PSR_32B_tag PSR200_203;   /* offset: 0x0108 size: 32 bit */
            INTC_PSR_32B_tag PSR204_207;   /* offset: 0x010C size: 32 bit */
            INTC_PSR_32B_tag PSR208_211;   /* offset: 0x0110 size: 32 bit */
            INTC_PSR_32B_tag PSR212_215;   /* offset: 0x0114 size: 32 bit */
            INTC_PSR_32B_tag PSR216_219;   /* offset: 0x0118 size: 32 bit */
            INTC_PSR_32B_tag PSR220_223;   /* offset: 0x011C size: 32 bit */
            INTC_PSR_32B_tag PSR224_227;   /* offset: 0x0120 size: 32 bit */
            INTC_PSR_32B_tag PSR228_231;   /* offset: 0x0124 size: 32 bit */
            INTC_PSR_32B_tag PSR232_235;   /* offset: 0x0128 size: 32 bit */
            INTC_PSR_32B_tag PSR236_239;   /* offset: 0x012C size: 32 bit */
            INTC_PSR_32B_tag PSR240_243;   /* offset: 0x0130 size: 32 bit */
            INTC_PSR_32B_tag PSR244_247;   /* offset: 0x0134 size: 32 bit */
            INTC_PSR_32B_tag PSR248_251;   /* offset: 0x0138 size: 32 bit */
            INTC_PSR_32B_tag PSR252_255;   /* offset: 0x013C size: 32 bit */
            INTC_PSR_32B_tag PSR256_259;   /* offset: 0x0140 size: 32 bit */
            INTC_PSR_32B_tag PSR260_263;   /* offset: 0x0144 size: 32 bit */
            INTC_PSR_32B_tag PSR264_267;   /* offset: 0x0148 size: 32 bit */
            INTC_PSR_32B_tag PSR268_271;   /* offset: 0x014C size: 32 bit */
            INTC_PSR_32B_tag PSR272_275;   /* offset: 0x0150 size: 32 bit */
            INTC_PSR_32B_tag PSR276_279;   /* offset: 0x0154 size: 32 bit */
            INTC_PSR_32B_tag PSR280_283;   /* offset: 0x0158 size: 32 bit */
            INTC_PSR_32B_tag PSR284_287;   /* offset: 0x015C size: 32 bit */
            INTC_PSR_32B_tag PSR288_291;   /* offset: 0x0160 size: 32 bit */
            INTC_PSR_32B_tag PSR292_295;   /* offset: 0x0164 size: 32 bit */
            INTC_PSR_32B_tag PSR296_299;   /* offset: 0x0168 size: 32 bit */
            INTC_PSR_32B_tag PSR300_303;   /* offset: 0x016C size: 32 bit */
            INTC_PSR_32B_tag PSR304_307;   /* offset: 0x0170 size: 32 bit */
            INTC_PSR_32B_tag PSR308_311;   /* offset: 0x0174 size: 32 bit */
            INTC_PSR_32B_tag PSR312_315;   /* offset: 0x0178 size: 32 bit */
            INTC_PSR_32B_tag PSR316_319;   /* offset: 0x017C size: 32 bit */
            INTC_PSR_32B_tag PSR320_323;   /* offset: 0x0180 size: 32 bit */
            INTC_PSR_32B_tag PSR324_327;   /* offset: 0x0184 size: 32 bit */
            INTC_PSR_32B_tag PSR328_331;   /* offset: 0x0188 size: 32 bit */
            INTC_PSR_32B_tag PSR332_335;   /* offset: 0x018C size: 32 bit */
            INTC_PSR_32B_tag PSR336_339;   /* offset: 0x0190 size: 32 bit */
            INTC_PSR_32B_tag PSR340_343;   /* offset: 0x0194 size: 32 bit */
            INTC_PSR_32B_tag PSR344_347;   /* offset: 0x0198 size: 32 bit */
            INTC_PSR_32B_tag PSR348_351;   /* offset: 0x019C size: 32 bit */
            INTC_PSR_32B_tag PSR352_355;   /* offset: 0x01A0 size: 32 bit */
            INTC_PSR_32B_tag PSR356_359;   /* offset: 0x01A4 size: 32 bit */
            INTC_PSR_32B_tag PSR360_363;   /* offset: 0x01A8 size: 32 bit */
            INTC_PSR_32B_tag PSR364_367;   /* offset: 0x01AC size: 32 bit */
            INTC_PSR_32B_tag PSR368_371;   /* offset: 0x01B0 size: 32 bit */
            INTC_PSR_32B_tag PSR372_375;   /* offset: 0x01B4 size: 32 bit */
            INTC_PSR_32B_tag PSR376_379;   /* offset: 0x01B8 size: 32 bit */
            INTC_PSR_32B_tag PSR380_383;   /* offset: 0x01BC size: 32 bit */
            INTC_PSR_32B_tag PSR384_387;   /* offset: 0x01C0 size: 32 bit */
            INTC_PSR_32B_tag PSR388_391;   /* offset: 0x01C4 size: 32 bit */
            INTC_PSR_32B_tag PSR392_395;   /* offset: 0x01C8 size: 32 bit */
            INTC_PSR_32B_tag PSR396_399;   /* offset: 0x01CC size: 32 bit */
            INTC_PSR_32B_tag PSR400_403;   /* offset: 0x01D0 size: 32 bit */
            INTC_PSR_32B_tag PSR404_407;   /* offset: 0x01D4 size: 32 bit */
            INTC_PSR_32B_tag PSR408_411;   /* offset: 0x01D8 size: 32 bit */
            INTC_PSR_32B_tag PSR412_415;   /* offset: 0x01DC size: 32 bit */
            INTC_PSR_32B_tag PSR416_419;   /* offset: 0x01E0 size: 32 bit */
            INTC_PSR_32B_tag PSR420_423;   /* offset: 0x01E4 size: 32 bit */
            INTC_PSR_32B_tag PSR424_427;   /* offset: 0x01E8 size: 32 bit */
            INTC_PSR_32B_tag PSR428_431;   /* offset: 0x01EC size: 32 bit */
            INTC_PSR_32B_tag PSR432_435;   /* offset: 0x01F0 size: 32 bit */
            INTC_PSR_32B_tag PSR436_439;   /* offset: 0x01F4 size: 32 bit */
            INTC_PSR_32B_tag PSR440_443;   /* offset: 0x01F8 size: 32 bit */
            INTC_PSR_32B_tag PSR444_447;   /* offset: 0x01FC size: 32 bit */
            INTC_PSR_32B_tag PSR448_451;   /* offset: 0x0200 size: 32 bit */
            INTC_PSR_32B_tag PSR452_455;   /* offset: 0x0204 size: 32 bit */
            INTC_PSR_32B_tag PSR456_459;   /* offset: 0x0208 size: 32 bit */
            INTC_PSR_32B_tag PSR460_463;   /* offset: 0x020C size: 32 bit */
            INTC_PSR_32B_tag PSR464_467;   /* offset: 0x0210 size: 32 bit */
            INTC_PSR_32B_tag PSR468_471;   /* offset: 0x0214 size: 32 bit */
            INTC_PSR_32B_tag PSR472_475;   /* offset: 0x0218 size: 32 bit */
            INTC_PSR_32B_tag PSR476_479;   /* offset: 0x021C size: 32 bit */
            INTC_PSR_32B_tag PSR480_483;   /* offset: 0x0220 size: 32 bit */
            INTC_PSR_32B_tag PSR484_487;   /* offset: 0x0224 size: 32 bit */
            INTC_PSR_32B_tag PSR488_491;   /* offset: 0x0228 size: 32 bit */
            INTC_PSR_32B_tag PSR492_495;   /* offset: 0x022C size: 32 bit */
            INTC_PSR_32B_tag PSR496_499;   /* offset: 0x0230 size: 32 bit */
            INTC_PSR_32B_tag PSR500_503;   /* offset: 0x0234 size: 32 bit */
            INTC_PSR_32B_tag PSR504_507;   /* offset: 0x0238 size: 32 bit */
            INTC_PSR_32B_tag PSR508_511;   /* offset: 0x023C size: 32 bit */
         };

         struct {
                                 /* PSR0-511 - Priority Select Registers */
            INTC_PSR_8B_tag PSR0;          /* offset: 0x0040 size: 8 bit */
            INTC_PSR_8B_tag PSR1;          /* offset: 0x0041 size: 8 bit */
            INTC_PSR_8B_tag PSR2;          /* offset: 0x0042 size: 8 bit */
            INTC_PSR_8B_tag PSR3;          /* offset: 0x0043 size: 8 bit */
            INTC_PSR_8B_tag PSR4;          /* offset: 0x0044 size: 8 bit */
            INTC_PSR_8B_tag PSR5;          /* offset: 0x0045 size: 8 bit */
            INTC_PSR_8B_tag PSR6;          /* offset: 0x0046 size: 8 bit */
            INTC_PSR_8B_tag PSR7;          /* offset: 0x0047 size: 8 bit */
            INTC_PSR_8B_tag PSR8;          /* offset: 0x0048 size: 8 bit */
            INTC_PSR_8B_tag PSR9;          /* offset: 0x0049 size: 8 bit */
            INTC_PSR_8B_tag PSR10;         /* offset: 0x004A size: 8 bit */
            INTC_PSR_8B_tag PSR11;         /* offset: 0x004B size: 8 bit */
            INTC_PSR_8B_tag PSR12;         /* offset: 0x004C size: 8 bit */
            INTC_PSR_8B_tag PSR13;         /* offset: 0x004D size: 8 bit */
            INTC_PSR_8B_tag PSR14;         /* offset: 0x004E size: 8 bit */
            INTC_PSR_8B_tag PSR15;         /* offset: 0x004F size: 8 bit */
            INTC_PSR_8B_tag PSR16;         /* offset: 0x0050 size: 8 bit */
            INTC_PSR_8B_tag PSR17;         /* offset: 0x0051 size: 8 bit */
            INTC_PSR_8B_tag PSR18;         /* offset: 0x0052 size: 8 bit */
            INTC_PSR_8B_tag PSR19;         /* offset: 0x0053 size: 8 bit */
            INTC_PSR_8B_tag PSR20;         /* offset: 0x0054 size: 8 bit */
            INTC_PSR_8B_tag PSR21;         /* offset: 0x0055 size: 8 bit */
            INTC_PSR_8B_tag PSR22;         /* offset: 0x0056 size: 8 bit */
            INTC_PSR_8B_tag PSR23;         /* offset: 0x0057 size: 8 bit */
            INTC_PSR_8B_tag PSR24;         /* offset: 0x0058 size: 8 bit */
            INTC_PSR_8B_tag PSR25;         /* offset: 0x0059 size: 8 bit */
            INTC_PSR_8B_tag PSR26;         /* offset: 0x005A size: 8 bit */
            INTC_PSR_8B_tag PSR27;         /* offset: 0x005B size: 8 bit */
            INTC_PSR_8B_tag PSR28;         /* offset: 0x005C size: 8 bit */
            INTC_PSR_8B_tag PSR29;         /* offset: 0x005D size: 8 bit */
            INTC_PSR_8B_tag PSR30;         /* offset: 0x005E size: 8 bit */
            INTC_PSR_8B_tag PSR31;         /* offset: 0x005F size: 8 bit */
            INTC_PSR_8B_tag PSR32;         /* offset: 0x0060 size: 8 bit */
            INTC_PSR_8B_tag PSR33;         /* offset: 0x0061 size: 8 bit */
            INTC_PSR_8B_tag PSR34;         /* offset: 0x0062 size: 8 bit */
            INTC_PSR_8B_tag PSR35;         /* offset: 0x0063 size: 8 bit */
            INTC_PSR_8B_tag PSR36;         /* offset: 0x0064 size: 8 bit */
            INTC_PSR_8B_tag PSR37;         /* offset: 0x0065 size: 8 bit */
            INTC_PSR_8B_tag PSR38;         /* offset: 0x0066 size: 8 bit */
            INTC_PSR_8B_tag PSR39;         /* offset: 0x0067 size: 8 bit */
            INTC_PSR_8B_tag PSR40;         /* offset: 0x0068 size: 8 bit */
            INTC_PSR_8B_tag PSR41;         /* offset: 0x0069 size: 8 bit */
            INTC_PSR_8B_tag PSR42;         /* offset: 0x006A size: 8 bit */
            INTC_PSR_8B_tag PSR43;         /* offset: 0x006B size: 8 bit */
            INTC_PSR_8B_tag PSR44;         /* offset: 0x006C size: 8 bit */
            INTC_PSR_8B_tag PSR45;         /* offset: 0x006D size: 8 bit */
            INTC_PSR_8B_tag PSR46;         /* offset: 0x006E size: 8 bit */
            INTC_PSR_8B_tag PSR47;         /* offset: 0x006F size: 8 bit */
            INTC_PSR_8B_tag PSR48;         /* offset: 0x0070 size: 8 bit */
            INTC_PSR_8B_tag PSR49;         /* offset: 0x0071 size: 8 bit */
            INTC_PSR_8B_tag PSR50;         /* offset: 0x0072 size: 8 bit */
            INTC_PSR_8B_tag PSR51;         /* offset: 0x0073 size: 8 bit */
            INTC_PSR_8B_tag PSR52;         /* offset: 0x0074 size: 8 bit */
            INTC_PSR_8B_tag PSR53;         /* offset: 0x0075 size: 8 bit */
            INTC_PSR_8B_tag PSR54;         /* offset: 0x0076 size: 8 bit */
            INTC_PSR_8B_tag PSR55;         /* offset: 0x0077 size: 8 bit */
            INTC_PSR_8B_tag PSR56;         /* offset: 0x0078 size: 8 bit */
            INTC_PSR_8B_tag PSR57;         /* offset: 0x0079 size: 8 bit */
            INTC_PSR_8B_tag PSR58;         /* offset: 0x007A size: 8 bit */
            INTC_PSR_8B_tag PSR59;         /* offset: 0x007B size: 8 bit */
            INTC_PSR_8B_tag PSR60;         /* offset: 0x007C size: 8 bit */
            INTC_PSR_8B_tag PSR61;         /* offset: 0x007D size: 8 bit */
            INTC_PSR_8B_tag PSR62;         /* offset: 0x007E size: 8 bit */
            INTC_PSR_8B_tag PSR63;         /* offset: 0x007F size: 8 bit */
            INTC_PSR_8B_tag PSR64;         /* offset: 0x0080 size: 8 bit */
            INTC_PSR_8B_tag PSR65;         /* offset: 0x0081 size: 8 bit */
            INTC_PSR_8B_tag PSR66;         /* offset: 0x0082 size: 8 bit */
            INTC_PSR_8B_tag PSR67;         /* offset: 0x0083 size: 8 bit */
            INTC_PSR_8B_tag PSR68;         /* offset: 0x0084 size: 8 bit */
            INTC_PSR_8B_tag PSR69;         /* offset: 0x0085 size: 8 bit */
            INTC_PSR_8B_tag PSR70;         /* offset: 0x0086 size: 8 bit */
            INTC_PSR_8B_tag PSR71;         /* offset: 0x0087 size: 8 bit */
            INTC_PSR_8B_tag PSR72;         /* offset: 0x0088 size: 8 bit */
            INTC_PSR_8B_tag PSR73;         /* offset: 0x0089 size: 8 bit */
            INTC_PSR_8B_tag PSR74;         /* offset: 0x008A size: 8 bit */
            INTC_PSR_8B_tag PSR75;         /* offset: 0x008B size: 8 bit */
            INTC_PSR_8B_tag PSR76;         /* offset: 0x008C size: 8 bit */
            INTC_PSR_8B_tag PSR77;         /* offset: 0x008D size: 8 bit */
            INTC_PSR_8B_tag PSR78;         /* offset: 0x008E size: 8 bit */
            INTC_PSR_8B_tag PSR79;         /* offset: 0x008F size: 8 bit */
            INTC_PSR_8B_tag PSR80;         /* offset: 0x0090 size: 8 bit */
            INTC_PSR_8B_tag PSR81;         /* offset: 0x0091 size: 8 bit */
            INTC_PSR_8B_tag PSR82;         /* offset: 0x0092 size: 8 bit */
            INTC_PSR_8B_tag PSR83;         /* offset: 0x0093 size: 8 bit */
            INTC_PSR_8B_tag PSR84;         /* offset: 0x0094 size: 8 bit */
            INTC_PSR_8B_tag PSR85;         /* offset: 0x0095 size: 8 bit */
            INTC_PSR_8B_tag PSR86;         /* offset: 0x0096 size: 8 bit */
            INTC_PSR_8B_tag PSR87;         /* offset: 0x0097 size: 8 bit */
            INTC_PSR_8B_tag PSR88;         /* offset: 0x0098 size: 8 bit */
            INTC_PSR_8B_tag PSR89;         /* offset: 0x0099 size: 8 bit */
            INTC_PSR_8B_tag PSR90;         /* offset: 0x009A size: 8 bit */
            INTC_PSR_8B_tag PSR91;         /* offset: 0x009B size: 8 bit */
            INTC_PSR_8B_tag PSR92;         /* offset: 0x009C size: 8 bit */
            INTC_PSR_8B_tag PSR93;         /* offset: 0x009D size: 8 bit */
            INTC_PSR_8B_tag PSR94;         /* offset: 0x009E size: 8 bit */
            INTC_PSR_8B_tag PSR95;         /* offset: 0x009F size: 8 bit */
            INTC_PSR_8B_tag PSR96;         /* offset: 0x00A0 size: 8 bit */
            INTC_PSR_8B_tag PSR97;         /* offset: 0x00A1 size: 8 bit */
            INTC_PSR_8B_tag PSR98;         /* offset: 0x00A2 size: 8 bit */
            INTC_PSR_8B_tag PSR99;         /* offset: 0x00A3 size: 8 bit */
            INTC_PSR_8B_tag PSR100;        /* offset: 0x00A4 size: 8 bit */
            INTC_PSR_8B_tag PSR101;        /* offset: 0x00A5 size: 8 bit */
            INTC_PSR_8B_tag PSR102;        /* offset: 0x00A6 size: 8 bit */
            INTC_PSR_8B_tag PSR103;        /* offset: 0x00A7 size: 8 bit */
            INTC_PSR_8B_tag PSR104;        /* offset: 0x00A8 size: 8 bit */
            INTC_PSR_8B_tag PSR105;        /* offset: 0x00A9 size: 8 bit */
            INTC_PSR_8B_tag PSR106;        /* offset: 0x00AA size: 8 bit */
            INTC_PSR_8B_tag PSR107;        /* offset: 0x00AB size: 8 bit */
            INTC_PSR_8B_tag PSR108;        /* offset: 0x00AC size: 8 bit */
            INTC_PSR_8B_tag PSR109;        /* offset: 0x00AD size: 8 bit */
            INTC_PSR_8B_tag PSR110;        /* offset: 0x00AE size: 8 bit */
            INTC_PSR_8B_tag PSR111;        /* offset: 0x00AF size: 8 bit */
            INTC_PSR_8B_tag PSR112;        /* offset: 0x00B0 size: 8 bit */
            INTC_PSR_8B_tag PSR113;        /* offset: 0x00B1 size: 8 bit */
            INTC_PSR_8B_tag PSR114;        /* offset: 0x00B2 size: 8 bit */
            INTC_PSR_8B_tag PSR115;        /* offset: 0x00B3 size: 8 bit */
            INTC_PSR_8B_tag PSR116;        /* offset: 0x00B4 size: 8 bit */
            INTC_PSR_8B_tag PSR117;        /* offset: 0x00B5 size: 8 bit */
            INTC_PSR_8B_tag PSR118;        /* offset: 0x00B6 size: 8 bit */
            INTC_PSR_8B_tag PSR119;        /* offset: 0x00B7 size: 8 bit */
            INTC_PSR_8B_tag PSR120;        /* offset: 0x00B8 size: 8 bit */
            INTC_PSR_8B_tag PSR121;        /* offset: 0x00B9 size: 8 bit */
            INTC_PSR_8B_tag PSR122;        /* offset: 0x00BA size: 8 bit */
            INTC_PSR_8B_tag PSR123;        /* offset: 0x00BB size: 8 bit */
            INTC_PSR_8B_tag PSR124;        /* offset: 0x00BC size: 8 bit */
            INTC_PSR_8B_tag PSR125;        /* offset: 0x00BD size: 8 bit */
            INTC_PSR_8B_tag PSR126;        /* offset: 0x00BE size: 8 bit */
            INTC_PSR_8B_tag PSR127;        /* offset: 0x00BF size: 8 bit */
            INTC_PSR_8B_tag PSR128;        /* offset: 0x00C0 size: 8 bit */
            INTC_PSR_8B_tag PSR129;        /* offset: 0x00C1 size: 8 bit */
            INTC_PSR_8B_tag PSR130;        /* offset: 0x00C2 size: 8 bit */
            INTC_PSR_8B_tag PSR131;        /* offset: 0x00C3 size: 8 bit */
            INTC_PSR_8B_tag PSR132;        /* offset: 0x00C4 size: 8 bit */
            INTC_PSR_8B_tag PSR133;        /* offset: 0x00C5 size: 8 bit */
            INTC_PSR_8B_tag PSR134;        /* offset: 0x00C6 size: 8 bit */
            INTC_PSR_8B_tag PSR135;        /* offset: 0x00C7 size: 8 bit */
            INTC_PSR_8B_tag PSR136;        /* offset: 0x00C8 size: 8 bit */
            INTC_PSR_8B_tag PSR137;        /* offset: 0x00C9 size: 8 bit */
            INTC_PSR_8B_tag PSR138;        /* offset: 0x00CA size: 8 bit */
            INTC_PSR_8B_tag PSR139;        /* offset: 0x00CB size: 8 bit */
            INTC_PSR_8B_tag PSR140;        /* offset: 0x00CC size: 8 bit */
            INTC_PSR_8B_tag PSR141;        /* offset: 0x00CD size: 8 bit */
            INTC_PSR_8B_tag PSR142;        /* offset: 0x00CE size: 8 bit */
            INTC_PSR_8B_tag PSR143;        /* offset: 0x00CF size: 8 bit */
            INTC_PSR_8B_tag PSR144;        /* offset: 0x00D0 size: 8 bit */
            INTC_PSR_8B_tag PSR145;        /* offset: 0x00D1 size: 8 bit */
            INTC_PSR_8B_tag PSR146;        /* offset: 0x00D2 size: 8 bit */
            INTC_PSR_8B_tag PSR147;        /* offset: 0x00D3 size: 8 bit */
            INTC_PSR_8B_tag PSR148;        /* offset: 0x00D4 size: 8 bit */
            INTC_PSR_8B_tag PSR149;        /* offset: 0x00D5 size: 8 bit */
            INTC_PSR_8B_tag PSR150;        /* offset: 0x00D6 size: 8 bit */
            INTC_PSR_8B_tag PSR151;        /* offset: 0x00D7 size: 8 bit */
            INTC_PSR_8B_tag PSR152;        /* offset: 0x00D8 size: 8 bit */
            INTC_PSR_8B_tag PSR153;        /* offset: 0x00D9 size: 8 bit */
            INTC_PSR_8B_tag PSR154;        /* offset: 0x00DA size: 8 bit */
            INTC_PSR_8B_tag PSR155;        /* offset: 0x00DB size: 8 bit */
            INTC_PSR_8B_tag PSR156;        /* offset: 0x00DC size: 8 bit */
            INTC_PSR_8B_tag PSR157;        /* offset: 0x00DD size: 8 bit */
            INTC_PSR_8B_tag PSR158;        /* offset: 0x00DE size: 8 bit */
            INTC_PSR_8B_tag PSR159;        /* offset: 0x00DF size: 8 bit */
            INTC_PSR_8B_tag PSR160;        /* offset: 0x00E0 size: 8 bit */
            INTC_PSR_8B_tag PSR161;        /* offset: 0x00E1 size: 8 bit */
            INTC_PSR_8B_tag PSR162;        /* offset: 0x00E2 size: 8 bit */
            INTC_PSR_8B_tag PSR163;        /* offset: 0x00E3 size: 8 bit */
            INTC_PSR_8B_tag PSR164;        /* offset: 0x00E4 size: 8 bit */
            INTC_PSR_8B_tag PSR165;        /* offset: 0x00E5 size: 8 bit */
            INTC_PSR_8B_tag PSR166;        /* offset: 0x00E6 size: 8 bit */
            INTC_PSR_8B_tag PSR167;        /* offset: 0x00E7 size: 8 bit */
            INTC_PSR_8B_tag PSR168;        /* offset: 0x00E8 size: 8 bit */
            INTC_PSR_8B_tag PSR169;        /* offset: 0x00E9 size: 8 bit */
            INTC_PSR_8B_tag PSR170;        /* offset: 0x00EA size: 8 bit */
            INTC_PSR_8B_tag PSR171;        /* offset: 0x00EB size: 8 bit */
            INTC_PSR_8B_tag PSR172;        /* offset: 0x00EC size: 8 bit */
            INTC_PSR_8B_tag PSR173;        /* offset: 0x00ED size: 8 bit */
            INTC_PSR_8B_tag PSR174;        /* offset: 0x00EE size: 8 bit */
            INTC_PSR_8B_tag PSR175;        /* offset: 0x00EF size: 8 bit */
            INTC_PSR_8B_tag PSR176;        /* offset: 0x00F0 size: 8 bit */
            INTC_PSR_8B_tag PSR177;        /* offset: 0x00F1 size: 8 bit */
            INTC_PSR_8B_tag PSR178;        /* offset: 0x00F2 size: 8 bit */
            INTC_PSR_8B_tag PSR179;        /* offset: 0x00F3 size: 8 bit */
            INTC_PSR_8B_tag PSR180;        /* offset: 0x00F4 size: 8 bit */
            INTC_PSR_8B_tag PSR181;        /* offset: 0x00F5 size: 8 bit */
            INTC_PSR_8B_tag PSR182;        /* offset: 0x00F6 size: 8 bit */
            INTC_PSR_8B_tag PSR183;        /* offset: 0x00F7 size: 8 bit */
            INTC_PSR_8B_tag PSR184;        /* offset: 0x00F8 size: 8 bit */
            INTC_PSR_8B_tag PSR185;        /* offset: 0x00F9 size: 8 bit */
            INTC_PSR_8B_tag PSR186;        /* offset: 0x00FA size: 8 bit */
            INTC_PSR_8B_tag PSR187;        /* offset: 0x00FB size: 8 bit */
            INTC_PSR_8B_tag PSR188;        /* offset: 0x00FC size: 8 bit */
            INTC_PSR_8B_tag PSR189;        /* offset: 0x00FD size: 8 bit */
            INTC_PSR_8B_tag PSR190;        /* offset: 0x00FE size: 8 bit */
            INTC_PSR_8B_tag PSR191;        /* offset: 0x00FF size: 8 bit */
            INTC_PSR_8B_tag PSR192;        /* offset: 0x0100 size: 8 bit */
            INTC_PSR_8B_tag PSR193;        /* offset: 0x0101 size: 8 bit */
            INTC_PSR_8B_tag PSR194;        /* offset: 0x0102 size: 8 bit */
            INTC_PSR_8B_tag PSR195;        /* offset: 0x0103 size: 8 bit */
            INTC_PSR_8B_tag PSR196;        /* offset: 0x0104 size: 8 bit */
            INTC_PSR_8B_tag PSR197;        /* offset: 0x0105 size: 8 bit */
            INTC_PSR_8B_tag PSR198;        /* offset: 0x0106 size: 8 bit */
            INTC_PSR_8B_tag PSR199;        /* offset: 0x0107 size: 8 bit */
            INTC_PSR_8B_tag PSR200;        /* offset: 0x0108 size: 8 bit */
            INTC_PSR_8B_tag PSR201;        /* offset: 0x0109 size: 8 bit */
            INTC_PSR_8B_tag PSR202;        /* offset: 0x010A size: 8 bit */
            INTC_PSR_8B_tag PSR203;        /* offset: 0x010B size: 8 bit */
            INTC_PSR_8B_tag PSR204;        /* offset: 0x010C size: 8 bit */
            INTC_PSR_8B_tag PSR205;        /* offset: 0x010D size: 8 bit */
            INTC_PSR_8B_tag PSR206;        /* offset: 0x010E size: 8 bit */
            INTC_PSR_8B_tag PSR207;        /* offset: 0x010F size: 8 bit */
            INTC_PSR_8B_tag PSR208;        /* offset: 0x0110 size: 8 bit */
            INTC_PSR_8B_tag PSR209;        /* offset: 0x0111 size: 8 bit */
            INTC_PSR_8B_tag PSR210;        /* offset: 0x0112 size: 8 bit */
            INTC_PSR_8B_tag PSR211;        /* offset: 0x0113 size: 8 bit */
            INTC_PSR_8B_tag PSR212;        /* offset: 0x0114 size: 8 bit */
            INTC_PSR_8B_tag PSR213;        /* offset: 0x0115 size: 8 bit */
            INTC_PSR_8B_tag PSR214;        /* offset: 0x0116 size: 8 bit */
            INTC_PSR_8B_tag PSR215;        /* offset: 0x0117 size: 8 bit */
            INTC_PSR_8B_tag PSR216;        /* offset: 0x0118 size: 8 bit */
            INTC_PSR_8B_tag PSR217;        /* offset: 0x0119 size: 8 bit */
            INTC_PSR_8B_tag PSR218;        /* offset: 0x011A size: 8 bit */
            INTC_PSR_8B_tag PSR219;        /* offset: 0x011B size: 8 bit */
            INTC_PSR_8B_tag PSR220;        /* offset: 0x011C size: 8 bit */
            INTC_PSR_8B_tag PSR221;        /* offset: 0x011D size: 8 bit */
            INTC_PSR_8B_tag PSR222;        /* offset: 0x011E size: 8 bit */
            INTC_PSR_8B_tag PSR223;        /* offset: 0x011F size: 8 bit */
            INTC_PSR_8B_tag PSR224;        /* offset: 0x0120 size: 8 bit */
            INTC_PSR_8B_tag PSR225;        /* offset: 0x0121 size: 8 bit */
            INTC_PSR_8B_tag PSR226;        /* offset: 0x0122 size: 8 bit */
            INTC_PSR_8B_tag PSR227;        /* offset: 0x0123 size: 8 bit */
            INTC_PSR_8B_tag PSR228;        /* offset: 0x0124 size: 8 bit */
            INTC_PSR_8B_tag PSR229;        /* offset: 0x0125 size: 8 bit */
            INTC_PSR_8B_tag PSR230;        /* offset: 0x0126 size: 8 bit */
            INTC_PSR_8B_tag PSR231;        /* offset: 0x0127 size: 8 bit */
            INTC_PSR_8B_tag PSR232;        /* offset: 0x0128 size: 8 bit */
            INTC_PSR_8B_tag PSR233;        /* offset: 0x0129 size: 8 bit */
            INTC_PSR_8B_tag PSR234;        /* offset: 0x012A size: 8 bit */
            INTC_PSR_8B_tag PSR235;        /* offset: 0x012B size: 8 bit */
            INTC_PSR_8B_tag PSR236;        /* offset: 0x012C size: 8 bit */
            INTC_PSR_8B_tag PSR237;        /* offset: 0x012D size: 8 bit */
            INTC_PSR_8B_tag PSR238;        /* offset: 0x012E size: 8 bit */
            INTC_PSR_8B_tag PSR239;        /* offset: 0x012F size: 8 bit */
            INTC_PSR_8B_tag PSR240;        /* offset: 0x0130 size: 8 bit */
            INTC_PSR_8B_tag PSR241;        /* offset: 0x0131 size: 8 bit */
            INTC_PSR_8B_tag PSR242;        /* offset: 0x0132 size: 8 bit */
            INTC_PSR_8B_tag PSR243;        /* offset: 0x0133 size: 8 bit */
            INTC_PSR_8B_tag PSR244;        /* offset: 0x0134 size: 8 bit */
            INTC_PSR_8B_tag PSR245;        /* offset: 0x0135 size: 8 bit */
            INTC_PSR_8B_tag PSR246;        /* offset: 0x0136 size: 8 bit */
            INTC_PSR_8B_tag PSR247;        /* offset: 0x0137 size: 8 bit */
            INTC_PSR_8B_tag PSR248;        /* offset: 0x0138 size: 8 bit */
            INTC_PSR_8B_tag PSR249;        /* offset: 0x0139 size: 8 bit */
            INTC_PSR_8B_tag PSR250;        /* offset: 0x013A size: 8 bit */
            INTC_PSR_8B_tag PSR251;        /* offset: 0x013B size: 8 bit */
            INTC_PSR_8B_tag PSR252;        /* offset: 0x013C size: 8 bit */
            INTC_PSR_8B_tag PSR253;        /* offset: 0x013D size: 8 bit */
            INTC_PSR_8B_tag PSR254;        /* offset: 0x013E size: 8 bit */
            INTC_PSR_8B_tag PSR255;        /* offset: 0x013F size: 8 bit */
            INTC_PSR_8B_tag PSR256;        /* offset: 0x0140 size: 8 bit */
            INTC_PSR_8B_tag PSR257;        /* offset: 0x0141 size: 8 bit */
            INTC_PSR_8B_tag PSR258;        /* offset: 0x0142 size: 8 bit */
            INTC_PSR_8B_tag PSR259;        /* offset: 0x0143 size: 8 bit */
            INTC_PSR_8B_tag PSR260;        /* offset: 0x0144 size: 8 bit */
            INTC_PSR_8B_tag PSR261;        /* offset: 0x0145 size: 8 bit */
            INTC_PSR_8B_tag PSR262;        /* offset: 0x0146 size: 8 bit */
            INTC_PSR_8B_tag PSR263;        /* offset: 0x0147 size: 8 bit */
            INTC_PSR_8B_tag PSR264;        /* offset: 0x0148 size: 8 bit */
            INTC_PSR_8B_tag PSR265;        /* offset: 0x0149 size: 8 bit */
            INTC_PSR_8B_tag PSR266;        /* offset: 0x014A size: 8 bit */
            INTC_PSR_8B_tag PSR267;        /* offset: 0x014B size: 8 bit */
            INTC_PSR_8B_tag PSR268;        /* offset: 0x014C size: 8 bit */
            INTC_PSR_8B_tag PSR269;        /* offset: 0x014D size: 8 bit */
            INTC_PSR_8B_tag PSR270;        /* offset: 0x014E size: 8 bit */
            INTC_PSR_8B_tag PSR271;        /* offset: 0x014F size: 8 bit */
            INTC_PSR_8B_tag PSR272;        /* offset: 0x0150 size: 8 bit */
            INTC_PSR_8B_tag PSR273;        /* offset: 0x0151 size: 8 bit */
            INTC_PSR_8B_tag PSR274;        /* offset: 0x0152 size: 8 bit */
            INTC_PSR_8B_tag PSR275;        /* offset: 0x0153 size: 8 bit */
            INTC_PSR_8B_tag PSR276;        /* offset: 0x0154 size: 8 bit */
            INTC_PSR_8B_tag PSR277;        /* offset: 0x0155 size: 8 bit */
            INTC_PSR_8B_tag PSR278;        /* offset: 0x0156 size: 8 bit */
            INTC_PSR_8B_tag PSR279;        /* offset: 0x0157 size: 8 bit */
            INTC_PSR_8B_tag PSR280;        /* offset: 0x0158 size: 8 bit */
            INTC_PSR_8B_tag PSR281;        /* offset: 0x0159 size: 8 bit */
            INTC_PSR_8B_tag PSR282;        /* offset: 0x015A size: 8 bit */
            INTC_PSR_8B_tag PSR283;        /* offset: 0x015B size: 8 bit */
            INTC_PSR_8B_tag PSR284;        /* offset: 0x015C size: 8 bit */
            INTC_PSR_8B_tag PSR285;        /* offset: 0x015D size: 8 bit */
            INTC_PSR_8B_tag PSR286;        /* offset: 0x015E size: 8 bit */
            INTC_PSR_8B_tag PSR287;        /* offset: 0x015F size: 8 bit */
            INTC_PSR_8B_tag PSR288;        /* offset: 0x0160 size: 8 bit */
            INTC_PSR_8B_tag PSR289;        /* offset: 0x0161 size: 8 bit */
            INTC_PSR_8B_tag PSR290;        /* offset: 0x0162 size: 8 bit */
            INTC_PSR_8B_tag PSR291;        /* offset: 0x0163 size: 8 bit */
            INTC_PSR_8B_tag PSR292;        /* offset: 0x0164 size: 8 bit */
            INTC_PSR_8B_tag PSR293;        /* offset: 0x0165 size: 8 bit */
            INTC_PSR_8B_tag PSR294;        /* offset: 0x0166 size: 8 bit */
            INTC_PSR_8B_tag PSR295;        /* offset: 0x0167 size: 8 bit */
            INTC_PSR_8B_tag PSR296;        /* offset: 0x0168 size: 8 bit */
            INTC_PSR_8B_tag PSR297;        /* offset: 0x0169 size: 8 bit */
            INTC_PSR_8B_tag PSR298;        /* offset: 0x016A size: 8 bit */
            INTC_PSR_8B_tag PSR299;        /* offset: 0x016B size: 8 bit */
            INTC_PSR_8B_tag PSR300;        /* offset: 0x016C size: 8 bit */
            INTC_PSR_8B_tag PSR301;        /* offset: 0x016D size: 8 bit */
            INTC_PSR_8B_tag PSR302;        /* offset: 0x016E size: 8 bit */
            INTC_PSR_8B_tag PSR303;        /* offset: 0x016F size: 8 bit */
            INTC_PSR_8B_tag PSR304;        /* offset: 0x0170 size: 8 bit */
            INTC_PSR_8B_tag PSR305;        /* offset: 0x0171 size: 8 bit */
            INTC_PSR_8B_tag PSR306;        /* offset: 0x0172 size: 8 bit */
            INTC_PSR_8B_tag PSR307;        /* offset: 0x0173 size: 8 bit */
            INTC_PSR_8B_tag PSR308;        /* offset: 0x0174 size: 8 bit */
            INTC_PSR_8B_tag PSR309;        /* offset: 0x0175 size: 8 bit */
            INTC_PSR_8B_tag PSR310;        /* offset: 0x0176 size: 8 bit */
            INTC_PSR_8B_tag PSR311;        /* offset: 0x0177 size: 8 bit */
            INTC_PSR_8B_tag PSR312;        /* offset: 0x0178 size: 8 bit */
            INTC_PSR_8B_tag PSR313;        /* offset: 0x0179 size: 8 bit */
            INTC_PSR_8B_tag PSR314;        /* offset: 0x017A size: 8 bit */
            INTC_PSR_8B_tag PSR315;        /* offset: 0x017B size: 8 bit */
            INTC_PSR_8B_tag PSR316;        /* offset: 0x017C size: 8 bit */
            INTC_PSR_8B_tag PSR317;        /* offset: 0x017D size: 8 bit */
            INTC_PSR_8B_tag PSR318;        /* offset: 0x017E size: 8 bit */
            INTC_PSR_8B_tag PSR319;        /* offset: 0x017F size: 8 bit */
            INTC_PSR_8B_tag PSR320;        /* offset: 0x0180 size: 8 bit */
            INTC_PSR_8B_tag PSR321;        /* offset: 0x0181 size: 8 bit */
            INTC_PSR_8B_tag PSR322;        /* offset: 0x0182 size: 8 bit */
            INTC_PSR_8B_tag PSR323;        /* offset: 0x0183 size: 8 bit */
            INTC_PSR_8B_tag PSR324;        /* offset: 0x0184 size: 8 bit */
            INTC_PSR_8B_tag PSR325;        /* offset: 0x0185 size: 8 bit */
            INTC_PSR_8B_tag PSR326;        /* offset: 0x0186 size: 8 bit */
            INTC_PSR_8B_tag PSR327;        /* offset: 0x0187 size: 8 bit */
            INTC_PSR_8B_tag PSR328;        /* offset: 0x0188 size: 8 bit */
            INTC_PSR_8B_tag PSR329;        /* offset: 0x0189 size: 8 bit */
            INTC_PSR_8B_tag PSR330;        /* offset: 0x018A size: 8 bit */
            INTC_PSR_8B_tag PSR331;        /* offset: 0x018B size: 8 bit */
            INTC_PSR_8B_tag PSR332;        /* offset: 0x018C size: 8 bit */
            INTC_PSR_8B_tag PSR333;        /* offset: 0x018D size: 8 bit */
            INTC_PSR_8B_tag PSR334;        /* offset: 0x018E size: 8 bit */
            INTC_PSR_8B_tag PSR335;        /* offset: 0x018F size: 8 bit */
            INTC_PSR_8B_tag PSR336;        /* offset: 0x0190 size: 8 bit */
            INTC_PSR_8B_tag PSR337;        /* offset: 0x0191 size: 8 bit */
            INTC_PSR_8B_tag PSR338;        /* offset: 0x0192 size: 8 bit */
            INTC_PSR_8B_tag PSR339;        /* offset: 0x0193 size: 8 bit */
            INTC_PSR_8B_tag PSR340;        /* offset: 0x0194 size: 8 bit */
            INTC_PSR_8B_tag PSR341;        /* offset: 0x0195 size: 8 bit */
            INTC_PSR_8B_tag PSR342;        /* offset: 0x0196 size: 8 bit */
            INTC_PSR_8B_tag PSR343;        /* offset: 0x0197 size: 8 bit */
            INTC_PSR_8B_tag PSR344;        /* offset: 0x0198 size: 8 bit */
            INTC_PSR_8B_tag PSR345;        /* offset: 0x0199 size: 8 bit */
            INTC_PSR_8B_tag PSR346;        /* offset: 0x019A size: 8 bit */
            INTC_PSR_8B_tag PSR347;        /* offset: 0x019B size: 8 bit */
            INTC_PSR_8B_tag PSR348;        /* offset: 0x019C size: 8 bit */
            INTC_PSR_8B_tag PSR349;        /* offset: 0x019D size: 8 bit */
            INTC_PSR_8B_tag PSR350;        /* offset: 0x019E size: 8 bit */
            INTC_PSR_8B_tag PSR351;        /* offset: 0x019F size: 8 bit */
            INTC_PSR_8B_tag PSR352;        /* offset: 0x01A0 size: 8 bit */
            INTC_PSR_8B_tag PSR353;        /* offset: 0x01A1 size: 8 bit */
            INTC_PSR_8B_tag PSR354;        /* offset: 0x01A2 size: 8 bit */
            INTC_PSR_8B_tag PSR355;        /* offset: 0x01A3 size: 8 bit */
            INTC_PSR_8B_tag PSR356;        /* offset: 0x01A4 size: 8 bit */
            INTC_PSR_8B_tag PSR357;        /* offset: 0x01A5 size: 8 bit */
            INTC_PSR_8B_tag PSR358;        /* offset: 0x01A6 size: 8 bit */
            INTC_PSR_8B_tag PSR359;        /* offset: 0x01A7 size: 8 bit */
            INTC_PSR_8B_tag PSR360;        /* offset: 0x01A8 size: 8 bit */
            INTC_PSR_8B_tag PSR361;        /* offset: 0x01A9 size: 8 bit */
            INTC_PSR_8B_tag PSR362;        /* offset: 0x01AA size: 8 bit */
            INTC_PSR_8B_tag PSR363;        /* offset: 0x01AB size: 8 bit */
            INTC_PSR_8B_tag PSR364;        /* offset: 0x01AC size: 8 bit */
            INTC_PSR_8B_tag PSR365;        /* offset: 0x01AD size: 8 bit */
            INTC_PSR_8B_tag PSR366;        /* offset: 0x01AE size: 8 bit */
            INTC_PSR_8B_tag PSR367;        /* offset: 0x01AF size: 8 bit */
            INTC_PSR_8B_tag PSR368;        /* offset: 0x01B0 size: 8 bit */
            INTC_PSR_8B_tag PSR369;        /* offset: 0x01B1 size: 8 bit */
            INTC_PSR_8B_tag PSR370;        /* offset: 0x01B2 size: 8 bit */
            INTC_PSR_8B_tag PSR371;        /* offset: 0x01B3 size: 8 bit */
            INTC_PSR_8B_tag PSR372;        /* offset: 0x01B4 size: 8 bit */
            INTC_PSR_8B_tag PSR373;        /* offset: 0x01B5 size: 8 bit */
            INTC_PSR_8B_tag PSR374;        /* offset: 0x01B6 size: 8 bit */
            INTC_PSR_8B_tag PSR375;        /* offset: 0x01B7 size: 8 bit */
            INTC_PSR_8B_tag PSR376;        /* offset: 0x01B8 size: 8 bit */
            INTC_PSR_8B_tag PSR377;        /* offset: 0x01B9 size: 8 bit */
            INTC_PSR_8B_tag PSR378;        /* offset: 0x01BA size: 8 bit */
            INTC_PSR_8B_tag PSR379;        /* offset: 0x01BB size: 8 bit */
            INTC_PSR_8B_tag PSR380;        /* offset: 0x01BC size: 8 bit */
            INTC_PSR_8B_tag PSR381;        /* offset: 0x01BD size: 8 bit */
            INTC_PSR_8B_tag PSR382;        /* offset: 0x01BE size: 8 bit */
            INTC_PSR_8B_tag PSR383;        /* offset: 0x01BF size: 8 bit */
            INTC_PSR_8B_tag PSR384;        /* offset: 0x01C0 size: 8 bit */
            INTC_PSR_8B_tag PSR385;        /* offset: 0x01C1 size: 8 bit */
            INTC_PSR_8B_tag PSR386;        /* offset: 0x01C2 size: 8 bit */
            INTC_PSR_8B_tag PSR387;        /* offset: 0x01C3 size: 8 bit */
            INTC_PSR_8B_tag PSR388;        /* offset: 0x01C4 size: 8 bit */
            INTC_PSR_8B_tag PSR389;        /* offset: 0x01C5 size: 8 bit */
            INTC_PSR_8B_tag PSR390;        /* offset: 0x01C6 size: 8 bit */
            INTC_PSR_8B_tag PSR391;        /* offset: 0x01C7 size: 8 bit */
            INTC_PSR_8B_tag PSR392;        /* offset: 0x01C8 size: 8 bit */
            INTC_PSR_8B_tag PSR393;        /* offset: 0x01C9 size: 8 bit */
            INTC_PSR_8B_tag PSR394;        /* offset: 0x01CA size: 8 bit */
            INTC_PSR_8B_tag PSR395;        /* offset: 0x01CB size: 8 bit */
            INTC_PSR_8B_tag PSR396;        /* offset: 0x01CC size: 8 bit */
            INTC_PSR_8B_tag PSR397;        /* offset: 0x01CD size: 8 bit */
            INTC_PSR_8B_tag PSR398;        /* offset: 0x01CE size: 8 bit */
            INTC_PSR_8B_tag PSR399;        /* offset: 0x01CF size: 8 bit */
            INTC_PSR_8B_tag PSR400;        /* offset: 0x01D0 size: 8 bit */
            INTC_PSR_8B_tag PSR401;        /* offset: 0x01D1 size: 8 bit */
            INTC_PSR_8B_tag PSR402;        /* offset: 0x01D2 size: 8 bit */
            INTC_PSR_8B_tag PSR403;        /* offset: 0x01D3 size: 8 bit */
            INTC_PSR_8B_tag PSR404;        /* offset: 0x01D4 size: 8 bit */
            INTC_PSR_8B_tag PSR405;        /* offset: 0x01D5 size: 8 bit */
            INTC_PSR_8B_tag PSR406;        /* offset: 0x01D6 size: 8 bit */
            INTC_PSR_8B_tag PSR407;        /* offset: 0x01D7 size: 8 bit */
            INTC_PSR_8B_tag PSR408;        /* offset: 0x01D8 size: 8 bit */
            INTC_PSR_8B_tag PSR409;        /* offset: 0x01D9 size: 8 bit */
            INTC_PSR_8B_tag PSR410;        /* offset: 0x01DA size: 8 bit */
            INTC_PSR_8B_tag PSR411;        /* offset: 0x01DB size: 8 bit */
            INTC_PSR_8B_tag PSR412;        /* offset: 0x01DC size: 8 bit */
            INTC_PSR_8B_tag PSR413;        /* offset: 0x01DD size: 8 bit */
            INTC_PSR_8B_tag PSR414;        /* offset: 0x01DE size: 8 bit */
            INTC_PSR_8B_tag PSR415;        /* offset: 0x01DF size: 8 bit */
            INTC_PSR_8B_tag PSR416;        /* offset: 0x01E0 size: 8 bit */
            INTC_PSR_8B_tag PSR417;        /* offset: 0x01E1 size: 8 bit */
            INTC_PSR_8B_tag PSR418;        /* offset: 0x01E2 size: 8 bit */
            INTC_PSR_8B_tag PSR419;        /* offset: 0x01E3 size: 8 bit */
            INTC_PSR_8B_tag PSR420;        /* offset: 0x01E4 size: 8 bit */
            INTC_PSR_8B_tag PSR421;        /* offset: 0x01E5 size: 8 bit */
            INTC_PSR_8B_tag PSR422;        /* offset: 0x01E6 size: 8 bit */
            INTC_PSR_8B_tag PSR423;        /* offset: 0x01E7 size: 8 bit */
            INTC_PSR_8B_tag PSR424;        /* offset: 0x01E8 size: 8 bit */
            INTC_PSR_8B_tag PSR425;        /* offset: 0x01E9 size: 8 bit */
            INTC_PSR_8B_tag PSR426;        /* offset: 0x01EA size: 8 bit */
            INTC_PSR_8B_tag PSR427;        /* offset: 0x01EB size: 8 bit */
            INTC_PSR_8B_tag PSR428;        /* offset: 0x01EC size: 8 bit */
            INTC_PSR_8B_tag PSR429;        /* offset: 0x01ED size: 8 bit */
            INTC_PSR_8B_tag PSR430;        /* offset: 0x01EE size: 8 bit */
            INTC_PSR_8B_tag PSR431;        /* offset: 0x01EF size: 8 bit */
            INTC_PSR_8B_tag PSR432;        /* offset: 0x01F0 size: 8 bit */
            INTC_PSR_8B_tag PSR433;        /* offset: 0x01F1 size: 8 bit */
            INTC_PSR_8B_tag PSR434;        /* offset: 0x01F2 size: 8 bit */
            INTC_PSR_8B_tag PSR435;        /* offset: 0x01F3 size: 8 bit */
            INTC_PSR_8B_tag PSR436;        /* offset: 0x01F4 size: 8 bit */
            INTC_PSR_8B_tag PSR437;        /* offset: 0x01F5 size: 8 bit */
            INTC_PSR_8B_tag PSR438;        /* offset: 0x01F6 size: 8 bit */
            INTC_PSR_8B_tag PSR439;        /* offset: 0x01F7 size: 8 bit */
            INTC_PSR_8B_tag PSR440;        /* offset: 0x01F8 size: 8 bit */
            INTC_PSR_8B_tag PSR441;        /* offset: 0x01F9 size: 8 bit */
            INTC_PSR_8B_tag PSR442;        /* offset: 0x01FA size: 8 bit */
            INTC_PSR_8B_tag PSR443;        /* offset: 0x01FB size: 8 bit */
            INTC_PSR_8B_tag PSR444;        /* offset: 0x01FC size: 8 bit */
            INTC_PSR_8B_tag PSR445;        /* offset: 0x01FD size: 8 bit */
            INTC_PSR_8B_tag PSR446;        /* offset: 0x01FE size: 8 bit */
            INTC_PSR_8B_tag PSR447;        /* offset: 0x01FF size: 8 bit */
            INTC_PSR_8B_tag PSR448;        /* offset: 0x0200 size: 8 bit */
            INTC_PSR_8B_tag PSR449;        /* offset: 0x0201 size: 8 bit */
            INTC_PSR_8B_tag PSR450;        /* offset: 0x0202 size: 8 bit */
            INTC_PSR_8B_tag PSR451;        /* offset: 0x0203 size: 8 bit */
            INTC_PSR_8B_tag PSR452;        /* offset: 0x0204 size: 8 bit */
            INTC_PSR_8B_tag PSR453;        /* offset: 0x0205 size: 8 bit */
            INTC_PSR_8B_tag PSR454;        /* offset: 0x0206 size: 8 bit */
            INTC_PSR_8B_tag PSR455;        /* offset: 0x0207 size: 8 bit */
            INTC_PSR_8B_tag PSR456;        /* offset: 0x0208 size: 8 bit */
            INTC_PSR_8B_tag PSR457;        /* offset: 0x0209 size: 8 bit */
            INTC_PSR_8B_tag PSR458;        /* offset: 0x020A size: 8 bit */
            INTC_PSR_8B_tag PSR459;        /* offset: 0x020B size: 8 bit */
            INTC_PSR_8B_tag PSR460;        /* offset: 0x020C size: 8 bit */
            INTC_PSR_8B_tag PSR461;        /* offset: 0x020D size: 8 bit */
            INTC_PSR_8B_tag PSR462;        /* offset: 0x020E size: 8 bit */
            INTC_PSR_8B_tag PSR463;        /* offset: 0x020F size: 8 bit */
            INTC_PSR_8B_tag PSR464;        /* offset: 0x0210 size: 8 bit */
            INTC_PSR_8B_tag PSR465;        /* offset: 0x0211 size: 8 bit */
            INTC_PSR_8B_tag PSR466;        /* offset: 0x0212 size: 8 bit */
            INTC_PSR_8B_tag PSR467;        /* offset: 0x0213 size: 8 bit */
            INTC_PSR_8B_tag PSR468;        /* offset: 0x0214 size: 8 bit */
            INTC_PSR_8B_tag PSR469;        /* offset: 0x0215 size: 8 bit */
            INTC_PSR_8B_tag PSR470;        /* offset: 0x0216 size: 8 bit */
            INTC_PSR_8B_tag PSR471;        /* offset: 0x0217 size: 8 bit */
            INTC_PSR_8B_tag PSR472;        /* offset: 0x0218 size: 8 bit */
            INTC_PSR_8B_tag PSR473;        /* offset: 0x0219 size: 8 bit */
            INTC_PSR_8B_tag PSR474;        /* offset: 0x021A size: 8 bit */
            INTC_PSR_8B_tag PSR475;        /* offset: 0x021B size: 8 bit */
            INTC_PSR_8B_tag PSR476;        /* offset: 0x021C size: 8 bit */
            INTC_PSR_8B_tag PSR477;        /* offset: 0x021D size: 8 bit */
            INTC_PSR_8B_tag PSR478;        /* offset: 0x021E size: 8 bit */
            INTC_PSR_8B_tag PSR479;        /* offset: 0x021F size: 8 bit */
            INTC_PSR_8B_tag PSR480;        /* offset: 0x0220 size: 8 bit */
            INTC_PSR_8B_tag PSR481;        /* offset: 0x0221 size: 8 bit */
            INTC_PSR_8B_tag PSR482;        /* offset: 0x0222 size: 8 bit */
            INTC_PSR_8B_tag PSR483;        /* offset: 0x0223 size: 8 bit */
            INTC_PSR_8B_tag PSR484;        /* offset: 0x0224 size: 8 bit */
            INTC_PSR_8B_tag PSR485;        /* offset: 0x0225 size: 8 bit */
            INTC_PSR_8B_tag PSR486;        /* offset: 0x0226 size: 8 bit */
            INTC_PSR_8B_tag PSR487;        /* offset: 0x0227 size: 8 bit */
            INTC_PSR_8B_tag PSR488;        /* offset: 0x0228 size: 8 bit */
            INTC_PSR_8B_tag PSR489;        /* offset: 0x0229 size: 8 bit */
            INTC_PSR_8B_tag PSR490;        /* offset: 0x022A size: 8 bit */
            INTC_PSR_8B_tag PSR491;        /* offset: 0x022B size: 8 bit */
            INTC_PSR_8B_tag PSR492;        /* offset: 0x022C size: 8 bit */
            INTC_PSR_8B_tag PSR493;        /* offset: 0x022D size: 8 bit */
            INTC_PSR_8B_tag PSR494;        /* offset: 0x022E size: 8 bit */
            INTC_PSR_8B_tag PSR495;        /* offset: 0x022F size: 8 bit */
            INTC_PSR_8B_tag PSR496;        /* offset: 0x0230 size: 8 bit */
            INTC_PSR_8B_tag PSR497;        /* offset: 0x0231 size: 8 bit */
            INTC_PSR_8B_tag PSR498;        /* offset: 0x0232 size: 8 bit */
            INTC_PSR_8B_tag PSR499;        /* offset: 0x0233 size: 8 bit */
            INTC_PSR_8B_tag PSR500;        /* offset: 0x0234 size: 8 bit */
            INTC_PSR_8B_tag PSR501;        /* offset: 0x0235 size: 8 bit */
            INTC_PSR_8B_tag PSR502;        /* offset: 0x0236 size: 8 bit */
            INTC_PSR_8B_tag PSR503;        /* offset: 0x0237 size: 8 bit */
            INTC_PSR_8B_tag PSR504;        /* offset: 0x0238 size: 8 bit */
            INTC_PSR_8B_tag PSR505;        /* offset: 0x0239 size: 8 bit */
            INTC_PSR_8B_tag PSR506;        /* offset: 0x023A size: 8 bit */
            INTC_PSR_8B_tag PSR507;        /* offset: 0x023B size: 8 bit */
            INTC_PSR_8B_tag PSR508;        /* offset: 0x023C size: 8 bit */
            INTC_PSR_8B_tag PSR509;        /* offset: 0x023D size: 8 bit */
            INTC_PSR_8B_tag PSR510;        /* offset: 0x023E size: 8 bit */
            INTC_PSR_8B_tag PSR511;        /* offset: 0x023F size: 8 bit */
         };

      };
   } INTC_tag;


#define INTC  (*(volatile INTC_tag *) 0xFFF48000UL)

#ifdef __MWERKS__
#pragma pop
#endif

#ifdef __cplusplus
}
#endif
/* End of file */

