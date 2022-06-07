#include <stdint.h>

struct System_Control_Space_System_Control_Block_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VARIANT:4;
      uint64_t PARTNO:12;
      uint64_t reservedSpace0:4;
      uint64_t REVISION:4;
      uint64_t IMPLEMENTER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VECTACTIVE:8;
      uint64_t reservedSpace0:3;
      uint64_t RETTOBASE:1;
      uint64_t VECTPENDING:10;
      uint64_t ISRPENDING:1;
      uint64_t ISRPREEMPT:1;
      uint64_t reservedSpace1:1;
      uint64_t PENDSTCLR:1;
      uint64_t PENDSTSET:1;
      uint64_t PENDSVCLR:1;
      uint64_t PENDSVSET:1;
      uint64_t reservedSpace2:2;
      uint64_t NMIPENDSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t TBLOFF:22;
      uint64_t TBLBASE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VECTRESET:1;
      uint64_t VECTCLRACTIVE:1;
      uint64_t SYSRESETREQ:1;
      uint64_t reservedSpace0:5;
      uint64_t PRIGROUP:3;
      uint64_t reservedSpace1:4;
      uint64_t ENDIANESS:1;
      uint64_t VECTKEYVECTKEYSTAT:16;
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
      uint64_t NONEBASETHRDENA:1;
      uint64_t USERSETMPEND:1;
      uint64_t reservedSpace0:1;
      uint64_t UNALIGN_TRP:1;
      uint64_t DIV_0_TRP:1;
      uint64_t reservedSpace1:3;
      uint64_t BFHFNMIGN:1;
      uint64_t STKALIGN:1;
      uint64_t reservedSpace2:6;
      uint64_t DC:1;
      uint64_t IC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_4:8;
      uint64_t PRI_5:8;
      uint64_t PRI_6:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PRI_11:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t PRI_14:8;
      uint64_t PRI_15:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEMFAULTACT:1;
      uint64_t BUSFAULTACT:1;
      uint64_t reservedSpace0:1;
      uint64_t USGFAULTACT:1;
      uint64_t reservedSpace1:3;
      uint64_t SVCALLACT:1;
      uint64_t MONITORACT:1;
      uint64_t reservedSpace2:1;
      uint64_t PENDSVACT:1;
      uint64_t SYSTICKACT:1;
      uint64_t USGFAULTPENDED:1;
      uint64_t MEMFAULTPENDED:1;
      uint64_t BUSFAULTPENDED:1;
      uint64_t SVCALLPENDED:1;
      uint64_t MEMFAULTENA:1;
      uint64_t BUSFAULTENA:1;
      uint64_t USGFAULTENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHCRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IACCVIOL:1;
      uint64_t DACCVIOL:1;
      uint64_t reservedSpace0:1;
      uint64_t MUNSTKERR:1;
      uint64_t MSTKERR:1;
      uint64_t reservedSpace1:2;
      uint64_t MMARVALID:1;
      uint64_t IBUSERR:1;
      uint64_t PRECISERR:1;
      uint64_t IMPRECISERR:1;
      uint64_t UNSTKERR:1;
      uint64_t STKERR:1;
      uint64_t reservedSpace2:2;
      uint64_t BFARVALID:1;
      uint64_t UNDEFINSTR:1;
      uint64_t INVSTATE:1;
      uint64_t INVPC:1;
      uint64_t NOCP:1;
      uint64_t reservedSpace3:4;
      uint64_t UNALIGNED:1;
      uint64_t DIVBYZERO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t VECTTBL:1;
      uint64_t reservedSpace1:28;
      uint64_t FORCED:1;
      uint64_t DEBUGEVT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HALTED:1;
      uint64_t BKPT:1;
      uint64_t DWTTRAP:1;
      uint64_t VCATCH:1;
      uint64_t EXTERNAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSR;

  uint32_t MMFAR;
  uint32_t BFAR;
  uint32_t AFSR;
  uint32_t PFR0;
  uint32_t PFR1;
  uint32_t DFR0;
  uint32_t AFR0;
  uint32_t MMFR0;
  uint32_t MMFR1;
  uint32_t MMFR2;
  uint32_t MMFR3;
  uint32_t ISAR0;
  uint32_t ISAR1;
  uint32_t ISAR2;
  uint32_t ISAR3;
  uint32_t ISAR4;
  uint8_t res0[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0:2;
      uint64_t CP1:2;
      uint64_t CP2:2;
      uint64_t CP3:2;
      uint64_t CP4:2;
      uint64_t CP5:2;
      uint64_t CP6:2;
      uint64_t CP7:2;
      uint64_t reservedSpace0:4;
      uint64_t CP10:2;
      uint64_t CP11:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPACR;

};

#define System_Control_Space_System_Control_Block (*(volatile struct System_Control_Space_System_Control_Block_tag *) 0xe000ed00)

struct System_Control_Space_Floating_point_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSPACT:1;
      uint64_t USER:1;
      uint64_t reservedSpace0:1;
      uint64_t THREAD:1;
      uint64_t HFRDY:1;
      uint64_t MMRDY:1;
      uint64_t BFRDY:1;
      uint64_t reservedSpace1:1;
      uint64_t MONRDY:1;
      uint64_t reservedSpace2:21;
      uint64_t LSPEN:1;
      uint64_t ASPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCCR;

  uint32_t FPCAR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:22;
      uint64_t RMode:2;
      uint64_t FZ:1;
      uint64_t DN:1;
      uint64_t AHP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDSCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A_SIMD:4;
      uint64_t Single_precision:4;
      uint64_t Double_precision:4;
      uint64_t FP_0:4;
      uint64_t Divide:4;
      uint64_t Square_root:4;
      uint64_t Short_vectors:4;
      uint64_t FP_1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MVFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FtZ:4;
      uint64_t D_NaN:4;
      uint64_t reservedSpace0:16;
      uint64_t FP_0:4;
      uint64_t FP_1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MVFR1;

};

#define System_Control_Space_Floating_point (*(volatile struct System_Control_Space_Floating_point_tag *) 0xe000ef34)

struct System_Control_Space_System_Control_and_ID_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTLINESNUM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISMCYCINT:1;
      uint64_t DISDEFWBUF:1;
      uint64_t DISFOLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACTLR;

  uint8_t res0[3828];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTID:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STIR;

  uint8_t res1[204];

  uint32_t PID4;
  uint32_t PID5;
  uint32_t PID6;
  uint32_t PID7;
  uint32_t PID0;
  uint32_t PID1;
  uint32_t PID2;
  uint32_t PID3;
  uint32_t CID0;
  uint32_t CID1;
  uint32_t CID2;
  uint32_t CID3;
};

#define System_Control_Space_System_Control_and_ID (*(volatile struct System_Control_Space_System_Control_and_ID_tag *) 0xe000e004)

struct System_Control_Space_NVIC_tag
{
  uint32_t INT_0_31_SET_EN;
  uint32_t INT_32_63_SET_EN;
  uint32_t INT_64_95_SET_EN;
  uint32_t INT_96_127_SET_EN;
  uint32_t INT_128_159_SET_EN;
  uint32_t INT_160_191_SET_EN;
  uint32_t INT_192_223_SET_EN;
  uint16_t INT_224_239_SET_EN;
  uint8_t res0[98];

  uint32_t INT_0_31_CLR_EN;
  uint32_t INT_32_63_CLR_EN;
  uint32_t INT_64_95_CLR_EN;
  uint32_t INT_96_127_CLR_EN;
  uint32_t INT_128_159_CLR_EN;
  uint32_t INT_160_191_CLR_EN;
  uint32_t INT_192_223_CLR_EN;
  uint16_t INT_224_239_CLR_EN;
  uint8_t res1[98];

  uint32_t INT_0_31_SET_PEND;
  uint32_t INT_32_63_SET_PEND;
  uint32_t INT_64_95_SET_PEND;
  uint32_t INT_96_127_SET_PEND;
  uint32_t INT_128_159_SET_PEND;
  uint32_t INT_160_191_SET_PEND;
  uint32_t INT_192_223_SET_PEND;
  uint16_t INT_224_239_SET_PEND;
  uint8_t res2[98];

  uint32_t INT_0_31_CLR_PEND;
  uint32_t INT_32_63_CLR_PEND;
  uint32_t INT_64_95_CLR_PEND;
  uint32_t INT_96_127_CLR_PEND;
  uint32_t INT_128_159_CLR_PEND;
  uint32_t INT_160_191_CLR_PEND;
  uint32_t INT_192_223_CLR_PEND;
  uint16_t INT_224_239_CLR_PEND;
  uint8_t res3[98];

  uint32_t INT_0_31_ACT;
  uint32_t INT_32_63_ACT;
  uint32_t INT_64_95_ACT;
  uint32_t INT_96_127_ACT;
  uint32_t INT_128_159_ACT;
  uint32_t INT_160_191_ACT;
  uint32_t INT_192_223_ACT;
  uint16_t INT_224_239_ACT;
  uint8_t res4[226];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_0:8;
      uint64_t PRI_1:8;
      uint64_t PRI_2:8;
      uint64_t PRI_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_0_3_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_4:8;
      uint64_t PRI_5:8;
      uint64_t PRI_6:8;
      uint64_t PRI_7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_4_7_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_8:8;
      uint64_t PRI_9:8;
      uint64_t PRI_10:8;
      uint64_t PRI_11:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_8_11_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_12:8;
      uint64_t PRI_13:8;
      uint64_t PRI_14:8;
      uint64_t PRI_15:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_12_15_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_16:8;
      uint64_t PRI_17:8;
      uint64_t PRI_18:8;
      uint64_t PRI_19:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_16_19_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_20:8;
      uint64_t PRI_21:8;
      uint64_t PRI_22:8;
      uint64_t PRI_23:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_20_23_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_24:8;
      uint64_t PRI_25:8;
      uint64_t PRI_26:8;
      uint64_t PRI_27:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_24_27_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_28:8;
      uint64_t PRI_29:8;
      uint64_t PRI_30:8;
      uint64_t PRI_31:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_28_31_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_32:8;
      uint64_t PRI_33:8;
      uint64_t PRI_34:8;
      uint64_t PRI_35:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_32_35_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_36:8;
      uint64_t PRI_37:8;
      uint64_t PRI_38:8;
      uint64_t PRI_39:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_36_39_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_40:8;
      uint64_t PRI_41:8;
      uint64_t PRI_42:8;
      uint64_t PRI_43:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_40_43_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_44:8;
      uint64_t PRI_45:8;
      uint64_t PRI_46:8;
      uint64_t PRI_47:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_44_47_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_48:8;
      uint64_t PRI_49:8;
      uint64_t PRI_50:8;
      uint64_t PRI_51:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_48_51_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_52:8;
      uint64_t PRI_53:8;
      uint64_t PRI_54:8;
      uint64_t PRI_55:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_52_55_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_56:8;
      uint64_t PRI_57:8;
      uint64_t PRI_58:8;
      uint64_t PRI_59:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_56_59_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_60:8;
      uint64_t PRI_61:8;
      uint64_t PRI_62:8;
      uint64_t PRI_63:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_60_63_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_64:8;
      uint64_t PRI_65:8;
      uint64_t PRI_66:8;
      uint64_t PRI_67:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_64_67_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_68:8;
      uint64_t PRI_69:8;
      uint64_t PRI_70:8;
      uint64_t PRI_71:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_68_71_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_72:8;
      uint64_t PRI_73:8;
      uint64_t PRI_74:8;
      uint64_t PRI_75:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_72_75_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_76:8;
      uint64_t PRI_77:8;
      uint64_t PRI_78:8;
      uint64_t PRI_79:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_76_79_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_80:8;
      uint64_t PRI_81:8;
      uint64_t PRI_82:8;
      uint64_t PRI_83:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_80_83_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_84:8;
      uint64_t PRI_85:8;
      uint64_t PRI_86:8;
      uint64_t PRI_87:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_84_87_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_88:8;
      uint64_t PRI_89:8;
      uint64_t PRI_90:8;
      uint64_t PRI_91:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_88_91_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_92:8;
      uint64_t PRI_93:8;
      uint64_t PRI_94:8;
      uint64_t PRI_95:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_92_95_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_96:8;
      uint64_t PRI_97:8;
      uint64_t PRI_98:8;
      uint64_t PRI_99:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_96_99_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_100:8;
      uint64_t PRI_101:8;
      uint64_t PRI_102:8;
      uint64_t PRI_103:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_100_103_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_104:8;
      uint64_t PRI_105:8;
      uint64_t PRI_106:8;
      uint64_t PRI_107:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_104_107_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_108:8;
      uint64_t PRI_109:8;
      uint64_t PRI_110:8;
      uint64_t PRI_111:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_108_111_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_112:8;
      uint64_t PRI_113:8;
      uint64_t PRI_114:8;
      uint64_t PRI_115:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_112_115_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_116:8;
      uint64_t PRI_117:8;
      uint64_t PRI_118:8;
      uint64_t PRI_119:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_116_119_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_120:8;
      uint64_t PRI_121:8;
      uint64_t PRI_122:8;
      uint64_t PRI_123:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_120_123_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_124:8;
      uint64_t PRI_125:8;
      uint64_t PRI_126:8;
      uint64_t PRI_127:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_124_127_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_128:8;
      uint64_t PRI_129:8;
      uint64_t PRI_130:8;
      uint64_t PRI_131:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_128_131_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_132:8;
      uint64_t PRI_133:8;
      uint64_t PRI_134:8;
      uint64_t PRI_135:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_132_135_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_136:8;
      uint64_t PRI_137:8;
      uint64_t PRI_138:8;
      uint64_t PRI_139:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_136_139_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_140:8;
      uint64_t PRI_141:8;
      uint64_t PRI_142:8;
      uint64_t PRI_143:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_140_143_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_144:8;
      uint64_t PRI_145:8;
      uint64_t PRI_146:8;
      uint64_t PRI_147:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_144_147_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_148:8;
      uint64_t PRI_149:8;
      uint64_t PRI_150:8;
      uint64_t PRI_151:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_148_151_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_152:8;
      uint64_t PRI_153:8;
      uint64_t PRI_154:8;
      uint64_t PRI_155:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_152_155_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_156:8;
      uint64_t PRI_157:8;
      uint64_t PRI_158:8;
      uint64_t PRI_159:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_156_159_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_160:8;
      uint64_t PRI_161:8;
      uint64_t PRI_162:8;
      uint64_t PRI_163:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_160_163_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_164:8;
      uint64_t PRI_165:8;
      uint64_t PRI_166:8;
      uint64_t PRI_167:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_164_167_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_168:8;
      uint64_t PRI_169:8;
      uint64_t PRI_170:8;
      uint64_t PRI_171:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_168_171_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_172:8;
      uint64_t PRI_173:8;
      uint64_t PRI_174:8;
      uint64_t PRI_175:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_172_175_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_176:8;
      uint64_t PRI_177:8;
      uint64_t PRI_178:8;
      uint64_t PRI_179:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_176_179_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_180:8;
      uint64_t PRI_181:8;
      uint64_t PRI_182:8;
      uint64_t PRI_183:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_180_183_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_184:8;
      uint64_t PRI_185:8;
      uint64_t PRI_186:8;
      uint64_t PRI_187:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_184_187_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_188:8;
      uint64_t PRI_189:8;
      uint64_t PRI_190:8;
      uint64_t PRI_191:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_188_191_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_192:8;
      uint64_t PRI_193:8;
      uint64_t PRI_194:8;
      uint64_t PRI_195:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_192_195_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_196:8;
      uint64_t PRI_197:8;
      uint64_t PRI_198:8;
      uint64_t PRI_199:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_196_199_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_200:8;
      uint64_t PRI_201:8;
      uint64_t PRI_202:8;
      uint64_t PRI_203:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_200_203_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_204:8;
      uint64_t PRI_205:8;
      uint64_t PRI_206:8;
      uint64_t PRI_207:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_204_207_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_208:8;
      uint64_t PRI_209:8;
      uint64_t PRI_210:8;
      uint64_t PRI_211:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_208_211_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_212:8;
      uint64_t PRI_213:8;
      uint64_t PRI_214:8;
      uint64_t PRI_215:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_212_215_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_216:8;
      uint64_t PRI_217:8;
      uint64_t PRI_218:8;
      uint64_t PRI_219:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_216_219_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_220:8;
      uint64_t PRI_221:8;
      uint64_t PRI_222:8;
      uint64_t PRI_223:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_220_223_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_224:8;
      uint64_t PRI_225:8;
      uint64_t PRI_226:8;
      uint64_t PRI_227:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_224_227_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_228:8;
      uint64_t PRI_229:8;
      uint64_t PRI_230:8;
      uint64_t PRI_231:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_228_231_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_232:8;
      uint64_t PRI_233:8;
      uint64_t PRI_234:8;
      uint64_t PRI_235:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_232_235_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_236:8;
      uint64_t PRI_237:8;
      uint64_t PRI_238:8;
      uint64_t PRI_239:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_236_239_PRI;

};

#define System_Control_Space_NVIC (*(volatile struct System_Control_Space_NVIC_tag *) 0xe000e100)

struct System_Control_Space_SysTick_tag
{
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

};

#define System_Control_Space_SysTick (*(volatile struct System_Control_Space_SysTick_tag *) 0xe000e010)

struct System_Control_Space_Memory_Protection_Unit_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEPARATE:1;
      uint64_t reservedSpace0:7;
      uint64_t DREGION:8;
      uint64_t IREGION:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_TYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t HFNMIENA:1;
      uint64_t PRIVDEFENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_CTRL;

  uint8_t MPU_RNR;
  uint8_t res0[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:4;
      uint64_t VALID:1;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RBAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t SIZE:5;
      uint64_t reservedSpace0:2;
      uint64_t SRD:8;
      uint64_t B:1;
      uint64_t C:1;
      uint64_t S:1;
      uint64_t TEX:3;
      uint64_t reservedSpace1:2;
      uint64_t AP:3;
      uint64_t reservedSpace2:1;
      uint64_t XN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RASR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:4;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RBAR_A1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t SIZE:5;
      uint64_t reservedSpace0:2;
      uint64_t SRD:8;
      uint64_t B:1;
      uint64_t C:1;
      uint64_t S:1;
      uint64_t TEX:3;
      uint64_t reservedSpace1:2;
      uint64_t AP:3;
      uint64_t reservedSpace2:1;
      uint64_t XN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RASR_A1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:4;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RBAR_A2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t SIZE:5;
      uint64_t reservedSpace0:2;
      uint64_t SRD:8;
      uint64_t B:1;
      uint64_t C:1;
      uint64_t S:1;
      uint64_t TEX:3;
      uint64_t reservedSpace1:2;
      uint64_t AP:3;
      uint64_t reservedSpace2:1;
      uint64_t XN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RASR_A2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:4;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RBAR_A3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t SIZE:5;
      uint64_t reservedSpace0:2;
      uint64_t SRD:8;
      uint64_t B:1;
      uint64_t C:1;
      uint64_t S:1;
      uint64_t TEX:3;
      uint64_t reservedSpace1:2;
      uint64_t AP:3;
      uint64_t reservedSpace2:1;
      uint64_t XN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RASR_A3;

};

#define System_Control_Space_Memory_Protection_Unit (*(volatile struct System_Control_Space_Memory_Protection_Unit_tag *) 0xe000ed90)

struct ADC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDE:1;
      uint64_t EOC:1;
      uint64_t EOIC:1;
      uint64_t STIC:1;
      uint64_t STRC:1;
      uint64_t ROVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDCHSEL:5;
      uint64_t EOCIE:1;
      uint64_t WDEIE:1;
      uint64_t EOICIE:1;
      uint64_t SM:1;
      uint64_t WDSC:1;
      uint64_t ICA:1;
      uint64_t DISRC:1;
      uint64_t DISIC:1;
      uint64_t DISNUM:3;
      uint64_t reservedSpace0:6;
      uint64_t IWDEN:1;
      uint64_t RWDEN:1;
      uint64_t DRES:2;
      uint64_t ROVFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCON:1;
      uint64_t CTN:1;
      uint64_t CLB:1;
      uint64_t RSTCLB:1;
      uint64_t reservedSpace0:4;
      uint64_t DMA:1;
      uint64_t DDM:1;
      uint64_t EOCM:1;
      uint64_t DAL:1;
      uint64_t reservedSpace1:4;
      uint64_t ETSIC:4;
      uint64_t ETMIC:2;
      uint64_t SWICST:1;
      uint64_t reservedSpace2:1;
      uint64_t ETSRC:4;
      uint64_t ETMRC:2;
      uint64_t SWRCST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPT10:3;
      uint64_t SPT11:3;
      uint64_t SPT12:3;
      uint64_t SPT13:3;
      uint64_t SPT14:3;
      uint64_t SPT15:3;
      uint64_t SPT16:3;
      uint64_t SPT17:3;
      uint64_t SPT18:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMPT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPT0:3;
      uint64_t SPT1:3;
      uint64_t SPT2:3;
      uint64_t SPT3:3;
      uint64_t SPT4:3;
      uint64_t SPT5:3;
      uint64_t SPT6:3;
      uint64_t SPT7:3;
      uint64_t SPT8:3;
      uint64_t SPT9:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMPT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOFF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOFF0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOFF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOFF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOFF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOFF2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOFF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOFF3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDHT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDHT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDLT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDLT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSQ12:5;
      uint64_t RSQ13:5;
      uint64_t RSQ14:5;
      uint64_t RSQ15:5;
      uint64_t RL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSQ0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSQ6:5;
      uint64_t RSQ7:5;
      uint64_t RSQ8:5;
      uint64_t RSQ9:5;
      uint64_t RSQ10:5;
      uint64_t RSQ11:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSQ1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSQ0:5;
      uint64_t RSQ1:5;
      uint64_t RSQ2:5;
      uint64_t RSQ3:5;
      uint64_t RSQ4:5;
      uint64_t RSQ5:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSQ2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISQ0:5;
      uint64_t ISQ1:5;
      uint64_t ISQ2:5;
      uint64_t ISQ3:5;
      uint64_t IL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATAn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATAn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATAn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDATA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATAn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDATA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDATA;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVSEN:1;
      uint64_t reservedSpace0:1;
      uint64_t OVSR:3;
      uint64_t OVSS:4;
      uint64_t TOVS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVSAMPCTL;

};

#define ADC0 (*(volatile struct ADC0_tag *) 0x40012000)

struct ADC1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDE:1;
      uint64_t EOC:1;
      uint64_t EOIC:1;
      uint64_t STIC:1;
      uint64_t STRC:1;
      uint64_t ROVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDCHSEL:5;
      uint64_t EOCIE:1;
      uint64_t WDEIE:1;
      uint64_t EOICIE:1;
      uint64_t SM:1;
      uint64_t WDSC:1;
      uint64_t ICA:1;
      uint64_t DISRC:1;
      uint64_t DISIC:1;
      uint64_t DISNUM:3;
      uint64_t reservedSpace0:6;
      uint64_t IWDEN:1;
      uint64_t RWDEN:1;
      uint64_t DRES:2;
      uint64_t ROVFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCON:1;
      uint64_t CTN:1;
      uint64_t CLB:1;
      uint64_t RSTCLB:1;
      uint64_t reservedSpace0:4;
      uint64_t DMA:1;
      uint64_t DDM:1;
      uint64_t EOCM:1;
      uint64_t DAL:1;
      uint64_t reservedSpace1:4;
      uint64_t ETSIC:4;
      uint64_t ETMIC:2;
      uint64_t SWICST:1;
      uint64_t reservedSpace2:1;
      uint64_t ETSRC:4;
      uint64_t ETMRC:2;
      uint64_t SWRCST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPT10:3;
      uint64_t SPT11:3;
      uint64_t SPT12:3;
      uint64_t SPT13:3;
      uint64_t SPT14:3;
      uint64_t SPT15:3;
      uint64_t SPT16:3;
      uint64_t SPT17:3;
      uint64_t SPT18:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMPT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPT0:3;
      uint64_t SPT1:3;
      uint64_t SPT2:3;
      uint64_t SPT3:3;
      uint64_t SPT4:3;
      uint64_t SPT5:3;
      uint64_t SPT6:3;
      uint64_t SPT7:3;
      uint64_t SPT8:3;
      uint64_t SPT9:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMPT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOFF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOFF0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOFF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOFF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOFF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOFF2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOFF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOFF3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDHT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDHT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDLT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDLT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSQ12:5;
      uint64_t RSQ13:5;
      uint64_t RSQ14:5;
      uint64_t RSQ15:5;
      uint64_t RL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSQ0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSQ6:5;
      uint64_t RSQ7:5;
      uint64_t RSQ8:5;
      uint64_t RSQ9:5;
      uint64_t RSQ10:5;
      uint64_t RSQ11:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSQ1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSQ0:5;
      uint64_t RSQ1:5;
      uint64_t RSQ2:5;
      uint64_t RSQ3:5;
      uint64_t RSQ4:5;
      uint64_t RSQ5:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSQ2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISQ0:5;
      uint64_t ISQ1:5;
      uint64_t ISQ2:5;
      uint64_t ISQ3:5;
      uint64_t IL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATAn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATAn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATAn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDATA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATAn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDATA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDATA;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVSEN:1;
      uint64_t reservedSpace0:1;
      uint64_t OVSR:3;
      uint64_t OVSS:4;
      uint64_t TOVS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVSAMPCTL;

};

#define ADC1 (*(volatile struct ADC1_tag *) 0x40012100)

struct ADC2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDE:1;
      uint64_t EOC:1;
      uint64_t EOIC:1;
      uint64_t STIC:1;
      uint64_t STRC:1;
      uint64_t ROVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDCHSEL:5;
      uint64_t EOCIE:1;
      uint64_t WDEIE:1;
      uint64_t EOICIE:1;
      uint64_t SM:1;
      uint64_t WDSC:1;
      uint64_t ICA:1;
      uint64_t DISRC:1;
      uint64_t DISIC:1;
      uint64_t DISNUM:3;
      uint64_t reservedSpace0:6;
      uint64_t IWDEN:1;
      uint64_t RWDEN:1;
      uint64_t DRES:2;
      uint64_t ROVFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCON:1;
      uint64_t CTN:1;
      uint64_t CLB:1;
      uint64_t RSTCLB:1;
      uint64_t reservedSpace0:4;
      uint64_t DMA:1;
      uint64_t DDM:1;
      uint64_t EOCM:1;
      uint64_t DAL:1;
      uint64_t reservedSpace1:4;
      uint64_t ETSIC:4;
      uint64_t ETMIC:2;
      uint64_t SWICST:1;
      uint64_t reservedSpace2:1;
      uint64_t ETSRC:4;
      uint64_t ETMRC:2;
      uint64_t SWRCST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPT10:3;
      uint64_t SPT11:3;
      uint64_t SPT12:3;
      uint64_t SPT13:3;
      uint64_t SPT14:3;
      uint64_t SPT15:3;
      uint64_t SPT16:3;
      uint64_t SPT17:3;
      uint64_t SPT18:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMPT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPT0:3;
      uint64_t SPT1:3;
      uint64_t SPT2:3;
      uint64_t SPT3:3;
      uint64_t SPT4:3;
      uint64_t SPT5:3;
      uint64_t SPT6:3;
      uint64_t SPT7:3;
      uint64_t SPT8:3;
      uint64_t SPT9:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMPT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOFF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOFF0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOFF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOFF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOFF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOFF2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOFF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOFF3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDHT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDHT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDLT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDLT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSQ12:5;
      uint64_t RSQ13:5;
      uint64_t RSQ14:5;
      uint64_t RSQ15:5;
      uint64_t RL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSQ0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSQ6:5;
      uint64_t RSQ7:5;
      uint64_t RSQ8:5;
      uint64_t RSQ9:5;
      uint64_t RSQ10:5;
      uint64_t RSQ11:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSQ1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSQ0:5;
      uint64_t RSQ1:5;
      uint64_t RSQ2:5;
      uint64_t RSQ3:5;
      uint64_t RSQ4:5;
      uint64_t RSQ5:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSQ2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISQ0:5;
      uint64_t ISQ1:5;
      uint64_t ISQ2:5;
      uint64_t ISQ3:5;
      uint64_t IL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATAn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATAn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATAn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDATA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATAn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDATA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDATA;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVSEN:1;
      uint64_t reservedSpace0:1;
      uint64_t OVSR:3;
      uint64_t OVSS:4;
      uint64_t TOVS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVSAMPCTL;

};

#define ADC2 (*(volatile struct ADC2_tag *) 0x40012200)

struct ADC_Common_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDE0:1;
      uint64_t EOC0:1;
      uint64_t EOIC0:1;
      uint64_t STIC0:1;
      uint64_t STRC0:1;
      uint64_t ROVF0:1;
      uint64_t reservedSpace0:2;
      uint64_t WDE1:1;
      uint64_t EOC1:1;
      uint64_t EOIC1:1;
      uint64_t STIC1:1;
      uint64_t STRC1:1;
      uint64_t ROVF1:1;
      uint64_t reservedSpace1:2;
      uint64_t WDE2:1;
      uint64_t EOC2:1;
      uint64_t EOIC2:1;
      uint64_t STIC2:1;
      uint64_t STRC2:1;
      uint64_t ROVF2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCM:5;
      uint64_t reservedSpace0:3;
      uint64_t SYNCDLY:4;
      uint64_t reservedSpace1:1;
      uint64_t SYNCDDM:1;
      uint64_t SYNCDMA:2;
      uint64_t ADCCK:3;
      uint64_t reservedSpace2:3;
      uint64_t VBATEN:1;
      uint64_t TSVREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCDATA1:16;
      uint64_t SYNCDATA2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCDATA;

};

#define ADC_Common (*(volatile struct ADC_Common_tag *) 0x40012300)

