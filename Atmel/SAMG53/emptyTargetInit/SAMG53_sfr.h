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

struct I2SC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t CKEN:1;
      uint64_t CKDIS:1;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t reservedSpace0:1;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC0_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:1;
      uint64_t reservedSpace0:1;
      uint64_t DATALENGTH:3;
      uint64_t reservedSpace1:3;
      uint64_t RXMONO:1;
      uint64_t RXDMA:1;
      uint64_t RXLOOP:1;
      uint64_t reservedSpace2:1;
      uint64_t TXMONO:1;
      uint64_t TXDMA:1;
      uint64_t TXSAME:1;
      uint64_t reservedSpace3:1;
      uint64_t IMCKDIV:6;
      uint64_t reservedSpace4:2;
      uint64_t IMCKFS:6;
      uint64_t IMCKMODE:1;
      uint64_t IWS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC0_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEN:1;
      uint64_t RXRDY:1;
      uint64_t RXOR:1;
      uint64_t ENDRX:1;
      uint64_t TXEN:1;
      uint64_t TXRDY:1;
      uint64_t TXUR:1;
      uint64_t ENDTX:1;
      uint64_t RXORCH:2;
      uint64_t reservedSpace0:9;
      uint64_t RXBUFF:1;
      uint64_t TXURCH:2;
      uint64_t reservedSpace1:9;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC0_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RXOR:1;
      uint64_t reservedSpace1:3;
      uint64_t TXUR:1;
      uint64_t reservedSpace2:1;
      uint64_t RXORCH:2;
      uint64_t reservedSpace3:10;
      uint64_t TXURCH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC0_SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RXOR:1;
      uint64_t reservedSpace1:3;
      uint64_t TXUR:1;
      uint64_t reservedSpace2:1;
      uint64_t RXORCH:2;
      uint64_t reservedSpace3:10;
      uint64_t TXURCH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC0_SSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXRDY:1;
      uint64_t RXOR:1;
      uint64_t ENDRX:1;
      uint64_t reservedSpace1:1;
      uint64_t TXRDY:1;
      uint64_t TXUR:1;
      uint64_t ENDTX:1;
      uint64_t reservedSpace2:11;
      uint64_t RXFULL:1;
      uint64_t reservedSpace3:11;
      uint64_t TXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC0_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXRDY:1;
      uint64_t RXOR:1;
      uint64_t ENDRX:1;
      uint64_t reservedSpace1:1;
      uint64_t TXRDY:1;
      uint64_t TXUR:1;
      uint64_t ENDTX:1;
      uint64_t reservedSpace2:11;
      uint64_t RXFULL:1;
      uint64_t reservedSpace3:11;
      uint64_t TXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC0_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXRDY:1;
      uint64_t RXOR:1;
      uint64_t ENDRX:1;
      uint64_t reservedSpace1:1;
      uint64_t TXRDY:1;
      uint64_t TXUR:1;
      uint64_t ENDTX:1;
      uint64_t reservedSpace2:11;
      uint64_t RXFULL:1;
      uint64_t reservedSpace3:11;
      uint64_t TXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC0_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RHR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC0_RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC0_THR;

  uint8_t res0[216];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC0_RPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC0_RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC0_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC0_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC0_RNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC0_RNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC0_TNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC0_TNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
      uint64_t reservedSpace1:6;
      uint64_t RXCBEN:1;
      uint64_t RXCBDIS:1;
      uint64_t TXCBEN:1;
      uint64_t TXCBDIS:1;
      uint64_t reservedSpace2:4;
      uint64_t ERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC0_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
      uint64_t reservedSpace1:7;
      uint64_t RXCBEN:1;
      uint64_t reservedSpace2:1;
      uint64_t TXCBEN:1;
      uint64_t reservedSpace3:5;
      uint64_t ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC0_PTSR;

};

#define I2SC0 (*(volatile struct I2SC0_tag *) 0x40000000)

