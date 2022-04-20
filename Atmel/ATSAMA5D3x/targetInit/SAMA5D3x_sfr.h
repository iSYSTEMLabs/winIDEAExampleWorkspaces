#include <stdint.h>

struct ADC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t START:1;
      uint64_t TSCALIB:1;
      uint64_t AUTOCAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TRGSEL:3;
      uint64_t LOWRES:1;
      uint64_t SLEEP:1;
      uint64_t FWUP:1;
      uint64_t reservedSpace1:1;
      uint64_t PRESCAL:8;
      uint64_t STARTUP:4;
      uint64_t SETTLING:2;
      uint64_t reservedSpace2:1;
      uint64_t ANACH:1;
      uint64_t TRACKTIM:4;
      uint64_t reservedSpace3:3;
      uint64_t USEQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USCH1:4;
      uint64_t USCH2:4;
      uint64_t USCH3:4;
      uint64_t USCH4:4;
      uint64_t USCH5:4;
      uint64_t USCH6:4;
      uint64_t USCH7:4;
      uint64_t USCH8:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEQR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USCH9:4;
      uint64_t USCH10:4;
      uint64_t USCH11:4;
      uint64_t USCH12:4;
      uint64_t USCH13:4;
      uint64_t USCH14:4;
      uint64_t USCH15:4;
      uint64_t USCH16:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEQR2;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHER;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHDR;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LDATA:12;
      uint64_t CHNB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC0:1;
      uint64_t EOC1:1;
      uint64_t EOC2:1;
      uint64_t EOC3:1;
      uint64_t EOC4:1;
      uint64_t EOC5:1;
      uint64_t EOC6:1;
      uint64_t EOC7:1;
      uint64_t EOC8:1;
      uint64_t EOC9:1;
      uint64_t EOC10:1;
      uint64_t EOC11:1;
      uint64_t reservedSpace0:8;
      uint64_t XRDY:1;
      uint64_t YRDY:1;
      uint64_t PRDY:1;
      uint64_t EOCAL:1;
      uint64_t DRDY:1;
      uint64_t GOVRE:1;
      uint64_t COMPE:1;
      uint64_t reservedSpace1:2;
      uint64_t PEN:1;
      uint64_t NOPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC0:1;
      uint64_t EOC1:1;
      uint64_t EOC2:1;
      uint64_t EOC3:1;
      uint64_t EOC4:1;
      uint64_t EOC5:1;
      uint64_t EOC6:1;
      uint64_t EOC7:1;
      uint64_t EOC8:1;
      uint64_t EOC9:1;
      uint64_t EOC10:1;
      uint64_t EOC11:1;
      uint64_t reservedSpace0:8;
      uint64_t XRDY:1;
      uint64_t YRDY:1;
      uint64_t PRDY:1;
      uint64_t EOCAL:1;
      uint64_t DRDY:1;
      uint64_t GOVRE:1;
      uint64_t COMPE:1;
      uint64_t reservedSpace1:2;
      uint64_t PEN:1;
      uint64_t NOPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC0:1;
      uint64_t EOC1:1;
      uint64_t EOC2:1;
      uint64_t EOC3:1;
      uint64_t EOC4:1;
      uint64_t EOC5:1;
      uint64_t EOC6:1;
      uint64_t EOC7:1;
      uint64_t EOC8:1;
      uint64_t EOC9:1;
      uint64_t EOC10:1;
      uint64_t EOC11:1;
      uint64_t reservedSpace0:8;
      uint64_t XRDY:1;
      uint64_t YRDY:1;
      uint64_t PRDY:1;
      uint64_t EOCAL:1;
      uint64_t DRDY:1;
      uint64_t GOVRE:1;
      uint64_t COMPE:1;
      uint64_t reservedSpace1:2;
      uint64_t PEN:1;
      uint64_t NOPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC0:1;
      uint64_t EOC1:1;
      uint64_t EOC2:1;
      uint64_t EOC3:1;
      uint64_t EOC4:1;
      uint64_t EOC5:1;
      uint64_t EOC6:1;
      uint64_t EOC7:1;
      uint64_t EOC8:1;
      uint64_t EOC9:1;
      uint64_t EOC10:1;
      uint64_t EOC11:1;
      uint64_t reservedSpace0:8;
      uint64_t XRDY:1;
      uint64_t YRDY:1;
      uint64_t PRDY:1;
      uint64_t EOCAL:1;
      uint64_t DRDY:1;
      uint64_t GOVRE:1;
      uint64_t COMPE:1;
      uint64_t reservedSpace1:2;
      uint64_t PEN:1;
      uint64_t NOPEN:1;
      uint64_t PENS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVRE0:1;
      uint64_t OVRE1:1;
      uint64_t OVRE2:1;
      uint64_t OVRE3:1;
      uint64_t OVRE4:1;
      uint64_t OVRE5:1;
      uint64_t OVRE6:1;
      uint64_t OVRE7:1;
      uint64_t OVRE8:1;
      uint64_t OVRE9:1;
      uint64_t OVRE10:1;
      uint64_t OVRE11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPMODE:2;
      uint64_t reservedSpace0:2;
      uint64_t CMPSEL:4;
      uint64_t reservedSpace1:1;
      uint64_t CMPALL:1;
      uint64_t reservedSpace2:2;
      uint64_t CMPFILTER:2;
      uint64_t reservedSpace3:10;
      uint64_t TAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOWTHRES:12;
      uint64_t reservedSpace0:4;
      uint64_t HIGHTHRES:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GAIN0:2;
      uint64_t GAIN1:2;
      uint64_t GAIN2:2;
      uint64_t GAIN3:2;
      uint64_t GAIN4:2;
      uint64_t GAIN5:2;
      uint64_t GAIN6:2;
      uint64_t GAIN7:2;
      uint64_t GAIN8:2;
      uint64_t GAIN9:2;
      uint64_t GAIN10:2;
      uint64_t GAIN11:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFF0:1;
      uint64_t OFF1:1;
      uint64_t OFF2:1;
      uint64_t OFF3:1;
      uint64_t OFF4:1;
      uint64_t OFF5:1;
      uint64_t OFF6:1;
      uint64_t OFF7:1;
      uint64_t OFF8:1;
      uint64_t OFF9:1;
      uint64_t OFF10:1;
      uint64_t OFF11:1;
      uint64_t reservedSpace0:4;
      uint64_t DIFF0:1;
      uint64_t DIFF1:1;
      uint64_t DIFF2:1;
      uint64_t DIFF3:1;
      uint64_t DIFF4:1;
      uint64_t DIFF5:1;
      uint64_t DIFF6:1;
      uint64_t DIFF7:1;
      uint64_t DIFF8:1;
      uint64_t DIFF9:1;
      uint64_t DIFF10:1;
      uint64_t DIFF11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR;

  uint8_t res2[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PENDETSENS:2;
      uint64_t reservedSpace0:6;
      uint64_t IBCTL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACR;

  uint8_t res3[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSMODE:2;
      uint64_t reservedSpace0:2;
      uint64_t TSAV:2;
      uint64_t reservedSpace1:2;
      uint64_t TSFREQ:4;
      uint64_t reservedSpace2:4;
      uint64_t TSSCTIM:4;
      uint64_t reservedSpace3:2;
      uint64_t NOTSDMA:1;
      uint64_t reservedSpace4:1;
      uint64_t PENDET:1;
      uint64_t reservedSpace5:3;
      uint64_t PENDBC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPOS:12;
      uint64_t reservedSpace0:4;
      uint64_t XSCALE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XPOSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YPOS:12;
      uint64_t reservedSpace0:4;
      uint64_t YSCALE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) YPOSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Z1:12;
      uint64_t reservedSpace0:4;
      uint64_t Z2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRESSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGMOD:3;
      uint64_t reservedSpace0:13;
      uint64_t TRGPER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGR;

  uint8_t res4[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

};

#define ADC_0 (*(volatile struct ADC_0_tag *) 0xf8018000)

struct AES_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t reservedSpace0:7;
      uint64_t SWRST:1;
      uint64_t reservedSpace1:7;
      uint64_t LOADSEED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIPHER:1;
      uint64_t reservedSpace0:3;
      uint64_t PROCDLY:4;
      uint64_t SMOD:2;
      uint64_t KEYSIZE:2;
      uint64_t OPMOD:3;
      uint64_t LOD:1;
      uint64_t CFBS:3;
      uint64_t reservedSpace1:1;
      uint64_t CKEY:4;
      uint64_t CMTYP1:1;
      uint64_t CMTYP2:1;
      uint64_t CMTYP3:1;
      uint64_t CMTYP4:1;
      uint64_t CMTYP5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t URAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t URAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t URAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t URAD:1;
      uint64_t reservedSpace1:3;
      uint64_t URAT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYWR;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDATAR;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODATAR;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IVR;

};

#define AES_0 (*(volatile struct AES_0_tag *) 0xf8038000)

struct AIC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIOR:3;
      uint64_t reservedSpace0:2;
      uint64_t SRCTYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VECTOR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SVR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIQV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQID:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIQ:1;
      uint64_t SYS:1;
      uint64_t PID2:1;
      uint64_t PID3:1;
      uint64_t PID4:1;
      uint64_t PID5:1;
      uint64_t PID6:1;
      uint64_t PID7:1;
      uint64_t PID8:1;
      uint64_t PID9:1;
      uint64_t PID10:1;
      uint64_t PID11:1;
      uint64_t PID12:1;
      uint64_t PID13:1;
      uint64_t PID14:1;
      uint64_t PID15:1;
      uint64_t PID16:1;
      uint64_t PID17:1;
      uint64_t PID18:1;
      uint64_t PID19:1;
      uint64_t PID20:1;
      uint64_t PID21:1;
      uint64_t PID22:1;
      uint64_t PID23:1;
      uint64_t PID24:1;
      uint64_t PID25:1;
      uint64_t PID26:1;
      uint64_t PID27:1;
      uint64_t PID28:1;
      uint64_t PID29:1;
      uint64_t PID30:1;
      uint64_t PID31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID32:1;
      uint64_t PID33:1;
      uint64_t PID34:1;
      uint64_t PID35:1;
      uint64_t PID36:1;
      uint64_t PID37:1;
      uint64_t PID38:1;
      uint64_t PID39:1;
      uint64_t PID40:1;
      uint64_t PID41:1;
      uint64_t PID42:1;
      uint64_t PID43:1;
      uint64_t PID44:1;
      uint64_t PID45:1;
      uint64_t PID46:1;
      uint64_t PID47:1;
      uint64_t PID48:1;
      uint64_t PID49:1;
      uint64_t PID50:1;
      uint64_t PID51:1;
      uint64_t PID52:1;
      uint64_t PID53:1;
      uint64_t PID54:1;
      uint64_t PID55:1;
      uint64_t PID56:1;
      uint64_t PID57:1;
      uint64_t PID58:1;
      uint64_t PID59:1;
      uint64_t PID60:1;
      uint64_t PID61:1;
      uint64_t PID62:1;
      uint64_t PID63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID64:1;
      uint64_t PID65:1;
      uint64_t PID66:1;
      uint64_t PID67:1;
      uint64_t PID68:1;
      uint64_t PID69:1;
      uint64_t PID70:1;
      uint64_t PID71:1;
      uint64_t PID72:1;
      uint64_t PID73:1;
      uint64_t PID74:1;
      uint64_t PID75:1;
      uint64_t PID76:1;
      uint64_t PID77:1;
      uint64_t PID78:1;
      uint64_t PID79:1;
      uint64_t PID80:1;
      uint64_t PID81:1;
      uint64_t PID82:1;
      uint64_t PID83:1;
      uint64_t PID84:1;
      uint64_t PID85:1;
      uint64_t PID86:1;
      uint64_t PID87:1;
      uint64_t PID88:1;
      uint64_t PID89:1;
      uint64_t PID90:1;
      uint64_t PID91:1;
      uint64_t PID92:1;
      uint64_t PID93:1;
      uint64_t PID94:1;
      uint64_t PID95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID96:1;
      uint64_t PID97:1;
      uint64_t PID98:1;
      uint64_t PID99:1;
      uint64_t PID100:1;
      uint64_t PID101:1;
      uint64_t PID102:1;
      uint64_t PID103:1;
      uint64_t PID104:1;
      uint64_t PID105:1;
      uint64_t PID106:1;
      uint64_t PID107:1;
      uint64_t PID108:1;
      uint64_t PID109:1;
      uint64_t PID110:1;
      uint64_t PID111:1;
      uint64_t PID112:1;
      uint64_t PID113:1;
      uint64_t PID114:1;
      uint64_t PID115:1;
      uint64_t PID116:1;
      uint64_t PID117:1;
      uint64_t PID118:1;
      uint64_t PID119:1;
      uint64_t PID120:1;
      uint64_t PID121:1;
      uint64_t PID122:1;
      uint64_t PID123:1;
      uint64_t PID124:1;
      uint64_t PID125:1;
      uint64_t PID126:1;
      uint64_t PID127:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFIQ:1;
      uint64_t NIRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CISR;

  uint32_t EOICR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIVR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FFDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FFS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FFSR;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROT:1;
      uint64_t GMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCR;

  uint8_t res3[116];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

};

#define AIC_0 (*(volatile struct AIC_0_tag *) 0xfffff000)

struct AXIMX_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t REMAP0:1;
      uint64_t REMAP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REMAP;

  uint8_t res0[8140];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPH_ID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPH_ID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPH_ID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPH_ID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPH_ID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPH_ID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPH_ID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPH_ID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP_ID;

  uint8_t res1[12308];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD_ISS:1;
      uint64_t WR_ISS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMIB3_FN_MOD_BM_ISS;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BP_MRG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMIB3_FN_MOD2;

  uint8_t res3[250072];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD_QOS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASIB0_READ_QOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WR_QOS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASIB0_WRITE_QOS;

  uint8_t res4[3872];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD_INCR_OVR:1;
      uint64_t WR_INCR_OVR:1;
      uint64_t LOCK_OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASIB1_FN_MOD_AHB;

  uint8_t res5[212];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD_QOS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASIB1_READ_QOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WR_QOS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASIB1_WRITE_QOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AHB_RD_INCR_OVR:1;
      uint64_t RD_ISS:1;
      uint64_t AHB_WR_INCR_OVR:1;
      uint64_t WR_ISS:1;
      uint64_t AHB_LOCK_OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASIB1_FN_MOD;

};

#define AXIMX_0 (*(volatile struct AXIMX_0_tag *) 0x800000)

struct BSC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOT:8;
      uint64_t reservedSpace0:8;
      uint64_t BOOTKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

};

#define BSC_0 (*(volatile struct BSC_0_tag *) 0xfffffe54)

struct CAN_CAN0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CANEN:1;
      uint64_t LPM:1;
      uint64_t ABM:1;
      uint64_t OVL:1;
      uint64_t TEOF:1;
      uint64_t TTM:1;
      uint64_t TIMFRZ:1;
      uint64_t DRPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
      uint64_t RBSY:1;
      uint64_t TBSY:1;
      uint64_t OVLSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHASE2:3;
      uint64_t reservedSpace0:1;
      uint64_t PHASE1:3;
      uint64_t reservedSpace1:1;
      uint64_t PROPAG:3;
      uint64_t reservedSpace2:1;
      uint64_t SJW:2;
      uint64_t reservedSpace3:2;
      uint64_t BRP:7;
      uint64_t reservedSpace4:1;
      uint64_t SMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMESTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REC:8;
      uint64_t reservedSpace0:8;
      uint64_t TEC:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:23;
      uint64_t TIMRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACR;

  uint8_t res0[184];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

  uint8_t res1[276];

  uint32_t MMR0;
  uint32_t MAM0;
  uint32_t MID0;
  uint32_t MFID0;
  uint32_t MSR0;
  uint32_t MDL0;
  uint32_t MDH0;
  uint32_t MCR0;
  uint32_t MMR1;
  uint32_t MAM1;
  uint32_t MID1;
  uint32_t MFID1;
  uint32_t MSR1;
  uint32_t MDL1;
  uint32_t MDH1;
  uint32_t MCR1;
  uint32_t MMR2;
  uint32_t MAM2;
  uint32_t MID2;
  uint32_t MFID2;
  uint32_t MSR2;
  uint32_t MDL2;
  uint32_t MDH2;
  uint32_t MCR2;
  uint32_t MMR3;
  uint32_t MAM3;
  uint32_t MID3;
  uint32_t MFID3;
  uint32_t MSR3;
  uint32_t MDL3;
  uint32_t MDH3;
  uint32_t MCR3;
  uint32_t MMR4;
  uint32_t MAM4;
  uint32_t MID4;
  uint32_t MFID4;
  uint32_t MSR4;
  uint32_t MDL4;
  uint32_t MDH4;
  uint32_t MCR4;
  uint32_t MMR5;
  uint32_t MAM5;
  uint32_t MID5;
  uint32_t MFID5;
  uint32_t MSR5;
  uint32_t MDL5;
  uint32_t MDH5;
  uint32_t MCR5;
  uint32_t MMR6;
  uint32_t MAM6;
  uint32_t MID6;
  uint32_t MFID6;
  uint32_t MSR6;
  uint32_t MDL6;
  uint32_t MDH6;
  uint32_t MCR6;
  uint32_t MMR7;
  uint32_t MAM7;
  uint32_t MID7;
  uint32_t MFID7;
  uint32_t MSR7;
  uint32_t MDL7;
  uint32_t MDH7;
  uint32_t MCR7;
};

#define CAN_CAN0_0 (*(volatile struct CAN_CAN0_0_tag *) 0xf000c000)

struct CAN_CAN1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CANEN:1;
      uint64_t LPM:1;
      uint64_t ABM:1;
      uint64_t OVL:1;
      uint64_t TEOF:1;
      uint64_t TTM:1;
      uint64_t TIMFRZ:1;
      uint64_t DRPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
      uint64_t RBSY:1;
      uint64_t TBSY:1;
      uint64_t OVLSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHASE2:3;
      uint64_t reservedSpace0:1;
      uint64_t PHASE1:3;
      uint64_t reservedSpace1:1;
      uint64_t PROPAG:3;
      uint64_t reservedSpace2:1;
      uint64_t SJW:2;
      uint64_t reservedSpace3:2;
      uint64_t BRP:7;
      uint64_t reservedSpace4:1;
      uint64_t SMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMESTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REC:8;
      uint64_t reservedSpace0:8;
      uint64_t TEC:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:23;
      uint64_t TIMRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACR;

  uint8_t res0[184];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

  uint8_t res1[276];

  uint32_t MMR0;
  uint32_t MAM0;
  uint32_t MID0;
  uint32_t MFID0;
  uint32_t MSR0;
  uint32_t MDL0;
  uint32_t MDH0;
  uint32_t MCR0;
  uint32_t MMR1;
  uint32_t MAM1;
  uint32_t MID1;
  uint32_t MFID1;
  uint32_t MSR1;
  uint32_t MDL1;
  uint32_t MDH1;
  uint32_t MCR1;
  uint32_t MMR2;
  uint32_t MAM2;
  uint32_t MID2;
  uint32_t MFID2;
  uint32_t MSR2;
  uint32_t MDL2;
  uint32_t MDH2;
  uint32_t MCR2;
  uint32_t MMR3;
  uint32_t MAM3;
  uint32_t MID3;
  uint32_t MFID3;
  uint32_t MSR3;
  uint32_t MDL3;
  uint32_t MDH3;
  uint32_t MCR3;
  uint32_t MMR4;
  uint32_t MAM4;
  uint32_t MID4;
  uint32_t MFID4;
  uint32_t MSR4;
  uint32_t MDL4;
  uint32_t MDH4;
  uint32_t MCR4;
  uint32_t MMR5;
  uint32_t MAM5;
  uint32_t MID5;
  uint32_t MFID5;
  uint32_t MSR5;
  uint32_t MDL5;
  uint32_t MDH5;
  uint32_t MCR5;
  uint32_t MMR6;
  uint32_t MAM6;
  uint32_t MID6;
  uint32_t MFID6;
  uint32_t MSR6;
  uint32_t MDL6;
  uint32_t MDH6;
  uint32_t MCR6;
  uint32_t MMR7;
  uint32_t MAM7;
  uint32_t MID7;
  uint32_t MFID7;
  uint32_t MSR7;
  uint32_t MDL7;
  uint32_t MDH7;
  uint32_t MCR7;
};

#define CAN_CAN1_0 (*(volatile struct CAN_CAN1_0_tag *) 0xf8010000)

struct DBGU_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RSTRX:1;
      uint64_t RSTTX:1;
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t RSTSTA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t PAR:3;
      uint64_t reservedSpace1:2;
      uint64_t CHMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:20;
      uint64_t COMMTX:1;
      uint64_t COMMRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:20;
      uint64_t COMMTX:1;
      uint64_t COMMRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:20;
      uint64_t COMMTX:1;
      uint64_t COMMRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:20;
      uint64_t COMMTX:1;
      uint64_t COMMRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRGR;

  uint8_t res0[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:5;
      uint64_t EPROC:3;
      uint64_t NVPSIZ:4;
      uint64_t NVPSIZ2:4;
      uint64_t SRAMSIZ:4;
      uint64_t ARCH:8;
      uint64_t NVPTYP:3;
      uint64_t EXT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FNTRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FNR;

};

#define DBGU_0 (*(volatile struct DBGU_0_tag *) 0xffffee00)

struct DMAC_DMAC0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t ARB_CFG:1;
      uint64_t reservedSpace1:3;
      uint64_t DICEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSREQ0:1;
      uint64_t DSREQ0:1;
      uint64_t SSREQ1:1;
      uint64_t DSREQ1:1;
      uint64_t SSREQ2:1;
      uint64_t DSREQ2:1;
      uint64_t SSREQ3:1;
      uint64_t DSREQ3:1;
      uint64_t SSREQ4:1;
      uint64_t DSREQ4:1;
      uint64_t SSREQ5:1;
      uint64_t DSREQ5:1;
      uint64_t SSREQ6:1;
      uint64_t DSREQ6:1;
      uint64_t SSREQ7:1;
      uint64_t DSREQ7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCREQ0:1;
      uint64_t DCREQ0:1;
      uint64_t SCREQ1:1;
      uint64_t DCREQ1:1;
      uint64_t SCREQ2:1;
      uint64_t DCREQ2:1;
      uint64_t SCREQ3:1;
      uint64_t DCREQ3:1;
      uint64_t SCREQ4:1;
      uint64_t DCREQ4:1;
      uint64_t SCREQ5:1;
      uint64_t DCREQ5:1;
      uint64_t SCREQ6:1;
      uint64_t DCREQ6:1;
      uint64_t SCREQ7:1;
      uint64_t DCREQ7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLAST0:1;
      uint64_t DLAST0:1;
      uint64_t SLAST1:1;
      uint64_t DLAST1:1;
      uint64_t SLAST2:1;
      uint64_t DLAST2:1;
      uint64_t SLAST3:1;
      uint64_t DLAST3:1;
      uint64_t SLAST4:1;
      uint64_t DLAST4:1;
      uint64_t SLAST5:1;
      uint64_t DLAST5:1;
      uint64_t SLAST6:1;
      uint64_t DLAST6:1;
      uint64_t SLAST7:1;
      uint64_t DLAST7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LAST;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t BTC6:1;
      uint64_t BTC7:1;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t CBTC6:1;
      uint64_t CBTC7:1;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
      uint64_t ERR6:1;
      uint64_t ERR7:1;
      uint64_t DICERR0:1;
      uint64_t DICERR1:1;
      uint64_t DICERR2:1;
      uint64_t DICERR3:1;
      uint64_t DICERR4:1;
      uint64_t DICERR5:1;
      uint64_t DICERR6:1;
      uint64_t DICERR7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EBCIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t BTC6:1;
      uint64_t BTC7:1;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t CBTC6:1;
      uint64_t CBTC7:1;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
      uint64_t ERR6:1;
      uint64_t ERR7:1;
      uint64_t DICERR0:1;
      uint64_t DICERR1:1;
      uint64_t DICERR2:1;
      uint64_t DICERR3:1;
      uint64_t DICERR4:1;
      uint64_t DICERR5:1;
      uint64_t DICERR6:1;
      uint64_t DICERR7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EBCIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t BTC6:1;
      uint64_t BTC7:1;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t CBTC6:1;
      uint64_t CBTC7:1;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
      uint64_t ERR6:1;
      uint64_t ERR7:1;
      uint64_t DICERR0:1;
      uint64_t DICERR1:1;
      uint64_t DICERR2:1;
      uint64_t DICERR3:1;
      uint64_t DICERR4:1;
      uint64_t DICERR5:1;
      uint64_t DICERR6:1;
      uint64_t DICERR7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EBCIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t BTC6:1;
      uint64_t BTC7:1;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t CBTC6:1;
      uint64_t CBTC7:1;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
      uint64_t ERR6:1;
      uint64_t ERR7:1;
      uint64_t DICERR0:1;
      uint64_t DICERR1:1;
      uint64_t DICERR2:1;
      uint64_t DICERR3:1;
      uint64_t DICERR4:1;
      uint64_t DICERR5:1;
      uint64_t DICERR6:1;
      uint64_t DICERR7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EBCISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA0:1;
      uint64_t ENA1:1;
      uint64_t ENA2:1;
      uint64_t ENA3:1;
      uint64_t ENA4:1;
      uint64_t ENA5:1;
      uint64_t ENA6:1;
      uint64_t ENA7:1;
      uint64_t SUSP0:1;
      uint64_t SUSP1:1;
      uint64_t SUSP2:1;
      uint64_t SUSP3:1;
      uint64_t SUSP4:1;
      uint64_t SUSP5:1;
      uint64_t SUSP6:1;
      uint64_t SUSP7:1;
      uint64_t reservedSpace0:8;
      uint64_t KEEP0:1;
      uint64_t KEEP1:1;
      uint64_t KEEP2:1;
      uint64_t KEEP3:1;
      uint64_t KEEP4:1;
      uint64_t KEEP5:1;
      uint64_t KEEP6:1;
      uint64_t KEEP7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIS0:1;
      uint64_t DIS1:1;
      uint64_t DIS2:1;
      uint64_t DIS3:1;
      uint64_t DIS4:1;
      uint64_t DIS5:1;
      uint64_t DIS6:1;
      uint64_t DIS7:1;
      uint64_t RES0:1;
      uint64_t RES1:1;
      uint64_t RES2:1;
      uint64_t RES3:1;
      uint64_t RES4:1;
      uint64_t RES5:1;
      uint64_t RES6:1;
      uint64_t RES7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA0:1;
      uint64_t ENA1:1;
      uint64_t ENA2:1;
      uint64_t ENA3:1;
      uint64_t ENA4:1;
      uint64_t ENA5:1;
      uint64_t ENA6:1;
      uint64_t ENA7:1;
      uint64_t SUSP0:1;
      uint64_t SUSP1:1;
      uint64_t SUSP2:1;
      uint64_t SUSP3:1;
      uint64_t SUSP4:1;
      uint64_t SUSP5:1;
      uint64_t SUSP6:1;
      uint64_t SUSP7:1;
      uint64_t EMPT0:1;
      uint64_t EMPT1:1;
      uint64_t EMPT2:1;
      uint64_t EMPT3:1;
      uint64_t EMPT4:1;
      uint64_t EMPT5:1;
      uint64_t EMPT6:1;
      uint64_t EMPT7:1;
      uint64_t STAL0:1;
      uint64_t STAL1:1;
      uint64_t STAL2:1;
      uint64_t STAL3:1;
      uint64_t STAL4:1;
      uint64_t STAL5:1;
      uint64_t STAL6:1;
      uint64_t STAL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSR;

  uint8_t res1[8];

  uint32_t SADDR0;
  uint32_t DADDR0;
  uint32_t DSCR0;
  uint32_t CTRLA0;
  uint32_t CTRLB0;
  uint32_t CFG0;
  uint32_t SPIP0;
  uint32_t DPIP0;
  uint8_t res2[8];

  uint32_t SADDR1;
  uint32_t DADDR1;
  uint32_t DSCR1;
  uint32_t CTRLA1;
  uint32_t CTRLB1;
  uint32_t CFG1;
  uint32_t SPIP1;
  uint32_t DPIP1;
  uint8_t res3[8];

  uint32_t SADDR2;
  uint32_t DADDR2;
  uint32_t DSCR2;
  uint32_t CTRLA2;
  uint32_t CTRLB2;
  uint32_t CFG2;
  uint32_t SPIP2;
  uint32_t DPIP2;
  uint8_t res4[8];

  uint32_t SADDR3;
  uint32_t DADDR3;
  uint32_t DSCR3;
  uint32_t CTRLA3;
  uint32_t CTRLB3;
  uint32_t CFG3;
  uint32_t SPIP3;
  uint32_t DPIP3;
  uint8_t res5[8];

  uint32_t SADDR4;
  uint32_t DADDR4;
  uint32_t DSCR4;
  uint32_t CTRLA4;
  uint32_t CTRLB4;
  uint32_t CFG4;
  uint32_t SPIP4;
  uint32_t DPIP4;
  uint8_t res6[8];

  uint32_t SADDR5;
  uint32_t DADDR5;
  uint32_t DSCR5;
  uint32_t CTRLA5;
  uint32_t CTRLB5;
  uint32_t CFG5;
  uint32_t SPIP5;
  uint32_t DPIP5;
  uint8_t res7[8];

  uint32_t SADDR6;
  uint32_t DADDR6;
  uint32_t DSCR6;
  uint32_t CTRLA6;
  uint32_t CTRLB6;
  uint32_t CFG6;
  uint32_t SPIP6;
  uint32_t DPIP6;
  uint8_t res8[8];

  uint32_t SADDR7;
  uint32_t DADDR7;
  uint32_t DSCR7;
  uint32_t CTRLA7;
  uint32_t CTRLB7;
  uint32_t CFG7;
  uint32_t SPIP7;
  uint32_t DPIP7;
  uint8_t res9[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

};

#define DMAC_DMAC0_0 (*(volatile struct DMAC_DMAC0_0_tag *) 0xffffe600)

struct DMAC_DMAC1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t ARB_CFG:1;
      uint64_t reservedSpace1:3;
      uint64_t DICEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSREQ0:1;
      uint64_t DSREQ0:1;
      uint64_t SSREQ1:1;
      uint64_t DSREQ1:1;
      uint64_t SSREQ2:1;
      uint64_t DSREQ2:1;
      uint64_t SSREQ3:1;
      uint64_t DSREQ3:1;
      uint64_t SSREQ4:1;
      uint64_t DSREQ4:1;
      uint64_t SSREQ5:1;
      uint64_t DSREQ5:1;
      uint64_t SSREQ6:1;
      uint64_t DSREQ6:1;
      uint64_t SSREQ7:1;
      uint64_t DSREQ7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCREQ0:1;
      uint64_t DCREQ0:1;
      uint64_t SCREQ1:1;
      uint64_t DCREQ1:1;
      uint64_t SCREQ2:1;
      uint64_t DCREQ2:1;
      uint64_t SCREQ3:1;
      uint64_t DCREQ3:1;
      uint64_t SCREQ4:1;
      uint64_t DCREQ4:1;
      uint64_t SCREQ5:1;
      uint64_t DCREQ5:1;
      uint64_t SCREQ6:1;
      uint64_t DCREQ6:1;
      uint64_t SCREQ7:1;
      uint64_t DCREQ7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLAST0:1;
      uint64_t DLAST0:1;
      uint64_t SLAST1:1;
      uint64_t DLAST1:1;
      uint64_t SLAST2:1;
      uint64_t DLAST2:1;
      uint64_t SLAST3:1;
      uint64_t DLAST3:1;
      uint64_t SLAST4:1;
      uint64_t DLAST4:1;
      uint64_t SLAST5:1;
      uint64_t DLAST5:1;
      uint64_t SLAST6:1;
      uint64_t DLAST6:1;
      uint64_t SLAST7:1;
      uint64_t DLAST7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LAST;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t BTC6:1;
      uint64_t BTC7:1;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t CBTC6:1;
      uint64_t CBTC7:1;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
      uint64_t ERR6:1;
      uint64_t ERR7:1;
      uint64_t DICERR0:1;
      uint64_t DICERR1:1;
      uint64_t DICERR2:1;
      uint64_t DICERR3:1;
      uint64_t DICERR4:1;
      uint64_t DICERR5:1;
      uint64_t DICERR6:1;
      uint64_t DICERR7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EBCIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t BTC6:1;
      uint64_t BTC7:1;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t CBTC6:1;
      uint64_t CBTC7:1;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
      uint64_t ERR6:1;
      uint64_t ERR7:1;
      uint64_t DICERR0:1;
      uint64_t DICERR1:1;
      uint64_t DICERR2:1;
      uint64_t DICERR3:1;
      uint64_t DICERR4:1;
      uint64_t DICERR5:1;
      uint64_t DICERR6:1;
      uint64_t DICERR7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EBCIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t BTC6:1;
      uint64_t BTC7:1;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t CBTC6:1;
      uint64_t CBTC7:1;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
      uint64_t ERR6:1;
      uint64_t ERR7:1;
      uint64_t DICERR0:1;
      uint64_t DICERR1:1;
      uint64_t DICERR2:1;
      uint64_t DICERR3:1;
      uint64_t DICERR4:1;
      uint64_t DICERR5:1;
      uint64_t DICERR6:1;
      uint64_t DICERR7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EBCIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t BTC6:1;
      uint64_t BTC7:1;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t CBTC6:1;
      uint64_t CBTC7:1;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
      uint64_t ERR6:1;
      uint64_t ERR7:1;
      uint64_t DICERR0:1;
      uint64_t DICERR1:1;
      uint64_t DICERR2:1;
      uint64_t DICERR3:1;
      uint64_t DICERR4:1;
      uint64_t DICERR5:1;
      uint64_t DICERR6:1;
      uint64_t DICERR7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EBCISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA0:1;
      uint64_t ENA1:1;
      uint64_t ENA2:1;
      uint64_t ENA3:1;
      uint64_t ENA4:1;
      uint64_t ENA5:1;
      uint64_t ENA6:1;
      uint64_t ENA7:1;
      uint64_t SUSP0:1;
      uint64_t SUSP1:1;
      uint64_t SUSP2:1;
      uint64_t SUSP3:1;
      uint64_t SUSP4:1;
      uint64_t SUSP5:1;
      uint64_t SUSP6:1;
      uint64_t SUSP7:1;
      uint64_t reservedSpace0:8;
      uint64_t KEEP0:1;
      uint64_t KEEP1:1;
      uint64_t KEEP2:1;
      uint64_t KEEP3:1;
      uint64_t KEEP4:1;
      uint64_t KEEP5:1;
      uint64_t KEEP6:1;
      uint64_t KEEP7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIS0:1;
      uint64_t DIS1:1;
      uint64_t DIS2:1;
      uint64_t DIS3:1;
      uint64_t DIS4:1;
      uint64_t DIS5:1;
      uint64_t DIS6:1;
      uint64_t DIS7:1;
      uint64_t RES0:1;
      uint64_t RES1:1;
      uint64_t RES2:1;
      uint64_t RES3:1;
      uint64_t RES4:1;
      uint64_t RES5:1;
      uint64_t RES6:1;
      uint64_t RES7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA0:1;
      uint64_t ENA1:1;
      uint64_t ENA2:1;
      uint64_t ENA3:1;
      uint64_t ENA4:1;
      uint64_t ENA5:1;
      uint64_t ENA6:1;
      uint64_t ENA7:1;
      uint64_t SUSP0:1;
      uint64_t SUSP1:1;
      uint64_t SUSP2:1;
      uint64_t SUSP3:1;
      uint64_t SUSP4:1;
      uint64_t SUSP5:1;
      uint64_t SUSP6:1;
      uint64_t SUSP7:1;
      uint64_t EMPT0:1;
      uint64_t EMPT1:1;
      uint64_t EMPT2:1;
      uint64_t EMPT3:1;
      uint64_t EMPT4:1;
      uint64_t EMPT5:1;
      uint64_t EMPT6:1;
      uint64_t EMPT7:1;
      uint64_t STAL0:1;
      uint64_t STAL1:1;
      uint64_t STAL2:1;
      uint64_t STAL3:1;
      uint64_t STAL4:1;
      uint64_t STAL5:1;
      uint64_t STAL6:1;
      uint64_t STAL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSR;

  uint8_t res1[8];

  uint32_t SADDR0;
  uint32_t DADDR0;
  uint32_t DSCR0;
  uint32_t CTRLA0;
  uint32_t CTRLB0;
  uint32_t CFG0;
  uint32_t SPIP0;
  uint32_t DPIP0;
  uint8_t res2[8];

  uint32_t SADDR1;
  uint32_t DADDR1;
  uint32_t DSCR1;
  uint32_t CTRLA1;
  uint32_t CTRLB1;
  uint32_t CFG1;
  uint32_t SPIP1;
  uint32_t DPIP1;
  uint8_t res3[8];

  uint32_t SADDR2;
  uint32_t DADDR2;
  uint32_t DSCR2;
  uint32_t CTRLA2;
  uint32_t CTRLB2;
  uint32_t CFG2;
  uint32_t SPIP2;
  uint32_t DPIP2;
  uint8_t res4[8];

  uint32_t SADDR3;
  uint32_t DADDR3;
  uint32_t DSCR3;
  uint32_t CTRLA3;
  uint32_t CTRLB3;
  uint32_t CFG3;
  uint32_t SPIP3;
  uint32_t DPIP3;
  uint8_t res5[8];

  uint32_t SADDR4;
  uint32_t DADDR4;
  uint32_t DSCR4;
  uint32_t CTRLA4;
  uint32_t CTRLB4;
  uint32_t CFG4;
  uint32_t SPIP4;
  uint32_t DPIP4;
  uint8_t res6[8];

  uint32_t SADDR5;
  uint32_t DADDR5;
  uint32_t DSCR5;
  uint32_t CTRLA5;
  uint32_t CTRLB5;
  uint32_t CFG5;
  uint32_t SPIP5;
  uint32_t DPIP5;
  uint8_t res7[8];

  uint32_t SADDR6;
  uint32_t DADDR6;
  uint32_t DSCR6;
  uint32_t CTRLA6;
  uint32_t CTRLB6;
  uint32_t CFG6;
  uint32_t SPIP6;
  uint32_t DPIP6;
  uint8_t res8[8];

  uint32_t SADDR7;
  uint32_t DADDR7;
  uint32_t DSCR7;
  uint32_t CTRLA7;
  uint32_t CTRLB7;
  uint32_t CFG7;
  uint32_t SPIP7;
  uint32_t DPIP7;
  uint8_t res9[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

};

#define DMAC_DMAC1_0 (*(volatile struct DMAC_DMAC1_0_tag *) 0xffffe800)

struct EMAC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LB:1;
      uint64_t LLB:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t MPE:1;
      uint64_t CLRSTAT:1;
      uint64_t INCSTAT:1;
      uint64_t WESTAT:1;
      uint64_t BP:1;
      uint64_t TSTART:1;
      uint64_t THALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPD:1;
      uint64_t FD:1;
      uint64_t reservedSpace0:1;
      uint64_t JFRAME:1;
      uint64_t CAF:1;
      uint64_t NBC:1;
      uint64_t MTI:1;
      uint64_t UNI:1;
      uint64_t BIG:1;
      uint64_t reservedSpace1:1;
      uint64_t CLK:2;
      uint64_t RTY:1;
      uint64_t PAE:1;
      uint64_t RBOF:2;
      uint64_t RLCE:1;
      uint64_t DRFCS:1;
      uint64_t EFRHD:1;
      uint64_t IRXFCS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MDIO:1;
      uint64_t IDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NSR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UBR:1;
      uint64_t COL:1;
      uint64_t RLES:1;
      uint64_t TGO:1;
      uint64_t BEX:1;
      uint64_t COMP:1;
      uint64_t UND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBQP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBQP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNA:1;
      uint64_t REC:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFD:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUND:1;
      uint64_t RLEX:1;
      uint64_t TXERR:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFRE:1;
      uint64_t PTZ:1;
      uint64_t WOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFD:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUND:1;
      uint64_t RLE:1;
      uint64_t TXERR:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFR:1;
      uint64_t PTZ:1;
      uint64_t WOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFD:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUND:1;
      uint64_t RLE:1;
      uint64_t TXERR:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFR:1;
      uint64_t PTZ:1;
      uint64_t WOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFD:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUND:1;
      uint64_t RLE:1;
      uint64_t TXERR:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFR:1;
      uint64_t PTZ:1;
      uint64_t WOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t CODE:2;
      uint64_t REGA:5;
      uint64_t PHYA:5;
      uint64_t RW:2;
      uint64_t SOF:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FROK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTOK:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FROK:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCSE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCOL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXCOL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TUND:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TUND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RRE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RRE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ROVR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RJB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RJA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RLFM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLE;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HRT;

  uint32_t SA1B;
  uint32_t SA1T;
  uint32_t SA2B;
  uint32_t SA2T;
  uint32_t SA3B;
  uint32_t SA3T;
  uint32_t SA4B;
  uint32_t SA4T;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TID;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMII:1;
      uint64_t CLKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USRIO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IP:16;
      uint64_t MAG:1;
      uint64_t ARP:1;
      uint64_t SA1:1;
      uint64_t MTI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WOL;

};

#define EMAC_0 (*(volatile struct EMAC_0_tag *) 0xf802c000)

struct FUSE_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRQ:1;
      uint64_t RRQ:1;
      uint64_t reservedSpace0:6;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WS:1;
      uint64_t RS:1;
      uint64_t reservedSpace0:6;
      uint64_t WSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUSE_bitfield:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

};

#define FUSE_0 (*(volatile struct FUSE_0_tag *) 0xffffe400)

struct GMAC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LB:1;
      uint64_t LBL:1;
      uint64_t RXEN:1;
      uint64_t TXEN:1;
      uint64_t MPE:1;
      uint64_t CLRSTAT:1;
      uint64_t INCSTAT:1;
      uint64_t WESTAT:1;
      uint64_t BP:1;
      uint64_t TSTART:1;
      uint64_t THALT:1;
      uint64_t TXPF:1;
      uint64_t TXZQPF:1;
      uint64_t reservedSpace0:1;
      uint64_t RDS:1;
      uint64_t SRTSM:1;
      uint64_t ENPBPR:1;
      uint64_t TXPBPF:1;
      uint64_t FNP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPD:1;
      uint64_t FD:1;
      uint64_t DNVLAN:1;
      uint64_t JFRAME:1;
      uint64_t CAF:1;
      uint64_t NBC:1;
      uint64_t MTIHEN:1;
      uint64_t UNIHEN:1;
      uint64_t MAXFS:1;
      uint64_t reservedSpace0:1;
      uint64_t GBE:1;
      uint64_t PIS:1;
      uint64_t RTY:1;
      uint64_t PEN:1;
      uint64_t RXBUFO:2;
      uint64_t LFERD:1;
      uint64_t RFCS:1;
      uint64_t CLK:3;
      uint64_t DBW:2;
      uint64_t DCPF:1;
      uint64_t RXCOEN:1;
      uint64_t EFRHD:1;
      uint64_t IRXFCS:1;
      uint64_t reservedSpace1:1;
      uint64_t IPGSEN:1;
      uint64_t RXBP:1;
      uint64_t IRXER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MDIO:1;
      uint64_t IDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RGMII:1;
      uint64_t reservedSpace0:5;
      uint64_t HDFC:1;
      uint64_t BPDG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FBLDO:5;
      uint64_t reservedSpace0:1;
      uint64_t ESMA:1;
      uint64_t ESPA:1;
      uint64_t RXBMS:2;
      uint64_t TXPBMS:1;
      uint64_t TXCOEN:1;
      uint64_t reservedSpace1:4;
      uint64_t DRBS:8;
      uint64_t DDRP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UBR:1;
      uint64_t COL:1;
      uint64_t RLE:1;
      uint64_t TXGO:1;
      uint64_t TFC:1;
      uint64_t TXCOMP:1;
      uint64_t UND:1;
      uint64_t LCO:1;
      uint64_t HRESP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBQB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBQB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNA:1;
      uint64_t REC:1;
      uint64_t RXOVR:1;
      uint64_t HNO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFS:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUR:1;
      uint64_t RLEX:1;
      uint64_t TFC:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFNZ:1;
      uint64_t PTZ:1;
      uint64_t PFTR:1;
      uint64_t EXINT:1;
      uint64_t reservedSpace1:2;
      uint64_t DRQFR:1;
      uint64_t SFR_bitfield:1;
      uint64_t DRQFT:1;
      uint64_t SFT:1;
      uint64_t PDRQFR:1;
      uint64_t PDRSFR:1;
      uint64_t PDRQFT:1;
      uint64_t PDRSFT:1;
      uint64_t SRI:1;
      uint64_t reservedSpace2:1;
      uint64_t WOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFS:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUR:1;
      uint64_t RLEX:1;
      uint64_t TFC:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFNZ:1;
      uint64_t PTZ:1;
      uint64_t PFTR:1;
      uint64_t EXINT:1;
      uint64_t reservedSpace1:2;
      uint64_t DRQFR:1;
      uint64_t SFR_bitfield:1;
      uint64_t DRQFT:1;
      uint64_t SFT:1;
      uint64_t PDRQFR:1;
      uint64_t PDRSFR:1;
      uint64_t PDRQFT:1;
      uint64_t PDRSFT:1;
      uint64_t SRI:1;
      uint64_t reservedSpace2:1;
      uint64_t WOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFS:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUR:1;
      uint64_t RLEX:1;
      uint64_t TFC:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFNZ:1;
      uint64_t PTZ:1;
      uint64_t PFTR:1;
      uint64_t EXINT:1;
      uint64_t reservedSpace1:2;
      uint64_t DRQFR:1;
      uint64_t SFR_bitfield:1;
      uint64_t DRQFT:1;
      uint64_t SFT:1;
      uint64_t PDRQFR:1;
      uint64_t PDRSFR:1;
      uint64_t PDRQFT:1;
      uint64_t PDRSFT:1;
      uint64_t SRI:1;
      uint64_t reservedSpace2:1;
      uint64_t WOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFS:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUR:1;
      uint64_t RLEX:1;
      uint64_t TFC:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFNZ:1;
      uint64_t PTZ:1;
      uint64_t PFTR:1;
      uint64_t EXINT:1;
      uint64_t reservedSpace1:2;
      uint64_t DRQFR:1;
      uint64_t SFR_bitfield:1;
      uint64_t DRQFT:1;
      uint64_t SFT:1;
      uint64_t PDRQFR:1;
      uint64_t PDRSFR:1;
      uint64_t PDRQFT:1;
      uint64_t PDRSFT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t WTN:2;
      uint64_t REGA:5;
      uint64_t PHYA:5;
      uint64_t OP:2;
      uint64_t CLTTO:1;
      uint64_t WZO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPQ:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RPQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPQ:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPB1ADR:12;
      uint64_t reservedSpace0:19;
      uint64_t ENTXP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPSF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPB1ADR:12;
      uint64_t reservedSpace0:19;
      uint64_t ENRXP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RPSF;

  uint8_t res0[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HRT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAB1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAB2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAB3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAB4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIDM;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IP:16;
      uint64_t MAG:1;
      uint64_t ARP:1;
      uint64_t SA1:1;
      uint64_t MTI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLAN_TYPE:16;
      uint64_t reservedSpace0:15;
      uint64_t ESVLAN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SVLAN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEV:8;
      uint64_t PQ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPFCP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMB1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMT1;

  uint8_t res2[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTLO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTHI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCFT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MFT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFTX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BFT64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBFT127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBFT255;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBFT511;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBFT1023;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBFT1518;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTBFT1518;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXUNR:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCOL:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCOL:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XCOL:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCOL:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEFT:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ORLO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ORHI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFRX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFRX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFRX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFRX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BFR64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFRX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBFR127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFRX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBFR255;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFRX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBFR511;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFRX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBFR1023;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFRX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBFR1518;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFRX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMXBFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UFRX:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFRX:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JRX:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCKR:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFER:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFFE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXSE:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AER:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRER:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RRE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXOVR:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCKER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IHCE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCKER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCKER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UCE;

  uint8_t res3[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VTS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VTN:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSSN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TNS:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITDT:30;
      uint64_t reservedSpace0:1;
      uint64_t ADJ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNS:8;
      uint64_t ACNS:8;
      uint64_t NIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUD:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFTN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUD:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFRN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEFTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUD:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEFTN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEFRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUD:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEFRN;

  uint8_t res4[512];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t reservedSpace1:2;
      uint64_t RLEX:1;
      uint64_t TFC:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace2:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISRPQ;

  uint8_t res5[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TXBQBA:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBQBAPQ;

  uint8_t res6[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RXBQBA:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBQBAPQ;

  uint8_t res7[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RBS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBSRPQ;

  uint8_t res8[92];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QNB:4;
      uint64_t DSTCM:8;
      uint64_t UDPM:16;
      uint64_t DSTCE:1;
      uint64_t UDPE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST1RPQ;

  uint8_t res9[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QNB:4;
      uint64_t VLANP:4;
      uint64_t VLANE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST2RPQ;

  uint8_t res10[188];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t reservedSpace1:2;
      uint64_t RLEX:1;
      uint64_t TFC:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace2:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IERPQ;

  uint8_t res11[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t reservedSpace1:2;
      uint64_t RLEX:1;
      uint64_t TFC:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace2:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDRPQ;

  uint8_t res12[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t reservedSpace1:2;
      uint64_t RLEX:1;
      uint64_t AHB:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace2:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMRPQ;

};

#define GMAC_0 (*(volatile struct GMAC_0_tag *) 0xf0028000)

struct GPBR_0_tag
{
  uint32_t GPBR;
};

#define GPBR_0 (*(volatile struct GPBR_0_tag *) 0xfffffe60)

struct HSMCI_HSMCI0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCIEN:1;
      uint64_t MCIDIS:1;
      uint64_t PWSEN:1;
      uint64_t PWSDIS:1;
      uint64_t reservedSpace0:3;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKDIV:8;
      uint64_t PWSDIV:3;
      uint64_t RDPROOF:1;
      uint64_t WRPROOF:1;
      uint64_t FBYTE:1;
      uint64_t PADV:1;
      uint64_t reservedSpace0:1;
      uint64_t CLKODD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTOCYC:4;
      uint64_t DTOMUL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCSEL:2;
      uint64_t reservedSpace0:4;
      uint64_t SDCBUS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ARGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDNB:6;
      uint64_t RSPTYP:2;
      uint64_t SPCMD:3;
      uint64_t OPDCMD:1;
      uint64_t MAXLAT:1;
      uint64_t reservedSpace0:3;
      uint64_t TRCMD:2;
      uint64_t TRDIR:1;
      uint64_t TRTYP:3;
      uint64_t reservedSpace1:2;
      uint64_t IOSPCMD:2;
      uint64_t ATACS:1;
      uint64_t BOOT_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCNT:16;
      uint64_t BLKLEN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTOCYC:4;
      uint64_t CSTOMUL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSPR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQA:1;
      uint64_t reservedSpace1:3;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQA:1;
      uint64_t reservedSpace1:3;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQA:1;
      uint64_t reservedSpace1:3;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQA:1;
      uint64_t reservedSpace1:3;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET:2;
      uint64_t reservedSpace0:2;
      uint64_t CHKSIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t DMAEN:1;
      uint64_t reservedSpace2:3;
      uint64_t ROPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOMODE:1;
      uint64_t reservedSpace0:3;
      uint64_t FERRCTRL:1;
      uint64_t reservedSpace1:3;
      uint64_t HSMODE:1;
      uint64_t reservedSpace2:3;
      uint64_t LSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  uint8_t res2[140];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t WP_KEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP_VS:4;
      uint64_t reservedSpace0:4;
      uint64_t WP_VSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

  uint8_t res3[276];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO;

};

#define HSMCI_HSMCI0_0 (*(volatile struct HSMCI_HSMCI0_0_tag *) 0xf0000000)

struct HSMCI_HSMCI1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCIEN:1;
      uint64_t MCIDIS:1;
      uint64_t PWSEN:1;
      uint64_t PWSDIS:1;
      uint64_t reservedSpace0:3;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKDIV:8;
      uint64_t PWSDIV:3;
      uint64_t RDPROOF:1;
      uint64_t WRPROOF:1;
      uint64_t FBYTE:1;
      uint64_t PADV:1;
      uint64_t reservedSpace0:1;
      uint64_t CLKODD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTOCYC:4;
      uint64_t DTOMUL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCSEL:2;
      uint64_t reservedSpace0:4;
      uint64_t SDCBUS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ARGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDNB:6;
      uint64_t RSPTYP:2;
      uint64_t SPCMD:3;
      uint64_t OPDCMD:1;
      uint64_t MAXLAT:1;
      uint64_t reservedSpace0:3;
      uint64_t TRCMD:2;
      uint64_t TRDIR:1;
      uint64_t TRTYP:3;
      uint64_t reservedSpace1:2;
      uint64_t IOSPCMD:2;
      uint64_t ATACS:1;
      uint64_t BOOT_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCNT:16;
      uint64_t BLKLEN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTOCYC:4;
      uint64_t CSTOMUL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSPR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQA:1;
      uint64_t reservedSpace1:3;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQA:1;
      uint64_t reservedSpace1:3;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQA:1;
      uint64_t reservedSpace1:3;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQA:1;
      uint64_t reservedSpace1:3;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET:2;
      uint64_t reservedSpace0:2;
      uint64_t CHKSIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t DMAEN:1;
      uint64_t reservedSpace2:3;
      uint64_t ROPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOMODE:1;
      uint64_t reservedSpace0:3;
      uint64_t FERRCTRL:1;
      uint64_t reservedSpace1:3;
      uint64_t HSMODE:1;
      uint64_t reservedSpace2:3;
      uint64_t LSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  uint8_t res2[140];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t WP_KEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP_VS:4;
      uint64_t reservedSpace0:4;
      uint64_t WP_VSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

  uint8_t res3[276];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO;

};

#define HSMCI_HSMCI1_0 (*(volatile struct HSMCI_HSMCI1_0_tag *) 0xf8000000)

struct HSMCI_HSMCI2_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCIEN:1;
      uint64_t MCIDIS:1;
      uint64_t PWSEN:1;
      uint64_t PWSDIS:1;
      uint64_t reservedSpace0:3;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKDIV:8;
      uint64_t PWSDIV:3;
      uint64_t RDPROOF:1;
      uint64_t WRPROOF:1;
      uint64_t FBYTE:1;
      uint64_t PADV:1;
      uint64_t reservedSpace0:1;
      uint64_t CLKODD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTOCYC:4;
      uint64_t DTOMUL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCSEL:2;
      uint64_t reservedSpace0:4;
      uint64_t SDCBUS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ARGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDNB:6;
      uint64_t RSPTYP:2;
      uint64_t SPCMD:3;
      uint64_t OPDCMD:1;
      uint64_t MAXLAT:1;
      uint64_t reservedSpace0:3;
      uint64_t TRCMD:2;
      uint64_t TRDIR:1;
      uint64_t TRTYP:3;
      uint64_t reservedSpace1:2;
      uint64_t IOSPCMD:2;
      uint64_t ATACS:1;
      uint64_t BOOT_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCNT:16;
      uint64_t BLKLEN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTOCYC:4;
      uint64_t CSTOMUL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSPR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQA:1;
      uint64_t reservedSpace1:3;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQA:1;
      uint64_t reservedSpace1:3;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQA:1;
      uint64_t reservedSpace1:3;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQA:1;
      uint64_t reservedSpace1:3;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET:2;
      uint64_t reservedSpace0:2;
      uint64_t CHKSIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t DMAEN:1;
      uint64_t reservedSpace2:3;
      uint64_t ROPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOMODE:1;
      uint64_t reservedSpace0:3;
      uint64_t FERRCTRL:1;
      uint64_t reservedSpace1:3;
      uint64_t HSMODE:1;
      uint64_t reservedSpace2:3;
      uint64_t LSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  uint8_t res2[140];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t WP_KEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP_VS:4;
      uint64_t reservedSpace0:4;
      uint64_t WP_VSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

  uint8_t res3[276];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO;

};

#define HSMCI_HSMCI2_0 (*(volatile struct HSMCI_HSMCI2_0_tag *) 0xf8004000)

struct ISI_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t HSYNC_POL:1;
      uint64_t VSYNC_POL:1;
      uint64_t PIXCLK_POL:1;
      uint64_t reservedSpace1:1;
      uint64_t EMB_SYNC:1;
      uint64_t CRC_SYNC:1;
      uint64_t FRATE:3;
      uint64_t DISCR:1;
      uint64_t FULL:1;
      uint64_t THMASK:2;
      uint64_t reservedSpace2:1;
      uint64_t SLD:8;
      uint64_t SFD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_VSIZE:11;
      uint64_t GS_MODE:1;
      uint64_t RGB_MODE:1;
      uint64_t GRAYSCALE:1;
      uint64_t RGB_SWAP:1;
      uint64_t COL_SPACE:1;
      uint64_t IM_HSIZE:11;
      uint64_t reservedSpace0:1;
      uint64_t YCC_SWAP:2;
      uint64_t RGB_CFG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREV_VSIZE:10;
      uint64_t reservedSpace0:6;
      uint64_t PREV_HSIZE:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSIZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEC_FACTOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDECF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C0:8;
      uint64_t C1:8;
      uint64_t C2:8;
      uint64_t C3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Y2R_SET0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C4:9;
      uint64_t reservedSpace0:3;
      uint64_t Yoff:1;
      uint64_t Croff:1;
      uint64_t Cboff:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Y2R_SET1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C0:7;
      uint64_t reservedSpace0:1;
      uint64_t C1:7;
      uint64_t reservedSpace1:1;
      uint64_t C2:7;
      uint64_t reservedSpace2:1;
      uint64_t Roff:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R2Y_SET0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C3:7;
      uint64_t reservedSpace0:1;
      uint64_t C4:7;
      uint64_t reservedSpace1:1;
      uint64_t C5:7;
      uint64_t reservedSpace2:1;
      uint64_t Goff:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R2Y_SET1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C6:7;
      uint64_t reservedSpace0:1;
      uint64_t C7:7;
      uint64_t reservedSpace1:1;
      uint64_t C8:7;
      uint64_t reservedSpace2:1;
      uint64_t Boff:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R2Y_SET2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISI_EN:1;
      uint64_t ISI_DIS:1;
      uint64_t ISI_SRST:1;
      uint64_t reservedSpace0:5;
      uint64_t ISI_CDC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t DIS_DONE:1;
      uint64_t SRST:1;
      uint64_t reservedSpace0:5;
      uint64_t CDC_PND:1;
      uint64_t reservedSpace1:1;
      uint64_t VSYNC:1;
      uint64_t reservedSpace2:5;
      uint64_t PXFR_DONE:1;
      uint64_t CXFR_DONE:1;
      uint64_t reservedSpace3:1;
      uint64_t SIP:1;
      uint64_t reservedSpace4:4;
      uint64_t P_OVR:1;
      uint64_t C_OVR:1;
      uint64_t CRC_ERR:1;
      uint64_t FR_OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DIS_DONE:1;
      uint64_t SRST:1;
      uint64_t reservedSpace1:7;
      uint64_t VSYNC:1;
      uint64_t reservedSpace2:5;
      uint64_t PXFR_DONE:1;
      uint64_t CXFR_DONE:1;
      uint64_t reservedSpace3:6;
      uint64_t P_OVR:1;
      uint64_t C_OVR:1;
      uint64_t CRC_ERR:1;
      uint64_t FR_OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DIS_DONE:1;
      uint64_t SRST:1;
      uint64_t reservedSpace1:7;
      uint64_t VSYNC:1;
      uint64_t reservedSpace2:5;
      uint64_t PXFR_DONE:1;
      uint64_t CXFR_DONE:1;
      uint64_t reservedSpace3:6;
      uint64_t P_OVR:1;
      uint64_t C_OVR:1;
      uint64_t CRC_ERR:1;
      uint64_t FR_OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DIS_DONE:1;
      uint64_t SRST:1;
      uint64_t reservedSpace1:7;
      uint64_t VSYNC:1;
      uint64_t reservedSpace2:5;
      uint64_t PXFR_DONE:1;
      uint64_t CXFR_DONE:1;
      uint64_t reservedSpace3:6;
      uint64_t P_OVR:1;
      uint64_t C_OVR:1;
      uint64_t CRC_ERR:1;
      uint64_t FR_OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P_CH_EN:1;
      uint64_t C_CH_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P_CH_DIS:1;
      uint64_t C_CH_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P_CH_S:1;
      uint64_t C_CH_S:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t P_ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_P_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P_FETCH:1;
      uint64_t P_WB:1;
      uint64_t P_IEN:1;
      uint64_t P_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_P_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t P_DSCR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_P_DSCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t C_ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_C_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C_FETCH:1;
      uint64_t C_WB:1;
      uint64_t C_IEN:1;
      uint64_t C_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_C_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t C_DSCR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_C_DSCR;

  uint8_t res0[136];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t WP_KEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP_VS:4;
      uint64_t reservedSpace0:4;
      uint64_t WP_VSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

};

#define ISI_0 (*(volatile struct ISI_0_tag *) 0xf0034000)

struct LCDC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKPOL:1;
      uint64_t reservedSpace0:1;
      uint64_t CLKSEL:1;
      uint64_t CLKPWMSEL:1;
      uint64_t reservedSpace1:4;
      uint64_t CGDISBASE:1;
      uint64_t CGDISOVR1:1;
      uint64_t CGDISOVR2:1;
      uint64_t CGDISHEO:1;
      uint64_t CGDISHCR:1;
      uint64_t CGDISPP:1;
      uint64_t reservedSpace2:2;
      uint64_t CLKDIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSPW:6;
      uint64_t reservedSpace0:10;
      uint64_t VSPW:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VFPW:6;
      uint64_t reservedSpace0:10;
      uint64_t VBPW:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFPW:9;
      uint64_t reservedSpace0:7;
      uint64_t HBPW:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPL:11;
      uint64_t reservedSpace0:5;
      uint64_t RPF:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDCFG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSPOL:1;
      uint64_t VSPOL:1;
      uint64_t VSPDLYS:1;
      uint64_t VSPDLYE:1;
      uint64_t DISPPOL:1;
      uint64_t reservedSpace0:1;
      uint64_t DITHER:1;
      uint64_t DISPDLY:1;
      uint64_t MODE:2;
      uint64_t PP:1;
      uint64_t reservedSpace1:1;
      uint64_t VSPSU:1;
      uint64_t VSPHO:1;
      uint64_t reservedSpace2:2;
      uint64_t GUARDTIME:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDCFG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWMPS:3;
      uint64_t reservedSpace0:1;
      uint64_t PWMPOL:1;
      uint64_t reservedSpace1:3;
      uint64_t PWMCVAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDCFG6;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKEN:1;
      uint64_t SYNCEN:1;
      uint64_t DISPEN:1;
      uint64_t PWMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKDIS:1;
      uint64_t SYNCDIS:1;
      uint64_t DISPDIS:1;
      uint64_t PWMDIS:1;
      uint64_t reservedSpace0:4;
      uint64_t CLKRST:1;
      uint64_t SYNCRST:1;
      uint64_t DISPRST:1;
      uint64_t PWMRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDDIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKSTS:1;
      uint64_t LCDSTS:1;
      uint64_t DISPSTS:1;
      uint64_t PWMSTS:1;
      uint64_t SIPSTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOFIE:1;
      uint64_t DISIE:1;
      uint64_t DISPIE:1;
      uint64_t reservedSpace0:1;
      uint64_t FIFOERRIE:1;
      uint64_t reservedSpace1:3;
      uint64_t BASEIE:1;
      uint64_t OVR1IE:1;
      uint64_t OVR2IE:1;
      uint64_t HEOIE:1;
      uint64_t HCRIE:1;
      uint64_t PPIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOFID:1;
      uint64_t DISID:1;
      uint64_t DISPID:1;
      uint64_t reservedSpace0:1;
      uint64_t FIFOERRID:1;
      uint64_t reservedSpace1:3;
      uint64_t BASEID:1;
      uint64_t OVR1ID:1;
      uint64_t OVR2ID:1;
      uint64_t HEOID:1;
      uint64_t HCRID:1;
      uint64_t PPID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOFIM:1;
      uint64_t DISIM:1;
      uint64_t DISPIM:1;
      uint64_t reservedSpace0:1;
      uint64_t FIFOERRIM:1;
      uint64_t reservedSpace1:3;
      uint64_t BASEIM:1;
      uint64_t OVR1IM:1;
      uint64_t OVR2IM:1;
      uint64_t HEOIM:1;
      uint64_t HCRIM:1;
      uint64_t PPIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOF:1;
      uint64_t DIS:1;
      uint64_t DISP:1;
      uint64_t reservedSpace0:1;
      uint64_t FIFOERR:1;
      uint64_t reservedSpace1:3;
      uint64_t BASE:1;
      uint64_t OVR1:1;
      uint64_t OVR2:1;
      uint64_t HEO:1;
      uint64_t HCR:1;
      uint64_t PP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDISR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t UPDATEEN:1;
      uint64_t A2QEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASECHER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHDIS:1;
      uint64_t reservedSpace0:7;
      uint64_t CHRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASECHDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSR:1;
      uint64_t UPDATESR:1;
      uint64_t A2QSR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASECHSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASEIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASEIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASEIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASEISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t HEAD:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASEHEAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASEADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFETCH:1;
      uint64_t LFETCH:1;
      uint64_t DMAIEN:1;
      uint64_t DSCRIEN:1;
      uint64_t ADDIEN:1;
      uint64_t DONEIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASECTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NEXT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASENEXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIF:1;
      uint64_t reservedSpace0:3;
      uint64_t BLEN:2;
      uint64_t reservedSpace1:2;
      uint64_t DLBO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASECFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLUTEN:1;
      uint64_t reservedSpace0:3;
      uint64_t RGBMODE:4;
      uint64_t CLUTMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASECFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XSTRIDE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASECFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BDEF:8;
      uint64_t GDEF:8;
      uint64_t RDEF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASECFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t DMA:1;
      uint64_t REP:1;
      uint64_t reservedSpace1:1;
      uint64_t DISCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASECFG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISCXPOS:11;
      uint64_t reservedSpace0:5;
      uint64_t DISCYPOS:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASECFG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISCXSIZE:11;
      uint64_t reservedSpace0:5;
      uint64_t DISCYSIZE:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASECFG6;

  uint8_t res2[184];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t UPDATEEN:1;
      uint64_t A2QEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CHER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHDIS:1;
      uint64_t reservedSpace0:7;
      uint64_t CHRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CHDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSR:1;
      uint64_t UPDATESR:1;
      uint64_t A2QSR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CHSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t HEAD:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1HEAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFETCH:1;
      uint64_t LFETCH:1;
      uint64_t DMAIEN:1;
      uint64_t DSCRIEN:1;
      uint64_t ADDIEN:1;
      uint64_t DONEIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NEXT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1NEXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIF:1;
      uint64_t reservedSpace0:3;
      uint64_t BLEN:2;
      uint64_t reservedSpace1:2;
      uint64_t DLBO:1;
      uint64_t reservedSpace2:3;
      uint64_t ROTDIS:1;
      uint64_t LOCKDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLUTEN:1;
      uint64_t reservedSpace0:3;
      uint64_t RGBMODE:4;
      uint64_t CLUTMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPOS:11;
      uint64_t reservedSpace0:5;
      uint64_t YPOS:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XSIZE:11;
      uint64_t reservedSpace0:5;
      uint64_t YSIZE:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XSTRIDE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CFG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSTRIDE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CFG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BDEF:8;
      uint64_t GDEF:8;
      uint64_t RDEF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CFG6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKEY:8;
      uint64_t GKEY:8;
      uint64_t RKEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CFG7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BMASK:8;
      uint64_t GMASK:8;
      uint64_t RMASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CFG8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRKEY:1;
      uint64_t INV:1;
      uint64_t ITER2BL:1;
      uint64_t ITER:1;
      uint64_t REVALPHA:1;
      uint64_t GAEN:1;
      uint64_t LAEN:1;
      uint64_t OVR:1;
      uint64_t DMA:1;
      uint64_t REP:1;
      uint64_t DSTKEY:1;
      uint64_t reservedSpace0:5;
      uint64_t GA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CFG9;

  uint8_t res3[172];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t UPDATEEN:1;
      uint64_t A2QEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CHER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHDIS:1;
      uint64_t reservedSpace0:7;
      uint64_t CHRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CHDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSR:1;
      uint64_t UPDATESR:1;
      uint64_t A2QSR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CHSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t HEAD:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2HEAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFETCH:1;
      uint64_t LFETCH:1;
      uint64_t DMAIEN:1;
      uint64_t DSCRIEN:1;
      uint64_t ADDIEN:1;
      uint64_t DONEIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NEXT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2NEXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t BLEN:2;
      uint64_t reservedSpace1:2;
      uint64_t DLBO:1;
      uint64_t reservedSpace2:3;
      uint64_t ROTDIS:1;
      uint64_t LOCKDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLUTEN:1;
      uint64_t reservedSpace0:3;
      uint64_t RGBMODE:4;
      uint64_t CLUTMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPOS:11;
      uint64_t reservedSpace0:5;
      uint64_t YPOS:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XSIZE:11;
      uint64_t reservedSpace0:5;
      uint64_t YSIZE:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XSTRIDE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CFG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSTRIDE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CFG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BDEF:8;
      uint64_t GDEF:8;
      uint64_t RDEF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CFG6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKEY:8;
      uint64_t GKEY:8;
      uint64_t RKEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CFG7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BMASK:8;
      uint64_t GMASK:8;
      uint64_t RMASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CFG8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRKEY:1;
      uint64_t INV:1;
      uint64_t ITER2BL:1;
      uint64_t ITER:1;
      uint64_t REVALPHA:1;
      uint64_t GAEN:1;
      uint64_t LAEN:1;
      uint64_t OVR:1;
      uint64_t DMA:1;
      uint64_t REP:1;
      uint64_t DSTKEY:1;
      uint64_t reservedSpace0:5;
      uint64_t GA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CFG9;

  uint8_t res4[172];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t UPDATEEN:1;
      uint64_t A2QEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCHER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHDIS:1;
      uint64_t reservedSpace0:7;
      uint64_t CHRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCHDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSR:1;
      uint64_t UPDATESR:1;
      uint64_t A2QSR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCHSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
      uint64_t reservedSpace1:3;
      uint64_t UDMA:1;
      uint64_t UDSCR:1;
      uint64_t UADD:1;
      uint64_t UDONE:1;
      uint64_t UOVR:1;
      uint64_t reservedSpace2:3;
      uint64_t VDMA:1;
      uint64_t VDSCR:1;
      uint64_t VADD:1;
      uint64_t VDONE:1;
      uint64_t VOVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
      uint64_t reservedSpace1:3;
      uint64_t UDMA:1;
      uint64_t UDSCR:1;
      uint64_t UADD:1;
      uint64_t UDONE:1;
      uint64_t UOVR:1;
      uint64_t reservedSpace2:3;
      uint64_t VDMA:1;
      uint64_t VDSCR:1;
      uint64_t VADD:1;
      uint64_t VDONE:1;
      uint64_t VOVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
      uint64_t reservedSpace1:3;
      uint64_t UDMA:1;
      uint64_t UDSCR:1;
      uint64_t UADD:1;
      uint64_t UDONE:1;
      uint64_t UOVR:1;
      uint64_t reservedSpace2:3;
      uint64_t VDMA:1;
      uint64_t VDSCR:1;
      uint64_t VADD:1;
      uint64_t VDONE:1;
      uint64_t VOVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
      uint64_t reservedSpace1:3;
      uint64_t UDMA:1;
      uint64_t UDSCR:1;
      uint64_t UADD:1;
      uint64_t UDONE:1;
      uint64_t UOVR:1;
      uint64_t reservedSpace2:3;
      uint64_t VDMA:1;
      uint64_t VDSCR:1;
      uint64_t VADD:1;
      uint64_t VDONE:1;
      uint64_t VOVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t HEAD:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOHEAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFETCH:1;
      uint64_t LFETCH:1;
      uint64_t DMAIEN:1;
      uint64_t DSCRIEN:1;
      uint64_t ADDIEN:1;
      uint64_t DONEIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NEXT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEONEXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UHEAD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOUHEAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOUADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDFETCH:1;
      uint64_t reservedSpace0:1;
      uint64_t UDMAIEN:1;
      uint64_t UDSCRIEN:1;
      uint64_t UADDIEN:1;
      uint64_t UDONEIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOUCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNEXT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOUNEXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VHEAD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOVHEAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOVADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VDFETCH:1;
      uint64_t reservedSpace0:1;
      uint64_t VDMAIEN:1;
      uint64_t VDSCRIEN:1;
      uint64_t VADDIEN:1;
      uint64_t VDONEIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOVCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VNEXT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOVNEXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIF:1;
      uint64_t reservedSpace0:3;
      uint64_t BLEN:2;
      uint64_t BLENUV:2;
      uint64_t DLBO:1;
      uint64_t reservedSpace1:3;
      uint64_t ROTDIS:1;
      uint64_t LOCKDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLUTEN:1;
      uint64_t YUVEN:1;
      uint64_t reservedSpace0:2;
      uint64_t RGBMODE:4;
      uint64_t CLUTMODE:2;
      uint64_t reservedSpace1:2;
      uint64_t YUVMODE:4;
      uint64_t YUV422ROT:1;
      uint64_t YUV422SWP:1;
      uint64_t reservedSpace2:2;
      uint64_t DSCALEOPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPOS:11;
      uint64_t reservedSpace0:5;
      uint64_t YPOS:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XSIZE:11;
      uint64_t reservedSpace0:5;
      uint64_t YSIZE:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XMEM_SIZE:11;
      uint64_t reservedSpace0:5;
      uint64_t YMEM_SIZE:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XSTRIDE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSTRIDE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UVXSTRIDE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UVPSTRIDE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BDEF:8;
      uint64_t GDEF:8;
      uint64_t RDEF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKEY:8;
      uint64_t GKEY:8;
      uint64_t RKEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BMASK:8;
      uint64_t GMASK:8;
      uint64_t RMASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRKEY:1;
      uint64_t INV:1;
      uint64_t ITER2BL:1;
      uint64_t ITER:1;
      uint64_t REVALPHA:1;
      uint64_t GAEN:1;
      uint64_t LAEN:1;
      uint64_t OVR:1;
      uint64_t DMA:1;
      uint64_t REP:1;
      uint64_t DSTKEY:1;
      uint64_t reservedSpace0:1;
      uint64_t VIDPRI:1;
      uint64_t reservedSpace1:3;
      uint64_t GA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFACTOR:14;
      uint64_t reservedSpace0:2;
      uint64_t YFACTOR:14;
      uint64_t reservedSpace1:1;
      uint64_t SCALEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSCRY:10;
      uint64_t CSCRU:10;
      uint64_t CSCRV:10;
      uint64_t CSCYOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSCGY:10;
      uint64_t CSCGU:10;
      uint64_t CSCGV:10;
      uint64_t CSCUOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSCBY:10;
      uint64_t CSCBU:10;
      uint64_t CSCBV:10;
      uint64_t CSCVOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI0COEFF0:8;
      uint64_t XPHI0COEFF1:8;
      uint64_t XPHI0COEFF2:8;
      uint64_t XPHI0COEFF3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI0COEFF4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI1COEFF0:8;
      uint64_t XPHI1COEFF1:8;
      uint64_t XPHI1COEFF2:8;
      uint64_t XPHI1COEFF3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI1COEFF4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI2COEFF0:8;
      uint64_t XPHI2COEFF1:8;
      uint64_t XPHI2COEFF2:8;
      uint64_t XPHI2COEFF3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI2COEFF4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI3COEFF0:8;
      uint64_t XPHI3COEFF1:8;
      uint64_t XPHI3COEFF2:8;
      uint64_t XPHI3COEFF3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI3COEFF4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI4COEFF0:8;
      uint64_t XPHI4COEFF1:8;
      uint64_t XPHI4COEFF2:8;
      uint64_t XPHI4COEFF3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI4COEFF4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI5COEFF0:8;
      uint64_t XPHI5COEFF1:8;
      uint64_t XPHI5COEFF2:8;
      uint64_t XPHI5COEFF3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI5COEFF4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI6COEFF0:8;
      uint64_t XPHI6COEFF1:8;
      uint64_t XPHI6COEFF2:8;
      uint64_t XPHI6COEFF3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI6COEFF4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI7COEFF0:8;
      uint64_t XPHI7COEFF1:8;
      uint64_t XPHI7COEFF2:8;
      uint64_t XPHI7COEFF3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI7COEFF4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YPHI0COEFF0:8;
      uint64_t YPHI0COEFF1:8;
      uint64_t YPHI0COEFF2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YPHI1COEFF0:8;
      uint64_t YPHI1COEFF1:8;
      uint64_t YPHI1COEFF2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YPHI2COEFF0:8;
      uint64_t YPHI2COEFF1:8;
      uint64_t YPHI2COEFF2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YPHI3COEFF0:8;
      uint64_t YPHI3COEFF1:8;
      uint64_t YPHI3COEFF2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YPHI4COEFF0:8;
      uint64_t YPHI4COEFF1:8;
      uint64_t YPHI4COEFF2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YPHI5COEFF0:8;
      uint64_t YPHI5COEFF1:8;
      uint64_t YPHI5COEFF2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YPHI6COEFF0:8;
      uint64_t YPHI6COEFF1:8;
      uint64_t YPHI6COEFF2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YPHI7COEFF0:8;
      uint64_t YPHI7COEFF1:8;
      uint64_t YPHI7COEFF2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHIDEF:3;
      uint64_t reservedSpace0:13;
      uint64_t YPHIDEF:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG41;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t UPDATEEN:1;
      uint64_t A2QEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCHER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHDIS:1;
      uint64_t reservedSpace0:7;
      uint64_t CHRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCHDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSR:1;
      uint64_t UPDATESR:1;
      uint64_t A2QSR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCHSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t HEAD:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRHEAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFETCH:1;
      uint64_t LFETCH:1;
      uint64_t DMAIEN:1;
      uint64_t DSCRIEN:1;
      uint64_t ADDIEN:1;
      uint64_t DONEIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NEXT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRNEXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIF:1;
      uint64_t reservedSpace0:3;
      uint64_t BLEN:2;
      uint64_t reservedSpace1:2;
      uint64_t DLBO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLUTEN:1;
      uint64_t reservedSpace0:3;
      uint64_t RGBMODE:4;
      uint64_t CLUTMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPOS:11;
      uint64_t reservedSpace0:5;
      uint64_t YPOS:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XSIZE:11;
      uint64_t reservedSpace0:5;
      uint64_t YSIZE:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XSTRIDE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCFG4;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BDEF:8;
      uint64_t GDEF:8;
      uint64_t RDEF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCFG6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKEY:8;
      uint64_t GKEY:8;
      uint64_t RKEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCFG7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BMASK:8;
      uint64_t GMASK:8;
      uint64_t RMASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCFG8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRKEY:1;
      uint64_t INV:1;
      uint64_t ITER2BL:1;
      uint64_t ITER:1;
      uint64_t REVALPHA:1;
      uint64_t GAEN:1;
      uint64_t LAEN:1;
      uint64_t OVR:1;
      uint64_t DMA:1;
      uint64_t REP:1;
      uint64_t DSTKEY:1;
      uint64_t reservedSpace0:5;
      uint64_t GA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCFG9;

  uint8_t res7[172];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t UPDATEEN:1;
      uint64_t A2QEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCHER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHDIS:1;
      uint64_t reservedSpace0:7;
      uint64_t CHRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCHDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSR:1;
      uint64_t UPDATESR:1;
      uint64_t A2QSR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCHSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t HEAD:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPHEAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFETCH:1;
      uint64_t reservedSpace0:1;
      uint64_t DMAIEN:1;
      uint64_t DSCRIEN:1;
      uint64_t ADDIEN:1;
      uint64_t DONEIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NEXT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPNEXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIF:1;
      uint64_t reservedSpace0:3;
      uint64_t BLEN:2;
      uint64_t reservedSpace1:2;
      uint64_t DLBO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPMODE:3;
      uint64_t reservedSpace0:1;
      uint64_t ITUBT601:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XSTRIDE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSCYR:10;
      uint64_t CSCYG:10;
      uint64_t CSCYB:10;
      uint64_t CSCYOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSCUR:10;
      uint64_t CSCUG:10;
      uint64_t CSCUB:10;
      uint64_t CSCUOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCFG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSCVR:10;
      uint64_t CSCVG:10;
      uint64_t CSCVB:10;
      uint64_t CSCVOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCFG5;

  uint8_t res8[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCLUT:8;
      uint64_t GCLUT:8;
      uint64_t RCLUT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASECLUT;

  uint8_t res9[1020];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCLUT:8;
      uint64_t GCLUT:8;
      uint64_t RCLUT:8;
      uint64_t ACLUT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CLUT;

  uint8_t res10[1020];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCLUT:8;
      uint64_t GCLUT:8;
      uint64_t RCLUT:8;
      uint64_t ACLUT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CLUT;

  uint8_t res11[1020];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCLUT:8;
      uint64_t GCLUT:8;
      uint64_t RCLUT:8;
      uint64_t ACLUT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCLUT;

  uint8_t res12[1020];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCLUT:8;
      uint64_t GCLUT:8;
      uint64_t RCLUT:8;
      uint64_t ACLUT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCLUT;

};

#define LCDC_0 (*(volatile struct LCDC_0_tag *) 0xf0030000)

struct MATRIX_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULBT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFG;

  uint8_t res0[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:9;
      uint64_t reservedSpace0:7;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFG;

  uint8_t res1[60];

  uint32_t PRAS0;
  uint32_t PRBS0;
  uint32_t PRAS1;
  uint32_t PRBS1;
  uint32_t PRAS2;
  uint32_t PRBS2;
  uint32_t PRAS3;
  uint32_t PRBS3;
  uint32_t PRAS4;
  uint32_t PRBS4;
  uint32_t PRAS5;
  uint32_t PRBS5;
  uint32_t PRAS6;
  uint32_t PRBS6;
  uint32_t PRAS7;
  uint32_t PRBS7;
  uint32_t PRAS8;
  uint32_t PRBS8;
  uint32_t PRAS9;
  uint32_t PRBS9;
  uint32_t PRAS10;
  uint32_t PRBS10;
  uint32_t PRAS11;
  uint32_t PRBS11;
  uint32_t PRAS12;
  uint32_t PRBS12;
  uint32_t PRAS13;
  uint32_t PRBS13;
  uint32_t PRAS14;
  uint32_t PRBS14;
  uint32_t PRAS15;
  uint32_t PRBS15;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCB0:1;
      uint64_t RCB1:1;
      uint64_t RCB2:1;
      uint64_t RCB3:1;
      uint64_t RCB4:1;
      uint64_t RCB5:1;
      uint64_t RCB6:1;
      uint64_t RCB7:1;
      uint64_t RCB8:1;
      uint64_t RCB9:1;
      uint64_t RCB10:1;
      uint64_t RCB11:1;
      uint64_t RCB12:1;
      uint64_t RCB13:1;
      uint64_t RCB14:1;
      uint64_t RCB15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRCR;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SFR_bitfield:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFR;

  uint8_t res3[208];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

};

#define MATRIX_0 (*(volatile struct MATRIX_0_tag *) 0xffffec00)

struct MPDDRC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t reservedSpace0:5;
      uint64_t MRS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:12;
      uint64_t reservedSpace0:4;
      uint64_t ADJ_REF:1;
      uint64_t REF_PB:1;
      uint64_t reservedSpace1:2;
      uint64_t MR4_VALUE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NC:2;
      uint64_t NR:2;
      uint64_t CAS:3;
      uint64_t DLL:1;
      uint64_t DIC_DS:1;
      uint64_t DIS_DLL:1;
      uint64_t ZQ:2;
      uint64_t OCD:3;
      uint64_t reservedSpace0:1;
      uint64_t DQMS:1;
      uint64_t ENRDM:1;
      uint64_t reservedSpace1:2;
      uint64_t NB:1;
      uint64_t NDQS:1;
      uint64_t DECOD:1;
      uint64_t UNAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRAS:4;
      uint64_t TRCD:4;
      uint64_t TWR:4;
      uint64_t TRC:4;
      uint64_t TRP:4;
      uint64_t TRRD:4;
      uint64_t TWTR:4;
      uint64_t TMRD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRFC:5;
      uint64_t reservedSpace0:3;
      uint64_t TXSNR:8;
      uint64_t TXSRD:8;
      uint64_t TXP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXARD:4;
      uint64_t TXARDS:4;
      uint64_t TRPA:4;
      uint64_t TRTP:3;
      uint64_t reservedSpace0:1;
      uint64_t TFAW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPR2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPCB:2;
      uint64_t CLK_FR:1;
      uint64_t LPDDR2_PWOFF:1;
      uint64_t PASR:3;
      uint64_t reservedSpace0:1;
      uint64_t DS:3;
      uint64_t reservedSpace1:1;
      uint64_t TIMEOUT:2;
      uint64_t reservedSpace2:2;
      uint64_t APDE:1;
      uint64_t reservedSpace3:3;
      uint64_t UPD_MR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:3;
      uint64_t reservedSpace0:1;
      uint64_t DBW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MD;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BK_MASK:8;
      uint64_t SEG_MASK:16;
      uint64_t DS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPDDR2_LPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_CAL:16;
      uint64_t MR4_READ:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPDDR2_CAL_MR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ZQCS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPDDR2_TIM_CAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDIV:3;
      uint64_t reservedSpace0:5;
      uint64_t TZQIO:3;
      uint64_t reservedSpace1:5;
      uint64_t CALCODEP:4;
      uint64_t CALCODEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IO_CALIBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCR_EN:1;
      uint64_t KEY1_KEY1:32;
      uint64_t KEY2_KEY2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCMS_KEY1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCMS_KEY2;

  uint8_t res2[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOFF:4;
      uint64_t reservedSpace0:4;
      uint64_t CLK90OFF:5;
      uint64_t reservedSpace1:3;
      uint64_t SELOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLL_MOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0OFF:5;
      uint64_t reservedSpace0:3;
      uint64_t S1OFF:5;
      uint64_t reservedSpace1:3;
      uint64_t S2OFF:5;
      uint64_t reservedSpace2:3;
      uint64_t S3OFF:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLL_SOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDINC:1;
      uint64_t MDDEC:1;
      uint64_t MDOVF:1;
      uint64_t reservedSpace0:5;
      uint64_t MDVAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLL_MSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCOVF:1;
      uint64_t SDCUDF:1;
      uint64_t SDERF:1;
      uint64_t reservedSpace0:5;
      uint64_t SDVAL:8;
      uint64_t SDCVAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLL_S0SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCOVF:1;
      uint64_t SDCUDF:1;
      uint64_t SDERF:1;
      uint64_t reservedSpace0:5;
      uint64_t SDVAL:8;
      uint64_t SDCVAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLL_S1SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCOVF:1;
      uint64_t SDCUDF:1;
      uint64_t SDERF:1;
      uint64_t reservedSpace0:5;
      uint64_t SDVAL:8;
      uint64_t SDCVAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLL_S2SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCOVF:1;
      uint64_t SDCUDF:1;
      uint64_t SDERF:1;
      uint64_t reservedSpace0:5;
      uint64_t SDVAL:8;
      uint64_t SDCVAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLL_S3SR;

  uint8_t res3[84];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

};

#define MPDDRC_0 (*(volatile struct MPDDRC_0_tag *) 0xffffea00)

struct PIO_PIOA_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUSR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ABCDSR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDSR;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWSR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMMR;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELSR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FELLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REHLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRLHSR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCKSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

  uint8_t res11[4294963732];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCHMITT0:1;
      uint64_t SCHMITT1:1;
      uint64_t SCHMITT2:1;
      uint64_t SCHMITT3:1;
      uint64_t SCHMITT4:1;
      uint64_t SCHMITT5:1;
      uint64_t SCHMITT6:1;
      uint64_t SCHMITT7:1;
      uint64_t SCHMITT8:1;
      uint64_t SCHMITT9:1;
      uint64_t SCHMITT10:1;
      uint64_t SCHMITT11:1;
      uint64_t SCHMITT12:1;
      uint64_t SCHMITT13:1;
      uint64_t SCHMITT14:1;
      uint64_t SCHMITT15:1;
      uint64_t SCHMITT16:1;
      uint64_t SCHMITT17:1;
      uint64_t SCHMITT18:1;
      uint64_t SCHMITT19:1;
      uint64_t SCHMITT20:1;
      uint64_t SCHMITT21:1;
      uint64_t SCHMITT22:1;
      uint64_t SCHMITT23:1;
      uint64_t SCHMITT24:1;
      uint64_t SCHMITT25:1;
      uint64_t SCHMITT26:1;
      uint64_t SCHMITT27:1;
      uint64_t SCHMITT28:1;
      uint64_t SCHMITT29:1;
      uint64_t SCHMITT30:1;
      uint64_t SCHMITT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCHMITT;

  uint8_t res12[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINE0:2;
      uint64_t LINE1:2;
      uint64_t LINE2:2;
      uint64_t LINE3:2;
      uint64_t LINE4:2;
      uint64_t LINE5:2;
      uint64_t LINE6:2;
      uint64_t LINE7:2;
      uint64_t LINE8:2;
      uint64_t LINE9:2;
      uint64_t LINE10:2;
      uint64_t LINE11:2;
      uint64_t LINE12:2;
      uint64_t LINE13:2;
      uint64_t LINE14:2;
      uint64_t LINE15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRIVER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINE16:2;
      uint64_t LINE17:2;
      uint64_t LINE18:2;
      uint64_t LINE19:2;
      uint64_t LINE20:2;
      uint64_t LINE21:2;
      uint64_t LINE22:2;
      uint64_t LINE23:2;
      uint64_t LINE24:2;
      uint64_t LINE25:2;
      uint64_t LINE26:2;
      uint64_t LINE27:2;
      uint64_t LINE28:2;
      uint64_t LINE29:2;
      uint64_t LINE30:2;
      uint64_t LINE31:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRIVER2;

};

#define PIO_PIOA_0 (*(volatile struct PIO_PIOA_0_tag *) 0xfffff200)

struct PIO_PIOB_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUSR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ABCDSR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDSR;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWSR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMMR;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELSR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FELLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REHLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRLHSR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCKSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

  uint8_t res11[4294963732];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCHMITT0:1;
      uint64_t SCHMITT1:1;
      uint64_t SCHMITT2:1;
      uint64_t SCHMITT3:1;
      uint64_t SCHMITT4:1;
      uint64_t SCHMITT5:1;
      uint64_t SCHMITT6:1;
      uint64_t SCHMITT7:1;
      uint64_t SCHMITT8:1;
      uint64_t SCHMITT9:1;
      uint64_t SCHMITT10:1;
      uint64_t SCHMITT11:1;
      uint64_t SCHMITT12:1;
      uint64_t SCHMITT13:1;
      uint64_t SCHMITT14:1;
      uint64_t SCHMITT15:1;
      uint64_t SCHMITT16:1;
      uint64_t SCHMITT17:1;
      uint64_t SCHMITT18:1;
      uint64_t SCHMITT19:1;
      uint64_t SCHMITT20:1;
      uint64_t SCHMITT21:1;
      uint64_t SCHMITT22:1;
      uint64_t SCHMITT23:1;
      uint64_t SCHMITT24:1;
      uint64_t SCHMITT25:1;
      uint64_t SCHMITT26:1;
      uint64_t SCHMITT27:1;
      uint64_t SCHMITT28:1;
      uint64_t SCHMITT29:1;
      uint64_t SCHMITT30:1;
      uint64_t SCHMITT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCHMITT;

  uint8_t res12[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINE0:2;
      uint64_t LINE1:2;
      uint64_t LINE2:2;
      uint64_t LINE3:2;
      uint64_t LINE4:2;
      uint64_t LINE5:2;
      uint64_t LINE6:2;
      uint64_t LINE7:2;
      uint64_t LINE8:2;
      uint64_t LINE9:2;
      uint64_t LINE10:2;
      uint64_t LINE11:2;
      uint64_t LINE12:2;
      uint64_t LINE13:2;
      uint64_t LINE14:2;
      uint64_t LINE15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRIVER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINE16:2;
      uint64_t LINE17:2;
      uint64_t LINE18:2;
      uint64_t LINE19:2;
      uint64_t LINE20:2;
      uint64_t LINE21:2;
      uint64_t LINE22:2;
      uint64_t LINE23:2;
      uint64_t LINE24:2;
      uint64_t LINE25:2;
      uint64_t LINE26:2;
      uint64_t LINE27:2;
      uint64_t LINE28:2;
      uint64_t LINE29:2;
      uint64_t LINE30:2;
      uint64_t LINE31:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRIVER2;

};

#define PIO_PIOB_0 (*(volatile struct PIO_PIOB_0_tag *) 0xfffff400)

struct PIO_PIOC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUSR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ABCDSR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDSR;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWSR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMMR;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELSR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FELLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REHLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRLHSR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCKSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

  uint8_t res11[4294963732];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCHMITT0:1;
      uint64_t SCHMITT1:1;
      uint64_t SCHMITT2:1;
      uint64_t SCHMITT3:1;
      uint64_t SCHMITT4:1;
      uint64_t SCHMITT5:1;
      uint64_t SCHMITT6:1;
      uint64_t SCHMITT7:1;
      uint64_t SCHMITT8:1;
      uint64_t SCHMITT9:1;
      uint64_t SCHMITT10:1;
      uint64_t SCHMITT11:1;
      uint64_t SCHMITT12:1;
      uint64_t SCHMITT13:1;
      uint64_t SCHMITT14:1;
      uint64_t SCHMITT15:1;
      uint64_t SCHMITT16:1;
      uint64_t SCHMITT17:1;
      uint64_t SCHMITT18:1;
      uint64_t SCHMITT19:1;
      uint64_t SCHMITT20:1;
      uint64_t SCHMITT21:1;
      uint64_t SCHMITT22:1;
      uint64_t SCHMITT23:1;
      uint64_t SCHMITT24:1;
      uint64_t SCHMITT25:1;
      uint64_t SCHMITT26:1;
      uint64_t SCHMITT27:1;
      uint64_t SCHMITT28:1;
      uint64_t SCHMITT29:1;
      uint64_t SCHMITT30:1;
      uint64_t SCHMITT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCHMITT;

  uint8_t res12[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINE0:2;
      uint64_t LINE1:2;
      uint64_t LINE2:2;
      uint64_t LINE3:2;
      uint64_t LINE4:2;
      uint64_t LINE5:2;
      uint64_t LINE6:2;
      uint64_t LINE7:2;
      uint64_t LINE8:2;
      uint64_t LINE9:2;
      uint64_t LINE10:2;
      uint64_t LINE11:2;
      uint64_t LINE12:2;
      uint64_t LINE13:2;
      uint64_t LINE14:2;
      uint64_t LINE15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRIVER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINE16:2;
      uint64_t LINE17:2;
      uint64_t LINE18:2;
      uint64_t LINE19:2;
      uint64_t LINE20:2;
      uint64_t LINE21:2;
      uint64_t LINE22:2;
      uint64_t LINE23:2;
      uint64_t LINE24:2;
      uint64_t LINE25:2;
      uint64_t LINE26:2;
      uint64_t LINE27:2;
      uint64_t LINE28:2;
      uint64_t LINE29:2;
      uint64_t LINE30:2;
      uint64_t LINE31:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRIVER2;

};

#define PIO_PIOC_0 (*(volatile struct PIO_PIOC_0_tag *) 0xfffff600)

struct PIO_PIOD_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUSR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ABCDSR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDSR;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWSR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMMR;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELSR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FELLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REHLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRLHSR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCKSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

  uint8_t res11[4294963732];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCHMITT0:1;
      uint64_t SCHMITT1:1;
      uint64_t SCHMITT2:1;
      uint64_t SCHMITT3:1;
      uint64_t SCHMITT4:1;
      uint64_t SCHMITT5:1;
      uint64_t SCHMITT6:1;
      uint64_t SCHMITT7:1;
      uint64_t SCHMITT8:1;
      uint64_t SCHMITT9:1;
      uint64_t SCHMITT10:1;
      uint64_t SCHMITT11:1;
      uint64_t SCHMITT12:1;
      uint64_t SCHMITT13:1;
      uint64_t SCHMITT14:1;
      uint64_t SCHMITT15:1;
      uint64_t SCHMITT16:1;
      uint64_t SCHMITT17:1;
      uint64_t SCHMITT18:1;
      uint64_t SCHMITT19:1;
      uint64_t SCHMITT20:1;
      uint64_t SCHMITT21:1;
      uint64_t SCHMITT22:1;
      uint64_t SCHMITT23:1;
      uint64_t SCHMITT24:1;
      uint64_t SCHMITT25:1;
      uint64_t SCHMITT26:1;
      uint64_t SCHMITT27:1;
      uint64_t SCHMITT28:1;
      uint64_t SCHMITT29:1;
      uint64_t SCHMITT30:1;
      uint64_t SCHMITT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCHMITT;

  uint8_t res12[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINE0:2;
      uint64_t LINE1:2;
      uint64_t LINE2:2;
      uint64_t LINE3:2;
      uint64_t LINE4:2;
      uint64_t LINE5:2;
      uint64_t LINE6:2;
      uint64_t LINE7:2;
      uint64_t LINE8:2;
      uint64_t LINE9:2;
      uint64_t LINE10:2;
      uint64_t LINE11:2;
      uint64_t LINE12:2;
      uint64_t LINE13:2;
      uint64_t LINE14:2;
      uint64_t LINE15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRIVER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINE16:2;
      uint64_t LINE17:2;
      uint64_t LINE18:2;
      uint64_t LINE19:2;
      uint64_t LINE20:2;
      uint64_t LINE21:2;
      uint64_t LINE22:2;
      uint64_t LINE23:2;
      uint64_t LINE24:2;
      uint64_t LINE25:2;
      uint64_t LINE26:2;
      uint64_t LINE27:2;
      uint64_t LINE28:2;
      uint64_t LINE29:2;
      uint64_t LINE30:2;
      uint64_t LINE31:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRIVER2;

};

#define PIO_PIOD_0 (*(volatile struct PIO_PIOD_0_tag *) 0xfffff800)

struct PIO_PIOE_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUSR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ABCDSR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDSR;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWSR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMMR;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELSR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FELLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REHLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRLHSR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCKSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

  uint8_t res11[4294963732];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCHMITT0:1;
      uint64_t SCHMITT1:1;
      uint64_t SCHMITT2:1;
      uint64_t SCHMITT3:1;
      uint64_t SCHMITT4:1;
      uint64_t SCHMITT5:1;
      uint64_t SCHMITT6:1;
      uint64_t SCHMITT7:1;
      uint64_t SCHMITT8:1;
      uint64_t SCHMITT9:1;
      uint64_t SCHMITT10:1;
      uint64_t SCHMITT11:1;
      uint64_t SCHMITT12:1;
      uint64_t SCHMITT13:1;
      uint64_t SCHMITT14:1;
      uint64_t SCHMITT15:1;
      uint64_t SCHMITT16:1;
      uint64_t SCHMITT17:1;
      uint64_t SCHMITT18:1;
      uint64_t SCHMITT19:1;
      uint64_t SCHMITT20:1;
      uint64_t SCHMITT21:1;
      uint64_t SCHMITT22:1;
      uint64_t SCHMITT23:1;
      uint64_t SCHMITT24:1;
      uint64_t SCHMITT25:1;
      uint64_t SCHMITT26:1;
      uint64_t SCHMITT27:1;
      uint64_t SCHMITT28:1;
      uint64_t SCHMITT29:1;
      uint64_t SCHMITT30:1;
      uint64_t SCHMITT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCHMITT;

  uint8_t res12[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINE0:2;
      uint64_t LINE1:2;
      uint64_t LINE2:2;
      uint64_t LINE3:2;
      uint64_t LINE4:2;
      uint64_t LINE5:2;
      uint64_t LINE6:2;
      uint64_t LINE7:2;
      uint64_t LINE8:2;
      uint64_t LINE9:2;
      uint64_t LINE10:2;
      uint64_t LINE11:2;
      uint64_t LINE12:2;
      uint64_t LINE13:2;
      uint64_t LINE14:2;
      uint64_t LINE15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRIVER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINE16:2;
      uint64_t LINE17:2;
      uint64_t LINE18:2;
      uint64_t LINE19:2;
      uint64_t LINE20:2;
      uint64_t LINE21:2;
      uint64_t LINE22:2;
      uint64_t LINE23:2;
      uint64_t LINE24:2;
      uint64_t LINE25:2;
      uint64_t LINE26:2;
      uint64_t LINE27:2;
      uint64_t LINE28:2;
      uint64_t LINE29:2;
      uint64_t LINE30:2;
      uint64_t LINE31:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRIVER2;

};

#define PIO_PIOE_0 (*(volatile struct PIO_PIOE_0_tag *) 0xfffffa00)

struct PIT_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIV:20;
      uint64_t reservedSpace0:4;
      uint64_t PITEN:1;
      uint64_t PITIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PITS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPIV:20;
      uint64_t PICNT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPIV:20;
      uint64_t PICNT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIIR;

};

#define PIT_0 (*(volatile struct PIT_0_tag *) 0xfffffe30)

struct PMC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DDRCK:1;
      uint64_t reservedSpace1:1;
      uint64_t SMDCK:1;
      uint64_t reservedSpace2:1;
      uint64_t UHP:1;
      uint64_t UDP:1;
      uint64_t PCK0:1;
      uint64_t PCK1:1;
      uint64_t PCK2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCK:1;
      uint64_t reservedSpace0:1;
      uint64_t DDRCK:1;
      uint64_t reservedSpace1:1;
      uint64_t SMDCK:1;
      uint64_t reservedSpace2:1;
      uint64_t UHP:1;
      uint64_t UDP:1;
      uint64_t PCK0:1;
      uint64_t PCK1:1;
      uint64_t PCK2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCK:1;
      uint64_t reservedSpace0:1;
      uint64_t DDRCK:1;
      uint64_t reservedSpace1:1;
      uint64_t SMDCK:1;
      uint64_t reservedSpace2:1;
      uint64_t UHP:1;
      uint64_t UDP:1;
      uint64_t PCK0:1;
      uint64_t PCK1:1;
      uint64_t PCK2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PID2:1;
      uint64_t PID3:1;
      uint64_t PID4:1;
      uint64_t PID5:1;
      uint64_t PID6:1;
      uint64_t PID7:1;
      uint64_t PID8:1;
      uint64_t PID9:1;
      uint64_t PID10:1;
      uint64_t PID11:1;
      uint64_t PID12:1;
      uint64_t PID13:1;
      uint64_t PID14:1;
      uint64_t PID15:1;
      uint64_t PID16:1;
      uint64_t PID17:1;
      uint64_t PID18:1;
      uint64_t PID19:1;
      uint64_t PID20:1;
      uint64_t PID21:1;
      uint64_t PID22:1;
      uint64_t PID23:1;
      uint64_t PID24:1;
      uint64_t PID25:1;
      uint64_t PID26:1;
      uint64_t PID27:1;
      uint64_t PID28:1;
      uint64_t PID29:1;
      uint64_t PID30:1;
      uint64_t PID31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PID2:1;
      uint64_t PID3:1;
      uint64_t PID4:1;
      uint64_t PID5:1;
      uint64_t PID6:1;
      uint64_t PID7:1;
      uint64_t PID8:1;
      uint64_t PID9:1;
      uint64_t PID10:1;
      uint64_t PID11:1;
      uint64_t PID12:1;
      uint64_t PID13:1;
      uint64_t PID14:1;
      uint64_t PID15:1;
      uint64_t PID16:1;
      uint64_t PID17:1;
      uint64_t PID18:1;
      uint64_t PID19:1;
      uint64_t PID20:1;
      uint64_t PID21:1;
      uint64_t PID22:1;
      uint64_t PID23:1;
      uint64_t PID24:1;
      uint64_t PID25:1;
      uint64_t PID26:1;
      uint64_t PID27:1;
      uint64_t PID28:1;
      uint64_t PID29:1;
      uint64_t PID30:1;
      uint64_t PID31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PID2:1;
      uint64_t PID3:1;
      uint64_t PID4:1;
      uint64_t PID5:1;
      uint64_t PID6:1;
      uint64_t PID7:1;
      uint64_t PID8:1;
      uint64_t PID9:1;
      uint64_t PID10:1;
      uint64_t PID11:1;
      uint64_t PID12:1;
      uint64_t PID13:1;
      uint64_t PID14:1;
      uint64_t PID15:1;
      uint64_t PID16:1;
      uint64_t PID17:1;
      uint64_t PID18:1;
      uint64_t PID19:1;
      uint64_t PID20:1;
      uint64_t PID21:1;
      uint64_t PID22:1;
      uint64_t PID23:1;
      uint64_t PID24:1;
      uint64_t PID25:1;
      uint64_t PID26:1;
      uint64_t PID27:1;
      uint64_t PID28:1;
      uint64_t PID29:1;
      uint64_t PID30:1;
      uint64_t PID31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCSR0;

  uint32_t R_UCKR;
  uint32_t R_MOR;
  uint32_t R_MCFR;
  uint32_t R_PLLAR;
  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSS:2;
      uint64_t reservedSpace0:2;
      uint64_t PRES:3;
      uint64_t reservedSpace1:1;
      uint64_t MDIV:2;
      uint64_t reservedSpace2:2;
      uint64_t PLLADIV2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCKR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USBS:1;
      uint64_t reservedSpace0:7;
      uint64_t USBDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMDS:1;
      uint64_t reservedSpace0:7;
      uint64_t SMDDIV:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSS:3;
      uint64_t reservedSpace0:1;
      uint64_t PRES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCK;

  uint8_t res3[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTS:1;
      uint64_t LOCKA:1;
      uint64_t reservedSpace0:1;
      uint64_t MCKRDY:1;
      uint64_t reservedSpace1:2;
      uint64_t LOCKU:1;
      uint64_t reservedSpace2:1;
      uint64_t PCKRDY0:1;
      uint64_t PCKRDY1:1;
      uint64_t reservedSpace3:6;
      uint64_t MOSCSELS:1;
      uint64_t MOSCRCS:1;
      uint64_t CFDEV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTS:1;
      uint64_t LOCKA:1;
      uint64_t reservedSpace0:1;
      uint64_t MCKRDY:1;
      uint64_t reservedSpace1:2;
      uint64_t LOCKU:1;
      uint64_t reservedSpace2:1;
      uint64_t PCKRDY0:1;
      uint64_t PCKRDY1:1;
      uint64_t reservedSpace3:6;
      uint64_t MOSCSELS:1;
      uint64_t MOSCRCS:1;
      uint64_t CFDEV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTS:1;
      uint64_t LOCKA:1;
      uint64_t reservedSpace0:1;
      uint64_t MCKRDY:1;
      uint64_t reservedSpace1:2;
      uint64_t LOCKU:1;
      uint64_t OSCSELS:1;
      uint64_t PCKRDY0:1;
      uint64_t PCKRDY1:1;
      uint64_t reservedSpace2:6;
      uint64_t MOSCSELS:1;
      uint64_t MOSCRCS:1;
      uint64_t CFDEV:1;
      uint64_t CFDS:1;
      uint64_t FOS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTS:1;
      uint64_t LOCKA:1;
      uint64_t reservedSpace0:1;
      uint64_t MCKRDY:1;
      uint64_t reservedSpace1:4;
      uint64_t PCKRDY0:1;
      uint64_t PCKRDY1:1;
      uint64_t reservedSpace2:6;
      uint64_t MOSCSELS:1;
      uint64_t MOSCRCS:1;
      uint64_t CFDEV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  uint8_t res4[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICPLLA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLICPR;

  uint8_t res5[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

  uint8_t res6[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID32:1;
      uint64_t PID33:1;
      uint64_t PID34:1;
      uint64_t PID35:1;
      uint64_t PID36:1;
      uint64_t PID37:1;
      uint64_t PID38:1;
      uint64_t PID39:1;
      uint64_t PID40:1;
      uint64_t PID41:1;
      uint64_t PID42:1;
      uint64_t PID43:1;
      uint64_t PID44:1;
      uint64_t PID45:1;
      uint64_t PID46:1;
      uint64_t PID47:1;
      uint64_t PID48:1;
      uint64_t PID49:1;
      uint64_t PID50:1;
      uint64_t PID51:1;
      uint64_t PID53:2;
      uint64_t PID54:1;
      uint64_t PID55:1;
      uint64_t PID56:1;
      uint64_t PID57:1;
      uint64_t PID58:1;
      uint64_t PID59:1;
      uint64_t PID60:1;
      uint64_t PID61:1;
      uint64_t PID62:1;
      uint64_t PID63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID32:1;
      uint64_t PID33:1;
      uint64_t PID34:1;
      uint64_t PID35:1;
      uint64_t PID36:1;
      uint64_t PID37:1;
      uint64_t PID38:1;
      uint64_t PID39:1;
      uint64_t PID40:1;
      uint64_t PID41:1;
      uint64_t PID42:1;
      uint64_t PID43:1;
      uint64_t PID44:1;
      uint64_t PID45:1;
      uint64_t PID46:1;
      uint64_t PID47:1;
      uint64_t PID48:1;
      uint64_t PID49:1;
      uint64_t PID50:1;
      uint64_t PID51:1;
      uint64_t PID53:2;
      uint64_t PID54:1;
      uint64_t PID55:1;
      uint64_t PID56:1;
      uint64_t PID57:1;
      uint64_t PID58:1;
      uint64_t PID59:1;
      uint64_t PID60:1;
      uint64_t PID61:1;
      uint64_t PID62:1;
      uint64_t PID63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID32:1;
      uint64_t PID33:1;
      uint64_t PID34:1;
      uint64_t PID35:1;
      uint64_t PID36:1;
      uint64_t PID37:1;
      uint64_t PID38:1;
      uint64_t PID39:1;
      uint64_t PID40:1;
      uint64_t PID41:1;
      uint64_t PID42:1;
      uint64_t PID43:1;
      uint64_t PID44:1;
      uint64_t PID45:1;
      uint64_t PID46:1;
      uint64_t PID47:1;
      uint64_t PID48:1;
      uint64_t PID49:1;
      uint64_t PID50:1;
      uint64_t PID51:1;
      uint64_t PID53:2;
      uint64_t PID54:1;
      uint64_t PID55:1;
      uint64_t PID56:1;
      uint64_t PID57:1;
      uint64_t PID58:1;
      uint64_t PID59:1;
      uint64_t PID60:1;
      uint64_t PID61:1;
      uint64_t PID62:1;
      uint64_t PID63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:6;
      uint64_t CMD:1;
      uint64_t reservedSpace1:3;
      uint64_t DIV:2;
      uint64_t reservedSpace2:10;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR;

};

#define PMC_0 (*(volatile struct PMC_0_tag *) 0xfffffc00)

struct PWM_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVA:8;
      uint64_t PREA:4;
      uint64_t reservedSpace0:4;
      uint64_t DIVB:8;
      uint64_t PREB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t reservedSpace0:12;
      uint64_t FCHID0:1;
      uint64_t FCHID1:1;
      uint64_t FCHID2:1;
      uint64_t FCHID3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t reservedSpace0:12;
      uint64_t FCHID0:1;
      uint64_t FCHID1:1;
      uint64_t FCHID2:1;
      uint64_t FCHID3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t reservedSpace0:12;
      uint64_t FCHID0:1;
      uint64_t FCHID1:1;
      uint64_t FCHID2:1;
      uint64_t FCHID3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t reservedSpace0:12;
      uint64_t FCHID0:1;
      uint64_t FCHID1:1;
      uint64_t FCHID2:1;
      uint64_t FCHID3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC0:1;
      uint64_t SYNC1:1;
      uint64_t SYNC2:1;
      uint64_t SYNC3:1;
      uint64_t reservedSpace0:12;
      uint64_t UPDM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCM;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPDULOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCUC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPR:4;
      uint64_t UPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCUP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCUPUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRDY:1;
      uint64_t reservedSpace0:2;
      uint64_t UNRE:1;
      uint64_t reservedSpace1:4;
      uint64_t CMPM0:1;
      uint64_t CMPM1:1;
      uint64_t CMPM2:1;
      uint64_t CMPM3:1;
      uint64_t CMPM4:1;
      uint64_t CMPM5:1;
      uint64_t CMPM6:1;
      uint64_t CMPM7:1;
      uint64_t CMPU0:1;
      uint64_t CMPU1:1;
      uint64_t CMPU2:1;
      uint64_t CMPU3:1;
      uint64_t CMPU4:1;
      uint64_t CMPU5:1;
      uint64_t CMPU6:1;
      uint64_t CMPU7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRDY:1;
      uint64_t reservedSpace0:2;
      uint64_t UNRE:1;
      uint64_t reservedSpace1:4;
      uint64_t CMPM0:1;
      uint64_t CMPM1:1;
      uint64_t CMPM2:1;
      uint64_t CMPM3:1;
      uint64_t CMPM4:1;
      uint64_t CMPM5:1;
      uint64_t CMPM6:1;
      uint64_t CMPM7:1;
      uint64_t CMPU0:1;
      uint64_t CMPU1:1;
      uint64_t CMPU2:1;
      uint64_t CMPU3:1;
      uint64_t CMPU4:1;
      uint64_t CMPU5:1;
      uint64_t CMPU6:1;
      uint64_t CMPU7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRDY:1;
      uint64_t reservedSpace0:2;
      uint64_t UNRE:1;
      uint64_t reservedSpace1:4;
      uint64_t CMPM0:1;
      uint64_t CMPM1:1;
      uint64_t CMPM2:1;
      uint64_t CMPM3:1;
      uint64_t CMPM4:1;
      uint64_t CMPM5:1;
      uint64_t CMPM6:1;
      uint64_t CMPM7:1;
      uint64_t CMPU0:1;
      uint64_t CMPU1:1;
      uint64_t CMPU2:1;
      uint64_t CMPU3:1;
      uint64_t CMPU4:1;
      uint64_t CMPU5:1;
      uint64_t CMPU6:1;
      uint64_t CMPU7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRDY:1;
      uint64_t reservedSpace0:2;
      uint64_t UNRE:1;
      uint64_t reservedSpace1:4;
      uint64_t CMPM0:1;
      uint64_t CMPM1:1;
      uint64_t CMPM2:1;
      uint64_t CMPM3:1;
      uint64_t CMPM4:1;
      uint64_t CMPM5:1;
      uint64_t CMPM6:1;
      uint64_t CMPM7:1;
      uint64_t CMPU0:1;
      uint64_t CMPU1:1;
      uint64_t CMPU2:1;
      uint64_t CMPU3:1;
      uint64_t CMPU4:1;
      uint64_t CMPU5:1;
      uint64_t CMPU6:1;
      uint64_t CMPU7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OOVH0:1;
      uint64_t OOVH1:1;
      uint64_t OOVH2:1;
      uint64_t OOVH3:1;
      uint64_t reservedSpace0:12;
      uint64_t OOVL0:1;
      uint64_t OOVL1:1;
      uint64_t OOVL2:1;
      uint64_t OOVL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OOV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSH0:1;
      uint64_t OSH1:1;
      uint64_t OSH2:1;
      uint64_t OSH3:1;
      uint64_t reservedSpace0:12;
      uint64_t OSL0:1;
      uint64_t OSL1:1;
      uint64_t OSL2:1;
      uint64_t OSL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSSH0:1;
      uint64_t OSSH1:1;
      uint64_t OSSH2:1;
      uint64_t OSSH3:1;
      uint64_t reservedSpace0:12;
      uint64_t OSSL0:1;
      uint64_t OSSL1:1;
      uint64_t OSSL2:1;
      uint64_t OSSL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSCH0:1;
      uint64_t OSCH1:1;
      uint64_t OSCH2:1;
      uint64_t OSCH3:1;
      uint64_t reservedSpace0:12;
      uint64_t OSCL0:1;
      uint64_t OSCL1:1;
      uint64_t OSCL2:1;
      uint64_t OSCL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSSUPH0:1;
      uint64_t OSSUPH1:1;
      uint64_t OSSUPH2:1;
      uint64_t OSSUPH3:1;
      uint64_t reservedSpace0:12;
      uint64_t OSSUPL0:1;
      uint64_t OSSUPL1:1;
      uint64_t OSSUPL2:1;
      uint64_t OSSUPL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSSUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSCUPH0:1;
      uint64_t OSCUPH1:1;
      uint64_t OSCUPH2:1;
      uint64_t OSCUPH3:1;
      uint64_t reservedSpace0:12;
      uint64_t OSCUPL0:1;
      uint64_t OSCUPL1:1;
      uint64_t OSCUPL2:1;
      uint64_t OSCUPL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPOL:8;
      uint64_t FMOD:8;
      uint64_t FFIL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIV:8;
      uint64_t FS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCLR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPVH0:1;
      uint64_t FPVH1:1;
      uint64_t FPVH2:1;
      uint64_t FPVH3:1;
      uint64_t reservedSpace0:12;
      uint64_t FPVL0:1;
      uint64_t FPVL1:1;
      uint64_t FPVL2:1;
      uint64_t FPVL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPV1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPE0:8;
      uint64_t FPE1:8;
      uint64_t FPE2:8;
      uint64_t FPE3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPE;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSEL0:1;
      uint64_t CSEL1:1;
      uint64_t CSEL2:1;
      uint64_t CSEL3:1;
      uint64_t CSEL4:1;
      uint64_t CSEL5:1;
      uint64_t CSEL6:1;
      uint64_t CSEL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELMR;

  uint8_t res2[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPZH0:1;
      uint64_t FPZH1:1;
      uint64_t FPZH2:1;
      uint64_t FPZH3:1;
      uint64_t reservedSpace0:12;
      uint64_t FPZL0:1;
      uint64_t FPZL1:1;
      uint64_t FPZL2:1;
      uint64_t FPZL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPV2;

  uint8_t res3[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPCMD:2;
      uint64_t WPRG0:1;
      uint64_t WPRG1:1;
      uint64_t WPRG2:1;
      uint64_t WPRG3:1;
      uint64_t WPRG4:1;
      uint64_t WPRG5:1;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPSWS0:1;
      uint64_t WPSWS1:1;
      uint64_t WPSWS2:1;
      uint64_t WPSWS3:1;
      uint64_t WPSWS4:1;
      uint64_t WPSWS5:1;
      uint64_t reservedSpace0:1;
      uint64_t WPVS:1;
      uint64_t WPHWS0:1;
      uint64_t WPHWS1:1;
      uint64_t WPHWS2:1;
      uint64_t WPHWS3:1;
      uint64_t WPHWS4:1;
      uint64_t WPHWS5:1;
      uint64_t reservedSpace1:2;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

  uint8_t res4[68];

  uint32_t CMPV0;
  uint32_t CMPVUPD0;
  uint32_t CMPM0;
  uint32_t CMPMUPD0;
  uint32_t CMPV1;
  uint32_t CMPVUPD1;
  uint32_t CMPM1;
  uint32_t CMPMUPD1;
  uint32_t CMPV2;
  uint32_t CMPVUPD2;
  uint32_t CMPM2;
  uint32_t CMPMUPD2;
  uint32_t CMPV3;
  uint32_t CMPVUPD3;
  uint32_t CMPM3;
  uint32_t CMPMUPD3;
  uint32_t CMPV4;
  uint32_t CMPVUPD4;
  uint32_t CMPM4;
  uint32_t CMPMUPD4;
  uint32_t CMPV5;
  uint32_t CMPVUPD5;
  uint32_t CMPM5;
  uint32_t CMPMUPD5;
  uint32_t CMPV6;
  uint32_t CMPVUPD6;
  uint32_t CMPM6;
  uint32_t CMPMUPD6;
  uint32_t CMPV7;
  uint32_t CMPVUPD7;
  uint32_t CMPM7;
  uint32_t CMPMUPD7;
  uint8_t res5[80];

  uint32_t CMR0;
  uint32_t CDTY0;
  uint32_t CDTYUPD0;
  uint32_t CPRD0;
  uint32_t CPRDUPD0;
  uint32_t CCNT0;
  uint32_t DT0;
  uint32_t DTUPD0;
  uint32_t CMR1;
  uint32_t CDTY1;
  uint32_t CDTYUPD1;
  uint32_t CPRD1;
  uint32_t CPRDUPD1;
  uint32_t CCNT1;
  uint32_t DT1;
  uint32_t DTUPD1;
  uint32_t CMR2;
  uint32_t CDTY2;
  uint32_t CDTYUPD2;
  uint32_t CPRD2;
  uint32_t CPRDUPD2;
  uint32_t CCNT2;
  uint32_t DT2;
  uint32_t DTUPD2;
  uint32_t CMR3;
  uint32_t CDTY3;
  uint32_t CDTYUPD3;
  uint32_t CPRD3;
  uint32_t CPRDUPD3;
  uint32_t CCNT3;
  uint32_t DT3;
  uint32_t DTUPD3;
  uint8_t res6[384];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t CPOLUP:1;
      uint64_t reservedSpace1:3;
      uint64_t CPOLINVUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMUPD0;

  uint8_t res7[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t CPOLUP:1;
      uint64_t reservedSpace1:3;
      uint64_t CPOLINVUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMUPD1;

  uint8_t res8[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t CPOLUP:1;
      uint64_t reservedSpace1:3;
      uint64_t CPOLINVUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMUPD2;

  uint8_t res9[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t CPOLUP:1;
      uint64_t reservedSpace1:3;
      uint64_t CPOLINVUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMUPD3;

};

#define PWM_0 (*(volatile struct PWM_0_tag *) 0xf002c000)

struct RSTC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCRST:1;
      uint64_t reservedSpace0:1;
      uint64_t PERRST:1;
      uint64_t EXTRST:1;
      uint64_t reservedSpace1:20;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t URSTS:1;
      uint64_t reservedSpace0:7;
      uint64_t RSTTYP:3;
      uint64_t reservedSpace1:5;
      uint64_t NRSTL:1;
      uint64_t SRCMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t ERSTL:4;
      uint64_t reservedSpace1:12;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

};

#define RSTC_0 (*(volatile struct RSTC_0_tag *) 0xfffffe00)

struct RTC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPDTIM:1;
      uint64_t UPDCAL:1;
      uint64_t reservedSpace0:6;
      uint64_t TIMEVSEL:2;
      uint64_t reservedSpace1:6;
      uint64_t CALEVSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC:7;
      uint64_t reservedSpace0:1;
      uint64_t MIN:7;
      uint64_t reservedSpace1:1;
      uint64_t HOUR:6;
      uint64_t AMPM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENT:7;
      uint64_t reservedSpace0:1;
      uint64_t YEAR:8;
      uint64_t MONTH:5;
      uint64_t DAY:3;
      uint64_t DATE:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC:7;
      uint64_t SECEN:1;
      uint64_t MIN:7;
      uint64_t MINEN:1;
      uint64_t HOUR:6;
      uint64_t AMPM:1;
      uint64_t HOUREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMALR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MONTH:5;
      uint64_t reservedSpace1:2;
      uint64_t MTHEN:1;
      uint64_t DATE:6;
      uint64_t reservedSpace2:1;
      uint64_t DATEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALALR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKUPD:1;
      uint64_t ALARM:1;
      uint64_t SEC:1;
      uint64_t TIMEV:1;
      uint64_t CALEV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKCLR:1;
      uint64_t ALRCLR:1;
      uint64_t SECCLR:1;
      uint64_t TIMCLR:1;
      uint64_t CALCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKEN:1;
      uint64_t ALREN:1;
      uint64_t SECEN:1;
      uint64_t TIMEN:1;
      uint64_t CALEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKDIS:1;
      uint64_t ALRDIS:1;
      uint64_t SECDIS:1;
      uint64_t TIMDIS:1;
      uint64_t CALDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACK:1;
      uint64_t ALR:1;
      uint64_t SEC:1;
      uint64_t TIM:1;
      uint64_t CAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NVTIM:1;
      uint64_t NVCAL:1;
      uint64_t NVTIMALR:1;
      uint64_t NVCALALR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VER;

};

#define RTC_0 (*(volatile struct RTC_0_tag *) 0xfffffeb0)

struct SCKC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCEN:1;
      uint64_t OSC32EN:1;
      uint64_t OSC32BYP:1;
      uint64_t OSCSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

};

#define SCKC_0 (*(volatile struct SCKC_0_tag *) 0xfffffe50)

struct SFR_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES0:1;
      uint64_t RES1:1;
      uint64_t RES2:1;
      uint64_t reservedSpace0:1;
      uint64_t ARIE:1;
      uint64_t APPSTART:1;
      uint64_t reservedSpace1:17;
      uint64_t UDPPUDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OHCIICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIS0:1;
      uint64_t RIS1:1;
      uint64_t RIS2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OHCIISR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t PFETCH10:1;
      uint64_t PFETCH11:1;
      uint64_t PFETCH12:1;
      uint64_t PFETCH13:1;
      uint64_t PFETCH14:1;
      uint64_t reservedSpace1:11;
      uint64_t DLBOPT10:1;
      uint64_t DLBOPT11:1;
      uint64_t DLBOPT12:1;
      uint64_t DLBOPT13:1;
      uint64_t DLBOPT14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APBTURBO:1;
      uint64_t reservedSpace0:7;
      uint64_t AXI2AHBSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRIDGE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ROM:1;
      uint64_t reservedSpace0:7;
      uint64_t FUSE_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECURE;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FREQ:2;
      uint64_t reservedSpace0:14;
      uint64_t VBG:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UTMICKTRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQUELCH:3;
      uint64_t reservedSpace0:1;
      uint64_t DISC:3;
      uint64_t reservedSpace1:1;
      uint64_t SLOPE0:3;
      uint64_t reservedSpace2:1;
      uint64_t SLOPE1:3;
      uint64_t reservedSpace3:1;
      uint64_t SLOPE2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UTMIHSTRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RISE:3;
      uint64_t reservedSpace0:1;
      uint64_t FALL:3;
      uint64_t reservedSpace1:1;
      uint64_t XCVR:2;
      uint64_t reservedSpace2:6;
      uint64_t ZN:3;
      uint64_t reservedSpace3:1;
      uint64_t ZP:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UTMIFSTRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT0:1;
      uint64_t PORT1:1;
      uint64_t PORT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UTMISWAP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRIVE0:2;
      uint64_t PULL0:2;
      uint64_t SCH0:1;
      uint64_t reservedSpace0:3;
      uint64_t DRIVE1:2;
      uint64_t PULL1:2;
      uint64_t SCH1:1;
      uint64_t reservedSpace1:3;
      uint64_t BMS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EBICFG;

};

#define SFR_0 (*(volatile struct SFR_0_tag *) 0xf0038010)

struct SHA_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t reservedSpace0:3;
      uint64_t FIRST:1;
      uint64_t reservedSpace1:3;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMOD:2;
      uint64_t reservedSpace0:2;
      uint64_t PROCDLY:1;
      uint64_t reservedSpace1:3;
      uint64_t ALGO:3;
      uint64_t reservedSpace2:5;
      uint64_t DUALBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t URAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t URAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t URAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t URAD:1;
      uint64_t reservedSpace1:3;
      uint64_t URAT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res1[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDATAR;

  uint8_t res2[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IODATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IODATAR;

};

#define SHA_0 (*(volatile struct SHA_0_tag *) 0xf8034000)

struct SHDWC_0_tag
{
  uint32_t CR;
  uint32_t MR;
  uint32_t SR;
};

#define SHDWC_0 (*(volatile struct SHDWC_0_tag *) 0xfffffe10)

struct SMC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAGESIZE:3;
      uint64_t reservedSpace0:5;
      uint64_t WSPARE:1;
      uint64_t RSPARE:1;
      uint64_t reservedSpace1:2;
      uint64_t EDGECTRL:1;
      uint64_t RBEDGE:1;
      uint64_t reservedSpace2:2;
      uint64_t DTOCYC:4;
      uint64_t DTOMUL:3;
      uint64_t reservedSpace3:1;
      uint64_t NFCSPARESIZE:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFCEN:1;
      uint64_t NFCDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMCSTS:1;
      uint64_t reservedSpace0:3;
      uint64_t RB_RISE:1;
      uint64_t RB_FALL:1;
      uint64_t reservedSpace1:2;
      uint64_t NFCBUSY:1;
      uint64_t reservedSpace2:2;
      uint64_t NFCWR:1;
      uint64_t NFCSID:3;
      uint64_t reservedSpace3:1;
      uint64_t XFRDONE:1;
      uint64_t CMDDONE:1;
      uint64_t ECCRDY:1;
      uint64_t reservedSpace4:1;
      uint64_t DTOE:1;
      uint64_t UNDEF:1;
      uint64_t AWB:1;
      uint64_t NFCASE:1;
      uint64_t RB_EDGE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RB_RISE:1;
      uint64_t RB_FALL:1;
      uint64_t reservedSpace1:10;
      uint64_t XFRDONE:1;
      uint64_t CMDDONE:1;
      uint64_t reservedSpace2:2;
      uint64_t DTOE:1;
      uint64_t UNDEF:1;
      uint64_t AWB:1;
      uint64_t NFCASE:1;
      uint64_t RB_EDGE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RB_RISE:1;
      uint64_t RB_FALL:1;
      uint64_t reservedSpace1:10;
      uint64_t XFRDONE:1;
      uint64_t CMDDONE:1;
      uint64_t reservedSpace2:2;
      uint64_t DTOE:1;
      uint64_t UNDEF:1;
      uint64_t AWB:1;
      uint64_t NFCASE:1;
      uint64_t RB_EDGE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RB_RISE:1;
      uint64_t RB_FALL:1;
      uint64_t reservedSpace1:10;
      uint64_t XFRDONE:1;
      uint64_t CMDDONE:1;
      uint64_t reservedSpace2:2;
      uint64_t DTOE:1;
      uint64_t UNDEF:1;
      uint64_t AWB:1;
      uint64_t NFCASE:1;
      uint64_t RB_EDGE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR_CYCLE0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BANK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECC_PAGESIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t TYPCORREC:2;
      uint64_t reservedSpace1:2;
      uint64_t HAMMING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_MD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RECERR0:1;
      uint64_t ECCERR0:1;
      uint64_t MULERR0:1;
      uint64_t reservedSpace0:1;
      uint64_t RECERR1:1;
      uint64_t ECCERR1:1;
      uint64_t MULERR1:1;
      uint64_t reservedSpace1:1;
      uint64_t RECERR2:1;
      uint64_t ECCERR2:1;
      uint64_t MULERR2:1;
      uint64_t reservedSpace2:1;
      uint64_t RECERR3:1;
      uint64_t ECCERR3:1;
      uint64_t MULERR3:1;
      uint64_t reservedSpace3:1;
      uint64_t RECERR4:1;
      uint64_t ECCERR4:1;
      uint64_t MULERR4:1;
      uint64_t reservedSpace4:1;
      uint64_t RECERR5:1;
      uint64_t ECCERR5:1;
      uint64_t MULERR5:1;
      uint64_t reservedSpace5:1;
      uint64_t RECERR6:1;
      uint64_t ECCERR6:1;
      uint64_t MULERR6:1;
      uint64_t reservedSpace6:1;
      uint64_t RECERR7:1;
      uint64_t ECCERR7:1;
      uint64_t MULERR7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:4;
      uint64_t BITADDR_W9BIT:3;
      uint64_t BITADDR_W8BIT:3;
      uint64_t WORDADDR_W9BIT:9;
      uint64_t WORDADDR_W8BIT:8;
      uint64_t WORDADDR:12;
      uint64_t NPARITY:12;
      uint64_t NPARITY_W8BIT:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NPARITY:16;
      uint64_t BITADDR:3;
      uint64_t WORDADDR:9;
      uint64_t WORDADDR_W8BIT:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY_W9BIT:12;
      uint64_t NPARITY_W8BIT:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RECERR8:1;
      uint64_t ECCERR8:1;
      uint64_t MULERR8:1;
      uint64_t reservedSpace0:1;
      uint64_t RECERR9:1;
      uint64_t ECCERR9:1;
      uint64_t MULERR9:1;
      uint64_t reservedSpace1:1;
      uint64_t RECERR10:1;
      uint64_t ECCERR10:1;
      uint64_t MULERR10:1;
      uint64_t reservedSpace2:1;
      uint64_t RECERR11:1;
      uint64_t ECCERR11:1;
      uint64_t MULERR11:1;
      uint64_t reservedSpace3:1;
      uint64_t RECERR12:1;
      uint64_t ECCERR12:1;
      uint64_t MULERR12:1;
      uint64_t reservedSpace4:1;
      uint64_t RECERR13:1;
      uint64_t ECCERR13:1;
      uint64_t MULERR13:1;
      uint64_t reservedSpace5:1;
      uint64_t RECERR14:1;
      uint64_t ECCERR14:1;
      uint64_t MULERR14:1;
      uint64_t reservedSpace6:1;
      uint64_t RECERR15:1;
      uint64_t ECCERR15:1;
      uint64_t MULERR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:9;
      uint64_t WORDADDR_W8BIT:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:12;
      uint64_t NPARITY_W8BIT:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:9;
      uint64_t WORDADDR_W8BIT:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:12;
      uint64_t NPARITY_W8BIT:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:9;
      uint64_t WORDADDR_W8BIT:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:12;
      uint64_t NPARITY_W8BIT:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:9;
      uint64_t WORDADDR_W8BIT:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:12;
      uint64_t NPARITY_W8BIT:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:9;
      uint64_t WORDADDR_W8BIT:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:12;
      uint64_t NPARITY_W8BIT:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:9;
      uint64_t WORDADDR_W8BIT:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:12;
      uint64_t NPARITY_W8BIT:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCH_ERR:3;
      uint64_t reservedSpace0:1;
      uint64_t SECTORSZ:1;
      uint64_t reservedSpace1:3;
      uint64_t PAGESIZE:2;
      uint64_t reservedSpace2:2;
      uint64_t NANDWR:1;
      uint64_t reservedSpace3:3;
      uint64_t SPAREEN:1;
      uint64_t reservedSpace4:3;
      uint64_t AUTO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMECCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPARESIZE:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMECCSAREA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTADDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMECCSADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMECCEADDR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
      uint64_t DATA:1;
      uint64_t USER:1;
      uint64_t reservedSpace0:1;
      uint64_t ENABLE:1;
      uint64_t DISABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMECCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t reservedSpace0:3;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMECCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMECCIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMECCIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMECCIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRIS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMECCISR;

  uint8_t res1[20];

  uint32_t PMECC0_0;
  uint32_t PMECC1_0;
  uint32_t PMECC2_0;
  uint32_t PMECC3_0;
  uint32_t PMECC4_0;
  uint32_t PMECC5_0;
  uint32_t PMECC6_0;
  uint32_t PMECC7_0;
  uint32_t PMECC8_0;
  uint32_t PMECC9_0;
  uint32_t PMECC10_0;
  uint8_t res2[20];

  uint32_t PMECC0_1;
  uint32_t PMECC1_1;
  uint32_t PMECC2_1;
  uint32_t PMECC3_1;
  uint32_t PMECC4_1;
  uint32_t PMECC5_1;
  uint32_t PMECC6_1;
  uint32_t PMECC7_1;
  uint32_t PMECC8_1;
  uint32_t PMECC9_1;
  uint32_t PMECC10_1;
  uint8_t res3[20];

  uint32_t PMECC0_2;
  uint32_t PMECC1_2;
  uint32_t PMECC2_2;
  uint32_t PMECC3_2;
  uint32_t PMECC4_2;
  uint32_t PMECC5_2;
  uint32_t PMECC6_2;
  uint32_t PMECC7_2;
  uint32_t PMECC8_2;
  uint32_t PMECC9_2;
  uint32_t PMECC10_2;
  uint8_t res4[20];

  uint32_t PMECC0_3;
  uint32_t PMECC1_3;
  uint32_t PMECC2_3;
  uint32_t PMECC3_3;
  uint32_t PMECC4_3;
  uint32_t PMECC5_3;
  uint32_t PMECC6_3;
  uint32_t PMECC7_3;
  uint32_t PMECC8_3;
  uint32_t PMECC9_3;
  uint32_t PMECC10_3;
  uint8_t res5[20];

  uint32_t PMECC0_4;
  uint32_t PMECC1_4;
  uint32_t PMECC2_4;
  uint32_t PMECC3_4;
  uint32_t PMECC4_4;
  uint32_t PMECC5_4;
  uint32_t PMECC6_4;
  uint32_t PMECC7_4;
  uint32_t PMECC8_4;
  uint32_t PMECC9_4;
  uint32_t PMECC10_4;
  uint8_t res6[20];

  uint32_t PMECC0_5;
  uint32_t PMECC1_5;
  uint32_t PMECC2_5;
  uint32_t PMECC3_5;
  uint32_t PMECC4_5;
  uint32_t PMECC5_5;
  uint32_t PMECC6_5;
  uint32_t PMECC7_5;
  uint32_t PMECC8_5;
  uint32_t PMECC9_5;
  uint32_t PMECC10_5;
  uint8_t res7[20];

  uint32_t PMECC0_6;
  uint32_t PMECC1_6;
  uint32_t PMECC2_6;
  uint32_t PMECC3_6;
  uint32_t PMECC4_6;
  uint32_t PMECC5_6;
  uint32_t PMECC6_6;
  uint32_t PMECC7_6;
  uint32_t PMECC8_6;
  uint32_t PMECC9_6;
  uint32_t PMECC10_6;
  uint8_t res8[20];

  uint32_t PMECC0_7;
  uint32_t PMECC1_7;
  uint32_t PMECC2_7;
  uint32_t PMECC3_7;
  uint32_t PMECC4_7;
  uint32_t PMECC5_7;
  uint32_t PMECC6_7;
  uint32_t PMECC7_7;
  uint32_t PMECC8_7;
  uint32_t PMECC9_7;
  uint32_t PMECC10_7;
  uint8_t res9[20];

  uint32_t REM0_0;
  uint32_t REM1_0;
  uint32_t REM2_0;
  uint32_t REM3_0;
  uint32_t REM4_0;
  uint32_t REM5_0;
  uint32_t REM6_0;
  uint32_t REM7_0;
  uint32_t REM8_0;
  uint32_t REM9_0;
  uint32_t REM10_0;
  uint32_t REM11_0;
  uint8_t res10[16];

  uint32_t REM0_1;
  uint32_t REM1_1;
  uint32_t REM2_1;
  uint32_t REM3_1;
  uint32_t REM4_1;
  uint32_t REM5_1;
  uint32_t REM6_1;
  uint32_t REM7_1;
  uint32_t REM8_1;
  uint32_t REM9_1;
  uint32_t REM10_1;
  uint32_t REM11_1;
  uint8_t res11[16];

  uint32_t REM0_2;
  uint32_t REM1_2;
  uint32_t REM2_2;
  uint32_t REM3_2;
  uint32_t REM4_2;
  uint32_t REM5_2;
  uint32_t REM6_2;
  uint32_t REM7_2;
  uint32_t REM8_2;
  uint32_t REM9_2;
  uint32_t REM10_2;
  uint32_t REM11_2;
  uint8_t res12[16];

  uint32_t REM0_3;
  uint32_t REM1_3;
  uint32_t REM2_3;
  uint32_t REM3_3;
  uint32_t REM4_3;
  uint32_t REM5_3;
  uint32_t REM6_3;
  uint32_t REM7_3;
  uint32_t REM8_3;
  uint32_t REM9_3;
  uint32_t REM10_3;
  uint32_t REM11_3;
  uint8_t res13[16];

  uint32_t REM0_4;
  uint32_t REM1_4;
  uint32_t REM2_4;
  uint32_t REM3_4;
  uint32_t REM4_4;
  uint32_t REM5_4;
  uint32_t REM6_4;
  uint32_t REM7_4;
  uint32_t REM8_4;
  uint32_t REM9_4;
  uint32_t REM10_4;
  uint32_t REM11_4;
  uint8_t res14[16];

  uint32_t REM0_5;
  uint32_t REM1_5;
  uint32_t REM2_5;
  uint32_t REM3_5;
  uint32_t REM4_5;
  uint32_t REM5_5;
  uint32_t REM6_5;
  uint32_t REM7_5;
  uint32_t REM8_5;
  uint32_t REM9_5;
  uint32_t REM10_5;
  uint32_t REM11_5;
  uint8_t res15[16];

  uint32_t REM0_6;
  uint32_t REM1_6;
  uint32_t REM2_6;
  uint32_t REM3_6;
  uint32_t REM4_6;
  uint32_t REM5_6;
  uint32_t REM6_6;
  uint32_t REM7_6;
  uint32_t REM8_6;
  uint32_t REM9_6;
  uint32_t REM10_6;
  uint32_t REM11_6;
  uint8_t res16[16];

  uint32_t REM0_7;
  uint32_t REM1_7;
  uint32_t REM2_7;
  uint32_t REM3_7;
  uint32_t REM4_7;
  uint32_t REM5_7;
  uint32_t REM6_7;
  uint32_t REM7_7;
  uint32_t REM8_7;
  uint32_t REM9_7;
  uint32_t REM10_7;
  uint32_t REM11_7;
  uint8_t res17[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECTORSZ:1;
      uint64_t reservedSpace0:15;
      uint64_t ERRNUM:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIMITIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELPRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENINIT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELDIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t reservedSpace0:7;
      uint64_t ERR_CNT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELISR;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA0:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA1:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA2:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA3:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA4:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA5:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA6:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA7:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA8:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA9:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA10:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA11:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA12:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA13:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA14:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA15:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA16:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA17:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA18:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA19:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA20:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA21:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA22:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA23:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA24:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRLOCN:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRLOC;

  uint8_t res19[112];

  uint32_t SETUP0;
  uint32_t PULSE0;
  uint32_t CYCLE0;
  uint32_t TIMINGS0;
  uint32_t MODE0;
  uint32_t SETUP1;
  uint32_t PULSE1;
  uint32_t CYCLE1;
  uint32_t TIMINGS1;
  uint32_t MODE1;
  uint32_t SETUP2;
  uint32_t PULSE2;
  uint32_t CYCLE2;
  uint32_t TIMINGS2;
  uint32_t MODE2;
  uint32_t SETUP3;
  uint32_t PULSE3;
  uint32_t CYCLE3;
  uint32_t TIMINGS3;
  uint32_t MODE3;
  uint8_t res20[80];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMSE:1;
      uint64_t SRSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEY1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEY2;

  uint8_t res21[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t WP_KEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP_VS:4;
      uint64_t reservedSpace0:4;
      uint64_t WP_VSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

};

#define SMC_0 (*(volatile struct SMC_0_tag *) 0xffffc000)

struct SPI_SPI0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPIEN:1;
      uint64_t SPIDIS:1;
      uint64_t reservedSpace0:5;
      uint64_t SWRST:1;
      uint64_t reservedSpace1:16;
      uint64_t LASTXFER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTR:1;
      uint64_t PS:1;
      uint64_t PCSDEC:1;
      uint64_t reservedSpace0:1;
      uint64_t MODFDIS:1;
      uint64_t WDRBT:1;
      uint64_t reservedSpace1:1;
      uint64_t LLB:1;
      uint64_t reservedSpace2:8;
      uint64_t PCS:4;
      uint64_t reservedSpace3:4;
      uint64_t DLYBCS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD:16;
      uint64_t PCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TD:16;
      uint64_t PCS:4;
      uint64_t reservedSpace0:4;
      uint64_t LASTXFER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
      uint64_t reservedSpace0:5;
      uint64_t SPIENS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPOL:1;
      uint64_t NCPHA:1;
      uint64_t CSNAAT:1;
      uint64_t CSAAT:1;
      uint64_t BITS:4;
      uint64_t SCBR:8;
      uint64_t DLYBS:8;
      uint64_t DLYBCT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  uint8_t res1[176];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

};

#define SPI_SPI0_0 (*(volatile struct SPI_SPI0_0_tag *) 0xf0004000)

struct SPI_SPI1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPIEN:1;
      uint64_t SPIDIS:1;
      uint64_t reservedSpace0:5;
      uint64_t SWRST:1;
      uint64_t reservedSpace1:16;
      uint64_t LASTXFER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTR:1;
      uint64_t PS:1;
      uint64_t PCSDEC:1;
      uint64_t reservedSpace0:1;
      uint64_t MODFDIS:1;
      uint64_t WDRBT:1;
      uint64_t reservedSpace1:1;
      uint64_t LLB:1;
      uint64_t reservedSpace2:8;
      uint64_t PCS:4;
      uint64_t reservedSpace3:4;
      uint64_t DLYBCS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD:16;
      uint64_t PCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TD:16;
      uint64_t PCS:4;
      uint64_t reservedSpace0:4;
      uint64_t LASTXFER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
      uint64_t reservedSpace0:5;
      uint64_t SPIENS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPOL:1;
      uint64_t NCPHA:1;
      uint64_t CSNAAT:1;
      uint64_t CSAAT:1;
      uint64_t BITS:4;
      uint64_t SCBR:8;
      uint64_t DLYBS:8;
      uint64_t DLYBCT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  uint8_t res1[176];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

};

#define SPI_SPI1_0 (*(volatile struct SPI_SPI1_0_tag *) 0xf8008000)

struct SSC_SSC0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t reservedSpace1:5;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKS:2;
      uint64_t CKO:3;
      uint64_t CKI:1;
      uint64_t CKG:2;
      uint64_t START:4;
      uint64_t STOP:1;
      uint64_t reservedSpace0:3;
      uint64_t STTDLY:8;
      uint64_t PERIOD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATLEN:5;
      uint64_t LOOP:1;
      uint64_t reservedSpace0:1;
      uint64_t MSBF:1;
      uint64_t DATNB:4;
      uint64_t reservedSpace1:4;
      uint64_t FSLEN:4;
      uint64_t FSOS:3;
      uint64_t reservedSpace2:1;
      uint64_t FSEDGE:1;
      uint64_t reservedSpace3:3;
      uint64_t FSLEN_EXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKS:2;
      uint64_t CKO:3;
      uint64_t CKI:1;
      uint64_t CKG:2;
      uint64_t START:4;
      uint64_t reservedSpace0:4;
      uint64_t STTDLY:8;
      uint64_t PERIOD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATLEN:5;
      uint64_t DATDEF:1;
      uint64_t reservedSpace0:1;
      uint64_t MSBF:1;
      uint64_t DATNB:4;
      uint64_t reservedSpace1:4;
      uint64_t FSLEN:4;
      uint64_t FSOS:3;
      uint64_t FSDEN:1;
      uint64_t FSEDGE:1;
      uint64_t reservedSpace2:3;
      uint64_t FSLEN_EXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSDAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSDAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RC0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RC1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
      uint64_t reservedSpace2:4;
      uint64_t TXEN:1;
      uint64_t RXEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  uint8_t res2[148];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

};

#define SSC_SSC0_0 (*(volatile struct SSC_SSC0_0_tag *) 0xf0008000)

struct SSC_SSC1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t reservedSpace1:5;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKS:2;
      uint64_t CKO:3;
      uint64_t CKI:1;
      uint64_t CKG:2;
      uint64_t START:4;
      uint64_t STOP:1;
      uint64_t reservedSpace0:3;
      uint64_t STTDLY:8;
      uint64_t PERIOD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATLEN:5;
      uint64_t LOOP:1;
      uint64_t reservedSpace0:1;
      uint64_t MSBF:1;
      uint64_t DATNB:4;
      uint64_t reservedSpace1:4;
      uint64_t FSLEN:4;
      uint64_t FSOS:3;
      uint64_t reservedSpace2:1;
      uint64_t FSEDGE:1;
      uint64_t reservedSpace3:3;
      uint64_t FSLEN_EXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKS:2;
      uint64_t CKO:3;
      uint64_t CKI:1;
      uint64_t CKG:2;
      uint64_t START:4;
      uint64_t reservedSpace0:4;
      uint64_t STTDLY:8;
      uint64_t PERIOD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATLEN:5;
      uint64_t DATDEF:1;
      uint64_t reservedSpace0:1;
      uint64_t MSBF:1;
      uint64_t DATNB:4;
      uint64_t reservedSpace1:4;
      uint64_t FSLEN:4;
      uint64_t FSOS:3;
      uint64_t FSDEN:1;
      uint64_t FSEDGE:1;
      uint64_t reservedSpace2:3;
      uint64_t FSLEN_EXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSDAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSDAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RC0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RC1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
      uint64_t reservedSpace2:4;
      uint64_t TXEN:1;
      uint64_t RXEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  uint8_t res2[148];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

};

#define SSC_SSC1_0 (*(volatile struct SSC_SSC1_0_tag *) 0xf800c000)

struct TC_TC0_0_tag
{
  uint32_t CCR0;
  uint32_t CMR0;
  uint8_t res0[4];

  uint32_t RAB0;
  uint32_t CV0;
  uint32_t RA0;
  uint32_t RB0;
  uint32_t RC0;
  uint32_t SR0;
  uint32_t IER0;
  uint32_t IDR0;
  uint32_t IMR0;
  uint8_t res1[16];

  uint32_t CCR1;
  uint32_t CMR1;
  uint8_t res2[4];

  uint32_t RAB1;
  uint32_t CV1;
  uint32_t RA1;
  uint32_t RB1;
  uint32_t RC1;
  uint32_t SR1;
  uint32_t IER1;
  uint32_t IDR1;
  uint32_t IMR1;
  uint8_t res3[16];

  uint32_t CCR2;
  uint32_t CMR2;
  uint8_t res4[4];

  uint32_t RAB2;
  uint32_t CV2;
  uint32_t RA2;
  uint32_t RB2;
  uint32_t RC2;
  uint32_t SR2;
  uint32_t IER2;
  uint32_t IDR2;
  uint32_t IMR2;
  uint8_t res5[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC0XC0S:2;
      uint64_t TC1XC1S:2;
      uint64_t TC2XC2S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BMR;

};

#define TC_TC0_0 (*(volatile struct TC_TC0_0_tag *) 0xf0010000)

struct TC_TC1_0_tag
{
  uint32_t CCR0;
  uint32_t CMR0;
  uint8_t res0[4];

  uint32_t RAB0;
  uint32_t CV0;
  uint32_t RA0;
  uint32_t RB0;
  uint32_t RC0;
  uint32_t SR0;
  uint32_t IER0;
  uint32_t IDR0;
  uint32_t IMR0;
  uint8_t res1[16];

  uint32_t CCR1;
  uint32_t CMR1;
  uint8_t res2[4];

  uint32_t RAB1;
  uint32_t CV1;
  uint32_t RA1;
  uint32_t RB1;
  uint32_t RC1;
  uint32_t SR1;
  uint32_t IER1;
  uint32_t IDR1;
  uint32_t IMR1;
  uint8_t res3[16];

  uint32_t CCR2;
  uint32_t CMR2;
  uint8_t res4[4];

  uint32_t RAB2;
  uint32_t CV2;
  uint32_t RA2;
  uint32_t RB2;
  uint32_t RC2;
  uint32_t SR2;
  uint32_t IER2;
  uint32_t IDR2;
  uint32_t IMR2;
  uint8_t res5[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC0XC0S:2;
      uint64_t TC1XC1S:2;
      uint64_t TC2XC2S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BMR;

};

#define TC_TC1_0 (*(volatile struct TC_TC1_0_tag *) 0xf8014000)

struct TDES_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t reservedSpace0:7;
      uint64_t SWRST:1;
      uint64_t reservedSpace1:7;
      uint64_t LOADSEED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIPHER:1;
      uint64_t TDESMOD:2;
      uint64_t reservedSpace0:1;
      uint64_t KEYMOD:1;
      uint64_t reservedSpace1:3;
      uint64_t SMOD:2;
      uint64_t reservedSpace2:2;
      uint64_t OPMOD:2;
      uint64_t reservedSpace3:1;
      uint64_t LOD:1;
      uint64_t CFBS:2;
      uint64_t reservedSpace4:2;
      uint64_t CKEY:4;
      uint64_t CMTYP1:1;
      uint64_t CMTYP2:1;
      uint64_t CMTYP3:1;
      uint64_t CMTYP4:1;
      uint64_t CMTYP5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t URAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t URAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t URAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t URAD:1;
      uint64_t reservedSpace1:3;
      uint64_t URAT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY1W:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEY1WR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY2W:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEY2WR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY3W:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEY3WR;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDATAR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODATAR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IVR;

  uint8_t res6[12];

  uint32_t XTEARNDR;
};

#define TDES_0 (*(volatile struct TDES_0_tag *) 0xf803c000)

struct TRNG_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:7;
      uint64_t KEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res1[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODATA;

};

#define TRNG_0 (*(volatile struct TRNG_0_tag *) 0xf8040000)

struct TWI_TWI0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t MSEN:1;
      uint64_t MSDIS:1;
      uint64_t SVEN:1;
      uint64_t SVDIS:1;
      uint64_t QUICK:1;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t IADRSZ:2;
      uint64_t reservedSpace1:2;
      uint64_t MREAD:1;
      uint64_t reservedSpace2:3;
      uint64_t DADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IADR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLDIV:8;
      uint64_t CHDIV:8;
      uint64_t CKDIV:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWGR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t SVREAD:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace0:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCLWS:1;
      uint64_t EOSACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THR;

  uint8_t res1[172];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPROT:1;
      uint64_t reservedSpace0:7;
      uint64_t SECURITY_CODE:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPROT_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPROTERR:1;
      uint64_t reservedSpace0:7;
      uint64_t WPROTADDR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPROT_STATUS;

};

#define TWI_TWI0_0 (*(volatile struct TWI_TWI0_0_tag *) 0xf0014000)

struct TWI_TWI1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t MSEN:1;
      uint64_t MSDIS:1;
      uint64_t SVEN:1;
      uint64_t SVDIS:1;
      uint64_t QUICK:1;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t IADRSZ:2;
      uint64_t reservedSpace1:2;
      uint64_t MREAD:1;
      uint64_t reservedSpace2:3;
      uint64_t DADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IADR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLDIV:8;
      uint64_t CHDIV:8;
      uint64_t CKDIV:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWGR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t SVREAD:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace0:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCLWS:1;
      uint64_t EOSACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THR;

  uint8_t res1[172];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPROT:1;
      uint64_t reservedSpace0:7;
      uint64_t SECURITY_CODE:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPROT_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPROTERR:1;
      uint64_t reservedSpace0:7;
      uint64_t WPROTADDR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPROT_STATUS;

};

#define TWI_TWI1_0 (*(volatile struct TWI_TWI1_0_tag *) 0xf0018000)

struct TWI_TWI2_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t MSEN:1;
      uint64_t MSDIS:1;
      uint64_t SVEN:1;
      uint64_t SVDIS:1;
      uint64_t QUICK:1;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t IADRSZ:2;
      uint64_t reservedSpace1:2;
      uint64_t MREAD:1;
      uint64_t reservedSpace2:3;
      uint64_t DADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IADR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLDIV:8;
      uint64_t CHDIV:8;
      uint64_t CKDIV:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWGR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t SVREAD:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace0:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCLWS:1;
      uint64_t EOSACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THR;

  uint8_t res1[172];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPROT:1;
      uint64_t reservedSpace0:7;
      uint64_t SECURITY_CODE:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPROT_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPROTERR:1;
      uint64_t reservedSpace0:7;
      uint64_t WPROTADDR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPROT_STATUS;

};

#define TWI_TWI2_0 (*(volatile struct TWI_TWI2_0_tag *) 0xf801c000)

struct UART_UART0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RSTRX:1;
      uint64_t RSTTX:1;
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t RSTSTA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t PAR:3;
      uint64_t reservedSpace1:2;
      uint64_t CHMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRGR;

};

#define UART_UART0_0 (*(volatile struct UART_UART0_0_tag *) 0xf0024000)

struct UART_UART1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RSTRX:1;
      uint64_t RSTTX:1;
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t RSTSTA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t PAR:3;
      uint64_t reservedSpace1:2;
      uint64_t CHMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRGR;

};

#define UART_UART1_0 (*(volatile struct UART_UART1_0_tag *) 0xf8028000)

struct UDPHS_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEV_ADDR:7;
      uint64_t FADDR_EN:1;
      uint64_t EN_UDPHS:1;
      uint64_t DETACH:1;
      uint64_t REWAKEUP:1;
      uint64_t PULLD_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MICRO_FRAME_NUM:3;
      uint64_t FRAME_NUMBER:11;
      uint64_t reservedSpace0:17;
      uint64_t FNUM_ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FNUM;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DET_SUSPD:1;
      uint64_t MICRO_SOF:1;
      uint64_t INT_SOF:1;
      uint64_t ENDRESET:1;
      uint64_t WAKE_UP:1;
      uint64_t ENDOFRSM:1;
      uint64_t UPSTR_RES:1;
      uint64_t EPT_0:1;
      uint64_t EPT_1:1;
      uint64_t EPT_2:1;
      uint64_t EPT_3:1;
      uint64_t EPT_4:1;
      uint64_t EPT_5:1;
      uint64_t EPT_6:1;
      uint64_t EPT_7:1;
      uint64_t EPT_8:1;
      uint64_t EPT_9:1;
      uint64_t EPT_10:1;
      uint64_t EPT_11:1;
      uint64_t EPT_12:1;
      uint64_t EPT_13:1;
      uint64_t EPT_14:1;
      uint64_t EPT_15:1;
      uint64_t reservedSpace1:1;
      uint64_t DMA_1:1;
      uint64_t DMA_2:1;
      uint64_t DMA_3:1;
      uint64_t DMA_4:1;
      uint64_t DMA_5:1;
      uint64_t DMA_6:1;
      uint64_t DMA_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPEED:1;
      uint64_t DET_SUSPD:1;
      uint64_t MICRO_SOF:1;
      uint64_t INT_SOF:1;
      uint64_t ENDRESET:1;
      uint64_t WAKE_UP:1;
      uint64_t ENDOFRSM:1;
      uint64_t UPSTR_RES:1;
      uint64_t EPT_0:1;
      uint64_t EPT_1:1;
      uint64_t EPT_2:1;
      uint64_t EPT_3:1;
      uint64_t EPT_4:1;
      uint64_t EPT_5:1;
      uint64_t EPT_6:1;
      uint64_t EPT_7:1;
      uint64_t EPT_8:1;
      uint64_t EPT_9:1;
      uint64_t EPT_10:1;
      uint64_t EPT_11:1;
      uint64_t EPT_12:1;
      uint64_t EPT_13:1;
      uint64_t EPT_14:1;
      uint64_t EPT_15:1;
      uint64_t reservedSpace0:1;
      uint64_t DMA_1:1;
      uint64_t DMA_2:1;
      uint64_t DMA_3:1;
      uint64_t DMA_4:1;
      uint64_t DMA_5:1;
      uint64_t DMA_6:1;
      uint64_t DMA_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DET_SUSPD:1;
      uint64_t MICRO_SOF:1;
      uint64_t INT_SOF:1;
      uint64_t ENDRESET:1;
      uint64_t WAKE_UP:1;
      uint64_t ENDOFRSM:1;
      uint64_t UPSTR_RES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLRINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPT_0:1;
      uint64_t EPT_1:1;
      uint64_t EPT_2:1;
      uint64_t EPT_3:1;
      uint64_t EPT_4:1;
      uint64_t EPT_5:1;
      uint64_t EPT_6:1;
      uint64_t EPT_7:1;
      uint64_t EPT_8:1;
      uint64_t EPT_9:1;
      uint64_t EPT_10:1;
      uint64_t EPT_11:1;
      uint64_t EPT_12:1;
      uint64_t EPT_13:1;
      uint64_t EPT_14:1;
      uint64_t EPT_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPTRST;

  uint8_t res1[192];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPEED_CFG:2;
      uint64_t TST_J:1;
      uint64_t TST_K:1;
      uint64_t TST_PKT:1;
      uint64_t OPMODE2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TST;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IP_NAME1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPNAME1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IP_NAME2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPNAME2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPT_NBR_MAX:4;
      uint64_t DMA_CHANNEL_NBR:3;
      uint64_t DMA_B_SIZ:1;
      uint64_t DMA_FIFO_WORD_DEPTH:4;
      uint64_t FIFO_MAX_SIZE:3;
      uint64_t BW_DPRAM:1;
      uint64_t DATAB16_8:1;
      uint64_t ISO_EPT_1:1;
      uint64_t ISO_EPT_2:1;
      uint64_t ISO_EPT_3:1;
      uint64_t ISO_EPT_4:1;
      uint64_t ISO_EPT_5:1;
      uint64_t ISO_EPT_6:1;
      uint64_t ISO_EPT_7:1;
      uint64_t ISO_EPT_8:1;
      uint64_t ISO_EPT_9:1;
      uint64_t ISO_EPT_10:1;
      uint64_t ISO_EPT_11:1;
      uint64_t ISO_EPT_12:1;
      uint64_t ISO_EPT_13:1;
      uint64_t ISO_EPT_14:1;
      uint64_t ISO_EPT_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPFEATURES;

  uint8_t res3[4];

  uint32_t EPTCFG0;
  uint32_t EPTCTLENB0;
  uint32_t EPTCTLDIS0;
  uint32_t EPTCTL0;
  uint8_t res4[4];

  uint32_t EPTSETSTA0;
  uint32_t EPTCLRSTA0;
  uint32_t EPTSTA0;
  uint32_t EPTCFG1;
  uint32_t EPTCTLENB1;
  uint32_t EPTCTLDIS1;
  uint32_t EPTCTL1;
  uint8_t res5[4];

  uint32_t EPTSETSTA1;
  uint32_t EPTCLRSTA1;
  uint32_t EPTSTA1;
  uint32_t EPTCFG2;
  uint32_t EPTCTLENB2;
  uint32_t EPTCTLDIS2;
  uint32_t EPTCTL2;
  uint8_t res6[4];

  uint32_t EPTSETSTA2;
  uint32_t EPTCLRSTA2;
  uint32_t EPTSTA2;
  uint32_t EPTCFG3;
  uint32_t EPTCTLENB3;
  uint32_t EPTCTLDIS3;
  uint32_t EPTCTL3;
  uint8_t res7[4];

  uint32_t EPTSETSTA3;
  uint32_t EPTCLRSTA3;
  uint32_t EPTSTA3;
  uint32_t EPTCFG4;
  uint32_t EPTCTLENB4;
  uint32_t EPTCTLDIS4;
  uint32_t EPTCTL4;
  uint8_t res8[4];

  uint32_t EPTSETSTA4;
  uint32_t EPTCLRSTA4;
  uint32_t EPTSTA4;
  uint32_t EPTCFG5;
  uint32_t EPTCTLENB5;
  uint32_t EPTCTLDIS5;
  uint32_t EPTCTL5;
  uint8_t res9[4];

  uint32_t EPTSETSTA5;
  uint32_t EPTCLRSTA5;
  uint32_t EPTSTA5;
  uint32_t EPTCFG6;
  uint32_t EPTCTLENB6;
  uint32_t EPTCTLDIS6;
  uint32_t EPTCTL6;
  uint8_t res10[4];

  uint32_t EPTSETSTA6;
  uint32_t EPTCLRSTA6;
  uint32_t EPTSTA6;
  uint32_t EPTCFG7;
  uint32_t EPTCTLENB7;
  uint32_t EPTCTLDIS7;
  uint32_t EPTCTL7;
  uint8_t res11[4];

  uint32_t EPTSETSTA7;
  uint32_t EPTCLRSTA7;
  uint32_t EPTSTA7;
  uint32_t EPTCFG8;
  uint32_t EPTCTLENB8;
  uint32_t EPTCTLDIS8;
  uint32_t EPTCTL8;
  uint8_t res12[4];

  uint32_t EPTSETSTA8;
  uint32_t EPTCLRSTA8;
  uint32_t EPTSTA8;
  uint32_t EPTCFG9;
  uint32_t EPTCTLENB9;
  uint32_t EPTCTLDIS9;
  uint32_t EPTCTL9;
  uint8_t res13[4];

  uint32_t EPTSETSTA9;
  uint32_t EPTCLRSTA9;
  uint32_t EPTSTA9;
  uint32_t EPTCFG10;
  uint32_t EPTCTLENB10;
  uint32_t EPTCTLDIS10;
  uint32_t EPTCTL10;
  uint8_t res14[4];

  uint32_t EPTSETSTA10;
  uint32_t EPTCLRSTA10;
  uint32_t EPTSTA10;
  uint32_t EPTCFG11;
  uint32_t EPTCTLENB11;
  uint32_t EPTCTLDIS11;
  uint32_t EPTCTL11;
  uint8_t res15[4];

  uint32_t EPTSETSTA11;
  uint32_t EPTCLRSTA11;
  uint32_t EPTSTA11;
  uint32_t EPTCFG12;
  uint32_t EPTCTLENB12;
  uint32_t EPTCTLDIS12;
  uint32_t EPTCTL12;
  uint8_t res16[4];

  uint32_t EPTSETSTA12;
  uint32_t EPTCLRSTA12;
  uint32_t EPTSTA12;
  uint32_t EPTCFG13;
  uint32_t EPTCTLENB13;
  uint32_t EPTCTLDIS13;
  uint32_t EPTCTL13;
  uint8_t res17[4];

  uint32_t EPTSETSTA13;
  uint32_t EPTCLRSTA13;
  uint32_t EPTSTA13;
  uint32_t EPTCFG14;
  uint32_t EPTCTLENB14;
  uint32_t EPTCTLDIS14;
  uint32_t EPTCTL14;
  uint8_t res18[4];

  uint32_t EPTSETSTA14;
  uint32_t EPTCLRSTA14;
  uint32_t EPTSTA14;
  uint32_t EPTCFG15;
  uint32_t EPTCTLENB15;
  uint32_t EPTCTLDIS15;
  uint32_t EPTCTL15;
  uint8_t res19[4];

  uint32_t EPTSETSTA15;
  uint32_t EPTCLRSTA15;
  uint32_t EPTSTA15;
  uint32_t DMANXTDSC0;
  uint32_t DMAADDRESS0;
  uint32_t DMACONTROL0;
  uint32_t DMASTATUS0;
  uint32_t DMANXTDSC1;
  uint32_t DMAADDRESS1;
  uint32_t DMACONTROL1;
  uint32_t DMASTATUS1;
  uint32_t DMANXTDSC2;
  uint32_t DMAADDRESS2;
  uint32_t DMACONTROL2;
  uint32_t DMASTATUS2;
  uint32_t DMANXTDSC3;
  uint32_t DMAADDRESS3;
  uint32_t DMACONTROL3;
  uint32_t DMASTATUS3;
  uint32_t DMANXTDSC4;
  uint32_t DMAADDRESS4;
  uint32_t DMACONTROL4;
  uint32_t DMASTATUS4;
  uint32_t DMANXTDSC5;
  uint32_t DMAADDRESS5;
  uint32_t DMACONTROL5;
  uint32_t DMASTATUS5;
  uint32_t DMANXTDSC6;
  uint32_t DMAADDRESS6;
  uint32_t DMACONTROL6;
  uint32_t DMASTATUS6;
};

#define UDPHS_0 (*(volatile struct UDPHS_0_tag *) 0xf8030000)

struct USART_USART0_0_tag
{
  uint32_t CR;
  uint32_t MR;
  uint32_t IER;
  uint32_t IDR;
  uint32_t IMR;
  uint32_t CSR;
  uint32_t RHR;
  uint32_t THR;
  uint32_t BRGR;
  uint32_t RTOR;
  uint32_t TTGR;
  uint8_t res0[20];

  uint32_t FIDI;
  uint32_t NER;
  uint8_t res1[4];

  uint32_t IF;
  uint32_t MAN;
  uint8_t res2[144];

  uint32_t WPMR;
  uint32_t WPSR;
};

#define USART_USART0_0 (*(volatile struct USART_USART0_0_tag *) 0xf001c000)

struct USART_USART1_0_tag
{
  uint32_t CR;
  uint32_t MR;
  uint32_t IER;
  uint32_t IDR;
  uint32_t IMR;
  uint32_t CSR;
  uint32_t RHR;
  uint32_t THR;
  uint32_t BRGR;
  uint32_t RTOR;
  uint32_t TTGR;
  uint8_t res0[20];

  uint32_t FIDI;
  uint32_t NER;
  uint8_t res1[4];

  uint32_t IF;
  uint32_t MAN;
  uint8_t res2[144];

  uint32_t WPMR;
  uint32_t WPSR;
};

#define USART_USART1_0 (*(volatile struct USART_USART1_0_tag *) 0xf0020000)

struct USART_USART2_0_tag
{
  uint32_t CR;
  uint32_t MR;
  uint32_t IER;
  uint32_t IDR;
  uint32_t IMR;
  uint32_t CSR;
  uint32_t RHR;
  uint32_t THR;
  uint32_t BRGR;
  uint32_t RTOR;
  uint32_t TTGR;
  uint8_t res0[20];

  uint32_t FIDI;
  uint32_t NER;
  uint8_t res1[4];

  uint32_t IF;
  uint32_t MAN;
  uint8_t res2[144];

  uint32_t WPMR;
  uint32_t WPSR;
};

#define USART_USART2_0 (*(volatile struct USART_USART2_0_tag *) 0xf8020000)

struct USART_USART3_0_tag
{
  uint32_t CR;
  uint32_t MR;
  uint32_t IER;
  uint32_t IDR;
  uint32_t IMR;
  uint32_t CSR;
  uint32_t RHR;
  uint32_t THR;
  uint32_t BRGR;
  uint32_t RTOR;
  uint32_t TTGR;
  uint8_t res0[20];

  uint32_t FIDI;
  uint32_t NER;
  uint8_t res1[4];

  uint32_t IF;
  uint32_t MAN;
  uint8_t res2[144];

  uint32_t WPMR;
  uint32_t WPSR;
};

#define USART_USART3_0 (*(volatile struct USART_USART3_0_tag *) 0xf8024000)

struct WDT_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDRSTT:1;
      uint64_t reservedSpace0:23;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDV:12;
      uint64_t WDFIEN:1;
      uint64_t WDRSTEN:1;
      uint64_t WDRPROC:1;
      uint64_t WDDIS:1;
      uint64_t WDD:12;
      uint64_t WDDBGHLT:1;
      uint64_t WDIDLEHLT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDUNF:1;
      uint64_t WDERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

};

#define WDT_0 (*(volatile struct WDT_0_tag *) 0xfffffe40)

struct ADC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t START:1;
      uint64_t TSCALIB:1;
      uint64_t AUTOCAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TRGSEL:3;
      uint64_t LOWRES:1;
      uint64_t SLEEP:1;
      uint64_t FWUP:1;
      uint64_t reservedSpace1:1;
      uint64_t PRESCAL:8;
      uint64_t STARTUP:4;
      uint64_t SETTLING:2;
      uint64_t reservedSpace2:1;
      uint64_t ANACH:1;
      uint64_t TRACKTIM:4;
      uint64_t reservedSpace3:3;
      uint64_t USEQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USCH1:4;
      uint64_t USCH2:4;
      uint64_t USCH3:4;
      uint64_t USCH4:4;
      uint64_t USCH5:4;
      uint64_t USCH6:4;
      uint64_t USCH7:4;
      uint64_t USCH8:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEQR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USCH9:4;
      uint64_t USCH10:4;
      uint64_t USCH11:4;
      uint64_t USCH12:4;
      uint64_t USCH13:4;
      uint64_t USCH14:4;
      uint64_t USCH15:4;
      uint64_t USCH16:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEQR2;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHER;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHDR;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LDATA:12;
      uint64_t CHNB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC0:1;
      uint64_t EOC1:1;
      uint64_t EOC2:1;
      uint64_t EOC3:1;
      uint64_t EOC4:1;
      uint64_t EOC5:1;
      uint64_t EOC6:1;
      uint64_t EOC7:1;
      uint64_t EOC8:1;
      uint64_t EOC9:1;
      uint64_t EOC10:1;
      uint64_t EOC11:1;
      uint64_t reservedSpace0:8;
      uint64_t XRDY:1;
      uint64_t YRDY:1;
      uint64_t PRDY:1;
      uint64_t EOCAL:1;
      uint64_t DRDY:1;
      uint64_t GOVRE:1;
      uint64_t COMPE:1;
      uint64_t reservedSpace1:2;
      uint64_t PEN:1;
      uint64_t NOPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC0:1;
      uint64_t EOC1:1;
      uint64_t EOC2:1;
      uint64_t EOC3:1;
      uint64_t EOC4:1;
      uint64_t EOC5:1;
      uint64_t EOC6:1;
      uint64_t EOC7:1;
      uint64_t EOC8:1;
      uint64_t EOC9:1;
      uint64_t EOC10:1;
      uint64_t EOC11:1;
      uint64_t reservedSpace0:8;
      uint64_t XRDY:1;
      uint64_t YRDY:1;
      uint64_t PRDY:1;
      uint64_t EOCAL:1;
      uint64_t DRDY:1;
      uint64_t GOVRE:1;
      uint64_t COMPE:1;
      uint64_t reservedSpace1:2;
      uint64_t PEN:1;
      uint64_t NOPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC0:1;
      uint64_t EOC1:1;
      uint64_t EOC2:1;
      uint64_t EOC3:1;
      uint64_t EOC4:1;
      uint64_t EOC5:1;
      uint64_t EOC6:1;
      uint64_t EOC7:1;
      uint64_t EOC8:1;
      uint64_t EOC9:1;
      uint64_t EOC10:1;
      uint64_t EOC11:1;
      uint64_t reservedSpace0:8;
      uint64_t XRDY:1;
      uint64_t YRDY:1;
      uint64_t PRDY:1;
      uint64_t EOCAL:1;
      uint64_t DRDY:1;
      uint64_t GOVRE:1;
      uint64_t COMPE:1;
      uint64_t reservedSpace1:2;
      uint64_t PEN:1;
      uint64_t NOPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC0:1;
      uint64_t EOC1:1;
      uint64_t EOC2:1;
      uint64_t EOC3:1;
      uint64_t EOC4:1;
      uint64_t EOC5:1;
      uint64_t EOC6:1;
      uint64_t EOC7:1;
      uint64_t EOC8:1;
      uint64_t EOC9:1;
      uint64_t EOC10:1;
      uint64_t EOC11:1;
      uint64_t reservedSpace0:8;
      uint64_t XRDY:1;
      uint64_t YRDY:1;
      uint64_t PRDY:1;
      uint64_t EOCAL:1;
      uint64_t DRDY:1;
      uint64_t GOVRE:1;
      uint64_t COMPE:1;
      uint64_t reservedSpace1:2;
      uint64_t PEN:1;
      uint64_t NOPEN:1;
      uint64_t PENS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVRE0:1;
      uint64_t OVRE1:1;
      uint64_t OVRE2:1;
      uint64_t OVRE3:1;
      uint64_t OVRE4:1;
      uint64_t OVRE5:1;
      uint64_t OVRE6:1;
      uint64_t OVRE7:1;
      uint64_t OVRE8:1;
      uint64_t OVRE9:1;
      uint64_t OVRE10:1;
      uint64_t OVRE11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPMODE:2;
      uint64_t reservedSpace0:2;
      uint64_t CMPSEL:4;
      uint64_t reservedSpace1:1;
      uint64_t CMPALL:1;
      uint64_t reservedSpace2:2;
      uint64_t CMPFILTER:2;
      uint64_t reservedSpace3:10;
      uint64_t TAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOWTHRES:12;
      uint64_t reservedSpace0:4;
      uint64_t HIGHTHRES:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GAIN0:2;
      uint64_t GAIN1:2;
      uint64_t GAIN2:2;
      uint64_t GAIN3:2;
      uint64_t GAIN4:2;
      uint64_t GAIN5:2;
      uint64_t GAIN6:2;
      uint64_t GAIN7:2;
      uint64_t GAIN8:2;
      uint64_t GAIN9:2;
      uint64_t GAIN10:2;
      uint64_t GAIN11:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFF0:1;
      uint64_t OFF1:1;
      uint64_t OFF2:1;
      uint64_t OFF3:1;
      uint64_t OFF4:1;
      uint64_t OFF5:1;
      uint64_t OFF6:1;
      uint64_t OFF7:1;
      uint64_t OFF8:1;
      uint64_t OFF9:1;
      uint64_t OFF10:1;
      uint64_t OFF11:1;
      uint64_t reservedSpace0:4;
      uint64_t DIFF0:1;
      uint64_t DIFF1:1;
      uint64_t DIFF2:1;
      uint64_t DIFF3:1;
      uint64_t DIFF4:1;
      uint64_t DIFF5:1;
      uint64_t DIFF6:1;
      uint64_t DIFF7:1;
      uint64_t DIFF8:1;
      uint64_t DIFF9:1;
      uint64_t DIFF10:1;
      uint64_t DIFF11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR;

  uint8_t res2[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PENDETSENS:2;
      uint64_t reservedSpace0:6;
      uint64_t IBCTL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACR;

  uint8_t res3[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSMODE:2;
      uint64_t reservedSpace0:2;
      uint64_t TSAV:2;
      uint64_t reservedSpace1:2;
      uint64_t TSFREQ:4;
      uint64_t reservedSpace2:4;
      uint64_t TSSCTIM:4;
      uint64_t reservedSpace3:2;
      uint64_t NOTSDMA:1;
      uint64_t reservedSpace4:1;
      uint64_t PENDET:1;
      uint64_t reservedSpace5:3;
      uint64_t PENDBC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPOS:12;
      uint64_t reservedSpace0:4;
      uint64_t XSCALE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XPOSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YPOS:12;
      uint64_t reservedSpace0:4;
      uint64_t YSCALE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) YPOSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Z1:12;
      uint64_t reservedSpace0:4;
      uint64_t Z2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRESSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGMOD:3;
      uint64_t reservedSpace0:13;
      uint64_t TRGPER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGR;

  uint8_t res4[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

};

#define ADC_1 (*(volatile struct ADC_1_tag *) 0xf8018000)

struct AES_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t reservedSpace0:7;
      uint64_t SWRST:1;
      uint64_t reservedSpace1:7;
      uint64_t LOADSEED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIPHER:1;
      uint64_t reservedSpace0:3;
      uint64_t PROCDLY:4;
      uint64_t SMOD:2;
      uint64_t KEYSIZE:2;
      uint64_t OPMOD:3;
      uint64_t LOD:1;
      uint64_t CFBS:3;
      uint64_t reservedSpace1:1;
      uint64_t CKEY:4;
      uint64_t CMTYP1:1;
      uint64_t CMTYP2:1;
      uint64_t CMTYP3:1;
      uint64_t CMTYP4:1;
      uint64_t CMTYP5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t URAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t URAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t URAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t URAD:1;
      uint64_t reservedSpace1:3;
      uint64_t URAT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYWR;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDATAR;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODATAR;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IVR;

};

#define AES_1 (*(volatile struct AES_1_tag *) 0xf8038000)

struct AIC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIOR:3;
      uint64_t reservedSpace0:2;
      uint64_t SRCTYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VECTOR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SVR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIQV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQID:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIQ:1;
      uint64_t SYS:1;
      uint64_t PID2:1;
      uint64_t PID3:1;
      uint64_t PID4:1;
      uint64_t PID5:1;
      uint64_t PID6:1;
      uint64_t PID7:1;
      uint64_t PID8:1;
      uint64_t PID9:1;
      uint64_t PID10:1;
      uint64_t PID11:1;
      uint64_t PID12:1;
      uint64_t PID13:1;
      uint64_t PID14:1;
      uint64_t PID15:1;
      uint64_t PID16:1;
      uint64_t PID17:1;
      uint64_t PID18:1;
      uint64_t PID19:1;
      uint64_t PID20:1;
      uint64_t PID21:1;
      uint64_t PID22:1;
      uint64_t PID23:1;
      uint64_t PID24:1;
      uint64_t PID25:1;
      uint64_t PID26:1;
      uint64_t PID27:1;
      uint64_t PID28:1;
      uint64_t PID29:1;
      uint64_t PID30:1;
      uint64_t PID31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID32:1;
      uint64_t PID33:1;
      uint64_t PID34:1;
      uint64_t PID35:1;
      uint64_t PID36:1;
      uint64_t PID37:1;
      uint64_t PID38:1;
      uint64_t PID39:1;
      uint64_t PID40:1;
      uint64_t PID41:1;
      uint64_t PID42:1;
      uint64_t PID43:1;
      uint64_t PID44:1;
      uint64_t PID45:1;
      uint64_t PID46:1;
      uint64_t PID47:1;
      uint64_t PID48:1;
      uint64_t PID49:1;
      uint64_t PID50:1;
      uint64_t PID51:1;
      uint64_t PID52:1;
      uint64_t PID53:1;
      uint64_t PID54:1;
      uint64_t PID55:1;
      uint64_t PID56:1;
      uint64_t PID57:1;
      uint64_t PID58:1;
      uint64_t PID59:1;
      uint64_t PID60:1;
      uint64_t PID61:1;
      uint64_t PID62:1;
      uint64_t PID63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID64:1;
      uint64_t PID65:1;
      uint64_t PID66:1;
      uint64_t PID67:1;
      uint64_t PID68:1;
      uint64_t PID69:1;
      uint64_t PID70:1;
      uint64_t PID71:1;
      uint64_t PID72:1;
      uint64_t PID73:1;
      uint64_t PID74:1;
      uint64_t PID75:1;
      uint64_t PID76:1;
      uint64_t PID77:1;
      uint64_t PID78:1;
      uint64_t PID79:1;
      uint64_t PID80:1;
      uint64_t PID81:1;
      uint64_t PID82:1;
      uint64_t PID83:1;
      uint64_t PID84:1;
      uint64_t PID85:1;
      uint64_t PID86:1;
      uint64_t PID87:1;
      uint64_t PID88:1;
      uint64_t PID89:1;
      uint64_t PID90:1;
      uint64_t PID91:1;
      uint64_t PID92:1;
      uint64_t PID93:1;
      uint64_t PID94:1;
      uint64_t PID95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID96:1;
      uint64_t PID97:1;
      uint64_t PID98:1;
      uint64_t PID99:1;
      uint64_t PID100:1;
      uint64_t PID101:1;
      uint64_t PID102:1;
      uint64_t PID103:1;
      uint64_t PID104:1;
      uint64_t PID105:1;
      uint64_t PID106:1;
      uint64_t PID107:1;
      uint64_t PID108:1;
      uint64_t PID109:1;
      uint64_t PID110:1;
      uint64_t PID111:1;
      uint64_t PID112:1;
      uint64_t PID113:1;
      uint64_t PID114:1;
      uint64_t PID115:1;
      uint64_t PID116:1;
      uint64_t PID117:1;
      uint64_t PID118:1;
      uint64_t PID119:1;
      uint64_t PID120:1;
      uint64_t PID121:1;
      uint64_t PID122:1;
      uint64_t PID123:1;
      uint64_t PID124:1;
      uint64_t PID125:1;
      uint64_t PID126:1;
      uint64_t PID127:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFIQ:1;
      uint64_t NIRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CISR;

  uint32_t EOICR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIVR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FFDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FFS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FFSR;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROT:1;
      uint64_t GMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCR;

  uint8_t res3[116];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

};

#define AIC_1 (*(volatile struct AIC_1_tag *) 0xfffff000)

struct AXIMX_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t REMAP0:1;
      uint64_t REMAP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REMAP;

  uint8_t res0[8140];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPH_ID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPH_ID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPH_ID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPH_ID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPH_ID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPH_ID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPH_ID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPH_ID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP_ID;

  uint8_t res1[12308];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD_ISS:1;
      uint64_t WR_ISS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMIB3_FN_MOD_BM_ISS;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BP_MRG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMIB3_FN_MOD2;

  uint8_t res3[250072];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD_QOS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASIB0_READ_QOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WR_QOS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASIB0_WRITE_QOS;

  uint8_t res4[3872];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD_INCR_OVR:1;
      uint64_t WR_INCR_OVR:1;
      uint64_t LOCK_OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASIB1_FN_MOD_AHB;

  uint8_t res5[212];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD_QOS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASIB1_READ_QOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WR_QOS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASIB1_WRITE_QOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AHB_RD_INCR_OVR:1;
      uint64_t RD_ISS:1;
      uint64_t AHB_WR_INCR_OVR:1;
      uint64_t WR_ISS:1;
      uint64_t AHB_LOCK_OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASIB1_FN_MOD;

};

#define AXIMX_1 (*(volatile struct AXIMX_1_tag *) 0x800000)

struct BSC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOT:8;
      uint64_t reservedSpace0:8;
      uint64_t BOOTKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

};

#define BSC_1 (*(volatile struct BSC_1_tag *) 0xfffffe54)

struct CAN_CAN0_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CANEN:1;
      uint64_t LPM:1;
      uint64_t ABM:1;
      uint64_t OVL:1;
      uint64_t TEOF:1;
      uint64_t TTM:1;
      uint64_t TIMFRZ:1;
      uint64_t DRPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
      uint64_t RBSY:1;
      uint64_t TBSY:1;
      uint64_t OVLSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHASE2:3;
      uint64_t reservedSpace0:1;
      uint64_t PHASE1:3;
      uint64_t reservedSpace1:1;
      uint64_t PROPAG:3;
      uint64_t reservedSpace2:1;
      uint64_t SJW:2;
      uint64_t reservedSpace3:2;
      uint64_t BRP:7;
      uint64_t reservedSpace4:1;
      uint64_t SMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMESTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REC:8;
      uint64_t reservedSpace0:8;
      uint64_t TEC:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:23;
      uint64_t TIMRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACR;

  uint8_t res0[184];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

  uint8_t res1[276];

  uint32_t MMR0;
  uint32_t MAM0;
  uint32_t MID0;
  uint32_t MFID0;
  uint32_t MSR0;
  uint32_t MDL0;
  uint32_t MDH0;
  uint32_t MCR0;
  uint32_t MMR1;
  uint32_t MAM1;
  uint32_t MID1;
  uint32_t MFID1;
  uint32_t MSR1;
  uint32_t MDL1;
  uint32_t MDH1;
  uint32_t MCR1;
  uint32_t MMR2;
  uint32_t MAM2;
  uint32_t MID2;
  uint32_t MFID2;
  uint32_t MSR2;
  uint32_t MDL2;
  uint32_t MDH2;
  uint32_t MCR2;
  uint32_t MMR3;
  uint32_t MAM3;
  uint32_t MID3;
  uint32_t MFID3;
  uint32_t MSR3;
  uint32_t MDL3;
  uint32_t MDH3;
  uint32_t MCR3;
  uint32_t MMR4;
  uint32_t MAM4;
  uint32_t MID4;
  uint32_t MFID4;
  uint32_t MSR4;
  uint32_t MDL4;
  uint32_t MDH4;
  uint32_t MCR4;
  uint32_t MMR5;
  uint32_t MAM5;
  uint32_t MID5;
  uint32_t MFID5;
  uint32_t MSR5;
  uint32_t MDL5;
  uint32_t MDH5;
  uint32_t MCR5;
  uint32_t MMR6;
  uint32_t MAM6;
  uint32_t MID6;
  uint32_t MFID6;
  uint32_t MSR6;
  uint32_t MDL6;
  uint32_t MDH6;
  uint32_t MCR6;
  uint32_t MMR7;
  uint32_t MAM7;
  uint32_t MID7;
  uint32_t MFID7;
  uint32_t MSR7;
  uint32_t MDL7;
  uint32_t MDH7;
  uint32_t MCR7;
};

#define CAN_CAN0_1 (*(volatile struct CAN_CAN0_1_tag *) 0xf000c000)

struct CAN_CAN1_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CANEN:1;
      uint64_t LPM:1;
      uint64_t ABM:1;
      uint64_t OVL:1;
      uint64_t TEOF:1;
      uint64_t TTM:1;
      uint64_t TIMFRZ:1;
      uint64_t DRPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
      uint64_t RBSY:1;
      uint64_t TBSY:1;
      uint64_t OVLSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHASE2:3;
      uint64_t reservedSpace0:1;
      uint64_t PHASE1:3;
      uint64_t reservedSpace1:1;
      uint64_t PROPAG:3;
      uint64_t reservedSpace2:1;
      uint64_t SJW:2;
      uint64_t reservedSpace3:2;
      uint64_t BRP:7;
      uint64_t reservedSpace4:1;
      uint64_t SMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMESTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REC:8;
      uint64_t reservedSpace0:8;
      uint64_t TEC:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:23;
      uint64_t TIMRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACR;

  uint8_t res0[184];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

  uint8_t res1[276];

  uint32_t MMR0;
  uint32_t MAM0;
  uint32_t MID0;
  uint32_t MFID0;
  uint32_t MSR0;
  uint32_t MDL0;
  uint32_t MDH0;
  uint32_t MCR0;
  uint32_t MMR1;
  uint32_t MAM1;
  uint32_t MID1;
  uint32_t MFID1;
  uint32_t MSR1;
  uint32_t MDL1;
  uint32_t MDH1;
  uint32_t MCR1;
  uint32_t MMR2;
  uint32_t MAM2;
  uint32_t MID2;
  uint32_t MFID2;
  uint32_t MSR2;
  uint32_t MDL2;
  uint32_t MDH2;
  uint32_t MCR2;
  uint32_t MMR3;
  uint32_t MAM3;
  uint32_t MID3;
  uint32_t MFID3;
  uint32_t MSR3;
  uint32_t MDL3;
  uint32_t MDH3;
  uint32_t MCR3;
  uint32_t MMR4;
  uint32_t MAM4;
  uint32_t MID4;
  uint32_t MFID4;
  uint32_t MSR4;
  uint32_t MDL4;
  uint32_t MDH4;
  uint32_t MCR4;
  uint32_t MMR5;
  uint32_t MAM5;
  uint32_t MID5;
  uint32_t MFID5;
  uint32_t MSR5;
  uint32_t MDL5;
  uint32_t MDH5;
  uint32_t MCR5;
  uint32_t MMR6;
  uint32_t MAM6;
  uint32_t MID6;
  uint32_t MFID6;
  uint32_t MSR6;
  uint32_t MDL6;
  uint32_t MDH6;
  uint32_t MCR6;
  uint32_t MMR7;
  uint32_t MAM7;
  uint32_t MID7;
  uint32_t MFID7;
  uint32_t MSR7;
  uint32_t MDL7;
  uint32_t MDH7;
  uint32_t MCR7;
};

#define CAN_CAN1_1 (*(volatile struct CAN_CAN1_1_tag *) 0xf8010000)

struct DBGU_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RSTRX:1;
      uint64_t RSTTX:1;
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t RSTSTA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t PAR:3;
      uint64_t reservedSpace1:2;
      uint64_t CHMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:20;
      uint64_t COMMTX:1;
      uint64_t COMMRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:20;
      uint64_t COMMTX:1;
      uint64_t COMMRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:20;
      uint64_t COMMTX:1;
      uint64_t COMMRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:20;
      uint64_t COMMTX:1;
      uint64_t COMMRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRGR;

  uint8_t res0[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:5;
      uint64_t EPROC:3;
      uint64_t NVPSIZ:4;
      uint64_t NVPSIZ2:4;
      uint64_t SRAMSIZ:4;
      uint64_t ARCH:8;
      uint64_t NVPTYP:3;
      uint64_t EXT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FNTRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FNR;

};

#define DBGU_1 (*(volatile struct DBGU_1_tag *) 0xffffee00)

struct DMAC_DMAC0_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t ARB_CFG:1;
      uint64_t reservedSpace1:3;
      uint64_t DICEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSREQ0:1;
      uint64_t DSREQ0:1;
      uint64_t SSREQ1:1;
      uint64_t DSREQ1:1;
      uint64_t SSREQ2:1;
      uint64_t DSREQ2:1;
      uint64_t SSREQ3:1;
      uint64_t DSREQ3:1;
      uint64_t SSREQ4:1;
      uint64_t DSREQ4:1;
      uint64_t SSREQ5:1;
      uint64_t DSREQ5:1;
      uint64_t SSREQ6:1;
      uint64_t DSREQ6:1;
      uint64_t SSREQ7:1;
      uint64_t DSREQ7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCREQ0:1;
      uint64_t DCREQ0:1;
      uint64_t SCREQ1:1;
      uint64_t DCREQ1:1;
      uint64_t SCREQ2:1;
      uint64_t DCREQ2:1;
      uint64_t SCREQ3:1;
      uint64_t DCREQ3:1;
      uint64_t SCREQ4:1;
      uint64_t DCREQ4:1;
      uint64_t SCREQ5:1;
      uint64_t DCREQ5:1;
      uint64_t SCREQ6:1;
      uint64_t DCREQ6:1;
      uint64_t SCREQ7:1;
      uint64_t DCREQ7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLAST0:1;
      uint64_t DLAST0:1;
      uint64_t SLAST1:1;
      uint64_t DLAST1:1;
      uint64_t SLAST2:1;
      uint64_t DLAST2:1;
      uint64_t SLAST3:1;
      uint64_t DLAST3:1;
      uint64_t SLAST4:1;
      uint64_t DLAST4:1;
      uint64_t SLAST5:1;
      uint64_t DLAST5:1;
      uint64_t SLAST6:1;
      uint64_t DLAST6:1;
      uint64_t SLAST7:1;
      uint64_t DLAST7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LAST;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t BTC6:1;
      uint64_t BTC7:1;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t CBTC6:1;
      uint64_t CBTC7:1;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
      uint64_t ERR6:1;
      uint64_t ERR7:1;
      uint64_t DICERR0:1;
      uint64_t DICERR1:1;
      uint64_t DICERR2:1;
      uint64_t DICERR3:1;
      uint64_t DICERR4:1;
      uint64_t DICERR5:1;
      uint64_t DICERR6:1;
      uint64_t DICERR7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EBCIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t BTC6:1;
      uint64_t BTC7:1;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t CBTC6:1;
      uint64_t CBTC7:1;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
      uint64_t ERR6:1;
      uint64_t ERR7:1;
      uint64_t DICERR0:1;
      uint64_t DICERR1:1;
      uint64_t DICERR2:1;
      uint64_t DICERR3:1;
      uint64_t DICERR4:1;
      uint64_t DICERR5:1;
      uint64_t DICERR6:1;
      uint64_t DICERR7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EBCIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t BTC6:1;
      uint64_t BTC7:1;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t CBTC6:1;
      uint64_t CBTC7:1;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
      uint64_t ERR6:1;
      uint64_t ERR7:1;
      uint64_t DICERR0:1;
      uint64_t DICERR1:1;
      uint64_t DICERR2:1;
      uint64_t DICERR3:1;
      uint64_t DICERR4:1;
      uint64_t DICERR5:1;
      uint64_t DICERR6:1;
      uint64_t DICERR7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EBCIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t BTC6:1;
      uint64_t BTC7:1;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t CBTC6:1;
      uint64_t CBTC7:1;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
      uint64_t ERR6:1;
      uint64_t ERR7:1;
      uint64_t DICERR0:1;
      uint64_t DICERR1:1;
      uint64_t DICERR2:1;
      uint64_t DICERR3:1;
      uint64_t DICERR4:1;
      uint64_t DICERR5:1;
      uint64_t DICERR6:1;
      uint64_t DICERR7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EBCISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA0:1;
      uint64_t ENA1:1;
      uint64_t ENA2:1;
      uint64_t ENA3:1;
      uint64_t ENA4:1;
      uint64_t ENA5:1;
      uint64_t ENA6:1;
      uint64_t ENA7:1;
      uint64_t SUSP0:1;
      uint64_t SUSP1:1;
      uint64_t SUSP2:1;
      uint64_t SUSP3:1;
      uint64_t SUSP4:1;
      uint64_t SUSP5:1;
      uint64_t SUSP6:1;
      uint64_t SUSP7:1;
      uint64_t reservedSpace0:8;
      uint64_t KEEP0:1;
      uint64_t KEEP1:1;
      uint64_t KEEP2:1;
      uint64_t KEEP3:1;
      uint64_t KEEP4:1;
      uint64_t KEEP5:1;
      uint64_t KEEP6:1;
      uint64_t KEEP7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIS0:1;
      uint64_t DIS1:1;
      uint64_t DIS2:1;
      uint64_t DIS3:1;
      uint64_t DIS4:1;
      uint64_t DIS5:1;
      uint64_t DIS6:1;
      uint64_t DIS7:1;
      uint64_t RES0:1;
      uint64_t RES1:1;
      uint64_t RES2:1;
      uint64_t RES3:1;
      uint64_t RES4:1;
      uint64_t RES5:1;
      uint64_t RES6:1;
      uint64_t RES7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA0:1;
      uint64_t ENA1:1;
      uint64_t ENA2:1;
      uint64_t ENA3:1;
      uint64_t ENA4:1;
      uint64_t ENA5:1;
      uint64_t ENA6:1;
      uint64_t ENA7:1;
      uint64_t SUSP0:1;
      uint64_t SUSP1:1;
      uint64_t SUSP2:1;
      uint64_t SUSP3:1;
      uint64_t SUSP4:1;
      uint64_t SUSP5:1;
      uint64_t SUSP6:1;
      uint64_t SUSP7:1;
      uint64_t EMPT0:1;
      uint64_t EMPT1:1;
      uint64_t EMPT2:1;
      uint64_t EMPT3:1;
      uint64_t EMPT4:1;
      uint64_t EMPT5:1;
      uint64_t EMPT6:1;
      uint64_t EMPT7:1;
      uint64_t STAL0:1;
      uint64_t STAL1:1;
      uint64_t STAL2:1;
      uint64_t STAL3:1;
      uint64_t STAL4:1;
      uint64_t STAL5:1;
      uint64_t STAL6:1;
      uint64_t STAL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSR;

  uint8_t res1[8];

  uint32_t SADDR0;
  uint32_t DADDR0;
  uint32_t DSCR0;
  uint32_t CTRLA0;
  uint32_t CTRLB0;
  uint32_t CFG0;
  uint32_t SPIP0;
  uint32_t DPIP0;
  uint8_t res2[8];

  uint32_t SADDR1;
  uint32_t DADDR1;
  uint32_t DSCR1;
  uint32_t CTRLA1;
  uint32_t CTRLB1;
  uint32_t CFG1;
  uint32_t SPIP1;
  uint32_t DPIP1;
  uint8_t res3[8];

  uint32_t SADDR2;
  uint32_t DADDR2;
  uint32_t DSCR2;
  uint32_t CTRLA2;
  uint32_t CTRLB2;
  uint32_t CFG2;
  uint32_t SPIP2;
  uint32_t DPIP2;
  uint8_t res4[8];

  uint32_t SADDR3;
  uint32_t DADDR3;
  uint32_t DSCR3;
  uint32_t CTRLA3;
  uint32_t CTRLB3;
  uint32_t CFG3;
  uint32_t SPIP3;
  uint32_t DPIP3;
  uint8_t res5[8];

  uint32_t SADDR4;
  uint32_t DADDR4;
  uint32_t DSCR4;
  uint32_t CTRLA4;
  uint32_t CTRLB4;
  uint32_t CFG4;
  uint32_t SPIP4;
  uint32_t DPIP4;
  uint8_t res6[8];

  uint32_t SADDR5;
  uint32_t DADDR5;
  uint32_t DSCR5;
  uint32_t CTRLA5;
  uint32_t CTRLB5;
  uint32_t CFG5;
  uint32_t SPIP5;
  uint32_t DPIP5;
  uint8_t res7[8];

  uint32_t SADDR6;
  uint32_t DADDR6;
  uint32_t DSCR6;
  uint32_t CTRLA6;
  uint32_t CTRLB6;
  uint32_t CFG6;
  uint32_t SPIP6;
  uint32_t DPIP6;
  uint8_t res8[8];

  uint32_t SADDR7;
  uint32_t DADDR7;
  uint32_t DSCR7;
  uint32_t CTRLA7;
  uint32_t CTRLB7;
  uint32_t CFG7;
  uint32_t SPIP7;
  uint32_t DPIP7;
  uint8_t res9[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

};

#define DMAC_DMAC0_1 (*(volatile struct DMAC_DMAC0_1_tag *) 0xffffe600)

struct DMAC_DMAC1_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t ARB_CFG:1;
      uint64_t reservedSpace1:3;
      uint64_t DICEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSREQ0:1;
      uint64_t DSREQ0:1;
      uint64_t SSREQ1:1;
      uint64_t DSREQ1:1;
      uint64_t SSREQ2:1;
      uint64_t DSREQ2:1;
      uint64_t SSREQ3:1;
      uint64_t DSREQ3:1;
      uint64_t SSREQ4:1;
      uint64_t DSREQ4:1;
      uint64_t SSREQ5:1;
      uint64_t DSREQ5:1;
      uint64_t SSREQ6:1;
      uint64_t DSREQ6:1;
      uint64_t SSREQ7:1;
      uint64_t DSREQ7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCREQ0:1;
      uint64_t DCREQ0:1;
      uint64_t SCREQ1:1;
      uint64_t DCREQ1:1;
      uint64_t SCREQ2:1;
      uint64_t DCREQ2:1;
      uint64_t SCREQ3:1;
      uint64_t DCREQ3:1;
      uint64_t SCREQ4:1;
      uint64_t DCREQ4:1;
      uint64_t SCREQ5:1;
      uint64_t DCREQ5:1;
      uint64_t SCREQ6:1;
      uint64_t DCREQ6:1;
      uint64_t SCREQ7:1;
      uint64_t DCREQ7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLAST0:1;
      uint64_t DLAST0:1;
      uint64_t SLAST1:1;
      uint64_t DLAST1:1;
      uint64_t SLAST2:1;
      uint64_t DLAST2:1;
      uint64_t SLAST3:1;
      uint64_t DLAST3:1;
      uint64_t SLAST4:1;
      uint64_t DLAST4:1;
      uint64_t SLAST5:1;
      uint64_t DLAST5:1;
      uint64_t SLAST6:1;
      uint64_t DLAST6:1;
      uint64_t SLAST7:1;
      uint64_t DLAST7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LAST;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t BTC6:1;
      uint64_t BTC7:1;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t CBTC6:1;
      uint64_t CBTC7:1;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
      uint64_t ERR6:1;
      uint64_t ERR7:1;
      uint64_t DICERR0:1;
      uint64_t DICERR1:1;
      uint64_t DICERR2:1;
      uint64_t DICERR3:1;
      uint64_t DICERR4:1;
      uint64_t DICERR5:1;
      uint64_t DICERR6:1;
      uint64_t DICERR7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EBCIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t BTC6:1;
      uint64_t BTC7:1;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t CBTC6:1;
      uint64_t CBTC7:1;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
      uint64_t ERR6:1;
      uint64_t ERR7:1;
      uint64_t DICERR0:1;
      uint64_t DICERR1:1;
      uint64_t DICERR2:1;
      uint64_t DICERR3:1;
      uint64_t DICERR4:1;
      uint64_t DICERR5:1;
      uint64_t DICERR6:1;
      uint64_t DICERR7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EBCIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t BTC6:1;
      uint64_t BTC7:1;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t CBTC6:1;
      uint64_t CBTC7:1;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
      uint64_t ERR6:1;
      uint64_t ERR7:1;
      uint64_t DICERR0:1;
      uint64_t DICERR1:1;
      uint64_t DICERR2:1;
      uint64_t DICERR3:1;
      uint64_t DICERR4:1;
      uint64_t DICERR5:1;
      uint64_t DICERR6:1;
      uint64_t DICERR7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EBCIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t BTC6:1;
      uint64_t BTC7:1;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t CBTC6:1;
      uint64_t CBTC7:1;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
      uint64_t ERR6:1;
      uint64_t ERR7:1;
      uint64_t DICERR0:1;
      uint64_t DICERR1:1;
      uint64_t DICERR2:1;
      uint64_t DICERR3:1;
      uint64_t DICERR4:1;
      uint64_t DICERR5:1;
      uint64_t DICERR6:1;
      uint64_t DICERR7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EBCISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA0:1;
      uint64_t ENA1:1;
      uint64_t ENA2:1;
      uint64_t ENA3:1;
      uint64_t ENA4:1;
      uint64_t ENA5:1;
      uint64_t ENA6:1;
      uint64_t ENA7:1;
      uint64_t SUSP0:1;
      uint64_t SUSP1:1;
      uint64_t SUSP2:1;
      uint64_t SUSP3:1;
      uint64_t SUSP4:1;
      uint64_t SUSP5:1;
      uint64_t SUSP6:1;
      uint64_t SUSP7:1;
      uint64_t reservedSpace0:8;
      uint64_t KEEP0:1;
      uint64_t KEEP1:1;
      uint64_t KEEP2:1;
      uint64_t KEEP3:1;
      uint64_t KEEP4:1;
      uint64_t KEEP5:1;
      uint64_t KEEP6:1;
      uint64_t KEEP7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIS0:1;
      uint64_t DIS1:1;
      uint64_t DIS2:1;
      uint64_t DIS3:1;
      uint64_t DIS4:1;
      uint64_t DIS5:1;
      uint64_t DIS6:1;
      uint64_t DIS7:1;
      uint64_t RES0:1;
      uint64_t RES1:1;
      uint64_t RES2:1;
      uint64_t RES3:1;
      uint64_t RES4:1;
      uint64_t RES5:1;
      uint64_t RES6:1;
      uint64_t RES7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA0:1;
      uint64_t ENA1:1;
      uint64_t ENA2:1;
      uint64_t ENA3:1;
      uint64_t ENA4:1;
      uint64_t ENA5:1;
      uint64_t ENA6:1;
      uint64_t ENA7:1;
      uint64_t SUSP0:1;
      uint64_t SUSP1:1;
      uint64_t SUSP2:1;
      uint64_t SUSP3:1;
      uint64_t SUSP4:1;
      uint64_t SUSP5:1;
      uint64_t SUSP6:1;
      uint64_t SUSP7:1;
      uint64_t EMPT0:1;
      uint64_t EMPT1:1;
      uint64_t EMPT2:1;
      uint64_t EMPT3:1;
      uint64_t EMPT4:1;
      uint64_t EMPT5:1;
      uint64_t EMPT6:1;
      uint64_t EMPT7:1;
      uint64_t STAL0:1;
      uint64_t STAL1:1;
      uint64_t STAL2:1;
      uint64_t STAL3:1;
      uint64_t STAL4:1;
      uint64_t STAL5:1;
      uint64_t STAL6:1;
      uint64_t STAL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSR;

  uint8_t res1[8];

  uint32_t SADDR0;
  uint32_t DADDR0;
  uint32_t DSCR0;
  uint32_t CTRLA0;
  uint32_t CTRLB0;
  uint32_t CFG0;
  uint32_t SPIP0;
  uint32_t DPIP0;
  uint8_t res2[8];

  uint32_t SADDR1;
  uint32_t DADDR1;
  uint32_t DSCR1;
  uint32_t CTRLA1;
  uint32_t CTRLB1;
  uint32_t CFG1;
  uint32_t SPIP1;
  uint32_t DPIP1;
  uint8_t res3[8];

  uint32_t SADDR2;
  uint32_t DADDR2;
  uint32_t DSCR2;
  uint32_t CTRLA2;
  uint32_t CTRLB2;
  uint32_t CFG2;
  uint32_t SPIP2;
  uint32_t DPIP2;
  uint8_t res4[8];

  uint32_t SADDR3;
  uint32_t DADDR3;
  uint32_t DSCR3;
  uint32_t CTRLA3;
  uint32_t CTRLB3;
  uint32_t CFG3;
  uint32_t SPIP3;
  uint32_t DPIP3;
  uint8_t res5[8];

  uint32_t SADDR4;
  uint32_t DADDR4;
  uint32_t DSCR4;
  uint32_t CTRLA4;
  uint32_t CTRLB4;
  uint32_t CFG4;
  uint32_t SPIP4;
  uint32_t DPIP4;
  uint8_t res6[8];

  uint32_t SADDR5;
  uint32_t DADDR5;
  uint32_t DSCR5;
  uint32_t CTRLA5;
  uint32_t CTRLB5;
  uint32_t CFG5;
  uint32_t SPIP5;
  uint32_t DPIP5;
  uint8_t res7[8];

  uint32_t SADDR6;
  uint32_t DADDR6;
  uint32_t DSCR6;
  uint32_t CTRLA6;
  uint32_t CTRLB6;
  uint32_t CFG6;
  uint32_t SPIP6;
  uint32_t DPIP6;
  uint8_t res8[8];

  uint32_t SADDR7;
  uint32_t DADDR7;
  uint32_t DSCR7;
  uint32_t CTRLA7;
  uint32_t CTRLB7;
  uint32_t CFG7;
  uint32_t SPIP7;
  uint32_t DPIP7;
  uint8_t res9[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

};

#define DMAC_DMAC1_1 (*(volatile struct DMAC_DMAC1_1_tag *) 0xffffe800)

struct EMAC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LB:1;
      uint64_t LLB:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t MPE:1;
      uint64_t CLRSTAT:1;
      uint64_t INCSTAT:1;
      uint64_t WESTAT:1;
      uint64_t BP:1;
      uint64_t TSTART:1;
      uint64_t THALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPD:1;
      uint64_t FD:1;
      uint64_t reservedSpace0:1;
      uint64_t JFRAME:1;
      uint64_t CAF:1;
      uint64_t NBC:1;
      uint64_t MTI:1;
      uint64_t UNI:1;
      uint64_t BIG:1;
      uint64_t reservedSpace1:1;
      uint64_t CLK:2;
      uint64_t RTY:1;
      uint64_t PAE:1;
      uint64_t RBOF:2;
      uint64_t RLCE:1;
      uint64_t DRFCS:1;
      uint64_t EFRHD:1;
      uint64_t IRXFCS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MDIO:1;
      uint64_t IDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NSR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UBR:1;
      uint64_t COL:1;
      uint64_t RLES:1;
      uint64_t TGO:1;
      uint64_t BEX:1;
      uint64_t COMP:1;
      uint64_t UND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBQP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBQP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNA:1;
      uint64_t REC:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFD:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUND:1;
      uint64_t RLEX:1;
      uint64_t TXERR:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFRE:1;
      uint64_t PTZ:1;
      uint64_t WOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFD:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUND:1;
      uint64_t RLE:1;
      uint64_t TXERR:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFR:1;
      uint64_t PTZ:1;
      uint64_t WOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFD:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUND:1;
      uint64_t RLE:1;
      uint64_t TXERR:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFR:1;
      uint64_t PTZ:1;
      uint64_t WOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFD:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUND:1;
      uint64_t RLE:1;
      uint64_t TXERR:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFR:1;
      uint64_t PTZ:1;
      uint64_t WOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t CODE:2;
      uint64_t REGA:5;
      uint64_t PHYA:5;
      uint64_t RW:2;
      uint64_t SOF:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FROK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTOK:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FROK:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCSE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCOL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXCOL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TUND:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TUND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RRE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RRE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ROVR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RJB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RJA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RLFM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLE;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HRT;

  uint32_t SA1B;
  uint32_t SA1T;
  uint32_t SA2B;
  uint32_t SA2T;
  uint32_t SA3B;
  uint32_t SA3T;
  uint32_t SA4B;
  uint32_t SA4T;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TID;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMII:1;
      uint64_t CLKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USRIO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IP:16;
      uint64_t MAG:1;
      uint64_t ARP:1;
      uint64_t SA1:1;
      uint64_t MTI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WOL;

};

#define EMAC_1 (*(volatile struct EMAC_1_tag *) 0xf802c000)

struct FUSE_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRQ:1;
      uint64_t RRQ:1;
      uint64_t reservedSpace0:6;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WS:1;
      uint64_t RS:1;
      uint64_t reservedSpace0:6;
      uint64_t WSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUSE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

};

#define FUSE_1 (*(volatile struct FUSE_1_tag *) 0xffffe400)

struct GMAC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LB:1;
      uint64_t LBL:1;
      uint64_t RXEN:1;
      uint64_t TXEN:1;
      uint64_t MPE:1;
      uint64_t CLRSTAT:1;
      uint64_t INCSTAT:1;
      uint64_t WESTAT:1;
      uint64_t BP:1;
      uint64_t TSTART:1;
      uint64_t THALT:1;
      uint64_t TXPF:1;
      uint64_t TXZQPF:1;
      uint64_t reservedSpace0:1;
      uint64_t RDS:1;
      uint64_t SRTSM:1;
      uint64_t ENPBPR:1;
      uint64_t TXPBPF:1;
      uint64_t FNP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPD:1;
      uint64_t FD:1;
      uint64_t DNVLAN:1;
      uint64_t JFRAME:1;
      uint64_t CAF:1;
      uint64_t NBC:1;
      uint64_t MTIHEN:1;
      uint64_t UNIHEN:1;
      uint64_t MAXFS:1;
      uint64_t reservedSpace0:1;
      uint64_t GBE:1;
      uint64_t PIS:1;
      uint64_t RTY:1;
      uint64_t PEN:1;
      uint64_t RXBUFO:2;
      uint64_t LFERD:1;
      uint64_t RFCS:1;
      uint64_t CLK:3;
      uint64_t DBW:2;
      uint64_t DCPF:1;
      uint64_t RXCOEN:1;
      uint64_t EFRHD:1;
      uint64_t IRXFCS:1;
      uint64_t reservedSpace1:1;
      uint64_t IPGSEN:1;
      uint64_t RXBP:1;
      uint64_t IRXER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MDIO:1;
      uint64_t IDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RGMII:1;
      uint64_t reservedSpace0:5;
      uint64_t HDFC:1;
      uint64_t BPDG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FBLDO:5;
      uint64_t reservedSpace0:1;
      uint64_t ESMA:1;
      uint64_t ESPA:1;
      uint64_t RXBMS:2;
      uint64_t TXPBMS:1;
      uint64_t TXCOEN:1;
      uint64_t reservedSpace1:4;
      uint64_t DRBS:8;
      uint64_t DDRP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UBR:1;
      uint64_t COL:1;
      uint64_t RLE:1;
      uint64_t TXGO:1;
      uint64_t TFC:1;
      uint64_t TXCOMP:1;
      uint64_t UND:1;
      uint64_t LCO:1;
      uint64_t HRESP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBQB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBQB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNA:1;
      uint64_t REC:1;
      uint64_t RXOVR:1;
      uint64_t HNO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFS:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUR:1;
      uint64_t RLEX:1;
      uint64_t TFC:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFNZ:1;
      uint64_t PTZ:1;
      uint64_t PFTR:1;
      uint64_t EXINT:1;
      uint64_t reservedSpace1:2;
      uint64_t DRQFR:1;
      uint64_t SFR:1;
      uint64_t DRQFT:1;
      uint64_t SFT:1;
      uint64_t PDRQFR:1;
      uint64_t PDRSFR:1;
      uint64_t PDRQFT:1;
      uint64_t PDRSFT:1;
      uint64_t SRI:1;
      uint64_t reservedSpace2:1;
      uint64_t WOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFS:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUR:1;
      uint64_t RLEX:1;
      uint64_t TFC:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFNZ:1;
      uint64_t PTZ:1;
      uint64_t PFTR:1;
      uint64_t EXINT:1;
      uint64_t reservedSpace1:2;
      uint64_t DRQFR:1;
      uint64_t SFR:1;
      uint64_t DRQFT:1;
      uint64_t SFT:1;
      uint64_t PDRQFR:1;
      uint64_t PDRSFR:1;
      uint64_t PDRQFT:1;
      uint64_t PDRSFT:1;
      uint64_t SRI:1;
      uint64_t reservedSpace2:1;
      uint64_t WOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFS:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUR:1;
      uint64_t RLEX:1;
      uint64_t TFC:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFNZ:1;
      uint64_t PTZ:1;
      uint64_t PFTR:1;
      uint64_t EXINT:1;
      uint64_t reservedSpace1:2;
      uint64_t DRQFR:1;
      uint64_t SFR:1;
      uint64_t DRQFT:1;
      uint64_t SFT:1;
      uint64_t PDRQFR:1;
      uint64_t PDRSFR:1;
      uint64_t PDRQFT:1;
      uint64_t PDRSFT:1;
      uint64_t SRI:1;
      uint64_t reservedSpace2:1;
      uint64_t WOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFS:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUR:1;
      uint64_t RLEX:1;
      uint64_t TFC:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFNZ:1;
      uint64_t PTZ:1;
      uint64_t PFTR:1;
      uint64_t EXINT:1;
      uint64_t reservedSpace1:2;
      uint64_t DRQFR:1;
      uint64_t SFR:1;
      uint64_t DRQFT:1;
      uint64_t SFT:1;
      uint64_t PDRQFR:1;
      uint64_t PDRSFR:1;
      uint64_t PDRQFT:1;
      uint64_t PDRSFT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t WTN:2;
      uint64_t REGA:5;
      uint64_t PHYA:5;
      uint64_t OP:2;
      uint64_t CLTTO:1;
      uint64_t WZO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPQ:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RPQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPQ:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPB1ADR:12;
      uint64_t reservedSpace0:19;
      uint64_t ENTXP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPSF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPB1ADR:12;
      uint64_t reservedSpace0:19;
      uint64_t ENRXP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RPSF;

  uint8_t res0[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HRT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAB1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAB2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAB3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAB4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIDM;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IP:16;
      uint64_t MAG:1;
      uint64_t ARP:1;
      uint64_t SA1:1;
      uint64_t MTI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLAN_TYPE:16;
      uint64_t reservedSpace0:15;
      uint64_t ESVLAN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SVLAN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEV:8;
      uint64_t PQ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPFCP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMB1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMT1;

  uint8_t res2[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTLO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTHI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCFT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MFT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFTX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BFT64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBFT127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBFT255;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBFT511;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBFT1023;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBFT1518;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTBFT1518;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXUNR:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCOL:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCOL:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XCOL:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCOL:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEFT:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ORLO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ORHI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFRX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFRX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFRX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFRX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BFR64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFRX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBFR127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFRX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBFR255;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFRX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBFR511;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFRX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBFR1023;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFRX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBFR1518;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFRX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMXBFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UFRX:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFRX:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JRX:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCKR:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFER:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFFE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXSE:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AER:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRER:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RRE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXOVR:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCKER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IHCE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCKER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCKER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UCE;

  uint8_t res3[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VTS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VTN:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSSN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TNS:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITDT:30;
      uint64_t reservedSpace0:1;
      uint64_t ADJ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNS:8;
      uint64_t ACNS:8;
      uint64_t NIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUD:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFTN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUD:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFRN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEFTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUD:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEFTN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEFRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUD:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEFRN;

  uint8_t res4[512];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t reservedSpace1:2;
      uint64_t RLEX:1;
      uint64_t TFC:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace2:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISRPQ;

  uint8_t res5[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TXBQBA:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBQBAPQ;

  uint8_t res6[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RXBQBA:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBQBAPQ;

  uint8_t res7[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RBS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBSRPQ;

  uint8_t res8[92];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QNB:4;
      uint64_t DSTCM:8;
      uint64_t UDPM:16;
      uint64_t DSTCE:1;
      uint64_t UDPE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST1RPQ;

  uint8_t res9[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QNB:4;
      uint64_t VLANP:4;
      uint64_t VLANE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST2RPQ;

  uint8_t res10[188];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t reservedSpace1:2;
      uint64_t RLEX:1;
      uint64_t TFC:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace2:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IERPQ;

  uint8_t res11[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t reservedSpace1:2;
      uint64_t RLEX:1;
      uint64_t TFC:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace2:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDRPQ;

  uint8_t res12[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t reservedSpace1:2;
      uint64_t RLEX:1;
      uint64_t AHB:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace2:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMRPQ;

};

#define GMAC_1 (*(volatile struct GMAC_1_tag *) 0xf0028000)

struct GPBR_1_tag
{
  uint32_t GPBR;
};

#define GPBR_1 (*(volatile struct GPBR_1_tag *) 0xfffffe60)

struct HSMCI_HSMCI0_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCIEN:1;
      uint64_t MCIDIS:1;
      uint64_t PWSEN:1;
      uint64_t PWSDIS:1;
      uint64_t reservedSpace0:3;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKDIV:8;
      uint64_t PWSDIV:3;
      uint64_t RDPROOF:1;
      uint64_t WRPROOF:1;
      uint64_t FBYTE:1;
      uint64_t PADV:1;
      uint64_t reservedSpace0:1;
      uint64_t CLKODD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTOCYC:4;
      uint64_t DTOMUL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCSEL:2;
      uint64_t reservedSpace0:4;
      uint64_t SDCBUS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ARGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDNB:6;
      uint64_t RSPTYP:2;
      uint64_t SPCMD:3;
      uint64_t OPDCMD:1;
      uint64_t MAXLAT:1;
      uint64_t reservedSpace0:3;
      uint64_t TRCMD:2;
      uint64_t TRDIR:1;
      uint64_t TRTYP:3;
      uint64_t reservedSpace1:2;
      uint64_t IOSPCMD:2;
      uint64_t ATACS:1;
      uint64_t BOOT_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCNT:16;
      uint64_t BLKLEN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTOCYC:4;
      uint64_t CSTOMUL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSPR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQA:1;
      uint64_t reservedSpace1:3;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQA:1;
      uint64_t reservedSpace1:3;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQA:1;
      uint64_t reservedSpace1:3;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQA:1;
      uint64_t reservedSpace1:3;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET:2;
      uint64_t reservedSpace0:2;
      uint64_t CHKSIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t DMAEN:1;
      uint64_t reservedSpace2:3;
      uint64_t ROPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOMODE:1;
      uint64_t reservedSpace0:3;
      uint64_t FERRCTRL:1;
      uint64_t reservedSpace1:3;
      uint64_t HSMODE:1;
      uint64_t reservedSpace2:3;
      uint64_t LSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  uint8_t res2[140];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t WP_KEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP_VS:4;
      uint64_t reservedSpace0:4;
      uint64_t WP_VSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

  uint8_t res3[276];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO;

};

#define HSMCI_HSMCI0_1 (*(volatile struct HSMCI_HSMCI0_1_tag *) 0xf0000000)

struct HSMCI_HSMCI1_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCIEN:1;
      uint64_t MCIDIS:1;
      uint64_t PWSEN:1;
      uint64_t PWSDIS:1;
      uint64_t reservedSpace0:3;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKDIV:8;
      uint64_t PWSDIV:3;
      uint64_t RDPROOF:1;
      uint64_t WRPROOF:1;
      uint64_t FBYTE:1;
      uint64_t PADV:1;
      uint64_t reservedSpace0:1;
      uint64_t CLKODD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTOCYC:4;
      uint64_t DTOMUL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCSEL:2;
      uint64_t reservedSpace0:4;
      uint64_t SDCBUS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ARGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDNB:6;
      uint64_t RSPTYP:2;
      uint64_t SPCMD:3;
      uint64_t OPDCMD:1;
      uint64_t MAXLAT:1;
      uint64_t reservedSpace0:3;
      uint64_t TRCMD:2;
      uint64_t TRDIR:1;
      uint64_t TRTYP:3;
      uint64_t reservedSpace1:2;
      uint64_t IOSPCMD:2;
      uint64_t ATACS:1;
      uint64_t BOOT_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCNT:16;
      uint64_t BLKLEN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTOCYC:4;
      uint64_t CSTOMUL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSPR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQA:1;
      uint64_t reservedSpace1:3;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQA:1;
      uint64_t reservedSpace1:3;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQA:1;
      uint64_t reservedSpace1:3;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQA:1;
      uint64_t reservedSpace1:3;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET:2;
      uint64_t reservedSpace0:2;
      uint64_t CHKSIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t DMAEN:1;
      uint64_t reservedSpace2:3;
      uint64_t ROPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOMODE:1;
      uint64_t reservedSpace0:3;
      uint64_t FERRCTRL:1;
      uint64_t reservedSpace1:3;
      uint64_t HSMODE:1;
      uint64_t reservedSpace2:3;
      uint64_t LSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  uint8_t res2[140];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t WP_KEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP_VS:4;
      uint64_t reservedSpace0:4;
      uint64_t WP_VSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

  uint8_t res3[276];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO;

};

#define HSMCI_HSMCI1_1 (*(volatile struct HSMCI_HSMCI1_1_tag *) 0xf8000000)

struct HSMCI_HSMCI2_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCIEN:1;
      uint64_t MCIDIS:1;
      uint64_t PWSEN:1;
      uint64_t PWSDIS:1;
      uint64_t reservedSpace0:3;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKDIV:8;
      uint64_t PWSDIV:3;
      uint64_t RDPROOF:1;
      uint64_t WRPROOF:1;
      uint64_t FBYTE:1;
      uint64_t PADV:1;
      uint64_t reservedSpace0:1;
      uint64_t CLKODD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTOCYC:4;
      uint64_t DTOMUL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCSEL:2;
      uint64_t reservedSpace0:4;
      uint64_t SDCBUS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ARGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDNB:6;
      uint64_t RSPTYP:2;
      uint64_t SPCMD:3;
      uint64_t OPDCMD:1;
      uint64_t MAXLAT:1;
      uint64_t reservedSpace0:3;
      uint64_t TRCMD:2;
      uint64_t TRDIR:1;
      uint64_t TRTYP:3;
      uint64_t reservedSpace1:2;
      uint64_t IOSPCMD:2;
      uint64_t ATACS:1;
      uint64_t BOOT_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCNT:16;
      uint64_t BLKLEN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTOCYC:4;
      uint64_t CSTOMUL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSPR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQA:1;
      uint64_t reservedSpace1:3;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQA:1;
      uint64_t reservedSpace1:3;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQA:1;
      uint64_t reservedSpace1:3;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQA:1;
      uint64_t reservedSpace1:3;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET:2;
      uint64_t reservedSpace0:2;
      uint64_t CHKSIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t DMAEN:1;
      uint64_t reservedSpace2:3;
      uint64_t ROPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOMODE:1;
      uint64_t reservedSpace0:3;
      uint64_t FERRCTRL:1;
      uint64_t reservedSpace1:3;
      uint64_t HSMODE:1;
      uint64_t reservedSpace2:3;
      uint64_t LSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  uint8_t res2[140];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t WP_KEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP_VS:4;
      uint64_t reservedSpace0:4;
      uint64_t WP_VSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

  uint8_t res3[276];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO;

};

#define HSMCI_HSMCI2_1 (*(volatile struct HSMCI_HSMCI2_1_tag *) 0xf8004000)

struct ISI_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t HSYNC_POL:1;
      uint64_t VSYNC_POL:1;
      uint64_t PIXCLK_POL:1;
      uint64_t reservedSpace1:1;
      uint64_t EMB_SYNC:1;
      uint64_t CRC_SYNC:1;
      uint64_t FRATE:3;
      uint64_t DISCR:1;
      uint64_t FULL:1;
      uint64_t THMASK:2;
      uint64_t reservedSpace2:1;
      uint64_t SLD:8;
      uint64_t SFD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_VSIZE:11;
      uint64_t GS_MODE:1;
      uint64_t RGB_MODE:1;
      uint64_t GRAYSCALE:1;
      uint64_t RGB_SWAP:1;
      uint64_t COL_SPACE:1;
      uint64_t IM_HSIZE:11;
      uint64_t reservedSpace0:1;
      uint64_t YCC_SWAP:2;
      uint64_t RGB_CFG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREV_VSIZE:10;
      uint64_t reservedSpace0:6;
      uint64_t PREV_HSIZE:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSIZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEC_FACTOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDECF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C0:8;
      uint64_t C1:8;
      uint64_t C2:8;
      uint64_t C3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Y2R_SET0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C4:9;
      uint64_t reservedSpace0:3;
      uint64_t Yoff:1;
      uint64_t Croff:1;
      uint64_t Cboff:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Y2R_SET1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C0:7;
      uint64_t reservedSpace0:1;
      uint64_t C1:7;
      uint64_t reservedSpace1:1;
      uint64_t C2:7;
      uint64_t reservedSpace2:1;
      uint64_t Roff:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R2Y_SET0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C3:7;
      uint64_t reservedSpace0:1;
      uint64_t C4:7;
      uint64_t reservedSpace1:1;
      uint64_t C5:7;
      uint64_t reservedSpace2:1;
      uint64_t Goff:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R2Y_SET1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C6:7;
      uint64_t reservedSpace0:1;
      uint64_t C7:7;
      uint64_t reservedSpace1:1;
      uint64_t C8:7;
      uint64_t reservedSpace2:1;
      uint64_t Boff:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R2Y_SET2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISI_EN:1;
      uint64_t ISI_DIS:1;
      uint64_t ISI_SRST:1;
      uint64_t reservedSpace0:5;
      uint64_t ISI_CDC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t DIS_DONE:1;
      uint64_t SRST:1;
      uint64_t reservedSpace0:5;
      uint64_t CDC_PND:1;
      uint64_t reservedSpace1:1;
      uint64_t VSYNC:1;
      uint64_t reservedSpace2:5;
      uint64_t PXFR_DONE:1;
      uint64_t CXFR_DONE:1;
      uint64_t reservedSpace3:1;
      uint64_t SIP:1;
      uint64_t reservedSpace4:4;
      uint64_t P_OVR:1;
      uint64_t C_OVR:1;
      uint64_t CRC_ERR:1;
      uint64_t FR_OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DIS_DONE:1;
      uint64_t SRST:1;
      uint64_t reservedSpace1:7;
      uint64_t VSYNC:1;
      uint64_t reservedSpace2:5;
      uint64_t PXFR_DONE:1;
      uint64_t CXFR_DONE:1;
      uint64_t reservedSpace3:6;
      uint64_t P_OVR:1;
      uint64_t C_OVR:1;
      uint64_t CRC_ERR:1;
      uint64_t FR_OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DIS_DONE:1;
      uint64_t SRST:1;
      uint64_t reservedSpace1:7;
      uint64_t VSYNC:1;
      uint64_t reservedSpace2:5;
      uint64_t PXFR_DONE:1;
      uint64_t CXFR_DONE:1;
      uint64_t reservedSpace3:6;
      uint64_t P_OVR:1;
      uint64_t C_OVR:1;
      uint64_t CRC_ERR:1;
      uint64_t FR_OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DIS_DONE:1;
      uint64_t SRST:1;
      uint64_t reservedSpace1:7;
      uint64_t VSYNC:1;
      uint64_t reservedSpace2:5;
      uint64_t PXFR_DONE:1;
      uint64_t CXFR_DONE:1;
      uint64_t reservedSpace3:6;
      uint64_t P_OVR:1;
      uint64_t C_OVR:1;
      uint64_t CRC_ERR:1;
      uint64_t FR_OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P_CH_EN:1;
      uint64_t C_CH_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P_CH_DIS:1;
      uint64_t C_CH_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P_CH_S:1;
      uint64_t C_CH_S:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t P_ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_P_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P_FETCH:1;
      uint64_t P_WB:1;
      uint64_t P_IEN:1;
      uint64_t P_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_P_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t P_DSCR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_P_DSCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t C_ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_C_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C_FETCH:1;
      uint64_t C_WB:1;
      uint64_t C_IEN:1;
      uint64_t C_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_C_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t C_DSCR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_C_DSCR;

  uint8_t res0[136];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t WP_KEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP_VS:4;
      uint64_t reservedSpace0:4;
      uint64_t WP_VSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

};

#define ISI_1 (*(volatile struct ISI_1_tag *) 0xf0034000)

struct LCDC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKPOL:1;
      uint64_t reservedSpace0:1;
      uint64_t CLKSEL:1;
      uint64_t CLKPWMSEL:1;
      uint64_t reservedSpace1:4;
      uint64_t CGDISBASE:1;
      uint64_t CGDISOVR1:1;
      uint64_t CGDISOVR2:1;
      uint64_t CGDISHEO:1;
      uint64_t CGDISHCR:1;
      uint64_t CGDISPP:1;
      uint64_t reservedSpace2:2;
      uint64_t CLKDIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSPW:6;
      uint64_t reservedSpace0:10;
      uint64_t VSPW:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VFPW:6;
      uint64_t reservedSpace0:10;
      uint64_t VBPW:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFPW:9;
      uint64_t reservedSpace0:7;
      uint64_t HBPW:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPL:11;
      uint64_t reservedSpace0:5;
      uint64_t RPF:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDCFG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSPOL:1;
      uint64_t VSPOL:1;
      uint64_t VSPDLYS:1;
      uint64_t VSPDLYE:1;
      uint64_t DISPPOL:1;
      uint64_t reservedSpace0:1;
      uint64_t DITHER:1;
      uint64_t DISPDLY:1;
      uint64_t MODE:2;
      uint64_t PP:1;
      uint64_t reservedSpace1:1;
      uint64_t VSPSU:1;
      uint64_t VSPHO:1;
      uint64_t reservedSpace2:2;
      uint64_t GUARDTIME:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDCFG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWMPS:3;
      uint64_t reservedSpace0:1;
      uint64_t PWMPOL:1;
      uint64_t reservedSpace1:3;
      uint64_t PWMCVAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDCFG6;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKEN:1;
      uint64_t SYNCEN:1;
      uint64_t DISPEN:1;
      uint64_t PWMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKDIS:1;
      uint64_t SYNCDIS:1;
      uint64_t DISPDIS:1;
      uint64_t PWMDIS:1;
      uint64_t reservedSpace0:4;
      uint64_t CLKRST:1;
      uint64_t SYNCRST:1;
      uint64_t DISPRST:1;
      uint64_t PWMRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDDIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKSTS:1;
      uint64_t LCDSTS:1;
      uint64_t DISPSTS:1;
      uint64_t PWMSTS:1;
      uint64_t SIPSTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOFIE:1;
      uint64_t DISIE:1;
      uint64_t DISPIE:1;
      uint64_t reservedSpace0:1;
      uint64_t FIFOERRIE:1;
      uint64_t reservedSpace1:3;
      uint64_t BASEIE:1;
      uint64_t OVR1IE:1;
      uint64_t OVR2IE:1;
      uint64_t HEOIE:1;
      uint64_t HCRIE:1;
      uint64_t PPIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOFID:1;
      uint64_t DISID:1;
      uint64_t DISPID:1;
      uint64_t reservedSpace0:1;
      uint64_t FIFOERRID:1;
      uint64_t reservedSpace1:3;
      uint64_t BASEID:1;
      uint64_t OVR1ID:1;
      uint64_t OVR2ID:1;
      uint64_t HEOID:1;
      uint64_t HCRID:1;
      uint64_t PPID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOFIM:1;
      uint64_t DISIM:1;
      uint64_t DISPIM:1;
      uint64_t reservedSpace0:1;
      uint64_t FIFOERRIM:1;
      uint64_t reservedSpace1:3;
      uint64_t BASEIM:1;
      uint64_t OVR1IM:1;
      uint64_t OVR2IM:1;
      uint64_t HEOIM:1;
      uint64_t HCRIM:1;
      uint64_t PPIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOF:1;
      uint64_t DIS:1;
      uint64_t DISP:1;
      uint64_t reservedSpace0:1;
      uint64_t FIFOERR:1;
      uint64_t reservedSpace1:3;
      uint64_t BASE:1;
      uint64_t OVR1:1;
      uint64_t OVR2:1;
      uint64_t HEO:1;
      uint64_t HCR:1;
      uint64_t PP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDISR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t UPDATEEN:1;
      uint64_t A2QEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASECHER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHDIS:1;
      uint64_t reservedSpace0:7;
      uint64_t CHRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASECHDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSR:1;
      uint64_t UPDATESR:1;
      uint64_t A2QSR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASECHSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASEIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASEIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASEIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASEISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t HEAD:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASEHEAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASEADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFETCH:1;
      uint64_t LFETCH:1;
      uint64_t DMAIEN:1;
      uint64_t DSCRIEN:1;
      uint64_t ADDIEN:1;
      uint64_t DONEIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASECTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NEXT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASENEXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIF:1;
      uint64_t reservedSpace0:3;
      uint64_t BLEN:2;
      uint64_t reservedSpace1:2;
      uint64_t DLBO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASECFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLUTEN:1;
      uint64_t reservedSpace0:3;
      uint64_t RGBMODE:4;
      uint64_t CLUTMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASECFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XSTRIDE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASECFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BDEF:8;
      uint64_t GDEF:8;
      uint64_t RDEF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASECFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t DMA:1;
      uint64_t REP:1;
      uint64_t reservedSpace1:1;
      uint64_t DISCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASECFG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISCXPOS:11;
      uint64_t reservedSpace0:5;
      uint64_t DISCYPOS:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASECFG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISCXSIZE:11;
      uint64_t reservedSpace0:5;
      uint64_t DISCYSIZE:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASECFG6;

  uint8_t res2[184];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t UPDATEEN:1;
      uint64_t A2QEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CHER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHDIS:1;
      uint64_t reservedSpace0:7;
      uint64_t CHRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CHDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSR:1;
      uint64_t UPDATESR:1;
      uint64_t A2QSR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CHSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t HEAD:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1HEAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFETCH:1;
      uint64_t LFETCH:1;
      uint64_t DMAIEN:1;
      uint64_t DSCRIEN:1;
      uint64_t ADDIEN:1;
      uint64_t DONEIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NEXT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1NEXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIF:1;
      uint64_t reservedSpace0:3;
      uint64_t BLEN:2;
      uint64_t reservedSpace1:2;
      uint64_t DLBO:1;
      uint64_t reservedSpace2:3;
      uint64_t ROTDIS:1;
      uint64_t LOCKDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLUTEN:1;
      uint64_t reservedSpace0:3;
      uint64_t RGBMODE:4;
      uint64_t CLUTMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPOS:11;
      uint64_t reservedSpace0:5;
      uint64_t YPOS:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XSIZE:11;
      uint64_t reservedSpace0:5;
      uint64_t YSIZE:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XSTRIDE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CFG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSTRIDE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CFG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BDEF:8;
      uint64_t GDEF:8;
      uint64_t RDEF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CFG6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKEY:8;
      uint64_t GKEY:8;
      uint64_t RKEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CFG7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BMASK:8;
      uint64_t GMASK:8;
      uint64_t RMASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CFG8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRKEY:1;
      uint64_t INV:1;
      uint64_t ITER2BL:1;
      uint64_t ITER:1;
      uint64_t REVALPHA:1;
      uint64_t GAEN:1;
      uint64_t LAEN:1;
      uint64_t OVR:1;
      uint64_t DMA:1;
      uint64_t REP:1;
      uint64_t DSTKEY:1;
      uint64_t reservedSpace0:5;
      uint64_t GA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CFG9;

  uint8_t res3[172];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t UPDATEEN:1;
      uint64_t A2QEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CHER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHDIS:1;
      uint64_t reservedSpace0:7;
      uint64_t CHRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CHDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSR:1;
      uint64_t UPDATESR:1;
      uint64_t A2QSR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CHSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t HEAD:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2HEAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFETCH:1;
      uint64_t LFETCH:1;
      uint64_t DMAIEN:1;
      uint64_t DSCRIEN:1;
      uint64_t ADDIEN:1;
      uint64_t DONEIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NEXT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2NEXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t BLEN:2;
      uint64_t reservedSpace1:2;
      uint64_t DLBO:1;
      uint64_t reservedSpace2:3;
      uint64_t ROTDIS:1;
      uint64_t LOCKDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLUTEN:1;
      uint64_t reservedSpace0:3;
      uint64_t RGBMODE:4;
      uint64_t CLUTMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPOS:11;
      uint64_t reservedSpace0:5;
      uint64_t YPOS:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XSIZE:11;
      uint64_t reservedSpace0:5;
      uint64_t YSIZE:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XSTRIDE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CFG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSTRIDE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CFG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BDEF:8;
      uint64_t GDEF:8;
      uint64_t RDEF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CFG6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKEY:8;
      uint64_t GKEY:8;
      uint64_t RKEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CFG7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BMASK:8;
      uint64_t GMASK:8;
      uint64_t RMASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CFG8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRKEY:1;
      uint64_t INV:1;
      uint64_t ITER2BL:1;
      uint64_t ITER:1;
      uint64_t REVALPHA:1;
      uint64_t GAEN:1;
      uint64_t LAEN:1;
      uint64_t OVR:1;
      uint64_t DMA:1;
      uint64_t REP:1;
      uint64_t DSTKEY:1;
      uint64_t reservedSpace0:5;
      uint64_t GA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CFG9;

  uint8_t res4[172];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t UPDATEEN:1;
      uint64_t A2QEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCHER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHDIS:1;
      uint64_t reservedSpace0:7;
      uint64_t CHRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCHDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSR:1;
      uint64_t UPDATESR:1;
      uint64_t A2QSR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCHSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
      uint64_t reservedSpace1:3;
      uint64_t UDMA:1;
      uint64_t UDSCR:1;
      uint64_t UADD:1;
      uint64_t UDONE:1;
      uint64_t UOVR:1;
      uint64_t reservedSpace2:3;
      uint64_t VDMA:1;
      uint64_t VDSCR:1;
      uint64_t VADD:1;
      uint64_t VDONE:1;
      uint64_t VOVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
      uint64_t reservedSpace1:3;
      uint64_t UDMA:1;
      uint64_t UDSCR:1;
      uint64_t UADD:1;
      uint64_t UDONE:1;
      uint64_t UOVR:1;
      uint64_t reservedSpace2:3;
      uint64_t VDMA:1;
      uint64_t VDSCR:1;
      uint64_t VADD:1;
      uint64_t VDONE:1;
      uint64_t VOVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
      uint64_t reservedSpace1:3;
      uint64_t UDMA:1;
      uint64_t UDSCR:1;
      uint64_t UADD:1;
      uint64_t UDONE:1;
      uint64_t UOVR:1;
      uint64_t reservedSpace2:3;
      uint64_t VDMA:1;
      uint64_t VDSCR:1;
      uint64_t VADD:1;
      uint64_t VDONE:1;
      uint64_t VOVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
      uint64_t reservedSpace1:3;
      uint64_t UDMA:1;
      uint64_t UDSCR:1;
      uint64_t UADD:1;
      uint64_t UDONE:1;
      uint64_t UOVR:1;
      uint64_t reservedSpace2:3;
      uint64_t VDMA:1;
      uint64_t VDSCR:1;
      uint64_t VADD:1;
      uint64_t VDONE:1;
      uint64_t VOVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t HEAD:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOHEAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFETCH:1;
      uint64_t LFETCH:1;
      uint64_t DMAIEN:1;
      uint64_t DSCRIEN:1;
      uint64_t ADDIEN:1;
      uint64_t DONEIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NEXT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEONEXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UHEAD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOUHEAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOUADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDFETCH:1;
      uint64_t reservedSpace0:1;
      uint64_t UDMAIEN:1;
      uint64_t UDSCRIEN:1;
      uint64_t UADDIEN:1;
      uint64_t UDONEIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOUCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNEXT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOUNEXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VHEAD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOVHEAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOVADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VDFETCH:1;
      uint64_t reservedSpace0:1;
      uint64_t VDMAIEN:1;
      uint64_t VDSCRIEN:1;
      uint64_t VADDIEN:1;
      uint64_t VDONEIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOVCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VNEXT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOVNEXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIF:1;
      uint64_t reservedSpace0:3;
      uint64_t BLEN:2;
      uint64_t BLENUV:2;
      uint64_t DLBO:1;
      uint64_t reservedSpace1:3;
      uint64_t ROTDIS:1;
      uint64_t LOCKDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLUTEN:1;
      uint64_t YUVEN:1;
      uint64_t reservedSpace0:2;
      uint64_t RGBMODE:4;
      uint64_t CLUTMODE:2;
      uint64_t reservedSpace1:2;
      uint64_t YUVMODE:4;
      uint64_t YUV422ROT:1;
      uint64_t YUV422SWP:1;
      uint64_t reservedSpace2:2;
      uint64_t DSCALEOPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPOS:11;
      uint64_t reservedSpace0:5;
      uint64_t YPOS:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XSIZE:11;
      uint64_t reservedSpace0:5;
      uint64_t YSIZE:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XMEM_SIZE:11;
      uint64_t reservedSpace0:5;
      uint64_t YMEM_SIZE:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XSTRIDE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSTRIDE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UVXSTRIDE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UVPSTRIDE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BDEF:8;
      uint64_t GDEF:8;
      uint64_t RDEF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKEY:8;
      uint64_t GKEY:8;
      uint64_t RKEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BMASK:8;
      uint64_t GMASK:8;
      uint64_t RMASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRKEY:1;
      uint64_t INV:1;
      uint64_t ITER2BL:1;
      uint64_t ITER:1;
      uint64_t REVALPHA:1;
      uint64_t GAEN:1;
      uint64_t LAEN:1;
      uint64_t OVR:1;
      uint64_t DMA:1;
      uint64_t REP:1;
      uint64_t DSTKEY:1;
      uint64_t reservedSpace0:1;
      uint64_t VIDPRI:1;
      uint64_t reservedSpace1:3;
      uint64_t GA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFACTOR:14;
      uint64_t reservedSpace0:2;
      uint64_t YFACTOR:14;
      uint64_t reservedSpace1:1;
      uint64_t SCALEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSCRY:10;
      uint64_t CSCRU:10;
      uint64_t CSCRV:10;
      uint64_t CSCYOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSCGY:10;
      uint64_t CSCGU:10;
      uint64_t CSCGV:10;
      uint64_t CSCUOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSCBY:10;
      uint64_t CSCBU:10;
      uint64_t CSCBV:10;
      uint64_t CSCVOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI0COEFF0:8;
      uint64_t XPHI0COEFF1:8;
      uint64_t XPHI0COEFF2:8;
      uint64_t XPHI0COEFF3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI0COEFF4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI1COEFF0:8;
      uint64_t XPHI1COEFF1:8;
      uint64_t XPHI1COEFF2:8;
      uint64_t XPHI1COEFF3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI1COEFF4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI2COEFF0:8;
      uint64_t XPHI2COEFF1:8;
      uint64_t XPHI2COEFF2:8;
      uint64_t XPHI2COEFF3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI2COEFF4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI3COEFF0:8;
      uint64_t XPHI3COEFF1:8;
      uint64_t XPHI3COEFF2:8;
      uint64_t XPHI3COEFF3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI3COEFF4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI4COEFF0:8;
      uint64_t XPHI4COEFF1:8;
      uint64_t XPHI4COEFF2:8;
      uint64_t XPHI4COEFF3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI4COEFF4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI5COEFF0:8;
      uint64_t XPHI5COEFF1:8;
      uint64_t XPHI5COEFF2:8;
      uint64_t XPHI5COEFF3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI5COEFF4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI6COEFF0:8;
      uint64_t XPHI6COEFF1:8;
      uint64_t XPHI6COEFF2:8;
      uint64_t XPHI6COEFF3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI6COEFF4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI7COEFF0:8;
      uint64_t XPHI7COEFF1:8;
      uint64_t XPHI7COEFF2:8;
      uint64_t XPHI7COEFF3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHI7COEFF4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YPHI0COEFF0:8;
      uint64_t YPHI0COEFF1:8;
      uint64_t YPHI0COEFF2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YPHI1COEFF0:8;
      uint64_t YPHI1COEFF1:8;
      uint64_t YPHI1COEFF2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YPHI2COEFF0:8;
      uint64_t YPHI2COEFF1:8;
      uint64_t YPHI2COEFF2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YPHI3COEFF0:8;
      uint64_t YPHI3COEFF1:8;
      uint64_t YPHI3COEFF2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YPHI4COEFF0:8;
      uint64_t YPHI4COEFF1:8;
      uint64_t YPHI4COEFF2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YPHI5COEFF0:8;
      uint64_t YPHI5COEFF1:8;
      uint64_t YPHI5COEFF2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YPHI6COEFF0:8;
      uint64_t YPHI6COEFF1:8;
      uint64_t YPHI6COEFF2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YPHI7COEFF0:8;
      uint64_t YPHI7COEFF1:8;
      uint64_t YPHI7COEFF2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPHIDEF:3;
      uint64_t reservedSpace0:13;
      uint64_t YPHIDEF:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCFG41;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t UPDATEEN:1;
      uint64_t A2QEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCHER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHDIS:1;
      uint64_t reservedSpace0:7;
      uint64_t CHRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCHDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSR:1;
      uint64_t UPDATESR:1;
      uint64_t A2QSR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCHSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t HEAD:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRHEAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFETCH:1;
      uint64_t LFETCH:1;
      uint64_t DMAIEN:1;
      uint64_t DSCRIEN:1;
      uint64_t ADDIEN:1;
      uint64_t DONEIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NEXT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRNEXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIF:1;
      uint64_t reservedSpace0:3;
      uint64_t BLEN:2;
      uint64_t reservedSpace1:2;
      uint64_t DLBO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLUTEN:1;
      uint64_t reservedSpace0:3;
      uint64_t RGBMODE:4;
      uint64_t CLUTMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPOS:11;
      uint64_t reservedSpace0:5;
      uint64_t YPOS:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XSIZE:11;
      uint64_t reservedSpace0:5;
      uint64_t YSIZE:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XSTRIDE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCFG4;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BDEF:8;
      uint64_t GDEF:8;
      uint64_t RDEF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCFG6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKEY:8;
      uint64_t GKEY:8;
      uint64_t RKEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCFG7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BMASK:8;
      uint64_t GMASK:8;
      uint64_t RMASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCFG8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRKEY:1;
      uint64_t INV:1;
      uint64_t ITER2BL:1;
      uint64_t ITER:1;
      uint64_t REVALPHA:1;
      uint64_t GAEN:1;
      uint64_t LAEN:1;
      uint64_t OVR:1;
      uint64_t DMA:1;
      uint64_t REP:1;
      uint64_t DSTKEY:1;
      uint64_t reservedSpace0:5;
      uint64_t GA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCFG9;

  uint8_t res7[172];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t UPDATEEN:1;
      uint64_t A2QEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCHER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHDIS:1;
      uint64_t reservedSpace0:7;
      uint64_t CHRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCHDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSR:1;
      uint64_t UPDATESR:1;
      uint64_t A2QSR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCHSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMA:1;
      uint64_t DSCR:1;
      uint64_t ADD:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t HEAD:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPHEAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFETCH:1;
      uint64_t reservedSpace0:1;
      uint64_t DMAIEN:1;
      uint64_t DSCRIEN:1;
      uint64_t ADDIEN:1;
      uint64_t DONEIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NEXT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPNEXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIF:1;
      uint64_t reservedSpace0:3;
      uint64_t BLEN:2;
      uint64_t reservedSpace1:2;
      uint64_t DLBO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPMODE:3;
      uint64_t reservedSpace0:1;
      uint64_t ITUBT601:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XSTRIDE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSCYR:10;
      uint64_t CSCYG:10;
      uint64_t CSCYB:10;
      uint64_t CSCYOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSCUR:10;
      uint64_t CSCUG:10;
      uint64_t CSCUB:10;
      uint64_t CSCUOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCFG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSCVR:10;
      uint64_t CSCVG:10;
      uint64_t CSCVB:10;
      uint64_t CSCVOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCFG5;

  uint8_t res8[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCLUT:8;
      uint64_t GCLUT:8;
      uint64_t RCLUT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASECLUT;

  uint8_t res9[1020];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCLUT:8;
      uint64_t GCLUT:8;
      uint64_t RCLUT:8;
      uint64_t ACLUT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR1CLUT;

  uint8_t res10[1020];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCLUT:8;
      uint64_t GCLUT:8;
      uint64_t RCLUT:8;
      uint64_t ACLUT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVR2CLUT;

  uint8_t res11[1020];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCLUT:8;
      uint64_t GCLUT:8;
      uint64_t RCLUT:8;
      uint64_t ACLUT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HEOCLUT;

  uint8_t res12[1020];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCLUT:8;
      uint64_t GCLUT:8;
      uint64_t RCLUT:8;
      uint64_t ACLUT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCRCLUT;

};

#define LCDC_1 (*(volatile struct LCDC_1_tag *) 0xf0030000)

struct MATRIX_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULBT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFG;

  uint8_t res0[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:9;
      uint64_t reservedSpace0:7;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFG;

  uint8_t res1[60];

  uint32_t PRAS0;
  uint32_t PRBS0;
  uint32_t PRAS1;
  uint32_t PRBS1;
  uint32_t PRAS2;
  uint32_t PRBS2;
  uint32_t PRAS3;
  uint32_t PRBS3;
  uint32_t PRAS4;
  uint32_t PRBS4;
  uint32_t PRAS5;
  uint32_t PRBS5;
  uint32_t PRAS6;
  uint32_t PRBS6;
  uint32_t PRAS7;
  uint32_t PRBS7;
  uint32_t PRAS8;
  uint32_t PRBS8;
  uint32_t PRAS9;
  uint32_t PRBS9;
  uint32_t PRAS10;
  uint32_t PRBS10;
  uint32_t PRAS11;
  uint32_t PRBS11;
  uint32_t PRAS12;
  uint32_t PRBS12;
  uint32_t PRAS13;
  uint32_t PRBS13;
  uint32_t PRAS14;
  uint32_t PRBS14;
  uint32_t PRAS15;
  uint32_t PRBS15;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCB0:1;
      uint64_t RCB1:1;
      uint64_t RCB2:1;
      uint64_t RCB3:1;
      uint64_t RCB4:1;
      uint64_t RCB5:1;
      uint64_t RCB6:1;
      uint64_t RCB7:1;
      uint64_t RCB8:1;
      uint64_t RCB9:1;
      uint64_t RCB10:1;
      uint64_t RCB11:1;
      uint64_t RCB12:1;
      uint64_t RCB13:1;
      uint64_t RCB14:1;
      uint64_t RCB15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRCR;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SFR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFR;

  uint8_t res3[208];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

};

#define MATRIX_1 (*(volatile struct MATRIX_1_tag *) 0xffffec00)

struct MPDDRC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t reservedSpace0:5;
      uint64_t MRS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:12;
      uint64_t reservedSpace0:4;
      uint64_t ADJ_REF:1;
      uint64_t REF_PB:1;
      uint64_t reservedSpace1:2;
      uint64_t MR4_VALUE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NC:2;
      uint64_t NR:2;
      uint64_t CAS:3;
      uint64_t DLL:1;
      uint64_t DIC_DS:1;
      uint64_t DIS_DLL:1;
      uint64_t ZQ:2;
      uint64_t OCD:3;
      uint64_t reservedSpace0:1;
      uint64_t DQMS:1;
      uint64_t ENRDM:1;
      uint64_t reservedSpace1:2;
      uint64_t NB:1;
      uint64_t NDQS:1;
      uint64_t DECOD:1;
      uint64_t UNAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRAS:4;
      uint64_t TRCD:4;
      uint64_t TWR:4;
      uint64_t TRC:4;
      uint64_t TRP:4;
      uint64_t TRRD:4;
      uint64_t TWTR:4;
      uint64_t TMRD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRFC:5;
      uint64_t reservedSpace0:3;
      uint64_t TXSNR:8;
      uint64_t TXSRD:8;
      uint64_t TXP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXARD:4;
      uint64_t TXARDS:4;
      uint64_t TRPA:4;
      uint64_t TRTP:3;
      uint64_t reservedSpace0:1;
      uint64_t TFAW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPR2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPCB:2;
      uint64_t CLK_FR:1;
      uint64_t LPDDR2_PWOFF:1;
      uint64_t PASR:3;
      uint64_t reservedSpace0:1;
      uint64_t DS:3;
      uint64_t reservedSpace1:1;
      uint64_t TIMEOUT:2;
      uint64_t reservedSpace2:2;
      uint64_t APDE:1;
      uint64_t reservedSpace3:3;
      uint64_t UPD_MR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:3;
      uint64_t reservedSpace0:1;
      uint64_t DBW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MD;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BK_MASK:8;
      uint64_t SEG_MASK:16;
      uint64_t DS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPDDR2_LPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_CAL:16;
      uint64_t MR4_READ:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPDDR2_CAL_MR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ZQCS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPDDR2_TIM_CAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDIV:3;
      uint64_t reservedSpace0:5;
      uint64_t TZQIO:3;
      uint64_t reservedSpace1:5;
      uint64_t CALCODEP:4;
      uint64_t CALCODEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IO_CALIBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCR_EN:1;
      uint64_t KEY1_KEY1:32;
      uint64_t KEY2_KEY2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCMS_KEY1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCMS_KEY2;

  uint8_t res2[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOFF:4;
      uint64_t reservedSpace0:4;
      uint64_t CLK90OFF:5;
      uint64_t reservedSpace1:3;
      uint64_t SELOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLL_MOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0OFF:5;
      uint64_t reservedSpace0:3;
      uint64_t S1OFF:5;
      uint64_t reservedSpace1:3;
      uint64_t S2OFF:5;
      uint64_t reservedSpace2:3;
      uint64_t S3OFF:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLL_SOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDINC:1;
      uint64_t MDDEC:1;
      uint64_t MDOVF:1;
      uint64_t reservedSpace0:5;
      uint64_t MDVAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLL_MSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCOVF:1;
      uint64_t SDCUDF:1;
      uint64_t SDERF:1;
      uint64_t reservedSpace0:5;
      uint64_t SDVAL:8;
      uint64_t SDCVAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLL_S0SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCOVF:1;
      uint64_t SDCUDF:1;
      uint64_t SDERF:1;
      uint64_t reservedSpace0:5;
      uint64_t SDVAL:8;
      uint64_t SDCVAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLL_S1SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCOVF:1;
      uint64_t SDCUDF:1;
      uint64_t SDERF:1;
      uint64_t reservedSpace0:5;
      uint64_t SDVAL:8;
      uint64_t SDCVAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLL_S2SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCOVF:1;
      uint64_t SDCUDF:1;
      uint64_t SDERF:1;
      uint64_t reservedSpace0:5;
      uint64_t SDVAL:8;
      uint64_t SDCVAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLL_S3SR;

  uint8_t res3[84];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

};

#define MPDDRC_1 (*(volatile struct MPDDRC_1_tag *) 0xffffea00)

struct PIO_PIOA_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUSR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ABCDSR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDSR;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWSR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMMR;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELSR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FELLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REHLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRLHSR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCKSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

  uint8_t res11[4294963732];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCHMITT0:1;
      uint64_t SCHMITT1:1;
      uint64_t SCHMITT2:1;
      uint64_t SCHMITT3:1;
      uint64_t SCHMITT4:1;
      uint64_t SCHMITT5:1;
      uint64_t SCHMITT6:1;
      uint64_t SCHMITT7:1;
      uint64_t SCHMITT8:1;
      uint64_t SCHMITT9:1;
      uint64_t SCHMITT10:1;
      uint64_t SCHMITT11:1;
      uint64_t SCHMITT12:1;
      uint64_t SCHMITT13:1;
      uint64_t SCHMITT14:1;
      uint64_t SCHMITT15:1;
      uint64_t SCHMITT16:1;
      uint64_t SCHMITT17:1;
      uint64_t SCHMITT18:1;
      uint64_t SCHMITT19:1;
      uint64_t SCHMITT20:1;
      uint64_t SCHMITT21:1;
      uint64_t SCHMITT22:1;
      uint64_t SCHMITT23:1;
      uint64_t SCHMITT24:1;
      uint64_t SCHMITT25:1;
      uint64_t SCHMITT26:1;
      uint64_t SCHMITT27:1;
      uint64_t SCHMITT28:1;
      uint64_t SCHMITT29:1;
      uint64_t SCHMITT30:1;
      uint64_t SCHMITT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCHMITT;

  uint8_t res12[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINE0:2;
      uint64_t LINE1:2;
      uint64_t LINE2:2;
      uint64_t LINE3:2;
      uint64_t LINE4:2;
      uint64_t LINE5:2;
      uint64_t LINE6:2;
      uint64_t LINE7:2;
      uint64_t LINE8:2;
      uint64_t LINE9:2;
      uint64_t LINE10:2;
      uint64_t LINE11:2;
      uint64_t LINE12:2;
      uint64_t LINE13:2;
      uint64_t LINE14:2;
      uint64_t LINE15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRIVER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINE16:2;
      uint64_t LINE17:2;
      uint64_t LINE18:2;
      uint64_t LINE19:2;
      uint64_t LINE20:2;
      uint64_t LINE21:2;
      uint64_t LINE22:2;
      uint64_t LINE23:2;
      uint64_t LINE24:2;
      uint64_t LINE25:2;
      uint64_t LINE26:2;
      uint64_t LINE27:2;
      uint64_t LINE28:2;
      uint64_t LINE29:2;
      uint64_t LINE30:2;
      uint64_t LINE31:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRIVER2;

};

#define PIO_PIOA_1 (*(volatile struct PIO_PIOA_1_tag *) 0xfffff200)

struct PIO_PIOB_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUSR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ABCDSR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDSR;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWSR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMMR;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELSR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FELLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REHLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRLHSR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCKSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

  uint8_t res11[4294963732];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCHMITT0:1;
      uint64_t SCHMITT1:1;
      uint64_t SCHMITT2:1;
      uint64_t SCHMITT3:1;
      uint64_t SCHMITT4:1;
      uint64_t SCHMITT5:1;
      uint64_t SCHMITT6:1;
      uint64_t SCHMITT7:1;
      uint64_t SCHMITT8:1;
      uint64_t SCHMITT9:1;
      uint64_t SCHMITT10:1;
      uint64_t SCHMITT11:1;
      uint64_t SCHMITT12:1;
      uint64_t SCHMITT13:1;
      uint64_t SCHMITT14:1;
      uint64_t SCHMITT15:1;
      uint64_t SCHMITT16:1;
      uint64_t SCHMITT17:1;
      uint64_t SCHMITT18:1;
      uint64_t SCHMITT19:1;
      uint64_t SCHMITT20:1;
      uint64_t SCHMITT21:1;
      uint64_t SCHMITT22:1;
      uint64_t SCHMITT23:1;
      uint64_t SCHMITT24:1;
      uint64_t SCHMITT25:1;
      uint64_t SCHMITT26:1;
      uint64_t SCHMITT27:1;
      uint64_t SCHMITT28:1;
      uint64_t SCHMITT29:1;
      uint64_t SCHMITT30:1;
      uint64_t SCHMITT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCHMITT;

  uint8_t res12[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINE0:2;
      uint64_t LINE1:2;
      uint64_t LINE2:2;
      uint64_t LINE3:2;
      uint64_t LINE4:2;
      uint64_t LINE5:2;
      uint64_t LINE6:2;
      uint64_t LINE7:2;
      uint64_t LINE8:2;
      uint64_t LINE9:2;
      uint64_t LINE10:2;
      uint64_t LINE11:2;
      uint64_t LINE12:2;
      uint64_t LINE13:2;
      uint64_t LINE14:2;
      uint64_t LINE15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRIVER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINE16:2;
      uint64_t LINE17:2;
      uint64_t LINE18:2;
      uint64_t LINE19:2;
      uint64_t LINE20:2;
      uint64_t LINE21:2;
      uint64_t LINE22:2;
      uint64_t LINE23:2;
      uint64_t LINE24:2;
      uint64_t LINE25:2;
      uint64_t LINE26:2;
      uint64_t LINE27:2;
      uint64_t LINE28:2;
      uint64_t LINE29:2;
      uint64_t LINE30:2;
      uint64_t LINE31:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRIVER2;

};

#define PIO_PIOB_1 (*(volatile struct PIO_PIOB_1_tag *) 0xfffff400)

struct PIO_PIOC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUSR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ABCDSR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDSR;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWSR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMMR;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELSR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FELLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REHLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRLHSR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCKSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

  uint8_t res11[4294963732];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCHMITT0:1;
      uint64_t SCHMITT1:1;
      uint64_t SCHMITT2:1;
      uint64_t SCHMITT3:1;
      uint64_t SCHMITT4:1;
      uint64_t SCHMITT5:1;
      uint64_t SCHMITT6:1;
      uint64_t SCHMITT7:1;
      uint64_t SCHMITT8:1;
      uint64_t SCHMITT9:1;
      uint64_t SCHMITT10:1;
      uint64_t SCHMITT11:1;
      uint64_t SCHMITT12:1;
      uint64_t SCHMITT13:1;
      uint64_t SCHMITT14:1;
      uint64_t SCHMITT15:1;
      uint64_t SCHMITT16:1;
      uint64_t SCHMITT17:1;
      uint64_t SCHMITT18:1;
      uint64_t SCHMITT19:1;
      uint64_t SCHMITT20:1;
      uint64_t SCHMITT21:1;
      uint64_t SCHMITT22:1;
      uint64_t SCHMITT23:1;
      uint64_t SCHMITT24:1;
      uint64_t SCHMITT25:1;
      uint64_t SCHMITT26:1;
      uint64_t SCHMITT27:1;
      uint64_t SCHMITT28:1;
      uint64_t SCHMITT29:1;
      uint64_t SCHMITT30:1;
      uint64_t SCHMITT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCHMITT;

  uint8_t res12[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINE0:2;
      uint64_t LINE1:2;
      uint64_t LINE2:2;
      uint64_t LINE3:2;
      uint64_t LINE4:2;
      uint64_t LINE5:2;
      uint64_t LINE6:2;
      uint64_t LINE7:2;
      uint64_t LINE8:2;
      uint64_t LINE9:2;
      uint64_t LINE10:2;
      uint64_t LINE11:2;
      uint64_t LINE12:2;
      uint64_t LINE13:2;
      uint64_t LINE14:2;
      uint64_t LINE15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRIVER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINE16:2;
      uint64_t LINE17:2;
      uint64_t LINE18:2;
      uint64_t LINE19:2;
      uint64_t LINE20:2;
      uint64_t LINE21:2;
      uint64_t LINE22:2;
      uint64_t LINE23:2;
      uint64_t LINE24:2;
      uint64_t LINE25:2;
      uint64_t LINE26:2;
      uint64_t LINE27:2;
      uint64_t LINE28:2;
      uint64_t LINE29:2;
      uint64_t LINE30:2;
      uint64_t LINE31:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRIVER2;

};

#define PIO_PIOC_1 (*(volatile struct PIO_PIOC_1_tag *) 0xfffff600)

struct PIO_PIOD_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUSR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ABCDSR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDSR;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWSR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMMR;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELSR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FELLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REHLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRLHSR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCKSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

  uint8_t res11[4294963732];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCHMITT0:1;
      uint64_t SCHMITT1:1;
      uint64_t SCHMITT2:1;
      uint64_t SCHMITT3:1;
      uint64_t SCHMITT4:1;
      uint64_t SCHMITT5:1;
      uint64_t SCHMITT6:1;
      uint64_t SCHMITT7:1;
      uint64_t SCHMITT8:1;
      uint64_t SCHMITT9:1;
      uint64_t SCHMITT10:1;
      uint64_t SCHMITT11:1;
      uint64_t SCHMITT12:1;
      uint64_t SCHMITT13:1;
      uint64_t SCHMITT14:1;
      uint64_t SCHMITT15:1;
      uint64_t SCHMITT16:1;
      uint64_t SCHMITT17:1;
      uint64_t SCHMITT18:1;
      uint64_t SCHMITT19:1;
      uint64_t SCHMITT20:1;
      uint64_t SCHMITT21:1;
      uint64_t SCHMITT22:1;
      uint64_t SCHMITT23:1;
      uint64_t SCHMITT24:1;
      uint64_t SCHMITT25:1;
      uint64_t SCHMITT26:1;
      uint64_t SCHMITT27:1;
      uint64_t SCHMITT28:1;
      uint64_t SCHMITT29:1;
      uint64_t SCHMITT30:1;
      uint64_t SCHMITT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCHMITT;

  uint8_t res12[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINE0:2;
      uint64_t LINE1:2;
      uint64_t LINE2:2;
      uint64_t LINE3:2;
      uint64_t LINE4:2;
      uint64_t LINE5:2;
      uint64_t LINE6:2;
      uint64_t LINE7:2;
      uint64_t LINE8:2;
      uint64_t LINE9:2;
      uint64_t LINE10:2;
      uint64_t LINE11:2;
      uint64_t LINE12:2;
      uint64_t LINE13:2;
      uint64_t LINE14:2;
      uint64_t LINE15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRIVER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINE16:2;
      uint64_t LINE17:2;
      uint64_t LINE18:2;
      uint64_t LINE19:2;
      uint64_t LINE20:2;
      uint64_t LINE21:2;
      uint64_t LINE22:2;
      uint64_t LINE23:2;
      uint64_t LINE24:2;
      uint64_t LINE25:2;
      uint64_t LINE26:2;
      uint64_t LINE27:2;
      uint64_t LINE28:2;
      uint64_t LINE29:2;
      uint64_t LINE30:2;
      uint64_t LINE31:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRIVER2;

};

#define PIO_PIOD_1 (*(volatile struct PIO_PIOD_1_tag *) 0xfffff800)

struct PIO_PIOE_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUSR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ABCDSR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFSCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPDSR;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OWSR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIMMR;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELSR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FELLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REHLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRLHSR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCKSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

  uint8_t res11[4294963732];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCHMITT0:1;
      uint64_t SCHMITT1:1;
      uint64_t SCHMITT2:1;
      uint64_t SCHMITT3:1;
      uint64_t SCHMITT4:1;
      uint64_t SCHMITT5:1;
      uint64_t SCHMITT6:1;
      uint64_t SCHMITT7:1;
      uint64_t SCHMITT8:1;
      uint64_t SCHMITT9:1;
      uint64_t SCHMITT10:1;
      uint64_t SCHMITT11:1;
      uint64_t SCHMITT12:1;
      uint64_t SCHMITT13:1;
      uint64_t SCHMITT14:1;
      uint64_t SCHMITT15:1;
      uint64_t SCHMITT16:1;
      uint64_t SCHMITT17:1;
      uint64_t SCHMITT18:1;
      uint64_t SCHMITT19:1;
      uint64_t SCHMITT20:1;
      uint64_t SCHMITT21:1;
      uint64_t SCHMITT22:1;
      uint64_t SCHMITT23:1;
      uint64_t SCHMITT24:1;
      uint64_t SCHMITT25:1;
      uint64_t SCHMITT26:1;
      uint64_t SCHMITT27:1;
      uint64_t SCHMITT28:1;
      uint64_t SCHMITT29:1;
      uint64_t SCHMITT30:1;
      uint64_t SCHMITT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCHMITT;

  uint8_t res12[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINE0:2;
      uint64_t LINE1:2;
      uint64_t LINE2:2;
      uint64_t LINE3:2;
      uint64_t LINE4:2;
      uint64_t LINE5:2;
      uint64_t LINE6:2;
      uint64_t LINE7:2;
      uint64_t LINE8:2;
      uint64_t LINE9:2;
      uint64_t LINE10:2;
      uint64_t LINE11:2;
      uint64_t LINE12:2;
      uint64_t LINE13:2;
      uint64_t LINE14:2;
      uint64_t LINE15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRIVER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINE16:2;
      uint64_t LINE17:2;
      uint64_t LINE18:2;
      uint64_t LINE19:2;
      uint64_t LINE20:2;
      uint64_t LINE21:2;
      uint64_t LINE22:2;
      uint64_t LINE23:2;
      uint64_t LINE24:2;
      uint64_t LINE25:2;
      uint64_t LINE26:2;
      uint64_t LINE27:2;
      uint64_t LINE28:2;
      uint64_t LINE29:2;
      uint64_t LINE30:2;
      uint64_t LINE31:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRIVER2;

};

#define PIO_PIOE_1 (*(volatile struct PIO_PIOE_1_tag *) 0xfffffa00)

struct PIT_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIV:20;
      uint64_t reservedSpace0:4;
      uint64_t PITEN:1;
      uint64_t PITIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PITS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPIV:20;
      uint64_t PICNT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPIV:20;
      uint64_t PICNT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIIR;

};

#define PIT_1 (*(volatile struct PIT_1_tag *) 0xfffffe30)

struct PMC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DDRCK:1;
      uint64_t reservedSpace1:1;
      uint64_t SMDCK:1;
      uint64_t reservedSpace2:1;
      uint64_t UHP:1;
      uint64_t UDP:1;
      uint64_t PCK0:1;
      uint64_t PCK1:1;
      uint64_t PCK2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCK:1;
      uint64_t reservedSpace0:1;
      uint64_t DDRCK:1;
      uint64_t reservedSpace1:1;
      uint64_t SMDCK:1;
      uint64_t reservedSpace2:1;
      uint64_t UHP:1;
      uint64_t UDP:1;
      uint64_t PCK0:1;
      uint64_t PCK1:1;
      uint64_t PCK2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCK:1;
      uint64_t reservedSpace0:1;
      uint64_t DDRCK:1;
      uint64_t reservedSpace1:1;
      uint64_t SMDCK:1;
      uint64_t reservedSpace2:1;
      uint64_t UHP:1;
      uint64_t UDP:1;
      uint64_t PCK0:1;
      uint64_t PCK1:1;
      uint64_t PCK2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PID2:1;
      uint64_t PID3:1;
      uint64_t PID4:1;
      uint64_t PID5:1;
      uint64_t PID6:1;
      uint64_t PID7:1;
      uint64_t PID8:1;
      uint64_t PID9:1;
      uint64_t PID10:1;
      uint64_t PID11:1;
      uint64_t PID12:1;
      uint64_t PID13:1;
      uint64_t PID14:1;
      uint64_t PID15:1;
      uint64_t PID16:1;
      uint64_t PID17:1;
      uint64_t PID18:1;
      uint64_t PID19:1;
      uint64_t PID20:1;
      uint64_t PID21:1;
      uint64_t PID22:1;
      uint64_t PID23:1;
      uint64_t PID24:1;
      uint64_t PID25:1;
      uint64_t PID26:1;
      uint64_t PID27:1;
      uint64_t PID28:1;
      uint64_t PID29:1;
      uint64_t PID30:1;
      uint64_t PID31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PID2:1;
      uint64_t PID3:1;
      uint64_t PID4:1;
      uint64_t PID5:1;
      uint64_t PID6:1;
      uint64_t PID7:1;
      uint64_t PID8:1;
      uint64_t PID9:1;
      uint64_t PID10:1;
      uint64_t PID11:1;
      uint64_t PID12:1;
      uint64_t PID13:1;
      uint64_t PID14:1;
      uint64_t PID15:1;
      uint64_t PID16:1;
      uint64_t PID17:1;
      uint64_t PID18:1;
      uint64_t PID19:1;
      uint64_t PID20:1;
      uint64_t PID21:1;
      uint64_t PID22:1;
      uint64_t PID23:1;
      uint64_t PID24:1;
      uint64_t PID25:1;
      uint64_t PID26:1;
      uint64_t PID27:1;
      uint64_t PID28:1;
      uint64_t PID29:1;
      uint64_t PID30:1;
      uint64_t PID31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PID2:1;
      uint64_t PID3:1;
      uint64_t PID4:1;
      uint64_t PID5:1;
      uint64_t PID6:1;
      uint64_t PID7:1;
      uint64_t PID8:1;
      uint64_t PID9:1;
      uint64_t PID10:1;
      uint64_t PID11:1;
      uint64_t PID12:1;
      uint64_t PID13:1;
      uint64_t PID14:1;
      uint64_t PID15:1;
      uint64_t PID16:1;
      uint64_t PID17:1;
      uint64_t PID18:1;
      uint64_t PID19:1;
      uint64_t PID20:1;
      uint64_t PID21:1;
      uint64_t PID22:1;
      uint64_t PID23:1;
      uint64_t PID24:1;
      uint64_t PID25:1;
      uint64_t PID26:1;
      uint64_t PID27:1;
      uint64_t PID28:1;
      uint64_t PID29:1;
      uint64_t PID30:1;
      uint64_t PID31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCSR0;

  uint32_t R_UCKR;
  uint32_t R_MOR;
  uint32_t R_MCFR;
  uint32_t R_PLLAR;
  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSS:2;
      uint64_t reservedSpace0:2;
      uint64_t PRES:3;
      uint64_t reservedSpace1:1;
      uint64_t MDIV:2;
      uint64_t reservedSpace2:2;
      uint64_t PLLADIV2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCKR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USBS:1;
      uint64_t reservedSpace0:7;
      uint64_t USBDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMDS:1;
      uint64_t reservedSpace0:7;
      uint64_t SMDDIV:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSS:3;
      uint64_t reservedSpace0:1;
      uint64_t PRES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCK;

  uint8_t res3[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTS:1;
      uint64_t LOCKA:1;
      uint64_t reservedSpace0:1;
      uint64_t MCKRDY:1;
      uint64_t reservedSpace1:2;
      uint64_t LOCKU:1;
      uint64_t reservedSpace2:1;
      uint64_t PCKRDY0:1;
      uint64_t PCKRDY1:1;
      uint64_t reservedSpace3:6;
      uint64_t MOSCSELS:1;
      uint64_t MOSCRCS:1;
      uint64_t CFDEV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTS:1;
      uint64_t LOCKA:1;
      uint64_t reservedSpace0:1;
      uint64_t MCKRDY:1;
      uint64_t reservedSpace1:2;
      uint64_t LOCKU:1;
      uint64_t reservedSpace2:1;
      uint64_t PCKRDY0:1;
      uint64_t PCKRDY1:1;
      uint64_t reservedSpace3:6;
      uint64_t MOSCSELS:1;
      uint64_t MOSCRCS:1;
      uint64_t CFDEV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTS:1;
      uint64_t LOCKA:1;
      uint64_t reservedSpace0:1;
      uint64_t MCKRDY:1;
      uint64_t reservedSpace1:2;
      uint64_t LOCKU:1;
      uint64_t OSCSELS:1;
      uint64_t PCKRDY0:1;
      uint64_t PCKRDY1:1;
      uint64_t reservedSpace2:6;
      uint64_t MOSCSELS:1;
      uint64_t MOSCRCS:1;
      uint64_t CFDEV:1;
      uint64_t CFDS:1;
      uint64_t FOS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTS:1;
      uint64_t LOCKA:1;
      uint64_t reservedSpace0:1;
      uint64_t MCKRDY:1;
      uint64_t reservedSpace1:4;
      uint64_t PCKRDY0:1;
      uint64_t PCKRDY1:1;
      uint64_t reservedSpace2:6;
      uint64_t MOSCSELS:1;
      uint64_t MOSCRCS:1;
      uint64_t CFDEV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  uint8_t res4[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICPLLA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLICPR;

  uint8_t res5[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

  uint8_t res6[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID32:1;
      uint64_t PID33:1;
      uint64_t PID34:1;
      uint64_t PID35:1;
      uint64_t PID36:1;
      uint64_t PID37:1;
      uint64_t PID38:1;
      uint64_t PID39:1;
      uint64_t PID40:1;
      uint64_t PID41:1;
      uint64_t PID42:1;
      uint64_t PID43:1;
      uint64_t PID44:1;
      uint64_t PID45:1;
      uint64_t PID46:1;
      uint64_t PID47:1;
      uint64_t PID48:1;
      uint64_t PID49:1;
      uint64_t PID50:1;
      uint64_t PID51:1;
      uint64_t PID53:2;
      uint64_t PID54:1;
      uint64_t PID55:1;
      uint64_t PID56:1;
      uint64_t PID57:1;
      uint64_t PID58:1;
      uint64_t PID59:1;
      uint64_t PID60:1;
      uint64_t PID61:1;
      uint64_t PID62:1;
      uint64_t PID63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID32:1;
      uint64_t PID33:1;
      uint64_t PID34:1;
      uint64_t PID35:1;
      uint64_t PID36:1;
      uint64_t PID37:1;
      uint64_t PID38:1;
      uint64_t PID39:1;
      uint64_t PID40:1;
      uint64_t PID41:1;
      uint64_t PID42:1;
      uint64_t PID43:1;
      uint64_t PID44:1;
      uint64_t PID45:1;
      uint64_t PID46:1;
      uint64_t PID47:1;
      uint64_t PID48:1;
      uint64_t PID49:1;
      uint64_t PID50:1;
      uint64_t PID51:1;
      uint64_t PID53:2;
      uint64_t PID54:1;
      uint64_t PID55:1;
      uint64_t PID56:1;
      uint64_t PID57:1;
      uint64_t PID58:1;
      uint64_t PID59:1;
      uint64_t PID60:1;
      uint64_t PID61:1;
      uint64_t PID62:1;
      uint64_t PID63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID32:1;
      uint64_t PID33:1;
      uint64_t PID34:1;
      uint64_t PID35:1;
      uint64_t PID36:1;
      uint64_t PID37:1;
      uint64_t PID38:1;
      uint64_t PID39:1;
      uint64_t PID40:1;
      uint64_t PID41:1;
      uint64_t PID42:1;
      uint64_t PID43:1;
      uint64_t PID44:1;
      uint64_t PID45:1;
      uint64_t PID46:1;
      uint64_t PID47:1;
      uint64_t PID48:1;
      uint64_t PID49:1;
      uint64_t PID50:1;
      uint64_t PID51:1;
      uint64_t PID53:2;
      uint64_t PID54:1;
      uint64_t PID55:1;
      uint64_t PID56:1;
      uint64_t PID57:1;
      uint64_t PID58:1;
      uint64_t PID59:1;
      uint64_t PID60:1;
      uint64_t PID61:1;
      uint64_t PID62:1;
      uint64_t PID63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:6;
      uint64_t CMD:1;
      uint64_t reservedSpace1:3;
      uint64_t DIV:2;
      uint64_t reservedSpace2:10;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR;

};

#define PMC_1 (*(volatile struct PMC_1_tag *) 0xfffffc00)

struct PWM_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVA:8;
      uint64_t PREA:4;
      uint64_t reservedSpace0:4;
      uint64_t DIVB:8;
      uint64_t PREB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t reservedSpace0:12;
      uint64_t FCHID0:1;
      uint64_t FCHID1:1;
      uint64_t FCHID2:1;
      uint64_t FCHID3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t reservedSpace0:12;
      uint64_t FCHID0:1;
      uint64_t FCHID1:1;
      uint64_t FCHID2:1;
      uint64_t FCHID3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t reservedSpace0:12;
      uint64_t FCHID0:1;
      uint64_t FCHID1:1;
      uint64_t FCHID2:1;
      uint64_t FCHID3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t reservedSpace0:12;
      uint64_t FCHID0:1;
      uint64_t FCHID1:1;
      uint64_t FCHID2:1;
      uint64_t FCHID3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC0:1;
      uint64_t SYNC1:1;
      uint64_t SYNC2:1;
      uint64_t SYNC3:1;
      uint64_t reservedSpace0:12;
      uint64_t UPDM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCM;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPDULOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCUC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPR:4;
      uint64_t UPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCUP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCUPUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRDY:1;
      uint64_t reservedSpace0:2;
      uint64_t UNRE:1;
      uint64_t reservedSpace1:4;
      uint64_t CMPM0:1;
      uint64_t CMPM1:1;
      uint64_t CMPM2:1;
      uint64_t CMPM3:1;
      uint64_t CMPM4:1;
      uint64_t CMPM5:1;
      uint64_t CMPM6:1;
      uint64_t CMPM7:1;
      uint64_t CMPU0:1;
      uint64_t CMPU1:1;
      uint64_t CMPU2:1;
      uint64_t CMPU3:1;
      uint64_t CMPU4:1;
      uint64_t CMPU5:1;
      uint64_t CMPU6:1;
      uint64_t CMPU7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRDY:1;
      uint64_t reservedSpace0:2;
      uint64_t UNRE:1;
      uint64_t reservedSpace1:4;
      uint64_t CMPM0:1;
      uint64_t CMPM1:1;
      uint64_t CMPM2:1;
      uint64_t CMPM3:1;
      uint64_t CMPM4:1;
      uint64_t CMPM5:1;
      uint64_t CMPM6:1;
      uint64_t CMPM7:1;
      uint64_t CMPU0:1;
      uint64_t CMPU1:1;
      uint64_t CMPU2:1;
      uint64_t CMPU3:1;
      uint64_t CMPU4:1;
      uint64_t CMPU5:1;
      uint64_t CMPU6:1;
      uint64_t CMPU7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRDY:1;
      uint64_t reservedSpace0:2;
      uint64_t UNRE:1;
      uint64_t reservedSpace1:4;
      uint64_t CMPM0:1;
      uint64_t CMPM1:1;
      uint64_t CMPM2:1;
      uint64_t CMPM3:1;
      uint64_t CMPM4:1;
      uint64_t CMPM5:1;
      uint64_t CMPM6:1;
      uint64_t CMPM7:1;
      uint64_t CMPU0:1;
      uint64_t CMPU1:1;
      uint64_t CMPU2:1;
      uint64_t CMPU3:1;
      uint64_t CMPU4:1;
      uint64_t CMPU5:1;
      uint64_t CMPU6:1;
      uint64_t CMPU7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRDY:1;
      uint64_t reservedSpace0:2;
      uint64_t UNRE:1;
      uint64_t reservedSpace1:4;
      uint64_t CMPM0:1;
      uint64_t CMPM1:1;
      uint64_t CMPM2:1;
      uint64_t CMPM3:1;
      uint64_t CMPM4:1;
      uint64_t CMPM5:1;
      uint64_t CMPM6:1;
      uint64_t CMPM7:1;
      uint64_t CMPU0:1;
      uint64_t CMPU1:1;
      uint64_t CMPU2:1;
      uint64_t CMPU3:1;
      uint64_t CMPU4:1;
      uint64_t CMPU5:1;
      uint64_t CMPU6:1;
      uint64_t CMPU7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OOVH0:1;
      uint64_t OOVH1:1;
      uint64_t OOVH2:1;
      uint64_t OOVH3:1;
      uint64_t reservedSpace0:12;
      uint64_t OOVL0:1;
      uint64_t OOVL1:1;
      uint64_t OOVL2:1;
      uint64_t OOVL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OOV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSH0:1;
      uint64_t OSH1:1;
      uint64_t OSH2:1;
      uint64_t OSH3:1;
      uint64_t reservedSpace0:12;
      uint64_t OSL0:1;
      uint64_t OSL1:1;
      uint64_t OSL2:1;
      uint64_t OSL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSSH0:1;
      uint64_t OSSH1:1;
      uint64_t OSSH2:1;
      uint64_t OSSH3:1;
      uint64_t reservedSpace0:12;
      uint64_t OSSL0:1;
      uint64_t OSSL1:1;
      uint64_t OSSL2:1;
      uint64_t OSSL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSCH0:1;
      uint64_t OSCH1:1;
      uint64_t OSCH2:1;
      uint64_t OSCH3:1;
      uint64_t reservedSpace0:12;
      uint64_t OSCL0:1;
      uint64_t OSCL1:1;
      uint64_t OSCL2:1;
      uint64_t OSCL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSSUPH0:1;
      uint64_t OSSUPH1:1;
      uint64_t OSSUPH2:1;
      uint64_t OSSUPH3:1;
      uint64_t reservedSpace0:12;
      uint64_t OSSUPL0:1;
      uint64_t OSSUPL1:1;
      uint64_t OSSUPL2:1;
      uint64_t OSSUPL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSSUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSCUPH0:1;
      uint64_t OSCUPH1:1;
      uint64_t OSCUPH2:1;
      uint64_t OSCUPH3:1;
      uint64_t reservedSpace0:12;
      uint64_t OSCUPL0:1;
      uint64_t OSCUPL1:1;
      uint64_t OSCUPL2:1;
      uint64_t OSCUPL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPOL:8;
      uint64_t FMOD:8;
      uint64_t FFIL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIV:8;
      uint64_t FS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCLR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPVH0:1;
      uint64_t FPVH1:1;
      uint64_t FPVH2:1;
      uint64_t FPVH3:1;
      uint64_t reservedSpace0:12;
      uint64_t FPVL0:1;
      uint64_t FPVL1:1;
      uint64_t FPVL2:1;
      uint64_t FPVL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPV1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPE0:8;
      uint64_t FPE1:8;
      uint64_t FPE2:8;
      uint64_t FPE3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPE;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSEL0:1;
      uint64_t CSEL1:1;
      uint64_t CSEL2:1;
      uint64_t CSEL3:1;
      uint64_t CSEL4:1;
      uint64_t CSEL5:1;
      uint64_t CSEL6:1;
      uint64_t CSEL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELMR;

  uint8_t res2[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPZH0:1;
      uint64_t FPZH1:1;
      uint64_t FPZH2:1;
      uint64_t FPZH3:1;
      uint64_t reservedSpace0:12;
      uint64_t FPZL0:1;
      uint64_t FPZL1:1;
      uint64_t FPZL2:1;
      uint64_t FPZL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPV2;

  uint8_t res3[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPCMD:2;
      uint64_t WPRG0:1;
      uint64_t WPRG1:1;
      uint64_t WPRG2:1;
      uint64_t WPRG3:1;
      uint64_t WPRG4:1;
      uint64_t WPRG5:1;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPSWS0:1;
      uint64_t WPSWS1:1;
      uint64_t WPSWS2:1;
      uint64_t WPSWS3:1;
      uint64_t WPSWS4:1;
      uint64_t WPSWS5:1;
      uint64_t reservedSpace0:1;
      uint64_t WPVS:1;
      uint64_t WPHWS0:1;
      uint64_t WPHWS1:1;
      uint64_t WPHWS2:1;
      uint64_t WPHWS3:1;
      uint64_t WPHWS4:1;
      uint64_t WPHWS5:1;
      uint64_t reservedSpace1:2;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

  uint8_t res4[68];

  uint32_t CMPV0;
  uint32_t CMPVUPD0;
  uint32_t CMPM0;
  uint32_t CMPMUPD0;
  uint32_t CMPV1;
  uint32_t CMPVUPD1;
  uint32_t CMPM1;
  uint32_t CMPMUPD1;
  uint32_t CMPV2;
  uint32_t CMPVUPD2;
  uint32_t CMPM2;
  uint32_t CMPMUPD2;
  uint32_t CMPV3;
  uint32_t CMPVUPD3;
  uint32_t CMPM3;
  uint32_t CMPMUPD3;
  uint32_t CMPV4;
  uint32_t CMPVUPD4;
  uint32_t CMPM4;
  uint32_t CMPMUPD4;
  uint32_t CMPV5;
  uint32_t CMPVUPD5;
  uint32_t CMPM5;
  uint32_t CMPMUPD5;
  uint32_t CMPV6;
  uint32_t CMPVUPD6;
  uint32_t CMPM6;
  uint32_t CMPMUPD6;
  uint32_t CMPV7;
  uint32_t CMPVUPD7;
  uint32_t CMPM7;
  uint32_t CMPMUPD7;
  uint8_t res5[80];

  uint32_t CMR0;
  uint32_t CDTY0;
  uint32_t CDTYUPD0;
  uint32_t CPRD0;
  uint32_t CPRDUPD0;
  uint32_t CCNT0;
  uint32_t DT0;
  uint32_t DTUPD0;
  uint32_t CMR1;
  uint32_t CDTY1;
  uint32_t CDTYUPD1;
  uint32_t CPRD1;
  uint32_t CPRDUPD1;
  uint32_t CCNT1;
  uint32_t DT1;
  uint32_t DTUPD1;
  uint32_t CMR2;
  uint32_t CDTY2;
  uint32_t CDTYUPD2;
  uint32_t CPRD2;
  uint32_t CPRDUPD2;
  uint32_t CCNT2;
  uint32_t DT2;
  uint32_t DTUPD2;
  uint32_t CMR3;
  uint32_t CDTY3;
  uint32_t CDTYUPD3;
  uint32_t CPRD3;
  uint32_t CPRDUPD3;
  uint32_t CCNT3;
  uint32_t DT3;
  uint32_t DTUPD3;
  uint8_t res6[384];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t CPOLUP:1;
      uint64_t reservedSpace1:3;
      uint64_t CPOLINVUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMUPD0;

  uint8_t res7[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t CPOLUP:1;
      uint64_t reservedSpace1:3;
      uint64_t CPOLINVUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMUPD1;

  uint8_t res8[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t CPOLUP:1;
      uint64_t reservedSpace1:3;
      uint64_t CPOLINVUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMUPD2;

  uint8_t res9[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t CPOLUP:1;
      uint64_t reservedSpace1:3;
      uint64_t CPOLINVUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMUPD3;

};

#define PWM_1 (*(volatile struct PWM_1_tag *) 0xf002c000)

struct RSTC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCRST:1;
      uint64_t reservedSpace0:1;
      uint64_t PERRST:1;
      uint64_t EXTRST:1;
      uint64_t reservedSpace1:20;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t URSTS:1;
      uint64_t reservedSpace0:7;
      uint64_t RSTTYP:3;
      uint64_t reservedSpace1:5;
      uint64_t NRSTL:1;
      uint64_t SRCMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t ERSTL:4;
      uint64_t reservedSpace1:12;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

};

#define RSTC_1 (*(volatile struct RSTC_1_tag *) 0xfffffe00)

struct RTC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPDTIM:1;
      uint64_t UPDCAL:1;
      uint64_t reservedSpace0:6;
      uint64_t TIMEVSEL:2;
      uint64_t reservedSpace1:6;
      uint64_t CALEVSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC:7;
      uint64_t reservedSpace0:1;
      uint64_t MIN:7;
      uint64_t reservedSpace1:1;
      uint64_t HOUR:6;
      uint64_t AMPM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENT:7;
      uint64_t reservedSpace0:1;
      uint64_t YEAR:8;
      uint64_t MONTH:5;
      uint64_t DAY:3;
      uint64_t DATE:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC:7;
      uint64_t SECEN:1;
      uint64_t MIN:7;
      uint64_t MINEN:1;
      uint64_t HOUR:6;
      uint64_t AMPM:1;
      uint64_t HOUREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMALR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MONTH:5;
      uint64_t reservedSpace1:2;
      uint64_t MTHEN:1;
      uint64_t DATE:6;
      uint64_t reservedSpace2:1;
      uint64_t DATEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALALR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKUPD:1;
      uint64_t ALARM:1;
      uint64_t SEC:1;
      uint64_t TIMEV:1;
      uint64_t CALEV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKCLR:1;
      uint64_t ALRCLR:1;
      uint64_t SECCLR:1;
      uint64_t TIMCLR:1;
      uint64_t CALCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKEN:1;
      uint64_t ALREN:1;
      uint64_t SECEN:1;
      uint64_t TIMEN:1;
      uint64_t CALEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKDIS:1;
      uint64_t ALRDIS:1;
      uint64_t SECDIS:1;
      uint64_t TIMDIS:1;
      uint64_t CALDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACK:1;
      uint64_t ALR:1;
      uint64_t SEC:1;
      uint64_t TIM:1;
      uint64_t CAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NVTIM:1;
      uint64_t NVCAL:1;
      uint64_t NVTIMALR:1;
      uint64_t NVCALALR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VER;

};

#define RTC_1 (*(volatile struct RTC_1_tag *) 0xfffffeb0)

struct SCKC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCEN:1;
      uint64_t OSC32EN:1;
      uint64_t OSC32BYP:1;
      uint64_t OSCSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

};

#define SCKC_1 (*(volatile struct SCKC_1_tag *) 0xfffffe50)

struct SFR_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES0:1;
      uint64_t RES1:1;
      uint64_t RES2:1;
      uint64_t reservedSpace0:1;
      uint64_t ARIE:1;
      uint64_t APPSTART:1;
      uint64_t reservedSpace1:17;
      uint64_t UDPPUDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OHCIICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIS0:1;
      uint64_t RIS1:1;
      uint64_t RIS2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OHCIISR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t PFETCH10:1;
      uint64_t PFETCH11:1;
      uint64_t PFETCH12:1;
      uint64_t PFETCH13:1;
      uint64_t PFETCH14:1;
      uint64_t reservedSpace1:11;
      uint64_t DLBOPT10:1;
      uint64_t DLBOPT11:1;
      uint64_t DLBOPT12:1;
      uint64_t DLBOPT13:1;
      uint64_t DLBOPT14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APBTURBO:1;
      uint64_t reservedSpace0:7;
      uint64_t AXI2AHBSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRIDGE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ROM:1;
      uint64_t reservedSpace0:7;
      uint64_t FUSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECURE;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FREQ:2;
      uint64_t reservedSpace0:14;
      uint64_t VBG:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UTMICKTRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQUELCH:3;
      uint64_t reservedSpace0:1;
      uint64_t DISC:3;
      uint64_t reservedSpace1:1;
      uint64_t SLOPE0:3;
      uint64_t reservedSpace2:1;
      uint64_t SLOPE1:3;
      uint64_t reservedSpace3:1;
      uint64_t SLOPE2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UTMIHSTRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RISE:3;
      uint64_t reservedSpace0:1;
      uint64_t FALL:3;
      uint64_t reservedSpace1:1;
      uint64_t XCVR:2;
      uint64_t reservedSpace2:6;
      uint64_t ZN:3;
      uint64_t reservedSpace3:1;
      uint64_t ZP:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UTMIFSTRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT0:1;
      uint64_t PORT1:1;
      uint64_t PORT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UTMISWAP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRIVE0:2;
      uint64_t PULL0:2;
      uint64_t SCH0:1;
      uint64_t reservedSpace0:3;
      uint64_t DRIVE1:2;
      uint64_t PULL1:2;
      uint64_t SCH1:1;
      uint64_t reservedSpace1:3;
      uint64_t BMS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EBICFG;

};

#define SFR_1 (*(volatile struct SFR_1_tag *) 0xf0038010)

struct SHA_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t reservedSpace0:3;
      uint64_t FIRST:1;
      uint64_t reservedSpace1:3;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMOD:2;
      uint64_t reservedSpace0:2;
      uint64_t PROCDLY:1;
      uint64_t reservedSpace1:3;
      uint64_t ALGO:3;
      uint64_t reservedSpace2:5;
      uint64_t DUALBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t URAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t URAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t URAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t URAD:1;
      uint64_t reservedSpace1:3;
      uint64_t URAT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res1[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDATAR;

  uint8_t res2[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IODATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IODATAR;

};

#define SHA_1 (*(volatile struct SHA_1_tag *) 0xf8034000)

struct SHDWC_1_tag
{
  uint32_t CR;
  uint32_t MR;
  uint32_t SR;
};

#define SHDWC_1 (*(volatile struct SHDWC_1_tag *) 0xfffffe10)

struct SMC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAGESIZE:3;
      uint64_t reservedSpace0:5;
      uint64_t WSPARE:1;
      uint64_t RSPARE:1;
      uint64_t reservedSpace1:2;
      uint64_t EDGECTRL:1;
      uint64_t RBEDGE:1;
      uint64_t reservedSpace2:2;
      uint64_t DTOCYC:4;
      uint64_t DTOMUL:3;
      uint64_t reservedSpace3:1;
      uint64_t NFCSPARESIZE:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFCEN:1;
      uint64_t NFCDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMCSTS:1;
      uint64_t reservedSpace0:3;
      uint64_t RB_RISE:1;
      uint64_t RB_FALL:1;
      uint64_t reservedSpace1:2;
      uint64_t NFCBUSY:1;
      uint64_t reservedSpace2:2;
      uint64_t NFCWR:1;
      uint64_t NFCSID:3;
      uint64_t reservedSpace3:1;
      uint64_t XFRDONE:1;
      uint64_t CMDDONE:1;
      uint64_t ECCRDY:1;
      uint64_t reservedSpace4:1;
      uint64_t DTOE:1;
      uint64_t UNDEF:1;
      uint64_t AWB:1;
      uint64_t NFCASE:1;
      uint64_t RB_EDGE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RB_RISE:1;
      uint64_t RB_FALL:1;
      uint64_t reservedSpace1:10;
      uint64_t XFRDONE:1;
      uint64_t CMDDONE:1;
      uint64_t reservedSpace2:2;
      uint64_t DTOE:1;
      uint64_t UNDEF:1;
      uint64_t AWB:1;
      uint64_t NFCASE:1;
      uint64_t RB_EDGE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RB_RISE:1;
      uint64_t RB_FALL:1;
      uint64_t reservedSpace1:10;
      uint64_t XFRDONE:1;
      uint64_t CMDDONE:1;
      uint64_t reservedSpace2:2;
      uint64_t DTOE:1;
      uint64_t UNDEF:1;
      uint64_t AWB:1;
      uint64_t NFCASE:1;
      uint64_t RB_EDGE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RB_RISE:1;
      uint64_t RB_FALL:1;
      uint64_t reservedSpace1:10;
      uint64_t XFRDONE:1;
      uint64_t CMDDONE:1;
      uint64_t reservedSpace2:2;
      uint64_t DTOE:1;
      uint64_t UNDEF:1;
      uint64_t AWB:1;
      uint64_t NFCASE:1;
      uint64_t RB_EDGE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR_CYCLE0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BANK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECC_PAGESIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t TYPCORREC:2;
      uint64_t reservedSpace1:2;
      uint64_t HAMMING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_MD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RECERR0:1;
      uint64_t ECCERR0:1;
      uint64_t MULERR0:1;
      uint64_t reservedSpace0:1;
      uint64_t RECERR1:1;
      uint64_t ECCERR1:1;
      uint64_t MULERR1:1;
      uint64_t reservedSpace1:1;
      uint64_t RECERR2:1;
      uint64_t ECCERR2:1;
      uint64_t MULERR2:1;
      uint64_t reservedSpace2:1;
      uint64_t RECERR3:1;
      uint64_t ECCERR3:1;
      uint64_t MULERR3:1;
      uint64_t reservedSpace3:1;
      uint64_t RECERR4:1;
      uint64_t ECCERR4:1;
      uint64_t MULERR4:1;
      uint64_t reservedSpace4:1;
      uint64_t RECERR5:1;
      uint64_t ECCERR5:1;
      uint64_t MULERR5:1;
      uint64_t reservedSpace5:1;
      uint64_t RECERR6:1;
      uint64_t ECCERR6:1;
      uint64_t MULERR6:1;
      uint64_t reservedSpace6:1;
      uint64_t RECERR7:1;
      uint64_t ECCERR7:1;
      uint64_t MULERR7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:4;
      uint64_t BITADDR_W9BIT:3;
      uint64_t BITADDR_W8BIT:3;
      uint64_t WORDADDR_W9BIT:9;
      uint64_t WORDADDR_W8BIT:8;
      uint64_t WORDADDR:12;
      uint64_t NPARITY:12;
      uint64_t NPARITY_W8BIT:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NPARITY:16;
      uint64_t BITADDR:3;
      uint64_t WORDADDR:9;
      uint64_t WORDADDR_W8BIT:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY_W9BIT:12;
      uint64_t NPARITY_W8BIT:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RECERR8:1;
      uint64_t ECCERR8:1;
      uint64_t MULERR8:1;
      uint64_t reservedSpace0:1;
      uint64_t RECERR9:1;
      uint64_t ECCERR9:1;
      uint64_t MULERR9:1;
      uint64_t reservedSpace1:1;
      uint64_t RECERR10:1;
      uint64_t ECCERR10:1;
      uint64_t MULERR10:1;
      uint64_t reservedSpace2:1;
      uint64_t RECERR11:1;
      uint64_t ECCERR11:1;
      uint64_t MULERR11:1;
      uint64_t reservedSpace3:1;
      uint64_t RECERR12:1;
      uint64_t ECCERR12:1;
      uint64_t MULERR12:1;
      uint64_t reservedSpace4:1;
      uint64_t RECERR13:1;
      uint64_t ECCERR13:1;
      uint64_t MULERR13:1;
      uint64_t reservedSpace5:1;
      uint64_t RECERR14:1;
      uint64_t ECCERR14:1;
      uint64_t MULERR14:1;
      uint64_t reservedSpace6:1;
      uint64_t RECERR15:1;
      uint64_t ECCERR15:1;
      uint64_t MULERR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:9;
      uint64_t WORDADDR_W8BIT:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:12;
      uint64_t NPARITY_W8BIT:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:9;
      uint64_t WORDADDR_W8BIT:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:12;
      uint64_t NPARITY_W8BIT:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:9;
      uint64_t WORDADDR_W8BIT:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:12;
      uint64_t NPARITY_W8BIT:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:9;
      uint64_t WORDADDR_W8BIT:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:12;
      uint64_t NPARITY_W8BIT:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:9;
      uint64_t WORDADDR_W8BIT:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:12;
      uint64_t NPARITY_W8BIT:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:9;
      uint64_t WORDADDR_W8BIT:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:12;
      uint64_t NPARITY_W8BIT:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITADDR:3;
      uint64_t WORDADDR:8;
      uint64_t reservedSpace0:1;
      uint64_t NPARITY:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_PR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCH_ERR:3;
      uint64_t reservedSpace0:1;
      uint64_t SECTORSZ:1;
      uint64_t reservedSpace1:3;
      uint64_t PAGESIZE:2;
      uint64_t reservedSpace2:2;
      uint64_t NANDWR:1;
      uint64_t reservedSpace3:3;
      uint64_t SPAREEN:1;
      uint64_t reservedSpace4:3;
      uint64_t AUTO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMECCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPARESIZE:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMECCSAREA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTADDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMECCSADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMECCEADDR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
      uint64_t DATA:1;
      uint64_t USER:1;
      uint64_t reservedSpace0:1;
      uint64_t ENABLE:1;
      uint64_t DISABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMECCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t reservedSpace0:3;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMECCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMECCIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMECCIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMECCIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRIS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMECCISR;

  uint8_t res1[20];

  uint32_t PMECC0_0;
  uint32_t PMECC1_0;
  uint32_t PMECC2_0;
  uint32_t PMECC3_0;
  uint32_t PMECC4_0;
  uint32_t PMECC5_0;
  uint32_t PMECC6_0;
  uint32_t PMECC7_0;
  uint32_t PMECC8_0;
  uint32_t PMECC9_0;
  uint32_t PMECC10_0;
  uint8_t res2[20];

  uint32_t PMECC0_1;
  uint32_t PMECC1_1;
  uint32_t PMECC2_1;
  uint32_t PMECC3_1;
  uint32_t PMECC4_1;
  uint32_t PMECC5_1;
  uint32_t PMECC6_1;
  uint32_t PMECC7_1;
  uint32_t PMECC8_1;
  uint32_t PMECC9_1;
  uint32_t PMECC10_1;
  uint8_t res3[20];

  uint32_t PMECC0_2;
  uint32_t PMECC1_2;
  uint32_t PMECC2_2;
  uint32_t PMECC3_2;
  uint32_t PMECC4_2;
  uint32_t PMECC5_2;
  uint32_t PMECC6_2;
  uint32_t PMECC7_2;
  uint32_t PMECC8_2;
  uint32_t PMECC9_2;
  uint32_t PMECC10_2;
  uint8_t res4[20];

  uint32_t PMECC0_3;
  uint32_t PMECC1_3;
  uint32_t PMECC2_3;
  uint32_t PMECC3_3;
  uint32_t PMECC4_3;
  uint32_t PMECC5_3;
  uint32_t PMECC6_3;
  uint32_t PMECC7_3;
  uint32_t PMECC8_3;
  uint32_t PMECC9_3;
  uint32_t PMECC10_3;
  uint8_t res5[20];

  uint32_t PMECC0_4;
  uint32_t PMECC1_4;
  uint32_t PMECC2_4;
  uint32_t PMECC3_4;
  uint32_t PMECC4_4;
  uint32_t PMECC5_4;
  uint32_t PMECC6_4;
  uint32_t PMECC7_4;
  uint32_t PMECC8_4;
  uint32_t PMECC9_4;
  uint32_t PMECC10_4;
  uint8_t res6[20];

  uint32_t PMECC0_5;
  uint32_t PMECC1_5;
  uint32_t PMECC2_5;
  uint32_t PMECC3_5;
  uint32_t PMECC4_5;
  uint32_t PMECC5_5;
  uint32_t PMECC6_5;
  uint32_t PMECC7_5;
  uint32_t PMECC8_5;
  uint32_t PMECC9_5;
  uint32_t PMECC10_5;
  uint8_t res7[20];

  uint32_t PMECC0_6;
  uint32_t PMECC1_6;
  uint32_t PMECC2_6;
  uint32_t PMECC3_6;
  uint32_t PMECC4_6;
  uint32_t PMECC5_6;
  uint32_t PMECC6_6;
  uint32_t PMECC7_6;
  uint32_t PMECC8_6;
  uint32_t PMECC9_6;
  uint32_t PMECC10_6;
  uint8_t res8[20];

  uint32_t PMECC0_7;
  uint32_t PMECC1_7;
  uint32_t PMECC2_7;
  uint32_t PMECC3_7;
  uint32_t PMECC4_7;
  uint32_t PMECC5_7;
  uint32_t PMECC6_7;
  uint32_t PMECC7_7;
  uint32_t PMECC8_7;
  uint32_t PMECC9_7;
  uint32_t PMECC10_7;
  uint8_t res9[20];

  uint32_t REM0_0;
  uint32_t REM1_0;
  uint32_t REM2_0;
  uint32_t REM3_0;
  uint32_t REM4_0;
  uint32_t REM5_0;
  uint32_t REM6_0;
  uint32_t REM7_0;
  uint32_t REM8_0;
  uint32_t REM9_0;
  uint32_t REM10_0;
  uint32_t REM11_0;
  uint8_t res10[16];

  uint32_t REM0_1;
  uint32_t REM1_1;
  uint32_t REM2_1;
  uint32_t REM3_1;
  uint32_t REM4_1;
  uint32_t REM5_1;
  uint32_t REM6_1;
  uint32_t REM7_1;
  uint32_t REM8_1;
  uint32_t REM9_1;
  uint32_t REM10_1;
  uint32_t REM11_1;
  uint8_t res11[16];

  uint32_t REM0_2;
  uint32_t REM1_2;
  uint32_t REM2_2;
  uint32_t REM3_2;
  uint32_t REM4_2;
  uint32_t REM5_2;
  uint32_t REM6_2;
  uint32_t REM7_2;
  uint32_t REM8_2;
  uint32_t REM9_2;
  uint32_t REM10_2;
  uint32_t REM11_2;
  uint8_t res12[16];

  uint32_t REM0_3;
  uint32_t REM1_3;
  uint32_t REM2_3;
  uint32_t REM3_3;
  uint32_t REM4_3;
  uint32_t REM5_3;
  uint32_t REM6_3;
  uint32_t REM7_3;
  uint32_t REM8_3;
  uint32_t REM9_3;
  uint32_t REM10_3;
  uint32_t REM11_3;
  uint8_t res13[16];

  uint32_t REM0_4;
  uint32_t REM1_4;
  uint32_t REM2_4;
  uint32_t REM3_4;
  uint32_t REM4_4;
  uint32_t REM5_4;
  uint32_t REM6_4;
  uint32_t REM7_4;
  uint32_t REM8_4;
  uint32_t REM9_4;
  uint32_t REM10_4;
  uint32_t REM11_4;
  uint8_t res14[16];

  uint32_t REM0_5;
  uint32_t REM1_5;
  uint32_t REM2_5;
  uint32_t REM3_5;
  uint32_t REM4_5;
  uint32_t REM5_5;
  uint32_t REM6_5;
  uint32_t REM7_5;
  uint32_t REM8_5;
  uint32_t REM9_5;
  uint32_t REM10_5;
  uint32_t REM11_5;
  uint8_t res15[16];

  uint32_t REM0_6;
  uint32_t REM1_6;
  uint32_t REM2_6;
  uint32_t REM3_6;
  uint32_t REM4_6;
  uint32_t REM5_6;
  uint32_t REM6_6;
  uint32_t REM7_6;
  uint32_t REM8_6;
  uint32_t REM9_6;
  uint32_t REM10_6;
  uint32_t REM11_6;
  uint8_t res16[16];

  uint32_t REM0_7;
  uint32_t REM1_7;
  uint32_t REM2_7;
  uint32_t REM3_7;
  uint32_t REM4_7;
  uint32_t REM5_7;
  uint32_t REM6_7;
  uint32_t REM7_7;
  uint32_t REM8_7;
  uint32_t REM9_7;
  uint32_t REM10_7;
  uint32_t REM11_7;
  uint8_t res17[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECTORSZ:1;
      uint64_t reservedSpace0:15;
      uint64_t ERRNUM:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIMITIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELPRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENINIT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELDIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t reservedSpace0:7;
      uint64_t ERR_CNT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELISR;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA0:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA1:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA2:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA3:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA4:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA5:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA6:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA7:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA8:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA9:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA10:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA11:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA12:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA13:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA14:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA15:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA16:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA17:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA18:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA19:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA20:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA21:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA22:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA23:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA24:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGMA24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRLOCN:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRLOC;

  uint8_t res19[112];

  uint32_t SETUP0;
  uint32_t PULSE0;
  uint32_t CYCLE0;
  uint32_t TIMINGS0;
  uint32_t MODE0;
  uint32_t SETUP1;
  uint32_t PULSE1;
  uint32_t CYCLE1;
  uint32_t TIMINGS1;
  uint32_t MODE1;
  uint32_t SETUP2;
  uint32_t PULSE2;
  uint32_t CYCLE2;
  uint32_t TIMINGS2;
  uint32_t MODE2;
  uint32_t SETUP3;
  uint32_t PULSE3;
  uint32_t CYCLE3;
  uint32_t TIMINGS3;
  uint32_t MODE3;
  uint8_t res20[80];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMSE:1;
      uint64_t SRSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEY1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEY2;

  uint8_t res21[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t WP_KEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP_VS:4;
      uint64_t reservedSpace0:4;
      uint64_t WP_VSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

};

#define SMC_1 (*(volatile struct SMC_1_tag *) 0xffffc000)

struct SPI_SPI0_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPIEN:1;
      uint64_t SPIDIS:1;
      uint64_t reservedSpace0:5;
      uint64_t SWRST:1;
      uint64_t reservedSpace1:16;
      uint64_t LASTXFER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTR:1;
      uint64_t PS:1;
      uint64_t PCSDEC:1;
      uint64_t reservedSpace0:1;
      uint64_t MODFDIS:1;
      uint64_t WDRBT:1;
      uint64_t reservedSpace1:1;
      uint64_t LLB:1;
      uint64_t reservedSpace2:8;
      uint64_t PCS:4;
      uint64_t reservedSpace3:4;
      uint64_t DLYBCS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD:16;
      uint64_t PCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TD:16;
      uint64_t PCS:4;
      uint64_t reservedSpace0:4;
      uint64_t LASTXFER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
      uint64_t reservedSpace0:5;
      uint64_t SPIENS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPOL:1;
      uint64_t NCPHA:1;
      uint64_t CSNAAT:1;
      uint64_t CSAAT:1;
      uint64_t BITS:4;
      uint64_t SCBR:8;
      uint64_t DLYBS:8;
      uint64_t DLYBCT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  uint8_t res1[176];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

};

#define SPI_SPI0_1 (*(volatile struct SPI_SPI0_1_tag *) 0xf0004000)

struct SPI_SPI1_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPIEN:1;
      uint64_t SPIDIS:1;
      uint64_t reservedSpace0:5;
      uint64_t SWRST:1;
      uint64_t reservedSpace1:16;
      uint64_t LASTXFER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTR:1;
      uint64_t PS:1;
      uint64_t PCSDEC:1;
      uint64_t reservedSpace0:1;
      uint64_t MODFDIS:1;
      uint64_t WDRBT:1;
      uint64_t reservedSpace1:1;
      uint64_t LLB:1;
      uint64_t reservedSpace2:8;
      uint64_t PCS:4;
      uint64_t reservedSpace3:4;
      uint64_t DLYBCS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD:16;
      uint64_t PCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TD:16;
      uint64_t PCS:4;
      uint64_t reservedSpace0:4;
      uint64_t LASTXFER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
      uint64_t reservedSpace0:5;
      uint64_t SPIENS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPOL:1;
      uint64_t NCPHA:1;
      uint64_t CSNAAT:1;
      uint64_t CSAAT:1;
      uint64_t BITS:4;
      uint64_t SCBR:8;
      uint64_t DLYBS:8;
      uint64_t DLYBCT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  uint8_t res1[176];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

};

#define SPI_SPI1_1 (*(volatile struct SPI_SPI1_1_tag *) 0xf8008000)

struct SSC_SSC0_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t reservedSpace1:5;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKS:2;
      uint64_t CKO:3;
      uint64_t CKI:1;
      uint64_t CKG:2;
      uint64_t START:4;
      uint64_t STOP:1;
      uint64_t reservedSpace0:3;
      uint64_t STTDLY:8;
      uint64_t PERIOD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATLEN:5;
      uint64_t LOOP:1;
      uint64_t reservedSpace0:1;
      uint64_t MSBF:1;
      uint64_t DATNB:4;
      uint64_t reservedSpace1:4;
      uint64_t FSLEN:4;
      uint64_t FSOS:3;
      uint64_t reservedSpace2:1;
      uint64_t FSEDGE:1;
      uint64_t reservedSpace3:3;
      uint64_t FSLEN_EXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKS:2;
      uint64_t CKO:3;
      uint64_t CKI:1;
      uint64_t CKG:2;
      uint64_t START:4;
      uint64_t reservedSpace0:4;
      uint64_t STTDLY:8;
      uint64_t PERIOD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATLEN:5;
      uint64_t DATDEF:1;
      uint64_t reservedSpace0:1;
      uint64_t MSBF:1;
      uint64_t DATNB:4;
      uint64_t reservedSpace1:4;
      uint64_t FSLEN:4;
      uint64_t FSOS:3;
      uint64_t FSDEN:1;
      uint64_t FSEDGE:1;
      uint64_t reservedSpace2:3;
      uint64_t FSLEN_EXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSDAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSDAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RC0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RC1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
      uint64_t reservedSpace2:4;
      uint64_t TXEN:1;
      uint64_t RXEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  uint8_t res2[148];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

};

#define SSC_SSC0_1 (*(volatile struct SSC_SSC0_1_tag *) 0xf0008000)

struct SSC_SSC1_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t reservedSpace1:5;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKS:2;
      uint64_t CKO:3;
      uint64_t CKI:1;
      uint64_t CKG:2;
      uint64_t START:4;
      uint64_t STOP:1;
      uint64_t reservedSpace0:3;
      uint64_t STTDLY:8;
      uint64_t PERIOD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATLEN:5;
      uint64_t LOOP:1;
      uint64_t reservedSpace0:1;
      uint64_t MSBF:1;
      uint64_t DATNB:4;
      uint64_t reservedSpace1:4;
      uint64_t FSLEN:4;
      uint64_t FSOS:3;
      uint64_t reservedSpace2:1;
      uint64_t FSEDGE:1;
      uint64_t reservedSpace3:3;
      uint64_t FSLEN_EXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKS:2;
      uint64_t CKO:3;
      uint64_t CKI:1;
      uint64_t CKG:2;
      uint64_t START:4;
      uint64_t reservedSpace0:4;
      uint64_t STTDLY:8;
      uint64_t PERIOD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATLEN:5;
      uint64_t DATDEF:1;
      uint64_t reservedSpace0:1;
      uint64_t MSBF:1;
      uint64_t DATNB:4;
      uint64_t reservedSpace1:4;
      uint64_t FSLEN:4;
      uint64_t FSOS:3;
      uint64_t FSDEN:1;
      uint64_t FSEDGE:1;
      uint64_t reservedSpace2:3;
      uint64_t FSLEN_EXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSDAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSDAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RC0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RC1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
      uint64_t reservedSpace2:4;
      uint64_t TXEN:1;
      uint64_t RXEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  uint8_t res2[148];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPSR;

};

#define SSC_SSC1_1 (*(volatile struct SSC_SSC1_1_tag *) 0xf800c000)

struct TC_TC0_1_tag
{
  uint32_t CCR0;
  uint32_t CMR0;
  uint8_t res0[4];

  uint32_t RAB0;
  uint32_t CV0;
  uint32_t RA0;
  uint32_t RB0;
  uint32_t RC0;
  uint32_t SR0;
  uint32_t IER0;
  uint32_t IDR0;
  uint32_t IMR0;
  uint8_t res1[16];

  uint32_t CCR1;
  uint32_t CMR1;
  uint8_t res2[4];

  uint32_t RAB1;
  uint32_t CV1;
  uint32_t RA1;
  uint32_t RB1;
  uint32_t RC1;
  uint32_t SR1;
  uint32_t IER1;
  uint32_t IDR1;
  uint32_t IMR1;
  uint8_t res3[16];

  uint32_t CCR2;
  uint32_t CMR2;
  uint8_t res4[4];

  uint32_t RAB2;
  uint32_t CV2;
  uint32_t RA2;
  uint32_t RB2;
  uint32_t RC2;
  uint32_t SR2;
  uint32_t IER2;
  uint32_t IDR2;
  uint32_t IMR2;
  uint8_t res5[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC0XC0S:2;
      uint64_t TC1XC1S:2;
      uint64_t TC2XC2S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BMR;

};

#define TC_TC0_1 (*(volatile struct TC_TC0_1_tag *) 0xf0010000)

struct TC_TC1_1_tag
{
  uint32_t CCR0;
  uint32_t CMR0;
  uint8_t res0[4];

  uint32_t RAB0;
  uint32_t CV0;
  uint32_t RA0;
  uint32_t RB0;
  uint32_t RC0;
  uint32_t SR0;
  uint32_t IER0;
  uint32_t IDR0;
  uint32_t IMR0;
  uint8_t res1[16];

  uint32_t CCR1;
  uint32_t CMR1;
  uint8_t res2[4];

  uint32_t RAB1;
  uint32_t CV1;
  uint32_t RA1;
  uint32_t RB1;
  uint32_t RC1;
  uint32_t SR1;
  uint32_t IER1;
  uint32_t IDR1;
  uint32_t IMR1;
  uint8_t res3[16];

  uint32_t CCR2;
  uint32_t CMR2;
  uint8_t res4[4];

  uint32_t RAB2;
  uint32_t CV2;
  uint32_t RA2;
  uint32_t RB2;
  uint32_t RC2;
  uint32_t SR2;
  uint32_t IER2;
  uint32_t IDR2;
  uint32_t IMR2;
  uint8_t res5[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC0XC0S:2;
      uint64_t TC1XC1S:2;
      uint64_t TC2XC2S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BMR;

};

#define TC_TC1_1 (*(volatile struct TC_TC1_1_tag *) 0xf8014000)

struct TDES_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t reservedSpace0:7;
      uint64_t SWRST:1;
      uint64_t reservedSpace1:7;
      uint64_t LOADSEED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIPHER:1;
      uint64_t TDESMOD:2;
      uint64_t reservedSpace0:1;
      uint64_t KEYMOD:1;
      uint64_t reservedSpace1:3;
      uint64_t SMOD:2;
      uint64_t reservedSpace2:2;
      uint64_t OPMOD:2;
      uint64_t reservedSpace3:1;
      uint64_t LOD:1;
      uint64_t CFBS:2;
      uint64_t reservedSpace4:2;
      uint64_t CKEY:4;
      uint64_t CMTYP1:1;
      uint64_t CMTYP2:1;
      uint64_t CMTYP3:1;
      uint64_t CMTYP4:1;
      uint64_t CMTYP5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t URAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t URAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t URAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t URAD:1;
      uint64_t reservedSpace1:3;
      uint64_t URAT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY1W:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEY1WR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY2W:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEY2WR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY3W:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEY3WR;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDATAR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODATAR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IVR;

  uint8_t res6[12];

  uint32_t XTEARNDR;
};

#define TDES_1 (*(volatile struct TDES_1_tag *) 0xf803c000)

struct TRNG_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:7;
      uint64_t KEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res1[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODATA;

};

#define TRNG_1 (*(volatile struct TRNG_1_tag *) 0xf8040000)

struct TWI_TWI0_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t MSEN:1;
      uint64_t MSDIS:1;
      uint64_t SVEN:1;
      uint64_t SVDIS:1;
      uint64_t QUICK:1;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t IADRSZ:2;
      uint64_t reservedSpace1:2;
      uint64_t MREAD:1;
      uint64_t reservedSpace2:3;
      uint64_t DADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IADR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLDIV:8;
      uint64_t CHDIV:8;
      uint64_t CKDIV:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWGR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t SVREAD:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace0:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCLWS:1;
      uint64_t EOSACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THR;

  uint8_t res1[172];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPROT:1;
      uint64_t reservedSpace0:7;
      uint64_t SECURITY_CODE:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPROT_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPROTERR:1;
      uint64_t reservedSpace0:7;
      uint64_t WPROTADDR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPROT_STATUS;

};

#define TWI_TWI0_1 (*(volatile struct TWI_TWI0_1_tag *) 0xf0014000)

struct TWI_TWI1_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t MSEN:1;
      uint64_t MSDIS:1;
      uint64_t SVEN:1;
      uint64_t SVDIS:1;
      uint64_t QUICK:1;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t IADRSZ:2;
      uint64_t reservedSpace1:2;
      uint64_t MREAD:1;
      uint64_t reservedSpace2:3;
      uint64_t DADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IADR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLDIV:8;
      uint64_t CHDIV:8;
      uint64_t CKDIV:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWGR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t SVREAD:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace0:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCLWS:1;
      uint64_t EOSACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THR;

  uint8_t res1[172];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPROT:1;
      uint64_t reservedSpace0:7;
      uint64_t SECURITY_CODE:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPROT_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPROTERR:1;
      uint64_t reservedSpace0:7;
      uint64_t WPROTADDR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPROT_STATUS;

};

#define TWI_TWI1_1 (*(volatile struct TWI_TWI1_1_tag *) 0xf0018000)

struct TWI_TWI2_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t MSEN:1;
      uint64_t MSDIS:1;
      uint64_t SVEN:1;
      uint64_t SVDIS:1;
      uint64_t QUICK:1;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t IADRSZ:2;
      uint64_t reservedSpace1:2;
      uint64_t MREAD:1;
      uint64_t reservedSpace2:3;
      uint64_t DADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IADR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLDIV:8;
      uint64_t CHDIV:8;
      uint64_t CKDIV:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWGR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t SVREAD:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace0:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCLWS:1;
      uint64_t EOSACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THR;

  uint8_t res1[172];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPROT:1;
      uint64_t reservedSpace0:7;
      uint64_t SECURITY_CODE:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPROT_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPROTERR:1;
      uint64_t reservedSpace0:7;
      uint64_t WPROTADDR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPROT_STATUS;

};

#define TWI_TWI2_1 (*(volatile struct TWI_TWI2_1_tag *) 0xf801c000)

struct UART_UART0_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RSTRX:1;
      uint64_t RSTTX:1;
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t RSTSTA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t PAR:3;
      uint64_t reservedSpace1:2;
      uint64_t CHMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRGR;

};

#define UART_UART0_1 (*(volatile struct UART_UART0_1_tag *) 0xf0024000)

struct UART_UART1_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RSTRX:1;
      uint64_t RSTTX:1;
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t RSTSTA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t PAR:3;
      uint64_t reservedSpace1:2;
      uint64_t CHMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRGR;

};

#define UART_UART1_1 (*(volatile struct UART_UART1_1_tag *) 0xf8028000)

struct UDPHS_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEV_ADDR:7;
      uint64_t FADDR_EN:1;
      uint64_t EN_UDPHS:1;
      uint64_t DETACH:1;
      uint64_t REWAKEUP:1;
      uint64_t PULLD_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MICRO_FRAME_NUM:3;
      uint64_t FRAME_NUMBER:11;
      uint64_t reservedSpace0:17;
      uint64_t FNUM_ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FNUM;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DET_SUSPD:1;
      uint64_t MICRO_SOF:1;
      uint64_t INT_SOF:1;
      uint64_t ENDRESET:1;
      uint64_t WAKE_UP:1;
      uint64_t ENDOFRSM:1;
      uint64_t UPSTR_RES:1;
      uint64_t EPT_0:1;
      uint64_t EPT_1:1;
      uint64_t EPT_2:1;
      uint64_t EPT_3:1;
      uint64_t EPT_4:1;
      uint64_t EPT_5:1;
      uint64_t EPT_6:1;
      uint64_t EPT_7:1;
      uint64_t EPT_8:1;
      uint64_t EPT_9:1;
      uint64_t EPT_10:1;
      uint64_t EPT_11:1;
      uint64_t EPT_12:1;
      uint64_t EPT_13:1;
      uint64_t EPT_14:1;
      uint64_t EPT_15:1;
      uint64_t reservedSpace1:1;
      uint64_t DMA_1:1;
      uint64_t DMA_2:1;
      uint64_t DMA_3:1;
      uint64_t DMA_4:1;
      uint64_t DMA_5:1;
      uint64_t DMA_6:1;
      uint64_t DMA_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPEED:1;
      uint64_t DET_SUSPD:1;
      uint64_t MICRO_SOF:1;
      uint64_t INT_SOF:1;
      uint64_t ENDRESET:1;
      uint64_t WAKE_UP:1;
      uint64_t ENDOFRSM:1;
      uint64_t UPSTR_RES:1;
      uint64_t EPT_0:1;
      uint64_t EPT_1:1;
      uint64_t EPT_2:1;
      uint64_t EPT_3:1;
      uint64_t EPT_4:1;
      uint64_t EPT_5:1;
      uint64_t EPT_6:1;
      uint64_t EPT_7:1;
      uint64_t EPT_8:1;
      uint64_t EPT_9:1;
      uint64_t EPT_10:1;
      uint64_t EPT_11:1;
      uint64_t EPT_12:1;
      uint64_t EPT_13:1;
      uint64_t EPT_14:1;
      uint64_t EPT_15:1;
      uint64_t reservedSpace0:1;
      uint64_t DMA_1:1;
      uint64_t DMA_2:1;
      uint64_t DMA_3:1;
      uint64_t DMA_4:1;
      uint64_t DMA_5:1;
      uint64_t DMA_6:1;
      uint64_t DMA_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DET_SUSPD:1;
      uint64_t MICRO_SOF:1;
      uint64_t INT_SOF:1;
      uint64_t ENDRESET:1;
      uint64_t WAKE_UP:1;
      uint64_t ENDOFRSM:1;
      uint64_t UPSTR_RES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLRINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPT_0:1;
      uint64_t EPT_1:1;
      uint64_t EPT_2:1;
      uint64_t EPT_3:1;
      uint64_t EPT_4:1;
      uint64_t EPT_5:1;
      uint64_t EPT_6:1;
      uint64_t EPT_7:1;
      uint64_t EPT_8:1;
      uint64_t EPT_9:1;
      uint64_t EPT_10:1;
      uint64_t EPT_11:1;
      uint64_t EPT_12:1;
      uint64_t EPT_13:1;
      uint64_t EPT_14:1;
      uint64_t EPT_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPTRST;

  uint8_t res1[192];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPEED_CFG:2;
      uint64_t TST_J:1;
      uint64_t TST_K:1;
      uint64_t TST_PKT:1;
      uint64_t OPMODE2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TST;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IP_NAME1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPNAME1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IP_NAME2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPNAME2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPT_NBR_MAX:4;
      uint64_t DMA_CHANNEL_NBR:3;
      uint64_t DMA_B_SIZ:1;
      uint64_t DMA_FIFO_WORD_DEPTH:4;
      uint64_t FIFO_MAX_SIZE:3;
      uint64_t BW_DPRAM:1;
      uint64_t DATAB16_8:1;
      uint64_t ISO_EPT_1:1;
      uint64_t ISO_EPT_2:1;
      uint64_t ISO_EPT_3:1;
      uint64_t ISO_EPT_4:1;
      uint64_t ISO_EPT_5:1;
      uint64_t ISO_EPT_6:1;
      uint64_t ISO_EPT_7:1;
      uint64_t ISO_EPT_8:1;
      uint64_t ISO_EPT_9:1;
      uint64_t ISO_EPT_10:1;
      uint64_t ISO_EPT_11:1;
      uint64_t ISO_EPT_12:1;
      uint64_t ISO_EPT_13:1;
      uint64_t ISO_EPT_14:1;
      uint64_t ISO_EPT_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPFEATURES;

  uint8_t res3[4];

  uint32_t EPTCFG0;
  uint32_t EPTCTLENB0;
  uint32_t EPTCTLDIS0;
  uint32_t EPTCTL0;
  uint8_t res4[4];

  uint32_t EPTSETSTA0;
  uint32_t EPTCLRSTA0;
  uint32_t EPTSTA0;
  uint32_t EPTCFG1;
  uint32_t EPTCTLENB1;
  uint32_t EPTCTLDIS1;
  uint32_t EPTCTL1;
  uint8_t res5[4];

  uint32_t EPTSETSTA1;
  uint32_t EPTCLRSTA1;
  uint32_t EPTSTA1;
  uint32_t EPTCFG2;
  uint32_t EPTCTLENB2;
  uint32_t EPTCTLDIS2;
  uint32_t EPTCTL2;
  uint8_t res6[4];

  uint32_t EPTSETSTA2;
  uint32_t EPTCLRSTA2;
  uint32_t EPTSTA2;
  uint32_t EPTCFG3;
  uint32_t EPTCTLENB3;
  uint32_t EPTCTLDIS3;
  uint32_t EPTCTL3;
  uint8_t res7[4];

  uint32_t EPTSETSTA3;
  uint32_t EPTCLRSTA3;
  uint32_t EPTSTA3;
  uint32_t EPTCFG4;
  uint32_t EPTCTLENB4;
  uint32_t EPTCTLDIS4;
  uint32_t EPTCTL4;
  uint8_t res8[4];

  uint32_t EPTSETSTA4;
  uint32_t EPTCLRSTA4;
  uint32_t EPTSTA4;
  uint32_t EPTCFG5;
  uint32_t EPTCTLENB5;
  uint32_t EPTCTLDIS5;
  uint32_t EPTCTL5;
  uint8_t res9[4];

  uint32_t EPTSETSTA5;
  uint32_t EPTCLRSTA5;
  uint32_t EPTSTA5;
  uint32_t EPTCFG6;
  uint32_t EPTCTLENB6;
  uint32_t EPTCTLDIS6;
  uint32_t EPTCTL6;
  uint8_t res10[4];

  uint32_t EPTSETSTA6;
  uint32_t EPTCLRSTA6;
  uint32_t EPTSTA6;
  uint32_t EPTCFG7;
  uint32_t EPTCTLENB7;
  uint32_t EPTCTLDIS7;
  uint32_t EPTCTL7;
  uint8_t res11[4];

  uint32_t EPTSETSTA7;
  uint32_t EPTCLRSTA7;
  uint32_t EPTSTA7;
  uint32_t EPTCFG8;
  uint32_t EPTCTLENB8;
  uint32_t EPTCTLDIS8;
  uint32_t EPTCTL8;
  uint8_t res12[4];

  uint32_t EPTSETSTA8;
  uint32_t EPTCLRSTA8;
  uint32_t EPTSTA8;
  uint32_t EPTCFG9;
  uint32_t EPTCTLENB9;
  uint32_t EPTCTLDIS9;
  uint32_t EPTCTL9;
  uint8_t res13[4];

  uint32_t EPTSETSTA9;
  uint32_t EPTCLRSTA9;
  uint32_t EPTSTA9;
  uint32_t EPTCFG10;
  uint32_t EPTCTLENB10;
  uint32_t EPTCTLDIS10;
  uint32_t EPTCTL10;
  uint8_t res14[4];

  uint32_t EPTSETSTA10;
  uint32_t EPTCLRSTA10;
  uint32_t EPTSTA10;
  uint32_t EPTCFG11;
  uint32_t EPTCTLENB11;
  uint32_t EPTCTLDIS11;
  uint32_t EPTCTL11;
  uint8_t res15[4];

  uint32_t EPTSETSTA11;
  uint32_t EPTCLRSTA11;
  uint32_t EPTSTA11;
  uint32_t EPTCFG12;
  uint32_t EPTCTLENB12;
  uint32_t EPTCTLDIS12;
  uint32_t EPTCTL12;
  uint8_t res16[4];

  uint32_t EPTSETSTA12;
  uint32_t EPTCLRSTA12;
  uint32_t EPTSTA12;
  uint32_t EPTCFG13;
  uint32_t EPTCTLENB13;
  uint32_t EPTCTLDIS13;
  uint32_t EPTCTL13;
  uint8_t res17[4];

  uint32_t EPTSETSTA13;
  uint32_t EPTCLRSTA13;
  uint32_t EPTSTA13;
  uint32_t EPTCFG14;
  uint32_t EPTCTLENB14;
  uint32_t EPTCTLDIS14;
  uint32_t EPTCTL14;
  uint8_t res18[4];

  uint32_t EPTSETSTA14;
  uint32_t EPTCLRSTA14;
  uint32_t EPTSTA14;
  uint32_t EPTCFG15;
  uint32_t EPTCTLENB15;
  uint32_t EPTCTLDIS15;
  uint32_t EPTCTL15;
  uint8_t res19[4];

  uint32_t EPTSETSTA15;
  uint32_t EPTCLRSTA15;
  uint32_t EPTSTA15;
  uint32_t DMANXTDSC0;
  uint32_t DMAADDRESS0;
  uint32_t DMACONTROL0;
  uint32_t DMASTATUS0;
  uint32_t DMANXTDSC1;
  uint32_t DMAADDRESS1;
  uint32_t DMACONTROL1;
  uint32_t DMASTATUS1;
  uint32_t DMANXTDSC2;
  uint32_t DMAADDRESS2;
  uint32_t DMACONTROL2;
  uint32_t DMASTATUS2;
  uint32_t DMANXTDSC3;
  uint32_t DMAADDRESS3;
  uint32_t DMACONTROL3;
  uint32_t DMASTATUS3;
  uint32_t DMANXTDSC4;
  uint32_t DMAADDRESS4;
  uint32_t DMACONTROL4;
  uint32_t DMASTATUS4;
  uint32_t DMANXTDSC5;
  uint32_t DMAADDRESS5;
  uint32_t DMACONTROL5;
  uint32_t DMASTATUS5;
  uint32_t DMANXTDSC6;
  uint32_t DMAADDRESS6;
  uint32_t DMACONTROL6;
  uint32_t DMASTATUS6;
};

#define UDPHS_1 (*(volatile struct UDPHS_1_tag *) 0xf8030000)

struct USART_USART0_1_tag
{
  uint32_t CR;
  uint32_t MR;
  uint32_t IER;
  uint32_t IDR;
  uint32_t IMR;
  uint32_t CSR;
  uint32_t RHR;
  uint32_t THR;
  uint32_t BRGR;
  uint32_t RTOR;
  uint32_t TTGR;
  uint8_t res0[20];

  uint32_t FIDI;
  uint32_t NER;
  uint8_t res1[4];

  uint32_t IF;
  uint32_t MAN;
  uint8_t res2[144];

  uint32_t WPMR;
  uint32_t WPSR;
};

#define USART_USART0_1 (*(volatile struct USART_USART0_1_tag *) 0xf001c000)

struct USART_USART1_1_tag
{
  uint32_t CR;
  uint32_t MR;
  uint32_t IER;
  uint32_t IDR;
  uint32_t IMR;
  uint32_t CSR;
  uint32_t RHR;
  uint32_t THR;
  uint32_t BRGR;
  uint32_t RTOR;
  uint32_t TTGR;
  uint8_t res0[20];

  uint32_t FIDI;
  uint32_t NER;
  uint8_t res1[4];

  uint32_t IF;
  uint32_t MAN;
  uint8_t res2[144];

  uint32_t WPMR;
  uint32_t WPSR;
};

#define USART_USART1_1 (*(volatile struct USART_USART1_1_tag *) 0xf0020000)

struct USART_USART2_1_tag
{
  uint32_t CR;
  uint32_t MR;
  uint32_t IER;
  uint32_t IDR;
  uint32_t IMR;
  uint32_t CSR;
  uint32_t RHR;
  uint32_t THR;
  uint32_t BRGR;
  uint32_t RTOR;
  uint32_t TTGR;
  uint8_t res0[20];

  uint32_t FIDI;
  uint32_t NER;
  uint8_t res1[4];

  uint32_t IF;
  uint32_t MAN;
  uint8_t res2[144];

  uint32_t WPMR;
  uint32_t WPSR;
};

#define USART_USART2_1 (*(volatile struct USART_USART2_1_tag *) 0xf8020000)

struct USART_USART3_1_tag
{
  uint32_t CR;
  uint32_t MR;
  uint32_t IER;
  uint32_t IDR;
  uint32_t IMR;
  uint32_t CSR;
  uint32_t RHR;
  uint32_t THR;
  uint32_t BRGR;
  uint32_t RTOR;
  uint32_t TTGR;
  uint8_t res0[20];

  uint32_t FIDI;
  uint32_t NER;
  uint8_t res1[4];

  uint32_t IF;
  uint32_t MAN;
  uint8_t res2[144];

  uint32_t WPMR;
  uint32_t WPSR;
};

#define USART_USART3_1 (*(volatile struct USART_USART3_1_tag *) 0xf8024000)

struct WDT_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDRSTT:1;
      uint64_t reservedSpace0:23;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDV:12;
      uint64_t WDFIEN:1;
      uint64_t WDRSTEN:1;
      uint64_t WDRPROC:1;
      uint64_t WDDIS:1;
      uint64_t WDD:12;
      uint64_t WDDBGHLT:1;
      uint64_t WDIDLEHLT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDUNF:1;
      uint64_t WDERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

};

#define WDT_1 (*(volatile struct WDT_1_tag *) 0xfffffe40)