struct CAN0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IWMOD:1;
      uint64_t SLPWMOD:1;
      uint64_t TFO:1;
      uint64_t RFOD:1;
      uint64_t ARD:1;
      uint64_t AWU:1;
      uint64_t ABOR:1;
      uint64_t TTC:1;
      uint64_t reservedSpace0:7;
      uint64_t SWRST:1;
      uint64_t DFZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IWS:1;
      uint64_t SLPWS:1;
      uint64_t ERRIF:1;
      uint64_t WUIF:1;
      uint64_t SLPIF:1;
      uint64_t reservedSpace0:3;
      uint64_t TS:1;
      uint64_t RS:1;
      uint64_t LASTRX:1;
      uint64_t RXL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTF0:1;
      uint64_t MTFNERR0:1;
      uint64_t MAL0:1;
      uint64_t MTE0:1;
      uint64_t reservedSpace0:3;
      uint64_t MST0:1;
      uint64_t MTF1:1;
      uint64_t MTFNERR1:1;
      uint64_t MAL1:1;
      uint64_t MTE1:1;
      uint64_t reservedSpace1:3;
      uint64_t MST1:1;
      uint64_t MTF2:1;
      uint64_t MTFNERR2:1;
      uint64_t MAL2:1;
      uint64_t MTE2:1;
      uint64_t reservedSpace2:3;
      uint64_t MST2:1;
      uint64_t NUM:2;
      uint64_t TME0:1;
      uint64_t TME1:1;
      uint64_t TME2:1;
      uint64_t TMLS0:1;
      uint64_t TMLS1:1;
      uint64_t TMLS2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFL0:2;
      uint64_t reservedSpace0:1;
      uint64_t RFF0:1;
      uint64_t RFO0:1;
      uint64_t RFD0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFIFO0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFL1:2;
      uint64_t reservedSpace0:1;
      uint64_t RFF1:1;
      uint64_t RFO1:1;
      uint64_t RFD1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFIFO1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMEIE:1;
      uint64_t RFNEIE0:1;
      uint64_t RFFIE0:1;
      uint64_t RFOIE0:1;
      uint64_t RFNEIE1:1;
      uint64_t RFFIE1:1;
      uint64_t RFOIE1:1;
      uint64_t reservedSpace0:1;
      uint64_t WERRIE:1;
      uint64_t PERRIE:1;
      uint64_t BOIE:1;
      uint64_t ERRNIE:1;
      uint64_t reservedSpace1:3;
      uint64_t ERRIE:1;
      uint64_t WIE:1;
      uint64_t SLPWIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WERR:1;
      uint64_t PERR:1;
      uint64_t BOERR:1;
      uint64_t reservedSpace0:1;
      uint64_t ERRN:3;
      uint64_t reservedSpace1:9;
      uint64_t TECNT:8;
      uint64_t RECNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUADPSC:10;
      uint64_t reservedSpace0:6;
      uint64_t BS1:4;
      uint64_t BS2:3;
      uint64_t reservedSpace1:1;
      uint64_t SJW:2;
      uint64_t reservedSpace2:4;
      uint64_t LCMOD:1;
      uint64_t SCMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BT;

  uint8_t res0[352];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t FT:1;
      uint64_t FF:1;
      uint64_t EFID:18;
      uint64_t SFID_EFID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMI0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLENC:4;
      uint64_t reservedSpace0:4;
      uint64_t TSEN:1;
      uint64_t reservedSpace1:7;
      uint64_t TS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DB0:8;
      uint64_t DB1:8;
      uint64_t DB2:8;
      uint64_t DB3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMDATA00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DB4:8;
      uint64_t DB5:8;
      uint64_t DB6:8;
      uint64_t DB7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMDATA10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t FT:1;
      uint64_t FF:1;
      uint64_t EFID:18;
      uint64_t SFID_EFID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMI1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLENC:4;
      uint64_t reservedSpace0:4;
      uint64_t TSEN:1;
      uint64_t reservedSpace1:7;
      uint64_t TS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DB0:8;
      uint64_t DB1:8;
      uint64_t DB2:8;
      uint64_t DB3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMDATA01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DB4:8;
      uint64_t DB5:8;
      uint64_t DB6:8;
      uint64_t DB7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMDATA11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t FT:1;
      uint64_t FF:1;
      uint64_t EFID:18;
      uint64_t SFID_EFID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMI2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLENC:4;
      uint64_t reservedSpace0:4;
      uint64_t TSEN:1;
      uint64_t reservedSpace1:7;
      uint64_t TS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DB0:8;
      uint64_t DB1:8;
      uint64_t DB2:8;
      uint64_t DB3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMDATA02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DB4:8;
      uint64_t DB5:8;
      uint64_t DB6:8;
      uint64_t DB7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMDATA12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t FT:1;
      uint64_t FF:1;
      uint64_t EFID:18;
      uint64_t SFID_EFID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFIFOMI0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLENC:4;
      uint64_t reservedSpace0:4;
      uint64_t FI:8;
      uint64_t TS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFIFOMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DB0:8;
      uint64_t DB1:8;
      uint64_t DB2:8;
      uint64_t DB3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFIFOMDATA00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DB4:8;
      uint64_t DB5:8;
      uint64_t DB6:8;
      uint64_t DB7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFIFOMDATA10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t FT:1;
      uint64_t FF:1;
      uint64_t EFID:18;
      uint64_t SFID_EFID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFIFOMI1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLENC:4;
      uint64_t reservedSpace0:4;
      uint64_t FI:8;
      uint64_t TS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFIFOMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DB0:8;
      uint64_t DB1:8;
      uint64_t DB2:8;
      uint64_t DB3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFIFOMDATA01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DB4:8;
      uint64_t DB5:8;
      uint64_t DB6:8;
      uint64_t DB7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFIFOMDATA11;

  uint8_t res1[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLD:1;
      uint64_t reservedSpace0:7;
      uint64_t HBC1F:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMOD0:1;
      uint64_t FMOD1:1;
      uint64_t FMOD2:1;
      uint64_t FMOD3:1;
      uint64_t FMOD4:1;
      uint64_t FMOD5:1;
      uint64_t FMOD6:1;
      uint64_t FMOD7:1;
      uint64_t FMOD8:1;
      uint64_t FMOD9:1;
      uint64_t FMOD10:1;
      uint64_t FMOD11:1;
      uint64_t FMOD12:1;
      uint64_t FMOD13:1;
      uint64_t FMOD14:1;
      uint64_t FMOD15:1;
      uint64_t FMOD16:1;
      uint64_t FMOD17:1;
      uint64_t FMOD18:1;
      uint64_t FMOD19:1;
      uint64_t FMOD20:1;
      uint64_t FMOD21:1;
      uint64_t FMOD22:1;
      uint64_t FMOD23:1;
      uint64_t FMOD24:1;
      uint64_t FMOD25:1;
      uint64_t FMOD26:1;
      uint64_t FMOD27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMCFG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FS0:1;
      uint64_t FS1:1;
      uint64_t FS2:1;
      uint64_t FS3:1;
      uint64_t FS4:1;
      uint64_t FS5:1;
      uint64_t FS6:1;
      uint64_t FS7:1;
      uint64_t FS8:1;
      uint64_t FS9:1;
      uint64_t FS10:1;
      uint64_t FS11:1;
      uint64_t FS12:1;
      uint64_t FS13:1;
      uint64_t FS14:1;
      uint64_t FS15:1;
      uint64_t FS16:1;
      uint64_t FS17:1;
      uint64_t FS18:1;
      uint64_t FS19:1;
      uint64_t FS20:1;
      uint64_t FS21:1;
      uint64_t FS22:1;
      uint64_t FS23:1;
      uint64_t FS24:1;
      uint64_t FS25:1;
      uint64_t FS26:1;
      uint64_t FS27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSCFG;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAF0:1;
      uint64_t FAF1:1;
      uint64_t FAF2:1;
      uint64_t FAF3:1;
      uint64_t FAF4:1;
      uint64_t FAF5:1;
      uint64_t FAF6:1;
      uint64_t FAF7:1;
      uint64_t FAF8:1;
      uint64_t FAF9:1;
      uint64_t FAF10:1;
      uint64_t FAF11:1;
      uint64_t FAF12:1;
      uint64_t FAF13:1;
      uint64_t FAF14:1;
      uint64_t FAF15:1;
      uint64_t FAF16:1;
      uint64_t FAF17:1;
      uint64_t FAF18:1;
      uint64_t FAF19:1;
      uint64_t FAF20:1;
      uint64_t FAF21:1;
      uint64_t FAF22:1;
      uint64_t FAF23:1;
      uint64_t FAF24:1;
      uint64_t FAF25:1;
      uint64_t FAF26:1;
      uint64_t FAF27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FAFIFO;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FW0:1;
      uint64_t FW1:1;
      uint64_t FW2:1;
      uint64_t FW3:1;
      uint64_t FW4:1;
      uint64_t FW5:1;
      uint64_t FW6:1;
      uint64_t FW7:1;
      uint64_t FW8:1;
      uint64_t FW9:1;
      uint64_t FW10:1;
      uint64_t FW11:1;
      uint64_t FW12:1;
      uint64_t FW13:1;
      uint64_t FW14:1;
      uint64_t FW15:1;
      uint64_t FW16:1;
      uint64_t FW17:1;
      uint64_t FW18:1;
      uint64_t FW19:1;
      uint64_t FW20:1;
      uint64_t FW21:1;
      uint64_t FW22:1;
      uint64_t FW23:1;
      uint64_t FW24:1;
      uint64_t FW25:1;
      uint64_t FW26:1;
      uint64_t FW27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FW;

  uint8_t res5[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F0DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F0DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F1DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F1DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F2DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F2DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F3DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F3DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F4DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F4DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F5DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F5DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F6DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F6DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F7DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F7DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F8DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F8DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F9DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F9DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F10DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F10DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F11DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F11DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F12DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F12DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F13DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F13DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F14DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F14DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F15DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F15DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F16DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F16DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F17DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F17DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F18DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F18DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F19DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F19DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F20DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F20DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F21DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F21DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F22DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F22DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F23DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F23DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F24DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F24DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F25DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F25DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F26DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F26DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F27DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F27DATA1;

};

#define CAN0 (*(volatile struct CAN0_tag *) 0x40006400)

struct CAN1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IWMOD:1;
      uint64_t SLPWMOD:1;
      uint64_t TFO:1;
      uint64_t RFOD:1;
      uint64_t ARD:1;
      uint64_t AWU:1;
      uint64_t ABOR:1;
      uint64_t TTC:1;
      uint64_t reservedSpace0:7;
      uint64_t SWRST:1;
      uint64_t DFZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IWS:1;
      uint64_t SLPWS:1;
      uint64_t ERRIF:1;
      uint64_t WUIF:1;
      uint64_t SLPIF:1;
      uint64_t reservedSpace0:3;
      uint64_t TS:1;
      uint64_t RS:1;
      uint64_t LASTRX:1;
      uint64_t RXL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTF0:1;
      uint64_t MTFNERR0:1;
      uint64_t MAL0:1;
      uint64_t MTE0:1;
      uint64_t reservedSpace0:3;
      uint64_t MST0:1;
      uint64_t MTF1:1;
      uint64_t MTFNERR1:1;
      uint64_t MAL1:1;
      uint64_t MTE1:1;
      uint64_t reservedSpace1:3;
      uint64_t MST1:1;
      uint64_t MTF2:1;
      uint64_t MTFNERR2:1;
      uint64_t MAL2:1;
      uint64_t MTE2:1;
      uint64_t reservedSpace2:3;
      uint64_t MST2:1;
      uint64_t NUM:2;
      uint64_t TME0:1;
      uint64_t TME1:1;
      uint64_t TME2:1;
      uint64_t TMLS0:1;
      uint64_t TMLS1:1;
      uint64_t TMLS2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFL0:2;
      uint64_t reservedSpace0:1;
      uint64_t RFF0:1;
      uint64_t RFO0:1;
      uint64_t RFD0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFIFO0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFL1:2;
      uint64_t reservedSpace0:1;
      uint64_t RFF1:1;
      uint64_t RFO1:1;
      uint64_t RFD1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFIFO1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMEIE:1;
      uint64_t RFNEIE0:1;
      uint64_t RFFIE0:1;
      uint64_t RFOIE0:1;
      uint64_t RFNEIE1:1;
      uint64_t RFFIE1:1;
      uint64_t RFOIE1:1;
      uint64_t reservedSpace0:1;
      uint64_t WERRIE:1;
      uint64_t PERRIE:1;
      uint64_t BOIE:1;
      uint64_t ERRNIE:1;
      uint64_t reservedSpace1:3;
      uint64_t ERRIE:1;
      uint64_t WIE:1;
      uint64_t SLPWIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WERR:1;
      uint64_t PERR:1;
      uint64_t BOERR:1;
      uint64_t reservedSpace0:1;
      uint64_t ERRN:3;
      uint64_t reservedSpace1:9;
      uint64_t TECNT:8;
      uint64_t RECNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUADPSC:10;
      uint64_t reservedSpace0:6;
      uint64_t BS1:4;
      uint64_t BS2:3;
      uint64_t reservedSpace1:1;
      uint64_t SJW:2;
      uint64_t reservedSpace2:4;
      uint64_t LCMOD:1;
      uint64_t SCMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BT;

  uint8_t res0[352];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t FT:1;
      uint64_t FF:1;
      uint64_t EFID:18;
      uint64_t SFID_EFID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMI0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLENC:4;
      uint64_t reservedSpace0:4;
      uint64_t TSEN:1;
      uint64_t reservedSpace1:7;
      uint64_t TS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DB0:8;
      uint64_t DB1:8;
      uint64_t DB2:8;
      uint64_t DB3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMDATA00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DB4:8;
      uint64_t DB5:8;
      uint64_t DB6:8;
      uint64_t DB7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMDATA10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t FT:1;
      uint64_t FF:1;
      uint64_t EFID:18;
      uint64_t SFID_EFID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMI1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLENC:4;
      uint64_t reservedSpace0:4;
      uint64_t TSEN:1;
      uint64_t reservedSpace1:7;
      uint64_t TS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DB0:8;
      uint64_t DB1:8;
      uint64_t DB2:8;
      uint64_t DB3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMDATA01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DB4:8;
      uint64_t DB5:8;
      uint64_t DB6:8;
      uint64_t DB7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMDATA11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t FT:1;
      uint64_t FF:1;
      uint64_t EFID:18;
      uint64_t SFID_EFID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMI2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLENC:4;
      uint64_t reservedSpace0:4;
      uint64_t TSEN:1;
      uint64_t reservedSpace1:7;
      uint64_t TS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DB0:8;
      uint64_t DB1:8;
      uint64_t DB2:8;
      uint64_t DB3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMDATA02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DB4:8;
      uint64_t DB5:8;
      uint64_t DB6:8;
      uint64_t DB7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMDATA12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t FT:1;
      uint64_t FF:1;
      uint64_t EFID:18;
      uint64_t SFID_EFID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFIFOMI0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLENC:4;
      uint64_t reservedSpace0:4;
      uint64_t FI:8;
      uint64_t TS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFIFOMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DB0:8;
      uint64_t DB1:8;
      uint64_t DB2:8;
      uint64_t DB3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFIFOMDATA00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DB4:8;
      uint64_t DB5:8;
      uint64_t DB6:8;
      uint64_t DB7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFIFOMDATA10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t FT:1;
      uint64_t FF:1;
      uint64_t EFID:18;
      uint64_t SFID_EFID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFIFOMI1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLENC:4;
      uint64_t reservedSpace0:4;
      uint64_t FI:8;
      uint64_t TS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFIFOMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DB0:8;
      uint64_t DB1:8;
      uint64_t DB2:8;
      uint64_t DB3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFIFOMDATA01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DB4:8;
      uint64_t DB5:8;
      uint64_t DB6:8;
      uint64_t DB7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFIFOMDATA11;

  uint8_t res1[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLD:1;
      uint64_t reservedSpace0:7;
      uint64_t HBC1F:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMOD0:1;
      uint64_t FMOD1:1;
      uint64_t FMOD2:1;
      uint64_t FMOD3:1;
      uint64_t FMOD4:1;
      uint64_t FMOD5:1;
      uint64_t FMOD6:1;
      uint64_t FMOD7:1;
      uint64_t FMOD8:1;
      uint64_t FMOD9:1;
      uint64_t FMOD10:1;
      uint64_t FMOD11:1;
      uint64_t FMOD12:1;
      uint64_t FMOD13:1;
      uint64_t FMOD14:1;
      uint64_t FMOD15:1;
      uint64_t FMOD16:1;
      uint64_t FMOD17:1;
      uint64_t FMOD18:1;
      uint64_t FMOD19:1;
      uint64_t FMOD20:1;
      uint64_t FMOD21:1;
      uint64_t FMOD22:1;
      uint64_t FMOD23:1;
      uint64_t FMOD24:1;
      uint64_t FMOD25:1;
      uint64_t FMOD26:1;
      uint64_t FMOD27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMCFG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FS0:1;
      uint64_t FS1:1;
      uint64_t FS2:1;
      uint64_t FS3:1;
      uint64_t FS4:1;
      uint64_t FS5:1;
      uint64_t FS6:1;
      uint64_t FS7:1;
      uint64_t FS8:1;
      uint64_t FS9:1;
      uint64_t FS10:1;
      uint64_t FS11:1;
      uint64_t FS12:1;
      uint64_t FS13:1;
      uint64_t FS14:1;
      uint64_t FS15:1;
      uint64_t FS16:1;
      uint64_t FS17:1;
      uint64_t FS18:1;
      uint64_t FS19:1;
      uint64_t FS20:1;
      uint64_t FS21:1;
      uint64_t FS22:1;
      uint64_t FS23:1;
      uint64_t FS24:1;
      uint64_t FS25:1;
      uint64_t FS26:1;
      uint64_t FS27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSCFG;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAF0:1;
      uint64_t FAF1:1;
      uint64_t FAF2:1;
      uint64_t FAF3:1;
      uint64_t FAF4:1;
      uint64_t FAF5:1;
      uint64_t FAF6:1;
      uint64_t FAF7:1;
      uint64_t FAF8:1;
      uint64_t FAF9:1;
      uint64_t FAF10:1;
      uint64_t FAF11:1;
      uint64_t FAF12:1;
      uint64_t FAF13:1;
      uint64_t FAF14:1;
      uint64_t FAF15:1;
      uint64_t FAF16:1;
      uint64_t FAF17:1;
      uint64_t FAF18:1;
      uint64_t FAF19:1;
      uint64_t FAF20:1;
      uint64_t FAF21:1;
      uint64_t FAF22:1;
      uint64_t FAF23:1;
      uint64_t FAF24:1;
      uint64_t FAF25:1;
      uint64_t FAF26:1;
      uint64_t FAF27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FAFIFO;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FW0:1;
      uint64_t FW1:1;
      uint64_t FW2:1;
      uint64_t FW3:1;
      uint64_t FW4:1;
      uint64_t FW5:1;
      uint64_t FW6:1;
      uint64_t FW7:1;
      uint64_t FW8:1;
      uint64_t FW9:1;
      uint64_t FW10:1;
      uint64_t FW11:1;
      uint64_t FW12:1;
      uint64_t FW13:1;
      uint64_t FW14:1;
      uint64_t FW15:1;
      uint64_t FW16:1;
      uint64_t FW17:1;
      uint64_t FW18:1;
      uint64_t FW19:1;
      uint64_t FW20:1;
      uint64_t FW21:1;
      uint64_t FW22:1;
      uint64_t FW23:1;
      uint64_t FW24:1;
      uint64_t FW25:1;
      uint64_t FW26:1;
      uint64_t FW27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FW;

  uint8_t res5[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F0DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F0DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F1DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F1DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F2DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F2DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F3DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F3DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F4DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F4DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F5DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F5DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F6DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F6DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F7DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F7DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F8DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F8DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F9DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F9DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F10DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F10DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F11DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F11DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F12DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F12DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F13DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F13DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F14DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F14DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F15DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F15DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F16DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F16DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F17DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F17DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F18DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F18DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F19DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F19DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F20DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F20DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F21DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F21DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F22DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F22DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F23DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F23DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F24DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F24DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F25DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F25DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F26DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F26DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F27DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD0:1;
      uint64_t FD1:1;
      uint64_t FD2:1;
      uint64_t FD3:1;
      uint64_t FD4:1;
      uint64_t FD5:1;
      uint64_t FD6:1;
      uint64_t FD7:1;
      uint64_t FD8:1;
      uint64_t FD9:1;
      uint64_t FD10:1;
      uint64_t FD11:1;
      uint64_t FD12:1;
      uint64_t FD13:1;
      uint64_t FD14:1;
      uint64_t FD15:1;
      uint64_t FD16:1;
      uint64_t FD17:1;
      uint64_t FD18:1;
      uint64_t FD19:1;
      uint64_t FD20:1;
      uint64_t FD21:1;
      uint64_t FD22:1;
      uint64_t FD23:1;
      uint64_t FD24:1;
      uint64_t FD25:1;
      uint64_t FD26:1;
      uint64_t FD27:1;
      uint64_t FD28:1;
      uint64_t FD29:1;
      uint64_t FD30:1;
      uint64_t FD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F27DATA1;

};

#define CAN1 (*(volatile struct CAN1_tag *) 0x40006800)

struct CRC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

};

#define CRC (*(volatile struct CRC_tag *) 0x40023000)

struct CTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKOKIE:1;
      uint64_t CKWARNIE:1;
      uint64_t ERRIE:1;
      uint64_t EREFIE:1;
      uint64_t reservedSpace0:1;
      uint64_t CNTEN:1;
      uint64_t AUTOTRIM:1;
      uint64_t SWREFPUL:1;
      uint64_t TRIMVALUE:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RLVALUE:16;
      uint64_t CKLIM:8;
      uint64_t REFPSC:3;
      uint64_t reservedSpace0:1;
      uint64_t REFSEL:2;
      uint64_t USBSOFSEL:1;
      uint64_t REFPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKOKIF:1;
      uint64_t CKWARNIF:1;
      uint64_t ERRIF:1;
      uint64_t EREFIF:1;
      uint64_t reservedSpace0:4;
      uint64_t CKERR:1;
      uint64_t REFMISS:1;
      uint64_t TRIMERR:1;
      uint64_t reservedSpace1:4;
      uint64_t REFDIR:1;
      uint64_t REFCAP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKOKIC:1;
      uint64_t CKWARNIC:1;
      uint64_t ERRIC:1;
      uint64_t EREFIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC;

};

#define CTC (*(volatile struct CTC_tag *) 0x40006c00)

struct DAC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEN0:1;
      uint64_t DBOFF0:1;
      uint64_t DTEN0:1;
      uint64_t DTSEL0:3;
      uint64_t DWM0:2;
      uint64_t DWBW0:4;
      uint64_t DDMAEN0:1;
      uint64_t DDUDRIE0:1;
      uint64_t reservedSpace0:2;
      uint64_t DEN1:1;
      uint64_t DBOFF1:1;
      uint64_t DTEN1:1;
      uint64_t DTSEL1:3;
      uint64_t DWM1:2;
      uint64_t DWBW1:4;
      uint64_t DDMAEN1:1;
      uint64_t DDUDRIE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWTR0:1;
      uint64_t SWTR1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAC0_DH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC0_R12DH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t DAC0_DH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC0_L12DH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAC0_DH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC0_R8DH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAC1_DH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC1_R12DH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t DAC1_DH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC1_L12DH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAC1_DH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC1_R8DH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAC0_DH:12;
      uint64_t reservedSpace0:4;
      uint64_t DAC1_DH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_R12DH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t DAC0_DH:12;
      uint64_t reservedSpace1:4;
      uint64_t DAC1_DH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_L12DH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAC0_DH:8;
      uint64_t DAC1_DH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_R8DH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAC0_DO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC0_DO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAC1_DO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC1_DO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t DDUDR0:1;
      uint64_t reservedSpace1:15;
      uint64_t DDUDR1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

};

#define DAC (*(volatile struct DAC_tag *) 0x40007400)

struct DBG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID_CODE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLP_HOLD:1;
      uint64_t DSLP_HOLD:1;
      uint64_t STB_HOLD:1;
      uint64_t reservedSpace0:2;
      uint64_t TRACE_IOEN:1;
      uint64_t TRACE_MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER1_HOLD:1;
      uint64_t TIMER2_HOLD:1;
      uint64_t TIMER3_HOLD:1;
      uint64_t TIMER4_HOLD:1;
      uint64_t TIMER5_HOLD:1;
      uint64_t TIMER6_HOLD:1;
      uint64_t TIMER11_HOLD:1;
      uint64_t TIMER12_HOLD:1;
      uint64_t TIMER13_HOLD:1;
      uint64_t reservedSpace0:1;
      uint64_t RTC_HOLD:1;
      uint64_t WWDGT_HOLD:1;
      uint64_t FWDGT_HOLD:1;
      uint64_t reservedSpace1:8;
      uint64_t I2C0_HOLD:1;
      uint64_t I2C1_HOLD:1;
      uint64_t I2C2_HOLD:1;
      uint64_t reservedSpace2:1;
      uint64_t CAN0_HOLD:1;
      uint64_t CAN1_HOLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER0_HOLD:1;
      uint64_t TIMER7_HOLD:1;
      uint64_t reservedSpace0:14;
      uint64_t TIMER8_HOLD:1;
      uint64_t TIMER9_HOLD:1;
      uint64_t TIMER10_HOLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL2;

};

#define DBG (*(volatile struct DBG_tag *) 0xe0042000)

struct DCI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:1;
      uint64_t SNAP:1;
      uint64_t WDEN:1;
      uint64_t JM:1;
      uint64_t ESM:1;
      uint64_t CKS:1;
      uint64_t HPS:1;
      uint64_t VPS:1;
      uint64_t FR:2;
      uint64_t DCIF:2;
      uint64_t reservedSpace0:2;
      uint64_t DCIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HS:1;
      uint64_t VS:1;
      uint64_t FV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFF:1;
      uint64_t OVRF:1;
      uint64_t ESEF:1;
      uint64_t VSF:1;
      uint64_t ELF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFIE:1;
      uint64_t OVRIE:1;
      uint64_t ESEIE:1;
      uint64_t VSIE:1;
      uint64_t ELIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFIF:1;
      uint64_t OVRIF:1;
      uint64_t ESEIF:1;
      uint64_t VSIF:1;
      uint64_t ELIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFFC:1;
      uint64_t OVRFC:1;
      uint64_t ESEFC:1;
      uint64_t VSFC:1;
      uint64_t ELFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FS:8;
      uint64_t LS:8;
      uint64_t LE:8;
      uint64_t FE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM:8;
      uint64_t LSM:8;
      uint64_t LEM:8;
      uint64_t FEM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCUMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WHSP:14;
      uint64_t reservedSpace0:2;
      uint64_t WVSP:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSPOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WHSZ:14;
      uint64_t reservedSpace0:2;
      uint64_t WVSZ:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DT0:8;
      uint64_t DT1:8;
      uint64_t DT2:8;
      uint64_t DT3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

};

#define DCI (*(volatile struct DCI_tag *) 0x50050000)

struct DMA0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEEIF0:1;
      uint64_t reservedSpace0:1;
      uint64_t SDEIF0:1;
      uint64_t TAEIF0:1;
      uint64_t HTFIF0:1;
      uint64_t FTFIF0:1;
      uint64_t FEEIF1:1;
      uint64_t reservedSpace1:1;
      uint64_t SDEIF1:1;
      uint64_t TAEIF1:1;
      uint64_t HTFIF1:1;
      uint64_t FTFIF1:1;
      uint64_t reservedSpace2:4;
      uint64_t FEEIF2:1;
      uint64_t reservedSpace3:1;
      uint64_t SDEIF2:1;
      uint64_t TAEIF2:1;
      uint64_t HTFIF2:1;
      uint64_t FTFIF2:1;
      uint64_t FEEIF3:1;
      uint64_t reservedSpace4:1;
      uint64_t SDEIF3:1;
      uint64_t TAEIF3:1;
      uint64_t HTFIF3:1;
      uint64_t FTFIF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTF0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEEIF4:1;
      uint64_t reservedSpace0:1;
      uint64_t SDEIF4:1;
      uint64_t TAEIF4:1;
      uint64_t HTFIF4:1;
      uint64_t FTFIF4:1;
      uint64_t FEEIF5:1;
      uint64_t reservedSpace1:1;
      uint64_t SDEIF5:1;
      uint64_t TAEIF5:1;
      uint64_t HTFIF5:1;
      uint64_t FTFIF5:1;
      uint64_t reservedSpace2:4;
      uint64_t FEEIF6:1;
      uint64_t reservedSpace3:1;
      uint64_t SDEIF6:1;
      uint64_t TAEIF6:1;
      uint64_t HTFIF6:1;
      uint64_t FTFIF6:1;
      uint64_t FEEIF7:1;
      uint64_t reservedSpace4:1;
      uint64_t SDEIF7:1;
      uint64_t TAEIF7:1;
      uint64_t HTFIF7:1;
      uint64_t FTFIF7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEEIFC0:1;
      uint64_t reservedSpace0:1;
      uint64_t SDEIFC0:1;
      uint64_t TAEIFC0:1;
      uint64_t HTFIFC0:1;
      uint64_t FTFIFC0:1;
      uint64_t FEEIFC1:1;
      uint64_t reservedSpace1:1;
      uint64_t SDEIFC1:1;
      uint64_t TAEIFC1:1;
      uint64_t HTFIFC1:1;
      uint64_t FTFIFC1:1;
      uint64_t reservedSpace2:4;
      uint64_t FEEIFC2:1;
      uint64_t reservedSpace3:1;
      uint64_t SDEIFC2:1;
      uint64_t TAEIFC2:1;
      uint64_t HTFIFC2:1;
      uint64_t FTFIFC2:1;
      uint64_t FEEIFC3:1;
      uint64_t reservedSpace4:1;
      uint64_t SDEIFC3:1;
      uint64_t TAEIFC3:1;
      uint64_t HTFIFC3:1;
      uint64_t FTFIFC3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEEIFC4:1;
      uint64_t reservedSpace0:1;
      uint64_t SDEIFC4:1;
      uint64_t TAEIFC4:1;
      uint64_t HTFIFC4:1;
      uint64_t FTFIFC4:1;
      uint64_t FEEIFC5:1;
      uint64_t reservedSpace1:1;
      uint64_t SDEIFC5:1;
      uint64_t TAEIFC5:1;
      uint64_t HTFIFC5:1;
      uint64_t FTFIFC5:1;
      uint64_t reservedSpace2:4;
      uint64_t FEEIFC6:1;
      uint64_t reservedSpace3:1;
      uint64_t SDEIFC6:1;
      uint64_t TAEIFC6:1;
      uint64_t HTFIFC6:1;
      uint64_t FTFIFC6:1;
      uint64_t FEEIFC7:1;
      uint64_t reservedSpace4:1;
      uint64_t SDEIFC7:1;
      uint64_t TAEIFC7:1;
      uint64_t HTFIFC7:1;
      uint64_t FTFIFC7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t SDEIE:1;
      uint64_t TAEIE:1;
      uint64_t HTFIE:1;
      uint64_t FTFIE:1;
      uint64_t TFCS:1;
      uint64_t TM:2;
      uint64_t CMEN:1;
      uint64_t PNAGA:1;
      uint64_t MNAGA:1;
      uint64_t PWIDTH:2;
      uint64_t MWIDTH:2;
      uint64_t PAIF:1;
      uint64_t PRIO:2;
      uint64_t SBMEN:1;
      uint64_t MBS:1;
      uint64_t reservedSpace0:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t PERIEN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0PADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0M0ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0M1ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCCV:2;
      uint64_t MDMEN:1;
      uint64_t FCNT:3;
      uint64_t reservedSpace0:1;
      uint64_t FEEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0FCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t SDEIE:1;
      uint64_t TAEIE:1;
      uint64_t HTFIE:1;
      uint64_t FTFIE:1;
      uint64_t TFCS:1;
      uint64_t TM:2;
      uint64_t CMEN:1;
      uint64_t PNAGA:1;
      uint64_t MNAGA:1;
      uint64_t PWIDTH:2;
      uint64_t MWIDTH:2;
      uint64_t PAIF:1;
      uint64_t PRIO:2;
      uint64_t SBMEN:1;
      uint64_t MBS:1;
      uint64_t reservedSpace0:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t PERIEN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1PADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1M0ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1M1ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCCV:2;
      uint64_t MDMEN:1;
      uint64_t FCNT:3;
      uint64_t reservedSpace0:1;
      uint64_t FEEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1FCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t SDEIE:1;
      uint64_t TAEIE:1;
      uint64_t HTFIE:1;
      uint64_t FTFIE:1;
      uint64_t TFCS:1;
      uint64_t TM:2;
      uint64_t CMEN:1;
      uint64_t PNAGA:1;
      uint64_t MNAGA:1;
      uint64_t PWIDTH:2;
      uint64_t MWIDTH:2;
      uint64_t PAIF:1;
      uint64_t PRIO:2;
      uint64_t SBMEN:1;
      uint64_t MBS:1;
      uint64_t reservedSpace0:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t PERIEN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2PADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2M0ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2M1ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCCV:2;
      uint64_t MDMEN:1;
      uint64_t FCNT:3;
      uint64_t reservedSpace0:1;
      uint64_t FEEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2FCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t SDEIE:1;
      uint64_t TAEIE:1;
      uint64_t HTFIE:1;
      uint64_t FTFIE:1;
      uint64_t TFCS:1;
      uint64_t TM:2;
      uint64_t CMEN:1;
      uint64_t PNAGA:1;
      uint64_t MNAGA:1;
      uint64_t PWIDTH:2;
      uint64_t MWIDTH:2;
      uint64_t PAIF:1;
      uint64_t PRIO:2;
      uint64_t SBMEN:1;
      uint64_t MBS:1;
      uint64_t reservedSpace0:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t PERIEN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3PADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3M0ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3M1ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCCV:2;
      uint64_t MDMEN:1;
      uint64_t FCNT:3;
      uint64_t reservedSpace0:1;
      uint64_t FEEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3FCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t SDEIE:1;
      uint64_t TAEIE:1;
      uint64_t HTFIE:1;
      uint64_t FTFIE:1;
      uint64_t TFCS:1;
      uint64_t TM:2;
      uint64_t CMEN:1;
      uint64_t PNAGA:1;
      uint64_t MNAGA:1;
      uint64_t PWIDTH:2;
      uint64_t MWIDTH:2;
      uint64_t PAIF:1;
      uint64_t PRIO:2;
      uint64_t SBMEN:1;
      uint64_t MBS:1;
      uint64_t reservedSpace0:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t PERIEN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4PADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4M0ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4M1ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCCV:2;
      uint64_t MDMEN:1;
      uint64_t FCNT:3;
      uint64_t reservedSpace0:1;
      uint64_t FEEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4FCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t SDEIE:1;
      uint64_t TAEIE:1;
      uint64_t HTFIE:1;
      uint64_t FTFIE:1;
      uint64_t TFCS:1;
      uint64_t TM:2;
      uint64_t CMEN:1;
      uint64_t PNAGA:1;
      uint64_t MNAGA:1;
      uint64_t PWIDTH:2;
      uint64_t MWIDTH:2;
      uint64_t PAIF:1;
      uint64_t PRIO:2;
      uint64_t SBMEN:1;
      uint64_t MBS:1;
      uint64_t reservedSpace0:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t PERIEN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5PADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5M0ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5M1ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCCV:2;
      uint64_t MDMEN:1;
      uint64_t FCNT:3;
      uint64_t reservedSpace0:1;
      uint64_t FEEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5FCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t SDEIE:1;
      uint64_t TAEIE:1;
      uint64_t HTFIE:1;
      uint64_t FTFIE:1;
      uint64_t TFCS:1;
      uint64_t TM:2;
      uint64_t CMEN:1;
      uint64_t PNAGA:1;
      uint64_t MNAGA:1;
      uint64_t PWIDTH:2;
      uint64_t MWIDTH:2;
      uint64_t PAIF:1;
      uint64_t PRIO:2;
      uint64_t SBMEN:1;
      uint64_t MBS:1;
      uint64_t reservedSpace0:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t PERIEN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6PADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6M0ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6M1ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCCV:2;
      uint64_t MDMEN:1;
      uint64_t FCNT:3;
      uint64_t reservedSpace0:1;
      uint64_t FEEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6FCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t SDEIE:1;
      uint64_t TAEIE:1;
      uint64_t HTFIE:1;
      uint64_t FTFIE:1;
      uint64_t TFCS:1;
      uint64_t TM:2;
      uint64_t CMEN:1;
      uint64_t PNAGA:1;
      uint64_t MNAGA:1;
      uint64_t PWIDTH:2;
      uint64_t MWIDTH:2;
      uint64_t PAIF:1;
      uint64_t PRIO:2;
      uint64_t SBMEN:1;
      uint64_t MBS:1;
      uint64_t reservedSpace0:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t PERIEN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7PADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7M0ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7M1ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCCV:2;
      uint64_t MDMEN:1;
      uint64_t FCNT:3;
      uint64_t reservedSpace0:1;
      uint64_t FEEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7FCTL;

};