struct I2SC1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t CKEN:1;
      uint64_t CKDIS:1;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t reservedSpace0:1;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC1_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:1;
      uint64_t reservedSpace0:1;
      uint64_t DATALENGTH:3;
      uint64_t reservedSpace1:3;
      uint64_t RXMONO:1;
      uint64_t RXDMA:1;
      uint64_t RXLOOP:1;
      uint64_t reservedSpace2:1;
      uint64_t TXMONO:1;
      uint64_t TXDMA:1;
      uint64_t TXSAME:1;
      uint64_t reservedSpace3:1;
      uint64_t IMCKDIV:6;
      uint64_t reservedSpace4:2;
      uint64_t IMCKFS:6;
      uint64_t IMCKMODE:1;
      uint64_t IWS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC1_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEN:1;
      uint64_t RXRDY:1;
      uint64_t RXOR:1;
      uint64_t ENDRX:1;
      uint64_t TXEN:1;
      uint64_t TXRDY:1;
      uint64_t TXUR:1;
      uint64_t ENDTX:1;
      uint64_t RXORCH:2;
      uint64_t reservedSpace0:9;
      uint64_t RXBUFF:1;
      uint64_t TXURCH:2;
      uint64_t reservedSpace1:9;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC1_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RXOR:1;
      uint64_t reservedSpace1:3;
      uint64_t TXUR:1;
      uint64_t reservedSpace2:1;
      uint64_t RXORCH:2;
      uint64_t reservedSpace3:10;
      uint64_t TXURCH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC1_SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RXOR:1;
      uint64_t reservedSpace1:3;
      uint64_t TXUR:1;
      uint64_t reservedSpace2:1;
      uint64_t RXORCH:2;
      uint64_t reservedSpace3:10;
      uint64_t TXURCH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC1_SSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXRDY:1;
      uint64_t RXOR:1;
      uint64_t ENDRX:1;
      uint64_t reservedSpace1:1;
      uint64_t TXRDY:1;
      uint64_t TXUR:1;
      uint64_t ENDTX:1;
      uint64_t reservedSpace2:11;
      uint64_t RXFULL:1;
      uint64_t reservedSpace3:11;
      uint64_t TXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC1_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXRDY:1;
      uint64_t RXOR:1;
      uint64_t ENDRX:1;
      uint64_t reservedSpace1:1;
      uint64_t TXRDY:1;
      uint64_t TXUR:1;
      uint64_t ENDTX:1;
      uint64_t reservedSpace2:11;
      uint64_t RXFULL:1;
      uint64_t reservedSpace3:11;
      uint64_t TXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC1_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXRDY:1;
      uint64_t RXOR:1;
      uint64_t ENDRX:1;
      uint64_t reservedSpace1:1;
      uint64_t TXRDY:1;
      uint64_t TXUR:1;
      uint64_t ENDTX:1;
      uint64_t reservedSpace2:11;
      uint64_t RXFULL:1;
      uint64_t reservedSpace3:11;
      uint64_t TXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC1_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RHR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC1_RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC1_THR;

  uint8_t res0[216];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC1_RPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC1_RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC1_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC1_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC1_RNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC1_RNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC1_TNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC1_TNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
      uint64_t reservedSpace1:6;
      uint64_t RXCBEN:1;
      uint64_t RXCBDIS:1;
      uint64_t TXCBEN:1;
      uint64_t TXCBDIS:1;
      uint64_t reservedSpace2:4;
      uint64_t ERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC1_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
      uint64_t reservedSpace1:7;
      uint64_t RXCBEN:1;
      uint64_t reservedSpace2:1;
      uint64_t TXCBEN:1;
      uint64_t reservedSpace3:5;
      uint64_t ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SC1_PTSR;

};

#define I2SC1 (*(volatile struct I2SC1_tag *) 0x40004000)

struct SPI_tag
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
  } __attribute__((aligned(4))) SPI_CR;

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
  } __attribute__((aligned(4))) SPI_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD:16;
      uint64_t PCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_RDR;

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
  } __attribute__((aligned(4))) SPI_TDR;

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
  } __attribute__((aligned(4))) SPI_SR;

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
  } __attribute__((aligned(4))) SPI_IER;

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
  } __attribute__((aligned(4))) SPI_IDR;

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
  } __attribute__((aligned(4))) SPI_IMR;

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
  } __attribute__((aligned(4))) SPI_CSR_0;

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
  } __attribute__((aligned(4))) SPI_CSR_1;

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
  } __attribute__((aligned(4))) SPI_CSR_2;

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
  } __attribute__((aligned(4))) SPI_CSR_3;

  uint8_t res1[164];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_WPSR;

  uint8_t res2[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_RPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_RNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_RNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_TNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_TNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
      uint64_t reservedSpace1:6;
      uint64_t RXCBEN:1;
      uint64_t RXCBDIS:1;
      uint64_t TXCBEN:1;
      uint64_t TXCBDIS:1;
      uint64_t reservedSpace2:4;
      uint64_t ERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
      uint64_t reservedSpace1:7;
      uint64_t RXCBEN:1;
      uint64_t reservedSpace2:1;
      uint64_t TXCBEN:1;
      uint64_t reservedSpace3:5;
      uint64_t ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_PTSR;

};

#define SPI (*(volatile struct SPI_tag *) 0x40008000)

