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

struct ADC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCEN:1;
      uint64_t TMPSPWR:1;
      uint64_t RPTEN:1;
      uint64_t LPMODE:2;
      uint64_t OPMODE:2;
      uint64_t BATTLOAD:1;
      uint64_t REFSEL:2;
      uint64_t reservedSpace0:6;
      uint64_t TRIGSEL:4;
      uint64_t TRIGPOL:1;
      uint64_t reservedSpace1:3;
      uint64_t CLKSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWDSTAT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLEN0:1;
      uint64_t WCEN0:1;
      uint64_t reservedSpace0:6;
      uint64_t CHSEL0:4;
      uint64_t reservedSpace1:4;
      uint64_t THSEL0:3;
      uint64_t reservedSpace2:5;
      uint64_t ADSEL0:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL0CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLEN1:1;
      uint64_t WCEN1:1;
      uint64_t reservedSpace0:6;
      uint64_t CHSEL1:4;
      uint64_t reservedSpace1:4;
      uint64_t THSEL1:3;
      uint64_t reservedSpace2:5;
      uint64_t ADSEL1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL1CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLEN2:1;
      uint64_t WCEN2:1;
      uint64_t reservedSpace0:6;
      uint64_t CHSEL2:4;
      uint64_t reservedSpace1:4;
      uint64_t THSEL2:3;
      uint64_t reservedSpace2:5;
      uint64_t ADSEL2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL2CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLEN3:1;
      uint64_t WCEN3:1;
      uint64_t reservedSpace0:6;
      uint64_t CHSEL3:4;
      uint64_t reservedSpace1:4;
      uint64_t THSEL3:3;
      uint64_t reservedSpace2:5;
      uint64_t ADSEL3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL3CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLEN4:1;
      uint64_t WCEN4:1;
      uint64_t reservedSpace0:6;
      uint64_t CHSEL4:4;
      uint64_t reservedSpace1:4;
      uint64_t THSEL4:3;
      uint64_t reservedSpace2:5;
      uint64_t ADSEL4:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL4CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLEN5:1;
      uint64_t WCEN5:1;
      uint64_t reservedSpace0:6;
      uint64_t CHSEL5:4;
      uint64_t reservedSpace1:4;
      uint64_t THSEL5:3;
      uint64_t reservedSpace2:5;
      uint64_t ADSEL5:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL5CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLEN6:1;
      uint64_t WCEN6:1;
      uint64_t reservedSpace0:6;
      uint64_t CHSEL6:4;
      uint64_t reservedSpace1:4;
      uint64_t THSEL6:3;
      uint64_t reservedSpace2:5;
      uint64_t ADSEL6:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL6CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLEN7:1;
      uint64_t WCEN7:1;
      uint64_t reservedSpace0:6;
      uint64_t CHSEL7:4;
      uint64_t reservedSpace1:4;
      uint64_t THSEL7:3;
      uint64_t reservedSpace2:5;
      uint64_t ADSEL7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL7CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LLIM:16;
      uint64_t ULIM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WLIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t COUNT:4;
      uint64_t RSVD_20:4;
      uint64_t SLOTNUM:3;
      uint64_t RSVD_27:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO;

  uint8_t res0[460];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNVCMP:1;
      uint64_t SCNCMP:1;
      uint64_t FIFOOVR1:1;
      uint64_t FIFOOVR2:1;
      uint64_t WCEXC:1;
      uint64_t WCINC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNVCMP:1;
      uint64_t SCNCMP:1;
      uint64_t FIFOOVR1:1;
      uint64_t FIFOOVR2:1;
      uint64_t WCEXC:1;
      uint64_t WCINC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNVCMP:1;
      uint64_t SCNCMP:1;
      uint64_t FIFOOVR1:1;
      uint64_t FIFOOVR2:1;
      uint64_t WCEXC:1;
      uint64_t WCINC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNVCMP:1;
      uint64_t SCNCMP:1;
      uint64_t FIFOOVR1:1;
      uint64_t FIFOOVR2:1;
      uint64_t WCEXC:1;
      uint64_t WCINC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSET;

};

#define ADC (*(volatile struct ADC_tag *) 0x50008000)