#define DMA0 (*(volatile struct DMA0_tag *) 0x40026000)

struct DMA1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEEIF0:1;
      uint64_t reservedSpace0:1;
      uint64_t SDEIF0:1;
      uint64_t TAEIF0:1;
      uint64_t HTFIF0:1;
      uint64_t FTFIF0:1;
      uint64_t FEEIF1:1;
      uint64_t reservedSpace1:1;
      uint64_t SDEIF1:1;
      uint64_t TAEIF1:1;
      uint64_t HTFIF1:1;
      uint64_t FTFIF1:1;
      uint64_t reservedSpace2:4;
      uint64_t FEEIF2:1;
      uint64_t reservedSpace3:1;
      uint64_t SDEIF2:1;
      uint64_t TAEIF2:1;
      uint64_t HTFIF2:1;
      uint64_t FTFIF2:1;
      uint64_t FEEIF3:1;
      uint64_t reservedSpace4:1;
      uint64_t SDEIF3:1;
      uint64_t TAEIF3:1;
      uint64_t HTFIF3:1;
      uint64_t FTFIF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTF0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEEIF4:1;
      uint64_t reservedSpace0:1;
      uint64_t SDEIF4:1;
      uint64_t TAEIF4:1;
      uint64_t HTFIF4:1;
      uint64_t FTFIF4:1;
      uint64_t FEEIF5:1;
      uint64_t reservedSpace1:1;
      uint64_t SDEIF5:1;
      uint64_t TAEIF5:1;
      uint64_t HTFIF5:1;
      uint64_t FTFIF5:1;
      uint64_t reservedSpace2:4;
      uint64_t FEEIF6:1;
      uint64_t reservedSpace3:1;
      uint64_t SDEIF6:1;
      uint64_t TAEIF6:1;
      uint64_t HTFIF6:1;
      uint64_t FTFIF6:1;
      uint64_t FEEIF7:1;
      uint64_t reservedSpace4:1;
      uint64_t SDEIF7:1;
      uint64_t TAEIF7:1;
      uint64_t HTFIF7:1;
      uint64_t FTFIF7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEEIFC0:1;
      uint64_t reservedSpace0:1;
      uint64_t SDEIFC0:1;
      uint64_t TAEIFC0:1;
      uint64_t HTFIFC0:1;
      uint64_t FTFIFC0:1;
      uint64_t FEEIFC1:1;
      uint64_t reservedSpace1:1;
      uint64_t SDEIFC1:1;
      uint64_t TAEIFC1:1;
      uint64_t HTFIFC1:1;
      uint64_t FTFIFC1:1;
      uint64_t reservedSpace2:4;
      uint64_t FEEIFC2:1;
      uint64_t reservedSpace3:1;
      uint64_t SDEIFC2:1;
      uint64_t TAEIFC2:1;
      uint64_t HTFIFC2:1;
      uint64_t FTFIFC2:1;
      uint64_t FEEIFC3:1;
      uint64_t reservedSpace4:1;
      uint64_t SDEIFC3:1;
      uint64_t TAEIFC3:1;
      uint64_t HTFIFC3:1;
      uint64_t FTFIFC3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEEIFC4:1;
      uint64_t reservedSpace0:1;
      uint64_t SDEIFC4:1;
      uint64_t TAEIFC4:1;
      uint64_t HTFIFC4:1;
      uint64_t FTFIFC4:1;
      uint64_t FEEIFC5:1;
      uint64_t reservedSpace1:1;
      uint64_t SDEIFC5:1;
      uint64_t TAEIFC5:1;
      uint64_t HTFIFC5:1;
      uint64_t FTFIFC5:1;
      uint64_t reservedSpace2:4;
      uint64_t FEEIFC6:1;
      uint64_t reservedSpace3:1;
      uint64_t SDEIFC6:1;
      uint64_t TAEIFC6:1;
      uint64_t HTFIFC6:1;
      uint64_t FTFIFC6:1;
      uint64_t FEEIFC7:1;
      uint64_t reservedSpace4:1;
      uint64_t SDEIFC7:1;
      uint64_t TAEIFC7:1;
      uint64_t HTFIFC7:1;
      uint64_t FTFIFC7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t SDEIE:1;
      uint64_t TAEIE:1;
      uint64_t HTFIE:1;
      uint64_t FTFIE:1;
      uint64_t TFCS:1;
      uint64_t TM:2;
      uint64_t CMEN:1;
      uint64_t PNAGA:1;
      uint64_t MNAGA:1;
      uint64_t PWIDTH:2;
      uint64_t MWIDTH:2;
      uint64_t PAIF:1;
      uint64_t PRIO:2;
      uint64_t SBMEN:1;
      uint64_t MBS:1;
      uint64_t reservedSpace0:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t PERIEN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0PADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0M0ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0M1ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCCV:2;
      uint64_t MDMEN:1;
      uint64_t FCNT:3;
      uint64_t reservedSpace0:1;
      uint64_t FEEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0FCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t SDEIE:1;
      uint64_t TAEIE:1;
      uint64_t HTFIE:1;
      uint64_t FTFIE:1;
      uint64_t TFCS:1;
      uint64_t TM:2;
      uint64_t CMEN:1;
      uint64_t PNAGA:1;
      uint64_t MNAGA:1;
      uint64_t PWIDTH:2;
      uint64_t MWIDTH:2;
      uint64_t PAIF:1;
      uint64_t PRIO:2;
      uint64_t SBMEN:1;
      uint64_t MBS:1;
      uint64_t reservedSpace0:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t PERIEN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1PADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1M0ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1M1ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCCV:2;
      uint64_t MDMEN:1;
      uint64_t FCNT:3;
      uint64_t reservedSpace0:1;
      uint64_t FEEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1FCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t SDEIE:1;
      uint64_t TAEIE:1;
      uint64_t HTFIE:1;
      uint64_t FTFIE:1;
      uint64_t TFCS:1;
      uint64_t TM:2;
      uint64_t CMEN:1;
      uint64_t PNAGA:1;
      uint64_t MNAGA:1;
      uint64_t PWIDTH:2;
      uint64_t MWIDTH:2;
      uint64_t PAIF:1;
      uint64_t PRIO:2;
      uint64_t SBMEN:1;
      uint64_t MBS:1;
      uint64_t reservedSpace0:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t PERIEN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2PADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2M0ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2M1ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCCV:2;
      uint64_t MDMEN:1;
      uint64_t FCNT:3;
      uint64_t reservedSpace0:1;
      uint64_t FEEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2FCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t SDEIE:1;
      uint64_t TAEIE:1;
      uint64_t HTFIE:1;
      uint64_t FTFIE:1;
      uint64_t TFCS:1;
      uint64_t TM:2;
      uint64_t CMEN:1;
      uint64_t PNAGA:1;
      uint64_t MNAGA:1;
      uint64_t PWIDTH:2;
      uint64_t MWIDTH:2;
      uint64_t PAIF:1;
      uint64_t PRIO:2;
      uint64_t SBMEN:1;
      uint64_t MBS:1;
      uint64_t reservedSpace0:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t PERIEN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3PADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3M0ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3M1ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCCV:2;
      uint64_t MDMEN:1;
      uint64_t FCNT:3;
      uint64_t reservedSpace0:1;
      uint64_t FEEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3FCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t SDEIE:1;
      uint64_t TAEIE:1;
      uint64_t HTFIE:1;
      uint64_t FTFIE:1;
      uint64_t TFCS:1;
      uint64_t TM:2;
      uint64_t CMEN:1;
      uint64_t PNAGA:1;
      uint64_t MNAGA:1;
      uint64_t PWIDTH:2;
      uint64_t MWIDTH:2;
      uint64_t PAIF:1;
      uint64_t PRIO:2;
      uint64_t SBMEN:1;
      uint64_t MBS:1;
      uint64_t reservedSpace0:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t PERIEN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4PADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4M0ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4M1ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCCV:2;
      uint64_t MDMEN:1;
      uint64_t FCNT:3;
      uint64_t reservedSpace0:1;
      uint64_t FEEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4FCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t SDEIE:1;
      uint64_t TAEIE:1;
      uint64_t HTFIE:1;
      uint64_t FTFIE:1;
      uint64_t TFCS:1;
      uint64_t TM:2;
      uint64_t CMEN:1;
      uint64_t PNAGA:1;
      uint64_t MNAGA:1;
      uint64_t PWIDTH:2;
      uint64_t MWIDTH:2;
      uint64_t PAIF:1;
      uint64_t PRIO:2;
      uint64_t SBMEN:1;
      uint64_t MBS:1;
      uint64_t reservedSpace0:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t PERIEN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5PADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5M0ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5M1ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCCV:2;
      uint64_t MDMEN:1;
      uint64_t FCNT:3;
      uint64_t reservedSpace0:1;
      uint64_t FEEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5FCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t SDEIE:1;
      uint64_t TAEIE:1;
      uint64_t HTFIE:1;
      uint64_t FTFIE:1;
      uint64_t TFCS:1;
      uint64_t TM:2;
      uint64_t CMEN:1;
      uint64_t PNAGA:1;
      uint64_t MNAGA:1;
      uint64_t PWIDTH:2;
      uint64_t MWIDTH:2;
      uint64_t PAIF:1;
      uint64_t PRIO:2;
      uint64_t SBMEN:1;
      uint64_t MBS:1;
      uint64_t reservedSpace0:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t PERIEN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6PADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6M0ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6M1ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCCV:2;
      uint64_t MDMEN:1;
      uint64_t FCNT:3;
      uint64_t reservedSpace0:1;
      uint64_t FEEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6FCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
      uint64_t SDEIE:1;
      uint64_t TAEIE:1;
      uint64_t HTFIE:1;
      uint64_t FTFIE:1;
      uint64_t TFCS:1;
      uint64_t TM:2;
      uint64_t CMEN:1;
      uint64_t PNAGA:1;
      uint64_t MNAGA:1;
      uint64_t PWIDTH:2;
      uint64_t MWIDTH:2;
      uint64_t PAIF:1;
      uint64_t PRIO:2;
      uint64_t SBMEN:1;
      uint64_t MBS:1;
      uint64_t reservedSpace0:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t PERIEN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7PADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7M0ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7M1ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCCV:2;
      uint64_t MDMEN:1;
      uint64_t FCNT:3;
      uint64_t reservedSpace0:1;
      uint64_t FEEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7FCTL;

};

#define DMA1 (*(volatile struct DMA1_tag *) 0x40026400)

struct ENET_DMA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWR:1;
      uint64_t DAB:1;
      uint64_t DPSL:5;
      uint64_t DFM:1;
      uint64_t PGBL:6;
      uint64_t RTPR:2;
      uint64_t FB:1;
      uint64_t RXDP:6;
      uint64_t UIP:1;
      uint64_t FPBL:1;
      uint64_t AA:1;
      uint64_t MB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_BCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_TPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_RPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_RDTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_TDTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TS:1;
      uint64_t TPS:1;
      uint64_t TBU:1;
      uint64_t TJT:1;
      uint64_t RO:1;
      uint64_t TU:1;
      uint64_t RS:1;
      uint64_t RBU:1;
      uint64_t RPS:1;
      uint64_t RWT:1;
      uint64_t ET:1;
      uint64_t reservedSpace0:2;
      uint64_t FBE:1;
      uint64_t ER:1;
      uint64_t AI:1;
      uint64_t NI:1;
      uint64_t RP:3;
      uint64_t TP:3;
      uint64_t EB:3;
      uint64_t reservedSpace1:1;
      uint64_t MSC:1;
      uint64_t WUM:1;
      uint64_t TST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRE:1;
      uint64_t OSF:1;
      uint64_t RTHC:2;
      uint64_t reservedSpace1:1;
      uint64_t FUF:1;
      uint64_t FERF:1;
      uint64_t reservedSpace2:5;
      uint64_t STE:1;
      uint64_t TTHC:3;
      uint64_t reservedSpace3:3;
      uint64_t FTF:1;
      uint64_t TSFD:1;
      uint64_t reservedSpace4:2;
      uint64_t DAFRF:1;
      uint64_t RSFD:1;
      uint64_t DTCERFD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIEN:1;
      uint64_t TPSIEN:1;
      uint64_t TBUIEN:1;
      uint64_t TJTIEN:1;
      uint64_t ROIEN:1;
      uint64_t TUIEN:1;
      uint64_t RIEN:1;
      uint64_t RBUIEN:1;
      uint64_t RPSIEN:1;
      uint64_t RWTIEN:1;
      uint64_t ETIEN:1;
      uint64_t reservedSpace0:2;
      uint64_t FBEIEN:1;
      uint64_t ERIEN:1;
      uint64_t AIEN:1;
      uint64_t NIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSFC:16;
      uint64_t reservedSpace0:1;
      uint64_t MSFA:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_MFBOCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDCFRS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_RSWDC;

  uint8_t res0[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CTDADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CRDADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CTBADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RBAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CRBADDR;

};

#define ENET_DMA (*(volatile struct ENET_DMA_tag *) 0x40029000)

struct ENET_MAC_FCTH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFA:3;
      uint64_t reservedSpace0:1;
      uint64_t RFD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_FCTH;

};

#define ENET_MAC_FCTH (*(volatile struct ENET_MAC_FCTH_tag *) 0x40029080)

struct ENET_MAC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t REN:1;
      uint64_t TEN:1;
      uint64_t DFC:1;
      uint64_t BOL:2;
      uint64_t APCD:1;
      uint64_t reservedSpace1:1;
      uint64_t RTD:1;
      uint64_t IPFCO:1;
      uint64_t DPM:1;
      uint64_t LBM:1;
      uint64_t ROD:1;
      uint64_t SPD:1;
      uint64_t reservedSpace2:1;
      uint64_t CSD:1;
      uint64_t IGBS:3;
      uint64_t reservedSpace3:2;
      uint64_t JBD:1;
      uint64_t WDD:1;
      uint64_t reservedSpace4:1;
      uint64_t TFCD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PM:1;
      uint64_t HUF:1;
      uint64_t HMF:1;
      uint64_t DAIFLT:1;
      uint64_t MFD:1;
      uint64_t BFRMD:1;
      uint64_t PCFRM:2;
      uint64_t SAIFLT:1;
      uint64_t SAFLT:1;
      uint64_t HPFLT:1;
      uint64_t reservedSpace0:20;
      uint64_t FAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_FRMF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HLH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_HLH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HLL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_HLL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PB:1;
      uint64_t PW:1;
      uint64_t CLR:3;
      uint64_t reservedSpace0:1;
      uint64_t PR:5;
      uint64_t PA:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_PHY_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_PHY_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLCB_BKPA:1;
      uint64_t TFCEN:1;
      uint64_t RFCEN:1;
      uint64_t UPFDT:1;
      uint64_t PLTS:2;
      uint64_t reservedSpace0:1;
      uint64_t DZQP:1;
      uint64_t reservedSpace1:8;
      uint64_t PTM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_FCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLTI:16;
      uint64_t VLTC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_VLT;

  uint8_t res0[8];

  uint32_t MAC_RWFF;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWD:1;
      uint64_t MPEN:1;
      uint64_t WFEN:1;
      uint64_t reservedSpace0:2;
      uint64_t MPKR:1;
      uint64_t WUFR:1;
      uint64_t reservedSpace1:2;
      uint64_t GU:1;
      uint64_t reservedSpace2:21;
      uint64_t WUFFRPR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_WUM;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MRNI:1;
      uint64_t RXAFS:2;
      uint64_t reservedSpace0:1;
      uint64_t RXFW:1;
      uint64_t RXFRS:2;
      uint64_t reservedSpace1:1;
      uint64_t RXFS:2;
      uint64_t reservedSpace2:6;
      uint64_t MTNI:1;
      uint64_t SOMT:2;
      uint64_t PCS:1;
      uint64_t TXFRS:2;
      uint64_t TXFW:1;
      uint64_t reservedSpace3:1;
      uint64_t TXFNE:1;
      uint64_t TXFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_DBG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t WUM:1;
      uint64_t MSC:1;
      uint64_t MSCR:1;
      uint64_t MSCT:1;
      uint64_t reservedSpace1:2;
      uint64_t TMST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t WUMIM:1;
      uint64_t reservedSpace1:5;
      uint64_t TMSTIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_INTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR0H:16;
      uint64_t reservedSpace0:15;
      uint64_t MO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_ADDR0H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR0L:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_ADDR0L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR1H:16;
      uint64_t reservedSpace0:8;
      uint64_t MB:6;
      uint64_t SAF:1;
      uint64_t AFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_ADDR1H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR1L:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_ADDR1L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR2H:16;
      uint64_t reservedSpace0:8;
      uint64_t MB:6;
      uint64_t SAF:1;
      uint64_t AFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_ADDR2H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR2L:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_ADDR2L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR3H:16;
      uint64_t reservedSpace0:8;
      uint64_t MB:6;
      uint64_t SAF:1;
      uint64_t AFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_ADDR3H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR3L:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_ADDR3L;

};

#define ENET_MAC (*(volatile struct ENET_MAC_tag *) 0x40028000)