struct TWI0_tag
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
      uint64_t HSEN:1;
      uint64_t HSDIS:1;
      uint64_t SMBEN:1;
      uint64_t SMBDIS:1;
      uint64_t PECEN:1;
      uint64_t PECDIS:1;
      uint64_t PECRQ:1;
      uint64_t CLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_CR;

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
  } __attribute__((aligned(4))) TWI0_MMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NACKEN:1;
      uint64_t reservedSpace0:1;
      uint64_t SMDA:1;
      uint64_t SMHH:1;
      uint64_t reservedSpace1:2;
      uint64_t SCLWSDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t MASK:7;
      uint64_t reservedSpace3:1;
      uint64_t SADR:7;
      uint64_t reservedSpace4:5;
      uint64_t SADR1EN:1;
      uint64_t SADR2EN:1;
      uint64_t SADR3EN:1;
      uint64_t DATAMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_SMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IADR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_IADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLDIV:8;
      uint64_t CHDIV:8;
      uint64_t CKDIV:3;
      uint64_t reservedSpace0:5;
      uint64_t HOLD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_CWGR;

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
      uint64_t UNRE:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCLWS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
      uint64_t MCACK:1;
      uint64_t reservedSpace0:1;
      uint64_t TOUT:1;
      uint64_t PECERR:1;
      uint64_t SMBDAM:1;
      uint64_t SMBHHM:1;
      uint64_t reservedSpace1:2;
      uint64_t SCL:1;
      uint64_t SDA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_SR;

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
      uint64_t UNRE:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
      uint64_t MCACK:1;
      uint64_t reservedSpace1:1;
      uint64_t TOUT:1;
      uint64_t PECERR:1;
      uint64_t SMBDAM:1;
      uint64_t SMBHHM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_IER;

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
      uint64_t UNRE:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
      uint64_t MCACK:1;
      uint64_t reservedSpace1:1;
      uint64_t TOUT:1;
      uint64_t PECERR:1;
      uint64_t SMBDAM:1;
      uint64_t SMBHHM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_IDR;

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
      uint64_t UNRE:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
      uint64_t MCACK:1;
      uint64_t reservedSpace1:1;
      uint64_t TOUT:1;
      uint64_t PECERR:1;
      uint64_t SMBDAM:1;
      uint64_t SMBHHM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_THR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESC:4;
      uint64_t reservedSpace0:4;
      uint64_t TLOWS:8;
      uint64_t TLOWM:8;
      uint64_t THMAX:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_SMBTR;

  uint8_t res1[4];

  uint32_t TWI0_ACR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FILT:1;
      uint64_t PADFEN:1;
      uint64_t PADFCFG:1;
      uint64_t reservedSpace0:5;
      uint64_t THRES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_FILTR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADR1:7;
      uint64_t reservedSpace0:1;
      uint64_t SADR2:7;
      uint64_t reservedSpace1:1;
      uint64_t SADR3:7;
      uint64_t reservedSpace2:1;
      uint64_t DATAM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_SWMR;

  uint8_t res3[148];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_WPSR;

  uint8_t res4[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_RPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_RNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_RNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_TNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_TNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
      uint64_t reservedSpace1:6;
      uint64_t RXCBEN:1;
      uint64_t RXCBDIS:1;
      uint64_t TXCBEN:1;
      uint64_t TXCBDIS:1;
      uint64_t reservedSpace2:4;
      uint64_t ERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
      uint64_t reservedSpace1:7;
      uint64_t RXCBEN:1;
      uint64_t reservedSpace2:1;
      uint64_t TXCBEN:1;
      uint64_t reservedSpace3:5;
      uint64_t ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_PTSR;

};

#define TWI0 (*(volatile struct TWI0_tag *) 0x40018000)

struct TWI1_tag
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
  } __attribute__((aligned(4))) TWI1_CR;

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
  } __attribute__((aligned(4))) TWI1_MMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_SMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IADR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_IADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLDIV:8;
      uint64_t CHDIV:8;
      uint64_t CKDIV:3;
      uint64_t reservedSpace0:5;
      uint64_t HOLD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_CWGR;

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
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_SR;

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
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_IER;

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
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_IDR;

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
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_THR;

  uint8_t res1[172];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_WPSR;

  uint8_t res2[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_RPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_RNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_RNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_TNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_TNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
      uint64_t reservedSpace1:6;
      uint64_t RXCBEN:1;
      uint64_t RXCBDIS:1;
      uint64_t TXCBEN:1;
      uint64_t TXCBDIS:1;
      uint64_t reservedSpace2:4;
      uint64_t ERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
      uint64_t reservedSpace1:7;
      uint64_t RXCBEN:1;
      uint64_t reservedSpace2:1;
      uint64_t TXCBEN:1;
      uint64_t reservedSpace3:5;
      uint64_t ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_PTSR;

};

#define TWI1 (*(volatile struct TWI1_tag *) 0x4001c000)

struct MEM2MEM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t THDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEM2MEM_THR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSIZE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEM2MEM_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEND:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEM2MEM_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEND:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEM2MEM_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEND:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEM2MEM_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEND:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEM2MEM_ISR;

  uint8_t res0[232];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEM2MEM_RPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEM2MEM_RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEM2MEM_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEM2MEM_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEM2MEM_RNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEM2MEM_RNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEM2MEM_TNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEM2MEM_TNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
      uint64_t reservedSpace1:6;
      uint64_t RXCBEN:1;
      uint64_t RXCBDIS:1;
      uint64_t TXCBEN:1;
      uint64_t TXCBDIS:1;
      uint64_t reservedSpace2:4;
      uint64_t ERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEM2MEM_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
      uint64_t reservedSpace1:7;
      uint64_t RXCBEN:1;
      uint64_t reservedSpace2:1;
      uint64_t TXCBEN:1;
      uint64_t reservedSpace3:5;
      uint64_t ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEM2MEM_PTSR;

};