struct CTIMER_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTTMRA0:16;
      uint64_t CTTMRB0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPR0A0:16;
      uint64_t CMPR1A0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPRA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPR0B0:16;
      uint64_t CMPR1B0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPRB0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMRA0EN:1;
      uint64_t TMRA0CLK:5;
      uint64_t TMRA0FN:3;
      uint64_t TMRA0IE:1;
      uint64_t TMRA0PE:1;
      uint64_t TMRA0CLR:1;
      uint64_t TMRA0POL:1;
      uint64_t reservedSpace0:3;
      uint64_t TMRB0EN:1;
      uint64_t TMRB0CLK:5;
      uint64_t TMRB0FN:3;
      uint64_t TMRB0IE:1;
      uint64_t TMRB0PE:1;
      uint64_t TMRB0CLR:1;
      uint64_t TMRB0POL:1;
      uint64_t reservedSpace1:2;
      uint64_t CTLINK0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTTMRA1:16;
      uint64_t CTTMRB1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPR0A1:16;
      uint64_t CMPR1A1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPRA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPR0B1:16;
      uint64_t CMPR1B1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPRB1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMRA1EN:1;
      uint64_t TMRA1CLK:5;
      uint64_t TMRA1FN:3;
      uint64_t TMRA1IE:1;
      uint64_t TMRA1PE:1;
      uint64_t TMRA1CLR:1;
      uint64_t TMRA1POL:1;
      uint64_t reservedSpace0:3;
      uint64_t TMRB1EN:1;
      uint64_t TMRB1CLK:5;
      uint64_t TMRB1FN:3;
      uint64_t TMRB1IE:1;
      uint64_t TMRB1PE:1;
      uint64_t TMRB1CLR:1;
      uint64_t TMRB1POL:1;
      uint64_t reservedSpace1:2;
      uint64_t CTLINK1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTTMRA2:16;
      uint64_t CTTMRB2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPR0A2:16;
      uint64_t CMPR1A2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPRA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPR0B2:16;
      uint64_t CMPR1B2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPRB2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMRA2EN:1;
      uint64_t TMRA2CLK:5;
      uint64_t TMRA2FN:3;
      uint64_t TMRA2IE:1;
      uint64_t TMRA2PE:1;
      uint64_t TMRA2CLR:1;
      uint64_t TMRA2POL:1;
      uint64_t reservedSpace0:3;
      uint64_t TMRB2EN:1;
      uint64_t TMRB2CLK:5;
      uint64_t TMRB2FN:3;
      uint64_t TMRB2IE:1;
      uint64_t TMRB2PE:1;
      uint64_t TMRB2CLR:1;
      uint64_t TMRB2POL:1;
      uint64_t reservedSpace1:2;
      uint64_t CTLINK2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTTMRA3:16;
      uint64_t CTTMRB3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPR0A3:16;
      uint64_t CMPR1A3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPRA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPR0B3:16;
      uint64_t CMPR1B3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPRB3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMRA3EN:1;
      uint64_t TMRA3CLK:5;
      uint64_t TMRA3FN:3;
      uint64_t TMRA3IE:1;
      uint64_t TMRA3PE:1;
      uint64_t TMRA3CLR:1;
      uint64_t TMRA3POL:1;
      uint64_t reservedSpace0:2;
      uint64_t ADCEN:1;
      uint64_t TMRB3EN:1;
      uint64_t TMRB3CLK:5;
      uint64_t TMRB3FN:3;
      uint64_t TMRB3IE:1;
      uint64_t TMRB3PE:1;
      uint64_t TMRB3CLR:1;
      uint64_t TMRB3POL:1;
      uint64_t reservedSpace1:2;
      uint64_t CTLINK3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL3;

  uint8_t res0[448];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTMRA0INT:1;
      uint64_t CTMRB0INT:1;
      uint64_t CTMRA1INT:1;
      uint64_t CTMRB1INT:1;
      uint64_t CTMRA2INT:1;
      uint64_t CTMRB2INT:1;
      uint64_t CTMRA3INT:1;
      uint64_t CTMRB3INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTMRA0INT:1;
      uint64_t CTMRB0INT:1;
      uint64_t CTMRA1INT:1;
      uint64_t CTMRB1INT:1;
      uint64_t CTMRA2INT:1;
      uint64_t CTMRB2INT:1;
      uint64_t CTMRA3INT:1;
      uint64_t CTMRB3INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTMRA0INT:1;
      uint64_t CTMRB0INT:1;
      uint64_t CTMRA1INT:1;
      uint64_t CTMRB1INT:1;
      uint64_t CTMRA2INT:1;
      uint64_t CTMRB2INT:1;
      uint64_t CTMRA3INT:1;
      uint64_t CTMRB3INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTMRA0INT:1;
      uint64_t CTMRB0INT:1;
      uint64_t CTMRA1INT:1;
      uint64_t CTMRB1INT:1;
      uint64_t CTMRA2INT:1;
      uint64_t CTMRB2INT:1;
      uint64_t CTMRA3INT:1;
      uint64_t CTMRB3INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSET;

};

#define CTIMER (*(volatile struct CTIMER_tag *) 0x40008000)