struct ENET_MSC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTR:1;
      uint64_t CTSR:1;
      uint64_t RTOR:1;
      uint64_t MCFZ:1;
      uint64_t PMC:1;
      uint64_t AFHPM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSC_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t RFCE:1;
      uint64_t RFAE:1;
      uint64_t reservedSpace1:10;
      uint64_t RGUF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSC_RINTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t TGFSC:1;
      uint64_t TGFMSC:1;
      uint64_t reservedSpace1:5;
      uint64_t TGF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSC_TINTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t RFCEIM:1;
      uint64_t RFAEIM:1;
      uint64_t reservedSpace1:10;
      uint64_t RGUFIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSC_RINTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t TGFSCIM:1;
      uint64_t TGFMSCIM:1;
      uint64_t reservedSpace1:5;
      uint64_t TGFIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSC_TINTMSK;

  uint8_t res0[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSC_SCCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSCC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSC_MSCCNT;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TGF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSC_TGFCNT;

  uint8_t res2[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFCER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSC_RFCECNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFAER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSC_RFAECNT;

  uint8_t res3[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RGUF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSC_RGUFCNT;

};

#define ENET_MSC (*(volatile struct ENET_MSC_tag *) 0x40028100)

struct ENET_PTP_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMSEN:1;
      uint64_t TMSFCU:1;
      uint64_t TMSSTI:1;
      uint64_t TMSSTU:1;
      uint64_t TMSITEN:1;
      uint64_t TMSARU:1;
      uint64_t reservedSpace0:2;
      uint64_t ARFSEN:1;
      uint64_t SCROM:1;
      uint64_t PFSV:1;
      uint64_t ESEN:1;
      uint64_t IP6SEN:1;
      uint64_t IP4SEN:1;
      uint64_t ETMSEN:1;
      uint64_t MNMSEN:1;
      uint64_t CKNT:2;
      uint64_t MAFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTP_TSCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STMSSI:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTP_SSINC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STMS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTP_TSH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STMSS:31;
      uint64_t STS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTP_TSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMSUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTP_TSUH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMSUSS:31;
      uint64_t TMSUPNS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTP_TSUL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTP_TSADDEND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETSH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTP_ETH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETSL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTP_ETL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSSCO:1;
      uint64_t TTM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTP_TSF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSOFC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTP_PPSCTL;

};

#define ENET_PTP (*(volatile struct ENET_PTP_tag *) 0x40028700)

struct EXMC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t NRBKEN:1;
      uint64_t NRMUX:1;
      uint64_t NRTP:2;
      uint64_t NRW:2;
      uint64_t NREN:1;
      uint64_t reservedSpace0:1;
      uint64_t SBRSTEN:1;
      uint64_t NRWTPOL:1;
      uint64_t WRAPEN:1;
      uint64_t NRWTCFG:1;
      uint64_t WREN:1;
      uint64_t NRWTEN:1;
      uint64_t EXMODEN:1;
      uint64_t ASYNCWAIT:1;
      uint64_t CPS:3;
      uint64_t SYNCWR:1;
      uint64_t CCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SNCTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASET:4;
      uint64_t AHLD:4;
      uint64_t DSET:8;
      uint64_t BUSLAT:4;
      uint64_t CKDIV:4;
      uint64_t DLAT:4;
      uint64_t ASYNCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SNTCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NRBKEN:1;
      uint64_t NRMUX:1;
      uint64_t NRTP:2;
      uint64_t NRW:2;
      uint64_t NREN:1;
      uint64_t reservedSpace0:1;
      uint64_t SBRSTEN:1;
      uint64_t NRWTPOL:1;
      uint64_t WRAPEN:1;
      uint64_t NRWTCFG:1;
      uint64_t WREN:1;
      uint64_t NRWTEN:1;
      uint64_t EXMODEN:1;
      uint64_t ASYNCWAIT:1;
      uint64_t CPS:3;
      uint64_t SYNCWR:1;
      uint64_t CCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SNCTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASET:4;
      uint64_t AHLD:4;
      uint64_t DSET:8;
      uint64_t BUSLAT:4;
      uint64_t CKDIV:4;
      uint64_t DLAT:4;
      uint64_t ASYNCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SNTCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NRBKEN:1;
      uint64_t NRMUX:1;
      uint64_t NRTP:2;
      uint64_t NRW:2;
      uint64_t NREN:1;
      uint64_t reservedSpace0:1;
      uint64_t SBRSTEN:1;
      uint64_t NRWTPOL:1;
      uint64_t WRAPEN:1;
      uint64_t NRWTCFG:1;
      uint64_t WREN:1;
      uint64_t NRWTEN:1;
      uint64_t EXMODEN:1;
      uint64_t ASYNCWAIT:1;
      uint64_t CPS:3;
      uint64_t SYNCWR:1;
      uint64_t CCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SNCTL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASET:4;
      uint64_t AHLD:4;
      uint64_t DSET:8;
      uint64_t BUSLAT:4;
      uint64_t CKDIV:4;
      uint64_t DLAT:4;
      uint64_t ASYNCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SNTCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NRBKEN:1;
      uint64_t NRMUX:1;
      uint64_t NRTP:2;
      uint64_t NRW:2;
      uint64_t NREN:1;
      uint64_t reservedSpace0:1;
      uint64_t SBRSTEN:1;
      uint64_t NRWTPOL:1;
      uint64_t WRAPEN:1;
      uint64_t NRWTCFG:1;
      uint64_t WREN:1;
      uint64_t NRWTEN:1;
      uint64_t EXMODEN:1;
      uint64_t ASYNCWAIT:1;
      uint64_t CPS:3;
      uint64_t SYNCWR:1;
      uint64_t CCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SNCTL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASET:4;
      uint64_t AHLD:4;
      uint64_t DSET:8;
      uint64_t BUSLAT:4;
      uint64_t CKDIV:4;
      uint64_t DLAT:4;
      uint64_t ASYNCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SNTCFG3;

  uint8_t res0[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t NDWTEN:1;
      uint64_t NDBKEN:1;
      uint64_t NDTP:1;
      uint64_t NDW:2;
      uint64_t ECCEN:1;
      uint64_t reservedSpace1:2;
      uint64_t CTR:4;
      uint64_t ATR:4;
      uint64_t ECCSZ:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NPCTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTRS:1;
      uint64_t INTHS:1;
      uint64_t INTFS:1;
      uint64_t INTREN:1;
      uint64_t INTHEN:1;
      uint64_t INTFEN:1;
      uint64_t FFEPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NPINTEN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMSET:8;
      uint64_t COMWAIT:8;
      uint64_t COMHLD:8;
      uint64_t COMHIZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NPCTCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ATTSET:8;
      uint64_t ATTWAIT:8;
      uint64_t ATTHLD:8;
      uint64_t ATTHIZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NPATCFG1;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NECC1;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t NDWTEN:1;
      uint64_t NDBKEN:1;
      uint64_t NDTP:1;
      uint64_t NDW:2;
      uint64_t ECCEN:1;
      uint64_t reservedSpace1:2;
      uint64_t CTR:4;
      uint64_t ATR:4;
      uint64_t ECCSZ:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NPCTL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTRS:1;
      uint64_t INTHS:1;
      uint64_t INTFS:1;
      uint64_t INTREN:1;
      uint64_t INTHEN:1;
      uint64_t INTFEN:1;
      uint64_t FFEPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NPINTEN2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMSET:8;
      uint64_t COMWAIT:8;
      uint64_t COMHLD:8;
      uint64_t COMHIZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NPCTCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ATTSET:8;
      uint64_t ATTWAIT:8;
      uint64_t ATTHLD:8;
      uint64_t ATTHIZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NPATCFG2;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NECC2;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t NDWTEN:1;
      uint64_t NDBKEN:1;
      uint64_t NDTP:1;
      uint64_t NDW:2;
      uint64_t ECCEN:1;
      uint64_t reservedSpace1:2;
      uint64_t CTR:4;
      uint64_t ATR:4;
      uint64_t ECCSZ:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NPCTL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTRS:1;
      uint64_t INTHS:1;
      uint64_t INTFS:1;
      uint64_t INTREN:1;
      uint64_t INTHEN:1;
      uint64_t INTFEN:1;
      uint64_t FFEPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NPINTEN3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMSET:8;
      uint64_t COMWAIT:8;
      uint64_t COMHLD:8;
      uint64_t COMHIZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NPCTCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ATTSET:8;
      uint64_t ATTWAIT:8;
      uint64_t ATTHLD:8;
      uint64_t ATTHIZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NPATCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOSET:8;
      uint64_t IOWAIT:8;
      uint64_t IOHLD:8;
      uint64_t IOHIZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOTCFG3;

  uint8_t res5[80];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WASET:4;
      uint64_t WAHLD:4;
      uint64_t WDSET:8;
      uint64_t WBUSLAT:4;
      uint64_t reservedSpace0:8;
      uint64_t WASYNCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SNWTCFG0;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WASET:4;
      uint64_t WAHLD:4;
      uint64_t WDSET:8;
      uint64_t WBUSLAT:4;
      uint64_t reservedSpace0:8;
      uint64_t WASYNCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SNWTCFG1;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WASET:4;
      uint64_t WAHLD:4;
      uint64_t WDSET:8;
      uint64_t WBUSLAT:4;
      uint64_t reservedSpace0:8;
      uint64_t WASYNCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SNWTCFG2;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WASET:4;
      uint64_t WAHLD:4;
      uint64_t WDSET:8;
      uint64_t WBUSLAT:4;
      uint64_t reservedSpace0:8;
      uint64_t WASYNCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SNWTCFG3;

  uint8_t res9[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAW:2;
      uint64_t RAW:2;
      uint64_t SDW:2;
      uint64_t NBK:1;
      uint64_t CL:2;
      uint64_t WPEN:1;
      uint64_t SDCLK:2;
      uint64_t BRSTRD:1;
      uint64_t PIPED:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDCTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAW:2;
      uint64_t RAW:2;
      uint64_t SDW:2;
      uint64_t NBK:1;
      uint64_t CL:2;
      uint64_t WPEN:1;
      uint64_t SDCLK:2;
      uint64_t BRSTRD:1;
      uint64_t PIPED:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDCTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LMRD:4;
      uint64_t XSRD:4;
      uint64_t RASD:4;
      uint64_t ARFD:4;
      uint64_t WRD:4;
      uint64_t RPD:4;
      uint64_t RCD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDTCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LMRD:4;
      uint64_t XSRD:4;
      uint64_t RASD:4;
      uint64_t ARFD:4;
      uint64_t WRD:4;
      uint64_t RPD:4;
      uint64_t RCD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDTCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:3;
      uint64_t DS1:1;
      uint64_t DS0:1;
      uint64_t NARF:4;
      uint64_t MRC:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDCMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REC:1;
      uint64_t ARINTV:13;
      uint64_t REIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDARI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REIF:1;
      uint64_t STA0:2;
      uint64_t STA1:2;
      uint64_t NRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDSTAT;

  uint8_t res10[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSEN:1;
      uint64_t SSCR:1;
      uint64_t reservedSpace0:2;
      uint64_t SDSC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDRSCTL;

  uint8_t res11[396];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t CMDBIT:2;
      uint64_t reservedSpace1:6;
      uint64_t ADRBIT:5;
      uint64_t IDL:2;
      uint64_t POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SINIT;

  uint8_t res12[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCMD:16;
      uint64_t RWAITCYCLE:4;
      uint64_t RMODE:2;
      uint64_t reservedSpace0:9;
      uint64_t RDID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRCMD;

  uint8_t res13[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WCMD:15;
      uint64_t reservedSpace0:1;
      uint64_t WWAITCYCLE:4;
      uint64_t WMODE:2;
      uint64_t reservedSpace1:9;
      uint64_t SC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWCMD;

  uint8_t res14[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIDL;

  uint8_t res15[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIDH;

};

#define EXMC (*(volatile struct EXMC_tag *) 0xa0000000)

struct EXTI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTEN0:1;
      uint64_t INTEN1:1;
      uint64_t INTEN2:1;
      uint64_t INTEN3:1;
      uint64_t INTEN4:1;
      uint64_t INTEN5:1;
      uint64_t INTEN6:1;
      uint64_t INTEN7:1;
      uint64_t INTEN8:1;
      uint64_t INTEN9:1;
      uint64_t INTEN10:1;
      uint64_t INTEN11:1;
      uint64_t INTEN12:1;
      uint64_t INTEN13:1;
      uint64_t INTEN14:1;
      uint64_t INTEN15:1;
      uint64_t INTEN16:1;
      uint64_t INTEN17:1;
      uint64_t INTEN18:1;
      uint64_t INTEN19:1;
      uint64_t INTEN20:1;
      uint64_t INTEN21:1;
      uint64_t INTEN22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVEN0:1;
      uint64_t EVEN1:1;
      uint64_t EVEN2:1;
      uint64_t EVEN3:1;
      uint64_t EVEN4:1;
      uint64_t EVEN5:1;
      uint64_t EVEN6:1;
      uint64_t EVEN7:1;
      uint64_t EVEN8:1;
      uint64_t EVEN9:1;
      uint64_t EVEN10:1;
      uint64_t EVEN11:1;
      uint64_t EVEN12:1;
      uint64_t EVEN13:1;
      uint64_t EVEN14:1;
      uint64_t EVEN15:1;
      uint64_t EVEN16:1;
      uint64_t EVEN17:1;
      uint64_t EVEN18:1;
      uint64_t EVEN19:1;
      uint64_t EVEN20:1;
      uint64_t EVEN21:1;
      uint64_t EVEN22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTEN0:1;
      uint64_t RTEN1:1;
      uint64_t RTEN2:1;
      uint64_t RTEN3:1;
      uint64_t RTEN4:1;
      uint64_t RTEN5:1;
      uint64_t RTEN6:1;
      uint64_t RTEN7:1;
      uint64_t RTEN8:1;
      uint64_t RTEN9:1;
      uint64_t RTEN10:1;
      uint64_t RTEN11:1;
      uint64_t RTEN12:1;
      uint64_t RTEN13:1;
      uint64_t RTEN14:1;
      uint64_t RTEN15:1;
      uint64_t RTEN16:1;
      uint64_t RTEN17:1;
      uint64_t RTEN18:1;
      uint64_t RTEN19:1;
      uint64_t RTEN20:1;
      uint64_t RTEN21:1;
      uint64_t RTEN22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTEN0:1;
      uint64_t FTEN1:1;
      uint64_t FTEN2:1;
      uint64_t FTEN3:1;
      uint64_t FTEN4:1;
      uint64_t FTEN5:1;
      uint64_t FTEN6:1;
      uint64_t FTEN7:1;
      uint64_t FTEN8:1;
      uint64_t FTEN9:1;
      uint64_t FTEN10:1;
      uint64_t FTEN11:1;
      uint64_t FTEN12:1;
      uint64_t FTEN13:1;
      uint64_t FTEN14:1;
      uint64_t FTEN15:1;
      uint64_t FTEN16:1;
      uint64_t FTEN17:1;
      uint64_t FTEN18:1;
      uint64_t FTEN19:1;
      uint64_t FTEN20:1;
      uint64_t FTEN21:1;
      uint64_t FTEN22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWIEV0:1;
      uint64_t SWIEV1:1;
      uint64_t SWIEV2:1;
      uint64_t SWIEV3:1;
      uint64_t SWIEV4:1;
      uint64_t SWIEV5:1;
      uint64_t SWIEV6:1;
      uint64_t SWIEV7:1;
      uint64_t SWIEV8:1;
      uint64_t SWIEV9:1;
      uint64_t SWIEV10:1;
      uint64_t SWIEV11:1;
      uint64_t SWIEV12:1;
      uint64_t SWIEV13:1;
      uint64_t SWIEV14:1;
      uint64_t SWIEV15:1;
      uint64_t SWIEV16:1;
      uint64_t SWIEV17:1;
      uint64_t SWIEV18:1;
      uint64_t SWIEV19:1;
      uint64_t SWIEV20:1;
      uint64_t SWIEV21:1;
      uint64_t SWIEV22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWIEV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD0:1;
      uint64_t PD1:1;
      uint64_t PD2:1;
      uint64_t PD3:1;
      uint64_t PD4:1;
      uint64_t PD5:1;
      uint64_t PD6:1;
      uint64_t PD7:1;
      uint64_t PD8:1;
      uint64_t PD9:1;
      uint64_t PD10:1;
      uint64_t PD11:1;
      uint64_t PD12:1;
      uint64_t PD13:1;
      uint64_t PD14:1;
      uint64_t PD15:1;
      uint64_t PD16:1;
      uint64_t PD17:1;
      uint64_t PD18:1;
      uint64_t PD19:1;
      uint64_t PD20:1;
      uint64_t PD21:1;
      uint64_t PD22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PD;

};

#define EXTI (*(volatile struct EXTI_tag *) 0x40013c00)

struct FMC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OBKEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OBKEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t END:1;
      uint64_t OPERR:1;
      uint64_t reservedSpace0:2;
      uint64_t WPERR:1;
      uint64_t reservedSpace1:1;
      uint64_t PGMERR:1;
      uint64_t PGSERR:1;
      uint64_t RDDERR:1;
      uint64_t reservedSpace2:7;
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PG:1;
      uint64_t SER:1;
      uint64_t MER0:1;
      uint64_t SN:5;
      uint64_t PSZ:2;
      uint64_t reservedSpace0:5;
      uint64_t MER1:1;
      uint64_t START:1;
      uint64_t reservedSpace1:7;
      uint64_t ENDIE:1;
      uint64_t ERRIE:1;
      uint64_t reservedSpace2:5;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OB_LK:1;
      uint64_t OB_START:1;
      uint64_t BOR_TH:2;
      uint64_t BB:1;
      uint64_t nWDG_HW:1;
      uint64_t nRST_DPSLP:1;
      uint64_t nRST_STDBY:1;
      uint64_t SPC:8;
      uint64_t WP0:12;
      uint64_t reservedSpace0:2;
      uint64_t DBS:1;
      uint64_t DRP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OBCTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t WP1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OBCTL1;

  uint8_t res0[224];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WSEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

};

#define FMC (*(volatile struct FMC_tag *) 0x40023c00)

struct FWDGT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RLD:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUD:1;
      uint64_t RUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

};

#define FWDGT (*(volatile struct FWDGT_tag *) 0x40003000)

struct GPIOA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTL0:2;
      uint64_t CTL1:2;
      uint64_t CTL2:2;
      uint64_t CTL3:2;
      uint64_t CTL4:2;
      uint64_t CTL5:2;
      uint64_t CTL6:2;
      uint64_t CTL7:2;
      uint64_t CTL8:2;
      uint64_t CTL9:2;
      uint64_t CTL10:2;
      uint64_t CTL11:2;
      uint64_t CTL12:2;
      uint64_t CTL13:2;
      uint64_t CTL14:2;
      uint64_t CTL15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OM0:1;
      uint64_t OM1:1;
      uint64_t OM2:1;
      uint64_t OM3:1;
      uint64_t OM4:1;
      uint64_t OM5:1;
      uint64_t OM6:1;
      uint64_t OM7:1;
      uint64_t OM8:1;
      uint64_t OM9:1;
      uint64_t OM10:1;
      uint64_t OM11:1;
      uint64_t OM12:1;
      uint64_t OM13:1;
      uint64_t OM14:1;
      uint64_t OM15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPD0:2;
      uint64_t OSPD1:2;
      uint64_t OSPD2:2;
      uint64_t OSPD3:2;
      uint64_t OSPD4:2;
      uint64_t OSPD5:2;
      uint64_t OSPD6:2;
      uint64_t OSPD7:2;
      uint64_t OSPD8:2;
      uint64_t OSPD9:2;
      uint64_t OSPD10:2;
      uint64_t OSPD11:2;
      uint64_t OSPD12:2;
      uint64_t OSPD13:2;
      uint64_t OSPD14:2;
      uint64_t OSPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUD0:2;
      uint64_t PUD1:2;
      uint64_t PUD2:2;
      uint64_t PUD3:2;
      uint64_t PUD4:2;
      uint64_t PUD5:2;
      uint64_t PUD6:2;
      uint64_t PUD7:2;
      uint64_t PUD8:2;
      uint64_t PUD9:2;
      uint64_t PUD10:2;
      uint64_t PUD11:2;
      uint64_t PUD12:2;
      uint64_t PUD13:2;
      uint64_t PUD14:2;
      uint64_t PUD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISTAT0:1;
      uint64_t ISTAT1:1;
      uint64_t ISTAT2:1;
      uint64_t ISTAT3:1;
      uint64_t ISTAT4:1;
      uint64_t ISTAT5:1;
      uint64_t ISTAT6:1;
      uint64_t ISTAT7:1;
      uint64_t ISTAT8:1;
      uint64_t ISTAT9:1;
      uint64_t ISTAT10:1;
      uint64_t ISTAT11:1;
      uint64_t ISTAT12:1;
      uint64_t ISTAT13:1;
      uint64_t ISTAT14:1;
      uint64_t ISTAT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCTL0:1;
      uint64_t OCTL1:1;
      uint64_t OCTL2:1;
      uint64_t OCTL3:1;
      uint64_t OCTL4:1;
      uint64_t OCTL5:1;
      uint64_t OCTL6:1;
      uint64_t OCTL7:1;
      uint64_t OCTL8:1;
      uint64_t OCTL9:1;
      uint64_t OCTL10:1;
      uint64_t OCTL11:1;
      uint64_t OCTL12:1;
      uint64_t OCTL13:1;
      uint64_t OCTL14:1;
      uint64_t OCTL15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOP0:1;
      uint64_t BOP1:1;
      uint64_t BOP2:1;
      uint64_t BOP3:1;
      uint64_t BOP4:1;
      uint64_t BOP5:1;
      uint64_t BOP6:1;
      uint64_t BOP7:1;
      uint64_t BOP8:1;
      uint64_t BOP9:1;
      uint64_t BOP10:1;
      uint64_t BOP11:1;
      uint64_t BOP12:1;
      uint64_t BOP13:1;
      uint64_t BOP14:1;
      uint64_t BOP15:1;
      uint64_t CR0:1;
      uint64_t CR1:1;
      uint64_t CR2:1;
      uint64_t CR3:1;
      uint64_t CR4:1;
      uint64_t CR5:1;
      uint64_t CR6:1;
      uint64_t CR7:1;
      uint64_t CR8:1;
      uint64_t CR9:1;
      uint64_t CR10:1;
      uint64_t CR11:1;
      uint64_t CR12:1;
      uint64_t CR13:1;
      uint64_t CR14:1;
      uint64_t CR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LK0:1;
      uint64_t LK1:1;
      uint64_t LK2:1;
      uint64_t LK3:1;
      uint64_t LK4:1;
      uint64_t LK5:1;
      uint64_t LK6:1;
      uint64_t LK7:1;
      uint64_t LK8:1;
      uint64_t LK9:1;
      uint64_t LK10:1;
      uint64_t LK11:1;
      uint64_t LK12:1;
      uint64_t LK13:1;
      uint64_t LK14:1;
      uint64_t LK15:1;
      uint64_t LKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

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
  } __attribute__((aligned(4))) AFSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL8:4;
      uint64_t SEL9:4;
      uint64_t SEL10:4;
      uint64_t SEL11:4;
      uint64_t SEL12:4;
      uint64_t SEL13:4;
      uint64_t SEL14:4;
      uint64_t SEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR0:1;
      uint64_t CR1:1;
      uint64_t CR2:1;
      uint64_t CR3:1;
      uint64_t CR4:1;
      uint64_t CR5:1;
      uint64_t CR6:1;
      uint64_t CR7:1;
      uint64_t CR8:1;
      uint64_t CR9:1;
      uint64_t CR10:1;
      uint64_t CR11:1;
      uint64_t CR12:1;
      uint64_t CR13:1;
      uint64_t CR14:1;
      uint64_t CR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TG0:1;
      uint64_t TG1:1;
      uint64_t TG2:1;
      uint64_t TG3:1;
      uint64_t TG4:1;
      uint64_t TG5:1;
      uint64_t TG6:1;
      uint64_t TG7:1;
      uint64_t TG8:1;
      uint64_t TG9:1;
      uint64_t TG10:1;
      uint64_t TG11:1;
      uint64_t TG12:1;
      uint64_t TG13:1;
      uint64_t TG14:1;
      uint64_t TG15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG;

};

#define GPIOA (*(volatile struct GPIOA_tag *) 0x40020000)

struct GPIOB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTL0:2;
      uint64_t CTL1:2;
      uint64_t CTL2:2;
      uint64_t CTL3:2;
      uint64_t CTL4:2;
      uint64_t CTL5:2;
      uint64_t CTL6:2;
      uint64_t CTL7:2;
      uint64_t CTL8:2;
      uint64_t CTL9:2;
      uint64_t CTL10:2;
      uint64_t CTL11:2;
      uint64_t CTL12:2;
      uint64_t CTL13:2;
      uint64_t CTL14:2;
      uint64_t CTL15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OM0:1;
      uint64_t OM1:1;
      uint64_t OM2:1;
      uint64_t OM3:1;
      uint64_t OM4:1;
      uint64_t OM5:1;
      uint64_t OM6:1;
      uint64_t OM7:1;
      uint64_t OM8:1;
      uint64_t OM9:1;
      uint64_t OM10:1;
      uint64_t OM11:1;
      uint64_t OM12:1;
      uint64_t OM13:1;
      uint64_t OM14:1;
      uint64_t OM15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPD0:2;
      uint64_t OSPD1:2;
      uint64_t OSPD2:2;
      uint64_t OSPD3:2;
      uint64_t OSPD4:2;
      uint64_t OSPD5:2;
      uint64_t OSPD6:2;
      uint64_t OSPD7:2;
      uint64_t OSPD8:2;
      uint64_t OSPD9:2;
      uint64_t OSPD10:2;
      uint64_t OSPD11:2;
      uint64_t OSPD12:2;
      uint64_t OSPD13:2;
      uint64_t OSPD14:2;
      uint64_t OSPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUD0:2;
      uint64_t PUD1:2;
      uint64_t PUD2:2;
      uint64_t PUD3:2;
      uint64_t PUD4:2;
      uint64_t PUD5:2;
      uint64_t PUD6:2;
      uint64_t PUD7:2;
      uint64_t PUD8:2;
      uint64_t PUD9:2;
      uint64_t PUD10:2;
      uint64_t PUD11:2;
      uint64_t PUD12:2;
      uint64_t PUD13:2;
      uint64_t PUD14:2;
      uint64_t PUD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISTAT0:1;
      uint64_t ISTAT1:1;
      uint64_t ISTAT2:1;
      uint64_t ISTAT3:1;
      uint64_t ISTAT4:1;
      uint64_t ISTAT5:1;
      uint64_t ISTAT6:1;
      uint64_t ISTAT7:1;
      uint64_t ISTAT8:1;
      uint64_t ISTAT9:1;
      uint64_t ISTAT10:1;
      uint64_t ISTAT11:1;
      uint64_t ISTAT12:1;
      uint64_t ISTAT13:1;
      uint64_t ISTAT14:1;
      uint64_t ISTAT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCTL0:1;
      uint64_t OCTL1:1;
      uint64_t OCTL2:1;
      uint64_t OCTL3:1;
      uint64_t OCTL4:1;
      uint64_t OCTL5:1;
      uint64_t OCTL6:1;
      uint64_t OCTL7:1;
      uint64_t OCTL8:1;
      uint64_t OCTL9:1;
      uint64_t OCTL10:1;
      uint64_t OCTL11:1;
      uint64_t OCTL12:1;
      uint64_t OCTL13:1;
      uint64_t OCTL14:1;
      uint64_t OCTL15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOP0:1;
      uint64_t BOP1:1;
      uint64_t BOP2:1;
      uint64_t BOP3:1;
      uint64_t BOP4:1;
      uint64_t BOP5:1;
      uint64_t BOP6:1;
      uint64_t BOP7:1;
      uint64_t BOP8:1;
      uint64_t BOP9:1;
      uint64_t BOP10:1;
      uint64_t BOP11:1;
      uint64_t BOP12:1;
      uint64_t BOP13:1;
      uint64_t BOP14:1;
      uint64_t BOP15:1;
      uint64_t CR0:1;
      uint64_t CR1:1;
      uint64_t CR2:1;
      uint64_t CR3:1;
      uint64_t CR4:1;
      uint64_t CR5:1;
      uint64_t CR6:1;
      uint64_t CR7:1;
      uint64_t CR8:1;
      uint64_t CR9:1;
      uint64_t CR10:1;
      uint64_t CR11:1;
      uint64_t CR12:1;
      uint64_t CR13:1;
      uint64_t CR14:1;
      uint64_t CR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LK0:1;
      uint64_t LK1:1;
      uint64_t LK2:1;
      uint64_t LK3:1;
      uint64_t LK4:1;
      uint64_t LK5:1;
      uint64_t LK6:1;
      uint64_t LK7:1;
      uint64_t LK8:1;
      uint64_t LK9:1;
      uint64_t LK10:1;
      uint64_t LK11:1;
      uint64_t LK12:1;
      uint64_t LK13:1;
      uint64_t LK14:1;
      uint64_t LK15:1;
      uint64_t LKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

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
  } __attribute__((aligned(4))) AFSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL8:4;
      uint64_t SEL9:4;
      uint64_t SEL10:4;
      uint64_t SEL11:4;
      uint64_t SEL12:4;
      uint64_t SEL13:4;
      uint64_t SEL14:4;
      uint64_t SEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR0:1;
      uint64_t CR1:1;
      uint64_t CR2:1;
      uint64_t CR3:1;
      uint64_t CR4:1;
      uint64_t CR5:1;
      uint64_t CR6:1;
      uint64_t CR7:1;
      uint64_t CR8:1;
      uint64_t CR9:1;
      uint64_t CR10:1;
      uint64_t CR11:1;
      uint64_t CR12:1;
      uint64_t CR13:1;
      uint64_t CR14:1;
      uint64_t CR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TG0:1;
      uint64_t TG1:1;
      uint64_t TG2:1;
      uint64_t TG3:1;
      uint64_t TG4:1;
      uint64_t TG5:1;
      uint64_t TG6:1;
      uint64_t TG7:1;
      uint64_t TG8:1;
      uint64_t TG9:1;
      uint64_t TG10:1;
      uint64_t TG11:1;
      uint64_t TG12:1;
      uint64_t TG13:1;
      uint64_t TG14:1;
      uint64_t TG15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG;

};

#define GPIOB (*(volatile struct GPIOB_tag *) 0x40020400)

struct GPIOC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTL0:2;
      uint64_t CTL1:2;
      uint64_t CTL2:2;
      uint64_t CTL3:2;
      uint64_t CTL4:2;
      uint64_t CTL5:2;
      uint64_t CTL6:2;
      uint64_t CTL7:2;
      uint64_t CTL8:2;
      uint64_t CTL9:2;
      uint64_t CTL10:2;
      uint64_t CTL11:2;
      uint64_t CTL12:2;
      uint64_t CTL13:2;
      uint64_t CTL14:2;
      uint64_t CTL15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OM0:1;
      uint64_t OM1:1;
      uint64_t OM2:1;
      uint64_t OM3:1;
      uint64_t OM4:1;
      uint64_t OM5:1;
      uint64_t OM6:1;
      uint64_t OM7:1;
      uint64_t OM8:1;
      uint64_t OM9:1;
      uint64_t OM10:1;
      uint64_t OM11:1;
      uint64_t OM12:1;
      uint64_t OM13:1;
      uint64_t OM14:1;
      uint64_t OM15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPD0:2;
      uint64_t OSPD1:2;
      uint64_t OSPD2:2;
      uint64_t OSPD3:2;
      uint64_t OSPD4:2;
      uint64_t OSPD5:2;
      uint64_t OSPD6:2;
      uint64_t OSPD7:2;
      uint64_t OSPD8:2;
      uint64_t OSPD9:2;
      uint64_t OSPD10:2;
      uint64_t OSPD11:2;
      uint64_t OSPD12:2;
      uint64_t OSPD13:2;
      uint64_t OSPD14:2;
      uint64_t OSPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUD0:2;
      uint64_t PUD1:2;
      uint64_t PUD2:2;
      uint64_t PUD3:2;
      uint64_t PUD4:2;
      uint64_t PUD5:2;
      uint64_t PUD6:2;
      uint64_t PUD7:2;
      uint64_t PUD8:2;
      uint64_t PUD9:2;
      uint64_t PUD10:2;
      uint64_t PUD11:2;
      uint64_t PUD12:2;
      uint64_t PUD13:2;
      uint64_t PUD14:2;
      uint64_t PUD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISTAT0:1;
      uint64_t ISTAT1:1;
      uint64_t ISTAT2:1;
      uint64_t ISTAT3:1;
      uint64_t ISTAT4:1;
      uint64_t ISTAT5:1;
      uint64_t ISTAT6:1;
      uint64_t ISTAT7:1;
      uint64_t ISTAT8:1;
      uint64_t ISTAT9:1;
      uint64_t ISTAT10:1;
      uint64_t ISTAT11:1;
      uint64_t ISTAT12:1;
      uint64_t ISTAT13:1;
      uint64_t ISTAT14:1;
      uint64_t ISTAT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCTL0:1;
      uint64_t OCTL1:1;
      uint64_t OCTL2:1;
      uint64_t OCTL3:1;
      uint64_t OCTL4:1;
      uint64_t OCTL5:1;
      uint64_t OCTL6:1;
      uint64_t OCTL7:1;
      uint64_t OCTL8:1;
      uint64_t OCTL9:1;
      uint64_t OCTL10:1;
      uint64_t OCTL11:1;
      uint64_t OCTL12:1;
      uint64_t OCTL13:1;
      uint64_t OCTL14:1;
      uint64_t OCTL15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOP0:1;
      uint64_t BOP1:1;
      uint64_t BOP2:1;
      uint64_t BOP3:1;
      uint64_t BOP4:1;
      uint64_t BOP5:1;
      uint64_t BOP6:1;
      uint64_t BOP7:1;
      uint64_t BOP8:1;
      uint64_t BOP9:1;
      uint64_t BOP10:1;
      uint64_t BOP11:1;
      uint64_t BOP12:1;
      uint64_t BOP13:1;
      uint64_t BOP14:1;
      uint64_t BOP15:1;
      uint64_t CR0:1;
      uint64_t CR1:1;
      uint64_t CR2:1;
      uint64_t CR3:1;
      uint64_t CR4:1;
      uint64_t CR5:1;
      uint64_t CR6:1;
      uint64_t CR7:1;
      uint64_t CR8:1;
      uint64_t CR9:1;
      uint64_t CR10:1;
      uint64_t CR11:1;
      uint64_t CR12:1;
      uint64_t CR13:1;
      uint64_t CR14:1;
      uint64_t CR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LK0:1;
      uint64_t LK1:1;
      uint64_t LK2:1;
      uint64_t LK3:1;
      uint64_t LK4:1;
      uint64_t LK5:1;
      uint64_t LK6:1;
      uint64_t LK7:1;
      uint64_t LK8:1;
      uint64_t LK9:1;
      uint64_t LK10:1;
      uint64_t LK11:1;
      uint64_t LK12:1;
      uint64_t LK13:1;
      uint64_t LK14:1;
      uint64_t LK15:1;
      uint64_t LKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

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
  } __attribute__((aligned(4))) AFSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL8:4;
      uint64_t SEL9:4;
      uint64_t SEL10:4;
      uint64_t SEL11:4;
      uint64_t SEL12:4;
      uint64_t SEL13:4;
      uint64_t SEL14:4;
      uint64_t SEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR0:1;
      uint64_t CR1:1;
      uint64_t CR2:1;
      uint64_t CR3:1;
      uint64_t CR4:1;
      uint64_t CR5:1;
      uint64_t CR6:1;
      uint64_t CR7:1;
      uint64_t CR8:1;
      uint64_t CR9:1;
      uint64_t CR10:1;
      uint64_t CR11:1;
      uint64_t CR12:1;
      uint64_t CR13:1;
      uint64_t CR14:1;
      uint64_t CR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TG0:1;
      uint64_t TG1:1;
      uint64_t TG2:1;
      uint64_t TG3:1;
      uint64_t TG4:1;
      uint64_t TG5:1;
      uint64_t TG6:1;
      uint64_t TG7:1;
      uint64_t TG8:1;
      uint64_t TG9:1;
      uint64_t TG10:1;
      uint64_t TG11:1;
      uint64_t TG12:1;
      uint64_t TG13:1;
      uint64_t TG14:1;
      uint64_t TG15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG;

};

#define GPIOC (*(volatile struct GPIOC_tag *) 0x40020800)

struct GPIOD_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTL0:2;
      uint64_t CTL1:2;
      uint64_t CTL2:2;
      uint64_t CTL3:2;
      uint64_t CTL4:2;
      uint64_t CTL5:2;
      uint64_t CTL6:2;
      uint64_t CTL7:2;
      uint64_t CTL8:2;
      uint64_t CTL9:2;
      uint64_t CTL10:2;
      uint64_t CTL11:2;
      uint64_t CTL12:2;
      uint64_t CTL13:2;
      uint64_t CTL14:2;
      uint64_t CTL15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OM0:1;
      uint64_t OM1:1;
      uint64_t OM2:1;
      uint64_t OM3:1;
      uint64_t OM4:1;
      uint64_t OM5:1;
      uint64_t OM6:1;
      uint64_t OM7:1;
      uint64_t OM8:1;
      uint64_t OM9:1;
      uint64_t OM10:1;
      uint64_t OM11:1;
      uint64_t OM12:1;
      uint64_t OM13:1;
      uint64_t OM14:1;
      uint64_t OM15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPD0:2;
      uint64_t OSPD1:2;
      uint64_t OSPD2:2;
      uint64_t OSPD3:2;
      uint64_t OSPD4:2;
      uint64_t OSPD5:2;
      uint64_t OSPD6:2;
      uint64_t OSPD7:2;
      uint64_t OSPD8:2;
      uint64_t OSPD9:2;
      uint64_t OSPD10:2;
      uint64_t OSPD11:2;
      uint64_t OSPD12:2;
      uint64_t OSPD13:2;
      uint64_t OSPD14:2;
      uint64_t OSPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUD0:2;
      uint64_t PUD1:2;
      uint64_t PUD2:2;
      uint64_t PUD3:2;
      uint64_t PUD4:2;
      uint64_t PUD5:2;
      uint64_t PUD6:2;
      uint64_t PUD7:2;
      uint64_t PUD8:2;
      uint64_t PUD9:2;
      uint64_t PUD10:2;
      uint64_t PUD11:2;
      uint64_t PUD12:2;
      uint64_t PUD13:2;
      uint64_t PUD14:2;
      uint64_t PUD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISTAT0:1;
      uint64_t ISTAT1:1;
      uint64_t ISTAT2:1;
      uint64_t ISTAT3:1;
      uint64_t ISTAT4:1;
      uint64_t ISTAT5:1;
      uint64_t ISTAT6:1;
      uint64_t ISTAT7:1;
      uint64_t ISTAT8:1;
      uint64_t ISTAT9:1;
      uint64_t ISTAT10:1;
      uint64_t ISTAT11:1;
      uint64_t ISTAT12:1;
      uint64_t ISTAT13:1;
      uint64_t ISTAT14:1;
      uint64_t ISTAT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCTL0:1;
      uint64_t OCTL1:1;
      uint64_t OCTL2:1;
      uint64_t OCTL3:1;
      uint64_t OCTL4:1;
      uint64_t OCTL5:1;
      uint64_t OCTL6:1;
      uint64_t OCTL7:1;
      uint64_t OCTL8:1;
      uint64_t OCTL9:1;
      uint64_t OCTL10:1;
      uint64_t OCTL11:1;
      uint64_t OCTL12:1;
      uint64_t OCTL13:1;
      uint64_t OCTL14:1;
      uint64_t OCTL15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOP0:1;
      uint64_t BOP1:1;
      uint64_t BOP2:1;
      uint64_t BOP3:1;
      uint64_t BOP4:1;
      uint64_t BOP5:1;
      uint64_t BOP6:1;
      uint64_t BOP7:1;
      uint64_t BOP8:1;
      uint64_t BOP9:1;
      uint64_t BOP10:1;
      uint64_t BOP11:1;
      uint64_t BOP12:1;
      uint64_t BOP13:1;
      uint64_t BOP14:1;
      uint64_t BOP15:1;
      uint64_t CR0:1;
      uint64_t CR1:1;
      uint64_t CR2:1;
      uint64_t CR3:1;
      uint64_t CR4:1;
      uint64_t CR5:1;
      uint64_t CR6:1;
      uint64_t CR7:1;
      uint64_t CR8:1;
      uint64_t CR9:1;
      uint64_t CR10:1;
      uint64_t CR11:1;
      uint64_t CR12:1;
      uint64_t CR13:1;
      uint64_t CR14:1;
      uint64_t CR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LK0:1;
      uint64_t LK1:1;
      uint64_t LK2:1;
      uint64_t LK3:1;
      uint64_t LK4:1;
      uint64_t LK5:1;
      uint64_t LK6:1;
      uint64_t LK7:1;
      uint64_t LK8:1;
      uint64_t LK9:1;
      uint64_t LK10:1;
      uint64_t LK11:1;
      uint64_t LK12:1;
      uint64_t LK13:1;
      uint64_t LK14:1;
      uint64_t LK15:1;
      uint64_t LKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

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
  } __attribute__((aligned(4))) AFSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL8:4;
      uint64_t SEL9:4;
      uint64_t SEL10:4;
      uint64_t SEL11:4;
      uint64_t SEL12:4;
      uint64_t SEL13:4;
      uint64_t SEL14:4;
      uint64_t SEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR0:1;
      uint64_t CR1:1;
      uint64_t CR2:1;
      uint64_t CR3:1;
      uint64_t CR4:1;
      uint64_t CR5:1;
      uint64_t CR6:1;
      uint64_t CR7:1;
      uint64_t CR8:1;
      uint64_t CR9:1;
      uint64_t CR10:1;
      uint64_t CR11:1;
      uint64_t CR12:1;
      uint64_t CR13:1;
      uint64_t CR14:1;
      uint64_t CR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TG0:1;
      uint64_t TG1:1;
      uint64_t TG2:1;
      uint64_t TG3:1;
      uint64_t TG4:1;
      uint64_t TG5:1;
      uint64_t TG6:1;
      uint64_t TG7:1;
      uint64_t TG8:1;
      uint64_t TG9:1;
      uint64_t TG10:1;
      uint64_t TG11:1;
      uint64_t TG12:1;
      uint64_t TG13:1;
      uint64_t TG14:1;
      uint64_t TG15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG;

};

#define GPIOD (*(volatile struct GPIOD_tag *) 0x40020c00)

struct GPIOE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTL0:2;
      uint64_t CTL1:2;
      uint64_t CTL2:2;
      uint64_t CTL3:2;
      uint64_t CTL4:2;
      uint64_t CTL5:2;
      uint64_t CTL6:2;
      uint64_t CTL7:2;
      uint64_t CTL8:2;
      uint64_t CTL9:2;
      uint64_t CTL10:2;
      uint64_t CTL11:2;
      uint64_t CTL12:2;
      uint64_t CTL13:2;
      uint64_t CTL14:2;
      uint64_t CTL15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OM0:1;
      uint64_t OM1:1;
      uint64_t OM2:1;
      uint64_t OM3:1;
      uint64_t OM4:1;
      uint64_t OM5:1;
      uint64_t OM6:1;
      uint64_t OM7:1;
      uint64_t OM8:1;
      uint64_t OM9:1;
      uint64_t OM10:1;
      uint64_t OM11:1;
      uint64_t OM12:1;
      uint64_t OM13:1;
      uint64_t OM14:1;
      uint64_t OM15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPD0:2;
      uint64_t OSPD1:2;
      uint64_t OSPD2:2;
      uint64_t OSPD3:2;
      uint64_t OSPD4:2;
      uint64_t OSPD5:2;
      uint64_t OSPD6:2;
      uint64_t OSPD7:2;
      uint64_t OSPD8:2;
      uint64_t OSPD9:2;
      uint64_t OSPD10:2;
      uint64_t OSPD11:2;
      uint64_t OSPD12:2;
      uint64_t OSPD13:2;
      uint64_t OSPD14:2;
      uint64_t OSPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUD0:2;
      uint64_t PUD1:2;
      uint64_t PUD2:2;
      uint64_t PUD3:2;
      uint64_t PUD4:2;
      uint64_t PUD5:2;
      uint64_t PUD6:2;
      uint64_t PUD7:2;
      uint64_t PUD8:2;
      uint64_t PUD9:2;
      uint64_t PUD10:2;
      uint64_t PUD11:2;
      uint64_t PUD12:2;
      uint64_t PUD13:2;
      uint64_t PUD14:2;
      uint64_t PUD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISTAT0:1;
      uint64_t ISTAT1:1;
      uint64_t ISTAT2:1;
      uint64_t ISTAT3:1;
      uint64_t ISTAT4:1;
      uint64_t ISTAT5:1;
      uint64_t ISTAT6:1;
      uint64_t ISTAT7:1;
      uint64_t ISTAT8:1;
      uint64_t ISTAT9:1;
      uint64_t ISTAT10:1;
      uint64_t ISTAT11:1;
      uint64_t ISTAT12:1;
      uint64_t ISTAT13:1;
      uint64_t ISTAT14:1;
      uint64_t ISTAT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCTL0:1;
      uint64_t OCTL1:1;
      uint64_t OCTL2:1;
      uint64_t OCTL3:1;
      uint64_t OCTL4:1;
      uint64_t OCTL5:1;
      uint64_t OCTL6:1;
      uint64_t OCTL7:1;
      uint64_t OCTL8:1;
      uint64_t OCTL9:1;
      uint64_t OCTL10:1;
      uint64_t OCTL11:1;
      uint64_t OCTL12:1;
      uint64_t OCTL13:1;
      uint64_t OCTL14:1;
      uint64_t OCTL15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOP0:1;
      uint64_t BOP1:1;
      uint64_t BOP2:1;
      uint64_t BOP3:1;
      uint64_t BOP4:1;
      uint64_t BOP5:1;
      uint64_t BOP6:1;
      uint64_t BOP7:1;
      uint64_t BOP8:1;
      uint64_t BOP9:1;
      uint64_t BOP10:1;
      uint64_t BOP11:1;
      uint64_t BOP12:1;
      uint64_t BOP13:1;
      uint64_t BOP14:1;
      uint64_t BOP15:1;
      uint64_t CR0:1;
      uint64_t CR1:1;
      uint64_t CR2:1;
      uint64_t CR3:1;
      uint64_t CR4:1;
      uint64_t CR5:1;
      uint64_t CR6:1;
      uint64_t CR7:1;
      uint64_t CR8:1;
      uint64_t CR9:1;
      uint64_t CR10:1;
      uint64_t CR11:1;
      uint64_t CR12:1;
      uint64_t CR13:1;
      uint64_t CR14:1;
      uint64_t CR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LK0:1;
      uint64_t LK1:1;
      uint64_t LK2:1;
      uint64_t LK3:1;
      uint64_t LK4:1;
      uint64_t LK5:1;
      uint64_t LK6:1;
      uint64_t LK7:1;
      uint64_t LK8:1;
      uint64_t LK9:1;
      uint64_t LK10:1;
      uint64_t LK11:1;
      uint64_t LK12:1;
      uint64_t LK13:1;
      uint64_t LK14:1;
      uint64_t LK15:1;
      uint64_t LKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

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
  } __attribute__((aligned(4))) AFSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL8:4;
      uint64_t SEL9:4;
      uint64_t SEL10:4;
      uint64_t SEL11:4;
      uint64_t SEL12:4;
      uint64_t SEL13:4;
      uint64_t SEL14:4;
      uint64_t SEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR0:1;
      uint64_t CR1:1;
      uint64_t CR2:1;
      uint64_t CR3:1;
      uint64_t CR4:1;
      uint64_t CR5:1;
      uint64_t CR6:1;
      uint64_t CR7:1;
      uint64_t CR8:1;
      uint64_t CR9:1;
      uint64_t CR10:1;
      uint64_t CR11:1;
      uint64_t CR12:1;
      uint64_t CR13:1;
      uint64_t CR14:1;
      uint64_t CR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TG0:1;
      uint64_t TG1:1;
      uint64_t TG2:1;
      uint64_t TG3:1;
      uint64_t TG4:1;
      uint64_t TG5:1;
      uint64_t TG6:1;
      uint64_t TG7:1;
      uint64_t TG8:1;
      uint64_t TG9:1;
      uint64_t TG10:1;
      uint64_t TG11:1;
      uint64_t TG12:1;
      uint64_t TG13:1;
      uint64_t TG14:1;
      uint64_t TG15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG;

};

