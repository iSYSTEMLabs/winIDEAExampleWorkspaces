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

struct FB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t GROUP5:4;
      uint64_t GROUP4:4;
      uint64_t GROUP3:4;
      uint64_t GROUP2:4;
      uint64_t GROUP1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSPMCR;

};

#define FB (*(volatile struct FB_tag *) 0x40100060)

struct FB_CS_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t BA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t V:1;
      uint64_t reservedSpace0:7;
      uint64_t WP:1;
      uint64_t reservedSpace1:7;
      uint64_t BAM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t BSTW:1;
      uint64_t BSTR:1;
      uint64_t BEM:1;
      uint64_t PS:2;
      uint64_t AA:1;
      uint64_t BLS:1;
      uint64_t WS:6;
      uint64_t WRAH:2;
      uint64_t RDAH:2;
      uint64_t ASET:2;
      uint64_t EXTS:1;
      uint64_t SWSEN:1;
      uint64_t reservedSpace1:2;
      uint64_t SWS:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR;

};

#define FB_CS_0 (*(volatile struct FB_CS_0_tag *) 0x40100000)

struct FB_CS_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t BA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t V:1;
      uint64_t reservedSpace0:7;
      uint64_t WP:1;
      uint64_t reservedSpace1:7;
      uint64_t BAM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t BSTW:1;
      uint64_t BSTR:1;
      uint64_t BEM:1;
      uint64_t PS:2;
      uint64_t AA:1;
      uint64_t BLS:1;
      uint64_t WS:6;
      uint64_t WRAH:2;
      uint64_t RDAH:2;
      uint64_t ASET:2;
      uint64_t EXTS:1;
      uint64_t SWSEN:1;
      uint64_t reservedSpace1:2;
      uint64_t SWS:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR;

};

#define FB_CS_1 (*(volatile struct FB_CS_1_tag *) 0x4010000c)

struct FB_CS_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t BA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t V:1;
      uint64_t reservedSpace0:7;
      uint64_t WP:1;
      uint64_t reservedSpace1:7;
      uint64_t BAM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t BSTW:1;
      uint64_t BSTR:1;
      uint64_t BEM:1;
      uint64_t PS:2;
      uint64_t AA:1;
      uint64_t BLS:1;
      uint64_t WS:6;
      uint64_t WRAH:2;
      uint64_t RDAH:2;
      uint64_t ASET:2;
      uint64_t EXTS:1;
      uint64_t SWSEN:1;
      uint64_t reservedSpace1:2;
      uint64_t SWS:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR;

};

#define FB_CS_2 (*(volatile struct FB_CS_2_tag *) 0x40100018)

struct FB_CS_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t BA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t V:1;
      uint64_t reservedSpace0:7;
      uint64_t WP:1;
      uint64_t reservedSpace1:7;
      uint64_t BAM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t BSTW:1;
      uint64_t BSTR:1;
      uint64_t BEM:1;
      uint64_t PS:2;
      uint64_t AA:1;
      uint64_t BLS:1;
      uint64_t WS:6;
      uint64_t WRAH:2;
      uint64_t RDAH:2;
      uint64_t ASET:2;
      uint64_t EXTS:1;
      uint64_t SWSEN:1;
      uint64_t reservedSpace1:2;
      uint64_t SWS:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR;

};

#define FB_CS_3 (*(volatile struct FB_CS_3_tag *) 0x40100024)

struct FB_CS_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t BA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t V:1;
      uint64_t reservedSpace0:7;
      uint64_t WP:1;
      uint64_t reservedSpace1:7;
      uint64_t BAM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t BSTW:1;
      uint64_t BSTR:1;
      uint64_t BEM:1;
      uint64_t PS:2;
      uint64_t AA:1;
      uint64_t BLS:1;
      uint64_t WS:6;
      uint64_t WRAH:2;
      uint64_t RDAH:2;
      uint64_t ASET:2;
      uint64_t EXTS:1;
      uint64_t SWSEN:1;
      uint64_t reservedSpace1:2;
      uint64_t SWS:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR;

};

#define FB_CS_4 (*(volatile struct FB_CS_4_tag *) 0x40100030)

struct FB_CS_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t BA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t V:1;
      uint64_t reservedSpace0:7;
      uint64_t WP:1;
      uint64_t reservedSpace1:7;
      uint64_t BAM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t BSTW:1;
      uint64_t BSTR:1;
      uint64_t BEM:1;
      uint64_t PS:2;
      uint64_t AA:1;
      uint64_t BLS:1;
      uint64_t WS:6;
      uint64_t WRAH:2;
      uint64_t RDAH:2;
      uint64_t ASET:2;
      uint64_t EXTS:1;
      uint64_t SWSEN:1;
      uint64_t reservedSpace1:2;
      uint64_t SWS:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR;

};

#define FB_CS_5 (*(volatile struct FB_CS_5_tag *) 0x4010003c)

struct USBNC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t OVER_CUR_DIS:1;
      uint64_t OVER_CUR_POL:1;
      uint64_t PWR_POL:1;
      uint64_t WIE:1;
      uint64_t reservedSpace1:3;
      uint64_t WKUP_SW_EN:1;
      uint64_t WKUP_SW:1;
      uint64_t WKUP_ID_EN:1;
      uint64_t WKUP_VBUS_EN:1;
      uint64_t reservedSpace2:2;
      uint64_t ULPI_PHY_CLK_EN:1;
      uint64_t reservedSpace3:8;
      uint64_t WKUP_DPDM_EN:1;
      uint64_t reservedSpace4:1;
      uint64_t WIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBNC0__CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VBUS_SOURCE_SEL:2;
      uint64_t AUTURESUME_EN:1;
      uint64_t LOWSPEED_EN:1;
      uint64_t reservedSpace0:27;
      uint64_t UTMI_CLK_VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBNC0__CTRL2;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t HSIC_CLK_ON:1;
      uint64_t HSIC_EN:1;
      uint64_t reservedSpace1:18;
      uint64_t CLK_VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBNC0__HSIC_CTRL;

};

#define USBNC0 (*(volatile struct USBNC0_tag *) 0x40330200)

struct USBNC1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t OVER_CUR_DIS:1;
      uint64_t OVER_CUR_POL:1;
      uint64_t PWR_POL:1;
      uint64_t WIE:1;
      uint64_t reservedSpace1:3;
      uint64_t WKUP_SW_EN:1;
      uint64_t WKUP_SW:1;
      uint64_t WKUP_ID_EN:1;
      uint64_t WKUP_VBUS_EN:1;
      uint64_t reservedSpace2:2;
      uint64_t ULPI_PHY_CLK_EN:1;
      uint64_t reservedSpace3:8;
      uint64_t WKUP_DPDM_EN:1;
      uint64_t reservedSpace4:1;
      uint64_t WIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBNC0__CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VBUS_SOURCE_SEL:2;
      uint64_t AUTURESUME_EN:1;
      uint64_t LOWSPEED_EN:1;
      uint64_t reservedSpace0:27;
      uint64_t UTMI_CLK_VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBNC0__CTRL2;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t HSIC_CLK_ON:1;
      uint64_t HSIC_EN:1;
      uint64_t reservedSpace1:18;
      uint64_t CLK_VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBNC0__HSIC_CTRL;

};

#define USBNC1 (*(volatile struct USBNC1_tag *) 0x40340200)

struct USBPHY_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t TXPWDFS:1;
      uint64_t TXPWDIBIAS:1;
      uint64_t TXPWDV2I:1;
      uint64_t reservedSpace1:4;
      uint64_t RXPWDENV:1;
      uint64_t RXPWD1PT1:1;
      uint64_t RXPWDDIFF:1;
      uint64_t RXPWDRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_PWD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t TXPWDFS:1;
      uint64_t TXPWDIBIAS:1;
      uint64_t TXPWDV2I:1;
      uint64_t reservedSpace1:4;
      uint64_t RXPWDENV:1;
      uint64_t RXPWD1PT1:1;
      uint64_t RXPWDDIFF:1;
      uint64_t RXPWDRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_PWD_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t TXPWDFS:1;
      uint64_t TXPWDIBIAS:1;
      uint64_t TXPWDV2I:1;
      uint64_t reservedSpace1:4;
      uint64_t RXPWDENV:1;
      uint64_t RXPWD1PT1:1;
      uint64_t RXPWDDIFF:1;
      uint64_t RXPWDRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_PWD_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t TXPWDFS:1;
      uint64_t TXPWDIBIAS:1;
      uint64_t TXPWDV2I:1;
      uint64_t reservedSpace1:4;
      uint64_t RXPWDENV:1;
      uint64_t RXPWD1PT1:1;
      uint64_t RXPWDDIFF:1;
      uint64_t RXPWDRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_PWD_TOG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D_CAL:4;
      uint64_t reservedSpace0:4;
      uint64_t TXCAL45DM:4;
      uint64_t reservedSpace1:1;
      uint64_t TXENCAL45DN:1;
      uint64_t reservedSpace2:2;
      uint64_t TXCAL45DP:4;
      uint64_t reservedSpace3:1;
      uint64_t TXENCAL45DP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_TX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D_CAL:4;
      uint64_t reservedSpace0:4;
      uint64_t TXCAL45DM:4;
      uint64_t reservedSpace1:1;
      uint64_t TXENCAL45DN:1;
      uint64_t reservedSpace2:2;
      uint64_t TXCAL45DP:4;
      uint64_t reservedSpace3:1;
      uint64_t TXENCAL45DP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_TX_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D_CAL:4;
      uint64_t reservedSpace0:4;
      uint64_t TXCAL45DM:4;
      uint64_t reservedSpace1:1;
      uint64_t TXENCAL45DN:1;
      uint64_t reservedSpace2:2;
      uint64_t TXCAL45DP:4;
      uint64_t reservedSpace3:1;
      uint64_t TXENCAL45DP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_TX_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D_CAL:4;
      uint64_t reservedSpace0:4;
      uint64_t TXCAL45DM:4;
      uint64_t reservedSpace1:1;
      uint64_t TXENCAL45DN:1;
      uint64_t reservedSpace2:2;
      uint64_t TXCAL45DP:4;
      uint64_t reservedSpace3:1;
      uint64_t TXENCAL45DP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_TX_TOG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENVADJ:3;
      uint64_t reservedSpace0:1;
      uint64_t DISCONADJ:3;
      uint64_t reservedSpace1:15;
      uint64_t RXDBYPASS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_RX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENVADJ:3;
      uint64_t reservedSpace0:1;
      uint64_t DISCONADJ:3;
      uint64_t reservedSpace1:15;
      uint64_t RXDBYPASS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_RX_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENVADJ:3;
      uint64_t reservedSpace0:1;
      uint64_t DISCONADJ:3;
      uint64_t reservedSpace1:15;
      uint64_t RXDBYPASS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_RX_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENVADJ:3;
      uint64_t reservedSpace0:1;
      uint64_t DISCONADJ:3;
      uint64_t reservedSpace1:15;
      uint64_t RXDBYPASS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_RX_TOG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENHOSTDISCONDETECT:1;
      uint64_t reservedSpace1:1;
      uint64_t HOSTDISCONDETECT_IRQ:1;
      uint64_t ENDEVPLUGINDET:1;
      uint64_t reservedSpace2:7;
      uint64_t DEVPLUGIN_IRQ:1;
      uint64_t reservedSpace3:1;
      uint64_t ENUTMILEVEL2:1;
      uint64_t ENUTMILEVEL3:1;
      uint64_t reservedSpace4:2;
      uint64_t AUTORESUME_EN:1;
      uint64_t ENAUTOCLR_CLKGATE:1;
      uint64_t ENAUTOCLR_PHY_PWD:1;
      uint64_t reservedSpace5:3;
      uint64_t FSDLL_RST_EN:1;
      uint64_t reservedSpace6:2;
      uint64_t OTG_ID_VALUE:1;
      uint64_t HOST_FORCE_LS_SE0:1;
      uint64_t UTMI_SUSPENDM:1;
      uint64_t CLKGATE:1;
      uint64_t SFTRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENHOSTDISCONDETECT:1;
      uint64_t reservedSpace1:1;
      uint64_t HOSTDISCONDETECT_IRQ:1;
      uint64_t ENDEVPLUGINDET:1;
      uint64_t reservedSpace2:7;
      uint64_t DEVPLUGIN_IRQ:1;
      uint64_t reservedSpace3:1;
      uint64_t ENUTMILEVEL2:1;
      uint64_t ENUTMILEVEL3:1;
      uint64_t reservedSpace4:2;
      uint64_t AUTORESUME_EN:1;
      uint64_t ENAUTOCLR_CLKGATE:1;
      uint64_t ENAUTOCLR_PHY_PWD:1;
      uint64_t reservedSpace5:3;
      uint64_t FSDLL_RST_EN:1;
      uint64_t reservedSpace6:2;
      uint64_t OTG_ID_VALUE:1;
      uint64_t HOST_FORCE_LS_SE0:1;
      uint64_t UTMI_SUSPENDM:1;
      uint64_t CLKGATE:1;
      uint64_t SFTRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_CTRL_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENHOSTDISCONDETECT:1;
      uint64_t reservedSpace1:1;
      uint64_t HOSTDISCONDETECT_IRQ:1;
      uint64_t ENDEVPLUGINDET:1;
      uint64_t reservedSpace2:7;
      uint64_t DEVPLUGIN_IRQ:1;
      uint64_t reservedSpace3:1;
      uint64_t ENUTMILEVEL2:1;
      uint64_t ENUTMILEVEL3:1;
      uint64_t reservedSpace4:2;
      uint64_t AUTORESUME_EN:1;
      uint64_t ENAUTOCLR_CLKGATE:1;
      uint64_t ENAUTOCLR_PHY_PWD:1;
      uint64_t reservedSpace5:3;
      uint64_t FSDLL_RST_EN:1;
      uint64_t reservedSpace6:2;
      uint64_t OTG_ID_VALUE:1;
      uint64_t HOST_FORCE_LS_SE0:1;
      uint64_t UTMI_SUSPENDM:1;
      uint64_t CLKGATE:1;
      uint64_t SFTRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_CTRL_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENHOSTDISCONDETECT:1;
      uint64_t reservedSpace1:1;
      uint64_t HOSTDISCONDETECT_IRQ:1;
      uint64_t ENDEVPLUGINDET:1;
      uint64_t reservedSpace2:7;
      uint64_t DEVPLUGIN_IRQ:1;
      uint64_t reservedSpace3:1;
      uint64_t ENUTMILEVEL2:1;
      uint64_t ENUTMILEVEL3:1;
      uint64_t reservedSpace4:2;
      uint64_t AUTORESUME_EN:1;
      uint64_t ENAUTOCLR_CLKGATE:1;
      uint64_t ENAUTOCLR_PHY_PWD:1;
      uint64_t reservedSpace5:3;
      uint64_t FSDLL_RST_EN:1;
      uint64_t reservedSpace6:2;
      uint64_t OTG_ID_VALUE:1;
      uint64_t HOST_FORCE_LS_SE0:1;
      uint64_t UTMI_SUSPENDM:1;
      uint64_t CLKGATE:1;
      uint64_t SFTRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_CTRL_TOG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t HOSTDISCONDETECT_STATUS:1;
      uint64_t reservedSpace1:2;
      uint64_t DEVPLUGIN_STATUS:1;
      uint64_t reservedSpace2:1;
      uint64_t OTGID_STATUS:1;
      uint64_t reservedSpace3:1;
      uint64_t RESUME_STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_STATUS;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTGIDPIOLOCK:1;
      uint64_t DEBUG_INTERFACE_HOLD:1;
      uint64_t HSTPULLDOWN:2;
      uint64_t ENHSTPULLDOWN:2;
      uint64_t reservedSpace0:2;
      uint64_t TX2RXCOUNT:4;
      uint64_t ENTX2RXCOUNT:1;
      uint64_t reservedSpace1:3;
      uint64_t SQUELCHRESETCOUNT:5;
      uint64_t reservedSpace2:3;
      uint64_t ENSQUELCHRESET:1;
      uint64_t SQUELCHRESETLENGTH:4;
      uint64_t HOST_RESUME_DEBUG:1;
      uint64_t CLKGATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_DEBUG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTGIDPIOLOCK:1;
      uint64_t DEBUG_INTERFACE_HOLD:1;
      uint64_t HSTPULLDOWN:2;
      uint64_t ENHSTPULLDOWN:2;
      uint64_t reservedSpace0:2;
      uint64_t TX2RXCOUNT:4;
      uint64_t ENTX2RXCOUNT:1;
      uint64_t reservedSpace1:3;
      uint64_t SQUELCHRESETCOUNT:5;
      uint64_t reservedSpace2:3;
      uint64_t ENSQUELCHRESET:1;
      uint64_t SQUELCHRESETLENGTH:4;
      uint64_t HOST_RESUME_DEBUG:1;
      uint64_t CLKGATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_DEBUG0_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTGIDPIOLOCK:1;
      uint64_t DEBUG_INTERFACE_HOLD:1;
      uint64_t HSTPULLDOWN:2;
      uint64_t ENHSTPULLDOWN:2;
      uint64_t reservedSpace0:2;
      uint64_t TX2RXCOUNT:4;
      uint64_t ENTX2RXCOUNT:1;
      uint64_t reservedSpace1:3;
      uint64_t SQUELCHRESETCOUNT:5;
      uint64_t reservedSpace2:3;
      uint64_t ENSQUELCHRESET:1;
      uint64_t SQUELCHRESETLENGTH:4;
      uint64_t HOST_RESUME_DEBUG:1;
      uint64_t CLKGATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_DEBUG0_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTGIDPIOLOCK:1;
      uint64_t DEBUG_INTERFACE_HOLD:1;
      uint64_t HSTPULLDOWN:2;
      uint64_t ENHSTPULLDOWN:2;
      uint64_t reservedSpace0:2;
      uint64_t TX2RXCOUNT:4;
      uint64_t ENTX2RXCOUNT:1;
      uint64_t reservedSpace1:3;
      uint64_t SQUELCHRESETCOUNT:5;
      uint64_t reservedSpace2:3;
      uint64_t ENSQUELCHRESET:1;
      uint64_t SQUELCHRESETLENGTH:4;
      uint64_t HOST_RESUME_DEBUG:1;
      uint64_t CLKGATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_DEBUG0_TOG;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t ENTAILADJVD:2;
      uint64_t reservedSpace1:3;
      uint64_t USB2_REFBIAS_VBGADJ:3;
      uint64_t USB2_REFBIAS_TST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_DEBUG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t ENTAILADJVD:2;
      uint64_t reservedSpace1:3;
      uint64_t USB2_REFBIAS_VBGADJ:3;
      uint64_t USB2_REFBIAS_TST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_DEBUG1_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t ENTAILADJVD:2;
      uint64_t reservedSpace1:3;
      uint64_t USB2_REFBIAS_VBGADJ:3;
      uint64_t USB2_REFBIAS_TST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_DEBUG1_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t ENTAILADJVD:2;
      uint64_t reservedSpace1:3;
      uint64_t USB2_REFBIAS_VBGADJ:3;
      uint64_t USB2_REFBIAS_TST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_DEBUG1_TOG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STEP:16;
      uint64_t MINOR:8;
      uint64_t MAJOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_VERSION;

  uint8_t res2[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PLL_EN_USB_CLKS:1;
      uint64_t reservedSpace1:5;
      uint64_t PLL_POWER:1;
      uint64_t PLL_ENABLE:1;
      uint64_t reservedSpace2:2;
      uint64_t PLL_BYPASS:1;
      uint64_t reservedSpace3:2;
      uint64_t REFBIAS_PWD_SEL:1;
      uint64_t REFBIAS_PWD:1;
      uint64_t PLL_REG_ENABLE:1;
      uint64_t PLL_DIV_SEL:3;
      uint64_t reservedSpace4:6;
      uint64_t PLL_LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_PLL_SIC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PLL_EN_USB_CLKS:1;
      uint64_t reservedSpace1:5;
      uint64_t PLL_POWER:1;
      uint64_t PLL_ENABLE:1;
      uint64_t reservedSpace2:2;
      uint64_t PLL_BYPASS:1;
      uint64_t reservedSpace3:2;
      uint64_t REFBIAS_PWD_SEL:1;
      uint64_t REFBIAS_PWD:1;
      uint64_t PLL_REG_ENABLE:1;
      uint64_t PLL_DIV_SEL:3;
      uint64_t reservedSpace4:6;
      uint64_t PLL_LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_PLL_SIC_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PLL_EN_USB_CLKS:1;
      uint64_t reservedSpace1:5;
      uint64_t PLL_POWER:1;
      uint64_t PLL_ENABLE:1;
      uint64_t reservedSpace2:2;
      uint64_t PLL_BYPASS:1;
      uint64_t reservedSpace3:2;
      uint64_t REFBIAS_PWD_SEL:1;
      uint64_t REFBIAS_PWD:1;
      uint64_t PLL_REG_ENABLE:1;
      uint64_t PLL_DIV_SEL:3;
      uint64_t reservedSpace4:6;
      uint64_t PLL_LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_PLL_SIC_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PLL_EN_USB_CLKS:1;
      uint64_t reservedSpace1:5;
      uint64_t PLL_POWER:1;
      uint64_t PLL_ENABLE:1;
      uint64_t reservedSpace2:2;
      uint64_t PLL_BYPASS:1;
      uint64_t reservedSpace3:2;
      uint64_t REFBIAS_PWD_SEL:1;
      uint64_t REFBIAS_PWD:1;
      uint64_t PLL_REG_ENABLE:1;
      uint64_t PLL_DIV_SEL:3;
      uint64_t reservedSpace4:6;
      uint64_t PLL_LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_PLL_SIC_TOG;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VBUSVALID_THRESH:3;
      uint64_t VBUS_OVERRIDE_EN:1;
      uint64_t SESSEND_OVERRIDE:1;
      uint64_t BVALID_OVERRIDE:1;
      uint64_t AVALID_OVERRIDE:1;
      uint64_t VBUSVALID_OVERRIDE:1;
      uint64_t VBUSVALID_SEL:1;
      uint64_t VBUS_SOURCE_SEL:2;
      uint64_t reservedSpace0:7;
      uint64_t VBUSVALID_TO_SESSVALID:1;
      uint64_t reservedSpace1:1;
      uint64_t PWRUP_CMPS:1;
      uint64_t reservedSpace2:5;
      uint64_t DISCHARGE_VBUS:1;
      uint64_t reservedSpace3:4;
      uint64_t EN_CHARGER_RESISTOR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_USB1_VBUS_DETECT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VBUSVALID_THRESH:3;
      uint64_t VBUS_OVERRIDE_EN:1;
      uint64_t SESSEND_OVERRIDE:1;
      uint64_t BVALID_OVERRIDE:1;
      uint64_t AVALID_OVERRIDE:1;
      uint64_t VBUSVALID_OVERRIDE:1;
      uint64_t VBUSVALID_SEL:1;
      uint64_t VBUS_SOURCE_SEL:2;
      uint64_t reservedSpace0:7;
      uint64_t VBUSVALID_TO_SESSVALID:1;
      uint64_t reservedSpace1:1;
      uint64_t PWRUP_CMPS:1;
      uint64_t reservedSpace2:5;
      uint64_t DISCHARGE_VBUS:1;
      uint64_t reservedSpace3:4;
      uint64_t EN_CHARGER_RESISTOR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_USB1_VBUS_DETECT_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VBUSVALID_THRESH:3;
      uint64_t VBUS_OVERRIDE_EN:1;
      uint64_t SESSEND_OVERRIDE:1;
      uint64_t BVALID_OVERRIDE:1;
      uint64_t AVALID_OVERRIDE:1;
      uint64_t VBUSVALID_OVERRIDE:1;
      uint64_t VBUSVALID_SEL:1;
      uint64_t VBUS_SOURCE_SEL:2;
      uint64_t reservedSpace0:7;
      uint64_t VBUSVALID_TO_SESSVALID:1;
      uint64_t reservedSpace1:1;
      uint64_t PWRUP_CMPS:1;
      uint64_t reservedSpace2:5;
      uint64_t DISCHARGE_VBUS:1;
      uint64_t reservedSpace3:4;
      uint64_t EN_CHARGER_RESISTOR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_USB1_VBUS_DETECT_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VBUSVALID_THRESH:3;
      uint64_t VBUS_OVERRIDE_EN:1;
      uint64_t SESSEND_OVERRIDE:1;
      uint64_t BVALID_OVERRIDE:1;
      uint64_t AVALID_OVERRIDE:1;
      uint64_t VBUSVALID_OVERRIDE:1;
      uint64_t VBUSVALID_SEL:1;
      uint64_t VBUS_SOURCE_SEL:2;
      uint64_t reservedSpace0:7;
      uint64_t VBUSVALID_TO_SESSVALID:1;
      uint64_t reservedSpace1:1;
      uint64_t PWRUP_CMPS:1;
      uint64_t reservedSpace2:5;
      uint64_t DISCHARGE_VBUS:1;
      uint64_t reservedSpace3:4;
      uint64_t EN_CHARGER_RESISTOR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_USB1_VBUS_DETECT_TOG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SESSEND:1;
      uint64_t BVALID:1;
      uint64_t AVALID:1;
      uint64_t VBUS_VALID:1;
      uint64_t VBUS_VALID_3V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_USB1_VBUS_DET_STAT;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PULLUP_DP:1;
      uint64_t reservedSpace1:20;
      uint64_t BGR_IBIAS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_USB1_CHRG_DETECT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PULLUP_DP:1;
      uint64_t reservedSpace1:20;
      uint64_t BGR_IBIAS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_USB1_CHRG_DETECT_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PULLUP_DP:1;
      uint64_t reservedSpace1:20;
      uint64_t BGR_IBIAS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_USB1_CHRG_DETECT_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PULLUP_DP:1;
      uint64_t reservedSpace1:20;
      uint64_t BGR_IBIAS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_USB1_CHRG_DETECT_TOG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLUG_CONTACT:1;
      uint64_t CHRG_DETECTED:1;
      uint64_t DM_STATE:1;
      uint64_t DP_STATE:1;
      uint64_t SECDET_DCP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_USB1_CHRG_DET_STAT;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t DEV_PULLDOWN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_ANACTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t DEV_PULLDOWN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_ANACTRL_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t DEV_PULLDOWN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_ANACTRL_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t DEV_PULLDOWN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_ANACTRL_TOG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UTMI_TESTSTART:1;
      uint64_t UTMI_DIG_TST0:1;
      uint64_t UTMI_DIG_TST1:1;
      uint64_t TSTI_TX_HS_MODE:1;
      uint64_t TSTI_TX_LS_MODE:1;
      uint64_t TSTI_TX_EN:1;
      uint64_t TSTI_TX_HIZ:1;
      uint64_t UTMO_DIG_TST0:1;
      uint64_t UTMO_DIG_TST1:1;
      uint64_t reservedSpace0:6;
      uint64_t TSTI_HSFS_MODE_EN:1;
      uint64_t TSTPKT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_USB1_LOOPBACK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UTMI_TESTSTART:1;
      uint64_t UTMI_DIG_TST0:1;
      uint64_t UTMI_DIG_TST1:1;
      uint64_t TSTI_TX_HS_MODE:1;
      uint64_t TSTI_TX_LS_MODE:1;
      uint64_t TSTI_TX_EN:1;
      uint64_t TSTI_TX_HIZ:1;
      uint64_t UTMO_DIG_TST0:1;
      uint64_t UTMO_DIG_TST1:1;
      uint64_t reservedSpace0:6;
      uint64_t TSTI_HSFS_MODE_EN:1;
      uint64_t TSTPKT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_USB1_LOOPBACK_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UTMI_TESTSTART:1;
      uint64_t UTMI_DIG_TST0:1;
      uint64_t UTMI_DIG_TST1:1;
      uint64_t TSTI_TX_HS_MODE:1;
      uint64_t TSTI_TX_LS_MODE:1;
      uint64_t TSTI_TX_EN:1;
      uint64_t TSTI_TX_HIZ:1;
      uint64_t UTMO_DIG_TST0:1;
      uint64_t UTMO_DIG_TST1:1;
      uint64_t reservedSpace0:6;
      uint64_t TSTI_HSFS_MODE_EN:1;
      uint64_t TSTPKT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_USB1_LOOPBACK_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UTMI_TESTSTART:1;
      uint64_t UTMI_DIG_TST0:1;
      uint64_t UTMI_DIG_TST1:1;
      uint64_t TSTI_TX_HS_MODE:1;
      uint64_t TSTI_TX_LS_MODE:1;
      uint64_t TSTI_TX_EN:1;
      uint64_t TSTI_TX_HIZ:1;
      uint64_t UTMO_DIG_TST0:1;
      uint64_t UTMO_DIG_TST1:1;
      uint64_t reservedSpace0:6;
      uint64_t TSTI_HSFS_MODE_EN:1;
      uint64_t TSTPKT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_USB1_LOOPBACK_TOG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSTI_HS_NUMBER:16;
      uint64_t TSTI_FS_NUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_USB1_LOOPBACK_HSFSCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSTI_HS_NUMBER:16;
      uint64_t TSTI_FS_NUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_USB1_LOOPBACK_HSFSCNT_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSTI_HS_NUMBER:16;
      uint64_t TSTI_FS_NUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_USB1_LOOPBACK_HSFSCNT_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSTI_HS_NUMBER:16;
      uint64_t TSTI_FS_NUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_USB1_LOOPBACK_HSFSCNT_TOG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIM_DIV_SEL_OVERRIDE:1;
      uint64_t TRIM_ENV_TAIL_ADJ_VD_OVERRIDE:1;
      uint64_t TRIM_TX_D_CAL_OVERRIDE:1;
      uint64_t TRIM_TX_CAL45DP_OVERRIDE:1;
      uint64_t TRIM_TX_CAL45DM_OVERRIDE:1;
      uint64_t TRIM_REFBIAS_VBGADJ_OVERRIDE:1;
      uint64_t TRIM_REFBIAS_TST_OVERRIDE:1;
      uint64_t reservedSpace0:3;
      uint64_t TRIM_USB2_REFBIAS_VBGADJ:3;
      uint64_t TRIM_USB2_REFBIAS_TST:2;
      uint64_t TRIM_PLL_CTRL0_DIV_SEL:3;
      uint64_t TRIM_USB_REG_ENV_TAIL_ADJ_VD:2;
      uint64_t TRIM_USBPHY_TX_D_CAL:4;
      uint64_t TRIM_USBPHY_TX_CAL45DP:4;
      uint64_t TRIM_USBPHY_TX_CAL45DM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_TRIM_OVERRIDE_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIM_DIV_SEL_OVERRIDE:1;
      uint64_t TRIM_ENV_TAIL_ADJ_VD_OVERRIDE:1;
      uint64_t TRIM_TX_D_CAL_OVERRIDE:1;
      uint64_t TRIM_TX_CAL45DP_OVERRIDE:1;
      uint64_t TRIM_TX_CAL45DM_OVERRIDE:1;
      uint64_t TRIM_REFBIAS_VBGADJ_OVERRIDE:1;
      uint64_t TRIM_REFBIAS_TST_OVERRIDE:1;
      uint64_t reservedSpace0:3;
      uint64_t TRIM_USB2_REFBIAS_VBGADJ:3;
      uint64_t TRIM_USB2_REFBIAS_TST:2;
      uint64_t TRIM_PLL_CTRL0_DIV_SEL:3;
      uint64_t TRIM_USB_REG_ENV_TAIL_ADJ_VD:2;
      uint64_t TRIM_USBPHY_TX_D_CAL:4;
      uint64_t TRIM_USBPHY_TX_CAL45DP:4;
      uint64_t TRIM_USBPHY_TX_CAL45DM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_TRIM_OVERRIDE_EN_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIM_DIV_SEL_OVERRIDE:1;
      uint64_t TRIM_ENV_TAIL_ADJ_VD_OVERRIDE:1;
      uint64_t TRIM_TX_D_CAL_OVERRIDE:1;
      uint64_t TRIM_TX_CAL45DP_OVERRIDE:1;
      uint64_t TRIM_TX_CAL45DM_OVERRIDE:1;
      uint64_t TRIM_REFBIAS_VBGADJ_OVERRIDE:1;
      uint64_t TRIM_REFBIAS_TST_OVERRIDE:1;
      uint64_t reservedSpace0:3;
      uint64_t TRIM_USB2_REFBIAS_VBGADJ:3;
      uint64_t TRIM_USB2_REFBIAS_TST:2;
      uint64_t TRIM_PLL_CTRL0_DIV_SEL:3;
      uint64_t TRIM_USB_REG_ENV_TAIL_ADJ_VD:2;
      uint64_t TRIM_USBPHY_TX_D_CAL:4;
      uint64_t TRIM_USBPHY_TX_CAL45DP:4;
      uint64_t TRIM_USBPHY_TX_CAL45DM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_TRIM_OVERRIDE_EN_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIM_DIV_SEL_OVERRIDE:1;
      uint64_t TRIM_ENV_TAIL_ADJ_VD_OVERRIDE:1;
      uint64_t TRIM_TX_D_CAL_OVERRIDE:1;
      uint64_t TRIM_TX_CAL45DP_OVERRIDE:1;
      uint64_t TRIM_TX_CAL45DM_OVERRIDE:1;
      uint64_t TRIM_REFBIAS_VBGADJ_OVERRIDE:1;
      uint64_t TRIM_REFBIAS_TST_OVERRIDE:1;
      uint64_t reservedSpace0:3;
      uint64_t TRIM_USB2_REFBIAS_VBGADJ:3;
      uint64_t TRIM_USB2_REFBIAS_TST:2;
      uint64_t TRIM_PLL_CTRL0_DIV_SEL:3;
      uint64_t TRIM_USB_REG_ENV_TAIL_ADJ_VD:2;
      uint64_t TRIM_USBPHY_TX_D_CAL:4;
      uint64_t TRIM_USBPHY_TX_CAL45DP:4;
      uint64_t TRIM_USBPHY_TX_CAL45DM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPHY_TRIM_OVERRIDE_EN_TOG;

};

#define USBPHY (*(volatile struct USBPHY_tag *) 0x40350000)

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
      uint64_t LCTL:1;
      uint64_t DTW:2;
      uint64_t D3CD:1;
      uint64_t EMODE:2;
      uint64_t CDTL:1;
      uint64_t CDSS:1;
      uint64_t DMASEL:2;
      uint64_t reservedSpace0:6;
      uint64_t SABGREQ:1;
      uint64_t CREQ:1;
      uint64_t RWCTL:1;
      uint64_t IABG:1;
      uint64_t RD_DONE_NO_8CLK:1;
      uint64_t reservedSpace1:3;
      uint64_t WECINT:1;
      uint64_t WECINS:1;
      uint64_t WECRM:1;
      uint64_t BURST_LEN_EN:3;
      uint64_t NON_EXACT_BLK_RD:1;
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
      uint64_t CONFLICT_CHK_EN:1;
      uint64_t AC12_WR_CHKBUSY_EN:1;
      uint64_t reservedSpace1:4;
      uint64_t FRC_SDCLK_ON:1;
      uint64_t reservedSpace2:6;
      uint64_t CRC_CHK_DIS:1;
      uint64_t reservedSpace3:15;
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
      uint64_t PART_DLL_DEBUG:1;
      uint64_t BUS_RST:1;
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

#define USDHC0 (*(volatile struct USDHC0_tag *) 0x40370000)

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
      uint64_t LCTL:1;
      uint64_t DTW:2;
      uint64_t D3CD:1;
      uint64_t EMODE:2;
      uint64_t CDTL:1;
      uint64_t CDSS:1;
      uint64_t DMASEL:2;
      uint64_t reservedSpace0:6;
      uint64_t SABGREQ:1;
      uint64_t CREQ:1;
      uint64_t RWCTL:1;
      uint64_t IABG:1;
      uint64_t RD_DONE_NO_8CLK:1;
      uint64_t reservedSpace1:3;
      uint64_t WECINT:1;
      uint64_t WECINS:1;
      uint64_t WECRM:1;
      uint64_t BURST_LEN_EN:3;
      uint64_t NON_EXACT_BLK_RD:1;
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
      uint64_t CONFLICT_CHK_EN:1;
      uint64_t AC12_WR_CHKBUSY_EN:1;
      uint64_t reservedSpace1:4;
      uint64_t FRC_SDCLK_ON:1;
      uint64_t reservedSpace2:6;
      uint64_t CRC_CHK_DIS:1;
      uint64_t reservedSpace3:15;
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
      uint64_t PART_DLL_DEBUG:1;
      uint64_t BUS_RST:1;
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

#define USDHC1 (*(volatile struct USDHC1_tag *) 0x40380000)

struct TRGMUX1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:6;
      uint64_t reservedSpace0:2;
      uint64_t SEL1:6;
      uint64_t reservedSpace1:2;
      uint64_t SEL2:6;
      uint64_t reservedSpace2:2;
      uint64_t SEL3:6;
      uint64_t reservedSpace3:1;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMUX1_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:6;
      uint64_t reservedSpace0:2;
      uint64_t SEL1:6;
      uint64_t reservedSpace1:2;
      uint64_t SEL2:6;
      uint64_t reservedSpace2:2;
      uint64_t SEL3:6;
      uint64_t reservedSpace3:1;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMUX1_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:6;
      uint64_t reservedSpace0:2;
      uint64_t SEL1:6;
      uint64_t reservedSpace1:2;
      uint64_t SEL2:6;
      uint64_t reservedSpace2:9;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPM4_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:6;
      uint64_t reservedSpace0:2;
      uint64_t SEL1:6;
      uint64_t reservedSpace1:2;
      uint64_t SEL2:6;
      uint64_t reservedSpace2:9;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPM5_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:6;
      uint64_t reservedSpace0:2;
      uint64_t SEL1:6;
      uint64_t reservedSpace1:2;
      uint64_t SEL2:6;
      uint64_t reservedSpace2:9;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPM6_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:6;
      uint64_t reservedSpace0:2;
      uint64_t SEL1:6;
      uint64_t reservedSpace1:2;
      uint64_t SEL2:6;
      uint64_t reservedSpace2:9;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPM7_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:6;
      uint64_t reservedSpace0:25;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPUART4_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:6;
      uint64_t reservedSpace0:25;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPUART5_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:6;
      uint64_t reservedSpace0:25;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPUART6_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:6;
      uint64_t reservedSpace0:25;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPUART7_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:6;
      uint64_t reservedSpace0:25;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPI2C4_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:6;
      uint64_t reservedSpace0:25;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPI2C5_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:6;
      uint64_t reservedSpace0:25;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPI2C6_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:6;
      uint64_t reservedSpace0:25;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPI2C7_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:6;
      uint64_t reservedSpace0:25;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPSPI2_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:6;
      uint64_t reservedSpace0:25;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPSPI3_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:6;
      uint64_t reservedSpace0:2;
      uint64_t SEL1:6;
      uint64_t reservedSpace1:2;
      uint64_t SEL2:6;
      uint64_t reservedSpace2:2;
      uint64_t SEL3:6;
      uint64_t reservedSpace3:1;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLEXIO1_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:6;
      uint64_t reservedSpace0:2;
      uint64_t SEL1:6;
      uint64_t reservedSpace1:2;
      uint64_t SEL2:6;
      uint64_t reservedSpace2:2;
      uint64_t SEL3:6;
      uint64_t reservedSpace3:1;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPIT1_register;

};

#define TRGMUX1 (*(volatile struct TRGMUX1_tag *) 0x403a0000)

struct SCG1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKPRES:8;
      uint64_t reservedSpace0:19;
      uint64_t DIVPRES:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIVCORE:4;
      uint64_t reservedSpace1:4;
      uint64_t SCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIVCORE:4;
      uint64_t reservedSpace1:4;
      uint64_t SCS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIVCORE:4;
      uint64_t reservedSpace1:4;
      uint64_t SCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIVCORE:4;
      uint64_t reservedSpace1:4;
      uint64_t SCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t CLKOUTSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKOUTCNFG;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DDRDIV:3;
      uint64_t reservedSpace0:21;
      uint64_t DDRCS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDRCCR;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t NIC1_DIVBUS:4;
      uint64_t NIC1_DIVEXT:4;
      uint64_t reservedSpace1:4;
      uint64_t NIC1_DIV:4;
      uint64_t GPU_DIV:4;
      uint64_t NIC0_DIV:4;
      uint64_t NICCS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NICCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t NIC1_DIVBUS:4;
      uint64_t NIC1_DIVEXT:4;
      uint64_t reservedSpace1:4;
      uint64_t NIC1_DIV:4;
      uint64_t GPU_DIV:4;
      uint64_t NIC0_DIV:4;
      uint64_t NICCS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NICCSR;

  uint8_t res3[184];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SOSCCM:1;
      uint64_t SOSCCMRE:1;
      uint64_t reservedSpace1:5;
      uint64_t LK:1;
      uint64_t SOSCVLD:1;
      uint64_t SOSCSEL:1;
      uint64_t SOSCERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOSCCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOSCDIV1:3;
      uint64_t reservedSpace0:5;
      uint64_t SOSCDIV2:3;
      uint64_t reservedSpace1:5;
      uint64_t SOSCDIV3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOSCDIV;

  uint8_t res4[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:23;
      uint64_t LK:1;
      uint64_t SIRCVLD:1;
      uint64_t SIRCSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIRCCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIRCDIV1:3;
      uint64_t reservedSpace0:5;
      uint64_t SIRCDIV2:3;
      uint64_t reservedSpace1:5;
      uint64_t SIRCDIV3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIRCDIV;

  uint8_t res5[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t FIRCTREN:1;
      uint64_t FIRCTRUP:1;
      uint64_t reservedSpace1:14;
      uint64_t FIRCVLD:1;
      uint64_t FIRCSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIRCCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIRCDIV1:3;
      uint64_t reservedSpace0:5;
      uint64_t FIRCDIV2:3;
      uint64_t reservedSpace1:5;
      uint64_t FIRCDIV3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIRCDIV;

  uint8_t res6[504];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APLLEN:1;
      uint64_t APLLSTEN:1;
      uint64_t reservedSpace0:21;
      uint64_t LK:1;
      uint64_t APLLVLD:1;
      uint64_t APLLSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APLLCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APLLDIV1:3;
      uint64_t reservedSpace0:5;
      uint64_t APLLDIV2:3;
      uint64_t reservedSpace1:5;
      uint64_t APLLDIV3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APLLDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:1;
      uint64_t PLLS:1;
      uint64_t reservedSpace0:6;
      uint64_t PREDIV:3;
      uint64_t reservedSpace1:3;
      uint64_t PFDSEL:2;
      uint64_t MULT:7;
      uint64_t reservedSpace2:1;
      uint64_t PLLPOSTDIV1:4;
      uint64_t PLLPOSTDIV2:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APLLCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFD0:6;
      uint64_t PFD0_VALID:1;
      uint64_t PFD0_CLKGATE:1;
      uint64_t PFD1:6;
      uint64_t PFD1_VALID:1;
      uint64_t PFD1_CLKGATE:1;
      uint64_t PFD2:6;
      uint64_t PFD2_VALID:1;
      uint64_t PFD2_CLKGATE:1;
      uint64_t PFD3:6;
      uint64_t PFD3_VALID:1;
      uint64_t PFD3_CLKGATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APLLPFD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NUM:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APLLNUM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DENOM:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APLLDENOM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STEP:15;
      uint64_t ENABLE:1;
      uint64_t STOP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APLLSS;

  uint8_t res7[220];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCK_TIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APLLLOCK_CNFG;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPLLEN:1;
      uint64_t SPLLSTEN:1;
      uint64_t reservedSpace0:21;
      uint64_t LK:1;
      uint64_t SPLLVLD:1;
      uint64_t SPLLSEL:1;
      uint64_t SPLLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPLLCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPLLDIV1:3;
      uint64_t reservedSpace0:5;
      uint64_t SPLLDIV2:3;
      uint64_t reservedSpace1:5;
      uint64_t SPLLDIV3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPLLDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:1;
      uint64_t PLLS:1;
      uint64_t reservedSpace0:6;
      uint64_t PREDIV:3;
      uint64_t reservedSpace1:3;
      uint64_t PFDSEL:2;
      uint64_t MULT:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPLLCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFD0:6;
      uint64_t PFD0_VALID:1;
      uint64_t PFD0_CLKGATE:1;
      uint64_t PFD1:6;
      uint64_t PFD1_VALID:1;
      uint64_t PFD1_CLKGATE:1;
      uint64_t PFD2:6;
      uint64_t PFD2_VALID:1;
      uint64_t PFD2_CLKGATE:1;
      uint64_t PFD3:6;
      uint64_t PFD3_VALID:1;
      uint64_t PFD3_CLKGATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPLLPFD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NUM:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPLLNUM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DENOM:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPLLDENOM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STEP:15;
      uint64_t ENABLE:1;
      uint64_t STOP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPLLSS;

  uint8_t res9[220];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCK_TIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPLLLOCK_CNFG;

};

#define SCG1 (*(volatile struct SCG1_tag *) 0x403e0000)

struct PCC2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_DMA1;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_RGPIO2P1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_FLEXBUS;

  uint8_t res1[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_SEMA42_1;

  uint8_t res2[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_DMA_MUX1;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_CAAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_TPM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_TPM5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPIT1;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPSPI2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPSPI3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPI2C4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPI2C5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPUART4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPUART5;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_FLEXIO1;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCD:3;
      uint64_t FRAC:1;
      uint64_t reservedSpace0:20;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_USB0;

  uint32_t PCC_USB1;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_USB_PHY;

  uint32_t PCC_USB_PL301;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCD:3;
      uint64_t FRAC:1;
      uint64_t reservedSpace0:20;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_USDHC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCD:3;
      uint64_t FRAC:1;
      uint64_t reservedSpace0:20;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_USDHC1;

  uint8_t res7[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCD:3;
      uint64_t FRAC:1;
      uint64_t reservedSpace0:20;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_WDOG1;

  uint8_t res8[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCD:3;
      uint64_t FRAC:1;
      uint64_t reservedSpace0:20;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_WDOG2;

};

#define PCC2 (*(volatile struct PCC2_tag *) 0x403f0020)

struct PMC1_tag
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
      uint64_t reservedSpace0:16;
      uint64_t LDOVL:6;
      uint64_t reservedSpace1:2;
      uint64_t FBBEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSRUN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t LDOVL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RUN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LDOM:1;
      uint64_t reservedSpace0:3;
      uint64_t MONLVD:1;
      uint64_t MONHVD:1;
      uint64_t reservedSpace1:10;
      uint64_t LDOVL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VLPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t LDOVL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LDOM:1;
      uint64_t reservedSpace0:3;
      uint64_t MONLVD:1;
      uint64_t MONHVD:1;
      uint64_t reservedSpace1:10;
      uint64_t LDOVL:6;
      uint64_t reservedSpace2:6;
      uint64_t RBBEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VLPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LDOM:1;
      uint64_t reservedSpace0:3;
      uint64_t MONLVD:1;
      uint64_t MONHVD:1;
      uint64_t reservedSpace1:10;
      uint64_t LDOVL:6;
      uint64_t reservedSpace2:6;
      uint64_t RBBEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LLS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LDOM:1;
      uint64_t reservedSpace0:3;
      uint64_t MONLVD:1;
      uint64_t MONHVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VLLS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LVDF:1;
      uint64_t LVDV:1;
      uint64_t reservedSpace0:2;
      uint64_t HVDF:1;
      uint64_t HVDV:1;
      uint64_t reservedSpace1:2;
      uint64_t LDOVLF:1;
      uint64_t reservedSpace2:15;
      uint64_t SRAMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LVDIE:1;
      uint64_t LVDACK:1;
      uint64_t HVDIE:1;
      uint64_t HVDACK:1;
      uint64_t reservedSpace0:4;
      uint64_t LVDRE:1;
      uint64_t reservedSpace1:1;
      uint64_t HVDRE:1;
      uint64_t reservedSpace2:3;
      uint64_t ISOACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RBBNLEVEL:4;
      uint64_t reservedSpace0:4;
      uint64_t RBBPLEVEL:4;
      uint64_t reservedSpace1:4;
      uint64_t FBBNLEVEL:4;
      uint64_t reservedSpace2:4;
      uint64_t FBBPLEVEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCTRL;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAM_STDY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRAMCTRL;

};

#define PMC1 (*(volatile struct PMC1_tag *) 0x40400000)

struct VIU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOFT_RESET:1;
      uint64_t FORMAT_CTRL:3;
      uint64_t ERROR_CODE:4;
      uint64_t FIELD_EN:1;
      uint64_t VSYNC_EN:1;
      uint64_t HSYNC_EN:1;
      uint64_t VSTART_EN:1;
      uint64_t DMA_END_EN:1;
      uint64_t ERROR_EN:1;
      uint64_t ECC_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t FIELD_IRQ:1;
      uint64_t VSYNC_IRQ:1;
      uint64_t HSYNC_IRQ:1;
      uint64_t VSTART_IRQ:1;
      uint64_t DMA_END_IRQ:1;
      uint64_t ERROR_IRQ:1;
      uint64_t reservedSpace1:1;
      uint64_t MODE444:1;
      uint64_t BC_EN:1;
      uint64_t YUV2RGB_EN:1;
      uint64_t SCALER_EN:1;
      uint64_t DMA_ACT:1;
      uint64_t FIELD_NO:1;
      uint64_t DITHER_ON:1;
      uint64_t ROUND_ON:1;
      uint64_t MODE32BIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DETECTED_PIXELC:16;
      uint64_t DETECTED_LINEC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DINVSZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DETECTED_FRAME_WIDTH:16;
      uint64_t DETECTED_FRAME_HEIGHT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DINVFL;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t ADDR:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t INC:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_INC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIXELC:16;
      uint64_t LINEC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INVSZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALARM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPRALRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALPHA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALPHA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACTOR:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFACTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACTOR:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VFACTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIXELC:16;
      uint64_t LINEC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VID_SIZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HMIRROR_EN:1;
      uint64_t DE_POL:1;
      uint64_t HSYNC_POL:1;
      uint64_t VSYNC_POL:1;
      uint64_t PCLK_POL:1;
      uint64_t INP_FORMAT:3;
      uint64_t DE_VALID:1;
      uint64_t RGB2YUV_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t LENDIAN:1;
      uint64_t CS_EN:1;
      uint64_t MODE_8BIT:1;
      uint64_t MONO_LSB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXT_CONFIG;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACT_ORG_X:16;
      uint64_t ACT_ORG_Y:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACT_ORG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACT_IMG_WIDTH:16;
      uint64_t ACT_IMG_HEIGHT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACT_SIZE;

};

#define VIU (*(volatile struct VIU_tag *) 0x40a80000)

struct MIPI_DSI_HOST0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_num_lanes:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST0_DSI_HOST_CFG_NUM_LANES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_noncontinuous_clk:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST0_DSI_HOST_CFG_NONCONTINUOUS_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_t_pre:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST0_DSI_HOST_CFG_T_PRE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_t_post:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST0_DSI_HOST_CFG_T_POST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_tx_gap:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST0_DSI_HOST_CFG_TX_GAP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_autoinsert_eotp:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST0_DSI_HOST_CFG_AUTOINSERT_EOTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_extra_cmds_after_eotp:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST0_DSI_HOST_CFG_EXTRA_CMDS_AFTER_EOTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_htx_to_count:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST0_DSI_HOST_CFG_HTX_TO_COUNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_lrx_h_to_count:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST0_DSI_HOST_CFG_LRX_H_TO_COUNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_bta_h_to_count:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST0_DSI_HOST_CFG_BTA_H_TO_COUNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_twakeup:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST0_DSI_HOST_CFG_TWAKEUP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOT_ERROR:1;
      uint64_t SOT_SYNC_ERROR:1;
      uint64_t EOT_SYNC_ERROR:1;
      uint64_t ESCAPE_MODE_ENTRY_CMD_ERROR:1;
      uint64_t LP_TX_SYNC_ERROR:1;
      uint64_t PERIPH_TIMEOUT_ERROR:1;
      uint64_t FALSE_CONTROL_ERROR:1;
      uint64_t CONTENTION_DETECT:1;
      uint64_t ECC_ERROR_SINGLE_BIT:1;
      uint64_t ECC_ERROR_MULTI_BIT:1;
      uint64_t CHECKSUM_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST0_DSI_HOST_CFG_STATUS_OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_rx_error_status:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST0_DSI_HOST_RX_ERROR_STATUS;

};

#define MIPI_DSI_HOST0 (*(volatile struct MIPI_DSI_HOST0_tag *) 0x40a90000)

struct MIPI_DSI_HOST_DPI_INTFC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_dpi_pixel_payload_size:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_DPI_INTFC0_DSI_HOST_CFG_DPI_PIXEL_PAYLOAD_SIZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_dpi_pixel_fifo_send_level:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_DPI_INTFC0_DSI_HOST_CFG_DPI_PIXEL_FIFO_SEND_LEVEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_dpi_interface_color_coding:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_DPI_INTFC0_DSI_HOST_CFG_DPI_INTERFACE_COLOR_CODING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_dpi_pixel_format:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_DPI_INTFC0_DSI_HOST_CFG_DPI_PIXEL_FORMAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_dpi_vsync_polarity:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_DPI_INTFC0_DSI_HOST_CFG_DPI_VSYNC_POLARITY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_dpi_hsync_polarity:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_DPI_INTFC0_DSI_HOST_CFG_DPI_HSYNC_POLARITY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_dpi_video_mode:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_DPI_INTFC0_DSI_HOST_CFG_DPI_VIDEO_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_dpi_hfp:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_DPI_INTFC0_DSI_HOST_CFG_DPI_HFP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_dpi_hbp:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_DPI_INTFC0_DSI_HOST_CFG_DPI_HBP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_dpi_hsa:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_DPI_INTFC0_DSI_HOST_CFG_DPI_HSA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_dpi_enable_mult_pkts:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_DPI_INTFC0_DSI_HOST_CFG_DPI_ENABLE_MULT_PKTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_dpi_vbp:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_DPI_INTFC0_DSI_HOST_CFG_DPI_VBP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_dpi_vfp:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_DPI_INTFC0_DSI_HOST_CFG_DPI_VFP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_dpi_bllp_mode:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_DPI_INTFC0_DSI_HOST_CFG_DPI_BLLP_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_dpi_use_null_pkt_bllp:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_DPI_INTFC0_DSI_HOST_CFG_DPI_USE_NULL_PKT_BLLP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_dpi_vactive:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_DPI_INTFC0_DSI_HOST_CFG_DPI_VACTIVE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_cfg_dpi_vc:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_DPI_INTFC0_DSI_HOST_CFG_DPI_VC;

};

#define MIPI_DSI_HOST_DPI_INTFC0 (*(volatile struct MIPI_DSI_HOST_DPI_INTFC0_tag *) 0x40a90200)

struct MIPI_DSI_HOST_APB_PKT_IF0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_tx_payload:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_APB_PKT_IF0_DSI_HOST_TX_PAYLOAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_pkt_control:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_APB_PKT_IF0_DSI_HOST_PKT_CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_send_packet:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_APB_PKT_IF0_DSI_HOST_SEND_PACKET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_pkt_status:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_APB_PKT_IF0_DSI_HOST_PKT_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_pkt_fifo_wr_level:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_APB_PKT_IF0_DSI_HOST_PKT_FIFO_WR_LEVEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_pkt_fifo_rd_level:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_APB_PKT_IF0_DSI_HOST_PKT_FIFO_RD_LEVEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_pkt_rx_payload:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_APB_PKT_IF0_DSI_HOST_PKT_RX_PAYLOAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_pkt_rx_pkt_header:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_APB_PKT_IF0_DSI_HOST_PKT_RX_PKT_HEADER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_irq_status:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_APB_PKT_IF0_DSI_HOST_IRQ_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_irq_status2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_APB_PKT_IF0_DSI_HOST_IRQ_STATUS2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_irq_mask:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_APB_PKT_IF0_DSI_HOST_IRQ_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dsi_host_irq_mask2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_APB_PKT_IF0_DSI_HOST_IRQ_MASK2;

};

#define MIPI_DSI_HOST_APB_PKT_IF0 (*(volatile struct MIPI_DSI_HOST_APB_PKT_IF0_tag *) 0x40a90280)

struct MIPI_DSI_HOST_FSL_IP1_DPHY_INTFC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t dphy_pd_dphy:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_FSL_IP1_DPHY_INTFC0_DPHY_PD_DPHY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dphy_m_prg_hs_prepare:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_FSL_IP1_DPHY_INTFC0_DPHY_M_PRG_HS_PREPARE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dphy_mc_prg_hs_prepare:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_FSL_IP1_DPHY_INTFC0_DPHY_MC_PRG_HS_PREPARE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dphy_m_prg_hs_zero:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_FSL_IP1_DPHY_INTFC0_DPHY_M_PRG_HS_ZERO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dphy_mc_prg_hs_zero:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_FSL_IP1_DPHY_INTFC0_DPHY_MC_PRG_HS_ZERO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dphy_m_prg_hs_trail:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_FSL_IP1_DPHY_INTFC0_DPHY_M_PRG_HS_TRAIL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dphy_mc_prg_hs_trail:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_FSL_IP1_DPHY_INTFC0_DPHY_MC_PRG_HS_TRAIL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_FSL_IP1_DPHY_INTFC0_DPHY_PD_PLL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TST:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_FSL_IP1_DPHY_INTFC0_DPHY_TST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_FSL_IP1_DPHY_INTFC0_DPHY_CN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_FSL_IP1_DPHY_INTFC0_DPHY_CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_FSL_IP1_DPHY_INTFC0_DPHY_CO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_FSL_IP1_DPHY_INTFC0_DPHY_LOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dphy_lock_byp:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_FSL_IP1_DPHY_INTFC0_DPHY_LOCK_BYP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dphy_rterm_sel:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_FSL_IP1_DPHY_INTFC0_DPHY_RTERM_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dphy_auto_pd_en:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_FSL_IP1_DPHY_INTFC0_DPHY_AUTO_PD_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dphy_rxlprp:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_FSL_IP1_DPHY_INTFC0_DPHY_RXLPRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dphy_rxcdrp:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIPI_DSI_HOST_FSL_IP1_DPHY_INTFC0_DPHY_RXCDRP;

};

#define MIPI_DSI_HOST_FSL_IP1_DPHY_INTFC0 (*(volatile struct MIPI_DSI_HOST_FSL_IP1_DPHY_INTFC0_tag *) 0x40a90300)

struct LCDIF0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t DATA_FORMAT_24_BIT:1;
      uint64_t DATA_FORMAT_18_BIT:1;
      uint64_t DATA_FORMAT_16_BIT:1;
      uint64_t reservedSpace0:1;
      uint64_t MASTER:1;
      uint64_t reservedSpace1:2;
      uint64_t WORD_LENGTH:2;
      uint64_t LCD_DATABUS_WIDTH:2;
      uint64_t CSC_DATA_SWIZZLE:2;
      uint64_t INPUT_DATA_SWIZZLE:2;
      uint64_t reservedSpace2:1;
      uint64_t DOTCLK_MODE:1;
      uint64_t reservedSpace3:1;
      uint64_t BYPASS_COUNT:1;
      uint64_t reservedSpace4:1;
      uint64_t SHIFT_NUM_BITS:5;
      uint64_t DATA_SHIFT_DIR:1;
      uint64_t reservedSpace5:3;
      uint64_t CLKGATE:1;
      uint64_t SFTRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t DATA_FORMAT_24_BIT:1;
      uint64_t DATA_FORMAT_18_BIT:1;
      uint64_t DATA_FORMAT_16_BIT:1;
      uint64_t reservedSpace0:1;
      uint64_t MASTER:1;
      uint64_t reservedSpace1:2;
      uint64_t WORD_LENGTH:2;
      uint64_t LCD_DATABUS_WIDTH:2;
      uint64_t CSC_DATA_SWIZZLE:2;
      uint64_t INPUT_DATA_SWIZZLE:2;
      uint64_t reservedSpace2:1;
      uint64_t DOTCLK_MODE:1;
      uint64_t reservedSpace3:1;
      uint64_t BYPASS_COUNT:1;
      uint64_t reservedSpace4:1;
      uint64_t SHIFT_NUM_BITS:5;
      uint64_t DATA_SHIFT_DIR:1;
      uint64_t reservedSpace5:3;
      uint64_t CLKGATE:1;
      uint64_t SFTRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_CTRL_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t DATA_FORMAT_24_BIT:1;
      uint64_t DATA_FORMAT_18_BIT:1;
      uint64_t DATA_FORMAT_16_BIT:1;
      uint64_t reservedSpace0:1;
      uint64_t MASTER:1;
      uint64_t reservedSpace1:2;
      uint64_t WORD_LENGTH:2;
      uint64_t LCD_DATABUS_WIDTH:2;
      uint64_t CSC_DATA_SWIZZLE:2;
      uint64_t INPUT_DATA_SWIZZLE:2;
      uint64_t reservedSpace2:1;
      uint64_t DOTCLK_MODE:1;
      uint64_t reservedSpace3:1;
      uint64_t BYPASS_COUNT:1;
      uint64_t reservedSpace4:1;
      uint64_t SHIFT_NUM_BITS:5;
      uint64_t DATA_SHIFT_DIR:1;
      uint64_t reservedSpace5:3;
      uint64_t CLKGATE:1;
      uint64_t SFTRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_CTRL_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t DATA_FORMAT_24_BIT:1;
      uint64_t DATA_FORMAT_18_BIT:1;
      uint64_t DATA_FORMAT_16_BIT:1;
      uint64_t reservedSpace0:1;
      uint64_t MASTER:1;
      uint64_t reservedSpace1:2;
      uint64_t WORD_LENGTH:2;
      uint64_t LCD_DATABUS_WIDTH:2;
      uint64_t CSC_DATA_SWIZZLE:2;
      uint64_t INPUT_DATA_SWIZZLE:2;
      uint64_t reservedSpace2:1;
      uint64_t DOTCLK_MODE:1;
      uint64_t reservedSpace3:1;
      uint64_t BYPASS_COUNT:1;
      uint64_t reservedSpace4:1;
      uint64_t SHIFT_NUM_BITS:5;
      uint64_t DATA_SHIFT_DIR:1;
      uint64_t reservedSpace5:3;
      uint64_t CLKGATE:1;
      uint64_t SFTRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_CTRL_TOG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t reservedSpace0:7;
      uint64_t VSYNC_EDGE_IRQ:1;
      uint64_t CUR_FRAME_DONE_IRQ:1;
      uint64_t UNDERFLOW_IRQ:1;
      uint64_t OVERFLOW_IRQ:1;
      uint64_t VSYNC_EDGE_IRQ_EN:1;
      uint64_t CUR_FRAME_DONE_IRQ_EN:1;
      uint64_t UNDERFLOW_IRQ_EN:1;
      uint64_t OVERFLOW_IRQ_EN:1;
      uint64_t BYTE_PACKING_FORMAT:4;
      uint64_t IRQ_ON_ALTERNATE_FIELDS:1;
      uint64_t FIFO_CLEAR:1;
      uint64_t START_INTERLACE_FROM_SECOND_FIELD:1;
      uint64_t INTERLACE_FIELDS:1;
      uint64_t RECOVER_ON_UNDERFLOW:1;
      uint64_t BM_ERROR_IRQ:1;
      uint64_t BM_ERROR_IRQ_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t reservedSpace0:7;
      uint64_t VSYNC_EDGE_IRQ:1;
      uint64_t CUR_FRAME_DONE_IRQ:1;
      uint64_t UNDERFLOW_IRQ:1;
      uint64_t OVERFLOW_IRQ:1;
      uint64_t VSYNC_EDGE_IRQ_EN:1;
      uint64_t CUR_FRAME_DONE_IRQ_EN:1;
      uint64_t UNDERFLOW_IRQ_EN:1;
      uint64_t OVERFLOW_IRQ_EN:1;
      uint64_t BYTE_PACKING_FORMAT:4;
      uint64_t IRQ_ON_ALTERNATE_FIELDS:1;
      uint64_t FIFO_CLEAR:1;
      uint64_t START_INTERLACE_FROM_SECOND_FIELD:1;
      uint64_t INTERLACE_FIELDS:1;
      uint64_t RECOVER_ON_UNDERFLOW:1;
      uint64_t BM_ERROR_IRQ:1;
      uint64_t BM_ERROR_IRQ_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_CTRL1_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t reservedSpace0:7;
      uint64_t VSYNC_EDGE_IRQ:1;
      uint64_t CUR_FRAME_DONE_IRQ:1;
      uint64_t UNDERFLOW_IRQ:1;
      uint64_t OVERFLOW_IRQ:1;
      uint64_t VSYNC_EDGE_IRQ_EN:1;
      uint64_t CUR_FRAME_DONE_IRQ_EN:1;
      uint64_t UNDERFLOW_IRQ_EN:1;
      uint64_t OVERFLOW_IRQ_EN:1;
      uint64_t BYTE_PACKING_FORMAT:4;
      uint64_t IRQ_ON_ALTERNATE_FIELDS:1;
      uint64_t FIFO_CLEAR:1;
      uint64_t START_INTERLACE_FROM_SECOND_FIELD:1;
      uint64_t INTERLACE_FIELDS:1;
      uint64_t RECOVER_ON_UNDERFLOW:1;
      uint64_t BM_ERROR_IRQ:1;
      uint64_t BM_ERROR_IRQ_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_CTRL1_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t reservedSpace0:7;
      uint64_t VSYNC_EDGE_IRQ:1;
      uint64_t CUR_FRAME_DONE_IRQ:1;
      uint64_t UNDERFLOW_IRQ:1;
      uint64_t OVERFLOW_IRQ:1;
      uint64_t VSYNC_EDGE_IRQ_EN:1;
      uint64_t CUR_FRAME_DONE_IRQ_EN:1;
      uint64_t UNDERFLOW_IRQ_EN:1;
      uint64_t OVERFLOW_IRQ_EN:1;
      uint64_t BYTE_PACKING_FORMAT:4;
      uint64_t IRQ_ON_ALTERNATE_FIELDS:1;
      uint64_t FIFO_CLEAR:1;
      uint64_t START_INTERLACE_FROM_SECOND_FIELD:1;
      uint64_t INTERLACE_FIELDS:1;
      uint64_t RECOVER_ON_UNDERFLOW:1;
      uint64_t BM_ERROR_IRQ:1;
      uint64_t BM_ERROR_IRQ_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_CTRL1_TOG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t EVEN_LINE_PATTERN:3;
      uint64_t reservedSpace1:1;
      uint64_t ODD_LINE_PATTERN:3;
      uint64_t reservedSpace2:1;
      uint64_t BURST_LEN_8:1;
      uint64_t OUTSTANDING_REQS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_CTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t EVEN_LINE_PATTERN:3;
      uint64_t reservedSpace1:1;
      uint64_t ODD_LINE_PATTERN:3;
      uint64_t reservedSpace2:1;
      uint64_t BURST_LEN_8:1;
      uint64_t OUTSTANDING_REQS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_CTRL2_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t EVEN_LINE_PATTERN:3;
      uint64_t reservedSpace1:1;
      uint64_t ODD_LINE_PATTERN:3;
      uint64_t reservedSpace2:1;
      uint64_t BURST_LEN_8:1;
      uint64_t OUTSTANDING_REQS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_CTRL2_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t EVEN_LINE_PATTERN:3;
      uint64_t reservedSpace1:1;
      uint64_t ODD_LINE_PATTERN:3;
      uint64_t reservedSpace2:1;
      uint64_t BURST_LEN_8:1;
      uint64_t OUTSTANDING_REQS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_CTRL2_TOG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t H_COUNT:16;
      uint64_t V_COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_TRANSFER_COUNT;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_CUR_BUF;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_NEXT_BUF;

  uint8_t res2[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSYNC_PULSE_WIDTH:18;
      uint64_t HALF_LINE_MODE:1;
      uint64_t HALF_LINE:1;
      uint64_t VSYNC_PULSE_WIDTH_UNIT:1;
      uint64_t VSYNC_PERIOD_UNIT:1;
      uint64_t reservedSpace0:2;
      uint64_t ENABLE_POL:1;
      uint64_t DOTCLK_POL:1;
      uint64_t HSYNC_POL:1;
      uint64_t VSYNC_POL:1;
      uint64_t ENABLE_PRESENT:1;
      uint64_t VSYNC_OEB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_VDCTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSYNC_PULSE_WIDTH:18;
      uint64_t HALF_LINE_MODE:1;
      uint64_t HALF_LINE:1;
      uint64_t VSYNC_PULSE_WIDTH_UNIT:1;
      uint64_t VSYNC_PERIOD_UNIT:1;
      uint64_t reservedSpace0:2;
      uint64_t ENABLE_POL:1;
      uint64_t DOTCLK_POL:1;
      uint64_t HSYNC_POL:1;
      uint64_t VSYNC_POL:1;
      uint64_t ENABLE_PRESENT:1;
      uint64_t VSYNC_OEB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_VDCTRL0_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSYNC_PULSE_WIDTH:18;
      uint64_t HALF_LINE_MODE:1;
      uint64_t HALF_LINE:1;
      uint64_t VSYNC_PULSE_WIDTH_UNIT:1;
      uint64_t VSYNC_PERIOD_UNIT:1;
      uint64_t reservedSpace0:2;
      uint64_t ENABLE_POL:1;
      uint64_t DOTCLK_POL:1;
      uint64_t HSYNC_POL:1;
      uint64_t VSYNC_POL:1;
      uint64_t ENABLE_PRESENT:1;
      uint64_t VSYNC_OEB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_VDCTRL0_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSYNC_PULSE_WIDTH:18;
      uint64_t HALF_LINE_MODE:1;
      uint64_t HALF_LINE:1;
      uint64_t VSYNC_PULSE_WIDTH_UNIT:1;
      uint64_t VSYNC_PERIOD_UNIT:1;
      uint64_t reservedSpace0:2;
      uint64_t ENABLE_POL:1;
      uint64_t DOTCLK_POL:1;
      uint64_t HSYNC_POL:1;
      uint64_t VSYNC_POL:1;
      uint64_t ENABLE_PRESENT:1;
      uint64_t VSYNC_OEB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_VDCTRL0_TOG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSYNC_PERIOD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_VDCTRL1;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSYNC_PERIOD:18;
      uint64_t HSYNC_PULSE_WIDTH:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_VDCTRL2;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERTICAL_WAIT_CNT:16;
      uint64_t HORIZONTAL_WAIT_CNT:12;
      uint64_t VSYNC_ONLY:1;
      uint64_t MUX_SYNC_SIGNALS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_VDCTRL3;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOTCLK_H_VALID_DATA_CNT:18;
      uint64_t SYNC_SIGNALS_ON:1;
      uint64_t reservedSpace0:10;
      uint64_t DOTCLK_DLY_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_VDCTRL4;

  uint8_t res6[220];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_BM_ERROR_STAT;

  uint8_t res7[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_CRC_STAT;

  uint8_t res8[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFIFO_COUNT:9;
      uint64_t reservedSpace0:17;
      uint64_t TXFIFO_EMPTY:1;
      uint64_t TXFIFO_FULL:1;
      uint64_t LFIFO_EMPTY:1;
      uint64_t LFIFO_FULL:1;
      uint64_t reservedSpace1:1;
      uint64_t PRESENT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_STAT;

  uint8_t res9[92];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AS_ENABLE:1;
      uint64_t ALPHA_CTRL:2;
      uint64_t ENABLE_COLORKEY:1;
      uint64_t FORMAT:4;
      uint64_t ALPHA:8;
      uint64_t ROP:4;
      uint64_t ALPHA_INVERT:1;
      uint64_t INPUT_DATA_SWIZZLE:2;
      uint64_t PS_DISABLE:1;
      uint64_t RVDS1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_AS_CTRL;

  uint8_t res10[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_AS_BUF;

  uint8_t res11[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_AS_NEXT_BUF;

  uint8_t res12[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIXEL:24;
      uint64_t RSVD1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_AS_CLRKEYLOW;

  uint8_t res13[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIXEL:24;
      uint64_t RSVD1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDIF0_AS_CLRKEYHIGH;

};

#define LCDIF0 (*(volatile struct LCDIF0_tag *) 0x40aa0000)

struct MMDC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DSIZ:2;
      uint64_t reservedSpace1:1;
      uint64_t BL:1;
      uint64_t COL:3;
      uint64_t reservedSpace2:1;
      uint64_t ROW:3;
      uint64_t reservedSpace3:3;
      uint64_t SDE_1:1;
      uint64_t SDE_0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MDCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tCKSRE:3;
      uint64_t tCKSRX:3;
      uint64_t BOTH_CS_PD:1;
      uint64_t SLOW_PD:1;
      uint64_t PWDT_0:4;
      uint64_t PWDT_1:4;
      uint64_t tCKE:3;
      uint64_t reservedSpace0:5;
      uint64_t PRCT_0:3;
      uint64_t reservedSpace1:1;
      uint64_t PRCT_1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MDPDC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tCL:4;
      uint64_t tFAW:5;
      uint64_t tXPDLL:4;
      uint64_t tXP:3;
      uint64_t tXS:8;
      uint64_t tRFC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MDCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tCWL:3;
      uint64_t reservedSpace0:2;
      uint64_t tMRD:4;
      uint64_t tWR:3;
      uint64_t reservedSpace1:3;
      uint64_t tRPA:1;
      uint64_t tRAS:5;
      uint64_t tRC:5;
      uint64_t tRP:3;
      uint64_t tRCD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MDCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tRRD:3;
      uint64_t tWTR:3;
      uint64_t tRTP:3;
      uint64_t reservedSpace0:7;
      uint64_t tDLLK:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MDCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RST:1;
      uint64_t reservedSpace1:1;
      uint64_t DDR_TYPE:2;
      uint64_t DDR_4_BANK:1;
      uint64_t RALAT:3;
      uint64_t MIF3_MODE:2;
      uint64_t LPDDR2_S2:1;
      uint64_t BI_ON:1;
      uint64_t reservedSpace2:3;
      uint64_t WALAT:2;
      uint64_t LHD:1;
      uint64_t reservedSpace3:1;
      uint64_t CALIB_PER_CS:1;
      uint64_t CK1_GATING:1;
      uint64_t reservedSpace4:8;
      uint64_t CS1_RDY:1;
      uint64_t CS0_RDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MDMISC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD_BA:3;
      uint64_t CMD_CS:1;
      uint64_t CMD:3;
      uint64_t reservedSpace0:3;
      uint64_t MRR_READ_DATA_VALID:1;
      uint64_t reservedSpace1:3;
      uint64_t CON_ACK:1;
      uint64_t CON_REQ:1;
      uint64_t CMD_ADDR_LSB_MR_ADDR:8;
      uint64_t CMD_ADDR_MSB_MR_OP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MDSCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START_REF:1;
      uint64_t reservedSpace0:10;
      uint64_t REFR:3;
      uint64_t REF_SEL:2;
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MDREF;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTR_DIFF:3;
      uint64_t RTW_DIFF:3;
      uint64_t WTW_DIFF:3;
      uint64_t WTR_DIFF:3;
      uint64_t RTW_SAME:3;
      uint64_t reservedSpace0:1;
      uint64_t tDAI:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MDRWD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST_to_CKE:6;
      uint64_t reservedSpace0:2;
      uint64_t SDE_to_RST:6;
      uint64_t reservedSpace1:2;
      uint64_t tXPR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MDOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MRR_READ_DATA0:8;
      uint64_t MRR_READ_DATA1:8;
      uint64_t MRR_READ_DATA2:8;
      uint64_t MRR_READ_DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MDMRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tRPab_LP:4;
      uint64_t tRPpb_LP:4;
      uint64_t tRCD_LP:4;
      uint64_t reservedSpace0:4;
      uint64_t RC_LP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MDCFG3LP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPDATE_DE_REQ:1;
      uint64_t UPDATE_DE_ACK:1;
      uint64_t reservedSpace0:2;
      uint64_t tRCD_DE:1;
      uint64_t tRC_DE:1;
      uint64_t tRAS_DE:1;
      uint64_t tRP_DE:1;
      uint64_t tRRD_DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MDMR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CS0_END:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MDASP;

  uint8_t res2[956];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARCR_GUARD:4;
      uint64_t ARCR_DYN_MAX:4;
      uint64_t ARCR_DYN_JMP:4;
      uint64_t reservedSpace0:4;
      uint64_t ARCR_ACC_HIT:3;
      uint64_t reservedSpace1:1;
      uint64_t ARCR_PAG_HIT:3;
      uint64_t reservedSpace2:1;
      uint64_t ARCR_RCH_EN:1;
      uint64_t reservedSpace3:3;
      uint64_t ARCR_EXC_ERR_EN:1;
      uint64_t reservedSpace4:1;
      uint64_t ARCR_SEC_ERR_EN:1;
      uint64_t ARCR_SEC_ERR_LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MAARCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSD:1;
      uint64_t reservedSpace0:3;
      uint64_t PSS:1;
      uint64_t RIS:1;
      uint64_t WIS:1;
      uint64_t reservedSpace1:1;
      uint64_t PST:8;
      uint64_t reservedSpace2:4;
      uint64_t LPMD:1;
      uint64_t DVFS:1;
      uint64_t reservedSpace3:2;
      uint64_t LPACK:1;
      uint64_t DVACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MAPSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXC_ID_MONITOR0:16;
      uint64_t EXC_ID_MONITOR1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MAEXIDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXC_ID_MONITOR2:16;
      uint64_t EXC_ID_MONITOR3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MAEXIDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBG_EN:1;
      uint64_t DBG_RST:1;
      uint64_t PRF_FRZ:1;
      uint64_t CYC_OVF:1;
      uint64_t reservedSpace0:4;
      uint64_t SBS_EN:1;
      uint64_t SBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MADPCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRF_AXI_ID:16;
      uint64_t PRF_AXI_ID_MASK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MADPCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CYC_COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MADPSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY_COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MADPSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD_ACC_COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MADPSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WR_ACC_COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MADPSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD_BYTES_COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MADPSR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WR_BYTES_COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MADPSR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBS_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MASBS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBS_VLD:1;
      uint64_t SBS_TYPE:1;
      uint64_t SBS_LOCK:2;
      uint64_t SBS_PROT:3;
      uint64_t SBS_SIZE:3;
      uint64_t SBS_BURST:2;
      uint64_t SBS_BUFF:1;
      uint64_t SBS_LEN:3;
      uint64_t SBS_AXI_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MASBS1;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GP31_GP0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MAGENP;

  uint8_t res4[956];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ZQ_MODE:2;
      uint64_t ZQ_HW_PER:4;
      uint64_t ZQ_HW_PU_RES:5;
      uint64_t ZQ_HW_PD_RES:5;
      uint64_t ZQ_HW_FOR:1;
      uint64_t TZQ_INIT:3;
      uint64_t TZQ_OPER:3;
      uint64_t TZQ_CS:3;
      uint64_t ZQ_PARA_EN:1;
      uint64_t ZQ_EARLY_COMPARATOR_EN_TIMER:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPZQHWCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ZQ_SW_FOR:1;
      uint64_t ZQ_SW_RES:1;
      uint64_t ZQ_SW_PU_VAL:5;
      uint64_t ZQ_SW_PD_VAL:5;
      uint64_t ZQ_SW_PD:1;
      uint64_t USE_ZQ_SW_VAL:1;
      uint64_t reservedSpace0:2;
      uint64_t ZQ_CMP_OUT_SMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPZQSWCTRL;

  uint8_t res5[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t rd_dq0_del:3;
      uint64_t reservedSpace0:1;
      uint64_t rd_dq1_del:3;
      uint64_t reservedSpace1:1;
      uint64_t rd_dq2_del:3;
      uint64_t reservedSpace2:1;
      uint64_t rd_dq3_del:3;
      uint64_t reservedSpace3:1;
      uint64_t rd_dq4_del:3;
      uint64_t reservedSpace4:1;
      uint64_t rd_dq5_del:3;
      uint64_t reservedSpace5:1;
      uint64_t rd_dq6_del:3;
      uint64_t reservedSpace6:1;
      uint64_t rd_dq7_del:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPRDDQBY0DL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t rd_dq8_del:3;
      uint64_t reservedSpace0:1;
      uint64_t rd_dq9_del:3;
      uint64_t reservedSpace1:1;
      uint64_t rd_dq10_del:3;
      uint64_t reservedSpace2:1;
      uint64_t rd_dq11_del:3;
      uint64_t reservedSpace3:1;
      uint64_t rd_dq12_del:3;
      uint64_t reservedSpace4:1;
      uint64_t rd_dq13_del:3;
      uint64_t reservedSpace5:1;
      uint64_t rd_dq14_del:3;
      uint64_t reservedSpace6:1;
      uint64_t rd_dq15_del:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPRDDQBY1DL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t rd_dq16_del:3;
      uint64_t reservedSpace0:1;
      uint64_t rd_dq17_del:3;
      uint64_t reservedSpace1:1;
      uint64_t rd_dq18_del:3;
      uint64_t reservedSpace2:1;
      uint64_t rd_dq19_del:3;
      uint64_t reservedSpace3:1;
      uint64_t rd_dq20_del:3;
      uint64_t reservedSpace4:1;
      uint64_t rd_dq21_del:3;
      uint64_t reservedSpace5:1;
      uint64_t rd_dq22_del:3;
      uint64_t reservedSpace6:1;
      uint64_t rd_dq23_del:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPRDDQBY2DL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t rd_dq24_del:3;
      uint64_t reservedSpace0:1;
      uint64_t rd_dq25_del:3;
      uint64_t reservedSpace1:1;
      uint64_t rd_dq26_del:3;
      uint64_t reservedSpace2:1;
      uint64_t rd_dq27_del:3;
      uint64_t reservedSpace3:1;
      uint64_t rd_dq28_del:3;
      uint64_t reservedSpace4:1;
      uint64_t rd_dq29_del:3;
      uint64_t reservedSpace5:1;
      uint64_t rd_dq30_del:3;
      uint64_t reservedSpace6:1;
      uint64_t rd_dq31_del:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPRDDQBY3DL;

  uint8_t res6[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD_DL_ABS_OFFSET0:7;
      uint64_t reservedSpace0:1;
      uint64_t RD_DL_ABS_OFFSET1:7;
      uint64_t reservedSpace1:1;
      uint64_t RD_DL_ABS_OFFSET2:7;
      uint64_t reservedSpace2:1;
      uint64_t RD_DL_ABS_OFFSET3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPRDDLCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD_DL_UNIT_NUM0:7;
      uint64_t reservedSpace0:1;
      uint64_t RD_DL_UNIT_NUM1:7;
      uint64_t reservedSpace1:1;
      uint64_t RD_DL_UNIT_NUM2:7;
      uint64_t reservedSpace2:1;
      uint64_t RD_DL_UNIT_NUM3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPRDDLST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WR_DL_ABS_OFFSET0:7;
      uint64_t reservedSpace0:1;
      uint64_t WR_DL_ABS_OFFSET1:7;
      uint64_t reservedSpace1:1;
      uint64_t WR_DL_ABS_OFFSET2:7;
      uint64_t reservedSpace2:1;
      uint64_t WR_DL_ABS_OFFSET3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPWRDLCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WR_DL_UNIT_NUM0:7;
      uint64_t reservedSpace0:1;
      uint64_t WR_DL_UNIT_NUM1:7;
      uint64_t reservedSpace1:1;
      uint64_t WR_DL_UNIT_NUM2:7;
      uint64_t reservedSpace2:1;
      uint64_t WR_DL_UNIT_NUM3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPWRDLST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SDclk0_del:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPSDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ZQ_LP2_HW_ZQINIT:9;
      uint64_t reservedSpace0:7;
      uint64_t ZQ_LP2_HW_ZQCL:8;
      uint64_t ZQ_LP2_HW_ZQCS:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPZQLP2CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW_RD_DL_ERR0:1;
      uint64_t HW_RD_DL_ERR1:1;
      uint64_t HW_RD_DL_ERR2:1;
      uint64_t HW_RD_DL_ERR3:1;
      uint64_t HW_RD_DL_EN:1;
      uint64_t HW_RD_DL_CMP_CYC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPRDDLHWCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW_WR_DL_ERR0:1;
      uint64_t HW_WR_DL_ERR1:1;
      uint64_t HW_WR_DL_ERR2:1;
      uint64_t HW_WR_DL_ERR3:1;
      uint64_t HW_WR_DL_EN:1;
      uint64_t HW_WR_DL_CMP_CYC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPWRDLHWCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW_RD_DL_LOW0:7;
      uint64_t reservedSpace0:1;
      uint64_t HW_RD_DL_UP0:7;
      uint64_t reservedSpace1:1;
      uint64_t HW_RD_DL_LOW1:7;
      uint64_t reservedSpace2:1;
      uint64_t HW_RD_DL_UP1:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPRDDLHWST0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW_RD_DL_LOW2:7;
      uint64_t reservedSpace0:1;
      uint64_t HW_RD_DL_UP2:7;
      uint64_t reservedSpace1:1;
      uint64_t HW_RD_DL_LOW3:7;
      uint64_t reservedSpace2:1;
      uint64_t HW_RD_DL_UP3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPRDDLHWST1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW_WR_DL_LOW0:7;
      uint64_t reservedSpace0:1;
      uint64_t HW_WR_DL_UP0:7;
      uint64_t reservedSpace1:1;
      uint64_t HW_WR_DL_LOW1:7;
      uint64_t reservedSpace2:1;
      uint64_t HW_WR_DL_UP1:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPWRDLHWST0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW_WR_DL_LOW2:7;
      uint64_t reservedSpace0:1;
      uint64_t HW_WR_DL_UP2:7;
      uint64_t reservedSpace1:1;
      uint64_t HW_WR_DL_LOW3:7;
      uint64_t reservedSpace2:1;
      uint64_t HW_WR_DL_UP3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPWRDLHWST1;

  uint8_t res7[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDV1:16;
      uint64_t PDV2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPPDCMPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPR_CMP:1;
      uint64_t MPR_FULL_CMP:1;
      uint64_t READ_LEVEL_PATTERN:1;
      uint64_t ZQ_OFFSET_EN:1;
      uint64_t ZQ_PD_OFFSET:4;
      uint64_t ZQ_PU_OFFSET:4;
      uint64_t reservedSpace0:4;
      uint64_t CA_DL_ABS_OFFSET:7;
      uint64_t reservedSpace1:1;
      uint64_t PHY_CA_DL_UNIT:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPPDCMPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SW_DUMMY_WR:1;
      uint64_t SW_DUMMY_RD:1;
      uint64_t SW_DUM_CMP0:1;
      uint64_t SW_DUM_CMP1:1;
      uint64_t SW_DUM_CMP2:1;
      uint64_t SW_DUM_CMP3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPSWDAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DUM_RD0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPSWDRDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DUM_RD1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPSWDRDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DUM_RD2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPSWDRDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DUM_RD3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPSWDRDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DUM_RD4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPSWDRDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DUM_RD5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPSWDRDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DUM_RD6:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPSWDRDR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DUM_RD7:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPSWDRDR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MU_BYP_VAL:10;
      uint64_t MU_BYP_EN:1;
      uint64_t FRC_MSR:1;
      uint64_t reservedSpace0:4;
      uint64_t MU_UNIT_DEL_NUM:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPMUR0;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WR_DQS0_FT_DCC:3;
      uint64_t WR_DQS1_FT_DCC:3;
      uint64_t WR_DQS2_FT_DCC:3;
      uint64_t WR_DQS3_FT_DCC:3;
      uint64_t CK_FT0_DCC:3;
      uint64_t reservedSpace0:1;
      uint64_t CK_FT1_DCC:3;
      uint64_t RD_DQS0_FT_DCC:3;
      uint64_t RD_DQS1_FT_DCC:3;
      uint64_t RD_DQS2_FT_DCC:3;
      uint64_t RD_DQS3_FT_DCC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMDC0_MPDCCR;

};

#define MMDC0 (*(volatile struct MMDC0_tag *) 0x40ab0000)

struct IOMUXC1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTC7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTC8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTC9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTC10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTC11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTC12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTC13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTC14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTC15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTC16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTC17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTC18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTC19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTD6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTD7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTD8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTD9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTD10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTD11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTE3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTE4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTE5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTE6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTE7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTE8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTE9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTE10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTE11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTE12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTE13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTE14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTE15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESERVED47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTF0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTF2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTF3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTF4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTF5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTF6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTF7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTF8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTF9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTF10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTF11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTF12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTF13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTF14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTF15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTF16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTF17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTF18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_PTF19;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_USDHC1_IPP_WP_ON_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_D_IP_FLEXIO_SYN1_IPP_IND_FLEXIO0_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_D_IP_FLEXIO_SYN1_IPP_IND_FLEXIO1_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_D_IP_FLEXIO_SYN1_IPP_IND_FLEXIO2_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_D_IP_FLEXIO_SYN1_IPP_IND_FLEXIO3_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_D_IP_FLEXIO_SYN1_IPP_IND_FLEXIO4_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_D_IP_FLEXIO_SYN1_IPP_IND_FLEXIO5_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_D_IP_FLEXIO_SYN1_IPP_IND_FLEXIO6_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_D_IP_FLEXIO_SYN1_IPP_IND_FLEXIO7_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_D_IP_FLEXIO_SYN1_IPP_IND_FLEXIO8_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_D_IP_FLEXIO_SYN1_IPP_IND_FLEXIO9_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_D_IP_FLEXIO_SYN1_IPP_IND_FLEXIO10_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_D_IP_FLEXIO_SYN1_IPP_IND_FLEXIO11_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_D_IP_FLEXIO_SYN1_IPP_IND_FLEXIO12_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_D_IP_FLEXIO_SYN1_IPP_IND_FLEXIO13_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_D_IP_FLEXIO_SYN1_IPP_IND_FLEXIO14_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_D_IP_FLEXIO_SYN1_IPP_IND_FLEXIO15_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPUART4_IPP_IND_LPUART_CTS_B_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPUART4_IPP_IND_LPUART_RXD_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPUART4_IPP_IND_LPUART_TXD_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPUART5_IPP_IND_LPUART_CTS_B_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPUART5_IPP_IND_LPUART_RXD_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPUART5_IPP_IND_LPUART_TXD_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPUART6_IPP_IND_LPUART_CTS_B_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPUART6_IPP_IND_LPUART_RXD_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPUART6_IPP_IND_LPUART_TXD_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPUART7_IPP_IND_LPUART_CTS_B_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPUART7_IPP_IND_LPUART_RXD_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPUART7_IPP_IND_LPUART_TXD_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPI2C4_IPP_IND_LPI2C_HREQ_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPI2C4_IPP_IND_LPI2C_SCL_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPI2C4_IPP_IND_LPI2C_SDA_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPTPM4_IPP_IND_LPTPM_CH0_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPTPM4_IPP_IND_LPTPM_CH1_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPTPM4_IPP_IND_LPTPM_CH2_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPTPM4_IPP_IND_LPTPM_CH3_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPTPM4_IPP_IND_LPTPM_CH4_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPTPM4_IPP_IND_LPTPM_CH5_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPTPM4_IPP_IND_LPTPM_CLK_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPSPI2_IPP_IND_LPSPI_PCS0_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPSPI2_IPP_IND_LPSPI_PCS1_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPSPI2_IPP_IND_LPSPI_PCS2_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPSPI2_IPP_IND_LPSPI_PCS3_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPSPI2_IPP_IND_LPSPI_SCK_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPSPI2_IPP_IND_LPSPI_SDI_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPSPI2_IPP_IND_LPSPI_SDO_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPI2C5_IPP_IND_LPI2C_HREQ_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPI2C5_IPP_IND_LPI2C_SCL_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPI2C5_IPP_IND_LPI2C_SDA_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPTPM5_IPP_IND_LPTPM_CH0_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPTPM5_IPP_IND_LPTPM_CH1_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPTPM5_IPP_IND_LPTPM_CLK_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPTPM6_IPP_IND_LPTPM_CH0_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPTPM6_IPP_IND_LPTPM_CH1_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPTPM6_IPP_IND_LPTPM_CLK_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPTPM7_IPP_IND_LPTPM_CH0_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPTPM7_IPP_IND_LPTPM_CH1_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPTPM7_IPP_IND_LPTPM_CH2_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPTPM7_IPP_IND_LPTPM_CH3_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPTPM7_IPP_IND_LPTPM_CH4_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPTPM7_IPP_IND_LPTPM_CH5_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPTPM7_IPP_IND_LPTPM_CLK_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPI2C6_IPP_IND_LPI2C_HREQ_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPI2C6_IPP_IND_LPI2C_SCL_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPI2C6_IPP_IND_LPI2C_SDA_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPI2C7_IPP_IND_LPI2C_HREQ_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPI2C7_IPP_IND_LPI2C_SCL_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPI2C7_IPP_IND_LPI2C_SDA_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPSPI3_IPP_IND_LPSPI_PCS0_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPSPI3_IPP_IND_LPSPI_PCS1_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPSPI3_IPP_IND_LPSPI_PCS2_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPSPI3_IPP_IND_LPSPI_PCS3_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPSPI3_IPP_IND_LPSPI_SCK_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPSPI3_IPP_IND_LPSPI_SDI_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_LPSPI3_IPP_IND_LPSPI_SDO_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_USDHC1_IPP_CARD_DET_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_USBO2_ULP1_IPP_IND_OTG_OC_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_USBO2_ULP1_IPP_IND_OTG2_OC_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DA_IP_HS_USB2PHY_28FDSOI_USB_ID_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_VIDEO_IN_IPP_IND_DE_SELECT_INPUT;

  uint8_t res1[92];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:8;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_SW_MUX_CTL_PAD_RESET1_b;

};

#define IOMUXC1 (*(volatile struct IOMUXC1_tag *) 0x40ac0000)

struct IOMUXC1_DDR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQ31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PUE:1;
      uint64_t PKE:1;
      uint64_t PUS:2;
      uint64_t DSE:3;
      uint64_t reservedSpace1:1;
      uint64_t CRPOINT_TRIM:2;
      uint64_t DCYCLE_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PUE:1;
      uint64_t PKE:1;
      uint64_t PUS:2;
      uint64_t DSE:3;
      uint64_t reservedSpace1:1;
      uint64_t CRPOINT_TRIM:2;
      uint64_t DCYCLE_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PUE:1;
      uint64_t PKE:1;
      uint64_t PUS:2;
      uint64_t DSE:3;
      uint64_t reservedSpace1:1;
      uint64_t CRPOINT_TRIM:2;
      uint64_t DCYCLE_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQS2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PUE:1;
      uint64_t PKE:1;
      uint64_t PUS:2;
      uint64_t DSE:3;
      uint64_t reservedSpace1:1;
      uint64_t CRPOINT_TRIM:2;
      uint64_t DCYCLE_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQS3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t DSE:3;
      uint64_t HYS:1;
      uint64_t reservedSpace1:2;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
      uint64_t DDR_INPUT:1;
      uint64_t reservedSpace2:2;
      uint64_t DDR_ODT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t DSE:3;
      uint64_t HYS:1;
      uint64_t reservedSpace1:2;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
      uint64_t DDR_INPUT:1;
      uint64_t reservedSpace2:2;
      uint64_t DDR_ODT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t DSE:3;
      uint64_t HYS:1;
      uint64_t reservedSpace1:2;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
      uint64_t DDR_INPUT:1;
      uint64_t reservedSpace2:2;
      uint64_t DDR_ODT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t DSE:3;
      uint64_t HYS:1;
      uint64_t reservedSpace1:2;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
      uint64_t DDR_INPUT:1;
      uint64_t reservedSpace2:2;
      uint64_t DDR_ODT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_DQM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t HYS:1;
      uint64_t reservedSpace1:2;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
      uint64_t DDR_INPUT:1;
      uint64_t reservedSpace2:2;
      uint64_t DDR_ODT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_CA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t HYS:1;
      uint64_t reservedSpace1:2;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
      uint64_t DDR_INPUT:1;
      uint64_t reservedSpace2:2;
      uint64_t DDR_ODT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_CA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t HYS:1;
      uint64_t reservedSpace1:2;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
      uint64_t DDR_INPUT:1;
      uint64_t reservedSpace2:2;
      uint64_t DDR_ODT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_CA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t HYS:1;
      uint64_t reservedSpace1:2;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
      uint64_t DDR_INPUT:1;
      uint64_t reservedSpace2:2;
      uint64_t DDR_ODT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_CA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t HYS:1;
      uint64_t reservedSpace1:2;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
      uint64_t DDR_INPUT:1;
      uint64_t reservedSpace2:2;
      uint64_t DDR_ODT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_CA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t HYS:1;
      uint64_t reservedSpace1:2;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
      uint64_t DDR_INPUT:1;
      uint64_t reservedSpace2:2;
      uint64_t DDR_ODT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_CA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t HYS:1;
      uint64_t reservedSpace1:2;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
      uint64_t DDR_INPUT:1;
      uint64_t reservedSpace2:2;
      uint64_t DDR_ODT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_CA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t HYS:1;
      uint64_t reservedSpace1:2;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
      uint64_t DDR_INPUT:1;
      uint64_t reservedSpace2:2;
      uint64_t DDR_ODT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_CA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t HYS:1;
      uint64_t reservedSpace1:2;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
      uint64_t DDR_INPUT:1;
      uint64_t reservedSpace2:2;
      uint64_t DDR_ODT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_CA8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t HYS:1;
      uint64_t reservedSpace1:2;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
      uint64_t DDR_INPUT:1;
      uint64_t reservedSpace2:2;
      uint64_t DDR_ODT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_CA9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t HYS:1;
      uint64_t reservedSpace1:2;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
      uint64_t DDR_INPUT:1;
      uint64_t reservedSpace2:2;
      uint64_t DDR_ODT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_CS0_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t HYS:1;
      uint64_t reservedSpace1:2;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
      uint64_t DDR_INPUT:1;
      uint64_t reservedSpace2:2;
      uint64_t DDR_ODT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_CS1_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PUE:1;
      uint64_t PKE:1;
      uint64_t PUS:2;
      uint64_t reservedSpace1:3;
      uint64_t HYS:1;
      uint64_t reservedSpace2:2;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
      uint64_t DDR_INPUT:1;
      uint64_t reservedSpace3:2;
      uint64_t DDR_ODT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_CKE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PUE:1;
      uint64_t PKE:1;
      uint64_t PUS:2;
      uint64_t reservedSpace1:3;
      uint64_t HYS:1;
      uint64_t reservedSpace2:2;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
      uint64_t DDR_INPUT:1;
      uint64_t reservedSpace3:2;
      uint64_t DDR_ODT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_CKE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PUE:1;
      uint64_t PKE:1;
      uint64_t PUS:2;
      uint64_t DSE:3;
      uint64_t HYS:1;
      uint64_t CRPOINT_TRIM:2;
      uint64_t DCYCLE_TRIM:2;
      uint64_t reservedSpace1:2;
      uint64_t DDR_INPUT:1;
      uint64_t reservedSpace2:2;
      uint64_t DDR_ODT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_CLK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PUE:1;
      uint64_t PKE:1;
      uint64_t PUS:2;
      uint64_t DSE:3;
      uint64_t HYS:1;
      uint64_t reservedSpace1:2;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
      uint64_t DDR_INPUT:1;
      uint64_t reservedSpace2:2;
      uint64_t DDR_ODT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_ODT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:17;
      uint64_t DDR_SELECT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_ZQ0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:17;
      uint64_t DDR_SELECT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_DDR_ZQ1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PUE:1;
      uint64_t reservedSpace1:1;
      uint64_t PUS:2;
      uint64_t DSE:3;
      uint64_t HYS:1;
      uint64_t reservedSpace2:2;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
      uint64_t reservedSpace3:1;
      uint64_t DDR_SELECT:2;
      uint64_t DDR_ODT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_HSIC_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PUE:1;
      uint64_t reservedSpace1:1;
      uint64_t PUS:2;
      uint64_t DSE:3;
      uint64_t HYS:1;
      uint64_t reservedSpace2:2;
      uint64_t DCYCLE_TRIM:2;
      uint64_t DDR_TRIM:2;
      uint64_t reservedSpace3:1;
      uint64_t DDR_SELECT:2;
      uint64_t DDR_ODT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_PAD_HSIC_STROBE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_GRP_PUE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_GRP_PUE_DAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PKE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_GRP_PKE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PKE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_GRP_PKE_DAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t PUS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_GRP_PUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t DSE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_GRP_DS_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t DSE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_GRP_DS_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t DSE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_GRP_DS_DAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t DSE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_GRP_DS_DAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t DSE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_GRP_DS_DAT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t DSE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_GRP_DS_DAT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t HYS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_GRP_HYS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DDR_INPUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_GRP_INSEL_DAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DDR_INPUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_GRP_INSEL_DQS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:17;
      uint64_t DDR_SELECT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC1_DDR_SW_PAD_CTL_GRP_DDRTYPE;

};

#define IOMUXC1_DDR (*(volatile struct IOMUXC1_DDR_tag *) 0x40ad0000)

struct PORTD_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR11;

  uint8_t res0[80];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GICHR;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISFR;

};

#define PORTD (*(volatile struct PORTD_tag *) 0x40af0000)

struct PORTE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR15;

  uint8_t res0[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GICHR;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISFR;

};

#define PORTE (*(volatile struct PORTE_tag *) 0x40b00000)

struct PCC3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_TPM6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_TPM7;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPI2C6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPI2C7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPUART6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPUART7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_VIU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCD:3;
      uint64_t FRAC:1;
      uint64_t reservedSpace0:20;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_DSI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCD:3;
      uint64_t FRAC:1;
      uint64_t reservedSpace0:20;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LCDIF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_MMDC;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_PCTLC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_PCTLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_PCTLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_PCTLF;

  uint8_t res2[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_GPU3D;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_GPU2D;

};

#define PCC3 (*(volatile struct PCC3_tag *) 0x40b30084)

struct GPIOA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTSO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTCO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDDR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_3;

};

#define GPIOA (*(volatile struct GPIOA_tag *) 0x4100f000)

struct GPIOC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTSO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTCO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDDR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_3;

};

#define GPIOC (*(volatile struct GPIOC_tag *) 0x400f0000)

struct GPIOD_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTSO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTCO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDDR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_3;

};

#define GPIOD (*(volatile struct GPIOD_tag *) 0x400f0040)

struct GPIOE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTSO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTCO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDDR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_3;

};

#define GPIOE (*(volatile struct GPIOE_tag *) 0x400f0080)

struct GPIOF_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTSO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTCO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDDR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_3;

};

#define GPIOF (*(volatile struct GPIOF_tag *) 0x400f00c0)

struct GPIOB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTSO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTCO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDDR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_3;

};

#define GPIOB (*(volatile struct GPIOB_tag *) 0x4100f040)

struct XRDC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GVLD:1;
      uint64_t HRL:4;
      uint64_t reservedSpace0:2;
      uint64_t MRF:1;
      uint64_t VAW:1;
      uint64_t reservedSpace1:21;
      uint64_t LK1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  uint8_t res0[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDID:8;
      uint64_t NMSTR:8;
      uint64_t NMRC:8;
      uint64_t NPAC:4;
      uint64_t MID:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIDP0:1;
      uint64_t PIDP1:1;
      uint64_t PIDP2:1;
      uint64_t PIDP3:1;
      uint64_t PIDP4:1;
      uint64_t PIDP5:1;
      uint64_t PIDP6:1;
      uint64_t PIDP7:1;
      uint64_t PIDP8:1;
      uint64_t PIDP9:1;
      uint64_t PIDP10:1;
      uint64_t PIDP11:1;
      uint64_t PIDP12:1;
      uint64_t PIDP13:1;
      uint64_t PIDP14:1;
      uint64_t PIDP15:1;
      uint64_t PIDP16:1;
      uint64_t PIDP17:1;
      uint64_t PIDP18:1;
      uint64_t PIDP19:1;
      uint64_t PIDP20:1;
      uint64_t PIDP21:1;
      uint64_t PIDP22:1;
      uint64_t PIDP23:1;
      uint64_t PIDP24:1;
      uint64_t PIDP25:1;
      uint64_t PIDP26:1;
      uint64_t PIDP27:1;
      uint64_t PIDP28:1;
      uint64_t PIDP29:1;
      uint64_t PIDP30:1;
      uint64_t PIDP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWCFG2;

  uint8_t res1[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG13;

  uint8_t res2[50];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMRGD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MRCFG0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMRGD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MRCFG1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMRGD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MRCFG2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMRGD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MRCFG3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMRGD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MRCFG4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMRGD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MRCFG5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMRGD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MRCFG6;

  uint8_t res3[185];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MRCINST:16;
      uint64_t PACINST:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERRLOC_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MRCINST:16;
      uint64_t PACINST:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERRLOC_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MRCINST:16;
      uint64_t PACINST:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERRLOC_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MRCINST:16;
      uint64_t PACINST:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERRLOC_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MRCINST:16;
      uint64_t PACINST:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERRLOC_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MRCINST:16;
      uint64_t PACINST:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERRLOC_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MRCINST:16;
      uint64_t PACINST:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERRLOC_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MRCINST:16;
      uint64_t PACINST:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERRLOC_7;

  uint8_t res4[480];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W0_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDID:4;
      uint64_t reservedSpace0:4;
      uint64_t EATR:3;
      uint64_t ERW:1;
      uint64_t reservedSpace1:12;
      uint64_t EPORT:3;
      uint64_t reservedSpace2:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_0;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W0_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDID:4;
      uint64_t reservedSpace0:4;
      uint64_t EATR:3;
      uint64_t ERW:1;
      uint64_t reservedSpace1:12;
      uint64_t EPORT:3;
      uint64_t reservedSpace2:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_1;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W0_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDID:4;
      uint64_t reservedSpace0:4;
      uint64_t EATR:3;
      uint64_t ERW:1;
      uint64_t reservedSpace1:12;
      uint64_t EPORT:3;
      uint64_t reservedSpace2:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_2;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W0_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDID:4;
      uint64_t reservedSpace0:4;
      uint64_t EATR:3;
      uint64_t ERW:1;
      uint64_t reservedSpace1:12;
      uint64_t EPORT:3;
      uint64_t reservedSpace2:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_3;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W0_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDID:4;
      uint64_t reservedSpace0:4;
      uint64_t EATR:3;
      uint64_t ERW:1;
      uint64_t reservedSpace1:12;
      uint64_t EPORT:3;
      uint64_t reservedSpace2:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_4;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W0_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDID:4;
      uint64_t reservedSpace0:4;
      uint64_t EATR:3;
      uint64_t ERW:1;
      uint64_t reservedSpace1:12;
      uint64_t EPORT:3;
      uint64_t reservedSpace2:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_5;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W0_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDID:4;
      uint64_t reservedSpace0:4;
      uint64_t EATR:3;
      uint64_t ERW:1;
      uint64_t reservedSpace1:12;
      uint64_t EPORT:3;
      uint64_t reservedSpace2:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_6;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_6;

  uint8_t res12[144];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W0_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDID:4;
      uint64_t reservedSpace0:4;
      uint64_t EATR:3;
      uint64_t ERW:1;
      uint64_t reservedSpace1:12;
      uint64_t EPORT:3;
      uint64_t reservedSpace2:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_16;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W0_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDID:4;
      uint64_t reservedSpace0:4;
      uint64_t EATR:3;
      uint64_t ERW:1;
      uint64_t reservedSpace1:12;
      uint64_t EPORT:3;
      uint64_t reservedSpace2:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_17;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W0_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDID:4;
      uint64_t reservedSpace0:4;
      uint64_t EATR:3;
      uint64_t ERW:1;
      uint64_t reservedSpace1:12;
      uint64_t EPORT:3;
      uint64_t reservedSpace2:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_18;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W0_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDID:4;
      uint64_t reservedSpace0:4;
      uint64_t EATR:3;
      uint64_t ERW:1;
      uint64_t reservedSpace1:12;
      uint64_t EPORT:3;
      uint64_t reservedSpace2:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_19;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_19;

  uint8_t res17[448];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:10;
      uint64_t LMNUM:6;
      uint64_t reservedSpace1:2;
      uint64_t ELK22H:1;
      uint64_t reservedSpace2:3;
      uint64_t TSM:1;
      uint64_t LK2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:10;
      uint64_t LMNUM:6;
      uint64_t reservedSpace1:2;
      uint64_t ELK22H:1;
      uint64_t reservedSpace2:3;
      uint64_t TSM:1;
      uint64_t LK2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID1;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:10;
      uint64_t LMNUM:6;
      uint64_t reservedSpace1:2;
      uint64_t ELK22H:1;
      uint64_t reservedSpace2:3;
      uint64_t TSM:1;
      uint64_t LK2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID3;

  uint8_t res19[240];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID:3;
      uint64_t reservedSpace0:1;
      uint64_t DIDS:2;
      uint64_t PE:2;
      uint64_t PIDM:6;
      uint64_t reservedSpace1:2;
      uint64_t PID:6;
      uint64_t reservedSpace2:2;
      uint64_t LPID:4;
      uint64_t reservedSpace3:1;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_0_DFMT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID:3;
      uint64_t reservedSpace0:1;
      uint64_t DIDS:2;
      uint64_t PE:2;
      uint64_t PIDM:6;
      uint64_t reservedSpace1:2;
      uint64_t PID:6;
      uint64_t reservedSpace2:2;
      uint64_t LPID:4;
      uint64_t reservedSpace3:1;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W1_0_DFMT0;

  uint8_t res20[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID:3;
      uint64_t reservedSpace0:1;
      uint64_t DIDS:2;
      uint64_t PE:2;
      uint64_t PIDM:6;
      uint64_t reservedSpace1:2;
      uint64_t PID:6;
      uint64_t reservedSpace2:2;
      uint64_t LPID:4;
      uint64_t reservedSpace3:1;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_1_DFMT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID:3;
      uint64_t reservedSpace0:1;
      uint64_t DIDS:2;
      uint64_t PE:2;
      uint64_t PIDM:6;
      uint64_t reservedSpace1:2;
      uint64_t PID:6;
      uint64_t reservedSpace2:2;
      uint64_t LPID:4;
      uint64_t reservedSpace3:1;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W1_1_DFMT0;

  uint8_t res21[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID:3;
      uint64_t reservedSpace0:1;
      uint64_t PA:2;
      uint64_t SA:2;
      uint64_t DIDB:1;
      uint64_t reservedSpace1:15;
      uint64_t LPID:4;
      uint64_t reservedSpace2:1;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_2_DFMT1;

  uint8_t res22[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID:3;
      uint64_t reservedSpace0:1;
      uint64_t DIDS:2;
      uint64_t PE:2;
      uint64_t PIDM:6;
      uint64_t reservedSpace1:2;
      uint64_t PID:6;
      uint64_t reservedSpace2:2;
      uint64_t LPID:4;
      uint64_t reservedSpace3:1;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_3_DFMT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID:3;
      uint64_t reservedSpace0:1;
      uint64_t DIDS:2;
      uint64_t PE:2;
      uint64_t PIDM:6;
      uint64_t reservedSpace1:2;
      uint64_t PID:6;
      uint64_t reservedSpace2:2;
      uint64_t LPID:4;
      uint64_t reservedSpace3:1;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W1_3_DFMT0;

  uint8_t res23[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID:3;
      uint64_t reservedSpace0:1;
      uint64_t PA:2;
      uint64_t SA:2;
      uint64_t DIDB:1;
      uint64_t reservedSpace1:15;
      uint64_t LPID:4;
      uint64_t reservedSpace2:1;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_4_DFMT1;

  uint8_t res24[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID:3;
      uint64_t reservedSpace0:1;
      uint64_t PA:2;
      uint64_t SA:2;
      uint64_t DIDB:1;
      uint64_t reservedSpace1:15;
      uint64_t LPID:4;
      uint64_t reservedSpace2:1;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_5_DFMT1;

  uint8_t res25[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID:3;
      uint64_t reservedSpace0:1;
      uint64_t PA:2;
      uint64_t SA:2;
      uint64_t DIDB:1;
      uint64_t reservedSpace1:15;
      uint64_t LPID:4;
      uint64_t reservedSpace2:1;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_6_DFMT1;

  uint8_t res26[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID:3;
      uint64_t reservedSpace0:1;
      uint64_t PA:2;
      uint64_t SA:2;
      uint64_t DIDB:1;
      uint64_t reservedSpace1:15;
      uint64_t LPID:4;
      uint64_t reservedSpace2:1;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_7_DFMT1;

  uint8_t res27[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID:3;
      uint64_t reservedSpace0:1;
      uint64_t PA:2;
      uint64_t SA:2;
      uint64_t DIDB:1;
      uint64_t reservedSpace1:15;
      uint64_t LPID:4;
      uint64_t reservedSpace2:1;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_8_DFMT1;

  uint8_t res28[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID:3;
      uint64_t reservedSpace0:1;
      uint64_t PA:2;
      uint64_t SA:2;
      uint64_t DIDB:1;
      uint64_t reservedSpace1:15;
      uint64_t LPID:4;
      uint64_t reservedSpace2:1;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_9_DFMT1;

  uint8_t res29[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID:3;
      uint64_t reservedSpace0:1;
      uint64_t PA:2;
      uint64_t SA:2;
      uint64_t DIDB:1;
      uint64_t reservedSpace1:15;
      uint64_t LPID:4;
      uint64_t reservedSpace2:1;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_10_DFMT1;

  uint8_t res30[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID:3;
      uint64_t reservedSpace0:1;
      uint64_t PA:2;
      uint64_t SA:2;
      uint64_t DIDB:1;
      uint64_t reservedSpace1:15;
      uint64_t LPID:4;
      uint64_t reservedSpace2:1;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_11_DFMT1;

  uint8_t res31[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID:3;
      uint64_t reservedSpace0:1;
      uint64_t PA:2;
      uint64_t SA:2;
      uint64_t DIDB:1;
      uint64_t reservedSpace1:15;
      uint64_t LPID:4;
      uint64_t reservedSpace2:1;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_12_DFMT1;

  uint8_t res32[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID:3;
      uint64_t reservedSpace0:1;
      uint64_t PA:2;
      uint64_t SA:2;
      uint64_t DIDB:1;
      uint64_t reservedSpace1:15;
      uint64_t LPID:4;
      uint64_t reservedSpace2:1;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_13_DFMT1;

  uint8_t res33[1692];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_9;

  uint8_t res34[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_15;

  uint8_t res35[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_23;

  uint8_t res36[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_27;

  uint8_t res37[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_34;

  uint8_t res38[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_39;

  uint8_t res39[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_42;

  uint8_t res40[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_59;

  uint8_t res41[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_61;

  uint8_t res42[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_69;

  uint8_t res43[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_75;

  uint8_t res44[544];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_152;

  uint8_t res45[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_158;

  uint8_t res46[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_161;

  uint8_t res47[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_173;

  uint8_t res48[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_178;

  uint8_t res49[680];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_264;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_264;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_265;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_265;

  uint8_t res50[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_271;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_271;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_272;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_272;

  uint8_t res51[80];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_283;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_283;

  uint8_t res52[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_289;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_289;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_290;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_290;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_291;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_291;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_292;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_292;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_293;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_293;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_294;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_294;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_295;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_295;

  uint8_t res53[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_297;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_297;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_298;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_298;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_299;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_299;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_300;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_300;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_301;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_301;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_302;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_302;

  uint8_t res54[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_305;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_305;

  uint8_t res55[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_307;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_307;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_308;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_308;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_309;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_309;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_310;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_310;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_311;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_311;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_312;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_312;

  uint8_t res56[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_314;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_314;

  uint8_t res57[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_317;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_317;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_318;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_318;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_319;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_319;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_320;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_320;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_321;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_321;

  uint8_t res58[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_323;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_323;

  uint8_t res59[608];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_400;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_400;

  uint8_t res60[128];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_417;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_417;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_418;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_418;

  uint8_t res61[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_420;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_420;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_421;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_421;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_422;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_422;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_423;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_423;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_424;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_424;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_425;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_425;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_426;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_426;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_427;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_427;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_428;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_428;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_429;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_429;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_430;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_430;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_431;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_431;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_432;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_432;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_433;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_433;

  uint8_t res62[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_435;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_435;

  uint8_t res63[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_437;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_437;

  uint8_t res64[592];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_0;

  uint8_t res65[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_1;

  uint8_t res66[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_2;

  uint8_t res67[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_3;

  uint8_t res68[400];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_16;

  uint8_t res69[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_17;

  uint8_t res70[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_18;

  uint8_t res71[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_19;

  uint8_t res72[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_20;

  uint8_t res73[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_21;

  uint8_t res74[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_22;

  uint8_t res75[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_23;

  uint8_t res76[272];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_32;

  uint8_t res77[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_33;

  uint8_t res78[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_34;

  uint8_t res79[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_35;

  uint8_t res80[400];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_48;

  uint8_t res81[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_49;

  uint8_t res82[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_50;

  uint8_t res83[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_51;

  uint8_t res84[400];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_64;

  uint8_t res85[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_65;

  uint8_t res86[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_66;

  uint8_t res87[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_67;

  uint8_t res88[400];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_80;

  uint8_t res89[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_81;

  uint8_t res90[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_82;

  uint8_t res91[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_83;

  uint8_t res92[400];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_96;

  uint8_t res93[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_97;

  uint8_t res94[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_98;

  uint8_t res95[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_99;

  uint8_t res96[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_100;

  uint8_t res97[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_101;

  uint8_t res98[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_102;

  uint8_t res99[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BASEADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRD:8;
      uint64_t SZ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t SNUM:4;
      uint64_t reservedSpace0:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_103;

};

#define XRDC (*(volatile struct XRDC_tag *) 0x41014000)

struct DMA_CH_MUX0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_31;

};

#define DMA_CH_MUX0 (*(volatile struct DMA_CH_MUX0_tag *) 0x41020000)

struct DMA_CH_MUX1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:7;
      uint64_t reservedSpace0:22;
      uint64_t A_ON:1;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG_31;

};

#define DMA_CH_MUX1 (*(volatile struct DMA_CH_MUX1_tag *) 0x40210000)

struct LLWU_tag
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
      uint64_t FILTERS:8;
      uint64_t DMAS:8;
      uint64_t MODULES:8;
      uint64_t PINS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WUPE0:2;
      uint64_t WUPE1:2;
      uint64_t WUPE2:2;
      uint64_t WUPE3:2;
      uint64_t WUPE4:2;
      uint64_t WUPE5:2;
      uint64_t WUPE6:2;
      uint64_t WUPE7:2;
      uint64_t WUPE8:2;
      uint64_t WUPE9:2;
      uint64_t WUPE10:2;
      uint64_t WUPE11:2;
      uint64_t WUPE12:2;
      uint64_t WUPE13:2;
      uint64_t WUPE14:2;
      uint64_t WUPE15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Reserved16:2;
      uint64_t Reserved17:2;
      uint64_t Reserved18:2;
      uint64_t Reserved19:2;
      uint64_t Reserved20:2;
      uint64_t Reserved21:2;
      uint64_t Reserved22:2;
      uint64_t Reserved23:2;
      uint64_t Reserved24:2;
      uint64_t Reserved25:2;
      uint64_t Reserved26:2;
      uint64_t Reserved27:2;
      uint64_t Reserved28:2;
      uint64_t Reserved29:2;
      uint64_t Reserved30:2;
      uint64_t Reserved31:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PE2;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WUME0:1;
      uint64_t WUME1:1;
      uint64_t WUME2:1;
      uint64_t WUME3:1;
      uint64_t WUME4:1;
      uint64_t Reserved5:1;
      uint64_t WUME6:1;
      uint64_t Reserved7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WUF0:1;
      uint64_t WUF1:1;
      uint64_t WUF2:1;
      uint64_t WUF3:1;
      uint64_t WUF4:1;
      uint64_t WUF5:1;
      uint64_t WUF6:1;
      uint64_t WUF7:1;
      uint64_t WUF8:1;
      uint64_t WUF9:1;
      uint64_t WUF10:1;
      uint64_t WUF11:1;
      uint64_t WUF12:1;
      uint64_t WUF13:1;
      uint64_t WUF14:1;
      uint64_t WUF15:1;
      uint64_t Reserved16:1;
      uint64_t Reserved17:1;
      uint64_t Reserved18:1;
      uint64_t Reserved19:1;
      uint64_t Reserved20:1;
      uint64_t Reserved21:1;
      uint64_t Reserved22:1;
      uint64_t Reserved23:1;
      uint64_t Reserved24:1;
      uint64_t Reserved25:1;
      uint64_t Reserved26:1;
      uint64_t Reserved27:1;
      uint64_t Reserved28:1;
      uint64_t Reserved29:1;
      uint64_t Reserved30:1;
      uint64_t Reserved31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PF;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MWUF0:1;
      uint64_t MWUF1:1;
      uint64_t MWUF2:1;
      uint64_t MWUF3:1;
      uint64_t MWUF4:1;
      uint64_t Reserved5:1;
      uint64_t MWUF6:1;
      uint64_t Reserved7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MF;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FILTSEL1:5;
      uint64_t FILTE1:2;
      uint64_t FILTF1:1;
      uint64_t FILTSEL2:5;
      uint64_t FILTE2:2;
      uint64_t FILTF2:1;
      uint64_t FILTSEL3:5;
      uint64_t FILTE3:2;
      uint64_t FILTF3:1;
      uint64_t FILTSEL4:5;
      uint64_t FILTE4:2;
      uint64_t FILTF4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FILT;

};

#define LLWU (*(volatile struct LLWU_tag *) 0x41021000)

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
      uint64_t NMIC:1;
      uint64_t EP:1;
      uint64_t PM:2;
      uint64_t RS:1;
      uint64_t FUP:1;
      uint64_t RDIP:1;
      uint64_t RAIP:1;
      uint64_t reservedSpace0:9;
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
      uint64_t NMI:1;
      uint64_t BHR:1;
      uint64_t MUR:1;
      uint64_t RDIE:1;
      uint64_t RSTH:1;
      uint64_t CLKE:1;
      uint64_t BBOOT:2;
      uint64_t reservedSpace0:1;
      uint64_t RAIE:1;
      uint64_t reservedSpace1:3;
      uint64_t GIRn:4;
      uint64_t TIEn:4;
      uint64_t RIEn:4;
      uint64_t GIEn:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

};

#define MUA (*(volatile struct MUA_tag *) 0x41022000)

struct TRGMUX0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMUX0_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMUX0_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPIT0_register;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:8;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPM0_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:8;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPM1_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:8;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPM2_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:8;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPM3_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:16;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:16;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP0_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP1_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC0_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC1_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPUART0_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPUART1_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPUART2_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPUART3_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPI2C0_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPI2C1_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPI2C2_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPI2C3_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPSPI0_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPSPI1_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLEXIO0_register;

};

#define TRGMUX0 (*(volatile struct TRGMUX0_tag *) 0x41024000)

struct WDOG0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STOP:1;
      uint64_t WAIT:1;
      uint64_t DBG:1;
      uint64_t TST:2;
      uint64_t UPDATE:1;
      uint64_t INT:1;
      uint64_t EN:1;
      uint64_t CLK:2;
      uint64_t RCS:1;
      uint64_t ULK:1;
      uint64_t PRES:1;
      uint64_t CMD32EN:1;
      uint64_t FLG:1;
      uint64_t WIN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTLOW:8;
      uint64_t CNTHIGH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOVALLOW:8;
      uint64_t TOVALHIGH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WINLOW:8;
      uint64_t WINHIGH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WIN;

};

#define WDOG0 (*(volatile struct WDOG0_tag *) 0x41025000)

struct WDOG1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STOP:1;
      uint64_t WAIT:1;
      uint64_t DBG:1;
      uint64_t TST:2;
      uint64_t UPDATE:1;
      uint64_t INT:1;
      uint64_t EN:1;
      uint64_t CLK:2;
      uint64_t RCS:1;
      uint64_t ULK:1;
      uint64_t PRES:1;
      uint64_t CMD32EN:1;
      uint64_t FLG:1;
      uint64_t WIN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTLOW:8;
      uint64_t CNTHIGH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOVALLOW:8;
      uint64_t TOVALHIGH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WINLOW:8;
      uint64_t WINHIGH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WIN;

};

#define WDOG1 (*(volatile struct WDOG1_tag *) 0x403d0000)

struct WDOG2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STOP:1;
      uint64_t WAIT:1;
      uint64_t DBG:1;
      uint64_t TST:2;
      uint64_t UPDATE:1;
      uint64_t INT:1;
      uint64_t EN:1;
      uint64_t CLK:2;
      uint64_t RCS:1;
      uint64_t ULK:1;
      uint64_t PRES:1;
      uint64_t CMD32EN:1;
      uint64_t FLG:1;
      uint64_t WIN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTLOW:8;
      uint64_t CNTHIGH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOVALLOW:8;
      uint64_t TOVALHIGH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WINLOW:8;
      uint64_t WINHIGH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WIN;

};

#define WDOG2 (*(volatile struct WDOG2_tag *) 0x40430000)

struct PCC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_DMA0;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_RGPIO2P0;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_XRDC;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_SEMA42_0;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_DMA_MUX0;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_MU_A;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCD:3;
      uint64_t FRAC:1;
      uint64_t reservedSpace0:20;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_WDOG0;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_CRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LTC;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_TRNG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPIT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPTIMER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPTIMER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_TPM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_TPM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_FLEXIO0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPI2C0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPI2C1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPI2C2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPI2C3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCD:16;
      uint64_t FRAC:8;
      uint64_t PCS:3;
      uint64_t reservedSpace0:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_SAI0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPSPI0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPSPI1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPUART0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPUART1;

  uint8_t res8[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_PCTLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_PCTLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_ADC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_CMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_CMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCD:3;
      uint64_t FRAC:1;
      uint64_t reservedSpace0:20;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_DAC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCD:3;
      uint64_t FRAC:1;
      uint64_t reservedSpace0:20;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_DAC1;

  uint8_t res9[168];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_SNVS;

};

#define PCC0 (*(volatile struct PCC0_tag *) 0x41026020)

struct SCG0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKPRES:8;
      uint64_t reservedSpace0:19;
      uint64_t DIVPRES:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVSLOW:4;
      uint64_t DIVBUS:4;
      uint64_t reservedSpace0:4;
      uint64_t DIVPLAT:4;
      uint64_t DIVCORE:4;
      uint64_t reservedSpace1:4;
      uint64_t SCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVSLOW:4;
      uint64_t DIVBUS:4;
      uint64_t reservedSpace0:4;
      uint64_t DIVPLAT:4;
      uint64_t DIVCORE:4;
      uint64_t reservedSpace1:4;
      uint64_t SCS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVSLOW:4;
      uint64_t DIVBUS:4;
      uint64_t reservedSpace0:4;
      uint64_t DIVPLAT:4;
      uint64_t DIVCORE:4;
      uint64_t reservedSpace1:4;
      uint64_t SCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVSLOW:4;
      uint64_t DIVBUS:4;
      uint64_t reservedSpace0:4;
      uint64_t DIVPLAT:4;
      uint64_t DIVCORE:4;
      uint64_t reservedSpace1:4;
      uint64_t SCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t CLKOUTSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKOUTCNFG;

  uint8_t res1[220];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOSCEN:1;
      uint64_t SOSCSTEN:1;
      uint64_t SOSCLPEN:1;
      uint64_t reservedSpace0:13;
      uint64_t SOSCCM:1;
      uint64_t SOSCCMRE:1;
      uint64_t reservedSpace1:5;
      uint64_t LK:1;
      uint64_t SOSCVLD:1;
      uint64_t SOSCSEL:1;
      uint64_t SOSCERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOSCCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOSCDIV1:3;
      uint64_t reservedSpace0:5;
      uint64_t SOSCDIV2:3;
      uint64_t reservedSpace1:5;
      uint64_t SOSCDIV3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOSCDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t EREFS:1;
      uint64_t HGO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOSCCFG;

  uint8_t res2[244];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIRCEN:1;
      uint64_t SIRCSTEN:1;
      uint64_t SIRCLPEN:1;
      uint64_t reservedSpace0:1;
      uint64_t LPOPO:1;
      uint64_t reservedSpace1:18;
      uint64_t LK:1;
      uint64_t SIRCVLD:1;
      uint64_t SIRCSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIRCCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIRCDIV1:3;
      uint64_t reservedSpace0:5;
      uint64_t SIRCDIV2:3;
      uint64_t reservedSpace1:5;
      uint64_t SIRCDIV3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIRCDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RANGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIRCCFG;

  uint8_t res3[244];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIRCEN:1;
      uint64_t FIRCSTEN:1;
      uint64_t FIRCLPEN:1;
      uint64_t reservedSpace0:5;
      uint64_t FIRCTREN:1;
      uint64_t FIRCTRUP:1;
      uint64_t reservedSpace1:13;
      uint64_t LK:1;
      uint64_t FIRCVLD:1;
      uint64_t FIRCSEL:1;
      uint64_t FIRCERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIRCCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIRCDIV1:3;
      uint64_t reservedSpace0:5;
      uint64_t FIRCDIV2:3;
      uint64_t reservedSpace1:5;
      uint64_t FIRCDIV3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIRCDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RANGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIRCCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIMSRC:2;
      uint64_t reservedSpace0:6;
      uint64_t TRIMDIV:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIRCTCFG;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIMFINE:7;
      uint64_t reservedSpace0:1;
      uint64_t TRIMCOAR:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIRCSTAT;

  uint8_t res5[228];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ROSCCM:1;
      uint64_t ROSCCMRE:1;
      uint64_t reservedSpace1:5;
      uint64_t LK:1;
      uint64_t ROSCVLD:1;
      uint64_t ROSCSEL:1;
      uint64_t ROSCERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROSCCSR;

  uint8_t res6[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APLLEN:1;
      uint64_t APLLSTEN:1;
      uint64_t reservedSpace0:21;
      uint64_t LK:1;
      uint64_t APLLVLD:1;
      uint64_t APLLSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APLLCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APLLDIV1:3;
      uint64_t reservedSpace0:5;
      uint64_t APLLDIV2:3;
      uint64_t reservedSpace1:5;
      uint64_t APLLDIV3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APLLDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:1;
      uint64_t PLLS:1;
      uint64_t reservedSpace0:6;
      uint64_t PREDIV:3;
      uint64_t reservedSpace1:3;
      uint64_t PFDSEL:2;
      uint64_t MULT:7;
      uint64_t reservedSpace2:1;
      uint64_t PLLPOSTDIV1:4;
      uint64_t PLLPOSTDIV2:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APLLCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFD0:6;
      uint64_t PFD0_VALID:1;
      uint64_t PFD0_CLKGATE:1;
      uint64_t PFD1:6;
      uint64_t PFD1_VALID:1;
      uint64_t PFD1_CLKGATE:1;
      uint64_t PFD2:6;
      uint64_t PFD2_VALID:1;
      uint64_t PFD2_CLKGATE:1;
      uint64_t PFD3:6;
      uint64_t PFD3_VALID:1;
      uint64_t PFD3_CLKGATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APLLPFD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NUM:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APLLNUM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DENOM:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APLLDENOM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STEP:15;
      uint64_t ENABLE:1;
      uint64_t STOP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APLLSS;

  uint8_t res7[220];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCK_TIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APLLLOCK_CNFG;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPLLEN:1;
      uint64_t SPLLSTEN:1;
      uint64_t reservedSpace0:21;
      uint64_t LK:1;
      uint64_t SPLLVLD:1;
      uint64_t SPLLSEL:1;
      uint64_t SPLLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPLLCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPLLDIV1:3;
      uint64_t reservedSpace0:5;
      uint64_t SPLLDIV2:3;
      uint64_t reservedSpace1:5;
      uint64_t SPLLDIV3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPLLDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:1;
      uint64_t PLLS:1;
      uint64_t reservedSpace0:6;
      uint64_t PREDIV:3;
      uint64_t reservedSpace1:3;
      uint64_t PFDSEL:2;
      uint64_t MULT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPLLCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFD0:6;
      uint64_t PFD0_VALID:1;
      uint64_t PFD0_CLKGATE:1;
      uint64_t PFD1:6;
      uint64_t PFD1_VALID:1;
      uint64_t PFD1_CLKGATE:1;
      uint64_t PFD2:6;
      uint64_t PFD2_VALID:1;
      uint64_t PFD2_CLKGATE:1;
      uint64_t PFD3:6;
      uint64_t PFD3_VALID:1;
      uint64_t PFD3_CLKGATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPLLPFD;

  uint8_t res9[232];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCK_TIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPLLLOCK_CNFG;

};

#define SCG0 (*(volatile struct SCG0_tag *) 0x41027000)

struct CRC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL:8;
      uint64_t LU:8;
      uint64_t HL:8;
      uint64_t HU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOW:16;
      uint64_t HIGH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPOLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t TCRC:1;
      uint64_t WAS:1;
      uint64_t FXOR:1;
      uint64_t reservedSpace1:1;
      uint64_t TOTR:2;
      uint64_t TOT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

};

#define CRC0 (*(volatile struct CRC0_tag *) 0x41029000)

struct LTC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENC:1;
      uint64_t ICV_TEST:1;
      uint64_t AS:2;
      uint64_t AAI:9;
      uint64_t reservedSpace0:3;
      uint64_t ALG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MD;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KS:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KS;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DS;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICVS:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICVS;

  uint8_t res3[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALL:1;
      uint64_t AES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM:1;
      uint64_t reservedSpace0:7;
      uint64_t IFE:1;
      uint64_t IFR:1;
      uint64_t reservedSpace1:2;
      uint64_t OFE:1;
      uint64_t OFR:1;
      uint64_t reservedSpace2:2;
      uint64_t IFS:1;
      uint64_t OFS:1;
      uint64_t reservedSpace3:2;
      uint64_t KIS:1;
      uint64_t KOS:1;
      uint64_t CIS:1;
      uint64_t COS:1;
      uint64_t reservedSpace4:6;
      uint64_t KDF:1;
      uint64_t KAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM:1;
      uint64_t reservedSpace0:1;
      uint64_t CDS:1;
      uint64_t CICV:1;
      uint64_t reservedSpace1:1;
      uint64_t CCR:1;
      uint64_t CKR:1;
      uint64_t reservedSpace2:23;
      uint64_t COF:1;
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CW;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t AB:1;
      uint64_t reservedSpace1:14;
      uint64_t DI:1;
      uint64_t reservedSpace2:3;
      uint64_t EI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRID1:4;
      uint64_t reservedSpace0:4;
      uint64_t CL1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESTA;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AADSZ:4;
      uint64_t reservedSpace0:27;
      uint64_t AL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AADSZ;

  uint8_t res7[164];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX__0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX__1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX__2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX__3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX__4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX__5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX__6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX__7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX__8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX__9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX__10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX__11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX__12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTX__13;

  uint8_t res8[200];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEY__0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEY__1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEY__2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEY__3;

  uint8_t res9[736];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIN_REV:8;
      uint64_t MAJ_REV:8;
      uint64_t IP_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECO_REV:8;
      uint64_t ARCH_ERA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AESREV:4;
      uint64_t AESVID:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAVID;

  uint8_t res10[708];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFL:7;
      uint64_t reservedSpace0:8;
      uint64_t IFF:1;
      uint64_t OFL:7;
      uint64_t reservedSpace1:8;
      uint64_t OFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTA;

  uint8_t res11[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFIFO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFIFO;

  uint8_t res12[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFIFO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFIFO;

};

#define LTC0 (*(volatile struct LTC0_tag *) 0x4102a000)

struct LPIT0_tag
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
      uint64_t CHANNEL:8;
      uint64_t EXT_TRIG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M_CEN:1;
      uint64_t SW_RST:1;
      uint64_t DOZE_EN:1;
      uint64_t DBG_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF0:1;
      uint64_t TIF1:1;
      uint64_t TIF2:1;
      uint64_t TIF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIE0:1;
      uint64_t TIE1:1;
      uint64_t TIE2:1;
      uint64_t TIE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET_T_EN_0:1;
      uint64_t SET_T_EN_1:1;
      uint64_t SET_T_EN_2:1;
      uint64_t SET_T_EN_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_T_EN_0:1;
      uint64_t CLR_T_EN_1:1;
      uint64_t CLR_T_EN_2:1;
      uint64_t CLR_T_EN_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLRTEN;

};

#define LPIT0 (*(volatile struct LPIT0_tag *) 0x4102d000)

struct LPIT0_CHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR_CUR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_EN:1;
      uint64_t CHAIN:1;
      uint64_t MODE:2;
      uint64_t reservedSpace0:12;
      uint64_t TSOT:1;
      uint64_t TSOI:1;
      uint64_t TROT:1;
      uint64_t reservedSpace1:4;
      uint64_t TRG_SRC:1;
      uint64_t TRG_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

};

#define LPIT0_CHANNEL_0 (*(volatile struct LPIT0_CHANNEL_0_tag *) 0x4102d020)

struct LPIT0_CHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR_CUR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_EN:1;
      uint64_t CHAIN:1;
      uint64_t MODE:2;
      uint64_t reservedSpace0:12;
      uint64_t TSOT:1;
      uint64_t TSOI:1;
      uint64_t TROT:1;
      uint64_t reservedSpace1:4;
      uint64_t TRG_SRC:1;
      uint64_t TRG_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

};

#define LPIT0_CHANNEL_1 (*(volatile struct LPIT0_CHANNEL_1_tag *) 0x4102d030)

struct LPIT0_CHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR_CUR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_EN:1;
      uint64_t CHAIN:1;
      uint64_t MODE:2;
      uint64_t reservedSpace0:12;
      uint64_t TSOT:1;
      uint64_t TSOI:1;
      uint64_t TROT:1;
      uint64_t reservedSpace1:4;
      uint64_t TRG_SRC:1;
      uint64_t TRG_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

};

#define LPIT0_CHANNEL_2 (*(volatile struct LPIT0_CHANNEL_2_tag *) 0x4102d040)

struct LPIT0_CHANNEL_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR_CUR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_EN:1;
      uint64_t CHAIN:1;
      uint64_t MODE:2;
      uint64_t reservedSpace0:12;
      uint64_t TSOT:1;
      uint64_t TSOI:1;
      uint64_t TROT:1;
      uint64_t reservedSpace1:4;
      uint64_t TRG_SRC:1;
      uint64_t TRG_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

};

#define LPIT0_CHANNEL_3 (*(volatile struct LPIT0_CHANNEL_3_tag *) 0x4102d050)

struct LPIT1_tag
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
      uint64_t CHANNEL:8;
      uint64_t EXT_TRIG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M_CEN:1;
      uint64_t SW_RST:1;
      uint64_t DOZE_EN:1;
      uint64_t DBG_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF0:1;
      uint64_t TIF1:1;
      uint64_t TIF2:1;
      uint64_t TIF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIE0:1;
      uint64_t TIE1:1;
      uint64_t TIE2:1;
      uint64_t TIE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET_T_EN_0:1;
      uint64_t SET_T_EN_1:1;
      uint64_t SET_T_EN_2:1;
      uint64_t SET_T_EN_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_T_EN_0:1;
      uint64_t CLR_T_EN_1:1;
      uint64_t CLR_T_EN_2:1;
      uint64_t CLR_T_EN_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLRTEN;

};

#define LPIT1 (*(volatile struct LPIT1_tag *) 0x40270000)

struct LPIT1_CHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR_CUR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_EN:1;
      uint64_t CHAIN:1;
      uint64_t MODE:2;
      uint64_t reservedSpace0:12;
      uint64_t TSOT:1;
      uint64_t TSOI:1;
      uint64_t TROT:1;
      uint64_t reservedSpace1:4;
      uint64_t TRG_SRC:1;
      uint64_t TRG_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

};

#define LPIT1_CHANNEL_0 (*(volatile struct LPIT1_CHANNEL_0_tag *) 0x40270020)

struct LPIT1_CHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR_CUR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_EN:1;
      uint64_t CHAIN:1;
      uint64_t MODE:2;
      uint64_t reservedSpace0:12;
      uint64_t TSOT:1;
      uint64_t TSOI:1;
      uint64_t TROT:1;
      uint64_t reservedSpace1:4;
      uint64_t TRG_SRC:1;
      uint64_t TRG_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

};

#define LPIT1_CHANNEL_1 (*(volatile struct LPIT1_CHANNEL_1_tag *) 0x40270030)

struct LPIT1_CHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR_CUR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_EN:1;
      uint64_t CHAIN:1;
      uint64_t MODE:2;
      uint64_t reservedSpace0:12;
      uint64_t TSOT:1;
      uint64_t TSOI:1;
      uint64_t TROT:1;
      uint64_t reservedSpace1:4;
      uint64_t TRG_SRC:1;
      uint64_t TRG_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

};

#define LPIT1_CHANNEL_2 (*(volatile struct LPIT1_CHANNEL_2_tag *) 0x40270040)

struct LPIT1_CHANNEL_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR_CUR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_EN:1;
      uint64_t CHAIN:1;
      uint64_t MODE:2;
      uint64_t reservedSpace0:12;
      uint64_t TSOT:1;
      uint64_t TSOI:1;
      uint64_t TROT:1;
      uint64_t reservedSpace1:4;
      uint64_t TRG_SRC:1;
      uint64_t TRG_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

};

#define LPIT1_CHANNEL_3 (*(volatile struct LPIT1_CHANNEL_3_tag *) 0x40270050)

struct LPTMR0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TMS:1;
      uint64_t TFC:1;
      uint64_t TPP:1;
      uint64_t TPS:2;
      uint64_t TIE:1;
      uint64_t TCF:1;
      uint64_t TDRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:2;
      uint64_t PBYP:1;
      uint64_t PRESCALE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPARE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNR;

};

#define LPTMR0 (*(volatile struct LPTMR0_tag *) 0x4102e000)

struct LPTMR1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TMS:1;
      uint64_t TFC:1;
      uint64_t TPP:1;
      uint64_t TPS:2;
      uint64_t TIE:1;
      uint64_t TCF:1;
      uint64_t TDRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:2;
      uint64_t PBYP:1;
      uint64_t PRESCALE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPARE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNR;

};

#define LPTMR1 (*(volatile struct LPTMR1_tag *) 0x4102f000)

struct TPM0_tag
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
      uint64_t CHAN:8;
      uint64_t TRIG:8;
      uint64_t WIDTH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBAL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:3;
      uint64_t CMOD:2;
      uint64_t CPWMS:1;
      uint64_t TOIE:1;
      uint64_t TOF:1;
      uint64_t DMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0F:1;
      uint64_t CH1F:1;
      uint64_t CH2F:1;
      uint64_t CH3F:1;
      uint64_t CH4F:1;
      uint64_t CH5F:1;
      uint64_t reservedSpace0:2;
      uint64_t TOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  uint8_t res1[68];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMBINE0:1;
      uint64_t COMSWAP0:1;
      uint64_t reservedSpace0:6;
      uint64_t COMBINE1:1;
      uint64_t COMSWAP1:1;
      uint64_t reservedSpace1:6;
      uint64_t COMBINE2:1;
      uint64_t COMSWAP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMBINE;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIG0:1;
      uint64_t TRIG1:1;
      uint64_t TRIG2:1;
      uint64_t TRIG3:1;
      uint64_t TRIG4:1;
      uint64_t TRIG5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL0:1;
      uint64_t POL1:1;
      uint64_t POL2:1;
      uint64_t POL3:1;
      uint64_t POL4:1;
      uint64_t POL5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POL;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0FVAL:4;
      uint64_t CH1FVAL:4;
      uint64_t CH2FVAL:4;
      uint64_t CH3FVAL:4;
      uint64_t CH4FVAL:4;
      uint64_t CH5FVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FILTER;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUADEN:1;
      uint64_t TOFDIR:1;
      uint64_t QUADIR:1;
      uint64_t QUADMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DOZEEN:1;
      uint64_t DBGMODE:2;
      uint64_t GTBSYNC:1;
      uint64_t GTBEEN:1;
      uint64_t reservedSpace1:6;
      uint64_t CSOT:1;
      uint64_t CSOO:1;
      uint64_t CROT:1;
      uint64_t CPOT:1;
      uint64_t reservedSpace2:2;
      uint64_t TRGPOL:1;
      uint64_t TRGSRC:1;
      uint64_t TRGSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONF;

};

#define TPM0 (*(volatile struct TPM0_tag *) 0x41030000)

struct TPM0_CHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM0_CHANNEL_0 (*(volatile struct TPM0_CHANNEL_0_tag *) 0x41030020)

struct TPM0_CHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM0_CHANNEL_1 (*(volatile struct TPM0_CHANNEL_1_tag *) 0x41030028)

struct TPM0_CHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM0_CHANNEL_2 (*(volatile struct TPM0_CHANNEL_2_tag *) 0x41030030)

struct TPM0_CHANNEL_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM0_CHANNEL_3 (*(volatile struct TPM0_CHANNEL_3_tag *) 0x41030038)

struct TPM0_CHANNEL_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM0_CHANNEL_4 (*(volatile struct TPM0_CHANNEL_4_tag *) 0x41030040)

struct TPM0_CHANNEL_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM0_CHANNEL_5 (*(volatile struct TPM0_CHANNEL_5_tag *) 0x41030048)

struct TPM4_tag
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
      uint64_t CHAN:8;
      uint64_t TRIG:8;
      uint64_t WIDTH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBAL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:3;
      uint64_t CMOD:2;
      uint64_t CPWMS:1;
      uint64_t TOIE:1;
      uint64_t TOF:1;
      uint64_t DMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0F:1;
      uint64_t CH1F:1;
      uint64_t CH2F:1;
      uint64_t CH3F:1;
      uint64_t CH4F:1;
      uint64_t CH5F:1;
      uint64_t reservedSpace0:2;
      uint64_t TOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  uint8_t res1[68];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMBINE0:1;
      uint64_t COMSWAP0:1;
      uint64_t reservedSpace0:6;
      uint64_t COMBINE1:1;
      uint64_t COMSWAP1:1;
      uint64_t reservedSpace1:6;
      uint64_t COMBINE2:1;
      uint64_t COMSWAP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMBINE;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIG0:1;
      uint64_t TRIG1:1;
      uint64_t TRIG2:1;
      uint64_t TRIG3:1;
      uint64_t TRIG4:1;
      uint64_t TRIG5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL0:1;
      uint64_t POL1:1;
      uint64_t POL2:1;
      uint64_t POL3:1;
      uint64_t POL4:1;
      uint64_t POL5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POL;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0FVAL:4;
      uint64_t CH1FVAL:4;
      uint64_t CH2FVAL:4;
      uint64_t CH3FVAL:4;
      uint64_t CH4FVAL:4;
      uint64_t CH5FVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FILTER;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUADEN:1;
      uint64_t TOFDIR:1;
      uint64_t QUADIR:1;
      uint64_t QUADMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DOZEEN:1;
      uint64_t DBGMODE:2;
      uint64_t GTBSYNC:1;
      uint64_t GTBEEN:1;
      uint64_t reservedSpace1:6;
      uint64_t CSOT:1;
      uint64_t CSOO:1;
      uint64_t CROT:1;
      uint64_t CPOT:1;
      uint64_t reservedSpace2:2;
      uint64_t TRGPOL:1;
      uint64_t TRGSRC:1;
      uint64_t TRGSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONF;

};

#define TPM4 (*(volatile struct TPM4_tag *) 0x40250000)

struct TPM4_CHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM4_CHANNEL_0 (*(volatile struct TPM4_CHANNEL_0_tag *) 0x40250020)

struct TPM4_CHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM4_CHANNEL_1 (*(volatile struct TPM4_CHANNEL_1_tag *) 0x40250028)

struct TPM4_CHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM4_CHANNEL_2 (*(volatile struct TPM4_CHANNEL_2_tag *) 0x40250030)

struct TPM4_CHANNEL_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM4_CHANNEL_3 (*(volatile struct TPM4_CHANNEL_3_tag *) 0x40250038)

struct TPM4_CHANNEL_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM4_CHANNEL_4 (*(volatile struct TPM4_CHANNEL_4_tag *) 0x40250040)

struct TPM4_CHANNEL_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM4_CHANNEL_5 (*(volatile struct TPM4_CHANNEL_5_tag *) 0x40250048)

struct TPM5_tag
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
      uint64_t CHAN:8;
      uint64_t TRIG:8;
      uint64_t WIDTH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBAL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:3;
      uint64_t CMOD:2;
      uint64_t CPWMS:1;
      uint64_t TOIE:1;
      uint64_t TOF:1;
      uint64_t DMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0F:1;
      uint64_t CH1F:1;
      uint64_t CH2F:1;
      uint64_t CH3F:1;
      uint64_t CH4F:1;
      uint64_t CH5F:1;
      uint64_t reservedSpace0:2;
      uint64_t TOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  uint8_t res1[68];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMBINE0:1;
      uint64_t COMSWAP0:1;
      uint64_t reservedSpace0:6;
      uint64_t COMBINE1:1;
      uint64_t COMSWAP1:1;
      uint64_t reservedSpace1:6;
      uint64_t COMBINE2:1;
      uint64_t COMSWAP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMBINE;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIG0:1;
      uint64_t TRIG1:1;
      uint64_t TRIG2:1;
      uint64_t TRIG3:1;
      uint64_t TRIG4:1;
      uint64_t TRIG5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL0:1;
      uint64_t POL1:1;
      uint64_t POL2:1;
      uint64_t POL3:1;
      uint64_t POL4:1;
      uint64_t POL5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POL;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0FVAL:4;
      uint64_t CH1FVAL:4;
      uint64_t CH2FVAL:4;
      uint64_t CH3FVAL:4;
      uint64_t CH4FVAL:4;
      uint64_t CH5FVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FILTER;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUADEN:1;
      uint64_t TOFDIR:1;
      uint64_t QUADIR:1;
      uint64_t QUADMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DOZEEN:1;
      uint64_t DBGMODE:2;
      uint64_t GTBSYNC:1;
      uint64_t GTBEEN:1;
      uint64_t reservedSpace1:6;
      uint64_t CSOT:1;
      uint64_t CSOO:1;
      uint64_t CROT:1;
      uint64_t CPOT:1;
      uint64_t reservedSpace2:2;
      uint64_t TRGPOL:1;
      uint64_t TRGSRC:1;
      uint64_t TRGSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONF;

};

#define TPM5 (*(volatile struct TPM5_tag *) 0x40260000)

struct TPM5_CHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM5_CHANNEL_0 (*(volatile struct TPM5_CHANNEL_0_tag *) 0x40260020)

struct TPM5_CHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM5_CHANNEL_1 (*(volatile struct TPM5_CHANNEL_1_tag *) 0x40260028)

struct TPM5_CHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM5_CHANNEL_2 (*(volatile struct TPM5_CHANNEL_2_tag *) 0x40260030)

struct TPM5_CHANNEL_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM5_CHANNEL_3 (*(volatile struct TPM5_CHANNEL_3_tag *) 0x40260038)

struct TPM5_CHANNEL_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM5_CHANNEL_4 (*(volatile struct TPM5_CHANNEL_4_tag *) 0x40260040)

struct TPM5_CHANNEL_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM5_CHANNEL_5 (*(volatile struct TPM5_CHANNEL_5_tag *) 0x40260048)

struct TPM6_tag
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
      uint64_t CHAN:8;
      uint64_t TRIG:8;
      uint64_t WIDTH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBAL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:3;
      uint64_t CMOD:2;
      uint64_t CPWMS:1;
      uint64_t TOIE:1;
      uint64_t TOF:1;
      uint64_t DMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0F:1;
      uint64_t CH1F:1;
      uint64_t CH2F:1;
      uint64_t CH3F:1;
      uint64_t CH4F:1;
      uint64_t CH5F:1;
      uint64_t reservedSpace0:2;
      uint64_t TOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  uint8_t res1[68];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMBINE0:1;
      uint64_t COMSWAP0:1;
      uint64_t reservedSpace0:6;
      uint64_t COMBINE1:1;
      uint64_t COMSWAP1:1;
      uint64_t reservedSpace1:6;
      uint64_t COMBINE2:1;
      uint64_t COMSWAP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMBINE;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIG0:1;
      uint64_t TRIG1:1;
      uint64_t TRIG2:1;
      uint64_t TRIG3:1;
      uint64_t TRIG4:1;
      uint64_t TRIG5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL0:1;
      uint64_t POL1:1;
      uint64_t POL2:1;
      uint64_t POL3:1;
      uint64_t POL4:1;
      uint64_t POL5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POL;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0FVAL:4;
      uint64_t CH1FVAL:4;
      uint64_t CH2FVAL:4;
      uint64_t CH3FVAL:4;
      uint64_t CH4FVAL:4;
      uint64_t CH5FVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FILTER;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUADEN:1;
      uint64_t TOFDIR:1;
      uint64_t QUADIR:1;
      uint64_t QUADMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DOZEEN:1;
      uint64_t DBGMODE:2;
      uint64_t GTBSYNC:1;
      uint64_t GTBEEN:1;
      uint64_t reservedSpace1:6;
      uint64_t CSOT:1;
      uint64_t CSOO:1;
      uint64_t CROT:1;
      uint64_t CPOT:1;
      uint64_t reservedSpace2:2;
      uint64_t TRGPOL:1;
      uint64_t TRGSRC:1;
      uint64_t TRGSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONF;

};

#define TPM6 (*(volatile struct TPM6_tag *) 0x40a10000)

struct TPM6_CHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM6_CHANNEL_0 (*(volatile struct TPM6_CHANNEL_0_tag *) 0x40a10020)

struct TPM6_CHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM6_CHANNEL_1 (*(volatile struct TPM6_CHANNEL_1_tag *) 0x40a10028)

struct TPM6_CHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM6_CHANNEL_2 (*(volatile struct TPM6_CHANNEL_2_tag *) 0x40a10030)

struct TPM6_CHANNEL_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM6_CHANNEL_3 (*(volatile struct TPM6_CHANNEL_3_tag *) 0x40a10038)

struct TPM6_CHANNEL_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM6_CHANNEL_4 (*(volatile struct TPM6_CHANNEL_4_tag *) 0x40a10040)

struct TPM6_CHANNEL_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM6_CHANNEL_5 (*(volatile struct TPM6_CHANNEL_5_tag *) 0x40a10048)

struct TPM7_tag
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
      uint64_t CHAN:8;
      uint64_t TRIG:8;
      uint64_t WIDTH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBAL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:3;
      uint64_t CMOD:2;
      uint64_t CPWMS:1;
      uint64_t TOIE:1;
      uint64_t TOF:1;
      uint64_t DMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0F:1;
      uint64_t CH1F:1;
      uint64_t CH2F:1;
      uint64_t CH3F:1;
      uint64_t CH4F:1;
      uint64_t CH5F:1;
      uint64_t reservedSpace0:2;
      uint64_t TOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  uint8_t res1[68];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMBINE0:1;
      uint64_t COMSWAP0:1;
      uint64_t reservedSpace0:6;
      uint64_t COMBINE1:1;
      uint64_t COMSWAP1:1;
      uint64_t reservedSpace1:6;
      uint64_t COMBINE2:1;
      uint64_t COMSWAP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMBINE;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIG0:1;
      uint64_t TRIG1:1;
      uint64_t TRIG2:1;
      uint64_t TRIG3:1;
      uint64_t TRIG4:1;
      uint64_t TRIG5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL0:1;
      uint64_t POL1:1;
      uint64_t POL2:1;
      uint64_t POL3:1;
      uint64_t POL4:1;
      uint64_t POL5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POL;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0FVAL:4;
      uint64_t CH1FVAL:4;
      uint64_t CH2FVAL:4;
      uint64_t CH3FVAL:4;
      uint64_t CH4FVAL:4;
      uint64_t CH5FVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FILTER;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUADEN:1;
      uint64_t TOFDIR:1;
      uint64_t QUADIR:1;
      uint64_t QUADMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DOZEEN:1;
      uint64_t DBGMODE:2;
      uint64_t GTBSYNC:1;
      uint64_t GTBEEN:1;
      uint64_t reservedSpace1:6;
      uint64_t CSOT:1;
      uint64_t CSOO:1;
      uint64_t CROT:1;
      uint64_t CPOT:1;
      uint64_t reservedSpace2:2;
      uint64_t TRGPOL:1;
      uint64_t TRGSRC:1;
      uint64_t TRGSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONF;

};

#define TPM7 (*(volatile struct TPM7_tag *) 0x40a20000)

struct TPM7_CHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM7_CHANNEL_0 (*(volatile struct TPM7_CHANNEL_0_tag *) 0x40a20020)

struct TPM7_CHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM7_CHANNEL_1 (*(volatile struct TPM7_CHANNEL_1_tag *) 0x40a20028)

struct TPM7_CHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM7_CHANNEL_2 (*(volatile struct TPM7_CHANNEL_2_tag *) 0x40a20030)

struct TPM7_CHANNEL_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM7_CHANNEL_3 (*(volatile struct TPM7_CHANNEL_3_tag *) 0x40a20038)

struct TPM7_CHANNEL_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM7_CHANNEL_4 (*(volatile struct TPM7_CHANNEL_4_tag *) 0x40a20040)

struct TPM7_CHANNEL_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM7_CHANNEL_5 (*(volatile struct TPM7_CHANNEL_5_tag *) 0x40a20048)

struct TPM1_tag
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
      uint64_t CHAN:8;
      uint64_t TRIG:8;
      uint64_t WIDTH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBAL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:3;
      uint64_t CMOD:2;
      uint64_t CPWMS:1;
      uint64_t TOIE:1;
      uint64_t TOF:1;
      uint64_t DMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0F:1;
      uint64_t CH1F:1;
      uint64_t CH2F:1;
      uint64_t CH3F:1;
      uint64_t CH4F:1;
      uint64_t CH5F:1;
      uint64_t reservedSpace0:2;
      uint64_t TOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  uint8_t res1[68];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMBINE0:1;
      uint64_t COMSWAP0:1;
      uint64_t reservedSpace0:6;
      uint64_t COMBINE1:1;
      uint64_t COMSWAP1:1;
      uint64_t reservedSpace1:6;
      uint64_t COMBINE2:1;
      uint64_t COMSWAP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMBINE;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIG0:1;
      uint64_t TRIG1:1;
      uint64_t TRIG2:1;
      uint64_t TRIG3:1;
      uint64_t TRIG4:1;
      uint64_t TRIG5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL0:1;
      uint64_t POL1:1;
      uint64_t POL2:1;
      uint64_t POL3:1;
      uint64_t POL4:1;
      uint64_t POL5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POL;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0FVAL:4;
      uint64_t CH1FVAL:4;
      uint64_t CH2FVAL:4;
      uint64_t CH3FVAL:4;
      uint64_t CH4FVAL:4;
      uint64_t CH5FVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FILTER;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUADEN:1;
      uint64_t TOFDIR:1;
      uint64_t QUADIR:1;
      uint64_t QUADMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DOZEEN:1;
      uint64_t DBGMODE:2;
      uint64_t GTBSYNC:1;
      uint64_t GTBEEN:1;
      uint64_t reservedSpace1:6;
      uint64_t CSOT:1;
      uint64_t CSOO:1;
      uint64_t CROT:1;
      uint64_t CPOT:1;
      uint64_t reservedSpace2:2;
      uint64_t TRGPOL:1;
      uint64_t TRGSRC:1;
      uint64_t TRGSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONF;

};

#define TPM1 (*(volatile struct TPM1_tag *) 0x41031000)

struct TPM1_CHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM1_CHANNEL_0 (*(volatile struct TPM1_CHANNEL_0_tag *) 0x41031020)

struct TPM1_CHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM1_CHANNEL_1 (*(volatile struct TPM1_CHANNEL_1_tag *) 0x41031028)

struct TPM1_CHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM1_CHANNEL_2 (*(volatile struct TPM1_CHANNEL_2_tag *) 0x41031030)

struct TPM1_CHANNEL_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM1_CHANNEL_3 (*(volatile struct TPM1_CHANNEL_3_tag *) 0x41031038)

struct TPM1_CHANNEL_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM1_CHANNEL_4 (*(volatile struct TPM1_CHANNEL_4_tag *) 0x41031040)

struct TPM1_CHANNEL_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM1_CHANNEL_5 (*(volatile struct TPM1_CHANNEL_5_tag *) 0x41031048)

struct TPM2_tag
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
      uint64_t CHAN:8;
      uint64_t TRIG:8;
      uint64_t WIDTH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBAL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:3;
      uint64_t CMOD:2;
      uint64_t CPWMS:1;
      uint64_t TOIE:1;
      uint64_t TOF:1;
      uint64_t DMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0F:1;
      uint64_t CH1F:1;
      uint64_t CH2F:1;
      uint64_t CH3F:1;
      uint64_t CH4F:1;
      uint64_t CH5F:1;
      uint64_t reservedSpace0:2;
      uint64_t TOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  uint8_t res1[68];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMBINE0:1;
      uint64_t COMSWAP0:1;
      uint64_t reservedSpace0:6;
      uint64_t COMBINE1:1;
      uint64_t COMSWAP1:1;
      uint64_t reservedSpace1:6;
      uint64_t COMBINE2:1;
      uint64_t COMSWAP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMBINE;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIG0:1;
      uint64_t TRIG1:1;
      uint64_t TRIG2:1;
      uint64_t TRIG3:1;
      uint64_t TRIG4:1;
      uint64_t TRIG5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL0:1;
      uint64_t POL1:1;
      uint64_t POL2:1;
      uint64_t POL3:1;
      uint64_t POL4:1;
      uint64_t POL5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POL;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0FVAL:4;
      uint64_t CH1FVAL:4;
      uint64_t CH2FVAL:4;
      uint64_t CH3FVAL:4;
      uint64_t CH4FVAL:4;
      uint64_t CH5FVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FILTER;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUADEN:1;
      uint64_t TOFDIR:1;
      uint64_t QUADIR:1;
      uint64_t QUADMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DOZEEN:1;
      uint64_t DBGMODE:2;
      uint64_t GTBSYNC:1;
      uint64_t GTBEEN:1;
      uint64_t reservedSpace1:6;
      uint64_t CSOT:1;
      uint64_t CSOO:1;
      uint64_t CROT:1;
      uint64_t CPOT:1;
      uint64_t reservedSpace2:2;
      uint64_t TRGPOL:1;
      uint64_t TRGSRC:1;
      uint64_t TRGSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONF;

};

#define TPM2 (*(volatile struct TPM2_tag *) 0x410a8000)

struct TPM2_CHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM2_CHANNEL_0 (*(volatile struct TPM2_CHANNEL_0_tag *) 0x410a8020)

struct TPM2_CHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM2_CHANNEL_1 (*(volatile struct TPM2_CHANNEL_1_tag *) 0x410a8028)

struct TPM2_CHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM2_CHANNEL_2 (*(volatile struct TPM2_CHANNEL_2_tag *) 0x410a8030)

struct TPM2_CHANNEL_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM2_CHANNEL_3 (*(volatile struct TPM2_CHANNEL_3_tag *) 0x410a8038)

struct TPM2_CHANNEL_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM2_CHANNEL_4 (*(volatile struct TPM2_CHANNEL_4_tag *) 0x410a8040)

struct TPM2_CHANNEL_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM2_CHANNEL_5 (*(volatile struct TPM2_CHANNEL_5_tag *) 0x410a8048)

struct TPM3_tag
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
      uint64_t CHAN:8;
      uint64_t TRIG:8;
      uint64_t WIDTH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBAL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:3;
      uint64_t CMOD:2;
      uint64_t CPWMS:1;
      uint64_t TOIE:1;
      uint64_t TOF:1;
      uint64_t DMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0F:1;
      uint64_t CH1F:1;
      uint64_t CH2F:1;
      uint64_t CH3F:1;
      uint64_t CH4F:1;
      uint64_t CH5F:1;
      uint64_t reservedSpace0:2;
      uint64_t TOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  uint8_t res1[68];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMBINE0:1;
      uint64_t COMSWAP0:1;
      uint64_t reservedSpace0:6;
      uint64_t COMBINE1:1;
      uint64_t COMSWAP1:1;
      uint64_t reservedSpace1:6;
      uint64_t COMBINE2:1;
      uint64_t COMSWAP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMBINE;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIG0:1;
      uint64_t TRIG1:1;
      uint64_t TRIG2:1;
      uint64_t TRIG3:1;
      uint64_t TRIG4:1;
      uint64_t TRIG5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL0:1;
      uint64_t POL1:1;
      uint64_t POL2:1;
      uint64_t POL3:1;
      uint64_t POL4:1;
      uint64_t POL5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POL;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0FVAL:4;
      uint64_t CH1FVAL:4;
      uint64_t CH2FVAL:4;
      uint64_t CH3FVAL:4;
      uint64_t CH4FVAL:4;
      uint64_t CH5FVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FILTER;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUADEN:1;
      uint64_t TOFDIR:1;
      uint64_t QUADIR:1;
      uint64_t QUADMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DOZEEN:1;
      uint64_t DBGMODE:2;
      uint64_t GTBSYNC:1;
      uint64_t GTBEEN:1;
      uint64_t reservedSpace1:6;
      uint64_t CSOT:1;
      uint64_t CSOO:1;
      uint64_t CROT:1;
      uint64_t CPOT:1;
      uint64_t reservedSpace2:2;
      uint64_t TRGPOL:1;
      uint64_t TRGSRC:1;
      uint64_t TRGSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONF;

};

#define TPM3 (*(volatile struct TPM3_tag *) 0x410a9000)

struct TPM3_CHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM3_CHANNEL_0 (*(volatile struct TPM3_CHANNEL_0_tag *) 0x410a9020)

struct TPM3_CHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM3_CHANNEL_1 (*(volatile struct TPM3_CHANNEL_1_tag *) 0x410a9028)

struct TPM3_CHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM3_CHANNEL_2 (*(volatile struct TPM3_CHANNEL_2_tag *) 0x410a9030)

struct TPM3_CHANNEL_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM3_CHANNEL_3 (*(volatile struct TPM3_CHANNEL_3_tag *) 0x410a9038)

struct TPM3_CHANNEL_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM3_CHANNEL_4 (*(volatile struct TPM3_CHANNEL_4_tag *) 0x410a9040)

struct TPM3_CHANNEL_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV;

};

#define TPM3_CHANNEL_5 (*(volatile struct TPM3_CHANNEL_5_tag *) 0x410a9048)

struct FLEXIO0_tag
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
      uint64_t SHIFTER:8;
      uint64_t TIMER:8;
      uint64_t PIN:8;
      uint64_t TRIGGER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLEXEN:1;
      uint64_t SWRST:1;
      uint64_t FASTACC:1;
      uint64_t reservedSpace0:27;
      uint64_t DBGE:1;
      uint64_t DOZEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSIE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTSIEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEIE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTEIEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEIE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMIEN;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSDE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTSDEN;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTSTATE;

  uint8_t res3[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMOD:3;
      uint64_t reservedSpace0:4;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:5;
      uint64_t TIMPOL:1;
      uint64_t TIMSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMOD:3;
      uint64_t reservedSpace0:4;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:5;
      uint64_t TIMPOL:1;
      uint64_t TIMSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMOD:3;
      uint64_t reservedSpace0:4;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:5;
      uint64_t TIMPOL:1;
      uint64_t TIMSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMOD:3;
      uint64_t reservedSpace0:4;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:5;
      uint64_t TIMPOL:1;
      uint64_t TIMSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMOD:3;
      uint64_t reservedSpace0:4;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:5;
      uint64_t TIMPOL:1;
      uint64_t TIMSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMOD:3;
      uint64_t reservedSpace0:4;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:5;
      uint64_t TIMPOL:1;
      uint64_t TIMSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMOD:3;
      uint64_t reservedSpace0:4;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:5;
      uint64_t TIMPOL:1;
      uint64_t TIMSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMOD:3;
      uint64_t reservedSpace0:4;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:5;
      uint64_t TIMPOL:1;
      uint64_t TIMSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCTL_7;

  uint8_t res4[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTART:2;
      uint64_t reservedSpace0:2;
      uint64_t SSTOP:2;
      uint64_t reservedSpace1:2;
      uint64_t INSRC:1;
      uint64_t reservedSpace2:7;
      uint64_t PWIDTH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCFG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTART:2;
      uint64_t reservedSpace0:2;
      uint64_t SSTOP:2;
      uint64_t reservedSpace1:2;
      uint64_t INSRC:1;
      uint64_t reservedSpace2:7;
      uint64_t PWIDTH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCFG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTART:2;
      uint64_t reservedSpace0:2;
      uint64_t SSTOP:2;
      uint64_t reservedSpace1:2;
      uint64_t INSRC:1;
      uint64_t reservedSpace2:7;
      uint64_t PWIDTH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCFG_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTART:2;
      uint64_t reservedSpace0:2;
      uint64_t SSTOP:2;
      uint64_t reservedSpace1:2;
      uint64_t INSRC:1;
      uint64_t reservedSpace2:7;
      uint64_t PWIDTH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCFG_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTART:2;
      uint64_t reservedSpace0:2;
      uint64_t SSTOP:2;
      uint64_t reservedSpace1:2;
      uint64_t INSRC:1;
      uint64_t reservedSpace2:7;
      uint64_t PWIDTH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCFG_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTART:2;
      uint64_t reservedSpace0:2;
      uint64_t SSTOP:2;
      uint64_t reservedSpace1:2;
      uint64_t INSRC:1;
      uint64_t reservedSpace2:7;
      uint64_t PWIDTH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCFG_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTART:2;
      uint64_t reservedSpace0:2;
      uint64_t SSTOP:2;
      uint64_t reservedSpace1:2;
      uint64_t INSRC:1;
      uint64_t reservedSpace2:7;
      uint64_t PWIDTH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCFG_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTART:2;
      uint64_t reservedSpace0:2;
      uint64_t SSTOP:2;
      uint64_t reservedSpace1:2;
      uint64_t INSRC:1;
      uint64_t reservedSpace2:7;
      uint64_t PWIDTH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCFG_7;

  uint8_t res5[224];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUF_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUF_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUF_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUF_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUF_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUF_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUF_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUF_7;

  uint8_t res6[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBIS_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBIS_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBIS_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBIS_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBIS_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBIS_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBIS_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBIS_7;

  uint8_t res7[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBYS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBYS_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBYS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBYS_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBYS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBYS_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBYS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBYS_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBYS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBYS_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBYS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBYS_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBYS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBYS_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBYS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBYS_7;

  uint8_t res8[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBBS_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBBS_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBBS_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBBS_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBBS_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBBS_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBBS_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBBS_7;

  uint8_t res9[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMOD:2;
      uint64_t reservedSpace0:5;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:4;
      uint64_t TRGSRC:1;
      uint64_t TRGPOL:1;
      uint64_t TRGSEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMOD:2;
      uint64_t reservedSpace0:5;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:4;
      uint64_t TRGSRC:1;
      uint64_t TRGPOL:1;
      uint64_t TRGSEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMOD:2;
      uint64_t reservedSpace0:5;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:4;
      uint64_t TRGSRC:1;
      uint64_t TRGPOL:1;
      uint64_t TRGSEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMOD:2;
      uint64_t reservedSpace0:5;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:4;
      uint64_t TRGSRC:1;
      uint64_t TRGPOL:1;
      uint64_t TRGSEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMOD:2;
      uint64_t reservedSpace0:5;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:4;
      uint64_t TRGSRC:1;
      uint64_t TRGPOL:1;
      uint64_t TRGSEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMOD:2;
      uint64_t reservedSpace0:5;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:4;
      uint64_t TRGSRC:1;
      uint64_t TRGPOL:1;
      uint64_t TRGSEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMOD:2;
      uint64_t reservedSpace0:5;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:4;
      uint64_t TRGSRC:1;
      uint64_t TRGPOL:1;
      uint64_t TRGSEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMOD:2;
      uint64_t reservedSpace0:5;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:4;
      uint64_t TRGSRC:1;
      uint64_t TRGPOL:1;
      uint64_t TRGSEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCTL_7;

  uint8_t res10[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TSTART:1;
      uint64_t reservedSpace1:2;
      uint64_t TSTOP:2;
      uint64_t reservedSpace2:2;
      uint64_t TIMENA:3;
      uint64_t reservedSpace3:1;
      uint64_t TIMDIS:3;
      uint64_t reservedSpace4:1;
      uint64_t TIMRST:3;
      uint64_t reservedSpace5:1;
      uint64_t TIMDEC:2;
      uint64_t reservedSpace6:2;
      uint64_t TIMOUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCFG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TSTART:1;
      uint64_t reservedSpace1:2;
      uint64_t TSTOP:2;
      uint64_t reservedSpace2:2;
      uint64_t TIMENA:3;
      uint64_t reservedSpace3:1;
      uint64_t TIMDIS:3;
      uint64_t reservedSpace4:1;
      uint64_t TIMRST:3;
      uint64_t reservedSpace5:1;
      uint64_t TIMDEC:2;
      uint64_t reservedSpace6:2;
      uint64_t TIMOUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCFG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TSTART:1;
      uint64_t reservedSpace1:2;
      uint64_t TSTOP:2;
      uint64_t reservedSpace2:2;
      uint64_t TIMENA:3;
      uint64_t reservedSpace3:1;
      uint64_t TIMDIS:3;
      uint64_t reservedSpace4:1;
      uint64_t TIMRST:3;
      uint64_t reservedSpace5:1;
      uint64_t TIMDEC:2;
      uint64_t reservedSpace6:2;
      uint64_t TIMOUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCFG_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TSTART:1;
      uint64_t reservedSpace1:2;
      uint64_t TSTOP:2;
      uint64_t reservedSpace2:2;
      uint64_t TIMENA:3;
      uint64_t reservedSpace3:1;
      uint64_t TIMDIS:3;
      uint64_t reservedSpace4:1;
      uint64_t TIMRST:3;
      uint64_t reservedSpace5:1;
      uint64_t TIMDEC:2;
      uint64_t reservedSpace6:2;
      uint64_t TIMOUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCFG_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TSTART:1;
      uint64_t reservedSpace1:2;
      uint64_t TSTOP:2;
      uint64_t reservedSpace2:2;
      uint64_t TIMENA:3;
      uint64_t reservedSpace3:1;
      uint64_t TIMDIS:3;
      uint64_t reservedSpace4:1;
      uint64_t TIMRST:3;
      uint64_t reservedSpace5:1;
      uint64_t TIMDEC:2;
      uint64_t reservedSpace6:2;
      uint64_t TIMOUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCFG_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TSTART:1;
      uint64_t reservedSpace1:2;
      uint64_t TSTOP:2;
      uint64_t reservedSpace2:2;
      uint64_t TIMENA:3;
      uint64_t reservedSpace3:1;
      uint64_t TIMDIS:3;
      uint64_t reservedSpace4:1;
      uint64_t TIMRST:3;
      uint64_t reservedSpace5:1;
      uint64_t TIMDEC:2;
      uint64_t reservedSpace6:2;
      uint64_t TIMOUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCFG_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TSTART:1;
      uint64_t reservedSpace1:2;
      uint64_t TSTOP:2;
      uint64_t reservedSpace2:2;
      uint64_t TIMENA:3;
      uint64_t reservedSpace3:1;
      uint64_t TIMDIS:3;
      uint64_t reservedSpace4:1;
      uint64_t TIMRST:3;
      uint64_t reservedSpace5:1;
      uint64_t TIMDEC:2;
      uint64_t reservedSpace6:2;
      uint64_t TIMOUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCFG_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TSTART:1;
      uint64_t reservedSpace1:2;
      uint64_t TSTOP:2;
      uint64_t reservedSpace2:2;
      uint64_t TIMENA:3;
      uint64_t reservedSpace3:1;
      uint64_t TIMDIS:3;
      uint64_t reservedSpace4:1;
      uint64_t TIMRST:3;
      uint64_t reservedSpace5:1;
      uint64_t TIMDEC:2;
      uint64_t reservedSpace6:2;
      uint64_t TIMOUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCFG_7;

  uint8_t res11[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCMP_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCMP_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCMP_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCMP_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCMP_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCMP_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCMP_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCMP_7;

  uint8_t res12[352];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNBS_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNBS_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNBS_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNBS_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNBS_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNBS_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNBS_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNBS_7;

  uint8_t res13[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFHWS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFHWS_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFHWS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFHWS_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFHWS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFHWS_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFHWS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFHWS_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFHWS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFHWS_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFHWS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFHWS_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFHWS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFHWS_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFHWS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFHWS_7;

  uint8_t res14[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNIS_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNIS_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNIS_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNIS_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNIS_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNIS_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNIS_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNIS_7;

};

#define FLEXIO0 (*(volatile struct FLEXIO0_tag *) 0x41032000)

struct FLEXIO1_tag
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
      uint64_t SHIFTER:8;
      uint64_t TIMER:8;
      uint64_t PIN:8;
      uint64_t TRIGGER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLEXEN:1;
      uint64_t SWRST:1;
      uint64_t FASTACC:1;
      uint64_t reservedSpace0:27;
      uint64_t DBGE:1;
      uint64_t DOZEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSIE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTSIEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEIE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTEIEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEIE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMIEN;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSDE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTSDEN;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTSTATE;

  uint8_t res3[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMOD:3;
      uint64_t reservedSpace0:4;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:5;
      uint64_t TIMPOL:1;
      uint64_t TIMSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMOD:3;
      uint64_t reservedSpace0:4;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:5;
      uint64_t TIMPOL:1;
      uint64_t TIMSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMOD:3;
      uint64_t reservedSpace0:4;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:5;
      uint64_t TIMPOL:1;
      uint64_t TIMSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMOD:3;
      uint64_t reservedSpace0:4;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:5;
      uint64_t TIMPOL:1;
      uint64_t TIMSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMOD:3;
      uint64_t reservedSpace0:4;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:5;
      uint64_t TIMPOL:1;
      uint64_t TIMSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMOD:3;
      uint64_t reservedSpace0:4;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:5;
      uint64_t TIMPOL:1;
      uint64_t TIMSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMOD:3;
      uint64_t reservedSpace0:4;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:5;
      uint64_t TIMPOL:1;
      uint64_t TIMSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMOD:3;
      uint64_t reservedSpace0:4;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:5;
      uint64_t TIMPOL:1;
      uint64_t TIMSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCTL_7;

  uint8_t res4[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTART:2;
      uint64_t reservedSpace0:2;
      uint64_t SSTOP:2;
      uint64_t reservedSpace1:2;
      uint64_t INSRC:1;
      uint64_t reservedSpace2:7;
      uint64_t PWIDTH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCFG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTART:2;
      uint64_t reservedSpace0:2;
      uint64_t SSTOP:2;
      uint64_t reservedSpace1:2;
      uint64_t INSRC:1;
      uint64_t reservedSpace2:7;
      uint64_t PWIDTH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCFG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTART:2;
      uint64_t reservedSpace0:2;
      uint64_t SSTOP:2;
      uint64_t reservedSpace1:2;
      uint64_t INSRC:1;
      uint64_t reservedSpace2:7;
      uint64_t PWIDTH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCFG_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTART:2;
      uint64_t reservedSpace0:2;
      uint64_t SSTOP:2;
      uint64_t reservedSpace1:2;
      uint64_t INSRC:1;
      uint64_t reservedSpace2:7;
      uint64_t PWIDTH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCFG_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTART:2;
      uint64_t reservedSpace0:2;
      uint64_t SSTOP:2;
      uint64_t reservedSpace1:2;
      uint64_t INSRC:1;
      uint64_t reservedSpace2:7;
      uint64_t PWIDTH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCFG_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTART:2;
      uint64_t reservedSpace0:2;
      uint64_t SSTOP:2;
      uint64_t reservedSpace1:2;
      uint64_t INSRC:1;
      uint64_t reservedSpace2:7;
      uint64_t PWIDTH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCFG_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTART:2;
      uint64_t reservedSpace0:2;
      uint64_t SSTOP:2;
      uint64_t reservedSpace1:2;
      uint64_t INSRC:1;
      uint64_t reservedSpace2:7;
      uint64_t PWIDTH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCFG_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTART:2;
      uint64_t reservedSpace0:2;
      uint64_t SSTOP:2;
      uint64_t reservedSpace1:2;
      uint64_t INSRC:1;
      uint64_t reservedSpace2:7;
      uint64_t PWIDTH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCFG_7;

  uint8_t res5[224];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUF_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUF_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUF_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUF_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUF_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUF_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUF_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUF_7;

  uint8_t res6[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBIS_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBIS_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBIS_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBIS_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBIS_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBIS_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBIS_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBIS_7;

  uint8_t res7[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBYS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBYS_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBYS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBYS_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBYS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBYS_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBYS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBYS_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBYS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBYS_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBYS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBYS_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBYS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBYS_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBYS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBYS_7;

  uint8_t res8[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBBS_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBBS_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBBS_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBBS_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBBS_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBBS_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBBS_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBBS_7;

  uint8_t res9[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMOD:2;
      uint64_t reservedSpace0:5;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:4;
      uint64_t TRGSRC:1;
      uint64_t TRGPOL:1;
      uint64_t TRGSEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMOD:2;
      uint64_t reservedSpace0:5;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:4;
      uint64_t TRGSRC:1;
      uint64_t TRGPOL:1;
      uint64_t TRGSEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMOD:2;
      uint64_t reservedSpace0:5;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:4;
      uint64_t TRGSRC:1;
      uint64_t TRGPOL:1;
      uint64_t TRGSEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMOD:2;
      uint64_t reservedSpace0:5;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:4;
      uint64_t TRGSRC:1;
      uint64_t TRGPOL:1;
      uint64_t TRGSEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMOD:2;
      uint64_t reservedSpace0:5;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:4;
      uint64_t TRGSRC:1;
      uint64_t TRGPOL:1;
      uint64_t TRGSEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMOD:2;
      uint64_t reservedSpace0:5;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:4;
      uint64_t TRGSRC:1;
      uint64_t TRGPOL:1;
      uint64_t TRGSEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMOD:2;
      uint64_t reservedSpace0:5;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:4;
      uint64_t TRGSRC:1;
      uint64_t TRGPOL:1;
      uint64_t TRGSEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMOD:2;
      uint64_t reservedSpace0:5;
      uint64_t PINPOL:1;
      uint64_t PINSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:4;
      uint64_t TRGSRC:1;
      uint64_t TRGPOL:1;
      uint64_t TRGSEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCTL_7;

  uint8_t res10[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TSTART:1;
      uint64_t reservedSpace1:2;
      uint64_t TSTOP:2;
      uint64_t reservedSpace2:2;
      uint64_t TIMENA:3;
      uint64_t reservedSpace3:1;
      uint64_t TIMDIS:3;
      uint64_t reservedSpace4:1;
      uint64_t TIMRST:3;
      uint64_t reservedSpace5:1;
      uint64_t TIMDEC:2;
      uint64_t reservedSpace6:2;
      uint64_t TIMOUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCFG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TSTART:1;
      uint64_t reservedSpace1:2;
      uint64_t TSTOP:2;
      uint64_t reservedSpace2:2;
      uint64_t TIMENA:3;
      uint64_t reservedSpace3:1;
      uint64_t TIMDIS:3;
      uint64_t reservedSpace4:1;
      uint64_t TIMRST:3;
      uint64_t reservedSpace5:1;
      uint64_t TIMDEC:2;
      uint64_t reservedSpace6:2;
      uint64_t TIMOUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCFG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TSTART:1;
      uint64_t reservedSpace1:2;
      uint64_t TSTOP:2;
      uint64_t reservedSpace2:2;
      uint64_t TIMENA:3;
      uint64_t reservedSpace3:1;
      uint64_t TIMDIS:3;
      uint64_t reservedSpace4:1;
      uint64_t TIMRST:3;
      uint64_t reservedSpace5:1;
      uint64_t TIMDEC:2;
      uint64_t reservedSpace6:2;
      uint64_t TIMOUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCFG_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TSTART:1;
      uint64_t reservedSpace1:2;
      uint64_t TSTOP:2;
      uint64_t reservedSpace2:2;
      uint64_t TIMENA:3;
      uint64_t reservedSpace3:1;
      uint64_t TIMDIS:3;
      uint64_t reservedSpace4:1;
      uint64_t TIMRST:3;
      uint64_t reservedSpace5:1;
      uint64_t TIMDEC:2;
      uint64_t reservedSpace6:2;
      uint64_t TIMOUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCFG_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TSTART:1;
      uint64_t reservedSpace1:2;
      uint64_t TSTOP:2;
      uint64_t reservedSpace2:2;
      uint64_t TIMENA:3;
      uint64_t reservedSpace3:1;
      uint64_t TIMDIS:3;
      uint64_t reservedSpace4:1;
      uint64_t TIMRST:3;
      uint64_t reservedSpace5:1;
      uint64_t TIMDEC:2;
      uint64_t reservedSpace6:2;
      uint64_t TIMOUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCFG_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TSTART:1;
      uint64_t reservedSpace1:2;
      uint64_t TSTOP:2;
      uint64_t reservedSpace2:2;
      uint64_t TIMENA:3;
      uint64_t reservedSpace3:1;
      uint64_t TIMDIS:3;
      uint64_t reservedSpace4:1;
      uint64_t TIMRST:3;
      uint64_t reservedSpace5:1;
      uint64_t TIMDEC:2;
      uint64_t reservedSpace6:2;
      uint64_t TIMOUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCFG_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TSTART:1;
      uint64_t reservedSpace1:2;
      uint64_t TSTOP:2;
      uint64_t reservedSpace2:2;
      uint64_t TIMENA:3;
      uint64_t reservedSpace3:1;
      uint64_t TIMDIS:3;
      uint64_t reservedSpace4:1;
      uint64_t TIMRST:3;
      uint64_t reservedSpace5:1;
      uint64_t TIMDEC:2;
      uint64_t reservedSpace6:2;
      uint64_t TIMOUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCFG_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TSTART:1;
      uint64_t reservedSpace1:2;
      uint64_t TSTOP:2;
      uint64_t reservedSpace2:2;
      uint64_t TIMENA:3;
      uint64_t reservedSpace3:1;
      uint64_t TIMDIS:3;
      uint64_t reservedSpace4:1;
      uint64_t TIMRST:3;
      uint64_t reservedSpace5:1;
      uint64_t TIMDEC:2;
      uint64_t reservedSpace6:2;
      uint64_t TIMOUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCFG_7;

  uint8_t res11[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCMP_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCMP_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCMP_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCMP_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCMP_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCMP_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCMP_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCMP_7;

  uint8_t res12[352];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNBS_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNBS_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNBS_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNBS_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNBS_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNBS_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNBS_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNBS_7;

  uint8_t res13[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFHWS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFHWS_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFHWS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFHWS_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFHWS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFHWS_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFHWS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFHWS_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFHWS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFHWS_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFHWS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFHWS_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFHWS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFHWS_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFHWS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFHWS_7;

  uint8_t res14[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNIS_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNIS_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNIS_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNIS_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNIS_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNIS_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNIS_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFNIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFNIS_7;

};

#define FLEXIO1 (*(volatile struct FLEXIO1_tag *) 0x40310000)

struct LPI2C0_tag
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
      uint64_t MTXFIFO:4;
      uint64_t reservedSpace0:4;
      uint64_t MRXFIFO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEN:1;
      uint64_t RST:1;
      uint64_t DOZEN:1;
      uint64_t DBGEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t reservedSpace0:6;
      uint64_t EPF:1;
      uint64_t SDF:1;
      uint64_t NDF:1;
      uint64_t ALF:1;
      uint64_t FEF:1;
      uint64_t PLTF:1;
      uint64_t DMF:1;
      uint64_t reservedSpace1:9;
      uint64_t MBF:1;
      uint64_t BBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t reservedSpace0:6;
      uint64_t EPIE:1;
      uint64_t SDIE:1;
      uint64_t NDIE:1;
      uint64_t ALIE:1;
      uint64_t FEIE:1;
      uint64_t PLTIE:1;
      uint64_t DMIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HREN:1;
      uint64_t HRPOL:1;
      uint64_t HRSEL:1;
      uint64_t reservedSpace0:5;
      uint64_t CIRFIFO:1;
      uint64_t RDMO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESCALE:3;
      uint64_t reservedSpace0:5;
      uint64_t AUTOSTOP:1;
      uint64_t IGNACK:1;
      uint64_t TIMECFG:1;
      uint64_t reservedSpace1:5;
      uint64_t MATCFG:3;
      uint64_t reservedSpace2:5;
      uint64_t PINCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSIDLE:12;
      uint64_t reservedSpace0:4;
      uint64_t FILTSCL:4;
      uint64_t reservedSpace1:4;
      uint64_t FILTSDA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PINLOW:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR3;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH0:8;
      uint64_t reservedSpace0:8;
      uint64_t MATCH1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKLO:6;
      uint64_t reservedSpace0:2;
      uint64_t CLKHI:6;
      uint64_t reservedSpace1:2;
      uint64_t SETHOLD:6;
      uint64_t reservedSpace2:2;
      uint64_t DATAVD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCCR0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKLO:6;
      uint64_t reservedSpace0:2;
      uint64_t CLKHI:6;
      uint64_t reservedSpace1:2;
      uint64_t SETHOLD:6;
      uint64_t reservedSpace2:2;
      uint64_t DATAVD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCCR1;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:14;
      uint64_t RXWATER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace0:13;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t CMD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTDR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t reservedSpace0:6;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRDR;

  uint8_t res6[156];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEN:1;
      uint64_t RST:1;
      uint64_t reservedSpace0:2;
      uint64_t FILTEN:1;
      uint64_t FILTDZ:1;
      uint64_t reservedSpace1:2;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t AVF:1;
      uint64_t TAF:1;
      uint64_t reservedSpace0:4;
      uint64_t RSF:1;
      uint64_t SDF:1;
      uint64_t BEF:1;
      uint64_t FEF:1;
      uint64_t AM0F:1;
      uint64_t AM1F:1;
      uint64_t GCF:1;
      uint64_t SARF:1;
      uint64_t reservedSpace1:8;
      uint64_t SBF:1;
      uint64_t BBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t AVIE:1;
      uint64_t TAIE:1;
      uint64_t reservedSpace0:4;
      uint64_t RSIE:1;
      uint64_t SDIE:1;
      uint64_t BEIE:1;
      uint64_t FEIE:1;
      uint64_t AM0IE:1;
      uint64_t AM1F:1;
      uint64_t GCIE:1;
      uint64_t SARIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
      uint64_t AVDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDER;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRSTALL:1;
      uint64_t RXSTALL:1;
      uint64_t TXDSTALL:1;
      uint64_t ACKSTALL:1;
      uint64_t reservedSpace0:4;
      uint64_t GCEN:1;
      uint64_t SAEN:1;
      uint64_t TXCFG:1;
      uint64_t RXCFG:1;
      uint64_t IGNACK:1;
      uint64_t HSMEN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADDRCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKHOLD:4;
      uint64_t reservedSpace0:4;
      uint64_t DATAVD:6;
      uint64_t reservedSpace1:2;
      uint64_t FILTSCL:4;
      uint64_t reservedSpace2:4;
      uint64_t FILTSDA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFGR2;

  uint8_t res8[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ADDR0:10;
      uint64_t reservedSpace1:6;
      uint64_t ADDR1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMR;

  uint8_t res9[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RADDR:11;
      uint64_t reservedSpace0:3;
      uint64_t ANV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SASR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAR;

  uint8_t res10[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR;

  uint8_t res11[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t reservedSpace0:6;
      uint64_t RXEMPTY:1;
      uint64_t SOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRDR;

};

#define LPI2C0 (*(volatile struct LPI2C0_tag *) 0x41033000)

struct LPI2C4_tag
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
      uint64_t MTXFIFO:4;
      uint64_t reservedSpace0:4;
      uint64_t MRXFIFO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEN:1;
      uint64_t RST:1;
      uint64_t DOZEN:1;
      uint64_t DBGEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t reservedSpace0:6;
      uint64_t EPF:1;
      uint64_t SDF:1;
      uint64_t NDF:1;
      uint64_t ALF:1;
      uint64_t FEF:1;
      uint64_t PLTF:1;
      uint64_t DMF:1;
      uint64_t reservedSpace1:9;
      uint64_t MBF:1;
      uint64_t BBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t reservedSpace0:6;
      uint64_t EPIE:1;
      uint64_t SDIE:1;
      uint64_t NDIE:1;
      uint64_t ALIE:1;
      uint64_t FEIE:1;
      uint64_t PLTIE:1;
      uint64_t DMIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HREN:1;
      uint64_t HRPOL:1;
      uint64_t HRSEL:1;
      uint64_t reservedSpace0:5;
      uint64_t CIRFIFO:1;
      uint64_t RDMO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESCALE:3;
      uint64_t reservedSpace0:5;
      uint64_t AUTOSTOP:1;
      uint64_t IGNACK:1;
      uint64_t TIMECFG:1;
      uint64_t reservedSpace1:5;
      uint64_t MATCFG:3;
      uint64_t reservedSpace2:5;
      uint64_t PINCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSIDLE:12;
      uint64_t reservedSpace0:4;
      uint64_t FILTSCL:4;
      uint64_t reservedSpace1:4;
      uint64_t FILTSDA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PINLOW:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR3;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH0:8;
      uint64_t reservedSpace0:8;
      uint64_t MATCH1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKLO:6;
      uint64_t reservedSpace0:2;
      uint64_t CLKHI:6;
      uint64_t reservedSpace1:2;
      uint64_t SETHOLD:6;
      uint64_t reservedSpace2:2;
      uint64_t DATAVD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCCR0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKLO:6;
      uint64_t reservedSpace0:2;
      uint64_t CLKHI:6;
      uint64_t reservedSpace1:2;
      uint64_t SETHOLD:6;
      uint64_t reservedSpace2:2;
      uint64_t DATAVD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCCR1;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:14;
      uint64_t RXWATER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace0:13;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t CMD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTDR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t reservedSpace0:6;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRDR;

  uint8_t res6[156];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEN:1;
      uint64_t RST:1;
      uint64_t reservedSpace0:2;
      uint64_t FILTEN:1;
      uint64_t FILTDZ:1;
      uint64_t reservedSpace1:2;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t AVF:1;
      uint64_t TAF:1;
      uint64_t reservedSpace0:4;
      uint64_t RSF:1;
      uint64_t SDF:1;
      uint64_t BEF:1;
      uint64_t FEF:1;
      uint64_t AM0F:1;
      uint64_t AM1F:1;
      uint64_t GCF:1;
      uint64_t SARF:1;
      uint64_t reservedSpace1:8;
      uint64_t SBF:1;
      uint64_t BBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t AVIE:1;
      uint64_t TAIE:1;
      uint64_t reservedSpace0:4;
      uint64_t RSIE:1;
      uint64_t SDIE:1;
      uint64_t BEIE:1;
      uint64_t FEIE:1;
      uint64_t AM0IE:1;
      uint64_t AM1F:1;
      uint64_t GCIE:1;
      uint64_t SARIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
      uint64_t AVDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDER;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRSTALL:1;
      uint64_t RXSTALL:1;
      uint64_t TXDSTALL:1;
      uint64_t ACKSTALL:1;
      uint64_t reservedSpace0:4;
      uint64_t GCEN:1;
      uint64_t SAEN:1;
      uint64_t TXCFG:1;
      uint64_t RXCFG:1;
      uint64_t IGNACK:1;
      uint64_t HSMEN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADDRCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKHOLD:4;
      uint64_t reservedSpace0:4;
      uint64_t DATAVD:6;
      uint64_t reservedSpace1:2;
      uint64_t FILTSCL:4;
      uint64_t reservedSpace2:4;
      uint64_t FILTSDA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFGR2;

  uint8_t res8[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ADDR0:10;
      uint64_t reservedSpace1:6;
      uint64_t ADDR1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMR;

  uint8_t res9[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RADDR:11;
      uint64_t reservedSpace0:3;
      uint64_t ANV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SASR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAR;

  uint8_t res10[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR;

  uint8_t res11[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t reservedSpace0:6;
      uint64_t RXEMPTY:1;
      uint64_t SOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRDR;

};

#define LPI2C4 (*(volatile struct LPI2C4_tag *) 0x402b0000)

struct LPI2C5_tag
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
      uint64_t MTXFIFO:4;
      uint64_t reservedSpace0:4;
      uint64_t MRXFIFO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEN:1;
      uint64_t RST:1;
      uint64_t DOZEN:1;
      uint64_t DBGEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t reservedSpace0:6;
      uint64_t EPF:1;
      uint64_t SDF:1;
      uint64_t NDF:1;
      uint64_t ALF:1;
      uint64_t FEF:1;
      uint64_t PLTF:1;
      uint64_t DMF:1;
      uint64_t reservedSpace1:9;
      uint64_t MBF:1;
      uint64_t BBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t reservedSpace0:6;
      uint64_t EPIE:1;
      uint64_t SDIE:1;
      uint64_t NDIE:1;
      uint64_t ALIE:1;
      uint64_t FEIE:1;
      uint64_t PLTIE:1;
      uint64_t DMIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HREN:1;
      uint64_t HRPOL:1;
      uint64_t HRSEL:1;
      uint64_t reservedSpace0:5;
      uint64_t CIRFIFO:1;
      uint64_t RDMO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESCALE:3;
      uint64_t reservedSpace0:5;
      uint64_t AUTOSTOP:1;
      uint64_t IGNACK:1;
      uint64_t TIMECFG:1;
      uint64_t reservedSpace1:5;
      uint64_t MATCFG:3;
      uint64_t reservedSpace2:5;
      uint64_t PINCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSIDLE:12;
      uint64_t reservedSpace0:4;
      uint64_t FILTSCL:4;
      uint64_t reservedSpace1:4;
      uint64_t FILTSDA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PINLOW:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR3;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH0:8;
      uint64_t reservedSpace0:8;
      uint64_t MATCH1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKLO:6;
      uint64_t reservedSpace0:2;
      uint64_t CLKHI:6;
      uint64_t reservedSpace1:2;
      uint64_t SETHOLD:6;
      uint64_t reservedSpace2:2;
      uint64_t DATAVD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCCR0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKLO:6;
      uint64_t reservedSpace0:2;
      uint64_t CLKHI:6;
      uint64_t reservedSpace1:2;
      uint64_t SETHOLD:6;
      uint64_t reservedSpace2:2;
      uint64_t DATAVD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCCR1;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:14;
      uint64_t RXWATER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace0:13;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t CMD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTDR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t reservedSpace0:6;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRDR;

  uint8_t res6[156];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEN:1;
      uint64_t RST:1;
      uint64_t reservedSpace0:2;
      uint64_t FILTEN:1;
      uint64_t FILTDZ:1;
      uint64_t reservedSpace1:2;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t AVF:1;
      uint64_t TAF:1;
      uint64_t reservedSpace0:4;
      uint64_t RSF:1;
      uint64_t SDF:1;
      uint64_t BEF:1;
      uint64_t FEF:1;
      uint64_t AM0F:1;
      uint64_t AM1F:1;
      uint64_t GCF:1;
      uint64_t SARF:1;
      uint64_t reservedSpace1:8;
      uint64_t SBF:1;
      uint64_t BBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t AVIE:1;
      uint64_t TAIE:1;
      uint64_t reservedSpace0:4;
      uint64_t RSIE:1;
      uint64_t SDIE:1;
      uint64_t BEIE:1;
      uint64_t FEIE:1;
      uint64_t AM0IE:1;
      uint64_t AM1F:1;
      uint64_t GCIE:1;
      uint64_t SARIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
      uint64_t AVDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDER;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRSTALL:1;
      uint64_t RXSTALL:1;
      uint64_t TXDSTALL:1;
      uint64_t ACKSTALL:1;
      uint64_t reservedSpace0:4;
      uint64_t GCEN:1;
      uint64_t SAEN:1;
      uint64_t TXCFG:1;
      uint64_t RXCFG:1;
      uint64_t IGNACK:1;
      uint64_t HSMEN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADDRCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKHOLD:4;
      uint64_t reservedSpace0:4;
      uint64_t DATAVD:6;
      uint64_t reservedSpace1:2;
      uint64_t FILTSCL:4;
      uint64_t reservedSpace2:4;
      uint64_t FILTSDA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFGR2;

  uint8_t res8[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ADDR0:10;
      uint64_t reservedSpace1:6;
      uint64_t ADDR1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMR;

  uint8_t res9[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RADDR:11;
      uint64_t reservedSpace0:3;
      uint64_t ANV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SASR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAR;

  uint8_t res10[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR;

  uint8_t res11[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t reservedSpace0:6;
      uint64_t RXEMPTY:1;
      uint64_t SOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRDR;

};

#define LPI2C5 (*(volatile struct LPI2C5_tag *) 0x402c0000)

struct LPI2C6_tag
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
      uint64_t MTXFIFO:4;
      uint64_t reservedSpace0:4;
      uint64_t MRXFIFO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEN:1;
      uint64_t RST:1;
      uint64_t DOZEN:1;
      uint64_t DBGEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t reservedSpace0:6;
      uint64_t EPF:1;
      uint64_t SDF:1;
      uint64_t NDF:1;
      uint64_t ALF:1;
      uint64_t FEF:1;
      uint64_t PLTF:1;
      uint64_t DMF:1;
      uint64_t reservedSpace1:9;
      uint64_t MBF:1;
      uint64_t BBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t reservedSpace0:6;
      uint64_t EPIE:1;
      uint64_t SDIE:1;
      uint64_t NDIE:1;
      uint64_t ALIE:1;
      uint64_t FEIE:1;
      uint64_t PLTIE:1;
      uint64_t DMIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HREN:1;
      uint64_t HRPOL:1;
      uint64_t HRSEL:1;
      uint64_t reservedSpace0:5;
      uint64_t CIRFIFO:1;
      uint64_t RDMO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESCALE:3;
      uint64_t reservedSpace0:5;
      uint64_t AUTOSTOP:1;
      uint64_t IGNACK:1;
      uint64_t TIMECFG:1;
      uint64_t reservedSpace1:5;
      uint64_t MATCFG:3;
      uint64_t reservedSpace2:5;
      uint64_t PINCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSIDLE:12;
      uint64_t reservedSpace0:4;
      uint64_t FILTSCL:4;
      uint64_t reservedSpace1:4;
      uint64_t FILTSDA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PINLOW:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR3;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH0:8;
      uint64_t reservedSpace0:8;
      uint64_t MATCH1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKLO:6;
      uint64_t reservedSpace0:2;
      uint64_t CLKHI:6;
      uint64_t reservedSpace1:2;
      uint64_t SETHOLD:6;
      uint64_t reservedSpace2:2;
      uint64_t DATAVD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCCR0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKLO:6;
      uint64_t reservedSpace0:2;
      uint64_t CLKHI:6;
      uint64_t reservedSpace1:2;
      uint64_t SETHOLD:6;
      uint64_t reservedSpace2:2;
      uint64_t DATAVD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCCR1;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:14;
      uint64_t RXWATER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace0:13;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t CMD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTDR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t reservedSpace0:6;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRDR;

  uint8_t res6[156];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEN:1;
      uint64_t RST:1;
      uint64_t reservedSpace0:2;
      uint64_t FILTEN:1;
      uint64_t FILTDZ:1;
      uint64_t reservedSpace1:2;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t AVF:1;
      uint64_t TAF:1;
      uint64_t reservedSpace0:4;
      uint64_t RSF:1;
      uint64_t SDF:1;
      uint64_t BEF:1;
      uint64_t FEF:1;
      uint64_t AM0F:1;
      uint64_t AM1F:1;
      uint64_t GCF:1;
      uint64_t SARF:1;
      uint64_t reservedSpace1:8;
      uint64_t SBF:1;
      uint64_t BBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t AVIE:1;
      uint64_t TAIE:1;
      uint64_t reservedSpace0:4;
      uint64_t RSIE:1;
      uint64_t SDIE:1;
      uint64_t BEIE:1;
      uint64_t FEIE:1;
      uint64_t AM0IE:1;
      uint64_t AM1F:1;
      uint64_t GCIE:1;
      uint64_t SARIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
      uint64_t AVDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDER;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRSTALL:1;
      uint64_t RXSTALL:1;
      uint64_t TXDSTALL:1;
      uint64_t ACKSTALL:1;
      uint64_t reservedSpace0:4;
      uint64_t GCEN:1;
      uint64_t SAEN:1;
      uint64_t TXCFG:1;
      uint64_t RXCFG:1;
      uint64_t IGNACK:1;
      uint64_t HSMEN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADDRCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKHOLD:4;
      uint64_t reservedSpace0:4;
      uint64_t DATAVD:6;
      uint64_t reservedSpace1:2;
      uint64_t FILTSCL:4;
      uint64_t reservedSpace2:4;
      uint64_t FILTSDA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFGR2;

  uint8_t res8[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ADDR0:10;
      uint64_t reservedSpace1:6;
      uint64_t ADDR1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMR;

  uint8_t res9[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RADDR:11;
      uint64_t reservedSpace0:3;
      uint64_t ANV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SASR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAR;

  uint8_t res10[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR;

  uint8_t res11[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t reservedSpace0:6;
      uint64_t RXEMPTY:1;
      uint64_t SOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRDR;

};

#define LPI2C6 (*(volatile struct LPI2C6_tag *) 0x40a40000)

struct LPI2C7_tag
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
      uint64_t MTXFIFO:4;
      uint64_t reservedSpace0:4;
      uint64_t MRXFIFO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEN:1;
      uint64_t RST:1;
      uint64_t DOZEN:1;
      uint64_t DBGEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t reservedSpace0:6;
      uint64_t EPF:1;
      uint64_t SDF:1;
      uint64_t NDF:1;
      uint64_t ALF:1;
      uint64_t FEF:1;
      uint64_t PLTF:1;
      uint64_t DMF:1;
      uint64_t reservedSpace1:9;
      uint64_t MBF:1;
      uint64_t BBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t reservedSpace0:6;
      uint64_t EPIE:1;
      uint64_t SDIE:1;
      uint64_t NDIE:1;
      uint64_t ALIE:1;
      uint64_t FEIE:1;
      uint64_t PLTIE:1;
      uint64_t DMIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HREN:1;
      uint64_t HRPOL:1;
      uint64_t HRSEL:1;
      uint64_t reservedSpace0:5;
      uint64_t CIRFIFO:1;
      uint64_t RDMO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESCALE:3;
      uint64_t reservedSpace0:5;
      uint64_t AUTOSTOP:1;
      uint64_t IGNACK:1;
      uint64_t TIMECFG:1;
      uint64_t reservedSpace1:5;
      uint64_t MATCFG:3;
      uint64_t reservedSpace2:5;
      uint64_t PINCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSIDLE:12;
      uint64_t reservedSpace0:4;
      uint64_t FILTSCL:4;
      uint64_t reservedSpace1:4;
      uint64_t FILTSDA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PINLOW:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR3;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH0:8;
      uint64_t reservedSpace0:8;
      uint64_t MATCH1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKLO:6;
      uint64_t reservedSpace0:2;
      uint64_t CLKHI:6;
      uint64_t reservedSpace1:2;
      uint64_t SETHOLD:6;
      uint64_t reservedSpace2:2;
      uint64_t DATAVD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCCR0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKLO:6;
      uint64_t reservedSpace0:2;
      uint64_t CLKHI:6;
      uint64_t reservedSpace1:2;
      uint64_t SETHOLD:6;
      uint64_t reservedSpace2:2;
      uint64_t DATAVD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCCR1;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:14;
      uint64_t RXWATER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace0:13;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t CMD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTDR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t reservedSpace0:6;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRDR;

  uint8_t res6[156];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEN:1;
      uint64_t RST:1;
      uint64_t reservedSpace0:2;
      uint64_t FILTEN:1;
      uint64_t FILTDZ:1;
      uint64_t reservedSpace1:2;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t AVF:1;
      uint64_t TAF:1;
      uint64_t reservedSpace0:4;
      uint64_t RSF:1;
      uint64_t SDF:1;
      uint64_t BEF:1;
      uint64_t FEF:1;
      uint64_t AM0F:1;
      uint64_t AM1F:1;
      uint64_t GCF:1;
      uint64_t SARF:1;
      uint64_t reservedSpace1:8;
      uint64_t SBF:1;
      uint64_t BBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t AVIE:1;
      uint64_t TAIE:1;
      uint64_t reservedSpace0:4;
      uint64_t RSIE:1;
      uint64_t SDIE:1;
      uint64_t BEIE:1;
      uint64_t FEIE:1;
      uint64_t AM0IE:1;
      uint64_t AM1F:1;
      uint64_t GCIE:1;
      uint64_t SARIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
      uint64_t AVDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDER;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRSTALL:1;
      uint64_t RXSTALL:1;
      uint64_t TXDSTALL:1;
      uint64_t ACKSTALL:1;
      uint64_t reservedSpace0:4;
      uint64_t GCEN:1;
      uint64_t SAEN:1;
      uint64_t TXCFG:1;
      uint64_t RXCFG:1;
      uint64_t IGNACK:1;
      uint64_t HSMEN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADDRCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKHOLD:4;
      uint64_t reservedSpace0:4;
      uint64_t DATAVD:6;
      uint64_t reservedSpace1:2;
      uint64_t FILTSCL:4;
      uint64_t reservedSpace2:4;
      uint64_t FILTSDA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFGR2;

  uint8_t res8[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ADDR0:10;
      uint64_t reservedSpace1:6;
      uint64_t ADDR1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMR;

  uint8_t res9[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RADDR:11;
      uint64_t reservedSpace0:3;
      uint64_t ANV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SASR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAR;

  uint8_t res10[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR;

  uint8_t res11[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t reservedSpace0:6;
      uint64_t RXEMPTY:1;
      uint64_t SOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRDR;

};

#define LPI2C7 (*(volatile struct LPI2C7_tag *) 0x40a50000)

struct LPI2C1_tag
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
      uint64_t MTXFIFO:4;
      uint64_t reservedSpace0:4;
      uint64_t MRXFIFO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEN:1;
      uint64_t RST:1;
      uint64_t DOZEN:1;
      uint64_t DBGEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t reservedSpace0:6;
      uint64_t EPF:1;
      uint64_t SDF:1;
      uint64_t NDF:1;
      uint64_t ALF:1;
      uint64_t FEF:1;
      uint64_t PLTF:1;
      uint64_t DMF:1;
      uint64_t reservedSpace1:9;
      uint64_t MBF:1;
      uint64_t BBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t reservedSpace0:6;
      uint64_t EPIE:1;
      uint64_t SDIE:1;
      uint64_t NDIE:1;
      uint64_t ALIE:1;
      uint64_t FEIE:1;
      uint64_t PLTIE:1;
      uint64_t DMIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HREN:1;
      uint64_t HRPOL:1;
      uint64_t HRSEL:1;
      uint64_t reservedSpace0:5;
      uint64_t CIRFIFO:1;
      uint64_t RDMO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESCALE:3;
      uint64_t reservedSpace0:5;
      uint64_t AUTOSTOP:1;
      uint64_t IGNACK:1;
      uint64_t TIMECFG:1;
      uint64_t reservedSpace1:5;
      uint64_t MATCFG:3;
      uint64_t reservedSpace2:5;
      uint64_t PINCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSIDLE:12;
      uint64_t reservedSpace0:4;
      uint64_t FILTSCL:4;
      uint64_t reservedSpace1:4;
      uint64_t FILTSDA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PINLOW:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR3;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH0:8;
      uint64_t reservedSpace0:8;
      uint64_t MATCH1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKLO:6;
      uint64_t reservedSpace0:2;
      uint64_t CLKHI:6;
      uint64_t reservedSpace1:2;
      uint64_t SETHOLD:6;
      uint64_t reservedSpace2:2;
      uint64_t DATAVD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCCR0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKLO:6;
      uint64_t reservedSpace0:2;
      uint64_t CLKHI:6;
      uint64_t reservedSpace1:2;
      uint64_t SETHOLD:6;
      uint64_t reservedSpace2:2;
      uint64_t DATAVD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCCR1;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:14;
      uint64_t RXWATER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace0:13;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t CMD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTDR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t reservedSpace0:6;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRDR;

  uint8_t res6[156];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEN:1;
      uint64_t RST:1;
      uint64_t reservedSpace0:2;
      uint64_t FILTEN:1;
      uint64_t FILTDZ:1;
      uint64_t reservedSpace1:2;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t AVF:1;
      uint64_t TAF:1;
      uint64_t reservedSpace0:4;
      uint64_t RSF:1;
      uint64_t SDF:1;
      uint64_t BEF:1;
      uint64_t FEF:1;
      uint64_t AM0F:1;
      uint64_t AM1F:1;
      uint64_t GCF:1;
      uint64_t SARF:1;
      uint64_t reservedSpace1:8;
      uint64_t SBF:1;
      uint64_t BBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t AVIE:1;
      uint64_t TAIE:1;
      uint64_t reservedSpace0:4;
      uint64_t RSIE:1;
      uint64_t SDIE:1;
      uint64_t BEIE:1;
      uint64_t FEIE:1;
      uint64_t AM0IE:1;
      uint64_t AM1F:1;
      uint64_t GCIE:1;
      uint64_t SARIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
      uint64_t AVDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDER;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRSTALL:1;
      uint64_t RXSTALL:1;
      uint64_t TXDSTALL:1;
      uint64_t ACKSTALL:1;
      uint64_t reservedSpace0:4;
      uint64_t GCEN:1;
      uint64_t SAEN:1;
      uint64_t TXCFG:1;
      uint64_t RXCFG:1;
      uint64_t IGNACK:1;
      uint64_t HSMEN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADDRCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKHOLD:4;
      uint64_t reservedSpace0:4;
      uint64_t DATAVD:6;
      uint64_t reservedSpace1:2;
      uint64_t FILTSCL:4;
      uint64_t reservedSpace2:4;
      uint64_t FILTSDA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFGR2;

  uint8_t res8[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ADDR0:10;
      uint64_t reservedSpace1:6;
      uint64_t ADDR1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMR;

  uint8_t res9[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RADDR:11;
      uint64_t reservedSpace0:3;
      uint64_t ANV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SASR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAR;

  uint8_t res10[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR;

  uint8_t res11[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t reservedSpace0:6;
      uint64_t RXEMPTY:1;
      uint64_t SOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRDR;

};

#define LPI2C1 (*(volatile struct LPI2C1_tag *) 0x41034000)

struct LPI2C2_tag
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
      uint64_t MTXFIFO:4;
      uint64_t reservedSpace0:4;
      uint64_t MRXFIFO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEN:1;
      uint64_t RST:1;
      uint64_t DOZEN:1;
      uint64_t DBGEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t reservedSpace0:6;
      uint64_t EPF:1;
      uint64_t SDF:1;
      uint64_t NDF:1;
      uint64_t ALF:1;
      uint64_t FEF:1;
      uint64_t PLTF:1;
      uint64_t DMF:1;
      uint64_t reservedSpace1:9;
      uint64_t MBF:1;
      uint64_t BBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t reservedSpace0:6;
      uint64_t EPIE:1;
      uint64_t SDIE:1;
      uint64_t NDIE:1;
      uint64_t ALIE:1;
      uint64_t FEIE:1;
      uint64_t PLTIE:1;
      uint64_t DMIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HREN:1;
      uint64_t HRPOL:1;
      uint64_t HRSEL:1;
      uint64_t reservedSpace0:5;
      uint64_t CIRFIFO:1;
      uint64_t RDMO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESCALE:3;
      uint64_t reservedSpace0:5;
      uint64_t AUTOSTOP:1;
      uint64_t IGNACK:1;
      uint64_t TIMECFG:1;
      uint64_t reservedSpace1:5;
      uint64_t MATCFG:3;
      uint64_t reservedSpace2:5;
      uint64_t PINCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSIDLE:12;
      uint64_t reservedSpace0:4;
      uint64_t FILTSCL:4;
      uint64_t reservedSpace1:4;
      uint64_t FILTSDA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PINLOW:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR3;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH0:8;
      uint64_t reservedSpace0:8;
      uint64_t MATCH1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKLO:6;
      uint64_t reservedSpace0:2;
      uint64_t CLKHI:6;
      uint64_t reservedSpace1:2;
      uint64_t SETHOLD:6;
      uint64_t reservedSpace2:2;
      uint64_t DATAVD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCCR0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKLO:6;
      uint64_t reservedSpace0:2;
      uint64_t CLKHI:6;
      uint64_t reservedSpace1:2;
      uint64_t SETHOLD:6;
      uint64_t reservedSpace2:2;
      uint64_t DATAVD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCCR1;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:14;
      uint64_t RXWATER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace0:13;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t CMD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTDR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t reservedSpace0:6;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRDR;

  uint8_t res6[156];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEN:1;
      uint64_t RST:1;
      uint64_t reservedSpace0:2;
      uint64_t FILTEN:1;
      uint64_t FILTDZ:1;
      uint64_t reservedSpace1:2;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t AVF:1;
      uint64_t TAF:1;
      uint64_t reservedSpace0:4;
      uint64_t RSF:1;
      uint64_t SDF:1;
      uint64_t BEF:1;
      uint64_t FEF:1;
      uint64_t AM0F:1;
      uint64_t AM1F:1;
      uint64_t GCF:1;
      uint64_t SARF:1;
      uint64_t reservedSpace1:8;
      uint64_t SBF:1;
      uint64_t BBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t AVIE:1;
      uint64_t TAIE:1;
      uint64_t reservedSpace0:4;
      uint64_t RSIE:1;
      uint64_t SDIE:1;
      uint64_t BEIE:1;
      uint64_t FEIE:1;
      uint64_t AM0IE:1;
      uint64_t AM1F:1;
      uint64_t GCIE:1;
      uint64_t SARIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
      uint64_t AVDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDER;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRSTALL:1;
      uint64_t RXSTALL:1;
      uint64_t TXDSTALL:1;
      uint64_t ACKSTALL:1;
      uint64_t reservedSpace0:4;
      uint64_t GCEN:1;
      uint64_t SAEN:1;
      uint64_t TXCFG:1;
      uint64_t RXCFG:1;
      uint64_t IGNACK:1;
      uint64_t HSMEN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADDRCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKHOLD:4;
      uint64_t reservedSpace0:4;
      uint64_t DATAVD:6;
      uint64_t reservedSpace1:2;
      uint64_t FILTSCL:4;
      uint64_t reservedSpace2:4;
      uint64_t FILTSDA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFGR2;

  uint8_t res8[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ADDR0:10;
      uint64_t reservedSpace1:6;
      uint64_t ADDR1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMR;

  uint8_t res9[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RADDR:11;
      uint64_t reservedSpace0:3;
      uint64_t ANV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SASR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAR;

  uint8_t res10[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR;

  uint8_t res11[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t reservedSpace0:6;
      uint64_t RXEMPTY:1;
      uint64_t SOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRDR;

};

#define LPI2C2 (*(volatile struct LPI2C2_tag *) 0x41035000)

struct LPI2C3_tag
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
      uint64_t MTXFIFO:4;
      uint64_t reservedSpace0:4;
      uint64_t MRXFIFO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEN:1;
      uint64_t RST:1;
      uint64_t DOZEN:1;
      uint64_t DBGEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t reservedSpace0:6;
      uint64_t EPF:1;
      uint64_t SDF:1;
      uint64_t NDF:1;
      uint64_t ALF:1;
      uint64_t FEF:1;
      uint64_t PLTF:1;
      uint64_t DMF:1;
      uint64_t reservedSpace1:9;
      uint64_t MBF:1;
      uint64_t BBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t reservedSpace0:6;
      uint64_t EPIE:1;
      uint64_t SDIE:1;
      uint64_t NDIE:1;
      uint64_t ALIE:1;
      uint64_t FEIE:1;
      uint64_t PLTIE:1;
      uint64_t DMIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HREN:1;
      uint64_t HRPOL:1;
      uint64_t HRSEL:1;
      uint64_t reservedSpace0:5;
      uint64_t CIRFIFO:1;
      uint64_t RDMO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESCALE:3;
      uint64_t reservedSpace0:5;
      uint64_t AUTOSTOP:1;
      uint64_t IGNACK:1;
      uint64_t TIMECFG:1;
      uint64_t reservedSpace1:5;
      uint64_t MATCFG:3;
      uint64_t reservedSpace2:5;
      uint64_t PINCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSIDLE:12;
      uint64_t reservedSpace0:4;
      uint64_t FILTSCL:4;
      uint64_t reservedSpace1:4;
      uint64_t FILTSDA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PINLOW:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR3;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH0:8;
      uint64_t reservedSpace0:8;
      uint64_t MATCH1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKLO:6;
      uint64_t reservedSpace0:2;
      uint64_t CLKHI:6;
      uint64_t reservedSpace1:2;
      uint64_t SETHOLD:6;
      uint64_t reservedSpace2:2;
      uint64_t DATAVD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCCR0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKLO:6;
      uint64_t reservedSpace0:2;
      uint64_t CLKHI:6;
      uint64_t reservedSpace1:2;
      uint64_t SETHOLD:6;
      uint64_t reservedSpace2:2;
      uint64_t DATAVD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCCR1;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:14;
      uint64_t RXWATER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace0:13;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t CMD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTDR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t reservedSpace0:6;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRDR;

  uint8_t res6[156];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEN:1;
      uint64_t RST:1;
      uint64_t reservedSpace0:2;
      uint64_t FILTEN:1;
      uint64_t FILTDZ:1;
      uint64_t reservedSpace1:2;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t AVF:1;
      uint64_t TAF:1;
      uint64_t reservedSpace0:4;
      uint64_t RSF:1;
      uint64_t SDF:1;
      uint64_t BEF:1;
      uint64_t FEF:1;
      uint64_t AM0F:1;
      uint64_t AM1F:1;
      uint64_t GCF:1;
      uint64_t SARF:1;
      uint64_t reservedSpace1:8;
      uint64_t SBF:1;
      uint64_t BBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t AVIE:1;
      uint64_t TAIE:1;
      uint64_t reservedSpace0:4;
      uint64_t RSIE:1;
      uint64_t SDIE:1;
      uint64_t BEIE:1;
      uint64_t FEIE:1;
      uint64_t AM0IE:1;
      uint64_t AM1F:1;
      uint64_t GCIE:1;
      uint64_t SARIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
      uint64_t AVDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDER;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRSTALL:1;
      uint64_t RXSTALL:1;
      uint64_t TXDSTALL:1;
      uint64_t ACKSTALL:1;
      uint64_t reservedSpace0:4;
      uint64_t GCEN:1;
      uint64_t SAEN:1;
      uint64_t TXCFG:1;
      uint64_t RXCFG:1;
      uint64_t IGNACK:1;
      uint64_t HSMEN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADDRCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKHOLD:4;
      uint64_t reservedSpace0:4;
      uint64_t DATAVD:6;
      uint64_t reservedSpace1:2;
      uint64_t FILTSCL:4;
      uint64_t reservedSpace2:4;
      uint64_t FILTSDA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFGR2;

  uint8_t res8[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ADDR0:10;
      uint64_t reservedSpace1:6;
      uint64_t ADDR1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMR;

  uint8_t res9[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RADDR:11;
      uint64_t reservedSpace0:3;
      uint64_t ANV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SASR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAR;

  uint8_t res10[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR;

  uint8_t res11[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t reservedSpace0:6;
      uint64_t RXEMPTY:1;
      uint64_t SOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRDR;

};

#define LPI2C3 (*(volatile struct LPI2C3_tag *) 0x41036000)

struct I2S0_tag
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
      uint64_t DATALINE:4;
      uint64_t reservedSpace0:4;
      uint64_t FIFO:4;
      uint64_t reservedSpace1:4;
      uint64_t FRAME:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRDE:1;
      uint64_t FWDE:1;
      uint64_t reservedSpace0:6;
      uint64_t FRIE:1;
      uint64_t FWIE:1;
      uint64_t FEIE:1;
      uint64_t SEIE:1;
      uint64_t WSIE:1;
      uint64_t reservedSpace1:3;
      uint64_t FRF:1;
      uint64_t FWF:1;
      uint64_t FEF:1;
      uint64_t SEF:1;
      uint64_t WSF:1;
      uint64_t reservedSpace2:3;
      uint64_t SR:1;
      uint64_t FR:1;
      uint64_t reservedSpace3:2;
      uint64_t BCE:1;
      uint64_t DBGE:1;
      uint64_t STOPE:1;
      uint64_t TE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:16;
      uint64_t BCD:1;
      uint64_t BCP:1;
      uint64_t MSEL:2;
      uint64_t BCI:1;
      uint64_t BCS:1;
      uint64_t SYNC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDFL:5;
      uint64_t reservedSpace0:11;
      uint64_t TCE:2;
      uint64_t reservedSpace1:6;
      uint64_t CFR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSD:1;
      uint64_t FSP:1;
      uint64_t ONDEM:1;
      uint64_t FSE:1;
      uint64_t MF:1;
      uint64_t CHMOD:1;
      uint64_t reservedSpace0:2;
      uint64_t SYWD:5;
      uint64_t reservedSpace1:3;
      uint64_t FRSZ:5;
      uint64_t reservedSpace2:3;
      uint64_t FPACK:2;
      uint64_t FCOMB:2;
      uint64_t FCONT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t FBT:5;
      uint64_t reservedSpace1:3;
      uint64_t W0W:5;
      uint64_t reservedSpace2:3;
      uint64_t WNW:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR_1;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFP:5;
      uint64_t reservedSpace0:11;
      uint64_t WFP:5;
      uint64_t reservedSpace1:10;
      uint64_t WCP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFP:5;
      uint64_t reservedSpace0:11;
      uint64_t WFP:5;
      uint64_t reservedSpace1:10;
      uint64_t WCP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFR_1;

  uint8_t res1[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TWM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMR;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRDE:1;
      uint64_t FWDE:1;
      uint64_t reservedSpace0:6;
      uint64_t FRIE:1;
      uint64_t FWIE:1;
      uint64_t FEIE:1;
      uint64_t SEIE:1;
      uint64_t WSIE:1;
      uint64_t reservedSpace1:3;
      uint64_t FRF:1;
      uint64_t FWF:1;
      uint64_t FEF:1;
      uint64_t SEF:1;
      uint64_t WSF:1;
      uint64_t reservedSpace2:3;
      uint64_t SR:1;
      uint64_t FR:1;
      uint64_t reservedSpace3:2;
      uint64_t BCE:1;
      uint64_t DBGE:1;
      uint64_t STOPE:1;
      uint64_t RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:16;
      uint64_t BCD:1;
      uint64_t BCP:1;
      uint64_t MSEL:2;
      uint64_t BCI:1;
      uint64_t BCS:1;
      uint64_t SYNC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDFL:5;
      uint64_t reservedSpace0:11;
      uint64_t RCE:2;
      uint64_t reservedSpace1:6;
      uint64_t CFR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSD:1;
      uint64_t FSP:1;
      uint64_t ONDEM:1;
      uint64_t FSE:1;
      uint64_t MF:1;
      uint64_t reservedSpace0:3;
      uint64_t SYWD:5;
      uint64_t reservedSpace1:3;
      uint64_t FRSZ:5;
      uint64_t reservedSpace2:3;
      uint64_t FPACK:2;
      uint64_t FCOMB:2;
      uint64_t FCONT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t FBT:5;
      uint64_t reservedSpace1:3;
      uint64_t W0W:5;
      uint64_t reservedSpace2:3;
      uint64_t WNW:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR_1;

  uint8_t res3[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFP:5;
      uint64_t reservedSpace0:10;
      uint64_t RCP:1;
      uint64_t WFP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFP:5;
      uint64_t reservedSpace0:10;
      uint64_t RCP:1;
      uint64_t WFP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFR_1;

  uint8_t res4[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RWM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMR;

};

#define I2S0 (*(volatile struct I2S0_tag *) 0x41037000)

struct I2S1_tag
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
      uint64_t DATALINE:4;
      uint64_t reservedSpace0:4;
      uint64_t FIFO:4;
      uint64_t reservedSpace1:4;
      uint64_t FRAME:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRDE:1;
      uint64_t FWDE:1;
      uint64_t reservedSpace0:6;
      uint64_t FRIE:1;
      uint64_t FWIE:1;
      uint64_t FEIE:1;
      uint64_t SEIE:1;
      uint64_t WSIE:1;
      uint64_t reservedSpace1:3;
      uint64_t FRF:1;
      uint64_t FWF:1;
      uint64_t FEF:1;
      uint64_t SEF:1;
      uint64_t WSF:1;
      uint64_t reservedSpace2:3;
      uint64_t SR:1;
      uint64_t FR:1;
      uint64_t reservedSpace3:2;
      uint64_t BCE:1;
      uint64_t DBGE:1;
      uint64_t STOPE:1;
      uint64_t TE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:16;
      uint64_t BCD:1;
      uint64_t BCP:1;
      uint64_t MSEL:2;
      uint64_t BCI:1;
      uint64_t BCS:1;
      uint64_t SYNC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDFL:5;
      uint64_t reservedSpace0:11;
      uint64_t TCE:2;
      uint64_t reservedSpace1:6;
      uint64_t CFR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSD:1;
      uint64_t FSP:1;
      uint64_t ONDEM:1;
      uint64_t FSE:1;
      uint64_t MF:1;
      uint64_t CHMOD:1;
      uint64_t reservedSpace0:2;
      uint64_t SYWD:5;
      uint64_t reservedSpace1:3;
      uint64_t FRSZ:5;
      uint64_t reservedSpace2:3;
      uint64_t FPACK:2;
      uint64_t FCOMB:2;
      uint64_t FCONT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t FBT:5;
      uint64_t reservedSpace1:3;
      uint64_t W0W:5;
      uint64_t reservedSpace2:3;
      uint64_t WNW:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR_1;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFP:5;
      uint64_t reservedSpace0:11;
      uint64_t WFP:5;
      uint64_t reservedSpace1:10;
      uint64_t WCP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFP:5;
      uint64_t reservedSpace0:11;
      uint64_t WFP:5;
      uint64_t reservedSpace1:10;
      uint64_t WCP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFR_1;

  uint8_t res1[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TWM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMR;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRDE:1;
      uint64_t FWDE:1;
      uint64_t reservedSpace0:6;
      uint64_t FRIE:1;
      uint64_t FWIE:1;
      uint64_t FEIE:1;
      uint64_t SEIE:1;
      uint64_t WSIE:1;
      uint64_t reservedSpace1:3;
      uint64_t FRF:1;
      uint64_t FWF:1;
      uint64_t FEF:1;
      uint64_t SEF:1;
      uint64_t WSF:1;
      uint64_t reservedSpace2:3;
      uint64_t SR:1;
      uint64_t FR:1;
      uint64_t reservedSpace3:2;
      uint64_t BCE:1;
      uint64_t DBGE:1;
      uint64_t STOPE:1;
      uint64_t RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:16;
      uint64_t BCD:1;
      uint64_t BCP:1;
      uint64_t MSEL:2;
      uint64_t BCI:1;
      uint64_t BCS:1;
      uint64_t SYNC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDFL:5;
      uint64_t reservedSpace0:11;
      uint64_t RCE:2;
      uint64_t reservedSpace1:6;
      uint64_t CFR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSD:1;
      uint64_t FSP:1;
      uint64_t ONDEM:1;
      uint64_t FSE:1;
      uint64_t MF:1;
      uint64_t reservedSpace0:3;
      uint64_t SYWD:5;
      uint64_t reservedSpace1:3;
      uint64_t FRSZ:5;
      uint64_t reservedSpace2:3;
      uint64_t FPACK:2;
      uint64_t FCOMB:2;
      uint64_t FCONT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t FBT:5;
      uint64_t reservedSpace1:3;
      uint64_t W0W:5;
      uint64_t reservedSpace2:3;
      uint64_t WNW:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR_1;

  uint8_t res3[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFP:5;
      uint64_t reservedSpace0:10;
      uint64_t RCP:1;
      uint64_t WFP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFP:5;
      uint64_t reservedSpace0:10;
      uint64_t RCP:1;
      uint64_t WFP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFR_1;

  uint8_t res4[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RWM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMR;

};

#define I2S1 (*(volatile struct I2S1_tag *) 0x410aa000)

struct LPSPI0_tag
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
      uint64_t TXFIFO:8;
      uint64_t RXFIFO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEN:1;
      uint64_t RST:1;
      uint64_t DOZEN:1;
      uint64_t DBGEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t reservedSpace0:6;
      uint64_t WCF:1;
      uint64_t FCF:1;
      uint64_t TCF:1;
      uint64_t TEF:1;
      uint64_t REF:1;
      uint64_t DMF:1;
      uint64_t reservedSpace1:10;
      uint64_t MBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t reservedSpace0:6;
      uint64_t WCIE:1;
      uint64_t FCIE:1;
      uint64_t TCIE:1;
      uint64_t TEIE:1;
      uint64_t REIE:1;
      uint64_t DMIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
      uint64_t reservedSpace0:7;
      uint64_t FCDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HREN:1;
      uint64_t HRPOL:1;
      uint64_t HRSEL:1;
      uint64_t reservedSpace0:5;
      uint64_t CIRFIFO:1;
      uint64_t RDMO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER:1;
      uint64_t SAMPLE:1;
      uint64_t AUTOPCS:1;
      uint64_t NOSTALL:1;
      uint64_t reservedSpace0:4;
      uint64_t PCSPOL:4;
      uint64_t reservedSpace1:4;
      uint64_t MATCFG:3;
      uint64_t reservedSpace2:5;
      uint64_t PINCFG:2;
      uint64_t OUTCFG:1;
      uint64_t PCSCFG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR1;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMR1;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCKDIV:8;
      uint64_t DBT:8;
      uint64_t PCSSCK:8;
      uint64_t SCKPCS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  uint8_t res3[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:14;
      uint64_t RXWATER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace0:13;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAMESZ:12;
      uint64_t reservedSpace0:4;
      uint64_t WIDTH:2;
      uint64_t TXMSK:1;
      uint64_t RXMSK:1;
      uint64_t CONTC:1;
      uint64_t CONT:1;
      uint64_t BYSW:1;
      uint64_t LSBF:1;
      uint64_t PCS:2;
      uint64_t reservedSpace1:1;
      uint64_t PRESCALE:3;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOF:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

};

#define LPSPI0 (*(volatile struct LPSPI0_tag *) 0x41038000)

struct LPSPI2_tag
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
      uint64_t TXFIFO:8;
      uint64_t RXFIFO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEN:1;
      uint64_t RST:1;
      uint64_t DOZEN:1;
      uint64_t DBGEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t reservedSpace0:6;
      uint64_t WCF:1;
      uint64_t FCF:1;
      uint64_t TCF:1;
      uint64_t TEF:1;
      uint64_t REF:1;
      uint64_t DMF:1;
      uint64_t reservedSpace1:10;
      uint64_t MBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t reservedSpace0:6;
      uint64_t WCIE:1;
      uint64_t FCIE:1;
      uint64_t TCIE:1;
      uint64_t TEIE:1;
      uint64_t REIE:1;
      uint64_t DMIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
      uint64_t reservedSpace0:7;
      uint64_t FCDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HREN:1;
      uint64_t HRPOL:1;
      uint64_t HRSEL:1;
      uint64_t reservedSpace0:5;
      uint64_t CIRFIFO:1;
      uint64_t RDMO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER:1;
      uint64_t SAMPLE:1;
      uint64_t AUTOPCS:1;
      uint64_t NOSTALL:1;
      uint64_t reservedSpace0:4;
      uint64_t PCSPOL:4;
      uint64_t reservedSpace1:4;
      uint64_t MATCFG:3;
      uint64_t reservedSpace2:5;
      uint64_t PINCFG:2;
      uint64_t OUTCFG:1;
      uint64_t PCSCFG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR1;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMR1;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCKDIV:8;
      uint64_t DBT:8;
      uint64_t PCSSCK:8;
      uint64_t SCKPCS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  uint8_t res3[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:14;
      uint64_t RXWATER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace0:13;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAMESZ:12;
      uint64_t reservedSpace0:4;
      uint64_t WIDTH:2;
      uint64_t TXMSK:1;
      uint64_t RXMSK:1;
      uint64_t CONTC:1;
      uint64_t CONT:1;
      uint64_t BYSW:1;
      uint64_t LSBF:1;
      uint64_t PCS:2;
      uint64_t reservedSpace1:1;
      uint64_t PRESCALE:3;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOF:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

};

#define LPSPI2 (*(volatile struct LPSPI2_tag *) 0x40290000)

struct LPSPI3_tag
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
      uint64_t TXFIFO:8;
      uint64_t RXFIFO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEN:1;
      uint64_t RST:1;
      uint64_t DOZEN:1;
      uint64_t DBGEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t reservedSpace0:6;
      uint64_t WCF:1;
      uint64_t FCF:1;
      uint64_t TCF:1;
      uint64_t TEF:1;
      uint64_t REF:1;
      uint64_t DMF:1;
      uint64_t reservedSpace1:10;
      uint64_t MBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t reservedSpace0:6;
      uint64_t WCIE:1;
      uint64_t FCIE:1;
      uint64_t TCIE:1;
      uint64_t TEIE:1;
      uint64_t REIE:1;
      uint64_t DMIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
      uint64_t reservedSpace0:7;
      uint64_t FCDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HREN:1;
      uint64_t HRPOL:1;
      uint64_t HRSEL:1;
      uint64_t reservedSpace0:5;
      uint64_t CIRFIFO:1;
      uint64_t RDMO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER:1;
      uint64_t SAMPLE:1;
      uint64_t AUTOPCS:1;
      uint64_t NOSTALL:1;
      uint64_t reservedSpace0:4;
      uint64_t PCSPOL:4;
      uint64_t reservedSpace1:4;
      uint64_t MATCFG:3;
      uint64_t reservedSpace2:5;
      uint64_t PINCFG:2;
      uint64_t OUTCFG:1;
      uint64_t PCSCFG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR1;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMR1;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCKDIV:8;
      uint64_t DBT:8;
      uint64_t PCSSCK:8;
      uint64_t SCKPCS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  uint8_t res3[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:14;
      uint64_t RXWATER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace0:13;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAMESZ:12;
      uint64_t reservedSpace0:4;
      uint64_t WIDTH:2;
      uint64_t TXMSK:1;
      uint64_t RXMSK:1;
      uint64_t CONTC:1;
      uint64_t CONT:1;
      uint64_t BYSW:1;
      uint64_t LSBF:1;
      uint64_t PCS:2;
      uint64_t reservedSpace1:1;
      uint64_t PRESCALE:3;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOF:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

};

#define LPSPI3 (*(volatile struct LPSPI3_tag *) 0x402a0000)

struct LPSPI1_tag
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
      uint64_t TXFIFO:8;
      uint64_t RXFIFO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEN:1;
      uint64_t RST:1;
      uint64_t DOZEN:1;
      uint64_t DBGEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t reservedSpace0:6;
      uint64_t WCF:1;
      uint64_t FCF:1;
      uint64_t TCF:1;
      uint64_t TEF:1;
      uint64_t REF:1;
      uint64_t DMF:1;
      uint64_t reservedSpace1:10;
      uint64_t MBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t reservedSpace0:6;
      uint64_t WCIE:1;
      uint64_t FCIE:1;
      uint64_t TCIE:1;
      uint64_t TEIE:1;
      uint64_t REIE:1;
      uint64_t DMIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
      uint64_t reservedSpace0:7;
      uint64_t FCDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HREN:1;
      uint64_t HRPOL:1;
      uint64_t HRSEL:1;
      uint64_t reservedSpace0:5;
      uint64_t CIRFIFO:1;
      uint64_t RDMO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER:1;
      uint64_t SAMPLE:1;
      uint64_t AUTOPCS:1;
      uint64_t NOSTALL:1;
      uint64_t reservedSpace0:4;
      uint64_t PCSPOL:4;
      uint64_t reservedSpace1:4;
      uint64_t MATCFG:3;
      uint64_t reservedSpace2:5;
      uint64_t PINCFG:2;
      uint64_t OUTCFG:1;
      uint64_t PCSCFG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR1;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMR1;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCKDIV:8;
      uint64_t DBT:8;
      uint64_t PCSSCK:8;
      uint64_t SCKPCS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  uint8_t res3[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:14;
      uint64_t RXWATER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace0:13;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAMESZ:12;
      uint64_t reservedSpace0:4;
      uint64_t WIDTH:2;
      uint64_t TXMSK:1;
      uint64_t RXMSK:1;
      uint64_t CONTC:1;
      uint64_t CONT:1;
      uint64_t BYSW:1;
      uint64_t LSBF:1;
      uint64_t PCS:2;
      uint64_t reservedSpace1:1;
      uint64_t PRESCALE:3;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOF:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

};

#define LPSPI1 (*(volatile struct LPSPI1_tag *) 0x41039000)

struct LPUART0_tag
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
      uint64_t TXFIFO:8;
      uint64_t RXFIFO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBR:13;
      uint64_t SBNS:1;
      uint64_t RXEDGIE:1;
      uint64_t LBKDIE:1;
      uint64_t RESYNCDIS:1;
      uint64_t BOTHEDGE:1;
      uint64_t MATCFG:2;
      uint64_t RIDMAE:1;
      uint64_t RDMAE:1;
      uint64_t reservedSpace0:1;
      uint64_t TDMAE:1;
      uint64_t OSR:5;
      uint64_t M10:1;
      uint64_t MAEN2:1;
      uint64_t MAEN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t MA2F:1;
      uint64_t MA1F:1;
      uint64_t PF:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t OR:1;
      uint64_t IDLE:1;
      uint64_t RDRF:1;
      uint64_t TC:1;
      uint64_t TDRE:1;
      uint64_t RAF:1;
      uint64_t LBKDE:1;
      uint64_t BRK13:1;
      uint64_t RWUID:1;
      uint64_t RXINV:1;
      uint64_t MSBF:1;
      uint64_t RXEDGIF:1;
      uint64_t LBKDIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PT:1;
      uint64_t PE:1;
      uint64_t ILT:1;
      uint64_t WAKE:1;
      uint64_t M:1;
      uint64_t RSRC:1;
      uint64_t DOZEEN:1;
      uint64_t LOOPS:1;
      uint64_t IDLECFG:3;
      uint64_t M7:1;
      uint64_t reservedSpace0:2;
      uint64_t MA2IE:1;
      uint64_t MA1IE:1;
      uint64_t SBK:1;
      uint64_t RWU:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t ILIE:1;
      uint64_t RIE:1;
      uint64_t TCIE:1;
      uint64_t TIE:1;
      uint64_t PEIE:1;
      uint64_t FEIE:1;
      uint64_t NEIE:1;
      uint64_t ORIE:1;
      uint64_t TXINV:1;
      uint64_t TXDIR:1;
      uint64_t R9T8:1;
      uint64_t R8T9:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R0T0:1;
      uint64_t R1T1:1;
      uint64_t R2T2:1;
      uint64_t R3T3:1;
      uint64_t R4T4:1;
      uint64_t R5T5:1;
      uint64_t R6T6:1;
      uint64_t R7T7:1;
      uint64_t R8T8:1;
      uint64_t R9T9:1;
      uint64_t reservedSpace0:1;
      uint64_t IDLINE:1;
      uint64_t RXEMPT:1;
      uint64_t FRETSC:1;
      uint64_t PARITYE:1;
      uint64_t NOISY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA1:10;
      uint64_t reservedSpace0:6;
      uint64_t MA2:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTSE:1;
      uint64_t TXRTSE:1;
      uint64_t TXRTSPOL:1;
      uint64_t RXRTSE:1;
      uint64_t TXCTSC:1;
      uint64_t TXCTSSRC:1;
      uint64_t reservedSpace0:2;
      uint64_t RTSWATER:2;
      uint64_t reservedSpace1:6;
      uint64_t TNP:2;
      uint64_t IREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFIFOSIZE:3;
      uint64_t RXFE:1;
      uint64_t TXFIFOSIZE:3;
      uint64_t TXFE:1;
      uint64_t RXUFE:1;
      uint64_t TXOFE:1;
      uint64_t RXIDEN:3;
      uint64_t reservedSpace0:1;
      uint64_t RXFLUSH:1;
      uint64_t TXFLUSH:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t reservedSpace1:4;
      uint64_t RXEMPT:1;
      uint64_t TXEMPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:6;
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace1:5;
      uint64_t RXWATER:2;
      uint64_t reservedSpace2:6;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WATER;

};

#define LPUART0 (*(volatile struct LPUART0_tag *) 0x4103a000)

struct LPUART4_tag
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
      uint64_t TXFIFO:8;
      uint64_t RXFIFO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBR:13;
      uint64_t SBNS:1;
      uint64_t RXEDGIE:1;
      uint64_t LBKDIE:1;
      uint64_t RESYNCDIS:1;
      uint64_t BOTHEDGE:1;
      uint64_t MATCFG:2;
      uint64_t RIDMAE:1;
      uint64_t RDMAE:1;
      uint64_t reservedSpace0:1;
      uint64_t TDMAE:1;
      uint64_t OSR:5;
      uint64_t M10:1;
      uint64_t MAEN2:1;
      uint64_t MAEN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t MA2F:1;
      uint64_t MA1F:1;
      uint64_t PF:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t OR:1;
      uint64_t IDLE:1;
      uint64_t RDRF:1;
      uint64_t TC:1;
      uint64_t TDRE:1;
      uint64_t RAF:1;
      uint64_t LBKDE:1;
      uint64_t BRK13:1;
      uint64_t RWUID:1;
      uint64_t RXINV:1;
      uint64_t MSBF:1;
      uint64_t RXEDGIF:1;
      uint64_t LBKDIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PT:1;
      uint64_t PE:1;
      uint64_t ILT:1;
      uint64_t WAKE:1;
      uint64_t M:1;
      uint64_t RSRC:1;
      uint64_t DOZEEN:1;
      uint64_t LOOPS:1;
      uint64_t IDLECFG:3;
      uint64_t M7:1;
      uint64_t reservedSpace0:2;
      uint64_t MA2IE:1;
      uint64_t MA1IE:1;
      uint64_t SBK:1;
      uint64_t RWU:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t ILIE:1;
      uint64_t RIE:1;
      uint64_t TCIE:1;
      uint64_t TIE:1;
      uint64_t PEIE:1;
      uint64_t FEIE:1;
      uint64_t NEIE:1;
      uint64_t ORIE:1;
      uint64_t TXINV:1;
      uint64_t TXDIR:1;
      uint64_t R9T8:1;
      uint64_t R8T9:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R0T0:1;
      uint64_t R1T1:1;
      uint64_t R2T2:1;
      uint64_t R3T3:1;
      uint64_t R4T4:1;
      uint64_t R5T5:1;
      uint64_t R6T6:1;
      uint64_t R7T7:1;
      uint64_t R8T8:1;
      uint64_t R9T9:1;
      uint64_t reservedSpace0:1;
      uint64_t IDLINE:1;
      uint64_t RXEMPT:1;
      uint64_t FRETSC:1;
      uint64_t PARITYE:1;
      uint64_t NOISY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA1:10;
      uint64_t reservedSpace0:6;
      uint64_t MA2:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTSE:1;
      uint64_t TXRTSE:1;
      uint64_t TXRTSPOL:1;
      uint64_t RXRTSE:1;
      uint64_t TXCTSC:1;
      uint64_t TXCTSSRC:1;
      uint64_t reservedSpace0:2;
      uint64_t RTSWATER:2;
      uint64_t reservedSpace1:6;
      uint64_t TNP:2;
      uint64_t IREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFIFOSIZE:3;
      uint64_t RXFE:1;
      uint64_t TXFIFOSIZE:3;
      uint64_t TXFE:1;
      uint64_t RXUFE:1;
      uint64_t TXOFE:1;
      uint64_t RXIDEN:3;
      uint64_t reservedSpace0:1;
      uint64_t RXFLUSH:1;
      uint64_t TXFLUSH:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t reservedSpace1:4;
      uint64_t RXEMPT:1;
      uint64_t TXEMPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:6;
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace1:5;
      uint64_t RXWATER:2;
      uint64_t reservedSpace2:6;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WATER;

};

#define LPUART4 (*(volatile struct LPUART4_tag *) 0x402d0000)

struct LPUART5_tag
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
      uint64_t TXFIFO:8;
      uint64_t RXFIFO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBR:13;
      uint64_t SBNS:1;
      uint64_t RXEDGIE:1;
      uint64_t LBKDIE:1;
      uint64_t RESYNCDIS:1;
      uint64_t BOTHEDGE:1;
      uint64_t MATCFG:2;
      uint64_t RIDMAE:1;
      uint64_t RDMAE:1;
      uint64_t reservedSpace0:1;
      uint64_t TDMAE:1;
      uint64_t OSR:5;
      uint64_t M10:1;
      uint64_t MAEN2:1;
      uint64_t MAEN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t MA2F:1;
      uint64_t MA1F:1;
      uint64_t PF:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t OR:1;
      uint64_t IDLE:1;
      uint64_t RDRF:1;
      uint64_t TC:1;
      uint64_t TDRE:1;
      uint64_t RAF:1;
      uint64_t LBKDE:1;
      uint64_t BRK13:1;
      uint64_t RWUID:1;
      uint64_t RXINV:1;
      uint64_t MSBF:1;
      uint64_t RXEDGIF:1;
      uint64_t LBKDIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PT:1;
      uint64_t PE:1;
      uint64_t ILT:1;
      uint64_t WAKE:1;
      uint64_t M:1;
      uint64_t RSRC:1;
      uint64_t DOZEEN:1;
      uint64_t LOOPS:1;
      uint64_t IDLECFG:3;
      uint64_t M7:1;
      uint64_t reservedSpace0:2;
      uint64_t MA2IE:1;
      uint64_t MA1IE:1;
      uint64_t SBK:1;
      uint64_t RWU:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t ILIE:1;
      uint64_t RIE:1;
      uint64_t TCIE:1;
      uint64_t TIE:1;
      uint64_t PEIE:1;
      uint64_t FEIE:1;
      uint64_t NEIE:1;
      uint64_t ORIE:1;
      uint64_t TXINV:1;
      uint64_t TXDIR:1;
      uint64_t R9T8:1;
      uint64_t R8T9:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R0T0:1;
      uint64_t R1T1:1;
      uint64_t R2T2:1;
      uint64_t R3T3:1;
      uint64_t R4T4:1;
      uint64_t R5T5:1;
      uint64_t R6T6:1;
      uint64_t R7T7:1;
      uint64_t R8T8:1;
      uint64_t R9T9:1;
      uint64_t reservedSpace0:1;
      uint64_t IDLINE:1;
      uint64_t RXEMPT:1;
      uint64_t FRETSC:1;
      uint64_t PARITYE:1;
      uint64_t NOISY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA1:10;
      uint64_t reservedSpace0:6;
      uint64_t MA2:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTSE:1;
      uint64_t TXRTSE:1;
      uint64_t TXRTSPOL:1;
      uint64_t RXRTSE:1;
      uint64_t TXCTSC:1;
      uint64_t TXCTSSRC:1;
      uint64_t reservedSpace0:2;
      uint64_t RTSWATER:2;
      uint64_t reservedSpace1:6;
      uint64_t TNP:2;
      uint64_t IREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFIFOSIZE:3;
      uint64_t RXFE:1;
      uint64_t TXFIFOSIZE:3;
      uint64_t TXFE:1;
      uint64_t RXUFE:1;
      uint64_t TXOFE:1;
      uint64_t RXIDEN:3;
      uint64_t reservedSpace0:1;
      uint64_t RXFLUSH:1;
      uint64_t TXFLUSH:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t reservedSpace1:4;
      uint64_t RXEMPT:1;
      uint64_t TXEMPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:6;
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace1:5;
      uint64_t RXWATER:2;
      uint64_t reservedSpace2:6;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WATER;

};

#define LPUART5 (*(volatile struct LPUART5_tag *) 0x402e0000)

struct LPUART6_tag
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
      uint64_t TXFIFO:8;
      uint64_t RXFIFO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBR:13;
      uint64_t SBNS:1;
      uint64_t RXEDGIE:1;
      uint64_t LBKDIE:1;
      uint64_t RESYNCDIS:1;
      uint64_t BOTHEDGE:1;
      uint64_t MATCFG:2;
      uint64_t RIDMAE:1;
      uint64_t RDMAE:1;
      uint64_t reservedSpace0:1;
      uint64_t TDMAE:1;
      uint64_t OSR:5;
      uint64_t M10:1;
      uint64_t MAEN2:1;
      uint64_t MAEN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t MA2F:1;
      uint64_t MA1F:1;
      uint64_t PF:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t OR:1;
      uint64_t IDLE:1;
      uint64_t RDRF:1;
      uint64_t TC:1;
      uint64_t TDRE:1;
      uint64_t RAF:1;
      uint64_t LBKDE:1;
      uint64_t BRK13:1;
      uint64_t RWUID:1;
      uint64_t RXINV:1;
      uint64_t MSBF:1;
      uint64_t RXEDGIF:1;
      uint64_t LBKDIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PT:1;
      uint64_t PE:1;
      uint64_t ILT:1;
      uint64_t WAKE:1;
      uint64_t M:1;
      uint64_t RSRC:1;
      uint64_t DOZEEN:1;
      uint64_t LOOPS:1;
      uint64_t IDLECFG:3;
      uint64_t M7:1;
      uint64_t reservedSpace0:2;
      uint64_t MA2IE:1;
      uint64_t MA1IE:1;
      uint64_t SBK:1;
      uint64_t RWU:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t ILIE:1;
      uint64_t RIE:1;
      uint64_t TCIE:1;
      uint64_t TIE:1;
      uint64_t PEIE:1;
      uint64_t FEIE:1;
      uint64_t NEIE:1;
      uint64_t ORIE:1;
      uint64_t TXINV:1;
      uint64_t TXDIR:1;
      uint64_t R9T8:1;
      uint64_t R8T9:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R0T0:1;
      uint64_t R1T1:1;
      uint64_t R2T2:1;
      uint64_t R3T3:1;
      uint64_t R4T4:1;
      uint64_t R5T5:1;
      uint64_t R6T6:1;
      uint64_t R7T7:1;
      uint64_t R8T8:1;
      uint64_t R9T9:1;
      uint64_t reservedSpace0:1;
      uint64_t IDLINE:1;
      uint64_t RXEMPT:1;
      uint64_t FRETSC:1;
      uint64_t PARITYE:1;
      uint64_t NOISY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA1:10;
      uint64_t reservedSpace0:6;
      uint64_t MA2:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTSE:1;
      uint64_t TXRTSE:1;
      uint64_t TXRTSPOL:1;
      uint64_t RXRTSE:1;
      uint64_t TXCTSC:1;
      uint64_t TXCTSSRC:1;
      uint64_t reservedSpace0:2;
      uint64_t RTSWATER:2;
      uint64_t reservedSpace1:6;
      uint64_t TNP:2;
      uint64_t IREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFIFOSIZE:3;
      uint64_t RXFE:1;
      uint64_t TXFIFOSIZE:3;
      uint64_t TXFE:1;
      uint64_t RXUFE:1;
      uint64_t TXOFE:1;
      uint64_t RXIDEN:3;
      uint64_t reservedSpace0:1;
      uint64_t RXFLUSH:1;
      uint64_t TXFLUSH:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t reservedSpace1:4;
      uint64_t RXEMPT:1;
      uint64_t TXEMPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:6;
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace1:5;
      uint64_t RXWATER:2;
      uint64_t reservedSpace2:6;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WATER;

};

#define LPUART6 (*(volatile struct LPUART6_tag *) 0x40a60000)

struct LPUART7_tag
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
      uint64_t TXFIFO:8;
      uint64_t RXFIFO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBR:13;
      uint64_t SBNS:1;
      uint64_t RXEDGIE:1;
      uint64_t LBKDIE:1;
      uint64_t RESYNCDIS:1;
      uint64_t BOTHEDGE:1;
      uint64_t MATCFG:2;
      uint64_t RIDMAE:1;
      uint64_t RDMAE:1;
      uint64_t reservedSpace0:1;
      uint64_t TDMAE:1;
      uint64_t OSR:5;
      uint64_t M10:1;
      uint64_t MAEN2:1;
      uint64_t MAEN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t MA2F:1;
      uint64_t MA1F:1;
      uint64_t PF:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t OR:1;
      uint64_t IDLE:1;
      uint64_t RDRF:1;
      uint64_t TC:1;
      uint64_t TDRE:1;
      uint64_t RAF:1;
      uint64_t LBKDE:1;
      uint64_t BRK13:1;
      uint64_t RWUID:1;
      uint64_t RXINV:1;
      uint64_t MSBF:1;
      uint64_t RXEDGIF:1;
      uint64_t LBKDIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PT:1;
      uint64_t PE:1;
      uint64_t ILT:1;
      uint64_t WAKE:1;
      uint64_t M:1;
      uint64_t RSRC:1;
      uint64_t DOZEEN:1;
      uint64_t LOOPS:1;
      uint64_t IDLECFG:3;
      uint64_t M7:1;
      uint64_t reservedSpace0:2;
      uint64_t MA2IE:1;
      uint64_t MA1IE:1;
      uint64_t SBK:1;
      uint64_t RWU:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t ILIE:1;
      uint64_t RIE:1;
      uint64_t TCIE:1;
      uint64_t TIE:1;
      uint64_t PEIE:1;
      uint64_t FEIE:1;
      uint64_t NEIE:1;
      uint64_t ORIE:1;
      uint64_t TXINV:1;
      uint64_t TXDIR:1;
      uint64_t R9T8:1;
      uint64_t R8T9:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R0T0:1;
      uint64_t R1T1:1;
      uint64_t R2T2:1;
      uint64_t R3T3:1;
      uint64_t R4T4:1;
      uint64_t R5T5:1;
      uint64_t R6T6:1;
      uint64_t R7T7:1;
      uint64_t R8T8:1;
      uint64_t R9T9:1;
      uint64_t reservedSpace0:1;
      uint64_t IDLINE:1;
      uint64_t RXEMPT:1;
      uint64_t FRETSC:1;
      uint64_t PARITYE:1;
      uint64_t NOISY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA1:10;
      uint64_t reservedSpace0:6;
      uint64_t MA2:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTSE:1;
      uint64_t TXRTSE:1;
      uint64_t TXRTSPOL:1;
      uint64_t RXRTSE:1;
      uint64_t TXCTSC:1;
      uint64_t TXCTSSRC:1;
      uint64_t reservedSpace0:2;
      uint64_t RTSWATER:2;
      uint64_t reservedSpace1:6;
      uint64_t TNP:2;
      uint64_t IREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFIFOSIZE:3;
      uint64_t RXFE:1;
      uint64_t TXFIFOSIZE:3;
      uint64_t TXFE:1;
      uint64_t RXUFE:1;
      uint64_t TXOFE:1;
      uint64_t RXIDEN:3;
      uint64_t reservedSpace0:1;
      uint64_t RXFLUSH:1;
      uint64_t TXFLUSH:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t reservedSpace1:4;
      uint64_t RXEMPT:1;
      uint64_t TXEMPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:6;
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace1:5;
      uint64_t RXWATER:2;
      uint64_t reservedSpace2:6;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WATER;

};

#define LPUART7 (*(volatile struct LPUART7_tag *) 0x40a70000)

struct LPUART1_tag
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
      uint64_t TXFIFO:8;
      uint64_t RXFIFO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBR:13;
      uint64_t SBNS:1;
      uint64_t RXEDGIE:1;
      uint64_t LBKDIE:1;
      uint64_t RESYNCDIS:1;
      uint64_t BOTHEDGE:1;
      uint64_t MATCFG:2;
      uint64_t RIDMAE:1;
      uint64_t RDMAE:1;
      uint64_t reservedSpace0:1;
      uint64_t TDMAE:1;
      uint64_t OSR:5;
      uint64_t M10:1;
      uint64_t MAEN2:1;
      uint64_t MAEN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t MA2F:1;
      uint64_t MA1F:1;
      uint64_t PF:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t OR:1;
      uint64_t IDLE:1;
      uint64_t RDRF:1;
      uint64_t TC:1;
      uint64_t TDRE:1;
      uint64_t RAF:1;
      uint64_t LBKDE:1;
      uint64_t BRK13:1;
      uint64_t RWUID:1;
      uint64_t RXINV:1;
      uint64_t MSBF:1;
      uint64_t RXEDGIF:1;
      uint64_t LBKDIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PT:1;
      uint64_t PE:1;
      uint64_t ILT:1;
      uint64_t WAKE:1;
      uint64_t M:1;
      uint64_t RSRC:1;
      uint64_t DOZEEN:1;
      uint64_t LOOPS:1;
      uint64_t IDLECFG:3;
      uint64_t M7:1;
      uint64_t reservedSpace0:2;
      uint64_t MA2IE:1;
      uint64_t MA1IE:1;
      uint64_t SBK:1;
      uint64_t RWU:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t ILIE:1;
      uint64_t RIE:1;
      uint64_t TCIE:1;
      uint64_t TIE:1;
      uint64_t PEIE:1;
      uint64_t FEIE:1;
      uint64_t NEIE:1;
      uint64_t ORIE:1;
      uint64_t TXINV:1;
      uint64_t TXDIR:1;
      uint64_t R9T8:1;
      uint64_t R8T9:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R0T0:1;
      uint64_t R1T1:1;
      uint64_t R2T2:1;
      uint64_t R3T3:1;
      uint64_t R4T4:1;
      uint64_t R5T5:1;
      uint64_t R6T6:1;
      uint64_t R7T7:1;
      uint64_t R8T8:1;
      uint64_t R9T9:1;
      uint64_t reservedSpace0:1;
      uint64_t IDLINE:1;
      uint64_t RXEMPT:1;
      uint64_t FRETSC:1;
      uint64_t PARITYE:1;
      uint64_t NOISY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA1:10;
      uint64_t reservedSpace0:6;
      uint64_t MA2:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTSE:1;
      uint64_t TXRTSE:1;
      uint64_t TXRTSPOL:1;
      uint64_t RXRTSE:1;
      uint64_t TXCTSC:1;
      uint64_t TXCTSSRC:1;
      uint64_t reservedSpace0:2;
      uint64_t RTSWATER:2;
      uint64_t reservedSpace1:6;
      uint64_t TNP:2;
      uint64_t IREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFIFOSIZE:3;
      uint64_t RXFE:1;
      uint64_t TXFIFOSIZE:3;
      uint64_t TXFE:1;
      uint64_t RXUFE:1;
      uint64_t TXOFE:1;
      uint64_t RXIDEN:3;
      uint64_t reservedSpace0:1;
      uint64_t RXFLUSH:1;
      uint64_t TXFLUSH:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t reservedSpace1:4;
      uint64_t RXEMPT:1;
      uint64_t TXEMPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:6;
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace1:5;
      uint64_t RXWATER:2;
      uint64_t reservedSpace2:6;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WATER;

};

#define LPUART1 (*(volatile struct LPUART1_tag *) 0x4103b000)

struct LPUART2_tag
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
      uint64_t TXFIFO:8;
      uint64_t RXFIFO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBR:13;
      uint64_t SBNS:1;
      uint64_t RXEDGIE:1;
      uint64_t LBKDIE:1;
      uint64_t RESYNCDIS:1;
      uint64_t BOTHEDGE:1;
      uint64_t MATCFG:2;
      uint64_t RIDMAE:1;
      uint64_t RDMAE:1;
      uint64_t reservedSpace0:1;
      uint64_t TDMAE:1;
      uint64_t OSR:5;
      uint64_t M10:1;
      uint64_t MAEN2:1;
      uint64_t MAEN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t MA2F:1;
      uint64_t MA1F:1;
      uint64_t PF:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t OR:1;
      uint64_t IDLE:1;
      uint64_t RDRF:1;
      uint64_t TC:1;
      uint64_t TDRE:1;
      uint64_t RAF:1;
      uint64_t LBKDE:1;
      uint64_t BRK13:1;
      uint64_t RWUID:1;
      uint64_t RXINV:1;
      uint64_t MSBF:1;
      uint64_t RXEDGIF:1;
      uint64_t LBKDIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PT:1;
      uint64_t PE:1;
      uint64_t ILT:1;
      uint64_t WAKE:1;
      uint64_t M:1;
      uint64_t RSRC:1;
      uint64_t DOZEEN:1;
      uint64_t LOOPS:1;
      uint64_t IDLECFG:3;
      uint64_t M7:1;
      uint64_t reservedSpace0:2;
      uint64_t MA2IE:1;
      uint64_t MA1IE:1;
      uint64_t SBK:1;
      uint64_t RWU:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t ILIE:1;
      uint64_t RIE:1;
      uint64_t TCIE:1;
      uint64_t TIE:1;
      uint64_t PEIE:1;
      uint64_t FEIE:1;
      uint64_t NEIE:1;
      uint64_t ORIE:1;
      uint64_t TXINV:1;
      uint64_t TXDIR:1;
      uint64_t R9T8:1;
      uint64_t R8T9:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R0T0:1;
      uint64_t R1T1:1;
      uint64_t R2T2:1;
      uint64_t R3T3:1;
      uint64_t R4T4:1;
      uint64_t R5T5:1;
      uint64_t R6T6:1;
      uint64_t R7T7:1;
      uint64_t R8T8:1;
      uint64_t R9T9:1;
      uint64_t reservedSpace0:1;
      uint64_t IDLINE:1;
      uint64_t RXEMPT:1;
      uint64_t FRETSC:1;
      uint64_t PARITYE:1;
      uint64_t NOISY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA1:10;
      uint64_t reservedSpace0:6;
      uint64_t MA2:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTSE:1;
      uint64_t TXRTSE:1;
      uint64_t TXRTSPOL:1;
      uint64_t RXRTSE:1;
      uint64_t TXCTSC:1;
      uint64_t TXCTSSRC:1;
      uint64_t reservedSpace0:2;
      uint64_t RTSWATER:2;
      uint64_t reservedSpace1:6;
      uint64_t TNP:2;
      uint64_t IREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFIFOSIZE:3;
      uint64_t RXFE:1;
      uint64_t TXFIFOSIZE:3;
      uint64_t TXFE:1;
      uint64_t RXUFE:1;
      uint64_t TXOFE:1;
      uint64_t RXIDEN:3;
      uint64_t reservedSpace0:1;
      uint64_t RXFLUSH:1;
      uint64_t TXFLUSH:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t reservedSpace1:4;
      uint64_t RXEMPT:1;
      uint64_t TXEMPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:6;
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace1:5;
      uint64_t RXWATER:2;
      uint64_t reservedSpace2:6;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WATER;

};

#define LPUART2 (*(volatile struct LPUART2_tag *) 0x410ab000)

struct LPUART3_tag
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
      uint64_t TXFIFO:8;
      uint64_t RXFIFO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBR:13;
      uint64_t SBNS:1;
      uint64_t RXEDGIE:1;
      uint64_t LBKDIE:1;
      uint64_t RESYNCDIS:1;
      uint64_t BOTHEDGE:1;
      uint64_t MATCFG:2;
      uint64_t RIDMAE:1;
      uint64_t RDMAE:1;
      uint64_t reservedSpace0:1;
      uint64_t TDMAE:1;
      uint64_t OSR:5;
      uint64_t M10:1;
      uint64_t MAEN2:1;
      uint64_t MAEN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t MA2F:1;
      uint64_t MA1F:1;
      uint64_t PF:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t OR:1;
      uint64_t IDLE:1;
      uint64_t RDRF:1;
      uint64_t TC:1;
      uint64_t TDRE:1;
      uint64_t RAF:1;
      uint64_t LBKDE:1;
      uint64_t BRK13:1;
      uint64_t RWUID:1;
      uint64_t RXINV:1;
      uint64_t MSBF:1;
      uint64_t RXEDGIF:1;
      uint64_t LBKDIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PT:1;
      uint64_t PE:1;
      uint64_t ILT:1;
      uint64_t WAKE:1;
      uint64_t M:1;
      uint64_t RSRC:1;
      uint64_t DOZEEN:1;
      uint64_t LOOPS:1;
      uint64_t IDLECFG:3;
      uint64_t M7:1;
      uint64_t reservedSpace0:2;
      uint64_t MA2IE:1;
      uint64_t MA1IE:1;
      uint64_t SBK:1;
      uint64_t RWU:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t ILIE:1;
      uint64_t RIE:1;
      uint64_t TCIE:1;
      uint64_t TIE:1;
      uint64_t PEIE:1;
      uint64_t FEIE:1;
      uint64_t NEIE:1;
      uint64_t ORIE:1;
      uint64_t TXINV:1;
      uint64_t TXDIR:1;
      uint64_t R9T8:1;
      uint64_t R8T9:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R0T0:1;
      uint64_t R1T1:1;
      uint64_t R2T2:1;
      uint64_t R3T3:1;
      uint64_t R4T4:1;
      uint64_t R5T5:1;
      uint64_t R6T6:1;
      uint64_t R7T7:1;
      uint64_t R8T8:1;
      uint64_t R9T9:1;
      uint64_t reservedSpace0:1;
      uint64_t IDLINE:1;
      uint64_t RXEMPT:1;
      uint64_t FRETSC:1;
      uint64_t PARITYE:1;
      uint64_t NOISY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA1:10;
      uint64_t reservedSpace0:6;
      uint64_t MA2:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTSE:1;
      uint64_t TXRTSE:1;
      uint64_t TXRTSPOL:1;
      uint64_t RXRTSE:1;
      uint64_t TXCTSC:1;
      uint64_t TXCTSSRC:1;
      uint64_t reservedSpace0:2;
      uint64_t RTSWATER:2;
      uint64_t reservedSpace1:6;
      uint64_t TNP:2;
      uint64_t IREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFIFOSIZE:3;
      uint64_t RXFE:1;
      uint64_t TXFIFOSIZE:3;
      uint64_t TXFE:1;
      uint64_t RXUFE:1;
      uint64_t TXOFE:1;
      uint64_t RXIDEN:3;
      uint64_t reservedSpace0:1;
      uint64_t RXFLUSH:1;
      uint64_t TXFLUSH:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t reservedSpace1:4;
      uint64_t RXEMPT:1;
      uint64_t TXEMPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:6;
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace1:5;
      uint64_t RXWATER:2;
      uint64_t reservedSpace2:6;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WATER;

};

#define LPUART3 (*(volatile struct LPUART3_tag *) 0x410ac000)

struct IOMUXC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTA31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTB0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTB1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTB2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTB3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTB4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTB5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTB6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTB7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTB8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTB9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTB10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTB11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTB12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTB13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTB14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTB15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTB16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTB17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTB18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX_MODE:4;
      uint64_t reservedSpace2:3;
      uint64_t LK:1;
      uint64_t IBE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace3:2;
      uint64_t DFE:1;
      uint64_t DFCS:1;
      uint64_t DFD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_PTB19;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPSPI0_IPP_IND_LPSPI_PCS0_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPSPI0_IPP_IND_LPSPI_PCS1_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPSPI0_IPP_IND_LPSPI_PCS2_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPSPI0_IPP_IND_LPSPI_PCS3_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPSPI0_IPP_IND_LPSPI_SCK_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPSPI0_IPP_IND_LPSPI_SDI_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPSPI0_IPP_IND_LPSPI_SDO_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPSPI1_IPP_IND_LPSPI_PCS0_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPSPI1_IPP_IND_LPSPI_PCS1_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPSPI1_IPP_IND_LPSPI_PCS2_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPSPI1_IPP_IND_LPSPI_PCS3_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPSPI1_IPP_IND_LPSPI_SCK_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPSPI1_IPP_IND_LPSPI_SDI_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPSPI1_IPP_IND_LPSPI_SDO_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPTPM0_IPP_IND_LPTPM_CH0_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPTPM0_IPP_IND_LPTPM_CH1_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPTPM0_IPP_IND_LPTPM_CH2_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPTPM0_IPP_IND_LPTPM_CH3_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPTPM0_IPP_IND_LPTPM_CH4_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPTPM0_IPP_IND_LPTPM_CH5_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPTPM1_IPP_IND_LPTPM_CH0_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPTPM1_IPP_IND_LPTPM_CH1_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPTPM2_IPP_IND_LPTPM_CH0_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPTPM2_IPP_IND_LPTPM_CH1_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPTPM3_IPP_IND_LPTPM_CH0_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPTPM3_IPP_IND_LPTPM_CH1_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPTPM3_IPP_IND_LPTPM_CH2_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPTPM3_IPP_IND_LPTPM_CH3_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPTPM3_IPP_IND_LPTPM_CH4_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPTPM3_IPP_IND_LPTPM_CH5_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPI2C0_IPP_IND_LPI2C_HREQ_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPI2C0_IPP_IND_LPI2C_SCL_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPI2C0_IPP_IND_LPI2C_SDA_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPI2C1_IPP_IND_LPI2C_HREQ_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPI2C1_IPP_IND_LPI2C_SCL_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPI2C1_IPP_IND_LPI2C_SDA_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPI2C2_IPP_IND_LPI2C_HREQ_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPI2C2_IPP_IND_LPI2C_SCL_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPI2C2_IPP_IND_LPI2C_SDA_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPI2C3_IPP_IND_LPI2C_HREQ_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPI2C3_IPP_IND_LPI2C_SCL_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPI2C3_IPP_IND_LPI2C_SDA_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPTPM0_IPP_IND_LPTPM_CLK_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPTPM1_IPP_IND_LPTPM_CLK_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPTPM3_IPP_IND_LPTPM_CLK_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_PCC_AIPS0_IPP_IND_EXTCLK55_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SAI0_IPP_IND_SAI_RXBCLK_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SAI0_IPP_IND_SAI_RXSYNC_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SAI0_IPP_IND_SAI_TXBCLK_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SAI0_IPP_IND_SAI_TXSYNC_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_PCC_AIPS1_IPP_IND_EXTCLK42_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SAI1_IPP_IND_SAI_RXBCLK_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SAI1_IPP_IND_SAI_RXSYNC_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SAI1_IPP_IND_SAI_TXBCLK_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SAI1_IPP_IND_SAI_TXSYNC_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SAI0_IPP_IND_SAI_RXDATA0_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SAI0_IPP_IND_SAI_RXDATA1_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SAI1_IPP_IND_SAI_RXDATA0_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SAI1_IPP_IND_SAI_RXDATA1_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SAI1_IPP_IND_SAI_RXDATA2_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SAI1_IPP_IND_SAI_RXDATA3_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPTPM2_IPP_IND_LPTPM_CLK_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPUART0_IPP_IND_LPUART_CTS_B_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPUART0_IPP_IND_LPUART_RXD_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPUART0_IPP_IND_LPUART_TXD_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPUART1_IPP_IND_LPUART_CTS_B_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPUART1_IPP_IND_LPUART_RXD_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPUART1_IPP_IND_LPUART_TXD_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPUART2_IPP_IND_LPUART_CTS_B_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPUART2_IPP_IND_LPUART_RXD_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPUART2_IPP_IND_LPUART_TXD_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPUART3_IPP_IND_LPUART_CTS_B_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPUART3_IPP_IND_LPUART_RXD_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_LPUART3_IPP_IND_LPUART_TXD_SELECT_INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAISY:3;
      uint64_t reservedSpace0:12;
      uint64_t INVERSION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_D_IP_EWM_SYN_EWM_IN_SELECT_INPUT;

  uint8_t res1[104];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:2;
      uint64_t ODE:1;
      uint64_t DSE:1;
      uint64_t reservedSpace1:8;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMUXC0_SW_MUX_CTL_PAD_RESET0_b;

};

#define IOMUXC0 (*(volatile struct IOMUXC0_tag *) 0x4103d000)

struct PORTA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GICHR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISFR;

};

#define PORTA (*(volatile struct PORTA_tag *) 0x4103f000)

struct PORTB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR19;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GICHR;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISFR;

};

#define PORTB (*(volatile struct PORTB_tag *) 0x41040000)

struct PORTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR19;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GICHR;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISFR;

};

#define PORTC (*(volatile struct PORTC_tag *) 0x40ae0000)

struct PORTF_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IRQC:4;
      uint64_t reservedSpace1:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR19;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GICHR;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISFR;

};

#define PORTF (*(volatile struct PORTF_tag *) 0x40b10000)

struct ADC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:1;
      uint64_t DIFFEN:1;
      uint64_t reservedSpace0:1;
      uint64_t MVI:1;
      uint64_t CSW:3;
      uint64_t reservedSpace1:1;
      uint64_t VR1RNGI:1;
      uint64_t IADCKI:1;
      uint64_t CALOFSI:1;
      uint64_t reservedSpace2:5;
      uint64_t MINOR:8;
      uint64_t MAJOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERID;

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
      uint64_t TRGACT:1;
      uint64_t reservedSpace1:7;
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
      uint64_t TPRI:1;
      uint64_t reservedSpace1:7;
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
      uint64_t TPRI:1;
      uint64_t reservedSpace1:7;
      uint64_t TDLY:4;
      uint64_t reservedSpace2:4;
      uint64_t TCMD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL_1;

  uint8_t res3[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPEN:2;
      uint64_t reservedSpace0:5;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPEN:2;
      uint64_t reservedSpace0:5;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPEN:2;
      uint64_t reservedSpace0:5;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPEN:2;
      uint64_t reservedSpace0:5;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH15;

  uint8_t res4[136];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVL:16;
      uint64_t CVH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVL:16;
      uint64_t CVH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVL:16;
      uint64_t CVH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVL:16;
      uint64_t CVH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV4;

  uint8_t res5[240];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:16;
      uint64_t TSRC:1;
      uint64_t reservedSpace0:3;
      uint64_t LOOPCNT:4;
      uint64_t CMDSRC:4;
      uint64_t reservedSpace1:3;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESFIFO;

};

#define ADC0 (*(volatile struct ADC0_tag *) 0x41041000)

struct ADC1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:1;
      uint64_t DIFFEN:1;
      uint64_t reservedSpace0:1;
      uint64_t MVI:1;
      uint64_t CSW:3;
      uint64_t reservedSpace1:1;
      uint64_t VR1RNGI:1;
      uint64_t IADCKI:1;
      uint64_t CALOFSI:1;
      uint64_t reservedSpace2:5;
      uint64_t MINOR:8;
      uint64_t MAJOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERID;

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
      uint64_t TRGACT:1;
      uint64_t reservedSpace1:7;
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
      uint64_t TPRI:1;
      uint64_t reservedSpace1:7;
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
      uint64_t TPRI:1;
      uint64_t reservedSpace1:7;
      uint64_t TDLY:4;
      uint64_t reservedSpace2:4;
      uint64_t TCMD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL_1;

  uint8_t res3[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPEN:2;
      uint64_t reservedSpace0:5;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPEN:2;
      uint64_t reservedSpace0:5;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPEN:2;
      uint64_t reservedSpace0:5;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPEN:2;
      uint64_t reservedSpace0:5;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t ABSEL:1;
      uint64_t DIFF:1;
      uint64_t reservedSpace0:6;
      uint64_t CSCALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDL15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LWI:1;
      uint64_t STS:3;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:3;
      uint64_t reservedSpace2:1;
      uint64_t LOOP:4;
      uint64_t reservedSpace3:4;
      uint64_t NEXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDH15;

  uint8_t res4[136];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVL:16;
      uint64_t CVH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVL:16;
      uint64_t CVH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVL:16;
      uint64_t CVH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVL:16;
      uint64_t CVH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV4;

  uint8_t res5[240];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:16;
      uint64_t TSRC:1;
      uint64_t reservedSpace0:3;
      uint64_t LOOPCNT:4;
      uint64_t CMDSRC:4;
      uint64_t reservedSpace1:3;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESFIFO;

};

#define ADC1 (*(volatile struct ADC1_tag *) 0x410ad000)

struct CMP0_tag
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
      uint64_t DACOE:1;
      uint64_t reservedSpace0:4;
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

};

#define CMP0 (*(volatile struct CMP0_tag *) 0x41042000)

struct CMP1_tag
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
      uint64_t DACOE:1;
      uint64_t reservedSpace0:4;
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

};

#define CMP1 (*(volatile struct CMP1_tag *) 0x41043000)

struct DAC0_tag
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
      uint64_t FIFOSZ:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FULLF:1;
      uint64_t NEMPTF:1;
      uint64_t WMF:1;
      uint64_t UDFF:1;
      uint64_t OVFF:1;
      uint64_t reservedSpace0:3;
      uint64_t FULLIE:1;
      uint64_t EMPTIE:1;
      uint64_t WTMIE:1;
      uint64_t reservedSpace1:1;
      uint64_t SWTRG:1;
      uint64_t TRGSEL:1;
      uint64_t DACRFS:1;
      uint64_t DACEN:1;
      uint64_t FIFOEN:1;
      uint64_t SWMD:1;
      uint64_t UVIE:1;
      uint64_t reservedSpace2:2;
      uint64_t FIFORST:1;
      uint64_t SWRST:1;
      uint64_t DMAEN:1;
      uint64_t WML:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACWFP:8;
      uint64_t reservedSpace0:8;
      uint64_t DACRFP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFEN:1;
      uint64_t OEN:1;
      uint64_t BFMS:1;
      uint64_t BFHS:1;
      uint64_t IREF2:1;
      uint64_t IREF1:1;
      uint64_t IREF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIM:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ITRM;

};

#define DAC0 (*(volatile struct DAC0_tag *) 0x41044000)

struct DAC1_tag
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
      uint64_t FIFOSZ:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FULLF:1;
      uint64_t NEMPTF:1;
      uint64_t WMF:1;
      uint64_t UDFF:1;
      uint64_t OVFF:1;
      uint64_t reservedSpace0:3;
      uint64_t FULLIE:1;
      uint64_t EMPTIE:1;
      uint64_t WTMIE:1;
      uint64_t reservedSpace1:1;
      uint64_t SWTRG:1;
      uint64_t TRGSEL:1;
      uint64_t DACRFS:1;
      uint64_t DACEN:1;
      uint64_t FIFOEN:1;
      uint64_t SWMD:1;
      uint64_t UVIE:1;
      uint64_t reservedSpace2:2;
      uint64_t FIFORST:1;
      uint64_t SWRST:1;
      uint64_t DMAEN:1;
      uint64_t WML:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACWFP:8;
      uint64_t reservedSpace0:8;
      uint64_t DACRFP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFEN:1;
      uint64_t OEN:1;
      uint64_t BFMS:1;
      uint64_t BFHS:1;
      uint64_t IREF2:1;
      uint64_t IREF1:1;
      uint64_t IREF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIM:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ITRM;

};

#define DAC1 (*(volatile struct DAC1_tag *) 0x41045000)

struct SNVS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ZMK_WSL:1;
      uint64_t ZMK_RSL:1;
      uint64_t SRTC_SL:1;
      uint64_t LPCALB_SL:1;
      uint64_t MC_SL:1;
      uint64_t GPR_SL:1;
      uint64_t LPSVCR_SL:1;
      uint64_t reservedSpace0:1;
      uint64_t LPTDCR_SL:1;
      uint64_t MKS_SL:1;
      uint64_t reservedSpace1:6;
      uint64_t HPSVCR_L:1;
      uint64_t HPSICR_L:1;
      uint64_t HAC_L:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSM_ST:1;
      uint64_t SSM_ST_DIS:1;
      uint64_t SSM_SFNS_DIS:1;
      uint64_t reservedSpace0:1;
      uint64_t LP_SWR:1;
      uint64_t LP_SWR_DIS:1;
      uint64_t reservedSpace1:2;
      uint64_t SW_SV:1;
      uint64_t SW_FSV:1;
      uint64_t SW_LPSV:1;
      uint64_t reservedSpace2:1;
      uint64_t PROG_ZMK:1;
      uint64_t MKS_EN:1;
      uint64_t reservedSpace3:2;
      uint64_t HAC_EN:1;
      uint64_t HAC_LOAD:1;
      uint64_t HAC_CLEAR:1;
      uint64_t HAC_STOP:1;
      uint64_t reservedSpace4:11;
      uint64_t NPSWA_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPCOMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC_EN:1;
      uint64_t HPTA_EN:1;
      uint64_t DIS_PI:1;
      uint64_t PI_EN:1;
      uint64_t PI_FREQ:4;
      uint64_t HPCALB_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t HPCALB_VAL:5;
      uint64_t reservedSpace1:1;
      uint64_t HP_TS:1;
      uint64_t reservedSpace2:7;
      uint64_t BTN_CONFIG:3;
      uint64_t BTN_MASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAAM_EN:1;
      uint64_t SJC_EN:1;
      uint64_t WDOG2_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t SRC_EN:1;
      uint64_t IOMUX5_EN:1;
      uint64_t reservedSpace1:25;
      uint64_t LPSVI_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPSICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAAM_CFG:1;
      uint64_t SJC_CFG:1;
      uint64_t WDOG2_CFG:1;
      uint64_t reservedSpace0:1;
      uint64_t SRC_CFG:1;
      uint64_t IOMUX5_CFG:2;
      uint64_t reservedSpace1:23;
      uint64_t LPSV_CFG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPSVCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HPTA:1;
      uint64_t PI:1;
      uint64_t reservedSpace0:2;
      uint64_t LPDIS:1;
      uint64_t reservedSpace1:1;
      uint64_t BTN:1;
      uint64_t BI:1;
      uint64_t SSM_STATE:4;
      uint64_t SECURITY_CONFIG:4;
      uint64_t OTPMK_SYNDROME:9;
      uint64_t reservedSpace2:2;
      uint64_t OTPMK_ZERO:1;
      uint64_t reservedSpace3:3;
      uint64_t ZMK_ZERO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAAM:1;
      uint64_t SJC:1;
      uint64_t WDOG2_bitfield:1;
      uint64_t reservedSpace0:1;
      uint64_t SRC:1;
      uint64_t IOMUX5:1;
      uint64_t reservedSpace1:7;
      uint64_t SW_SV:1;
      uint64_t SW_FSV:1;
      uint64_t SW_LPSV:1;
      uint64_t ZMK_SYNDROME:9;
      uint64_t reservedSpace2:2;
      uint64_t ZMK_ECC_FAIL:1;
      uint64_t reservedSpace3:3;
      uint64_t LP_SEC_VIO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPSVSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HAC_COUNTER_IV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPHACIVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HAC_COUNTER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPHACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPRTCMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPRTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HPTA_MS:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPTAMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HPTA_LS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPTALR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ZMK_WHL:1;
      uint64_t ZMK_RHL:1;
      uint64_t SRTC_HL:1;
      uint64_t LPCALB_HL:1;
      uint64_t MC_HL:1;
      uint64_t GPR_HL:1;
      uint64_t LPSVCR_HL:1;
      uint64_t reservedSpace0:1;
      uint64_t LPTDCR_HL:1;
      uint64_t MKS_HL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTC_ENV:1;
      uint64_t LPTA_EN:1;
      uint64_t MC_ENV:1;
      uint64_t LPWUI_EN:1;
      uint64_t SRTC_INV_EN:1;
      uint64_t DP_EN:1;
      uint64_t TOP:1;
      uint64_t PWR_GLITCH_EN:1;
      uint64_t LPCALB_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t LPCALB_VAL:5;
      uint64_t reservedSpace1:1;
      uint64_t BTN_PRESS_TIME:2;
      uint64_t DEBOUNCE:2;
      uint64_t ON_TIME:2;
      uint64_t PK_EN:1;
      uint64_t PK_OVERRIDE:1;
      uint64_t GPR_Z_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER_KEY_SEL:2;
      uint64_t ZMK_HWP:1;
      uint64_t ZMK_VAL:1;
      uint64_t ZMK_ECC_EN:1;
      uint64_t reservedSpace0:2;
      uint64_t ZMK_ECC_VALUE:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPMKCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAAM_EN:1;
      uint64_t SJC_EN:1;
      uint64_t WDOG2_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t SRC_EN:1;
      uint64_t IOMUX5_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPSVCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTCR_EN:1;
      uint64_t MCR_EN:1;
      uint64_t reservedSpace1:6;
      uint64_t ET1_EN:1;
      uint64_t reservedSpace2:1;
      uint64_t ET1P:1;
      uint64_t reservedSpace3:2;
      uint64_t PFD_OBSERV:1;
      uint64_t POR_OBSERV:1;
      uint64_t reservedSpace4:12;
      uint64_t OSCB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPTDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPTA:1;
      uint64_t SRTCR:1;
      uint64_t MCR:1;
      uint64_t PGD:1;
      uint64_t reservedSpace0:5;
      uint64_t ET1D:1;
      uint64_t reservedSpace1:6;
      uint64_t ESVD:1;
      uint64_t EO:1;
      uint64_t SPO:1;
      uint64_t reservedSpace2:11;
      uint64_t LPNS:1;
      uint64_t LPS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTC:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPSRTCMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPSRTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPTA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPTAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MON_COUNTER:16;
      uint64_t MC_ERA_BITS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPSMCMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MON_COUNTER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPSMCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PGD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPPGDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPGPR0_legacy_alias;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ZMK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPZMKR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ZMK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPZMKR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ZMK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPZMKR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ZMK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPZMKR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ZMK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPZMKR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ZMK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPZMKR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ZMK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPZMKR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ZMK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPZMKR_7;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPGPR_alias_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPGPR_alias_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPGPR_alias_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPGPR_alias_3;

  uint8_t res2[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPGPR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPGPR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPGPR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPGPR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPGPR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPGPR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPGPR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPGPR_7;

  uint8_t res3[2776];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR_REV:8;
      uint64_t MAJOR_REV:8;
      uint64_t IP_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPVIDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_OPT:8;
      uint64_t ECO_REV:8;
      uint64_t INTG_OPT:8;
      uint64_t IP_ERA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPVIDR2;

};

#define SNVS (*(volatile struct SNVS_tag *) 0x41070000)

struct ROMC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHD7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHD6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAFIX:8;
      uint64_t reservedSpace0:21;
      uint64_t DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHCNTL;

  uint32_t ROMPATCHENH;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHENL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_15;

  uint8_t res0[200];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t reservedSpace0:11;
      uint64_t SW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHSR;

};

#define ROMC0 (*(volatile struct ROMC0_tag *) 0x410900d4)

struct ROMC1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHD7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHD6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAFIX:8;
      uint64_t reservedSpace0:21;
      uint64_t DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHCNTL;

  uint32_t ROMPATCHENH;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHENL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THUMBX:1;
      uint64_t ADDRX:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHA_15;

  uint8_t res0[200];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t reservedSpace0:11;
      uint64_t SW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROMPATCHSR;

};

#define ROMC1 (*(volatile struct ROMC1_tag *) 0x409000d4)

struct EWM_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t EWMEN:1;
      uint64_t ASSIN:1;
      uint64_t INEN:1;
      uint64_t INTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SERVICE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERV;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPAREL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMPL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPAREH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMPH;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLKSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CLKCTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLK_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CLKPRESCALER;

};

#define EWM (*(volatile struct EWM_tag *) 0x410a0000)

struct PMC0_tag
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
      uint64_t PMC0CURRPM:3;
      uint64_t reservedSpace0:1;
      uint64_t PMC0TRANPM:1;
      uint64_t reservedSpace1:11;
      uint64_t PMC1CURRPM:3;
      uint64_t reservedSpace2:1;
      uint64_t PMC1TRANPM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PM_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t COREREGVL:6;
      uint64_t reservedSpace1:2;
      uint64_t FBBEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSRUN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t COREREGVL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RUN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARRAYREG:1;
      uint64_t reservedSpace0:1;
      uint64_t COREREG:1;
      uint64_t reservedSpace1:1;
      uint64_t MONLVD:1;
      uint64_t MONHVD:1;
      uint64_t reservedSpace2:1;
      uint64_t FBGHP:1;
      uint64_t reservedSpace3:8;
      uint64_t COREREGVL:6;
      uint64_t reservedSpace4:6;
      uint64_t RBBEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VLPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t COREREGVL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARRAYREG:1;
      uint64_t reservedSpace0:1;
      uint64_t COREREG:1;
      uint64_t reservedSpace1:1;
      uint64_t MONLVD:1;
      uint64_t MONHVD:1;
      uint64_t reservedSpace2:1;
      uint64_t FBGHP:1;
      uint64_t reservedSpace3:8;
      uint64_t COREREGVL:6;
      uint64_t reservedSpace4:6;
      uint64_t RBBEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VLPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARRAYREG:1;
      uint64_t reservedSpace0:1;
      uint64_t COREREG:1;
      uint64_t reservedSpace1:1;
      uint64_t MONLVD:1;
      uint64_t MONHVD:1;
      uint64_t reservedSpace2:1;
      uint64_t FBGHP:1;
      uint64_t reservedSpace3:8;
      uint64_t COREREGVL:6;
      uint64_t reservedSpace4:6;
      uint64_t RBBEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LLS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARRAYREG:2;
      uint64_t reservedSpace0:2;
      uint64_t MONLVD:1;
      uint64_t MONHVD:1;
      uint64_t reservedSpace1:1;
      uint64_t FBGHP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VLLS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LVDF:1;
      uint64_t LVDV:1;
      uint64_t reservedSpace0:2;
      uint64_t HVDF:1;
      uint64_t HVDV:1;
      uint64_t reservedSpace1:2;
      uint64_t COREVLF:1;
      uint64_t reservedSpace2:15;
      uint64_t SRAMF:1;
      uint64_t reservedSpace3:6;
      uint64_t PMC1VSRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LVDIE:1;
      uint64_t LVDACK:1;
      uint64_t HVDIE:1;
      uint64_t HVDACK:1;
      uint64_t reservedSpace0:4;
      uint64_t LVDRE:1;
      uint64_t reservedSpace1:1;
      uint64_t HVDRE:1;
      uint64_t reservedSpace2:3;
      uint64_t ISOACK:1;
      uint64_t reservedSpace3:9;
      uint64_t PMC1ON:1;
      uint64_t reservedSpace4:5;
      uint64_t LDOOKDIS:1;
      uint64_t LDOEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUFEN:1;
      uint64_t BUFFLIP:1;
      uint64_t BUFSEL:2;
      uint64_t reservedSpace0:4;
      uint64_t TSENSEN:1;
      uint64_t reservedSpace1:3;
      uint64_t TSENSM:3;
      uint64_t reservedSpace2:1;
      uint64_t SWRBBEN:1;
      uint64_t reservedSpace3:3;
      uint64_t OSC1KHZSEL:3;
      uint64_t reservedSpace4:1;
      uint64_t CORECTRL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACTRL;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RBBNLEVEL:4;
      uint64_t reservedSpace0:4;
      uint64_t RBBPLEVEL:4;
      uint64_t reservedSpace1:3;
      uint64_t RBBPDDIS:1;
      uint64_t FBBNLEVEL:4;
      uint64_t reservedSpace2:4;
      uint64_t FBBPLEVEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCTRL;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAM_PD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRAMCTRL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAM_PDS:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRAMCTRL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAM_STDY:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRAMCTRL_2;

};

#define PMC0 (*(volatile struct PMC0_tag *) 0x410a1000)

struct SIM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A7_SW_RESET:1;
      uint64_t EN_SEC_VIO:1;
      uint64_t PMIC_STBY_REQ:1;
      uint64_t MIPI_ISO_DISABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t M4_FPU_DISABLE:1;
      uint64_t M4_MPU_DISABLE:1;
      uint64_t reservedSpace1:1;
      uint64_t EN_SNVS_HARD_RST:1;
      uint64_t EN_WDG2_HARD_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOPT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK_DPM_PANIC_OUT:1;
      uint64_t MASK_DPM_PANIC_IN:1;
      uint64_t reservedSpace0:5;
      uint64_t DSI_PLL_EN:1;
      uint64_t DSI_CM:1;
      uint64_t DSI_SD:1;
      uint64_t QSPI_PULL_TIM_RELAX_b:1;
      uint64_t reservedSpace1:18;
      uint64_t DSI_RST_BYTE_N:1;
      uint64_t DSI_RST_ESC_N:1;
      uint64_t DSI_RST_DPI_N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOPT1CFG;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSIC_ZQ_VOH:5;
      uint64_t reservedSpace0:2;
      uint64_t HSIC_ZQ_CAL_EN:1;
      uint64_t HSIC_ZQ_VOH_M1:5;
      uint64_t reservedSpace1:3;
      uint64_t HSIC_ZQ_VOL:5;
      uint64_t reservedSpace2:3;
      uint64_t HSIC_ZQ_VOL_M1:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSIC_CAL;

  uint8_t res1[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSC_CAP_TRIM:4;
      uint64_t reservedSpace0:27;
      uint64_t COIN_CELL_CHARGE_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SNVS_MISC_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTR_CLK_DIS:1;
      uint64_t OCOTP_CLK_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USB_PHY_VLLS_WAKEUP_EN:1;
      uint64_t USB_PHY_GLOBAL_WAKEUP_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR1;

  uint32_t GPR2;
  uint32_t GPR3;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB_DELAY_OE_EXTS:1;
      uint64_t reservedSpace0:3;
      uint64_t OBS_CLK_ENABLE:1;
      uint64_t reservedSpace1:1;
      uint64_t M4_OBS_CLK_SRC_SEL:4;
      uint64_t M4_OBS_CLK_DIV_RATIO:3;
      uint64_t A7_OBS_CLK_SRC_SEL:4;
      uint64_t A7_OBS_CLK_DIV_RATIO:3;
      uint64_t TESTCLK_TRIM:3;
      uint64_t TESTCLK_OBE:1;
      uint64_t DISABLE_DDR_HW_AUTO_LP_MODE:1;
      uint64_t A7_TSTMR_COMP_EN:1;
      uint64_t A7_TO_M4_RST_IRQ_CTRL:1;
      uint64_t A7_TO_M4_RST_IRQ_EN:1;
      uint64_t reservedSpace2:1;
      uint64_t A7_TSTMR_COMP_IRQ_CTRL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISC_CTRL0;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPDATE_DGO_GP1:1;
      uint64_t UPDATE_DGO_GP2:1;
      uint64_t UPDATE_DGO_GP3:1;
      uint64_t UPDATE_DGO_GP4:1;
      uint64_t UPDATE_DGO_GP5:1;
      uint64_t UPDATE_DGO_GP6:1;
      uint64_t reservedSpace0:7;
      uint64_t WR_ACK_DGO_GP1:1;
      uint64_t WR_ACK_DGO_GP2:1;
      uint64_t WR_ACK_DGO_GP3:1;
      uint64_t WR_ACK_DGO_GP4:1;
      uint64_t WR_ACK_DGO_GP5:1;
      uint64_t WR_ACK_DGO_GP6:1;
      uint64_t reservedSpace1:7;
      uint64_t INT_EN_ACK1:1;
      uint64_t INT_EN_ACK2:1;
      uint64_t INT_EN_ACK3:1;
      uint64_t INT_EN_ACK4:1;
      uint64_t INT_EN_ACK5:1;
      uint64_t INT_EN_ACK6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIM_DGO_CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPDATE_DGO_GP7:1;
      uint64_t UPDATE_DGO_GP8:1;
      uint64_t UPDATE_DGO_GP9:1;
      uint64_t UPDATE_DGO_GP10:1;
      uint64_t UPDATE_DGO_GP11:1;
      uint64_t reservedSpace0:8;
      uint64_t WR_ACK_DGO_GP7:1;
      uint64_t WR_ACK_DGO_GP8:1;
      uint64_t WR_ACK_DGO_GP9:1;
      uint64_t WR_ACK_DGO_GP10:1;
      uint64_t WR_ACK_DGO_GP11:1;
      uint64_t reservedSpace1:9;
      uint64_t INT_EN_ACK7:1;
      uint64_t INT_EN_ACK8:1;
      uint64_t INT_EN_ACK9:1;
      uint64_t INT_EN_ACK10:1;
      uint64_t INT_EN_ACK11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIM_DGO_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIM_DGO_GP1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIM_DGO_GP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIM_DGO_GP2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIM_DGO_GP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIM_DGO_GP3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIM_DGO_GP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIM_DGO_GP4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIM_DGO_GP4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIM_DGO_GP5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIM_DGO_GP5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIM_DGO_GP6:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIM_DGO_GP6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIM_DGO_GP7:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIM_DGO_GP7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIM_DGO_GP8:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIM_DGO_GP8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIM_DGO_GP9:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIM_DGO_GP9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIM_DGO_GP10:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIM_DGO_GP10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBG_SPIDEN_SPNIDEN:1;
      uint64_t SIM_DGO_GP11_1:15;
      uint64_t PTA_RANGE_CTRL:2;
      uint64_t PTB_RANGE_CTRL:2;
      uint64_t PTC_RANGE_CTRL:2;
      uint64_t PTE_RANGE_CTRL:2;
      uint64_t PTF_RANGE_CTRL:2;
      uint64_t SIM_DGO_GP11_2:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIM_DGO_GP11;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WKPU_CH_WAKEUP_EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WKPU_WAKEUP_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JTAG_INIT_BIT:1;
      uint64_t COMPANY_IDCODE:11;
      uint64_t PIN_PLUG:10;
      uint64_t DESIGN_CENTER_IDCODE:6;
      uint64_t PRN_PLUG:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JTAG_ID_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A7_TSTMR_CMP_VAL_L:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A7_TSTMR_CMP_VAL_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A7_TSTMR_CMP_VAL_H:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A7_TSTMR_CMP_VAL_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RASRCN:4;
      uint64_t RASRCP:4;
      uint64_t READ_MODE:1;
      uint64_t FASTFREEZE:1;
      uint64_t FREEZE:1;
      uint64_t reservedSpace0:5;
      uint64_t NASRCN:4;
      uint64_t NASRCP:4;
      uint64_t COMPOK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP_CELL_OVERRIDE;

};

#define SIM (*(volatile struct SIM_tag *) 0x410a3000)

struct TSTMRA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HIGH;

};

#define TSTMRA (*(volatile struct TSTMRA_tag *) 0x410a3c00)

struct TSTMRB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HIGH;

};

#define TSTMRB (*(volatile struct TSTMRB_tag *) 0x410a3c08)

struct MSMC0_tag
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
      uint64_t PWRD_INDPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t AVLLS:1;
      uint64_t reservedSpace1:1;
      uint64_t ALLS:1;
      uint64_t reservedSpace2:1;
      uint64_t AVLP:1;
      uint64_t reservedSpace3:1;
      uint64_t AHSRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMPROT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STOPM:3;
      uint64_t reservedSpace0:5;
      uint64_t RUNM:2;
      uint64_t reservedSpace1:6;
      uint64_t PSTOPO:2;
      uint64_t reservedSpace2:6;
      uint64_t STOPA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMCTRL;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMSTAT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMSTAT;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP:1;
      uint64_t POR:1;
      uint64_t LVD:1;
      uint64_t HVD:1;
      uint64_t WARM:1;
      uint64_t FATAL:1;
      uint64_t reservedSpace0:1;
      uint64_t CORE:1;
      uint64_t PIN:1;
      uint64_t MDM:1;
      uint64_t RSTACK:1;
      uint64_t STOPACK:1;
      uint64_t SCG:1;
      uint64_t WDOG:1;
      uint64_t SW:1;
      uint64_t LOCKUP:1;
      uint64_t CORE0:1;
      uint64_t reservedSpace1:7;
      uint64_t VBAT:1;
      uint64_t reservedSpace2:3;
      uint64_t JTAG:1;
      uint64_t reservedSpace3:1;
      uint64_t SECVIO:1;
      uint64_t TAMPER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FILTCFG:5;
      uint64_t reservedSpace0:3;
      uint64_t FILTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP:1;
      uint64_t POR:1;
      uint64_t LVD:1;
      uint64_t HVD:1;
      uint64_t WARM:1;
      uint64_t FATAL:1;
      uint64_t reservedSpace0:2;
      uint64_t PIN:1;
      uint64_t MDM:1;
      uint64_t RSTACK:1;
      uint64_t STOPACK:1;
      uint64_t SCG:1;
      uint64_t WDOG:1;
      uint64_t SW:1;
      uint64_t LOCKUP:1;
      uint64_t CORE0:1;
      uint64_t reservedSpace1:7;
      uint64_t VBAT:1;
      uint64_t reservedSpace2:3;
      uint64_t JTAG:1;
      uint64_t reservedSpace3:1;
      uint64_t SECVIO:1;
      uint64_t TAMPER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PIN:1;
      uint64_t MDM:1;
      uint64_t reservedSpace1:1;
      uint64_t STOPACK:1;
      uint64_t reservedSpace2:1;
      uint64_t WDOG:1;
      uint64_t SW:1;
      uint64_t LOCKUP:1;
      uint64_t reservedSpace3:8;
      uint64_t VBAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRIE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PIN:1;
      uint64_t MDM:1;
      uint64_t reservedSpace1:1;
      uint64_t STOPACK:1;
      uint64_t reservedSpace2:1;
      uint64_t WDOG:1;
      uint64_t SW:1;
      uint64_t LOCKUP:1;
      uint64_t reservedSpace3:8;
      uint64_t VBAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRIF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PIN:1;
      uint64_t MDM:1;
      uint64_t reservedSpace1:1;
      uint64_t STOPACK:1;
      uint64_t reservedSpace2:1;
      uint64_t WDOG:1;
      uint64_t SW:1;
      uint64_t LOCKUP:1;
      uint64_t CORE0:1;
      uint64_t reservedSpace3:7;
      uint64_t VBAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSRE;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOTCFG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  uint8_t res4[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FORCECFG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FM;

};

#define MSMC0 (*(volatile struct MSMC0_tag *) 0x410a4000)

struct MSMC1_tag
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
      uint64_t PWRD_INDPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t AVLLS:1;
      uint64_t reservedSpace1:1;
      uint64_t ALLS:1;
      uint64_t reservedSpace2:1;
      uint64_t AVLP:1;
      uint64_t reservedSpace3:1;
      uint64_t AHSRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMPROT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STOPM:3;
      uint64_t reservedSpace0:5;
      uint64_t RUNM:2;
      uint64_t reservedSpace1:6;
      uint64_t PSTOPO:2;
      uint64_t reservedSpace2:6;
      uint64_t STOPA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMCTRL;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMSTAT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMSTAT;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP:1;
      uint64_t POR:1;
      uint64_t LVD:1;
      uint64_t HVD:1;
      uint64_t WARM:1;
      uint64_t FATAL:1;
      uint64_t reservedSpace0:1;
      uint64_t CORE:1;
      uint64_t PIN:1;
      uint64_t MDM:1;
      uint64_t RSTACK:1;
      uint64_t STOPACK:1;
      uint64_t SCG:1;
      uint64_t WDOG:1;
      uint64_t SW:1;
      uint64_t LOCKUP:1;
      uint64_t CORE0:1;
      uint64_t reservedSpace1:7;
      uint64_t VBAT:1;
      uint64_t reservedSpace2:3;
      uint64_t JTAG:1;
      uint64_t reservedSpace3:1;
      uint64_t SECVIO:1;
      uint64_t TAMPER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FILTCFG:5;
      uint64_t reservedSpace0:3;
      uint64_t FILTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP:1;
      uint64_t POR:1;
      uint64_t LVD:1;
      uint64_t HVD:1;
      uint64_t WARM:1;
      uint64_t FATAL:1;
      uint64_t reservedSpace0:2;
      uint64_t PIN:1;
      uint64_t MDM:1;
      uint64_t RSTACK:1;
      uint64_t STOPACK:1;
      uint64_t SCG:1;
      uint64_t WDOG:1;
      uint64_t SW:1;
      uint64_t LOCKUP:1;
      uint64_t CORE0:1;
      uint64_t reservedSpace1:7;
      uint64_t VBAT:1;
      uint64_t reservedSpace2:3;
      uint64_t JTAG:1;
      uint64_t reservedSpace3:1;
      uint64_t SECVIO:1;
      uint64_t TAMPER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PIN:1;
      uint64_t MDM:1;
      uint64_t reservedSpace1:1;
      uint64_t STOPACK:1;
      uint64_t reservedSpace2:1;
      uint64_t WDOG:1;
      uint64_t SW:1;
      uint64_t LOCKUP:1;
      uint64_t reservedSpace3:8;
      uint64_t VBAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRIE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PIN:1;
      uint64_t MDM:1;
      uint64_t reservedSpace1:1;
      uint64_t STOPACK:1;
      uint64_t reservedSpace2:1;
      uint64_t WDOG:1;
      uint64_t SW:1;
      uint64_t LOCKUP:1;
      uint64_t reservedSpace3:8;
      uint64_t VBAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRIF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PIN:1;
      uint64_t MDM:1;
      uint64_t reservedSpace1:1;
      uint64_t STOPACK:1;
      uint64_t reservedSpace2:1;
      uint64_t WDOG:1;
      uint64_t SW:1;
      uint64_t LOCKUP:1;
      uint64_t CORE0:1;
      uint64_t reservedSpace3:7;
      uint64_t VBAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSRE;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOTCFG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  uint8_t res4[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FORCECFG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FM;

};

#define MSMC1 (*(volatile struct MSMC1_tag *) 0x40410000)

struct QuadSPI0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRSTSD:1;
      uint64_t SWRSTHD:1;
      uint64_t END_CFG:2;
      uint64_t reservedSpace0:1;
      uint64_t DQS_LAT_EN:1;
      uint64_t DQS_EN:1;
      uint64_t DDR_EN:1;
      uint64_t reservedSpace1:2;
      uint64_t CLR_RXF:1;
      uint64_t CLR_TXF:1;
      uint64_t reservedSpace2:2;
      uint64_t MDIS:1;
      uint64_t reservedSpace3:1;
      uint64_t ISD2FA:1;
      uint64_t ISD3FA:1;
      uint64_t reservedSpace4:6;
      uint64_t SCLKCFG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_MCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATSZ:16;
      uint64_t reservedSpace0:8;
      uint64_t SEQID:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_IPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCSS:4;
      uint64_t reservedSpace0:4;
      uint64_t TCSH:4;
      uint64_t reservedSpace1:4;
      uint64_t TDH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_FLSHCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTRID:4;
      uint64_t reservedSpace0:4;
      uint64_t ADATSZ:7;
      uint64_t reservedSpace1:16;
      uint64_t HP_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_BUF0CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTRID:4;
      uint64_t reservedSpace0:4;
      uint64_t ADATSZ:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_BUF1CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTRID:4;
      uint64_t reservedSpace0:4;
      uint64_t ADATSZ:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_BUF2CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTRID:4;
      uint64_t reservedSpace0:4;
      uint64_t ADATSZ:7;
      uint64_t reservedSpace1:16;
      uint64_t ALLMST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_BUF3CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t SEQID:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_BFGENCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOCCFG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_SOCCR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TPINDX0:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_BUF0IND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TPINDX1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_BUF1IND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TPINDX2:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_BUF2IND;

  uint8_t res2[196];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SFADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_SFAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAS:4;
      uint64_t reservedSpace0:12;
      uint64_t WA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_SFACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSENA:1;
      uint64_t HSPHS:1;
      uint64_t HSDLY:1;
      uint64_t reservedSpace0:2;
      uint64_t FSPHS:1;
      uint64_t FSDLY:1;
      uint64_t reservedSpace1:9;
      uint64_t DDRSMP:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_SMPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t RDBFL:5;
      uint64_t reservedSpace1:3;
      uint64_t RDCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_RBSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WMRK:4;
      uint64_t reservedSpace0:4;
      uint64_t RXBRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_RBCT;

  uint8_t res3[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t TRBFL:5;
      uint64_t reservedSpace1:3;
      uint64_t TRCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_TBSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_TBDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WMRK:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_TBCT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t IP_ACC:1;
      uint64_t AHB_ACC:1;
      uint64_t reservedSpace0:2;
      uint64_t AHBGNT:1;
      uint64_t AHBTRN:1;
      uint64_t AHB0NE:1;
      uint64_t AHB1NE:1;
      uint64_t AHB2NE:1;
      uint64_t AHB3NE:1;
      uint64_t AHB0FUL:1;
      uint64_t AHB1FUL:1;
      uint64_t AHB2FUL:1;
      uint64_t AHB3FUL:1;
      uint64_t reservedSpace1:1;
      uint64_t RXWE:1;
      uint64_t reservedSpace2:2;
      uint64_t RXFULL:1;
      uint64_t reservedSpace3:3;
      uint64_t RXDMA:1;
      uint64_t TXEDA:1;
      uint64_t TXWA:1;
      uint64_t TXDMA:1;
      uint64_t TXFULL:1;
      uint64_t reservedSpace4:1;
      uint64_t DLPSMP:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFF:1;
      uint64_t reservedSpace0:3;
      uint64_t IPGEF:1;
      uint64_t reservedSpace1:1;
      uint64_t IPIEF:1;
      uint64_t IPAEF:1;
      uint64_t reservedSpace2:4;
      uint64_t ABOF:1;
      uint64_t AIBSEF:1;
      uint64_t AITEF:1;
      uint64_t ABSEF:1;
      uint64_t RBDF:1;
      uint64_t RBOF:1;
      uint64_t reservedSpace3:5;
      uint64_t ILLINE:1;
      uint64_t reservedSpace4:2;
      uint64_t TBUF:1;
      uint64_t TBFF:1;
      uint64_t reservedSpace5:3;
      uint64_t DLPFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_FR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFIE:1;
      uint64_t reservedSpace0:3;
      uint64_t IPGEIE:1;
      uint64_t reservedSpace1:1;
      uint64_t IPIEIE:1;
      uint64_t IPAEIE:1;
      uint64_t reservedSpace2:4;
      uint64_t ABOIE:1;
      uint64_t AIBSIE:1;
      uint64_t AITIE:1;
      uint64_t ABSEIE:1;
      uint64_t RBDIE:1;
      uint64_t RBOIE:1;
      uint64_t reservedSpace3:3;
      uint64_t RBDDE:1;
      uint64_t reservedSpace4:1;
      uint64_t ILLINIE:1;
      uint64_t reservedSpace5:1;
      uint64_t TBFDE:1;
      uint64_t TBUIE:1;
      uint64_t TBFIE:1;
      uint64_t reservedSpace6:3;
      uint64_t DLPFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_RSER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSPND:1;
      uint64_t reservedSpace0:5;
      uint64_t SPDBUF:2;
      uint64_t reservedSpace1:1;
      uint64_t DATLFT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_SPNDST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFPTRC:1;
      uint64_t reservedSpace0:7;
      uint64_t IPPTRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_SPTRCLR;

  uint8_t res4[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t TPADA1:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_SFA1AD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t TPADA2:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_SFA2AD;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLPV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_DLPR;

  uint8_t res6[108];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_RBDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_RBDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_RBDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_RBDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_RBDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_RBDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_RBDR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_RBDR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_RBDR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_RBDR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_RBDR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_RBDR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_RBDR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_RBDR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_RBDR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_RBDR15;

  uint8_t res7[192];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUTKEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCK:1;
      uint64_t UNLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LCKCR;

  uint8_t res8[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QuadSPI0_LUT63;

};

#define QuadSPI0 (*(volatile struct QuadSPI0_tag *) 0x410a5000)

struct OTFAD_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQE:1;
      uint64_t FERR:1;
      uint64_t FSVM:1;
      uint64_t FLDM:1;
      uint64_t KBSE:1;
      uint64_t KBPE:1;
      uint64_t KBCE:1;
      uint64_t RRAE:1;
      uint64_t reservedSpace0:8;
      uint64_t CCTX:2;
      uint64_t reservedSpace1:2;
      uint64_t CRCE:1;
      uint64_t CRCI:1;
      uint64_t reservedSpace2:8;
      uint64_t SKBP:1;
      uint64_t GE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KBERR:1;
      uint64_t MDPCP:1;
      uint64_t MODE:2;
      uint64_t NCTX:4;
      uint64_t CTXER:4;
      uint64_t reservedSpace0:4;
      uint64_t CTXIE:4;
      uint64_t reservedSpace1:4;
      uint64_t HRL:4;
      uint64_t RRAM:1;
      uint64_t GEM:1;
      uint64_t KBPE:1;
      uint64_t KBD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRCD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC;

};

#define OTFAD (*(volatile struct OTFAD_tag *) 0x410a5c00)

struct OCOTP_CTRL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t BUSY:1;
      uint64_t ERROR:1;
      uint64_t RELOAD_SHADOWS:1;
      uint64_t reservedSpace0:2;
      uint64_t SUPPADD:1;
      uint64_t WORDLOCK:1;
      uint64_t RSVD0:1;
      uint64_t WR_UNLOCK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t BUSY:1;
      uint64_t ERROR:1;
      uint64_t RELOAD_SHADOWS:1;
      uint64_t reservedSpace0:2;
      uint64_t SUPPADD:1;
      uint64_t WORDLOCK:1;
      uint64_t RSVD0:1;
      uint64_t WR_UNLOCK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_CTRL_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t BUSY:1;
      uint64_t ERROR:1;
      uint64_t RELOAD_SHADOWS:1;
      uint64_t reservedSpace0:2;
      uint64_t SUPPADD:1;
      uint64_t WORDLOCK:1;
      uint64_t RSVD0:1;
      uint64_t WR_UNLOCK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_CTRL_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t BUSY:1;
      uint64_t ERROR:1;
      uint64_t RELOAD_SHADOWS:1;
      uint64_t reservedSpace0:2;
      uint64_t SUPPADD:1;
      uint64_t WORDLOCK:1;
      uint64_t RSVD0:1;
      uint64_t WR_UNLOCK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_CTRL_TOG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_PDN;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_DATA;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READ_FUSE:1;
      uint64_t RSVD0:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_READ_CTRL;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_READ_FUSE_DATA;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSVD0:1;
      uint64_t SRK_REVOKE_LOCK:1;
      uint64_t FIELD_RETURN_LOCK:1;
      uint64_t reservedSpace0:2;
      uint64_t RSVD1:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_SW_STICKY;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HAB_JDE:1;
      uint64_t SPARE:30;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_SCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HAB_JDE:1;
      uint64_t SPARE:30;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_SCS_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HAB_JDE:1;
      uint64_t SPARE:30;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_SCS_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HAB_JDE:1;
      uint64_t SPARE:30;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_SCS_TOG;

  uint8_t res5[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT_40_32:9;
      uint64_t SEC:1;
      uint64_t DED:1;
      uint64_t LOCKED:1;
      uint64_t PROGFAIL:1;
      uint64_t ACK:1;
      uint64_t PWOK:1;
      uint64_t FLAGSTATE:4;
      uint64_t SEC_RELOAD:1;
      uint64_t DED_RELOAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_OUT_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT_40_32:9;
      uint64_t SEC:1;
      uint64_t DED:1;
      uint64_t LOCKED:1;
      uint64_t PROGFAIL:1;
      uint64_t ACK:1;
      uint64_t PWOK:1;
      uint64_t FLAGSTATE:4;
      uint64_t SEC_RELOAD:1;
      uint64_t DED_RELOAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_OUT_STATUS_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT_40_32:9;
      uint64_t SEC:1;
      uint64_t DED:1;
      uint64_t LOCKED:1;
      uint64_t PROGFAIL:1;
      uint64_t ACK:1;
      uint64_t PWOK:1;
      uint64_t FLAGSTATE:4;
      uint64_t SEC_RELOAD:1;
      uint64_t DED_RELOAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_OUT_STATUS_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT_40_32:9;
      uint64_t SEC:1;
      uint64_t DED:1;
      uint64_t LOCKED:1;
      uint64_t PROGFAIL:1;
      uint64_t ACK:1;
      uint64_t PWOK:1;
      uint64_t FLAGSTATE:4;
      uint64_t SEC_RELOAD:1;
      uint64_t DED_RELOAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_OUT_STATUS_TOG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTWORD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_STARTWORD;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STEP:16;
      uint64_t MINOR:8;
      uint64_t MAJOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_VERSION;

  uint8_t res7[972];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_LOCK0;

  uint8_t res8[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_LOCK1;

  uint8_t res9[108];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_BOOT0;

  uint8_t res10[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_BOOT3;

  uint8_t res11[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_BOOT4;

  uint8_t res12[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_BOOT5;

  uint8_t res13[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_BOOT6;

  uint8_t res14[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_BOOT7;

  uint8_t res15[108];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_ANA2;

  uint8_t res16[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_ANA3;

  uint8_t res17[700];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_TESTER13;

  uint8_t res18[1868];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP60;

  uint8_t res19[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP61;

  uint8_t res20[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP62;

  uint8_t res21[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP63;

  uint8_t res22[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP64;

  uint8_t res23[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP65;

  uint8_t res24[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP66;

  uint8_t res25[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP67;

  uint8_t res26[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP70;

  uint8_t res27[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP71;

  uint8_t res28[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP72;

  uint8_t res29[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP73;

  uint8_t res30[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP74;

  uint8_t res31[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP75;

  uint8_t res32[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP76;

  uint8_t res33[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP77;

  uint8_t res34[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP80;

  uint8_t res35[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP81;

  uint8_t res36[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP82;

  uint8_t res37[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP83;

  uint8_t res38[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP84;

  uint8_t res39[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP85;

  uint8_t res40[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP86;

  uint8_t res41[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP87;

  uint8_t res42[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP90;

  uint8_t res43[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP91;

  uint8_t res44[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP92;

  uint8_t res45[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP93;

  uint8_t res46[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP94;

  uint8_t res47[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP95;

  uint8_t res48[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP96;

  uint8_t res49[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_OCOTP_GP97;

};

#define OCOTP_CTRL (*(volatile struct OCOTP_CTRL_tag *) 0x410a6000)

struct PCC1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCD:3;
      uint64_t FRAC:1;
      uint64_t reservedSpace0:20;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_TPIU;

  uint8_t res0[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCD:3;
      uint64_t FRAC:1;
      uint64_t reservedSpace0:20;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_QSPI_OTFAD;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_TPM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_TPM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCD:16;
      uint64_t FRAC:8;
      uint64_t PCS:3;
      uint64_t reservedSpace0:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_SAI1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPUART2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPUART3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:2;
      uint64_t INUSE:1;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_ADC1;

};

#define PCC1 (*(volatile struct PCC1_tag *) 0x410b2050)

struct MCM_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t ASC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MCM_PLASC;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AMC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MCM_PLAMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t ARB:1;
      uint64_t reservedSpace1:14;
      uint64_t TCRAMU_Priority:2;
      uint64_t TCRAMU_Write_Protect:1;
      uint64_t reservedSpace2:1;
      uint64_t TCRAML_Priority:2;
      uint64_t TCRAML_Write_Protect:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCM_PLACR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCM_FADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BEDA:1;
      uint64_t BEMD:1;
      uint64_t reservedSpace0:2;
      uint64_t BESZ:2;
      uint64_t reservedSpace1:1;
      uint64_t BEWT:1;
      uint64_t BEMN:4;
      uint64_t reservedSpace2:19;
      uint64_t BEOVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCM_FATR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCM_FDR;

};

#define MCM (*(volatile struct MCM_tag *) 0xe0080008)

struct MMCAU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IC:1;
      uint64_t DPE:1;
      uint64_t reservedSpace0:26;
      uint64_t VER:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CASR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CA_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CA_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CA_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CA_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CA_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CA_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CA_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CA_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CA_8;

};

#define MMCAU (*(volatile struct MMCAU_tag *) 0xe0081000)

struct LMEM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENCACHE:1;
      uint64_t ENWRBUF:1;
      uint64_t PCCR2:1;
      uint64_t PCCR3:1;
      uint64_t reservedSpace0:20;
      uint64_t INVW0:1;
      uint64_t PUSHW0:1;
      uint64_t INVW1:1;
      uint64_t PUSHW1:1;
      uint64_t reservedSpace1:3;
      uint64_t GO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LGO:1;
      uint64_t reservedSpace0:2;
      uint64_t CACHEADDR:11;
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
  } __attribute__((aligned(4))) PCCLCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LGO:1;
      uint64_t reservedSpace0:2;
      uint64_t PHYADDR:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCCSAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCCCVR;

};

#define LMEM (*(volatile struct LMEM_tag *) 0xe0082000)

struct FGPIOA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTSO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTCO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDDR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_3;

};

#define FGPIOA (*(volatile struct FGPIOA_tag *) 0xf9000000)

struct FGPIOB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTSO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTCO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDDR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t D3ACP:3;
      uint64_t D4ACP:3;
      uint64_t D5ACP:3;
      uint64_t D6ACP:3;
      uint64_t D7ACP:3;
      uint64_t reservedSpace0:5;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDACP0_3;

};

#define FGPIOB (*(volatile struct FGPIOB_tag *) 0xf9000040)