struct GPIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD0PULL:1;
      uint64_t PAD0INPEN:1;
      uint64_t PAD0STRNG:1;
      uint64_t PAD0FNCSEL:3;
      uint64_t reservedSpace0:2;
      uint64_t PAD1PULL:1;
      uint64_t PAD1INPEN:1;
      uint64_t PAD1STRNG:1;
      uint64_t PAD1FNCSEL:3;
      uint64_t reservedSpace1:2;
      uint64_t PAD2PULL:1;
      uint64_t PAD2INPEN:1;
      uint64_t PAD2STRNG:1;
      uint64_t PAD2FNCSEL:3;
      uint64_t reservedSpace2:2;
      uint64_t PAD3PULL:1;
      uint64_t PAD3INPEN:1;
      uint64_t PAD3STRNG:1;
      uint64_t PAD3FNCSEL:3;
      uint64_t reservedSpace3:1;
      uint64_t PAD3PWRUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADREGA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD4PULL:1;
      uint64_t PAD4INPEN:1;
      uint64_t PAD4STRNG:1;
      uint64_t PAD4FNCSEL:3;
      uint64_t reservedSpace0:1;
      uint64_t PAD4PWRUP:1;
      uint64_t PAD5PULL:1;
      uint64_t PAD5INPEN:1;
      uint64_t PAD5STRNG:1;
      uint64_t PAD5FNCSEL:3;
      uint64_t PAD5RSEL:2;
      uint64_t PAD6PULL:1;
      uint64_t PAD6INPEN:1;
      uint64_t PAD6STRNG:1;
      uint64_t PAD6FNCSEL:3;
      uint64_t PAD6RSEL:2;
      uint64_t PAD7PULL:1;
      uint64_t PAD7INPEN:1;
      uint64_t PAD7STRNG:1;
      uint64_t PAD7FNCSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADREGB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD8PULL:1;
      uint64_t PAD8INPEN:1;
      uint64_t PAD8STRNG:1;
      uint64_t PAD8FNCSEL:3;
      uint64_t PAD8RSEL:2;
      uint64_t PAD9PULL:1;
      uint64_t PAD9INPEN:1;
      uint64_t PAD9STRNG:1;
      uint64_t PAD9FNCSEL:3;
      uint64_t PAD9RSEL:2;
      uint64_t PAD10PULL:1;
      uint64_t PAD10INPEN:1;
      uint64_t PAD10STRNG:1;
      uint64_t PAD10FNCSEL:3;
      uint64_t reservedSpace0:2;
      uint64_t PAD11PULL:1;
      uint64_t PAD11INPEN:1;
      uint64_t PAD11STRNG:1;
      uint64_t PAD11FNCSEL:2;
      uint64_t reservedSpace1:1;
      uint64_t PAD11PWRDN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADREGC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD12PULL:1;
      uint64_t PAD12INPEN:1;
      uint64_t PAD12STRNG:1;
      uint64_t PAD12FNCSEL:2;
      uint64_t reservedSpace0:3;
      uint64_t PAD13PULL:1;
      uint64_t PAD13INPEN:1;
      uint64_t PAD13STRNG:1;
      uint64_t PAD13FNCSEL:3;
      uint64_t reservedSpace1:2;
      uint64_t PAD14PULL:1;
      uint64_t PAD14INPEN:1;
      uint64_t PAD14STRNG:1;
      uint64_t PAD14FNCSEL:3;
      uint64_t reservedSpace2:2;
      uint64_t PAD15PULL:1;
      uint64_t PAD15INPEN:1;
      uint64_t PAD15STRNG:1;
      uint64_t PAD15FNCSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADREGD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD16PULL:1;
      uint64_t PAD16INPEN:1;
      uint64_t PAD16STRNG:1;
      uint64_t PAD16FNCSEL:2;
      uint64_t reservedSpace0:3;
      uint64_t PAD17PULL:1;
      uint64_t PAD17INPEN:1;
      uint64_t PAD17STRNG:1;
      uint64_t PAD17FNCSEL:3;
      uint64_t reservedSpace1:2;
      uint64_t PAD18PULL:1;
      uint64_t PAD18INPEN:1;
      uint64_t PAD18STRNG:1;
      uint64_t PAD18FNCSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t PAD19PULL:1;
      uint64_t PAD19INPEN:1;
      uint64_t PAD19STRNG:1;
      uint64_t PAD19FNCSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADREGE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD20PULL:1;
      uint64_t PAD20INPEN:1;
      uint64_t PAD20STRNG:1;
      uint64_t PAD20FNCSEL:2;
      uint64_t reservedSpace0:3;
      uint64_t PAD21PULL:1;
      uint64_t PAD21INPEN:1;
      uint64_t PAD21STRNG:1;
      uint64_t PAD21FNCSEL:2;
      uint64_t reservedSpace1:3;
      uint64_t PAD22PULL:1;
      uint64_t PAD22INPEN:1;
      uint64_t PAD22STRNG:1;
      uint64_t PAD22FNCSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t PAD23PULL:1;
      uint64_t PAD23INPEN:1;
      uint64_t PAD23STRNG:1;
      uint64_t PAD23FNCSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADREGF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD24PULL:1;
      uint64_t PAD24INPEN:1;
      uint64_t PAD24STRNG:1;
      uint64_t PAD24FNCSEL:2;
      uint64_t reservedSpace0:3;
      uint64_t PAD25PULL:1;
      uint64_t PAD25INPEN:1;
      uint64_t PAD25STRNG:1;
      uint64_t PAD25FNCSEL:2;
      uint64_t reservedSpace1:3;
      uint64_t PAD26PULL:1;
      uint64_t PAD26INPEN:1;
      uint64_t PAD26STRNG:1;
      uint64_t PAD26FNCSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t PAD27PULL:1;
      uint64_t PAD27INPEN:1;
      uint64_t PAD27STRNG:1;
      uint64_t PAD27FNCSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADREGG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD28PULL:1;
      uint64_t PAD28INPEN:1;
      uint64_t PAD28STRNG:1;
      uint64_t PAD28FNCSEL:2;
      uint64_t reservedSpace0:3;
      uint64_t PAD29PULL:1;
      uint64_t PAD29INPEN:1;
      uint64_t PAD29STRNG:1;
      uint64_t PAD29FNCSEL:2;
      uint64_t reservedSpace1:3;
      uint64_t PAD30PULL:1;
      uint64_t PAD30INPEN:1;
      uint64_t PAD30STRNG:1;
      uint64_t PAD30FNCSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t PAD31PULL:1;
      uint64_t PAD31INPEN:1;
      uint64_t PAD31STRNG:1;
      uint64_t PAD31FNCSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADREGH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD32PULL:1;
      uint64_t PAD32INPEN:1;
      uint64_t PAD32STRNG:1;
      uint64_t PAD32FNCSEL:2;
      uint64_t reservedSpace0:3;
      uint64_t PAD33PULL:1;
      uint64_t PAD33INPEN:1;
      uint64_t PAD33STRNG:1;
      uint64_t PAD33FNCSEL:2;
      uint64_t reservedSpace1:3;
      uint64_t PAD34PULL:1;
      uint64_t PAD34INPEN:1;
      uint64_t PAD34STRNG:1;
      uint64_t PAD34FNCSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t PAD35PULL:1;
      uint64_t PAD35INPEN:1;
      uint64_t PAD35STRNG:1;
      uint64_t PAD35FNCSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADREGI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD36PULL:1;
      uint64_t PAD36INPEN:1;
      uint64_t PAD36STRNG:1;
      uint64_t PAD36FNCSEL:2;
      uint64_t reservedSpace0:3;
      uint64_t PAD37PULL:1;
      uint64_t PAD37INPEN:1;
      uint64_t PAD37STRNG:1;
      uint64_t PAD37FNCSEL:2;
      uint64_t reservedSpace1:3;
      uint64_t PAD38PULL:1;
      uint64_t PAD38INPEN:1;
      uint64_t PAD38STRNG:1;
      uint64_t PAD38FNCSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t PAD39PULL:1;
      uint64_t PAD39INPEN:1;
      uint64_t PAD39STRNG:1;
      uint64_t PAD39FNCSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADREGJ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD40PULL:1;
      uint64_t PAD40INPEN:1;
      uint64_t PAD40STRNG:1;
      uint64_t PAD40FNCSEL:2;
      uint64_t reservedSpace0:3;
      uint64_t PAD41PULL:1;
      uint64_t PAD41INPEN:1;
      uint64_t PAD41STRNG:1;
      uint64_t PAD41FNCSEL:2;
      uint64_t reservedSpace1:3;
      uint64_t PAD42PULL:1;
      uint64_t PAD42INPEN:1;
      uint64_t PAD42STRNG:1;
      uint64_t PAD42FNCSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t PAD43PULL:1;
      uint64_t PAD43INPEN:1;
      uint64_t PAD43STRNG:1;
      uint64_t PAD43FNCSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADREGK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD44PULL:1;
      uint64_t PAD44INPEN:1;
      uint64_t PAD44STRNG:1;
      uint64_t PAD44FNCSEL:2;
      uint64_t reservedSpace0:3;
      uint64_t PAD45PULL:1;
      uint64_t PAD45INPEN:1;
      uint64_t PAD45STRNG:1;
      uint64_t PAD45FNCSEL:2;
      uint64_t reservedSpace1:3;
      uint64_t PAD46PULL:1;
      uint64_t PAD46INPEN:1;
      uint64_t PAD46STRNG:1;
      uint64_t PAD46FNCSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t PAD47PULL:1;
      uint64_t PAD47INPEN:1;
      uint64_t PAD47STRNG:1;
      uint64_t PAD47FNCSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADREGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD48PULL:1;
      uint64_t PAD48INPEN:1;
      uint64_t PAD48STRNG:1;
      uint64_t PAD48FNCSEL:2;
      uint64_t reservedSpace0:3;
      uint64_t PAD49PULL:1;
      uint64_t PAD49INPEN:1;
      uint64_t PAD49STRNG:1;
      uint64_t PAD49FNCSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADREGM;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO0INCFG:1;
      uint64_t GPIO0OUTCFG:2;
      uint64_t GPIO0INTD:1;
      uint64_t GPIO1INCFG:1;
      uint64_t GPIO1OUTCFG:2;
      uint64_t GPIO1INTD:1;
      uint64_t GPIO2INCFG:1;
      uint64_t GPIO2OUTCFG:2;
      uint64_t GPIO2INTD:1;
      uint64_t GPIO3INCFG:1;
      uint64_t GPIO3OUTCFG:2;
      uint64_t GPIO3INTD:1;
      uint64_t GPIO4INCFG:1;
      uint64_t GPIO4OUTCFG:2;
      uint64_t GPIO4INTD:1;
      uint64_t GPIO5INCFG:1;
      uint64_t GPIO5OUTCFG:2;
      uint64_t GPIO5INTD:1;
      uint64_t GPIO6INCFG:1;
      uint64_t GPIO6OUTCFG:2;
      uint64_t GPIO6INTD:1;
      uint64_t GPIO7INCFG:1;
      uint64_t GPIO7OUTCFG:2;
      uint64_t GPIO7INTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO8INCFG:1;
      uint64_t GPIO8OUTCFG:2;
      uint64_t GPIO8INTD:1;
      uint64_t GPIO9INCFG:1;
      uint64_t GPIO9OUTCFG:2;
      uint64_t GPIO9INTD:1;
      uint64_t GPIO10INCFG:1;
      uint64_t GPIO10OUTCFG:2;
      uint64_t GPIO10INTD:1;
      uint64_t GPIO11INCFG:1;
      uint64_t GPIO11OUTCFG:2;
      uint64_t GPIO11INTD:1;
      uint64_t GPIO12INCFG:1;
      uint64_t GPIO12OUTCFG:2;
      uint64_t GPIO12INTD:1;
      uint64_t GPIO13INCFG:1;
      uint64_t GPIO13OUTCFG:2;
      uint64_t GPIO13INTD:1;
      uint64_t GPIO14INCFG:1;
      uint64_t GPIO14OUTCFG:2;
      uint64_t GPIO14INTD:1;
      uint64_t GPIO15INCFG:1;
      uint64_t GPIO15OUTCFG:2;
      uint64_t GPIO15INTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO16INCFG:1;
      uint64_t GPIO16OUTCFG:2;
      uint64_t GPIO16INTD:1;
      uint64_t GPIO17INCFG:1;
      uint64_t GPIO17OUTCFG:2;
      uint64_t GPIO17INTD:1;
      uint64_t GPIO18INCFG:1;
      uint64_t GPIO18OUTCFG:2;
      uint64_t GPIO18INTD:1;
      uint64_t GPIO19INCFG:1;
      uint64_t GPIO19OUTCFG:2;
      uint64_t GPIO19INTD:1;
      uint64_t GPIO20INCFG:1;
      uint64_t GPIO20OUTCFG:2;
      uint64_t GPIO20INTD:1;
      uint64_t GPIO21INCFG:1;
      uint64_t GPIO21OUTCFG:2;
      uint64_t GPIO21INTD:1;
      uint64_t GPIO22INCFG:1;
      uint64_t GPIO22OUTCFG:2;
      uint64_t GPIO22INTD:1;
      uint64_t GPIO23INCFG:1;
      uint64_t GPIO23OUTCFG:2;
      uint64_t GPIO23INTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO24INCFG:1;
      uint64_t GPIO24OUTCFG:2;
      uint64_t GPIO24INTD:1;
      uint64_t GPIO25INCFG:1;
      uint64_t GPIO25OUTCFG:2;
      uint64_t GPIO25INTD:1;
      uint64_t GPIO26INCFG:1;
      uint64_t GPIO26OUTCFG:2;
      uint64_t GPIO26INTD:1;
      uint64_t GPIO27INCFG:1;
      uint64_t GPIO27OUTCFG:2;
      uint64_t GPIO27INTD:1;
      uint64_t GPIO28INCFG:1;
      uint64_t GPIO28OUTCFG:2;
      uint64_t GPIO28INTD:1;
      uint64_t GPIO29INCFG:1;
      uint64_t GPIO29OUTCFG:2;
      uint64_t GPIO29INTD:1;
      uint64_t GPIO30INCFG:1;
      uint64_t GPIO30OUTCFG:2;
      uint64_t GPIO30INTD:1;
      uint64_t GPIO31INCFG:1;
      uint64_t GPIO31OUTCFG:2;
      uint64_t GPIO31INTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO32INCFG:1;
      uint64_t GPIO32OUTCFG:2;
      uint64_t GPIO32INTD:1;
      uint64_t GPIO33INCFG:1;
      uint64_t GPIO33OUTCFG:2;
      uint64_t GPIO33INTD:1;
      uint64_t GPIO34INCFG:1;
      uint64_t GPIO34OUTCFG:2;
      uint64_t GPIO34INTD:1;
      uint64_t GPIO35INCFG:1;
      uint64_t GPIO35OUTCFG:2;
      uint64_t GPIO35INTD:1;
      uint64_t GPIO36INCFG:1;
      uint64_t GPIO36OUTCFG:2;
      uint64_t GPIO36INTD:1;
      uint64_t GPIO37INCFG:1;
      uint64_t GPIO37OUTCFG:2;
      uint64_t GPIO37INTD:1;
      uint64_t GPIO38INCFG:1;
      uint64_t GPIO38OUTCFG:2;
      uint64_t GPIO38INTD:1;
      uint64_t GPIO39INCFG:1;
      uint64_t GPIO39OUTCFG:2;
      uint64_t GPIO39INTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO40INCFG:1;
      uint64_t GPIO40OUTCFG:2;
      uint64_t GPIO40INTD:1;
      uint64_t GPIO41INCFG:1;
      uint64_t GPIO41OUTCFG:2;
      uint64_t GPIO41INTD:1;
      uint64_t GPIO42INCFG:1;
      uint64_t GPIO42OUTCFG:2;
      uint64_t GPIO42INTD:1;
      uint64_t GPIO43INCFG:1;
      uint64_t GPIO43OUTCFG:2;
      uint64_t GPIO43INTD:1;
      uint64_t GPIO44INCFG:1;
      uint64_t GPIO44OUTCFG:2;
      uint64_t GPIO44INTD:1;
      uint64_t GPIO45INCFG:1;
      uint64_t GPIO45OUTCFG:2;
      uint64_t GPIO45INTD:1;
      uint64_t GPIO46INCFG:1;
      uint64_t GPIO46OUTCFG:2;
      uint64_t GPIO46INTD:1;
      uint64_t GPIO47INCFG:1;
      uint64_t GPIO47OUTCFG:2;
      uint64_t GPIO47INTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO48INCFG:1;
      uint64_t GPIO48OUTCFG:2;
      uint64_t GPIO48INTD:1;
      uint64_t GPIO49INCFG:1;
      uint64_t GPIO49OUTCFG:2;
      uint64_t GPIO49INTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGG;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADKEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADKEY;

  uint8_t res2[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDB:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTB:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTSA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTSB:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTSB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTCA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTCA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTCB:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTCB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENB:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENSA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENSB:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENSB;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENCA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENCA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENCB:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENCB;

  uint8_t res4[324];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO0:1;
      uint64_t GPIO1:1;
      uint64_t GPIO2:1;
      uint64_t GPIO3:1;
      uint64_t GPIO4:1;
      uint64_t GPIO5:1;
      uint64_t GPIO6:1;
      uint64_t GPIO7:1;
      uint64_t GPIO8:1;
      uint64_t GPIO9:1;
      uint64_t GPIO10:1;
      uint64_t GPIO11:1;
      uint64_t GPIO12:1;
      uint64_t GPIO13:1;
      uint64_t GPIO14:1;
      uint64_t GPIO15:1;
      uint64_t GPIO16:1;
      uint64_t GPIO17:1;
      uint64_t GPIO18:1;
      uint64_t GPIO19:1;
      uint64_t GPIO20:1;
      uint64_t GPIO21:1;
      uint64_t GPIO22:1;
      uint64_t GPIO23:1;
      uint64_t GPIO24:1;
      uint64_t GPIO25:1;
      uint64_t GPIO26:1;
      uint64_t GPIO27:1;
      uint64_t GPIO28:1;
      uint64_t GPIO29:1;
      uint64_t GPIO30:1;
      uint64_t GPIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT0EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO0:1;
      uint64_t GPIO1:1;
      uint64_t GPIO2:1;
      uint64_t GPIO3:1;
      uint64_t GPIO4:1;
      uint64_t GPIO5:1;
      uint64_t GPIO6:1;
      uint64_t GPIO7:1;
      uint64_t GPIO8:1;
      uint64_t GPIO9:1;
      uint64_t GPIO10:1;
      uint64_t GPIO11:1;
      uint64_t GPIO12:1;
      uint64_t GPIO13:1;
      uint64_t GPIO14:1;
      uint64_t GPIO15:1;
      uint64_t GPIO16:1;
      uint64_t GPIO17:1;
      uint64_t GPIO18:1;
      uint64_t GPIO19:1;
      uint64_t GPIO20:1;
      uint64_t GPIO21:1;
      uint64_t GPIO22:1;
      uint64_t GPIO23:1;
      uint64_t GPIO24:1;
      uint64_t GPIO25:1;
      uint64_t GPIO26:1;
      uint64_t GPIO27:1;
      uint64_t GPIO28:1;
      uint64_t GPIO29:1;
      uint64_t GPIO30:1;
      uint64_t GPIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT0STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO0:1;
      uint64_t GPIO1:1;
      uint64_t GPIO2:1;
      uint64_t GPIO3:1;
      uint64_t GPIO4:1;
      uint64_t GPIO5:1;
      uint64_t GPIO6:1;
      uint64_t GPIO7:1;
      uint64_t GPIO8:1;
      uint64_t GPIO9:1;
      uint64_t GPIO10:1;
      uint64_t GPIO11:1;
      uint64_t GPIO12:1;
      uint64_t GPIO13:1;
      uint64_t GPIO14:1;
      uint64_t GPIO15:1;
      uint64_t GPIO16:1;
      uint64_t GPIO17:1;
      uint64_t GPIO18:1;
      uint64_t GPIO19:1;
      uint64_t GPIO20:1;
      uint64_t GPIO21:1;
      uint64_t GPIO22:1;
      uint64_t GPIO23:1;
      uint64_t GPIO24:1;
      uint64_t GPIO25:1;
      uint64_t GPIO26:1;
      uint64_t GPIO27:1;
      uint64_t GPIO28:1;
      uint64_t GPIO29:1;
      uint64_t GPIO30:1;
      uint64_t GPIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT0CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO0:1;
      uint64_t GPIO1:1;
      uint64_t GPIO2:1;
      uint64_t GPIO3:1;
      uint64_t GPIO4:1;
      uint64_t GPIO5:1;
      uint64_t GPIO6:1;
      uint64_t GPIO7:1;
      uint64_t GPIO8:1;
      uint64_t GPIO9:1;
      uint64_t GPIO10:1;
      uint64_t GPIO11:1;
      uint64_t GPIO12:1;
      uint64_t GPIO13:1;
      uint64_t GPIO14:1;
      uint64_t GPIO15:1;
      uint64_t GPIO16:1;
      uint64_t GPIO17:1;
      uint64_t GPIO18:1;
      uint64_t GPIO19:1;
      uint64_t GPIO20:1;
      uint64_t GPIO21:1;
      uint64_t GPIO22:1;
      uint64_t GPIO23:1;
      uint64_t GPIO24:1;
      uint64_t GPIO25:1;
      uint64_t GPIO26:1;
      uint64_t GPIO27:1;
      uint64_t GPIO28:1;
      uint64_t GPIO29:1;
      uint64_t GPIO30:1;
      uint64_t GPIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT0SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO32:1;
      uint64_t GPIO33:1;
      uint64_t GPIO34:1;
      uint64_t GPIO35:1;
      uint64_t GPIO36:1;
      uint64_t GPIO37:1;
      uint64_t GPIO38:1;
      uint64_t GPIO39:1;
      uint64_t GPIO40:1;
      uint64_t GPIO41:1;
      uint64_t GPIO42:1;
      uint64_t GPIO43:1;
      uint64_t GPIO44:1;
      uint64_t GPIO45:1;
      uint64_t GPIO46:1;
      uint64_t GPIO47:1;
      uint64_t GPIO48:1;
      uint64_t GPIO49:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT1EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO32:1;
      uint64_t GPIO33:1;
      uint64_t GPIO34:1;
      uint64_t GPIO35:1;
      uint64_t GPIO36:1;
      uint64_t GPIO37:1;
      uint64_t GPIO38:1;
      uint64_t GPIO39:1;
      uint64_t GPIO40:1;
      uint64_t GPIO41:1;
      uint64_t GPIO42:1;
      uint64_t GPIO43:1;
      uint64_t GPIO44:1;
      uint64_t GPIO45:1;
      uint64_t GPIO46:1;
      uint64_t GPIO47:1;
      uint64_t GPIO48:1;
      uint64_t GPIO49:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT1STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO32:1;
      uint64_t GPIO33:1;
      uint64_t GPIO34:1;
      uint64_t GPIO35:1;
      uint64_t GPIO36:1;
      uint64_t GPIO37:1;
      uint64_t GPIO38:1;
      uint64_t GPIO39:1;
      uint64_t GPIO40:1;
      uint64_t GPIO41:1;
      uint64_t GPIO42:1;
      uint64_t GPIO43:1;
      uint64_t GPIO44:1;
      uint64_t GPIO45:1;
      uint64_t GPIO46:1;
      uint64_t GPIO47:1;
      uint64_t GPIO48:1;
      uint64_t GPIO49:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT1CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO32:1;
      uint64_t GPIO33:1;
      uint64_t GPIO34:1;
      uint64_t GPIO35:1;
      uint64_t GPIO36:1;
      uint64_t GPIO37:1;
      uint64_t GPIO38:1;
      uint64_t GPIO39:1;
      uint64_t GPIO40:1;
      uint64_t GPIO41:1;
      uint64_t GPIO42:1;
      uint64_t GPIO43:1;
      uint64_t GPIO44:1;
      uint64_t GPIO45:1;
      uint64_t GPIO46:1;
      uint64_t GPIO47:1;
      uint64_t GPIO48:1;
      uint64_t GPIO49:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT1SET;

};