#define GPIOE (*(volatile struct GPIOE_tag *) 0x40021000)

struct GPIOF_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTL0:2;
      uint64_t CTL1:2;
      uint64_t CTL2:2;
      uint64_t CTL3:2;
      uint64_t CTL4:2;
      uint64_t CTL5:2;
      uint64_t CTL6:2;
      uint64_t CTL7:2;
      uint64_t CTL8:2;
      uint64_t CTL9:2;
      uint64_t CTL10:2;
      uint64_t CTL11:2;
      uint64_t CTL12:2;
      uint64_t CTL13:2;
      uint64_t CTL14:2;
      uint64_t CTL15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OM0:1;
      uint64_t OM1:1;
      uint64_t OM2:1;
      uint64_t OM3:1;
      uint64_t OM4:1;
      uint64_t OM5:1;
      uint64_t OM6:1;
      uint64_t OM7:1;
      uint64_t OM8:1;
      uint64_t OM9:1;
      uint64_t OM10:1;
      uint64_t OM11:1;
      uint64_t OM12:1;
      uint64_t OM13:1;
      uint64_t OM14:1;
      uint64_t OM15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPD0:2;
      uint64_t OSPD1:2;
      uint64_t OSPD2:2;
      uint64_t OSPD3:2;
      uint64_t OSPD4:2;
      uint64_t OSPD5:2;
      uint64_t OSPD6:2;
      uint64_t OSPD7:2;
      uint64_t OSPD8:2;
      uint64_t OSPD9:2;
      uint64_t OSPD10:2;
      uint64_t OSPD11:2;
      uint64_t OSPD12:2;
      uint64_t OSPD13:2;
      uint64_t OSPD14:2;
      uint64_t OSPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUD0:2;
      uint64_t PUD1:2;
      uint64_t PUD2:2;
      uint64_t PUD3:2;
      uint64_t PUD4:2;
      uint64_t PUD5:2;
      uint64_t PUD6:2;
      uint64_t PUD7:2;
      uint64_t PUD8:2;
      uint64_t PUD9:2;
      uint64_t PUD10:2;
      uint64_t PUD11:2;
      uint64_t PUD12:2;
      uint64_t PUD13:2;
      uint64_t PUD14:2;
      uint64_t PUD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISTAT0:1;
      uint64_t ISTAT1:1;
      uint64_t ISTAT2:1;
      uint64_t ISTAT3:1;
      uint64_t ISTAT4:1;
      uint64_t ISTAT5:1;
      uint64_t ISTAT6:1;
      uint64_t ISTAT7:1;
      uint64_t ISTAT8:1;
      uint64_t ISTAT9:1;
      uint64_t ISTAT10:1;
      uint64_t ISTAT11:1;
      uint64_t ISTAT12:1;
      uint64_t ISTAT13:1;
      uint64_t ISTAT14:1;
      uint64_t ISTAT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCTL0:1;
      uint64_t OCTL1:1;
      uint64_t OCTL2:1;
      uint64_t OCTL3:1;
      uint64_t OCTL4:1;
      uint64_t OCTL5:1;
      uint64_t OCTL6:1;
      uint64_t OCTL7:1;
      uint64_t OCTL8:1;
      uint64_t OCTL9:1;
      uint64_t OCTL10:1;
      uint64_t OCTL11:1;
      uint64_t OCTL12:1;
      uint64_t OCTL13:1;
      uint64_t OCTL14:1;
      uint64_t OCTL15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOP0:1;
      uint64_t BOP1:1;
      uint64_t BOP2:1;
      uint64_t BOP3:1;
      uint64_t BOP4:1;
      uint64_t BOP5:1;
      uint64_t BOP6:1;
      uint64_t BOP7:1;
      uint64_t BOP8:1;
      uint64_t BOP9:1;
      uint64_t BOP10:1;
      uint64_t BOP11:1;
      uint64_t BOP12:1;
      uint64_t BOP13:1;
      uint64_t BOP14:1;
      uint64_t BOP15:1;
      uint64_t CR0:1;
      uint64_t CR1:1;
      uint64_t CR2:1;
      uint64_t CR3:1;
      uint64_t CR4:1;
      uint64_t CR5:1;
      uint64_t CR6:1;
      uint64_t CR7:1;
      uint64_t CR8:1;
      uint64_t CR9:1;
      uint64_t CR10:1;
      uint64_t CR11:1;
      uint64_t CR12:1;
      uint64_t CR13:1;
      uint64_t CR14:1;
      uint64_t CR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LK0:1;
      uint64_t LK1:1;
      uint64_t LK2:1;
      uint64_t LK3:1;
      uint64_t LK4:1;
      uint64_t LK5:1;
      uint64_t LK6:1;
      uint64_t LK7:1;
      uint64_t LK8:1;
      uint64_t LK9:1;
      uint64_t LK10:1;
      uint64_t LK11:1;
      uint64_t LK12:1;
      uint64_t LK13:1;
      uint64_t LK14:1;
      uint64_t LK15:1;
      uint64_t LKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

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
  } __attribute__((aligned(4))) AFSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL8:4;
      uint64_t SEL9:4;
      uint64_t SEL10:4;
      uint64_t SEL11:4;
      uint64_t SEL12:4;
      uint64_t SEL13:4;
      uint64_t SEL14:4;
      uint64_t SEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR0:1;
      uint64_t CR1:1;
      uint64_t CR2:1;
      uint64_t CR3:1;
      uint64_t CR4:1;
      uint64_t CR5:1;
      uint64_t CR6:1;
      uint64_t CR7:1;
      uint64_t CR8:1;
      uint64_t CR9:1;
      uint64_t CR10:1;
      uint64_t CR11:1;
      uint64_t CR12:1;
      uint64_t CR13:1;
      uint64_t CR14:1;
      uint64_t CR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TG0:1;
      uint64_t TG1:1;
      uint64_t TG2:1;
      uint64_t TG3:1;
      uint64_t TG4:1;
      uint64_t TG5:1;
      uint64_t TG6:1;
      uint64_t TG7:1;
      uint64_t TG8:1;
      uint64_t TG9:1;
      uint64_t TG10:1;
      uint64_t TG11:1;
      uint64_t TG12:1;
      uint64_t TG13:1;
      uint64_t TG14:1;
      uint64_t TG15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG;

};

#define GPIOF (*(volatile struct GPIOF_tag *) 0x40021400)

struct GPIOG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTL0:2;
      uint64_t CTL1:2;
      uint64_t CTL2:2;
      uint64_t CTL3:2;
      uint64_t CTL4:2;
      uint64_t CTL5:2;
      uint64_t CTL6:2;
      uint64_t CTL7:2;
      uint64_t CTL8:2;
      uint64_t CTL9:2;
      uint64_t CTL10:2;
      uint64_t CTL11:2;
      uint64_t CTL12:2;
      uint64_t CTL13:2;
      uint64_t CTL14:2;
      uint64_t CTL15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OM0:1;
      uint64_t OM1:1;
      uint64_t OM2:1;
      uint64_t OM3:1;
      uint64_t OM4:1;
      uint64_t OM5:1;
      uint64_t OM6:1;
      uint64_t OM7:1;
      uint64_t OM8:1;
      uint64_t OM9:1;
      uint64_t OM10:1;
      uint64_t OM11:1;
      uint64_t OM12:1;
      uint64_t OM13:1;
      uint64_t OM14:1;
      uint64_t OM15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPD0:2;
      uint64_t OSPD1:2;
      uint64_t OSPD2:2;
      uint64_t OSPD3:2;
      uint64_t OSPD4:2;
      uint64_t OSPD5:2;
      uint64_t OSPD6:2;
      uint64_t OSPD7:2;
      uint64_t OSPD8:2;
      uint64_t OSPD9:2;
      uint64_t OSPD10:2;
      uint64_t OSPD11:2;
      uint64_t OSPD12:2;
      uint64_t OSPD13:2;
      uint64_t OSPD14:2;
      uint64_t OSPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUD0:2;
      uint64_t PUD1:2;
      uint64_t PUD2:2;
      uint64_t PUD3:2;
      uint64_t PUD4:2;
      uint64_t PUD5:2;
      uint64_t PUD6:2;
      uint64_t PUD7:2;
      uint64_t PUD8:2;
      uint64_t PUD9:2;
      uint64_t PUD10:2;
      uint64_t PUD11:2;
      uint64_t PUD12:2;
      uint64_t PUD13:2;
      uint64_t PUD14:2;
      uint64_t PUD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISTAT0:1;
      uint64_t ISTAT1:1;
      uint64_t ISTAT2:1;
      uint64_t ISTAT3:1;
      uint64_t ISTAT4:1;
      uint64_t ISTAT5:1;
      uint64_t ISTAT6:1;
      uint64_t ISTAT7:1;
      uint64_t ISTAT8:1;
      uint64_t ISTAT9:1;
      uint64_t ISTAT10:1;
      uint64_t ISTAT11:1;
      uint64_t ISTAT12:1;
      uint64_t ISTAT13:1;
      uint64_t ISTAT14:1;
      uint64_t ISTAT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCTL0:1;
      uint64_t OCTL1:1;
      uint64_t OCTL2:1;
      uint64_t OCTL3:1;
      uint64_t OCTL4:1;
      uint64_t OCTL5:1;
      uint64_t OCTL6:1;
      uint64_t OCTL7:1;
      uint64_t OCTL8:1;
      uint64_t OCTL9:1;
      uint64_t OCTL10:1;
      uint64_t OCTL11:1;
      uint64_t OCTL12:1;
      uint64_t OCTL13:1;
      uint64_t OCTL14:1;
      uint64_t OCTL15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOP0:1;
      uint64_t BOP1:1;
      uint64_t BOP2:1;
      uint64_t BOP3:1;
      uint64_t BOP4:1;
      uint64_t BOP5:1;
      uint64_t BOP6:1;
      uint64_t BOP7:1;
      uint64_t BOP8:1;
      uint64_t BOP9:1;
      uint64_t BOP10:1;
      uint64_t BOP11:1;
      uint64_t BOP12:1;
      uint64_t BOP13:1;
      uint64_t BOP14:1;
      uint64_t BOP15:1;
      uint64_t CR0:1;
      uint64_t CR1:1;
      uint64_t CR2:1;
      uint64_t CR3:1;
      uint64_t CR4:1;
      uint64_t CR5:1;
      uint64_t CR6:1;
      uint64_t CR7:1;
      uint64_t CR8:1;
      uint64_t CR9:1;
      uint64_t CR10:1;
      uint64_t CR11:1;
      uint64_t CR12:1;
      uint64_t CR13:1;
      uint64_t CR14:1;
      uint64_t CR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LK0:1;
      uint64_t LK1:1;
      uint64_t LK2:1;
      uint64_t LK3:1;
      uint64_t LK4:1;
      uint64_t LK5:1;
      uint64_t LK6:1;
      uint64_t LK7:1;
      uint64_t LK8:1;
      uint64_t LK9:1;
      uint64_t LK10:1;
      uint64_t LK11:1;
      uint64_t LK12:1;
      uint64_t LK13:1;
      uint64_t LK14:1;
      uint64_t LK15:1;
      uint64_t LKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

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
  } __attribute__((aligned(4))) AFSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL8:4;
      uint64_t SEL9:4;
      uint64_t SEL10:4;
      uint64_t SEL11:4;
      uint64_t SEL12:4;
      uint64_t SEL13:4;
      uint64_t SEL14:4;
      uint64_t SEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR0:1;
      uint64_t CR1:1;
      uint64_t CR2:1;
      uint64_t CR3:1;
      uint64_t CR4:1;
      uint64_t CR5:1;
      uint64_t CR6:1;
      uint64_t CR7:1;
      uint64_t CR8:1;
      uint64_t CR9:1;
      uint64_t CR10:1;
      uint64_t CR11:1;
      uint64_t CR12:1;
      uint64_t CR13:1;
      uint64_t CR14:1;
      uint64_t CR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TG0:1;
      uint64_t TG1:1;
      uint64_t TG2:1;
      uint64_t TG3:1;
      uint64_t TG4:1;
      uint64_t TG5:1;
      uint64_t TG6:1;
      uint64_t TG7:1;
      uint64_t TG8:1;
      uint64_t TG9:1;
      uint64_t TG10:1;
      uint64_t TG11:1;
      uint64_t TG12:1;
      uint64_t TG13:1;
      uint64_t TG14:1;
      uint64_t TG15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG;

};

#define GPIOG (*(volatile struct GPIOG_tag *) 0x40021800)

struct GPIOH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTL0:2;
      uint64_t CTL1:2;
      uint64_t CTL2:2;
      uint64_t CTL3:2;
      uint64_t CTL4:2;
      uint64_t CTL5:2;
      uint64_t CTL6:2;
      uint64_t CTL7:2;
      uint64_t CTL8:2;
      uint64_t CTL9:2;
      uint64_t CTL10:2;
      uint64_t CTL11:2;
      uint64_t CTL12:2;
      uint64_t CTL13:2;
      uint64_t CTL14:2;
      uint64_t CTL15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OM0:1;
      uint64_t OM1:1;
      uint64_t OM2:1;
      uint64_t OM3:1;
      uint64_t OM4:1;
      uint64_t OM5:1;
      uint64_t OM6:1;
      uint64_t OM7:1;
      uint64_t OM8:1;
      uint64_t OM9:1;
      uint64_t OM10:1;
      uint64_t OM11:1;
      uint64_t OM12:1;
      uint64_t OM13:1;
      uint64_t OM14:1;
      uint64_t OM15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPD0:2;
      uint64_t OSPD1:2;
      uint64_t OSPD2:2;
      uint64_t OSPD3:2;
      uint64_t OSPD4:2;
      uint64_t OSPD5:2;
      uint64_t OSPD6:2;
      uint64_t OSPD7:2;
      uint64_t OSPD8:2;
      uint64_t OSPD9:2;
      uint64_t OSPD10:2;
      uint64_t OSPD11:2;
      uint64_t OSPD12:2;
      uint64_t OSPD13:2;
      uint64_t OSPD14:2;
      uint64_t OSPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUD0:2;
      uint64_t PUD1:2;
      uint64_t PUD2:2;
      uint64_t PUD3:2;
      uint64_t PUD4:2;
      uint64_t PUD5:2;
      uint64_t PUD6:2;
      uint64_t PUD7:2;
      uint64_t PUD8:2;
      uint64_t PUD9:2;
      uint64_t PUD10:2;
      uint64_t PUD11:2;
      uint64_t PUD12:2;
      uint64_t PUD13:2;
      uint64_t PUD14:2;
      uint64_t PUD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISTAT0:1;
      uint64_t ISTAT1:1;
      uint64_t ISTAT2:1;
      uint64_t ISTAT3:1;
      uint64_t ISTAT4:1;
      uint64_t ISTAT5:1;
      uint64_t ISTAT6:1;
      uint64_t ISTAT7:1;
      uint64_t ISTAT8:1;
      uint64_t ISTAT9:1;
      uint64_t ISTAT10:1;
      uint64_t ISTAT11:1;
      uint64_t ISTAT12:1;
      uint64_t ISTAT13:1;
      uint64_t ISTAT14:1;
      uint64_t ISTAT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCTL0:1;
      uint64_t OCTL1:1;
      uint64_t OCTL2:1;
      uint64_t OCTL3:1;
      uint64_t OCTL4:1;
      uint64_t OCTL5:1;
      uint64_t OCTL6:1;
      uint64_t OCTL7:1;
      uint64_t OCTL8:1;
      uint64_t OCTL9:1;
      uint64_t OCTL10:1;
      uint64_t OCTL11:1;
      uint64_t OCTL12:1;
      uint64_t OCTL13:1;
      uint64_t OCTL14:1;
      uint64_t OCTL15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOP0:1;
      uint64_t BOP1:1;
      uint64_t BOP2:1;
      uint64_t BOP3:1;
      uint64_t BOP4:1;
      uint64_t BOP5:1;
      uint64_t BOP6:1;
      uint64_t BOP7:1;
      uint64_t BOP8:1;
      uint64_t BOP9:1;
      uint64_t BOP10:1;
      uint64_t BOP11:1;
      uint64_t BOP12:1;
      uint64_t BOP13:1;
      uint64_t BOP14:1;
      uint64_t BOP15:1;
      uint64_t CR0:1;
      uint64_t CR1:1;
      uint64_t CR2:1;
      uint64_t CR3:1;
      uint64_t CR4:1;
      uint64_t CR5:1;
      uint64_t CR6:1;
      uint64_t CR7:1;
      uint64_t CR8:1;
      uint64_t CR9:1;
      uint64_t CR10:1;
      uint64_t CR11:1;
      uint64_t CR12:1;
      uint64_t CR13:1;
      uint64_t CR14:1;
      uint64_t CR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LK0:1;
      uint64_t LK1:1;
      uint64_t LK2:1;
      uint64_t LK3:1;
      uint64_t LK4:1;
      uint64_t LK5:1;
      uint64_t LK6:1;
      uint64_t LK7:1;
      uint64_t LK8:1;
      uint64_t LK9:1;
      uint64_t LK10:1;
      uint64_t LK11:1;
      uint64_t LK12:1;
      uint64_t LK13:1;
      uint64_t LK14:1;
      uint64_t LK15:1;
      uint64_t LKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

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
  } __attribute__((aligned(4))) AFSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL8:4;
      uint64_t SEL9:4;
      uint64_t SEL10:4;
      uint64_t SEL11:4;
      uint64_t SEL12:4;
      uint64_t SEL13:4;
      uint64_t SEL14:4;
      uint64_t SEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR0:1;
      uint64_t CR1:1;
      uint64_t CR2:1;
      uint64_t CR3:1;
      uint64_t CR4:1;
      uint64_t CR5:1;
      uint64_t CR6:1;
      uint64_t CR7:1;
      uint64_t CR8:1;
      uint64_t CR9:1;
      uint64_t CR10:1;
      uint64_t CR11:1;
      uint64_t CR12:1;
      uint64_t CR13:1;
      uint64_t CR14:1;
      uint64_t CR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TG0:1;
      uint64_t TG1:1;
      uint64_t TG2:1;
      uint64_t TG3:1;
      uint64_t TG4:1;
      uint64_t TG5:1;
      uint64_t TG6:1;
      uint64_t TG7:1;
      uint64_t TG8:1;
      uint64_t TG9:1;
      uint64_t TG10:1;
      uint64_t TG11:1;
      uint64_t TG12:1;
      uint64_t TG13:1;
      uint64_t TG14:1;
      uint64_t TG15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG;

};

#define GPIOH (*(volatile struct GPIOH_tag *) 0x40021c00)

struct GPIOI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTL0:2;
      uint64_t CTL1:2;
      uint64_t CTL2:2;
      uint64_t CTL3:2;
      uint64_t CTL4:2;
      uint64_t CTL5:2;
      uint64_t CTL6:2;
      uint64_t CTL7:2;
      uint64_t CTL8:2;
      uint64_t CTL9:2;
      uint64_t CTL10:2;
      uint64_t CTL11:2;
      uint64_t CTL12:2;
      uint64_t CTL13:2;
      uint64_t CTL14:2;
      uint64_t CTL15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OM0:1;
      uint64_t OM1:1;
      uint64_t OM2:1;
      uint64_t OM3:1;
      uint64_t OM4:1;
      uint64_t OM5:1;
      uint64_t OM6:1;
      uint64_t OM7:1;
      uint64_t OM8:1;
      uint64_t OM9:1;
      uint64_t OM10:1;
      uint64_t OM11:1;
      uint64_t OM12:1;
      uint64_t OM13:1;
      uint64_t OM14:1;
      uint64_t OM15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPD0:2;
      uint64_t OSPD1:2;
      uint64_t OSPD2:2;
      uint64_t OSPD3:2;
      uint64_t OSPD4:2;
      uint64_t OSPD5:2;
      uint64_t OSPD6:2;
      uint64_t OSPD7:2;
      uint64_t OSPD8:2;
      uint64_t OSPD9:2;
      uint64_t OSPD10:2;
      uint64_t OSPD11:2;
      uint64_t OSPD12:2;
      uint64_t OSPD13:2;
      uint64_t OSPD14:2;
      uint64_t OSPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUD0:2;
      uint64_t PUD1:2;
      uint64_t PUD2:2;
      uint64_t PUD3:2;
      uint64_t PUD4:2;
      uint64_t PUD5:2;
      uint64_t PUD6:2;
      uint64_t PUD7:2;
      uint64_t PUD8:2;
      uint64_t PUD9:2;
      uint64_t PUD10:2;
      uint64_t PUD11:2;
      uint64_t PUD12:2;
      uint64_t PUD13:2;
      uint64_t PUD14:2;
      uint64_t PUD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISTAT0:1;
      uint64_t ISTAT1:1;
      uint64_t ISTAT2:1;
      uint64_t ISTAT3:1;
      uint64_t ISTAT4:1;
      uint64_t ISTAT5:1;
      uint64_t ISTAT6:1;
      uint64_t ISTAT7:1;
      uint64_t ISTAT8:1;
      uint64_t ISTAT9:1;
      uint64_t ISTAT10:1;
      uint64_t ISTAT11:1;
      uint64_t ISTAT12:1;
      uint64_t ISTAT13:1;
      uint64_t ISTAT14:1;
      uint64_t ISTAT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCTL0:1;
      uint64_t OCTL1:1;
      uint64_t OCTL2:1;
      uint64_t OCTL3:1;
      uint64_t OCTL4:1;
      uint64_t OCTL5:1;
      uint64_t OCTL6:1;
      uint64_t OCTL7:1;
      uint64_t OCTL8:1;
      uint64_t OCTL9:1;
      uint64_t OCTL10:1;
      uint64_t OCTL11:1;
      uint64_t OCTL12:1;
      uint64_t OCTL13:1;
      uint64_t OCTL14:1;
      uint64_t OCTL15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOP0:1;
      uint64_t BOP1:1;
      uint64_t BOP2:1;
      uint64_t BOP3:1;
      uint64_t BOP4:1;
      uint64_t BOP5:1;
      uint64_t BOP6:1;
      uint64_t BOP7:1;
      uint64_t BOP8:1;
      uint64_t BOP9:1;
      uint64_t BOP10:1;
      uint64_t BOP11:1;
      uint64_t BOP12:1;
      uint64_t BOP13:1;
      uint64_t BOP14:1;
      uint64_t BOP15:1;
      uint64_t CR0:1;
      uint64_t CR1:1;
      uint64_t CR2:1;
      uint64_t CR3:1;
      uint64_t CR4:1;
      uint64_t CR5:1;
      uint64_t CR6:1;
      uint64_t CR7:1;
      uint64_t CR8:1;
      uint64_t CR9:1;
      uint64_t CR10:1;
      uint64_t CR11:1;
      uint64_t CR12:1;
      uint64_t CR13:1;
      uint64_t CR14:1;
      uint64_t CR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LK0:1;
      uint64_t LK1:1;
      uint64_t LK2:1;
      uint64_t LK3:1;
      uint64_t LK4:1;
      uint64_t LK5:1;
      uint64_t LK6:1;
      uint64_t LK7:1;
      uint64_t LK8:1;
      uint64_t LK9:1;
      uint64_t LK10:1;
      uint64_t LK11:1;
      uint64_t LK12:1;
      uint64_t LK13:1;
      uint64_t LK14:1;
      uint64_t LK15:1;
      uint64_t LKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

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
  } __attribute__((aligned(4))) AFSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL8:4;
      uint64_t SEL9:4;
      uint64_t SEL10:4;
      uint64_t SEL11:4;
      uint64_t SEL12:4;
      uint64_t SEL13:4;
      uint64_t SEL14:4;
      uint64_t SEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR0:1;
      uint64_t CR1:1;
      uint64_t CR2:1;
      uint64_t CR3:1;
      uint64_t CR4:1;
      uint64_t CR5:1;
      uint64_t CR6:1;
      uint64_t CR7:1;
      uint64_t CR8:1;
      uint64_t CR9:1;
      uint64_t CR10:1;
      uint64_t CR11:1;
      uint64_t CR12:1;
      uint64_t CR13:1;
      uint64_t CR14:1;
      uint64_t CR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TG0:1;
      uint64_t TG1:1;
      uint64_t TG2:1;
      uint64_t TG3:1;
      uint64_t TG4:1;
      uint64_t TG5:1;
      uint64_t TG6:1;
      uint64_t TG7:1;
      uint64_t TG8:1;
      uint64_t TG9:1;
      uint64_t TG10:1;
      uint64_t TG11:1;
      uint64_t TG12:1;
      uint64_t TG13:1;
      uint64_t TG14:1;
      uint64_t TG15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG;

};

#define GPIOI (*(volatile struct GPIOI_tag *) 0x40022000)

struct I2C0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2CEN:1;
      uint64_t SMBEN:1;
      uint64_t reservedSpace0:1;
      uint64_t SMBSEL:1;
      uint64_t ARPEN:1;
      uint64_t PECEN:1;
      uint64_t GCEN:1;
      uint64_t DISSTRC:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ACKEN:1;
      uint64_t POAP:1;
      uint64_t PECTRANS:1;
      uint64_t SALT:1;
      uint64_t reservedSpace1:1;
      uint64_t SRESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2CCLK:6;
      uint64_t reservedSpace0:2;
      uint64_t ERRIE:1;
      uint64_t EVIE:1;
      uint64_t BUFIE:1;
      uint64_t DMAON:1;
      uint64_t DMALST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS0:1;
      uint64_t ADDRESS7_1:7;
      uint64_t ADDRESS9_8:2;
      uint64_t reservedSpace0:5;
      uint64_t ADDFORMAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SADDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DUADEN:1;
      uint64_t ADDRESS2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SADDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBSEND:1;
      uint64_t ADDSEND:1;
      uint64_t BTC:1;
      uint64_t ADD10SEND:1;
      uint64_t STPDET:1;
      uint64_t reservedSpace0:1;
      uint64_t RBNE:1;
      uint64_t TBE:1;
      uint64_t BERR:1;
      uint64_t LOSTARB:1;
      uint64_t AERR:1;
      uint64_t OUERR:1;
      uint64_t PECERR:1;
      uint64_t reservedSpace1:1;
      uint64_t SMBTO:1;
      uint64_t SMBALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER:1;
      uint64_t I2CBSY:1;
      uint64_t TRS:1;
      uint64_t reservedSpace0:1;
      uint64_t RXGC:1;
      uint64_t DEFSMB:1;
      uint64_t HSTSMB:1;
      uint64_t DUMODF:1;
      uint64_t ECV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKC:12;
      uint64_t reservedSpace0:2;
      uint64_t DTCY:1;
      uint64_t FAST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RISETIME:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DF:4;
      uint64_t AFD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCTL;

  uint8_t res0[88];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAMEN:1;
      uint64_t STOEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TFFIE:1;
      uint64_t TFRIE:1;
      uint64_t RFFIE:1;
      uint64_t RFRIE:1;
      uint64_t TXF:1;
      uint64_t RXF:1;
      uint64_t reservedSpace1:2;
      uint64_t TFF:1;
      uint64_t TFR:1;
      uint64_t RFF:1;
      uint64_t RFR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMCS;

};

#define I2C0 (*(volatile struct I2C0_tag *) 0x40005400)

struct I2C1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2CEN:1;
      uint64_t SMBEN:1;
      uint64_t reservedSpace0:1;
      uint64_t SMBSEL:1;
      uint64_t ARPEN:1;
      uint64_t PECEN:1;
      uint64_t GCEN:1;
      uint64_t DISSTRC:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ACKEN:1;
      uint64_t POAP:1;
      uint64_t PECTRANS:1;
      uint64_t SALT:1;
      uint64_t reservedSpace1:1;
      uint64_t SRESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2CCLK:6;
      uint64_t reservedSpace0:2;
      uint64_t ERRIE:1;
      uint64_t EVIE:1;
      uint64_t BUFIE:1;
      uint64_t DMAON:1;
      uint64_t DMALST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS0:1;
      uint64_t ADDRESS7_1:7;
      uint64_t ADDRESS9_8:2;
      uint64_t reservedSpace0:5;
      uint64_t ADDFORMAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SADDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DUADEN:1;
      uint64_t ADDRESS2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SADDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBSEND:1;
      uint64_t ADDSEND:1;
      uint64_t BTC:1;
      uint64_t ADD10SEND:1;
      uint64_t STPDET:1;
      uint64_t reservedSpace0:1;
      uint64_t RBNE:1;
      uint64_t TBE:1;
      uint64_t BERR:1;
      uint64_t LOSTARB:1;
      uint64_t AERR:1;
      uint64_t OUERR:1;
      uint64_t PECERR:1;
      uint64_t reservedSpace1:1;
      uint64_t SMBTO:1;
      uint64_t SMBALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER:1;
      uint64_t I2CBSY:1;
      uint64_t TRS:1;
      uint64_t reservedSpace0:1;
      uint64_t RXGC:1;
      uint64_t DEFSMB:1;
      uint64_t HSTSMB:1;
      uint64_t DUMODF:1;
      uint64_t ECV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKC:12;
      uint64_t reservedSpace0:2;
      uint64_t DTCY:1;
      uint64_t FAST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RISETIME:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DF:4;
      uint64_t AFD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCTL;

  uint8_t res0[88];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAMEN:1;
      uint64_t STOEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TFFIE:1;
      uint64_t TFRIE:1;
      uint64_t RFFIE:1;
      uint64_t RFRIE:1;
      uint64_t TXF:1;
      uint64_t RXF:1;
      uint64_t reservedSpace1:2;
      uint64_t TFF:1;
      uint64_t TFR:1;
      uint64_t RFF:1;
      uint64_t RFR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMCS;

};

#define I2C1 (*(volatile struct I2C1_tag *) 0x40005800)

struct I2C2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2CEN:1;
      uint64_t SMBEN:1;
      uint64_t reservedSpace0:1;
      uint64_t SMBSEL:1;
      uint64_t ARPEN:1;
      uint64_t PECEN:1;
      uint64_t GCEN:1;
      uint64_t DISSTRC:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ACKEN:1;
      uint64_t POAP:1;
      uint64_t PECTRANS:1;
      uint64_t SALT:1;
      uint64_t reservedSpace1:1;
      uint64_t SRESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2CCLK:6;
      uint64_t reservedSpace0:2;
      uint64_t ERRIE:1;
      uint64_t EVIE:1;
      uint64_t BUFIE:1;
      uint64_t DMAON:1;
      uint64_t DMALST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS0:1;
      uint64_t ADDRESS7_1:7;
      uint64_t ADDRESS9_8:2;
      uint64_t reservedSpace0:5;
      uint64_t ADDFORMAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SADDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DUADEN:1;
      uint64_t ADDRESS2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SADDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBSEND:1;
      uint64_t ADDSEND:1;
      uint64_t BTC:1;
      uint64_t ADD10SEND:1;
      uint64_t STPDET:1;
      uint64_t reservedSpace0:1;
      uint64_t RBNE:1;
      uint64_t TBE:1;
      uint64_t BERR:1;
      uint64_t LOSTARB:1;
      uint64_t AERR:1;
      uint64_t OUERR:1;
      uint64_t PECERR:1;
      uint64_t reservedSpace1:1;
      uint64_t SMBTO:1;
      uint64_t SMBALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER:1;
      uint64_t I2CBSY:1;
      uint64_t TRS:1;
      uint64_t reservedSpace0:1;
      uint64_t RXGC:1;
      uint64_t DEFSMB:1;
      uint64_t HSTSMB:1;
      uint64_t DUMODF:1;
      uint64_t ECV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKC:12;
      uint64_t reservedSpace0:2;
      uint64_t DTCY:1;
      uint64_t FAST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RISETIME:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DF:4;
      uint64_t AFD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCTL;

  uint8_t res0[88];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAMEN:1;
      uint64_t STOEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TFFIE:1;
      uint64_t TFRIE:1;
      uint64_t RFFIE:1;
      uint64_t RFRIE:1;
      uint64_t TXF:1;
      uint64_t RXF:1;
      uint64_t reservedSpace1:2;
      uint64_t TFF:1;
      uint64_t TFR:1;
      uint64_t RFF:1;
      uint64_t RFR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMCS;

};