#define MEM2MEM (*(volatile struct MEM2MEM_tag *) 0x40028000)

struct PDMIC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t reservedSpace0:3;
      uint64_t ENPDM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC0_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PRESCAL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC0_MR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC0_CDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t DRDY:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t ENDRX:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC0_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t DRDY:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t ENDRX:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC0_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t DRDY:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t ENDRX:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC0_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t FIFOCNT:8;
      uint64_t DRDY:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t ENDRX:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC0_ISR;

  uint8_t res1[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t HPFBYP:1;
      uint64_t SINBYP:1;
      uint64_t SIZE:1;
      uint64_t OSR:3;
      uint64_t reservedSpace1:1;
      uint64_t SCALE:4;
      uint64_t SHIFT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC0_DSPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DGAIN:15;
      uint64_t reservedSpace0:1;
      uint64_t OFFSET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC0_DSPR1;

  uint8_t res2[132];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC0_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC0_WPSR;

  uint8_t res3[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC0_RPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC0_RCR;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC0_RNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC0_RNCR;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
      uint64_t reservedSpace1:6;
      uint64_t RXCBEN:1;
      uint64_t RXCBDIS:1;
      uint64_t TXCBEN:1;
      uint64_t TXCBDIS:1;
      uint64_t reservedSpace2:4;
      uint64_t ERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC0_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
      uint64_t reservedSpace1:7;
      uint64_t RXCBEN:1;
      uint64_t reservedSpace2:1;
      uint64_t TXCBEN:1;
      uint64_t reservedSpace3:5;
      uint64_t ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC0_PTSR;

};

#define PDMIC0 (*(volatile struct PDMIC0_tag *) 0x4002c000)

struct PDMIC1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t reservedSpace0:3;
      uint64_t ENPDM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC1_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PRESCAL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC1_MR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC1_CDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t DRDY:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t ENDRX:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC1_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t DRDY:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t ENDRX:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC1_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t DRDY:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t ENDRX:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC1_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t FIFOCNT:8;
      uint64_t DRDY:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t ENDRX:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC1_ISR;

  uint8_t res1[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t HPFBYP:1;
      uint64_t SINBYP:1;
      uint64_t SIZE:1;
      uint64_t OSR:3;
      uint64_t reservedSpace1:1;
      uint64_t SCALE:4;
      uint64_t SHIFT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC1_DSPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DGAIN:15;
      uint64_t reservedSpace0:1;
      uint64_t OFFSET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC1_DSPR1;

  uint8_t res2[132];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC1_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC1_WPSR;

  uint8_t res3[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC1_RPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC1_RCR;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC1_RNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC1_RNCR;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
      uint64_t reservedSpace1:6;
      uint64_t RXCBEN:1;
      uint64_t RXCBDIS:1;
      uint64_t TXCBEN:1;
      uint64_t TXCBDIS:1;
      uint64_t reservedSpace2:4;
      uint64_t ERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC1_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
      uint64_t reservedSpace1:7;
      uint64_t RXCBEN:1;
      uint64_t reservedSpace2:1;
      uint64_t TXCBEN:1;
      uint64_t reservedSpace3:5;
      uint64_t ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMIC1_PTSR;

};

#define PDMIC1 (*(volatile struct PDMIC1_tag *) 0x40030000)

struct ADC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGEN:1;
      uint64_t TRGSEL:3;
      uint64_t LOWRES:1;
      uint64_t SLEEP:1;
      uint64_t reservedSpace0:1;
      uint64_t FREERUN:1;
      uint64_t PRESCAL:8;
      uint64_t STARTUP:4;
      uint64_t reservedSpace1:2;
      uint64_t DIV1:1;
      uint64_t reservedSpace2:1;
      uint64_t TRACKTIM:4;
      uint64_t TRANSFER:2;
      uint64_t DIV3:1;
      uint64_t USEQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_MR;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_SEQR1;

  uint8_t res0[4];

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CHER;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CHDR;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CHSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LDATA:12;
      uint64_t CHNB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_LCDR;

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
      uint64_t reservedSpace0:11;
      uint64_t LCCHG:1;
      uint64_t reservedSpace1:4;
      uint64_t DRDY:1;
      uint64_t GOVRE:1;
      uint64_t COMPE:1;
      uint64_t ENDRX:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_IER;

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
      uint64_t reservedSpace0:11;
      uint64_t LCCHG:1;
      uint64_t reservedSpace1:4;
      uint64_t DRDY:1;
      uint64_t GOVRE:1;
      uint64_t COMPE:1;
      uint64_t ENDRX:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_IDR;

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
      uint64_t reservedSpace0:11;
      uint64_t LCCHG:1;
      uint64_t reservedSpace1:4;
      uint64_t DRDY:1;
      uint64_t GOVRE:1;
      uint64_t COMPE:1;
      uint64_t ENDRX:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_IMR;

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
      uint64_t reservedSpace0:11;
      uint64_t LCCHG:1;
      uint64_t reservedSpace1:4;
      uint64_t DRDY:1;
      uint64_t GOVRE:1;
      uint64_t COMPE:1;
      uint64_t ENDRX:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DUALTRIG:1;
      uint64_t reservedSpace0:3;
      uint64_t CMPMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_LCTMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOWTHRES:12;
      uint64_t reservedSpace0:4;
      uint64_t HIGHTHRES:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_LCCWR;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_OVER;

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
      uint64_t reservedSpace3:2;
      uint64_t OSR:2;
      uint64_t reservedSpace4:2;
      uint64_t ASTE:1;
      uint64_t reservedSpace5:3;
      uint64_t TAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_EMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOWTHRES:12;
      uint64_t reservedSpace0:4;
      uint64_t HIGHTHRES:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CWR;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_7;

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
  } __attribute__((aligned(4))) ADC_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_WPSR;

  uint8_t res4[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_RPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_RCR;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_RNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_RNCR;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
      uint64_t reservedSpace1:6;
      uint64_t RXCBEN:1;
      uint64_t RXCBDIS:1;
      uint64_t TXCBEN:1;
      uint64_t TXCBDIS:1;
      uint64_t reservedSpace2:4;
      uint64_t ERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
      uint64_t reservedSpace1:7;
      uint64_t RXCBEN:1;
      uint64_t reservedSpace2:1;
      uint64_t TXCBEN:1;
      uint64_t reservedSpace3:5;
      uint64_t ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_PTSR;

};

#define ADC (*(volatile struct ADC_tag *) 0x40038000)

struct TWI2_tag
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
  } __attribute__((aligned(4))) TWI2_CR;

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
  } __attribute__((aligned(4))) TWI2_MMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI2_SMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IADR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI2_IADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLDIV:8;
      uint64_t CHDIV:8;
      uint64_t CKDIV:3;
      uint64_t reservedSpace0:5;
      uint64_t HOLD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI2_CWGR;

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
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI2_SR;

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
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI2_IER;

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
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI2_IDR;

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
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI2_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI2_RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI2_THR;

  uint8_t res1[172];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI2_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI2_WPSR;

  uint8_t res2[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI2_RPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI2_RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI2_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI2_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI2_RNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI2_RNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI2_TNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI2_TNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
      uint64_t reservedSpace1:6;
      uint64_t RXCBEN:1;
      uint64_t RXCBDIS:1;
      uint64_t TXCBEN:1;
      uint64_t TXCBDIS:1;
      uint64_t reservedSpace2:4;
      uint64_t ERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI2_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
      uint64_t reservedSpace1:7;
      uint64_t RXCBEN:1;
      uint64_t reservedSpace2:1;
      uint64_t TXCBEN:1;
      uint64_t reservedSpace3:5;
      uint64_t ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI2_PTSR;

};