#define GPIO (*(volatile struct GPIO_tag *) 0x40010000)

struct IOMSTR0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO;

  uint8_t res0[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZ:7;
      uint64_t reservedSpace0:9;
      uint64_t FIFOREM:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOPTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLNGTH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TLNGTH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFORTHR:6;
      uint64_t reservedSpace0:2;
      uint64_t FIFOWTHR:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t FSEL:3;
      uint64_t DIV3:1;
      uint64_t DIVEN:1;
      uint64_t reservedSpace1:3;
      uint64_t LOWPER:8;
      uint64_t TOTPER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRPT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDRPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR:1;
      uint64_t CMDACT:1;
      uint64_t IDLEST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFCSEL:1;
      uint64_t SPOL:1;
      uint64_t SPHA:1;
      uint64_t reservedSpace0:28;
      uint64_t IFCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  uint8_t res1[224];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDCMP:1;
      uint64_t THR:1;
      uint64_t FUNDFL:1;
      uint64_t FOVFL:1;
      uint64_t NAK:1;
      uint64_t WTLEN:1;
      uint64_t IACC:1;
      uint64_t ICMD:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ARB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDCMP:1;
      uint64_t THR:1;
      uint64_t FUNDFL:1;
      uint64_t FOVFL:1;
      uint64_t NAK:1;
      uint64_t WTLEN:1;
      uint64_t IACC:1;
      uint64_t ICMD:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ARB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDCMP:1;
      uint64_t THR:1;
      uint64_t FUNDFL:1;
      uint64_t FOVFL:1;
      uint64_t NAK:1;
      uint64_t WTLEN:1;
      uint64_t IACC:1;
      uint64_t ICMD:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ARB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDCMP:1;
      uint64_t THR:1;
      uint64_t FUNDFL:1;
      uint64_t FOVFL:1;
      uint64_t NAK:1;
      uint64_t WTLEN:1;
      uint64_t IACC:1;
      uint64_t ICMD:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ARB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSET;

};