#define I2C2 (*(volatile struct I2C2_tag *) 0x40005c00)

struct IREF_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSDT:6;
      uint64_t reservedSpace0:1;
      uint64_t SCMOD:1;
      uint64_t CPT:5;
      uint64_t reservedSpace1:1;
      uint64_t SSEL:1;
      uint64_t CREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

};

#define IREF (*(volatile struct IREF_tag *) 0x4000c700)

struct NVIC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISER;

  uint8_t res0[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICER;

  uint8_t res1[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISPR;

  uint8_t res2[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPR;

  uint8_t res3[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IABR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IABR;

  uint8_t res4[252];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_00:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_01:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_02:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_03:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_04:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_05:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_06:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_07:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_08:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_09:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_10:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_11:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_12:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_13:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_14:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_15:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_16:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_17:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_18:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_19:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_20:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_21:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_22:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_23:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_24:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_25:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_26:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_27:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_28:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_29:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_30:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_31:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR31;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_32:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR32;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_33:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR33;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_34:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR34;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_35:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR35;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_36:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR36;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_37:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR37;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_38:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR38;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_39:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR39;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_40:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR40;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_41:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR41;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_42:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR42;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_43:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR43;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_44:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR44;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_45:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR45;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_46:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR46;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_47:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR47;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_48:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR48;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_49:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR49;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_50:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR50;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_51:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR51;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_52:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR52;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_53:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR53;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_54:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR54;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_55:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR55;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_56:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR56;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_57:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR57;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_58:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR58;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_59:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR59;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_60:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR60;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_61:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR61;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_62:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR62;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_63:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR63;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_64:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR64;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_65:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR65;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_66:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR66;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_67:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR67;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_68:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR68;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_69:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR69;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_70:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR70;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_71:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR71;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_72:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR72;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI_73:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IPR73;

  uint8_t res5[2742];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STIR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STIR;

};

#define NVIC (*(volatile struct NVIC_tag *) 0xe000e100)

struct PMU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LDOLP:1;
      uint64_t STBMOD:1;
      uint64_t WURST:1;
      uint64_t STBRST:1;
      uint64_t LVDEN:1;
      uint64_t LVDT:3;
      uint64_t BKPWEN:1;
      uint64_t reservedSpace0:1;
      uint64_t LDLP:1;
      uint64_t LDNP:1;
      uint64_t reservedSpace1:2;
      uint64_t LDOVS:2;
      uint64_t HDEN:1;
      uint64_t HDS:1;
      uint64_t LDEN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WUF:1;
      uint64_t STBF:1;
      uint64_t LVDF:1;
      uint64_t BLDORF:1;
      uint64_t reservedSpace0:4;
      uint64_t WUPEN:1;
      uint64_t BLDOON:1;
      uint64_t reservedSpace1:4;
      uint64_t LDOVSRF:1;
      uint64_t reservedSpace2:1;
      uint64_t HDRF:1;
      uint64_t HDSRF:1;
      uint64_t LDRF:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS;

};

#define PMU (*(volatile struct PMU_tag *) 0x40007000)

struct RCU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRC16MEN:1;
      uint64_t IRC16MSTB:1;
      uint64_t reservedSpace0:1;
      uint64_t IRC16MADJ:5;
      uint64_t IRC16MCALIB:8;
      uint64_t HXTALEN:1;
      uint64_t HXTALSTB:1;
      uint64_t HXTALBPS:1;
      uint64_t CKMEN:1;
      uint64_t reservedSpace1:4;
      uint64_t PLLEN:1;
      uint64_t PLLSTB:1;
      uint64_t PLLI2SEN:1;
      uint64_t PLLI2SSTB:1;
      uint64_t PLLSAIEN:1;
      uint64_t PLLSAISTB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLLPSC:6;
      uint64_t PLLN:9;
      uint64_t reservedSpace0:1;
      uint64_t PLLP:2;
      uint64_t reservedSpace1:4;
      uint64_t PLLSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t PLLQ:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCS:2;
      uint64_t SCSS:2;
      uint64_t AHBPSC:4;
      uint64_t reservedSpace0:2;
      uint64_t APB1PSC:3;
      uint64_t APB2PSC:3;
      uint64_t RTCDIV:5;
      uint64_t CKOUT0SEL:2;
      uint64_t I2SSEL:1;
      uint64_t CKOUT0DIV:3;
      uint64_t CKOUT1DIV:3;
      uint64_t CKOUT1SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRC32KSTBIF:1;
      uint64_t LXTALSTBIF:1;
      uint64_t IRC16MSTBIF:1;
      uint64_t HXTALSTBIF:1;
      uint64_t PLLSTBIF:1;
      uint64_t PLLI2SSTBIF:1;
      uint64_t PLLSAISTBIF:1;
      uint64_t CKMIF:1;
      uint64_t IRC32KSTBIE:1;
      uint64_t LXTALSTBIE:1;
      uint64_t IRC16MSTBIE:1;
      uint64_t HXTALSTBIE:1;
      uint64_t PLLSTBIE:1;
      uint64_t PLLI2SSTBIE:1;
      uint64_t PLLSAISTBIE:1;
      uint64_t reservedSpace0:1;
      uint64_t IRC32KSTBIC:1;
      uint64_t LXTALSTBIC:1;
      uint64_t IRC16MSTBIC:1;
      uint64_t HXTALSTBIC:1;
      uint64_t PLLSTBIC:1;
      uint64_t PLLI2SSTBIC:1;
      uint64_t PLLSAISTBIC:1;
      uint64_t CKMIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARST:1;
      uint64_t PBRST:1;
      uint64_t PCRST:1;
      uint64_t PDRST:1;
      uint64_t PERST:1;
      uint64_t PFRST:1;
      uint64_t PGRST:1;
      uint64_t PHRST:1;
      uint64_t PIRST:1;
      uint64_t reservedSpace0:3;
      uint64_t CRCRST:1;
      uint64_t reservedSpace1:8;
      uint64_t DMA0RST:1;
      uint64_t DMA1RST:1;
      uint64_t IPARST:1;
      uint64_t reservedSpace2:1;
      uint64_t ENETRST:1;
      uint64_t reservedSpace3:3;
      uint64_t USBHSRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB1RST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCIRST:1;
      uint64_t reservedSpace0:5;
      uint64_t TRNGRST:1;
      uint64_t USBFSRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB2RST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXMCRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB3RST;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER1RST:1;
      uint64_t TIMER2RST:1;
      uint64_t TIMER3RST:1;
      uint64_t TIMER4RST:1;
      uint64_t TIMER5RST:1;
      uint64_t TIMER6RST:1;
      uint64_t TIMER11RST:1;
      uint64_t TIMER12RST:1;
      uint64_t TIMER13RST:1;
      uint64_t reservedSpace0:2;
      uint64_t WWDGTRST:1;
      uint64_t reservedSpace1:2;
      uint64_t SPI1RST:1;
      uint64_t SPI2RST:1;
      uint64_t reservedSpace2:1;
      uint64_t USART1RST:1;
      uint64_t USART2RST:1;
      uint64_t UART3RST:1;
      uint64_t UART4RST:1;
      uint64_t I2C0RST:1;
      uint64_t I2C1RST:1;
      uint64_t I2C2RST:1;
      uint64_t reservedSpace3:1;
      uint64_t CAN0RST:1;
      uint64_t CAN1RST:1;
      uint64_t reservedSpace4:1;
      uint64_t PMURST:1;
      uint64_t DACRST:1;
      uint64_t UART6RST:1;
      uint64_t UART7RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1RST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER0RST:1;
      uint64_t TIMER7RST:1;
      uint64_t reservedSpace0:2;
      uint64_t USART0RST:1;
      uint64_t USART5RST:1;
      uint64_t reservedSpace1:2;
      uint64_t ADCRST:1;
      uint64_t reservedSpace2:2;
      uint64_t SDIORST:1;
      uint64_t SPI0RST:1;
      uint64_t SPI3RST:1;
      uint64_t SYSCFGRST:1;
      uint64_t reservedSpace3:1;
      uint64_t TIMER8RST:1;
      uint64_t TIMER9RST:1;
      uint64_t TIMER10RST:1;
      uint64_t reservedSpace4:1;
      uint64_t SPI4RST:1;
      uint64_t SPI5RST:1;
      uint64_t reservedSpace5:4;
      uint64_t TLIRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2RST;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAEN:1;
      uint64_t PBEN:1;
      uint64_t PCEN:1;
      uint64_t PDEN:1;
      uint64_t PEEN:1;
      uint64_t PFEN:1;
      uint64_t PGEN:1;
      uint64_t PHEN:1;
      uint64_t PIEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CRCEN:1;
      uint64_t reservedSpace1:5;
      uint64_t BKPSRAMEN:1;
      uint64_t reservedSpace2:1;
      uint64_t TCMSRAMEN:1;
      uint64_t DMA0EN:1;
      uint64_t DMA1EN:1;
      uint64_t IPAEN:1;
      uint64_t reservedSpace3:1;
      uint64_t ENETEN:1;
      uint64_t ENETTXEN:1;
      uint64_t ENETRXEN:1;
      uint64_t ENETPTPEN:1;
      uint64_t USBHSEN:1;
      uint64_t USBHSULPIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB1EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCIEN:1;
      uint64_t reservedSpace0:5;
      uint64_t TRNGEN:1;
      uint64_t USBFSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB2EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXMCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB3EN;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER1EN:1;
      uint64_t TIMER2EN:1;
      uint64_t TIMER3EN:1;
      uint64_t TIMER4EN:1;
      uint64_t TIMER5EN:1;
      uint64_t TIMER6EN:1;
      uint64_t TIMER11EN:1;
      uint64_t TIMER12EN:1;
      uint64_t TIMER13EN:1;
      uint64_t reservedSpace0:2;
      uint64_t WWDGTEN:1;
      uint64_t reservedSpace1:2;
      uint64_t SPI1EN:1;
      uint64_t SPI2EN:1;
      uint64_t reservedSpace2:1;
      uint64_t USART1EN:1;
      uint64_t USART2EN:1;
      uint64_t UART3EN:1;
      uint64_t UART4EN:1;
      uint64_t I2C0EN:1;
      uint64_t I2C1EN:1;
      uint64_t I2C2EN:1;
      uint64_t reservedSpace3:1;
      uint64_t CAN0EN:1;
      uint64_t CAN1EN:1;
      uint64_t reservedSpace4:1;
      uint64_t PMUEN:1;
      uint64_t DACEN:1;
      uint64_t UART6EN:1;
      uint64_t UART7EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER0EN:1;
      uint64_t TIMER7EN:1;
      uint64_t reservedSpace0:2;
      uint64_t USART0EN:1;
      uint64_t USART5EN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADC0EN:1;
      uint64_t ADC1EN:1;
      uint64_t ADC2EN:1;
      uint64_t SDIOEN:1;
      uint64_t SPI0EN:1;
      uint64_t SPI3EN:1;
      uint64_t SYSCFGEN:1;
      uint64_t reservedSpace2:1;
      uint64_t TIMER8EN:1;
      uint64_t TIMER9EN:1;
      uint64_t TIMER10EN:1;
      uint64_t reservedSpace3:1;
      uint64_t SPI4EN:1;
      uint64_t SPI5EN:1;
      uint64_t reservedSpace4:4;
      uint64_t TLIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2EN;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PASPEN:1;
      uint64_t PBSPEN:1;
      uint64_t PCSPEN:1;
      uint64_t PDSPEN:1;
      uint64_t PESPEN:1;
      uint64_t PFSPEN:1;
      uint64_t PGSPEN:1;
      uint64_t PHSPEN:1;
      uint64_t PISPEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CRCSPEN:1;
      uint64_t reservedSpace1:2;
      uint64_t FMCSPEN:1;
      uint64_t SRAM0SPEN:1;
      uint64_t SRAM1SPEN:1;
      uint64_t BKPSRAMSPEN:1;
      uint64_t SRAM2SPEN:1;
      uint64_t reservedSpace2:1;
      uint64_t DMA0SPEN:1;
      uint64_t DMA1SPEN:1;
      uint64_t IPASPEN:1;
      uint64_t reservedSpace3:1;
      uint64_t ENETSPEN:1;
      uint64_t ENETTXSPEN:1;
      uint64_t ENETRXSPEN:1;
      uint64_t ENETPTPSPEN:1;
      uint64_t USBHSSPEN:1;
      uint64_t USBHSULPISPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB1SPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCISPEN:1;
      uint64_t reservedSpace0:5;
      uint64_t TRNGSPEN:1;
      uint64_t USBFSSPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB2SPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXMCSPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB3SPEN;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER1SPEN:1;
      uint64_t TIMER2SPEN:1;
      uint64_t TIMER3SPEN:1;
      uint64_t TIMER4SPEN:1;
      uint64_t TIMER5SPEN:1;
      uint64_t TIMER6SPEN:1;
      uint64_t TIMER11SPEN:1;
      uint64_t TIMER12SPEN:1;
      uint64_t TIMER13SPEN:1;
      uint64_t reservedSpace0:2;
      uint64_t WWDGTSPEN:1;
      uint64_t reservedSpace1:2;
      uint64_t SPI1SPEN:1;
      uint64_t SPI2SPEN:1;
      uint64_t reservedSpace2:1;
      uint64_t USART1SPEN:1;
      uint64_t USART2SPEN:1;
      uint64_t UART3SPEN:1;
      uint64_t UART4SPEN:1;
      uint64_t I2C0SPEN:1;
      uint64_t I2C1SPEN:1;
      uint64_t I2C2SPEN:1;
      uint64_t reservedSpace3:1;
      uint64_t CAN0SPEN:1;
      uint64_t CAN1SPEN:1;
      uint64_t reservedSpace4:1;
      uint64_t PMUSPEN:1;
      uint64_t DACSPEN:1;
      uint64_t UART6SPEN:1;
      uint64_t UART7SPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1SPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER0SPEN:1;
      uint64_t TIMER7SPEN:1;
      uint64_t reservedSpace0:2;
      uint64_t USART0SPEN:1;
      uint64_t USART5SPEN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADC0SPEN:1;
      uint64_t ADC1SPEN:1;
      uint64_t ADC2SPEN:1;
      uint64_t SDIOSPEN:1;
      uint64_t SPI0SPEN:1;
      uint64_t SPI3SPEN:1;
      uint64_t SYSCFGSPEN:1;
      uint64_t reservedSpace2:1;
      uint64_t TIMER8SPEN:1;
      uint64_t TIMER9SPEN:1;
      uint64_t TIMER10SPEN:1;
      uint64_t reservedSpace3:1;
      uint64_t SPI4SPEN:1;
      uint64_t SPI5SPEN:1;
      uint64_t reservedSpace4:4;
      uint64_t TLISPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2SPEN;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LXTALEN:1;
      uint64_t LXTALSTB:1;
      uint64_t LXTALBPS:1;
      uint64_t LXTALDRI:2;
      uint64_t reservedSpace0:3;
      uint64_t RTCSRC:2;
      uint64_t reservedSpace1:5;
      uint64_t RTCEN:1;
      uint64_t BKPRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRC32KEN:1;
      uint64_t IRC32KSTB:1;
      uint64_t reservedSpace0:22;
      uint64_t RSTFC:1;
      uint64_t BORRSTF:1;
      uint64_t EPRSTF:1;
      uint64_t PORRSTF:1;
      uint64_t SWRSTF:1;
      uint64_t FWDGTRSTF:1;
      uint64_t WWDGTRSTF:1;
      uint64_t LPRSTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTSCK;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODCNT:13;
      uint64_t MODSTEP:15;
      uint64_t reservedSpace0:2;
      uint64_t SS_TYPE:1;
      uint64_t SSCGON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLSSCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLLI2SPSC:6;
      uint64_t PLLI2SN:9;
      uint64_t reservedSpace0:9;
      uint64_t PLLI2SQ:4;
      uint64_t PLLI2SR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLI2S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PLLSAIN:9;
      uint64_t reservedSpace1:1;
      uint64_t PLLSAIP:2;
      uint64_t reservedSpace2:6;
      uint64_t PLLSAIQ:4;
      uint64_t PLLSAIR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLSAI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t PLLSAIRDIV:2;
      uint64_t reservedSpace1:6;
      uint64_t TIMERSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  uint8_t res7[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CK48MSEL:1;
      uint64_t PLL48MSEL:1;
      uint64_t reservedSpace0:14;
      uint64_t IRC48MEN:1;
      uint64_t IRC48MSTB:1;
      uint64_t reservedSpace1:6;
      uint64_t IRC48MCAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDCTL;

  uint8_t res8[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t IRC48MSTBIF:1;
      uint64_t reservedSpace1:7;
      uint64_t IRC48MSTBIE:1;
      uint64_t reservedSpace2:7;
      uint64_t IRC48MSTBIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDINT;

  uint8_t res9[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:27;
      uint64_t CTCRST:1;
      uint64_t reservedSpace1:3;
      uint64_t IREFRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDAPB1RST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:27;
      uint64_t CTCEN:1;
      uint64_t reservedSpace1:3;
      uint64_t IREFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDAPB1EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:27;
      uint64_t CTCSPEN:1;
      uint64_t reservedSpace1:3;
      uint64_t IREFSPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDAPB1SPEN;

  uint8_t res10[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VKEY;

  uint8_t res11[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSLPVS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSV;

};

#define RCU (*(volatile struct RCU_tag *) 0x40023800)

struct RTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCU:4;
      uint64_t SCT:3;
      uint64_t reservedSpace0:1;
      uint64_t MNU:4;
      uint64_t MNT:3;
      uint64_t reservedSpace1:1;
      uint64_t HRU:4;
      uint64_t HRT:2;
      uint64_t PM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAYU:4;
      uint64_t DAYT:2;
      uint64_t reservedSpace0:2;
      uint64_t MONU:4;
      uint64_t MONT:1;
      uint64_t DOW:3;
      uint64_t YRU:4;
      uint64_t YRT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTCS:3;
      uint64_t TSEG:1;
      uint64_t REFEN:1;
      uint64_t BPSHAD:1;
      uint64_t CS:1;
      uint64_t CCEN:1;
      uint64_t ALRM0EN:1;
      uint64_t ALRM1EN:1;
      uint64_t WTEN:1;
      uint64_t TSEN:1;
      uint64_t ALRM0IE:1;
      uint64_t ALRM1IE:1;
      uint64_t WTIE:1;
      uint64_t TSIE:1;
      uint64_t A1H:1;
      uint64_t S1H:1;
      uint64_t DSM:1;
      uint64_t COS:1;
      uint64_t OPOL:1;
      uint64_t OS:2;
      uint64_t COEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALRM0WF:1;
      uint64_t ALRM1WF:1;
      uint64_t WTWF:1;
      uint64_t SOPF:1;
      uint64_t YCM:1;
      uint64_t RSYNF:1;
      uint64_t INITF:1;
      uint64_t INITM:1;
      uint64_t ALRM0F:1;
      uint64_t ALRM1F:1;
      uint64_t WTF:1;
      uint64_t TSF:1;
      uint64_t TSOVRF:1;
      uint64_t TP0F:1;
      uint64_t TP1F:1;
      uint64_t reservedSpace0:1;
      uint64_t SCPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACTOR_S:15;
      uint64_t reservedSpace0:1;
      uint64_t FACTOR_A:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTRV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COSS:5;
      uint64_t reservedSpace0:2;
      uint64_t COSD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCU:4;
      uint64_t SCT:3;
      uint64_t MSKS:1;
      uint64_t MNU:4;
      uint64_t MNT:3;
      uint64_t MSKM:1;
      uint64_t HRU:4;
      uint64_t HRT:2;
      uint64_t PM:1;
      uint64_t MSKH:1;
      uint64_t DAYU:4;
      uint64_t DAYT:2;
      uint64_t DOWS:1;
      uint64_t MSKD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALRM0TD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCU:4;
      uint64_t SCT:3;
      uint64_t MSKS:1;
      uint64_t MNU:4;
      uint64_t MNT:3;
      uint64_t MSKM:1;
      uint64_t HRU:4;
      uint64_t HRT:2;
      uint64_t PM:1;
      uint64_t MSKH:1;
      uint64_t DAYU:4;
      uint64_t DAYT:2;
      uint64_t DOWS:1;
      uint64_t MSKD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALRM1TD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SFS:15;
      uint64_t reservedSpace0:16;
      uint64_t A1S:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCU:4;
      uint64_t SCT:3;
      uint64_t reservedSpace0:1;
      uint64_t MNU:4;
      uint64_t MNT:3;
      uint64_t reservedSpace1:1;
      uint64_t HRU:4;
      uint64_t HRT:2;
      uint64_t PM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAYU:4;
      uint64_t DAYT:2;
      uint64_t reservedSpace0:2;
      uint64_t MONU:4;
      uint64_t MONT:1;
      uint64_t DOW:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMSK:9;
      uint64_t reservedSpace0:4;
      uint64_t CWND16:1;
      uint64_t CWND8:1;
      uint64_t FREQI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HRFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP0EN:1;
      uint64_t TP0EG:1;
      uint64_t TPIE:1;
      uint64_t TP1EN:1;
      uint64_t TP1EG:1;
      uint64_t reservedSpace0:2;
      uint64_t TPTS:1;
      uint64_t FREQ:3;
      uint64_t FLT:2;
      uint64_t PRCH:2;
      uint64_t DISPU:1;
      uint64_t TP0SEL:1;
      uint64_t TSSEL:1;
      uint64_t AOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSC:15;
      uint64_t reservedSpace0:9;
      uint64_t MSKSSC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALRM0SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSC:15;
      uint64_t reservedSpace0:9;
      uint64_t MSKSSC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALRM1SS;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP7_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP7_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP19;

};

#define RTC (*(volatile struct RTC_tag *) 0x40002800)

struct SDIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRCTL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_0_7:8;
      uint64_t CLKEN:1;
      uint64_t CLKPWRSAV:1;
      uint64_t CLKBYP:1;
      uint64_t BUSMODE:2;
      uint64_t CLKEDGE:1;
      uint64_t HWCLKEN:1;
      uint64_t reservedSpace0:16;
      uint64_t DIV_8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDAGMT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDAGMT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDIDX:6;
      uint64_t CMDRESP:2;
      uint64_t INTWAIT:1;
      uint64_t WAITDEND:1;
      uint64_t CSMEN:1;
      uint64_t SUSPEND:1;
      uint64_t ENCMDC:1;
      uint64_t NINTEN:1;
      uint64_t ATAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSPCMDIDX:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSPCMDIDX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESP0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESP1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESP2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESP3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATATO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATATO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATALEN:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATALEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAEN:1;
      uint64_t DATADIR:1;
      uint64_t TRANSMOD:1;
      uint64_t DMAEN:1;
      uint64_t BLKSZ:4;
      uint64_t RWEN:1;
      uint64_t RWSTOP:1;
      uint64_t RWTYPE:1;
      uint64_t IOEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATACTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATACNT:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATACNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCRCERR:1;
      uint64_t DTCRCERR:1;
      uint64_t CMDTMOUT:1;
      uint64_t DTTMOUT:1;
      uint64_t TXURE:1;
      uint64_t RXORE:1;
      uint64_t CMDRECV:1;
      uint64_t CMDSEND:1;
      uint64_t DTEND:1;
      uint64_t STBITE:1;
      uint64_t DTBLKEND:1;
      uint64_t CMDRUN:1;
      uint64_t TXRUN:1;
      uint64_t RXRUN:1;
      uint64_t TFH:1;
      uint64_t RFH:1;
      uint64_t TFF:1;
      uint64_t RFF:1;
      uint64_t TFE:1;
      uint64_t RFE:1;
      uint64_t TXDTVAL:1;
      uint64_t RXDTVAL:1;
      uint64_t SDIOINT:1;
      uint64_t ATAEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCRCERRC:1;
      uint64_t DTCRCERRC:1;
      uint64_t CMDTMOUTC:1;
      uint64_t DTTMOUTC:1;
      uint64_t TXUREC:1;
      uint64_t RXOREC:1;
      uint64_t CMDRECVC:1;
      uint64_t CMDSENDC:1;
      uint64_t DTENDC:1;
      uint64_t STBITEC:1;
      uint64_t DTBLKENDC:1;
      uint64_t reservedSpace0:11;
      uint64_t SDIOINTC:1;
      uint64_t ATAENDC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCRCERRIE:1;
      uint64_t DTCRCERRIE:1;
      uint64_t CMDTMOUTIE:1;
      uint64_t DTTMOUTIE:1;
      uint64_t TXUREIE:1;
      uint64_t RXOREIE:1;
      uint64_t CMDRECVIE:1;
      uint64_t CMDSENDIE:1;
      uint64_t DTENDIE:1;
      uint64_t STBITEIE:1;
      uint64_t DTBLKENDIE:1;
      uint64_t CMDRUNIE:1;
      uint64_t TXRUNIE:1;
      uint64_t RXRUNIE:1;
      uint64_t TFHIE:1;
      uint64_t RFHIE:1;
      uint64_t TFFIE:1;
      uint64_t RFFIE:1;
      uint64_t TFEIE:1;
      uint64_t RFEIE:1;
      uint64_t TXDTVALIE:1;
      uint64_t RXDTVALIE:1;
      uint64_t SDIOINTIE:1;
      uint64_t ATAENDIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOCNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCNT;

  uint8_t res1[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFODT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO;

};

#define SDIO (*(volatile struct SDIO_tag *) 0x40012c00)

struct SPI0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKPH:1;
      uint64_t CKPL:1;
      uint64_t MSTMOD:1;
      uint64_t PSC:3;
      uint64_t SPIEN:1;
      uint64_t LF:1;
      uint64_t SWNSS:1;
      uint64_t SWNSSEN:1;
      uint64_t RO:1;
      uint64_t FF16:1;
      uint64_t CRCNT:1;
      uint64_t CRCEN:1;
      uint64_t BDOEN:1;
      uint64_t BDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREN:1;
      uint64_t DMATEN:1;
      uint64_t NSSDRV:1;
      uint64_t reservedSpace0:1;
      uint64_t TMOD:1;
      uint64_t ERRIE:1;
      uint64_t RBNEIE:1;
      uint64_t TBEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RBNE:1;
      uint64_t TBE:1;
      uint64_t I2SCH:1;
      uint64_t TXURERR:1;
      uint64_t CRCERR:1;
      uint64_t CONFERR:1;
      uint64_t RXORERR:1;
      uint64_t TRANS:1;
      uint64_t FERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPI_DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPCPOLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHLEN:1;
      uint64_t DTLEN:2;
      uint64_t CKPL:1;
      uint64_t I2SSTD:2;
      uint64_t reservedSpace0:1;
      uint64_t PCMSMOD:1;
      uint64_t I2SOPMOD:2;
      uint64_t I2SEN:1;
      uint64_t I2SSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t OF:1;
      uint64_t MCKOEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SPSC;

};

#define SPI0 (*(volatile struct SPI0_tag *) 0x40013000)

struct SPI1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKPH:1;
      uint64_t CKPL:1;
      uint64_t MSTMOD:1;
      uint64_t PSC:3;
      uint64_t SPIEN:1;
      uint64_t LF:1;
      uint64_t SWNSS:1;
      uint64_t SWNSSEN:1;
      uint64_t RO:1;
      uint64_t FF16:1;
      uint64_t CRCNT:1;
      uint64_t CRCEN:1;
      uint64_t BDOEN:1;
      uint64_t BDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREN:1;
      uint64_t DMATEN:1;
      uint64_t NSSDRV:1;
      uint64_t reservedSpace0:1;
      uint64_t TMOD:1;
      uint64_t ERRIE:1;
      uint64_t RBNEIE:1;
      uint64_t TBEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RBNE:1;
      uint64_t TBE:1;
      uint64_t I2SCH:1;
      uint64_t TXURERR:1;
      uint64_t CRCERR:1;
      uint64_t CONFERR:1;
      uint64_t RXORERR:1;
      uint64_t TRANS:1;
      uint64_t FERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPI_DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPCPOLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHLEN:1;
      uint64_t DTLEN:2;
      uint64_t CKPL:1;
      uint64_t I2SSTD:2;
      uint64_t reservedSpace0:1;
      uint64_t PCMSMOD:1;
      uint64_t I2SOPMOD:2;
      uint64_t I2SEN:1;
      uint64_t I2SSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t OF:1;
      uint64_t MCKOEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SPSC;

};

#define SPI1 (*(volatile struct SPI1_tag *) 0x40003800)

struct SPI2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKPH:1;
      uint64_t CKPL:1;
      uint64_t MSTMOD:1;
      uint64_t PSC:3;
      uint64_t SPIEN:1;
      uint64_t LF:1;
      uint64_t SWNSS:1;
      uint64_t SWNSSEN:1;
      uint64_t RO:1;
      uint64_t FF16:1;
      uint64_t CRCNT:1;
      uint64_t CRCEN:1;
      uint64_t BDOEN:1;
      uint64_t BDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREN:1;
      uint64_t DMATEN:1;
      uint64_t NSSDRV:1;
      uint64_t reservedSpace0:1;
      uint64_t TMOD:1;
      uint64_t ERRIE:1;
      uint64_t RBNEIE:1;
      uint64_t TBEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RBNE:1;
      uint64_t TBE:1;
      uint64_t I2SCH:1;
      uint64_t TXURERR:1;
      uint64_t CRCERR:1;
      uint64_t CONFERR:1;
      uint64_t RXORERR:1;
      uint64_t TRANS:1;
      uint64_t FERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPI_DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPCPOLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHLEN:1;
      uint64_t DTLEN:2;
      uint64_t CKPL:1;
      uint64_t I2SSTD:2;
      uint64_t reservedSpace0:1;
      uint64_t PCMSMOD:1;
      uint64_t I2SOPMOD:2;
      uint64_t I2SEN:1;
      uint64_t I2SSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t OF:1;
      uint64_t MCKOEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SPSC;

};

#define SPI2 (*(volatile struct SPI2_tag *) 0x40003c00)

struct SPI3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKPH:1;
      uint64_t CKPL:1;
      uint64_t MSTMOD:1;
      uint64_t PSC:3;
      uint64_t SPIEN:1;
      uint64_t LF:1;
      uint64_t SWNSS:1;
      uint64_t SWNSSEN:1;
      uint64_t RO:1;
      uint64_t FF16:1;
      uint64_t CRCNT:1;
      uint64_t CRCEN:1;
      uint64_t BDOEN:1;
      uint64_t BDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREN:1;
      uint64_t DMATEN:1;
      uint64_t NSSDRV:1;
      uint64_t reservedSpace0:1;
      uint64_t TMOD:1;
      uint64_t ERRIE:1;
      uint64_t RBNEIE:1;
      uint64_t TBEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RBNE:1;
      uint64_t TBE:1;
      uint64_t I2SCH:1;
      uint64_t TXURERR:1;
      uint64_t CRCERR:1;
      uint64_t CONFERR:1;
      uint64_t RXORERR:1;
      uint64_t TRANS:1;
      uint64_t FERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPI_DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPCPOLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHLEN:1;
      uint64_t DTLEN:2;
      uint64_t CKPL:1;
      uint64_t I2SSTD:2;
      uint64_t reservedSpace0:1;
      uint64_t PCMSMOD:1;
      uint64_t I2SOPMOD:2;
      uint64_t I2SEN:1;
      uint64_t I2SSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t OF:1;
      uint64_t MCKOEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SPSC;

};

#define SPI3 (*(volatile struct SPI3_tag *) 0x40013400)

struct SPI4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKPH:1;
      uint64_t CKPL:1;
      uint64_t MSTMOD:1;
      uint64_t PSC:3;
      uint64_t SPIEN:1;
      uint64_t LF:1;
      uint64_t SWNSS:1;
      uint64_t SWNSSEN:1;
      uint64_t RO:1;
      uint64_t FF16:1;
      uint64_t CRCNT:1;
      uint64_t CRCEN:1;
      uint64_t BDOEN:1;
      uint64_t BDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREN:1;
      uint64_t DMATEN:1;
      uint64_t NSSDRV:1;
      uint64_t reservedSpace0:1;
      uint64_t TMOD:1;
      uint64_t ERRIE:1;
      uint64_t RBNEIE:1;
      uint64_t TBEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RBNE:1;
      uint64_t TBE:1;
      uint64_t I2SCH:1;
      uint64_t TXURERR:1;
      uint64_t CRCERR:1;
      uint64_t CONFERR:1;
      uint64_t RXORERR:1;
      uint64_t TRANS:1;
      uint64_t FERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPI_DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPCPOLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHLEN:1;
      uint64_t DTLEN:2;
      uint64_t CKPL:1;
      uint64_t I2SSTD:2;
      uint64_t reservedSpace0:1;
      uint64_t PCMSMOD:1;
      uint64_t I2SOPMOD:2;
      uint64_t I2SEN:1;
      uint64_t I2SSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t OF:1;
      uint64_t MCKOEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SPSC;

};