#define TWI2 (*(volatile struct TWI2_tag *) 0x40040000)

struct MATRIX_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULBT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_MCFG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULBT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_MCFG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULBT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_MCFG_2;

  uint8_t res0[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_3;

  uint8_t res1[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS0;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS1;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS2;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS3;

  uint8_t res5[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SYSIO4:1;
      uint64_t SYSIO5:1;
      uint64_t SYSIO6:1;
      uint64_t SYSIO7:1;
      uint64_t reservedSpace1:4;
      uint64_t SYSIO12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_SYSIO;

  uint8_t res6[204];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_WPSR;

};

#define MATRIX (*(volatile struct MATRIX_tag *) 0x400e0200)

struct PMC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PCK0:1;
      uint64_t PCK1:1;
      uint64_t PCK2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_SCER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PCK0:1;
      uint64_t PCK1:1;
      uint64_t PCK2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_SCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PCK0:1;
      uint64_t PCK1:1;
      uint64_t PCK2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_SCSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCSR0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTEN:1;
      uint64_t MOSCXTBY:1;
      uint64_t WAITMODE:1;
      uint64_t MOSCRCEN:1;
      uint64_t MOSCRCF:3;
      uint64_t reservedSpace0:1;
      uint64_t MOSCXTST:8;
      uint64_t KEY:8;
      uint64_t MOSCSEL:1;
      uint64_t CFDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKGR_MOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAINF:16;
      uint64_t MAINFRDY:1;
      uint64_t reservedSpace0:3;
      uint64_t RCMEAS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKGR_MCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLLAEN:8;
      uint64_t PLLACOUNT:6;
      uint64_t reservedSpace0:2;
      uint64_t MULA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKGR_PLLAR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSS:2;
      uint64_t reservedSpace0:2;
      uint64_t PRES:3;
      uint64_t reservedSpace1:5;
      uint64_t PLLADIV2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_MCKR;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSS:3;
      uint64_t reservedSpace0:1;
      uint64_t PRES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCK_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSS:3;
      uint64_t reservedSpace0:1;
      uint64_t PRES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCK_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSS:3;
      uint64_t reservedSpace0:1;
      uint64_t PRES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCK_2;

  uint8_t res4[20];

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
      uint64_t PCKRDY2:1;
      uint64_t reservedSpace2:5;
      uint64_t MOSCSELS:1;
      uint64_t MOSCRCS:1;
      uint64_t CFDEV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_IER;

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
      uint64_t PCKRDY2:1;
      uint64_t reservedSpace2:5;
      uint64_t MOSCSELS:1;
      uint64_t MOSCRCS:1;
      uint64_t CFDEV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTS:1;
      uint64_t LOCKA:1;
      uint64_t reservedSpace0:1;
      uint64_t MCKRDY:1;
      uint64_t reservedSpace1:3;
      uint64_t OSCSELS:1;
      uint64_t PCKRDY0:1;
      uint64_t PCKRDY1:1;
      uint64_t PCKRDY2:1;
      uint64_t reservedSpace2:5;
      uint64_t MOSCSELS:1;
      uint64_t MOSCRCS:1;
      uint64_t CFDEV:1;
      uint64_t CFDS:1;
      uint64_t FOS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_SR;

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
      uint64_t PCKRDY2:1;
      uint64_t reservedSpace2:5;
      uint64_t MOSCSELS:1;
      uint64_t MOSCRCS:1;
      uint64_t CFDEV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSTT0:1;
      uint64_t FSTT1:1;
      uint64_t FSTT2:1;
      uint64_t FSTT3:1;
      uint64_t FSTT4:1;
      uint64_t FSTT5:1;
      uint64_t FSTT6:1;
      uint64_t FSTT7:1;
      uint64_t FSTT8:1;
      uint64_t FSTT9:1;
      uint64_t FSTT10:1;
      uint64_t FSTT11:1;
      uint64_t FSTT12:1;
      uint64_t FSTT13:1;
      uint64_t FSTT14:1;
      uint64_t FSTT15:1;
      uint64_t RTTAL:1;
      uint64_t RTCAL:1;
      uint64_t reservedSpace0:2;
      uint64_t LPM:1;
      uint64_t FLPM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_FSMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSTP0:1;
      uint64_t FSTP1:1;
      uint64_t FSTP2:1;
      uint64_t FSTP3:1;
      uint64_t FSTP4:1;
      uint64_t FSTP5:1;
      uint64_t FSTP6:1;
      uint64_t FSTP7:1;
      uint64_t FSTP8:1;
      uint64_t FSTP9:1;
      uint64_t FSTP10:1;
      uint64_t FSTP11:1;
      uint64_t FSTP12:1;
      uint64_t FSTP13:1;
      uint64_t FSTP14:1;
      uint64_t FSTP15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_FSPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FOCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_FOCR;

  uint8_t res5[104];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_WPSR;

  uint8_t res6[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAL8:7;
      uint64_t SEL8:1;
      uint64_t CAL16:7;
      uint64_t SEL16:1;
      uint64_t CAL24:7;
      uint64_t SEL24:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_OCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_SLPWK_ER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_SLPWK_DR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_SLPWK_SR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_SLPWK_ASR0;

  uint8_t res7[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLLA_MMAX:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PMMR;

};

#define PMC (*(volatile struct PMC_tag *) 0x400e0400)

struct UART0_tag
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
      uint64_t reservedSpace1:3;
      uint64_t REQCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART0_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t FILTER:1;
      uint64_t reservedSpace1:4;
      uint64_t PAR:3;
      uint64_t reservedSpace2:2;
      uint64_t CHMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART0_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:1;
      uint64_t TXBUFE:1;
      uint64_t RXBUFF:1;
      uint64_t reservedSpace3:2;
      uint64_t CMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART0_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:1;
      uint64_t TXBUFE:1;
      uint64_t RXBUFF:1;
      uint64_t reservedSpace3:2;
      uint64_t CMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART0_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:1;
      uint64_t TXBUFE:1;
      uint64_t RXBUFF:1;
      uint64_t reservedSpace3:2;
      uint64_t CMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART0_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:1;
      uint64_t TXBUFE:1;
      uint64_t RXBUFF:1;
      uint64_t reservedSpace3:2;
      uint64_t CMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART0_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART0_RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART0_THR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART0_BRGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL1:8;
      uint64_t reservedSpace0:4;
      uint64_t CMPMODE:1;
      uint64_t reservedSpace1:1;
      uint64_t CMPPAR:1;
      uint64_t reservedSpace2:1;
      uint64_t VAL2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART0_CMPR;

  uint8_t res0[188];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART0_WPMR;

  uint8_t res1[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART0_RPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART0_RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART0_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART0_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART0_RNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART0_RNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART0_TNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART0_TNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
      uint64_t reservedSpace1:6;
      uint64_t RXCBEN:1;
      uint64_t RXCBDIS:1;
      uint64_t TXCBEN:1;
      uint64_t TXCBDIS:1;
      uint64_t reservedSpace2:4;
      uint64_t ERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART0_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
      uint64_t reservedSpace1:7;
      uint64_t RXCBEN:1;
      uint64_t reservedSpace2:1;
      uint64_t TXCBEN:1;
      uint64_t reservedSpace3:5;
      uint64_t ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART0_PTSR;

};

#define UART0 (*(volatile struct UART0_tag *) 0x400e0600)

struct CHIPID_tag
{
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
  } __attribute__((aligned(4))) CHIPID_CIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHIPID_EXID;

};

#define CHIPID (*(volatile struct CHIPID_tag *) 0x400e0740)

struct UART1_tag
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
      uint64_t reservedSpace1:3;
      uint64_t REQCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART1_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t FILTER:1;
      uint64_t reservedSpace1:4;
      uint64_t PAR:3;
      uint64_t reservedSpace2:2;
      uint64_t CHMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART1_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:1;
      uint64_t TXBUFE:1;
      uint64_t RXBUFF:1;
      uint64_t reservedSpace3:2;
      uint64_t CMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART1_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:1;
      uint64_t TXBUFE:1;
      uint64_t RXBUFF:1;
      uint64_t reservedSpace3:2;
      uint64_t CMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART1_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:1;
      uint64_t TXBUFE:1;
      uint64_t RXBUFF:1;
      uint64_t reservedSpace3:2;
      uint64_t CMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART1_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:1;
      uint64_t TXBUFE:1;
      uint64_t RXBUFF:1;
      uint64_t reservedSpace3:2;
      uint64_t CMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART1_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART1_RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART1_THR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART1_BRGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL1:8;
      uint64_t reservedSpace0:4;
      uint64_t CMPMODE:1;
      uint64_t reservedSpace1:1;
      uint64_t CMPPAR:1;
      uint64_t reservedSpace2:1;
      uint64_t VAL2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART1_CMPR;

  uint8_t res0[188];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART1_WPMR;

  uint8_t res1[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART1_RPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART1_RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART1_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART1_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART1_RNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART1_RNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART1_TNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART1_TNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
      uint64_t reservedSpace1:6;
      uint64_t RXCBEN:1;
      uint64_t RXCBDIS:1;
      uint64_t TXCBEN:1;
      uint64_t TXCBDIS:1;
      uint64_t reservedSpace2:4;
      uint64_t ERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART1_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
      uint64_t reservedSpace1:7;
      uint64_t RXCBEN:1;
      uint64_t reservedSpace2:1;
      uint64_t TXCBEN:1;
      uint64_t reservedSpace3:5;
      uint64_t ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART1_PTSR;

};

#define UART1 (*(volatile struct UART1_tag *) 0x400e0800)

struct EFC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t FWS:4;
      uint64_t reservedSpace1:4;
      uint64_t SCOD:1;
      uint64_t reservedSpace2:7;
      uint64_t FAM:1;
      uint64_t reservedSpace3:1;
      uint64_t CLOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC_FMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCMD:8;
      uint64_t FARG:16;
      uint64_t FKEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC_FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRDY:1;
      uint64_t FCMDE:1;
      uint64_t FLOCKE:1;
      uint64_t FLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC_FSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FVALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC_FRR;

};

#define EFC (*(volatile struct EFC_tag *) 0x400e0a00)

struct PIOA_tag
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
  } __attribute__((aligned(4))) PIOA_PER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PSR;

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
  } __attribute__((aligned(4))) PIOA_OER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_OSR;

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
  } __attribute__((aligned(4))) PIOA_IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IFSR;

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
  } __attribute__((aligned(4))) PIOA_SODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_CODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_MDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_MDSR;

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
  } __attribute__((aligned(4))) PIOA_PUDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PUER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PUSR;

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
  } __attribute__((aligned(4))) PIOA_ABCDSR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_ABCDSR_1;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IFSCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IFSCER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IFSCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_SCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PPDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PPDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PPDSR;

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
  } __attribute__((aligned(4))) PIOA_OWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_OWDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_OWSR;

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
  } __attribute__((aligned(4))) PIOA_AIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_AIMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_AIMMR;

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
  } __attribute__((aligned(4))) PIOA_ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_LSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_ELSR;

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
  } __attribute__((aligned(4))) PIOA_FELLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_REHLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_FRLHSR;

  uint8_t res10[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_WPSR;

  uint8_t res11[20];

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
  } __attribute__((aligned(4))) PIOA_SCHMITT;

};