#define IOMSTR0 (*(volatile struct IOMSTR0_tag *) 0x50004000)

struct IOMSTR1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO;

  uint8_t res0[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZ:7;
      uint64_t reservedSpace0:9;
      uint64_t FIFOREM:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOPTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLNGTH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TLNGTH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFORTHR:6;
      uint64_t reservedSpace0:2;
      uint64_t FIFOWTHR:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t FSEL:3;
      uint64_t DIV3:1;
      uint64_t DIVEN:1;
      uint64_t reservedSpace1:3;
      uint64_t LOWPER:8;
      uint64_t TOTPER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRPT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDRPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR:1;
      uint64_t CMDACT:1;
      uint64_t IDLEST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFCSEL:1;
      uint64_t SPOL:1;
      uint64_t SPHA:1;
      uint64_t reservedSpace0:28;
      uint64_t IFCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  uint8_t res1[224];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDCMP:1;
      uint64_t THR:1;
      uint64_t FUNDFL:1;
      uint64_t FOVFL:1;
      uint64_t NAK:1;
      uint64_t WTLEN:1;
      uint64_t IACC:1;
      uint64_t ICMD:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ARB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDCMP:1;
      uint64_t THR:1;
      uint64_t FUNDFL:1;
      uint64_t FOVFL:1;
      uint64_t NAK:1;
      uint64_t WTLEN:1;
      uint64_t IACC:1;
      uint64_t ICMD:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ARB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDCMP:1;
      uint64_t THR:1;
      uint64_t FUNDFL:1;
      uint64_t FOVFL:1;
      uint64_t NAK:1;
      uint64_t WTLEN:1;
      uint64_t IACC:1;
      uint64_t ICMD:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ARB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDCMP:1;
      uint64_t THR:1;
      uint64_t FUNDFL:1;
      uint64_t FOVFL:1;
      uint64_t NAK:1;
      uint64_t WTLEN:1;
      uint64_t IACC:1;
      uint64_t ICMD:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ARB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSET;

};