#define SPI4 (*(volatile struct SPI4_tag *) 0x40015000)

struct SPI5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKPH:1;
      uint64_t CKPL:1;
      uint64_t MSTMOD:1;
      uint64_t PSC:3;
      uint64_t SPIEN:1;
      uint64_t LF:1;
      uint64_t SWNSS:1;
      uint64_t SWNSSEN:1;
      uint64_t RO:1;
      uint64_t FF16:1;
      uint64_t CRCNT:1;
      uint64_t CRCEN:1;
      uint64_t BDOEN:1;
      uint64_t BDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREN:1;
      uint64_t DMATEN:1;
      uint64_t NSSDRV:1;
      uint64_t reservedSpace0:1;
      uint64_t TMOD:1;
      uint64_t ERRIE:1;
      uint64_t RBNEIE:1;
      uint64_t TBEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RBNE:1;
      uint64_t TBE:1;
      uint64_t I2SCH:1;
      uint64_t TXURERR:1;
      uint64_t CRCERR:1;
      uint64_t CONFERR:1;
      uint64_t RXORERR:1;
      uint64_t TRANS:1;
      uint64_t FERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPI_DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPCPOLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHLEN:1;
      uint64_t DTLEN:2;
      uint64_t CKPL:1;
      uint64_t I2SSTD:2;
      uint64_t reservedSpace0:1;
      uint64_t PCMSMOD:1;
      uint64_t I2SOPMOD:2;
      uint64_t I2SEN:1;
      uint64_t I2SSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t OF:1;
      uint64_t MCKOEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SPSC;

  uint8_t res0[92];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QMOD:1;
      uint64_t QRD:1;
      uint64_t IO23_DRV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QCTL;

};

#define SPI5 (*(volatile struct SPI5_tag *) 0x40015400)

struct I2S1_add_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKPH:1;
      uint64_t CKPL:1;
      uint64_t MSTMOD:1;
      uint64_t PSC:3;
      uint64_t SPIEN:1;
      uint64_t LF:1;
      uint64_t SWNSS:1;
      uint64_t SWNSSEN:1;
      uint64_t RO:1;
      uint64_t FF16:1;
      uint64_t CRCNT:1;
      uint64_t CRCEN:1;
      uint64_t BDOEN:1;
      uint64_t BDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREN:1;
      uint64_t DMATEN:1;
      uint64_t NSSDRV:1;
      uint64_t reservedSpace0:1;
      uint64_t TMOD:1;
      uint64_t ERRIE:1;
      uint64_t RBNEIE:1;
      uint64_t TBEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RBNE:1;
      uint64_t TBE:1;
      uint64_t I2SCH:1;
      uint64_t TXURERR:1;
      uint64_t CRCERR:1;
      uint64_t CONFERR:1;
      uint64_t RXORERR:1;
      uint64_t TRANS:1;
      uint64_t FERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPI_DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPCPOLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHLEN:1;
      uint64_t DTLEN:2;
      uint64_t CKPL:1;
      uint64_t I2SSTD:2;
      uint64_t reservedSpace0:1;
      uint64_t PCMSMOD:1;
      uint64_t I2SOPMOD:2;
      uint64_t I2SEN:1;
      uint64_t I2SSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t OF:1;
      uint64_t MCKOEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SPSC;

};

#define I2S1_add (*(volatile struct I2S1_add_tag *) 0x40003400)

struct I2S2_add_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKPH:1;
      uint64_t CKPL:1;
      uint64_t MSTMOD:1;
      uint64_t PSC:3;
      uint64_t SPIEN:1;
      uint64_t LF:1;
      uint64_t SWNSS:1;
      uint64_t SWNSSEN:1;
      uint64_t RO:1;
      uint64_t FF16:1;
      uint64_t CRCNT:1;
      uint64_t CRCEN:1;
      uint64_t BDOEN:1;
      uint64_t BDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREN:1;
      uint64_t DMATEN:1;
      uint64_t NSSDRV:1;
      uint64_t reservedSpace0:1;
      uint64_t TMOD:1;
      uint64_t ERRIE:1;
      uint64_t RBNEIE:1;
      uint64_t TBEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RBNE:1;
      uint64_t TBE:1;
      uint64_t I2SCH:1;
      uint64_t TXURERR:1;
      uint64_t CRCERR:1;
      uint64_t CONFERR:1;
      uint64_t RXORERR:1;
      uint64_t TRANS:1;
      uint64_t FERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPI_DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPCPOLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHLEN:1;
      uint64_t DTLEN:2;
      uint64_t CKPL:1;
      uint64_t I2SSTD:2;
      uint64_t reservedSpace0:1;
      uint64_t PCMSMOD:1;
      uint64_t I2SOPMOD:2;
      uint64_t I2SEN:1;
      uint64_t I2SSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t OF:1;
      uint64_t MCKOEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SPSC;

};

#define I2S2_add (*(volatile struct I2S2_add_tag *) 0x40004000)

struct SYSCFG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOT_MODE:3;
      uint64_t reservedSpace0:5;
      uint64_t FMC_SWP:1;
      uint64_t reservedSpace1:1;
      uint64_t EXMC_SWP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:23;
      uint64_t ENET_PHY_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTI0_SS:4;
      uint64_t EXTI1_SS:4;
      uint64_t EXTI2_SS:4;
      uint64_t EXTI3_SS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTISS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTI4_SS:4;
      uint64_t EXTI5_SS:4;
      uint64_t EXTI6_SS:4;
      uint64_t EXTI7_SS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTISS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTI8_SS:4;
      uint64_t EXTI9_SS:4;
      uint64_t EXTI10_SS:4;
      uint64_t EXTI11_SS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTISS2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTI12_SS:4;
      uint64_t EXTI13_SS:4;
      uint64_t EXTI14_SS:4;
      uint64_t EXTI15_SS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTISS3;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPS_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t CPS_RDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPSCTL;

};

#define SYSCFG (*(volatile struct SYSCFG_tag *) 0x40013800)

struct TIMER5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t UPDIS:1;
      uint64_t UPS:1;
      uint64_t SPM:1;
      uint64_t reservedSpace0:3;
      uint64_t ARSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t MMC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPIE:1;
      uint64_t reservedSpace0:7;
      uint64_t UPDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAINTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWEVG;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAR;

};

#define TIMER5 (*(volatile struct TIMER5_tag *) 0x40001000)

struct TIMER6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t UPDIS:1;
      uint64_t UPS:1;
      uint64_t SPM:1;
      uint64_t reservedSpace0:3;
      uint64_t ARSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t MMC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPIE:1;
      uint64_t reservedSpace0:7;
      uint64_t UPDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAINTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWEVG;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAR;

};

#define TIMER6 (*(volatile struct TIMER6_tag *) 0x40001400)