#define PIOA (*(volatile struct PIOA_tag *) 0x400e0e00)

struct PIOB_tag
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
  } __attribute__((aligned(4))) PIOB_PER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PSR;

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
  } __attribute__((aligned(4))) PIOB_OER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_OSR;

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
  } __attribute__((aligned(4))) PIOB_IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IFSR;

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
  } __attribute__((aligned(4))) PIOB_SODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_CODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_MDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_MDSR;

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
  } __attribute__((aligned(4))) PIOB_PUDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PUER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PUSR;

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
  } __attribute__((aligned(4))) PIOB_ABCDSR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_ABCDSR_1;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IFSCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IFSCER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IFSCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_SCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PPDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PPDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PPDSR;

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
  } __attribute__((aligned(4))) PIOB_OWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_OWDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_OWSR;

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
  } __attribute__((aligned(4))) PIOB_AIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_AIMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_AIMMR;

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
  } __attribute__((aligned(4))) PIOB_ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_LSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_ELSR;

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
  } __attribute__((aligned(4))) PIOB_FELLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_REHLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_FRLHSR;

  uint8_t res10[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_WPSR;

  uint8_t res11[20];

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
  } __attribute__((aligned(4))) PIOB_SCHMITT;

};

#define PIOB (*(volatile struct PIOB_tag *) 0x400e1000)