#define IOMSTR1 (*(volatile struct IOMSTR1_tag *) 0x50005000)

struct IOSLAVE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOPTR:8;
      uint64_t FIFOSIZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOPTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOBASE:5;
      uint64_t reservedSpace0:3;
      uint64_t FIFOMAX:6;
      uint64_t reservedSpace1:10;
      uint64_t ROBASE:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOTHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOUPD:1;
      uint64_t IOREAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOCTR:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOINC:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFCSEL:1;
      uint64_t SPOL:1;
      uint64_t LSB:1;
      uint64_t reservedSpace0:1;
      uint64_t STARTRD:1;
      uint64_t reservedSpace1:3;
      uint64_t I2CADDR:12;
      uint64_t reservedSpace2:11;
      uint64_t IFCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRENC:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRENC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOINTEN:8;
      uint64_t IOINT:8;
      uint64_t IOINTCLR:1;
      uint64_t reservedSpace0:7;
      uint64_t IOINTSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOINTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GADATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GENADD;

  uint8_t res0[216];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSIZE:1;
      uint64_t FOVFL:1;
      uint64_t FUNDFL:1;
      uint64_t FRDERR:1;
      uint64_t GENAD:1;
      uint64_t IOINTW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSIZE:1;
      uint64_t FOVFL:1;
      uint64_t FUNDFL:1;
      uint64_t FRDERR:1;
      uint64_t GENAD:1;
      uint64_t IOINTW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSIZE:1;
      uint64_t FOVFL:1;
      uint64_t FUNDFL:1;
      uint64_t FRDERR:1;
      uint64_t GENAD:1;
      uint64_t IOINTW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSIZE:1;
      uint64_t FOVFL:1;
      uint64_t FUNDFL:1;
      uint64_t FRDERR:1;
      uint64_t GENAD:1;
      uint64_t IOINTW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGACC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGACCINTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGACC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGACCINTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGACC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGACCINTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGACC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGACCINTSET;

};