struct TLI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VPSZ:12;
      uint64_t reservedSpace0:4;
      uint64_t HPSZ:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPSZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VBPSZ:12;
      uint64_t reservedSpace0:4;
      uint64_t HBPSZ:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BPSZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VASZ:12;
      uint64_t reservedSpace0:4;
      uint64_t HASZ:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VTSZ:12;
      uint64_t reservedSpace0:4;
      uint64_t HTSZ:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLIEN:1;
      uint64_t reservedSpace0:3;
      uint64_t BDB:3;
      uint64_t reservedSpace1:1;
      uint64_t GDB:3;
      uint64_t reservedSpace2:1;
      uint64_t RDB:3;
      uint64_t reservedSpace3:1;
      uint64_t DFEN:1;
      uint64_t reservedSpace4:11;
      uint64_t CLKPS:1;
      uint64_t DEPS:1;
      uint64_t VPPS:1;
      uint64_t HPPS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLT;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RQR:1;
      uint64_t FBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RL;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BVB:8;
      uint64_t BVG:8;
      uint64_t BVR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BGC;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LMIE:1;
      uint64_t FEIE:1;
      uint64_t TEIE:1;
      uint64_t LCRIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LMF:1;
      uint64_t FEF:1;
      uint64_t TEF:1;
      uint64_t LCRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LMC:1;
      uint64_t FEC:1;
      uint64_t TEC:1;
      uint64_t LCRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VPOS:16;
      uint64_t HPOS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPPOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VDE:1;
      uint64_t HDE:1;
      uint64_t VS:1;
      uint64_t HS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  uint8_t res3[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEN:1;
      uint64_t CKEYEN:1;
      uint64_t reservedSpace0:2;
      uint64_t LUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L0CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WLP:12;
      uint64_t reservedSpace0:4;
      uint64_t WRP:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L0HPOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTP:12;
      uint64_t reservedSpace0:4;
      uint64_t WBP:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L0VPOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKEYB:8;
      uint64_t CKEYG:8;
      uint64_t CKEYR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L0CKEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPF:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L0PPF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L0SA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCB:8;
      uint64_t DCG:8;
      uint64_t DCR:8;
      uint64_t DCA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L0DC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACF2:3;
      uint64_t reservedSpace0:5;
      uint64_t ACF1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L0BLEND;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FBADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L0FBADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:14;
      uint64_t reservedSpace0:2;
      uint64_t STDOFF:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L0FLLEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTLN:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L0FTLN;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TB:8;
      uint64_t TG:8;
      uint64_t TR:8;
      uint64_t TADD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L0LUT;

  uint8_t res6[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEN:1;
      uint64_t CKEYEN:1;
      uint64_t reservedSpace0:2;
      uint64_t LUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WLP:12;
      uint64_t reservedSpace0:4;
      uint64_t WRP:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1HPOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTP:12;
      uint64_t reservedSpace0:4;
      uint64_t WBP:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1VPOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKEYB:8;
      uint64_t CKEYG:8;
      uint64_t CKEYR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1CKEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPF:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1PPF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1SA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCB:8;
      uint64_t DCG:8;
      uint64_t DCR:8;
      uint64_t DCA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1DC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACF2:3;
      uint64_t reservedSpace0:5;
      uint64_t ACF1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1BLEND;

  uint8_t res7[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FBADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1FBADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:14;
      uint64_t reservedSpace0:2;
      uint64_t STDOFF:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1FLLEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTLN:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1FTLN;

  uint8_t res8[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TB:8;
      uint64_t TG:8;
      uint64_t TR:8;
      uint64_t TADD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1LUT;

};

#define TLI (*(volatile struct TLI_tag *) 0x40016808)

struct TRNG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TRNGEN:1;
      uint64_t IE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRDY:1;
      uint64_t CECS:1;
      uint64_t SECS:1;
      uint64_t reservedSpace0:2;
      uint64_t CEIF:1;
      uint64_t SEIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRNDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

};

#define TRNG (*(volatile struct TRNG_tag *) 0x50060800)

struct USART0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t NERR:1;
      uint64_t ORERR:1;
      uint64_t IDLEF:1;
      uint64_t RBNE:1;
      uint64_t TC:1;
      uint64_t TBE:1;
      uint64_t LBDF:1;
      uint64_t CTSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRADIV:4;
      uint64_t INTDIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBKCMD:1;
      uint64_t RWU:1;
      uint64_t REN:1;
      uint64_t TEN:1;
      uint64_t IDLEIE:1;
      uint64_t RBNEIE:1;
      uint64_t TCIE:1;
      uint64_t TBEIE:1;
      uint64_t PERRIE:1;
      uint64_t PM:1;
      uint64_t PCEN:1;
      uint64_t WM:1;
      uint64_t WL:1;
      uint64_t UEN:1;
      uint64_t reservedSpace0:1;
      uint64_t OVSMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:4;
      uint64_t reservedSpace0:1;
      uint64_t LBLEN:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t CLEN:1;
      uint64_t CPH:1;
      uint64_t CPL:1;
      uint64_t CKEN:1;
      uint64_t STB:2;
      uint64_t LMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRIE:1;
      uint64_t IREN:1;
      uint64_t IRLP:1;
      uint64_t HDEN:1;
      uint64_t NKEN:1;
      uint64_t SCEN:1;
      uint64_t DENR:1;
      uint64_t DENT:1;
      uint64_t RTSEN:1;
      uint64_t CTSEN:1;
      uint64_t CTSIE:1;
      uint64_t OSB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:8;
      uint64_t GUAT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GP;

  uint8_t res1[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTEN:1;
      uint64_t SCRTNUM:3;
      uint64_t RTIE:1;
      uint64_t EBIE:1;
      uint64_t reservedSpace0:2;
      uint64_t RINV:1;
      uint64_t TINV:1;
      uint64_t DINV:1;
      uint64_t MSBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RT:24;
      uint64_t BL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t RTF:1;
      uint64_t EBF:1;
      uint64_t reservedSpace1:3;
      uint64_t BSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT1;

  uint8_t res2[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCM:1;
      uint64_t PCM:1;
      uint64_t BCM:1;
      uint64_t reservedSpace0:5;
      uint64_t EPERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHC;

};

#define USART0 (*(volatile struct USART0_tag *) 0x40011000)

struct USART1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t NERR:1;
      uint64_t ORERR:1;
      uint64_t IDLEF:1;
      uint64_t RBNE:1;
      uint64_t TC:1;
      uint64_t TBE:1;
      uint64_t LBDF:1;
      uint64_t CTSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRADIV:4;
      uint64_t INTDIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBKCMD:1;
      uint64_t RWU:1;
      uint64_t REN:1;
      uint64_t TEN:1;
      uint64_t IDLEIE:1;
      uint64_t RBNEIE:1;
      uint64_t TCIE:1;
      uint64_t TBEIE:1;
      uint64_t PERRIE:1;
      uint64_t PM:1;
      uint64_t PCEN:1;
      uint64_t WM:1;
      uint64_t WL:1;
      uint64_t UEN:1;
      uint64_t reservedSpace0:1;
      uint64_t OVSMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:4;
      uint64_t reservedSpace0:1;
      uint64_t LBLEN:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t CLEN:1;
      uint64_t CPH:1;
      uint64_t CPL:1;
      uint64_t CKEN:1;
      uint64_t STB:2;
      uint64_t LMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRIE:1;
      uint64_t IREN:1;
      uint64_t IRLP:1;
      uint64_t HDEN:1;
      uint64_t NKEN:1;
      uint64_t SCEN:1;
      uint64_t DENR:1;
      uint64_t DENT:1;
      uint64_t RTSEN:1;
      uint64_t CTSEN:1;
      uint64_t CTSIE:1;
      uint64_t OSB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:8;
      uint64_t GUAT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GP;

  uint8_t res1[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTEN:1;
      uint64_t SCRTNUM:3;
      uint64_t RTIE:1;
      uint64_t EBIE:1;
      uint64_t reservedSpace0:2;
      uint64_t RINV:1;
      uint64_t TINV:1;
      uint64_t DINV:1;
      uint64_t MSBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RT:24;
      uint64_t BL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t RTF:1;
      uint64_t EBF:1;
      uint64_t reservedSpace1:3;
      uint64_t BSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT1;

  uint8_t res2[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCM:1;
      uint64_t PCM:1;
      uint64_t BCM:1;
      uint64_t reservedSpace0:5;
      uint64_t EPERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHC;

};

#define USART1 (*(volatile struct USART1_tag *) 0x40004400)

struct USART2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t NERR:1;
      uint64_t ORERR:1;
      uint64_t IDLEF:1;
      uint64_t RBNE:1;
      uint64_t TC:1;
      uint64_t TBE:1;
      uint64_t LBDF:1;
      uint64_t CTSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRADIV:4;
      uint64_t INTDIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBKCMD:1;
      uint64_t RWU:1;
      uint64_t REN:1;
      uint64_t TEN:1;
      uint64_t IDLEIE:1;
      uint64_t RBNEIE:1;
      uint64_t TCIE:1;
      uint64_t TBEIE:1;
      uint64_t PERRIE:1;
      uint64_t PM:1;
      uint64_t PCEN:1;
      uint64_t WM:1;
      uint64_t WL:1;
      uint64_t UEN:1;
      uint64_t reservedSpace0:1;
      uint64_t OVSMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:4;
      uint64_t reservedSpace0:1;
      uint64_t LBLEN:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t CLEN:1;
      uint64_t CPH:1;
      uint64_t CPL:1;
      uint64_t CKEN:1;
      uint64_t STB:2;
      uint64_t LMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRIE:1;
      uint64_t IREN:1;
      uint64_t IRLP:1;
      uint64_t HDEN:1;
      uint64_t NKEN:1;
      uint64_t SCEN:1;
      uint64_t DENR:1;
      uint64_t DENT:1;
      uint64_t RTSEN:1;
      uint64_t CTSEN:1;
      uint64_t CTSIE:1;
      uint64_t OSB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:8;
      uint64_t GUAT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GP;

  uint8_t res1[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTEN:1;
      uint64_t SCRTNUM:3;
      uint64_t RTIE:1;
      uint64_t EBIE:1;
      uint64_t reservedSpace0:2;
      uint64_t RINV:1;
      uint64_t TINV:1;
      uint64_t DINV:1;
      uint64_t MSBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RT:24;
      uint64_t BL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t RTF:1;
      uint64_t EBF:1;
      uint64_t reservedSpace1:3;
      uint64_t BSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT1;

  uint8_t res2[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCM:1;
      uint64_t PCM:1;
      uint64_t BCM:1;
      uint64_t reservedSpace0:5;
      uint64_t EPERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHC;

};

#define USART2 (*(volatile struct USART2_tag *) 0x40004800)

struct USART5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t NERR:1;
      uint64_t ORERR:1;
      uint64_t IDLEF:1;
      uint64_t RBNE:1;
      uint64_t TC:1;
      uint64_t TBE:1;
      uint64_t LBDF:1;
      uint64_t CTSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRADIV:4;
      uint64_t INTDIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBKCMD:1;
      uint64_t RWU:1;
      uint64_t REN:1;
      uint64_t TEN:1;
      uint64_t IDLEIE:1;
      uint64_t RBNEIE:1;
      uint64_t TCIE:1;
      uint64_t TBEIE:1;
      uint64_t PERRIE:1;
      uint64_t PM:1;
      uint64_t PCEN:1;
      uint64_t WM:1;
      uint64_t WL:1;
      uint64_t UEN:1;
      uint64_t reservedSpace0:1;
      uint64_t OVSMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:4;
      uint64_t reservedSpace0:1;
      uint64_t LBLEN:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t CLEN:1;
      uint64_t CPH:1;
      uint64_t CPL:1;
      uint64_t CKEN:1;
      uint64_t STB:2;
      uint64_t LMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRIE:1;
      uint64_t IREN:1;
      uint64_t IRLP:1;
      uint64_t HDEN:1;
      uint64_t NKEN:1;
      uint64_t SCEN:1;
      uint64_t DENR:1;
      uint64_t DENT:1;
      uint64_t RTSEN:1;
      uint64_t CTSEN:1;
      uint64_t CTSIE:1;
      uint64_t OSB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:8;
      uint64_t GUAT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GP;

  uint8_t res1[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTEN:1;
      uint64_t SCRTNUM:3;
      uint64_t RTIE:1;
      uint64_t EBIE:1;
      uint64_t reservedSpace0:2;
      uint64_t RINV:1;
      uint64_t TINV:1;
      uint64_t DINV:1;
      uint64_t MSBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RT:24;
      uint64_t BL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t RTF:1;
      uint64_t EBF:1;
      uint64_t reservedSpace1:3;
      uint64_t BSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT1;

  uint8_t res2[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCM:1;
      uint64_t PCM:1;
      uint64_t BCM:1;
      uint64_t reservedSpace0:5;
      uint64_t EPERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHC;

};

#define USART5 (*(volatile struct USART5_tag *) 0x40011400)

struct UART3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t NERR:1;
      uint64_t ORERR:1;
      uint64_t IDLEF:1;
      uint64_t RBNE:1;
      uint64_t TC:1;
      uint64_t TBE:1;
      uint64_t LBDF:1;
      uint64_t CTSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRADIV:4;
      uint64_t INTDIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBKCMD:1;
      uint64_t RWU:1;
      uint64_t REN:1;
      uint64_t TEN:1;
      uint64_t IDLEIE:1;
      uint64_t RBNEIE:1;
      uint64_t TCIE:1;
      uint64_t TBEIE:1;
      uint64_t PERRIE:1;
      uint64_t PM:1;
      uint64_t PCEN:1;
      uint64_t WM:1;
      uint64_t WL:1;
      uint64_t UEN:1;
      uint64_t reservedSpace0:1;
      uint64_t OVSMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:4;
      uint64_t reservedSpace0:1;
      uint64_t LBLEN:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t CLEN:1;
      uint64_t CPH:1;
      uint64_t CPL:1;
      uint64_t CKEN:1;
      uint64_t STB:2;
      uint64_t LMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRIE:1;
      uint64_t IREN:1;
      uint64_t IRLP:1;
      uint64_t HDEN:1;
      uint64_t NKEN:1;
      uint64_t SCEN:1;
      uint64_t DENR:1;
      uint64_t DENT:1;
      uint64_t RTSEN:1;
      uint64_t CTSEN:1;
      uint64_t CTSIE:1;
      uint64_t OSB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:8;
      uint64_t GUAT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GP;

  uint8_t res1[160];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCM:1;
      uint64_t PCM:1;
      uint64_t BCM:1;
      uint64_t reservedSpace0:5;
      uint64_t EPERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHC;

};

#define UART3 (*(volatile struct UART3_tag *) 0x40004c00)

struct UART4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t NERR:1;
      uint64_t ORERR:1;
      uint64_t IDLEF:1;
      uint64_t RBNE:1;
      uint64_t TC:1;
      uint64_t TBE:1;
      uint64_t LBDF:1;
      uint64_t CTSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRADIV:4;
      uint64_t INTDIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBKCMD:1;
      uint64_t RWU:1;
      uint64_t REN:1;
      uint64_t TEN:1;
      uint64_t IDLEIE:1;
      uint64_t RBNEIE:1;
      uint64_t TCIE:1;
      uint64_t TBEIE:1;
      uint64_t PERRIE:1;
      uint64_t PM:1;
      uint64_t PCEN:1;
      uint64_t WM:1;
      uint64_t WL:1;
      uint64_t UEN:1;
      uint64_t reservedSpace0:1;
      uint64_t OVSMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:4;
      uint64_t reservedSpace0:1;
      uint64_t LBLEN:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t CLEN:1;
      uint64_t CPH:1;
      uint64_t CPL:1;
      uint64_t CKEN:1;
      uint64_t STB:2;
      uint64_t LMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRIE:1;
      uint64_t IREN:1;
      uint64_t IRLP:1;
      uint64_t HDEN:1;
      uint64_t NKEN:1;
      uint64_t SCEN:1;
      uint64_t DENR:1;
      uint64_t DENT:1;
      uint64_t RTSEN:1;
      uint64_t CTSEN:1;
      uint64_t CTSIE:1;
      uint64_t OSB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:8;
      uint64_t GUAT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GP;

  uint8_t res1[160];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCM:1;
      uint64_t PCM:1;
      uint64_t BCM:1;
      uint64_t reservedSpace0:5;
      uint64_t EPERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHC;

};

#define UART4 (*(volatile struct UART4_tag *) 0x40005000)

struct UART6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t NERR:1;
      uint64_t ORERR:1;
      uint64_t IDLEF:1;
      uint64_t RBNE:1;
      uint64_t TC:1;
      uint64_t TBE:1;
      uint64_t LBDF:1;
      uint64_t CTSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRADIV:4;
      uint64_t INTDIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBKCMD:1;
      uint64_t RWU:1;
      uint64_t REN:1;
      uint64_t TEN:1;
      uint64_t IDLEIE:1;
      uint64_t RBNEIE:1;
      uint64_t TCIE:1;
      uint64_t TBEIE:1;
      uint64_t PERRIE:1;
      uint64_t PM:1;
      uint64_t PCEN:1;
      uint64_t WM:1;
      uint64_t WL:1;
      uint64_t UEN:1;
      uint64_t reservedSpace0:1;
      uint64_t OVSMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:4;
      uint64_t reservedSpace0:1;
      uint64_t LBLEN:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t CLEN:1;
      uint64_t CPH:1;
      uint64_t CPL:1;
      uint64_t CKEN:1;
      uint64_t STB:2;
      uint64_t LMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRIE:1;
      uint64_t IREN:1;
      uint64_t IRLP:1;
      uint64_t HDEN:1;
      uint64_t NKEN:1;
      uint64_t SCEN:1;
      uint64_t DENR:1;
      uint64_t DENT:1;
      uint64_t RTSEN:1;
      uint64_t CTSEN:1;
      uint64_t CTSIE:1;
      uint64_t OSB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:8;
      uint64_t GUAT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GP;

  uint8_t res1[160];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCM:1;
      uint64_t PCM:1;
      uint64_t BCM:1;
      uint64_t reservedSpace0:5;
      uint64_t EPERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHC;

};

#define UART6 (*(volatile struct UART6_tag *) 0x40007800)

struct UART7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t NERR:1;
      uint64_t ORERR:1;
      uint64_t IDLEF:1;
      uint64_t RBNE:1;
      uint64_t TC:1;
      uint64_t TBE:1;
      uint64_t LBDF:1;
      uint64_t CTSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRADIV:4;
      uint64_t INTDIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBKCMD:1;
      uint64_t RWU:1;
      uint64_t REN:1;
      uint64_t TEN:1;
      uint64_t IDLEIE:1;
      uint64_t RBNEIE:1;
      uint64_t TCIE:1;
      uint64_t TBEIE:1;
      uint64_t PERRIE:1;
      uint64_t PM:1;
      uint64_t PCEN:1;
      uint64_t WM:1;
      uint64_t WL:1;
      uint64_t UEN:1;
      uint64_t reservedSpace0:1;
      uint64_t OVSMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:4;
      uint64_t reservedSpace0:1;
      uint64_t LBLEN:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t CLEN:1;
      uint64_t CPH:1;
      uint64_t CPL:1;
      uint64_t CKEN:1;
      uint64_t STB:2;
      uint64_t LMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRIE:1;
      uint64_t IREN:1;
      uint64_t IRLP:1;
      uint64_t HDEN:1;
      uint64_t NKEN:1;
      uint64_t SCEN:1;
      uint64_t DENR:1;
      uint64_t DENT:1;
      uint64_t RTSEN:1;
      uint64_t CTSEN:1;
      uint64_t CTSIE:1;
      uint64_t OSB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:8;
      uint64_t GUAT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GP;

  uint8_t res1[160];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCM:1;
      uint64_t PCM:1;
      uint64_t BCM:1;
      uint64_t reservedSpace0:5;
      uint64_t EPERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHC;

};

#define UART7 (*(volatile struct UART7_tag *) 0x40007c00)

struct FS_HOST_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRI:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRNUM:16;
      uint64_t FRT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFINFR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTXFS:16;
      uint64_t PTXREQS:8;
      uint64_t PTXREQT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPTFQSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HACHINT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HACHINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CINTEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HACHINTEN;

  uint8_t res1[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCST:1;
      uint64_t PCD:1;
      uint64_t PE:1;
      uint64_t PEDC:1;
      uint64_t reservedSpace0:2;
      uint64_t PREM:1;
      uint64_t PSP:1;
      uint64_t PRST:1;
      uint64_t reservedSpace1:1;
      uint64_t PLST:2;
      uint64_t PP:1;
      uint64_t reservedSpace2:4;
      uint64_t PS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPCS;

  uint8_t res2[188];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSD:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace1:2;
      uint64_t DAR:7;
      uint64_t ODDFRM:1;
      uint64_t CDIS:1;
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH0CTL;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t CH:1;
      uint64_t reservedSpace0:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace1:1;
      uint64_t USBER:1;
      uint64_t BBER:1;
      uint64_t REQOVR:1;
      uint64_t DTER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH0INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFIE:1;
      uint64_t CHIE:1;
      uint64_t reservedSpace0:1;
      uint64_t STALLIE:1;
      uint64_t NAKIE:1;
      uint64_t ACKIE:1;
      uint64_t reservedSpace1:1;
      uint64_t USBERIE:1;
      uint64_t BBERIE:1;
      uint64_t REQOVRIE:1;
      uint64_t DTERIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH0INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH0LEN;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSD:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace1:2;
      uint64_t DAR:7;
      uint64_t ODDFRM:1;
      uint64_t CDIS:1;
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH1CTL;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t CH:1;
      uint64_t reservedSpace0:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace1:1;
      uint64_t USBER:1;
      uint64_t BBER:1;
      uint64_t REQOVR:1;
      uint64_t DTER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH1INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFIE:1;
      uint64_t CHIE:1;
      uint64_t reservedSpace0:1;
      uint64_t STALLIE:1;
      uint64_t NAKIE:1;
      uint64_t ACKIE:1;
      uint64_t reservedSpace1:1;
      uint64_t USBERIE:1;
      uint64_t BBERIE:1;
      uint64_t REQOVRIE:1;
      uint64_t DTERIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH1INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH1LEN;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSD:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace1:2;
      uint64_t DAR:7;
      uint64_t ODDFRM:1;
      uint64_t CDIS:1;
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH2CTL;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t CH:1;
      uint64_t reservedSpace0:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace1:1;
      uint64_t USBER:1;
      uint64_t BBER:1;
      uint64_t REQOVR:1;
      uint64_t DTER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH2INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFIE:1;
      uint64_t CHIE:1;
      uint64_t reservedSpace0:1;
      uint64_t STALLIE:1;
      uint64_t NAKIE:1;
      uint64_t ACKIE:1;
      uint64_t reservedSpace1:1;
      uint64_t USBERIE:1;
      uint64_t BBERIE:1;
      uint64_t REQOVRIE:1;
      uint64_t DTERIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH2INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH2LEN;

  uint8_t res8[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSD:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace1:2;
      uint64_t DAR:7;
      uint64_t ODDFRM:1;
      uint64_t CDIS:1;
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH3CTL;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t CH:1;
      uint64_t reservedSpace0:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace1:1;
      uint64_t USBER:1;
      uint64_t BBER:1;
      uint64_t REQOVR:1;
      uint64_t DTER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH3INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFIE:1;
      uint64_t CHIE:1;
      uint64_t reservedSpace0:1;
      uint64_t STALLIE:1;
      uint64_t NAKIE:1;
      uint64_t ACKIE:1;
      uint64_t reservedSpace1:1;
      uint64_t USBERIE:1;
      uint64_t BBERIE:1;
      uint64_t REQOVRIE:1;
      uint64_t DTERIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH3INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH3LEN;

  uint8_t res10[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSD:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace1:2;
      uint64_t DAR:7;
      uint64_t ODDFRM:1;
      uint64_t CDIS:1;
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH4CTL;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t CH:1;
      uint64_t reservedSpace0:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace1:1;
      uint64_t USBER:1;
      uint64_t BBER:1;
      uint64_t REQOVR:1;
      uint64_t DTER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH4INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFIE:1;
      uint64_t CHIE:1;
      uint64_t reservedSpace0:1;
      uint64_t STALLIE:1;
      uint64_t NAKIE:1;
      uint64_t ACKIE:1;
      uint64_t reservedSpace1:1;
      uint64_t USBERIE:1;
      uint64_t BBERIE:1;
      uint64_t REQOVRIE:1;
      uint64_t DTERIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH4INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH4LEN;

  uint8_t res12[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSD:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace1:2;
      uint64_t DAR:7;
      uint64_t ODDFRM:1;
      uint64_t CDIS:1;
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH5CTL;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t CH:1;
      uint64_t reservedSpace0:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace1:1;
      uint64_t USBER:1;
      uint64_t BBER:1;
      uint64_t REQOVR:1;
      uint64_t DTER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH5INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFIE:1;
      uint64_t CHIE:1;
      uint64_t reservedSpace0:1;
      uint64_t STALLIE:1;
      uint64_t NAKIE:1;
      uint64_t ACKIE:1;
      uint64_t reservedSpace1:1;
      uint64_t USBERIE:1;
      uint64_t BBERIE:1;
      uint64_t REQOVRIE:1;
      uint64_t DTERIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH5INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH5LEN;

  uint8_t res14[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSD:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace1:2;
      uint64_t DAR:7;
      uint64_t ODDFRM:1;
      uint64_t CDIS:1;
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH6CTL;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t CH:1;
      uint64_t reservedSpace0:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace1:1;
      uint64_t USBER:1;
      uint64_t BBER:1;
      uint64_t REQOVR:1;
      uint64_t DTER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH6INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFIE:1;
      uint64_t CHIE:1;
      uint64_t reservedSpace0:1;
      uint64_t STALLIE:1;
      uint64_t NAKIE:1;
      uint64_t ACKIE:1;
      uint64_t reservedSpace1:1;
      uint64_t USBERIE:1;
      uint64_t BBERIE:1;
      uint64_t REQOVRIE:1;
      uint64_t DTERIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH6INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH6LEN;

  uint8_t res16[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSD:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace1:2;
      uint64_t DAR:7;
      uint64_t ODDFRM:1;
      uint64_t CDIS:1;
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH7CTL;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t CH:1;
      uint64_t reservedSpace0:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace1:1;
      uint64_t USBER:1;
      uint64_t BBER:1;
      uint64_t REQOVR:1;
      uint64_t DTER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH7INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFIE:1;
      uint64_t CHIE:1;
      uint64_t reservedSpace0:1;
      uint64_t STALLIE:1;
      uint64_t NAKIE:1;
      uint64_t ACKIE:1;
      uint64_t reservedSpace1:1;
      uint64_t USBERIE:1;
      uint64_t BBERIE:1;
      uint64_t REQOVRIE:1;
      uint64_t DTERIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH7INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH7LEN;

};

#define FS_HOST (*(volatile struct FS_HOST_tag *) 0x50000400)

struct FS_DEVICE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DS:2;
      uint64_t NZLSOH:1;
      uint64_t reservedSpace0:1;
      uint64_t DAR:7;
      uint64_t EOPFT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RWKUP:1;
      uint64_t SD:1;
      uint64_t GINS:1;
      uint64_t GONS:1;
      uint64_t reservedSpace0:3;
      uint64_t SGINAK:1;
      uint64_t CGINAK:1;
      uint64_t SGONAK:1;
      uint64_t CGONAK:1;
      uint64_t POIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPST:1;
      uint64_t ES:2;
      uint64_t reservedSpace0:5;
      uint64_t FNRSOF:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFEN:1;
      uint64_t EPDISEN:1;
      uint64_t reservedSpace0:1;
      uint64_t CITOEN:1;
      uint64_t EPTXFUDEN:1;
      uint64_t reservedSpace1:1;
      uint64_t IEPNEEN:1;
      uint64_t TXFEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFEN:1;
      uint64_t EPDISEN:1;
      uint64_t reservedSpace0:1;
      uint64_t STPFEN:1;
      uint64_t EPRXFOVREN:1;
      uint64_t reservedSpace1:1;
      uint64_t BTBSTPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPINTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPITB:4;
      uint64_t reservedSpace0:12;
      uint64_t OEPITB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAEPINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPIE:4;
      uint64_t reservedSpace0:12;
      uint64_t OEPIE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAEPINTEN;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DVBUSDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DVBUSDT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DVBUSPT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DVBUSPT;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPTXFEIE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPFEINTEN;

  uint8_t res3[200];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:2;
      uint64_t reservedSpace0:13;
      uint64_t EPACT:1;
      uint64_t reservedSpace1:1;
      uint64_t NAKS:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace2:1;
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t reservedSpace3:2;
      uint64_t EPD:1;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP0CTL;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t EPDIS:1;
      uint64_t reservedSpace0:1;
      uint64_t CITO:1;
      uint64_t EPTXFUD:1;
      uint64_t reservedSpace1:1;
      uint64_t IEPNE:1;
      uint64_t TXFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP0INTF;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:7;
      uint64_t reservedSpace0:12;
      uint64_t PCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP0LEN;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPTFS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP0TFSTAT;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t reservedSpace0:4;
      uint64_t EPACT:1;
      uint64_t EOFRM_DPID:1;
      uint64_t NAKS:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace1:1;
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVENFRM:1;
      uint64_t SD1PID_SODDFRM:1;
      uint64_t EPD:1;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP1CTL;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t EPDIS:1;
      uint64_t reservedSpace0:1;
      uint64_t CITO:1;
      uint64_t EPTXFUD:1;
      uint64_t reservedSpace1:1;
      uint64_t IEPNE:1;
      uint64_t TXFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP1INTF;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP1LEN;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPTFS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP1TFSTAT;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t reservedSpace0:4;
      uint64_t EPACT:1;
      uint64_t EOFRM_DPID:1;
      uint64_t NAKS:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace1:1;
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVENFRM:1;
      uint64_t SD1PID_SODDFRM:1;
      uint64_t EPD:1;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP2CTL;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t EPDIS:1;
      uint64_t reservedSpace0:1;
      uint64_t CITO:1;
      uint64_t EPTXFUD:1;
      uint64_t reservedSpace1:1;
      uint64_t IEPNE:1;
      uint64_t TXFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP2INTF;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP2LEN;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPTFS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP2TFSTAT;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t reservedSpace0:4;
      uint64_t EPACT:1;
      uint64_t EOFRM_DPID:1;
      uint64_t NAKS:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace1:1;
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVENFRM:1;
      uint64_t SD1PID_SODDFRM:1;
      uint64_t EPD:1;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP3CTL;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t EPDIS:1;
      uint64_t reservedSpace0:1;
      uint64_t CITO:1;
      uint64_t EPTXFUD:1;
      uint64_t reservedSpace1:1;
      uint64_t IEPNE:1;
      uint64_t TXFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP3INTF;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP3LEN;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPTFS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP3TFSTAT;

  uint8_t res19[388];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:2;
      uint64_t reservedSpace0:13;
      uint64_t EPACT:1;
      uint64_t reservedSpace1:1;
      uint64_t NAKS:1;
      uint64_t EPTYPE:2;
      uint64_t SNOOP:1;
      uint64_t STALL:1;
      uint64_t reservedSpace2:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t reservedSpace3:2;
      uint64_t EPD:1;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP0CTL;

  uint8_t res20[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t EPDIS:1;
      uint64_t reservedSpace0:1;
      uint64_t STPF:1;
      uint64_t EPRXFOVR:1;
      uint64_t reservedSpace1:1;
      uint64_t BTBSTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP0INTF;

  uint8_t res21[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:7;
      uint64_t reservedSpace0:12;
      uint64_t PCNT:1;
      uint64_t reservedSpace1:9;
      uint64_t STPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP0LEN;

  uint8_t res22[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t reservedSpace0:4;
      uint64_t EPACT:1;
      uint64_t EOFRM_DPID:1;
      uint64_t NAKS:1;
      uint64_t EPTYPE:2;
      uint64_t SNOOP:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVENFRM:1;
      uint64_t SD1PID_SODDFRM:1;
      uint64_t EPD:1;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP1CTL;

  uint8_t res23[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t EPDIS:1;
      uint64_t reservedSpace0:1;
      uint64_t STPF:1;
      uint64_t EPRXFOVR:1;
      uint64_t reservedSpace1:1;
      uint64_t BTBSTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP1INTF;

  uint8_t res24[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t STPCNT_RXDPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP1LEN;

  uint8_t res25[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t reservedSpace0:4;
      uint64_t EPACT:1;
      uint64_t EOFRM_DPID:1;
      uint64_t NAKS:1;
      uint64_t EPTYPE:2;
      uint64_t SNOOP:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVENFRM:1;
      uint64_t SD1PID_SODDFRM:1;
      uint64_t EPD:1;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP2CTL;

  uint8_t res26[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t EPDIS:1;
      uint64_t reservedSpace0:1;
      uint64_t STPF:1;
      uint64_t EPRXFOVR:1;
      uint64_t reservedSpace1:1;
      uint64_t BTBSTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP2INTF;

  uint8_t res27[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t STPCNT_RXDPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP2LEN;

  uint8_t res28[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t reservedSpace0:4;
      uint64_t EPACT:1;
      uint64_t EOFRM_DPID:1;
      uint64_t NAKS:1;
      uint64_t EPTYPE:2;
      uint64_t SNOOP:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVENFRM:1;
      uint64_t SD1PID_SODDFRM:1;
      uint64_t EPD:1;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP3CTL;

  uint8_t res29[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t EPDIS:1;
      uint64_t reservedSpace0:1;
      uint64_t STPF:1;
      uint64_t EPRXFOVR:1;
      uint64_t reservedSpace1:1;
      uint64_t BTBSTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP3INTF;

  uint8_t res30[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t STPCNT_RXDPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP3LEN;

};

#define FS_DEVICE (*(volatile struct FS_DEVICE_tag *) 0x50000800)

struct FS_PWRCLK_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUCLK:1;
      uint64_t SHCLK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRCLKCTL;

};

#define FS_PWRCLK (*(volatile struct FS_PWRCLK_tag *) 0x50000e00)

struct HS_HOST_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SPDFSLS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRI:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRNUM:16;
      uint64_t FRT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFINFR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTXFS:16;
      uint64_t PTXREQS:8;
      uint64_t PTXREQT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPTFQSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HACHINT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HACHINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CINTEN:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HACHINTEN;

  uint8_t res1[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCST:1;
      uint64_t PCD:1;
      uint64_t PE:1;
      uint64_t PEDC:1;
      uint64_t reservedSpace0:2;
      uint64_t PREM:1;
      uint64_t PSP:1;
      uint64_t PRST:1;
      uint64_t reservedSpace1:1;
      uint64_t PLST:2;
      uint64_t PP:1;
      uint64_t reservedSpace2:4;
      uint64_t PS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPCS;

  uint8_t res2[188];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSD:1;
      uint64_t EPTYPE:2;
      uint64_t MPC:2;
      uint64_t DAR:7;
      uint64_t ODDFRM:1;
      uint64_t CDIS:1;
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH0CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:7;
      uint64_t HADDR:7;
      uint64_t ISOPCE:2;
      uint64_t CSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH0STCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t CH:1;
      uint64_t DMAER:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t NYET:1;
      uint64_t USBER:1;
      uint64_t BBER:1;
      uint64_t REQOVR:1;
      uint64_t DTER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH0INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFIE:1;
      uint64_t CHIE:1;
      uint64_t DMAERIE:1;
      uint64_t STALLIE:1;
      uint64_t NAKIE:1;
      uint64_t ACKIE:1;
      uint64_t NYETIE:1;
      uint64_t USBERIE:1;
      uint64_t BBERIE:1;
      uint64_t REQOVRIE:1;
      uint64_t DTERIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH0INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t DPID:2;
      uint64_t PING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH0LEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH0DMAADDR;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSD:1;
      uint64_t EPTYPE:2;
      uint64_t MPC:2;
      uint64_t DAR:7;
      uint64_t ODDFRM:1;
      uint64_t CDIS:1;
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH1CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:7;
      uint64_t HADDR:7;
      uint64_t ISOPCE:2;
      uint64_t CSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH1STCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t CH:1;
      uint64_t DMAER:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t NYET:1;
      uint64_t USBER:1;
      uint64_t BBER:1;
      uint64_t REQOVR:1;
      uint64_t DTER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH1INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFIE:1;
      uint64_t CHIE:1;
      uint64_t DMAERIE:1;
      uint64_t STALLIE:1;
      uint64_t NAKIE:1;
      uint64_t ACKIE:1;
      uint64_t NYETIE:1;
      uint64_t USBERIE:1;
      uint64_t BBERIE:1;
      uint64_t REQOVRIE:1;
      uint64_t DTERIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH1INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t DPID:2;
      uint64_t PING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH1LEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH1DMAADDR;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSD:1;
      uint64_t EPTYPE:2;
      uint64_t MPC:2;
      uint64_t DAR:7;
      uint64_t ODDFRM:1;
      uint64_t CDIS:1;
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH2CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:7;
      uint64_t HADDR:7;
      uint64_t ISOPCE:2;
      uint64_t CSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH2STCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t CH:1;
      uint64_t DMAER:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t NYET:1;
      uint64_t USBER:1;
      uint64_t BBER:1;
      uint64_t REQOVR:1;
      uint64_t DTER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH2INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFIE:1;
      uint64_t CHIE:1;
      uint64_t DMAERIE:1;
      uint64_t STALLIE:1;
      uint64_t NAKIE:1;
      uint64_t ACKIE:1;
      uint64_t NYETIE:1;
      uint64_t USBERIE:1;
      uint64_t BBERIE:1;
      uint64_t REQOVRIE:1;
      uint64_t DTERIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH2INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t DPID:2;
      uint64_t PING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH2LEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH2DMAADDR;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSD:1;
      uint64_t EPTYPE:2;
      uint64_t MPC:2;
      uint64_t DAR:7;
      uint64_t ODDFRM:1;
      uint64_t CDIS:1;
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH3CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:7;
      uint64_t HADDR:7;
      uint64_t ISOPCE:2;
      uint64_t CSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH3STCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t CH:1;
      uint64_t DMAER:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t NYET:1;
      uint64_t USBER:1;
      uint64_t BBER:1;
      uint64_t REQOVR:1;
      uint64_t DTER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH3INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFIE:1;
      uint64_t CHIE:1;
      uint64_t DMAERIE:1;
      uint64_t STALLIE:1;
      uint64_t NAKIE:1;
      uint64_t ACKIE:1;
      uint64_t NYETIE:1;
      uint64_t USBERIE:1;
      uint64_t BBERIE:1;
      uint64_t REQOVRIE:1;
      uint64_t DTERIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH3INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t DPID:2;
      uint64_t PING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH3LEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH3DMAADDR;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSD:1;
      uint64_t EPTYPE:2;
      uint64_t MPC:2;
      uint64_t DAR:7;
      uint64_t ODDFRM:1;
      uint64_t CDIS:1;
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH4CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:7;
      uint64_t HADDR:7;
      uint64_t ISOPCE:2;
      uint64_t CSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH4STCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t CH:1;
      uint64_t DMAER:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t NYET:1;
      uint64_t USBER:1;
      uint64_t BBER:1;
      uint64_t REQOVR:1;
      uint64_t DTER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH4INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFIE:1;
      uint64_t CHIE:1;
      uint64_t DMAERIE:1;
      uint64_t STALLIE:1;
      uint64_t NAKIE:1;
      uint64_t ACKIE:1;
      uint64_t NYETIE:1;
      uint64_t USBERIE:1;
      uint64_t BBERIE:1;
      uint64_t REQOVRIE:1;
      uint64_t DTERIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH4INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t DPID:2;
      uint64_t PING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH4LEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH4DMAADDR;

  uint8_t res7[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSD:1;
      uint64_t EPTYPE:2;
      uint64_t MPC:2;
      uint64_t DAR:7;
      uint64_t ODDFRM:1;
      uint64_t CDIS:1;
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH5CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:7;
      uint64_t HADDR:7;
      uint64_t ISOPCE:2;
      uint64_t CSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH5STCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t CH:1;
      uint64_t DMAER:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t NYET:1;
      uint64_t USBER:1;
      uint64_t BBER:1;
      uint64_t REQOVR:1;
      uint64_t DTER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH5INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFIE:1;
      uint64_t CHIE:1;
      uint64_t DMAERIE:1;
      uint64_t STALLIE:1;
      uint64_t NAKIE:1;
      uint64_t ACKIE:1;
      uint64_t NYETIE:1;
      uint64_t USBERIE:1;
      uint64_t BBERIE:1;
      uint64_t REQOVRIE:1;
      uint64_t DTERIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH5INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t DPID:2;
      uint64_t PING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH5LEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH5DMAADDR;

  uint8_t res8[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSD:1;
      uint64_t EPTYPE:2;
      uint64_t MPC:2;
      uint64_t DAR:7;
      uint64_t ODDFRM:1;
      uint64_t CDIS:1;
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH6CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:7;
      uint64_t HADDR:7;
      uint64_t ISOPCE:2;
      uint64_t CSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH6STCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t CH:1;
      uint64_t DMAER:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t NYET:1;
      uint64_t USBER:1;
      uint64_t BBER:1;
      uint64_t REQOVR:1;
      uint64_t DTER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH6INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFIE:1;
      uint64_t CHIE:1;
      uint64_t DMAERIE:1;
      uint64_t STALLIE:1;
      uint64_t NAKIE:1;
      uint64_t ACKIE:1;
      uint64_t NYETIE:1;
      uint64_t USBERIE:1;
      uint64_t BBERIE:1;
      uint64_t REQOVRIE:1;
      uint64_t DTERIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH6INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t DPID:2;
      uint64_t PING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH6LEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH6DMAADDR;

  uint8_t res9[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSD:1;
      uint64_t EPTYPE:2;
      uint64_t MPC:2;
      uint64_t DAR:7;
      uint64_t ODDFRM:1;
      uint64_t CDIS:1;
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH7CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:7;
      uint64_t HADDR:7;
      uint64_t ISOPCE:2;
      uint64_t CSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH7STCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t CH:1;
      uint64_t DMAER:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t NYET:1;
      uint64_t USBER:1;
      uint64_t BBER:1;
      uint64_t REQOVR:1;
      uint64_t DTER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH7INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFIE:1;
      uint64_t CHIE:1;
      uint64_t DMAERIE:1;
      uint64_t STALLIE:1;
      uint64_t NAKIE:1;
      uint64_t ACKIE:1;
      uint64_t NYETIE:1;
      uint64_t USBERIE:1;
      uint64_t BBERIE:1;
      uint64_t REQOVRIE:1;
      uint64_t DTERIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH7INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t DPID:2;
      uint64_t PING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH7LEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH7DMAADDR;

  uint8_t res10[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSD:1;
      uint64_t EPTYPE:2;
      uint64_t MPC:2;
      uint64_t DAR:7;
      uint64_t ODDFRM:1;
      uint64_t CDIS:1;
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH8CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:7;
      uint64_t HADDR:7;
      uint64_t ISOPCE:2;
      uint64_t CSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH8STCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t CH:1;
      uint64_t DMAER:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t NYET:1;
      uint64_t USBER:1;
      uint64_t BBER:1;
      uint64_t REQOVR:1;
      uint64_t DTER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH8INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFIE:1;
      uint64_t CHIE:1;
      uint64_t DMAERIE:1;
      uint64_t STALLIE:1;
      uint64_t NAKIE:1;
      uint64_t ACKIE:1;
      uint64_t NYETIE:1;
      uint64_t USBERIE:1;
      uint64_t BBERIE:1;
      uint64_t REQOVRIE:1;
      uint64_t DTERIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH8INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t DPID:2;
      uint64_t PING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH8LEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH8DMAADDR;

  uint8_t res11[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSD:1;
      uint64_t EPTYPE:2;
      uint64_t MPC:2;
      uint64_t DAR:7;
      uint64_t ODDFRM:1;
      uint64_t CDIS:1;
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH9CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:7;
      uint64_t HADDR:7;
      uint64_t ISOPCE:2;
      uint64_t CSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH9STCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t CH:1;
      uint64_t DMAER:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t NYET:1;
      uint64_t USBER:1;
      uint64_t BBER:1;
      uint64_t REQOVR:1;
      uint64_t DTER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH9INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFIE:1;
      uint64_t CHIE:1;
      uint64_t DMAERIE:1;
      uint64_t STALLIE:1;
      uint64_t NAKIE:1;
      uint64_t ACKIE:1;
      uint64_t NYETIE:1;
      uint64_t USBERIE:1;
      uint64_t BBERIE:1;
      uint64_t REQOVRIE:1;
      uint64_t DTERIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH9INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t DPID:2;
      uint64_t PING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH9LEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH9DMAADDR;

  uint8_t res12[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSD:1;
      uint64_t EPTYPE:2;
      uint64_t MPC:2;
      uint64_t DAR:7;
      uint64_t ODDFRM:1;
      uint64_t CDIS:1;
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH10CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:7;
      uint64_t HADDR:7;
      uint64_t ISOPCE:2;
      uint64_t CSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH10STCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t CH:1;
      uint64_t DMAER:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t NYET:1;
      uint64_t USBER:1;
      uint64_t BBER:1;
      uint64_t REQOVR:1;
      uint64_t DTER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH10INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFIE:1;
      uint64_t CHIE:1;
      uint64_t DMAERIE:1;
      uint64_t STALLIE:1;
      uint64_t NAKIE:1;
      uint64_t ACKIE:1;
      uint64_t NYETIE:1;
      uint64_t USBERIE:1;
      uint64_t BBERIE:1;
      uint64_t REQOVRIE:1;
      uint64_t DTERIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH10INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t DPID:2;
      uint64_t PING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH10LEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH10DMAADDR;

  uint8_t res13[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSD:1;
      uint64_t EPTYPE:2;
      uint64_t MPC:2;
      uint64_t DAR:7;
      uint64_t ODDFRM:1;
      uint64_t CDIS:1;
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH11CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR:7;
      uint64_t HADDR:7;
      uint64_t ISOPCE:2;
      uint64_t CSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH11STCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t CH:1;
      uint64_t DMAER:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t NYET:1;
      uint64_t USBER:1;
      uint64_t BBER:1;
      uint64_t REQOVR:1;
      uint64_t DTER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH11INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFIE:1;
      uint64_t CHIE:1;
      uint64_t DMAERIE:1;
      uint64_t STALLIE:1;
      uint64_t NAKIE:1;
      uint64_t ACKIE:1;
      uint64_t NYETIE:1;
      uint64_t USBERIE:1;
      uint64_t BBERIE:1;
      uint64_t REQOVRIE:1;
      uint64_t DTERIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH11INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t DPID:2;
      uint64_t PING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH11LEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCH11DMAADDR;

};

#define HS_HOST (*(volatile struct HS_HOST_tag *) 0x40040400)

struct HS_DEVICE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DS:2;
      uint64_t NZLSOH:1;
      uint64_t reservedSpace0:1;
      uint64_t DAR:7;
      uint64_t EOPFT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RWKUP:1;
      uint64_t SD:1;
      uint64_t GINS:1;
      uint64_t GONS:1;
      uint64_t reservedSpace0:3;
      uint64_t SGINAK:1;
      uint64_t CGINAK:1;
      uint64_t SGONAK:1;
      uint64_t CGONAK:1;
      uint64_t POIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPST:1;
      uint64_t ES:2;
      uint64_t reservedSpace0:5;
      uint64_t FNRSOF:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFEN:1;
      uint64_t EPDISEN:1;
      uint64_t reservedSpace0:1;
      uint64_t CITOEN:1;
      uint64_t EPTXFUDEN:1;
      uint64_t reservedSpace1:1;
      uint64_t IEPNEEN:1;
      uint64_t TXFEEN:1;
      uint64_t reservedSpace2:5;
      uint64_t NAKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFEN:1;
      uint64_t EPDISEN:1;
      uint64_t reservedSpace0:1;
      uint64_t STPFEN:1;
      uint64_t EPRXFOVREN:1;
      uint64_t reservedSpace1:1;
      uint64_t BTBSTPEN:1;
      uint64_t reservedSpace2:7;
      uint64_t NYETEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPINTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPITB:6;
      uint64_t reservedSpace0:10;
      uint64_t OEPITB:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAEPINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPIE:6;
      uint64_t reservedSpace0:10;
      uint64_t OEPIE:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAEPINTEN;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DVBUSDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DVBUSDT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DVBUSPT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DVBUSPT;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPTXFEIE:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPFEINTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t IEP1INT:1;
      uint64_t reservedSpace1:15;
      uint64_t OEP1INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEP1INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t IEP1INTEN:1;
      uint64_t reservedSpace1:15;
      uint64_t OEP1INTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEP1INTEN;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFEN:1;
      uint64_t EPDISEN:1;
      uint64_t reservedSpace0:1;
      uint64_t CITOEN:1;
      uint64_t EPTXFUDEN:1;
      uint64_t reservedSpace1:1;
      uint64_t IEPNEEN:1;
      uint64_t reservedSpace2:6;
      uint64_t NAKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP1INTEN;

  uint8_t res4[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFEN:1;
      uint64_t EPDISEN:1;
      uint64_t reservedSpace0:1;
      uint64_t STPFEN:1;
      uint64_t EPRXFOVREN:1;
      uint64_t reservedSpace1:1;
      uint64_t BTBSTPEN:1;
      uint64_t reservedSpace2:7;
      uint64_t NYETEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP1INTEN;

  uint8_t res5[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:2;
      uint64_t reservedSpace0:13;
      uint64_t EPACT:1;
      uint64_t reservedSpace1:1;
      uint64_t NAKS:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace2:1;
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t reservedSpace3:2;
      uint64_t EPD:1;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP0CTL;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t EPDIS:1;
      uint64_t reservedSpace0:1;
      uint64_t CITO:1;
      uint64_t EPTXFUD:1;
      uint64_t reservedSpace1:1;
      uint64_t IEPNE:1;
      uint64_t TXFE:1;
      uint64_t reservedSpace2:5;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP0INTF;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:7;
      uint64_t reservedSpace0:12;
      uint64_t PCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP0LEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP0DMAADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPTFS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP0TFSTAT;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t reservedSpace0:4;
      uint64_t EPACT:1;
      uint64_t EOFRM_DPID:1;
      uint64_t NAKS:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace1:1;
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVENFRM:1;
      uint64_t SD1PID_SODDFRM:1;
      uint64_t EPD:1;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP1CTL;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t EPDIS:1;
      uint64_t reservedSpace0:1;
      uint64_t CITO:1;
      uint64_t EPTXFUD:1;
      uint64_t reservedSpace1:1;
      uint64_t IEPNE:1;
      uint64_t TXFE:1;
      uint64_t reservedSpace2:5;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP1INTF;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP1LEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP1DMAADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPTFS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP1TFSTAT;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t reservedSpace0:4;
      uint64_t EPACT:1;
      uint64_t EOFRM_DPID:1;
      uint64_t NAKS:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace1:1;
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVENFRM:1;
      uint64_t SD1PID_SODDFRM:1;
      uint64_t EPD:1;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP2CTL;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t EPDIS:1;
      uint64_t reservedSpace0:1;
      uint64_t CITO:1;
      uint64_t EPTXFUD:1;
      uint64_t reservedSpace1:1;
      uint64_t IEPNE:1;
      uint64_t TXFE:1;
      uint64_t reservedSpace2:5;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP2INTF;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP2LEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP2DMAADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPTFS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP2TFSTAT;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t reservedSpace0:4;
      uint64_t EPACT:1;
      uint64_t EOFRM_DPID:1;
      uint64_t NAKS:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace1:1;
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVENFRM:1;
      uint64_t SD1PID_SODDFRM:1;
      uint64_t EPD:1;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP3CTL;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t EPDIS:1;
      uint64_t reservedSpace0:1;
      uint64_t CITO:1;
      uint64_t EPTXFUD:1;
      uint64_t reservedSpace1:1;
      uint64_t IEPNE:1;
      uint64_t TXFE:1;
      uint64_t reservedSpace2:5;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP3INTF;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP3LEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP3DMAADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPTFS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP3TFSTAT;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t reservedSpace0:4;
      uint64_t EPACT:1;
      uint64_t EOFRM_DPID:1;
      uint64_t NAKS:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace1:1;
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVENFRM:1;
      uint64_t SD1PID_SODDFRM:1;
      uint64_t EPD:1;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP4CTL;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t EPDIS:1;
      uint64_t reservedSpace0:1;
      uint64_t CITO:1;
      uint64_t EPTXFUD:1;
      uint64_t reservedSpace1:1;
      uint64_t IEPNE:1;
      uint64_t TXFE:1;
      uint64_t reservedSpace2:5;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP4INTF;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP4LEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP4DMAADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPTFS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP4TFSTAT;

  uint8_t res20[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t reservedSpace0:4;
      uint64_t EPACT:1;
      uint64_t EOFRM_DPID:1;
      uint64_t NAKS:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace1:1;
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVENFRM:1;
      uint64_t SD1PID_SODDFRM:1;
      uint64_t EPD:1;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP5CTL;

  uint8_t res21[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t EPDIS:1;
      uint64_t reservedSpace0:1;
      uint64_t CITO:1;
      uint64_t EPTXFUD:1;
      uint64_t reservedSpace1:1;
      uint64_t IEPNE:1;
      uint64_t TXFE:1;
      uint64_t reservedSpace2:5;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP5INTF;

  uint8_t res22[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP5LEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP5DMAADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPTFS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP5TFSTAT;

  uint8_t res23[324];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:2;
      uint64_t reservedSpace0:13;
      uint64_t EPACT:1;
      uint64_t reservedSpace1:1;
      uint64_t NAKS:1;
      uint64_t EPTYPE:2;
      uint64_t SNOOP:1;
      uint64_t STALL:1;
      uint64_t reservedSpace2:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t reservedSpace3:2;
      uint64_t EPD:1;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP0CTL;

  uint8_t res24[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t EPDIS:1;
      uint64_t reservedSpace0:1;
      uint64_t STPF:1;
      uint64_t EPRXFOVR:1;
      uint64_t reservedSpace1:1;
      uint64_t BTBSTP:1;
      uint64_t reservedSpace2:7;
      uint64_t NYET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP0INTF;

  uint8_t res25[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:7;
      uint64_t reservedSpace0:12;
      uint64_t PCNT:1;
      uint64_t reservedSpace1:9;
      uint64_t STPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP0LEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP0DMAADDR;

  uint8_t res26[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t reservedSpace0:4;
      uint64_t EPACT:1;
      uint64_t EOFRM_DPID:1;
      uint64_t NAKS:1;
      uint64_t EPTYPE:2;
      uint64_t SNOOP:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVENFRM:1;
      uint64_t SD1PID_SODDFRM:1;
      uint64_t EPD:1;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP1CTL;

  uint8_t res27[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t EPDIS:1;
      uint64_t reservedSpace0:1;
      uint64_t STPF:1;
      uint64_t EPRXFOVR:1;
      uint64_t reservedSpace1:1;
      uint64_t BTBSTP:1;
      uint64_t reservedSpace2:7;
      uint64_t NYET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP1INTF;

  uint8_t res28[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t STPCNT_RXDPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP1LEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP1DMAADDR;

  uint8_t res29[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t reservedSpace0:4;
      uint64_t EPACT:1;
      uint64_t EOFRM_DPID:1;
      uint64_t NAKS:1;
      uint64_t EPTYPE:2;
      uint64_t SNOOP:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVENFRM:1;
      uint64_t SD1PID_SODDFRM:1;
      uint64_t EPD:1;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP2CTL;

  uint8_t res30[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t EPDIS:1;
      uint64_t reservedSpace0:1;
      uint64_t STPF:1;
      uint64_t EPRXFOVR:1;
      uint64_t reservedSpace1:1;
      uint64_t BTBSTP:1;
      uint64_t reservedSpace2:7;
      uint64_t NYET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP2INTF;

  uint8_t res31[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t STPCNT_RXDPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP2LEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP2DMAADDR;

  uint8_t res32[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t reservedSpace0:4;
      uint64_t EPACT:1;
      uint64_t EOFRM_DPID:1;
      uint64_t NAKS:1;
      uint64_t EPTYPE:2;
      uint64_t SNOOP:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVENFRM:1;
      uint64_t SD1PID_SODDFRM:1;
      uint64_t EPD:1;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP3CTL;

  uint8_t res33[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t EPDIS:1;
      uint64_t reservedSpace0:1;
      uint64_t STPF:1;
      uint64_t EPRXFOVR:1;
      uint64_t reservedSpace1:1;
      uint64_t BTBSTP:1;
      uint64_t reservedSpace2:7;
      uint64_t NYET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP3INTF;

  uint8_t res34[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t STPCNT_RXDPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP3LEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP3DMAADDR;

  uint8_t res35[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t reservedSpace0:4;
      uint64_t EPACT:1;
      uint64_t EOFRM_DPID:1;
      uint64_t NAKS:1;
      uint64_t EPTYPE:2;
      uint64_t SNOOP:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVENFRM:1;
      uint64_t SD1PID_SODDFRM:1;
      uint64_t EPD:1;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP4CTL;

  uint8_t res36[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t EPDIS:1;
      uint64_t reservedSpace0:1;
      uint64_t STPF:1;
      uint64_t EPRXFOVR:1;
      uint64_t reservedSpace1:1;
      uint64_t BTBSTP:1;
      uint64_t reservedSpace2:7;
      uint64_t NYET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP4INTF;

  uint8_t res37[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t STPCNT_RXDPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP4LEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP4DMAADDR;

  uint8_t res38[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL:11;
      uint64_t reservedSpace0:4;
      uint64_t EPACT:1;
      uint64_t EOFRM_DPID:1;
      uint64_t NAKS:1;
      uint64_t EPTYPE:2;
      uint64_t SNOOP:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVENFRM:1;
      uint64_t SD1PID_SODDFRM:1;
      uint64_t EPD:1;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP5CTL;

  uint8_t res39[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF:1;
      uint64_t EPDIS:1;
      uint64_t reservedSpace0:1;
      uint64_t STPF:1;
      uint64_t EPRXFOVR:1;
      uint64_t reservedSpace1:1;
      uint64_t BTBSTP:1;
      uint64_t reservedSpace2:7;
      uint64_t NYET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP5INTF;

  uint8_t res40[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLEN:19;
      uint64_t PCNT:10;
      uint64_t STPCNT_RXDPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP5LEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP5DMAADDR;

};

#define HS_DEVICE (*(volatile struct HS_DEVICE_tag *) 0x40040800)

struct HS_PWRCLK_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUCLK:1;
      uint64_t SHCLK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRCLKCTL;

};

#define HS_PWRCLK (*(volatile struct HS_PWRCLK_tag *) 0x40040e00)

struct WWDGT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:7;
      uint64_t WDGTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WIN:7;
      uint64_t PSC:2;
      uint64_t EWIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EWIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

};

#define WWDGT (*(volatile struct WWDGT_tag *) 0x40002c00)