struct RSTC_tag
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
  } __attribute__((aligned(4))) RSTC_CR;

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
  } __attribute__((aligned(4))) RSTC_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t URSTEN:1;
      uint64_t reservedSpace0:3;
      uint64_t URSTIEN:1;
      uint64_t reservedSpace1:3;
      uint64_t ERSTL:4;
      uint64_t reservedSpace2:12;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTC_MR;

};

#define RSTC (*(volatile struct RSTC_tag *) 0x400e1400)

struct SUPC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ZERO:1;
      uint64_t XTALSEL:1;
      uint64_t reservedSpace1:20;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMTH:4;
      uint64_t reservedSpace0:4;
      uint64_t SMSMPL:3;
      uint64_t reservedSpace1:1;
      uint64_t SMRSTEN:1;
      uint64_t SMIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPC_SMMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t BODRSTEN:1;
      uint64_t BODDIS:1;
      uint64_t reservedSpace1:6;
      uint64_t OSCBYPASS:1;
      uint64_t PSWITCH0:1;
      uint64_t PSWITCH1:1;
      uint64_t PSWITCH2:1;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPC_MR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t BODRSTS:1;
      uint64_t SMRSTS:1;
      uint64_t SMS:1;
      uint64_t SMOS:1;
      uint64_t OSCSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPC_SR;

};