#define IOSLAVE (*(volatile struct IOSLAVE_tag *) 0x50000100)

struct MCUCTRL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUAL:1;
      uint64_t TEMP:2;
      uint64_t PINS:3;
      uint64_t PKG:2;
      uint64_t MINORREV:4;
      uint64_t MAJORREV:4;
      uint64_t RAM:4;
      uint64_t FLASH:4;
      uint64_t CLASS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHIP_INFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHIPID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHIPID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVISION:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHIPREV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEMBUCKEN:1;
      uint64_t COREBUCKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPPLYSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEMBUCKON:1;
      uint64_t COREBUCKON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPPLYSTATUS;

  uint8_t res0[228];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BGPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BANDGAPEN;

  uint8_t res1[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANK0:1;
      uint64_t BANK1:1;
      uint64_t BANK2:1;
      uint64_t BANK3:1;
      uint64_t BANK4:1;
      uint64_t BANK5:1;
      uint64_t BANK6:1;
      uint64_t BANK7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRAMPWDINSLEEP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANK0:1;
      uint64_t BANK1:1;
      uint64_t BANK2:1;
      uint64_t BANK3:1;
      uint64_t BANK4:1;
      uint64_t BANK5:1;
      uint64_t BANK6:1;
      uint64_t BANK7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRAMPWRDIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANK0:1;
      uint64_t BANK1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASHPWRDIS;

  uint8_t res2[116];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICODEFAULTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCODEFAULTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSFAULTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICODE:1;
      uint64_t DCODE:1;
      uint64_t SYS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FAULTSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FAULTCAPTUREEN;

  uint8_t res3[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:7;
      uint64_t CLKSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPIUCTRL;

};

#define MCUCTRL (*(volatile struct MCUCTRL_tag *) 0x40020000)

struct RSTGEN_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t BODHREN:1;
      uint64_t WDREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWPOIKEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWPOI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWPORKEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWPOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXRSTAT:1;
      uint64_t PORSTAT:1;
      uint64_t BORSTAT:1;
      uint64_t SWRSTAT:1;
      uint64_t POIRSTAT:1;
      uint64_t DBGRSTAT:1;
      uint64_t WDRSTAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRSTAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLRSTAT;

  uint8_t res0[492];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BODH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BODH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BODH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BODH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSET;

};

#define RSTGEN (*(volatile struct RSTGEN_tag *) 0x40000000)

