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

struct CACHE_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t FLUSH:1;
      uint64_t BYPASS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTRL;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CACHELINE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LNSIZECFG;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ASSOCIATIVITY:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ASSOCCFG;

};

#define CACHE (*(volatile struct CACHE_tag *) 0x10000000)

struct SYSCTRLA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t NAME:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NAME;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) REV;

  uint8_t res0[26];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEBUG_ACCESS_KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEBUG_ACCESS_KEY;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DEBUG_ACCESS_ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DEBUG_ACCESS_ENABLED;

  uint8_t res1[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIM_ACCESS_KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIM_ACCESS_KEY;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRIM_ACCESS_ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TRIM_ACCESS_ENABLED;

  uint8_t res2[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t CM4IRQREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM4IRQREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVENT_MESSAGE:1;
      uint64_t reservedSpace0:7;
      uint64_t ENABLE_MESSAGE:1;
      uint64_t reservedSpace1:7;
      uint64_t REQUESTED_MESSAGE:1;
      uint64_t reservedSpace2:7;
      uint64_t CLEAR_MESSAGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM4IRQGEN;

  uint8_t res3[8];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SPARE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SYSSPARE;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DBGPWRUP_REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DBGPWRUPCTRL;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLK0ENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LIN;

  uint8_t res6[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CAN_BIST_ENA:1;
      uint64_t S3_BIST_ENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BIST_ENA;

  uint8_t res7[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CAN_BIST_DONE:1;
      uint64_t S3_BIST_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BIST_DONE;

  uint8_t res8[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CANBISTCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_BIST_CRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S3BISTCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S3_BIST_CRC;

  uint8_t res9[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIGOSCILLOSCOPECHANSEL:1;
      uint64_t reservedSpace0:3;
      uint64_t DIGOSCILLOSCOPEDRQTHR:4;
      uint64_t DIGOSCILLOSCOPETESTMODE:3;
      uint64_t reservedSpace1:5;
      uint64_t DIGOSCILLOSCOPECLOCKRATE:8;
      uint64_t DIGOSCILLOSCOPEFIFORESET:1;
      uint64_t DIGOSCILLOSCOPEDMAPACK:1;
      uint64_t DIGOSCILLOSCOPEDMADELAYREADS:1;
      uint64_t DIGOSCILLOSCOPEPACKETSIZE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIG_OSCILLOSCOPE_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIGOSCILLOSCOPEREADBACK32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIG_OSCILLOSCOPE_DMA_READBACK_32;

  uint8_t res10[32];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRIM_MEM_WAIT_STATE_NUM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TRIMMEMCFG;

  uint8_t res11[87];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RETAIN0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RETAIN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RETAIN1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RETAIN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RETAIN2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RETAIN2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RETAIN3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RETAIN3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RETAIN4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RETAIN4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RETAIN5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RETAIN5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RETAIN6:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RETAIN6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RETAIN7:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RETAIN7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RETAIN8:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RETAIN8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RETAIN9:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RETAIN9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RETAINA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RETAINA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RETAINB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RETAINB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RETAINC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RETAINC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RETAIND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RETAIND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RETAINE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RETAINE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RETAINF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RETAINF;

  uint8_t res12[192];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MUTEX0:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUTEXOWNER0;

  uint8_t res13[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MUTEX1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUTEXOWNER1;

  uint8_t res14[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MUTEX2:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUTEXOWNER2;

  uint8_t res15[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MUTEX3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUTEXOWNER3;

  uint8_t res16[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MUTEX4:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUTEXOWNER4;

  uint8_t res17[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MUTEX5:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUTEXOWNER5;

  uint8_t res18[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MUTEX6:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUTEXOWNER6;

  uint8_t res19[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MUTEX7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUTEXOWNER7;

  uint8_t res20[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MUTEX8:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUTEXOWNER8;

  uint8_t res21[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MUTEX9:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUTEXOWNER9;

  uint8_t res22[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MUTEXA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUTEXOWNERA;

  uint8_t res23[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MUTEXB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUTEXOWNERB;

  uint8_t res24[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MUTEXC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUTEXOWNERC;

  uint8_t res25[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MUTEXD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUTEXOWNERD;

  uint8_t res26[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MUTEXE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUTEXOWNERE;

  uint8_t res27[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MUTEXF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUTEXOWNERF;

};

#define SYSCTRLA (*(volatile struct SYSCTRLA_tag *) 0x40000000)

struct IOCTRLA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIOA0_FUNC:4;
      uint64_t reservedSpace0:2;
      uint64_t GPIOA0_IE:1;
      uint64_t GPIOA0_HYS:1;
      uint64_t GPIOA1_FUNC:4;
      uint64_t reservedSpace1:2;
      uint64_t GPIOA1_IE:1;
      uint64_t GPIOA1_HYS:1;
      uint64_t GPIOA2_FUNC:4;
      uint64_t reservedSpace2:2;
      uint64_t GPIOA2_IE:1;
      uint64_t GPIOA2_HYS:1;
      uint64_t GPIOA3_FUNC:4;
      uint64_t reservedSpace3:2;
      uint64_t GPIOA3_IE:1;
      uint64_t GPIOA3_HYS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOA1PA03;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GPIOA4_FUNC:4;
      uint64_t reservedSpace0:2;
      uint64_t GPIOA4_IE:1;
      uint64_t GPIOA4_HYS:1;
      uint64_t GPIOA5_FUNC:4;
      uint64_t reservedSpace1:2;
      uint64_t GPIOA5_IE:1;
      uint64_t GPIOA5_HYS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) GPIOA1PA47;

  uint8_t res0[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPICLK_FUNC:2;
      uint64_t SPICLK_IE:1;
      uint64_t reservedSpace0:2;
      uint64_t SPICLK_HYS:1;
      uint64_t reservedSpace1:2;
      uint64_t SPIMOSI_FUNC:2;
      uint64_t SPIMOSI_IE:1;
      uint64_t reservedSpace2:2;
      uint64_t SPIMOSI_HYS:1;
      uint64_t reservedSpace3:2;
      uint64_t SPIMISO_FUNC:2;
      uint64_t SPIMISO_IE:1;
      uint64_t reservedSpace4:2;
      uint64_t SPIMISO_HYS:1;
      uint64_t reservedSpace5:2;
      uint64_t SPISSN_FUNC:2;
      uint64_t SPISSN_IE:1;
      uint64_t reservedSpace6:2;
      uint64_t SPISSN_HYS:1;
      uint64_t SPISSN_ACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOA1PB03;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SWDCLK_FUNC:1;
      uint64_t reservedSpace0:1;
      uint64_t SWDCLK_IE:1;
      uint64_t reservedSpace1:2;
      uint64_t SWDCLK_HYS:1;
      uint64_t reservedSpace2:2;
      uint64_t SWDIO_FUNC:1;
      uint64_t reservedSpace3:1;
      uint64_t SWDIO_IE:1;
      uint64_t reservedSpace4:2;
      uint64_t SWDIO_HYS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) GPIOA1PB47;

  uint8_t res1[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PU:12;
      uint64_t reservedSpace0:4;
      uint64_t PD:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOPUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDRV0:12;
      uint64_t reservedSpace0:4;
      uint64_t PDRV1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOPDRV01;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SL:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) GPIOSLEW;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t CAN_SLP_INVERT:1;
      uint64_t reservedSpace1:7;
      uint64_t LIN_SLP_INVERT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POLARITY;

  uint8_t res3[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BLOCK_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TESTMUX;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TEST_SEL0:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TESTMUX0;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TEST_SEL1:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TESTMUX1;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TEST_SEL2:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TESTMUX2;

  uint8_t res7[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TEST_SEL3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TESTMUX3;

  uint8_t res8[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TEST_SEL4:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TESTMUX4;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TEST_SEL5:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TESTMUX5;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TEST_SEL6:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TESTMUX6;

  uint8_t res11[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TEST_SEL7:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TESTMUX7;

  uint8_t res12[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMU_P_SEL:5;
      uint64_t reservedSpace0:3;
      uint64_t PMU_M_SEL:5;
      uint64_t reservedSpace1:3;
      uint64_t AMUXP_ENA:1;
      uint64_t AMUXN_ENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANALOGTESTMUX;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t reservedSpace0:6;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SFP0CTRL;

  uint8_t res13[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t reservedSpace0:6;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SFP1CTRL;

  uint8_t res14[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t reservedSpace0:6;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SFP2CTRL;

  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t reservedSpace0:6;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SFP3CTRL;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t reservedSpace0:6;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SFP4CTRL;

  uint8_t res17[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t reservedSpace0:6;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SFP5CTRL;

  uint8_t res18[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t reservedSpace0:6;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SFP6CTRL;

  uint8_t res19[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t reservedSpace0:6;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SFP7CTRL;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t reservedSpace0:6;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SFP8CTRL;

  uint8_t res21[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LIN_SW_TXD:1;
      uint64_t LIN_SW_SLPN:1;
      uint64_t CAN_SW_TXD:1;
      uint64_t CAN_SW_SLPN:1;
      uint64_t reservedSpace0:4;
      uint64_t LIN_SW_RXD:1;
      uint64_t CAN_SW_RXD:1;
      uint64_t reservedSpace1:14;
      uint64_t ATM_MODE:2;
      uint64_t ATM_ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATMDATA;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SDA1_FILT_BYPASS:1;
      uint64_t reservedSpace0:1;
      uint64_t SDA1_FILT_TRIM:2;
      uint64_t SCL1_FILT_BYPASS:1;
      uint64_t reservedSpace1:1;
      uint64_t SCL1_FILT_TRIM:2;
      uint64_t SDA2_FILT_BYPASS:1;
      uint64_t reservedSpace2:1;
      uint64_t SDA2_FILT_TRIM:2;
      uint64_t SCL2_FILT_BYPASS:1;
      uint64_t reservedSpace3:1;
      uint64_t SCL2_FILT_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2CFILT;

  uint8_t res22[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSC0_PWMSEL:3;
      uint64_t OSC0_PWMENA:1;
      uint64_t reservedSpace0:4;
      uint64_t OSC1_PWMSEL:3;
      uint64_t OSC1_PWMENA:1;
      uint64_t reservedSpace1:4;
      uint64_t OSC2_PWMSEL:3;
      uint64_t OSC2_PWMENA:1;
      uint64_t reservedSpace2:4;
      uint64_t OSC_SLEW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCPWMCTRL;

};

#define IOCTRLA (*(volatile struct IOCTRLA_tag *) 0x40000800)

struct CRGA_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SYS_CLK:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CLK_STATUS;

  uint8_t res0[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RC_SEL:1;
      uint64_t reservedSpace0:7;
      uint64_t XO_SEL:1;
      uint64_t reservedSpace1:7;
      uint64_t DIV_SEL:2;
      uint64_t reservedSpace2:6;
      uint64_t PRESCALE_ENA:1;
      uint64_t reservedSpace3:3;
      uint64_t RO_ENA:1;
      uint64_t XOSC_ENA:1;
      uint64_t XOSC_BYP:1;
      uint64_t XOSC_AUTO_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_CLK_CTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SYSRESETREQ_ENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SYSRESETREQENA;

  uint8_t res1[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HARD:1;
      uint64_t reservedSpace0:7;
      uint64_t SOFT_RST:1;
      uint64_t reservedSpace1:7;
      uint64_t CAN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_REQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POR:1;
      uint64_t SOFT_RST:1;
      uint64_t HARD:1;
      uint64_t reservedSpace0:1;
      uint64_t CLK_FAIL_XO:1;
      uint64_t WDT_BARK:1;
      uint64_t WDT_WF:1;
      uint64_t SYSRESETREQ:1;
      uint64_t PMU:1;
      uint64_t reservedSpace1:2;
      uint64_t HIBERNATE:1;
      uint64_t reservedSpace2:4;
      uint64_t CAN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM4_RR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POR:1;
      uint64_t SOFT_RST:1;
      uint64_t HARD:1;
      uint64_t reservedSpace0:1;
      uint64_t CLK_FAIL_XO:1;
      uint64_t WDT_BARK:1;
      uint64_t WDT_WF:1;
      uint64_t SYSRESETREQ:1;
      uint64_t PMU:1;
      uint64_t reservedSpace1:2;
      uint64_t HIBERNATE:1;
      uint64_t reservedSpace2:4;
      uint64_t CAN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM4_RR_CLR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SEL:1;
      uint64_t reservedSpace0:7;
      uint64_t STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CAN_CLK_CTRL;

  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WDT_STRB_ENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WDT_STRB_CTRL;

  uint8_t res3[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t RST_ENA:1;
      uint64_t reservedSpace1:7;
      uint64_t DIV_SEL:2;
      uint64_t reservedSpace2:2;
      uint64_t CLK_SWITCH_ENA:1;
      uint64_t reservedSpace3:3;
      uint64_t COUNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_FAIL_XO_CTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CLK_FAIL_XO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IRQ_ENA;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CLK_FAIL_XO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IRQ_CLR;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CLK_FAIL_XO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IRQ_FIRED;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CLK_FAIL_XO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IRQ_FIRED_MASKED;

};

#define CRGA (*(volatile struct CRGA_tag *) 0x40001000)

struct PMUA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t FASTBOOT:1;
      uint64_t FASTSHUTDOWN:1;
      uint64_t reservedSpace1:20;
      uint64_t ENA_CLK_SYS_GATING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE_BIAS:4;
      uint64_t reservedSpace0:4;
      uint64_t DISABLE_VCORE:8;
      uint64_t SELECT_VRETAIN:4;
      uint64_t REVERT_TO_VCORE:4;
      uint64_t HYPERSLEEP_REQUEST:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DWELL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HYPERSLEEP_ENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HYPERSLEEP;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IGNORE_VRETAIN:1;
      uint64_t ENABLE_HYPERSLEEP_WITH_DAP:1;
      uint64_t reservedSpace0:2;
      uint64_t VCORE_FW_SEL:1;
      uint64_t VCORE_FW_ENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DEBUG;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RETAIN_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) STATUS;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RETAIN:1;
      uint64_t HIBERNATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PWRMODE_IRQ_ENA;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RETAIN:1;
      uint64_t HIBERNATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PWRMODE_IRQ_CLR;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RETAIN:1;
      uint64_t HIBERNATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PWRMODE_IRQ_FIRED;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RETAIN:1;
      uint64_t HIBERNATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PWRMODE_IRQ_FIRED_MASKED;

};

#define PMUA (*(volatile struct PMUA_tag *) 0x40002000)

struct PMUN_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESETREQ:1;
      uint64_t DBGPWRUPREQ:1;
      uint64_t WAKEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIRSTPOWERUPEVENT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESETREQ:1;
      uint64_t DBGPWRUPREQ:1;
      uint64_t WAKEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALLPOWERUPEVENTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:7;
      uint64_t SINGLE:1;
      uint64_t CONTINUOUS:1;
      uint64_t reservedSpace1:6;
      uint64_t CLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWLRD;

};

#define PMUN (*(volatile struct PMUN_tag *) 0x0)

struct PMUN_PMUN_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESETREQ:1;
      uint64_t DBGPWRUPREQ:1;
      uint64_t WAKEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIRSTPOWERUPEVENT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESETREQ:1;
      uint64_t DBGPWRUPREQ:1;
      uint64_t WAKEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALLPOWERUPEVENTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:7;
      uint64_t SINGLE:1;
      uint64_t CONTINUOUS:1;
      uint64_t reservedSpace1:6;
      uint64_t CLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWLRD;

};

#define PMUN_PMUN (*(volatile struct PMUN_PMUN_tag *) 0x40003000)

struct UARTA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAMEERROR:1;
      uint64_t PARITYERROR:1;
      uint64_t BREAKERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTDATARECEIVESTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t ENABLE_STS:1;
      uint64_t UFIFOSOFTRESET:1;
      uint64_t reservedSpace0:13;
      uint64_t SIZE:2;
      uint64_t STOP:1;
      uint64_t PARENA:1;
      uint64_t PARODD:1;
      uint64_t STICKENA:1;
      uint64_t BREAKENA:1;
      uint64_t LOOPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t URTSENA:1;
      uint64_t reservedSpace0:7;
      uint64_t UCTSENA:1;
      uint64_t reservedSpace1:7;
      uint64_t URTSH:5;
      uint64_t reservedSpace2:3;
      uint64_t URTSL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLOWCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTRDY:1;
      uint64_t OVRUNERR:1;
      uint64_t FRMERR:1;
      uint64_t PRTYERR:1;
      uint64_t BREAKIRQ:1;
      uint64_t TXDONE:1;
      uint64_t RXMULTIPLEXFERDONE:1;
      uint64_t TXMULTIPLEXFERDONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTRXDATAREADY:1;
      uint64_t INTRXOVERRUNERROR:1;
      uint64_t INTRXFRAMINGERROR:1;
      uint64_t INTRXPARITYERROR:1;
      uint64_t INTRXBREAKERROR:1;
      uint64_t INTTXDONE:1;
      uint64_t INTRXMULTIPLEXFERDONE:1;
      uint64_t INTTXMULTIPLEXFERDONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTINTSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTRXDATAREADYENA:1;
      uint64_t INTRXOVERRUNERRORENA:1;
      uint64_t INTRXFRAMINGERRORENA:1;
      uint64_t INTRXPARITYERRORENA:1;
      uint64_t INTRXBREAKERRORENA:1;
      uint64_t INTTXDONEENA:1;
      uint64_t INTRXMULTIPLEXFERDONEENA:1;
      uint64_t INTTXMULTIPLEXFERDONEENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTINTENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTRXDATAREADYCLR:1;
      uint64_t INTRXOVERRUNERRORCLR:1;
      uint64_t INTRXFRAMINGERRORCLR:1;
      uint64_t INTRXPARITYERRORCLR:1;
      uint64_t INTRXBREAKERRORCLR:1;
      uint64_t INTTXDONECLR:1;
      uint64_t INTRXMULTIPLEXFERDONECLR:1;
      uint64_t INTTXMULTIPLEXFERDONECLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTINTCLEAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAUDDIV:16;
      uint64_t OSR:5;
      uint64_t reservedSpace0:3;
      uint64_t UADVANCE:1;
      uint64_t reservedSpace1:3;
      uint64_t URETARD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTBAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXUF:1;
      uint64_t RXEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t reservedSpace0:5;
      uint64_t RXCOUNT:5;
      uint64_t reservedSpace1:3;
      uint64_t TXOF:1;
      uint64_t TXEMPTY:1;
      uint64_t TXFULL:1;
      uint64_t reservedSpace2:5;
      uint64_t TXCOUNT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTFIFOSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXMULTIPLEXFERDONECNT:5;
      uint64_t reservedSpace0:3;
      uint64_t TXMULTIPLEXFERDONECNT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTFIFOLEVELCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDMAENA:1;
      uint64_t reservedSpace0:7;
      uint64_t RXDMAENA:1;
      uint64_t reservedSpace1:7;
      uint64_t TXFIFODMAREQLVL:5;
      uint64_t reservedSpace2:3;
      uint64_t RXFIFODMAREQLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTDMACTL;

};

#define UARTA (*(volatile struct UARTA_tag *) 0x0)

struct UARTA_UARTA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAMEERROR:1;
      uint64_t PARITYERROR:1;
      uint64_t BREAKERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTDATARECEIVESTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t ENABLE_STS:1;
      uint64_t UFIFOSOFTRESET:1;
      uint64_t reservedSpace0:13;
      uint64_t SIZE:2;
      uint64_t STOP:1;
      uint64_t PARENA:1;
      uint64_t PARODD:1;
      uint64_t STICKENA:1;
      uint64_t BREAKENA:1;
      uint64_t LOOPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t URTSENA:1;
      uint64_t reservedSpace0:7;
      uint64_t UCTSENA:1;
      uint64_t reservedSpace1:7;
      uint64_t URTSH:5;
      uint64_t reservedSpace2:3;
      uint64_t URTSL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLOWCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTRDY:1;
      uint64_t OVRUNERR:1;
      uint64_t FRMERR:1;
      uint64_t PRTYERR:1;
      uint64_t BREAKIRQ:1;
      uint64_t TXDONE:1;
      uint64_t RXMULTIPLEXFERDONE:1;
      uint64_t TXMULTIPLEXFERDONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTRXDATAREADY:1;
      uint64_t INTRXOVERRUNERROR:1;
      uint64_t INTRXFRAMINGERROR:1;
      uint64_t INTRXPARITYERROR:1;
      uint64_t INTRXBREAKERROR:1;
      uint64_t INTTXDONE:1;
      uint64_t INTRXMULTIPLEXFERDONE:1;
      uint64_t INTTXMULTIPLEXFERDONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTINTSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTRXDATAREADYENA:1;
      uint64_t INTRXOVERRUNERRORENA:1;
      uint64_t INTRXFRAMINGERRORENA:1;
      uint64_t INTRXPARITYERRORENA:1;
      uint64_t INTRXBREAKERRORENA:1;
      uint64_t INTTXDONEENA:1;
      uint64_t INTRXMULTIPLEXFERDONEENA:1;
      uint64_t INTTXMULTIPLEXFERDONEENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTINTENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTRXDATAREADYCLR:1;
      uint64_t INTRXOVERRUNERRORCLR:1;
      uint64_t INTRXFRAMINGERRORCLR:1;
      uint64_t INTRXPARITYERRORCLR:1;
      uint64_t INTRXBREAKERRORCLR:1;
      uint64_t INTTXDONECLR:1;
      uint64_t INTRXMULTIPLEXFERDONECLR:1;
      uint64_t INTTXMULTIPLEXFERDONECLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTINTCLEAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAUDDIV:16;
      uint64_t OSR:5;
      uint64_t reservedSpace0:3;
      uint64_t UADVANCE:1;
      uint64_t reservedSpace1:3;
      uint64_t URETARD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTBAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXUF:1;
      uint64_t RXEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t reservedSpace0:5;
      uint64_t RXCOUNT:5;
      uint64_t reservedSpace1:3;
      uint64_t TXOF:1;
      uint64_t TXEMPTY:1;
      uint64_t TXFULL:1;
      uint64_t reservedSpace2:5;
      uint64_t TXCOUNT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTFIFOSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXMULTIPLEXFERDONECNT:5;
      uint64_t reservedSpace0:3;
      uint64_t TXMULTIPLEXFERDONECNT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTFIFOLEVELCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDMAENA:1;
      uint64_t reservedSpace0:7;
      uint64_t RXDMAENA:1;
      uint64_t reservedSpace1:7;
      uint64_t TXFIFODMAREQLVL:5;
      uint64_t reservedSpace2:3;
      uint64_t RXFIFODMAREQLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTDMACTL;

};

#define UARTA_UARTA (*(volatile struct UARTA_UARTA_tag *) 0x40004000)

struct SPI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIRXDATA32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA16:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIRXDATA16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIRXDATA8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPITXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA_REQ:1;
      uint64_t ENA_STS:1;
      uint64_t SPR:2;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t SCKEXT:2;
      uint64_t ICNT:3;
      uint64_t reservedSpace0:5;
      uint64_t LPBK:1;
      uint64_t TXOFCTRL:1;
      uint64_t TXOFCNT:2;
      uint64_t RXUFCTRL:1;
      uint64_t RXUFCNT:2;
      uint64_t reservedSpace1:1;
      uint64_t FIFOSOFTRESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPICTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFER_CNT_0:1;
      uint64_t TXFIFO_OF_0:1;
      uint64_t RXFIFO_UF_0:1;
      uint64_t reservedSpace0:5;
      uint64_t XFER_CNT_1:1;
      uint64_t TXFIFO_OF_1:1;
      uint64_t RXFIFO_UF_1:1;
      uint64_t reservedSpace1:5;
      uint64_t XFER_CNT_2:1;
      uint64_t TXFIFO_OF_2:1;
      uint64_t RXFIFO_UF_2:1;
      uint64_t reservedSpace2:5;
      uint64_t XFER_CNT_3:1;
      uint64_t TXFIFO_OF_3:1;
      uint64_t RXFIFO_UF_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIIRQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFIFOEMPTY:1;
      uint64_t RXFIFOFULL:1;
      uint64_t reservedSpace0:6;
      uint64_t RXFIFOCOUNT:5;
      uint64_t reservedSpace1:3;
      uint64_t TXFIFOEMPTY:1;
      uint64_t TXFIFOFULL:1;
      uint64_t reservedSpace2:6;
      uint64_t TXFIFOCOUNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFIFOSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDMAENA:1;
      uint64_t reservedSpace0:7;
      uint64_t RXDMAENA:1;
      uint64_t reservedSpace1:7;
      uint64_t TXFIFOREQLVL:4;
      uint64_t reservedSpace2:4;
      uint64_t RXFIFOREQLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIDMACTRL;

};

#define SPI (*(volatile struct SPI_tag *) 0x0)

struct SPI_SPI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIRXDATA32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA16:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIRXDATA16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIRXDATA8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPITXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA_REQ:1;
      uint64_t ENA_STS:1;
      uint64_t SPR:2;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t SCKEXT:2;
      uint64_t ICNT:3;
      uint64_t reservedSpace0:5;
      uint64_t LPBK:1;
      uint64_t TXOFCTRL:1;
      uint64_t TXOFCNT:2;
      uint64_t RXUFCTRL:1;
      uint64_t RXUFCNT:2;
      uint64_t reservedSpace1:1;
      uint64_t FIFOSOFTRESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPICTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFER_CNT_0:1;
      uint64_t TXFIFO_OF_0:1;
      uint64_t RXFIFO_UF_0:1;
      uint64_t reservedSpace0:5;
      uint64_t XFER_CNT_1:1;
      uint64_t TXFIFO_OF_1:1;
      uint64_t RXFIFO_UF_1:1;
      uint64_t reservedSpace1:5;
      uint64_t XFER_CNT_2:1;
      uint64_t TXFIFO_OF_2:1;
      uint64_t RXFIFO_UF_2:1;
      uint64_t reservedSpace2:5;
      uint64_t XFER_CNT_3:1;
      uint64_t TXFIFO_OF_3:1;
      uint64_t RXFIFO_UF_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIIRQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFIFOEMPTY:1;
      uint64_t RXFIFOFULL:1;
      uint64_t reservedSpace0:6;
      uint64_t RXFIFOCOUNT:5;
      uint64_t reservedSpace1:3;
      uint64_t TXFIFOEMPTY:1;
      uint64_t TXFIFOFULL:1;
      uint64_t reservedSpace2:6;
      uint64_t TXFIFOCOUNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFIFOSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDMAENA:1;
      uint64_t reservedSpace0:7;
      uint64_t RXDMAENA:1;
      uint64_t reservedSpace1:7;
      uint64_t TXFIFOREQLVL:4;
      uint64_t reservedSpace2:4;
      uint64_t RXFIFOREQLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIDMACTRL;

};

#define SPI_SPI (*(volatile struct SPI_SPI_tag *) 0x40005000)

struct TSENSE_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t MEASDLY:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SENSORDLY;

  uint8_t res0[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MEASIMG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SENSORMEASIMG;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OTIMG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SENSOROTIMG;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ATSENSEENA:1;
      uint64_t TSENSEONESHOT:1;
      uint64_t ATSENSETHRESH:2;
      uint64_t ATSENSEHYST:2;
      uint64_t ATSENSETMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TSENSECONFIG;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVTEMPENA:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IRQENA;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVTEMPCLR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IRQCLR;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVTEMPSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IRQSTS;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVTEMPACT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IRQACT;

};

#define TSENSE (*(volatile struct TSENSE_tag *) 0x40005800)

struct I2Cx_I2C0_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t BUFOVFL:1;
      uint64_t BUFINVALID:1;
      uint64_t BUFFULL:1;
      uint64_t R1W0:1;
      uint64_t PRCVD:1;
      uint64_t SRCVD:1;
      uint64_t ADRRCVD:1;
      uint64_t ACKNRCVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) STATUS;

  uint8_t res0[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSENA:1;
      uint64_t STRHCLK:1;
      uint64_t GCENA:1;
      uint64_t MRCVENA:1;
      uint64_t ACKN:1;
      uint64_t ACKENA:1;
      uint64_t PENA:1;
      uint64_t SENA:1;
      uint64_t M1S0:1;
      uint64_t FLTENA:1;
      uint64_t ENA_REQ:1;
      uint64_t ENA_STS:1;
      uint64_t reservedSpace0:4;
      uint64_t AMSK:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t I2CDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DATA;

  uint8_t res1[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t I2CADDR:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADDR;

};

#define I2Cx_I2C0_0 (*(volatile struct I2Cx_I2C0_0_tag *) 0x40006000)

struct I2Cx_I2C0_1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t BUFOVFL:1;
      uint64_t BUFINVALID:1;
      uint64_t BUFFULL:1;
      uint64_t R1W0:1;
      uint64_t PRCVD:1;
      uint64_t SRCVD:1;
      uint64_t ADRRCVD:1;
      uint64_t ACKNRCVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) STATUS;

  uint8_t res0[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSENA:1;
      uint64_t STRHCLK:1;
      uint64_t GCENA:1;
      uint64_t MRCVENA:1;
      uint64_t ACKN:1;
      uint64_t ACKENA:1;
      uint64_t PENA:1;
      uint64_t SENA:1;
      uint64_t M1S0:1;
      uint64_t FLTENA:1;
      uint64_t ENA_REQ:1;
      uint64_t ENA_STS:1;
      uint64_t reservedSpace0:4;
      uint64_t AMSK:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t I2CDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DATA;

  uint8_t res1[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t I2CADDR:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADDR;

};

#define I2Cx_I2C0_1 (*(volatile struct I2Cx_I2C0_1_tag *) 0x40006800)

struct PWMx_PWM0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PRESCALESEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENAREQ:1;
      uint64_t reservedSpace0:7;
      uint64_t ENASTS:1;
      uint64_t reservedSpace1:7;
      uint64_t INVERT:1;
      uint64_t reservedSpace2:7;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWIDTH:16;
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PULSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:2;
      uint64_t reservedSpace0:14;
      uint64_t CLEAR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDGECTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:2;
      uint64_t reservedSpace0:14;
      uint64_t IRQ:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDGESTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:7;
      uint64_t CLEAR:1;
      uint64_t reservedSpace1:7;
      uint64_t STATUS:1;
      uint64_t reservedSpace2:7;
      uint64_t IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTUPDATED;

};

#define PWMx_PWM0 (*(volatile struct PWMx_PWM0_tag *) 0x40007000)

struct PWMx_PWM1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PRESCALESEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENAREQ:1;
      uint64_t reservedSpace0:7;
      uint64_t ENASTS:1;
      uint64_t reservedSpace1:7;
      uint64_t INVERT:1;
      uint64_t reservedSpace2:7;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWIDTH:16;
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PULSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:2;
      uint64_t reservedSpace0:14;
      uint64_t CLEAR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDGECTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:2;
      uint64_t reservedSpace0:14;
      uint64_t IRQ:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDGESTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:7;
      uint64_t CLEAR:1;
      uint64_t reservedSpace1:7;
      uint64_t STATUS:1;
      uint64_t reservedSpace2:7;
      uint64_t IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTUPDATED;

};

#define PWMx_PWM1 (*(volatile struct PWMx_PWM1_tag *) 0x40007200)

struct PWMx_PWM2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PRESCALESEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENAREQ:1;
      uint64_t reservedSpace0:7;
      uint64_t ENASTS:1;
      uint64_t reservedSpace1:7;
      uint64_t INVERT:1;
      uint64_t reservedSpace2:7;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWIDTH:16;
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PULSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:2;
      uint64_t reservedSpace0:14;
      uint64_t CLEAR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDGECTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:2;
      uint64_t reservedSpace0:14;
      uint64_t IRQ:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDGESTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:7;
      uint64_t CLEAR:1;
      uint64_t reservedSpace1:7;
      uint64_t STATUS:1;
      uint64_t reservedSpace2:7;
      uint64_t IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTUPDATED;

};

#define PWMx_PWM2 (*(volatile struct PWMx_PWM2_tag *) 0x40007400)

struct PWMx_PWM3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PRESCALESEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENAREQ:1;
      uint64_t reservedSpace0:7;
      uint64_t ENASTS:1;
      uint64_t reservedSpace1:7;
      uint64_t INVERT:1;
      uint64_t reservedSpace2:7;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWIDTH:16;
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PULSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:2;
      uint64_t reservedSpace0:14;
      uint64_t CLEAR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDGECTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:2;
      uint64_t reservedSpace0:14;
      uint64_t IRQ:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDGESTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:7;
      uint64_t CLEAR:1;
      uint64_t reservedSpace1:7;
      uint64_t STATUS:1;
      uint64_t reservedSpace2:7;
      uint64_t IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTUPDATED;

};

#define PWMx_PWM3 (*(volatile struct PWMx_PWM3_tag *) 0x40007600)

struct PWMx_PWM4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PRESCALESEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENAREQ:1;
      uint64_t reservedSpace0:7;
      uint64_t ENASTS:1;
      uint64_t reservedSpace1:7;
      uint64_t INVERT:1;
      uint64_t reservedSpace2:7;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWIDTH:16;
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PULSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:2;
      uint64_t reservedSpace0:14;
      uint64_t CLEAR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDGECTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:2;
      uint64_t reservedSpace0:14;
      uint64_t IRQ:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDGESTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:7;
      uint64_t CLEAR:1;
      uint64_t reservedSpace1:7;
      uint64_t STATUS:1;
      uint64_t reservedSpace2:7;
      uint64_t IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTUPDATED;

};

#define PWMx_PWM4 (*(volatile struct PWMx_PWM4_tag *) 0x40007800)

struct PWMx_PWM5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PRESCALESEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENAREQ:1;
      uint64_t reservedSpace0:7;
      uint64_t ENASTS:1;
      uint64_t reservedSpace1:7;
      uint64_t INVERT:1;
      uint64_t reservedSpace2:7;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWIDTH:16;
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PULSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:2;
      uint64_t reservedSpace0:14;
      uint64_t CLEAR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDGECTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:2;
      uint64_t reservedSpace0:14;
      uint64_t IRQ:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDGESTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:7;
      uint64_t CLEAR:1;
      uint64_t reservedSpace1:7;
      uint64_t STATUS:1;
      uint64_t reservedSpace2:7;
      uint64_t IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTUPDATED;

};

#define PWMx_PWM5 (*(volatile struct PWMx_PWM5_tag *) 0x40007a00)

struct PWMx_PWM6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PRESCALESEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENAREQ:1;
      uint64_t reservedSpace0:7;
      uint64_t ENASTS:1;
      uint64_t reservedSpace1:7;
      uint64_t INVERT:1;
      uint64_t reservedSpace2:7;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWIDTH:16;
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PULSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:2;
      uint64_t reservedSpace0:14;
      uint64_t CLEAR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDGECTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:2;
      uint64_t reservedSpace0:14;
      uint64_t IRQ:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDGESTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:7;
      uint64_t CLEAR:1;
      uint64_t reservedSpace1:7;
      uint64_t STATUS:1;
      uint64_t reservedSpace2:7;
      uint64_t IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTUPDATED;

};

#define PWMx_PWM6 (*(volatile struct PWMx_PWM6_tag *) 0x40007c00)

struct PWMx_PWM7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PRESCALESEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENAREQ:1;
      uint64_t reservedSpace0:7;
      uint64_t ENASTS:1;
      uint64_t reservedSpace1:7;
      uint64_t INVERT:1;
      uint64_t reservedSpace2:7;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWIDTH:16;
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PULSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:2;
      uint64_t reservedSpace0:14;
      uint64_t CLEAR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDGECTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:2;
      uint64_t reservedSpace0:14;
      uint64_t IRQ:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEDGESTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:7;
      uint64_t CLEAR:1;
      uint64_t reservedSpace1:7;
      uint64_t STATUS:1;
      uint64_t reservedSpace2:7;
      uint64_t IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTUPDATED;

};

#define PWMx_PWM7 (*(volatile struct PWMx_PWM7_tag *) 0x40007e00)

struct LINS_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATABUF1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DATABYTE1;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATABUF2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DATABYTE2;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATABUF3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DATABYTE3;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATABUF4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DATABYTE4;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATABUF5:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DATABYTE5;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATABUF6:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DATABYTE6;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATABUF7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DATABYTE7;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATABUF8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DATABYTE8;

  uint8_t res7[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t WAKEUPREQ:1;
      uint64_t RSTERR:1;
      uint64_t RSTINT:1;
      uint64_t DATAACK:1;
      uint64_t TRANSMIT:1;
      uint64_t SLEEP:1;
      uint64_t STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTRL;

  uint8_t res8[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPLETE:1;
      uint64_t WAKEUP:1;
      uint64_t ERROR:1;
      uint64_t INTR:1;
      uint64_t DATAREQ:1;
      uint64_t ABORTED:1;
      uint64_t BUSIDLETIMEOUT:1;
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) STATUS;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BITMON:1;
      uint64_t CHK:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ERROR;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LENGTH:4;
      uint64_t reservedSpace0:3;
      uint64_t ENHCHK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DL;

  uint8_t res11[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BTDIV07:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BTDIV07;

  uint8_t res12[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BTDIV8:1;
      uint64_t reservedSpace0:5;
      uint64_t PRESCL_bitfield:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BITTIME;

  uint8_t res13[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ID:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ID;

  uint8_t res14[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WUPREPEAT:2;
      uint64_t BUSINACTIVE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BUSTIME;

  uint8_t res15[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCCOUNT:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCCOUNT;

};

#define LINS (*(volatile struct LINS_tag *) 0x40008000)

struct CAN_WRAP_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CAN_FD_ENABLE:1;
      uint64_t CAN_TIMER_ENABLE:1;
      uint64_t CAN_TIMER_DIV_SEL:3;
      uint64_t CAN_TIMER_CLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CAN_IP_CTRL;

};

#define CAN_WRAP (*(volatile struct CAN_WRAP_tag *) 0x40009000)

struct CAN_CTRL_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t RBUF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RBUF;

  uint8_t res0[79];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TBUF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TBUF;

  uint8_t res1[71];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TTS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TTS;

  uint8_t res2[7];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_STAT_BUSOFF:1;
      uint64_t CFG_STAT_TACTIVE:1;
      uint64_t CFG_STAT_RACTIVE:1;
      uint64_t CFG_STAT_TSSS:1;
      uint64_t CFG_STAT_TPSS:1;
      uint64_t CFG_STAT_LBMI:1;
      uint64_t CFG_STAT_LBME:1;
      uint64_t CFG_STAT_RESET:1;
      uint64_t TCMD_TSA:1;
      uint64_t TCMD_TSALL:1;
      uint64_t TCMD_TSONE:1;
      uint64_t TCMD_TPA:1;
      uint64_t TCMD_TPE:1;
      uint64_t TCMD_STBY:1;
      uint64_t TCMD_LOM:1;
      uint64_t TCMD_TBSEL:1;
      uint64_t TCTRL_TSSTAT:2;
      uint64_t reservedSpace0:2;
      uint64_t TCTRL_TTTBM:1;
      uint64_t TCTRL_TSMODE:1;
      uint64_t TCTRL_TSNEXT:1;
      uint64_t TCTRL_FD_ISO:1;
      uint64_t RCTRL_RSTAT:2;
      uint64_t reservedSpace1:1;
      uint64_t RCTRL_RBALL:1;
      uint64_t RCTRL_RREL:1;
      uint64_t RCTRL_ROV:1;
      uint64_t RCTRL_ROM:1;
      uint64_t RCTRL_SACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CANWORDA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTIE_TSFF:1;
      uint64_t RTIE_EIE:1;
      uint64_t RTIE_TSIE:1;
      uint64_t RTIE_TPIE:1;
      uint64_t RTIE_RAFIE:1;
      uint64_t RTIE_RFIE:1;
      uint64_t RTIE_ROIE:1;
      uint64_t RTIE_RIE:1;
      uint64_t RTIF_AIF:1;
      uint64_t RTIF_EIF:1;
      uint64_t RTIF_TSIF:1;
      uint64_t RTIF_TPIF:1;
      uint64_t RTIF_RAFIF:1;
      uint64_t RTIF_RFIF:1;
      uint64_t RTIF_ROIF:1;
      uint64_t RTIF_RIF:1;
      uint64_t ERRINT_BEIF:1;
      uint64_t ERRINT_BEIE:1;
      uint64_t ERRINT_ALIF:1;
      uint64_t ERRINT_ALIE:1;
      uint64_t ERRINT_EPIF:1;
      uint64_t ERRINT_EPIE:1;
      uint64_t ERRINT_EPASS:1;
      uint64_t ERRINT_EWARN:1;
      uint64_t LIMIT_EWL:4;
      uint64_t LIMIT_AWFL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CANWORDA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S_SEG_1_S_SEG_1:8;
      uint64_t S_SEG_2_S_SEG_2:7;
      uint64_t reservedSpace0:1;
      uint64_t S_SJW_S_SJW:7;
      uint64_t reservedSpace1:1;
      uint64_t S_PRESC_S_PRESC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CANWORDA8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F_SEG_1_F_SEG_1:5;
      uint64_t reservedSpace0:3;
      uint64_t F_SEG_2_F_SEG_2:4;
      uint64_t reservedSpace1:4;
      uint64_t F_SJW_F_SJW:4;
      uint64_t reservedSpace2:4;
      uint64_t F_PRESC_F_PRESC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CANWORDAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EALCAP_ALC:5;
      uint64_t EALCAP_KOER:3;
      uint64_t TDC_SSPOFF:7;
      uint64_t TDC_TDCEN:1;
      uint64_t RECNT_RECNT:8;
      uint64_t TECNT_TECNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CANWORDB0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACFCTRL_ACFADR:4;
      uint64_t reservedSpace0:1;
      uint64_t ACFCTRL_SELMASK:1;
      uint64_t reservedSpace1:2;
      uint64_t TIMECFG_TIMEEN:1;
      uint64_t TIMECFG_TIMEPOS:1;
      uint64_t reservedSpace2:6;
      uint64_t ACF_EN_0_AE_0:1;
      uint64_t ACF_EN_0_AE_1:1;
      uint64_t ACF_EN_0_AE_2:1;
      uint64_t ACF_EN_0_AE_3:1;
      uint64_t ACF_EN_0_AE_4:1;
      uint64_t ACF_EN_0_AE_5:1;
      uint64_t ACF_EN_0_AE_6:1;
      uint64_t ACF_EN_0_AE_7:1;
      uint64_t ACF_EN_1_AE_8:1;
      uint64_t ACF_EN_1_AE_9:1;
      uint64_t ACF_EN_1_AE_10:1;
      uint64_t ACF_EN_1_AE_11:1;
      uint64_t ACF_EN_1_AE_12:1;
      uint64_t ACF_EN_1_AE_13:1;
      uint64_t ACF_EN_1_AE_14:1;
      uint64_t ACF_EN_1_AE_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CANWORDB4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACF_0_ACF_0:8;
      uint64_t ACF_1_ACF_1:8;
      uint64_t ACF_2_ACF_2:8;
      uint64_t ACF_3_ACF_3:5;
      uint64_t ACF_3_AIDE:1;
      uint64_t ACF_3_AIDEE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VER_0_VER_0:8;
      uint64_t VER_1_VER_1:8;
      uint64_t TBSLOT_TBPTR:6;
      uint64_t TBSLOT_TBF:1;
      uint64_t TBSLOT_TBE:1;
      uint64_t TTCFG_TTEN:1;
      uint64_t TTCFG_T_PRESC:2;
      uint64_t TTCFG_TTIF:1;
      uint64_t TTCFG_TTIE:1;
      uint64_t TTCFG_TEIF:1;
      uint64_t TTCFG_WTIF:1;
      uint64_t TTCFG_WTIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CANWORDBC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_MSG_0_REF_MSG_0:8;
      uint64_t REF_MSG_1_REF_MSG_1:8;
      uint64_t REF_MSG_2_REF_MSG_2:8;
      uint64_t REF_MSG_3_REF_MSG_3:5;
      uint64_t reservedSpace0:2;
      uint64_t REF_MSG_3_REF_IDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CANWORDC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIG_CFG_0_TTPTR:6;
      uint64_t reservedSpace0:2;
      uint64_t TRIG_CFG_1_TTYPE:3;
      uint64_t reservedSpace1:1;
      uint64_t TRIG_CFG_1_TEW:3;
      uint64_t reservedSpace2:1;
      uint64_t TT_TRIG_0_TT_TRIG_0:8;
      uint64_t TT_TRIG_1_TT_TRIG_1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CANWORDC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TT_WTRIG_0_TT_WTRIG_0:8;
      uint64_t TT_WTRIG_1_TT_WTRIG_1:8;
      uint64_t MEM_PROT_MPEN:1;
      uint64_t MEM_PROT_MDWIE:1;
      uint64_t MEM_PROT_MDWIF:1;
      uint64_t MEM_PROT_MDEIF:1;
      uint64_t MEM_PROT_MAEIF:1;
      uint64_t reservedSpace0:3;
      uint64_t MEM_STAT_ACFA:1;
      uint64_t MEM_STAT_TXS:1;
      uint64_t MEM_STAT_TXB:1;
      uint64_t MEM_STAT_HELOC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CANWORDC8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEM_ES_0_MEBP1:6;
      uint64_t MEM_ES_0_ME1EE:1;
      uint64_t MEM_ES_0_MEAEE:1;
      uint64_t MEM_ES_1_MEBP1:6;
      uint64_t MEM_ES_1_ME1EE:1;
      uint64_t reservedSpace0:1;
      uint64_t MEM_ES_2_MEEEC:4;
      uint64_t MEM_ES_2_MENEC:4;
      uint64_t MEM_ES_3_MEL:2;
      uint64_t MEM_ES_3_MES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CANWORDCC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCFG_XMREN:1;
      uint64_t SCFG_SCIF:1;
      uint64_t SCFG_SWIE:1;
      uint64_t SCFG_SWIF:1;
      uint64_t SCFG_FSTIM:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CANWORDD0;

};

#define CAN_CTRL (*(volatile struct CAN_CTRL_tag *) 0x4000a000)

struct ADC_CTRL_ARGON_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE0IRQORARMED:1;
      uint64_t NODE0IRQIRARMED:1;
      uint64_t NODE0DBCIRQ:4;
      uint64_t NODE0SEMODE:1;
      uint64_t NODE0AUTOEN:1;
      uint64_t NODE0ADCMUX:6;
      uint64_t NODE0ATTEN:1;
      uint64_t NODE0CNVDONEARMED:1;
      uint64_t NODE0DLYA2N:12;
      uint64_t NODE0DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE0CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE0THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE0THRHIGH:12;
      uint64_t NODE0ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE0CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE0ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE0THRLOWEXCD:1;
      uint64_t NODE0THRHIGHEXCD:1;
      uint64_t NODE0CONVDONE:1;
      uint64_t NODE0IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE0DBCCNTRIR:4;
      uint64_t NODE0DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE0STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE1IRQORARMED:1;
      uint64_t NODE1IRQIRARMED:1;
      uint64_t NODE1DBCIRQ:4;
      uint64_t NODE1SEMODE:1;
      uint64_t NODE1AUTOEN:1;
      uint64_t NODE1ADCMUX:6;
      uint64_t NODE1ATTEN:1;
      uint64_t NODE1CNVDONEARMED:1;
      uint64_t NODE1DLYA2N:12;
      uint64_t NODE1DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE1CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE1THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE1THRHIGH:12;
      uint64_t NODE1ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE1CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE1ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE1THRLOWEXCD:1;
      uint64_t NODE1THRHIGHEXCD:1;
      uint64_t NODE1CONVDONE:1;
      uint64_t NODE1IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE1DBCCNTRIR:4;
      uint64_t NODE1DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE1STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE2IRQORARMED:1;
      uint64_t NODE2IRQIRARMED:1;
      uint64_t NODE2DBCIRQ:4;
      uint64_t NODE2SEMODE:1;
      uint64_t NODE2AUTOEN:1;
      uint64_t NODE2ADCMUX:6;
      uint64_t NODE2ATTEN:1;
      uint64_t NODE2CNVDONEARMED:1;
      uint64_t NODE2DLYA2N:12;
      uint64_t NODE2DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE2CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE2THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE2THRHIGH:12;
      uint64_t NODE2ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE2CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE2ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE2THRLOWEXCD:1;
      uint64_t NODE2THRHIGHEXCD:1;
      uint64_t NODE2CONVDONE:1;
      uint64_t NODE2IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE2DBCCNTRIR:4;
      uint64_t NODE2DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE2STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE3IRQORARMED:1;
      uint64_t NODE3IRQIRARMED:1;
      uint64_t NODE3DBCIRQ:4;
      uint64_t NODE3SEMODE:1;
      uint64_t NODE3AUTOEN:1;
      uint64_t NODE3ADCMUX:6;
      uint64_t NODE3ATTEN:1;
      uint64_t NODE3CNVDONEARMED:1;
      uint64_t NODE3DLYA2N:12;
      uint64_t NODE3DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE3CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE3THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE3THRHIGH:12;
      uint64_t NODE3ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE3CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE3ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE3THRLOWEXCD:1;
      uint64_t NODE3THRHIGHEXCD:1;
      uint64_t NODE3CONVDONE:1;
      uint64_t NODE3IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE3DBCCNTRIR:4;
      uint64_t NODE3DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE3STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE4IRQORARMED:1;
      uint64_t NODE4IRQIRARMED:1;
      uint64_t NODE4DBCIRQ:4;
      uint64_t NODE4SEMODE:1;
      uint64_t NODE4AUTOEN:1;
      uint64_t NODE4ADCMUX:6;
      uint64_t NODE4ATTEN:1;
      uint64_t NODE4CNVDONEARMED:1;
      uint64_t NODE4DLYA2N:12;
      uint64_t NODE4DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE4CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE4THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE4THRHIGH:12;
      uint64_t NODE4ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE4CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE4ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE4THRLOWEXCD:1;
      uint64_t NODE4THRHIGHEXCD:1;
      uint64_t NODE4CONVDONE:1;
      uint64_t NODE4IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE4DBCCNTRIR:4;
      uint64_t NODE4DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE4STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE5IRQORARMED:1;
      uint64_t NODE5IRQIRARMED:1;
      uint64_t NODE5DBCIRQ:4;
      uint64_t NODE5SEMODE:1;
      uint64_t NODE5AUTOEN:1;
      uint64_t NODE5ADCMUX:6;
      uint64_t NODE5ATTEN:1;
      uint64_t NODE5CNVDONEARMED:1;
      uint64_t NODE5DLYA2N:12;
      uint64_t NODE5DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE5CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE5THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE5THRHIGH:12;
      uint64_t NODE5ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE5CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE5ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE5THRLOWEXCD:1;
      uint64_t NODE5THRHIGHEXCD:1;
      uint64_t NODE5CONVDONE:1;
      uint64_t NODE5IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE5DBCCNTRIR:4;
      uint64_t NODE5DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE5STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE6IRQORARMED:1;
      uint64_t NODE6IRQIRARMED:1;
      uint64_t NODE6DBCIRQ:4;
      uint64_t NODE6SEMODE:1;
      uint64_t NODE6AUTOEN:1;
      uint64_t NODE6ADCMUX:6;
      uint64_t NODE6ATTEN:1;
      uint64_t NODE6CNVDONEARMED:1;
      uint64_t NODE6DLYA2N:12;
      uint64_t NODE6DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE6CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE6THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE6THRHIGH:12;
      uint64_t NODE6ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE6CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE6ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE6THRLOWEXCD:1;
      uint64_t NODE6THRHIGHEXCD:1;
      uint64_t NODE6CONVDONE:1;
      uint64_t NODE6IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE6DBCCNTRIR:4;
      uint64_t NODE6DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE6STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE7IRQORARMED:1;
      uint64_t NODE7IRQIRARMED:1;
      uint64_t NODE7DBCIRQ:4;
      uint64_t NODE7SEMODE:1;
      uint64_t NODE7AUTOEN:1;
      uint64_t NODE7ADCMUX:6;
      uint64_t NODE7ATTEN:1;
      uint64_t NODE7CNVDONEARMED:1;
      uint64_t NODE7DLYA2N:12;
      uint64_t NODE7DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE7CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE7THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE7THRHIGH:12;
      uint64_t NODE7ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE7CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE7ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE7THRLOWEXCD:1;
      uint64_t NODE7THRHIGHEXCD:1;
      uint64_t NODE7CONVDONE:1;
      uint64_t NODE7IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE7DBCCNTRIR:4;
      uint64_t NODE7DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE7STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE8IRQORARMED:1;
      uint64_t NODE8IRQIRARMED:1;
      uint64_t NODE8DBCIRQ:4;
      uint64_t NODE8SEMODE:1;
      uint64_t NODE8AUTOEN:1;
      uint64_t NODE8ADCMUX:6;
      uint64_t NODE8ATTEN:1;
      uint64_t NODE8CNVDONEARMED:1;
      uint64_t NODE8DLYA2N:12;
      uint64_t NODE8DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE8CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE8THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE8THRHIGH:12;
      uint64_t NODE8ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE8CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE8ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE8THRLOWEXCD:1;
      uint64_t NODE8THRHIGHEXCD:1;
      uint64_t NODE8CONVDONE:1;
      uint64_t NODE8IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE8DBCCNTRIR:4;
      uint64_t NODE8DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE8STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE9IRQORARMED:1;
      uint64_t NODE9IRQIRARMED:1;
      uint64_t NODE9DBCIRQ:4;
      uint64_t NODE9SEMODE:1;
      uint64_t NODE9AUTOEN:1;
      uint64_t NODE9ADCMUX:6;
      uint64_t NODE9ATTEN:1;
      uint64_t NODE9CNVDONEARMED:1;
      uint64_t NODE9DLYA2N:12;
      uint64_t NODE9DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE9CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE9THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE9THRHIGH:12;
      uint64_t NODE9ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE9CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE9ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE9THRLOWEXCD:1;
      uint64_t NODE9THRHIGHEXCD:1;
      uint64_t NODE9CONVDONE:1;
      uint64_t NODE9IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE9DBCCNTRIR:4;
      uint64_t NODE9DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE9STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE10IRQORARMED:1;
      uint64_t NODE10IRQIRARMED:1;
      uint64_t NODE10DBCIRQ:4;
      uint64_t NODE10SEMODE:1;
      uint64_t NODE10AUTOEN:1;
      uint64_t NODE10ADCMUX:6;
      uint64_t NODE10ATTEN:1;
      uint64_t NODE10CNVDONEARMED:1;
      uint64_t NODE10DLYA2N:12;
      uint64_t NODE10DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE10CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE10THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE10THRHIGH:12;
      uint64_t NODE10ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE10CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE10ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE10THRLOWEXCD:1;
      uint64_t NODE10THRHIGHEXCD:1;
      uint64_t NODE10CONVDONE:1;
      uint64_t NODE10IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE10DBCCNTRIR:4;
      uint64_t NODE10DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE10STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE11IRQORARMED:1;
      uint64_t NODE11IRQIRARMED:1;
      uint64_t NODE11DBCIRQ:4;
      uint64_t NODE11SEMODE:1;
      uint64_t NODE11AUTOEN:1;
      uint64_t NODE11ADCMUX:6;
      uint64_t NODE11ATTEN:1;
      uint64_t NODE11CNVDONEARMED:1;
      uint64_t NODE11DLYA2N:12;
      uint64_t NODE11DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE11CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE11THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE11THRHIGH:12;
      uint64_t NODE11ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE11CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE11ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE11THRLOWEXCD:1;
      uint64_t NODE11THRHIGHEXCD:1;
      uint64_t NODE11CONVDONE:1;
      uint64_t NODE11IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE11DBCCNTRIR:4;
      uint64_t NODE11DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE11STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE12IRQORARMED:1;
      uint64_t NODE12IRQIRARMED:1;
      uint64_t NODE12DBCIRQ:4;
      uint64_t NODE12SEMODE:1;
      uint64_t NODE12AUTOEN:1;
      uint64_t NODE12ADCMUX:6;
      uint64_t NODE12ATTEN:1;
      uint64_t NODE12CNVDONEARMED:1;
      uint64_t NODE12DLYA2N:12;
      uint64_t NODE12DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE12CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE12THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE12THRHIGH:12;
      uint64_t NODE12ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE12CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE12ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE12THRLOWEXCD:1;
      uint64_t NODE12THRHIGHEXCD:1;
      uint64_t NODE12CONVDONE:1;
      uint64_t NODE12IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE12DBCCNTRIR:4;
      uint64_t NODE12DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE12STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE13IRQORARMED:1;
      uint64_t NODE13IRQIRARMED:1;
      uint64_t NODE13DBCIRQ:4;
      uint64_t NODE13SEMODE:1;
      uint64_t NODE13AUTOEN:1;
      uint64_t NODE13ADCMUX:6;
      uint64_t NODE13ATTEN:1;
      uint64_t NODE13CNVDONEARMED:1;
      uint64_t NODE13DLYA2N:12;
      uint64_t NODE13DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE13CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE13THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE13THRHIGH:12;
      uint64_t NODE13ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE13CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE13ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE13THRLOWEXCD:1;
      uint64_t NODE13THRHIGHEXCD:1;
      uint64_t NODE13CONVDONE:1;
      uint64_t NODE13IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE13DBCCNTRIR:4;
      uint64_t NODE13DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE13STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE14IRQORARMED:1;
      uint64_t NODE14IRQIRARMED:1;
      uint64_t NODE14DBCIRQ:4;
      uint64_t NODE14SEMODE:1;
      uint64_t NODE14AUTOEN:1;
      uint64_t NODE14ADCMUX:6;
      uint64_t NODE14ATTEN:1;
      uint64_t NODE14CNVDONEARMED:1;
      uint64_t NODE14DLYA2N:12;
      uint64_t NODE14DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE14CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE14THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE14THRHIGH:12;
      uint64_t NODE14ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE14CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE14ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE14THRLOWEXCD:1;
      uint64_t NODE14THRHIGHEXCD:1;
      uint64_t NODE14CONVDONE:1;
      uint64_t NODE14IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE14DBCCNTRIR:4;
      uint64_t NODE14DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE14STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE15IRQORARMED:1;
      uint64_t NODE15IRQIRARMED:1;
      uint64_t NODE15DBCIRQ:4;
      uint64_t NODE15SEMODE:1;
      uint64_t NODE15AUTOEN:1;
      uint64_t NODE15ADCMUX:6;
      uint64_t NODE15ATTEN:1;
      uint64_t NODE15CNVDONEARMED:1;
      uint64_t NODE15DLYA2N:12;
      uint64_t NODE15DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE15CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE15THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE15THRHIGH:12;
      uint64_t NODE15ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE15CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE15ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE15THRLOWEXCD:1;
      uint64_t NODE15THRHIGHEXCD:1;
      uint64_t NODE15CONVDONE:1;
      uint64_t NODE15IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE15DBCCNTRIR:4;
      uint64_t NODE15DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE15STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE16IRQORARMED:1;
      uint64_t NODE16IRQIRARMED:1;
      uint64_t NODE16DBCIRQ:4;
      uint64_t NODE16SEMODE:1;
      uint64_t NODE16AUTOEN:1;
      uint64_t NODE16ADCMUX:6;
      uint64_t NODE16ATTEN:1;
      uint64_t NODE16CNVDONEARMED:1;
      uint64_t NODE16DLYA2N:12;
      uint64_t NODE16DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE16CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE16THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE16THRHIGH:12;
      uint64_t NODE16ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE16CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE16ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE16THRLOWEXCD:1;
      uint64_t NODE16THRHIGHEXCD:1;
      uint64_t NODE16CONVDONE:1;
      uint64_t NODE16IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE16DBCCNTRIR:4;
      uint64_t NODE16DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE16STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE17IRQORARMED:1;
      uint64_t NODE17IRQIRARMED:1;
      uint64_t NODE17DBCIRQ:4;
      uint64_t NODE17SEMODE:1;
      uint64_t NODE17AUTOEN:1;
      uint64_t NODE17ADCMUX:6;
      uint64_t NODE17ATTEN:1;
      uint64_t NODE17CNVDONEARMED:1;
      uint64_t NODE17DLYA2N:12;
      uint64_t NODE17DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE17CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE17THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE17THRHIGH:12;
      uint64_t NODE17ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE17CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE17ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE17THRLOWEXCD:1;
      uint64_t NODE17THRHIGHEXCD:1;
      uint64_t NODE17CONVDONE:1;
      uint64_t NODE17IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE17DBCCNTRIR:4;
      uint64_t NODE17DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE17STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE18IRQORARMED:1;
      uint64_t NODE18IRQIRARMED:1;
      uint64_t NODE18DBCIRQ:4;
      uint64_t NODE18SEMODE:1;
      uint64_t NODE18AUTOEN:1;
      uint64_t NODE18ADCMUX:6;
      uint64_t NODE18ATTEN:1;
      uint64_t NODE18CNVDONEARMED:1;
      uint64_t NODE18DLYA2N:12;
      uint64_t NODE18DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE18CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE18THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE18THRHIGH:12;
      uint64_t NODE18ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE18CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE18ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE18THRLOWEXCD:1;
      uint64_t NODE18THRHIGHEXCD:1;
      uint64_t NODE18CONVDONE:1;
      uint64_t NODE18IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE18DBCCNTRIR:4;
      uint64_t NODE18DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE18STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE19IRQORARMED:1;
      uint64_t NODE19IRQIRARMED:1;
      uint64_t NODE19DBCIRQ:4;
      uint64_t NODE19SEMODE:1;
      uint64_t NODE19AUTOEN:1;
      uint64_t NODE19ADCMUX:6;
      uint64_t NODE19ATTEN:1;
      uint64_t NODE19CNVDONEARMED:1;
      uint64_t NODE19DLYA2N:12;
      uint64_t NODE19DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE19CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE19THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE19THRHIGH:12;
      uint64_t NODE19ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE19CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE19ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE19THRLOWEXCD:1;
      uint64_t NODE19THRHIGHEXCD:1;
      uint64_t NODE19CONVDONE:1;
      uint64_t NODE19IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE19DBCCNTRIR:4;
      uint64_t NODE19DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE19STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE20IRQORARMED:1;
      uint64_t NODE20IRQIRARMED:1;
      uint64_t NODE20DBCIRQ:4;
      uint64_t NODE20SEMODE:1;
      uint64_t NODE20AUTOEN:1;
      uint64_t NODE20ADCMUX:6;
      uint64_t NODE20ATTEN:1;
      uint64_t NODE20CNVDONEARMED:1;
      uint64_t NODE20DLYA2N:12;
      uint64_t NODE20DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE20CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE20THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE20THRHIGH:12;
      uint64_t NODE20ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE20CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE20ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE20THRLOWEXCD:1;
      uint64_t NODE20THRHIGHEXCD:1;
      uint64_t NODE20CONVDONE:1;
      uint64_t NODE20IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE20DBCCNTRIR:4;
      uint64_t NODE20DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE20STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE21IRQORARMED:1;
      uint64_t NODE21IRQIRARMED:1;
      uint64_t NODE21DBCIRQ:4;
      uint64_t NODE21SEMODE:1;
      uint64_t NODE21AUTOEN:1;
      uint64_t NODE21ADCMUX:6;
      uint64_t NODE21ATTEN:1;
      uint64_t NODE21CNVDONEARMED:1;
      uint64_t NODE21DLYA2N:12;
      uint64_t NODE21DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE21CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE21THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE21THRHIGH:12;
      uint64_t NODE21ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE21CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE21ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE21THRLOWEXCD:1;
      uint64_t NODE21THRHIGHEXCD:1;
      uint64_t NODE21CONVDONE:1;
      uint64_t NODE21IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE21DBCCNTRIR:4;
      uint64_t NODE21DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE21STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE22IRQORARMED:1;
      uint64_t NODE22IRQIRARMED:1;
      uint64_t NODE22DBCIRQ:4;
      uint64_t NODE22SEMODE:1;
      uint64_t NODE22AUTOEN:1;
      uint64_t NODE22ADCMUX:6;
      uint64_t NODE22ATTEN:1;
      uint64_t NODE22CNVDONEARMED:1;
      uint64_t NODE22DLYA2N:12;
      uint64_t NODE22DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE22CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE22THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE22THRHIGH:12;
      uint64_t NODE22ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE22CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE22ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE22THRLOWEXCD:1;
      uint64_t NODE22THRHIGHEXCD:1;
      uint64_t NODE22CONVDONE:1;
      uint64_t NODE22IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE22DBCCNTRIR:4;
      uint64_t NODE22DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE22STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE23IRQORARMED:1;
      uint64_t NODE23IRQIRARMED:1;
      uint64_t NODE23DBCIRQ:4;
      uint64_t NODE23SEMODE:1;
      uint64_t NODE23AUTOEN:1;
      uint64_t NODE23ADCMUX:6;
      uint64_t NODE23ATTEN:1;
      uint64_t NODE23CNVDONEARMED:1;
      uint64_t NODE23DLYA2N:12;
      uint64_t NODE23DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE23CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE23THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE23THRHIGH:12;
      uint64_t NODE23ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE23CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE23ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE23THRLOWEXCD:1;
      uint64_t NODE23THRHIGHEXCD:1;
      uint64_t NODE23CONVDONE:1;
      uint64_t NODE23IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE23DBCCNTRIR:4;
      uint64_t NODE23DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE23STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE24IRQORARMED:1;
      uint64_t NODE24IRQIRARMED:1;
      uint64_t NODE24DBCIRQ:4;
      uint64_t NODE24SEMODE:1;
      uint64_t NODE24AUTOEN:1;
      uint64_t NODE24ADCMUX:6;
      uint64_t NODE24ATTEN:1;
      uint64_t NODE24CNVDONEARMED:1;
      uint64_t NODE24DLYA2N:12;
      uint64_t NODE24DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE24CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE24THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE24THRHIGH:12;
      uint64_t NODE24ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE24CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE24ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE24THRLOWEXCD:1;
      uint64_t NODE24THRHIGHEXCD:1;
      uint64_t NODE24CONVDONE:1;
      uint64_t NODE24IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE24DBCCNTRIR:4;
      uint64_t NODE24DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE24STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE25IRQORARMED:1;
      uint64_t NODE25IRQIRARMED:1;
      uint64_t NODE25DBCIRQ:4;
      uint64_t NODE25SEMODE:1;
      uint64_t NODE25AUTOEN:1;
      uint64_t NODE25ADCMUX:6;
      uint64_t NODE25ATTEN:1;
      uint64_t NODE25CNVDONEARMED:1;
      uint64_t NODE25DLYA2N:12;
      uint64_t NODE25DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE25CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE25THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE25THRHIGH:12;
      uint64_t NODE25ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE25CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE25ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE25THRLOWEXCD:1;
      uint64_t NODE25THRHIGHEXCD:1;
      uint64_t NODE25CONVDONE:1;
      uint64_t NODE25IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE25DBCCNTRIR:4;
      uint64_t NODE25DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE25STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE26IRQORARMED:1;
      uint64_t NODE26IRQIRARMED:1;
      uint64_t NODE26DBCIRQ:4;
      uint64_t NODE26SEMODE:1;
      uint64_t NODE26AUTOEN:1;
      uint64_t NODE26ADCMUX:6;
      uint64_t NODE26ATTEN:1;
      uint64_t NODE26CNVDONEARMED:1;
      uint64_t NODE26DLYA2N:12;
      uint64_t NODE26DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE26CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE26THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE26THRHIGH:12;
      uint64_t NODE26ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE26CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE26ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE26THRLOWEXCD:1;
      uint64_t NODE26THRHIGHEXCD:1;
      uint64_t NODE26CONVDONE:1;
      uint64_t NODE26IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE26DBCCNTRIR:4;
      uint64_t NODE26DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE26STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE27IRQORARMED:1;
      uint64_t NODE27IRQIRARMED:1;
      uint64_t NODE27DBCIRQ:4;
      uint64_t NODE27SEMODE:1;
      uint64_t NODE27AUTOEN:1;
      uint64_t NODE27ADCMUX:6;
      uint64_t NODE27ATTEN:1;
      uint64_t NODE27CNVDONEARMED:1;
      uint64_t NODE27DLYA2N:12;
      uint64_t NODE27DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE27CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE27THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE27THRHIGH:12;
      uint64_t NODE27ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE27CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE27ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE27THRLOWEXCD:1;
      uint64_t NODE27THRHIGHEXCD:1;
      uint64_t NODE27CONVDONE:1;
      uint64_t NODE27IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE27DBCCNTRIR:4;
      uint64_t NODE27DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE27STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE28IRQORARMED:1;
      uint64_t NODE28IRQIRARMED:1;
      uint64_t NODE28DBCIRQ:4;
      uint64_t NODE28SEMODE:1;
      uint64_t NODE28AUTOEN:1;
      uint64_t NODE28ADCMUX:6;
      uint64_t NODE28ATTEN:1;
      uint64_t NODE28CNVDONEARMED:1;
      uint64_t NODE28DLYA2N:12;
      uint64_t NODE28DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE28CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE28THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE28THRHIGH:12;
      uint64_t NODE28ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE28CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE28ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE28THRLOWEXCD:1;
      uint64_t NODE28THRHIGHEXCD:1;
      uint64_t NODE28CONVDONE:1;
      uint64_t NODE28IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE28DBCCNTRIR:4;
      uint64_t NODE28DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE28STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE29IRQORARMED:1;
      uint64_t NODE29IRQIRARMED:1;
      uint64_t NODE29DBCIRQ:4;
      uint64_t NODE29SEMODE:1;
      uint64_t NODE29AUTOEN:1;
      uint64_t NODE29ADCMUX:6;
      uint64_t NODE29ATTEN:1;
      uint64_t NODE29CNVDONEARMED:1;
      uint64_t NODE29DLYA2N:12;
      uint64_t NODE29DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE29CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE29THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE29THRHIGH:12;
      uint64_t NODE29ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE29CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE29ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE29THRLOWEXCD:1;
      uint64_t NODE29THRHIGHEXCD:1;
      uint64_t NODE29CONVDONE:1;
      uint64_t NODE29IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE29DBCCNTRIR:4;
      uint64_t NODE29DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE29STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE30IRQORARMED:1;
      uint64_t NODE30IRQIRARMED:1;
      uint64_t NODE30DBCIRQ:4;
      uint64_t NODE30SEMODE:1;
      uint64_t NODE30AUTOEN:1;
      uint64_t NODE30ADCMUX:6;
      uint64_t NODE30ATTEN:1;
      uint64_t NODE30CNVDONEARMED:1;
      uint64_t NODE30DLYA2N:12;
      uint64_t NODE30DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE30CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE30THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE30THRHIGH:12;
      uint64_t NODE30ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE30CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE30ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE30THRLOWEXCD:1;
      uint64_t NODE30THRHIGHEXCD:1;
      uint64_t NODE30CONVDONE:1;
      uint64_t NODE30IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE30DBCCNTRIR:4;
      uint64_t NODE30DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE30STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE31IRQORARMED:1;
      uint64_t NODE31IRQIRARMED:1;
      uint64_t NODE31DBCIRQ:4;
      uint64_t NODE31SEMODE:1;
      uint64_t NODE31AUTOEN:1;
      uint64_t NODE31ADCMUX:6;
      uint64_t NODE31ATTEN:1;
      uint64_t NODE31CNVDONEARMED:1;
      uint64_t NODE31DLYA2N:12;
      uint64_t NODE31DLYM2A:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE31CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE31THRLOW:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE31THRHIGH:12;
      uint64_t NODE31ADCSMPCYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE31CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODE31ADCWORD:12;
      uint64_t reservedSpace0:4;
      uint64_t NODE31THRLOWEXCD:1;
      uint64_t NODE31THRHIGHEXCD:1;
      uint64_t NODE31CONVDONE:1;
      uint64_t NODE31IREXCD:1;
      uint64_t reservedSpace1:4;
      uint64_t NODE31DBCCNTRIR:4;
      uint64_t NODE31DBCCNTROR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODE31STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCIRQFLAG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCIRQFLAG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRADCIRQFLAG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCIRQFLAGCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODEACTIVE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODEACTIVE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NODEONESHOT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NODEONESHOT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ADCENABLE:1;
      uint64_t ADCENAPTAT:1;
      uint64_t reservedSpace0:1;
      uint64_t ADCDATACLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCCTRL;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ONESHOTDONEARMED:1;
      uint64_t ACTIVEDONEARMED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCIRQEN;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLRONESHOTDONE:1;
      uint64_t CLRACTIVEDONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCIRQCLR;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ONESHOTDONE:1;
      uint64_t ACTIVEDONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCIRQSTATUS;

};

#define ADC_CTRL_ARGON (*(volatile struct ADC_CTRL_ARGON_tag *) 0x4000b000)

struct S3_CTRL_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3FREQS0B0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3FREQS0B0;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NADCSAMPS0B0:2;
      uint64_t ADCPERS0B0:4;
      uint64_t BLINETOLS0B0:2;
      uint64_t BSPARE0S0B0:1;
      uint64_t BSPARE1S0B0:1;
      uint64_t BSPARE2S0B0:1;
      uint64_t BSPARE3S0B0:1;
      uint64_t BSPARE4S0B0:1;
      uint64_t BLINETHRESHCFGS0B0:2;
      uint64_t ALERTPOLS0B0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3SENSECFGS0B0;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ALERTTHRESHS0B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3ALRTS0B0;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BLINETHRESHS0B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BLINES0B0;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REPRATES0B0:5;
      uint64_t reservedSpace0:3;
      uint64_t REPCNTS0B0:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3REPCFGS0B0;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT0S0B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA0S0B0;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT1S0B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA1S0B0;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT2S0B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA2S0B0;

  uint8_t res7[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT3S0B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA3S0B0;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3BLINECNTUPS0B0:7;
      uint64_t reservedSpace0:1;
      uint64_t S3BLINECNTDNS0B0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTBLINECNTS0B0;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3FREQS0B1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3FREQS0B1;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NADCSAMPS0B1:2;
      uint64_t ADCPERS0B1:4;
      uint64_t BLINETOLS0B1:2;
      uint64_t BSPARE0S0B1:1;
      uint64_t BSPARE1S0B1:1;
      uint64_t BSPARE2S0B1:1;
      uint64_t BSPARE3S0B1:1;
      uint64_t BSPARE4S0B1:1;
      uint64_t BLINETHRESHCFGS0B1:2;
      uint64_t ALERTPOLS0B1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3SENSECFGS0B1;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ALERTTHRESHS0B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3ALRTS0B1;

  uint8_t res12[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BLINETHRESHS0B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BLINES0B1;

  uint8_t res13[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REPRATES0B1:5;
      uint64_t reservedSpace0:3;
      uint64_t REPCNTS0B1:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3REPCFGS0B1;

  uint8_t res14[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT0S0B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA0S0B1;

  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT1S0B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA1S0B1;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT2S0B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA2S0B1;

  uint8_t res17[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT3S0B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA3S0B1;

  uint8_t res18[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3BLINECNTUPS0B1:7;
      uint64_t reservedSpace0:1;
      uint64_t S3BLINECNTDNS0B1:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTBLINECNTS0B1;

  uint8_t res19[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3FREQS0B2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3FREQS0B2;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NADCSAMPS0B2:2;
      uint64_t ADCPERS0B2:4;
      uint64_t BLINETOLS0B2:2;
      uint64_t BSPARE0S0B2:1;
      uint64_t BSPARE1S0B2:1;
      uint64_t BSPARE2S0B2:1;
      uint64_t BSPARE3S0B2:1;
      uint64_t BSPARE4S0B2:1;
      uint64_t BLINETHRESHCFGS0B2:2;
      uint64_t ALERTPOLS0B2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3SENSECFGS0B2;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ALERTTHRESHS0B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3ALRTS0B2;

  uint8_t res22[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BLINETHRESHS0B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BLINES0B2;

  uint8_t res23[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REPRATES0B2:5;
      uint64_t reservedSpace0:3;
      uint64_t REPCNTS0B2:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3REPCFGS0B2;

  uint8_t res24[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT0S0B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA0S0B2;

  uint8_t res25[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT1S0B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA1S0B2;

  uint8_t res26[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT2S0B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA2S0B2;

  uint8_t res27[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT3S0B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA3S0B2;

  uint8_t res28[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3BLINECNTUPS0B2:7;
      uint64_t reservedSpace0:1;
      uint64_t S3BLINECNTDNS0B2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTBLINECNTS0B2;

  uint8_t res29[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CHANRXS0:3;
      uint64_t reservedSpace0:1;
      uint64_t TXSLEWS0:4;
      uint64_t ALERTS0:3;
      uint64_t reservedSpace1:1;
      uint64_t BLINES0:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3PINCFGS0;

  uint8_t res30[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NUMWAITS0:6;
      uint64_t CHANTXS0:2;
      uint64_t GAINS0:3;
      uint64_t reservedSpace0:1;
      uint64_t LPFS0:3;
      uint64_t BSPARE5S0B2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NUMWAITS0;

  uint8_t res31[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3FREQS1B0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3FREQS1B0;

  uint8_t res32[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NADCSAMPS1B0:2;
      uint64_t ADCPERS1B0:4;
      uint64_t BLINETOLS1B0:2;
      uint64_t BSPARE0S1B0:1;
      uint64_t BSPARE1S1B0:1;
      uint64_t BSPARE2S1B0:1;
      uint64_t BSPARE3S1B0:1;
      uint64_t BSPARE4S1B0:1;
      uint64_t BLINETHRESHCFGS1B0:2;
      uint64_t ALERTPOLS1B0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3SENSECFGS1B0;

  uint8_t res33[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ALERTTHRESHS1B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3ALRTS1B0;

  uint8_t res34[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BLINETHRESHS1B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BLINES1B0;

  uint8_t res35[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REPRATES1B0:5;
      uint64_t reservedSpace0:3;
      uint64_t REPCNTS1B0:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3REPCFGS1B0;

  uint8_t res36[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT0S1B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA0S1B0;

  uint8_t res37[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT1S1B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA1S1B0;

  uint8_t res38[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT2S1B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA2S1B0;

  uint8_t res39[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT3S1B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA3S1B0;

  uint8_t res40[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3BLINECNTUPS1B0:7;
      uint64_t reservedSpace0:1;
      uint64_t S3BLINECNTDNS1B0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTBLINECNTS1B0;

  uint8_t res41[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3FREQS1B1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3FREQS1B1;

  uint8_t res42[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NADCSAMPS1B1:2;
      uint64_t ADCPERS1B1:4;
      uint64_t BLINETOLS1B1:2;
      uint64_t BSPARE0S1B1:1;
      uint64_t BSPARE1S1B1:1;
      uint64_t BSPARE2S1B1:1;
      uint64_t BSPARE3S1B1:1;
      uint64_t BSPARE4S1B1:1;
      uint64_t BLINETHRESHCFGS1B1:2;
      uint64_t ALERTPOLS1B1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3SENSECFGS1B1;

  uint8_t res43[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ALERTTHRESHS1B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3ALRTS1B1;

  uint8_t res44[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BLINETHRESHS1B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BLINES1B1;

  uint8_t res45[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REPRATES1B1:5;
      uint64_t reservedSpace0:3;
      uint64_t REPCNTS1B1:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3REPCFGS1B1;

  uint8_t res46[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT0S1B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA0S1B1;

  uint8_t res47[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT1S1B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA1S1B1;

  uint8_t res48[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT2S1B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA2S1B1;

  uint8_t res49[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT3S1B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA3S1B1;

  uint8_t res50[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3BLINECNTUPS1B1:7;
      uint64_t reservedSpace0:1;
      uint64_t S3BLINECNTDNS1B1:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTBLINECNTS1B1;

  uint8_t res51[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3FREQS1B2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3FREQS1B2;

  uint8_t res52[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NADCSAMPS1B2:2;
      uint64_t ADCPERS1B2:4;
      uint64_t BLINETOLS1B2:2;
      uint64_t BSPARE0S1B2:1;
      uint64_t BSPARE1S1B2:1;
      uint64_t BSPARE2S1B2:1;
      uint64_t BSPARE3S1B2:1;
      uint64_t BSPARE4S1B2:1;
      uint64_t BLINETHRESHCFGS1B2:2;
      uint64_t ALERTPOLS1B2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3SENSECFGS1B2;

  uint8_t res53[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ALERTTHRESHS1B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3ALRTS1B2;

  uint8_t res54[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BLINETHRESHS1B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BLINES1B2;

  uint8_t res55[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REPRATES1B2:5;
      uint64_t reservedSpace0:3;
      uint64_t REPCNTS1B2:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3REPCFGS1B2;

  uint8_t res56[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT0S1B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA0S1B2;

  uint8_t res57[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT1S1B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA1S1B2;

  uint8_t res58[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT2S1B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA2S1B2;

  uint8_t res59[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT3S1B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA3S1B2;

  uint8_t res60[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3BLINECNTUPS1B2:7;
      uint64_t reservedSpace0:1;
      uint64_t S3BLINECNTDNS1B2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTBLINECNTS1B2;

  uint8_t res61[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CHANRXS1:3;
      uint64_t reservedSpace0:1;
      uint64_t TXSLEWS1:4;
      uint64_t ALERTS1:3;
      uint64_t reservedSpace1:1;
      uint64_t BLINES1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3PINCFGS1;

  uint8_t res62[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NUMWAITS1:6;
      uint64_t CHANTXS1:2;
      uint64_t GAINS1:3;
      uint64_t reservedSpace0:1;
      uint64_t LPFS1:3;
      uint64_t BSPARE5S1B2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NUMWAITS1;

  uint8_t res63[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3FREQS2B0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3FREQS2B0;

  uint8_t res64[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NADCSAMPS2B0:2;
      uint64_t ADCPERS2B0:4;
      uint64_t BLINETOLS2B0:2;
      uint64_t BSPARE0S2B0:1;
      uint64_t BSPARE1S2B0:1;
      uint64_t BSPARE2S2B0:1;
      uint64_t BSPARE3S2B0:1;
      uint64_t BSPARE4S2B0:1;
      uint64_t BLINETHRESHCFGS2B0:2;
      uint64_t ALERTPOLS2B0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3SENSECFGS2B0;

  uint8_t res65[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ALERTTHRESHS2B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3ALRTS2B0;

  uint8_t res66[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BLINETHRESHS2B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BLINES2B0;

  uint8_t res67[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REPRATES2B0:5;
      uint64_t reservedSpace0:3;
      uint64_t REPCNTS2B0:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3REPCFGS2B0;

  uint8_t res68[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT0S2B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA0S2B0;

  uint8_t res69[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT1S2B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA1S2B0;

  uint8_t res70[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT2S2B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA2S2B0;

  uint8_t res71[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT3S2B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA3S2B0;

  uint8_t res72[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3BLINECNTUPS2B0:7;
      uint64_t reservedSpace0:1;
      uint64_t S3BLINECNTDNS2B0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTBLINECNTS2B0;

  uint8_t res73[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3FREQS2B1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3FREQS2B1;

  uint8_t res74[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NADCSAMPS2B1:2;
      uint64_t ADCPERS2B1:4;
      uint64_t BLINETOLS2B1:2;
      uint64_t BSPARE0S2B1:1;
      uint64_t BSPARE1S2B1:1;
      uint64_t BSPARE2S2B1:1;
      uint64_t BSPARE3S2B1:1;
      uint64_t BSPARE4S2B1:1;
      uint64_t BLINETHRESHCFGS2B1:2;
      uint64_t ALERTPOLS2B1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3SENSECFGS2B1;

  uint8_t res75[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ALERTTHRESHS2B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3ALRTS2B1;

  uint8_t res76[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BLINETHRESHS2B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BLINES2B1;

  uint8_t res77[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REPRATES2B1:5;
      uint64_t reservedSpace0:3;
      uint64_t REPCNTS2B1:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3REPCFGS2B1;

  uint8_t res78[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT0S2B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA0S2B1;

  uint8_t res79[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT1S2B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA1S2B1;

  uint8_t res80[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT2S2B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA2S2B1;

  uint8_t res81[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT3S2B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA3S2B1;

  uint8_t res82[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3BLINECNTUPS2B1:7;
      uint64_t reservedSpace0:1;
      uint64_t S3BLINECNTDNS2B1:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTBLINECNTS2B1;

  uint8_t res83[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3FREQS2B2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3FREQS2B2;

  uint8_t res84[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NADCSAMPS2B2:2;
      uint64_t ADCPERS2B2:4;
      uint64_t BLINETOLS2B2:2;
      uint64_t BSPARE0S2B2:1;
      uint64_t BSPARE1S2B2:1;
      uint64_t BSPARE2S2B2:1;
      uint64_t BSPARE3S2B2:1;
      uint64_t BSPARE4S2B2:1;
      uint64_t BLINETHRESHCFGS2B2:2;
      uint64_t ALERTPOLS2B2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3SENSECFGS2B2;

  uint8_t res85[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ALERTTHRESHS2B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3ALRTS2B2;

  uint8_t res86[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BLINETHRESHS2B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BLINES2B2;

  uint8_t res87[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REPRATES2B2:5;
      uint64_t reservedSpace0:3;
      uint64_t REPCNTS2B2:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3REPCFGS2B2;

  uint8_t res88[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT0S2B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA0S2B2;

  uint8_t res89[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT1S2B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA1S2B2;

  uint8_t res90[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT2S2B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA2S2B2;

  uint8_t res91[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT3S2B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA3S2B2;

  uint8_t res92[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3BLINECNTUPS2B2:7;
      uint64_t reservedSpace0:1;
      uint64_t S3BLINECNTDNS2B2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTBLINECNTS2B2;

  uint8_t res93[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CHANRXS2:3;
      uint64_t reservedSpace0:1;
      uint64_t TXSLEWS2:4;
      uint64_t ALERTS2:3;
      uint64_t reservedSpace1:1;
      uint64_t BLINES2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3PINCFGS2;

  uint8_t res94[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NUMWAITS2:6;
      uint64_t CHANTXS2:2;
      uint64_t GAINS2:3;
      uint64_t reservedSpace0:1;
      uint64_t LPFS2:3;
      uint64_t BSPARE5S2B2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NUMWAITS2;

  uint8_t res95[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3FREQS3B0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3FREQS3B0;

  uint8_t res96[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NADCSAMPS3B0:2;
      uint64_t ADCPERS3B0:4;
      uint64_t BLINETOLS3B0:2;
      uint64_t BSPARE0S3B0:1;
      uint64_t BSPARE1S3B0:1;
      uint64_t BSPARE2S3B0:1;
      uint64_t BSPARE3S3B0:1;
      uint64_t BSPARE4S3B0:1;
      uint64_t BLINETHRESHCFGS3B0:2;
      uint64_t ALERTPOLS3B0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3SENSECFGS3B0;

  uint8_t res97[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ALERTTHRESHS3B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3ALRTS3B0;

  uint8_t res98[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BLINETHRESHS3B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BLINES3B0;

  uint8_t res99[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REPRATES3B0:5;
      uint64_t reservedSpace0:3;
      uint64_t REPCNTS3B0:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3REPCFGS3B0;

  uint8_t res100[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT0S3B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA0S3B0;

  uint8_t res101[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT1S3B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA1S3B0;

  uint8_t res102[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT2S3B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA2S3B0;

  uint8_t res103[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT3S3B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA3S3B0;

  uint8_t res104[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3BLINECNTUPS3B0:7;
      uint64_t reservedSpace0:1;
      uint64_t S3BLINECNTDNS3B0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTBLINECNTS3B0;

  uint8_t res105[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3FREQS3B1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3FREQS3B1;

  uint8_t res106[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NADCSAMPS3B1:2;
      uint64_t ADCPERS3B1:4;
      uint64_t BLINETOLS3B1:2;
      uint64_t BSPARE0S3B1:1;
      uint64_t BSPARE1S3B1:1;
      uint64_t BSPARE2S3B1:1;
      uint64_t BSPARE3S3B1:1;
      uint64_t BSPARE4S3B1:1;
      uint64_t BLINETHRESHCFGS3B1:2;
      uint64_t ALERTPOLS3B1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3SENSECFGS3B1;

  uint8_t res107[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ALERTTHRESHS3B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3ALRTS3B1;

  uint8_t res108[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BLINETHRESHS3B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BLINES3B1;

  uint8_t res109[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REPRATES3B1:5;
      uint64_t reservedSpace0:3;
      uint64_t REPCNTS3B1:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3REPCFGS3B1;

  uint8_t res110[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT0S3B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA0S3B1;

  uint8_t res111[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT1S3B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA1S3B1;

  uint8_t res112[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT2S3B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA2S3B1;

  uint8_t res113[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT3S3B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA3S3B1;

  uint8_t res114[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3BLINECNTUPS3B1:7;
      uint64_t reservedSpace0:1;
      uint64_t S3BLINECNTDNS3B1:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTBLINECNTS3B1;

  uint8_t res115[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3FREQS3B2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3FREQS3B2;

  uint8_t res116[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NADCSAMPS3B2:2;
      uint64_t ADCPERS3B2:4;
      uint64_t BLINETOLS3B2:2;
      uint64_t BSPARE0S3B2:1;
      uint64_t BSPARE1S3B2:1;
      uint64_t BSPARE2S3B2:1;
      uint64_t BSPARE3S3B2:1;
      uint64_t BSPARE4S3B2:1;
      uint64_t BLINETHRESHCFGS3B2:2;
      uint64_t ALERTPOLS3B2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3SENSECFGS3B2;

  uint8_t res117[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ALERTTHRESHS3B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3ALRTS3B2;

  uint8_t res118[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BLINETHRESHS3B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BLINES3B2;

  uint8_t res119[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REPRATES3B2:5;
      uint64_t reservedSpace0:3;
      uint64_t REPCNTS3B2:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3REPCFGS3B2;

  uint8_t res120[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT0S3B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA0S3B2;

  uint8_t res121[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT1S3B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA1S3B2;

  uint8_t res122[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT2S3B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA2S3B2;

  uint8_t res123[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT3S3B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA3S3B2;

  uint8_t res124[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3BLINECNTUPS3B2:7;
      uint64_t reservedSpace0:1;
      uint64_t S3BLINECNTDNS3B2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTBLINECNTS3B2;

  uint8_t res125[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CHANRXS3:3;
      uint64_t reservedSpace0:1;
      uint64_t TXSLEWS3:4;
      uint64_t ALERTS3:3;
      uint64_t reservedSpace1:1;
      uint64_t BLINES3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3PINCFGS3;

  uint8_t res126[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NUMWAITS3:6;
      uint64_t CHANTXS3:2;
      uint64_t GAINS3:3;
      uint64_t reservedSpace0:1;
      uint64_t LPFS3:3;
      uint64_t BSPARE5S3B2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NUMWAITS3;

  uint8_t res127[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3FREQS4B0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3FREQS4B0;

  uint8_t res128[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NADCSAMPS4B0:2;
      uint64_t ADCPERS4B0:4;
      uint64_t BLINETOLS4B0:2;
      uint64_t BSPARE0S4B0:1;
      uint64_t BSPARE1S4B0:1;
      uint64_t BSPARE2S4B0:1;
      uint64_t BSPARE3S4B0:1;
      uint64_t BSPARE4S4B0:1;
      uint64_t BLINETHRESHCFGS4B0:2;
      uint64_t ALERTPOLS4B0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3SENSECFGS4B0;

  uint8_t res129[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ALERTTHRESHS4B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3ALRTS4B0;

  uint8_t res130[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BLINETHRESHS4B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BLINES4B0;

  uint8_t res131[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REPRATES4B0:5;
      uint64_t reservedSpace0:3;
      uint64_t REPCNTS4B0:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3REPCFGS4B0;

  uint8_t res132[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT0S4B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA0S4B0;

  uint8_t res133[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT1S4B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA1S4B0;

  uint8_t res134[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT2S4B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA2S4B0;

  uint8_t res135[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT3S4B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA3S4B0;

  uint8_t res136[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3BLINECNTUPS4B0:7;
      uint64_t reservedSpace0:1;
      uint64_t S3BLINECNTDNS4B0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTBLINECNTS4B0;

  uint8_t res137[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3FREQS4B1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3FREQS4B1;

  uint8_t res138[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NADCSAMPS4B1:2;
      uint64_t ADCPERS4B1:4;
      uint64_t BLINETOLS4B1:2;
      uint64_t BSPARE0S4B1:1;
      uint64_t BSPARE1S4B1:1;
      uint64_t BSPARE2S4B1:1;
      uint64_t BSPARE3S4B1:1;
      uint64_t BSPARE4S4B1:1;
      uint64_t BLINETHRESHCFGS4B1:2;
      uint64_t ALERTPOLS4B1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3SENSECFGS4B1;

  uint8_t res139[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ALERTTHRESHS4B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3ALRTS4B1;

  uint8_t res140[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BLINETHRESHS4B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BLINES4B1;

  uint8_t res141[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REPRATES4B1:5;
      uint64_t reservedSpace0:3;
      uint64_t REPCNTS4B1:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3REPCFGS4B1;

  uint8_t res142[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT0S4B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA0S4B1;

  uint8_t res143[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT1S4B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA1S4B1;

  uint8_t res144[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT2S4B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA2S4B1;

  uint8_t res145[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT3S4B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA3S4B1;

  uint8_t res146[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3BLINECNTUPS4B1:7;
      uint64_t reservedSpace0:1;
      uint64_t S3BLINECNTDNS4B1:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTBLINECNTS4B1;

  uint8_t res147[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3FREQS4B2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3FREQS4B2;

  uint8_t res148[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NADCSAMPS4B2:2;
      uint64_t ADCPERS4B2:4;
      uint64_t BLINETOLS4B2:2;
      uint64_t BSPARE0S4B2:1;
      uint64_t BSPARE1S4B2:1;
      uint64_t BSPARE2S4B2:1;
      uint64_t BSPARE3S4B2:1;
      uint64_t BSPARE4S4B2:1;
      uint64_t BLINETHRESHCFGS4B2:2;
      uint64_t ALERTPOLS4B2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3SENSECFGS4B2;

  uint8_t res149[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ALERTTHRESHS4B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3ALRTS4B2;

  uint8_t res150[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BLINETHRESHS4B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BLINES4B2;

  uint8_t res151[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REPRATES4B2:5;
      uint64_t reservedSpace0:3;
      uint64_t REPCNTS4B2:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3REPCFGS4B2;

  uint8_t res152[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT0S4B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA0S4B2;

  uint8_t res153[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT1S4B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA1S4B2;

  uint8_t res154[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT2S4B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA2S4B2;

  uint8_t res155[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT3S4B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA3S4B2;

  uint8_t res156[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3BLINECNTUPS4B2:7;
      uint64_t reservedSpace0:1;
      uint64_t S3BLINECNTDNS4B2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTBLINECNTS4B2;

  uint8_t res157[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CHANRXS4:3;
      uint64_t reservedSpace0:1;
      uint64_t TXSLEWS4:4;
      uint64_t ALERTS4:3;
      uint64_t reservedSpace1:1;
      uint64_t BLINES4:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3PINCFGS4;

  uint8_t res158[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NUMWAITS4:6;
      uint64_t CHANTXS4:2;
      uint64_t GAINS4:3;
      uint64_t reservedSpace0:1;
      uint64_t LPFS4:3;
      uint64_t BSPARE5S4B2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NUMWAITS4;

  uint8_t res159[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3FREQS5B0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3FREQS5B0;

  uint8_t res160[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NADCSAMPS5B0:2;
      uint64_t ADCPERS5B0:4;
      uint64_t BLINETOLS5B0:2;
      uint64_t BSPARE0S5B0:1;
      uint64_t BSPARE1S5B0:1;
      uint64_t BSPARE2S5B0:1;
      uint64_t BSPARE3S5B0:1;
      uint64_t BSPARE4S5B0:1;
      uint64_t BLINETHRESHCFGS5B0:2;
      uint64_t ALERTPOLS5B0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3SENSECFGS5B0;

  uint8_t res161[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ALERTTHRESHS5B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3ALRTS5B0;

  uint8_t res162[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BLINETHRESHS5B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BLINES5B0;

  uint8_t res163[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REPRATES5B0:5;
      uint64_t reservedSpace0:3;
      uint64_t REPCNTS5B0:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3REPCFGS5B0;

  uint8_t res164[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT0S5B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA0S5B0;

  uint8_t res165[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT1S5B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA1S5B0;

  uint8_t res166[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT2S5B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA2S5B0;

  uint8_t res167[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT3S5B0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA3S5B0;

  uint8_t res168[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3BLINECNTUPS5B0:7;
      uint64_t reservedSpace0:1;
      uint64_t S3BLINECNTDNS5B0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTBLINECNTS5B0;

  uint8_t res169[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3FREQS5B1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3FREQS5B1;

  uint8_t res170[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NADCSAMPS5B1:2;
      uint64_t ADCPERS5B1:4;
      uint64_t BLINETOLS5B1:2;
      uint64_t BSPARE0S5B1:1;
      uint64_t BSPARE1S5B1:1;
      uint64_t BSPARE2S5B1:1;
      uint64_t BSPARE3S5B1:1;
      uint64_t BSPARE4S5B1:1;
      uint64_t BLINETHRESHCFGS5B1:2;
      uint64_t ALERTPOLS5B1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3SENSECFGS5B1;

  uint8_t res171[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ALERTTHRESHS5B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3ALRTS5B1;

  uint8_t res172[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BLINETHRESHS5B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BLINES5B1;

  uint8_t res173[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REPRATES5B1:5;
      uint64_t reservedSpace0:3;
      uint64_t REPCNTS5B1:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3REPCFGS5B1;

  uint8_t res174[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT0S5B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA0S5B1;

  uint8_t res175[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT1S5B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA1S5B1;

  uint8_t res176[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT2S5B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA2S5B1;

  uint8_t res177[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT3S5B1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA3S5B1;

  uint8_t res178[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3BLINECNTUPS5B1:7;
      uint64_t reservedSpace0:1;
      uint64_t S3BLINECNTDNS5B1:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTBLINECNTS5B1;

  uint8_t res179[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3FREQS5B2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3FREQS5B2;

  uint8_t res180[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NADCSAMPS5B2:2;
      uint64_t ADCPERS5B2:4;
      uint64_t BLINETOLS5B2:2;
      uint64_t BSPARE0S5B2:1;
      uint64_t BSPARE1S5B2:1;
      uint64_t BSPARE2S5B2:1;
      uint64_t BSPARE3S5B2:1;
      uint64_t BSPARE4S5B2:1;
      uint64_t BLINETHRESHCFGS5B2:2;
      uint64_t ALERTPOLS5B2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3SENSECFGS5B2;

  uint8_t res181[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ALERTTHRESHS5B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3ALRTS5B2;

  uint8_t res182[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BLINETHRESHS5B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BLINES5B2;

  uint8_t res183[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REPRATES5B2:5;
      uint64_t reservedSpace0:3;
      uint64_t REPCNTS5B2:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3REPCFGS5B2;

  uint8_t res184[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT0S5B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA0S5B2;

  uint8_t res185[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT1S5B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA1S5B2;

  uint8_t res186[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT2S5B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA2S5B2;

  uint8_t res187[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT3S5B2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTDATA3S5B2;

  uint8_t res188[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t S3BLINECNTUPS5B2:7;
      uint64_t reservedSpace0:1;
      uint64_t S3BLINECNTDNS5B2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3BURSTBLINECNTS5B2;

  uint8_t res189[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CHANRXS5:3;
      uint64_t reservedSpace0:1;
      uint64_t TXSLEWS5:4;
      uint64_t ALERTS5:3;
      uint64_t reservedSpace1:1;
      uint64_t BLINES5:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) S3PINCFGS5;

  uint8_t res190[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NUMWAITS5:6;
      uint64_t CHANTXS5:2;
      uint64_t GAINS5:3;
      uint64_t reservedSpace0:1;
      uint64_t LPFS5:3;
      uint64_t BSPARE5S5B2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NUMWAITS5;

  uint8_t res191[258];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANSEL:6;
      uint64_t SWENA:1;
      uint64_t AUTORUN:1;
      uint64_t SINGLE:1;
      uint64_t AUTOSTOP:1;
      uint64_t CONTINUOUSBURST:1;
      uint64_t BUSY:1;
      uint64_t S3CTRLMANUALSTART:1;
      uint64_t OVRDS3BIASENA:1;
      uint64_t OVRDS3BIASENAVAL:1;
      uint64_t reservedSpace0:1;
      uint64_t S3ANAENACOUNT:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S3CSR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ALERTIRQENA:6;
      uint64_t SEQDONEIRQENA:1;
      uint64_t PLLERRIRQENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) S3IRQENA;

  uint8_t res192[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ALERTIRQCLR:6;
      uint64_t SEQDONEIRQCLR:1;
      uint64_t PLLERRIRQCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) S3IRQCLR;

  uint8_t res193[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ALERTIRQFLAG:6;
      uint64_t SEQDONEIRQFLAG:1;
      uint64_t PLLERRIRQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) S3IRQFLAG;

  uint8_t res194[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ALERTIRQMASKED:6;
      uint64_t SEQDONEIRQMASKED:1;
      uint64_t PLLERRIRQMASKED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) S3IRQFLAGMASKED;

  uint8_t res195[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSEQ:8;
      uint64_t SEQCNT:8;
      uint64_t S3CTRLREADY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S3AUTO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLLCTRLFASTENA:1;
      uint64_t PLLCTRLFASTENAAUTO:1;
      uint64_t PLLCTRLTESTCTRLENA:1;
      uint64_t PLLCTRLINITLOCKTIME:2;
      uint64_t PLLCTRLWAITLOCKTIME:1;
      uint64_t PLLCTRLRETRYENA:1;
      uint64_t PLLLDONPOR:1;
      uint64_t PLLLOCKST:1;
      uint64_t PLLREFOKST:1;
      uint64_t PLLSASREADYST:1;
      uint64_t PLLVCOBCST:3;
      uint64_t PLLCTRLNPORTIMEOUTST:1;
      uint64_t PLLCTRLSASTIMEOUTST:1;
      uint64_t PLLCTRLLOCKTIMEOUTST:1;
      uint64_t PLLCTRLLOSTLOCKST:1;
      uint64_t PLLCTRLLOSTREFOKST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCTRL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLLEN:1;
      uint64_t PLLPMUEN:1;
      uint64_t PLLSASEN:1;
      uint64_t PLLCDIV:5;
      uint64_t PLLRATIOVALIDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLLTESTCTRL0;

  uint8_t res196[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLLDSMN:7;
      uint64_t PLLDSMF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLTESTCTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLLVCOEN:1;
      uint64_t PLLNDIVEN:1;
      uint64_t PLLDSMEN:1;
      uint64_t PLLPFDCPEN:1;
      uint64_t PLLTESTEN:1;
      uint64_t PLLCPCC:1;
      uint64_t PLLCPOFFSET:1;
      uint64_t PLLSASVCTRMAN:1;
      uint64_t PLLSASVCTRVAL:3;
      uint64_t PLLSASVCTRTH:2;
      uint64_t PLLSASBANDVAL:3;
      uint64_t PLLSASBANDMAN:1;
      uint64_t PLLLFR1:2;
      uint64_t PLLLFC1:2;
      uint64_t PLLLFC2:2;
      uint64_t reservedSpace0:1;
      uint64_t TESTMD:3;
      uint64_t PLLCFG:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLSRVCBITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFEBYPASS:1;
      uint64_t reservedSpace0:15;
      uint64_t AFEPULLDOWN:6;
      uint64_t reservedSpace1:2;
      uint64_t OVRDAFEENA:1;
      uint64_t OVRDAFEENAVAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFETESTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCCLK:2;
      uint64_t reservedSpace0:14;
      uint64_t OVRDADCENA:1;
      uint64_t OVRDADCENAVAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRVTESTENA:1;
      uint64_t reservedSpace0:7;
      uint64_t DRVMMODE:2;
      uint64_t reservedSpace1:6;
      uint64_t DRVMSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRVCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENVMODESEL:1;
      uint64_t ENVTESTENA:1;
      uint64_t ENVTESTSEL:1;
      uint64_t reservedSpace0:13;
      uint64_t OVRDENVENA:1;
      uint64_t OVRDENVENAVAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENVCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BINSTOP:2;
      uint64_t BINSTADDR:5;
      uint64_t BINSTWENA:1;
      uint64_t BINSTWDATA:8;
      uint64_t BINSTUNUSED:3;
      uint64_t reservedSpace0:12;
      uint64_t BINSTEXECUTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BINSTCMD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BINSTRDATA:8;
      uint64_t BINSTRDATAVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BINSTRDATA;

};

#define S3_CTRL (*(volatile struct S3_CTRL_tag *) 0x4000b800)

struct WDTACM4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUNSTS:1;
      uint64_t BRKFLG:1;
      uint64_t WNDFLG:1;
      uint64_t reservedSpace0:5;
      uint64_t WNDMODE:1;
      uint64_t WARNIRQ:1;
      uint64_t SWFLGCLR:1;
      uint64_t reservedSpace1:5;
      uint64_t PRESCALER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  uint8_t res0[1342226432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMMAND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMMAND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLEAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WINPER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDWND;

};

#define WDTACM4 (*(volatile struct WDTACM4_tag *) 0x0)

struct WDTACM4_WDTACM4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUNSTS:1;
      uint64_t BRKFLG:1;
      uint64_t WNDFLG:1;
      uint64_t reservedSpace0:5;
      uint64_t WNDMODE:1;
      uint64_t WARNIRQ:1;
      uint64_t SWFLGCLR:1;
      uint64_t reservedSpace1:5;
      uint64_t PRESCALER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  uint8_t res0[1342226432];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMMAND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMMAND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLEAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WINPER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDWND;

};

#define WDTACM4_WDTACM4 (*(volatile struct WDTACM4_WDTACM4_tag *) 0x4000c000)

struct GPIOA_tag
{
  union
  {
    uint64_t R;
    struct
    {
      uint64_t GPADATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(32))) GPADATA;

  uint8_t res0[992];

  union
  {
    uint64_t R;
    struct
    {
      uint64_t GPBDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(32))) GPBDATA;

  uint8_t res1[2016];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPADIR_0:1;
      uint64_t GPAIE_0:1;
      uint64_t GPARE_0:1;
      uint64_t GPAFE_0:1;
      uint64_t GPACLR_0:1;
      uint64_t GPAACTDET_0:1;
      uint64_t reservedSpace0:2;
      uint64_t GPADIR_1:1;
      uint64_t GPAIE_1:1;
      uint64_t GPARE_1:1;
      uint64_t GPAFE_1:1;
      uint64_t GPACLR_1:1;
      uint64_t GPAACTDET_1:1;
      uint64_t reservedSpace1:2;
      uint64_t GPADIR_2:1;
      uint64_t GPAIE_2:1;
      uint64_t GPARE_2:1;
      uint64_t GPAFE_2:1;
      uint64_t GPACLR_2:1;
      uint64_t GPAACTDET_2:1;
      uint64_t reservedSpace2:2;
      uint64_t GPADIR_3:1;
      uint64_t GPAIE_3:1;
      uint64_t GPARE_3:1;
      uint64_t GPAFE_3:1;
      uint64_t GPACLR_3:1;
      uint64_t GPAACTDET_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPAP03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPADIR_4:1;
      uint64_t GPAIE_4:1;
      uint64_t GPARE_4:1;
      uint64_t GPAFE_4:1;
      uint64_t GPACLR_4:1;
      uint64_t GPAACTDET_4:1;
      uint64_t reservedSpace0:2;
      uint64_t GPADIR_5:1;
      uint64_t GPAIE_5:1;
      uint64_t GPARE_5:1;
      uint64_t GPAFE_5:1;
      uint64_t GPACLR_5:1;
      uint64_t GPAACTDET_5:1;
      uint64_t reservedSpace1:2;
      uint64_t GPADIR_6:1;
      uint64_t GPAIE_6:1;
      uint64_t GPARE_6:1;
      uint64_t GPAFE_6:1;
      uint64_t GPACLR_6:1;
      uint64_t GPAACTDET_6:1;
      uint64_t reservedSpace2:2;
      uint64_t GPADIR_7:1;
      uint64_t GPAIE_7:1;
      uint64_t GPARE_7:1;
      uint64_t GPAFE_7:1;
      uint64_t GPACLR_7:1;
      uint64_t GPAACTDET_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPAP47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBDIR_0:1;
      uint64_t GPBIE_0:1;
      uint64_t GPBRE_0:1;
      uint64_t GPBFE_0:1;
      uint64_t GPBCLR_0:1;
      uint64_t GPBACTDET_0:1;
      uint64_t reservedSpace0:2;
      uint64_t GPBDIR_1:1;
      uint64_t GPBIE_1:1;
      uint64_t GPBRE_1:1;
      uint64_t GPBFE_1:1;
      uint64_t GPBCLR_1:1;
      uint64_t GPBACTDET_1:1;
      uint64_t reservedSpace1:2;
      uint64_t GPBDIR_2:1;
      uint64_t GPBIE_2:1;
      uint64_t GPBRE_2:1;
      uint64_t GPBFE_2:1;
      uint64_t GPBCLR_2:1;
      uint64_t GPBACTDET_2:1;
      uint64_t reservedSpace2:2;
      uint64_t GPBDIR_3:1;
      uint64_t GPBIE_3:1;
      uint64_t GPBRE_3:1;
      uint64_t GPBFE_3:1;
      uint64_t GPBCLR_3:1;
      uint64_t GPBACTDET_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBP03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBDIR_4:1;
      uint64_t GPBIE_4:1;
      uint64_t GPBRE_4:1;
      uint64_t GPBFE_4:1;
      uint64_t GPBCLR_4:1;
      uint64_t GPBACTDET_4:1;
      uint64_t reservedSpace0:2;
      uint64_t GPBDIR_5:1;
      uint64_t GPBIE_5:1;
      uint64_t GPBRE_5:1;
      uint64_t GPBFE_5:1;
      uint64_t GPBCLR_5:1;
      uint64_t GPBACTDET_5:1;
      uint64_t reservedSpace1:2;
      uint64_t GPBDIR_6:1;
      uint64_t GPBIE_6:1;
      uint64_t GPBRE_6:1;
      uint64_t GPBFE_6:1;
      uint64_t GPBCLR_6:1;
      uint64_t GPBACTDET_6:1;
      uint64_t reservedSpace2:2;
      uint64_t GPBDIR_7:1;
      uint64_t GPBIE_7:1;
      uint64_t GPBRE_7:1;
      uint64_t GPBFE_7:1;
      uint64_t GPBCLR_7:1;
      uint64_t GPBACTDET_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBP47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRCTRL;

};

#define GPIOA (*(volatile struct GPIOA_tag *) 0x0)

struct GPIOA_GPIOA_tag
{
  union
  {
    uint64_t R;
    struct
    {
      uint64_t GPADATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(32))) GPADATA;

  uint8_t res0[992];

  union
  {
    uint64_t R;
    struct
    {
      uint64_t GPBDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(32))) GPBDATA;

  uint8_t res1[2016];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPADIR_0:1;
      uint64_t GPAIE_0:1;
      uint64_t GPARE_0:1;
      uint64_t GPAFE_0:1;
      uint64_t GPACLR_0:1;
      uint64_t GPAACTDET_0:1;
      uint64_t reservedSpace0:2;
      uint64_t GPADIR_1:1;
      uint64_t GPAIE_1:1;
      uint64_t GPARE_1:1;
      uint64_t GPAFE_1:1;
      uint64_t GPACLR_1:1;
      uint64_t GPAACTDET_1:1;
      uint64_t reservedSpace1:2;
      uint64_t GPADIR_2:1;
      uint64_t GPAIE_2:1;
      uint64_t GPARE_2:1;
      uint64_t GPAFE_2:1;
      uint64_t GPACLR_2:1;
      uint64_t GPAACTDET_2:1;
      uint64_t reservedSpace2:2;
      uint64_t GPADIR_3:1;
      uint64_t GPAIE_3:1;
      uint64_t GPARE_3:1;
      uint64_t GPAFE_3:1;
      uint64_t GPACLR_3:1;
      uint64_t GPAACTDET_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPAP03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPADIR_4:1;
      uint64_t GPAIE_4:1;
      uint64_t GPARE_4:1;
      uint64_t GPAFE_4:1;
      uint64_t GPACLR_4:1;
      uint64_t GPAACTDET_4:1;
      uint64_t reservedSpace0:2;
      uint64_t GPADIR_5:1;
      uint64_t GPAIE_5:1;
      uint64_t GPARE_5:1;
      uint64_t GPAFE_5:1;
      uint64_t GPACLR_5:1;
      uint64_t GPAACTDET_5:1;
      uint64_t reservedSpace1:2;
      uint64_t GPADIR_6:1;
      uint64_t GPAIE_6:1;
      uint64_t GPARE_6:1;
      uint64_t GPAFE_6:1;
      uint64_t GPACLR_6:1;
      uint64_t GPAACTDET_6:1;
      uint64_t reservedSpace2:2;
      uint64_t GPADIR_7:1;
      uint64_t GPAIE_7:1;
      uint64_t GPARE_7:1;
      uint64_t GPAFE_7:1;
      uint64_t GPACLR_7:1;
      uint64_t GPAACTDET_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPAP47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBDIR_0:1;
      uint64_t GPBIE_0:1;
      uint64_t GPBRE_0:1;
      uint64_t GPBFE_0:1;
      uint64_t GPBCLR_0:1;
      uint64_t GPBACTDET_0:1;
      uint64_t reservedSpace0:2;
      uint64_t GPBDIR_1:1;
      uint64_t GPBIE_1:1;
      uint64_t GPBRE_1:1;
      uint64_t GPBFE_1:1;
      uint64_t GPBCLR_1:1;
      uint64_t GPBACTDET_1:1;
      uint64_t reservedSpace1:2;
      uint64_t GPBDIR_2:1;
      uint64_t GPBIE_2:1;
      uint64_t GPBRE_2:1;
      uint64_t GPBFE_2:1;
      uint64_t GPBCLR_2:1;
      uint64_t GPBACTDET_2:1;
      uint64_t reservedSpace2:2;
      uint64_t GPBDIR_3:1;
      uint64_t GPBIE_3:1;
      uint64_t GPBRE_3:1;
      uint64_t GPBFE_3:1;
      uint64_t GPBCLR_3:1;
      uint64_t GPBACTDET_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBP03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBDIR_4:1;
      uint64_t GPBIE_4:1;
      uint64_t GPBRE_4:1;
      uint64_t GPBFE_4:1;
      uint64_t GPBCLR_4:1;
      uint64_t GPBACTDET_4:1;
      uint64_t reservedSpace0:2;
      uint64_t GPBDIR_5:1;
      uint64_t GPBIE_5:1;
      uint64_t GPBRE_5:1;
      uint64_t GPBFE_5:1;
      uint64_t GPBCLR_5:1;
      uint64_t GPBACTDET_5:1;
      uint64_t reservedSpace1:2;
      uint64_t GPBDIR_6:1;
      uint64_t GPBIE_6:1;
      uint64_t GPBRE_6:1;
      uint64_t GPBFE_6:1;
      uint64_t GPBCLR_6:1;
      uint64_t GPBACTDET_6:1;
      uint64_t reservedSpace2:2;
      uint64_t GPBDIR_7:1;
      uint64_t GPBIE_7:1;
      uint64_t GPBRE_7:1;
      uint64_t GPBFE_7:1;
      uint64_t GPBCLR_7:1;
      uint64_t GPBACTDET_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBP47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRCTRL;

};

#define GPIOA_GPIOA (*(volatile struct GPIOA_GPIOA_tag *) 0x4000d000)

struct EFUSE_CTRL_GALLIUM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROG_ENA_WIDTH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA1;

};

#define EFUSE_CTRL_GALLIUM (*(volatile struct EFUSE_CTRL_GALLIUM_tag *) 0x0)

struct EFUSE_CTRL_GALLIUM_EFUSE_CTRL_GALLIUM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROG_ENA_WIDTH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA1;

};

#define EFUSE_CTRL_GALLIUM_EFUSE_CTRL_GALLIUM (*(volatile struct EFUSE_CTRL_GALLIUM_EFUSE_CTRL_GALLIUM_tag *) 0x4000e000)

struct TRIM_MEM_AON_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t ENABLE_BGAP:4;
      uint64_t ENABLE_HF_RC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DWELL_TIME0;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ENABLE_CORE_SUPPLY:4;
      uint64_t DISABLE_CORE_SUPPLY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DWELL_TIME1;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DISABLE_HF_RC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DWELL_TIME2;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LDO_1P5_READY:1;
      uint64_t ENABLE_CLK_HF_RC:1;
      uint64_t ENABLE_1P5_LDO:1;
      uint64_t ENABLE_3P3_LDO:1;
      uint64_t ENABLE_V1P2LDO_ENA_REQ:1;
      uint64_t ENABLE_BG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ANA_OVERRIDE0;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VAL_LDO_1P5_READY:1;
      uint64_t VAL_ENABLE_CLK_HF_RC:1;
      uint64_t VAL_ENABLE_1P5_LDO:1;
      uint64_t VAL_ENABLE_3P3_LDO:1;
      uint64_t VAL_V1P2LDO_ENA_REQ:1;
      uint64_t VAL_ENA_BG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ANA_OVERRIDE1;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t POR_CLR:1;
      uint64_t BOR_5P0_CLR:1;
      uint64_t BOR_3P3_CLR:1;
      uint64_t BOR_1P5_CLR:1;
      uint64_t BOR_1P2_CLR:1;
      uint64_t RETAIN_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FLAG_CLEAR0;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WAKEUP_ERROR_CLR:1;
      uint64_t WAKEUP_TIMER_CLR:1;
      uint64_t WAKEUP_LIN_CLR:1;
      uint64_t WAKEUP_FIRST_EVENT_CLR:1;
      uint64_t WAKEUP_CAN_CLR:1;
      uint64_t WAKEUP_COLLISION_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FLAG_CLEAR1;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t POR:1;
      uint64_t BOR_5P0:1;
      uint64_t BOR_3P3:1;
      uint64_t BOR_1P5:1;
      uint64_t BOR_1P2:1;
      uint64_t RETAIN:1;
      uint64_t WAKEUP_ERROR:1;
      uint64_t WAKEUP_TIMER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FLAG0;

  uint8_t res7[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WAKEUP_LIN:1;
      uint64_t WAKEUP_CAN:1;
      uint64_t WAKEUP_FIRST_EVENT:3;
      uint64_t V1P2LDO_ENA_ACK:1;
      uint64_t WAKEUP_COLLISION:1;
      uint64_t WAKEUP_COLLISION_FLAG_IRQ_ENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FLAG1;

  uint8_t res8[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRIM_RC12M:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TRIM0;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRIM_RC32K:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TRIM1;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRIM_BG:5;
      uint64_t TRIM_BG_SPARE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TRIM2;

  uint8_t res11[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRIM_BG_TEST_DFT:4;
      uint64_t TRIM_V2I:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TRIM3;

  uint8_t res12[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t V1P2LDO:4;
      uint64_t V1P5LDO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADJ_VOUT0;

  uint8_t res13[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t V3P3LDO:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADJ_VOUT1;

  uint8_t res14[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DISABLE_PD_LDO3P3:1;
      uint64_t LEAK_COMP_ENA_LDO3P3:1;
      uint64_t LEAK_COMP_TRIM_LDO3P3:2;
      uint64_t TEST_ENA_LDO3P3:1;
      uint64_t TEST_SEL_LDO3P3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LDO3P3_CTRL;

  uint8_t res15[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BOR1P2:4;
      uint64_t BOR1P5:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADJ_BOR0;

  uint8_t res16[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BOR3P3:4;
      uint64_t BOR5P0:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADJ_BOR1;

  uint8_t res17[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VREF0P8V:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADJ_BOR2;

  uint8_t res18[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VBAT6:4;
      uint64_t VBAT8:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADJ_VBAT0;

  uint8_t res19[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VBAT16:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADJ_VBAT1;

  uint8_t res20[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WAKEUPTIMERENA:1;
      uint64_t WAKEUPCANENA:1;
      uint64_t WAKEUPLINENA:1;
      uint64_t WAKEUPCANLVLEXP:1;
      uint64_t WAKEUPCANSENSITIVITYSEL:2;
      uint64_t DEBUG_MODE:1;
      uint64_t WAKEUP_TIMER_LOAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WAKEUP_CTRL;

  uint8_t res21[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WAKEUPTIMERLIMITLSB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WAKEUP_CTRL2;

  uint8_t res22[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WAKEUPTIMERLIMITMSB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WAKEUP_CTRL3;

  uint8_t res23[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WAKEUPTIMERCOUNTLSB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WAKEUP_COUNT_LSB;

  uint8_t res24[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WAKEUPTIMERCOUNTMSB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WAKEUP_COUNT_MSB;

  uint8_t res25[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DFT_RING_OSC_ENA:1;
      uint64_t WAKEUP_ERROR_FLAG_IRQ_ENA:1;
      uint64_t WAKEUP_FLAG_IRQ_ENA:1;
      uint64_t EFUSE_ENA:1;
      uint64_t XTAL_NEGRES:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CONTROL;

  uint8_t res26[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BLOCKSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TESTMUX;

  uint8_t res27[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BITSEL0:4;
      uint64_t BITSEL1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TESTMUXB01;

  uint8_t res28[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BITSEL2:4;
      uint64_t BITSEL3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TESTMUXB23;

  uint8_t res29[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BITSEL4:4;
      uint64_t BITSEL5:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TESTMUXB45;

  uint8_t res30[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BITSEL6:4;
      uint64_t BITSEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TESTMUXB67;

  uint8_t res31[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CANRX:1;
      uint64_t LINRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CAN_LIN_DATA_IN;

  uint8_t res32[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BOR5P0OVRDBIAS:1;
      uint64_t BOR5P0OVRDRESET:1;
      uint64_t BOR5P0OVRDREQVAL:1;
      uint64_t BOR5P0OVRDREQSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BOROVRD0;

  uint8_t res33[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BOR3P3OVRDBIAS:1;
      uint64_t BOR3P3OVRDRESET:1;
      uint64_t BOR3P3OVRDREQVAL:1;
      uint64_t BOR3P3OVRDREQSEL:1;
      uint64_t BOR1P8OVRDBIAS:1;
      uint64_t BOR1P8OVRDRESET:1;
      uint64_t BOR1P8OVRDREQVAL:1;
      uint64_t BOR1P8OVRDREQSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BOROVRD1;

  uint8_t res34[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BOR1P5OVRDBIAS:1;
      uint64_t BOR1P5OVRDRESET:1;
      uint64_t BOR1P5OVRDREQVAL:1;
      uint64_t BOR1P5OVRDREQSEL:1;
      uint64_t BOR1P2OVRDBIAS:1;
      uint64_t BOR1P2OVRDRESET:1;
      uint64_t BOR1P2OVRDREQVAL:1;
      uint64_t BOR1P2OVRDREQSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BOROVRD2;

  uint8_t res35[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BORRESETOVRDENABLE:1;
      uint64_t BOR5P0RESETENA:1;
      uint64_t BORRESETENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BOROVRD4;

  uint8_t res36[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BORV1P2TENA:1;
      uint64_t BORV1P5TENA:1;
      uint64_t BORV3P3TENA:1;
      uint64_t BORV5P0TENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BORTEST;

  uint8_t res37[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BOR5P0ARMEDACK:1;
      uint64_t BOR3P3ARMEDACK:1;
      uint64_t BOR1P5ARMEDACK:1;
      uint64_t BOR1P2ARMEDACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BORSTATUS;

  uint8_t res38[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LDO1P2FBSHIFTITRIMRTN:2;
      uint64_t OVRDENALDO1P2DISABLEPD:1;
      uint64_t OVRDVALLDO1P2DISABLEPD:1;
      uint64_t OVRD_ENA_1P2_RTN_LDO:1;
      uint64_t OVRD_VAL_ENA_1P2_RTN_LDO:1;
      uint64_t OVRDENALDO1P2ENAFBRTN:1;
      uint64_t OVRDVALLDO1P2ENAFBRTN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LDO1P2RETAIN;

  uint8_t res39[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LDO1P5FBSHIFTITRIMRTN:2;
      uint64_t OVRDENALDO1P5DISABLEPD:1;
      uint64_t OVRDVALLDO1P5DISABLEPD:1;
      uint64_t OVRD_ENA_1P5_RTN_LDO:1;
      uint64_t OVRD_VAL_ENA_1P5_RTN_LDO:1;
      uint64_t OVRDENALDO1P5ENAFBRTN:1;
      uint64_t OVRDVALLDO1P5ENAFBRTN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LDO1P5RETAIN;

  uint8_t res40[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LDOENARTN:1;
      uint64_t FAST1P2SWITCH:1;
      uint64_t FAST1P5SWITCH:1;
      uint64_t OVRD_ENA_S3_TMR_ENA:1;
      uint64_t OVRD_VAL_S3_TMR_ENA:1;
      uint64_t OVRDENALDOSSENA:1;
      uint64_t OVRDVALLDO1P5SSENA:1;
      uint64_t OVRDVALLDO1P2SSENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LDORTNSETTINGS;

  uint8_t res41[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BYTE0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RETAIN0;

  uint8_t res42[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BYTE1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RETAIN1;

  uint8_t res43[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BYTE2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RETAIN2;

  uint8_t res44[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BYTE3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RETAIN3;

  uint8_t res45[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BYTE4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RETAIN4;

  uint8_t res46[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BYTE5:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RETAIN5;

  uint8_t res47[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BYTE6:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RETAIN6;

  uint8_t res48[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BYTE7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RETAIN7;

  uint8_t res49[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SPARE0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ANALOG_SPARE0;

  uint8_t res50[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SPARE1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ANALOG_SPARE1;

  uint8_t res51[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SPARE2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ANALOG_SPARE2;

  uint8_t res52[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DRV_TRIM_5V:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DRV_TRIM;

  uint8_t res53[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CANENA:1;
      uint64_t CANENAPKDET:1;
      uint64_t CANSELPKDET:1;
      uint64_t TXDOMBYP:1;
      uint64_t RECCFG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CANTRIM0;

  uint8_t res54[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CRMPH:3;
      uint64_t reservedSpace0:1;
      uint64_t CRMPL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CANTRIM1;

  uint8_t res55[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RPROGH:2;
      uint64_t reservedSpace0:2;
      uint64_t RPROGL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CANTRIM2;

  uint8_t res56[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DLYSELDOM2RECH:4;
      uint64_t DLYSELREC2DOMH:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CANTRIM3;

  uint8_t res57[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DLYSELDOM2RECL:4;
      uint64_t DLYSELREC2DOML:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CANTRIM4;

  uint8_t res58[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SELERC:3;
      uint64_t reservedSpace0:1;
      uint64_t CASEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LINTRIM0;

  uint8_t res59[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ENAERC:1;
      uint64_t LINENA:1;
      uint64_t LINRPROGTX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LINTRIM1;

  uint8_t res60[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PMU_ENA_AO_OC:1;
      uint64_t PMU_AO_OC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TRIMOC;

  uint8_t res61[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ATB_TPMUX0:1;
      uint64_t reservedSpace0:2;
      uint64_t ATB_V2I:1;
      uint64_t ATB_VDDAUX:1;
      uint64_t ATB_IP_ISENSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ATB;

  uint8_t res62[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ODCFGIO:2;
      uint64_t reservedSpace0:2;
      uint64_t OD1_EN:1;
      uint64_t OD1_ADC_SEL:1;
      uint64_t OD_TMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ODCFG;

  uint8_t res63[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LDO1P2DWELLTIME:4;
      uint64_t DISABLEHFCLKDWELLTIME:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DWELLTIME;

  uint8_t res64[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t S3SEQCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) S3SEQCNT;

  uint8_t res65[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LDO1P5MAINSTBL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LDO1P5MAINSTBL;

  uint8_t res66[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HFCLKENABLETIME:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HFCLKENABLETIME;

};

#define TRIM_MEM_AON (*(volatile struct TRIM_MEM_AON_tag *) 0x4000f000)

struct PMUM_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t HIBERNATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HIBERNATE;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BGAP:1;
      uint64_t RTND:1;
      uint64_t FLSH:1;
      uint64_t FLHV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) STANDBY;

  uint8_t res1[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FLASHL1DPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FLASHL1DPD;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RAMPOWER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RAMPOWER;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RAMPOWERED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RAMPOWERED;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RAMRETAIN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RAMRETAIN;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BGAP:1;
      uint64_t RTND:1;
      uint64_t FLSH:1;
      uint64_t FLHV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TRUST_PWRUP_ACK;

  uint8_t res6[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PWRUPTIMEOUT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PWRUPTIMEOUT;

  uint8_t res7[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BGAP:1;
      uint64_t RTND:1;
      uint64_t FLSH:1;
      uint64_t FLHV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FORCEPWRDWN;

  uint8_t res8[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SINGLESTEPTOKEN:1;
      uint64_t SINGLESTEPENA:1;
      uint64_t ROLLSTATEENA:1;
      uint64_t OUTPUTDISABLE:1;
      uint64_t NOHOST:1;
      uint64_t ANY_STANDBY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DEBUGCTRL;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SINGLESTEPTOKEN:1;
      uint64_t WICLOADRESENT:1;
      uint64_t RESETACTVRESENT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DEBUGSTATUS;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NBADSTATES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BADSTATES;

};

#define PMUM (*(volatile struct PMUM_tag *) 0x0)

struct PMUM_PMUM_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t HIBERNATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HIBERNATE;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BGAP:1;
      uint64_t RTND:1;
      uint64_t FLSH:1;
      uint64_t FLHV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) STANDBY;

  uint8_t res1[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FLASHL1DPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FLASHL1DPD;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RAMPOWER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RAMPOWER;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RAMPOWERED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RAMPOWERED;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RAMRETAIN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RAMRETAIN;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BGAP:1;
      uint64_t RTND:1;
      uint64_t FLSH:1;
      uint64_t FLHV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TRUST_PWRUP_ACK;

  uint8_t res6[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PWRUPTIMEOUT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PWRUPTIMEOUT;

  uint8_t res7[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BGAP:1;
      uint64_t RTND:1;
      uint64_t FLSH:1;
      uint64_t FLHV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FORCEPWRDWN;

  uint8_t res8[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SINGLESTEPTOKEN:1;
      uint64_t SINGLESTEPENA:1;
      uint64_t ROLLSTATEENA:1;
      uint64_t OUTPUTDISABLE:1;
      uint64_t NOHOST:1;
      uint64_t ANY_STANDBY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DEBUGCTRL;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SINGLESTEPTOKEN:1;
      uint64_t WICLOADRESENT:1;
      uint64_t RESETACTVRESENT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DEBUGSTATUS;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NBADSTATES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BADSTATES;

};

#define PMUM_PMUM (*(volatile struct PMUM_PMUM_tag *) 0x4000f000)

struct CRGM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENAREQ:1;
      uint64_t reservedSpace0:7;
      uint64_t MULT:2;
      uint64_t reservedSpace1:6;
      uint64_t CFG_POR:1;
      uint64_t CFG_MUX_HARD:1;
      uint64_t CFG_LD_MANUAL:1;
      uint64_t CFG_LD_DD:2;
      uint64_t CFG_LDX4:1;
      uint64_t CFG_M00_MODE:1;
      uint64_t CFG_AS_LOCKED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLLCTRL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENASTS:1;
      uint64_t reservedSpace0:7;
      uint64_t LOCKED:1;
      uint64_t LIMITED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DLLSTAT;

  uint8_t res0[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STCLKENA:1;
      uint64_t reservedSpace0:7;
      uint64_t STCLKSRC:2;
      uint64_t reservedSpace1:6;
      uint64_t STCLKDIV:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TENMS:24;
      uint64_t SKEW:1;
      uint64_t NOREF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCALIB;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TRCCLKENA:1;
      uint64_t reservedSpace0:7;
      uint64_t TRCCLKDIV:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TRCCTRL;

};

#define CRGM (*(volatile struct CRGM_tag *) 0x0)

struct CRGM_CRGM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENAREQ:1;
      uint64_t reservedSpace0:7;
      uint64_t MULT:2;
      uint64_t reservedSpace1:6;
      uint64_t CFG_POR:1;
      uint64_t CFG_MUX_HARD:1;
      uint64_t CFG_LD_MANUAL:1;
      uint64_t CFG_LD_DD:2;
      uint64_t CFG_LDX4:1;
      uint64_t CFG_M00_MODE:1;
      uint64_t CFG_AS_LOCKED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLLCTRL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENASTS:1;
      uint64_t reservedSpace0:7;
      uint64_t LOCKED:1;
      uint64_t LIMITED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DLLSTAT;

  uint8_t res0[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STCLKENA:1;
      uint64_t reservedSpace0:7;
      uint64_t STCLKSRC:2;
      uint64_t reservedSpace1:6;
      uint64_t STCLKDIV:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TENMS:24;
      uint64_t SKEW:1;
      uint64_t NOREF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCALIB;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TRCCLKENA:1;
      uint64_t reservedSpace0:7;
      uint64_t TRCCLKDIV:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TRCCTRL;

};

#define CRGM_CRGM (*(volatile struct CRGM_CRGM_tag *) 0x400f1000)

struct NIFM_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PAUSEDMA:1;
      uint64_t REJECTCPU:1;
      uint64_t REJECTDMA:1;
      uint64_t CHANERRCPU:1;
      uint64_t CHANERRDMA:1;
      uint64_t BRIDGERR:1;
      uint64_t RECON:1;
      uint64_t CONNECTED:1;
      uint64_t SLVMODE:1;
      uint64_t SLVLANES:1;
      uint64_t reservedSpace1:1;
      uint64_t SPLTACTV:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CSR;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REGCMD:2;
      uint64_t REGRDAT:1;
      uint64_t NOBURST:1;
      uint64_t PXBURST:1;
      uint64_t reservedSpace0:1;
      uint64_t AUTOREJECT:2;
      uint64_t BUSPRI:2;
      uint64_t BRSTLEN:2;
      uint64_t reservedSpace1:3;
      uint64_t TXDBGACTV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CONFIG;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DRQLANE:5;
      uint64_t reservedSpace0:3;
      uint64_t DRQSTATE:2;
      uint64_t reservedSpace1:5;
      uint64_t DRQRESYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DRQ;

  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IRQPOLL:6;
      uint64_t reservedSpace0:1;
      uint64_t POLLDN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IRQ;

};

#define NIFM (*(volatile struct NIFM_tag *) 0x0)

struct NIFM_NIFM_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PAUSEDMA:1;
      uint64_t REJECTCPU:1;
      uint64_t REJECTDMA:1;
      uint64_t CHANERRCPU:1;
      uint64_t CHANERRDMA:1;
      uint64_t BRIDGERR:1;
      uint64_t RECON:1;
      uint64_t CONNECTED:1;
      uint64_t SLVMODE:1;
      uint64_t SLVLANES:1;
      uint64_t reservedSpace1:1;
      uint64_t SPLTACTV:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CSR;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REGCMD:2;
      uint64_t REGRDAT:1;
      uint64_t NOBURST:1;
      uint64_t PXBURST:1;
      uint64_t reservedSpace0:1;
      uint64_t AUTOREJECT:2;
      uint64_t BUSPRI:2;
      uint64_t BRSTLEN:2;
      uint64_t reservedSpace1:3;
      uint64_t TXDBGACTV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CONFIG;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DRQLANE:5;
      uint64_t reservedSpace0:3;
      uint64_t DRQSTATE:2;
      uint64_t reservedSpace1:5;
      uint64_t DRQRESYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DRQ;

  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IRQPOLL:6;
      uint64_t reservedSpace0:1;
      uint64_t POLLDN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IRQ;

};

#define NIFM_NIFM (*(volatile struct NIFM_NIFM_tag *) 0x400f2000)

struct FLASH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CACHEENA:1;
      uint64_t reservedSpace0:7;
      uint64_t DACACHEENA:1;
      uint64_t reservedSpace1:7;
      uint64_t BOOTPROT0:1;
      uint64_t BOOTPROT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNLOCKBOOTBLOCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UNLOCKBOOTBLOCK;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BOOTBLOCK:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BOOTBLOCK;

  uint8_t res0[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINSEC:10;
      uint64_t reservedSpace0:6;
      uint64_t RAWWRITEENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVOCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATAM;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ECCVAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ECCVAL;

  uint8_t res1[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NVOLOCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVOLOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NVOCMD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVOCMD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LOCKED:1;
      uint64_t MINSECERR:1;
      uint64_t ADDRERR:1;
      uint64_t NODBG:1;
      uint64_t MACROINQSTATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVOERROR;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NVOBUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVOBUSY;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDSTALL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RDSTALL;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ECCDISABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ECCDISABLE;

  uint8_t res5[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:18;
      uint64_t reservedSpace0:6;
      uint64_t ECC1ERR:1;
      uint64_t ECC2ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCERR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RAWREADREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RAWREADREQ;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RAWRDADDRERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RAWRDADDRERR;

  uint8_t res7[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SWDERSSTATE:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SWDERSSTATE;

  uint8_t res8[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINESIZE:2;
      uint64_t reservedSpace0:6;
      uint64_t ASSOCIATIVITY:2;
      uint64_t reservedSpace1:6;
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CACHE_register;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SRAMBISTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SRAMBISTMODE;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RECALL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RECALL;

};

#define FLASH (*(volatile struct FLASH_tag *) 0x0)

struct FLASH_FLASH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CACHEENA:1;
      uint64_t reservedSpace0:7;
      uint64_t DACACHEENA:1;
      uint64_t reservedSpace1:7;
      uint64_t BOOTPROT0:1;
      uint64_t BOOTPROT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNLOCKBOOTBLOCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UNLOCKBOOTBLOCK;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BOOTBLOCK:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BOOTBLOCK;

  uint8_t res0[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINSEC:10;
      uint64_t reservedSpace0:6;
      uint64_t RAWWRITEENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVOCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATAM;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ECCVAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ECCVAL;

  uint8_t res1[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NVOLOCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVOLOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NVOCMD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVOCMD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LOCKED:1;
      uint64_t MINSECERR:1;
      uint64_t ADDRERR:1;
      uint64_t NODBG:1;
      uint64_t MACROINQSTATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVOERROR;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NVOBUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVOBUSY;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDSTALL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RDSTALL;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ECCDISABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ECCDISABLE;

  uint8_t res5[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:18;
      uint64_t reservedSpace0:6;
      uint64_t ECC1ERR:1;
      uint64_t ECC2ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCERR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RAWREADREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RAWREADREQ;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RAWRDADDRERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RAWRDADDRERR;

  uint8_t res7[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SWDERSSTATE:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SWDERSSTATE;

  uint8_t res8[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINESIZE:2;
      uint64_t reservedSpace0:6;
      uint64_t ASSOCIATIVITY:2;
      uint64_t reservedSpace1:6;
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CACHE_register;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SRAMBISTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SRAMBISTMODE;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RECALL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RECALL;

};

#define FLASH_FLASH (*(volatile struct FLASH_FLASH_tag *) 0x400f3000)

struct SRAMCTRL_SRAMCTRL_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t ACCESS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG;

};

#define SRAMCTRL_SRAMCTRL (*(volatile struct SRAMCTRL_SRAMCTRL_tag *) 0x400f4000)

struct IOCTRLM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t HWMODE:1;
      uint64_t HWSYNC:1;
      uint64_t reservedSpace0:4;
      uint64_t DDS:2;
      uint64_t reservedSpace1:2;
      uint64_t SR:1;
      uint64_t SMT:1;
      uint64_t reservedSpace2:2;
      uint64_t OSEL:4;
      uint64_t reservedSpace3:4;
      uint64_t LOCKSFP0CFG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFP0CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t HWMODE:1;
      uint64_t HWSYNC:1;
      uint64_t reservedSpace0:4;
      uint64_t DDS:2;
      uint64_t reservedSpace1:2;
      uint64_t SR:1;
      uint64_t SMT:1;
      uint64_t reservedSpace2:2;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFP1CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t HWMODE:1;
      uint64_t HWSYNC:1;
      uint64_t reservedSpace0:4;
      uint64_t DDS:2;
      uint64_t reservedSpace1:2;
      uint64_t SR:1;
      uint64_t SMT:1;
      uint64_t reservedSpace2:2;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFP2CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t HWMODE:1;
      uint64_t HWSYNC:1;
      uint64_t reservedSpace0:4;
      uint64_t DDS:2;
      uint64_t reservedSpace1:2;
      uint64_t SR:1;
      uint64_t SMT:1;
      uint64_t reservedSpace2:2;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFP3CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t HWMODE:1;
      uint64_t HWSYNC:1;
      uint64_t reservedSpace0:4;
      uint64_t DDS:2;
      uint64_t reservedSpace1:2;
      uint64_t SR:1;
      uint64_t SMT:1;
      uint64_t reservedSpace2:2;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFP4CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t HWMODE:1;
      uint64_t HWSYNC:1;
      uint64_t reservedSpace0:4;
      uint64_t DDS:2;
      uint64_t reservedSpace1:2;
      uint64_t SR:1;
      uint64_t SMT:1;
      uint64_t reservedSpace2:2;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFP5CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t HWMODE:1;
      uint64_t HWSYNC:1;
      uint64_t reservedSpace0:4;
      uint64_t DDS:2;
      uint64_t reservedSpace1:2;
      uint64_t SR:1;
      uint64_t SMT:1;
      uint64_t reservedSpace2:2;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFP6CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t HWMODE:1;
      uint64_t HWSYNC:1;
      uint64_t reservedSpace0:4;
      uint64_t DDS:2;
      uint64_t reservedSpace1:2;
      uint64_t SR:1;
      uint64_t SMT:1;
      uint64_t reservedSpace2:2;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFP7CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t HWMODE:1;
      uint64_t HWSYNC:1;
      uint64_t reservedSpace0:4;
      uint64_t DDS:2;
      uint64_t reservedSpace1:2;
      uint64_t SR:1;
      uint64_t SMT:1;
      uint64_t reservedSpace2:2;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFP8CTRL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UARTRXD;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EXTCLK;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RXEV;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NMI;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EDBGRQ;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DBGRESTART;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TESTMUX0;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TESTMUX1;

  uint8_t res7[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TESTMUX2;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TESTMUX3;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TESTMUX4;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TESTMUX5;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TESTMUX6;

  uint8_t res12[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TESTMUX7;

  uint8_t res13[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TESTMUX8;

  uint8_t res14[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DEBUGSTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DEBUG;

  uint8_t res15[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEBUGKEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEBUGKEY;

};

#define IOCTRLM (*(volatile struct IOCTRLM_tag *) 0x0)

struct IOCTRLM_IOCTRLM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t HWMODE:1;
      uint64_t HWSYNC:1;
      uint64_t reservedSpace0:4;
      uint64_t DDS:2;
      uint64_t reservedSpace1:2;
      uint64_t SR:1;
      uint64_t SMT:1;
      uint64_t reservedSpace2:2;
      uint64_t OSEL:4;
      uint64_t reservedSpace3:4;
      uint64_t LOCKSFP0CFG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFP0CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t HWMODE:1;
      uint64_t HWSYNC:1;
      uint64_t reservedSpace0:4;
      uint64_t DDS:2;
      uint64_t reservedSpace1:2;
      uint64_t SR:1;
      uint64_t SMT:1;
      uint64_t reservedSpace2:2;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFP1CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t HWMODE:1;
      uint64_t HWSYNC:1;
      uint64_t reservedSpace0:4;
      uint64_t DDS:2;
      uint64_t reservedSpace1:2;
      uint64_t SR:1;
      uint64_t SMT:1;
      uint64_t reservedSpace2:2;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFP2CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t HWMODE:1;
      uint64_t HWSYNC:1;
      uint64_t reservedSpace0:4;
      uint64_t DDS:2;
      uint64_t reservedSpace1:2;
      uint64_t SR:1;
      uint64_t SMT:1;
      uint64_t reservedSpace2:2;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFP3CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t HWMODE:1;
      uint64_t HWSYNC:1;
      uint64_t reservedSpace0:4;
      uint64_t DDS:2;
      uint64_t reservedSpace1:2;
      uint64_t SR:1;
      uint64_t SMT:1;
      uint64_t reservedSpace2:2;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFP4CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t HWMODE:1;
      uint64_t HWSYNC:1;
      uint64_t reservedSpace0:4;
      uint64_t DDS:2;
      uint64_t reservedSpace1:2;
      uint64_t SR:1;
      uint64_t SMT:1;
      uint64_t reservedSpace2:2;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFP5CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t HWMODE:1;
      uint64_t HWSYNC:1;
      uint64_t reservedSpace0:4;
      uint64_t DDS:2;
      uint64_t reservedSpace1:2;
      uint64_t SR:1;
      uint64_t SMT:1;
      uint64_t reservedSpace2:2;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFP6CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t HWMODE:1;
      uint64_t HWSYNC:1;
      uint64_t reservedSpace0:4;
      uint64_t DDS:2;
      uint64_t reservedSpace1:2;
      uint64_t SR:1;
      uint64_t SMT:1;
      uint64_t reservedSpace2:2;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFP7CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RDENA:1;
      uint64_t HWMODE:1;
      uint64_t HWSYNC:1;
      uint64_t reservedSpace0:4;
      uint64_t DDS:2;
      uint64_t reservedSpace1:2;
      uint64_t SR:1;
      uint64_t SMT:1;
      uint64_t reservedSpace2:2;
      uint64_t OSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFP8CTRL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UARTRXD;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EXTCLK;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RXEV;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NMI;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EDBGRQ;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DBGRESTART;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TESTMUX0;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TESTMUX1;

  uint8_t res7[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TESTMUX2;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TESTMUX3;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TESTMUX4;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TESTMUX5;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TESTMUX6;

  uint8_t res12[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TESTMUX7;

  uint8_t res13[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t reservedSpace0:7;
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TESTMUX8;

  uint8_t res14[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DEBUGSTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DEBUG;

  uint8_t res15[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEBUGKEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEBUGKEY;

};

#define IOCTRLM_IOCTRLM (*(volatile struct IOCTRLM_IOCTRLM_tag *) 0x400f5000)

struct SYSCTRLM_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t OSCTRIMFUNC:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OSCTRIMFUNC;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BGTRIMFUNC:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BGTRIMFUNC;

  uint8_t res1[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSCTESTENA:1;
      uint64_t reservedSpace0:15;
      uint64_t BGTESTENA:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TESTENA;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OSCTRIMTEST:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OSCTRIMTEST;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BGTRIMTEST:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BGTRIMTEST;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RAMBTRIM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RAMBTRIM;

};

#define SYSCTRLM (*(volatile struct SYSCTRLM_tag *) 0x0)

struct SYSCTRLM_SYSCTRLM_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t OSCTRIMFUNC:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OSCTRIMFUNC;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BGTRIMFUNC:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BGTRIMFUNC;

  uint8_t res1[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSCTESTENA:1;
      uint64_t reservedSpace0:15;
      uint64_t BGTESTENA:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TESTENA;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OSCTRIMTEST:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OSCTRIMTEST;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BGTRIMTEST:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BGTRIMTEST;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RAMBTRIM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RAMBTRIM;

};

#define SYSCTRLM_SYSCTRLM (*(volatile struct SYSCTRLM_SYSCTRLM_tag *) 0x400f5800)

struct TMRMx_TMRM0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARLDL:1;
      uint64_t AHLTL:1;
      uint64_t reservedSpace0:6;
      uint64_t CLKSELL:3;
      uint64_t reservedSpace1:4;
      uint64_t DBGFRZL:1;
      uint64_t reservedSpace2:15;
      uint64_t TMRCFG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ARLDM:1;
      uint64_t AHLTM:1;
      uint64_t reservedSpace0:6;
      uint64_t CLKSELM:3;
      uint64_t reservedSpace1:4;
      uint64_t DBGFRZM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CFGM;

  uint8_t res0[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RLDVALL:16;
      uint64_t RLDVALM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTVALL:16;
      uint64_t CNTVALM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENAL:1;
      uint64_t reservedSpace0:7;
      uint64_t IRQENAL:1;
      uint64_t reservedSpace1:7;
      uint64_t OFLL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENAM:1;
      uint64_t reservedSpace0:7;
      uint64_t IRQENAM:1;
      uint64_t reservedSpace1:7;
      uint64_t OFLM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSRM;

};

#define TMRMx_TMRM0 (*(volatile struct TMRMx_TMRM0_tag *) 0x400f6000)

struct TMRMx_TMRM1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARLDL:1;
      uint64_t AHLTL:1;
      uint64_t reservedSpace0:6;
      uint64_t CLKSELL:3;
      uint64_t reservedSpace1:4;
      uint64_t DBGFRZL:1;
      uint64_t reservedSpace2:15;
      uint64_t TMRCFG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ARLDM:1;
      uint64_t AHLTM:1;
      uint64_t reservedSpace0:6;
      uint64_t CLKSELM:3;
      uint64_t reservedSpace1:4;
      uint64_t DBGFRZM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CFGM;

  uint8_t res0[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RLDVALL:16;
      uint64_t RLDVALM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTVALL:16;
      uint64_t CNTVALM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENAL:1;
      uint64_t reservedSpace0:7;
      uint64_t IRQENAL:1;
      uint64_t reservedSpace1:7;
      uint64_t OFLL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENAM:1;
      uint64_t reservedSpace0:7;
      uint64_t IRQENAM:1;
      uint64_t reservedSpace1:7;
      uint64_t OFLM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSRM;

};

#define TMRMx_TMRM1 (*(volatile struct TMRMx_TMRM1_tag *) 0x400f6100)

struct TMRMx_TMRM2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARLDL:1;
      uint64_t AHLTL:1;
      uint64_t reservedSpace0:6;
      uint64_t CLKSELL:3;
      uint64_t reservedSpace1:4;
      uint64_t DBGFRZL:1;
      uint64_t reservedSpace2:15;
      uint64_t TMRCFG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ARLDM:1;
      uint64_t AHLTM:1;
      uint64_t reservedSpace0:6;
      uint64_t CLKSELM:3;
      uint64_t reservedSpace1:4;
      uint64_t DBGFRZM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CFGM;

  uint8_t res0[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RLDVALL:16;
      uint64_t RLDVALM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTVALL:16;
      uint64_t CNTVALM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENAL:1;
      uint64_t reservedSpace0:7;
      uint64_t IRQENAL:1;
      uint64_t reservedSpace1:7;
      uint64_t OFLL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENAM:1;
      uint64_t reservedSpace0:7;
      uint64_t IRQENAM:1;
      uint64_t reservedSpace1:7;
      uint64_t OFLM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSRM;

};

#define TMRMx_TMRM2 (*(volatile struct TMRMx_TMRM2_tag *) 0x400f6200)

struct PRESCL_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA0:1;
      uint64_t reservedSpace0:7;
      uint64_t CLKSEL0:3;
      uint64_t reservedSpace1:4;
      uint64_t DIVSEL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTRL0;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA1:1;
      uint64_t reservedSpace0:7;
      uint64_t CLKSEL1:3;
      uint64_t reservedSpace1:4;
      uint64_t DIVSEL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTRL1;

};

#define PRESCL (*(volatile struct PRESCL_tag *) 0x0)

struct PRESCL_PRESCL_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA0:1;
      uint64_t reservedSpace0:7;
      uint64_t CLKSEL0:3;
      uint64_t reservedSpace1:4;
      uint64_t DIVSEL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTRL0;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENA1:1;
      uint64_t reservedSpace0:7;
      uint64_t CLKSEL1:3;
      uint64_t reservedSpace1:4;
      uint64_t DIVSEL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTRL1;

};

#define PRESCL_PRESCL (*(volatile struct PRESCL_PRESCL_tag *) 0x400f6300)

struct UART_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DATA;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TXFULL:1;
      uint64_t RXFULL:1;
      uint64_t TXOVRN:1;
      uint64_t RXOVRN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) STATE;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TXENA:1;
      uint64_t RXENA:1;
      uint64_t TXIENA:1;
      uint64_t RXIENA:1;
      uint64_t TXOIENA:1;
      uint64_t RXOIENA:1;
      uint64_t TXHSTST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTRL;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TXIRQ:1;
      uint64_t RXIRQ:1;
      uint64_t TXOIRQ:1;
      uint64_t RXOIRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IRQ;

  uint8_t res3[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAUDDIV:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAUDDIV;

  uint8_t res4[4028];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t JEP106CC:4;
      uint64_t BLKCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PID4;

  uint8_t res5[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PARTNO70:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PID0;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PARTNO118:4;
      uint64_t JEP106ID30:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PID1;

  uint8_t res7[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t JEP106ID64:3;
      uint64_t JEDEC:1;
      uint64_t REV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PID2;

  uint8_t res8[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MODNO:4;
      uint64_t ECONO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PID3;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CID0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CID0;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CID1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CID1;

  uint8_t res11[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CID2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CID2;

  uint8_t res12[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CID3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CID3;

};

#define UART (*(volatile struct UART_tag *) 0x0)

struct UART_UART_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DATA;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TXFULL:1;
      uint64_t RXFULL:1;
      uint64_t TXOVRN:1;
      uint64_t RXOVRN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) STATE;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TXENA:1;
      uint64_t RXENA:1;
      uint64_t TXIENA:1;
      uint64_t RXIENA:1;
      uint64_t TXOIENA:1;
      uint64_t RXOIENA:1;
      uint64_t TXHSTST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTRL;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TXIRQ:1;
      uint64_t RXIRQ:1;
      uint64_t TXOIRQ:1;
      uint64_t RXOIRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IRQ;

  uint8_t res3[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAUDDIV:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAUDDIV;

  uint8_t res4[4028];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t JEP106CC:4;
      uint64_t BLKCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PID4;

  uint8_t res5[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PARTNO70:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PID0;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PARTNO118:4;
      uint64_t JEP106ID30:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PID1;

  uint8_t res7[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t JEP106ID64:3;
      uint64_t JEDEC:1;
      uint64_t REV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PID2;

  uint8_t res8[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MODNO:4;
      uint64_t ECONO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PID3;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CID0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CID0;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CID1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CID1;

  uint8_t res11[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CID2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CID2;

  uint8_t res12[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CID3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CID3;

};

#define UART_UART (*(volatile struct UART_UART_tag *) 0x400f7000)

struct GPIOM_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t GPADATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) GPADATA;

  uint8_t res0[2046];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPADIR_0:1;
      uint64_t GPAIE_0:1;
      uint64_t GPARE_0:1;
      uint64_t GPAFE_0:1;
      uint64_t GPACLR_0:1;
      uint64_t GPAACTDET_0:1;
      uint64_t reservedSpace0:2;
      uint64_t GPADIR_1:1;
      uint64_t GPAIE_1:1;
      uint64_t GPARE_1:1;
      uint64_t GPAFE_1:1;
      uint64_t GPACLR_1:1;
      uint64_t GPAACTDET_1:1;
      uint64_t reservedSpace1:2;
      uint64_t GPADIR_2:1;
      uint64_t GPAIE_2:1;
      uint64_t GPARE_2:1;
      uint64_t GPAFE_2:1;
      uint64_t GPACLR_2:1;
      uint64_t GPAACTDET_2:1;
      uint64_t reservedSpace2:2;
      uint64_t GPADIR_3:1;
      uint64_t GPAIE_3:1;
      uint64_t GPARE_3:1;
      uint64_t GPAFE_3:1;
      uint64_t GPACLR_3:1;
      uint64_t GPAACTDET_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPAP03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPADIR_4:1;
      uint64_t GPAIE_4:1;
      uint64_t GPARE_4:1;
      uint64_t GPAFE_4:1;
      uint64_t GPACLR_4:1;
      uint64_t GPAACTDET_4:1;
      uint64_t reservedSpace0:2;
      uint64_t GPADIR_5:1;
      uint64_t GPAIE_5:1;
      uint64_t GPARE_5:1;
      uint64_t GPAFE_5:1;
      uint64_t GPACLR_5:1;
      uint64_t GPAACTDET_5:1;
      uint64_t reservedSpace1:2;
      uint64_t GPADIR_6:1;
      uint64_t GPAIE_6:1;
      uint64_t GPARE_6:1;
      uint64_t GPAFE_6:1;
      uint64_t GPACLR_6:1;
      uint64_t GPAACTDET_6:1;
      uint64_t reservedSpace2:2;
      uint64_t GPADIR_7:1;
      uint64_t GPAIE_7:1;
      uint64_t GPARE_7:1;
      uint64_t GPAFE_7:1;
      uint64_t GPACLR_7:1;
      uint64_t GPAACTDET_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPAP47;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t GPADIR_8:1;
      uint64_t GPAIE_8:1;
      uint64_t GPARE_8:1;
      uint64_t GPAFE_8:1;
      uint64_t GPACLR_8:1;
      uint64_t GPAACTDET_8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPAP8;

};

#define GPIOM (*(volatile struct GPIOM_tag *) 0x0)

struct GPIOM_GPIOM_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t GPADATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) GPADATA;

  uint8_t res0[2046];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPADIR_0:1;
      uint64_t GPAIE_0:1;
      uint64_t GPARE_0:1;
      uint64_t GPAFE_0:1;
      uint64_t GPACLR_0:1;
      uint64_t GPAACTDET_0:1;
      uint64_t reservedSpace0:2;
      uint64_t GPADIR_1:1;
      uint64_t GPAIE_1:1;
      uint64_t GPARE_1:1;
      uint64_t GPAFE_1:1;
      uint64_t GPACLR_1:1;
      uint64_t GPAACTDET_1:1;
      uint64_t reservedSpace1:2;
      uint64_t GPADIR_2:1;
      uint64_t GPAIE_2:1;
      uint64_t GPARE_2:1;
      uint64_t GPAFE_2:1;
      uint64_t GPACLR_2:1;
      uint64_t GPAACTDET_2:1;
      uint64_t reservedSpace2:2;
      uint64_t GPADIR_3:1;
      uint64_t GPAIE_3:1;
      uint64_t GPARE_3:1;
      uint64_t GPAFE_3:1;
      uint64_t GPACLR_3:1;
      uint64_t GPAACTDET_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPAP03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPADIR_4:1;
      uint64_t GPAIE_4:1;
      uint64_t GPARE_4:1;
      uint64_t GPAFE_4:1;
      uint64_t GPACLR_4:1;
      uint64_t GPAACTDET_4:1;
      uint64_t reservedSpace0:2;
      uint64_t GPADIR_5:1;
      uint64_t GPAIE_5:1;
      uint64_t GPARE_5:1;
      uint64_t GPAFE_5:1;
      uint64_t GPACLR_5:1;
      uint64_t GPAACTDET_5:1;
      uint64_t reservedSpace1:2;
      uint64_t GPADIR_6:1;
      uint64_t GPAIE_6:1;
      uint64_t GPARE_6:1;
      uint64_t GPAFE_6:1;
      uint64_t GPACLR_6:1;
      uint64_t GPAACTDET_6:1;
      uint64_t reservedSpace2:2;
      uint64_t GPADIR_7:1;
      uint64_t GPAIE_7:1;
      uint64_t GPARE_7:1;
      uint64_t GPAFE_7:1;
      uint64_t GPACLR_7:1;
      uint64_t GPAACTDET_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPAP47;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t GPADIR_8:1;
      uint64_t GPAIE_8:1;
      uint64_t GPARE_8:1;
      uint64_t GPAFE_8:1;
      uint64_t GPACLR_8:1;
      uint64_t GPAACTDET_8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPAP8;

};

#define GPIOM_GPIOM (*(volatile struct GPIOM_GPIOM_tag *) 0x400f8000)

struct DMACCFG_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t INTSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) INTSTAT;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INTTCSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) INTTCSTAT;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INTTCCLR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) INTTCCLR;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INTERRSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) INTERRSTAT;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INTERRCLR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) INTERRCLR;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RAWINTTC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RAWINTTC;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RAWINTERR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RAWINTERR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENBLDCHNS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ENBLDCHNS;

  uint8_t res7[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SOFTBREQ:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SOFTBREQ;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SOFTSREQ:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SOFTSREQ;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SOFTLBREQ:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SOFTLBREQ;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SOFTLSREQ:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SOFTLSREQ;

  uint8_t res11[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t E:1;
      uint64_t M1:1;
      uint64_t M2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CONFIG;

  uint8_t res12[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SYNC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SYNC;

};

#define DMACCFG (*(volatile struct DMACCFG_tag *) 0x0)

struct DMACCFG_DMACCFG_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t INTSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) INTSTAT;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INTTCSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) INTTCSTAT;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INTTCCLR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) INTTCCLR;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INTERRSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) INTERRSTAT;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INTERRCLR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) INTERRCLR;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RAWINTTC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RAWINTTC;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RAWINTERR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RAWINTERR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENBLDCHNS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ENBLDCHNS;

  uint8_t res7[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SOFTBREQ:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SOFTBREQ;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SOFTSREQ:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SOFTSREQ;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SOFTLBREQ:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SOFTLBREQ;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SOFTLSREQ:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SOFTLSREQ;

  uint8_t res11[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t E:1;
      uint64_t M1:1;
      uint64_t M2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CONFIG;

  uint8_t res12[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SYNC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SYNC;

};

#define DMACCFG_DMACCFG (*(volatile struct DMACCFG_DMACCFG_tag *) 0x400ff000)

struct DMAx_DMA0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DESTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t reservedSpace0:1;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LLI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFERSIZE:12;
      uint64_t SBSIZE:3;
      uint64_t DBSIZE:3;
      uint64_t SWIDTH:3;
      uint64_t DWIDTH:3;
      uint64_t S:1;
      uint64_t D:1;
      uint64_t SI:1;
      uint64_t DI:1;
      uint64_t PRIVILEGED:1;
      uint64_t BUFFERABLE:1;
      uint64_t CACHEABLE:1;
      uint64_t I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t SRCPERIPHERAL:4;
      uint64_t reservedSpace0:1;
      uint64_t DESTPERIPHERAL:4;
      uint64_t reservedSpace1:1;
      uint64_t FLOWCTRL:3;
      uint64_t IE:1;
      uint64_t ITC:1;
      uint64_t L:1;
      uint64_t A:1;
      uint64_t H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIGURATION;

};

#define DMAx_DMA0 (*(volatile struct DMAx_DMA0_tag *) 0x400ff100)

struct DMAx_DMA1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DESTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t reservedSpace0:1;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LLI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFERSIZE:12;
      uint64_t SBSIZE:3;
      uint64_t DBSIZE:3;
      uint64_t SWIDTH:3;
      uint64_t DWIDTH:3;
      uint64_t S:1;
      uint64_t D:1;
      uint64_t SI:1;
      uint64_t DI:1;
      uint64_t PRIVILEGED:1;
      uint64_t BUFFERABLE:1;
      uint64_t CACHEABLE:1;
      uint64_t I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t SRCPERIPHERAL:4;
      uint64_t reservedSpace0:1;
      uint64_t DESTPERIPHERAL:4;
      uint64_t reservedSpace1:1;
      uint64_t FLOWCTRL:3;
      uint64_t IE:1;
      uint64_t ITC:1;
      uint64_t L:1;
      uint64_t A:1;
      uint64_t H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIGURATION;

};

#define DMAx_DMA1 (*(volatile struct DMAx_DMA1_tag *) 0x400ff120)

struct DMAx_DMA2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DESTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t reservedSpace0:1;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LLI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFERSIZE:12;
      uint64_t SBSIZE:3;
      uint64_t DBSIZE:3;
      uint64_t SWIDTH:3;
      uint64_t DWIDTH:3;
      uint64_t S:1;
      uint64_t D:1;
      uint64_t SI:1;
      uint64_t DI:1;
      uint64_t PRIVILEGED:1;
      uint64_t BUFFERABLE:1;
      uint64_t CACHEABLE:1;
      uint64_t I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t SRCPERIPHERAL:4;
      uint64_t reservedSpace0:1;
      uint64_t DESTPERIPHERAL:4;
      uint64_t reservedSpace1:1;
      uint64_t FLOWCTRL:3;
      uint64_t IE:1;
      uint64_t ITC:1;
      uint64_t L:1;
      uint64_t A:1;
      uint64_t H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIGURATION;

};

#define DMAx_DMA2 (*(volatile struct DMAx_DMA2_tag *) 0x400ff140)

struct DMAx_DMA3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DESTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t reservedSpace0:1;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LLI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFERSIZE:12;
      uint64_t SBSIZE:3;
      uint64_t DBSIZE:3;
      uint64_t SWIDTH:3;
      uint64_t DWIDTH:3;
      uint64_t S:1;
      uint64_t D:1;
      uint64_t SI:1;
      uint64_t DI:1;
      uint64_t PRIVILEGED:1;
      uint64_t BUFFERABLE:1;
      uint64_t CACHEABLE:1;
      uint64_t I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t SRCPERIPHERAL:4;
      uint64_t reservedSpace0:1;
      uint64_t DESTPERIPHERAL:4;
      uint64_t reservedSpace1:1;
      uint64_t FLOWCTRL:3;
      uint64_t IE:1;
      uint64_t ITC:1;
      uint64_t L:1;
      uint64_t A:1;
      uint64_t H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIGURATION;

};

#define DMAx_DMA3 (*(volatile struct DMAx_DMA3_tag *) 0x400ff160)

struct DMAx_DMA4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DESTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t reservedSpace0:1;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LLI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFERSIZE:12;
      uint64_t SBSIZE:3;
      uint64_t DBSIZE:3;
      uint64_t SWIDTH:3;
      uint64_t DWIDTH:3;
      uint64_t S:1;
      uint64_t D:1;
      uint64_t SI:1;
      uint64_t DI:1;
      uint64_t PRIVILEGED:1;
      uint64_t BUFFERABLE:1;
      uint64_t CACHEABLE:1;
      uint64_t I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t SRCPERIPHERAL:4;
      uint64_t reservedSpace0:1;
      uint64_t DESTPERIPHERAL:4;
      uint64_t reservedSpace1:1;
      uint64_t FLOWCTRL:3;
      uint64_t IE:1;
      uint64_t ITC:1;
      uint64_t L:1;
      uint64_t A:1;
      uint64_t H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIGURATION;

};

#define DMAx_DMA4 (*(volatile struct DMAx_DMA4_tag *) 0x400ff180)

struct DMAx_DMA5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DESTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t reservedSpace0:1;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LLI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFERSIZE:12;
      uint64_t SBSIZE:3;
      uint64_t DBSIZE:3;
      uint64_t SWIDTH:3;
      uint64_t DWIDTH:3;
      uint64_t S:1;
      uint64_t D:1;
      uint64_t SI:1;
      uint64_t DI:1;
      uint64_t PRIVILEGED:1;
      uint64_t BUFFERABLE:1;
      uint64_t CACHEABLE:1;
      uint64_t I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t SRCPERIPHERAL:4;
      uint64_t reservedSpace0:1;
      uint64_t DESTPERIPHERAL:4;
      uint64_t reservedSpace1:1;
      uint64_t FLOWCTRL:3;
      uint64_t IE:1;
      uint64_t ITC:1;
      uint64_t L:1;
      uint64_t A:1;
      uint64_t H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIGURATION;

};

#define DMAx_DMA5 (*(volatile struct DMAx_DMA5_tag *) 0x400ff1a0)

struct DMAx_DMA6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DESTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t reservedSpace0:1;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LLI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFERSIZE:12;
      uint64_t SBSIZE:3;
      uint64_t DBSIZE:3;
      uint64_t SWIDTH:3;
      uint64_t DWIDTH:3;
      uint64_t S:1;
      uint64_t D:1;
      uint64_t SI:1;
      uint64_t DI:1;
      uint64_t PRIVILEGED:1;
      uint64_t BUFFERABLE:1;
      uint64_t CACHEABLE:1;
      uint64_t I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t SRCPERIPHERAL:4;
      uint64_t reservedSpace0:1;
      uint64_t DESTPERIPHERAL:4;
      uint64_t reservedSpace1:1;
      uint64_t FLOWCTRL:3;
      uint64_t IE:1;
      uint64_t ITC:1;
      uint64_t L:1;
      uint64_t A:1;
      uint64_t H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIGURATION;

};

#define DMAx_DMA6 (*(volatile struct DMAx_DMA6_tag *) 0x400ff1c0)

struct DMAx_DMA7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DESTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t reservedSpace0:1;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LLI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFERSIZE:12;
      uint64_t SBSIZE:3;
      uint64_t DBSIZE:3;
      uint64_t SWIDTH:3;
      uint64_t DWIDTH:3;
      uint64_t S:1;
      uint64_t D:1;
      uint64_t SI:1;
      uint64_t DI:1;
      uint64_t PRIVILEGED:1;
      uint64_t BUFFERABLE:1;
      uint64_t CACHEABLE:1;
      uint64_t I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t SRCPERIPHERAL:4;
      uint64_t reservedSpace0:1;
      uint64_t DESTPERIPHERAL:4;
      uint64_t reservedSpace1:1;
      uint64_t FLOWCTRL:3;
      uint64_t IE:1;
      uint64_t ITC:1;
      uint64_t L:1;
      uint64_t A:1;
      uint64_t H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIGURATION;

};

#define DMAx_DMA7 (*(volatile struct DMAx_DMA7_tag *) 0x400ff1e0)

struct DMAx_DMA8_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DESTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t reservedSpace0:1;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LLI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFERSIZE:12;
      uint64_t SBSIZE:3;
      uint64_t DBSIZE:3;
      uint64_t SWIDTH:3;
      uint64_t DWIDTH:3;
      uint64_t S:1;
      uint64_t D:1;
      uint64_t SI:1;
      uint64_t DI:1;
      uint64_t PRIVILEGED:1;
      uint64_t BUFFERABLE:1;
      uint64_t CACHEABLE:1;
      uint64_t I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t SRCPERIPHERAL:4;
      uint64_t reservedSpace0:1;
      uint64_t DESTPERIPHERAL:4;
      uint64_t reservedSpace1:1;
      uint64_t FLOWCTRL:3;
      uint64_t IE:1;
      uint64_t ITC:1;
      uint64_t L:1;
      uint64_t A:1;
      uint64_t H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIGURATION;

};

#define DMAx_DMA8 (*(volatile struct DMAx_DMA8_tag *) 0x400ff200)

struct DMAx_DMA9_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DESTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t reservedSpace0:1;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LLI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFERSIZE:12;
      uint64_t SBSIZE:3;
      uint64_t DBSIZE:3;
      uint64_t SWIDTH:3;
      uint64_t DWIDTH:3;
      uint64_t S:1;
      uint64_t D:1;
      uint64_t SI:1;
      uint64_t DI:1;
      uint64_t PRIVILEGED:1;
      uint64_t BUFFERABLE:1;
      uint64_t CACHEABLE:1;
      uint64_t I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t SRCPERIPHERAL:4;
      uint64_t reservedSpace0:1;
      uint64_t DESTPERIPHERAL:4;
      uint64_t reservedSpace1:1;
      uint64_t FLOWCTRL:3;
      uint64_t IE:1;
      uint64_t ITC:1;
      uint64_t L:1;
      uint64_t A:1;
      uint64_t H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIGURATION;

};

#define DMAx_DMA9 (*(volatile struct DMAx_DMA9_tag *) 0x400ff220)

struct DMAx_DMA10_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DESTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t reservedSpace0:1;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LLI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFERSIZE:12;
      uint64_t SBSIZE:3;
      uint64_t DBSIZE:3;
      uint64_t SWIDTH:3;
      uint64_t DWIDTH:3;
      uint64_t S:1;
      uint64_t D:1;
      uint64_t SI:1;
      uint64_t DI:1;
      uint64_t PRIVILEGED:1;
      uint64_t BUFFERABLE:1;
      uint64_t CACHEABLE:1;
      uint64_t I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t SRCPERIPHERAL:4;
      uint64_t reservedSpace0:1;
      uint64_t DESTPERIPHERAL:4;
      uint64_t reservedSpace1:1;
      uint64_t FLOWCTRL:3;
      uint64_t IE:1;
      uint64_t ITC:1;
      uint64_t L:1;
      uint64_t A:1;
      uint64_t H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIGURATION;

};

#define DMAx_DMA10 (*(volatile struct DMAx_DMA10_tag *) 0x400ff240)

struct DMAx_DMA11_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DESTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t reservedSpace0:1;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LLI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFERSIZE:12;
      uint64_t SBSIZE:3;
      uint64_t DBSIZE:3;
      uint64_t SWIDTH:3;
      uint64_t DWIDTH:3;
      uint64_t S:1;
      uint64_t D:1;
      uint64_t SI:1;
      uint64_t DI:1;
      uint64_t PRIVILEGED:1;
      uint64_t BUFFERABLE:1;
      uint64_t CACHEABLE:1;
      uint64_t I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t SRCPERIPHERAL:4;
      uint64_t reservedSpace0:1;
      uint64_t DESTPERIPHERAL:4;
      uint64_t reservedSpace1:1;
      uint64_t FLOWCTRL:3;
      uint64_t IE:1;
      uint64_t ITC:1;
      uint64_t L:1;
      uint64_t A:1;
      uint64_t H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIGURATION;

};

#define DMAx_DMA11 (*(volatile struct DMAx_DMA11_tag *) 0x400ff260)

struct DMAx_DMA12_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DESTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t reservedSpace0:1;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LLI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFERSIZE:12;
      uint64_t SBSIZE:3;
      uint64_t DBSIZE:3;
      uint64_t SWIDTH:3;
      uint64_t DWIDTH:3;
      uint64_t S:1;
      uint64_t D:1;
      uint64_t SI:1;
      uint64_t DI:1;
      uint64_t PRIVILEGED:1;
      uint64_t BUFFERABLE:1;
      uint64_t CACHEABLE:1;
      uint64_t I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t SRCPERIPHERAL:4;
      uint64_t reservedSpace0:1;
      uint64_t DESTPERIPHERAL:4;
      uint64_t reservedSpace1:1;
      uint64_t FLOWCTRL:3;
      uint64_t IE:1;
      uint64_t ITC:1;
      uint64_t L:1;
      uint64_t A:1;
      uint64_t H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIGURATION;

};

#define DMAx_DMA12 (*(volatile struct DMAx_DMA12_tag *) 0x400ff280)

struct DMAx_DMA13_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DESTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t reservedSpace0:1;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LLI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFERSIZE:12;
      uint64_t SBSIZE:3;
      uint64_t DBSIZE:3;
      uint64_t SWIDTH:3;
      uint64_t DWIDTH:3;
      uint64_t S:1;
      uint64_t D:1;
      uint64_t SI:1;
      uint64_t DI:1;
      uint64_t PRIVILEGED:1;
      uint64_t BUFFERABLE:1;
      uint64_t CACHEABLE:1;
      uint64_t I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t SRCPERIPHERAL:4;
      uint64_t reservedSpace0:1;
      uint64_t DESTPERIPHERAL:4;
      uint64_t reservedSpace1:1;
      uint64_t FLOWCTRL:3;
      uint64_t IE:1;
      uint64_t ITC:1;
      uint64_t L:1;
      uint64_t A:1;
      uint64_t H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIGURATION;

};

#define DMAx_DMA13 (*(volatile struct DMAx_DMA13_tag *) 0x400ff2a0)

struct DMAx_DMA14_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DESTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t reservedSpace0:1;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LLI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFERSIZE:12;
      uint64_t SBSIZE:3;
      uint64_t DBSIZE:3;
      uint64_t SWIDTH:3;
      uint64_t DWIDTH:3;
      uint64_t S:1;
      uint64_t D:1;
      uint64_t SI:1;
      uint64_t DI:1;
      uint64_t PRIVILEGED:1;
      uint64_t BUFFERABLE:1;
      uint64_t CACHEABLE:1;
      uint64_t I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t SRCPERIPHERAL:4;
      uint64_t reservedSpace0:1;
      uint64_t DESTPERIPHERAL:4;
      uint64_t reservedSpace1:1;
      uint64_t FLOWCTRL:3;
      uint64_t IE:1;
      uint64_t ITC:1;
      uint64_t L:1;
      uint64_t A:1;
      uint64_t H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIGURATION;

};

#define DMAx_DMA14 (*(volatile struct DMAx_DMA14_tag *) 0x400ff2c0)

struct DMAx_DMA15_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DESTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t reservedSpace0:1;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LLI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFERSIZE:12;
      uint64_t SBSIZE:3;
      uint64_t DBSIZE:3;
      uint64_t SWIDTH:3;
      uint64_t DWIDTH:3;
      uint64_t S:1;
      uint64_t D:1;
      uint64_t SI:1;
      uint64_t DI:1;
      uint64_t PRIVILEGED:1;
      uint64_t BUFFERABLE:1;
      uint64_t CACHEABLE:1;
      uint64_t I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:1;
      uint64_t SRCPERIPHERAL:4;
      uint64_t reservedSpace0:1;
      uint64_t DESTPERIPHERAL:4;
      uint64_t reservedSpace1:1;
      uint64_t FLOWCTRL:3;
      uint64_t IE:1;
      uint64_t ITC:1;
      uint64_t L:1;
      uint64_t A:1;
      uint64_t H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIGURATION;

};

#define DMAx_DMA15 (*(volatile struct DMAx_DMA15_tag *) 0x400ff2e0)

struct DMACIT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OP2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OP3;

};

#define DMACIT (*(volatile struct DMACIT_tag *) 0x0)

struct DMACIT_DMACIT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OP2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OP3;

};

#define DMACIT_DMACIT (*(volatile struct DMACIT_DMACIT_tag *) 0x400ff500)

struct DMACID_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARTNUMBER0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARTNUMBER1:4;
      uint64_t DESIGNER0:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESIGNER1:4;
      uint64_t REVISION:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNELS:3;
      uint64_t MASTERS:1;
      uint64_t BUSWIDTH:3;
      uint64_t SRCRQSTRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCELLID0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCELLID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCELLID1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCELLID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCELLID2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCELLID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCELLID3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCELLID3;

};

#define DMACID (*(volatile struct DMACID_tag *) 0xe0)

struct DMACID_DMACID_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARTNUMBER0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARTNUMBER1:4;
      uint64_t DESIGNER0:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESIGNER1:4;
      uint64_t REVISION:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNELS:3;
      uint64_t MASTERS:1;
      uint64_t BUSWIDTH:3;
      uint64_t SRCRQSTRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCELLID0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCELLID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCELLID1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCELLID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCELLID2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCELLID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCELLID3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCELLID3;

};

#define DMACID_DMACID (*(volatile struct DMACID_DMACID_tag *) 0x44000fe0)