#define SUPC (*(volatile struct SUPC_tag *) 0x400e1410)

struct RTT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTPRES:16;
      uint64_t ALMIEN:1;
      uint64_t RTTINCIEN:1;
      uint64_t RTTRST:1;
      uint64_t reservedSpace0:1;
      uint64_t RTTDIS:1;
      uint64_t reservedSpace1:3;
      uint64_t RTC1HZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTT_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALMV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTT_AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRTV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTT_VR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALMS:1;
      uint64_t RTTINC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTT_SR;

};

#define RTT (*(volatile struct RTT_tag *) 0x400e1430)

struct WDT_tag
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
  } __attribute__((aligned(4))) WDT_CR;

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
  } __attribute__((aligned(4))) WDT_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDUNF:1;
      uint64_t WDERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDT_SR;

};

#define WDT (*(volatile struct WDT_tag *) 0x400e1450)

struct RTC_tag
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
  } __attribute__((aligned(4))) RTC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRMOD:1;
      uint64_t PERSIAN:1;
      uint64_t reservedSpace0:2;
      uint64_t NEGPPM:1;
      uint64_t reservedSpace1:3;
      uint64_t CORRECTION:7;
      uint64_t HIGHPPM:1;
      uint64_t OUT0:3;
      uint64_t reservedSpace2:1;
      uint64_t OUT1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_MR;

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
  } __attribute__((aligned(4))) RTC_TIMR;

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
  } __attribute__((aligned(4))) RTC_CALR;

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
  } __attribute__((aligned(4))) RTC_TIMALR;

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
  } __attribute__((aligned(4))) RTC_CALALR;

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
      uint64_t TDERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_SR;

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
      uint64_t TDERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_SCCR;

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
      uint64_t TDERREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_IER;

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
      uint64_t TDERRDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_IDR;

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
  } __attribute__((aligned(4))) RTC_IMR;

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
  } __attribute__((aligned(4))) RTC_VER;

};

#define RTC (*(volatile struct RTC_tag *) 0x400e1460)

struct GPBR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_7;

};

#define GPBR (*(volatile struct GPBR_tag *) 0x400e1490)