struct UART_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t FEDATA:1;
      uint64_t PEDATA:1;
      uint64_t BEDATA:1;
      uint64_t OEDATA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FESTAT:1;
      uint64_t PESTAT:1;
      uint64_t BESTAT:1;
      uint64_t OESTAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTS:1;
      uint64_t DSR:1;
      uint64_t DCD:1;
      uint64_t BUSY:1;
      uint64_t RXFE:1;
      uint64_t TXFF:1;
      uint64_t RXFF:1;
      uint64_t TXFE:1;
      uint64_t RI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ILPDVSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ILPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVINT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IBRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVFRAC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRK:1;
      uint64_t PEN:1;
      uint64_t EPS:1;
      uint64_t STP2:1;
      uint64_t FEN:1;
      uint64_t WLEN:2;
      uint64_t SPS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UARTEN:1;
      uint64_t SIREN:1;
      uint64_t SIRLP:1;
      uint64_t CLKEN:1;
      uint64_t CLKSEL:3;
      uint64_t LBE:1;
      uint64_t TXE:1;
      uint64_t RXE:1;
      uint64_t DTR:1;
      uint64_t RTS:1;
      uint64_t OUT1:1;
      uint64_t OUT2:1;
      uint64_t RTSEN:1;
      uint64_t CTSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXIFLSEL:3;
      uint64_t RXIFLSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFLS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIMIM:1;
      uint64_t CTSMIM:1;
      uint64_t DCDMIM:1;
      uint64_t DSRMIM:1;
      uint64_t RXIM:1;
      uint64_t TXIM:1;
      uint64_t RTIM:1;
      uint64_t FEIM:1;
      uint64_t PEIM:1;
      uint64_t BEIM:1;
      uint64_t OEIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIMRIS:1;
      uint64_t CTSMRIS:1;
      uint64_t DCDMRIS:1;
      uint64_t DSRMRIS:1;
      uint64_t RXRIS:1;
      uint64_t TXRIS:1;
      uint64_t RTRIS:1;
      uint64_t FERIS:1;
      uint64_t PERIS:1;
      uint64_t BERIS:1;
      uint64_t OERIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIMMIS:1;
      uint64_t CTSMMIS:1;
      uint64_t DCDMMIS:1;
      uint64_t DSRMMIS:1;
      uint64_t RXMIS:1;
      uint64_t TXMIS:1;
      uint64_t RTMIS:1;
      uint64_t FEMIS:1;
      uint64_t PEMIS:1;
      uint64_t BEMIS:1;
      uint64_t OEMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIMIC:1;
      uint64_t CTSMIC:1;
      uint64_t DCDMIC:1;
      uint64_t DSRMIC:1;
      uint64_t RXIC:1;
      uint64_t TXIC:1;
      uint64_t RTIC:1;
      uint64_t FEIC:1;
      uint64_t PEIC:1;
      uint64_t BEIC:1;
      uint64_t OEIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEC;

};

#define UART (*(volatile struct UART_tag *) 0x4001c000)

struct VCOMP_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSEL:2;
      uint64_t reservedSpace0:6;
      uint64_t NSEL:2;
      uint64_t reservedSpace1:6;
      uint64_t LVLSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPOUT:1;
      uint64_t PWDSTAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWDKEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWDKEY;

  uint8_t res0[500];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTLOW:1;
      uint64_t OUTHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTLOW:1;
      uint64_t OUTHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTLOW:1;
      uint64_t OUTHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTLOW:1;
      uint64_t OUTHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSET;

};

#define VCOMP (*(volatile struct VCOMP_tag *) 0x4000c000)

struct WDT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTEN:1;
      uint64_t INTEN:1;
      uint64_t RESEN:1;
      uint64_t reservedSpace0:5;
      uint64_t RESVAL:8;
      uint64_t INTVAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSTRT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTRT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

  uint8_t res0[500];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDT_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDT_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDT_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDT_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSET;

};

#define WDT (*(volatile struct WDT_tag *) 0x40024000)

struct CLKGEN_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CALXT:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CALRC:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACALCTR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACALCTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STOPXT:1;
      uint64_t STOPRC:1;
      uint64_t reservedSpace0:4;
      uint64_t FOS:1;
      uint64_t OSEL:1;
      uint64_t ACAL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKSEL:6;
      uint64_t reservedSpace0:1;
      uint64_t CKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKKEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKKEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CORESEL:3;
      uint64_t MEMSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OMODE:1;
      uint64_t OSCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFADJEN:1;
      uint64_t HFADJCK:3;
      uint64_t reservedSpace0:4;
      uint64_t HFXTADJ:11;
      uint64_t HFWARMUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFADJ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFTUNERB:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLOCKEN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCKEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTEN;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTR100:8;
      uint64_t CTRSEC:7;
      uint64_t reservedSpace0:1;
      uint64_t CTRMIN:7;
      uint64_t reservedSpace1:1;
      uint64_t CTRHR:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRLOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTRDATE:6;
      uint64_t reservedSpace0:2;
      uint64_t CTRMO:5;
      uint64_t reservedSpace1:3;
      uint64_t CTRYR:8;
      uint64_t CTRWKDY:3;
      uint64_t CB:1;
      uint64_t CEB:1;
      uint64_t reservedSpace2:2;
      uint64_t CTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRUP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALM100:8;
      uint64_t ALMSEC:7;
      uint64_t reservedSpace0:1;
      uint64_t ALMMIN:7;
      uint64_t reservedSpace1:1;
      uint64_t ALMHR:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALMLOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALMDATE:6;
      uint64_t reservedSpace0:2;
      uint64_t ALMMO:5;
      uint64_t reservedSpace1:3;
      uint64_t ALMWKDY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALMUP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRTC:1;
      uint64_t RPT:3;
      uint64_t RSTOP:1;
      uint64_t HR1224:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCCTL;

  uint8_t res1[172];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACF:1;
      uint64_t ACC:1;
      uint64_t OF:1;
      uint64_t ALM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACF:1;
      uint64_t ACC:1;
      uint64_t OF:1;
      uint64_t ALM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACF:1;
      uint64_t ACC:1;
      uint64_t OF:1;
      uint64_t ALM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACF:1;
      uint64_t ACC:1;
      uint64_t OF:1;
      uint64_t ALM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSET;

};

#define CLKGEN (*(volatile struct CLKGEN_tag *) 0x40004000)

