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

struct PPB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISMCYCINT:1;
      uint64_t DISDEFWBUF:1;
      uint64_t DISFOLD:1;
      uint64_t reservedSpace0:5;
      uint64_t DISFPCA:1;
      uint64_t DISOOFP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACTLR;

  uint8_t res0[4];

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

  uint8_t res1[224];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER3;

  uint8_t res2[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER3;

  uint8_t res3[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR3;

  uint8_t res4[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR3;

  uint8_t res5[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR3;

  uint8_t res6[240];

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
  } __attribute__((aligned(4))) NVIC_IPR0;

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
  } __attribute__((aligned(4))) NVIC_IPR1;

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
  } __attribute__((aligned(4))) NVIC_IPR2;

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
  } __attribute__((aligned(4))) NVIC_IPR3;

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
  } __attribute__((aligned(4))) NVIC_IPR4;

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
  } __attribute__((aligned(4))) NVIC_IPR5;

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
  } __attribute__((aligned(4))) NVIC_IPR6;

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
  } __attribute__((aligned(4))) NVIC_IPR7;

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
  } __attribute__((aligned(4))) NVIC_IPR8;

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
  } __attribute__((aligned(4))) NVIC_IPR9;

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
  } __attribute__((aligned(4))) NVIC_IPR10;

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
  } __attribute__((aligned(4))) NVIC_IPR11;

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
  } __attribute__((aligned(4))) NVIC_IPR12;

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
  } __attribute__((aligned(4))) NVIC_IPR13;

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
  } __attribute__((aligned(4))) NVIC_IPR14;

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
  } __attribute__((aligned(4))) NVIC_IPR15;

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
  } __attribute__((aligned(4))) NVIC_IPR16;

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
  } __attribute__((aligned(4))) NVIC_IPR17;

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
  } __attribute__((aligned(4))) NVIC_IPR18;

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
  } __attribute__((aligned(4))) NVIC_IPR19;

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
  } __attribute__((aligned(4))) NVIC_IPR20;

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
  } __attribute__((aligned(4))) NVIC_IPR21;

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
  } __attribute__((aligned(4))) NVIC_IPR22;

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
  } __attribute__((aligned(4))) NVIC_IPR23;

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
  } __attribute__((aligned(4))) NVIC_IPR24;

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
  } __attribute__((aligned(4))) NVIC_IPR25;

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
  } __attribute__((aligned(4))) NVIC_IPR26;

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
  } __attribute__((aligned(4))) NVIC_IPR27;

  uint8_t res7[2192];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Revision:4;
      uint64_t PartNo:12;
      uint64_t Constant:4;
      uint64_t Variant:4;
      uint64_t Implementer:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VECTACTIVE:9;
      uint64_t reservedSpace0:2;
      uint64_t RETTOBASE:1;
      uint64_t VECTPENDING:6;
      uint64_t reservedSpace1:4;
      uint64_t ISRPENDING:1;
      uint64_t reservedSpace2:2;
      uint64_t PENDSTCLR:1;
      uint64_t PENDSTSET:1;
      uint64_t PENDSVCLR:1;
      uint64_t PENDSVSET:1;
      uint64_t reservedSpace3:2;
      uint64_t NMIPENDSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t TBLOFF:22;
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
      uint64_t ENDIANNESS:1;
      uint64_t VECTKEY:16;
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
      uint64_t NONBASETHRDENA:1;
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
  } __attribute__((aligned(4))) SHCSR;

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
      uint64_t MLSPERR:1;
      uint64_t reservedSpace1:1;
      uint64_t MMARVALID:1;
      uint64_t IBUSERR:1;
      uint64_t PRECISERR:1;
      uint64_t IMPRECISERR:1;
      uint64_t UNSTKERR:1;
      uint64_t STKERR:1;
      uint64_t LSPERR:1;
      uint64_t reservedSpace2:1;
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

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMFAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BFAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFSR;

  uint8_t res9[72];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t CP10:2;
      uint64_t CP11:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPACR;

  uint8_t res10[4];

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RNR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:4;
      uint64_t VALID:1;
      uint64_t reservedSpace0:4;
      uint64_t ADDR:23;
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
      uint64_t reservedSpace0:4;
      uint64_t ADDR:23;
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
      uint64_t reservedSpace0:4;
      uint64_t ADDR:23;
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
      uint64_t reservedSpace0:4;
      uint64_t ADDR:23;
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

  uint8_t res11[324];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTID:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STIR;

  uint8_t res12[48];

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t ADDRESS:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCAR;

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

};

#define PPB (*(volatile struct PPB_tag *) 0xe000e008)

struct DLR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LN0:1;
      uint64_t LN1:1;
      uint64_t LN2:1;
      uint64_t LN3:1;
      uint64_t LN4:1;
      uint64_t LN5:1;
      uint64_t LN6:1;
      uint64_t LN7:1;
      uint64_t LN8:1;
      uint64_t LN9:1;
      uint64_t LN10:1;
      uint64_t LN11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVRSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LN0:1;
      uint64_t LN1:1;
      uint64_t LN2:1;
      uint64_t LN3:1;
      uint64_t LN4:1;
      uint64_t LN5:1;
      uint64_t LN6:1;
      uint64_t LN7:1;
      uint64_t LN8:1;
      uint64_t LN9:1;
      uint64_t LN10:1;
      uint64_t LN11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVRCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RS0:4;
      uint64_t RS1:4;
      uint64_t RS2:4;
      uint64_t RS3:4;
      uint64_t RS4:4;
      uint64_t RS5:4;
      uint64_t RS6:4;
      uint64_t RS7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RS8:4;
      uint64_t RS9:4;
      uint64_t RS10:4;
      uint64_t RS11:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LN0:1;
      uint64_t LN1:1;
      uint64_t LN2:1;
      uint64_t LN3:1;
      uint64_t LN4:1;
      uint64_t LN5:1;
      uint64_t LN6:1;
      uint64_t LN7:1;
      uint64_t LN8:1;
      uint64_t LN9:1;
      uint64_t LN10:1;
      uint64_t LN11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LNEN;

};

#define DLR (*(volatile struct DLR_tag *) 0x50004900)

struct ERU0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXS0A:2;
      uint64_t EXS0B:2;
      uint64_t EXS1A:2;
      uint64_t EXS1B:2;
      uint64_t EXS2A:2;
      uint64_t EXS2B:2;
      uint64_t EXS3A:2;
      uint64_t EXS3B:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXISEL;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t LD:1;
      uint64_t RE:1;
      uint64_t FE:1;
      uint64_t OCS:3;
      uint64_t FL:1;
      uint64_t SS:2;
      uint64_t NA:1;
      uint64_t NB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXICON_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t LD:1;
      uint64_t RE:1;
      uint64_t FE:1;
      uint64_t OCS:3;
      uint64_t FL:1;
      uint64_t SS:2;
      uint64_t NA:1;
      uint64_t NB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXICON_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t LD:1;
      uint64_t RE:1;
      uint64_t FE:1;
      uint64_t OCS:3;
      uint64_t FL:1;
      uint64_t SS:2;
      uint64_t NA:1;
      uint64_t NB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXICON_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t LD:1;
      uint64_t RE:1;
      uint64_t FE:1;
      uint64_t OCS:3;
      uint64_t FL:1;
      uint64_t SS:2;
      uint64_t NA:1;
      uint64_t NB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXICON_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISS:2;
      uint64_t GEEN:1;
      uint64_t PDR:1;
      uint64_t GP:2;
      uint64_t reservedSpace0:6;
      uint64_t IPEN0:1;
      uint64_t IPEN1:1;
      uint64_t IPEN2:1;
      uint64_t IPEN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXOCON_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISS:2;
      uint64_t GEEN:1;
      uint64_t PDR:1;
      uint64_t GP:2;
      uint64_t reservedSpace0:6;
      uint64_t IPEN0:1;
      uint64_t IPEN1:1;
      uint64_t IPEN2:1;
      uint64_t IPEN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXOCON_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISS:2;
      uint64_t GEEN:1;
      uint64_t PDR:1;
      uint64_t GP:2;
      uint64_t reservedSpace0:6;
      uint64_t IPEN0:1;
      uint64_t IPEN1:1;
      uint64_t IPEN2:1;
      uint64_t IPEN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXOCON_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISS:2;
      uint64_t GEEN:1;
      uint64_t PDR:1;
      uint64_t GP:2;
      uint64_t reservedSpace0:6;
      uint64_t IPEN0:1;
      uint64_t IPEN1:1;
      uint64_t IPEN2:1;
      uint64_t IPEN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXOCON_3;

};

#define ERU0 (*(volatile struct ERU0_tag *) 0x50004800)

struct ERU1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXS0A:2;
      uint64_t EXS0B:2;
      uint64_t EXS1A:2;
      uint64_t EXS1B:2;
      uint64_t EXS2A:2;
      uint64_t EXS2B:2;
      uint64_t EXS3A:2;
      uint64_t EXS3B:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXISEL;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t LD:1;
      uint64_t RE:1;
      uint64_t FE:1;
      uint64_t OCS:3;
      uint64_t FL:1;
      uint64_t SS:2;
      uint64_t NA:1;
      uint64_t NB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXICON_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t LD:1;
      uint64_t RE:1;
      uint64_t FE:1;
      uint64_t OCS:3;
      uint64_t FL:1;
      uint64_t SS:2;
      uint64_t NA:1;
      uint64_t NB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXICON_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t LD:1;
      uint64_t RE:1;
      uint64_t FE:1;
      uint64_t OCS:3;
      uint64_t FL:1;
      uint64_t SS:2;
      uint64_t NA:1;
      uint64_t NB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXICON_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t LD:1;
      uint64_t RE:1;
      uint64_t FE:1;
      uint64_t OCS:3;
      uint64_t FL:1;
      uint64_t SS:2;
      uint64_t NA:1;
      uint64_t NB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXICON_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISS:2;
      uint64_t GEEN:1;
      uint64_t PDR:1;
      uint64_t GP:2;
      uint64_t reservedSpace0:6;
      uint64_t IPEN0:1;
      uint64_t IPEN1:1;
      uint64_t IPEN2:1;
      uint64_t IPEN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXOCON_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISS:2;
      uint64_t GEEN:1;
      uint64_t PDR:1;
      uint64_t GP:2;
      uint64_t reservedSpace0:6;
      uint64_t IPEN0:1;
      uint64_t IPEN1:1;
      uint64_t IPEN2:1;
      uint64_t IPEN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXOCON_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISS:2;
      uint64_t GEEN:1;
      uint64_t PDR:1;
      uint64_t GP:2;
      uint64_t reservedSpace0:6;
      uint64_t IPEN0:1;
      uint64_t IPEN1:1;
      uint64_t IPEN2:1;
      uint64_t IPEN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXOCON_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISS:2;
      uint64_t GEEN:1;
      uint64_t PDR:1;
      uint64_t GP:2;
      uint64_t reservedSpace0:6;
      uint64_t IPEN0:1;
      uint64_t IPEN1:1;
      uint64_t IPEN2:1;
      uint64_t IPEN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXOCON_3;

};

#define ERU1 (*(volatile struct ERU1_tag *) 0x40044000)

struct GPDMA0_tag
{
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
  } __attribute__((aligned(4))) RAWTFR;

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
  } __attribute__((aligned(4))) RAWBLOCK;

  uint8_t res1[4];

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
  } __attribute__((aligned(4))) RAWSRCTRAN;

  uint8_t res2[4];

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
  } __attribute__((aligned(4))) RAWDSTTRAN;

  uint8_t res3[4];

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
  } __attribute__((aligned(4))) RAWERR;

  uint8_t res4[4];

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
  } __attribute__((aligned(4))) STATUSTFR;

  uint8_t res5[4];

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
  } __attribute__((aligned(4))) STATUSBLOCK;

  uint8_t res6[4];

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
  } __attribute__((aligned(4))) STATUSSRCTRAN;

  uint8_t res7[4];

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
  } __attribute__((aligned(4))) STATUSDSTTRAN;

  uint8_t res8[4];

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
  } __attribute__((aligned(4))) STATUSERR;

  uint8_t res9[4];

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
      uint64_t WE_CH0:1;
      uint64_t WE_CH1:1;
      uint64_t WE_CH2:1;
      uint64_t WE_CH3:1;
      uint64_t WE_CH4:1;
      uint64_t WE_CH5:1;
      uint64_t WE_CH6:1;
      uint64_t WE_CH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASKTFR;

  uint8_t res10[4];

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
      uint64_t WE_CH0:1;
      uint64_t WE_CH1:1;
      uint64_t WE_CH2:1;
      uint64_t WE_CH3:1;
      uint64_t WE_CH4:1;
      uint64_t WE_CH5:1;
      uint64_t WE_CH6:1;
      uint64_t WE_CH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASKBLOCK;

  uint8_t res11[4];

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
      uint64_t WE_CH0:1;
      uint64_t WE_CH1:1;
      uint64_t WE_CH2:1;
      uint64_t WE_CH3:1;
      uint64_t WE_CH4:1;
      uint64_t WE_CH5:1;
      uint64_t WE_CH6:1;
      uint64_t WE_CH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASKSRCTRAN;

  uint8_t res12[4];

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
      uint64_t WE_CH0:1;
      uint64_t WE_CH1:1;
      uint64_t WE_CH2:1;
      uint64_t WE_CH3:1;
      uint64_t WE_CH4:1;
      uint64_t WE_CH5:1;
      uint64_t WE_CH6:1;
      uint64_t WE_CH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASKDSTTRAN;

  uint8_t res13[4];

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
      uint64_t WE_CH0:1;
      uint64_t WE_CH1:1;
      uint64_t WE_CH2:1;
      uint64_t WE_CH3:1;
      uint64_t WE_CH4:1;
      uint64_t WE_CH5:1;
      uint64_t WE_CH6:1;
      uint64_t WE_CH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASKERR;

  uint8_t res14[4];

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
  } __attribute__((aligned(4))) CLEARTFR;

  uint8_t res15[4];

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
  } __attribute__((aligned(4))) CLEARBLOCK;

  uint8_t res16[4];

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
  } __attribute__((aligned(4))) CLEARSRCTRAN;

  uint8_t res17[4];

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
  } __attribute__((aligned(4))) CLEARDSTTRAN;

  uint8_t res18[4];

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
  } __attribute__((aligned(4))) CLEARERR;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFR:1;
      uint64_t BLOCK:1;
      uint64_t SRCT:1;
      uint64_t DSTT:1;
      uint64_t ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUSINT;

  uint8_t res20[4];

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
      uint64_t WE_CH0:1;
      uint64_t WE_CH1:1;
      uint64_t WE_CH2:1;
      uint64_t WE_CH3:1;
      uint64_t WE_CH4:1;
      uint64_t WE_CH5:1;
      uint64_t WE_CH6:1;
      uint64_t WE_CH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REQSRCREG;

  uint8_t res21[4];

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
      uint64_t WE_CH0:1;
      uint64_t WE_CH1:1;
      uint64_t WE_CH2:1;
      uint64_t WE_CH3:1;
      uint64_t WE_CH4:1;
      uint64_t WE_CH5:1;
      uint64_t WE_CH6:1;
      uint64_t WE_CH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REQDSTREG;

  uint8_t res22[4];

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
      uint64_t WE_CH0:1;
      uint64_t WE_CH1:1;
      uint64_t WE_CH2:1;
      uint64_t WE_CH3:1;
      uint64_t WE_CH4:1;
      uint64_t WE_CH5:1;
      uint64_t WE_CH6:1;
      uint64_t WE_CH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SGLREQSRCREG;

  uint8_t res23[4];

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
      uint64_t WE_CH0:1;
      uint64_t WE_CH1:1;
      uint64_t WE_CH2:1;
      uint64_t WE_CH3:1;
      uint64_t WE_CH4:1;
      uint64_t WE_CH5:1;
      uint64_t WE_CH6:1;
      uint64_t WE_CH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SGLREQDSTREG;

  uint8_t res24[4];

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
      uint64_t WE_CH0:1;
      uint64_t WE_CH1:1;
      uint64_t WE_CH2:1;
      uint64_t WE_CH3:1;
      uint64_t WE_CH4:1;
      uint64_t WE_CH5:1;
      uint64_t WE_CH6:1;
      uint64_t WE_CH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LSTSRCREG;

  uint8_t res25[4];

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
      uint64_t WE_CH0:1;
      uint64_t WE_CH1:1;
      uint64_t WE_CH2:1;
      uint64_t WE_CH3:1;
      uint64_t WE_CH4:1;
      uint64_t WE_CH5:1;
      uint64_t WE_CH6:1;
      uint64_t WE_CH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LSTDSTREG;

  uint8_t res26[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACFGREG;

  uint8_t res27[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH:8;
      uint64_t WE_CH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHENREG;

  uint8_t res28[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

  uint8_t res29[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERSION;

};

#define GPDMA0 (*(volatile struct GPDMA0_tag *) 0x500142c0)

struct GPDMA0_CH0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t LOC:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LLP;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
      uint64_t DST_TR_WIDTH:3;
      uint64_t SRC_TR_WIDTH:3;
      uint64_t DINC:2;
      uint64_t SINC:2;
      uint64_t DEST_MSIZE:3;
      uint64_t SRC_MSIZE:3;
      uint64_t SRC_GATHER_EN:1;
      uint64_t DST_SCATTER_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t TT_FC:3;
      uint64_t reservedSpace1:4;
      uint64_t LLP_DST_EN:1;
      uint64_t LLP_SRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCK_TS:12;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSTAT;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTATAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSTATAR;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTATAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSTATAR;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t CH_PRIOR:3;
      uint64_t CH_SUSP:1;
      uint64_t FIFO_EMPTY:1;
      uint64_t HS_SEL_DST:1;
      uint64_t HS_SEL_SRC:1;
      uint64_t LOCK_CH_L:2;
      uint64_t LOCK_B_L:2;
      uint64_t LOCK_CH:1;
      uint64_t LOCK_B:1;
      uint64_t DST_HS_POL:1;
      uint64_t SRC_HS_POL:1;
      uint64_t MAX_ABRST:10;
      uint64_t RELOAD_SRC:1;
      uint64_t RELOAD_DST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCMODE:1;
      uint64_t FIFO_MODE:1;
      uint64_t PROTCTL:3;
      uint64_t DS_UPD_EN:1;
      uint64_t SS_UPD_EN:1;
      uint64_t SRC_PER:4;
      uint64_t DEST_PER:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SGI:20;
      uint64_t SGC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SGR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSI:20;
      uint64_t DSC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSR;

};

#define GPDMA0_CH0 (*(volatile struct GPDMA0_CH0_tag *) 0x50014000)

struct GPDMA0_CH1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t LOC:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LLP;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
      uint64_t DST_TR_WIDTH:3;
      uint64_t SRC_TR_WIDTH:3;
      uint64_t DINC:2;
      uint64_t SINC:2;
      uint64_t DEST_MSIZE:3;
      uint64_t SRC_MSIZE:3;
      uint64_t SRC_GATHER_EN:1;
      uint64_t DST_SCATTER_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t TT_FC:3;
      uint64_t reservedSpace1:4;
      uint64_t LLP_DST_EN:1;
      uint64_t LLP_SRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCK_TS:12;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSTAT;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTATAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSTATAR;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTATAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSTATAR;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t CH_PRIOR:3;
      uint64_t CH_SUSP:1;
      uint64_t FIFO_EMPTY:1;
      uint64_t HS_SEL_DST:1;
      uint64_t HS_SEL_SRC:1;
      uint64_t LOCK_CH_L:2;
      uint64_t LOCK_B_L:2;
      uint64_t LOCK_CH:1;
      uint64_t LOCK_B:1;
      uint64_t DST_HS_POL:1;
      uint64_t SRC_HS_POL:1;
      uint64_t MAX_ABRST:10;
      uint64_t RELOAD_SRC:1;
      uint64_t RELOAD_DST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCMODE:1;
      uint64_t FIFO_MODE:1;
      uint64_t PROTCTL:3;
      uint64_t DS_UPD_EN:1;
      uint64_t SS_UPD_EN:1;
      uint64_t SRC_PER:4;
      uint64_t DEST_PER:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SGI:20;
      uint64_t SGC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SGR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSI:20;
      uint64_t DSC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSR;

};

#define GPDMA0_CH1 (*(volatile struct GPDMA0_CH1_tag *) 0x50014058)

struct GPDMA0_CH2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
      uint64_t DST_TR_WIDTH:3;
      uint64_t SRC_TR_WIDTH:3;
      uint64_t DINC:2;
      uint64_t SINC:2;
      uint64_t DEST_MSIZE:3;
      uint64_t SRC_MSIZE:3;
      uint64_t reservedSpace0:3;
      uint64_t TT_FC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCK_TS:12;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLH;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t CH_PRIOR:3;
      uint64_t CH_SUSP:1;
      uint64_t FIFO_EMPTY:1;
      uint64_t HS_SEL_DST:1;
      uint64_t HS_SEL_SRC:1;
      uint64_t LOCK_CH_L:2;
      uint64_t LOCK_B_L:2;
      uint64_t LOCK_CH:1;
      uint64_t LOCK_B:1;
      uint64_t DST_HS_POL:1;
      uint64_t SRC_HS_POL:1;
      uint64_t MAX_ABRST:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCMODE:1;
      uint64_t FIFO_MODE:1;
      uint64_t PROTCTL:3;
      uint64_t reservedSpace0:2;
      uint64_t SRC_PER:4;
      uint64_t DEST_PER:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGH;

};

#define GPDMA0_CH2 (*(volatile struct GPDMA0_CH2_tag *) 0x500140b0)

struct GPDMA0_CH3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
      uint64_t DST_TR_WIDTH:3;
      uint64_t SRC_TR_WIDTH:3;
      uint64_t DINC:2;
      uint64_t SINC:2;
      uint64_t DEST_MSIZE:3;
      uint64_t SRC_MSIZE:3;
      uint64_t reservedSpace0:3;
      uint64_t TT_FC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCK_TS:12;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLH;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t CH_PRIOR:3;
      uint64_t CH_SUSP:1;
      uint64_t FIFO_EMPTY:1;
      uint64_t HS_SEL_DST:1;
      uint64_t HS_SEL_SRC:1;
      uint64_t LOCK_CH_L:2;
      uint64_t LOCK_B_L:2;
      uint64_t LOCK_CH:1;
      uint64_t LOCK_B:1;
      uint64_t DST_HS_POL:1;
      uint64_t SRC_HS_POL:1;
      uint64_t MAX_ABRST:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCMODE:1;
      uint64_t FIFO_MODE:1;
      uint64_t PROTCTL:3;
      uint64_t reservedSpace0:2;
      uint64_t SRC_PER:4;
      uint64_t DEST_PER:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGH;

};

#define GPDMA0_CH3 (*(volatile struct GPDMA0_CH3_tag *) 0x50014108)

struct GPDMA0_CH4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
      uint64_t DST_TR_WIDTH:3;
      uint64_t SRC_TR_WIDTH:3;
      uint64_t DINC:2;
      uint64_t SINC:2;
      uint64_t DEST_MSIZE:3;
      uint64_t SRC_MSIZE:3;
      uint64_t reservedSpace0:3;
      uint64_t TT_FC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCK_TS:12;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLH;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t CH_PRIOR:3;
      uint64_t CH_SUSP:1;
      uint64_t FIFO_EMPTY:1;
      uint64_t HS_SEL_DST:1;
      uint64_t HS_SEL_SRC:1;
      uint64_t LOCK_CH_L:2;
      uint64_t LOCK_B_L:2;
      uint64_t LOCK_CH:1;
      uint64_t LOCK_B:1;
      uint64_t DST_HS_POL:1;
      uint64_t SRC_HS_POL:1;
      uint64_t MAX_ABRST:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCMODE:1;
      uint64_t FIFO_MODE:1;
      uint64_t PROTCTL:3;
      uint64_t reservedSpace0:2;
      uint64_t SRC_PER:4;
      uint64_t DEST_PER:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGH;

};

#define GPDMA0_CH4 (*(volatile struct GPDMA0_CH4_tag *) 0x50014160)

struct GPDMA0_CH5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
      uint64_t DST_TR_WIDTH:3;
      uint64_t SRC_TR_WIDTH:3;
      uint64_t DINC:2;
      uint64_t SINC:2;
      uint64_t DEST_MSIZE:3;
      uint64_t SRC_MSIZE:3;
      uint64_t reservedSpace0:3;
      uint64_t TT_FC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCK_TS:12;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLH;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t CH_PRIOR:3;
      uint64_t CH_SUSP:1;
      uint64_t FIFO_EMPTY:1;
      uint64_t HS_SEL_DST:1;
      uint64_t HS_SEL_SRC:1;
      uint64_t LOCK_CH_L:2;
      uint64_t LOCK_B_L:2;
      uint64_t LOCK_CH:1;
      uint64_t LOCK_B:1;
      uint64_t DST_HS_POL:1;
      uint64_t SRC_HS_POL:1;
      uint64_t MAX_ABRST:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCMODE:1;
      uint64_t FIFO_MODE:1;
      uint64_t PROTCTL:3;
      uint64_t reservedSpace0:2;
      uint64_t SRC_PER:4;
      uint64_t DEST_PER:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGH;

};

#define GPDMA0_CH5 (*(volatile struct GPDMA0_CH5_tag *) 0x500141b8)

struct GPDMA0_CH6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
      uint64_t DST_TR_WIDTH:3;
      uint64_t SRC_TR_WIDTH:3;
      uint64_t DINC:2;
      uint64_t SINC:2;
      uint64_t DEST_MSIZE:3;
      uint64_t SRC_MSIZE:3;
      uint64_t reservedSpace0:3;
      uint64_t TT_FC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCK_TS:12;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLH;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t CH_PRIOR:3;
      uint64_t CH_SUSP:1;
      uint64_t FIFO_EMPTY:1;
      uint64_t HS_SEL_DST:1;
      uint64_t HS_SEL_SRC:1;
      uint64_t LOCK_CH_L:2;
      uint64_t LOCK_B_L:2;
      uint64_t LOCK_CH:1;
      uint64_t LOCK_B:1;
      uint64_t DST_HS_POL:1;
      uint64_t SRC_HS_POL:1;
      uint64_t MAX_ABRST:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCMODE:1;
      uint64_t FIFO_MODE:1;
      uint64_t PROTCTL:3;
      uint64_t reservedSpace0:2;
      uint64_t SRC_PER:4;
      uint64_t DEST_PER:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGH;

};

#define GPDMA0_CH6 (*(volatile struct GPDMA0_CH6_tag *) 0x50014210)

struct GPDMA0_CH7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
      uint64_t DST_TR_WIDTH:3;
      uint64_t SRC_TR_WIDTH:3;
      uint64_t DINC:2;
      uint64_t SINC:2;
      uint64_t DEST_MSIZE:3;
      uint64_t SRC_MSIZE:3;
      uint64_t reservedSpace0:3;
      uint64_t TT_FC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCK_TS:12;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLH;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t CH_PRIOR:3;
      uint64_t CH_SUSP:1;
      uint64_t FIFO_EMPTY:1;
      uint64_t HS_SEL_DST:1;
      uint64_t HS_SEL_SRC:1;
      uint64_t LOCK_CH_L:2;
      uint64_t LOCK_B_L:2;
      uint64_t LOCK_CH:1;
      uint64_t LOCK_B:1;
      uint64_t DST_HS_POL:1;
      uint64_t SRC_HS_POL:1;
      uint64_t MAX_ABRST:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCMODE:1;
      uint64_t FIFO_MODE:1;
      uint64_t PROTCTL:3;
      uint64_t reservedSpace0:2;
      uint64_t SRC_PER:4;
      uint64_t DEST_PER:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGH;

};

#define GPDMA0_CH7 (*(volatile struct GPDMA0_CH7_tag *) 0x50014268)

struct GPDMA1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAWTFR;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAWBLOCK;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAWSRCTRAN;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAWDSTTRAN;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAWERR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUSTFR;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUSBLOCK;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUSSRCTRAN;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUSDSTTRAN;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUSERR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
      uint64_t reservedSpace0:4;
      uint64_t WE_CH0:1;
      uint64_t WE_CH1:1;
      uint64_t WE_CH2:1;
      uint64_t WE_CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASKTFR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
      uint64_t reservedSpace0:4;
      uint64_t WE_CH0:1;
      uint64_t WE_CH1:1;
      uint64_t WE_CH2:1;
      uint64_t WE_CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASKBLOCK;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
      uint64_t reservedSpace0:4;
      uint64_t WE_CH0:1;
      uint64_t WE_CH1:1;
      uint64_t WE_CH2:1;
      uint64_t WE_CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASKSRCTRAN;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
      uint64_t reservedSpace0:4;
      uint64_t WE_CH0:1;
      uint64_t WE_CH1:1;
      uint64_t WE_CH2:1;
      uint64_t WE_CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASKDSTTRAN;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
      uint64_t reservedSpace0:4;
      uint64_t WE_CH0:1;
      uint64_t WE_CH1:1;
      uint64_t WE_CH2:1;
      uint64_t WE_CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASKERR;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARTFR;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARBLOCK;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARSRCTRAN;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARDSTTRAN;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARERR;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFR:1;
      uint64_t BLOCK:1;
      uint64_t SRCT:1;
      uint64_t DSTT:1;
      uint64_t ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUSINT;

  uint8_t res20[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
      uint64_t reservedSpace0:4;
      uint64_t WE_CH0:1;
      uint64_t WE_CH1:1;
      uint64_t WE_CH2:1;
      uint64_t WE_CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REQSRCREG;

  uint8_t res21[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
      uint64_t reservedSpace0:4;
      uint64_t WE_CH0:1;
      uint64_t WE_CH1:1;
      uint64_t WE_CH2:1;
      uint64_t WE_CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REQDSTREG;

  uint8_t res22[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
      uint64_t reservedSpace0:4;
      uint64_t WE_CH0:1;
      uint64_t WE_CH1:1;
      uint64_t WE_CH2:1;
      uint64_t WE_CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SGLREQSRCREG;

  uint8_t res23[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
      uint64_t reservedSpace0:4;
      uint64_t WE_CH0:1;
      uint64_t WE_CH1:1;
      uint64_t WE_CH2:1;
      uint64_t WE_CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SGLREQDSTREG;

  uint8_t res24[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
      uint64_t reservedSpace0:4;
      uint64_t WE_CH0:1;
      uint64_t WE_CH1:1;
      uint64_t WE_CH2:1;
      uint64_t WE_CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LSTSRCREG;

  uint8_t res25[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
      uint64_t reservedSpace0:4;
      uint64_t WE_CH0:1;
      uint64_t WE_CH1:1;
      uint64_t WE_CH2:1;
      uint64_t WE_CH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LSTDSTREG;

  uint8_t res26[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACFGREG;

  uint8_t res27[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH:4;
      uint64_t reservedSpace0:4;
      uint64_t WE_CH:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHENREG;

  uint8_t res28[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

  uint8_t res29[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERSION;

};

#define GPDMA1 (*(volatile struct GPDMA1_tag *) 0x500182c0)

struct GPDMA1_CH0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
      uint64_t DST_TR_WIDTH:3;
      uint64_t SRC_TR_WIDTH:3;
      uint64_t DINC:2;
      uint64_t SINC:2;
      uint64_t DEST_MSIZE:3;
      uint64_t SRC_MSIZE:3;
      uint64_t reservedSpace0:3;
      uint64_t TT_FC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCK_TS:12;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLH;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t CH_PRIOR:3;
      uint64_t CH_SUSP:1;
      uint64_t FIFO_EMPTY:1;
      uint64_t HS_SEL_DST:1;
      uint64_t HS_SEL_SRC:1;
      uint64_t LOCK_CH_L:2;
      uint64_t LOCK_B_L:2;
      uint64_t LOCK_CH:1;
      uint64_t LOCK_B:1;
      uint64_t DST_HS_POL:1;
      uint64_t SRC_HS_POL:1;
      uint64_t MAX_ABRST:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCMODE:1;
      uint64_t FIFO_MODE:1;
      uint64_t PROTCTL:3;
      uint64_t reservedSpace0:2;
      uint64_t SRC_PER:4;
      uint64_t DEST_PER:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGH;

};

#define GPDMA1_CH0 (*(volatile struct GPDMA1_CH0_tag *) 0x50018000)

struct GPDMA1_CH1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
      uint64_t DST_TR_WIDTH:3;
      uint64_t SRC_TR_WIDTH:3;
      uint64_t DINC:2;
      uint64_t SINC:2;
      uint64_t DEST_MSIZE:3;
      uint64_t SRC_MSIZE:3;
      uint64_t reservedSpace0:3;
      uint64_t TT_FC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCK_TS:12;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLH;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t CH_PRIOR:3;
      uint64_t CH_SUSP:1;
      uint64_t FIFO_EMPTY:1;
      uint64_t HS_SEL_DST:1;
      uint64_t HS_SEL_SRC:1;
      uint64_t LOCK_CH_L:2;
      uint64_t LOCK_B_L:2;
      uint64_t LOCK_CH:1;
      uint64_t LOCK_B:1;
      uint64_t DST_HS_POL:1;
      uint64_t SRC_HS_POL:1;
      uint64_t MAX_ABRST:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCMODE:1;
      uint64_t FIFO_MODE:1;
      uint64_t PROTCTL:3;
      uint64_t reservedSpace0:2;
      uint64_t SRC_PER:4;
      uint64_t DEST_PER:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGH;

};

#define GPDMA1_CH1 (*(volatile struct GPDMA1_CH1_tag *) 0x50018058)

struct GPDMA1_CH2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
      uint64_t DST_TR_WIDTH:3;
      uint64_t SRC_TR_WIDTH:3;
      uint64_t DINC:2;
      uint64_t SINC:2;
      uint64_t DEST_MSIZE:3;
      uint64_t SRC_MSIZE:3;
      uint64_t reservedSpace0:3;
      uint64_t TT_FC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCK_TS:12;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLH;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t CH_PRIOR:3;
      uint64_t CH_SUSP:1;
      uint64_t FIFO_EMPTY:1;
      uint64_t HS_SEL_DST:1;
      uint64_t HS_SEL_SRC:1;
      uint64_t LOCK_CH_L:2;
      uint64_t LOCK_B_L:2;
      uint64_t LOCK_CH:1;
      uint64_t LOCK_B:1;
      uint64_t DST_HS_POL:1;
      uint64_t SRC_HS_POL:1;
      uint64_t MAX_ABRST:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCMODE:1;
      uint64_t FIFO_MODE:1;
      uint64_t PROTCTL:3;
      uint64_t reservedSpace0:2;
      uint64_t SRC_PER:4;
      uint64_t DEST_PER:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGH;

};

#define GPDMA1_CH2 (*(volatile struct GPDMA1_CH2_tag *) 0x500180b0)

struct GPDMA1_CH3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
      uint64_t DST_TR_WIDTH:3;
      uint64_t SRC_TR_WIDTH:3;
      uint64_t DINC:2;
      uint64_t SINC:2;
      uint64_t DEST_MSIZE:3;
      uint64_t SRC_MSIZE:3;
      uint64_t reservedSpace0:3;
      uint64_t TT_FC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCK_TS:12;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLH;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t CH_PRIOR:3;
      uint64_t CH_SUSP:1;
      uint64_t FIFO_EMPTY:1;
      uint64_t HS_SEL_DST:1;
      uint64_t HS_SEL_SRC:1;
      uint64_t LOCK_CH_L:2;
      uint64_t LOCK_B_L:2;
      uint64_t LOCK_CH:1;
      uint64_t LOCK_B:1;
      uint64_t DST_HS_POL:1;
      uint64_t SRC_HS_POL:1;
      uint64_t MAX_ABRST:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCMODE:1;
      uint64_t FIFO_MODE:1;
      uint64_t PROTCTL:3;
      uint64_t reservedSpace0:2;
      uint64_t SRC_PER:4;
      uint64_t DEST_PER:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGH;

};

#define GPDMA1_CH3 (*(volatile struct GPDMA1_CH3_tag *) 0x50018108)

struct FCE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISR:1;
      uint64_t DISS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_REV:8;
      uint64_t MOD_TYPE:8;
      uint64_t MOD_NUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define FCE (*(volatile struct FCE_tag *) 0x50020000)

struct FCE_KE0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMI:1;
      uint64_t CEI:1;
      uint64_t LEI:1;
      uint64_t BEI:1;
      uint64_t CCE:1;
      uint64_t ALR:1;
      uint64_t reservedSpace0:2;
      uint64_t REFIN:1;
      uint64_t REFOUT:1;
      uint64_t XSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMF:1;
      uint64_t CEF:1;
      uint64_t LEF:1;
      uint64_t BEF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LENGTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LENGTH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHECK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHECK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCM:1;
      uint64_t FRM_CFG:1;
      uint64_t FRM_CHECK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTR;

};

#define FCE_KE0 (*(volatile struct FCE_KE0_tag *) 0x50020020)

struct FCE_KE1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMI:1;
      uint64_t CEI:1;
      uint64_t LEI:1;
      uint64_t BEI:1;
      uint64_t CCE:1;
      uint64_t ALR:1;
      uint64_t reservedSpace0:2;
      uint64_t REFIN:1;
      uint64_t REFOUT:1;
      uint64_t XSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMF:1;
      uint64_t CEF:1;
      uint64_t LEF:1;
      uint64_t BEF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LENGTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LENGTH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHECK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHECK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCM:1;
      uint64_t FRM_CFG:1;
      uint64_t FRM_CHECK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTR;

};

#define FCE_KE1 (*(volatile struct FCE_KE1_tag *) 0x50020040)

struct FCE_KE2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMI:1;
      uint64_t CEI:1;
      uint64_t LEI:1;
      uint64_t BEI:1;
      uint64_t CCE:1;
      uint64_t ALR:1;
      uint64_t reservedSpace0:2;
      uint64_t REFIN:1;
      uint64_t REFOUT:1;
      uint64_t XSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMF:1;
      uint64_t CEF:1;
      uint64_t LEF:1;
      uint64_t BEF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LENGTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LENGTH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHECK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHECK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCM:1;
      uint64_t FRM_CFG:1;
      uint64_t FRM_CHECK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTR;

};

#define FCE_KE2 (*(volatile struct FCE_KE2_tag *) 0x50020060)

struct FCE_KE3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMI:1;
      uint64_t CEI:1;
      uint64_t LEI:1;
      uint64_t BEI:1;
      uint64_t CCE:1;
      uint64_t ALR:1;
      uint64_t reservedSpace0:2;
      uint64_t REFIN:1;
      uint64_t REFOUT:1;
      uint64_t XSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMF:1;
      uint64_t CEF:1;
      uint64_t LEF:1;
      uint64_t BEF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LENGTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LENGTH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHECK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHECK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCM:1;
      uint64_t FRM_CFG:1;
      uint64_t FRM_CHECK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTR;

};

#define FCE_KE3 (*(volatile struct FCE_KE3_tag *) 0x50020080)

struct PBA0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WADDR;

};

#define PBA0 (*(volatile struct PBA0_tag *) 0x40000000)

struct PBA1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WADDR;

};

#define PBA1 (*(volatile struct PBA1_tag *) 0x48000000)

struct FLASH0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_REV:8;
      uint64_t MOD_TYPE:8;
      uint64_t MOD_NUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PBUSY:1;
      uint64_t FABUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t PROG:1;
      uint64_t ERASE:1;
      uint64_t PFPAGE:1;
      uint64_t reservedSpace1:1;
      uint64_t PFOPER:1;
      uint64_t reservedSpace2:1;
      uint64_t SQER:1;
      uint64_t PROER:1;
      uint64_t PFSBER:1;
      uint64_t reservedSpace3:1;
      uint64_t PFDBER:1;
      uint64_t reservedSpace4:1;
      uint64_t PROIN:1;
      uint64_t reservedSpace5:1;
      uint64_t RPROIN:1;
      uint64_t RPRODIS:1;
      uint64_t reservedSpace6:1;
      uint64_t WPROIN0:1;
      uint64_t WPROIN1:1;
      uint64_t WPROIN2:1;
      uint64_t reservedSpace7:1;
      uint64_t WPRODIS0:1;
      uint64_t WPRODIS1:1;
      uint64_t reservedSpace8:1;
      uint64_t SLM:1;
      uint64_t reservedSpace9:2;
      uint64_t VER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSPFLASH:4;
      uint64_t WSECPF:1;
      uint64_t reservedSpace0:8;
      uint64_t IDLE:1;
      uint64_t ESLDIS:1;
      uint64_t SLEEP:1;
      uint64_t RPA:1;
      uint64_t DCF:1;
      uint64_t DDF:1;
      uint64_t reservedSpace1:5;
      uint64_t VOPERM:1;
      uint64_t SQERM:1;
      uint64_t PROERM:1;
      uint64_t PFSBERM:1;
      uint64_t reservedSpace2:1;
      uint64_t PFDBERM:1;
      uint64_t reservedSpace3:1;
      uint64_t EOBM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MARGIN:4;
      uint64_t reservedSpace0:11;
      uint64_t TRAPDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MARP;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0L:1;
      uint64_t S1L:1;
      uint64_t S2L:1;
      uint64_t S3L:1;
      uint64_t S4L:1;
      uint64_t S5L:1;
      uint64_t S6L:1;
      uint64_t S7L:1;
      uint64_t S8L:1;
      uint64_t S9L:1;
      uint64_t S10_S11L:1;
      uint64_t S12_S13L:1;
      uint64_t S14_S15L:1;
      uint64_t reservedSpace0:2;
      uint64_t RPRO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PROCON0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0L:1;
      uint64_t S1L:1;
      uint64_t S2L:1;
      uint64_t S3L:1;
      uint64_t S4L:1;
      uint64_t S5L:1;
      uint64_t S6L:1;
      uint64_t S7L:1;
      uint64_t S8L:1;
      uint64_t S9L:1;
      uint64_t S10_S11L:1;
      uint64_t S12_S13L:1;
      uint64_t S14_S15L:1;
      uint64_t reservedSpace0:3;
      uint64_t PSR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PROCON1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0ROM:1;
      uint64_t S1ROM:1;
      uint64_t S2ROM:1;
      uint64_t S3ROM:1;
      uint64_t S4ROM:1;
      uint64_t S5ROM:1;
      uint64_t S6ROM:1;
      uint64_t S7ROM:1;
      uint64_t S8ROM:1;
      uint64_t S9ROM:1;
      uint64_t S10_S11ROM:1;
      uint64_t S12_S13ROM:1;
      uint64_t S14_S15ROM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PROCON2;

};

#define FLASH0 (*(volatile struct FLASH0_tag *) 0x58002008)

struct PREF_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IBYP:1;
      uint64_t IINV:1;
      uint64_t reservedSpace0:2;
      uint64_t DBYP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCON;

};

#define PREF (*(volatile struct PREF_tag *) 0x58004000)

struct PMU0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_REV:8;
      uint64_t MOD_TYPE:8;
      uint64_t MOD_NUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define PMU0 (*(volatile struct PMU0_tag *) 0x58000508)

struct WDT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_REV:8;
      uint64_t MOD_TYPE:8;
      uint64_t MOD_NUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENB:1;
      uint64_t PRE:1;
      uint64_t reservedSpace0:2;
      uint64_t DSP:1;
      uint64_t reservedSpace1:3;
      uint64_t SPW:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WLB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WUB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WUB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALMS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDTSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDTCLR;

};

#define WDT (*(volatile struct WDT_tag *) 0x50008000)

struct RTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_REV:8;
      uint64_t MOD_TYPE:8;
      uint64_t MOD_NUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENB:1;
      uint64_t reservedSpace0:1;
      uint64_t TAE:1;
      uint64_t reservedSpace1:5;
      uint64_t ESEC:1;
      uint64_t EMIC:1;
      uint64_t EHOC:1;
      uint64_t EDAC:1;
      uint64_t reservedSpace2:1;
      uint64_t EMOC:1;
      uint64_t EYEC:1;
      uint64_t reservedSpace3:1;
      uint64_t DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPSE:1;
      uint64_t RPMI:1;
      uint64_t RPHO:1;
      uint64_t RPDA:1;
      uint64_t reservedSpace0:1;
      uint64_t RPMO:1;
      uint64_t RPYE:1;
      uint64_t reservedSpace1:1;
      uint64_t RAI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAWSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPSE:1;
      uint64_t SPMI:1;
      uint64_t SPHO:1;
      uint64_t SPDA:1;
      uint64_t reservedSpace0:1;
      uint64_t SPMO:1;
      uint64_t SPYE:1;
      uint64_t reservedSpace1:1;
      uint64_t SAI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSE:1;
      uint64_t MPMI:1;
      uint64_t MPHO:1;
      uint64_t MPDA:1;
      uint64_t reservedSpace0:1;
      uint64_t MPMO:1;
      uint64_t MPYE:1;
      uint64_t reservedSpace1:1;
      uint64_t MAI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSKSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPSE:1;
      uint64_t RPMI:1;
      uint64_t RPHO:1;
      uint64_t RPDA:1;
      uint64_t reservedSpace0:1;
      uint64_t RPMO:1;
      uint64_t RPYE:1;
      uint64_t reservedSpace1:1;
      uint64_t RAI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLRSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASE:6;
      uint64_t reservedSpace0:2;
      uint64_t AMI:6;
      uint64_t reservedSpace1:2;
      uint64_t AHO:5;
      uint64_t reservedSpace2:3;
      uint64_t ADA:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATIM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t AMO:4;
      uint64_t reservedSpace1:4;
      uint64_t AYE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATIM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SE:6;
      uint64_t reservedSpace0:2;
      uint64_t MI:6;
      uint64_t reservedSpace1:2;
      uint64_t HO:5;
      uint64_t reservedSpace2:3;
      uint64_t DA:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAWE:3;
      uint64_t reservedSpace0:5;
      uint64_t MO:4;
      uint64_t reservedSpace1:4;
      uint64_t YE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIM1;

};

#define RTC (*(volatile struct RTC_tag *) 0x50004a00)

struct SCU_CLK_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t USBCST:1;
      uint64_t MMCCST:1;
      uint64_t ETH0CST:1;
      uint64_t EBUCST:1;
      uint64_t CCUCST:1;
      uint64_t WDTCST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USBCEN:1;
      uint64_t MMCCEN:1;
      uint64_t ETH0CEN:1;
      uint64_t EBUCEN:1;
      uint64_t CCUCEN:1;
      uint64_t WDTCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USBCDI:1;
      uint64_t MMCCDI:1;
      uint64_t ETH0CDI:1;
      uint64_t EBUCDI:1;
      uint64_t CCUCDI:1;
      uint64_t WDTCDI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSDIV:8;
      uint64_t reservedSpace0:8;
      uint64_t SYSSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCLKCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPUDIV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUCLKCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PBDIV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBCLKCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USBDIV:3;
      uint64_t reservedSpace0:13;
      uint64_t USBSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBCLKCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EBUDIV:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EBUCLKCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUDIV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCUCLKCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTDIV:8;
      uint64_t reservedSpace0:8;
      uint64_t WDTSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDTCLKCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECKSEL:2;
      uint64_t reservedSpace0:14;
      uint64_t ECKDIV:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTCLKCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSDIV:8;
      uint64_t SYSSEL:1;
      uint64_t reservedSpace0:1;
      uint64_t CPUDIV:1;
      uint64_t reservedSpace1:1;
      uint64_t PBDIV:1;
      uint64_t reservedSpace2:1;
      uint64_t CCUDIV:1;
      uint64_t reservedSpace3:1;
      uint64_t WDTDIV:8;
      uint64_t WDTSEL:2;
      uint64_t EBUDIV:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MLINKCLKCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSSEL:1;
      uint64_t reservedSpace0:15;
      uint64_t USBCR:1;
      uint64_t MMCCR:1;
      uint64_t ETH0CR:1;
      uint64_t EBUCR:1;
      uint64_t CCUCR:1;
      uint64_t WDTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLEEPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSSEL:2;
      uint64_t reservedSpace0:9;
      uint64_t FPDN:1;
      uint64_t PLLPDN:1;
      uint64_t VCOPDN:1;
      uint64_t reservedSpace1:2;
      uint64_t USBCR:1;
      uint64_t MMCCR:1;
      uint64_t ETH0CR:1;
      uint64_t EBUCR:1;
      uint64_t CCUCR:1;
      uint64_t WDTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSLEEPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECADIV:2;
      uint64_t reservedSpace0:14;
      uint64_t ECATSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECATCLKCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VADC_bitfield:1;
      uint64_t DSD_bitfield:1;
      uint64_t CCU40_bitfield:1;
      uint64_t CCU41_bitfield:1;
      uint64_t CCU42_bitfield:1;
      uint64_t reservedSpace0:2;
      uint64_t CCU80_bitfield:1;
      uint64_t CCU81_bitfield:1;
      uint64_t POSIF0_bitfield:1;
      uint64_t POSIF1_bitfield:1;
      uint64_t USIC0_bitfield:1;
      uint64_t reservedSpace1:4;
      uint64_t ERU1_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CGATSTAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VADC_bitfield:1;
      uint64_t DSD_bitfield:1;
      uint64_t CCU40_bitfield:1;
      uint64_t CCU41_bitfield:1;
      uint64_t CCU42_bitfield:1;
      uint64_t reservedSpace0:2;
      uint64_t CCU80_bitfield:1;
      uint64_t CCU81_bitfield:1;
      uint64_t POSIF0_bitfield:1;
      uint64_t POSIF1_bitfield:1;
      uint64_t USIC0_bitfield:1;
      uint64_t reservedSpace1:4;
      uint64_t ERU1_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CGATSET0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VADC_bitfield:1;
      uint64_t DSD_bitfield:1;
      uint64_t CCU40_bitfield:1;
      uint64_t CCU41_bitfield:1;
      uint64_t CCU42_bitfield:1;
      uint64_t reservedSpace0:2;
      uint64_t CCU80_bitfield:1;
      uint64_t CCU81_bitfield:1;
      uint64_t POSIF0_bitfield:1;
      uint64_t POSIF1_bitfield:1;
      uint64_t USIC0_bitfield:1;
      uint64_t reservedSpace1:4;
      uint64_t ERU1_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CGATCLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCU43_bitfield:1;
      uint64_t reservedSpace0:2;
      uint64_t LEDTSCU0:1;
      uint64_t MCAN0:1;
      uint64_t DAC_bitfield:1;
      uint64_t MMCI:1;
      uint64_t USIC1_bitfield:1;
      uint64_t USIC2_bitfield:1;
      uint64_t PPORTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CGATSTAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCU43_bitfield:1;
      uint64_t reservedSpace0:2;
      uint64_t LEDTSCU0:1;
      uint64_t MCAN0:1;
      uint64_t DAC_bitfield:1;
      uint64_t MMCI:1;
      uint64_t USIC1_bitfield:1;
      uint64_t USIC2_bitfield:1;
      uint64_t PPORTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CGATSET1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCU43_bitfield:1;
      uint64_t reservedSpace0:2;
      uint64_t LEDTSCU0:1;
      uint64_t MCAN0:1;
      uint64_t DAC_bitfield:1;
      uint64_t MMCI:1;
      uint64_t USIC1_bitfield:1;
      uint64_t USIC2_bitfield:1;
      uint64_t PPORTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CGATCLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t WDT_bitfield:1;
      uint64_t ETH0_bitfield:1;
      uint64_t reservedSpace1:1;
      uint64_t DMA0:1;
      uint64_t DMA1:1;
      uint64_t FCE_bitfield:1;
      uint64_t USB:1;
      uint64_t reservedSpace2:2;
      uint64_t ECAT0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CGATSTAT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t WDT_bitfield:1;
      uint64_t ETH0_bitfield:1;
      uint64_t reservedSpace1:1;
      uint64_t DMA0:1;
      uint64_t DMA1:1;
      uint64_t FCE_bitfield:1;
      uint64_t USB:1;
      uint64_t reservedSpace2:2;
      uint64_t ECAT0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CGATSET2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t WDT_bitfield:1;
      uint64_t ETH0_bitfield:1;
      uint64_t reservedSpace1:1;
      uint64_t DMA0:1;
      uint64_t DMA1:1;
      uint64_t FCE_bitfield:1;
      uint64_t USB:1;
      uint64_t reservedSpace2:2;
      uint64_t ECAT0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CGATCLR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t EBU_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CGATSTAT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t EBU_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CGATSET3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t EBU_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CGATCLR3;

};

#define SCU_CLK (*(volatile struct SCU_CLK_tag *) 0x50004600)

struct SCU_OSC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t X1D:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCHPSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t X1DEN:1;
      uint64_t SHBY:1;
      uint64_t GAINSEL:2;
      uint64_t MODE:2;
      uint64_t reservedSpace0:10;
      uint64_t OSCVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCHPCTRL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CALIBCONST:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKCALCONST;

};

#define SCU_OSC (*(volatile struct SCU_OSC_tag *) 0x50004700)

struct SCU_PLL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VCOBYST:1;
      uint64_t PWDSTAT:1;
      uint64_t VCOLOCK:1;
      uint64_t reservedSpace0:1;
      uint64_t K1RDY:1;
      uint64_t K2RDY:1;
      uint64_t BY:1;
      uint64_t PLLLV:1;
      uint64_t PLLHV:1;
      uint64_t PLLSP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VCOBYP:1;
      uint64_t VCOPWD:1;
      uint64_t VCOTR:1;
      uint64_t reservedSpace0:1;
      uint64_t FINDIS:1;
      uint64_t reservedSpace1:1;
      uint64_t OSCDISCDIS:1;
      uint64_t reservedSpace2:9;
      uint64_t PLLPWD:1;
      uint64_t OSCRES:1;
      uint64_t RESLD:1;
      uint64_t AOTREN:1;
      uint64_t FOTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCON0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t K1DIV:7;
      uint64_t reservedSpace0:1;
      uint64_t NDIV:7;
      uint64_t reservedSpace1:1;
      uint64_t K2DIV:7;
      uint64_t reservedSpace2:1;
      uint64_t PDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCON1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINSEL:1;
      uint64_t reservedSpace0:7;
      uint64_t K1INSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCON2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VCOBYST:1;
      uint64_t PWDSTAT:1;
      uint64_t VCOLOCK:1;
      uint64_t reservedSpace0:3;
      uint64_t BY:1;
      uint64_t VCOLOCKED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPLLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VCOBYP:1;
      uint64_t VCOPWD:1;
      uint64_t VCOTR:1;
      uint64_t reservedSpace0:1;
      uint64_t FINDIS:1;
      uint64_t reservedSpace1:1;
      uint64_t OSCDISCDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t NDIV:7;
      uint64_t reservedSpace3:1;
      uint64_t PLLPWD:1;
      uint64_t reservedSpace4:1;
      uint64_t RESLD:1;
      uint64_t reservedSpace5:5;
      uint64_t PDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPLLCON;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLKMUX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKMXSTAT;

};

#define SCU_PLL (*(volatile struct SCU_PLL_tag *) 0x50004710)

struct SCU_GENERAL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_REV:8;
      uint64_t MOD_TYPE:8;
      uint64_t MOD_NUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDCHIP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDCHIP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEPT:5;
      uint64_t MANUF:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDMANUF;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HWCON:2;
      uint64_t reservedSpace0:6;
      uint64_t SWCON:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCON;

  uint8_t res1[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR1;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GSC40:1;
      uint64_t GSC41:1;
      uint64_t GSC42:1;
      uint64_t GSC43:1;
      uint64_t reservedSpace0:4;
      uint64_t GSC80:1;
      uint64_t GSC81:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCUCON;

  uint8_t res3[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWD:1;
      uint64_t START:1;
      uint64_t reservedSpace0:2;
      uint64_t OFFSET:7;
      uint64_t GAIN:6;
      uint64_t REFTRIM:3;
      uint64_t BGTRIM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSCON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESULT:10;
      uint64_t reservedSpace0:4;
      uint64_t RDY:1;
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSSTAT;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TAPDEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMCDEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t ENORC6:1;
      uint64_t ENORC7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) G0ORCEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t ENORC6:1;
      uint64_t ENORC7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) G1ORCEN;

  uint8_t res5[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t HDCLR:1;
      uint64_t HDSET:1;
      uint64_t HDCR:1;
      uint64_t reservedSpace1:1;
      uint64_t OSCSICTRL:1;
      uint64_t OSCULSTAT:1;
      uint64_t OSCULCTRL:1;
      uint64_t RTC_CTR:1;
      uint64_t RTC_ATIM0:1;
      uint64_t RTC_ATIM1:1;
      uint64_t RTC_TIM0:1;
      uint64_t RTC_TIM1:1;
      uint64_t RMX:1;
      uint64_t RTC_MSKSR:1;
      uint64_t RTC_CLRSR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIRRSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDWR:1;
      uint64_t reservedSpace0:15;
      uint64_t ADDR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMDATA;

};

#define SCU_GENERAL (*(volatile struct SCU_GENERAL_tag *) 0x50004000)

struct SCU_INTERRUPT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRWARN:1;
      uint64_t PI:1;
      uint64_t AI:1;
      uint64_t DLROVR:1;
      uint64_t reservedSpace0:12;
      uint64_t HDSTAT:1;
      uint64_t HDCLR:1;
      uint64_t HDSET:1;
      uint64_t HDCR:1;
      uint64_t reservedSpace1:1;
      uint64_t OSCSICTRL:1;
      uint64_t OSCULSTAT:1;
      uint64_t OSCULCTRL:1;
      uint64_t RTC_CTR:1;
      uint64_t RTC_ATIM0:1;
      uint64_t RTC_ATIM1:1;
      uint64_t RTC_TIM0:1;
      uint64_t RTC_TIM1:1;
      uint64_t RMX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRWARN:1;
      uint64_t PI:1;
      uint64_t AI:1;
      uint64_t DLROVR:1;
      uint64_t reservedSpace0:12;
      uint64_t HDSTAT:1;
      uint64_t HDCLR:1;
      uint64_t HDSET:1;
      uint64_t HDCR:1;
      uint64_t reservedSpace1:1;
      uint64_t OSCSICTRL:1;
      uint64_t OSCULSTAT:1;
      uint64_t OSCULCTRL:1;
      uint64_t RTC_CTR:1;
      uint64_t RTC_ATIM0:1;
      uint64_t RTC_ATIM1:1;
      uint64_t RTC_TIM0:1;
      uint64_t RTC_TIM1:1;
      uint64_t RMX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRRAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRWARN:1;
      uint64_t PI:1;
      uint64_t AI:1;
      uint64_t DLROVR:1;
      uint64_t reservedSpace0:12;
      uint64_t HDSTAT:1;
      uint64_t HDCLR:1;
      uint64_t HDSET:1;
      uint64_t HDCR:1;
      uint64_t reservedSpace1:1;
      uint64_t OSCSICTRL:1;
      uint64_t OSCULSTAT:1;
      uint64_t OSCULCTRL:1;
      uint64_t RTC_CTR:1;
      uint64_t RTC_ATIM0:1;
      uint64_t RTC_ATIM1:1;
      uint64_t RTC_TIM0:1;
      uint64_t RTC_TIM1:1;
      uint64_t RMX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRWARN:1;
      uint64_t PI:1;
      uint64_t AI:1;
      uint64_t DLROVR:1;
      uint64_t reservedSpace0:12;
      uint64_t HDSTAT:1;
      uint64_t HDCLR:1;
      uint64_t HDSET:1;
      uint64_t HDCR:1;
      uint64_t reservedSpace1:1;
      uint64_t OSCSICTRL:1;
      uint64_t OSCULSTAT:1;
      uint64_t OSCULCTRL:1;
      uint64_t RTC_CTR:1;
      uint64_t RTC_ATIM0:1;
      uint64_t RTC_ATIM1:1;
      uint64_t RTC_TIM0:1;
      uint64_t RTC_TIM1:1;
      uint64_t RMX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRWARN:1;
      uint64_t PI:1;
      uint64_t AI:1;
      uint64_t DLROVR:1;
      uint64_t reservedSpace0:12;
      uint64_t HDSTAT:1;
      uint64_t HDCRCLR:1;
      uint64_t HDCRSET:1;
      uint64_t HDCR:1;
      uint64_t reservedSpace1:1;
      uint64_t OSCSICTRL:1;
      uint64_t OSCULSTAT:1;
      uint64_t OSCULCTRL:1;
      uint64_t RTC_CTR:1;
      uint64_t RTC_ATIM0:1;
      uint64_t RTC_ATIM1:1;
      uint64_t RTC_TIM0:1;
      uint64_t RTC_TIM1:1;
      uint64_t RMX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRWARN:1;
      uint64_t PI:1;
      uint64_t AI:1;
      uint64_t reservedSpace0:13;
      uint64_t ERU00:1;
      uint64_t ERU01:1;
      uint64_t ERU02:1;
      uint64_t ERU03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NMIREQEN;

};

#define SCU_INTERRUPT (*(volatile struct SCU_INTERRUPT_tag *) 0x50004074)

struct SCU_PARITY_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEENPS:1;
      uint64_t PEENDS1:1;
      uint64_t PEENDS2:1;
      uint64_t reservedSpace0:5;
      uint64_t PEENU0:1;
      uint64_t PEENU1:1;
      uint64_t PEENU2:1;
      uint64_t reservedSpace1:1;
      uint64_t PEENMC:1;
      uint64_t PEENPPRF:1;
      uint64_t reservedSpace2:2;
      uint64_t PEENUSB:1;
      uint64_t PEENETH0TX:1;
      uint64_t PEENETH0RX:1;
      uint64_t PEENSD0:1;
      uint64_t PEENSD1:1;
      uint64_t reservedSpace3:3;
      uint64_t PEENECAT0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELPS:1;
      uint64_t SELDS1:1;
      uint64_t SELDS2:1;
      uint64_t reservedSpace0:5;
      uint64_t USIC0DRA:1;
      uint64_t USIC1DRA:1;
      uint64_t USIC2DRA:1;
      uint64_t reservedSpace1:1;
      uint64_t MCANDRA:1;
      uint64_t PPRFDRA:1;
      uint64_t reservedSpace2:2;
      uint64_t SELUSB:1;
      uint64_t SELETH0TX:1;
      uint64_t SELETH0RX:1;
      uint64_t SELSD0:1;
      uint64_t SELSD1:1;
      uint64_t reservedSpace3:3;
      uint64_t SELECAT0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCHKCON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PETEPS:1;
      uint64_t PETEDS1:1;
      uint64_t PETEDS2:1;
      uint64_t reservedSpace0:5;
      uint64_t PETEU0:1;
      uint64_t PETEU1:1;
      uint64_t PETEU2:1;
      uint64_t reservedSpace1:1;
      uint64_t PETEMC:1;
      uint64_t PETEPPRF:1;
      uint64_t reservedSpace2:2;
      uint64_t PETEUSB:1;
      uint64_t PETEETH0TX:1;
      uint64_t PETEETH0RX:1;
      uint64_t PETESD0:1;
      uint64_t PETESD1:1;
      uint64_t reservedSpace3:3;
      uint64_t PETEECAT0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PETE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERSTEN;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEFPS:1;
      uint64_t PEFDS1:1;
      uint64_t PEFDS2:1;
      uint64_t reservedSpace0:5;
      uint64_t PEFU0:1;
      uint64_t PEFU1:1;
      uint64_t PEFU2:1;
      uint64_t reservedSpace1:1;
      uint64_t PEFMC:1;
      uint64_t PEFPPRF:1;
      uint64_t reservedSpace2:2;
      uint64_t PEUSB:1;
      uint64_t PEETH0TX:1;
      uint64_t PEETH0RX:1;
      uint64_t PESD0:1;
      uint64_t PESD1:1;
      uint64_t reservedSpace3:3;
      uint64_t PEECAT0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEFLAG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR:8;
      uint64_t PRD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMTPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTENPS:1;
      uint64_t MTENDS1:1;
      uint64_t MTENDS2:1;
      uint64_t reservedSpace0:5;
      uint64_t MTEU0:1;
      uint64_t MTEU1:1;
      uint64_t MTEU2:1;
      uint64_t reservedSpace1:1;
      uint64_t MTEMC:1;
      uint64_t MTEPPRF:1;
      uint64_t reservedSpace2:2;
      uint64_t MTUSB:1;
      uint64_t MTETH0TX:1;
      uint64_t MTETH0RX:1;
      uint64_t MTSD0:1;
      uint64_t MTSD1:1;
      uint64_t reservedSpace3:3;
      uint64_t MTECAT0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMTSR;

};

#define SCU_PARITY (*(volatile struct SCU_PARITY_tag *) 0x5000413c)

struct SCU_TRAP_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOSCWDGT:1;
      uint64_t reservedSpace0:1;
      uint64_t SVCOLCKT:1;
      uint64_t UVCOLCKT:1;
      uint64_t PET:1;
      uint64_t BRWNT:1;
      uint64_t ULPWDGT:1;
      uint64_t BWERR0T:1;
      uint64_t BWERR1T:1;
      uint64_t reservedSpace1:7;
      uint64_t ECAT0RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRAPSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOSCWDGT:1;
      uint64_t reservedSpace0:1;
      uint64_t SVCOLCKT:1;
      uint64_t UVCOLCKT:1;
      uint64_t PET:1;
      uint64_t BRWNT:1;
      uint64_t ULPWDGT:1;
      uint64_t BWERR0T:1;
      uint64_t BWERR1T:1;
      uint64_t reservedSpace1:7;
      uint64_t ECAT0RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRAPRAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOSCWDGT:1;
      uint64_t reservedSpace0:1;
      uint64_t SVCOLCKT:1;
      uint64_t UVCOLCKT:1;
      uint64_t PET:1;
      uint64_t BRWNT:1;
      uint64_t ULPWDGT:1;
      uint64_t BWERR0T:1;
      uint64_t BWERR1T:1;
      uint64_t reservedSpace1:7;
      uint64_t ECAT0RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRAPDIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOSCWDGT:1;
      uint64_t reservedSpace0:1;
      uint64_t SVCOLCKT:1;
      uint64_t UVCOLCKT:1;
      uint64_t PET:1;
      uint64_t BRWNT:1;
      uint64_t ULPWDGT:1;
      uint64_t BWERR0T:1;
      uint64_t BWERR1T:1;
      uint64_t reservedSpace1:7;
      uint64_t ECAT0RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRAPCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOSCWDGT:1;
      uint64_t reservedSpace0:1;
      uint64_t SVCOLCKT:1;
      uint64_t UVCOLCKT:1;
      uint64_t PET:1;
      uint64_t BRWNT:1;
      uint64_t ULPWDT:1;
      uint64_t BWERR0T:1;
      uint64_t BWERR1T:1;
      uint64_t reservedSpace1:7;
      uint64_t ECAT0RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRAPSET;

};

#define SCU_TRAP (*(volatile struct SCU_TRAP_tag *) 0x50004160)

struct SCU_HIBERNATE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPEV:1;
      uint64_t ENEV:1;
      uint64_t RTCEV:1;
      uint64_t ULPWDG:1;
      uint64_t HIBNOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HDSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPEV:1;
      uint64_t ENEV:1;
      uint64_t RTCEV:1;
      uint64_t ULPWDG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HDCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPEV:1;
      uint64_t ENEV:1;
      uint64_t RTCEV:1;
      uint64_t ULPWDG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HDSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WKPEP:1;
      uint64_t WKPEN:1;
      uint64_t RTCE:1;
      uint64_t ULPWDGEN:1;
      uint64_t HIB:1;
      uint64_t reservedSpace0:1;
      uint64_t RCS:1;
      uint64_t STDBYSEL:1;
      uint64_t WKUPSEL:1;
      uint64_t reservedSpace1:1;
      uint64_t GPI0SEL:1;
      uint64_t reservedSpace2:1;
      uint64_t HIBIO0POL:1;
      uint64_t HIBIO1POL:1;
      uint64_t reservedSpace3:2;
      uint64_t HIBIO0SEL:4;
      uint64_t HIBIO1SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HDCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCSICTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t X1D:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCULSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t X1DEN:1;
      uint64_t reservedSpace0:3;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCULCTRL;

};

#define SCU_HIBERNATE (*(volatile struct SCU_HIBERNATE_tag *) 0x50004300)

struct SCU_POWER_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HIBEN:1;
      uint64_t reservedSpace0:15;
      uint64_t USBPHYPDQ:1;
      uint64_t USBOTGEN:1;
      uint64_t USBPUWQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HIB:1;
      uint64_t reservedSpace0:15;
      uint64_t USBPHYPDQ:1;
      uint64_t USBOTGEN:1;
      uint64_t USBPUWQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HIB:1;
      uint64_t reservedSpace0:15;
      uint64_t USBPHYPDQ:1;
      uint64_t USBOTGEN:1;
      uint64_t USBPUWQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRCLR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t OV13:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVRSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VADC13V:8;
      uint64_t VADC33V:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVRVADCSTAT;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRS:8;
      uint64_t INTV:8;
      uint64_t ENB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRMON;

};

#define SCU_POWER (*(volatile struct SCU_POWER_tag *) 0x50004200)

struct SCU_RESET_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSTSTAT:8;
      uint64_t HIBWK:1;
      uint64_t HIBRS:1;
      uint64_t LCKEN:1;
      uint64_t reservedSpace0:1;
      uint64_t ECAT0RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HIBWK:1;
      uint64_t HIBRS:1;
      uint64_t LCKEN:1;
      uint64_t reservedSpace1:1;
      uint64_t ECAT0RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSCLR:1;
      uint64_t reservedSpace0:7;
      uint64_t HIBWK:1;
      uint64_t HIBRS:1;
      uint64_t LCKEN:1;
      uint64_t reservedSpace1:1;
      uint64_t ECAT0RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VADCRS:1;
      uint64_t DSDRS:1;
      uint64_t CCU40RS:1;
      uint64_t CCU41RS:1;
      uint64_t CCU42RS:1;
      uint64_t reservedSpace0:2;
      uint64_t CCU80RS:1;
      uint64_t CCU81RS:1;
      uint64_t POSIF0RS:1;
      uint64_t POSIF1RS:1;
      uint64_t USIC0RS:1;
      uint64_t reservedSpace1:4;
      uint64_t ERU1RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VADCRS:1;
      uint64_t DSDRS:1;
      uint64_t CCU40RS:1;
      uint64_t CCU41RS:1;
      uint64_t CCU42RS:1;
      uint64_t reservedSpace0:2;
      uint64_t CCU80RS:1;
      uint64_t CCU81RS:1;
      uint64_t POSIF0RS:1;
      uint64_t POSIF1RS:1;
      uint64_t USIC0RS:1;
      uint64_t reservedSpace1:4;
      uint64_t ERU1RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSET0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VADCRS:1;
      uint64_t DSDRS:1;
      uint64_t CCU40RS:1;
      uint64_t CCU41RS:1;
      uint64_t CCU42RS:1;
      uint64_t reservedSpace0:2;
      uint64_t CCU80RS:1;
      uint64_t CCU81RS:1;
      uint64_t POSIF0RS:1;
      uint64_t POSIF1RS:1;
      uint64_t USIC0RS:1;
      uint64_t reservedSpace1:4;
      uint64_t ERU1RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRCLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCU43RS:1;
      uint64_t reservedSpace0:2;
      uint64_t LEDTSCU0RS:1;
      uint64_t MCAN0RS:1;
      uint64_t DACRS:1;
      uint64_t MMCIRS:1;
      uint64_t USIC1RS:1;
      uint64_t USIC2RS:1;
      uint64_t PPORTSRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCU43RS:1;
      uint64_t reservedSpace0:2;
      uint64_t LEDTSCU0RS:1;
      uint64_t MCAN0RS:1;
      uint64_t DACRS:1;
      uint64_t MMCIRS:1;
      uint64_t USIC1RS:1;
      uint64_t USIC2RS:1;
      uint64_t PPORTSRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSET1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCU43RS:1;
      uint64_t reservedSpace0:2;
      uint64_t LEDTSCU0RS:1;
      uint64_t MCAN0RS:1;
      uint64_t DACRS:1;
      uint64_t MMCIRS:1;
      uint64_t USIC1RS:1;
      uint64_t USIC2RS:1;
      uint64_t PPORTSRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRCLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t WDTRS:1;
      uint64_t ETH0RS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMA0RS:1;
      uint64_t DMA1RS:1;
      uint64_t FCERS:1;
      uint64_t USBRS:1;
      uint64_t reservedSpace2:2;
      uint64_t ECAT0RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTAT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t WDTRS:1;
      uint64_t ETH0RS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMA0RS:1;
      uint64_t DMA1RS:1;
      uint64_t FCERS:1;
      uint64_t USBRS:1;
      uint64_t reservedSpace2:2;
      uint64_t ECAT0RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSET2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t WDTRS:1;
      uint64_t ETH0RS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMA0RS:1;
      uint64_t DMA1RS:1;
      uint64_t FCERS:1;
      uint64_t USBRS:1;
      uint64_t reservedSpace2:2;
      uint64_t ECAT0RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRCLR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t EBURS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTAT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t EBURS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSET3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t EBURS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRCLR3;

};

#define SCU_RESET (*(volatile struct SCU_RESET_tag *) 0x50004400)

struct LEDTS0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_REV:8;
      uint64_t MOD_TYPE:8;
      uint64_t MOD_NUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TS_EN:1;
      uint64_t LD_EN:1;
      uint64_t CMTR:1;
      uint64_t ENSYNC:1;
      uint64_t reservedSpace0:4;
      uint64_t SUSCFG:1;
      uint64_t MASKVAL:3;
      uint64_t FENVAL:1;
      uint64_t ITS_EN:1;
      uint64_t ITF_EN:1;
      uint64_t ITP_EN:1;
      uint64_t CLK_PS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADT:3;
      uint64_t PADTSW:1;
      uint64_t EPULL:1;
      uint64_t FNCOL:3;
      uint64_t reservedSpace0:8;
      uint64_t ACCCNT:4;
      uint64_t TSCCMP:1;
      uint64_t TSOEXT:2;
      uint64_t TSCTRR:1;
      uint64_t TSCTRSAT:1;
      uint64_t NR_TSIN:3;
      uint64_t COLLEV:1;
      uint64_t NR_LEDCOL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FNCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSF:1;
      uint64_t TFF:1;
      uint64_t TPF:1;
      uint64_t TSCTROVF:1;
      uint64_t reservedSpace0:12;
      uint64_t CTSF:1;
      uint64_t CTFF:1;
      uint64_t CTPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSCTRVALR:16;
      uint64_t TSCTRVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINE_0:8;
      uint64_t LINE_1:8;
      uint64_t LINE_2:8;
      uint64_t LINE_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINE_4:8;
      uint64_t LINE_5:8;
      uint64_t LINE_6:8;
      uint64_t LINE_A:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP_LD0:8;
      uint64_t CMP_LD1:8;
      uint64_t CMP_LD2:8;
      uint64_t CMP_LD3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDCMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP_LD4:8;
      uint64_t CMP_LD5:8;
      uint64_t CMP_LD6:8;
      uint64_t CMP_LDA_TSCOM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDCMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP_TS0:8;
      uint64_t CMP_TS1:8;
      uint64_t CMP_TS2:8;
      uint64_t CMP_TS3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSCMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP_TS4:8;
      uint64_t CMP_TS5:8;
      uint64_t CMP_TS6:8;
      uint64_t CMP_TS7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSCMP1;

};

#define LEDTS0 (*(volatile struct LEDTS0_tag *) 0x48010000)

struct SDMMC_CON_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPSEL:1;
      uint64_t reservedSpace0:3;
      uint64_t WPSVAL:1;
      uint64_t reservedSpace1:11;
      uint64_t CDSEL:1;
      uint64_t reservedSpace2:3;
      uint64_t CDSVAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_CON_register;

};

#define SDMMC_CON (*(volatile struct SDMMC_CON_tag *) 0x500040b4)

struct SDMMC_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t TX_BLOCK_SIZE:12;
      uint64_t reservedSpace0:3;
      uint64_t TX_BLOCK_SIZE_12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BLOCK_SIZE;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BLOCK_COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BLOCK_COUNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARGUMENT1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ARGUMENT1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t BLOCK_COUNT_EN:1;
      uint64_t ACMD_EN:2;
      uint64_t TX_DIR_SELECT:1;
      uint64_t MULTI_BLOCK_SELECT:1;
      uint64_t CMD_COMP_ATA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TRANSFER_MODE;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESP_TYPE_SELECT:2;
      uint64_t reservedSpace0:1;
      uint64_t CMD_CRC_CHECK_EN:1;
      uint64_t CMD_IND_CHECK_EN:1;
      uint64_t DATA_PRESENT_SELECT:1;
      uint64_t CMD_TYPE:2;
      uint64_t CMD_IND:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COMMAND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESPONSE0:16;
      uint64_t RESPONSE1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESPONSE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESPONSE2:16;
      uint64_t RESPONSE3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESPONSE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESPONSE4:16;
      uint64_t RESPONSE5:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESPONSE4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESPONSE6:16;
      uint64_t RESPONSE7:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESPONSE6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BUFFER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA_BUFFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMMAND_INHIBIT_CMD:1;
      uint64_t COMMAND_INHIBIT_DAT:1;
      uint64_t DAT_LINE_ACTIVE:1;
      uint64_t reservedSpace0:5;
      uint64_t WRITE_TRANSFER_ACTIVE:1;
      uint64_t READ_TRANSFER_ACTIVE:1;
      uint64_t BUFFER_WRITE_ENABLE:1;
      uint64_t BUFFER_READ_ENABLE:1;
      uint64_t reservedSpace1:4;
      uint64_t CARD_INSERTED:1;
      uint64_t CARD_STATE_STABLE:1;
      uint64_t CARD_DETECT_PIN_LEVEL:1;
      uint64_t WRITE_PROTECT_PIN_LEVEL:1;
      uint64_t DAT_3_0_PIN_LEVEL:4;
      uint64_t CMD_LINE_LEVEL:1;
      uint64_t DAT_7_4_PIN_LEVEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRESENT_STATE;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LED_CTRL:1;
      uint64_t DATA_TX_WIDTH:1;
      uint64_t HIGH_SPEED_EN:1;
      uint64_t reservedSpace0:2;
      uint64_t SD_8BIT_MODE:1;
      uint64_t CARD_DETECT_TEST_LEVEL:1;
      uint64_t CARD_DET_SIGNAL_DETECT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HOST_CTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SD_BUS_POWER:1;
      uint64_t SD_BUS_VOLTAGE_SEL:3;
      uint64_t HARDWARE_RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) POWER_CTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t STOP_AT_BLOCK_GAP:1;
      uint64_t CONTINUE_REQ:1;
      uint64_t READ_WAIT_CTRL:1;
      uint64_t INT_AT_BLOCK_GAP:1;
      uint64_t SPI_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BLOCK_GAP_CTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WAKEUP_EVENT_EN_INT:1;
      uint64_t WAKEUP_EVENT_EN_INS:1;
      uint64_t WAKEUP_EVENT_EN_REM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WAKEUP_CTRL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INTERNAL_CLOCK_EN:1;
      uint64_t INTERNAL_CLOCK_STABLE:1;
      uint64_t SDCLOCK_EN:1;
      uint64_t reservedSpace0:5;
      uint64_t SDCLK_FREQ_SEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CLOCK_CTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DAT_TIMEOUT_CNT_VAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TIMEOUT_CTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SW_RST_ALL:1;
      uint64_t SW_RST_CMD_LINE:1;
      uint64_t SW_RST_DAT_LINE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SW_RESET;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMD_COMPLETE:1;
      uint64_t TX_COMPLETE:1;
      uint64_t BLOCK_GAP_EVENT:1;
      uint64_t reservedSpace0:1;
      uint64_t BUFF_WRITE_READY:1;
      uint64_t BUFF_READ_READY:1;
      uint64_t CARD_INS:1;
      uint64_t CARD_REMOVAL:1;
      uint64_t CARD_INT:1;
      uint64_t reservedSpace1:6;
      uint64_t ERR_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) INT_STATUS_NORM;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMD_TIMEOUT_ERR:1;
      uint64_t CMD_CRC_ERR:1;
      uint64_t CMD_END_BIT_ERR:1;
      uint64_t CMD_IND_ERR:1;
      uint64_t DATA_TIMEOUT_ERR:1;
      uint64_t DATA_CRC_ERR:1;
      uint64_t DATA_END_BIT_ERR:1;
      uint64_t CURRENT_LIMIT_ERR:1;
      uint64_t ACMD_ERR:1;
      uint64_t reservedSpace0:4;
      uint64_t CEATA_ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) INT_STATUS_ERR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMD_COMPLETE_EN:1;
      uint64_t TX_COMPLETE_EN:1;
      uint64_t BLOCK_GAP_EVENT_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t BUFF_WRITE_READY_EN:1;
      uint64_t BUFF_READ_READY_EN:1;
      uint64_t CARD_INS_EN:1;
      uint64_t CARD_REMOVAL_EN:1;
      uint64_t CARD_INT_EN:1;
      uint64_t reservedSpace1:6;
      uint64_t FIXED_TO_0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN_INT_STATUS_NORM;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMD_TIMEOUT_ERR_EN:1;
      uint64_t CMD_CRC_ERR_EN:1;
      uint64_t CMD_END_BIT_ERR_EN:1;
      uint64_t CMD_IND_ERR_EN:1;
      uint64_t DATA_TIMEOUT_ERR_EN:1;
      uint64_t DATA_CRC_ERR_EN:1;
      uint64_t DATA_END_BIT_ERR_EN:1;
      uint64_t CURRENT_LIMIT_ERR_EN:1;
      uint64_t ACMD_ERR_EN:1;
      uint64_t reservedSpace0:3;
      uint64_t TARGET_RESP_ERR_EN:1;
      uint64_t CEATA_ERR_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN_INT_STATUS_ERR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMD_COMPLETE_EN:1;
      uint64_t TX_COMPLETE_EN:1;
      uint64_t BLOCK_GAP_EVENT_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t BUFF_WRITE_READY_EN:1;
      uint64_t BUFF_READ_READY_EN:1;
      uint64_t CARD_INS_EN:1;
      uint64_t CARD_REMOVAL_EN:1;
      uint64_t CARD_INT_EN:1;
      uint64_t reservedSpace1:6;
      uint64_t FIXED_TO_0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN_INT_SIGNAL_NORM;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMD_TIMEOUT_ERR_EN:1;
      uint64_t CMD_CRC_ERR_EN:1;
      uint64_t CMD_END_BIT_ERR_EN:1;
      uint64_t CMD_IND_ERR_EN:1;
      uint64_t DATA_TIMEOUT_ERR_EN:1;
      uint64_t DATA_CRC_ERR_EN:1;
      uint64_t DATA_END_BIT_ERR_EN:1;
      uint64_t CURRENT_LIMIT_ERR_EN:1;
      uint64_t ACMD_ERR_EN:1;
      uint64_t reservedSpace0:3;
      uint64_t TARGET_RESP_ERR_EN:1;
      uint64_t CEATA_ERR_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN_INT_SIGNAL_ERR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACMD12_NOT_EXEC_ERR:1;
      uint64_t ACMD_TIMEOUT_ERR:1;
      uint64_t ACMD_CRC_ERR:1;
      uint64_t ACMD_END_BIT_ERR:1;
      uint64_t ACMD_IND_ERR:1;
      uint64_t reservedSpace0:2;
      uint64_t CMD_NOT_ISSUED_BY_ACMD12_ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ACMD_ERR_STATUS;

  uint8_t res0[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMEOUT_CLOCK_FREQ:6;
      uint64_t reservedSpace0:1;
      uint64_t TIMEOUT_CLOCK_UNIT:1;
      uint64_t BASE_SD_CLOCK_FREQ:8;
      uint64_t MAX_BLOCK_LENGTH:2;
      uint64_t EXT_MEDIA_BUS_SUPPORT:1;
      uint64_t ADMA2_SUPPORT:1;
      uint64_t reservedSpace1:1;
      uint64_t HIGH_SPEED_SUPPORT:1;
      uint64_t SDMA_SUPPORT:1;
      uint64_t SUSPEND_RESUME_SUPPORT:1;
      uint64_t VOLTAGE_SUPPORT_3_3V:1;
      uint64_t VOLTAGE_SUPPORT_3V:1;
      uint64_t VOLTAGE_SUPPORT_1_8V:1;
      uint64_t reservedSpace2:1;
      uint64_t SYSBUS_64_SUPPORT:1;
      uint64_t ASYNC_INT_SUPPORT:1;
      uint64_t SLOT_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAPABILITIES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDR50_SUPPORT:1;
      uint64_t SDR104_SUPPORT:1;
      uint64_t DDR50_SUPPORT:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV_A_SUPPORT:1;
      uint64_t DRV_C_SUPPORT:1;
      uint64_t DRV_D_SUPPORT:1;
      uint64_t reservedSpace1:1;
      uint64_t TIM_CNT_RETUNE:4;
      uint64_t reservedSpace2:1;
      uint64_t USE_TUNING_SDR50:1;
      uint64_t RE_TUNING_MODES:2;
      uint64_t CLK_MULT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAPABILITIES_HI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX_CURRENT_FOR_3_3V:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAX_CURRENT_CAP;

  uint8_t res1[4];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FE_ACMD_NOT_EXEC:1;
      uint64_t FE_ACMD_TIMEOUT_ERR:1;
      uint64_t FE_ACMD_CRC_ERR:1;
      uint64_t FE_ACMD_END_BIT_ERR:1;
      uint64_t FE_ACMD_IND_ERR:1;
      uint64_t reservedSpace0:2;
      uint64_t FE_CMD_NOT_ISSUED_ACMD12_ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FORCE_EVENT_ACMD_ERR_STATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FE_CMD_TIMEOUT_ERR:1;
      uint64_t FE_CMD_CRC_ERR:1;
      uint64_t FE_CMD_END_BIT_ERR:1;
      uint64_t FE_CMD_IND_ERR:1;
      uint64_t FE_DATA_TIMEOUT_ERR:1;
      uint64_t FE_DATA_CRC_ERR:1;
      uint64_t FE_DATA_END_BIT_ERR:1;
      uint64_t FE_CURRENT_LIMIT_ERR:1;
      uint64_t FE_ACMD12_ERR:1;
      uint64_t reservedSpace0:3;
      uint64_t FE_TARGET_RESPONSE_ERR:1;
      uint64_t FE_CEATA_ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FORCE_EVENT_ERR_STATUS;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEBUG_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEBUG_SEL;

  uint8_t res3[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPI_INT_SUPPORT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI;

  uint8_t res4[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SLOT_INT_STATUS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SLOT_INT_STATUS;

};

#define SDMMC (*(volatile struct SDMMC_tag *) 0x4801c004)

struct EBU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISR:1;
      uint64_t DISS:1;
      uint64_t reservedSpace0:14;
      uint64_t SYNC:1;
      uint64_t DIV2:1;
      uint64_t EBUDIV:2;
      uint64_t SYNCACK:1;
      uint64_t DIV2ACK:1;
      uint64_t EBUDIVACK:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:1;
      uint64_t LCKABRT:1;
      uint64_t SDTRI:1;
      uint64_t reservedSpace0:1;
      uint64_t EXTLOCK:1;
      uint64_t ARBSYNC:1;
      uint64_t ARBMODE:2;
      uint64_t TIMEOUTC:8;
      uint64_t LOCKTIMEOUT:8;
      uint64_t GLOBALCS:4;
      uint64_t ACCSINH:1;
      uint64_t ACCSINHACK:1;
      uint64_t reservedSpace1:1;
      uint64_t ALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODCON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_REV:8;
      uint64_t MOD_TYPE:8;
      uint64_t MOD_NUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIP:1;
      uint64_t reservedSpace0:15;
      uint64_t ADDIO:9;
      uint64_t ADVIO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USERCON;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGENAB:1;
      uint64_t ALTENAB:1;
      uint64_t WPROT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDRSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGENAB:1;
      uint64_t ALTENAB:1;
      uint64_t WPROT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDRSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGENAB:1;
      uint64_t ALTENAB:1;
      uint64_t WPROT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDRSEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGENAB:1;
      uint64_t ALTENAB:1;
      uint64_t WPROT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDRSEL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FETBLEN:3;
      uint64_t FBBMSEL:1;
      uint64_t BFSSS:1;
      uint64_t FDBKEN:1;
      uint64_t BFCMSEL:1;
      uint64_t NAA:1;
      uint64_t reservedSpace0:8;
      uint64_t ECSE:1;
      uint64_t EBSE:1;
      uint64_t DBA:1;
      uint64_t WAITINV:1;
      uint64_t BCGEN:2;
      uint64_t PORTW:2;
      uint64_t WAIT:2;
      uint64_t AAP:1;
      uint64_t reservedSpace1:1;
      uint64_t AGEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUSRCON0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDDTACS:4;
      uint64_t RDRECOVC:3;
      uint64_t WAITRDC:5;
      uint64_t DATAC:4;
      uint64_t EXTCLOCK:2;
      uint64_t EXTDATA:2;
      uint64_t CMDDELAY:4;
      uint64_t AHOLDC:4;
      uint64_t ADDRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUSRAP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FETBLEN:3;
      uint64_t FBBMSEL:1;
      uint64_t reservedSpace0:3;
      uint64_t NAA:1;
      uint64_t reservedSpace1:8;
      uint64_t ECSE:1;
      uint64_t EBSE:1;
      uint64_t reservedSpace2:1;
      uint64_t WAITINV:1;
      uint64_t BCGEN:2;
      uint64_t PORTW:2;
      uint64_t WAIT:2;
      uint64_t AAP:1;
      uint64_t LOCKCS:1;
      uint64_t AGEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUSWCON0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRDTACS:4;
      uint64_t WRRECOVC:3;
      uint64_t WAITWRC:5;
      uint64_t DATAC:4;
      uint64_t EXTCLOCK:2;
      uint64_t EXTDATA:2;
      uint64_t CMDDELAY:4;
      uint64_t AHOLDC:4;
      uint64_t ADDRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUSWAP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FETBLEN:3;
      uint64_t FBBMSEL:1;
      uint64_t BFSSS:1;
      uint64_t FDBKEN:1;
      uint64_t BFCMSEL:1;
      uint64_t NAA:1;
      uint64_t reservedSpace0:8;
      uint64_t ECSE:1;
      uint64_t EBSE:1;
      uint64_t DBA:1;
      uint64_t WAITINV:1;
      uint64_t BCGEN:2;
      uint64_t PORTW:2;
      uint64_t WAIT:2;
      uint64_t AAP:1;
      uint64_t reservedSpace1:1;
      uint64_t AGEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUSRCON1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDDTACS:4;
      uint64_t RDRECOVC:3;
      uint64_t WAITRDC:5;
      uint64_t DATAC:4;
      uint64_t EXTCLOCK:2;
      uint64_t EXTDATA:2;
      uint64_t CMDDELAY:4;
      uint64_t AHOLDC:4;
      uint64_t ADDRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUSRAP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FETBLEN:3;
      uint64_t FBBMSEL:1;
      uint64_t reservedSpace0:3;
      uint64_t NAA:1;
      uint64_t reservedSpace1:8;
      uint64_t ECSE:1;
      uint64_t EBSE:1;
      uint64_t reservedSpace2:1;
      uint64_t WAITINV:1;
      uint64_t BCGEN:2;
      uint64_t PORTW:2;
      uint64_t WAIT:2;
      uint64_t AAP:1;
      uint64_t LOCKCS:1;
      uint64_t AGEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUSWCON1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRDTACS:4;
      uint64_t WRRECOVC:3;
      uint64_t WAITWRC:5;
      uint64_t DATAC:4;
      uint64_t EXTCLOCK:2;
      uint64_t EXTDATA:2;
      uint64_t CMDDELAY:4;
      uint64_t AHOLDC:4;
      uint64_t ADDRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUSWAP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FETBLEN:3;
      uint64_t FBBMSEL:1;
      uint64_t BFSSS:1;
      uint64_t FDBKEN:1;
      uint64_t BFCMSEL:1;
      uint64_t NAA:1;
      uint64_t reservedSpace0:8;
      uint64_t ECSE:1;
      uint64_t EBSE:1;
      uint64_t DBA:1;
      uint64_t WAITINV:1;
      uint64_t BCGEN:2;
      uint64_t PORTW:2;
      uint64_t WAIT:2;
      uint64_t AAP:1;
      uint64_t reservedSpace1:1;
      uint64_t AGEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUSRCON2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDDTACS:4;
      uint64_t RDRECOVC:3;
      uint64_t WAITRDC:5;
      uint64_t DATAC:4;
      uint64_t EXTCLOCK:2;
      uint64_t EXTDATA:2;
      uint64_t CMDDELAY:4;
      uint64_t AHOLDC:4;
      uint64_t ADDRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUSRAP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FETBLEN:3;
      uint64_t FBBMSEL:1;
      uint64_t reservedSpace0:3;
      uint64_t NAA:1;
      uint64_t reservedSpace1:8;
      uint64_t ECSE:1;
      uint64_t EBSE:1;
      uint64_t reservedSpace2:1;
      uint64_t WAITINV:1;
      uint64_t BCGEN:2;
      uint64_t PORTW:2;
      uint64_t WAIT:2;
      uint64_t AAP:1;
      uint64_t LOCKCS:1;
      uint64_t AGEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUSWCON2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRDTACS:4;
      uint64_t WRRECOVC:3;
      uint64_t WAITWRC:5;
      uint64_t DATAC:4;
      uint64_t EXTCLOCK:2;
      uint64_t EXTDATA:2;
      uint64_t CMDDELAY:4;
      uint64_t AHOLDC:4;
      uint64_t ADDRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUSWAP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FETBLEN:3;
      uint64_t FBBMSEL:1;
      uint64_t BFSSS:1;
      uint64_t FDBKEN:1;
      uint64_t BFCMSEL:1;
      uint64_t NAA:1;
      uint64_t reservedSpace0:8;
      uint64_t ECSE:1;
      uint64_t EBSE:1;
      uint64_t DBA:1;
      uint64_t WAITINV:1;
      uint64_t BCGEN:2;
      uint64_t PORTW:2;
      uint64_t WAIT:2;
      uint64_t AAP:1;
      uint64_t reservedSpace1:1;
      uint64_t AGEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUSRCON3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDDTACS:4;
      uint64_t RDRECOVC:3;
      uint64_t WAITRDC:5;
      uint64_t DATAC:4;
      uint64_t EXTCLOCK:2;
      uint64_t EXTDATA:2;
      uint64_t CMDDELAY:4;
      uint64_t AHOLDC:4;
      uint64_t ADDRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUSRAP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FETBLEN:3;
      uint64_t FBBMSEL:1;
      uint64_t reservedSpace0:3;
      uint64_t NAA:1;
      uint64_t reservedSpace1:8;
      uint64_t ECSE:1;
      uint64_t EBSE:1;
      uint64_t reservedSpace2:1;
      uint64_t WAITINV:1;
      uint64_t BCGEN:2;
      uint64_t PORTW:2;
      uint64_t WAIT:2;
      uint64_t AAP:1;
      uint64_t LOCKCS:1;
      uint64_t AGEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUSWCON3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRDTACS:4;
      uint64_t WRRECOVC:3;
      uint64_t WAITWRC:5;
      uint64_t DATAC:4;
      uint64_t EXTCLOCK:2;
      uint64_t EXTDATA:2;
      uint64_t CMDDELAY:4;
      uint64_t AHOLDC:4;
      uint64_t ADDRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUSWAP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRAS:4;
      uint64_t CRFSH:4;
      uint64_t CRSC:2;
      uint64_t CRP:2;
      uint64_t AWIDTH:2;
      uint64_t CRCD:2;
      uint64_t CRC:3;
      uint64_t ROWM:3;
      uint64_t BANKM:3;
      uint64_t CRCE:3;
      uint64_t CLKDIS:1;
      uint64_t PWR_MODE:2;
      uint64_t SDCMSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDRMCON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BURSTL:3;
      uint64_t BTYP:1;
      uint64_t CASLAT:3;
      uint64_t OPMODE:7;
      uint64_t reservedSpace0:1;
      uint64_t COLDSTART:1;
      uint64_t XOPM:12;
      uint64_t XBA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDRMOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REFRESHC:6;
      uint64_t REFRESHR:3;
      uint64_t SELFREXST:1;
      uint64_t SELFREX:1;
      uint64_t SELFRENST:1;
      uint64_t SELFREN:1;
      uint64_t AUTOSELFR:1;
      uint64_t ERFSHC:2;
      uint64_t SELFREX_DLY:8;
      uint64_t ARFSH:1;
      uint64_t RES_DLY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDRMREF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REFERR:1;
      uint64_t SDRMBUSY:1;
      uint64_t SDERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDRSTAT;

};

#define EBU (*(volatile struct EBU_tag *) 0x58008000)

struct ETH0_CON_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXD0:2;
      uint64_t RXD1:2;
      uint64_t RXD2:2;
      uint64_t RXD3:2;
      uint64_t CLK_RMII:2;
      uint64_t CRS_DV:2;
      uint64_t CRS:2;
      uint64_t RXER:2;
      uint64_t COL:2;
      uint64_t CLK_TX:2;
      uint64_t reservedSpace0:2;
      uint64_t MDIO:2;
      uint64_t reservedSpace1:2;
      uint64_t INFSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETH0_CON_register;

};

#define ETH0_CON (*(volatile struct ETH0_CON_tag *) 0x50004040)

struct ETH0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRELEN:2;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t DC:1;
      uint64_t BL:2;
      uint64_t ACS:1;
      uint64_t reservedSpace0:1;
      uint64_t DR:1;
      uint64_t IPC:1;
      uint64_t DM:1;
      uint64_t LM:1;
      uint64_t DO:1;
      uint64_t FES:1;
      uint64_t reservedSpace1:1;
      uint64_t DCRS:1;
      uint64_t IFG:3;
      uint64_t JE:1;
      uint64_t BE:1;
      uint64_t JD:1;
      uint64_t WD:1;
      uint64_t TC:1;
      uint64_t CST:1;
      uint64_t reservedSpace2:1;
      uint64_t TWOKPE:1;
      uint64_t SARC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_CONFIGURATION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:1;
      uint64_t HUC:1;
      uint64_t HMC:1;
      uint64_t DAIF:1;
      uint64_t PM:1;
      uint64_t DBF:1;
      uint64_t PCF:2;
      uint64_t SAIF:1;
      uint64_t SAF:1;
      uint64_t HPF:1;
      uint64_t reservedSpace0:5;
      uint64_t VTFE:1;
      uint64_t reservedSpace1:3;
      uint64_t IPFE:1;
      uint64_t DNTU:1;
      uint64_t reservedSpace2:9;
      uint64_t RA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_FRAME_FILTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HASH_TABLE_HIGH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HASH_TABLE_LOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB:1;
      uint64_t MW:1;
      uint64_t CR:4;
      uint64_t MR:5;
      uint64_t PA:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GMII_ADDRESS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GMII_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCA_BPA:1;
      uint64_t TFE:1;
      uint64_t RFE:1;
      uint64_t UP:1;
      uint64_t PLT:2;
      uint64_t reservedSpace0:1;
      uint64_t DZPQ:1;
      uint64_t reservedSpace1:8;
      uint64_t PT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLOW_CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VL:16;
      uint64_t ETV:1;
      uint64_t VTIM:1;
      uint64_t ESVL:1;
      uint64_t VTHM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VLAN_TAG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SNPSVER:8;
      uint64_t USERVER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERSION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPESTS:1;
      uint64_t RFCFCSTS:2;
      uint64_t reservedSpace0:1;
      uint64_t RWCSTS:1;
      uint64_t RRCSTS:2;
      uint64_t reservedSpace1:1;
      uint64_t RXFSTS:2;
      uint64_t reservedSpace2:6;
      uint64_t TPESTS:1;
      uint64_t TFCSTS:2;
      uint64_t TXPAUSED:1;
      uint64_t TRCSTS:2;
      uint64_t TWCSTS:1;
      uint64_t reservedSpace3:1;
      uint64_t TXFSTS:1;
      uint64_t TXSTSFSTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEBUG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WKUPFRMFTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REMOTE_WAKE_UP_FRAME_FILTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRDWN:1;
      uint64_t MGKPKTEN:1;
      uint64_t RWKPKTEN:1;
      uint64_t reservedSpace0:2;
      uint64_t MGKPRCVD:1;
      uint64_t RWKPRCVD:1;
      uint64_t reservedSpace1:2;
      uint64_t GLBLUCAST:1;
      uint64_t reservedSpace2:21;
      uint64_t RWKFILTRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMT_CONTROL_STATUS;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PMTIS:1;
      uint64_t MMCIS:1;
      uint64_t MMCRXIS:1;
      uint64_t MMCTXIS:1;
      uint64_t MMCRXIPIS:1;
      uint64_t reservedSpace1:1;
      uint64_t TSIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTERRUPT_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PMTIM:1;
      uint64_t reservedSpace1:5;
      uint64_t TSIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTERRUPT_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRHI:16;
      uint64_t reservedSpace0:15;
      uint64_t AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_ADDRESS0_HIGH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRLO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_ADDRESS0_LOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRHI:16;
      uint64_t reservedSpace0:8;
      uint64_t MBC:6;
      uint64_t SA:1;
      uint64_t AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_ADDRESS1_HIGH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRLO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_ADDRESS1_LOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRHI:16;
      uint64_t reservedSpace0:8;
      uint64_t MBC:6;
      uint64_t SA:1;
      uint64_t AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_ADDRESS2_HIGH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRLO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_ADDRESS2_LOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRHI:16;
      uint64_t reservedSpace0:8;
      uint64_t MBC:6;
      uint64_t SA:1;
      uint64_t AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_ADDRESS3_HIGH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRLO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_ADDRESS3_LOW;

  uint8_t res1[160];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTRST:1;
      uint64_t CNTSTOPRO:1;
      uint64_t RSTONRD:1;
      uint64_t CNTFREEZ:1;
      uint64_t CNTPRST:1;
      uint64_t CNTPRSTLVL:1;
      uint64_t reservedSpace0:2;
      uint64_t UCDBC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXGBFRMIS:1;
      uint64_t RXGBOCTIS:1;
      uint64_t RXGOCTIS:1;
      uint64_t RXBCGFIS:1;
      uint64_t RXMCGFIS:1;
      uint64_t RXCRCERFIS:1;
      uint64_t RXALGNERFIS:1;
      uint64_t RXRUNTFIS:1;
      uint64_t RXJABERFIS:1;
      uint64_t RXUSIZEGFIS:1;
      uint64_t RXOSIZEGFIS:1;
      uint64_t RX64OCTGBFIS:1;
      uint64_t RX65T127OCTGBFIS:1;
      uint64_t RX128T255OCTGBFIS:1;
      uint64_t RX256T511OCTGBFIS:1;
      uint64_t RX512T1023OCTGBFIS:1;
      uint64_t RX1024TMAXOCTGBFIS:1;
      uint64_t RXUCGFIS:1;
      uint64_t RXLENERFIS:1;
      uint64_t RXORANGEFIS:1;
      uint64_t RXPAUSFIS:1;
      uint64_t RXFOVFIS:1;
      uint64_t RXVLANGBFIS:1;
      uint64_t RXWDOGFIS:1;
      uint64_t RXRCVERRFIS:1;
      uint64_t RXCTRLFIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_RECEIVE_INTERRUPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXGBOCTIS:1;
      uint64_t TXGBFRMIS:1;
      uint64_t TXBCGFIS:1;
      uint64_t TXMCGFIS:1;
      uint64_t TX64OCTGBFIS:1;
      uint64_t TX65T127OCTGBFIS:1;
      uint64_t TX128T255OCTGBFIS:1;
      uint64_t TX256T511OCTGBFIS:1;
      uint64_t TX512T1023OCTGBFIS:1;
      uint64_t TX1024TMAXOCTGBFIS:1;
      uint64_t TXUCGBFIS:1;
      uint64_t TXMCGBFIS:1;
      uint64_t TXBCGBFIS:1;
      uint64_t TXUFLOWERFIS:1;
      uint64_t TXSCOLGFIS:1;
      uint64_t TXMCOLGFIS:1;
      uint64_t TXDEFFIS:1;
      uint64_t TXLATCOLFIS:1;
      uint64_t TXEXCOLFIS:1;
      uint64_t TXCARERFIS:1;
      uint64_t TXGOCTIS:1;
      uint64_t TXGFRMIS:1;
      uint64_t TXEXDEFFIS:1;
      uint64_t TXPAUSFIS:1;
      uint64_t TXVLANGFIS:1;
      uint64_t TXOSIZEGFIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_TRANSMIT_INTERRUPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXGBFRMIM:1;
      uint64_t RXGBOCTIM:1;
      uint64_t RXGOCTIM:1;
      uint64_t RXBCGFIM:1;
      uint64_t RXMCGFIM:1;
      uint64_t RXCRCERFIM:1;
      uint64_t RXALGNERFIM:1;
      uint64_t RXRUNTFIM:1;
      uint64_t RXJABERFIM:1;
      uint64_t RXUSIZEGFIM:1;
      uint64_t RXOSIZEGFIM:1;
      uint64_t RX64OCTGBFIM:1;
      uint64_t RX65T127OCTGBFIM:1;
      uint64_t RX128T255OCTGBFIM:1;
      uint64_t RX256T511OCTGBFIM:1;
      uint64_t RX512T1023OCTGBFIM:1;
      uint64_t RX1024TMAXOCTGBFIM:1;
      uint64_t RXUCGFIM:1;
      uint64_t RXLENERFIM:1;
      uint64_t RXORANGEFIM:1;
      uint64_t RXPAUSFIM:1;
      uint64_t RXFOVFIM:1;
      uint64_t RXVLANGBFIM:1;
      uint64_t RXWDOGFIM:1;
      uint64_t RXRCVERRFIM:1;
      uint64_t RXCTRLFIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_RECEIVE_INTERRUPT_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXGBOCTIM:1;
      uint64_t TXGBFRMIM:1;
      uint64_t TXBCGFIM:1;
      uint64_t TXMCGFIM:1;
      uint64_t TX64OCTGBFIM:1;
      uint64_t TX65T127OCTGBFIM:1;
      uint64_t TX128T255OCTGBFIM:1;
      uint64_t TX256T511OCTGBFIM:1;
      uint64_t TX512T1023OCTGBFIM:1;
      uint64_t TX1024TMAXOCTGBFIM:1;
      uint64_t TXUCGBFIM:1;
      uint64_t TXMCGBFIM:1;
      uint64_t TXBCGBFIM:1;
      uint64_t TXUFLOWERFIM:1;
      uint64_t TXSCOLGFIM:1;
      uint64_t TXMCOLGFIM:1;
      uint64_t TXDEFFIM:1;
      uint64_t TXLATCOLFIM:1;
      uint64_t TXEXCOLFIM:1;
      uint64_t TXCARERFIM:1;
      uint64_t TXGOCTIM:1;
      uint64_t TXGFRMIM:1;
      uint64_t TXEXDEFFIM:1;
      uint64_t TXPAUSFIM:1;
      uint64_t TXVLANGFIM:1;
      uint64_t TXOSIZEGFIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_TRANSMIT_INTERRUPT_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXOCTGB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_OCTET_COUNT_GOOD_BAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXFRMGB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_FRAME_COUNT_GOOD_BAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXBCASTG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_BROADCAST_FRAMES_GOOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXMCASTG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_MULTICAST_FRAMES_GOOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX64OCTGB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_64OCTETS_FRAMES_GOOD_BAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX65_127OCTGB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_65TO127OCTETS_FRAMES_GOOD_BAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX128_255OCTGB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_128TO255OCTETS_FRAMES_GOOD_BAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX256_511OCTGB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_256TO511OCTETS_FRAMES_GOOD_BAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX512_1023OCTGB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_512TO1023OCTETS_FRAMES_GOOD_BAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX1024_MAXOCTGB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_1024TOMAXOCTETS_FRAMES_GOOD_BAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXUCASTGB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_UNICAST_FRAMES_GOOD_BAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXMCASTGB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_MULTICAST_FRAMES_GOOD_BAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXBCASTGB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_BROADCAST_FRAMES_GOOD_BAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXUNDRFLW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_UNDERFLOW_ERROR_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXSNGLCOLG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_SINGLE_COLLISION_GOOD_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXMULTCOLG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_MULTIPLE_COLLISION_GOOD_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDEFRD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_DEFERRED_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLATECOL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_LATE_COLLISION_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXEXSCOL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_EXCESSIVE_COLLISION_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCARR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_CARRIER_ERROR_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXOCTG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_OCTET_COUNT_GOOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXFRMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_FRAME_COUNT_GOOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXEXSDEF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_EXCESSIVE_DEFERRAL_ERROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPAUSE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_PAUSE_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXVLANG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_VLAN_FRAMES_GOOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXOSIZG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_OSIZE_FRAMES_GOOD;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFRMGB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_FRAMES_COUNT_GOOD_BAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXOCTGB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_OCTET_COUNT_GOOD_BAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXOCTG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_OCTET_COUNT_GOOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXBCASTG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_BROADCAST_FRAMES_GOOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXMCASTG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_MULTICAST_FRAMES_GOOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCRCERR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_CRC_ERROR_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXALGNERR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_ALIGNMENT_ERROR_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRUNTERR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_RUNT_ERROR_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXJABERR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_JABBER_ERROR_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXUNDERSZG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_UNDERSIZE_FRAMES_GOOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXOVERSZG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_OVERSIZE_FRAMES_GOOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX64OCTGB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_64OCTETS_FRAMES_GOOD_BAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX65_127OCTGB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_65TO127OCTETS_FRAMES_GOOD_BAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX128_255OCTGB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_128TO255OCTETS_FRAMES_GOOD_BAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX256_511OCTGB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_256TO511OCTETS_FRAMES_GOOD_BAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX512_1023OCTGB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_512TO1023OCTETS_FRAMES_GOOD_BAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX1024_MAXOCTGB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_1024TOMAXOCTETS_FRAMES_GOOD_BAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXUCASTG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_UNICAST_FRAMES_GOOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXLENERR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_LENGTH_ERROR_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXOUTOFRNG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_OUT_OF_RANGE_TYPE_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPAUSEFRM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_PAUSE_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFIFOOVFL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_FIFO_OVERFLOW_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXVLANFRGB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_VLAN_FRAMES_GOOD_BAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXWDGERR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_WATCHDOG_ERROR_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRCVERR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_RECEIVE_ERROR_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTRLG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_CONTROL_FRAMES_GOOD;

  uint8_t res3[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXIPV4GFIM:1;
      uint64_t RXIPV4HERFIM:1;
      uint64_t RXIPV4NOPAYFIM:1;
      uint64_t RXIPV4FRAGFIM:1;
      uint64_t RXIPV4UDSBLFIM:1;
      uint64_t RXIPV6GFIM:1;
      uint64_t RXIPV6HERFIM:1;
      uint64_t RXIPV6NOPAYFIM:1;
      uint64_t RXUDPGFIM:1;
      uint64_t RXUDPERFIM:1;
      uint64_t RXTCPGFIM:1;
      uint64_t RXTCPERFIM:1;
      uint64_t RXICMPGFIM:1;
      uint64_t RXICMPERFIM:1;
      uint64_t reservedSpace0:2;
      uint64_t RXIPV4GOIM:1;
      uint64_t RXIPV4HEROIM:1;
      uint64_t RXIPV4NOPAYOIM:1;
      uint64_t RXIPV4FRAGOIM:1;
      uint64_t RXIPV4UDSBLOIM:1;
      uint64_t RXIPV6GOIM:1;
      uint64_t RXIPV6HEROIM:1;
      uint64_t RXIPV6NOPAYOIM:1;
      uint64_t RXUDPGOIM:1;
      uint64_t RXUDPEROIM:1;
      uint64_t RXTCPGOIM:1;
      uint64_t RXTCPEROIM:1;
      uint64_t RXICMPGOIM:1;
      uint64_t RXICMPEROIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_IPC_RECEIVE_INTERRUPT_MASK;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXIPV4GFIS:1;
      uint64_t RXIPV4HERFIS:1;
      uint64_t RXIPV4NOPAYFIS:1;
      uint64_t RXIPV4FRAGFIS:1;
      uint64_t RXIPV4UDSBLFIS:1;
      uint64_t RXIPV6GFIS:1;
      uint64_t RXIPV6HERFIS:1;
      uint64_t RXIPV6NOPAYFIS:1;
      uint64_t RXUDPGFIS:1;
      uint64_t RXUDPERFIS:1;
      uint64_t RXTCPGFIS:1;
      uint64_t RXTCPERFIS:1;
      uint64_t RXICMPGFIS:1;
      uint64_t RXICMPERFIS:1;
      uint64_t reservedSpace0:2;
      uint64_t RXIPV4GOIS:1;
      uint64_t RXIPV4HEROIS:1;
      uint64_t RXIPV4NOPAYOIS:1;
      uint64_t RXIPV4FRAGOIS:1;
      uint64_t RXIPV4UDSBLOIS:1;
      uint64_t RXIPV6GOIS:1;
      uint64_t RXIPV6HEROIS:1;
      uint64_t RXIPV6NOPAYOIS:1;
      uint64_t RXUDPGOIS:1;
      uint64_t RXUDPEROIS:1;
      uint64_t RXTCPGOIS:1;
      uint64_t RXTCPEROIS:1;
      uint64_t RXICMPGOIS:1;
      uint64_t RXICMPEROIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_IPC_RECEIVE_INTERRUPT;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXIPV4GDFRM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIPV4_GOOD_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXIPV4HDRERRFRM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIPV4_HEADER_ERROR_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXIPV4NOPAYFRM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIPV4_NO_PAYLOAD_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXIPV4FRAGFRM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIPV4_FRAGMENTED_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXIPV4UDSBLFRM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIPV4_UDP_CHECKSUM_DISABLED_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXIPV6GDFRM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIPV6_GOOD_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXIPV6HDRERRFRM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIPV6_HEADER_ERROR_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXIPV6NOPAYFRM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIPV6_NO_PAYLOAD_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXUDPGDFRM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXUDP_GOOD_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXUDPERRFRM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXUDP_ERROR_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTCPGDFRM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXTCP_GOOD_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTCPERRFRM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXTCP_ERROR_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXICMPGDFRM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXICMP_GOOD_FRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXICMPERRFRM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXICMP_ERROR_FRAMES;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXIPV4GDOCT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIPV4_GOOD_OCTETS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXIPV4HDRERROCT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIPV4_HEADER_ERROR_OCTETS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXIPV4NOPAYOCT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIPV4_NO_PAYLOAD_OCTETS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXIPV4FRAGOCT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIPV4_FRAGMENTED_OCTETS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXIPV4UDSBLOCT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIPV4_UDP_CHECKSUM_DISABLE_OCTETS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXIPV6GDOCT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIPV6_GOOD_OCTETS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXIPV6HDRERROCT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIPV6_HEADER_ERROR_OCTETS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXIPV6NOPAYOCT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIPV6_NO_PAYLOAD_OCTETS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXUDPGDOCT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXUDP_GOOD_OCTETS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXUDPERROCT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXUDP_ERROR_OCTETS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTCPGDOCT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXTCP_GOOD_OCTETS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTCPERROCT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXTCP_ERROR_OCTETS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXICMPGDOCT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXICMP_GOOD_OCTETS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXICMPERROCT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXICMP_ERROR_OCTETS;

  uint8_t res7[1144];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSENA:1;
      uint64_t TSCFUPDT:1;
      uint64_t TSINIT:1;
      uint64_t TSUPDT:1;
      uint64_t TSTRIG:1;
      uint64_t TSADDREG:1;
      uint64_t reservedSpace0:2;
      uint64_t TSENALL:1;
      uint64_t TSCTRLSSR:1;
      uint64_t TSVER2ENA:1;
      uint64_t TSIPENA:1;
      uint64_t TSIPV6ENA:1;
      uint64_t TSIPV4ENA:1;
      uint64_t TSEVNTENA:1;
      uint64_t TSMSTRENA:1;
      uint64_t SNAPTYPSEL:2;
      uint64_t TSENMACADDR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMESTAMP_CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSINC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUB_SECOND_INCREMENT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSTEM_TIME_SECONDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSSS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSTEM_TIME_NANOSECONDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSTEM_TIME_SECONDS_UPDATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSSS:31;
      uint64_t ADDSUB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSTEM_TIME_NANOSECONDS_UPDATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMESTAMP_ADDEND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TARGET_TIME_SECONDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TTSLO:31;
      uint64_t TRGTBUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TARGET_TIME_NANOSECONDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSHWR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSTEM_TIME_HIGHER_WORD_SECONDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSSOVF:1;
      uint64_t TSTARGT:1;
      uint64_t reservedSpace0:1;
      uint64_t TSTRGTERR:1;
      uint64_t TSTARGT1:1;
      uint64_t TSTRGTERR1:1;
      uint64_t TSTARGT2:1;
      uint64_t TSTRGTERR2:1;
      uint64_t TSTARGT3:1;
      uint64_t TSTRGTERR3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMESTAMP_STATUS;

  uint8_t res8[2260];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWR:1;
      uint64_t DA:1;
      uint64_t DSL:5;
      uint64_t ATDS:1;
      uint64_t PBL:6;
      uint64_t PR:2;
      uint64_t FB:1;
      uint64_t RPBL:6;
      uint64_t USP:1;
      uint64_t PBLX8:1;
      uint64_t AAL:1;
      uint64_t MB:1;
      uint64_t TXPR:1;
      uint64_t PRWG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUS_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRANSMIT_POLL_DEMAND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RECEIVE_POLL_DEMAND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RDESLA_32bit:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RECEIVE_DESCRIPTOR_LIST_ADDRESS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TDESLA_32bit:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRANSMIT_DESCRIPTOR_LIST_ADDRESS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI:1;
      uint64_t TPS:1;
      uint64_t TU:1;
      uint64_t TJT:1;
      uint64_t OVF:1;
      uint64_t UNF:1;
      uint64_t RI:1;
      uint64_t RU:1;
      uint64_t RPS:1;
      uint64_t RWT:1;
      uint64_t ETI:1;
      uint64_t reservedSpace0:2;
      uint64_t FBI:1;
      uint64_t ERI:1;
      uint64_t AIS:1;
      uint64_t NIS:1;
      uint64_t RS:3;
      uint64_t TS:3;
      uint64_t EB:3;
      uint64_t reservedSpace1:1;
      uint64_t EMI:1;
      uint64_t EPI:1;
      uint64_t TTI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SR:1;
      uint64_t OSF:1;
      uint64_t RTC_bitfield:2;
      uint64_t reservedSpace1:1;
      uint64_t FUF:1;
      uint64_t FEF:1;
      uint64_t reservedSpace2:5;
      uint64_t ST:1;
      uint64_t TTC:3;
      uint64_t reservedSpace3:3;
      uint64_t FTF:1;
      uint64_t TSF:1;
      uint64_t reservedSpace4:2;
      uint64_t DFF:1;
      uint64_t RSF:1;
      uint64_t DT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPERATION_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIE:1;
      uint64_t TSE:1;
      uint64_t TUE:1;
      uint64_t TJE:1;
      uint64_t OVE:1;
      uint64_t UNE:1;
      uint64_t RIE:1;
      uint64_t RUE:1;
      uint64_t RSE:1;
      uint64_t RWE:1;
      uint64_t ETE:1;
      uint64_t reservedSpace0:2;
      uint64_t FBE:1;
      uint64_t ERE:1;
      uint64_t AIE:1;
      uint64_t NIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTERRUPT_ENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISFRMCNT:16;
      uint64_t MISCNTOVF:1;
      uint64_t OVFFRMCNT:11;
      uint64_t OVFCNTOVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISSED_FRAME_AND_BUFFER_OVERFLOW_COUNTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIWT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RECEIVE_INTERRUPT_WATCHDOG_TIMER;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AHBMS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB_STATUS;

  uint8_t res10[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURTDESAPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CURRENT_HOST_TRANSMIT_DESCRIPTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURRDESAPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CURRENT_HOST_RECEIVE_DESCRIPTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURTBUFAPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CURRENT_HOST_TRANSMIT_BUFFER_ADDRESS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURRBUFAPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CURRENT_HOST_RECEIVE_BUFFER_ADDRESS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIISEL:1;
      uint64_t GMIISEL:1;
      uint64_t HDSEL:1;
      uint64_t EXTHASHEN:1;
      uint64_t HASHSEL:1;
      uint64_t ADDMACADRSEL:1;
      uint64_t PCSSEL:1;
      uint64_t L3L4FLTREN:1;
      uint64_t SMASEL:1;
      uint64_t RWKSEL:1;
      uint64_t MGKSEL:1;
      uint64_t MMCSEL:1;
      uint64_t TSVER1SEL:1;
      uint64_t TSVER2SEL:1;
      uint64_t EEESEL:1;
      uint64_t AVSEL:1;
      uint64_t TXCOESEL:1;
      uint64_t RXTYP1COE:1;
      uint64_t RXTYP2COE:1;
      uint64_t RXFIFOSIZE:1;
      uint64_t RXCHCNT:2;
      uint64_t TXCHCNT:2;
      uint64_t ENHDESSEL:1;
      uint64_t INTTSEN:1;
      uint64_t FLEXIPPSEN:1;
      uint64_t SAVLANINS:1;
      uint64_t ACTPHYIF:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_FEATURE;

};

#define ETH0 (*(volatile struct ETH0_tag *) 0x5000c000)

struct ECAT0_CON_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECATRSTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t LATCHIN0SEL:2;
      uint64_t reservedSpace1:1;
      uint64_t LATCHIN0:1;
      uint64_t LATCHIN1SEL:2;
      uint64_t reservedSpace2:1;
      uint64_t LATCHIN1:1;
      uint64_t PHYOFFSET:5;
      uint64_t reservedSpace3:1;
      uint64_t MDIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXD0:2;
      uint64_t RXD1:2;
      uint64_t RXD2:2;
      uint64_t RXD3:2;
      uint64_t RX_ERR:2;
      uint64_t RX_DV:2;
      uint64_t RX_CLK:2;
      uint64_t reservedSpace0:2;
      uint64_t LINK:2;
      uint64_t reservedSpace1:10;
      uint64_t TX_CLK:2;
      uint64_t TX_SHIFT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXD0:2;
      uint64_t RXD1:2;
      uint64_t RXD2:2;
      uint64_t RXD3:2;
      uint64_t RX_ERR:2;
      uint64_t RX_DV:2;
      uint64_t RX_CLK:2;
      uint64_t reservedSpace0:2;
      uint64_t LINK:2;
      uint64_t reservedSpace1:10;
      uint64_t TX_CLK:2;
      uint64_t TX_SHIFT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONP1;

};

#define ECAT0_CON (*(volatile struct ECAT0_CON_tag *) 0x500041b0)

struct ECAT0_FMMU0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t L_START_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMMU_L_START_ADR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OFFSET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FMMU_LEN;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t L_START_BIT:3;
      uint64_t Res:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_L_START_BIT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t L_STOP_BIT:3;
      uint64_t Res:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_L_STOP_BIT;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P_START_ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FMMU_P_START_ADR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t P_START_BIT:3;
      uint64_t Res:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_P_START_BIT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t R_ACC:1;
      uint64_t W_ACC:1;
      uint64_t Res:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_TYPE;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ACT:1;
      uint64_t Res:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_ACT;

};

#define ECAT0_FMMU0 (*(volatile struct ECAT0_FMMU0_tag *) 0x54010600)

struct ECAT0_FMMU1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t L_START_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMMU_L_START_ADR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OFFSET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FMMU_LEN;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t L_START_BIT:3;
      uint64_t Res:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_L_START_BIT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t L_STOP_BIT:3;
      uint64_t Res:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_L_STOP_BIT;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P_START_ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FMMU_P_START_ADR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t P_START_BIT:3;
      uint64_t Res:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_P_START_BIT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t R_ACC:1;
      uint64_t W_ACC:1;
      uint64_t Res:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_TYPE;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ACT:1;
      uint64_t Res:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_ACT;

};

#define ECAT0_FMMU1 (*(volatile struct ECAT0_FMMU1_tag *) 0x54010610)

struct ECAT0_FMMU2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t L_START_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMMU_L_START_ADR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OFFSET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FMMU_LEN;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t L_START_BIT:3;
      uint64_t Res:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_L_START_BIT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t L_STOP_BIT:3;
      uint64_t Res:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_L_STOP_BIT;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P_START_ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FMMU_P_START_ADR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t P_START_BIT:3;
      uint64_t Res:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_P_START_BIT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t R_ACC:1;
      uint64_t W_ACC:1;
      uint64_t Res:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_TYPE;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ACT:1;
      uint64_t Res:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_ACT;

};

#define ECAT0_FMMU2 (*(volatile struct ECAT0_FMMU2_tag *) 0x54010620)

struct ECAT0_FMMU3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t L_START_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMMU_L_START_ADR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OFFSET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FMMU_LEN;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t L_START_BIT:3;
      uint64_t Res:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_L_START_BIT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t L_STOP_BIT:3;
      uint64_t Res:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_L_STOP_BIT;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P_START_ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FMMU_P_START_ADR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t P_START_BIT:3;
      uint64_t Res:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_P_START_BIT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t R_ACC:1;
      uint64_t W_ACC:1;
      uint64_t Res:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_TYPE;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ACT:1;
      uint64_t Res:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_ACT;

};

#define ECAT0_FMMU3 (*(volatile struct ECAT0_FMMU3_tag *) 0x54010630)

struct ECAT0_FMMU4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t L_START_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMMU_L_START_ADR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OFFSET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FMMU_LEN;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t L_START_BIT:3;
      uint64_t Res:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_L_START_BIT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t L_STOP_BIT:3;
      uint64_t Res:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_L_STOP_BIT;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P_START_ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FMMU_P_START_ADR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t P_START_BIT:3;
      uint64_t Res:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_P_START_BIT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t R_ACC:1;
      uint64_t W_ACC:1;
      uint64_t Res:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_TYPE;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ACT:1;
      uint64_t Res:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_ACT;

};

#define ECAT0_FMMU4 (*(volatile struct ECAT0_FMMU4_tag *) 0x54010640)

struct ECAT0_FMMU5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t L_START_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMMU_L_START_ADR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OFFSET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FMMU_LEN;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t L_START_BIT:3;
      uint64_t Res:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_L_START_BIT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t L_STOP_BIT:3;
      uint64_t Res:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_L_STOP_BIT;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P_START_ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FMMU_P_START_ADR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t P_START_BIT:3;
      uint64_t Res:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_P_START_BIT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t R_ACC:1;
      uint64_t W_ACC:1;
      uint64_t Res:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_TYPE;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ACT:1;
      uint64_t Res:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_ACT;

};

#define ECAT0_FMMU5 (*(volatile struct ECAT0_FMMU5_tag *) 0x54010650)

struct ECAT0_FMMU6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t L_START_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMMU_L_START_ADR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OFFSET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FMMU_LEN;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t L_START_BIT:3;
      uint64_t Res:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_L_START_BIT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t L_STOP_BIT:3;
      uint64_t Res:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_L_STOP_BIT;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P_START_ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FMMU_P_START_ADR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t P_START_BIT:3;
      uint64_t Res:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_P_START_BIT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t R_ACC:1;
      uint64_t W_ACC:1;
      uint64_t Res:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_TYPE;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ACT:1;
      uint64_t Res:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_ACT;

};

#define ECAT0_FMMU6 (*(volatile struct ECAT0_FMMU6_tag *) 0x54010660)

struct ECAT0_FMMU7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t L_START_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMMU_L_START_ADR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OFFSET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FMMU_LEN;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t L_START_BIT:3;
      uint64_t Res:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_L_START_BIT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t L_STOP_BIT:3;
      uint64_t Res:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_L_STOP_BIT;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P_START_ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FMMU_P_START_ADR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t P_START_BIT:3;
      uint64_t Res:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_P_START_BIT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t R_ACC:1;
      uint64_t W_ACC:1;
      uint64_t Res:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_TYPE;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ACT:1;
      uint64_t Res:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FMMU_ACT;

};

#define ECAT0_FMMU7 (*(volatile struct ECAT0_FMMU7_tag *) 0x54010670)

struct ECAT0_SM0_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t FIRST_BYTE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SM_P_START_ADR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NO_BYTES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SM_LEN;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OP_MODE:2;
      uint64_t DIR:2;
      uint64_t INT_ECAT:1;
      uint64_t INT_PDI:1;
      uint64_t WD_TRG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_CONTROL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INT_W:1;
      uint64_t INT_R:1;
      uint64_t reservedSpace0:1;
      uint64_t MB_STATUS:1;
      uint64_t BUF_STATUS:2;
      uint64_t R_BUF_IU:1;
      uint64_t W_BUF_IU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_STATUS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SM_EN:1;
      uint64_t REP_REQ:1;
      uint64_t reservedSpace0:4;
      uint64_t LE_ECAT:1;
      uint64_t LE_PDI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_ACT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DEACT:1;
      uint64_t REP_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_PDI_CTR;

};

#define ECAT0_SM0 (*(volatile struct ECAT0_SM0_tag *) 0x54010800)

struct ECAT0_SM1_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t FIRST_BYTE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SM_P_START_ADR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NO_BYTES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SM_LEN;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OP_MODE:2;
      uint64_t DIR:2;
      uint64_t INT_ECAT:1;
      uint64_t INT_PDI:1;
      uint64_t WD_TRG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_CONTROL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INT_W:1;
      uint64_t INT_R:1;
      uint64_t reservedSpace0:1;
      uint64_t MB_STATUS:1;
      uint64_t BUF_STATUS:2;
      uint64_t R_BUF_IU:1;
      uint64_t W_BUF_IU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_STATUS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SM_EN:1;
      uint64_t REP_REQ:1;
      uint64_t reservedSpace0:4;
      uint64_t LE_ECAT:1;
      uint64_t LE_PDI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_ACT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DEACT:1;
      uint64_t REP_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_PDI_CTR;

};

#define ECAT0_SM1 (*(volatile struct ECAT0_SM1_tag *) 0x54010808)

struct ECAT0_SM2_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t FIRST_BYTE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SM_P_START_ADR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NO_BYTES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SM_LEN;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OP_MODE:2;
      uint64_t DIR:2;
      uint64_t INT_ECAT:1;
      uint64_t INT_PDI:1;
      uint64_t WD_TRG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_CONTROL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INT_W:1;
      uint64_t INT_R:1;
      uint64_t reservedSpace0:1;
      uint64_t MB_STATUS:1;
      uint64_t BUF_STATUS:2;
      uint64_t R_BUF_IU:1;
      uint64_t W_BUF_IU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_STATUS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SM_EN:1;
      uint64_t REP_REQ:1;
      uint64_t reservedSpace0:4;
      uint64_t LE_ECAT:1;
      uint64_t LE_PDI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_ACT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DEACT:1;
      uint64_t REP_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_PDI_CTR;

};

#define ECAT0_SM2 (*(volatile struct ECAT0_SM2_tag *) 0x54010810)

struct ECAT0_SM3_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t FIRST_BYTE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SM_P_START_ADR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NO_BYTES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SM_LEN;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OP_MODE:2;
      uint64_t DIR:2;
      uint64_t INT_ECAT:1;
      uint64_t INT_PDI:1;
      uint64_t WD_TRG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_CONTROL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INT_W:1;
      uint64_t INT_R:1;
      uint64_t reservedSpace0:1;
      uint64_t MB_STATUS:1;
      uint64_t BUF_STATUS:2;
      uint64_t R_BUF_IU:1;
      uint64_t W_BUF_IU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_STATUS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SM_EN:1;
      uint64_t REP_REQ:1;
      uint64_t reservedSpace0:4;
      uint64_t LE_ECAT:1;
      uint64_t LE_PDI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_ACT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DEACT:1;
      uint64_t REP_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_PDI_CTR;

};

#define ECAT0_SM3 (*(volatile struct ECAT0_SM3_tag *) 0x54010818)

struct ECAT0_SM4_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t FIRST_BYTE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SM_P_START_ADR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NO_BYTES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SM_LEN;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OP_MODE:2;
      uint64_t DIR:2;
      uint64_t INT_ECAT:1;
      uint64_t INT_PDI:1;
      uint64_t WD_TRG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_CONTROL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INT_W:1;
      uint64_t INT_R:1;
      uint64_t reservedSpace0:1;
      uint64_t MB_STATUS:1;
      uint64_t BUF_STATUS:2;
      uint64_t R_BUF_IU:1;
      uint64_t W_BUF_IU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_STATUS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SM_EN:1;
      uint64_t REP_REQ:1;
      uint64_t reservedSpace0:4;
      uint64_t LE_ECAT:1;
      uint64_t LE_PDI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_ACT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DEACT:1;
      uint64_t REP_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_PDI_CTR;

};

#define ECAT0_SM4 (*(volatile struct ECAT0_SM4_tag *) 0x54010820)

struct ECAT0_SM5_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t FIRST_BYTE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SM_P_START_ADR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NO_BYTES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SM_LEN;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OP_MODE:2;
      uint64_t DIR:2;
      uint64_t INT_ECAT:1;
      uint64_t INT_PDI:1;
      uint64_t WD_TRG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_CONTROL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INT_W:1;
      uint64_t INT_R:1;
      uint64_t reservedSpace0:1;
      uint64_t MB_STATUS:1;
      uint64_t BUF_STATUS:2;
      uint64_t R_BUF_IU:1;
      uint64_t W_BUF_IU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_STATUS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SM_EN:1;
      uint64_t REP_REQ:1;
      uint64_t reservedSpace0:4;
      uint64_t LE_ECAT:1;
      uint64_t LE_PDI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_ACT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DEACT:1;
      uint64_t REP_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_PDI_CTR;

};

#define ECAT0_SM5 (*(volatile struct ECAT0_SM5_tag *) 0x54010828)

struct ECAT0_SM6_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t FIRST_BYTE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SM_P_START_ADR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NO_BYTES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SM_LEN;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OP_MODE:2;
      uint64_t DIR:2;
      uint64_t INT_ECAT:1;
      uint64_t INT_PDI:1;
      uint64_t WD_TRG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_CONTROL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INT_W:1;
      uint64_t INT_R:1;
      uint64_t reservedSpace0:1;
      uint64_t MB_STATUS:1;
      uint64_t BUF_STATUS:2;
      uint64_t R_BUF_IU:1;
      uint64_t W_BUF_IU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_STATUS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SM_EN:1;
      uint64_t REP_REQ:1;
      uint64_t reservedSpace0:4;
      uint64_t LE_ECAT:1;
      uint64_t LE_PDI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_ACT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DEACT:1;
      uint64_t REP_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_PDI_CTR;

};

#define ECAT0_SM6 (*(volatile struct ECAT0_SM6_tag *) 0x54010830)

struct ECAT0_SM7_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t FIRST_BYTE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SM_P_START_ADR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NO_BYTES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SM_LEN;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OP_MODE:2;
      uint64_t DIR:2;
      uint64_t INT_ECAT:1;
      uint64_t INT_PDI:1;
      uint64_t WD_TRG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_CONTROL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INT_W:1;
      uint64_t INT_R:1;
      uint64_t reservedSpace0:1;
      uint64_t MB_STATUS:1;
      uint64_t BUF_STATUS:2;
      uint64_t R_BUF_IU:1;
      uint64_t W_BUF_IU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_STATUS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SM_EN:1;
      uint64_t REP_REQ:1;
      uint64_t reservedSpace0:4;
      uint64_t LE_ECAT:1;
      uint64_t LE_PDI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_ACT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DEACT:1;
      uint64_t REP_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SM_PDI_CTR;

};

#define ECAT0_SM7 (*(volatile struct ECAT0_SM7_tag *) 0x54010838)

struct USB0_EP0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:2;
      uint64_t reservedSpace0:13;
      uint64_t USBActEP:1;
      uint64_t reservedSpace1:1;
      uint64_t NAKSts:1;
      uint64_t EPType:2;
      uint64_t reservedSpace2:1;
      uint64_t Stall:1;
      uint64_t TxFNum:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t reservedSpace3:2;
      uint64_t EPDis:1;
      uint64_t EPEna:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL0;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XferCompl:1;
      uint64_t EPDisbld:1;
      uint64_t AHBErr:1;
      uint64_t TimeOUT:1;
      uint64_t INTknTXFEmp:1;
      uint64_t reservedSpace0:1;
      uint64_t INEPNakEff:1;
      uint64_t TxFEmp:1;
      uint64_t reservedSpace1:1;
      uint64_t BNAIntr:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XferSize:7;
      uint64_t reservedSpace0:12;
      uint64_t PktCnt:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAAddr:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPDMA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTxFSpcAvail:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMABufferAddr:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPDMAB0;

  uint8_t res2[480];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:2;
      uint64_t reservedSpace0:13;
      uint64_t USBActEP:1;
      uint64_t reservedSpace1:1;
      uint64_t NAKSts:1;
      uint64_t EPType:2;
      uint64_t Snp:1;
      uint64_t Stall:1;
      uint64_t reservedSpace2:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t reservedSpace3:2;
      uint64_t EPDis:1;
      uint64_t EPEna:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XferCompl:1;
      uint64_t EPDisbld:1;
      uint64_t AHBErr:1;
      uint64_t SetUp:1;
      uint64_t OUTTknEPdis:1;
      uint64_t StsPhseRcvd:1;
      uint64_t Back2BackSETup:1;
      uint64_t reservedSpace0:2;
      uint64_t BNAIntr:1;
      uint64_t reservedSpace1:1;
      uint64_t PktDrpSts:1;
      uint64_t BbleErrIntrpt:1;
      uint64_t NAKIntrpt:1;
      uint64_t NYETIntrpt:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPINT0;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XferSize:7;
      uint64_t reservedSpace0:12;
      uint64_t PktCnt:2;
      uint64_t reservedSpace1:8;
      uint64_t SUPCnt:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAAddr:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPDMA0;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMABufferAddr:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPDMAB0;

};

#define USB0_EP0 (*(volatile struct USB0_EP0_tag *) 0x50040900)

struct USIC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_REV:8;
      uint64_t MOD_TYPE:8;
      uint64_t MOD_NUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define USIC0 (*(volatile struct USIC0_tag *) 0x40030008)

struct USIC1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_REV:8;
      uint64_t MOD_TYPE:8;
      uint64_t MOD_NUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define USIC1 (*(volatile struct USIC1_tag *) 0x48020008)

struct USIC2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_REV:8;
      uint64_t MOD_TYPE:8;
      uint64_t MOD_NUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define USIC2 (*(volatile struct USIC2_tag *) 0x48024008)

struct CAN_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISR:1;
      uint64_t DISS:1;
      uint64_t reservedSpace0:1;
      uint64_t EDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_REV:8;
      uint64_t MOD_TYPE:8;
      uint64_t MOD_NUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STEP:10;
      uint64_t reservedSpace0:4;
      uint64_t DM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDR;

  uint8_t res1[240];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BEGIN:8;
      uint64_t END:8;
      uint64_t SIZE:8;
      uint64_t EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIST_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BEGIN:8;
      uint64_t END:8;
      uint64_t SIZE:8;
      uint64_t EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIST_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BEGIN:8;
      uint64_t END:8;
      uint64_t SIZE:8;
      uint64_t EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIST_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BEGIN:8;
      uint64_t END:8;
      uint64_t SIZE:8;
      uint64_t EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIST_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BEGIN:8;
      uint64_t END:8;
      uint64_t SIZE:8;
      uint64_t EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIST_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BEGIN:8;
      uint64_t END:8;
      uint64_t SIZE:8;
      uint64_t EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIST_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BEGIN:8;
      uint64_t END:8;
      uint64_t SIZE:8;
      uint64_t EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIST_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BEGIN:8;
      uint64_t END:8;
      uint64_t SIZE:8;
      uint64_t EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIST_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BEGIN:8;
      uint64_t END:8;
      uint64_t SIZE:8;
      uint64_t EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIST_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BEGIN:8;
      uint64_t END:8;
      uint64_t SIZE:8;
      uint64_t EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIST_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BEGIN:8;
      uint64_t END:8;
      uint64_t SIZE:8;
      uint64_t EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIST_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BEGIN:8;
      uint64_t END:8;
      uint64_t SIZE:8;
      uint64_t EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIST_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BEGIN:8;
      uint64_t END:8;
      uint64_t SIZE:8;
      uint64_t EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIST_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BEGIN:8;
      uint64_t END:8;
      uint64_t SIZE:8;
      uint64_t EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIST_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BEGIN:8;
      uint64_t END:8;
      uint64_t SIZE:8;
      uint64_t EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIST_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BEGIN:8;
      uint64_t END:8;
      uint64_t SIZE:8;
      uint64_t EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIST_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSPND_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSPND_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSPND_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSPND_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSPND_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSPND_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSPND_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSPND_7;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDEX:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSID_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDEX:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSID_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDEX:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSID_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDEX:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSID_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDEX:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSID_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDEX:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSID_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDEX:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSID_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDEX:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSID_7;

  uint8_t res3[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSIMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PANCMD:8;
      uint64_t BUSY:1;
      uint64_t RBUSY:1;
      uint64_t reservedSpace0:6;
      uint64_t PANAR1:8;
      uint64_t PANAR2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PANCTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKSEL:4;
      uint64_t reservedSpace0:8;
      uint64_t MPSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MITR;

};

#define CAN (*(volatile struct CAN_tag *) 0x48014000)

struct CAN_NODE0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t TRIE:1;
      uint64_t LECIE:1;
      uint64_t ALIE:1;
      uint64_t CANDIS:1;
      uint64_t TXDIS:1;
      uint64_t CCE:1;
      uint64_t CALM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEC:3;
      uint64_t TXOK:1;
      uint64_t RXOK:1;
      uint64_t ALERT:1;
      uint64_t EWRN:1;
      uint64_t BOFF:1;
      uint64_t LLE:1;
      uint64_t LOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALINP:4;
      uint64_t LECINP:4;
      uint64_t TRINP:4;
      uint64_t CFCINP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NIPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t LBM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRP:6;
      uint64_t SJW:2;
      uint64_t TSEG1:4;
      uint64_t TSEG2:3;
      uint64_t DIV8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NBTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REC:8;
      uint64_t TEC:8;
      uint64_t EWRNLVL:8;
      uint64_t LETD:1;
      uint64_t LEINC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NECNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFC:16;
      uint64_t CFSEL:3;
      uint64_t CFMOD:2;
      uint64_t reservedSpace0:1;
      uint64_t CFCIE:1;
      uint64_t CFCOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NFCR;

};

#define CAN_NODE0 (*(volatile struct CAN_NODE0_tag *) 0x48014200)

struct CAN_NODE1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t TRIE:1;
      uint64_t LECIE:1;
      uint64_t ALIE:1;
      uint64_t CANDIS:1;
      uint64_t TXDIS:1;
      uint64_t CCE:1;
      uint64_t CALM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEC:3;
      uint64_t TXOK:1;
      uint64_t RXOK:1;
      uint64_t ALERT:1;
      uint64_t EWRN:1;
      uint64_t BOFF:1;
      uint64_t LLE:1;
      uint64_t LOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALINP:4;
      uint64_t LECINP:4;
      uint64_t TRINP:4;
      uint64_t CFCINP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NIPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t LBM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRP:6;
      uint64_t SJW:2;
      uint64_t TSEG1:4;
      uint64_t TSEG2:3;
      uint64_t DIV8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NBTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REC:8;
      uint64_t TEC:8;
      uint64_t EWRNLVL:8;
      uint64_t LETD:1;
      uint64_t LEINC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NECNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFC:16;
      uint64_t CFSEL:3;
      uint64_t CFMOD:2;
      uint64_t reservedSpace0:1;
      uint64_t CFCIE:1;
      uint64_t CFCOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NFCR;

};

#define CAN_NODE1 (*(volatile struct CAN_NODE1_tag *) 0x48014300)

struct CAN_NODE2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t TRIE:1;
      uint64_t LECIE:1;
      uint64_t ALIE:1;
      uint64_t CANDIS:1;
      uint64_t TXDIS:1;
      uint64_t CCE:1;
      uint64_t CALM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEC:3;
      uint64_t TXOK:1;
      uint64_t RXOK:1;
      uint64_t ALERT:1;
      uint64_t EWRN:1;
      uint64_t BOFF:1;
      uint64_t LLE:1;
      uint64_t LOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALINP:4;
      uint64_t LECINP:4;
      uint64_t TRINP:4;
      uint64_t CFCINP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NIPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t LBM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRP:6;
      uint64_t SJW:2;
      uint64_t TSEG1:4;
      uint64_t TSEG2:3;
      uint64_t DIV8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NBTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REC:8;
      uint64_t TEC:8;
      uint64_t EWRNLVL:8;
      uint64_t LETD:1;
      uint64_t LEINC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NECNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFC:16;
      uint64_t CFSEL:3;
      uint64_t CFMOD:2;
      uint64_t reservedSpace0:1;
      uint64_t CFCIE:1;
      uint64_t CFCOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NFCR;

};

#define CAN_NODE2 (*(volatile struct CAN_NODE2_tag *) 0x48014400)

struct CAN_NODE3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t TRIE:1;
      uint64_t LECIE:1;
      uint64_t ALIE:1;
      uint64_t CANDIS:1;
      uint64_t TXDIS:1;
      uint64_t CCE:1;
      uint64_t CALM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEC:3;
      uint64_t TXOK:1;
      uint64_t RXOK:1;
      uint64_t ALERT:1;
      uint64_t EWRN:1;
      uint64_t BOFF:1;
      uint64_t LLE:1;
      uint64_t LOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALINP:4;
      uint64_t LECINP:4;
      uint64_t TRINP:4;
      uint64_t CFCINP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NIPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t LBM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRP:6;
      uint64_t SJW:2;
      uint64_t TSEG1:4;
      uint64_t TSEG2:3;
      uint64_t DIV8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NBTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REC:8;
      uint64_t TEC:8;
      uint64_t EWRNLVL:8;
      uint64_t LETD:1;
      uint64_t LEINC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NECNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFC:16;
      uint64_t CFSEL:3;
      uint64_t CFMOD:2;
      uint64_t reservedSpace0:1;
      uint64_t CFCIE:1;
      uint64_t CFCOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NFCR;

};

#define CAN_NODE3 (*(volatile struct CAN_NODE3_tag *) 0x48014500)

struct CAN_NODE4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t TRIE:1;
      uint64_t LECIE:1;
      uint64_t ALIE:1;
      uint64_t CANDIS:1;
      uint64_t TXDIS:1;
      uint64_t CCE:1;
      uint64_t CALM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEC:3;
      uint64_t TXOK:1;
      uint64_t RXOK:1;
      uint64_t ALERT:1;
      uint64_t EWRN:1;
      uint64_t BOFF:1;
      uint64_t LLE:1;
      uint64_t LOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALINP:4;
      uint64_t LECINP:4;
      uint64_t TRINP:4;
      uint64_t CFCINP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NIPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t LBM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRP:6;
      uint64_t SJW:2;
      uint64_t TSEG1:4;
      uint64_t TSEG2:3;
      uint64_t DIV8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NBTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REC:8;
      uint64_t TEC:8;
      uint64_t EWRNLVL:8;
      uint64_t LETD:1;
      uint64_t LEINC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NECNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFC:16;
      uint64_t CFSEL:3;
      uint64_t CFMOD:2;
      uint64_t reservedSpace0:1;
      uint64_t CFCIE:1;
      uint64_t CFCOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NFCR;

};

#define CAN_NODE4 (*(volatile struct CAN_NODE4_tag *) 0x48014600)

struct CAN_NODE5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t TRIE:1;
      uint64_t LECIE:1;
      uint64_t ALIE:1;
      uint64_t CANDIS:1;
      uint64_t TXDIS:1;
      uint64_t CCE:1;
      uint64_t CALM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEC:3;
      uint64_t TXOK:1;
      uint64_t RXOK:1;
      uint64_t ALERT:1;
      uint64_t EWRN:1;
      uint64_t BOFF:1;
      uint64_t LLE:1;
      uint64_t LOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALINP:4;
      uint64_t LECINP:4;
      uint64_t TRINP:4;
      uint64_t CFCINP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NIPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t LBM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRP:6;
      uint64_t SJW:2;
      uint64_t TSEG1:4;
      uint64_t TSEG2:3;
      uint64_t DIV8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NBTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REC:8;
      uint64_t TEC:8;
      uint64_t EWRNLVL:8;
      uint64_t LETD:1;
      uint64_t LEINC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NECNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFC:16;
      uint64_t CFSEL:3;
      uint64_t CFMOD:2;
      uint64_t reservedSpace0:1;
      uint64_t CFCIE:1;
      uint64_t CFCOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NFCR;

};

#define CAN_NODE5 (*(volatile struct CAN_NODE5_tag *) 0x48014700)

struct VADC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISR:1;
      uint64_t DISS:1;
      uint64_t reservedSpace0:1;
      uint64_t EDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_REV:8;
      uint64_t MOD_TYPE:8;
      uint64_t MOD_NUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TGS:2;
      uint64_t TGB:1;
      uint64_t TG_P:1;
      uint64_t reservedSpace0:20;
      uint64_t SUS:4;
      uint64_t SUS_P:1;
      uint64_t SUSSTA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCS;

  uint8_t res2[84];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVA:5;
      uint64_t reservedSpace0:2;
      uint64_t DCMSB:1;
      uint64_t DIVD:2;
      uint64_t reservedSpace1:5;
      uint64_t DIVWC:1;
      uint64_t DPCAL0:1;
      uint64_t DPCAL1:1;
      uint64_t DPCAL2:1;
      uint64_t DPCAL3:1;
      uint64_t reservedSpace2:11;
      uint64_t SUCAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBCFG;

  uint8_t res3[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STCS:5;
      uint64_t reservedSpace0:3;
      uint64_t CMS:3;
      uint64_t reservedSpace1:5;
      uint64_t STCE:5;
      uint64_t reservedSpace2:3;
      uint64_t CME:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBICLASS_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STCS:5;
      uint64_t reservedSpace0:3;
      uint64_t CMS:3;
      uint64_t reservedSpace1:5;
      uint64_t STCE:5;
      uint64_t reservedSpace2:3;
      uint64_t CME:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBICLASS_1;

  uint8_t res4[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOUNDARY0:12;
      uint64_t reservedSpace0:4;
      uint64_t BOUNDARY1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBBOUND;

  uint8_t res5[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEVGLB:1;
      uint64_t reservedSpace0:7;
      uint64_t REVGLB:1;
      uint64_t reservedSpace1:7;
      uint64_t SEVGLBCLR:1;
      uint64_t reservedSpace2:7;
      uint64_t REVGLBCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBEFLAG;

  uint8_t res6[92];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEV0NP:4;
      uint64_t reservedSpace0:12;
      uint64_t REV0NP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBEVNP;

  uint8_t res7[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CDGR:4;
      uint64_t CDEN:1;
      uint64_t CDSEL:2;
      uint64_t reservedSpace1:4;
      uint64_t CDWC:1;
      uint64_t PDD:1;
      uint64_t reservedSpace2:6;
      uint64_t MDWC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBTF;

  uint8_t res8[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSELG0:1;
      uint64_t CHSELG1:1;
      uint64_t CHSELG2:1;
      uint64_t CHSELG3:1;
      uint64_t CHSELG4:1;
      uint64_t CHSELG5:1;
      uint64_t CHSELG6:1;
      uint64_t CHSELG7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRSSEL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSELG0:1;
      uint64_t CHSELG1:1;
      uint64_t CHSELG2:1;
      uint64_t CHSELG3:1;
      uint64_t CHSELG4:1;
      uint64_t CHSELG5:1;
      uint64_t CHSELG6:1;
      uint64_t CHSELG7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRSSEL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSELG0:1;
      uint64_t CHSELG1:1;
      uint64_t CHSELG2:1;
      uint64_t CHSELG3:1;
      uint64_t CHSELG4:1;
      uint64_t CHSELG5:1;
      uint64_t CHSELG6:1;
      uint64_t CHSELG7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRSSEL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSELG0:1;
      uint64_t CHSELG1:1;
      uint64_t CHSELG2:1;
      uint64_t CHSELG3:1;
      uint64_t CHSELG4:1;
      uint64_t CHSELG5:1;
      uint64_t CHSELG6:1;
      uint64_t CHSELG7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRSSEL_3;

  uint8_t res9[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHPNDG0:1;
      uint64_t CHPNDG1:1;
      uint64_t CHPNDG2:1;
      uint64_t CHPNDG3:1;
      uint64_t CHPNDG4:1;
      uint64_t CHPNDG5:1;
      uint64_t CHPNDG6:1;
      uint64_t CHPNDG7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRSPND_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHPNDG0:1;
      uint64_t CHPNDG1:1;
      uint64_t CHPNDG2:1;
      uint64_t CHPNDG3:1;
      uint64_t CHPNDG4:1;
      uint64_t CHPNDG5:1;
      uint64_t CHPNDG6:1;
      uint64_t CHPNDG7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRSPND_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHPNDG0:1;
      uint64_t CHPNDG1:1;
      uint64_t CHPNDG2:1;
      uint64_t CHPNDG3:1;
      uint64_t CHPNDG4:1;
      uint64_t CHPNDG5:1;
      uint64_t CHPNDG6:1;
      uint64_t CHPNDG7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRSPND_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHPNDG0:1;
      uint64_t CHPNDG1:1;
      uint64_t CHPNDG2:1;
      uint64_t CHPNDG3:1;
      uint64_t CHPNDG4:1;
      uint64_t CHPNDG5:1;
      uint64_t CHPNDG6:1;
      uint64_t CHPNDG7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRSPND_3;

  uint8_t res10[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCRESREG:4;
      uint64_t reservedSpace0:4;
      uint64_t XTSEL:4;
      uint64_t XTLVL:1;
      uint64_t XTMODE:2;
      uint64_t XTWC:1;
      uint64_t GTSEL:4;
      uint64_t GTLVL:1;
      uint64_t reservedSpace1:2;
      uint64_t GTWC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRSCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENGT:2;
      uint64_t ENTR:1;
      uint64_t ENSI:1;
      uint64_t SCAN:1;
      uint64_t LDM:1;
      uint64_t reservedSpace0:1;
      uint64_t REQGT:1;
      uint64_t CLRPND:1;
      uint64_t LDEV:1;
      uint64_t reservedSpace1:6;
      uint64_t RPTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRSMR;

  uint8_t res11[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DRCTR:4;
      uint64_t reservedSpace1:4;
      uint64_t WFR:1;
      uint64_t reservedSpace2:6;
      uint64_t SRGEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBRCR;

  uint8_t res12[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESULT:16;
      uint64_t GNR:4;
      uint64_t CHNR:5;
      uint64_t EMUX:3;
      uint64_t CRS:2;
      uint64_t FCR:1;
      uint64_t VF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBRES;

  uint8_t res13[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESULT:16;
      uint64_t GNR:4;
      uint64_t CHNR:5;
      uint64_t EMUX:3;
      uint64_t CRS:2;
      uint64_t FCR:1;
      uint64_t VF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBRESD;

  uint8_t res14[108];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMUXGRP0:4;
      uint64_t EMUXGRP1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMUXSEL;

};

#define VADC (*(volatile struct VADC_tag *) 0x40004000)

struct DSD_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISR:1;
      uint64_t DISS:1;
      uint64_t reservedSpace0:1;
      uint64_t EDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_REV:8;
      uint64_t MOD_TYPE:8;
      uint64_t MOD_NUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SUS:4;
      uint64_t SUS_P:1;
      uint64_t SUSSTA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCS;

  uint8_t res2[84];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBCFG;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0RUN:1;
      uint64_t CH1RUN:1;
      uint64_t CH2RUN:1;
      uint64_t CH3RUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBRC;

  uint8_t res4[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CGMOD:2;
      uint64_t BREV:1;
      uint64_t SIGPOL:1;
      uint64_t DIVCG:4;
      uint64_t reservedSpace0:7;
      uint64_t RUN:1;
      uint64_t BITCOUNT:5;
      uint64_t reservedSpace1:3;
      uint64_t STEPCOUNT:4;
      uint64_t STEPS:1;
      uint64_t STEPD:1;
      uint64_t SGNCG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CGCFG;

  uint8_t res5[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESEV0:1;
      uint64_t RESEV1:1;
      uint64_t RESEV2:1;
      uint64_t RESEV3:1;
      uint64_t reservedSpace0:12;
      uint64_t ALEV0:1;
      uint64_t ALEV1:1;
      uint64_t ALEV2:1;
      uint64_t ALEV3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVFLAG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESEC0:1;
      uint64_t RESEC1:1;
      uint64_t RESEC2:1;
      uint64_t RESEC3:1;
      uint64_t reservedSpace0:12;
      uint64_t ALEC0:1;
      uint64_t ALEC1:1;
      uint64_t ALEC2:1;
      uint64_t ALEC3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVFLAGCLR;

};

#define DSD (*(volatile struct DSD_tag *) 0x40008000)

struct DSD_CH0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIVM:4;
      uint64_t reservedSpace1:3;
      uint64_t DWC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODCFG;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSRC:4;
      uint64_t reservedSpace0:3;
      uint64_t DSWC:1;
      uint64_t ITRMODE:2;
      uint64_t TSTRMODE:2;
      uint64_t TRSEL:3;
      uint64_t TRWC:1;
      uint64_t CSRC:4;
      uint64_t STROBE:4;
      uint64_t reservedSpace1:7;
      uint64_t SCWC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DICFG;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFMDF:8;
      uint64_t CFMC:2;
      uint64_t CFEN:1;
      uint64_t reservedSpace0:3;
      uint64_t SRGM:2;
      uint64_t CFMSV:8;
      uint64_t CFMDCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFGC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFADF:8;
      uint64_t CFAC:2;
      uint64_t SRGA:2;
      uint64_t ESEL:2;
      uint64_t EGT:1;
      uint64_t reservedSpace0:9;
      uint64_t CFADCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFGA;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NVALCNT:6;
      uint64_t reservedSpace0:1;
      uint64_t INTEN:1;
      uint64_t REPCNT:4;
      uint64_t REPVAL:4;
      uint64_t NVALDIS:6;
      uint64_t reservedSpace1:1;
      uint64_t IWS:1;
      uint64_t NVALINT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IWCTR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOUNDARYL:16;
      uint64_t BOUNDARYU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOUNDSEL;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESULT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESM;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFFM;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESULT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESA;

  uint8_t res7[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESULT:16;
      uint64_t CFMDCNT:8;
      uint64_t NVALCNT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSTMP;

  uint8_t res8[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCOUNT:8;
      uint64_t SDCAP:8;
      uint64_t SDPOS:8;
      uint64_t SDNEG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CGSYNC;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFEN:1;
      uint64_t reservedSpace0:3;
      uint64_t SSRC:2;
      uint64_t reservedSpace1:9;
      uint64_t SDVAL:1;
      uint64_t reservedSpace2:14;
      uint64_t SGNCS:1;
      uint64_t SGND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RECTCFG;

};

#define DSD_CH0 (*(volatile struct DSD_CH0_tag *) 0x40008100)

struct DSD_CH1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIVM:4;
      uint64_t reservedSpace1:3;
      uint64_t DWC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODCFG;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSRC:4;
      uint64_t reservedSpace0:3;
      uint64_t DSWC:1;
      uint64_t ITRMODE:2;
      uint64_t TSTRMODE:2;
      uint64_t TRSEL:3;
      uint64_t TRWC:1;
      uint64_t CSRC:4;
      uint64_t STROBE:4;
      uint64_t reservedSpace1:7;
      uint64_t SCWC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DICFG;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFMDF:8;
      uint64_t CFMC:2;
      uint64_t CFEN:1;
      uint64_t reservedSpace0:3;
      uint64_t SRGM:2;
      uint64_t CFMSV:8;
      uint64_t CFMDCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFGC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFADF:8;
      uint64_t CFAC:2;
      uint64_t SRGA:2;
      uint64_t ESEL:2;
      uint64_t EGT:1;
      uint64_t reservedSpace0:9;
      uint64_t CFADCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFGA;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NVALCNT:6;
      uint64_t reservedSpace0:1;
      uint64_t INTEN:1;
      uint64_t REPCNT:4;
      uint64_t REPVAL:4;
      uint64_t NVALDIS:6;
      uint64_t reservedSpace1:1;
      uint64_t IWS:1;
      uint64_t NVALINT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IWCTR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOUNDARYL:16;
      uint64_t BOUNDARYU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOUNDSEL;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESULT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESM;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFFM;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESULT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESA;

  uint8_t res7[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESULT:16;
      uint64_t CFMDCNT:8;
      uint64_t NVALCNT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSTMP;

  uint8_t res8[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCOUNT:8;
      uint64_t SDCAP:8;
      uint64_t SDPOS:8;
      uint64_t SDNEG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CGSYNC;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFEN:1;
      uint64_t reservedSpace0:3;
      uint64_t SSRC:2;
      uint64_t reservedSpace1:9;
      uint64_t SDVAL:1;
      uint64_t reservedSpace2:14;
      uint64_t SGNCS:1;
      uint64_t SGND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RECTCFG;

};

#define DSD_CH1 (*(volatile struct DSD_CH1_tag *) 0x40008200)

struct DSD_CH2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIVM:4;
      uint64_t reservedSpace1:3;
      uint64_t DWC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODCFG;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSRC:4;
      uint64_t reservedSpace0:3;
      uint64_t DSWC:1;
      uint64_t ITRMODE:2;
      uint64_t TSTRMODE:2;
      uint64_t TRSEL:3;
      uint64_t TRWC:1;
      uint64_t CSRC:4;
      uint64_t STROBE:4;
      uint64_t reservedSpace1:7;
      uint64_t SCWC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DICFG;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFMDF:8;
      uint64_t CFMC:2;
      uint64_t CFEN:1;
      uint64_t reservedSpace0:3;
      uint64_t SRGM:2;
      uint64_t CFMSV:8;
      uint64_t CFMDCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFGC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFADF:8;
      uint64_t CFAC:2;
      uint64_t SRGA:2;
      uint64_t ESEL:2;
      uint64_t EGT:1;
      uint64_t reservedSpace0:9;
      uint64_t CFADCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFGA;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NVALCNT:6;
      uint64_t reservedSpace0:1;
      uint64_t INTEN:1;
      uint64_t REPCNT:4;
      uint64_t REPVAL:4;
      uint64_t NVALDIS:6;
      uint64_t reservedSpace1:1;
      uint64_t IWS:1;
      uint64_t NVALINT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IWCTR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOUNDARYL:16;
      uint64_t BOUNDARYU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOUNDSEL;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESULT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESM;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFFM;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESULT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESA;

  uint8_t res7[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESULT:16;
      uint64_t CFMDCNT:8;
      uint64_t NVALCNT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSTMP;

  uint8_t res8[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCOUNT:8;
      uint64_t SDCAP:8;
      uint64_t SDPOS:8;
      uint64_t SDNEG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CGSYNC;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFEN:1;
      uint64_t reservedSpace0:3;
      uint64_t SSRC:2;
      uint64_t reservedSpace1:9;
      uint64_t SDVAL:1;
      uint64_t reservedSpace2:14;
      uint64_t SGNCS:1;
      uint64_t SGND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RECTCFG;

};

#define DSD_CH2 (*(volatile struct DSD_CH2_tag *) 0x40008300)

struct DSD_CH3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIVM:4;
      uint64_t reservedSpace1:3;
      uint64_t DWC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODCFG;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSRC:4;
      uint64_t reservedSpace0:3;
      uint64_t DSWC:1;
      uint64_t ITRMODE:2;
      uint64_t TSTRMODE:2;
      uint64_t TRSEL:3;
      uint64_t TRWC:1;
      uint64_t CSRC:4;
      uint64_t STROBE:4;
      uint64_t reservedSpace1:7;
      uint64_t SCWC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DICFG;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFMDF:8;
      uint64_t CFMC:2;
      uint64_t CFEN:1;
      uint64_t reservedSpace0:3;
      uint64_t SRGM:2;
      uint64_t CFMSV:8;
      uint64_t CFMDCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFGC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFADF:8;
      uint64_t CFAC:2;
      uint64_t SRGA:2;
      uint64_t ESEL:2;
      uint64_t EGT:1;
      uint64_t reservedSpace0:9;
      uint64_t CFADCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFGA;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NVALCNT:6;
      uint64_t reservedSpace0:1;
      uint64_t INTEN:1;
      uint64_t REPCNT:4;
      uint64_t REPVAL:4;
      uint64_t NVALDIS:6;
      uint64_t reservedSpace1:1;
      uint64_t IWS:1;
      uint64_t NVALINT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IWCTR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOUNDARYL:16;
      uint64_t BOUNDARYU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOUNDSEL;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESULT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESM;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFFM;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESULT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESA;

  uint8_t res7[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESULT:16;
      uint64_t CFMDCNT:8;
      uint64_t NVALCNT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSTMP;

  uint8_t res8[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCOUNT:8;
      uint64_t SDCAP:8;
      uint64_t SDPOS:8;
      uint64_t SDNEG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CGSYNC;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFEN:1;
      uint64_t reservedSpace0:3;
      uint64_t SSRC:2;
      uint64_t reservedSpace1:9;
      uint64_t SDVAL:1;
      uint64_t reservedSpace2:14;
      uint64_t SGNCS:1;
      uint64_t SGND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RECTCFG;

};

#define DSD_CH3 (*(volatile struct DSD_CH3_tag *) 0x40008400)

struct DAC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODR:8;
      uint64_t MODT:8;
      uint64_t MODN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FREQ:20;
      uint64_t MODE:3;
      uint64_t SIGN:1;
      uint64_t FIFOIND:2;
      uint64_t FIFOEMP:1;
      uint64_t FIFOFUL:1;
      uint64_t NEGATE:1;
      uint64_t SIGNEN:1;
      uint64_t SREN:1;
      uint64_t RUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC0CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCALE:3;
      uint64_t MULDIV:1;
      uint64_t OFFS:8;
      uint64_t TRIGSEL:3;
      uint64_t DATMOD:1;
      uint64_t SWTRIG:1;
      uint64_t TRIGMOD:2;
      uint64_t ANACFG:5;
      uint64_t ANAEN:1;
      uint64_t reservedSpace0:3;
      uint64_t REFCFGL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC0CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FREQ:20;
      uint64_t MODE:3;
      uint64_t SIGN:1;
      uint64_t FIFOIND:2;
      uint64_t FIFOEMP:1;
      uint64_t FIFOFUL:1;
      uint64_t NEGATE:1;
      uint64_t SIGNEN:1;
      uint64_t SREN:1;
      uint64_t RUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC1CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCALE:3;
      uint64_t MULDIV:1;
      uint64_t OFFS:8;
      uint64_t TRIGSEL:3;
      uint64_t reservedSpace0:1;
      uint64_t SWTRIG:1;
      uint64_t TRIGMOD:2;
      uint64_t ANACFG:5;
      uint64_t ANAEN:1;
      uint64_t reservedSpace1:3;
      uint64_t REFCFGH:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC1CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC0DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC1DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:12;
      uint64_t reservedSpace0:4;
      uint64_t DATA1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC01DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAT0:5;
      uint64_t PAT1:5;
      uint64_t PAT2:5;
      uint64_t PAT3:5;
      uint64_t PAT4:5;
      uint64_t PAT5:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC0PATL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAT6:5;
      uint64_t PAT7:5;
      uint64_t PAT8:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC0PATH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAT0:5;
      uint64_t PAT1:5;
      uint64_t PAT2:5;
      uint64_t PAT3:5;
      uint64_t PAT4:5;
      uint64_t PAT5:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC1PATL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAT6:5;
      uint64_t PAT7:5;
      uint64_t PAT8:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC1PATH;

};

#define DAC (*(volatile struct DAC_tag *) 0x48018000)

struct CCU40_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRBC:3;
      uint64_t reservedSpace0:1;
      uint64_t PCIS:2;
      uint64_t reservedSpace1:2;
      uint64_t SUSCFG:2;
      uint64_t MSE0:1;
      uint64_t MSE1:1;
      uint64_t MSE2:1;
      uint64_t MSE3:1;
      uint64_t MSDE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0I:1;
      uint64_t S1I:1;
      uint64_t S2I:1;
      uint64_t S3I:1;
      uint64_t reservedSpace0:4;
      uint64_t PRB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SS0I:1;
      uint64_t SS1I:1;
      uint64_t SS2I:1;
      uint64_t SS3I:1;
      uint64_t reservedSpace0:4;
      uint64_t CPRB:1;
      uint64_t PSIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIDLS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CS0I:1;
      uint64_t CS1I:1;
      uint64_t CS2I:1;
      uint64_t CS3I:1;
      uint64_t reservedSpace0:4;
      uint64_t SPRB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIDLC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0SE:1;
      uint64_t S0DSE:1;
      uint64_t S0PSE:1;
      uint64_t reservedSpace0:1;
      uint64_t S1SE:1;
      uint64_t S1DSE:1;
      uint64_t S1PSE:1;
      uint64_t reservedSpace1:1;
      uint64_t S2SE:1;
      uint64_t S2DSE:1;
      uint64_t S2PSE:1;
      uint64_t reservedSpace2:1;
      uint64_t S3SE:1;
      uint64_t S3DSE:1;
      uint64_t S3PSE:1;
      uint64_t reservedSpace3:1;
      uint64_t S0STS:1;
      uint64_t S1STS:1;
      uint64_t S2STS:1;
      uint64_t S3STS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0SC:1;
      uint64_t S0DSC:1;
      uint64_t S0PSC:1;
      uint64_t reservedSpace0:1;
      uint64_t S1SC:1;
      uint64_t S1DSC:1;
      uint64_t S1PSC:1;
      uint64_t reservedSpace1:1;
      uint64_t S2SC:1;
      uint64_t S2DSC:1;
      uint64_t S2PSC:1;
      uint64_t reservedSpace2:1;
      uint64_t S3SC:1;
      uint64_t S3DSC:1;
      uint64_t S3PSC:1;
      uint64_t reservedSpace3:1;
      uint64_t S0STC:1;
      uint64_t S1STC:1;
      uint64_t S2STC:1;
      uint64_t S3STC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0SS:1;
      uint64_t S0DSS:1;
      uint64_t S0PSS:1;
      uint64_t reservedSpace0:1;
      uint64_t S1SS:1;
      uint64_t S1DSS:1;
      uint64_t S1PSS:1;
      uint64_t reservedSpace1:1;
      uint64_t S2SS:1;
      uint64_t S2DSS:1;
      uint64_t S2PSS:1;
      uint64_t reservedSpace2:1;
      uint64_t S3SS:1;
      uint64_t S3DSS:1;
      uint64_t S3PSS:1;
      uint64_t reservedSpace3:1;
      uint64_t CC40ST:1;
      uint64_t CC41ST:1;
      uint64_t CC42ST:1;
      uint64_t CC43ST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCST;

  uint8_t res0[100];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODR:8;
      uint64_t MODT:8;
      uint64_t MODN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIDR;

};

#define CCU40 (*(volatile struct CCU40_tag *) 0x4000c000)

struct CCU41_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRBC:3;
      uint64_t reservedSpace0:1;
      uint64_t PCIS:2;
      uint64_t reservedSpace1:2;
      uint64_t SUSCFG:2;
      uint64_t MSE0:1;
      uint64_t MSE1:1;
      uint64_t MSE2:1;
      uint64_t MSE3:1;
      uint64_t MSDE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0I:1;
      uint64_t S1I:1;
      uint64_t S2I:1;
      uint64_t S3I:1;
      uint64_t reservedSpace0:4;
      uint64_t PRB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SS0I:1;
      uint64_t SS1I:1;
      uint64_t SS2I:1;
      uint64_t SS3I:1;
      uint64_t reservedSpace0:4;
      uint64_t CPRB:1;
      uint64_t PSIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIDLS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CS0I:1;
      uint64_t CS1I:1;
      uint64_t CS2I:1;
      uint64_t CS3I:1;
      uint64_t reservedSpace0:4;
      uint64_t SPRB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIDLC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0SE:1;
      uint64_t S0DSE:1;
      uint64_t S0PSE:1;
      uint64_t reservedSpace0:1;
      uint64_t S1SE:1;
      uint64_t S1DSE:1;
      uint64_t S1PSE:1;
      uint64_t reservedSpace1:1;
      uint64_t S2SE:1;
      uint64_t S2DSE:1;
      uint64_t S2PSE:1;
      uint64_t reservedSpace2:1;
      uint64_t S3SE:1;
      uint64_t S3DSE:1;
      uint64_t S3PSE:1;
      uint64_t reservedSpace3:1;
      uint64_t S0STS:1;
      uint64_t S1STS:1;
      uint64_t S2STS:1;
      uint64_t S3STS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0SC:1;
      uint64_t S0DSC:1;
      uint64_t S0PSC:1;
      uint64_t reservedSpace0:1;
      uint64_t S1SC:1;
      uint64_t S1DSC:1;
      uint64_t S1PSC:1;
      uint64_t reservedSpace1:1;
      uint64_t S2SC:1;
      uint64_t S2DSC:1;
      uint64_t S2PSC:1;
      uint64_t reservedSpace2:1;
      uint64_t S3SC:1;
      uint64_t S3DSC:1;
      uint64_t S3PSC:1;
      uint64_t reservedSpace3:1;
      uint64_t S0STC:1;
      uint64_t S1STC:1;
      uint64_t S2STC:1;
      uint64_t S3STC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0SS:1;
      uint64_t S0DSS:1;
      uint64_t S0PSS:1;
      uint64_t reservedSpace0:1;
      uint64_t S1SS:1;
      uint64_t S1DSS:1;
      uint64_t S1PSS:1;
      uint64_t reservedSpace1:1;
      uint64_t S2SS:1;
      uint64_t S2DSS:1;
      uint64_t S2PSS:1;
      uint64_t reservedSpace2:1;
      uint64_t S3SS:1;
      uint64_t S3DSS:1;
      uint64_t S3PSS:1;
      uint64_t reservedSpace3:1;
      uint64_t CC40ST:1;
      uint64_t CC41ST:1;
      uint64_t CC42ST:1;
      uint64_t CC43ST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCST;

  uint8_t res0[100];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODR:8;
      uint64_t MODT:8;
      uint64_t MODN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIDR;

};

#define CCU41 (*(volatile struct CCU41_tag *) 0x40010000)

struct CCU42_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRBC:3;
      uint64_t reservedSpace0:1;
      uint64_t PCIS:2;
      uint64_t reservedSpace1:2;
      uint64_t SUSCFG:2;
      uint64_t MSE0:1;
      uint64_t MSE1:1;
      uint64_t MSE2:1;
      uint64_t MSE3:1;
      uint64_t MSDE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0I:1;
      uint64_t S1I:1;
      uint64_t S2I:1;
      uint64_t S3I:1;
      uint64_t reservedSpace0:4;
      uint64_t PRB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SS0I:1;
      uint64_t SS1I:1;
      uint64_t SS2I:1;
      uint64_t SS3I:1;
      uint64_t reservedSpace0:4;
      uint64_t CPRB:1;
      uint64_t PSIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIDLS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CS0I:1;
      uint64_t CS1I:1;
      uint64_t CS2I:1;
      uint64_t CS3I:1;
      uint64_t reservedSpace0:4;
      uint64_t SPRB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIDLC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0SE:1;
      uint64_t S0DSE:1;
      uint64_t S0PSE:1;
      uint64_t reservedSpace0:1;
      uint64_t S1SE:1;
      uint64_t S1DSE:1;
      uint64_t S1PSE:1;
      uint64_t reservedSpace1:1;
      uint64_t S2SE:1;
      uint64_t S2DSE:1;
      uint64_t S2PSE:1;
      uint64_t reservedSpace2:1;
      uint64_t S3SE:1;
      uint64_t S3DSE:1;
      uint64_t S3PSE:1;
      uint64_t reservedSpace3:1;
      uint64_t S0STS:1;
      uint64_t S1STS:1;
      uint64_t S2STS:1;
      uint64_t S3STS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0SC:1;
      uint64_t S0DSC:1;
      uint64_t S0PSC:1;
      uint64_t reservedSpace0:1;
      uint64_t S1SC:1;
      uint64_t S1DSC:1;
      uint64_t S1PSC:1;
      uint64_t reservedSpace1:1;
      uint64_t S2SC:1;
      uint64_t S2DSC:1;
      uint64_t S2PSC:1;
      uint64_t reservedSpace2:1;
      uint64_t S3SC:1;
      uint64_t S3DSC:1;
      uint64_t S3PSC:1;
      uint64_t reservedSpace3:1;
      uint64_t S0STC:1;
      uint64_t S1STC:1;
      uint64_t S2STC:1;
      uint64_t S3STC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0SS:1;
      uint64_t S0DSS:1;
      uint64_t S0PSS:1;
      uint64_t reservedSpace0:1;
      uint64_t S1SS:1;
      uint64_t S1DSS:1;
      uint64_t S1PSS:1;
      uint64_t reservedSpace1:1;
      uint64_t S2SS:1;
      uint64_t S2DSS:1;
      uint64_t S2PSS:1;
      uint64_t reservedSpace2:1;
      uint64_t S3SS:1;
      uint64_t S3DSS:1;
      uint64_t S3PSS:1;
      uint64_t reservedSpace3:1;
      uint64_t CC40ST:1;
      uint64_t CC41ST:1;
      uint64_t CC42ST:1;
      uint64_t CC43ST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCST;

  uint8_t res0[100];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODR:8;
      uint64_t MODT:8;
      uint64_t MODN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIDR;

};

#define CCU42 (*(volatile struct CCU42_tag *) 0x40014000)

struct CCU43_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRBC:3;
      uint64_t reservedSpace0:1;
      uint64_t PCIS:2;
      uint64_t reservedSpace1:2;
      uint64_t SUSCFG:2;
      uint64_t MSE0:1;
      uint64_t MSE1:1;
      uint64_t MSE2:1;
      uint64_t MSE3:1;
      uint64_t MSDE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0I:1;
      uint64_t S1I:1;
      uint64_t S2I:1;
      uint64_t S3I:1;
      uint64_t reservedSpace0:4;
      uint64_t PRB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SS0I:1;
      uint64_t SS1I:1;
      uint64_t SS2I:1;
      uint64_t SS3I:1;
      uint64_t reservedSpace0:4;
      uint64_t CPRB:1;
      uint64_t PSIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIDLS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CS0I:1;
      uint64_t CS1I:1;
      uint64_t CS2I:1;
      uint64_t CS3I:1;
      uint64_t reservedSpace0:4;
      uint64_t SPRB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIDLC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0SE:1;
      uint64_t S0DSE:1;
      uint64_t S0PSE:1;
      uint64_t reservedSpace0:1;
      uint64_t S1SE:1;
      uint64_t S1DSE:1;
      uint64_t S1PSE:1;
      uint64_t reservedSpace1:1;
      uint64_t S2SE:1;
      uint64_t S2DSE:1;
      uint64_t S2PSE:1;
      uint64_t reservedSpace2:1;
      uint64_t S3SE:1;
      uint64_t S3DSE:1;
      uint64_t S3PSE:1;
      uint64_t reservedSpace3:1;
      uint64_t S0STS:1;
      uint64_t S1STS:1;
      uint64_t S2STS:1;
      uint64_t S3STS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0SC:1;
      uint64_t S0DSC:1;
      uint64_t S0PSC:1;
      uint64_t reservedSpace0:1;
      uint64_t S1SC:1;
      uint64_t S1DSC:1;
      uint64_t S1PSC:1;
      uint64_t reservedSpace1:1;
      uint64_t S2SC:1;
      uint64_t S2DSC:1;
      uint64_t S2PSC:1;
      uint64_t reservedSpace2:1;
      uint64_t S3SC:1;
      uint64_t S3DSC:1;
      uint64_t S3PSC:1;
      uint64_t reservedSpace3:1;
      uint64_t S0STC:1;
      uint64_t S1STC:1;
      uint64_t S2STC:1;
      uint64_t S3STC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0SS:1;
      uint64_t S0DSS:1;
      uint64_t S0PSS:1;
      uint64_t reservedSpace0:1;
      uint64_t S1SS:1;
      uint64_t S1DSS:1;
      uint64_t S1PSS:1;
      uint64_t reservedSpace1:1;
      uint64_t S2SS:1;
      uint64_t S2DSS:1;
      uint64_t S2PSS:1;
      uint64_t reservedSpace2:1;
      uint64_t S3SS:1;
      uint64_t S3DSS:1;
      uint64_t S3PSS:1;
      uint64_t reservedSpace3:1;
      uint64_t CC40ST:1;
      uint64_t CC41ST:1;
      uint64_t CC42ST:1;
      uint64_t CC43ST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCST;

  uint8_t res0[100];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODR:8;
      uint64_t MODT:8;
      uint64_t MODN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIDR;

};

#define CCU43 (*(volatile struct CCU43_tag *) 0x48004000)

struct CCU40_CC40_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0IS:4;
      uint64_t EV1IS:4;
      uint64_t EV2IS:4;
      uint64_t reservedSpace0:4;
      uint64_t EV0EM:2;
      uint64_t EV1EM:2;
      uint64_t EV2EM:2;
      uint64_t EV0LM:1;
      uint64_t EV1LM:1;
      uint64_t EV2LM:1;
      uint64_t LPF0M:2;
      uint64_t LPF1M:2;
      uint64_t LPF2M:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTS:2;
      uint64_t ENDS:2;
      uint64_t CAP0S:2;
      uint64_t CAP1S:2;
      uint64_t GATES:2;
      uint64_t UDS:2;
      uint64_t LDS:2;
      uint64_t CNTS:2;
      uint64_t OFS:1;
      uint64_t TS:1;
      uint64_t MOS:2;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:1;
      uint64_t CDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBC:1;
      uint64_t TCC:1;
      uint64_t DITC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCM:1;
      uint64_t TSSM:1;
      uint64_t CLST:1;
      uint64_t CMOD:1;
      uint64_t ECM:1;
      uint64_t CAPC:2;
      uint64_t reservedSpace0:1;
      uint64_t ENDM:2;
      uint64_t STRM:1;
      uint64_t SCE:1;
      uint64_t CCS:1;
      uint64_t DITHE:2;
      uint64_t DIM:1;
      uint64_t FPE:1;
      uint64_t TRAPE:1;
      uint64_t reservedSpace1:3;
      uint64_t TRPSE:1;
      uint64_t TRPSW:1;
      uint64_t EMS:1;
      uint64_t EMT:1;
      uint64_t MCME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCV:4;
      uint64_t reservedSpace0:4;
      uint64_t DCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCVS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
      uint64_t reservedSpace0:4;
      uint64_t PVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUS:1;
      uint64_t OMDS:1;
      uint64_t CMUS:1;
      uint64_t CMDS:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AS:1;
      uint64_t E1AS:1;
      uint64_t E2AS:1;
      uint64_t TRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PME:1;
      uint64_t OME:1;
      uint64_t CMUE:1;
      uint64_t CMDE:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AE:1;
      uint64_t E1AE:1;
      uint64_t E2AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSR:2;
      uint64_t CMSR:2;
      uint64_t reservedSpace0:4;
      uint64_t E0SR:2;
      uint64_t E1SR:2;
      uint64_t E2SR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPM:1;
      uint64_t SOM:1;
      uint64_t SCMU:1;
      uint64_t SCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t SE0A:1;
      uint64_t SE1A:1;
      uint64_t SE2A:1;
      uint64_t STRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPM:1;
      uint64_t ROM:1;
      uint64_t RCMU:1;
      uint64_t RCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t RE0A:1;
      uint64_t RE1A:1;
      uint64_t RE2A:1;
      uint64_t RTRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD1;

};

#define CCU40_CC40 (*(volatile struct CCU40_CC40_tag *) 0x4000c100)

struct CCU40_CC41_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0IS:4;
      uint64_t EV1IS:4;
      uint64_t EV2IS:4;
      uint64_t reservedSpace0:4;
      uint64_t EV0EM:2;
      uint64_t EV1EM:2;
      uint64_t EV2EM:2;
      uint64_t EV0LM:1;
      uint64_t EV1LM:1;
      uint64_t EV2LM:1;
      uint64_t LPF0M:2;
      uint64_t LPF1M:2;
      uint64_t LPF2M:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTS:2;
      uint64_t ENDS:2;
      uint64_t CAP0S:2;
      uint64_t CAP1S:2;
      uint64_t GATES:2;
      uint64_t UDS:2;
      uint64_t LDS:2;
      uint64_t CNTS:2;
      uint64_t OFS:1;
      uint64_t TS:1;
      uint64_t MOS:2;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:1;
      uint64_t CDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBC:1;
      uint64_t TCC:1;
      uint64_t DITC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCM:1;
      uint64_t TSSM:1;
      uint64_t CLST:1;
      uint64_t CMOD:1;
      uint64_t ECM:1;
      uint64_t CAPC:2;
      uint64_t reservedSpace0:1;
      uint64_t ENDM:2;
      uint64_t STRM:1;
      uint64_t SCE:1;
      uint64_t CCS:1;
      uint64_t DITHE:2;
      uint64_t DIM:1;
      uint64_t FPE:1;
      uint64_t TRAPE:1;
      uint64_t reservedSpace1:3;
      uint64_t TRPSE:1;
      uint64_t TRPSW:1;
      uint64_t EMS:1;
      uint64_t EMT:1;
      uint64_t MCME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCV:4;
      uint64_t reservedSpace0:4;
      uint64_t DCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCVS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
      uint64_t reservedSpace0:4;
      uint64_t PVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUS:1;
      uint64_t OMDS:1;
      uint64_t CMUS:1;
      uint64_t CMDS:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AS:1;
      uint64_t E1AS:1;
      uint64_t E2AS:1;
      uint64_t TRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PME:1;
      uint64_t OME:1;
      uint64_t CMUE:1;
      uint64_t CMDE:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AE:1;
      uint64_t E1AE:1;
      uint64_t E2AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSR:2;
      uint64_t CMSR:2;
      uint64_t reservedSpace0:4;
      uint64_t E0SR:2;
      uint64_t E1SR:2;
      uint64_t E2SR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPM:1;
      uint64_t SOM:1;
      uint64_t SCMU:1;
      uint64_t SCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t SE0A:1;
      uint64_t SE1A:1;
      uint64_t SE2A:1;
      uint64_t STRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPM:1;
      uint64_t ROM:1;
      uint64_t RCMU:1;
      uint64_t RCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t RE0A:1;
      uint64_t RE1A:1;
      uint64_t RE2A:1;
      uint64_t RTRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD1;

};

#define CCU40_CC41 (*(volatile struct CCU40_CC41_tag *) 0x4000c200)

struct CCU40_CC42_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0IS:4;
      uint64_t EV1IS:4;
      uint64_t EV2IS:4;
      uint64_t reservedSpace0:4;
      uint64_t EV0EM:2;
      uint64_t EV1EM:2;
      uint64_t EV2EM:2;
      uint64_t EV0LM:1;
      uint64_t EV1LM:1;
      uint64_t EV2LM:1;
      uint64_t LPF0M:2;
      uint64_t LPF1M:2;
      uint64_t LPF2M:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTS:2;
      uint64_t ENDS:2;
      uint64_t CAP0S:2;
      uint64_t CAP1S:2;
      uint64_t GATES:2;
      uint64_t UDS:2;
      uint64_t LDS:2;
      uint64_t CNTS:2;
      uint64_t OFS:1;
      uint64_t TS:1;
      uint64_t MOS:2;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:1;
      uint64_t CDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBC:1;
      uint64_t TCC:1;
      uint64_t DITC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCM:1;
      uint64_t TSSM:1;
      uint64_t CLST:1;
      uint64_t CMOD:1;
      uint64_t ECM:1;
      uint64_t CAPC:2;
      uint64_t reservedSpace0:1;
      uint64_t ENDM:2;
      uint64_t STRM:1;
      uint64_t SCE:1;
      uint64_t CCS:1;
      uint64_t DITHE:2;
      uint64_t DIM:1;
      uint64_t FPE:1;
      uint64_t TRAPE:1;
      uint64_t reservedSpace1:3;
      uint64_t TRPSE:1;
      uint64_t TRPSW:1;
      uint64_t EMS:1;
      uint64_t EMT:1;
      uint64_t MCME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCV:4;
      uint64_t reservedSpace0:4;
      uint64_t DCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCVS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
      uint64_t reservedSpace0:4;
      uint64_t PVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUS:1;
      uint64_t OMDS:1;
      uint64_t CMUS:1;
      uint64_t CMDS:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AS:1;
      uint64_t E1AS:1;
      uint64_t E2AS:1;
      uint64_t TRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PME:1;
      uint64_t OME:1;
      uint64_t CMUE:1;
      uint64_t CMDE:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AE:1;
      uint64_t E1AE:1;
      uint64_t E2AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSR:2;
      uint64_t CMSR:2;
      uint64_t reservedSpace0:4;
      uint64_t E0SR:2;
      uint64_t E1SR:2;
      uint64_t E2SR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPM:1;
      uint64_t SOM:1;
      uint64_t SCMU:1;
      uint64_t SCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t SE0A:1;
      uint64_t SE1A:1;
      uint64_t SE2A:1;
      uint64_t STRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPM:1;
      uint64_t ROM:1;
      uint64_t RCMU:1;
      uint64_t RCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t RE0A:1;
      uint64_t RE1A:1;
      uint64_t RE2A:1;
      uint64_t RTRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD1;

};

#define CCU40_CC42 (*(volatile struct CCU40_CC42_tag *) 0x4000c300)

struct CCU40_CC43_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0IS:4;
      uint64_t EV1IS:4;
      uint64_t EV2IS:4;
      uint64_t reservedSpace0:4;
      uint64_t EV0EM:2;
      uint64_t EV1EM:2;
      uint64_t EV2EM:2;
      uint64_t EV0LM:1;
      uint64_t EV1LM:1;
      uint64_t EV2LM:1;
      uint64_t LPF0M:2;
      uint64_t LPF1M:2;
      uint64_t LPF2M:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTS:2;
      uint64_t ENDS:2;
      uint64_t CAP0S:2;
      uint64_t CAP1S:2;
      uint64_t GATES:2;
      uint64_t UDS:2;
      uint64_t LDS:2;
      uint64_t CNTS:2;
      uint64_t OFS:1;
      uint64_t TS:1;
      uint64_t MOS:2;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:1;
      uint64_t CDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBC:1;
      uint64_t TCC:1;
      uint64_t DITC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCM:1;
      uint64_t TSSM:1;
      uint64_t CLST:1;
      uint64_t CMOD:1;
      uint64_t ECM:1;
      uint64_t CAPC:2;
      uint64_t reservedSpace0:1;
      uint64_t ENDM:2;
      uint64_t STRM:1;
      uint64_t SCE:1;
      uint64_t CCS:1;
      uint64_t DITHE:2;
      uint64_t DIM:1;
      uint64_t FPE:1;
      uint64_t TRAPE:1;
      uint64_t reservedSpace1:3;
      uint64_t TRPSE:1;
      uint64_t TRPSW:1;
      uint64_t EMS:1;
      uint64_t EMT:1;
      uint64_t MCME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCV:4;
      uint64_t reservedSpace0:4;
      uint64_t DCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCVS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
      uint64_t reservedSpace0:4;
      uint64_t PVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUS:1;
      uint64_t OMDS:1;
      uint64_t CMUS:1;
      uint64_t CMDS:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AS:1;
      uint64_t E1AS:1;
      uint64_t E2AS:1;
      uint64_t TRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PME:1;
      uint64_t OME:1;
      uint64_t CMUE:1;
      uint64_t CMDE:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AE:1;
      uint64_t E1AE:1;
      uint64_t E2AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSR:2;
      uint64_t CMSR:2;
      uint64_t reservedSpace0:4;
      uint64_t E0SR:2;
      uint64_t E1SR:2;
      uint64_t E2SR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPM:1;
      uint64_t SOM:1;
      uint64_t SCMU:1;
      uint64_t SCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t SE0A:1;
      uint64_t SE1A:1;
      uint64_t SE2A:1;
      uint64_t STRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPM:1;
      uint64_t ROM:1;
      uint64_t RCMU:1;
      uint64_t RCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t RE0A:1;
      uint64_t RE1A:1;
      uint64_t RE2A:1;
      uint64_t RTRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD1;

};

#define CCU40_CC43 (*(volatile struct CCU40_CC43_tag *) 0x4000c400)

struct CCU41_CC40_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0IS:4;
      uint64_t EV1IS:4;
      uint64_t EV2IS:4;
      uint64_t reservedSpace0:4;
      uint64_t EV0EM:2;
      uint64_t EV1EM:2;
      uint64_t EV2EM:2;
      uint64_t EV0LM:1;
      uint64_t EV1LM:1;
      uint64_t EV2LM:1;
      uint64_t LPF0M:2;
      uint64_t LPF1M:2;
      uint64_t LPF2M:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTS:2;
      uint64_t ENDS:2;
      uint64_t CAP0S:2;
      uint64_t CAP1S:2;
      uint64_t GATES:2;
      uint64_t UDS:2;
      uint64_t LDS:2;
      uint64_t CNTS:2;
      uint64_t OFS:1;
      uint64_t TS:1;
      uint64_t MOS:2;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:1;
      uint64_t CDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBC:1;
      uint64_t TCC:1;
      uint64_t DITC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCM:1;
      uint64_t TSSM:1;
      uint64_t CLST:1;
      uint64_t CMOD:1;
      uint64_t ECM:1;
      uint64_t CAPC:2;
      uint64_t reservedSpace0:1;
      uint64_t ENDM:2;
      uint64_t STRM:1;
      uint64_t SCE:1;
      uint64_t CCS:1;
      uint64_t DITHE:2;
      uint64_t DIM:1;
      uint64_t FPE:1;
      uint64_t TRAPE:1;
      uint64_t reservedSpace1:3;
      uint64_t TRPSE:1;
      uint64_t TRPSW:1;
      uint64_t EMS:1;
      uint64_t EMT:1;
      uint64_t MCME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCV:4;
      uint64_t reservedSpace0:4;
      uint64_t DCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCVS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
      uint64_t reservedSpace0:4;
      uint64_t PVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUS:1;
      uint64_t OMDS:1;
      uint64_t CMUS:1;
      uint64_t CMDS:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AS:1;
      uint64_t E1AS:1;
      uint64_t E2AS:1;
      uint64_t TRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PME:1;
      uint64_t OME:1;
      uint64_t CMUE:1;
      uint64_t CMDE:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AE:1;
      uint64_t E1AE:1;
      uint64_t E2AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSR:2;
      uint64_t CMSR:2;
      uint64_t reservedSpace0:4;
      uint64_t E0SR:2;
      uint64_t E1SR:2;
      uint64_t E2SR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPM:1;
      uint64_t SOM:1;
      uint64_t SCMU:1;
      uint64_t SCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t SE0A:1;
      uint64_t SE1A:1;
      uint64_t SE2A:1;
      uint64_t STRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPM:1;
      uint64_t ROM:1;
      uint64_t RCMU:1;
      uint64_t RCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t RE0A:1;
      uint64_t RE1A:1;
      uint64_t RE2A:1;
      uint64_t RTRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD1;

};

#define CCU41_CC40 (*(volatile struct CCU41_CC40_tag *) 0x40010100)

struct CCU41_CC41_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0IS:4;
      uint64_t EV1IS:4;
      uint64_t EV2IS:4;
      uint64_t reservedSpace0:4;
      uint64_t EV0EM:2;
      uint64_t EV1EM:2;
      uint64_t EV2EM:2;
      uint64_t EV0LM:1;
      uint64_t EV1LM:1;
      uint64_t EV2LM:1;
      uint64_t LPF0M:2;
      uint64_t LPF1M:2;
      uint64_t LPF2M:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTS:2;
      uint64_t ENDS:2;
      uint64_t CAP0S:2;
      uint64_t CAP1S:2;
      uint64_t GATES:2;
      uint64_t UDS:2;
      uint64_t LDS:2;
      uint64_t CNTS:2;
      uint64_t OFS:1;
      uint64_t TS:1;
      uint64_t MOS:2;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:1;
      uint64_t CDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBC:1;
      uint64_t TCC:1;
      uint64_t DITC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCM:1;
      uint64_t TSSM:1;
      uint64_t CLST:1;
      uint64_t CMOD:1;
      uint64_t ECM:1;
      uint64_t CAPC:2;
      uint64_t reservedSpace0:1;
      uint64_t ENDM:2;
      uint64_t STRM:1;
      uint64_t SCE:1;
      uint64_t CCS:1;
      uint64_t DITHE:2;
      uint64_t DIM:1;
      uint64_t FPE:1;
      uint64_t TRAPE:1;
      uint64_t reservedSpace1:3;
      uint64_t TRPSE:1;
      uint64_t TRPSW:1;
      uint64_t EMS:1;
      uint64_t EMT:1;
      uint64_t MCME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCV:4;
      uint64_t reservedSpace0:4;
      uint64_t DCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCVS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
      uint64_t reservedSpace0:4;
      uint64_t PVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUS:1;
      uint64_t OMDS:1;
      uint64_t CMUS:1;
      uint64_t CMDS:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AS:1;
      uint64_t E1AS:1;
      uint64_t E2AS:1;
      uint64_t TRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PME:1;
      uint64_t OME:1;
      uint64_t CMUE:1;
      uint64_t CMDE:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AE:1;
      uint64_t E1AE:1;
      uint64_t E2AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSR:2;
      uint64_t CMSR:2;
      uint64_t reservedSpace0:4;
      uint64_t E0SR:2;
      uint64_t E1SR:2;
      uint64_t E2SR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPM:1;
      uint64_t SOM:1;
      uint64_t SCMU:1;
      uint64_t SCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t SE0A:1;
      uint64_t SE1A:1;
      uint64_t SE2A:1;
      uint64_t STRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPM:1;
      uint64_t ROM:1;
      uint64_t RCMU:1;
      uint64_t RCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t RE0A:1;
      uint64_t RE1A:1;
      uint64_t RE2A:1;
      uint64_t RTRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD1;

};

#define CCU41_CC41 (*(volatile struct CCU41_CC41_tag *) 0x40010200)

struct CCU41_CC42_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0IS:4;
      uint64_t EV1IS:4;
      uint64_t EV2IS:4;
      uint64_t reservedSpace0:4;
      uint64_t EV0EM:2;
      uint64_t EV1EM:2;
      uint64_t EV2EM:2;
      uint64_t EV0LM:1;
      uint64_t EV1LM:1;
      uint64_t EV2LM:1;
      uint64_t LPF0M:2;
      uint64_t LPF1M:2;
      uint64_t LPF2M:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTS:2;
      uint64_t ENDS:2;
      uint64_t CAP0S:2;
      uint64_t CAP1S:2;
      uint64_t GATES:2;
      uint64_t UDS:2;
      uint64_t LDS:2;
      uint64_t CNTS:2;
      uint64_t OFS:1;
      uint64_t TS:1;
      uint64_t MOS:2;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:1;
      uint64_t CDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBC:1;
      uint64_t TCC:1;
      uint64_t DITC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCM:1;
      uint64_t TSSM:1;
      uint64_t CLST:1;
      uint64_t CMOD:1;
      uint64_t ECM:1;
      uint64_t CAPC:2;
      uint64_t reservedSpace0:1;
      uint64_t ENDM:2;
      uint64_t STRM:1;
      uint64_t SCE:1;
      uint64_t CCS:1;
      uint64_t DITHE:2;
      uint64_t DIM:1;
      uint64_t FPE:1;
      uint64_t TRAPE:1;
      uint64_t reservedSpace1:3;
      uint64_t TRPSE:1;
      uint64_t TRPSW:1;
      uint64_t EMS:1;
      uint64_t EMT:1;
      uint64_t MCME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCV:4;
      uint64_t reservedSpace0:4;
      uint64_t DCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCVS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
      uint64_t reservedSpace0:4;
      uint64_t PVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUS:1;
      uint64_t OMDS:1;
      uint64_t CMUS:1;
      uint64_t CMDS:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AS:1;
      uint64_t E1AS:1;
      uint64_t E2AS:1;
      uint64_t TRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PME:1;
      uint64_t OME:1;
      uint64_t CMUE:1;
      uint64_t CMDE:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AE:1;
      uint64_t E1AE:1;
      uint64_t E2AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSR:2;
      uint64_t CMSR:2;
      uint64_t reservedSpace0:4;
      uint64_t E0SR:2;
      uint64_t E1SR:2;
      uint64_t E2SR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPM:1;
      uint64_t SOM:1;
      uint64_t SCMU:1;
      uint64_t SCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t SE0A:1;
      uint64_t SE1A:1;
      uint64_t SE2A:1;
      uint64_t STRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPM:1;
      uint64_t ROM:1;
      uint64_t RCMU:1;
      uint64_t RCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t RE0A:1;
      uint64_t RE1A:1;
      uint64_t RE2A:1;
      uint64_t RTRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD1;

};

#define CCU41_CC42 (*(volatile struct CCU41_CC42_tag *) 0x40010300)

struct CCU41_CC43_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0IS:4;
      uint64_t EV1IS:4;
      uint64_t EV2IS:4;
      uint64_t reservedSpace0:4;
      uint64_t EV0EM:2;
      uint64_t EV1EM:2;
      uint64_t EV2EM:2;
      uint64_t EV0LM:1;
      uint64_t EV1LM:1;
      uint64_t EV2LM:1;
      uint64_t LPF0M:2;
      uint64_t LPF1M:2;
      uint64_t LPF2M:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTS:2;
      uint64_t ENDS:2;
      uint64_t CAP0S:2;
      uint64_t CAP1S:2;
      uint64_t GATES:2;
      uint64_t UDS:2;
      uint64_t LDS:2;
      uint64_t CNTS:2;
      uint64_t OFS:1;
      uint64_t TS:1;
      uint64_t MOS:2;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:1;
      uint64_t CDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBC:1;
      uint64_t TCC:1;
      uint64_t DITC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCM:1;
      uint64_t TSSM:1;
      uint64_t CLST:1;
      uint64_t CMOD:1;
      uint64_t ECM:1;
      uint64_t CAPC:2;
      uint64_t reservedSpace0:1;
      uint64_t ENDM:2;
      uint64_t STRM:1;
      uint64_t SCE:1;
      uint64_t CCS:1;
      uint64_t DITHE:2;
      uint64_t DIM:1;
      uint64_t FPE:1;
      uint64_t TRAPE:1;
      uint64_t reservedSpace1:3;
      uint64_t TRPSE:1;
      uint64_t TRPSW:1;
      uint64_t EMS:1;
      uint64_t EMT:1;
      uint64_t MCME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCV:4;
      uint64_t reservedSpace0:4;
      uint64_t DCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCVS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
      uint64_t reservedSpace0:4;
      uint64_t PVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUS:1;
      uint64_t OMDS:1;
      uint64_t CMUS:1;
      uint64_t CMDS:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AS:1;
      uint64_t E1AS:1;
      uint64_t E2AS:1;
      uint64_t TRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PME:1;
      uint64_t OME:1;
      uint64_t CMUE:1;
      uint64_t CMDE:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AE:1;
      uint64_t E1AE:1;
      uint64_t E2AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSR:2;
      uint64_t CMSR:2;
      uint64_t reservedSpace0:4;
      uint64_t E0SR:2;
      uint64_t E1SR:2;
      uint64_t E2SR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPM:1;
      uint64_t SOM:1;
      uint64_t SCMU:1;
      uint64_t SCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t SE0A:1;
      uint64_t SE1A:1;
      uint64_t SE2A:1;
      uint64_t STRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPM:1;
      uint64_t ROM:1;
      uint64_t RCMU:1;
      uint64_t RCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t RE0A:1;
      uint64_t RE1A:1;
      uint64_t RE2A:1;
      uint64_t RTRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD1;

};

#define CCU41_CC43 (*(volatile struct CCU41_CC43_tag *) 0x40010400)

struct CCU42_CC40_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0IS:4;
      uint64_t EV1IS:4;
      uint64_t EV2IS:4;
      uint64_t reservedSpace0:4;
      uint64_t EV0EM:2;
      uint64_t EV1EM:2;
      uint64_t EV2EM:2;
      uint64_t EV0LM:1;
      uint64_t EV1LM:1;
      uint64_t EV2LM:1;
      uint64_t LPF0M:2;
      uint64_t LPF1M:2;
      uint64_t LPF2M:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTS:2;
      uint64_t ENDS:2;
      uint64_t CAP0S:2;
      uint64_t CAP1S:2;
      uint64_t GATES:2;
      uint64_t UDS:2;
      uint64_t LDS:2;
      uint64_t CNTS:2;
      uint64_t OFS:1;
      uint64_t TS:1;
      uint64_t MOS:2;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:1;
      uint64_t CDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBC:1;
      uint64_t TCC:1;
      uint64_t DITC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCM:1;
      uint64_t TSSM:1;
      uint64_t CLST:1;
      uint64_t CMOD:1;
      uint64_t ECM:1;
      uint64_t CAPC:2;
      uint64_t reservedSpace0:1;
      uint64_t ENDM:2;
      uint64_t STRM:1;
      uint64_t SCE:1;
      uint64_t CCS:1;
      uint64_t DITHE:2;
      uint64_t DIM:1;
      uint64_t FPE:1;
      uint64_t TRAPE:1;
      uint64_t reservedSpace1:3;
      uint64_t TRPSE:1;
      uint64_t TRPSW:1;
      uint64_t EMS:1;
      uint64_t EMT:1;
      uint64_t MCME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCV:4;
      uint64_t reservedSpace0:4;
      uint64_t DCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCVS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
      uint64_t reservedSpace0:4;
      uint64_t PVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUS:1;
      uint64_t OMDS:1;
      uint64_t CMUS:1;
      uint64_t CMDS:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AS:1;
      uint64_t E1AS:1;
      uint64_t E2AS:1;
      uint64_t TRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PME:1;
      uint64_t OME:1;
      uint64_t CMUE:1;
      uint64_t CMDE:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AE:1;
      uint64_t E1AE:1;
      uint64_t E2AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSR:2;
      uint64_t CMSR:2;
      uint64_t reservedSpace0:4;
      uint64_t E0SR:2;
      uint64_t E1SR:2;
      uint64_t E2SR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPM:1;
      uint64_t SOM:1;
      uint64_t SCMU:1;
      uint64_t SCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t SE0A:1;
      uint64_t SE1A:1;
      uint64_t SE2A:1;
      uint64_t STRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPM:1;
      uint64_t ROM:1;
      uint64_t RCMU:1;
      uint64_t RCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t RE0A:1;
      uint64_t RE1A:1;
      uint64_t RE2A:1;
      uint64_t RTRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD1;

};

#define CCU42_CC40 (*(volatile struct CCU42_CC40_tag *) 0x40014100)

struct CCU42_CC41_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0IS:4;
      uint64_t EV1IS:4;
      uint64_t EV2IS:4;
      uint64_t reservedSpace0:4;
      uint64_t EV0EM:2;
      uint64_t EV1EM:2;
      uint64_t EV2EM:2;
      uint64_t EV0LM:1;
      uint64_t EV1LM:1;
      uint64_t EV2LM:1;
      uint64_t LPF0M:2;
      uint64_t LPF1M:2;
      uint64_t LPF2M:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTS:2;
      uint64_t ENDS:2;
      uint64_t CAP0S:2;
      uint64_t CAP1S:2;
      uint64_t GATES:2;
      uint64_t UDS:2;
      uint64_t LDS:2;
      uint64_t CNTS:2;
      uint64_t OFS:1;
      uint64_t TS:1;
      uint64_t MOS:2;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:1;
      uint64_t CDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBC:1;
      uint64_t TCC:1;
      uint64_t DITC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCM:1;
      uint64_t TSSM:1;
      uint64_t CLST:1;
      uint64_t CMOD:1;
      uint64_t ECM:1;
      uint64_t CAPC:2;
      uint64_t reservedSpace0:1;
      uint64_t ENDM:2;
      uint64_t STRM:1;
      uint64_t SCE:1;
      uint64_t CCS:1;
      uint64_t DITHE:2;
      uint64_t DIM:1;
      uint64_t FPE:1;
      uint64_t TRAPE:1;
      uint64_t reservedSpace1:3;
      uint64_t TRPSE:1;
      uint64_t TRPSW:1;
      uint64_t EMS:1;
      uint64_t EMT:1;
      uint64_t MCME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCV:4;
      uint64_t reservedSpace0:4;
      uint64_t DCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCVS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
      uint64_t reservedSpace0:4;
      uint64_t PVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUS:1;
      uint64_t OMDS:1;
      uint64_t CMUS:1;
      uint64_t CMDS:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AS:1;
      uint64_t E1AS:1;
      uint64_t E2AS:1;
      uint64_t TRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PME:1;
      uint64_t OME:1;
      uint64_t CMUE:1;
      uint64_t CMDE:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AE:1;
      uint64_t E1AE:1;
      uint64_t E2AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSR:2;
      uint64_t CMSR:2;
      uint64_t reservedSpace0:4;
      uint64_t E0SR:2;
      uint64_t E1SR:2;
      uint64_t E2SR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPM:1;
      uint64_t SOM:1;
      uint64_t SCMU:1;
      uint64_t SCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t SE0A:1;
      uint64_t SE1A:1;
      uint64_t SE2A:1;
      uint64_t STRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPM:1;
      uint64_t ROM:1;
      uint64_t RCMU:1;
      uint64_t RCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t RE0A:1;
      uint64_t RE1A:1;
      uint64_t RE2A:1;
      uint64_t RTRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD1;

};

#define CCU42_CC41 (*(volatile struct CCU42_CC41_tag *) 0x40014200)

struct CCU42_CC42_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0IS:4;
      uint64_t EV1IS:4;
      uint64_t EV2IS:4;
      uint64_t reservedSpace0:4;
      uint64_t EV0EM:2;
      uint64_t EV1EM:2;
      uint64_t EV2EM:2;
      uint64_t EV0LM:1;
      uint64_t EV1LM:1;
      uint64_t EV2LM:1;
      uint64_t LPF0M:2;
      uint64_t LPF1M:2;
      uint64_t LPF2M:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTS:2;
      uint64_t ENDS:2;
      uint64_t CAP0S:2;
      uint64_t CAP1S:2;
      uint64_t GATES:2;
      uint64_t UDS:2;
      uint64_t LDS:2;
      uint64_t CNTS:2;
      uint64_t OFS:1;
      uint64_t TS:1;
      uint64_t MOS:2;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:1;
      uint64_t CDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBC:1;
      uint64_t TCC:1;
      uint64_t DITC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCM:1;
      uint64_t TSSM:1;
      uint64_t CLST:1;
      uint64_t CMOD:1;
      uint64_t ECM:1;
      uint64_t CAPC:2;
      uint64_t reservedSpace0:1;
      uint64_t ENDM:2;
      uint64_t STRM:1;
      uint64_t SCE:1;
      uint64_t CCS:1;
      uint64_t DITHE:2;
      uint64_t DIM:1;
      uint64_t FPE:1;
      uint64_t TRAPE:1;
      uint64_t reservedSpace1:3;
      uint64_t TRPSE:1;
      uint64_t TRPSW:1;
      uint64_t EMS:1;
      uint64_t EMT:1;
      uint64_t MCME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCV:4;
      uint64_t reservedSpace0:4;
      uint64_t DCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCVS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
      uint64_t reservedSpace0:4;
      uint64_t PVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUS:1;
      uint64_t OMDS:1;
      uint64_t CMUS:1;
      uint64_t CMDS:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AS:1;
      uint64_t E1AS:1;
      uint64_t E2AS:1;
      uint64_t TRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PME:1;
      uint64_t OME:1;
      uint64_t CMUE:1;
      uint64_t CMDE:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AE:1;
      uint64_t E1AE:1;
      uint64_t E2AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSR:2;
      uint64_t CMSR:2;
      uint64_t reservedSpace0:4;
      uint64_t E0SR:2;
      uint64_t E1SR:2;
      uint64_t E2SR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPM:1;
      uint64_t SOM:1;
      uint64_t SCMU:1;
      uint64_t SCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t SE0A:1;
      uint64_t SE1A:1;
      uint64_t SE2A:1;
      uint64_t STRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPM:1;
      uint64_t ROM:1;
      uint64_t RCMU:1;
      uint64_t RCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t RE0A:1;
      uint64_t RE1A:1;
      uint64_t RE2A:1;
      uint64_t RTRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD1;

};

#define CCU42_CC42 (*(volatile struct CCU42_CC42_tag *) 0x40014300)

struct CCU42_CC43_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0IS:4;
      uint64_t EV1IS:4;
      uint64_t EV2IS:4;
      uint64_t reservedSpace0:4;
      uint64_t EV0EM:2;
      uint64_t EV1EM:2;
      uint64_t EV2EM:2;
      uint64_t EV0LM:1;
      uint64_t EV1LM:1;
      uint64_t EV2LM:1;
      uint64_t LPF0M:2;
      uint64_t LPF1M:2;
      uint64_t LPF2M:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTS:2;
      uint64_t ENDS:2;
      uint64_t CAP0S:2;
      uint64_t CAP1S:2;
      uint64_t GATES:2;
      uint64_t UDS:2;
      uint64_t LDS:2;
      uint64_t CNTS:2;
      uint64_t OFS:1;
      uint64_t TS:1;
      uint64_t MOS:2;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:1;
      uint64_t CDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBC:1;
      uint64_t TCC:1;
      uint64_t DITC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCM:1;
      uint64_t TSSM:1;
      uint64_t CLST:1;
      uint64_t CMOD:1;
      uint64_t ECM:1;
      uint64_t CAPC:2;
      uint64_t reservedSpace0:1;
      uint64_t ENDM:2;
      uint64_t STRM:1;
      uint64_t SCE:1;
      uint64_t CCS:1;
      uint64_t DITHE:2;
      uint64_t DIM:1;
      uint64_t FPE:1;
      uint64_t TRAPE:1;
      uint64_t reservedSpace1:3;
      uint64_t TRPSE:1;
      uint64_t TRPSW:1;
      uint64_t EMS:1;
      uint64_t EMT:1;
      uint64_t MCME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCV:4;
      uint64_t reservedSpace0:4;
      uint64_t DCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCVS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
      uint64_t reservedSpace0:4;
      uint64_t PVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUS:1;
      uint64_t OMDS:1;
      uint64_t CMUS:1;
      uint64_t CMDS:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AS:1;
      uint64_t E1AS:1;
      uint64_t E2AS:1;
      uint64_t TRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PME:1;
      uint64_t OME:1;
      uint64_t CMUE:1;
      uint64_t CMDE:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AE:1;
      uint64_t E1AE:1;
      uint64_t E2AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSR:2;
      uint64_t CMSR:2;
      uint64_t reservedSpace0:4;
      uint64_t E0SR:2;
      uint64_t E1SR:2;
      uint64_t E2SR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPM:1;
      uint64_t SOM:1;
      uint64_t SCMU:1;
      uint64_t SCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t SE0A:1;
      uint64_t SE1A:1;
      uint64_t SE2A:1;
      uint64_t STRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPM:1;
      uint64_t ROM:1;
      uint64_t RCMU:1;
      uint64_t RCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t RE0A:1;
      uint64_t RE1A:1;
      uint64_t RE2A:1;
      uint64_t RTRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD1;

};

#define CCU42_CC43 (*(volatile struct CCU42_CC43_tag *) 0x40014400)

struct CCU43_CC40_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0IS:4;
      uint64_t EV1IS:4;
      uint64_t EV2IS:4;
      uint64_t reservedSpace0:4;
      uint64_t EV0EM:2;
      uint64_t EV1EM:2;
      uint64_t EV2EM:2;
      uint64_t EV0LM:1;
      uint64_t EV1LM:1;
      uint64_t EV2LM:1;
      uint64_t LPF0M:2;
      uint64_t LPF1M:2;
      uint64_t LPF2M:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTS:2;
      uint64_t ENDS:2;
      uint64_t CAP0S:2;
      uint64_t CAP1S:2;
      uint64_t GATES:2;
      uint64_t UDS:2;
      uint64_t LDS:2;
      uint64_t CNTS:2;
      uint64_t OFS:1;
      uint64_t TS:1;
      uint64_t MOS:2;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:1;
      uint64_t CDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBC:1;
      uint64_t TCC:1;
      uint64_t DITC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCM:1;
      uint64_t TSSM:1;
      uint64_t CLST:1;
      uint64_t CMOD:1;
      uint64_t ECM:1;
      uint64_t CAPC:2;
      uint64_t reservedSpace0:1;
      uint64_t ENDM:2;
      uint64_t STRM:1;
      uint64_t SCE:1;
      uint64_t CCS:1;
      uint64_t DITHE:2;
      uint64_t DIM:1;
      uint64_t FPE:1;
      uint64_t TRAPE:1;
      uint64_t reservedSpace1:3;
      uint64_t TRPSE:1;
      uint64_t TRPSW:1;
      uint64_t EMS:1;
      uint64_t EMT:1;
      uint64_t MCME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCV:4;
      uint64_t reservedSpace0:4;
      uint64_t DCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCVS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
      uint64_t reservedSpace0:4;
      uint64_t PVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUS:1;
      uint64_t OMDS:1;
      uint64_t CMUS:1;
      uint64_t CMDS:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AS:1;
      uint64_t E1AS:1;
      uint64_t E2AS:1;
      uint64_t TRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PME:1;
      uint64_t OME:1;
      uint64_t CMUE:1;
      uint64_t CMDE:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AE:1;
      uint64_t E1AE:1;
      uint64_t E2AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSR:2;
      uint64_t CMSR:2;
      uint64_t reservedSpace0:4;
      uint64_t E0SR:2;
      uint64_t E1SR:2;
      uint64_t E2SR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPM:1;
      uint64_t SOM:1;
      uint64_t SCMU:1;
      uint64_t SCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t SE0A:1;
      uint64_t SE1A:1;
      uint64_t SE2A:1;
      uint64_t STRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPM:1;
      uint64_t ROM:1;
      uint64_t RCMU:1;
      uint64_t RCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t RE0A:1;
      uint64_t RE1A:1;
      uint64_t RE2A:1;
      uint64_t RTRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD1;

};

#define CCU43_CC40 (*(volatile struct CCU43_CC40_tag *) 0x48004100)

struct CCU43_CC41_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0IS:4;
      uint64_t EV1IS:4;
      uint64_t EV2IS:4;
      uint64_t reservedSpace0:4;
      uint64_t EV0EM:2;
      uint64_t EV1EM:2;
      uint64_t EV2EM:2;
      uint64_t EV0LM:1;
      uint64_t EV1LM:1;
      uint64_t EV2LM:1;
      uint64_t LPF0M:2;
      uint64_t LPF1M:2;
      uint64_t LPF2M:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTS:2;
      uint64_t ENDS:2;
      uint64_t CAP0S:2;
      uint64_t CAP1S:2;
      uint64_t GATES:2;
      uint64_t UDS:2;
      uint64_t LDS:2;
      uint64_t CNTS:2;
      uint64_t OFS:1;
      uint64_t TS:1;
      uint64_t MOS:2;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:1;
      uint64_t CDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBC:1;
      uint64_t TCC:1;
      uint64_t DITC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCM:1;
      uint64_t TSSM:1;
      uint64_t CLST:1;
      uint64_t CMOD:1;
      uint64_t ECM:1;
      uint64_t CAPC:2;
      uint64_t reservedSpace0:1;
      uint64_t ENDM:2;
      uint64_t STRM:1;
      uint64_t SCE:1;
      uint64_t CCS:1;
      uint64_t DITHE:2;
      uint64_t DIM:1;
      uint64_t FPE:1;
      uint64_t TRAPE:1;
      uint64_t reservedSpace1:3;
      uint64_t TRPSE:1;
      uint64_t TRPSW:1;
      uint64_t EMS:1;
      uint64_t EMT:1;
      uint64_t MCME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCV:4;
      uint64_t reservedSpace0:4;
      uint64_t DCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCVS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
      uint64_t reservedSpace0:4;
      uint64_t PVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUS:1;
      uint64_t OMDS:1;
      uint64_t CMUS:1;
      uint64_t CMDS:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AS:1;
      uint64_t E1AS:1;
      uint64_t E2AS:1;
      uint64_t TRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PME:1;
      uint64_t OME:1;
      uint64_t CMUE:1;
      uint64_t CMDE:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AE:1;
      uint64_t E1AE:1;
      uint64_t E2AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSR:2;
      uint64_t CMSR:2;
      uint64_t reservedSpace0:4;
      uint64_t E0SR:2;
      uint64_t E1SR:2;
      uint64_t E2SR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPM:1;
      uint64_t SOM:1;
      uint64_t SCMU:1;
      uint64_t SCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t SE0A:1;
      uint64_t SE1A:1;
      uint64_t SE2A:1;
      uint64_t STRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPM:1;
      uint64_t ROM:1;
      uint64_t RCMU:1;
      uint64_t RCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t RE0A:1;
      uint64_t RE1A:1;
      uint64_t RE2A:1;
      uint64_t RTRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD1;

};

#define CCU43_CC41 (*(volatile struct CCU43_CC41_tag *) 0x48004200)

struct CCU43_CC42_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0IS:4;
      uint64_t EV1IS:4;
      uint64_t EV2IS:4;
      uint64_t reservedSpace0:4;
      uint64_t EV0EM:2;
      uint64_t EV1EM:2;
      uint64_t EV2EM:2;
      uint64_t EV0LM:1;
      uint64_t EV1LM:1;
      uint64_t EV2LM:1;
      uint64_t LPF0M:2;
      uint64_t LPF1M:2;
      uint64_t LPF2M:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTS:2;
      uint64_t ENDS:2;
      uint64_t CAP0S:2;
      uint64_t CAP1S:2;
      uint64_t GATES:2;
      uint64_t UDS:2;
      uint64_t LDS:2;
      uint64_t CNTS:2;
      uint64_t OFS:1;
      uint64_t TS:1;
      uint64_t MOS:2;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:1;
      uint64_t CDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBC:1;
      uint64_t TCC:1;
      uint64_t DITC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCM:1;
      uint64_t TSSM:1;
      uint64_t CLST:1;
      uint64_t CMOD:1;
      uint64_t ECM:1;
      uint64_t CAPC:2;
      uint64_t reservedSpace0:1;
      uint64_t ENDM:2;
      uint64_t STRM:1;
      uint64_t SCE:1;
      uint64_t CCS:1;
      uint64_t DITHE:2;
      uint64_t DIM:1;
      uint64_t FPE:1;
      uint64_t TRAPE:1;
      uint64_t reservedSpace1:3;
      uint64_t TRPSE:1;
      uint64_t TRPSW:1;
      uint64_t EMS:1;
      uint64_t EMT:1;
      uint64_t MCME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCV:4;
      uint64_t reservedSpace0:4;
      uint64_t DCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCVS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
      uint64_t reservedSpace0:4;
      uint64_t PVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUS:1;
      uint64_t OMDS:1;
      uint64_t CMUS:1;
      uint64_t CMDS:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AS:1;
      uint64_t E1AS:1;
      uint64_t E2AS:1;
      uint64_t TRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PME:1;
      uint64_t OME:1;
      uint64_t CMUE:1;
      uint64_t CMDE:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AE:1;
      uint64_t E1AE:1;
      uint64_t E2AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSR:2;
      uint64_t CMSR:2;
      uint64_t reservedSpace0:4;
      uint64_t E0SR:2;
      uint64_t E1SR:2;
      uint64_t E2SR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPM:1;
      uint64_t SOM:1;
      uint64_t SCMU:1;
      uint64_t SCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t SE0A:1;
      uint64_t SE1A:1;
      uint64_t SE2A:1;
      uint64_t STRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPM:1;
      uint64_t ROM:1;
      uint64_t RCMU:1;
      uint64_t RCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t RE0A:1;
      uint64_t RE1A:1;
      uint64_t RE2A:1;
      uint64_t RTRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD1;

};

#define CCU43_CC42 (*(volatile struct CCU43_CC42_tag *) 0x48004300)

struct CCU43_CC43_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0IS:4;
      uint64_t EV1IS:4;
      uint64_t EV2IS:4;
      uint64_t reservedSpace0:4;
      uint64_t EV0EM:2;
      uint64_t EV1EM:2;
      uint64_t EV2EM:2;
      uint64_t EV0LM:1;
      uint64_t EV1LM:1;
      uint64_t EV2LM:1;
      uint64_t LPF0M:2;
      uint64_t LPF1M:2;
      uint64_t LPF2M:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTS:2;
      uint64_t ENDS:2;
      uint64_t CAP0S:2;
      uint64_t CAP1S:2;
      uint64_t GATES:2;
      uint64_t UDS:2;
      uint64_t LDS:2;
      uint64_t CNTS:2;
      uint64_t OFS:1;
      uint64_t TS:1;
      uint64_t MOS:2;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:1;
      uint64_t CDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBC:1;
      uint64_t TCC:1;
      uint64_t DITC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCM:1;
      uint64_t TSSM:1;
      uint64_t CLST:1;
      uint64_t CMOD:1;
      uint64_t ECM:1;
      uint64_t CAPC:2;
      uint64_t reservedSpace0:1;
      uint64_t ENDM:2;
      uint64_t STRM:1;
      uint64_t SCE:1;
      uint64_t CCS:1;
      uint64_t DITHE:2;
      uint64_t DIM:1;
      uint64_t FPE:1;
      uint64_t TRAPE:1;
      uint64_t reservedSpace1:3;
      uint64_t TRPSE:1;
      uint64_t TRPSW:1;
      uint64_t EMS:1;
      uint64_t EMT:1;
      uint64_t MCME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCV:4;
      uint64_t reservedSpace0:4;
      uint64_t DCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCVS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
      uint64_t reservedSpace0:4;
      uint64_t PVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUS:1;
      uint64_t OMDS:1;
      uint64_t CMUS:1;
      uint64_t CMDS:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AS:1;
      uint64_t E1AS:1;
      uint64_t E2AS:1;
      uint64_t TRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PME:1;
      uint64_t OME:1;
      uint64_t CMUE:1;
      uint64_t CMDE:1;
      uint64_t reservedSpace0:4;
      uint64_t E0AE:1;
      uint64_t E1AE:1;
      uint64_t E2AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSR:2;
      uint64_t CMSR:2;
      uint64_t reservedSpace0:4;
      uint64_t E0SR:2;
      uint64_t E1SR:2;
      uint64_t E2SR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPM:1;
      uint64_t SOM:1;
      uint64_t SCMU:1;
      uint64_t SCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t SE0A:1;
      uint64_t SE1A:1;
      uint64_t SE2A:1;
      uint64_t STRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPM:1;
      uint64_t ROM:1;
      uint64_t RCMU:1;
      uint64_t RCMD:1;
      uint64_t reservedSpace0:4;
      uint64_t RE0A:1;
      uint64_t RE1A:1;
      uint64_t RE2A:1;
      uint64_t RTRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD1;

};

#define CCU43_CC43 (*(volatile struct CCU43_CC43_tag *) 0x48004400)

struct CCU80_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRBC:3;
      uint64_t reservedSpace0:1;
      uint64_t PCIS:2;
      uint64_t reservedSpace1:2;
      uint64_t SUSCFG:2;
      uint64_t MSE0:1;
      uint64_t MSE1:1;
      uint64_t MSE2:1;
      uint64_t MSE3:1;
      uint64_t MSDE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0I:1;
      uint64_t S1I:1;
      uint64_t S2I:1;
      uint64_t S3I:1;
      uint64_t reservedSpace0:4;
      uint64_t PRB:1;
      uint64_t reservedSpace1:1;
      uint64_t PCRB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SS0I:1;
      uint64_t SS1I:1;
      uint64_t SS2I:1;
      uint64_t SS3I:1;
      uint64_t reservedSpace0:4;
      uint64_t CPRB:1;
      uint64_t PSIC:1;
      uint64_t CPCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIDLS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CS0I:1;
      uint64_t CS1I:1;
      uint64_t CS2I:1;
      uint64_t CS3I:1;
      uint64_t reservedSpace0:4;
      uint64_t SPRB:1;
      uint64_t reservedSpace1:1;
      uint64_t SPCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIDLC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0SE:1;
      uint64_t S0DSE:1;
      uint64_t S0PSE:1;
      uint64_t reservedSpace0:1;
      uint64_t S1SE:1;
      uint64_t S1DSE:1;
      uint64_t S1PSE:1;
      uint64_t reservedSpace1:1;
      uint64_t S2SE:1;
      uint64_t S2DSE:1;
      uint64_t S2PSE:1;
      uint64_t reservedSpace2:1;
      uint64_t S3SE:1;
      uint64_t S3DSE:1;
      uint64_t S3PSE:1;
      uint64_t reservedSpace3:1;
      uint64_t S0ST1S:1;
      uint64_t S1ST1S:1;
      uint64_t S2ST1S:1;
      uint64_t S3ST1S:1;
      uint64_t S0ST2S:1;
      uint64_t S1ST2S:1;
      uint64_t S2ST2S:1;
      uint64_t S3ST2S:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0SC:1;
      uint64_t S0DSC:1;
      uint64_t S0PSC:1;
      uint64_t reservedSpace0:1;
      uint64_t S1SC:1;
      uint64_t S1DSC:1;
      uint64_t S1PSC:1;
      uint64_t reservedSpace1:1;
      uint64_t S2SC:1;
      uint64_t S2DSC:1;
      uint64_t S2PSC:1;
      uint64_t reservedSpace2:1;
      uint64_t S3SC:1;
      uint64_t S3DSC:1;
      uint64_t S3PSC:1;
      uint64_t reservedSpace3:1;
      uint64_t S0ST1C:1;
      uint64_t S1ST1C:1;
      uint64_t S2ST1C:1;
      uint64_t S3ST1C:1;
      uint64_t S0ST2C:1;
      uint64_t S1ST2C:1;
      uint64_t S2ST2C:1;
      uint64_t S3ST2C:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0SS:1;
      uint64_t S0DSS:1;
      uint64_t S0PSS:1;
      uint64_t reservedSpace0:1;
      uint64_t S1SS:1;
      uint64_t S1DSS:1;
      uint64_t S1PSS:1;
      uint64_t reservedSpace1:1;
      uint64_t S2SS:1;
      uint64_t S2DSS:1;
      uint64_t S2PSS:1;
      uint64_t reservedSpace2:1;
      uint64_t S3SS:1;
      uint64_t S3DSS:1;
      uint64_t S3PSS:1;
      uint64_t reservedSpace3:1;
      uint64_t CC80ST1:1;
      uint64_t CC81ST1:1;
      uint64_t CC82ST1:1;
      uint64_t CC83ST1:1;
      uint64_t CC80ST2:1;
      uint64_t CC81ST2:1;
      uint64_t CC82ST2:1;
      uint64_t CC83ST2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PASE:1;
      uint64_t PACS:2;
      uint64_t PISEL:2;
      uint64_t PCDS:2;
      uint64_t PCTS:1;
      uint64_t reservedSpace0:7;
      uint64_t PCST:1;
      uint64_t PCSEL0:4;
      uint64_t PCSEL1:4;
      uint64_t PCSEL2:4;
      uint64_t PCSEL3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCHK;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD;

  uint8_t res1[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODR:8;
      uint64_t MODT:8;
      uint64_t MODN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIDR;

};

#define CCU80 (*(volatile struct CCU80_tag *) 0x40020000)

struct CCU81_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRBC:3;
      uint64_t reservedSpace0:1;
      uint64_t PCIS:2;
      uint64_t reservedSpace1:2;
      uint64_t SUSCFG:2;
      uint64_t MSE0:1;
      uint64_t MSE1:1;
      uint64_t MSE2:1;
      uint64_t MSE3:1;
      uint64_t MSDE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0I:1;
      uint64_t S1I:1;
      uint64_t S2I:1;
      uint64_t S3I:1;
      uint64_t reservedSpace0:4;
      uint64_t PRB:1;
      uint64_t reservedSpace1:1;
      uint64_t PCRB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SS0I:1;
      uint64_t SS1I:1;
      uint64_t SS2I:1;
      uint64_t SS3I:1;
      uint64_t reservedSpace0:4;
      uint64_t CPRB:1;
      uint64_t PSIC:1;
      uint64_t CPCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIDLS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CS0I:1;
      uint64_t CS1I:1;
      uint64_t CS2I:1;
      uint64_t CS3I:1;
      uint64_t reservedSpace0:4;
      uint64_t SPRB:1;
      uint64_t reservedSpace1:1;
      uint64_t SPCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIDLC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0SE:1;
      uint64_t S0DSE:1;
      uint64_t S0PSE:1;
      uint64_t reservedSpace0:1;
      uint64_t S1SE:1;
      uint64_t S1DSE:1;
      uint64_t S1PSE:1;
      uint64_t reservedSpace1:1;
      uint64_t S2SE:1;
      uint64_t S2DSE:1;
      uint64_t S2PSE:1;
      uint64_t reservedSpace2:1;
      uint64_t S3SE:1;
      uint64_t S3DSE:1;
      uint64_t S3PSE:1;
      uint64_t reservedSpace3:1;
      uint64_t S0ST1S:1;
      uint64_t S1ST1S:1;
      uint64_t S2ST1S:1;
      uint64_t S3ST1S:1;
      uint64_t S0ST2S:1;
      uint64_t S1ST2S:1;
      uint64_t S2ST2S:1;
      uint64_t S3ST2S:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0SC:1;
      uint64_t S0DSC:1;
      uint64_t S0PSC:1;
      uint64_t reservedSpace0:1;
      uint64_t S1SC:1;
      uint64_t S1DSC:1;
      uint64_t S1PSC:1;
      uint64_t reservedSpace1:1;
      uint64_t S2SC:1;
      uint64_t S2DSC:1;
      uint64_t S2PSC:1;
      uint64_t reservedSpace2:1;
      uint64_t S3SC:1;
      uint64_t S3DSC:1;
      uint64_t S3PSC:1;
      uint64_t reservedSpace3:1;
      uint64_t S0ST1C:1;
      uint64_t S1ST1C:1;
      uint64_t S2ST1C:1;
      uint64_t S3ST1C:1;
      uint64_t S0ST2C:1;
      uint64_t S1ST2C:1;
      uint64_t S2ST2C:1;
      uint64_t S3ST2C:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0SS:1;
      uint64_t S0DSS:1;
      uint64_t S0PSS:1;
      uint64_t reservedSpace0:1;
      uint64_t S1SS:1;
      uint64_t S1DSS:1;
      uint64_t S1PSS:1;
      uint64_t reservedSpace1:1;
      uint64_t S2SS:1;
      uint64_t S2DSS:1;
      uint64_t S2PSS:1;
      uint64_t reservedSpace2:1;
      uint64_t S3SS:1;
      uint64_t S3DSS:1;
      uint64_t S3PSS:1;
      uint64_t reservedSpace3:1;
      uint64_t CC80ST1:1;
      uint64_t CC81ST1:1;
      uint64_t CC82ST1:1;
      uint64_t CC83ST1:1;
      uint64_t CC80ST2:1;
      uint64_t CC81ST2:1;
      uint64_t CC82ST2:1;
      uint64_t CC83ST2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PASE:1;
      uint64_t PACS:2;
      uint64_t PISEL:2;
      uint64_t PCDS:2;
      uint64_t PCTS:1;
      uint64_t reservedSpace0:7;
      uint64_t PCST:1;
      uint64_t PCSEL0:4;
      uint64_t PCSEL1:4;
      uint64_t PCSEL2:4;
      uint64_t PCSEL3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCHK;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD;

  uint8_t res1[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODR:8;
      uint64_t MODT:8;
      uint64_t MODN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIDR;

};

#define CCU81 (*(volatile struct CCU81_tag *) 0x40024000)

struct CCU80_CC80_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0IS:4;
      uint64_t EV1IS:4;
      uint64_t EV2IS:4;
      uint64_t reservedSpace0:4;
      uint64_t EV0EM:2;
      uint64_t EV1EM:2;
      uint64_t EV2EM:2;
      uint64_t EV0LM:1;
      uint64_t EV1LM:1;
      uint64_t EV2LM:1;
      uint64_t LPF0M:2;
      uint64_t LPF1M:2;
      uint64_t LPF2M:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTS:2;
      uint64_t ENDS:2;
      uint64_t CAP0S:2;
      uint64_t CAP1S:2;
      uint64_t GATES:2;
      uint64_t UDS:2;
      uint64_t LDS:2;
      uint64_t CNTS:2;
      uint64_t OFS:1;
      uint64_t TS:1;
      uint64_t MOS:2;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:1;
      uint64_t CDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t DTR1:1;
      uint64_t DTR2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBC:1;
      uint64_t TCC:1;
      uint64_t DITC:1;
      uint64_t DTC1C:1;
      uint64_t DTC2C:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCM:1;
      uint64_t TSSM:1;
      uint64_t CLST:1;
      uint64_t CMOD:1;
      uint64_t ECM:1;
      uint64_t CAPC:2;
      uint64_t TLS:1;
      uint64_t ENDM:2;
      uint64_t STRM:1;
      uint64_t SCE:1;
      uint64_t CCS:1;
      uint64_t DITHE:2;
      uint64_t DIM:1;
      uint64_t FPE:1;
      uint64_t TRAPE0:1;
      uint64_t TRAPE1:1;
      uint64_t TRAPE2:1;
      uint64_t TRAPE3:1;
      uint64_t TRPSE:1;
      uint64_t TRPSW:1;
      uint64_t EMS:1;
      uint64_t EMT:1;
      uint64_t MCME1:1;
      uint64_t MCME2:1;
      uint64_t EME:2;
      uint64_t STOS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSL11:1;
      uint64_t PSL12:1;
      uint64_t PSL21:1;
      uint64_t PSL22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCV:4;
      uint64_t reservedSpace0:4;
      uint64_t DCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCVS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
      uint64_t reservedSpace0:4;
      uint64_t PVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR1S:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR2S:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASE:1;
      uint64_t OCS1:1;
      uint64_t OCS2:1;
      uint64_t OCS3:1;
      uint64_t OCS4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE1:1;
      uint64_t DTE2:1;
      uint64_t DCEN1:1;
      uint64_t DCEN2:1;
      uint64_t DCEN3:1;
      uint64_t DCEN4:1;
      uint64_t DTCC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DT1R:8;
      uint64_t DT1F:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DC1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DT2R:8;
      uint64_t DT2F:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DC2R;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUS:1;
      uint64_t OMDS:1;
      uint64_t CMU1S:1;
      uint64_t CMD1S:1;
      uint64_t CMU2S:1;
      uint64_t CMD2S:1;
      uint64_t reservedSpace0:2;
      uint64_t E0AS:1;
      uint64_t E1AS:1;
      uint64_t E2AS:1;
      uint64_t TRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PME:1;
      uint64_t OME:1;
      uint64_t CMU1E:1;
      uint64_t CMD1E:1;
      uint64_t CMU2E:1;
      uint64_t CMD2E:1;
      uint64_t reservedSpace0:2;
      uint64_t E0AE:1;
      uint64_t E1AE:1;
      uint64_t E2AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSR:2;
      uint64_t CM1SR:2;
      uint64_t CM2SR:2;
      uint64_t reservedSpace0:2;
      uint64_t E0SR:2;
      uint64_t E1SR:2;
      uint64_t E2SR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPM:1;
      uint64_t SOM:1;
      uint64_t SCM1U:1;
      uint64_t SCM1D:1;
      uint64_t SCM2U:1;
      uint64_t SCM2D:1;
      uint64_t reservedSpace0:2;
      uint64_t SE0A:1;
      uint64_t SE1A:1;
      uint64_t SE2A:1;
      uint64_t STRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPM:1;
      uint64_t ROM:1;
      uint64_t RCM1U:1;
      uint64_t RCM1D:1;
      uint64_t RCM2U:1;
      uint64_t RCM2D:1;
      uint64_t reservedSpace0:2;
      uint64_t RE0A:1;
      uint64_t RE1A:1;
      uint64_t RE2A:1;
      uint64_t RTRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSE:1;
      uint64_t STM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD1;

};

#define CCU80_CC80 (*(volatile struct CCU80_CC80_tag *) 0x40020100)

struct CCU80_CC81_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0IS:4;
      uint64_t EV1IS:4;
      uint64_t EV2IS:4;
      uint64_t reservedSpace0:4;
      uint64_t EV0EM:2;
      uint64_t EV1EM:2;
      uint64_t EV2EM:2;
      uint64_t EV0LM:1;
      uint64_t EV1LM:1;
      uint64_t EV2LM:1;
      uint64_t LPF0M:2;
      uint64_t LPF1M:2;
      uint64_t LPF2M:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTS:2;
      uint64_t ENDS:2;
      uint64_t CAP0S:2;
      uint64_t CAP1S:2;
      uint64_t GATES:2;
      uint64_t UDS:2;
      uint64_t LDS:2;
      uint64_t CNTS:2;
      uint64_t OFS:1;
      uint64_t TS:1;
      uint64_t MOS:2;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:1;
      uint64_t CDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t DTR1:1;
      uint64_t DTR2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBC:1;
      uint64_t TCC:1;
      uint64_t DITC:1;
      uint64_t DTC1C:1;
      uint64_t DTC2C:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCM:1;
      uint64_t TSSM:1;
      uint64_t CLST:1;
      uint64_t CMOD:1;
      uint64_t ECM:1;
      uint64_t CAPC:2;
      uint64_t TLS:1;
      uint64_t ENDM:2;
      uint64_t STRM:1;
      uint64_t SCE:1;
      uint64_t CCS:1;
      uint64_t DITHE:2;
      uint64_t DIM:1;
      uint64_t FPE:1;
      uint64_t TRAPE0:1;
      uint64_t TRAPE1:1;
      uint64_t TRAPE2:1;
      uint64_t TRAPE3:1;
      uint64_t TRPSE:1;
      uint64_t TRPSW:1;
      uint64_t EMS:1;
      uint64_t EMT:1;
      uint64_t MCME1:1;
      uint64_t MCME2:1;
      uint64_t EME:2;
      uint64_t STOS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSL11:1;
      uint64_t PSL12:1;
      uint64_t PSL21:1;
      uint64_t PSL22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCV:4;
      uint64_t reservedSpace0:4;
      uint64_t DCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCVS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
      uint64_t reservedSpace0:4;
      uint64_t PVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR1S:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR2S:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASE:1;
      uint64_t OCS1:1;
      uint64_t OCS2:1;
      uint64_t OCS3:1;
      uint64_t OCS4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE1:1;
      uint64_t DTE2:1;
      uint64_t DCEN1:1;
      uint64_t DCEN2:1;
      uint64_t DCEN3:1;
      uint64_t DCEN4:1;
      uint64_t DTCC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DT1R:8;
      uint64_t DT1F:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DC1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DT2R:8;
      uint64_t DT2F:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DC2R;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUS:1;
      uint64_t OMDS:1;
      uint64_t CMU1S:1;
      uint64_t CMD1S:1;
      uint64_t CMU2S:1;
      uint64_t CMD2S:1;
      uint64_t reservedSpace0:2;
      uint64_t E0AS:1;
      uint64_t E1AS:1;
      uint64_t E2AS:1;
      uint64_t TRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PME:1;
      uint64_t OME:1;
      uint64_t CMU1E:1;
      uint64_t CMD1E:1;
      uint64_t CMU2E:1;
      uint64_t CMD2E:1;
      uint64_t reservedSpace0:2;
      uint64_t E0AE:1;
      uint64_t E1AE:1;
      uint64_t E2AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSR:2;
      uint64_t CM1SR:2;
      uint64_t CM2SR:2;
      uint64_t reservedSpace0:2;
      uint64_t E0SR:2;
      uint64_t E1SR:2;
      uint64_t E2SR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPM:1;
      uint64_t SOM:1;
      uint64_t SCM1U:1;
      uint64_t SCM1D:1;
      uint64_t SCM2U:1;
      uint64_t SCM2D:1;
      uint64_t reservedSpace0:2;
      uint64_t SE0A:1;
      uint64_t SE1A:1;
      uint64_t SE2A:1;
      uint64_t STRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPM:1;
      uint64_t ROM:1;
      uint64_t RCM1U:1;
      uint64_t RCM1D:1;
      uint64_t RCM2U:1;
      uint64_t RCM2D:1;
      uint64_t reservedSpace0:2;
      uint64_t RE0A:1;
      uint64_t RE1A:1;
      uint64_t RE2A:1;
      uint64_t RTRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSE:1;
      uint64_t STM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD1;

};

#define CCU80_CC81 (*(volatile struct CCU80_CC81_tag *) 0x40020200)

struct CCU80_CC82_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0IS:4;
      uint64_t EV1IS:4;
      uint64_t EV2IS:4;
      uint64_t reservedSpace0:4;
      uint64_t EV0EM:2;
      uint64_t EV1EM:2;
      uint64_t EV2EM:2;
      uint64_t EV0LM:1;
      uint64_t EV1LM:1;
      uint64_t EV2LM:1;
      uint64_t LPF0M:2;
      uint64_t LPF1M:2;
      uint64_t LPF2M:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTS:2;
      uint64_t ENDS:2;
      uint64_t CAP0S:2;
      uint64_t CAP1S:2;
      uint64_t GATES:2;
      uint64_t UDS:2;
      uint64_t LDS:2;
      uint64_t CNTS:2;
      uint64_t OFS:1;
      uint64_t TS:1;
      uint64_t MOS:2;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:1;
      uint64_t CDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t DTR1:1;
      uint64_t DTR2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBC:1;
      uint64_t TCC:1;
      uint64_t DITC:1;
      uint64_t DTC1C:1;
      uint64_t DTC2C:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCM:1;
      uint64_t TSSM:1;
      uint64_t CLST:1;
      uint64_t CMOD:1;
      uint64_t ECM:1;
      uint64_t CAPC:2;
      uint64_t TLS:1;
      uint64_t ENDM:2;
      uint64_t STRM:1;
      uint64_t SCE:1;
      uint64_t CCS:1;
      uint64_t DITHE:2;
      uint64_t DIM:1;
      uint64_t FPE:1;
      uint64_t TRAPE0:1;
      uint64_t TRAPE1:1;
      uint64_t TRAPE2:1;
      uint64_t TRAPE3:1;
      uint64_t TRPSE:1;
      uint64_t TRPSW:1;
      uint64_t EMS:1;
      uint64_t EMT:1;
      uint64_t MCME1:1;
      uint64_t MCME2:1;
      uint64_t EME:2;
      uint64_t STOS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSL11:1;
      uint64_t PSL12:1;
      uint64_t PSL21:1;
      uint64_t PSL22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCV:4;
      uint64_t reservedSpace0:4;
      uint64_t DCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCVS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
      uint64_t reservedSpace0:4;
      uint64_t PVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR1S:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR2S:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASE:1;
      uint64_t OCS1:1;
      uint64_t OCS2:1;
      uint64_t OCS3:1;
      uint64_t OCS4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE1:1;
      uint64_t DTE2:1;
      uint64_t DCEN1:1;
      uint64_t DCEN2:1;
      uint64_t DCEN3:1;
      uint64_t DCEN4:1;
      uint64_t DTCC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DT1R:8;
      uint64_t DT1F:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DC1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DT2R:8;
      uint64_t DT2F:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DC2R;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUS:1;
      uint64_t OMDS:1;
      uint64_t CMU1S:1;
      uint64_t CMD1S:1;
      uint64_t CMU2S:1;
      uint64_t CMD2S:1;
      uint64_t reservedSpace0:2;
      uint64_t E0AS:1;
      uint64_t E1AS:1;
      uint64_t E2AS:1;
      uint64_t TRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PME:1;
      uint64_t OME:1;
      uint64_t CMU1E:1;
      uint64_t CMD1E:1;
      uint64_t CMU2E:1;
      uint64_t CMD2E:1;
      uint64_t reservedSpace0:2;
      uint64_t E0AE:1;
      uint64_t E1AE:1;
      uint64_t E2AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSR:2;
      uint64_t CM1SR:2;
      uint64_t CM2SR:2;
      uint64_t reservedSpace0:2;
      uint64_t E0SR:2;
      uint64_t E1SR:2;
      uint64_t E2SR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPM:1;
      uint64_t SOM:1;
      uint64_t SCM1U:1;
      uint64_t SCM1D:1;
      uint64_t SCM2U:1;
      uint64_t SCM2D:1;
      uint64_t reservedSpace0:2;
      uint64_t SE0A:1;
      uint64_t SE1A:1;
      uint64_t SE2A:1;
      uint64_t STRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPM:1;
      uint64_t ROM:1;
      uint64_t RCM1U:1;
      uint64_t RCM1D:1;
      uint64_t RCM2U:1;
      uint64_t RCM2D:1;
      uint64_t reservedSpace0:2;
      uint64_t RE0A:1;
      uint64_t RE1A:1;
      uint64_t RE2A:1;
      uint64_t RTRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSE:1;
      uint64_t STM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD1;

};

#define CCU80_CC82 (*(volatile struct CCU80_CC82_tag *) 0x40020300)

struct CCU80_CC83_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0IS:4;
      uint64_t EV1IS:4;
      uint64_t EV2IS:4;
      uint64_t reservedSpace0:4;
      uint64_t EV0EM:2;
      uint64_t EV1EM:2;
      uint64_t EV2EM:2;
      uint64_t EV0LM:1;
      uint64_t EV1LM:1;
      uint64_t EV2LM:1;
      uint64_t LPF0M:2;
      uint64_t LPF1M:2;
      uint64_t LPF2M:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTS:2;
      uint64_t ENDS:2;
      uint64_t CAP0S:2;
      uint64_t CAP1S:2;
      uint64_t GATES:2;
      uint64_t UDS:2;
      uint64_t LDS:2;
      uint64_t CNTS:2;
      uint64_t OFS:1;
      uint64_t TS:1;
      uint64_t MOS:2;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:1;
      uint64_t CDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t DTR1:1;
      uint64_t DTR2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBC:1;
      uint64_t TCC:1;
      uint64_t DITC:1;
      uint64_t DTC1C:1;
      uint64_t DTC2C:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCM:1;
      uint64_t TSSM:1;
      uint64_t CLST:1;
      uint64_t CMOD:1;
      uint64_t ECM:1;
      uint64_t CAPC:2;
      uint64_t TLS:1;
      uint64_t ENDM:2;
      uint64_t STRM:1;
      uint64_t SCE:1;
      uint64_t CCS:1;
      uint64_t DITHE:2;
      uint64_t DIM:1;
      uint64_t FPE:1;
      uint64_t TRAPE0:1;
      uint64_t TRAPE1:1;
      uint64_t TRAPE2:1;
      uint64_t TRAPE3:1;
      uint64_t TRPSE:1;
      uint64_t TRPSW:1;
      uint64_t EMS:1;
      uint64_t EMT:1;
      uint64_t MCME1:1;
      uint64_t MCME2:1;
      uint64_t EME:2;
      uint64_t STOS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSL11:1;
      uint64_t PSL12:1;
      uint64_t PSL21:1;
      uint64_t PSL22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCV:4;
      uint64_t reservedSpace0:4;
      uint64_t DCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCVS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
      uint64_t reservedSpace0:4;
      uint64_t PVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR1S:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR2S:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASE:1;
      uint64_t OCS1:1;
      uint64_t OCS2:1;
      uint64_t OCS3:1;
      uint64_t OCS4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE1:1;
      uint64_t DTE2:1;
      uint64_t DCEN1:1;
      uint64_t DCEN2:1;
      uint64_t DCEN3:1;
      uint64_t DCEN4:1;
      uint64_t DTCC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DT1R:8;
      uint64_t DT1F:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DC1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DT2R:8;
      uint64_t DT2F:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DC2R;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUS:1;
      uint64_t OMDS:1;
      uint64_t CMU1S:1;
      uint64_t CMD1S:1;
      uint64_t CMU2S:1;
      uint64_t CMD2S:1;
      uint64_t reservedSpace0:2;
      uint64_t E0AS:1;
      uint64_t E1AS:1;
      uint64_t E2AS:1;
      uint64_t TRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PME:1;
      uint64_t OME:1;
      uint64_t CMU1E:1;
      uint64_t CMD1E:1;
      uint64_t CMU2E:1;
      uint64_t CMD2E:1;
      uint64_t reservedSpace0:2;
      uint64_t E0AE:1;
      uint64_t E1AE:1;
      uint64_t E2AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSR:2;
      uint64_t CM1SR:2;
      uint64_t CM2SR:2;
      uint64_t reservedSpace0:2;
      uint64_t E0SR:2;
      uint64_t E1SR:2;
      uint64_t E2SR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPM:1;
      uint64_t SOM:1;
      uint64_t SCM1U:1;
      uint64_t SCM1D:1;
      uint64_t SCM2U:1;
      uint64_t SCM2D:1;
      uint64_t reservedSpace0:2;
      uint64_t SE0A:1;
      uint64_t SE1A:1;
      uint64_t SE2A:1;
      uint64_t STRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPM:1;
      uint64_t ROM:1;
      uint64_t RCM1U:1;
      uint64_t RCM1D:1;
      uint64_t RCM2U:1;
      uint64_t RCM2D:1;
      uint64_t reservedSpace0:2;
      uint64_t RE0A:1;
      uint64_t RE1A:1;
      uint64_t RE2A:1;
      uint64_t RTRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSE:1;
      uint64_t STM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD1;

};

#define CCU80_CC83 (*(volatile struct CCU80_CC83_tag *) 0x40020400)

struct CCU81_CC80_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0IS:4;
      uint64_t EV1IS:4;
      uint64_t EV2IS:4;
      uint64_t reservedSpace0:4;
      uint64_t EV0EM:2;
      uint64_t EV1EM:2;
      uint64_t EV2EM:2;
      uint64_t EV0LM:1;
      uint64_t EV1LM:1;
      uint64_t EV2LM:1;
      uint64_t LPF0M:2;
      uint64_t LPF1M:2;
      uint64_t LPF2M:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTS:2;
      uint64_t ENDS:2;
      uint64_t CAP0S:2;
      uint64_t CAP1S:2;
      uint64_t GATES:2;
      uint64_t UDS:2;
      uint64_t LDS:2;
      uint64_t CNTS:2;
      uint64_t OFS:1;
      uint64_t TS:1;
      uint64_t MOS:2;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:1;
      uint64_t CDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t DTR1:1;
      uint64_t DTR2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBC:1;
      uint64_t TCC:1;
      uint64_t DITC:1;
      uint64_t DTC1C:1;
      uint64_t DTC2C:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCM:1;
      uint64_t TSSM:1;
      uint64_t CLST:1;
      uint64_t CMOD:1;
      uint64_t ECM:1;
      uint64_t CAPC:2;
      uint64_t TLS:1;
      uint64_t ENDM:2;
      uint64_t STRM:1;
      uint64_t SCE:1;
      uint64_t CCS:1;
      uint64_t DITHE:2;
      uint64_t DIM:1;
      uint64_t FPE:1;
      uint64_t TRAPE0:1;
      uint64_t TRAPE1:1;
      uint64_t TRAPE2:1;
      uint64_t TRAPE3:1;
      uint64_t TRPSE:1;
      uint64_t TRPSW:1;
      uint64_t EMS:1;
      uint64_t EMT:1;
      uint64_t MCME1:1;
      uint64_t MCME2:1;
      uint64_t EME:2;
      uint64_t STOS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSL11:1;
      uint64_t PSL12:1;
      uint64_t PSL21:1;
      uint64_t PSL22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCV:4;
      uint64_t reservedSpace0:4;
      uint64_t DCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCVS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
      uint64_t reservedSpace0:4;
      uint64_t PVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR1S:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR2S:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASE:1;
      uint64_t OCS1:1;
      uint64_t OCS2:1;
      uint64_t OCS3:1;
      uint64_t OCS4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE1:1;
      uint64_t DTE2:1;
      uint64_t DCEN1:1;
      uint64_t DCEN2:1;
      uint64_t DCEN3:1;
      uint64_t DCEN4:1;
      uint64_t DTCC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DT1R:8;
      uint64_t DT1F:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DC1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DT2R:8;
      uint64_t DT2F:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DC2R;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUS:1;
      uint64_t OMDS:1;
      uint64_t CMU1S:1;
      uint64_t CMD1S:1;
      uint64_t CMU2S:1;
      uint64_t CMD2S:1;
      uint64_t reservedSpace0:2;
      uint64_t E0AS:1;
      uint64_t E1AS:1;
      uint64_t E2AS:1;
      uint64_t TRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PME:1;
      uint64_t OME:1;
      uint64_t CMU1E:1;
      uint64_t CMD1E:1;
      uint64_t CMU2E:1;
      uint64_t CMD2E:1;
      uint64_t reservedSpace0:2;
      uint64_t E0AE:1;
      uint64_t E1AE:1;
      uint64_t E2AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSR:2;
      uint64_t CM1SR:2;
      uint64_t CM2SR:2;
      uint64_t reservedSpace0:2;
      uint64_t E0SR:2;
      uint64_t E1SR:2;
      uint64_t E2SR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPM:1;
      uint64_t SOM:1;
      uint64_t SCM1U:1;
      uint64_t SCM1D:1;
      uint64_t SCM2U:1;
      uint64_t SCM2D:1;
      uint64_t reservedSpace0:2;
      uint64_t SE0A:1;
      uint64_t SE1A:1;
      uint64_t SE2A:1;
      uint64_t STRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPM:1;
      uint64_t ROM:1;
      uint64_t RCM1U:1;
      uint64_t RCM1D:1;
      uint64_t RCM2U:1;
      uint64_t RCM2D:1;
      uint64_t reservedSpace0:2;
      uint64_t RE0A:1;
      uint64_t RE1A:1;
      uint64_t RE2A:1;
      uint64_t RTRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSE:1;
      uint64_t STM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD1;

};

#define CCU81_CC80 (*(volatile struct CCU81_CC80_tag *) 0x40024100)

struct CCU81_CC81_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0IS:4;
      uint64_t EV1IS:4;
      uint64_t EV2IS:4;
      uint64_t reservedSpace0:4;
      uint64_t EV0EM:2;
      uint64_t EV1EM:2;
      uint64_t EV2EM:2;
      uint64_t EV0LM:1;
      uint64_t EV1LM:1;
      uint64_t EV2LM:1;
      uint64_t LPF0M:2;
      uint64_t LPF1M:2;
      uint64_t LPF2M:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTS:2;
      uint64_t ENDS:2;
      uint64_t CAP0S:2;
      uint64_t CAP1S:2;
      uint64_t GATES:2;
      uint64_t UDS:2;
      uint64_t LDS:2;
      uint64_t CNTS:2;
      uint64_t OFS:1;
      uint64_t TS:1;
      uint64_t MOS:2;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:1;
      uint64_t CDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t DTR1:1;
      uint64_t DTR2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBC:1;
      uint64_t TCC:1;
      uint64_t DITC:1;
      uint64_t DTC1C:1;
      uint64_t DTC2C:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCM:1;
      uint64_t TSSM:1;
      uint64_t CLST:1;
      uint64_t CMOD:1;
      uint64_t ECM:1;
      uint64_t CAPC:2;
      uint64_t TLS:1;
      uint64_t ENDM:2;
      uint64_t STRM:1;
      uint64_t SCE:1;
      uint64_t CCS:1;
      uint64_t DITHE:2;
      uint64_t DIM:1;
      uint64_t FPE:1;
      uint64_t TRAPE0:1;
      uint64_t TRAPE1:1;
      uint64_t TRAPE2:1;
      uint64_t TRAPE3:1;
      uint64_t TRPSE:1;
      uint64_t TRPSW:1;
      uint64_t EMS:1;
      uint64_t EMT:1;
      uint64_t MCME1:1;
      uint64_t MCME2:1;
      uint64_t EME:2;
      uint64_t STOS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSL11:1;
      uint64_t PSL12:1;
      uint64_t PSL21:1;
      uint64_t PSL22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCV:4;
      uint64_t reservedSpace0:4;
      uint64_t DCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCVS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
      uint64_t reservedSpace0:4;
      uint64_t PVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR1S:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR2S:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASE:1;
      uint64_t OCS1:1;
      uint64_t OCS2:1;
      uint64_t OCS3:1;
      uint64_t OCS4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE1:1;
      uint64_t DTE2:1;
      uint64_t DCEN1:1;
      uint64_t DCEN2:1;
      uint64_t DCEN3:1;
      uint64_t DCEN4:1;
      uint64_t DTCC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DT1R:8;
      uint64_t DT1F:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DC1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DT2R:8;
      uint64_t DT2F:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DC2R;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUS:1;
      uint64_t OMDS:1;
      uint64_t CMU1S:1;
      uint64_t CMD1S:1;
      uint64_t CMU2S:1;
      uint64_t CMD2S:1;
      uint64_t reservedSpace0:2;
      uint64_t E0AS:1;
      uint64_t E1AS:1;
      uint64_t E2AS:1;
      uint64_t TRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PME:1;
      uint64_t OME:1;
      uint64_t CMU1E:1;
      uint64_t CMD1E:1;
      uint64_t CMU2E:1;
      uint64_t CMD2E:1;
      uint64_t reservedSpace0:2;
      uint64_t E0AE:1;
      uint64_t E1AE:1;
      uint64_t E2AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSR:2;
      uint64_t CM1SR:2;
      uint64_t CM2SR:2;
      uint64_t reservedSpace0:2;
      uint64_t E0SR:2;
      uint64_t E1SR:2;
      uint64_t E2SR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPM:1;
      uint64_t SOM:1;
      uint64_t SCM1U:1;
      uint64_t SCM1D:1;
      uint64_t SCM2U:1;
      uint64_t SCM2D:1;
      uint64_t reservedSpace0:2;
      uint64_t SE0A:1;
      uint64_t SE1A:1;
      uint64_t SE2A:1;
      uint64_t STRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPM:1;
      uint64_t ROM:1;
      uint64_t RCM1U:1;
      uint64_t RCM1D:1;
      uint64_t RCM2U:1;
      uint64_t RCM2D:1;
      uint64_t reservedSpace0:2;
      uint64_t RE0A:1;
      uint64_t RE1A:1;
      uint64_t RE2A:1;
      uint64_t RTRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSE:1;
      uint64_t STM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD1;

};

#define CCU81_CC81 (*(volatile struct CCU81_CC81_tag *) 0x40024200)

struct CCU81_CC82_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0IS:4;
      uint64_t EV1IS:4;
      uint64_t EV2IS:4;
      uint64_t reservedSpace0:4;
      uint64_t EV0EM:2;
      uint64_t EV1EM:2;
      uint64_t EV2EM:2;
      uint64_t EV0LM:1;
      uint64_t EV1LM:1;
      uint64_t EV2LM:1;
      uint64_t LPF0M:2;
      uint64_t LPF1M:2;
      uint64_t LPF2M:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTS:2;
      uint64_t ENDS:2;
      uint64_t CAP0S:2;
      uint64_t CAP1S:2;
      uint64_t GATES:2;
      uint64_t UDS:2;
      uint64_t LDS:2;
      uint64_t CNTS:2;
      uint64_t OFS:1;
      uint64_t TS:1;
      uint64_t MOS:2;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:1;
      uint64_t CDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t DTR1:1;
      uint64_t DTR2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBC:1;
      uint64_t TCC:1;
      uint64_t DITC:1;
      uint64_t DTC1C:1;
      uint64_t DTC2C:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCM:1;
      uint64_t TSSM:1;
      uint64_t CLST:1;
      uint64_t CMOD:1;
      uint64_t ECM:1;
      uint64_t CAPC:2;
      uint64_t TLS:1;
      uint64_t ENDM:2;
      uint64_t STRM:1;
      uint64_t SCE:1;
      uint64_t CCS:1;
      uint64_t DITHE:2;
      uint64_t DIM:1;
      uint64_t FPE:1;
      uint64_t TRAPE0:1;
      uint64_t TRAPE1:1;
      uint64_t TRAPE2:1;
      uint64_t TRAPE3:1;
      uint64_t TRPSE:1;
      uint64_t TRPSW:1;
      uint64_t EMS:1;
      uint64_t EMT:1;
      uint64_t MCME1:1;
      uint64_t MCME2:1;
      uint64_t EME:2;
      uint64_t STOS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSL11:1;
      uint64_t PSL12:1;
      uint64_t PSL21:1;
      uint64_t PSL22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCV:4;
      uint64_t reservedSpace0:4;
      uint64_t DCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCVS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
      uint64_t reservedSpace0:4;
      uint64_t PVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR1S:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR2S:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASE:1;
      uint64_t OCS1:1;
      uint64_t OCS2:1;
      uint64_t OCS3:1;
      uint64_t OCS4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE1:1;
      uint64_t DTE2:1;
      uint64_t DCEN1:1;
      uint64_t DCEN2:1;
      uint64_t DCEN3:1;
      uint64_t DCEN4:1;
      uint64_t DTCC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DT1R:8;
      uint64_t DT1F:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DC1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DT2R:8;
      uint64_t DT2F:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DC2R;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUS:1;
      uint64_t OMDS:1;
      uint64_t CMU1S:1;
      uint64_t CMD1S:1;
      uint64_t CMU2S:1;
      uint64_t CMD2S:1;
      uint64_t reservedSpace0:2;
      uint64_t E0AS:1;
      uint64_t E1AS:1;
      uint64_t E2AS:1;
      uint64_t TRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PME:1;
      uint64_t OME:1;
      uint64_t CMU1E:1;
      uint64_t CMD1E:1;
      uint64_t CMU2E:1;
      uint64_t CMD2E:1;
      uint64_t reservedSpace0:2;
      uint64_t E0AE:1;
      uint64_t E1AE:1;
      uint64_t E2AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSR:2;
      uint64_t CM1SR:2;
      uint64_t CM2SR:2;
      uint64_t reservedSpace0:2;
      uint64_t E0SR:2;
      uint64_t E1SR:2;
      uint64_t E2SR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPM:1;
      uint64_t SOM:1;
      uint64_t SCM1U:1;
      uint64_t SCM1D:1;
      uint64_t SCM2U:1;
      uint64_t SCM2D:1;
      uint64_t reservedSpace0:2;
      uint64_t SE0A:1;
      uint64_t SE1A:1;
      uint64_t SE2A:1;
      uint64_t STRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPM:1;
      uint64_t ROM:1;
      uint64_t RCM1U:1;
      uint64_t RCM1D:1;
      uint64_t RCM2U:1;
      uint64_t RCM2D:1;
      uint64_t reservedSpace0:2;
      uint64_t RE0A:1;
      uint64_t RE1A:1;
      uint64_t RE2A:1;
      uint64_t RTRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSE:1;
      uint64_t STM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD1;

};

#define CCU81_CC82 (*(volatile struct CCU81_CC82_tag *) 0x40024300)

struct CCU81_CC83_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0IS:4;
      uint64_t EV1IS:4;
      uint64_t EV2IS:4;
      uint64_t reservedSpace0:4;
      uint64_t EV0EM:2;
      uint64_t EV1EM:2;
      uint64_t EV2EM:2;
      uint64_t EV0LM:1;
      uint64_t EV1LM:1;
      uint64_t EV2LM:1;
      uint64_t LPF0M:2;
      uint64_t LPF1M:2;
      uint64_t LPF2M:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTS:2;
      uint64_t ENDS:2;
      uint64_t CAP0S:2;
      uint64_t CAP1S:2;
      uint64_t GATES:2;
      uint64_t UDS:2;
      uint64_t LDS:2;
      uint64_t CNTS:2;
      uint64_t OFS:1;
      uint64_t TS:1;
      uint64_t MOS:2;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRB:1;
      uint64_t CDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t DTR1:1;
      uint64_t DTR2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBC:1;
      uint64_t TCC:1;
      uint64_t DITC:1;
      uint64_t DTC1C:1;
      uint64_t DTC2C:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCM:1;
      uint64_t TSSM:1;
      uint64_t CLST:1;
      uint64_t CMOD:1;
      uint64_t ECM:1;
      uint64_t CAPC:2;
      uint64_t TLS:1;
      uint64_t ENDM:2;
      uint64_t STRM:1;
      uint64_t SCE:1;
      uint64_t CCS:1;
      uint64_t DITHE:2;
      uint64_t DIM:1;
      uint64_t FPE:1;
      uint64_t TRAPE0:1;
      uint64_t TRAPE1:1;
      uint64_t TRAPE2:1;
      uint64_t TRAPE3:1;
      uint64_t TRPSE:1;
      uint64_t TRPSW:1;
      uint64_t EMS:1;
      uint64_t EMT:1;
      uint64_t MCME1:1;
      uint64_t MCME2:1;
      uint64_t EME:2;
      uint64_t STOS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSL11:1;
      uint64_t PSL12:1;
      uint64_t PSL21:1;
      uint64_t PSL22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCV:4;
      uint64_t reservedSpace0:4;
      uint64_t DCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCVS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
      uint64_t reservedSpace0:4;
      uint64_t PVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR1S:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR2S:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASE:1;
      uint64_t OCS1:1;
      uint64_t OCS2:1;
      uint64_t OCS3:1;
      uint64_t OCS4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE1:1;
      uint64_t DTE2:1;
      uint64_t DCEN1:1;
      uint64_t DCEN2:1;
      uint64_t DCEN3:1;
      uint64_t DCEN4:1;
      uint64_t DTCC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DT1R:8;
      uint64_t DT1F:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DC1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DT2R:8;
      uint64_t DT2F:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DC2R;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTV:16;
      uint64_t FPCV:4;
      uint64_t FFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUS:1;
      uint64_t OMDS:1;
      uint64_t CMU1S:1;
      uint64_t CMD1S:1;
      uint64_t CMU2S:1;
      uint64_t CMD2S:1;
      uint64_t reservedSpace0:2;
      uint64_t E0AS:1;
      uint64_t E1AS:1;
      uint64_t E2AS:1;
      uint64_t TRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PME:1;
      uint64_t OME:1;
      uint64_t CMU1E:1;
      uint64_t CMD1E:1;
      uint64_t CMU2E:1;
      uint64_t CMD2E:1;
      uint64_t reservedSpace0:2;
      uint64_t E0AE:1;
      uint64_t E1AE:1;
      uint64_t E2AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSR:2;
      uint64_t CM1SR:2;
      uint64_t CM2SR:2;
      uint64_t reservedSpace0:2;
      uint64_t E0SR:2;
      uint64_t E1SR:2;
      uint64_t E2SR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPM:1;
      uint64_t SOM:1;
      uint64_t SCM1U:1;
      uint64_t SCM1D:1;
      uint64_t SCM2U:1;
      uint64_t SCM2D:1;
      uint64_t reservedSpace0:2;
      uint64_t SE0A:1;
      uint64_t SE1A:1;
      uint64_t SE2A:1;
      uint64_t STRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPM:1;
      uint64_t ROM:1;
      uint64_t RCM1U:1;
      uint64_t RCM1D:1;
      uint64_t RCM2U:1;
      uint64_t RCM2D:1;
      uint64_t reservedSpace0:2;
      uint64_t RE0A:1;
      uint64_t RE1A:1;
      uint64_t RE2A:1;
      uint64_t RTRPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSE:1;
      uint64_t STM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPV:16;
      uint64_t FPCV:4;
      uint64_t SPTR:2;
      uint64_t VPTR:2;
      uint64_t FFL:1;
      uint64_t LCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRD1;

};

#define CCU81_CC83 (*(volatile struct CCU81_CC83_tag *) 0x40024400)

struct POSIF0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:2;
      uint64_t QDCM:1;
      uint64_t reservedSpace0:1;
      uint64_t HIDG:1;
      uint64_t MCUE:1;
      uint64_t reservedSpace1:2;
      uint64_t INSEL0:2;
      uint64_t INSEL1:2;
      uint64_t INSEL2:2;
      uint64_t reservedSpace2:2;
      uint64_t DSEL:1;
      uint64_t SPES:1;
      uint64_t MSETS:3;
      uint64_t MSES:1;
      uint64_t MSYNS:2;
      uint64_t EWIS:2;
      uint64_t EWIE:1;
      uint64_t EWIL:1;
      uint64_t LPC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSUS:2;
      uint64_t MSUS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRUNS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRB:1;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRUNC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRUN;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODR:8;
      uint64_t MODT:8;
      uint64_t MODN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIDR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCP:3;
      uint64_t HEP:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HALP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCPS:3;
      uint64_t HEPS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HALPS;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCMPS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCSM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MNPS:1;
      uint64_t STHR:1;
      uint64_t STMR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MNPC:1;
      uint64_t MPC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCMF;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PALS:1;
      uint64_t PBLS:1;
      uint64_t PHS:1;
      uint64_t reservedSpace0:1;
      uint64_t ICM:2;
      uint64_t reservedSpace1:2;
      uint64_t DVAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDC;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHES:1;
      uint64_t WHES:1;
      uint64_t HIES:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTS:1;
      uint64_t reservedSpace1:3;
      uint64_t INDXS:1;
      uint64_t ERRS:1;
      uint64_t CNTS:1;
      uint64_t DIRS:1;
      uint64_t PCLKS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECHE:1;
      uint64_t EWHE:1;
      uint64_t EHIE:1;
      uint64_t reservedSpace0:1;
      uint64_t EMST:1;
      uint64_t reservedSpace1:3;
      uint64_t EINDX:1;
      uint64_t EERR:1;
      uint64_t ECNT:1;
      uint64_t EDIR:1;
      uint64_t EPCLK:1;
      uint64_t reservedSpace2:3;
      uint64_t CHESEL:1;
      uint64_t WHESEL:1;
      uint64_t HIESEL:1;
      uint64_t reservedSpace3:1;
      uint64_t MSTSEL:1;
      uint64_t reservedSpace4:3;
      uint64_t INDSEL:1;
      uint64_t ERRSEL:1;
      uint64_t CNTSEL:1;
      uint64_t DIRSEL:1;
      uint64_t PCLSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFLGE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCHE:1;
      uint64_t SWHE:1;
      uint64_t SHIE:1;
      uint64_t reservedSpace0:1;
      uint64_t SMST:1;
      uint64_t reservedSpace1:3;
      uint64_t SINDX:1;
      uint64_t SERR:1;
      uint64_t SCNT:1;
      uint64_t SDIR:1;
      uint64_t SPCLK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCHE:1;
      uint64_t RWHE:1;
      uint64_t RHIE:1;
      uint64_t reservedSpace0:1;
      uint64_t RMST:1;
      uint64_t reservedSpace1:3;
      uint64_t RINDX:1;
      uint64_t RERR:1;
      uint64_t RCNT:1;
      uint64_t RDIR:1;
      uint64_t RPCLK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RPFLG;

  uint8_t res5[128];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QCSV:2;
      uint64_t QPSV:2;
      uint64_t IVAL:1;
      uint64_t HSP:3;
      uint64_t LPP0:6;
      uint64_t reservedSpace0:2;
      uint64_t LPP1:6;
      uint64_t LPP2:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDBG;

};

#define POSIF0 (*(volatile struct POSIF0_tag *) 0x40028000)

struct POSIF1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSEL:2;
      uint64_t QDCM:1;
      uint64_t reservedSpace0:1;
      uint64_t HIDG:1;
      uint64_t MCUE:1;
      uint64_t reservedSpace1:2;
      uint64_t INSEL0:2;
      uint64_t INSEL1:2;
      uint64_t INSEL2:2;
      uint64_t reservedSpace2:2;
      uint64_t DSEL:1;
      uint64_t SPES:1;
      uint64_t MSETS:3;
      uint64_t MSES:1;
      uint64_t MSYNS:2;
      uint64_t EWIS:2;
      uint64_t EWIE:1;
      uint64_t EWIL:1;
      uint64_t LPC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSUS:2;
      uint64_t MSUS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRUNS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRB:1;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRUNC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRUN;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODR:8;
      uint64_t MODT:8;
      uint64_t MODN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIDR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCP:3;
      uint64_t HEP:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HALP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCPS:3;
      uint64_t HEPS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HALPS;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCMPS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCSM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MNPS:1;
      uint64_t STHR:1;
      uint64_t STMR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MNPC:1;
      uint64_t MPC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCMF;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PALS:1;
      uint64_t PBLS:1;
      uint64_t PHS:1;
      uint64_t reservedSpace0:1;
      uint64_t ICM:2;
      uint64_t reservedSpace1:2;
      uint64_t DVAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDC;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHES:1;
      uint64_t WHES:1;
      uint64_t HIES:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTS:1;
      uint64_t reservedSpace1:3;
      uint64_t INDXS:1;
      uint64_t ERRS:1;
      uint64_t CNTS:1;
      uint64_t DIRS:1;
      uint64_t PCLKS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECHE:1;
      uint64_t EWHE:1;
      uint64_t EHIE:1;
      uint64_t reservedSpace0:1;
      uint64_t EMST:1;
      uint64_t reservedSpace1:3;
      uint64_t EINDX:1;
      uint64_t EERR:1;
      uint64_t ECNT:1;
      uint64_t EDIR:1;
      uint64_t EPCLK:1;
      uint64_t reservedSpace2:3;
      uint64_t CHESEL:1;
      uint64_t WHESEL:1;
      uint64_t HIESEL:1;
      uint64_t reservedSpace3:1;
      uint64_t MSTSEL:1;
      uint64_t reservedSpace4:3;
      uint64_t INDSEL:1;
      uint64_t ERRSEL:1;
      uint64_t CNTSEL:1;
      uint64_t DIRSEL:1;
      uint64_t PCLSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFLGE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCHE:1;
      uint64_t SWHE:1;
      uint64_t SHIE:1;
      uint64_t reservedSpace0:1;
      uint64_t SMST:1;
      uint64_t reservedSpace1:3;
      uint64_t SINDX:1;
      uint64_t SERR:1;
      uint64_t SCNT:1;
      uint64_t SDIR:1;
      uint64_t SPCLK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCHE:1;
      uint64_t RWHE:1;
      uint64_t RHIE:1;
      uint64_t reservedSpace0:1;
      uint64_t RMST:1;
      uint64_t reservedSpace1:3;
      uint64_t RINDX:1;
      uint64_t RERR:1;
      uint64_t RCNT:1;
      uint64_t RDIR:1;
      uint64_t RPCLK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RPFLG;

  uint8_t res5[128];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QCSV:2;
      uint64_t QPSV:2;
      uint64_t IVAL:1;
      uint64_t HSP:3;
      uint64_t LPP0:6;
      uint64_t reservedSpace0:2;
      uint64_t LPP1:6;
      uint64_t LPP2:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDBG;

};

#define POSIF1 (*(volatile struct POSIF1_tag *) 0x4002c000)

struct PORT0_tag
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS0:1;
      uint64_t PS1:1;
      uint64_t PS2:1;
      uint64_t PS3:1;
      uint64_t PS4:1;
      uint64_t PS5:1;
      uint64_t PS6:1;
      uint64_t PS7:1;
      uint64_t PS8:1;
      uint64_t PS9:1;
      uint64_t PS10:1;
      uint64_t PS11:1;
      uint64_t PS12:1;
      uint64_t PS13:1;
      uint64_t PS14:1;
      uint64_t PS15:1;
      uint64_t PR0:1;
      uint64_t PR1:1;
      uint64_t PR2:1;
      uint64_t PR3:1;
      uint64_t PR4:1;
      uint64_t PR5:1;
      uint64_t PR6:1;
      uint64_t PR7:1;
      uint64_t PR8:1;
      uint64_t PR9:1;
      uint64_t PR10:1;
      uint64_t PR11:1;
      uint64_t PR12:1;
      uint64_t PR13:1;
      uint64_t PR14:1;
      uint64_t PR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OMR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC0:5;
      uint64_t reservedSpace1:3;
      uint64_t PC1:5;
      uint64_t reservedSpace2:3;
      uint64_t PC2:5;
      uint64_t reservedSpace3:3;
      uint64_t PC3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC4:5;
      uint64_t reservedSpace1:3;
      uint64_t PC5:5;
      uint64_t reservedSpace2:3;
      uint64_t PC6:5;
      uint64_t reservedSpace3:3;
      uint64_t PC7:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC8:5;
      uint64_t reservedSpace1:3;
      uint64_t PC9:5;
      uint64_t reservedSpace2:3;
      uint64_t PC10:5;
      uint64_t reservedSpace3:3;
      uint64_t PC11:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC12:5;
      uint64_t reservedSpace1:3;
      uint64_t PC13:5;
      uint64_t reservedSpace2:3;
      uint64_t PC14:5;
      uint64_t reservedSpace3:3;
      uint64_t PC15:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR12;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IN;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD0:3;
      uint64_t reservedSpace0:1;
      uint64_t PD1:3;
      uint64_t reservedSpace1:1;
      uint64_t PD2:3;
      uint64_t reservedSpace2:1;
      uint64_t PD3:3;
      uint64_t reservedSpace3:1;
      uint64_t PD4:3;
      uint64_t reservedSpace4:1;
      uint64_t PD5:3;
      uint64_t reservedSpace5:1;
      uint64_t PD6:3;
      uint64_t reservedSpace6:1;
      uint64_t PD7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD8:3;
      uint64_t reservedSpace0:1;
      uint64_t PD9:3;
      uint64_t reservedSpace1:1;
      uint64_t PD10:3;
      uint64_t reservedSpace2:1;
      uint64_t PD11:3;
      uint64_t reservedSpace3:1;
      uint64_t PD12:3;
      uint64_t reservedSpace4:1;
      uint64_t PD13:3;
      uint64_t reservedSpace5:1;
      uint64_t PD14:3;
      uint64_t reservedSpace6:1;
      uint64_t PD15:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR1;

  uint8_t res3[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDIS0:1;
      uint64_t PDIS1:1;
      uint64_t PDIS2:1;
      uint64_t PDIS3:1;
      uint64_t PDIS4:1;
      uint64_t PDIS5:1;
      uint64_t PDIS6:1;
      uint64_t PDIS7:1;
      uint64_t PDIS8:1;
      uint64_t PDIS9:1;
      uint64_t PDIS10:1;
      uint64_t PDIS11:1;
      uint64_t PDIS12:1;
      uint64_t PDIS13:1;
      uint64_t PDIS14:1;
      uint64_t PDIS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDISC;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS0:1;
      uint64_t PPS1:1;
      uint64_t PPS2:1;
      uint64_t PPS3:1;
      uint64_t PPS4:1;
      uint64_t PPS5:1;
      uint64_t PPS6:1;
      uint64_t PPS7:1;
      uint64_t PPS8:1;
      uint64_t PPS9:1;
      uint64_t PPS10:1;
      uint64_t PPS11:1;
      uint64_t PPS12:1;
      uint64_t PPS13:1;
      uint64_t PPS14:1;
      uint64_t PPS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW0:2;
      uint64_t HW1:2;
      uint64_t HW2:2;
      uint64_t HW3:2;
      uint64_t HW4:2;
      uint64_t HW5:2;
      uint64_t HW6:2;
      uint64_t HW7:2;
      uint64_t HW8:2;
      uint64_t HW9:2;
      uint64_t HW10:2;
      uint64_t HW11:2;
      uint64_t HW12:2;
      uint64_t HW13:2;
      uint64_t HW14:2;
      uint64_t HW15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWSEL;

};

#define PORT0 (*(volatile struct PORT0_tag *) 0x48028000)

struct PORT1_tag
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS0:1;
      uint64_t PS1:1;
      uint64_t PS2:1;
      uint64_t PS3:1;
      uint64_t PS4:1;
      uint64_t PS5:1;
      uint64_t PS6:1;
      uint64_t PS7:1;
      uint64_t PS8:1;
      uint64_t PS9:1;
      uint64_t PS10:1;
      uint64_t PS11:1;
      uint64_t PS12:1;
      uint64_t PS13:1;
      uint64_t PS14:1;
      uint64_t PS15:1;
      uint64_t PR0:1;
      uint64_t PR1:1;
      uint64_t PR2:1;
      uint64_t PR3:1;
      uint64_t PR4:1;
      uint64_t PR5:1;
      uint64_t PR6:1;
      uint64_t PR7:1;
      uint64_t PR8:1;
      uint64_t PR9:1;
      uint64_t PR10:1;
      uint64_t PR11:1;
      uint64_t PR12:1;
      uint64_t PR13:1;
      uint64_t PR14:1;
      uint64_t PR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OMR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC0:5;
      uint64_t reservedSpace1:3;
      uint64_t PC1:5;
      uint64_t reservedSpace2:3;
      uint64_t PC2:5;
      uint64_t reservedSpace3:3;
      uint64_t PC3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC4:5;
      uint64_t reservedSpace1:3;
      uint64_t PC5:5;
      uint64_t reservedSpace2:3;
      uint64_t PC6:5;
      uint64_t reservedSpace3:3;
      uint64_t PC7:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC8:5;
      uint64_t reservedSpace1:3;
      uint64_t PC9:5;
      uint64_t reservedSpace2:3;
      uint64_t PC10:5;
      uint64_t reservedSpace3:3;
      uint64_t PC11:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC12:5;
      uint64_t reservedSpace1:3;
      uint64_t PC13:5;
      uint64_t reservedSpace2:3;
      uint64_t PC14:5;
      uint64_t reservedSpace3:3;
      uint64_t PC15:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR12;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IN;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD0:3;
      uint64_t reservedSpace0:1;
      uint64_t PD1:3;
      uint64_t reservedSpace1:1;
      uint64_t PD2:3;
      uint64_t reservedSpace2:1;
      uint64_t PD3:3;
      uint64_t reservedSpace3:1;
      uint64_t PD4:3;
      uint64_t reservedSpace4:1;
      uint64_t PD5:3;
      uint64_t reservedSpace5:1;
      uint64_t PD6:3;
      uint64_t reservedSpace6:1;
      uint64_t PD7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD8:3;
      uint64_t reservedSpace0:1;
      uint64_t PD9:3;
      uint64_t reservedSpace1:1;
      uint64_t PD10:3;
      uint64_t reservedSpace2:1;
      uint64_t PD11:3;
      uint64_t reservedSpace3:1;
      uint64_t PD12:3;
      uint64_t reservedSpace4:1;
      uint64_t PD13:3;
      uint64_t reservedSpace5:1;
      uint64_t PD14:3;
      uint64_t reservedSpace6:1;
      uint64_t PD15:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR1;

  uint8_t res3[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDIS0:1;
      uint64_t PDIS1:1;
      uint64_t PDIS2:1;
      uint64_t PDIS3:1;
      uint64_t PDIS4:1;
      uint64_t PDIS5:1;
      uint64_t PDIS6:1;
      uint64_t PDIS7:1;
      uint64_t PDIS8:1;
      uint64_t PDIS9:1;
      uint64_t PDIS10:1;
      uint64_t PDIS11:1;
      uint64_t PDIS12:1;
      uint64_t PDIS13:1;
      uint64_t PDIS14:1;
      uint64_t PDIS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDISC;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS0:1;
      uint64_t PPS1:1;
      uint64_t PPS2:1;
      uint64_t PPS3:1;
      uint64_t PPS4:1;
      uint64_t PPS5:1;
      uint64_t PPS6:1;
      uint64_t PPS7:1;
      uint64_t PPS8:1;
      uint64_t PPS9:1;
      uint64_t PPS10:1;
      uint64_t PPS11:1;
      uint64_t PPS12:1;
      uint64_t PPS13:1;
      uint64_t PPS14:1;
      uint64_t PPS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW0:2;
      uint64_t HW1:2;
      uint64_t HW2:2;
      uint64_t HW3:2;
      uint64_t HW4:2;
      uint64_t HW5:2;
      uint64_t HW6:2;
      uint64_t HW7:2;
      uint64_t HW8:2;
      uint64_t HW9:2;
      uint64_t HW10:2;
      uint64_t HW11:2;
      uint64_t HW12:2;
      uint64_t HW13:2;
      uint64_t HW14:2;
      uint64_t HW15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWSEL;

};

#define PORT1 (*(volatile struct PORT1_tag *) 0x48028100)

struct PORT2_tag
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS0:1;
      uint64_t PS1:1;
      uint64_t PS2:1;
      uint64_t PS3:1;
      uint64_t PS4:1;
      uint64_t PS5:1;
      uint64_t PS6:1;
      uint64_t PS7:1;
      uint64_t PS8:1;
      uint64_t PS9:1;
      uint64_t PS10:1;
      uint64_t PS11:1;
      uint64_t PS12:1;
      uint64_t PS13:1;
      uint64_t PS14:1;
      uint64_t PS15:1;
      uint64_t PR0:1;
      uint64_t PR1:1;
      uint64_t PR2:1;
      uint64_t PR3:1;
      uint64_t PR4:1;
      uint64_t PR5:1;
      uint64_t PR6:1;
      uint64_t PR7:1;
      uint64_t PR8:1;
      uint64_t PR9:1;
      uint64_t PR10:1;
      uint64_t PR11:1;
      uint64_t PR12:1;
      uint64_t PR13:1;
      uint64_t PR14:1;
      uint64_t PR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OMR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC0:5;
      uint64_t reservedSpace1:3;
      uint64_t PC1:5;
      uint64_t reservedSpace2:3;
      uint64_t PC2:5;
      uint64_t reservedSpace3:3;
      uint64_t PC3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC4:5;
      uint64_t reservedSpace1:3;
      uint64_t PC5:5;
      uint64_t reservedSpace2:3;
      uint64_t PC6:5;
      uint64_t reservedSpace3:3;
      uint64_t PC7:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC8:5;
      uint64_t reservedSpace1:3;
      uint64_t PC9:5;
      uint64_t reservedSpace2:3;
      uint64_t PC10:5;
      uint64_t reservedSpace3:3;
      uint64_t PC11:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC12:5;
      uint64_t reservedSpace1:3;
      uint64_t PC13:5;
      uint64_t reservedSpace2:3;
      uint64_t PC14:5;
      uint64_t reservedSpace3:3;
      uint64_t PC15:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR12;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IN;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD0:3;
      uint64_t reservedSpace0:1;
      uint64_t PD1:3;
      uint64_t reservedSpace1:1;
      uint64_t PD2:3;
      uint64_t reservedSpace2:1;
      uint64_t PD3:3;
      uint64_t reservedSpace3:1;
      uint64_t PD4:3;
      uint64_t reservedSpace4:1;
      uint64_t PD5:3;
      uint64_t reservedSpace5:1;
      uint64_t PD6:3;
      uint64_t reservedSpace6:1;
      uint64_t PD7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD8:3;
      uint64_t reservedSpace0:1;
      uint64_t PD9:3;
      uint64_t reservedSpace1:1;
      uint64_t PD10:3;
      uint64_t reservedSpace2:1;
      uint64_t PD11:3;
      uint64_t reservedSpace3:1;
      uint64_t PD12:3;
      uint64_t reservedSpace4:1;
      uint64_t PD13:3;
      uint64_t reservedSpace5:1;
      uint64_t PD14:3;
      uint64_t reservedSpace6:1;
      uint64_t PD15:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR1;

  uint8_t res3[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDIS0:1;
      uint64_t PDIS1:1;
      uint64_t PDIS2:1;
      uint64_t PDIS3:1;
      uint64_t PDIS4:1;
      uint64_t PDIS5:1;
      uint64_t PDIS6:1;
      uint64_t PDIS7:1;
      uint64_t PDIS8:1;
      uint64_t PDIS9:1;
      uint64_t PDIS10:1;
      uint64_t PDIS11:1;
      uint64_t PDIS12:1;
      uint64_t PDIS13:1;
      uint64_t PDIS14:1;
      uint64_t PDIS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDISC;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS0:1;
      uint64_t PPS1:1;
      uint64_t PPS2:1;
      uint64_t PPS3:1;
      uint64_t PPS4:1;
      uint64_t PPS5:1;
      uint64_t PPS6:1;
      uint64_t PPS7:1;
      uint64_t PPS8:1;
      uint64_t PPS9:1;
      uint64_t PPS10:1;
      uint64_t PPS11:1;
      uint64_t PPS12:1;
      uint64_t PPS13:1;
      uint64_t PPS14:1;
      uint64_t PPS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW0:2;
      uint64_t HW1:2;
      uint64_t HW2:2;
      uint64_t HW3:2;
      uint64_t HW4:2;
      uint64_t HW5:2;
      uint64_t HW6:2;
      uint64_t HW7:2;
      uint64_t HW8:2;
      uint64_t HW9:2;
      uint64_t HW10:2;
      uint64_t HW11:2;
      uint64_t HW12:2;
      uint64_t HW13:2;
      uint64_t HW14:2;
      uint64_t HW15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWSEL;

};

#define PORT2 (*(volatile struct PORT2_tag *) 0x48028200)

struct PORT3_tag
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS0:1;
      uint64_t PS1:1;
      uint64_t PS2:1;
      uint64_t PS3:1;
      uint64_t PS4:1;
      uint64_t PS5:1;
      uint64_t PS6:1;
      uint64_t PS7:1;
      uint64_t PS8:1;
      uint64_t PS9:1;
      uint64_t PS10:1;
      uint64_t PS11:1;
      uint64_t PS12:1;
      uint64_t PS13:1;
      uint64_t PS14:1;
      uint64_t PS15:1;
      uint64_t PR0:1;
      uint64_t PR1:1;
      uint64_t PR2:1;
      uint64_t PR3:1;
      uint64_t PR4:1;
      uint64_t PR5:1;
      uint64_t PR6:1;
      uint64_t PR7:1;
      uint64_t PR8:1;
      uint64_t PR9:1;
      uint64_t PR10:1;
      uint64_t PR11:1;
      uint64_t PR12:1;
      uint64_t PR13:1;
      uint64_t PR14:1;
      uint64_t PR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OMR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC0:5;
      uint64_t reservedSpace1:3;
      uint64_t PC1:5;
      uint64_t reservedSpace2:3;
      uint64_t PC2:5;
      uint64_t reservedSpace3:3;
      uint64_t PC3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC4:5;
      uint64_t reservedSpace1:3;
      uint64_t PC5:5;
      uint64_t reservedSpace2:3;
      uint64_t PC6:5;
      uint64_t reservedSpace3:3;
      uint64_t PC7:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC8:5;
      uint64_t reservedSpace1:3;
      uint64_t PC9:5;
      uint64_t reservedSpace2:3;
      uint64_t PC10:5;
      uint64_t reservedSpace3:3;
      uint64_t PC11:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC12:5;
      uint64_t reservedSpace1:3;
      uint64_t PC13:5;
      uint64_t reservedSpace2:3;
      uint64_t PC14:5;
      uint64_t reservedSpace3:3;
      uint64_t PC15:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR12;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IN;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD0:3;
      uint64_t reservedSpace0:1;
      uint64_t PD1:3;
      uint64_t reservedSpace1:1;
      uint64_t PD2:3;
      uint64_t reservedSpace2:1;
      uint64_t PD3:3;
      uint64_t reservedSpace3:1;
      uint64_t PD4:3;
      uint64_t reservedSpace4:1;
      uint64_t PD5:3;
      uint64_t reservedSpace5:1;
      uint64_t PD6:3;
      uint64_t reservedSpace6:1;
      uint64_t PD7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD8:3;
      uint64_t reservedSpace0:1;
      uint64_t PD9:3;
      uint64_t reservedSpace1:1;
      uint64_t PD10:3;
      uint64_t reservedSpace2:1;
      uint64_t PD11:3;
      uint64_t reservedSpace3:1;
      uint64_t PD12:3;
      uint64_t reservedSpace4:1;
      uint64_t PD13:3;
      uint64_t reservedSpace5:1;
      uint64_t PD14:3;
      uint64_t reservedSpace6:1;
      uint64_t PD15:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR1;

  uint8_t res3[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDIS0:1;
      uint64_t PDIS1:1;
      uint64_t PDIS2:1;
      uint64_t PDIS3:1;
      uint64_t PDIS4:1;
      uint64_t PDIS5:1;
      uint64_t PDIS6:1;
      uint64_t PDIS7:1;
      uint64_t PDIS8:1;
      uint64_t PDIS9:1;
      uint64_t PDIS10:1;
      uint64_t PDIS11:1;
      uint64_t PDIS12:1;
      uint64_t PDIS13:1;
      uint64_t PDIS14:1;
      uint64_t PDIS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDISC;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS0:1;
      uint64_t PPS1:1;
      uint64_t PPS2:1;
      uint64_t PPS3:1;
      uint64_t PPS4:1;
      uint64_t PPS5:1;
      uint64_t PPS6:1;
      uint64_t PPS7:1;
      uint64_t PPS8:1;
      uint64_t PPS9:1;
      uint64_t PPS10:1;
      uint64_t PPS11:1;
      uint64_t PPS12:1;
      uint64_t PPS13:1;
      uint64_t PPS14:1;
      uint64_t PPS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW0:2;
      uint64_t HW1:2;
      uint64_t HW2:2;
      uint64_t HW3:2;
      uint64_t HW4:2;
      uint64_t HW5:2;
      uint64_t HW6:2;
      uint64_t HW7:2;
      uint64_t HW8:2;
      uint64_t HW9:2;
      uint64_t HW10:2;
      uint64_t HW11:2;
      uint64_t HW12:2;
      uint64_t HW13:2;
      uint64_t HW14:2;
      uint64_t HW15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWSEL;

};

#define PORT3 (*(volatile struct PORT3_tag *) 0x48028300)

struct PORT4_tag
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS0:1;
      uint64_t PS1:1;
      uint64_t PS2:1;
      uint64_t PS3:1;
      uint64_t PS4:1;
      uint64_t PS5:1;
      uint64_t PS6:1;
      uint64_t PS7:1;
      uint64_t PS8:1;
      uint64_t PS9:1;
      uint64_t PS10:1;
      uint64_t PS11:1;
      uint64_t PS12:1;
      uint64_t PS13:1;
      uint64_t PS14:1;
      uint64_t PS15:1;
      uint64_t PR0:1;
      uint64_t PR1:1;
      uint64_t PR2:1;
      uint64_t PR3:1;
      uint64_t PR4:1;
      uint64_t PR5:1;
      uint64_t PR6:1;
      uint64_t PR7:1;
      uint64_t PR8:1;
      uint64_t PR9:1;
      uint64_t PR10:1;
      uint64_t PR11:1;
      uint64_t PR12:1;
      uint64_t PR13:1;
      uint64_t PR14:1;
      uint64_t PR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OMR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC0:5;
      uint64_t reservedSpace1:3;
      uint64_t PC1:5;
      uint64_t reservedSpace2:3;
      uint64_t PC2:5;
      uint64_t reservedSpace3:3;
      uint64_t PC3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC4:5;
      uint64_t reservedSpace1:3;
      uint64_t PC5:5;
      uint64_t reservedSpace2:3;
      uint64_t PC6:5;
      uint64_t reservedSpace3:3;
      uint64_t PC7:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR4;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IN;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD0:3;
      uint64_t reservedSpace0:1;
      uint64_t PD1:3;
      uint64_t reservedSpace1:1;
      uint64_t PD2:3;
      uint64_t reservedSpace2:1;
      uint64_t PD3:3;
      uint64_t reservedSpace3:1;
      uint64_t PD4:3;
      uint64_t reservedSpace4:1;
      uint64_t PD5:3;
      uint64_t reservedSpace5:1;
      uint64_t PD6:3;
      uint64_t reservedSpace6:1;
      uint64_t PD7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR0;

  uint8_t res3[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDIS0:1;
      uint64_t PDIS1:1;
      uint64_t PDIS2:1;
      uint64_t PDIS3:1;
      uint64_t PDIS4:1;
      uint64_t PDIS5:1;
      uint64_t PDIS6:1;
      uint64_t PDIS7:1;
      uint64_t PDIS8:1;
      uint64_t PDIS9:1;
      uint64_t PDIS10:1;
      uint64_t PDIS11:1;
      uint64_t PDIS12:1;
      uint64_t PDIS13:1;
      uint64_t PDIS14:1;
      uint64_t PDIS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDISC;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS0:1;
      uint64_t PPS1:1;
      uint64_t PPS2:1;
      uint64_t PPS3:1;
      uint64_t PPS4:1;
      uint64_t PPS5:1;
      uint64_t PPS6:1;
      uint64_t PPS7:1;
      uint64_t PPS8:1;
      uint64_t PPS9:1;
      uint64_t PPS10:1;
      uint64_t PPS11:1;
      uint64_t PPS12:1;
      uint64_t PPS13:1;
      uint64_t PPS14:1;
      uint64_t PPS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW0:2;
      uint64_t HW1:2;
      uint64_t HW2:2;
      uint64_t HW3:2;
      uint64_t HW4:2;
      uint64_t HW5:2;
      uint64_t HW6:2;
      uint64_t HW7:2;
      uint64_t HW8:2;
      uint64_t HW9:2;
      uint64_t HW10:2;
      uint64_t HW11:2;
      uint64_t HW12:2;
      uint64_t HW13:2;
      uint64_t HW14:2;
      uint64_t HW15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWSEL;

};

#define PORT4 (*(volatile struct PORT4_tag *) 0x48028400)

struct PORT5_tag
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS0:1;
      uint64_t PS1:1;
      uint64_t PS2:1;
      uint64_t PS3:1;
      uint64_t PS4:1;
      uint64_t PS5:1;
      uint64_t PS6:1;
      uint64_t PS7:1;
      uint64_t PS8:1;
      uint64_t PS9:1;
      uint64_t PS10:1;
      uint64_t PS11:1;
      uint64_t PS12:1;
      uint64_t PS13:1;
      uint64_t PS14:1;
      uint64_t PS15:1;
      uint64_t PR0:1;
      uint64_t PR1:1;
      uint64_t PR2:1;
      uint64_t PR3:1;
      uint64_t PR4:1;
      uint64_t PR5:1;
      uint64_t PR6:1;
      uint64_t PR7:1;
      uint64_t PR8:1;
      uint64_t PR9:1;
      uint64_t PR10:1;
      uint64_t PR11:1;
      uint64_t PR12:1;
      uint64_t PR13:1;
      uint64_t PR14:1;
      uint64_t PR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OMR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC0:5;
      uint64_t reservedSpace1:3;
      uint64_t PC1:5;
      uint64_t reservedSpace2:3;
      uint64_t PC2:5;
      uint64_t reservedSpace3:3;
      uint64_t PC3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC4:5;
      uint64_t reservedSpace1:3;
      uint64_t PC5:5;
      uint64_t reservedSpace2:3;
      uint64_t PC6:5;
      uint64_t reservedSpace3:3;
      uint64_t PC7:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC8:5;
      uint64_t reservedSpace1:3;
      uint64_t PC9:5;
      uint64_t reservedSpace2:3;
      uint64_t PC10:5;
      uint64_t reservedSpace3:3;
      uint64_t PC11:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR8;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IN;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD0:3;
      uint64_t reservedSpace0:1;
      uint64_t PD1:3;
      uint64_t reservedSpace1:1;
      uint64_t PD2:3;
      uint64_t reservedSpace2:1;
      uint64_t PD3:3;
      uint64_t reservedSpace3:1;
      uint64_t PD4:3;
      uint64_t reservedSpace4:1;
      uint64_t PD5:3;
      uint64_t reservedSpace5:1;
      uint64_t PD6:3;
      uint64_t reservedSpace6:1;
      uint64_t PD7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD8:3;
      uint64_t reservedSpace0:1;
      uint64_t PD9:3;
      uint64_t reservedSpace1:1;
      uint64_t PD10:3;
      uint64_t reservedSpace2:1;
      uint64_t PD11:3;
      uint64_t reservedSpace3:1;
      uint64_t PD12:3;
      uint64_t reservedSpace4:1;
      uint64_t PD13:3;
      uint64_t reservedSpace5:1;
      uint64_t PD14:3;
      uint64_t reservedSpace6:1;
      uint64_t PD15:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR1;

  uint8_t res3[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDIS0:1;
      uint64_t PDIS1:1;
      uint64_t PDIS2:1;
      uint64_t PDIS3:1;
      uint64_t PDIS4:1;
      uint64_t PDIS5:1;
      uint64_t PDIS6:1;
      uint64_t PDIS7:1;
      uint64_t PDIS8:1;
      uint64_t PDIS9:1;
      uint64_t PDIS10:1;
      uint64_t PDIS11:1;
      uint64_t PDIS12:1;
      uint64_t PDIS13:1;
      uint64_t PDIS14:1;
      uint64_t PDIS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDISC;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS0:1;
      uint64_t PPS1:1;
      uint64_t PPS2:1;
      uint64_t PPS3:1;
      uint64_t PPS4:1;
      uint64_t PPS5:1;
      uint64_t PPS6:1;
      uint64_t PPS7:1;
      uint64_t PPS8:1;
      uint64_t PPS9:1;
      uint64_t PPS10:1;
      uint64_t PPS11:1;
      uint64_t PPS12:1;
      uint64_t PPS13:1;
      uint64_t PPS14:1;
      uint64_t PPS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW0:2;
      uint64_t HW1:2;
      uint64_t HW2:2;
      uint64_t HW3:2;
      uint64_t HW4:2;
      uint64_t HW5:2;
      uint64_t HW6:2;
      uint64_t HW7:2;
      uint64_t HW8:2;
      uint64_t HW9:2;
      uint64_t HW10:2;
      uint64_t HW11:2;
      uint64_t HW12:2;
      uint64_t HW13:2;
      uint64_t HW14:2;
      uint64_t HW15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWSEL;

};

#define PORT5 (*(volatile struct PORT5_tag *) 0x48028500)

struct PORT6_tag
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS0:1;
      uint64_t PS1:1;
      uint64_t PS2:1;
      uint64_t PS3:1;
      uint64_t PS4:1;
      uint64_t PS5:1;
      uint64_t PS6:1;
      uint64_t PS7:1;
      uint64_t PS8:1;
      uint64_t PS9:1;
      uint64_t PS10:1;
      uint64_t PS11:1;
      uint64_t PS12:1;
      uint64_t PS13:1;
      uint64_t PS14:1;
      uint64_t PS15:1;
      uint64_t PR0:1;
      uint64_t PR1:1;
      uint64_t PR2:1;
      uint64_t PR3:1;
      uint64_t PR4:1;
      uint64_t PR5:1;
      uint64_t PR6:1;
      uint64_t PR7:1;
      uint64_t PR8:1;
      uint64_t PR9:1;
      uint64_t PR10:1;
      uint64_t PR11:1;
      uint64_t PR12:1;
      uint64_t PR13:1;
      uint64_t PR14:1;
      uint64_t PR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OMR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC0:5;
      uint64_t reservedSpace1:3;
      uint64_t PC1:5;
      uint64_t reservedSpace2:3;
      uint64_t PC2:5;
      uint64_t reservedSpace3:3;
      uint64_t PC3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC4:5;
      uint64_t reservedSpace1:3;
      uint64_t PC5:5;
      uint64_t reservedSpace2:3;
      uint64_t PC6:5;
      uint64_t reservedSpace3:3;
      uint64_t PC7:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR4;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IN;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD0:3;
      uint64_t reservedSpace0:1;
      uint64_t PD1:3;
      uint64_t reservedSpace1:1;
      uint64_t PD2:3;
      uint64_t reservedSpace2:1;
      uint64_t PD3:3;
      uint64_t reservedSpace3:1;
      uint64_t PD4:3;
      uint64_t reservedSpace4:1;
      uint64_t PD5:3;
      uint64_t reservedSpace5:1;
      uint64_t PD6:3;
      uint64_t reservedSpace6:1;
      uint64_t PD7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR0;

  uint8_t res3[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDIS0:1;
      uint64_t PDIS1:1;
      uint64_t PDIS2:1;
      uint64_t PDIS3:1;
      uint64_t PDIS4:1;
      uint64_t PDIS5:1;
      uint64_t PDIS6:1;
      uint64_t PDIS7:1;
      uint64_t PDIS8:1;
      uint64_t PDIS9:1;
      uint64_t PDIS10:1;
      uint64_t PDIS11:1;
      uint64_t PDIS12:1;
      uint64_t PDIS13:1;
      uint64_t PDIS14:1;
      uint64_t PDIS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDISC;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS0:1;
      uint64_t PPS1:1;
      uint64_t PPS2:1;
      uint64_t PPS3:1;
      uint64_t PPS4:1;
      uint64_t PPS5:1;
      uint64_t PPS6:1;
      uint64_t PPS7:1;
      uint64_t PPS8:1;
      uint64_t PPS9:1;
      uint64_t PPS10:1;
      uint64_t PPS11:1;
      uint64_t PPS12:1;
      uint64_t PPS13:1;
      uint64_t PPS14:1;
      uint64_t PPS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW0:2;
      uint64_t HW1:2;
      uint64_t HW2:2;
      uint64_t HW3:2;
      uint64_t HW4:2;
      uint64_t HW5:2;
      uint64_t HW6:2;
      uint64_t HW7:2;
      uint64_t HW8:2;
      uint64_t HW9:2;
      uint64_t HW10:2;
      uint64_t HW11:2;
      uint64_t HW12:2;
      uint64_t HW13:2;
      uint64_t HW14:2;
      uint64_t HW15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWSEL;

};

#define PORT6 (*(volatile struct PORT6_tag *) 0x48028600)

struct PORT7_tag
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS0:1;
      uint64_t PS1:1;
      uint64_t PS2:1;
      uint64_t PS3:1;
      uint64_t PS4:1;
      uint64_t PS5:1;
      uint64_t PS6:1;
      uint64_t PS7:1;
      uint64_t PS8:1;
      uint64_t PS9:1;
      uint64_t PS10:1;
      uint64_t PS11:1;
      uint64_t PS12:1;
      uint64_t PS13:1;
      uint64_t PS14:1;
      uint64_t PS15:1;
      uint64_t PR0:1;
      uint64_t PR1:1;
      uint64_t PR2:1;
      uint64_t PR3:1;
      uint64_t PR4:1;
      uint64_t PR5:1;
      uint64_t PR6:1;
      uint64_t PR7:1;
      uint64_t PR8:1;
      uint64_t PR9:1;
      uint64_t PR10:1;
      uint64_t PR11:1;
      uint64_t PR12:1;
      uint64_t PR13:1;
      uint64_t PR14:1;
      uint64_t PR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OMR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC0:5;
      uint64_t reservedSpace1:3;
      uint64_t PC1:5;
      uint64_t reservedSpace2:3;
      uint64_t PC2:5;
      uint64_t reservedSpace3:3;
      uint64_t PC3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC4:5;
      uint64_t reservedSpace1:3;
      uint64_t PC5:5;
      uint64_t reservedSpace2:3;
      uint64_t PC6:5;
      uint64_t reservedSpace3:3;
      uint64_t PC7:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC8:5;
      uint64_t reservedSpace1:3;
      uint64_t PC9:5;
      uint64_t reservedSpace2:3;
      uint64_t PC10:5;
      uint64_t reservedSpace3:3;
      uint64_t PC11:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR8;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IN;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD0:3;
      uint64_t reservedSpace0:1;
      uint64_t PD1:3;
      uint64_t reservedSpace1:1;
      uint64_t PD2:3;
      uint64_t reservedSpace2:1;
      uint64_t PD3:3;
      uint64_t reservedSpace3:1;
      uint64_t PD4:3;
      uint64_t reservedSpace4:1;
      uint64_t PD5:3;
      uint64_t reservedSpace5:1;
      uint64_t PD6:3;
      uint64_t reservedSpace6:1;
      uint64_t PD7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD8:3;
      uint64_t reservedSpace0:1;
      uint64_t PD9:3;
      uint64_t reservedSpace1:1;
      uint64_t PD10:3;
      uint64_t reservedSpace2:1;
      uint64_t PD11:3;
      uint64_t reservedSpace3:1;
      uint64_t PD12:3;
      uint64_t reservedSpace4:1;
      uint64_t PD13:3;
      uint64_t reservedSpace5:1;
      uint64_t PD14:3;
      uint64_t reservedSpace6:1;
      uint64_t PD15:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR1;

  uint8_t res3[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDIS0:1;
      uint64_t PDIS1:1;
      uint64_t PDIS2:1;
      uint64_t PDIS3:1;
      uint64_t PDIS4:1;
      uint64_t PDIS5:1;
      uint64_t PDIS6:1;
      uint64_t PDIS7:1;
      uint64_t PDIS8:1;
      uint64_t PDIS9:1;
      uint64_t PDIS10:1;
      uint64_t PDIS11:1;
      uint64_t PDIS12:1;
      uint64_t PDIS13:1;
      uint64_t PDIS14:1;
      uint64_t PDIS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDISC;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS0:1;
      uint64_t PPS1:1;
      uint64_t PPS2:1;
      uint64_t PPS3:1;
      uint64_t PPS4:1;
      uint64_t PPS5:1;
      uint64_t PPS6:1;
      uint64_t PPS7:1;
      uint64_t PPS8:1;
      uint64_t PPS9:1;
      uint64_t PPS10:1;
      uint64_t PPS11:1;
      uint64_t PPS12:1;
      uint64_t PPS13:1;
      uint64_t PPS14:1;
      uint64_t PPS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW0:2;
      uint64_t HW1:2;
      uint64_t HW2:2;
      uint64_t HW3:2;
      uint64_t HW4:2;
      uint64_t HW5:2;
      uint64_t HW6:2;
      uint64_t HW7:2;
      uint64_t HW8:2;
      uint64_t HW9:2;
      uint64_t HW10:2;
      uint64_t HW11:2;
      uint64_t HW12:2;
      uint64_t HW13:2;
      uint64_t HW14:2;
      uint64_t HW15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWSEL;

};

#define PORT7 (*(volatile struct PORT7_tag *) 0x48028700)

struct PORT8_tag
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS0:1;
      uint64_t PS1:1;
      uint64_t PS2:1;
      uint64_t PS3:1;
      uint64_t PS4:1;
      uint64_t PS5:1;
      uint64_t PS6:1;
      uint64_t PS7:1;
      uint64_t PS8:1;
      uint64_t PS9:1;
      uint64_t PS10:1;
      uint64_t PS11:1;
      uint64_t PS12:1;
      uint64_t PS13:1;
      uint64_t PS14:1;
      uint64_t PS15:1;
      uint64_t PR0:1;
      uint64_t PR1:1;
      uint64_t PR2:1;
      uint64_t PR3:1;
      uint64_t PR4:1;
      uint64_t PR5:1;
      uint64_t PR6:1;
      uint64_t PR7:1;
      uint64_t PR8:1;
      uint64_t PR9:1;
      uint64_t PR10:1;
      uint64_t PR11:1;
      uint64_t PR12:1;
      uint64_t PR13:1;
      uint64_t PR14:1;
      uint64_t PR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OMR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC0:5;
      uint64_t reservedSpace1:3;
      uint64_t PC1:5;
      uint64_t reservedSpace2:3;
      uint64_t PC2:5;
      uint64_t reservedSpace3:3;
      uint64_t PC3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC4:5;
      uint64_t reservedSpace1:3;
      uint64_t PC5:5;
      uint64_t reservedSpace2:3;
      uint64_t PC6:5;
      uint64_t reservedSpace3:3;
      uint64_t PC7:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC8:5;
      uint64_t reservedSpace1:3;
      uint64_t PC9:5;
      uint64_t reservedSpace2:3;
      uint64_t PC10:5;
      uint64_t reservedSpace3:3;
      uint64_t PC11:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR8;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IN;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD0:3;
      uint64_t reservedSpace0:1;
      uint64_t PD1:3;
      uint64_t reservedSpace1:1;
      uint64_t PD2:3;
      uint64_t reservedSpace2:1;
      uint64_t PD3:3;
      uint64_t reservedSpace3:1;
      uint64_t PD4:3;
      uint64_t reservedSpace4:1;
      uint64_t PD5:3;
      uint64_t reservedSpace5:1;
      uint64_t PD6:3;
      uint64_t reservedSpace6:1;
      uint64_t PD7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD8:3;
      uint64_t reservedSpace0:1;
      uint64_t PD9:3;
      uint64_t reservedSpace1:1;
      uint64_t PD10:3;
      uint64_t reservedSpace2:1;
      uint64_t PD11:3;
      uint64_t reservedSpace3:1;
      uint64_t PD12:3;
      uint64_t reservedSpace4:1;
      uint64_t PD13:3;
      uint64_t reservedSpace5:1;
      uint64_t PD14:3;
      uint64_t reservedSpace6:1;
      uint64_t PD15:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR1;

  uint8_t res3[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDIS0:1;
      uint64_t PDIS1:1;
      uint64_t PDIS2:1;
      uint64_t PDIS3:1;
      uint64_t PDIS4:1;
      uint64_t PDIS5:1;
      uint64_t PDIS6:1;
      uint64_t PDIS7:1;
      uint64_t PDIS8:1;
      uint64_t PDIS9:1;
      uint64_t PDIS10:1;
      uint64_t PDIS11:1;
      uint64_t PDIS12:1;
      uint64_t PDIS13:1;
      uint64_t PDIS14:1;
      uint64_t PDIS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDISC;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS0:1;
      uint64_t PPS1:1;
      uint64_t PPS2:1;
      uint64_t PPS3:1;
      uint64_t PPS4:1;
      uint64_t PPS5:1;
      uint64_t PPS6:1;
      uint64_t PPS7:1;
      uint64_t PPS8:1;
      uint64_t PPS9:1;
      uint64_t PPS10:1;
      uint64_t PPS11:1;
      uint64_t PPS12:1;
      uint64_t PPS13:1;
      uint64_t PPS14:1;
      uint64_t PPS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW0:2;
      uint64_t HW1:2;
      uint64_t HW2:2;
      uint64_t HW3:2;
      uint64_t HW4:2;
      uint64_t HW5:2;
      uint64_t HW6:2;
      uint64_t HW7:2;
      uint64_t HW8:2;
      uint64_t HW9:2;
      uint64_t HW10:2;
      uint64_t HW11:2;
      uint64_t HW12:2;
      uint64_t HW13:2;
      uint64_t HW14:2;
      uint64_t HW15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWSEL;

};

#define PORT8 (*(volatile struct PORT8_tag *) 0x48028800)

struct PORT9_tag
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS0:1;
      uint64_t PS1:1;
      uint64_t PS2:1;
      uint64_t PS3:1;
      uint64_t PS4:1;
      uint64_t PS5:1;
      uint64_t PS6:1;
      uint64_t PS7:1;
      uint64_t PS8:1;
      uint64_t PS9:1;
      uint64_t PS10:1;
      uint64_t PS11:1;
      uint64_t PS12:1;
      uint64_t PS13:1;
      uint64_t PS14:1;
      uint64_t PS15:1;
      uint64_t PR0:1;
      uint64_t PR1:1;
      uint64_t PR2:1;
      uint64_t PR3:1;
      uint64_t PR4:1;
      uint64_t PR5:1;
      uint64_t PR6:1;
      uint64_t PR7:1;
      uint64_t PR8:1;
      uint64_t PR9:1;
      uint64_t PR10:1;
      uint64_t PR11:1;
      uint64_t PR12:1;
      uint64_t PR13:1;
      uint64_t PR14:1;
      uint64_t PR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OMR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC0:5;
      uint64_t reservedSpace1:3;
      uint64_t PC1:5;
      uint64_t reservedSpace2:3;
      uint64_t PC2:5;
      uint64_t reservedSpace3:3;
      uint64_t PC3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC4:5;
      uint64_t reservedSpace1:3;
      uint64_t PC5:5;
      uint64_t reservedSpace2:3;
      uint64_t PC6:5;
      uint64_t reservedSpace3:3;
      uint64_t PC7:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC8:5;
      uint64_t reservedSpace1:3;
      uint64_t PC9:5;
      uint64_t reservedSpace2:3;
      uint64_t PC10:5;
      uint64_t reservedSpace3:3;
      uint64_t PC11:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR8;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IN;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD0:3;
      uint64_t reservedSpace0:1;
      uint64_t PD1:3;
      uint64_t reservedSpace1:1;
      uint64_t PD2:3;
      uint64_t reservedSpace2:1;
      uint64_t PD3:3;
      uint64_t reservedSpace3:1;
      uint64_t PD4:3;
      uint64_t reservedSpace4:1;
      uint64_t PD5:3;
      uint64_t reservedSpace5:1;
      uint64_t PD6:3;
      uint64_t reservedSpace6:1;
      uint64_t PD7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD8:3;
      uint64_t reservedSpace0:1;
      uint64_t PD9:3;
      uint64_t reservedSpace1:1;
      uint64_t PD10:3;
      uint64_t reservedSpace2:1;
      uint64_t PD11:3;
      uint64_t reservedSpace3:1;
      uint64_t PD12:3;
      uint64_t reservedSpace4:1;
      uint64_t PD13:3;
      uint64_t reservedSpace5:1;
      uint64_t PD14:3;
      uint64_t reservedSpace6:1;
      uint64_t PD15:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR1;

  uint8_t res3[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDIS0:1;
      uint64_t PDIS1:1;
      uint64_t PDIS2:1;
      uint64_t PDIS3:1;
      uint64_t PDIS4:1;
      uint64_t PDIS5:1;
      uint64_t PDIS6:1;
      uint64_t PDIS7:1;
      uint64_t PDIS8:1;
      uint64_t PDIS9:1;
      uint64_t PDIS10:1;
      uint64_t PDIS11:1;
      uint64_t PDIS12:1;
      uint64_t PDIS13:1;
      uint64_t PDIS14:1;
      uint64_t PDIS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDISC;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS0:1;
      uint64_t PPS1:1;
      uint64_t PPS2:1;
      uint64_t PPS3:1;
      uint64_t PPS4:1;
      uint64_t PPS5:1;
      uint64_t PPS6:1;
      uint64_t PPS7:1;
      uint64_t PPS8:1;
      uint64_t PPS9:1;
      uint64_t PPS10:1;
      uint64_t PPS11:1;
      uint64_t PPS12:1;
      uint64_t PPS13:1;
      uint64_t PPS14:1;
      uint64_t PPS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW0:2;
      uint64_t HW1:2;
      uint64_t HW2:2;
      uint64_t HW3:2;
      uint64_t HW4:2;
      uint64_t HW5:2;
      uint64_t HW6:2;
      uint64_t HW7:2;
      uint64_t HW8:2;
      uint64_t HW9:2;
      uint64_t HW10:2;
      uint64_t HW11:2;
      uint64_t HW12:2;
      uint64_t HW13:2;
      uint64_t HW14:2;
      uint64_t HW15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWSEL;

};

#define PORT9 (*(volatile struct PORT9_tag *) 0x48028900)

struct PORT14_tag
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS0:1;
      uint64_t PS1:1;
      uint64_t PS2:1;
      uint64_t PS3:1;
      uint64_t PS4:1;
      uint64_t PS5:1;
      uint64_t PS6:1;
      uint64_t PS7:1;
      uint64_t PS8:1;
      uint64_t PS9:1;
      uint64_t PS10:1;
      uint64_t PS11:1;
      uint64_t PS12:1;
      uint64_t PS13:1;
      uint64_t PS14:1;
      uint64_t PS15:1;
      uint64_t PR0:1;
      uint64_t PR1:1;
      uint64_t PR2:1;
      uint64_t PR3:1;
      uint64_t PR4:1;
      uint64_t PR5:1;
      uint64_t PR6:1;
      uint64_t PR7:1;
      uint64_t PR8:1;
      uint64_t PR9:1;
      uint64_t PR10:1;
      uint64_t PR11:1;
      uint64_t PR12:1;
      uint64_t PR13:1;
      uint64_t PR14:1;
      uint64_t PR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OMR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC0:5;
      uint64_t reservedSpace1:3;
      uint64_t PC1:5;
      uint64_t reservedSpace2:3;
      uint64_t PC2:5;
      uint64_t reservedSpace3:3;
      uint64_t PC3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC4:5;
      uint64_t reservedSpace1:3;
      uint64_t PC5:5;
      uint64_t reservedSpace2:3;
      uint64_t PC6:5;
      uint64_t reservedSpace3:3;
      uint64_t PC7:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC8:5;
      uint64_t reservedSpace1:3;
      uint64_t PC9:5;
      uint64_t reservedSpace2:3;
      uint64_t PC10:5;
      uint64_t reservedSpace3:3;
      uint64_t PC11:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC12:5;
      uint64_t reservedSpace1:3;
      uint64_t PC13:5;
      uint64_t reservedSpace2:3;
      uint64_t PC14:5;
      uint64_t reservedSpace3:3;
      uint64_t PC15:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR12;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IN;

  uint8_t res2[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDIS0:1;
      uint64_t PDIS1:1;
      uint64_t PDIS2:1;
      uint64_t PDIS3:1;
      uint64_t PDIS4:1;
      uint64_t PDIS5:1;
      uint64_t PDIS6:1;
      uint64_t PDIS7:1;
      uint64_t PDIS8:1;
      uint64_t PDIS9:1;
      uint64_t reservedSpace0:2;
      uint64_t PDIS12:1;
      uint64_t PDIS13:1;
      uint64_t PDIS14:1;
      uint64_t PDIS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDISC;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS0:1;
      uint64_t PPS1:1;
      uint64_t PPS2:1;
      uint64_t PPS3:1;
      uint64_t PPS4:1;
      uint64_t PPS5:1;
      uint64_t PPS6:1;
      uint64_t PPS7:1;
      uint64_t PPS8:1;
      uint64_t PPS9:1;
      uint64_t PPS10:1;
      uint64_t PPS11:1;
      uint64_t PPS12:1;
      uint64_t PPS13:1;
      uint64_t PPS14:1;
      uint64_t PPS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW0:2;
      uint64_t HW1:2;
      uint64_t HW2:2;
      uint64_t HW3:2;
      uint64_t HW4:2;
      uint64_t HW5:2;
      uint64_t HW6:2;
      uint64_t HW7:2;
      uint64_t HW8:2;
      uint64_t HW9:2;
      uint64_t HW10:2;
      uint64_t HW11:2;
      uint64_t HW12:2;
      uint64_t HW13:2;
      uint64_t HW14:2;
      uint64_t HW15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWSEL;

};

#define PORT14 (*(volatile struct PORT14_tag *) 0x48028e00)

struct PORT15_tag
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS0:1;
      uint64_t PS1:1;
      uint64_t PS2:1;
      uint64_t PS3:1;
      uint64_t PS4:1;
      uint64_t PS5:1;
      uint64_t PS6:1;
      uint64_t PS7:1;
      uint64_t PS8:1;
      uint64_t PS9:1;
      uint64_t PS10:1;
      uint64_t PS11:1;
      uint64_t PS12:1;
      uint64_t PS13:1;
      uint64_t PS14:1;
      uint64_t PS15:1;
      uint64_t PR0:1;
      uint64_t PR1:1;
      uint64_t PR2:1;
      uint64_t PR3:1;
      uint64_t PR4:1;
      uint64_t PR5:1;
      uint64_t PR6:1;
      uint64_t PR7:1;
      uint64_t PR8:1;
      uint64_t PR9:1;
      uint64_t PR10:1;
      uint64_t PR11:1;
      uint64_t PR12:1;
      uint64_t PR13:1;
      uint64_t PR14:1;
      uint64_t PR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OMR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC0:5;
      uint64_t reservedSpace1:3;
      uint64_t PC1:5;
      uint64_t reservedSpace2:3;
      uint64_t PC2:5;
      uint64_t reservedSpace3:3;
      uint64_t PC3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC4:5;
      uint64_t reservedSpace1:3;
      uint64_t PC5:5;
      uint64_t reservedSpace2:3;
      uint64_t PC6:5;
      uint64_t reservedSpace3:3;
      uint64_t PC7:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC8:5;
      uint64_t reservedSpace1:3;
      uint64_t PC9:5;
      uint64_t reservedSpace2:3;
      uint64_t PC10:5;
      uint64_t reservedSpace3:3;
      uint64_t PC11:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PC12:5;
      uint64_t reservedSpace1:3;
      uint64_t PC13:5;
      uint64_t reservedSpace2:3;
      uint64_t PC14:5;
      uint64_t reservedSpace3:3;
      uint64_t PC15:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCR12;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IN;

  uint8_t res2[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PDIS2:1;
      uint64_t PDIS3:1;
      uint64_t PDIS4:1;
      uint64_t PDIS5:1;
      uint64_t PDIS6:1;
      uint64_t PDIS7:1;
      uint64_t PDIS8:1;
      uint64_t PDIS9:1;
      uint64_t reservedSpace1:2;
      uint64_t PDIS12:1;
      uint64_t PDIS13:1;
      uint64_t PDIS14:1;
      uint64_t PDIS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDISC;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS0:1;
      uint64_t PPS1:1;
      uint64_t PPS2:1;
      uint64_t PPS3:1;
      uint64_t PPS4:1;
      uint64_t PPS5:1;
      uint64_t PPS6:1;
      uint64_t PPS7:1;
      uint64_t PPS8:1;
      uint64_t PPS9:1;
      uint64_t PPS10:1;
      uint64_t PPS11:1;
      uint64_t PPS12:1;
      uint64_t PPS13:1;
      uint64_t PPS14:1;
      uint64_t PPS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW0:2;
      uint64_t HW1:2;
      uint64_t HW2:2;
      uint64_t HW3:2;
      uint64_t HW4:2;
      uint64_t HW5:2;
      uint64_t HW6:2;
      uint64_t HW7:2;
      uint64_t HW8:2;
      uint64_t HW9:2;
      uint64_t HW10:2;
      uint64_t HW11:2;
      uint64_t HW12:2;
      uint64_t HW13:2;
      uint64_t HW14:2;
      uint64_t HW15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWSEL;

};

#define PORT15 (*(volatile struct PORT15_tag *) 0x48028f00)

