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

struct SYSCON_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_ICODE:2;
      uint64_t PRI_DCODE:2;
      uint64_t PRI_SYS:2;
      uint64_t PRI_DMA:4;
      uint64_t PRI_ETH:2;
      uint64_t PRI_LCD:2;
      uint64_t PRI_USB0:2;
      uint64_t PRI_USB1:2;
      uint64_t PRI_SDIO:2;
      uint64_t PRI_MCAN1:2;
      uint64_t PRI_MCAN2:2;
      uint64_t PRI_SHA:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBMATPRIO;

  uint8_t res0[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAL:24;
      uint64_t SKEW:1;
      uint64_t NOREF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSTCKCAL;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQM4:6;
      uint64_t reservedSpace0:25;
      uint64_t NMIENM4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NMISRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASYNCAPBCTRL;

  uint8_t res2[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIOPORCAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOPORCAP_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIOPORCAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOPORCAP_1;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIORESCAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIORESCAP_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIORESCAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIORESCAP_1;

  uint8_t res4[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t FLASH_RST:1;
      uint64_t FMC_RST:1;
      uint64_t EEPROM_RST:1;
      uint64_t SPIFI_RST:1;
      uint64_t MUX_RST:1;
      uint64_t reservedSpace1:1;
      uint64_t IOCON_RST:1;
      uint64_t GPIO0_RST:1;
      uint64_t GPIO1_RST:1;
      uint64_t GPIO2_RST:1;
      uint64_t GPIO3_RST:1;
      uint64_t PINT_RST:1;
      uint64_t GINT_RST:1;
      uint64_t DMA0_RST:1;
      uint64_t CRC_RST:1;
      uint64_t WWDT_RST:1;
      uint64_t reservedSpace2:4;
      uint64_t ADC0_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRESETCTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MRT_RST:1;
      uint64_t reservedSpace0:1;
      uint64_t SCT0_RST:1;
      uint64_t reservedSpace1:4;
      uint64_t MCAN0_RST:1;
      uint64_t MCAN1_RST:1;
      uint64_t reservedSpace2:1;
      uint64_t UTICK_RST:1;
      uint64_t FC0_RST:1;
      uint64_t FC1_RST:1;
      uint64_t FC2_RST:1;
      uint64_t FC3_RST:1;
      uint64_t FC4_RST:1;
      uint64_t FC5_RST:1;
      uint64_t FC6_RST:1;
      uint64_t FC7_RST:1;
      uint64_t DMIC_RST:1;
      uint64_t reservedSpace3:2;
      uint64_t CTIMER2_RST:1;
      uint64_t reservedSpace4:2;
      uint64_t USB0D_RST:1;
      uint64_t CTIMER0_RST:1;
      uint64_t CTIMER1_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRESETCTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t LCD_RST:1;
      uint64_t SDIO_RST:1;
      uint64_t USB1H_RST:1;
      uint64_t USB1D_RST:1;
      uint64_t USB1RAM_RST:1;
      uint64_t EMC_RESET:1;
      uint64_t ETH_RST:1;
      uint64_t GPIO4_RST:1;
      uint64_t GPIO5_RST:1;
      uint64_t AES_RST:1;
      uint64_t OTP_RST:1;
      uint64_t RNG_RST:1;
      uint64_t FC8_RST:1;
      uint64_t FC9_RST:1;
      uint64_t USB0HMR_RST:1;
      uint64_t USB0HSL_RST:1;
      uint64_t SHA_RST:1;
      uint64_t SC0_RST:1;
      uint64_t SC1_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRESETCTRL2;

  uint8_t res5[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST_SET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRESETCTRLSET_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST_SET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRESETCTRLSET_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST_SET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRESETCTRLSET_2;

  uint8_t res6[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST_CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRESETCTRLCLR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST_CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRESETCTRLCLR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST_CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRESETCTRLCLR_2;

  uint8_t res7[164];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POR:1;
      uint64_t EXTRST:1;
      uint64_t WDT:1;
      uint64_t BOD:1;
      uint64_t SYSRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSRSTSTAT;

  uint8_t res8[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ROM:1;
      uint64_t reservedSpace1:1;
      uint64_t SRAM1:1;
      uint64_t SRAM2:1;
      uint64_t SRAM3:1;
      uint64_t reservedSpace2:1;
      uint64_t FLASH:1;
      uint64_t FMC_bitfield:1;
      uint64_t EEPROM_bitfield:1;
      uint64_t SPIFI:1;
      uint64_t INPUTMUX:1;
      uint64_t reservedSpace3:1;
      uint64_t IOCON_bitfield:1;
      uint64_t GPIO0:1;
      uint64_t GPIO1:1;
      uint64_t GPIO2:1;
      uint64_t GPIO3:1;
      uint64_t PINT_bitfield:1;
      uint64_t GINT:1;
      uint64_t DMA:1;
      uint64_t CRC:1;
      uint64_t WWDT_bitfield:1;
      uint64_t RTC_bitfield:1;
      uint64_t reservedSpace4:3;
      uint64_t ADC0_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBCLKCTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MRT:1;
      uint64_t RIT_bitfield:1;
      uint64_t SCT0:1;
      uint64_t reservedSpace0:4;
      uint64_t MCAN0:1;
      uint64_t MCAN1:1;
      uint64_t reservedSpace1:1;
      uint64_t UTICK:1;
      uint64_t FLEXCOMM0_bitfield:1;
      uint64_t FLEXCOMM1_bitfield:1;
      uint64_t FLEXCOMM2_bitfield:1;
      uint64_t FLEXCOMM3_bitfield:1;
      uint64_t FLEXCOMM4_bitfield:1;
      uint64_t FLEXCOMM5_bitfield:1;
      uint64_t FLEXCOMM6_bitfield:1;
      uint64_t FLEXCOMM7_bitfield:1;
      uint64_t DMIC:1;
      uint64_t reservedSpace2:2;
      uint64_t CTIMER2_bitfield:1;
      uint64_t reservedSpace3:2;
      uint64_t USB0_bitfield:1;
      uint64_t CTIMER0_bitfield:1;
      uint64_t CTIMER1_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBCLKCTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t LCD_bitfield:1;
      uint64_t SDIO_bitfield:1;
      uint64_t USB1H:1;
      uint64_t USB1D:1;
      uint64_t USB1RAM:1;
      uint64_t EMC_bitfield:1;
      uint64_t ETH:1;
      uint64_t GPIO4:1;
      uint64_t GPIO5:1;
      uint64_t AES:1;
      uint64_t OTP:1;
      uint64_t RNG:1;
      uint64_t FLEXCOMM8_bitfield:1;
      uint64_t FLEXCOMM9_bitfield:1;
      uint64_t USB0HMR:1;
      uint64_t USB0HSL:1;
      uint64_t SHA0:1;
      uint64_t SC0:1;
      uint64_t SC1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBCLKCTRL2;

  uint8_t res9[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_SET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBCLKCTRLSET_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_SET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBCLKCTRLSET_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_SET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBCLKCTRLSET_2;

  uint8_t res10[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBCLKCTRLCLR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBCLKCTRLCLR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBCLKCTRLCLR_2;

  uint8_t res11[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAINCLKSELA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAINCLKSELB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKOUTSELA;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPLLCLKSEL;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDPLLCLKSEL;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFICLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USB0CLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USB1CLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCLKSEL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCLKSEL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCLKSEL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCLKSEL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCLKSEL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCLKSEL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCLKSEL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCLKSEL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCLKSEL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCLKSEL_9;

  uint8_t res15[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCLKCLKSEL;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRGCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMICCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCTCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDIOCLKSEL;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSTICKCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ARMTRCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC0CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1CLKDIV;

  uint8_t res18[104];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKOUTDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FROHFCLKDIV;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFICLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USB0CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USB1CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t MULT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRGCTRL;

  uint8_t res20[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMICCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCDCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCTCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMCCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:21;
      uint64_t RESET:1;
      uint64_t HALT:1;
      uint64_t REQFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDIOCLKDIV;

  uint8_t res21[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FETCHCFG:2;
      uint64_t DATACFG:2;
      uint64_t ACCEL:1;
      uint64_t PREFEN:1;
      uint64_t PREFOVR:1;
      uint64_t reservedSpace0:5;
      uint64_t FLASHTIM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASHCFG;

  uint8_t res22[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AP_FS_DEV_CLK:1;
      uint64_t POL_FS_DEV_CLK:1;
      uint64_t AP_FS_HOST_CLK:1;
      uint64_t POL_FS_HOST_CLK:1;
      uint64_t PU_DISABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USB0CLKCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEV_NEED_CLKST:1;
      uint64_t HOST_NEED_CLKST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USB0CLKSTAT;

  uint8_t res23[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPVAL:14;
      uint64_t reservedSpace0:17;
      uint64_t PROG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FREQMECTRL;

  uint8_t res24[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCLKIO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AP_FS_DEV_CLK:1;
      uint64_t POL_FS_DEV_CLK:1;
      uint64_t AP_FS_HOST_CLK:1;
      uint64_t POL_FS_HOST_CLK:1;
      uint64_t HS_DEV_WAKEUP_N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USB1CLKCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEV_NEED_CLKST:1;
      uint64_t HOST_NEED_CLKST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USB1CLKSTAT;

  uint8_t res25[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMCSC:1;
      uint64_t EMCRD:1;
      uint64_t EMCBC:1;
      uint64_t EMCFBCLKINSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMCSYSCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD_DELAY:5;
      uint64_t reservedSpace0:3;
      uint64_t FBCLK_DELAY:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMCDLYCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CALVALUE:8;
      uint64_t reservedSpace0:6;
      uint64_t START:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMCDLYCAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PHY_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETHPHYSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBD_CTRL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETHSBDCTRL;

  uint8_t res26[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCLK_DRV_PHASE:2;
      uint64_t CCLK_SAMPLE_PHASE:2;
      uint64_t reservedSpace0:3;
      uint64_t PHASE_ACTIVE:1;
      uint64_t reservedSpace1:8;
      uint64_t CCLK_DRV_DELAY:5;
      uint64_t reservedSpace2:2;
      uint64_t CCLK_DRV_DELAY_ACTIVE:1;
      uint64_t CCLK_SAMPLE_DELAY:5;
      uint64_t reservedSpace3:2;
      uint64_t CCLK_SAMPLE_DELAY_ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDIOCLKCTRL;

  uint8_t res27[156];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIM:14;
      uint64_t SEL:1;
      uint64_t reservedSpace0:1;
      uint64_t FREQTRIM:8;
      uint64_t USBCLKADJ:1;
      uint64_t USBMODCHG:1;
      uint64_t reservedSpace1:4;
      uint64_t HSPDCLK:1;
      uint64_t WRTRIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FROCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BYPASS:1;
      uint64_t FREQRANGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSOSCCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVSEL:5;
      uint64_t FREQSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDTOSCCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCOSCCTRL;

  uint8_t res28[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSEL:8;
      uint64_t PSEL:2;
      uint64_t NSEL:2;
      uint64_t DIRECT:1;
      uint64_t BYPASS:1;
      uint64_t BYPASSCCODIV2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPLLCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBPLLSTAT;

  uint8_t res29[92];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELR:4;
      uint64_t SELI:6;
      uint64_t SELP:5;
      uint64_t BYPASS:1;
      uint64_t reservedSpace0:1;
      uint64_t UPLIMOFF:1;
      uint64_t reservedSpace1:1;
      uint64_t DIRECTI:1;
      uint64_t DIRECTO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPLLCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPLLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDEC:10;
      uint64_t NREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPLLNDEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDEC:7;
      uint64_t PREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPLLPDEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDEC:17;
      uint64_t MREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPLLMDEC;

  uint8_t res30[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELR:4;
      uint64_t SELI:6;
      uint64_t SELP:5;
      uint64_t BYPASS:1;
      uint64_t reservedSpace0:1;
      uint64_t UPLIMOFF:1;
      uint64_t reservedSpace1:1;
      uint64_t DIRECTI:1;
      uint64_t DIRECTO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDPLLCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDPLLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDEC:10;
      uint64_t NREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDPLLNDEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDEC:7;
      uint64_t PREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDPLLPDEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDEC:17;
      uint64_t MREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDPLLMDEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTRL:22;
      uint64_t REQ:1;
      uint64_t SEL_EXT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDPLLFRAC;

  uint8_t res31[88];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t PDEN_FRO:1;
      uint64_t reservedSpace1:1;
      uint64_t PDEN_TS:1;
      uint64_t PDEN_BOD_RST:1;
      uint64_t PDEN_BOD_INTR:1;
      uint64_t PDEN_VD2_ANA:1;
      uint64_t PDEN_ADC0:1;
      uint64_t PDEN_EEPROM:2;
      uint64_t PDEN_SRAM0:1;
      uint64_t PDEN_SRAM1:1;
      uint64_t PDEN_SRAM2:1;
      uint64_t PDEN_SRAM3:1;
      uint64_t PDEN_ROM:1;
      uint64_t reservedSpace2:1;
      uint64_t PDEN_VDDA:1;
      uint64_t PDEN_WDT_OSC:1;
      uint64_t PDEN_USB0_PHY:1;
      uint64_t PDEN_SYS_PLL:1;
      uint64_t PDEN_VREFP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDRUNCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDEN_USB1PHY:1;
      uint64_t PDEN_USBPLL:1;
      uint64_t PDEN_AUD_PLL:1;
      uint64_t PDEN_SYSOSC:1;
      uint64_t reservedSpace0:3;
      uint64_t PDEN_RNG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDRUNCFG1;

  uint8_t res32[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD_SET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDRUNCFGSET_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD_SET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDRUNCFGSET_1;

  uint8_t res33[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD_CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDRUNCFGCLR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD_CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDRUNCFGCLR_1;

  uint8_t res34[72];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDT_BOD:1;
      uint64_t DMA:1;
      uint64_t GINT0_bitfield:1;
      uint64_t GINT1_bitfield:1;
      uint64_t PIN_INT0:1;
      uint64_t PIN_INT1:1;
      uint64_t PIN_INT2:1;
      uint64_t PIN_INT3:1;
      uint64_t UTICK:1;
      uint64_t MRT:1;
      uint64_t CTIMER0_bitfield:1;
      uint64_t CTIMER1_bitfield:1;
      uint64_t SCT0:1;
      uint64_t CTIMER3_bitfield:1;
      uint64_t FLEXCOMM0_bitfield:1;
      uint64_t FLEXCOMM1_bitfield:1;
      uint64_t FLEXCOMM2_bitfield:1;
      uint64_t FLEXCOMM3_bitfield:1;
      uint64_t FLEXCOMM4_bitfield:1;
      uint64_t FLEXCOMM5_bitfield:1;
      uint64_t FLEXCOMM6_bitfield:1;
      uint64_t FLEXCOMM7_bitfield:1;
      uint64_t ADC0_SEQA:1;
      uint64_t ADC0_SEQB:1;
      uint64_t ADC0_THCMP:1;
      uint64_t DMIC:1;
      uint64_t HWVAD:1;
      uint64_t USB0_NEEDCLK:1;
      uint64_t USB0_bitfield:1;
      uint64_t RTC_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STARTER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINT4:1;
      uint64_t PINT5:1;
      uint64_t PINT6:1;
      uint64_t PINT7:1;
      uint64_t CTIMER2_bitfield:1;
      uint64_t CTIMER4_bitfield:1;
      uint64_t reservedSpace0:2;
      uint64_t FC8:1;
      uint64_t FC9:1;
      uint64_t reservedSpace1:5;
      uint64_t USB1:1;
      uint64_t USB1_ACT:1;
      uint64_t ENET_INT1:1;
      uint64_t ENET_INT2:1;
      uint64_t ENET_INT0:1;
      uint64_t reservedSpace2:3;
      uint64_t SCI0:1;
      uint64_t SCI1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STARTER1;

  uint8_t res35[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START_SET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STARTERSET_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START_SET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STARTERSET_1;

  uint8_t res36[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START_CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STARTERCLR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START_CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STARTERCLR_1;

  uint8_t res37[184];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FORCEWAKE:1;
      uint64_t FCWAKE:1;
      uint64_t WAKEDMIC:1;
      uint64_t WAKEDMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWWAKE;

  uint8_t res38[2160];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JTAGID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JTAGIDCODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARTID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEVICE_ID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEVICE_ID1;

  uint8_t res39[127044];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BODRSTLEV:2;
      uint64_t BODRSTENA:1;
      uint64_t BODINTLEV:2;
      uint64_t BODINTENA:1;
      uint64_t BODRSTSTAT:1;
      uint64_t BODINTSTAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BODCTRL;

};

#define SYSCON (*(volatile struct SYSCON_tag *) 0x40000010)

struct IOCON_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO07;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO08;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO09;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t reservedSpace1:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t reservedSpace0:2;
      uint64_t I2CSLEW:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t I2CDRIVE:1;
      uint64_t I2CFILTER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t reservedSpace0:2;
      uint64_t I2CSLEW:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t I2CDRIVE:1;
      uint64_t I2CFILTER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t reservedSpace1:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO015;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t reservedSpace1:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO016;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO017;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO018;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO019;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO020;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO021;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO022;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t reservedSpace1:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO023;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO024;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO025;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO026;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO027;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO028;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO029;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO030;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t reservedSpace1:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO031;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t reservedSpace1:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t reservedSpace1:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t reservedSpace1:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO222;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO228;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO230;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO310;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO311;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO312;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO313;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO314;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO315;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO316;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO317;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO318;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO319;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO320;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t reservedSpace1:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO321;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t reservedSpace1:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO322;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t reservedSpace0:2;
      uint64_t I2CSLEW:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t I2CDRIVE:1;
      uint64_t I2CFILTER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO323;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t reservedSpace0:2;
      uint64_t I2CSLEW:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t I2CDRIVE:1;
      uint64_t I2CFILTER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO324;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO325;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO326;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO327;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO328;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO329;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO330;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO331;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO410;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO411;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO412;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO413;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO414;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO415;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO416;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO417;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO418;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO419;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO420;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO421;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO422;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO423;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO424;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO425;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO426;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO427;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO428;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO429;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO430;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t INVERT:1;
      uint64_t DIGIMODE:1;
      uint64_t FILTEROFF:1;
      uint64_t SLEW:1;
      uint64_t OD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO431;

};

#define IOCON (*(volatile struct IOCON_tag *) 0x40001000)

struct GINT0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:1;
      uint64_t COMB:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  uint8_t res0[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_POL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_POL_1;

  uint8_t res1[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_ENA_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_ENA_1;

};

#define GINT0 (*(volatile struct GINT0_tag *) 0x40002000)

struct GINT1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:1;
      uint64_t COMB:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  uint8_t res0[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_POL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_POL_1;

  uint8_t res1[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_ENA_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_ENA_1;

};

#define GINT1 (*(volatile struct GINT1_tag *) 0x40003000)

struct PINT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMODE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENRL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENRL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENRL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENAF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IENF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENAF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIENF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENAF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIENF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RISE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FDET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FALL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSTAT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_PMATCH:1;
      uint64_t ENA_RXEV:1;
      uint64_t reservedSpace0:22;
      uint64_t PMAT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SRC0:3;
      uint64_t SRC1:3;
      uint64_t SRC2:3;
      uint64_t SRC3:3;
      uint64_t SRC4:3;
      uint64_t SRC5:3;
      uint64_t SRC6:3;
      uint64_t SRC7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROD_ENDPTS0:1;
      uint64_t PROD_ENDPTS1:1;
      uint64_t PROD_ENDPTS2:1;
      uint64_t PROD_ENDPTS3:1;
      uint64_t PROD_ENDPTS4:1;
      uint64_t PROD_ENDPTS5:1;
      uint64_t PROD_ENDPTS6:1;
      uint64_t reservedSpace0:1;
      uint64_t CFG0:3;
      uint64_t CFG1:3;
      uint64_t CFG2:3;
      uint64_t CFG3:3;
      uint64_t CFG4:3;
      uint64_t CFG5:3;
      uint64_t CFG6:3;
      uint64_t CFG7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMCFG;

};

#define PINT (*(volatile struct PINT_tag *) 0x40004000)

struct INPUT_MUX_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP_N:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCT0_INMUX_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP_N:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCT0_INMUX_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP_N:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCT0_INMUX_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP_N:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCT0_INMUX_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP_N:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCT0_INMUX_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP_N:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCT0_INMUX_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP_N:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCT0_INMUX_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP_N:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCT0_INMUX_7;

  uint8_t res0[160];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTPIN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINTSEL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTPIN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINTSEL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTPIN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINTSEL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTPIN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINTSEL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTPIN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINTSEL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTPIN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINTSEL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTPIN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINTSEL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTPIN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINTSEL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ITRIG_INMUX_29;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_OTRIG_INMUX_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_OTRIG_INMUX_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_OTRIG_INMUX_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_OTRIG_INMUX_3;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKIN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FREQMEAS_REF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKIN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FREQMEAS_TARGET;

};

#define INPUT_MUX (*(volatile struct INPUT_MUX_tag *) 0x40005000)

struct CTIMER0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0INT:1;
      uint64_t MR1INT:1;
      uint64_t MR2INT:1;
      uint64_t MR3INT:1;
      uint64_t CR0INT:1;
      uint64_t CR1INT:1;
      uint64_t CR2INT:1;
      uint64_t CR3INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t CRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0I:1;
      uint64_t MR0R:1;
      uint64_t MR0S:1;
      uint64_t MR1I:1;
      uint64_t MR1R:1;
      uint64_t MR1S:1;
      uint64_t MR2I:1;
      uint64_t MR2R:1;
      uint64_t MR2S:1;
      uint64_t MR3I:1;
      uint64_t MR3R:1;
      uint64_t MR3S:1;
      uint64_t reservedSpace0:12;
      uint64_t MR0RL:1;
      uint64_t MR1RL:1;
      uint64_t MR2RL:1;
      uint64_t MR3RL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP0RE:1;
      uint64_t CAP0FE:1;
      uint64_t CAP0I:1;
      uint64_t CAP1RE:1;
      uint64_t CAP1FE:1;
      uint64_t CAP1I:1;
      uint64_t CAP2RE:1;
      uint64_t CAP2FE:1;
      uint64_t CAP2I:1;
      uint64_t CAP3RE:1;
      uint64_t CAP3FE:1;
      uint64_t CAP3I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM0:1;
      uint64_t EM1:1;
      uint64_t EM2:1;
      uint64_t EM3:1;
      uint64_t EMC0:2;
      uint64_t EMC1:2;
      uint64_t EMC2:2;
      uint64_t EMC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMR;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTMODE:2;
      uint64_t CINSEL:2;
      uint64_t ENCC:1;
      uint64_t SELCC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWMEN0:1;
      uint64_t PWMEN1:1;
      uint64_t PWMEN2:1;
      uint64_t PWMEN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_3;

};

#define CTIMER0 (*(volatile struct CTIMER0_tag *) 0x40008000)

struct CTIMER1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0INT:1;
      uint64_t MR1INT:1;
      uint64_t MR2INT:1;
      uint64_t MR3INT:1;
      uint64_t CR0INT:1;
      uint64_t CR1INT:1;
      uint64_t CR2INT:1;
      uint64_t CR3INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t CRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0I:1;
      uint64_t MR0R:1;
      uint64_t MR0S:1;
      uint64_t MR1I:1;
      uint64_t MR1R:1;
      uint64_t MR1S:1;
      uint64_t MR2I:1;
      uint64_t MR2R:1;
      uint64_t MR2S:1;
      uint64_t MR3I:1;
      uint64_t MR3R:1;
      uint64_t MR3S:1;
      uint64_t reservedSpace0:12;
      uint64_t MR0RL:1;
      uint64_t MR1RL:1;
      uint64_t MR2RL:1;
      uint64_t MR3RL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP0RE:1;
      uint64_t CAP0FE:1;
      uint64_t CAP0I:1;
      uint64_t CAP1RE:1;
      uint64_t CAP1FE:1;
      uint64_t CAP1I:1;
      uint64_t CAP2RE:1;
      uint64_t CAP2FE:1;
      uint64_t CAP2I:1;
      uint64_t CAP3RE:1;
      uint64_t CAP3FE:1;
      uint64_t CAP3I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM0:1;
      uint64_t EM1:1;
      uint64_t EM2:1;
      uint64_t EM3:1;
      uint64_t EMC0:2;
      uint64_t EMC1:2;
      uint64_t EMC2:2;
      uint64_t EMC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMR;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTMODE:2;
      uint64_t CINSEL:2;
      uint64_t ENCC:1;
      uint64_t SELCC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWMEN0:1;
      uint64_t PWMEN1:1;
      uint64_t PWMEN2:1;
      uint64_t PWMEN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_3;

};

#define CTIMER1 (*(volatile struct CTIMER1_tag *) 0x40009000)

struct WWDT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDEN:1;
      uint64_t WDRESET:1;
      uint64_t WDTOF:1;
      uint64_t WDINT:1;
      uint64_t WDPROTECT:1;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TV;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WARNINT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WARNINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WINDOW:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WINDOW;

};

#define WWDT (*(volatile struct WWDT_tag *) 0x4000c000)

struct MRT0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOC:4;
      uint64_t NOB:5;
      uint64_t reservedSpace0:22;
      uint64_t MULTITASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CHAN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDLE_CH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GFLAG0:1;
      uint64_t GFLAG1:1;
      uint64_t GFLAG2:1;
      uint64_t GFLAG3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_FLAG;

};

#define MRT0 (*(volatile struct MRT0_tag *) 0x4000d0f0)

struct MRT0_CHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IVALUE:24;
      uint64_t reservedSpace0:7;
      uint64_t LOAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTEN:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTFLAG:1;
      uint64_t RUN:1;
      uint64_t INUSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

};

#define MRT0_CHANNEL_0 (*(volatile struct MRT0_CHANNEL_0_tag *) 0x4000d000)

struct MRT0_CHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IVALUE:24;
      uint64_t reservedSpace0:7;
      uint64_t LOAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTEN:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTFLAG:1;
      uint64_t RUN:1;
      uint64_t INUSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

};

#define MRT0_CHANNEL_1 (*(volatile struct MRT0_CHANNEL_1_tag *) 0x4000d010)

struct MRT0_CHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IVALUE:24;
      uint64_t reservedSpace0:7;
      uint64_t LOAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTEN:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTFLAG:1;
      uint64_t RUN:1;
      uint64_t INUSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

};

#define MRT0_CHANNEL_2 (*(volatile struct MRT0_CHANNEL_2_tag *) 0x4000d020)

struct MRT0_CHANNEL_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IVALUE:24;
      uint64_t reservedSpace0:7;
      uint64_t LOAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTEN:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTFLAG:1;
      uint64_t RUN:1;
      uint64_t INUSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

};

#define MRT0_CHANNEL_3 (*(volatile struct MRT0_CHANNEL_3_tag *) 0x4000d030)

struct UTICK0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DELAYVAL:31;
      uint64_t REPEAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTR:1;
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPEN0:1;
      uint64_t CAPEN1:1;
      uint64_t CAPEN2:1;
      uint64_t CAPEN3:1;
      uint64_t reservedSpace0:4;
      uint64_t CAPPOL0:1;
      uint64_t CAPPOL1:1;
      uint64_t CAPPOL2:1;
      uint64_t CAPPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPCLR0:1;
      uint64_t CAPCLR1:1;
      uint64_t CAPCLR2:1;
      uint64_t CAPCLR3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAPCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP_VALUE:31;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP_VALUE:31;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP_VALUE:31;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP_VALUE:31;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_3;

};

#define UTICK0 (*(volatile struct UTICK0_tag *) 0x4000e000)

struct EEPROM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPHASE2:8;
      uint64_t RPHASE1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RWSTATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTOPROG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUTOPROG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHASE3:8;
      uint64_t PHASE2:8;
      uint64_t PHASE1:8;
      uint64_t reservedSpace0:7;
      uint64_t LCK_PARWEP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WSTATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKDIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRDWN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRDWN;

  uint8_t res1[4028];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PROG_CLR_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PROG_SET_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t END_OF_PROG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t EE_PROG_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PROG_CLR_ST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PROG_SET_ST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATSET;

};

#define EEPROM (*(volatile struct EEPROM_tag *) 0x40014000)

struct OTPC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AESKEY_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AESKEY_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AESKEY_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AESKEY_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AESKEY_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AESKEY_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AESKEY_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AESKEY_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CRP_MASS_ERASE_DISABLE:1;
      uint64_t IAP_PROTECTION_ENABLE:1;
      uint64_t CRP_ISP_DISABLE_PIN:1;
      uint64_t CRP_ISP_DISABLE_IAP:1;
      uint64_t reservedSpace1:1;
      uint64_t CRP_ALLOW_ZERO:1;
      uint64_t reservedSpace2:21;
      uint64_t JTAG_DISABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t NXP_CERTIFICATE:1;
      uint64_t OTP_PUBLIC_KEY:1;
      uint64_t SIGNATURE_PREFORMAT:1;
      uint64_t reservedSpace1:10;
      uint64_t PUBLIC_KEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGNEDIMAGE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USER0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USER1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USER1;

};

#define OTPC (*(volatile struct OTPC_tag *) 0x40015010)

struct CTIMER2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0INT:1;
      uint64_t MR1INT:1;
      uint64_t MR2INT:1;
      uint64_t MR3INT:1;
      uint64_t CR0INT:1;
      uint64_t CR1INT:1;
      uint64_t CR2INT:1;
      uint64_t CR3INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t CRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0I:1;
      uint64_t MR0R:1;
      uint64_t MR0S:1;
      uint64_t MR1I:1;
      uint64_t MR1R:1;
      uint64_t MR1S:1;
      uint64_t MR2I:1;
      uint64_t MR2R:1;
      uint64_t MR2S:1;
      uint64_t MR3I:1;
      uint64_t MR3R:1;
      uint64_t MR3S:1;
      uint64_t reservedSpace0:12;
      uint64_t MR0RL:1;
      uint64_t MR1RL:1;
      uint64_t MR2RL:1;
      uint64_t MR3RL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP0RE:1;
      uint64_t CAP0FE:1;
      uint64_t CAP0I:1;
      uint64_t CAP1RE:1;
      uint64_t CAP1FE:1;
      uint64_t CAP1I:1;
      uint64_t CAP2RE:1;
      uint64_t CAP2FE:1;
      uint64_t CAP2I:1;
      uint64_t CAP3RE:1;
      uint64_t CAP3FE:1;
      uint64_t CAP3I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM0:1;
      uint64_t EM1:1;
      uint64_t EM2:1;
      uint64_t EM3:1;
      uint64_t EMC0:2;
      uint64_t EMC1:2;
      uint64_t EMC2:2;
      uint64_t EMC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMR;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTMODE:2;
      uint64_t CINSEL:2;
      uint64_t ENCC:1;
      uint64_t SELCC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWMEN0:1;
      uint64_t PWMEN1:1;
      uint64_t PWMEN2:1;
      uint64_t PWMEN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_3;

};

#define CTIMER2 (*(volatile struct CTIMER2_tag *) 0x40028000)

struct RTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRESET:1;
      uint64_t reservedSpace0:1;
      uint64_t ALARM1HZ:1;
      uint64_t WAKE1KHZ:1;
      uint64_t ALARMDPD_EN:1;
      uint64_t WAKEDPD_EN:1;
      uint64_t RTC1KHZ_EN:1;
      uint64_t RTC_EN:1;
      uint64_t RTC_OSC_PD:1;
      uint64_t RTC_OSC_BYPASS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COUNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WAKE;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPREG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPREG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPREG_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPREG_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPREG_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPREG_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPREG_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPREG_7;

};

#define RTC (*(volatile struct RTC_tag *) 0x4002c000)

struct RIT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RICOMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIMASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RITINT:1;
      uint64_t RITENCLR:1;
      uint64_t RITENBR:1;
      uint64_t RITEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RICOUNTER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COUNTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RICOMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPVAL_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIMASK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_H;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RICOUNTER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COUNTER_H;

};

#define RIT (*(volatile struct RIT_tag *) 0x4002d000)

struct FMC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t FS_RD0:1;
      uint64_t FS_RD1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCTR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITSTATES:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBWST;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMSSTART;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STOP:17;
      uint64_t SIG_START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMSSTOP;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMSW_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMSW_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMSW_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMSW_3;

  uint8_t res3[4004];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SIG_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMSTAT;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SIG_DONE_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMSTATCLR;

};

#define FMC (*(volatile struct FMC_tag *) 0x40034000)

struct ASYNC_SYSCON_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t CTIMER3_bitfield:1;
      uint64_t CTIMER4_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASYNCPRESETCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARST_SET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASYNCPRESETCTRLSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARST_CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASYNCPRESETCTRLCLR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t CTIMER3_bitfield:1;
      uint64_t CTIMER4_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASYNCAPBCLKCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACLK_SET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASYNCAPBCLKCTRLSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACLK_CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASYNCAPBCLKCTRLCLR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASYNCAPBCLKSELA;

};

#define ASYNC_SYSCON (*(volatile struct ASYNC_SYSCON_tag *) 0x40040000)

struct CTIMER3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0INT:1;
      uint64_t MR1INT:1;
      uint64_t MR2INT:1;
      uint64_t MR3INT:1;
      uint64_t CR0INT:1;
      uint64_t CR1INT:1;
      uint64_t CR2INT:1;
      uint64_t CR3INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t CRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0I:1;
      uint64_t MR0R:1;
      uint64_t MR0S:1;
      uint64_t MR1I:1;
      uint64_t MR1R:1;
      uint64_t MR1S:1;
      uint64_t MR2I:1;
      uint64_t MR2R:1;
      uint64_t MR2S:1;
      uint64_t MR3I:1;
      uint64_t MR3R:1;
      uint64_t MR3S:1;
      uint64_t reservedSpace0:12;
      uint64_t MR0RL:1;
      uint64_t MR1RL:1;
      uint64_t MR2RL:1;
      uint64_t MR3RL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP0RE:1;
      uint64_t CAP0FE:1;
      uint64_t CAP0I:1;
      uint64_t CAP1RE:1;
      uint64_t CAP1FE:1;
      uint64_t CAP1I:1;
      uint64_t CAP2RE:1;
      uint64_t CAP2FE:1;
      uint64_t CAP2I:1;
      uint64_t CAP3RE:1;
      uint64_t CAP3FE:1;
      uint64_t CAP3I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM0:1;
      uint64_t EM1:1;
      uint64_t EM2:1;
      uint64_t EM3:1;
      uint64_t EMC0:2;
      uint64_t EMC1:2;
      uint64_t EMC2:2;
      uint64_t EMC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMR;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTMODE:2;
      uint64_t CINSEL:2;
      uint64_t ENCC:1;
      uint64_t SELCC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWMEN0:1;
      uint64_t PWMEN1:1;
      uint64_t PWMEN2:1;
      uint64_t PWMEN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_3;

};

#define CTIMER3 (*(volatile struct CTIMER3_tag *) 0x40048000)

struct CTIMER4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0INT:1;
      uint64_t MR1INT:1;
      uint64_t MR2INT:1;
      uint64_t MR3INT:1;
      uint64_t CR0INT:1;
      uint64_t CR1INT:1;
      uint64_t CR2INT:1;
      uint64_t CR3INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t CRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0I:1;
      uint64_t MR0R:1;
      uint64_t MR0S:1;
      uint64_t MR1I:1;
      uint64_t MR1R:1;
      uint64_t MR1S:1;
      uint64_t MR2I:1;
      uint64_t MR2R:1;
      uint64_t MR2S:1;
      uint64_t MR3I:1;
      uint64_t MR3R:1;
      uint64_t MR3S:1;
      uint64_t reservedSpace0:12;
      uint64_t MR0RL:1;
      uint64_t MR1RL:1;
      uint64_t MR2RL:1;
      uint64_t MR3RL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP0RE:1;
      uint64_t CAP0FE:1;
      uint64_t CAP0I:1;
      uint64_t CAP1RE:1;
      uint64_t CAP1FE:1;
      uint64_t CAP1I:1;
      uint64_t CAP2RE:1;
      uint64_t CAP2FE:1;
      uint64_t CAP2I:1;
      uint64_t CAP3RE:1;
      uint64_t CAP3FE:1;
      uint64_t CAP3I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM0:1;
      uint64_t EM1:1;
      uint64_t EM2:1;
      uint64_t EM3:1;
      uint64_t EMC0:2;
      uint64_t EMC1:2;
      uint64_t EMC2:2;
      uint64_t EMC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMR;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTMODE:2;
      uint64_t CINSEL:2;
      uint64_t ENCC:1;
      uint64_t SELCC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWMEN0:1;
      uint64_t PWMEN1:1;
      uint64_t PWMEN2:1;
      uint64_t PWMEN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR_3;

};

#define CTIMER4 (*(volatile struct CTIMER4_tag *) 0x40049000)

struct SPIFI0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMEOUT:16;
      uint64_t CSHIGH:4;
      uint64_t reservedSpace0:1;
      uint64_t D_PRFTCH_DIS:1;
      uint64_t INTEN:1;
      uint64_t MODE3:1;
      uint64_t reservedSpace1:3;
      uint64_t PRFTCH_DIS:1;
      uint64_t DUAL:1;
      uint64_t RFCLK:1;
      uint64_t FBCLK:1;
      uint64_t DMAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATALEN:14;
      uint64_t POLL:1;
      uint64_t DOUT:1;
      uint64_t INTLEN:3;
      uint64_t FIELDFORM:2;
      uint64_t FRAMEFORM:3;
      uint64_t OPCODE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLIMIT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLIMIT;

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
      uint64_t reservedSpace0:14;
      uint64_t POLL:1;
      uint64_t DOUT:1;
      uint64_t INTLEN:3;
      uint64_t FIELDFORM:2;
      uint64_t FRAMEFORM:3;
      uint64_t OPCODE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCINIT:1;
      uint64_t CMD:1;
      uint64_t reservedSpace0:2;
      uint64_t RESET:1;
      uint64_t INTRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

};

#define SPIFI0 (*(volatile struct SPIFI0_tag *) 0x40080000)

struct EMC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t E:1;
      uint64_t M:1;
      uint64_t L:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:1;
      uint64_t S:1;
      uint64_t SA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:7;
      uint64_t CLKR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG;

  uint8_t res0[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CE:1;
      uint64_t CS:1;
      uint64_t SR:1;
      uint64_t reservedSpace0:2;
      uint64_t MMC:1;
      uint64_t reservedSpace1:1;
      uint64_t I:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICCONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REFRESH:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICREFRESH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICREADCONFIG;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRAS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICRAS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSREX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICSREX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICAPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICDAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TWR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRFC:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICRFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXSR:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICXSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRRD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICRRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMRD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICMRD;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTENDEDWAIT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICEXTENDEDWAIT;

};

#define EMC (*(volatile struct EMC_tag *) 0x40081000)

struct EMC_DYNAMIC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t MD:2;
      uint64_t reservedSpace1:2;
      uint64_t AM0:6;
      uint64_t reservedSpace2:1;
      uint64_t AM1:1;
      uint64_t reservedSpace3:4;
      uint64_t B:1;
      uint64_t P:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICCONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAS:2;
      uint64_t reservedSpace0:6;
      uint64_t CAS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICRASCAS;

};

#define EMC_DYNAMIC_0 (*(volatile struct EMC_DYNAMIC_0_tag *) 0x40081100)

struct EMC_DYNAMIC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t MD:2;
      uint64_t reservedSpace1:2;
      uint64_t AM0:6;
      uint64_t reservedSpace2:1;
      uint64_t AM1:1;
      uint64_t reservedSpace3:4;
      uint64_t B:1;
      uint64_t P:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICCONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAS:2;
      uint64_t reservedSpace0:6;
      uint64_t CAS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICRASCAS;

};

#define EMC_DYNAMIC_1 (*(volatile struct EMC_DYNAMIC_1_tag *) 0x40081120)

struct EMC_DYNAMIC_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t MD:2;
      uint64_t reservedSpace1:2;
      uint64_t AM0:6;
      uint64_t reservedSpace2:1;
      uint64_t AM1:1;
      uint64_t reservedSpace3:4;
      uint64_t B:1;
      uint64_t P:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICCONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAS:2;
      uint64_t reservedSpace0:6;
      uint64_t CAS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICRASCAS;

};

#define EMC_DYNAMIC_2 (*(volatile struct EMC_DYNAMIC_2_tag *) 0x40081140)

struct EMC_DYNAMIC_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t MD:2;
      uint64_t reservedSpace1:2;
      uint64_t AM0:6;
      uint64_t reservedSpace2:1;
      uint64_t AM1:1;
      uint64_t reservedSpace3:4;
      uint64_t B:1;
      uint64_t P:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICCONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAS:2;
      uint64_t reservedSpace0:6;
      uint64_t CAS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICRASCAS;

};

#define EMC_DYNAMIC_3 (*(volatile struct EMC_DYNAMIC_3_tag *) 0x40081160)

struct EMC_STATIC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MW:2;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:2;
      uint64_t PC:1;
      uint64_t PB:1;
      uint64_t EW:1;
      uint64_t reservedSpace2:10;
      uint64_t B:1;
      uint64_t P:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICCONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITWEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITWEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITOEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITOEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITRD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITPAGE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITPAGE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITWR:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITTURN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITTURN;

};

#define EMC_STATIC_0 (*(volatile struct EMC_STATIC_0_tag *) 0x40081200)

struct EMC_STATIC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MW:2;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:2;
      uint64_t PC:1;
      uint64_t PB:1;
      uint64_t EW:1;
      uint64_t reservedSpace2:10;
      uint64_t B:1;
      uint64_t P:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICCONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITWEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITWEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITOEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITOEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITRD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITPAGE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITPAGE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITWR:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITTURN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITTURN;

};

#define EMC_STATIC_1 (*(volatile struct EMC_STATIC_1_tag *) 0x40081220)

struct EMC_STATIC_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MW:2;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:2;
      uint64_t PC:1;
      uint64_t PB:1;
      uint64_t EW:1;
      uint64_t reservedSpace2:10;
      uint64_t B:1;
      uint64_t P:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICCONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITWEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITWEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITOEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITOEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITRD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITPAGE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITPAGE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITWR:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITTURN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITTURN;

};

#define EMC_STATIC_2 (*(volatile struct EMC_STATIC_2_tag *) 0x40081240)

struct EMC_STATIC_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MW:2;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:2;
      uint64_t PC:1;
      uint64_t PB:1;
      uint64_t EW:1;
      uint64_t reservedSpace2:10;
      uint64_t B:1;
      uint64_t P:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICCONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITWEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITWEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITOEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITOEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITRD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITPAGE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITPAGE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITWR:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITTURN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITTURN;

};

#define EMC_STATIC_3 (*(volatile struct EMC_STATIC_3_tag *) 0x40081260)

struct DMA0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ACTIVEINT:1;
      uint64_t ACTIVEERRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t OFFSET:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRAMBASE;

  uint8_t res0[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENABLESET0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENABLECLR0;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACTIVE0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BSY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUSY0;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRINT0;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTEN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET0;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR0;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTA0;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTB0;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETVALID0;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETTRIG0;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ABORTCTRL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ABORT0;

};

#define DMA0 (*(volatile struct DMA0_tag *) 0x40082000)

struct DMA0_CHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_0 (*(volatile struct DMA0_CHANNEL_0_tag *) 0x40082400)

struct DMA0_CHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_1 (*(volatile struct DMA0_CHANNEL_1_tag *) 0x40082410)

struct DMA0_CHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_2 (*(volatile struct DMA0_CHANNEL_2_tag *) 0x40082420)

struct DMA0_CHANNEL_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_3 (*(volatile struct DMA0_CHANNEL_3_tag *) 0x40082430)

struct DMA0_CHANNEL_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_4 (*(volatile struct DMA0_CHANNEL_4_tag *) 0x40082440)

struct DMA0_CHANNEL_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_5 (*(volatile struct DMA0_CHANNEL_5_tag *) 0x40082450)

struct DMA0_CHANNEL_6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_6 (*(volatile struct DMA0_CHANNEL_6_tag *) 0x40082460)

struct DMA0_CHANNEL_7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_7 (*(volatile struct DMA0_CHANNEL_7_tag *) 0x40082470)

struct DMA0_CHANNEL_8_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_8 (*(volatile struct DMA0_CHANNEL_8_tag *) 0x40082480)

struct DMA0_CHANNEL_9_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_9 (*(volatile struct DMA0_CHANNEL_9_tag *) 0x40082490)

struct DMA0_CHANNEL_10_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_10 (*(volatile struct DMA0_CHANNEL_10_tag *) 0x400824a0)

struct DMA0_CHANNEL_11_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_11 (*(volatile struct DMA0_CHANNEL_11_tag *) 0x400824b0)

struct DMA0_CHANNEL_12_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_12 (*(volatile struct DMA0_CHANNEL_12_tag *) 0x400824c0)

struct DMA0_CHANNEL_13_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_13 (*(volatile struct DMA0_CHANNEL_13_tag *) 0x400824d0)

struct DMA0_CHANNEL_14_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_14 (*(volatile struct DMA0_CHANNEL_14_tag *) 0x400824e0)

struct DMA0_CHANNEL_15_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_15 (*(volatile struct DMA0_CHANNEL_15_tag *) 0x400824f0)

struct DMA0_CHANNEL_16_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_16 (*(volatile struct DMA0_CHANNEL_16_tag *) 0x40082500)

struct DMA0_CHANNEL_17_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_17 (*(volatile struct DMA0_CHANNEL_17_tag *) 0x40082510)

struct DMA0_CHANNEL_18_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_18 (*(volatile struct DMA0_CHANNEL_18_tag *) 0x40082520)

struct DMA0_CHANNEL_19_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_19 (*(volatile struct DMA0_CHANNEL_19_tag *) 0x40082530)

struct DMA0_CHANNEL_20_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_20 (*(volatile struct DMA0_CHANNEL_20_tag *) 0x40082540)

struct DMA0_CHANNEL_21_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_21 (*(volatile struct DMA0_CHANNEL_21_tag *) 0x40082550)

struct DMA0_CHANNEL_22_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_22 (*(volatile struct DMA0_CHANNEL_22_tag *) 0x40082560)

struct DMA0_CHANNEL_23_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_23 (*(volatile struct DMA0_CHANNEL_23_tag *) 0x40082570)

struct DMA0_CHANNEL_24_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_24 (*(volatile struct DMA0_CHANNEL_24_tag *) 0x40082580)

struct DMA0_CHANNEL_25_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_25 (*(volatile struct DMA0_CHANNEL_25_tag *) 0x40082590)

struct DMA0_CHANNEL_26_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_26 (*(volatile struct DMA0_CHANNEL_26_tag *) 0x400825a0)

struct DMA0_CHANNEL_27_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_27 (*(volatile struct DMA0_CHANNEL_27_tag *) 0x400825b0)

struct DMA0_CHANNEL_28_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_28 (*(volatile struct DMA0_CHANNEL_28_tag *) 0x400825c0)

struct DMA0_CHANNEL_29_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHREQEN:1;
      uint64_t HWTRIGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TRIGPOL:1;
      uint64_t TRIGTYPE:1;
      uint64_t TRIGBURST:1;
      uint64_t reservedSpace1:1;
      uint64_t BURSTPOWER:4;
      uint64_t reservedSpace2:2;
      uint64_t SRCBURSTWRAP:1;
      uint64_t DSTBURSTWRAP:1;
      uint64_t CHPRIORITY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDPENDING:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFGVALID:1;
      uint64_t RELOAD:1;
      uint64_t SWTRIG:1;
      uint64_t CLRTRIG:1;
      uint64_t SETINTA:1;
      uint64_t SETINTB:1;
      uint64_t reservedSpace0:2;
      uint64_t WIDTH:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINC:2;
      uint64_t DSTINC:2;
      uint64_t XFERCOUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XFERCFG;

};

#define DMA0_CHANNEL_29 (*(volatile struct DMA0_CHANNEL_29_tag *) 0x400825d0)

struct LCD_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PPL:6;
      uint64_t HSW:8;
      uint64_t HFP:8;
      uint64_t HBP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPP:10;
      uint64_t VSW:6;
      uint64_t VFP:8;
      uint64_t VBP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCD_LO:5;
      uint64_t reservedSpace0:1;
      uint64_t ACB:5;
      uint64_t IVS:1;
      uint64_t IHS:1;
      uint64_t IPC:1;
      uint64_t IOE:1;
      uint64_t reservedSpace1:1;
      uint64_t CPL:10;
      uint64_t BCD:1;
      uint64_t PCD_HI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LED:7;
      uint64_t reservedSpace0:9;
      uint64_t LEE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t LCDUPBASE:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UPBASE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t LCDLPBASE:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPBASE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCDEN:1;
      uint64_t LCDBPP:3;
      uint64_t LCDBW:1;
      uint64_t LCDTFT:1;
      uint64_t LCDMONO8:1;
      uint64_t LCDDUAL:1;
      uint64_t BGR:1;
      uint64_t BEBO:1;
      uint64_t BEPO:1;
      uint64_t LCDPWR:1;
      uint64_t LCDVCOMP:2;
      uint64_t reservedSpace0:2;
      uint64_t WATERMARK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t FUFIM:1;
      uint64_t LNBUIM:1;
      uint64_t VCOMPIM:1;
      uint64_t BERIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t FUFRIS:1;
      uint64_t LNBURIS:1;
      uint64_t VCOMPRIS:1;
      uint64_t BERRAW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTRAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t FUFMIS:1;
      uint64_t LNBUMIS:1;
      uint64_t VCOMPMIS:1;
      uint64_t BERMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t FUFIC:1;
      uint64_t LNBUIC:1;
      uint64_t VCOMPIC:1;
      uint64_t BERIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCDUPCURR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UPCURR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCDLPCURR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPCURR;

  uint8_t res0[460];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_127;

  uint8_t res1[1024];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_174;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_176;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_184;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_185;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_188;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_189;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_190;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_192;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_198;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_199;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_200;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_202;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_203;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_204;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_205;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_206;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_207;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_208;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_209;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_222;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_228;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_230;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_232;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_233;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_234;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_235;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_236;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_237;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_238;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_239;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_240;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_241;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_242;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_243;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_244;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_245;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_246;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_247;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_248;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_249;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_250;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_251;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_252;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_253;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_254;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_255;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSRON:1;
      uint64_t reservedSpace0:3;
      uint64_t CRSRNUM1_0:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSRSIZE:1;
      uint64_t FRAMESYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RED:8;
      uint64_t GREEN:8;
      uint64_t BLUE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_PAL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RED:8;
      uint64_t GREEN:8;
      uint64_t BLUE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_PAL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSRX:10;
      uint64_t reservedSpace0:6;
      uint64_t CRSRY:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_XY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSRCLIPX:6;
      uint64_t reservedSpace0:2;
      uint64_t CRSRCLIPY:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_CLIP;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSRIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_INTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSRIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_INTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSRRIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_INTRAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSRMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_INTSTAT;

};

#define LCD (*(volatile struct LCD_tag *) 0x40083000)

struct USB0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEV_ADDR:7;
      uint64_t DEV_EN:1;
      uint64_t SETUP:1;
      uint64_t FORCE_NEEDCLK:1;
      uint64_t reservedSpace0:1;
      uint64_t LPM_SUP:1;
      uint64_t INTONNAK_AO:1;
      uint64_t INTONNAK_AI:1;
      uint64_t INTONNAK_CO:1;
      uint64_t INTONNAK_CI:1;
      uint64_t DCON:1;
      uint64_t DSUS:1;
      uint64_t reservedSpace1:1;
      uint64_t LPM_SUS:1;
      uint64_t LPM_REWP:1;
      uint64_t reservedSpace2:3;
      uint64_t DCON_C:1;
      uint64_t DSUS_C:1;
      uint64_t DRES_C:1;
      uint64_t reservedSpace3:1;
      uint64_t VBUSDEBOUNCED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEVCMDSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAME_NR:11;
      uint64_t ERR_CODE:4;
      uint64_t reservedSpace0:1;
      uint64_t MINREV:8;
      uint64_t MAJREV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t EP_LIST:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPLISTSTART;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:22;
      uint64_t DA_BUF:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATABUFSTART;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HIRD_HW:4;
      uint64_t HIRD_SW:4;
      uint64_t DATA_PENDING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SKIP:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPSKIP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t BUF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPINUSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t BUF_SB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPBUFCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EP0OUT:1;
      uint64_t EP0IN:1;
      uint64_t EP1OUT:1;
      uint64_t EP1IN:1;
      uint64_t EP2OUT:1;
      uint64_t EP2IN:1;
      uint64_t EP3OUT:1;
      uint64_t EP3IN:1;
      uint64_t EP4OUT:1;
      uint64_t EP4IN:1;
      uint64_t reservedSpace0:20;
      uint64_t FRAME_INT:1;
      uint64_t DEV_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EP_INT_EN:10;
      uint64_t reservedSpace0:20;
      uint64_t FRAME_INT_EN:1;
      uint64_t DEV_INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EP_SET_INT:10;
      uint64_t reservedSpace0:20;
      uint64_t FRAME_SET_INT:1;
      uint64_t DEV_SET_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSETSTAT;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOGGLE:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPTOGGLE;

};

#define USB0 (*(volatile struct USB0_tag *) 0x40084000)

struct SCT0_EVENT_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATEMSKn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCHSEL:4;
      uint64_t HEVENT:1;
      uint64_t OUTSEL:1;
      uint64_t IOSEL:4;
      uint64_t IOCOND:2;
      uint64_t COMBMODE:2;
      uint64_t STATELD:1;
      uint64_t STATEV:5;
      uint64_t MATCHMEM:1;
      uint64_t DIRECTION:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

};

#define SCT0_EVENT_0 (*(volatile struct SCT0_EVENT_0_tag *) 0x40085300)

struct SCT0_EVENT_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATEMSKn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCHSEL:4;
      uint64_t HEVENT:1;
      uint64_t OUTSEL:1;
      uint64_t IOSEL:4;
      uint64_t IOCOND:2;
      uint64_t COMBMODE:2;
      uint64_t STATELD:1;
      uint64_t STATEV:5;
      uint64_t MATCHMEM:1;
      uint64_t DIRECTION:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

};

#define SCT0_EVENT_1 (*(volatile struct SCT0_EVENT_1_tag *) 0x40085308)

struct SCT0_EVENT_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATEMSKn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCHSEL:4;
      uint64_t HEVENT:1;
      uint64_t OUTSEL:1;
      uint64_t IOSEL:4;
      uint64_t IOCOND:2;
      uint64_t COMBMODE:2;
      uint64_t STATELD:1;
      uint64_t STATEV:5;
      uint64_t MATCHMEM:1;
      uint64_t DIRECTION:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

};

#define SCT0_EVENT_2 (*(volatile struct SCT0_EVENT_2_tag *) 0x40085310)

struct SCT0_EVENT_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATEMSKn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCHSEL:4;
      uint64_t HEVENT:1;
      uint64_t OUTSEL:1;
      uint64_t IOSEL:4;
      uint64_t IOCOND:2;
      uint64_t COMBMODE:2;
      uint64_t STATELD:1;
      uint64_t STATEV:5;
      uint64_t MATCHMEM:1;
      uint64_t DIRECTION:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

};

#define SCT0_EVENT_3 (*(volatile struct SCT0_EVENT_3_tag *) 0x40085318)

struct SCT0_EVENT_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATEMSKn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCHSEL:4;
      uint64_t HEVENT:1;
      uint64_t OUTSEL:1;
      uint64_t IOSEL:4;
      uint64_t IOCOND:2;
      uint64_t COMBMODE:2;
      uint64_t STATELD:1;
      uint64_t STATEV:5;
      uint64_t MATCHMEM:1;
      uint64_t DIRECTION:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

};

#define SCT0_EVENT_4 (*(volatile struct SCT0_EVENT_4_tag *) 0x40085320)

struct SCT0_EVENT_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATEMSKn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCHSEL:4;
      uint64_t HEVENT:1;
      uint64_t OUTSEL:1;
      uint64_t IOSEL:4;
      uint64_t IOCOND:2;
      uint64_t COMBMODE:2;
      uint64_t STATELD:1;
      uint64_t STATEV:5;
      uint64_t MATCHMEM:1;
      uint64_t DIRECTION:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

};

#define SCT0_EVENT_5 (*(volatile struct SCT0_EVENT_5_tag *) 0x40085328)

struct SCT0_EVENT_6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATEMSKn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCHSEL:4;
      uint64_t HEVENT:1;
      uint64_t OUTSEL:1;
      uint64_t IOSEL:4;
      uint64_t IOCOND:2;
      uint64_t COMBMODE:2;
      uint64_t STATELD:1;
      uint64_t STATEV:5;
      uint64_t MATCHMEM:1;
      uint64_t DIRECTION:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

};

#define SCT0_EVENT_6 (*(volatile struct SCT0_EVENT_6_tag *) 0x40085330)

struct SCT0_EVENT_7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATEMSKn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCHSEL:4;
      uint64_t HEVENT:1;
      uint64_t OUTSEL:1;
      uint64_t IOSEL:4;
      uint64_t IOCOND:2;
      uint64_t COMBMODE:2;
      uint64_t STATELD:1;
      uint64_t STATEV:5;
      uint64_t MATCHMEM:1;
      uint64_t DIRECTION:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

};

#define SCT0_EVENT_7 (*(volatile struct SCT0_EVENT_7_tag *) 0x40085338)

struct SCT0_EVENT_8_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATEMSKn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCHSEL:4;
      uint64_t HEVENT:1;
      uint64_t OUTSEL:1;
      uint64_t IOSEL:4;
      uint64_t IOCOND:2;
      uint64_t COMBMODE:2;
      uint64_t STATELD:1;
      uint64_t STATEV:5;
      uint64_t MATCHMEM:1;
      uint64_t DIRECTION:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

};

#define SCT0_EVENT_8 (*(volatile struct SCT0_EVENT_8_tag *) 0x40085340)

struct SCT0_EVENT_9_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATEMSKn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCHSEL:4;
      uint64_t HEVENT:1;
      uint64_t OUTSEL:1;
      uint64_t IOSEL:4;
      uint64_t IOCOND:2;
      uint64_t COMBMODE:2;
      uint64_t STATELD:1;
      uint64_t STATEV:5;
      uint64_t MATCHMEM:1;
      uint64_t DIRECTION:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

};

#define SCT0_EVENT_9 (*(volatile struct SCT0_EVENT_9_tag *) 0x40085348)

struct SCT0_OUT_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR;

};

#define SCT0_OUT_0 (*(volatile struct SCT0_OUT_0_tag *) 0x40085500)

struct SCT0_OUT_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR;

};

#define SCT0_OUT_1 (*(volatile struct SCT0_OUT_1_tag *) 0x40085508)

struct SCT0_OUT_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR;

};

#define SCT0_OUT_2 (*(volatile struct SCT0_OUT_2_tag *) 0x40085510)

struct SCT0_OUT_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR;

};

#define SCT0_OUT_3 (*(volatile struct SCT0_OUT_3_tag *) 0x40085518)

struct SCT0_OUT_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR;

};

#define SCT0_OUT_4 (*(volatile struct SCT0_OUT_4_tag *) 0x40085520)

struct SCT0_OUT_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR;

};

#define SCT0_OUT_5 (*(volatile struct SCT0_OUT_5_tag *) 0x40085528)

struct SCT0_OUT_6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR;

};

#define SCT0_OUT_6 (*(volatile struct SCT0_OUT_6_tag *) 0x40085530)

struct SCT0_OUT_7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR;

};

#define SCT0_OUT_7 (*(volatile struct SCT0_OUT_7_tag *) 0x40085538)

struct SCT0_OUT_8_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR;

};

#define SCT0_OUT_8 (*(volatile struct SCT0_OUT_8_tag *) 0x40085540)

struct SCT0_OUT_9_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR;

};

#define SCT0_OUT_9 (*(volatile struct SCT0_OUT_9_tag *) 0x40085548)

struct FLEXCOMM0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSEL:3;
      uint64_t LOCK:1;
      uint64_t USARTPRESENT:1;
      uint64_t SPIPRESENT:1;
      uint64_t I2CPRESENT:1;
      uint64_t I2SPRESENT:1;
      uint64_t reservedSpace0:4;
      uint64_t ID:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSELID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Aperture:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

};

#define FLEXCOMM0 (*(volatile struct FLEXCOMM0_tag *) 0x40086ff8)

struct FLEXCOMM1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSEL:3;
      uint64_t LOCK:1;
      uint64_t USARTPRESENT:1;
      uint64_t SPIPRESENT:1;
      uint64_t I2CPRESENT:1;
      uint64_t I2SPRESENT:1;
      uint64_t reservedSpace0:4;
      uint64_t ID:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSELID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Aperture:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

};

#define FLEXCOMM1 (*(volatile struct FLEXCOMM1_tag *) 0x40087ff8)

struct FLEXCOMM2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSEL:3;
      uint64_t LOCK:1;
      uint64_t USARTPRESENT:1;
      uint64_t SPIPRESENT:1;
      uint64_t I2CPRESENT:1;
      uint64_t I2SPRESENT:1;
      uint64_t reservedSpace0:4;
      uint64_t ID:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSELID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Aperture:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

};

#define FLEXCOMM2 (*(volatile struct FLEXCOMM2_tag *) 0x40088ff8)

struct FLEXCOMM3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSEL:3;
      uint64_t LOCK:1;
      uint64_t USARTPRESENT:1;
      uint64_t SPIPRESENT:1;
      uint64_t I2CPRESENT:1;
      uint64_t I2SPRESENT:1;
      uint64_t reservedSpace0:4;
      uint64_t ID:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSELID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Aperture:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

};

#define FLEXCOMM3 (*(volatile struct FLEXCOMM3_tag *) 0x40089ff8)

struct FLEXCOMM4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSEL:3;
      uint64_t LOCK:1;
      uint64_t USARTPRESENT:1;
      uint64_t SPIPRESENT:1;
      uint64_t I2CPRESENT:1;
      uint64_t I2SPRESENT:1;
      uint64_t reservedSpace0:4;
      uint64_t ID:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSELID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Aperture:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

};

#define FLEXCOMM4 (*(volatile struct FLEXCOMM4_tag *) 0x4008aff8)

struct FLEXCOMM5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSEL:3;
      uint64_t LOCK:1;
      uint64_t USARTPRESENT:1;
      uint64_t SPIPRESENT:1;
      uint64_t I2CPRESENT:1;
      uint64_t I2SPRESENT:1;
      uint64_t reservedSpace0:4;
      uint64_t ID:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSELID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Aperture:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

};

#define FLEXCOMM5 (*(volatile struct FLEXCOMM5_tag *) 0x40096ff8)

struct FLEXCOMM6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSEL:3;
      uint64_t LOCK:1;
      uint64_t USARTPRESENT:1;
      uint64_t SPIPRESENT:1;
      uint64_t I2CPRESENT:1;
      uint64_t I2SPRESENT:1;
      uint64_t reservedSpace0:4;
      uint64_t ID:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSELID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Aperture:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

};

#define FLEXCOMM6 (*(volatile struct FLEXCOMM6_tag *) 0x40097ff8)

struct FLEXCOMM7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSEL:3;
      uint64_t LOCK:1;
      uint64_t USARTPRESENT:1;
      uint64_t SPIPRESENT:1;
      uint64_t I2CPRESENT:1;
      uint64_t I2SPRESENT:1;
      uint64_t reservedSpace0:4;
      uint64_t ID:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSELID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Aperture:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

};

#define FLEXCOMM7 (*(volatile struct FLEXCOMM7_tag *) 0x40098ff8)

struct FLEXCOMM8_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSEL:3;
      uint64_t LOCK:1;
      uint64_t USARTPRESENT:1;
      uint64_t SPIPRESENT:1;
      uint64_t I2CPRESENT:1;
      uint64_t I2SPRESENT:1;
      uint64_t reservedSpace0:4;
      uint64_t ID:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSELID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Aperture:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

};

#define FLEXCOMM8 (*(volatile struct FLEXCOMM8_tag *) 0x40099ff8)

struct FLEXCOMM9_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSEL:3;
      uint64_t LOCK:1;
      uint64_t USARTPRESENT:1;
      uint64_t SPIPRESENT:1;
      uint64_t I2CPRESENT:1;
      uint64_t I2SPRESENT:1;
      uint64_t reservedSpace0:4;
      uint64_t ID:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSELID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Aperture:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

};

#define FLEXCOMM9 (*(volatile struct FLEXCOMM9_tag *) 0x4009aff8)

struct SPI0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t MASTER:1;
      uint64_t LSBF:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t reservedSpace1:1;
      uint64_t LOOP:1;
      uint64_t SPOL0:1;
      uint64_t SPOL1:1;
      uint64_t SPOL2:1;
      uint64_t SPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRE_DELAY:4;
      uint64_t POST_DELAY:4;
      uint64_t FRAME_DELAY:4;
      uint64_t TRANSFER_DELAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t STALLED:1;
      uint64_t ENDTRANSFER:1;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res1[2516];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
      uint64_t POPDBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXSSEL0_N:1;
      uint64_t TXSSEL1_N:1;
      uint64_t TXSSEL2_N:1;
      uint64_t TXSSEL3_N:1;
      uint64_t EOT:1;
      uint64_t EOF:1;
      uint64_t RXIGNORE:1;
      uint64_t reservedSpace0:1;
      uint64_t LEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

};

#define SPI0 (*(volatile struct SPI0_tag *) 0x40086400)

struct USART0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t DATALEN:2;
      uint64_t PARITYSEL:2;
      uint64_t STOPLEN:1;
      uint64_t MODE32K:1;
      uint64_t LINMODE:1;
      uint64_t CTSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t SYNCEN:1;
      uint64_t CLKPOL:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMST:1;
      uint64_t LOOP:1;
      uint64_t IOMODE:1;
      uint64_t reservedSpace3:1;
      uint64_t OETA:1;
      uint64_t AUTOADDR:1;
      uint64_t OESEL:1;
      uint64_t OEPOL:1;
      uint64_t RXPOL:1;
      uint64_t TXPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TXBRKEN:1;
      uint64_t ADDRDET:1;
      uint64_t reservedSpace1:3;
      uint64_t TXDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t CC:1;
      uint64_t CLRCCONRX:1;
      uint64_t reservedSpace3:6;
      uint64_t AUTOBAUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXIDLE:1;
      uint64_t CTS:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISSTAT:1;
      uint64_t reservedSpace2:3;
      uint64_t RXBRK:1;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLEEN:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSEN:1;
      uint64_t TXDISEN:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKEN:1;
      uint64_t STARTEN:1;
      uint64_t FRAMERREN:1;
      uint64_t PARITYERREN:1;
      uint64_t RXNOISEEN:1;
      uint64_t ABERREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLECLR:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSCLR:1;
      uint64_t TXDISCLR:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKCLR:1;
      uint64_t STARTCLR:1;
      uint64_t FRAMERRCLR:1;
      uint64_t PARITYERRCLR:1;
      uint64_t RXNOISECLR:1;
      uint64_t ABERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRGVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISINT:1;
      uint64_t reservedSpace2:1;
      uint64_t OVERRUNINT:1;
      uint64_t reservedSpace3:2;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSRVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR;

  uint8_t res1[3536];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
      uint64_t POPDBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

};

#define USART0 (*(volatile struct USART0_tag *) 0x40086000)

struct I2C0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTEN:1;
      uint64_t SLVEN:1;
      uint64_t MONEN:1;
      uint64_t TIMEOUTEN:1;
      uint64_t MONCLKSTR:1;
      uint64_t HSCAPABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t MSTSTATE:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace1:1;
      uint64_t SLVPENDING:1;
      uint64_t SLVSTATE:2;
      uint64_t SLVNOTSTR:1;
      uint64_t SLVIDX:2;
      uint64_t SLVSEL:1;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t MONACTIVE:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace2:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGEN:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERREN:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTREN:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELEN:1;
      uint64_t MONRDYEN:1;
      uint64_t MONOVEN:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLEEN:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTEN:1;
      uint64_t SCLTIMEOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGCLR:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERRCLR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGCLR:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTRCLR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELCLR:1;
      uint64_t MONRDYCLR:1;
      uint64_t MONOVCLR:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLECLR:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTCLR:1;
      uint64_t SCLTIMEOUTCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOMIN:4;
      uint64_t TO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDING:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTCONTINUE:1;
      uint64_t MSTSTART:1;
      uint64_t MSTSTOP:1;
      uint64_t MSTDMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTSCLLOW:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTSCLHIGH:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTDAT;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLVCONTINUE:1;
      uint64_t SLVNACK:1;
      uint64_t reservedSpace0:1;
      uint64_t SLVDMA:1;
      uint64_t reservedSpace1:4;
      uint64_t AUTOACK:1;
      uint64_t AUTOMATCHREAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVDAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUALMODE0:1;
      uint64_t SLVQUAL0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVQUAL0;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MONRXDAT:8;
      uint64_t MONSTART:1;
      uint64_t MONRESTART:1;
      uint64_t MONNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MONRXDAT;

};

#define I2C0 (*(volatile struct I2C0_tag *) 0x40086800)

struct SPI1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t MASTER:1;
      uint64_t LSBF:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t reservedSpace1:1;
      uint64_t LOOP:1;
      uint64_t SPOL0:1;
      uint64_t SPOL1:1;
      uint64_t SPOL2:1;
      uint64_t SPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRE_DELAY:4;
      uint64_t POST_DELAY:4;
      uint64_t FRAME_DELAY:4;
      uint64_t TRANSFER_DELAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t STALLED:1;
      uint64_t ENDTRANSFER:1;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res1[2516];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
      uint64_t POPDBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXSSEL0_N:1;
      uint64_t TXSSEL1_N:1;
      uint64_t TXSSEL2_N:1;
      uint64_t TXSSEL3_N:1;
      uint64_t EOT:1;
      uint64_t EOF:1;
      uint64_t RXIGNORE:1;
      uint64_t reservedSpace0:1;
      uint64_t LEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

};

#define SPI1 (*(volatile struct SPI1_tag *) 0x40087400)

struct USART1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t DATALEN:2;
      uint64_t PARITYSEL:2;
      uint64_t STOPLEN:1;
      uint64_t MODE32K:1;
      uint64_t LINMODE:1;
      uint64_t CTSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t SYNCEN:1;
      uint64_t CLKPOL:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMST:1;
      uint64_t LOOP:1;
      uint64_t IOMODE:1;
      uint64_t reservedSpace3:1;
      uint64_t OETA:1;
      uint64_t AUTOADDR:1;
      uint64_t OESEL:1;
      uint64_t OEPOL:1;
      uint64_t RXPOL:1;
      uint64_t TXPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TXBRKEN:1;
      uint64_t ADDRDET:1;
      uint64_t reservedSpace1:3;
      uint64_t TXDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t CC:1;
      uint64_t CLRCCONRX:1;
      uint64_t reservedSpace3:6;
      uint64_t AUTOBAUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXIDLE:1;
      uint64_t CTS:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISSTAT:1;
      uint64_t reservedSpace2:3;
      uint64_t RXBRK:1;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLEEN:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSEN:1;
      uint64_t TXDISEN:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKEN:1;
      uint64_t STARTEN:1;
      uint64_t FRAMERREN:1;
      uint64_t PARITYERREN:1;
      uint64_t RXNOISEEN:1;
      uint64_t ABERREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLECLR:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSCLR:1;
      uint64_t TXDISCLR:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKCLR:1;
      uint64_t STARTCLR:1;
      uint64_t FRAMERRCLR:1;
      uint64_t PARITYERRCLR:1;
      uint64_t RXNOISECLR:1;
      uint64_t ABERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRGVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISINT:1;
      uint64_t reservedSpace2:1;
      uint64_t OVERRUNINT:1;
      uint64_t reservedSpace3:2;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSRVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR;

  uint8_t res1[3536];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
      uint64_t POPDBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

};

#define USART1 (*(volatile struct USART1_tag *) 0x40087000)

struct I2C1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTEN:1;
      uint64_t SLVEN:1;
      uint64_t MONEN:1;
      uint64_t TIMEOUTEN:1;
      uint64_t MONCLKSTR:1;
      uint64_t HSCAPABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t MSTSTATE:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace1:1;
      uint64_t SLVPENDING:1;
      uint64_t SLVSTATE:2;
      uint64_t SLVNOTSTR:1;
      uint64_t SLVIDX:2;
      uint64_t SLVSEL:1;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t MONACTIVE:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace2:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGEN:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERREN:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTREN:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELEN:1;
      uint64_t MONRDYEN:1;
      uint64_t MONOVEN:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLEEN:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTEN:1;
      uint64_t SCLTIMEOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGCLR:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERRCLR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGCLR:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTRCLR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELCLR:1;
      uint64_t MONRDYCLR:1;
      uint64_t MONOVCLR:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLECLR:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTCLR:1;
      uint64_t SCLTIMEOUTCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOMIN:4;
      uint64_t TO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDING:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTCONTINUE:1;
      uint64_t MSTSTART:1;
      uint64_t MSTSTOP:1;
      uint64_t MSTDMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTSCLLOW:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTSCLHIGH:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTDAT;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLVCONTINUE:1;
      uint64_t SLVNACK:1;
      uint64_t reservedSpace0:1;
      uint64_t SLVDMA:1;
      uint64_t reservedSpace1:4;
      uint64_t AUTOACK:1;
      uint64_t AUTOMATCHREAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVDAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUALMODE0:1;
      uint64_t SLVQUAL0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVQUAL0;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MONRXDAT:8;
      uint64_t MONSTART:1;
      uint64_t MONRESTART:1;
      uint64_t MONNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MONRXDAT;

};

#define I2C1 (*(volatile struct I2C1_tag *) 0x40087800)

struct USART2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t DATALEN:2;
      uint64_t PARITYSEL:2;
      uint64_t STOPLEN:1;
      uint64_t MODE32K:1;
      uint64_t LINMODE:1;
      uint64_t CTSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t SYNCEN:1;
      uint64_t CLKPOL:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMST:1;
      uint64_t LOOP:1;
      uint64_t IOMODE:1;
      uint64_t reservedSpace3:1;
      uint64_t OETA:1;
      uint64_t AUTOADDR:1;
      uint64_t OESEL:1;
      uint64_t OEPOL:1;
      uint64_t RXPOL:1;
      uint64_t TXPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TXBRKEN:1;
      uint64_t ADDRDET:1;
      uint64_t reservedSpace1:3;
      uint64_t TXDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t CC:1;
      uint64_t CLRCCONRX:1;
      uint64_t reservedSpace3:6;
      uint64_t AUTOBAUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXIDLE:1;
      uint64_t CTS:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISSTAT:1;
      uint64_t reservedSpace2:3;
      uint64_t RXBRK:1;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLEEN:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSEN:1;
      uint64_t TXDISEN:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKEN:1;
      uint64_t STARTEN:1;
      uint64_t FRAMERREN:1;
      uint64_t PARITYERREN:1;
      uint64_t RXNOISEEN:1;
      uint64_t ABERREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLECLR:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSCLR:1;
      uint64_t TXDISCLR:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKCLR:1;
      uint64_t STARTCLR:1;
      uint64_t FRAMERRCLR:1;
      uint64_t PARITYERRCLR:1;
      uint64_t RXNOISECLR:1;
      uint64_t ABERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRGVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISINT:1;
      uint64_t reservedSpace2:1;
      uint64_t OVERRUNINT:1;
      uint64_t reservedSpace3:2;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSRVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR;

  uint8_t res1[3536];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
      uint64_t POPDBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

};

#define USART2 (*(volatile struct USART2_tag *) 0x40088000)

struct I2C2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTEN:1;
      uint64_t SLVEN:1;
      uint64_t MONEN:1;
      uint64_t TIMEOUTEN:1;
      uint64_t MONCLKSTR:1;
      uint64_t HSCAPABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t MSTSTATE:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace1:1;
      uint64_t SLVPENDING:1;
      uint64_t SLVSTATE:2;
      uint64_t SLVNOTSTR:1;
      uint64_t SLVIDX:2;
      uint64_t SLVSEL:1;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t MONACTIVE:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace2:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGEN:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERREN:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTREN:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELEN:1;
      uint64_t MONRDYEN:1;
      uint64_t MONOVEN:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLEEN:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTEN:1;
      uint64_t SCLTIMEOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGCLR:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERRCLR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGCLR:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTRCLR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELCLR:1;
      uint64_t MONRDYCLR:1;
      uint64_t MONOVCLR:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLECLR:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTCLR:1;
      uint64_t SCLTIMEOUTCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOMIN:4;
      uint64_t TO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDING:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTCONTINUE:1;
      uint64_t MSTSTART:1;
      uint64_t MSTSTOP:1;
      uint64_t MSTDMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTSCLLOW:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTSCLHIGH:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTDAT;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLVCONTINUE:1;
      uint64_t SLVNACK:1;
      uint64_t reservedSpace0:1;
      uint64_t SLVDMA:1;
      uint64_t reservedSpace1:4;
      uint64_t AUTOACK:1;
      uint64_t AUTOMATCHREAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVDAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUALMODE0:1;
      uint64_t SLVQUAL0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVQUAL0;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MONRXDAT:8;
      uint64_t MONSTART:1;
      uint64_t MONRESTART:1;
      uint64_t MONNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MONRXDAT;

};

#define I2C2 (*(volatile struct I2C2_tag *) 0x40088800)

struct SPI2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t MASTER:1;
      uint64_t LSBF:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t reservedSpace1:1;
      uint64_t LOOP:1;
      uint64_t SPOL0:1;
      uint64_t SPOL1:1;
      uint64_t SPOL2:1;
      uint64_t SPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRE_DELAY:4;
      uint64_t POST_DELAY:4;
      uint64_t FRAME_DELAY:4;
      uint64_t TRANSFER_DELAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t STALLED:1;
      uint64_t ENDTRANSFER:1;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res1[2516];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
      uint64_t POPDBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXSSEL0_N:1;
      uint64_t TXSSEL1_N:1;
      uint64_t TXSSEL2_N:1;
      uint64_t TXSSEL3_N:1;
      uint64_t EOT:1;
      uint64_t EOF:1;
      uint64_t RXIGNORE:1;
      uint64_t reservedSpace0:1;
      uint64_t LEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

};

#define SPI2 (*(volatile struct SPI2_tag *) 0x40088400)

struct I2C3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTEN:1;
      uint64_t SLVEN:1;
      uint64_t MONEN:1;
      uint64_t TIMEOUTEN:1;
      uint64_t MONCLKSTR:1;
      uint64_t HSCAPABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t MSTSTATE:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace1:1;
      uint64_t SLVPENDING:1;
      uint64_t SLVSTATE:2;
      uint64_t SLVNOTSTR:1;
      uint64_t SLVIDX:2;
      uint64_t SLVSEL:1;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t MONACTIVE:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace2:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGEN:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERREN:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTREN:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELEN:1;
      uint64_t MONRDYEN:1;
      uint64_t MONOVEN:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLEEN:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTEN:1;
      uint64_t SCLTIMEOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGCLR:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERRCLR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGCLR:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTRCLR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELCLR:1;
      uint64_t MONRDYCLR:1;
      uint64_t MONOVCLR:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLECLR:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTCLR:1;
      uint64_t SCLTIMEOUTCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOMIN:4;
      uint64_t TO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDING:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTCONTINUE:1;
      uint64_t MSTSTART:1;
      uint64_t MSTSTOP:1;
      uint64_t MSTDMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTSCLLOW:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTSCLHIGH:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTDAT;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLVCONTINUE:1;
      uint64_t SLVNACK:1;
      uint64_t reservedSpace0:1;
      uint64_t SLVDMA:1;
      uint64_t reservedSpace1:4;
      uint64_t AUTOACK:1;
      uint64_t AUTOMATCHREAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVDAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUALMODE0:1;
      uint64_t SLVQUAL0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVQUAL0;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MONRXDAT:8;
      uint64_t MONSTART:1;
      uint64_t MONRESTART:1;
      uint64_t MONNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MONRXDAT;

};

#define I2C3 (*(volatile struct I2C3_tag *) 0x40089800)

struct USART3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t DATALEN:2;
      uint64_t PARITYSEL:2;
      uint64_t STOPLEN:1;
      uint64_t MODE32K:1;
      uint64_t LINMODE:1;
      uint64_t CTSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t SYNCEN:1;
      uint64_t CLKPOL:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMST:1;
      uint64_t LOOP:1;
      uint64_t IOMODE:1;
      uint64_t reservedSpace3:1;
      uint64_t OETA:1;
      uint64_t AUTOADDR:1;
      uint64_t OESEL:1;
      uint64_t OEPOL:1;
      uint64_t RXPOL:1;
      uint64_t TXPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TXBRKEN:1;
      uint64_t ADDRDET:1;
      uint64_t reservedSpace1:3;
      uint64_t TXDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t CC:1;
      uint64_t CLRCCONRX:1;
      uint64_t reservedSpace3:6;
      uint64_t AUTOBAUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXIDLE:1;
      uint64_t CTS:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISSTAT:1;
      uint64_t reservedSpace2:3;
      uint64_t RXBRK:1;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLEEN:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSEN:1;
      uint64_t TXDISEN:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKEN:1;
      uint64_t STARTEN:1;
      uint64_t FRAMERREN:1;
      uint64_t PARITYERREN:1;
      uint64_t RXNOISEEN:1;
      uint64_t ABERREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLECLR:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSCLR:1;
      uint64_t TXDISCLR:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKCLR:1;
      uint64_t STARTCLR:1;
      uint64_t FRAMERRCLR:1;
      uint64_t PARITYERRCLR:1;
      uint64_t RXNOISECLR:1;
      uint64_t ABERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRGVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISINT:1;
      uint64_t reservedSpace2:1;
      uint64_t OVERRUNINT:1;
      uint64_t reservedSpace3:2;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSRVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR;

  uint8_t res1[3536];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
      uint64_t POPDBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

};

#define USART3 (*(volatile struct USART3_tag *) 0x40089000)

struct SPI3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t MASTER:1;
      uint64_t LSBF:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t reservedSpace1:1;
      uint64_t LOOP:1;
      uint64_t SPOL0:1;
      uint64_t SPOL1:1;
      uint64_t SPOL2:1;
      uint64_t SPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRE_DELAY:4;
      uint64_t POST_DELAY:4;
      uint64_t FRAME_DELAY:4;
      uint64_t TRANSFER_DELAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t STALLED:1;
      uint64_t ENDTRANSFER:1;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res1[2516];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
      uint64_t POPDBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXSSEL0_N:1;
      uint64_t TXSSEL1_N:1;
      uint64_t TXSSEL2_N:1;
      uint64_t TXSSEL3_N:1;
      uint64_t EOT:1;
      uint64_t EOF:1;
      uint64_t RXIGNORE:1;
      uint64_t reservedSpace0:1;
      uint64_t LEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

};

#define SPI3 (*(volatile struct SPI3_tag *) 0x40089400)

struct I2C4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTEN:1;
      uint64_t SLVEN:1;
      uint64_t MONEN:1;
      uint64_t TIMEOUTEN:1;
      uint64_t MONCLKSTR:1;
      uint64_t HSCAPABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t MSTSTATE:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace1:1;
      uint64_t SLVPENDING:1;
      uint64_t SLVSTATE:2;
      uint64_t SLVNOTSTR:1;
      uint64_t SLVIDX:2;
      uint64_t SLVSEL:1;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t MONACTIVE:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace2:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGEN:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERREN:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTREN:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELEN:1;
      uint64_t MONRDYEN:1;
      uint64_t MONOVEN:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLEEN:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTEN:1;
      uint64_t SCLTIMEOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGCLR:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERRCLR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGCLR:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTRCLR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELCLR:1;
      uint64_t MONRDYCLR:1;
      uint64_t MONOVCLR:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLECLR:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTCLR:1;
      uint64_t SCLTIMEOUTCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOMIN:4;
      uint64_t TO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDING:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTCONTINUE:1;
      uint64_t MSTSTART:1;
      uint64_t MSTSTOP:1;
      uint64_t MSTDMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTSCLLOW:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTSCLHIGH:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTDAT;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLVCONTINUE:1;
      uint64_t SLVNACK:1;
      uint64_t reservedSpace0:1;
      uint64_t SLVDMA:1;
      uint64_t reservedSpace1:4;
      uint64_t AUTOACK:1;
      uint64_t AUTOMATCHREAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVDAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUALMODE0:1;
      uint64_t SLVQUAL0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVQUAL0;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MONRXDAT:8;
      uint64_t MONSTART:1;
      uint64_t MONRESTART:1;
      uint64_t MONNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MONRXDAT;

};

#define I2C4 (*(volatile struct I2C4_tag *) 0x4008a800)

struct SPI4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t MASTER:1;
      uint64_t LSBF:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t reservedSpace1:1;
      uint64_t LOOP:1;
      uint64_t SPOL0:1;
      uint64_t SPOL1:1;
      uint64_t SPOL2:1;
      uint64_t SPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRE_DELAY:4;
      uint64_t POST_DELAY:4;
      uint64_t FRAME_DELAY:4;
      uint64_t TRANSFER_DELAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t STALLED:1;
      uint64_t ENDTRANSFER:1;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res1[2516];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
      uint64_t POPDBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXSSEL0_N:1;
      uint64_t TXSSEL1_N:1;
      uint64_t TXSSEL2_N:1;
      uint64_t TXSSEL3_N:1;
      uint64_t EOT:1;
      uint64_t EOF:1;
      uint64_t RXIGNORE:1;
      uint64_t reservedSpace0:1;
      uint64_t LEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

};

#define SPI4 (*(volatile struct SPI4_tag *) 0x4008a400)

struct USART4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t DATALEN:2;
      uint64_t PARITYSEL:2;
      uint64_t STOPLEN:1;
      uint64_t MODE32K:1;
      uint64_t LINMODE:1;
      uint64_t CTSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t SYNCEN:1;
      uint64_t CLKPOL:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMST:1;
      uint64_t LOOP:1;
      uint64_t IOMODE:1;
      uint64_t reservedSpace3:1;
      uint64_t OETA:1;
      uint64_t AUTOADDR:1;
      uint64_t OESEL:1;
      uint64_t OEPOL:1;
      uint64_t RXPOL:1;
      uint64_t TXPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TXBRKEN:1;
      uint64_t ADDRDET:1;
      uint64_t reservedSpace1:3;
      uint64_t TXDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t CC:1;
      uint64_t CLRCCONRX:1;
      uint64_t reservedSpace3:6;
      uint64_t AUTOBAUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXIDLE:1;
      uint64_t CTS:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISSTAT:1;
      uint64_t reservedSpace2:3;
      uint64_t RXBRK:1;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLEEN:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSEN:1;
      uint64_t TXDISEN:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKEN:1;
      uint64_t STARTEN:1;
      uint64_t FRAMERREN:1;
      uint64_t PARITYERREN:1;
      uint64_t RXNOISEEN:1;
      uint64_t ABERREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLECLR:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSCLR:1;
      uint64_t TXDISCLR:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKCLR:1;
      uint64_t STARTCLR:1;
      uint64_t FRAMERRCLR:1;
      uint64_t PARITYERRCLR:1;
      uint64_t RXNOISECLR:1;
      uint64_t ABERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRGVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISINT:1;
      uint64_t reservedSpace2:1;
      uint64_t OVERRUNINT:1;
      uint64_t reservedSpace3:2;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSRVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR;

  uint8_t res1[3536];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
      uint64_t POPDBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

};

#define USART4 (*(volatile struct USART4_tag *) 0x4008a000)

struct GPIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR_5;

  uint8_t res0[104];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_5;

  uint8_t res1[104];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN_5;

  uint8_t res2[104];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN_5;

  uint8_t res3[104];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_5;

  uint8_t res4[104];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_5;

  uint8_t res5[104];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT_5;

  uint8_t res6[104];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSETP:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSET_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSETP:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSET_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSETP:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSET_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSETP:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSET_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSETP:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSET_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSETP:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSET_5;

  uint8_t res7[104];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRCLRP:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRCLR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRCLRP:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRCLR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRCLRP:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRCLR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRCLRP:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRCLR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRCLRP:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRCLR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRCLRP:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRCLR_5;

  uint8_t res8[104];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRNOTP:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRNOT_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRNOTP:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRNOT_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRNOTP:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRNOT_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRNOTP:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRNOT_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRNOTP:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRNOT_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRNOTP:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRNOT_5;

};

#define GPIO (*(volatile struct GPIO_tag *) 0x4008e000)

struct GPIO_PB_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_31;

};

#define GPIO_PB_0 (*(volatile struct GPIO_PB_0_tag *) 0x4008c000)

struct GPIO_PB_1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_31;

};

#define GPIO_PB_1 (*(volatile struct GPIO_PB_1_tag *) 0x4008c020)

struct GPIO_PB_2_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_31;

};

#define GPIO_PB_2 (*(volatile struct GPIO_PB_2_tag *) 0x4008c040)

struct GPIO_PB_3_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_31;

};

#define GPIO_PB_3 (*(volatile struct GPIO_PB_3_tag *) 0x4008c060)

struct GPIO_PB_4_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_31;

};

#define GPIO_PB_4 (*(volatile struct GPIO_PB_4_tag *) 0x4008c080)

struct GPIO_PB_5_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_31;

};

#define GPIO_PB_5 (*(volatile struct GPIO_PB_5_tag *) 0x4008c0a0)

struct GPIO_PW_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_31;

};

#define GPIO_PW_0 (*(volatile struct GPIO_PW_0_tag *) 0x4008d000)

struct GPIO_PW_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_31;

};

#define GPIO_PW_1 (*(volatile struct GPIO_PW_1_tag *) 0x4008d080)

struct GPIO_PW_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_31;

};

#define GPIO_PW_2 (*(volatile struct GPIO_PW_2_tag *) 0x4008d100)

struct GPIO_PW_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_31;

};

#define GPIO_PW_3 (*(volatile struct GPIO_PW_3_tag *) 0x4008d180)

struct GPIO_PW_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_31;

};

#define GPIO_PW_4 (*(volatile struct GPIO_PW_4_tag *) 0x4008d200)

struct GPIO_PW_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_31;

};

#define GPIO_PW_5 (*(volatile struct GPIO_PW_5_tag *) 0x4008d280)

struct DMIC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN_CH0:1;
      uint64_t EN_CH1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANEN;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_BYPASS0:1;
      uint64_t CLK_BYPASS1:1;
      uint64_t STEREO_DATA0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USE2FS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USE2FS;

  uint8_t res1[108];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPUTGAIN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWVADGAIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HPFS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWVADHPFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ST10:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWVADST10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSTT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWVADRSTT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THGN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWVADTHGN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THGS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWVADTHGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOWZ:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWVADLOWZ;

  uint8_t res2[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define DMIC0 (*(volatile struct DMIC0_tag *) 0x40090f00)

struct DMIC0_CHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDMDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVHFCLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PREAC2FSCOEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PREAC4FSCOEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GAIN:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAINSHIFT;

  uint8_t res0[108];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t RESET:1;
      uint64_t INTEN:1;
      uint64_t DMAEN:1;
      uint64_t reservedSpace0:12;
      uint64_t TRIGLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:1;
      uint64_t OVERRUN:1;
      uint64_t UNDERRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFODATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHY_FALL:1;
      uint64_t PHY_HALF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMSRCCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCPOLE:2;
      uint64_t reservedSpace0:2;
      uint64_t DCGAIN:4;
      uint64_t SATURATEAT16BIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCTRL;

};

#define DMIC0_CHANNEL_0 (*(volatile struct DMIC0_CHANNEL_0_tag *) 0x40090000)

struct DMIC0_CHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDMDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVHFCLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PREAC2FSCOEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PREAC4FSCOEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GAIN:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAINSHIFT;

  uint8_t res0[108];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t RESET:1;
      uint64_t INTEN:1;
      uint64_t DMAEN:1;
      uint64_t reservedSpace0:12;
      uint64_t TRIGLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:1;
      uint64_t OVERRUN:1;
      uint64_t UNDERRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFODATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHY_FALL:1;
      uint64_t PHY_HALF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMSRCCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCPOLE:2;
      uint64_t reservedSpace0:2;
      uint64_t DCGAIN:4;
      uint64_t SATURATEAT16BIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCTRL;

};

#define DMIC0_CHANNEL_1 (*(volatile struct DMIC0_CHANNEL_1_tag *) 0x40090100)

struct ENET_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t PRELEN:2;
      uint64_t DC:1;
      uint64_t BL:2;
      uint64_t reservedSpace0:1;
      uint64_t DR:1;
      uint64_t DCRS:1;
      uint64_t DO:1;
      uint64_t ECRSFD:1;
      uint64_t LM:1;
      uint64_t DM:1;
      uint64_t FES:1;
      uint64_t PS:1;
      uint64_t JE:1;
      uint64_t JD:1;
      uint64_t BE:1;
      uint64_t WD:1;
      uint64_t ACS:1;
      uint64_t CST:1;
      uint64_t S2KP:1;
      uint64_t GPSLCE:1;
      uint64_t IPG:3;
      uint64_t IPC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPSL:14;
      uint64_t reservedSpace0:2;
      uint64_t DCRCC:1;
      uint64_t SPEN:1;
      uint64_t USP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_EXT_CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:1;
      uint64_t reservedSpace0:2;
      uint64_t DAIF:1;
      uint64_t PM:1;
      uint64_t DBF:1;
      uint64_t PCF:2;
      uint64_t SAIF:1;
      uint64_t SAF:1;
      uint64_t reservedSpace1:21;
      uint64_t RA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_FRAME_FILTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTO:4;
      uint64_t reservedSpace0:4;
      uint64_t PWE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_WD_TIMEROUT;

  uint8_t res0[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCB:1;
      uint64_t TFE:1;
      uint64_t reservedSpace0:2;
      uint64_t PLT:3;
      uint64_t DZPQ:1;
      uint64_t reservedSpace1:8;
      uint64_t PT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_TX_FLOW_CTRL_Q_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCB:1;
      uint64_t TFE:1;
      uint64_t reservedSpace0:2;
      uint64_t PLT:3;
      uint64_t DZPQ:1;
      uint64_t reservedSpace1:8;
      uint64_t PT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_TX_FLOW_CTRL_Q_1;

  uint8_t res1[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFE:1;
      uint64_t UP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_RX_FLOW_CTRL;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSTQ0:8;
      uint64_t PSTQ1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_TXQ_PRIO_MAP;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXQ0EN:2;
      uint64_t RXQ1EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_RXQ_CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AVCPQ:3;
      uint64_t reservedSpace0:1;
      uint64_t AVPTPQ:3;
      uint64_t reservedSpace1:5;
      uint64_t UPQ:3;
      uint64_t reservedSpace2:1;
      uint64_t MCBCQ:3;
      uint64_t reservedSpace3:1;
      uint64_t MCBCQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_RXQ_CTRL1;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PHYIS:1;
      uint64_t PMTIS:1;
      uint64_t LPIIS:1;
      uint64_t reservedSpace1:6;
      uint64_t TSIS:1;
      uint64_t TXSTSIS:1;
      uint64_t RXSTSIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_INTR_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PHYIE:1;
      uint64_t PMTIE:1;
      uint64_t LPIIE:1;
      uint64_t reservedSpace1:6;
      uint64_t TSIE:1;
      uint64_t TXSTSIE:1;
      uint64_t RXSTSIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_INTR_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TJT:1;
      uint64_t NCARR:1;
      uint64_t LCARR:1;
      uint64_t EXDEF:1;
      uint64_t LCOL:1;
      uint64_t EXCOL:1;
      uint64_t reservedSpace0:2;
      uint64_t RWT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_RXTX_STAT;

  uint8_t res5[4];

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
      uint64_t RWKPFE:1;
      uint64_t reservedSpace2:13;
      uint64_t RWKPTR:5;
      uint64_t reservedSpace3:2;
      uint64_t RWKFILTRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_PMT_CRTL_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_RWAKE_FRFLT;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLPIEN:1;
      uint64_t TLPIEX:1;
      uint64_t RLPIEN:1;
      uint64_t RLPIEX:1;
      uint64_t reservedSpace0:4;
      uint64_t TLPIST:1;
      uint64_t RLPIST:1;
      uint64_t reservedSpace1:6;
      uint64_t LPIEN:1;
      uint64_t PLS:1;
      uint64_t reservedSpace2:1;
      uint64_t LPITXA:1;
      uint64_t LPIATE:1;
      uint64_t LPITCSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_LPI_CTRL_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TWT:16;
      uint64_t LST:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_LPI_TIMER_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t LPIET:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_LPI_ENTR_TIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIC_1US_CNTR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_1US_TIC_COUNTR;

  uint8_t res7[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SNPVER:8;
      uint64_t USERVER:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_VERSION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REPESTS:1;
      uint64_t RFCFCSTS:2;
      uint64_t reservedSpace0:13;
      uint64_t TPESTS:1;
      uint64_t TFCSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_DBG;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIISEL:1;
      uint64_t reservedSpace0:1;
      uint64_t HDSEL:1;
      uint64_t reservedSpace1:1;
      uint64_t VLHASH:1;
      uint64_t SMASEL:1;
      uint64_t RWKSEL:1;
      uint64_t MGKSEL:1;
      uint64_t MMCSEL:1;
      uint64_t ARPOFFSEL:1;
      uint64_t reservedSpace2:2;
      uint64_t TSSEL:1;
      uint64_t EEESEL:1;
      uint64_t TXCOESEL:1;
      uint64_t reservedSpace3:1;
      uint64_t RXCOESEL:1;
      uint64_t reservedSpace4:8;
      uint64_t TSSTSSEL:2;
      uint64_t reservedSpace5:1;
      uint64_t ACTPHYSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_HW_FEAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFIFOSIZE:5;
      uint64_t reservedSpace0:1;
      uint64_t TXFIFOSIZE:5;
      uint64_t OSTEN:1;
      uint64_t PTOEN:1;
      uint64_t ADVTHWORD:1;
      uint64_t ADDR64:2;
      uint64_t DCBEN:1;
      uint64_t SPEN:1;
      uint64_t TSOEN:1;
      uint64_t DBGMEMA:1;
      uint64_t AVSEL:1;
      uint64_t reservedSpace1:2;
      uint64_t LPMODEEN:1;
      uint64_t HASHTBLSZ:2;
      uint64_t reservedSpace2:1;
      uint64_t L3_L4_FILTER:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_HW_FEAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXQCNT:4;
      uint64_t reservedSpace0:2;
      uint64_t TXQCNT:4;
      uint64_t reservedSpace1:2;
      uint64_t RXCHCNT:4;
      uint64_t reservedSpace2:2;
      uint64_t TXCHCNT:4;
      uint64_t reservedSpace3:2;
      uint64_t PPSOUTNUM:3;
      uint64_t reservedSpace4:1;
      uint64_t AUXSNAPNUM:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_HW_FEAT2;

  uint8_t res9[216];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB:1;
      uint64_t reservedSpace0:1;
      uint64_t MOC:2;
      uint64_t reservedSpace1:4;
      uint64_t CR:4;
      uint64_t NTC:3;
      uint64_t reservedSpace2:1;
      uint64_t RDA:5;
      uint64_t PA:5;
      uint64_t BTB:1;
      uint64_t PSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_MDIO_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_MDIO_DATA;

  uint8_t res10[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A47_32:16;
      uint64_t DCS:1;
      uint64_t reservedSpace0:14;
      uint64_t AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_ADDR_HIGH;

  uint8_t res11[508];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_ADDR_LOW;

  uint8_t res12[1532];

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
      uint64_t TADDREG:1;
      uint64_t reservedSpace0:2;
      uint64_t TSENALL:1;
      uint64_t TSCTRLSSR:1;
      uint64_t TSVER2ENA:1;
      uint64_t TSIPENA:1;
      uint64_t TSIPV6ENA:1;
      uint64_t TSIPV4ENA:1;
      uint64_t TSEVTENA:1;
      uint64_t TSMSTRENA:1;
      uint64_t SNAPTYPSEL:2;
      uint64_t TSENMACADDR:1;
      uint64_t reservedSpace1:5;
      uint64_t TXTTSSTSM:1;
      uint64_t reservedSpace2:3;
      uint64_t AV8021ASMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_TIMESTAMP_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SSINC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_SUB_SCND_INCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_SYS_TIME_SCND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSSS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_SYS_TIME_NSCND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_SYS_TIME_SCND_UPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSSS:31;
      uint64_t ADDSUB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_SYS_TIME_NSCND_UPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_SYS_TIMESTMP_ADDEND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSHWR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_SYS_TIME_HWORD_SCND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSSOVF:1;
      uint64_t TSTARGT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_SYS_TIMESTMP_STAT;

  uint8_t res13[220];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DTXSTS:1;
      uint64_t RAA:1;
      uint64_t reservedSpace1:2;
      uint64_t SCHALG:2;
      uint64_t reservedSpace2:1;
      uint64_t CNTPRST:1;
      uint64_t CNTCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTL_OP_MODE;

  uint8_t res14[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Q0IS:1;
      uint64_t Q1IS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTL_INTR_STAT;

  uint8_t res15[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Q0MDMACH:1;
      uint64_t reservedSpace0:3;
      uint64_t Q0DDMACH:1;
      uint64_t reservedSpace1:3;
      uint64_t Q1MDMACH:1;
      uint64_t reservedSpace2:3;
      uint64_t Q1DDMACH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTL_RXQ_DMA_MAP;

  uint8_t res16[972];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWR:1;
      uint64_t DA:1;
      uint64_t TAA:3;
      uint64_t reservedSpace0:6;
      uint64_t TXPR:1;
      uint64_t PR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB:1;
      uint64_t reservedSpace0:11;
      uint64_t AAL:1;
      uint64_t reservedSpace1:1;
      uint64_t MB:1;
      uint64_t RB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SYSBUS_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DC0IS:1;
      uint64_t DC1IS:1;
      uint64_t reservedSpace0:14;
      uint64_t MTLIS:1;
      uint64_t MACIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_INTR_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AHSTS:1;
      uint64_t reservedSpace0:7;
      uint64_t RPS0:4;
      uint64_t TPS0:4;
      uint64_t RPS1:4;
      uint64_t TPS1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DBG_STAT;

};

#define ENET (*(volatile struct ENET_tag *) 0x40092000)

struct ENET_MTL_QUEUE_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTQ:1;
      uint64_t TSF:1;
      uint64_t TXQEN:2;
      uint64_t TTC:3;
      uint64_t reservedSpace0:9;
      uint64_t TQS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTL_TXQx_OP_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UFFRMCNT:11;
      uint64_t UFCNTOVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTL_TXQx_UNDRFLW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXQPAUSED:1;
      uint64_t TRCSTS:2;
      uint64_t TWCSTS:1;
      uint64_t TXQSTS:1;
      uint64_t TXSTSFSTS:1;
      uint64_t reservedSpace0:10;
      uint64_t PTXQ:3;
      uint64_t reservedSpace1:1;
      uint64_t STSXSTSF:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTL_TXQx_DBG;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ABS:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTL_TXQx_ETS_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISCQW:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTL_TXQx_QNTM_WGHT;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXUNFIS:1;
      uint64_t ABPSIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXUIE:1;
      uint64_t ABPSIE:1;
      uint64_t reservedSpace1:6;
      uint64_t RXOVFIS:1;
      uint64_t reservedSpace2:7;
      uint64_t RXOIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTL_TXQx_INTCTRL_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC_bitfield:2;
      uint64_t reservedSpace0:1;
      uint64_t FUP:1;
      uint64_t FEP:1;
      uint64_t RSF:1;
      uint64_t DIS_TCP_EF:1;
      uint64_t reservedSpace1:13;
      uint64_t RQS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTL_RXQx_OP_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVFPKTCNT:11;
      uint64_t OVFCNTOVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTL_RXQx_MISSPKT_OVRFLW_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RWCSTS:1;
      uint64_t RRCSTS:2;
      uint64_t reservedSpace0:1;
      uint64_t RXQSTS:2;
      uint64_t reservedSpace1:10;
      uint64_t PRXQ:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTL_RXQx_DBG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXQ_WEGT:3;
      uint64_t RXQ_FRM_ARBIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTL_RXQx_CTRL;

};

#define ENET_MTL_QUEUE_0 (*(volatile struct ENET_MTL_QUEUE_0_tag *) 0x40092d00)

struct ENET_MTL_QUEUE_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTQ:1;
      uint64_t TSF:1;
      uint64_t TXQEN:2;
      uint64_t TTC:3;
      uint64_t reservedSpace0:9;
      uint64_t TQS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTL_TXQx_OP_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UFFRMCNT:11;
      uint64_t UFCNTOVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTL_TXQx_UNDRFLW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXQPAUSED:1;
      uint64_t TRCSTS:2;
      uint64_t TWCSTS:1;
      uint64_t TXQSTS:1;
      uint64_t TXSTSFSTS:1;
      uint64_t reservedSpace0:10;
      uint64_t PTXQ:3;
      uint64_t reservedSpace1:1;
      uint64_t STSXSTSF:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTL_TXQx_DBG;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ABS:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTL_TXQx_ETS_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISCQW:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTL_TXQx_QNTM_WGHT;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXUNFIS:1;
      uint64_t ABPSIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXUIE:1;
      uint64_t ABPSIE:1;
      uint64_t reservedSpace1:6;
      uint64_t RXOVFIS:1;
      uint64_t reservedSpace2:7;
      uint64_t RXOIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTL_TXQx_INTCTRL_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC_bitfield:2;
      uint64_t reservedSpace0:1;
      uint64_t FUP:1;
      uint64_t FEP:1;
      uint64_t RSF:1;
      uint64_t DIS_TCP_EF:1;
      uint64_t reservedSpace1:13;
      uint64_t RQS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTL_RXQx_OP_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVFPKTCNT:11;
      uint64_t OVFCNTOVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTL_RXQx_MISSPKT_OVRFLW_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RWCSTS:1;
      uint64_t RRCSTS:2;
      uint64_t reservedSpace0:1;
      uint64_t RXQSTS:2;
      uint64_t reservedSpace1:10;
      uint64_t PRXQ:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTL_RXQx_DBG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXQ_WEGT:3;
      uint64_t RXQ_FRM_ARBIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTL_RXQx_CTRL;

};

#define ENET_MTL_QUEUE_1 (*(volatile struct ENET_MTL_QUEUE_1_tag *) 0x40092d40)

struct ENET_DMA_CH_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t PBLx8:1;
      uint64_t reservedSpace1:1;
      uint64_t DSL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ST:1;
      uint64_t TCW:3;
      uint64_t OSF:1;
      uint64_t reservedSpace0:11;
      uint64_t TxPBL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_TX_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t reservedSpace0:2;
      uint64_t RBSZ:12;
      uint64_t reservedSpace1:1;
      uint64_t RxPBL:6;
      uint64_t reservedSpace2:9;
      uint64_t RPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_RX_CTRL;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t STL:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_TXDESC_LIST_ADDR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SRL:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_RXDESC_LIST_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TDTP:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_TXDESC_TAIL_PTR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RDTP:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_RXDESC_TAIL_PTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDRL:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_TXDESC_RING_LENGTH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRL:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_RXDESC_RING_LENGTH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIE:1;
      uint64_t TSE:1;
      uint64_t TBUE:1;
      uint64_t reservedSpace0:3;
      uint64_t RIE:1;
      uint64_t RBUE:1;
      uint64_t RSE:1;
      uint64_t RWTE:1;
      uint64_t ETIE:1;
      uint64_t ERIE:1;
      uint64_t FBEE:1;
      uint64_t reservedSpace1:1;
      uint64_t AIE:1;
      uint64_t NIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_INT_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIWT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_RX_INT_WDTIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESC:1;
      uint64_t ASC:1;
      uint64_t reservedSpace0:14;
      uint64_t RSN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_SLOT_FUNC_CTRL_STAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_CUR_HST_TXDESC;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_CUR_HST_RXDESC;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_CUR_HST_TXBUF;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_CUR_HST_RXBUF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI:1;
      uint64_t TPS:1;
      uint64_t TBU:1;
      uint64_t reservedSpace0:3;
      uint64_t RI:1;
      uint64_t RBU:1;
      uint64_t RPS:1;
      uint64_t RWT:1;
      uint64_t ETI:1;
      uint64_t ERI:1;
      uint64_t FBE:1;
      uint64_t reservedSpace1:1;
      uint64_t AIS:1;
      uint64_t NIS:1;
      uint64_t EB:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_STAT;

};

#define ENET_DMA_CH_0 (*(volatile struct ENET_DMA_CH_0_tag *) 0x40093100)

struct ENET_DMA_CH_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t PBLx8:1;
      uint64_t reservedSpace1:1;
      uint64_t DSL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ST:1;
      uint64_t TCW:3;
      uint64_t OSF:1;
      uint64_t reservedSpace0:11;
      uint64_t TxPBL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_TX_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t reservedSpace0:2;
      uint64_t RBSZ:12;
      uint64_t reservedSpace1:1;
      uint64_t RxPBL:6;
      uint64_t reservedSpace2:9;
      uint64_t RPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_RX_CTRL;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t STL:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_TXDESC_LIST_ADDR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SRL:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_RXDESC_LIST_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TDTP:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_TXDESC_TAIL_PTR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RDTP:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_RXDESC_TAIL_PTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDRL:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_TXDESC_RING_LENGTH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRL:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_RXDESC_RING_LENGTH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIE:1;
      uint64_t TSE:1;
      uint64_t TBUE:1;
      uint64_t reservedSpace0:3;
      uint64_t RIE:1;
      uint64_t RBUE:1;
      uint64_t RSE:1;
      uint64_t RWTE:1;
      uint64_t ETIE:1;
      uint64_t ERIE:1;
      uint64_t FBEE:1;
      uint64_t reservedSpace1:1;
      uint64_t AIE:1;
      uint64_t NIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_INT_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIWT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_RX_INT_WDTIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESC:1;
      uint64_t ASC:1;
      uint64_t reservedSpace0:14;
      uint64_t RSN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_SLOT_FUNC_CTRL_STAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_CUR_HST_TXDESC;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_CUR_HST_RXDESC;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_CUR_HST_TXBUF;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_CUR_HST_RXBUF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI:1;
      uint64_t TPS:1;
      uint64_t TBU:1;
      uint64_t reservedSpace0:3;
      uint64_t RI:1;
      uint64_t RBU:1;
      uint64_t RPS:1;
      uint64_t RWT:1;
      uint64_t ETI:1;
      uint64_t ERI:1;
      uint64_t FBE:1;
      uint64_t reservedSpace1:1;
      uint64_t AIS:1;
      uint64_t NIS:1;
      uint64_t EB:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHx_STAT;

};

#define ENET_DMA_CH_1 (*(volatile struct ENET_DMA_CH_1_tag *) 0x40093180)

struct USBHSD_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEV_ADDR:7;
      uint64_t DEV_EN:1;
      uint64_t SETUP:1;
      uint64_t FORCE_NEEDCLK:1;
      uint64_t FORCE_VBUS:1;
      uint64_t LPM_SUP:1;
      uint64_t INTONNAK_AO:1;
      uint64_t INTONNAK_AI:1;
      uint64_t INTONNAK_CO:1;
      uint64_t INTONNAK_CI:1;
      uint64_t DCON:1;
      uint64_t DSUS:1;
      uint64_t reservedSpace0:1;
      uint64_t LPM_SUS:1;
      uint64_t LPM_REWP:1;
      uint64_t reservedSpace1:1;
      uint64_t Speed:2;
      uint64_t DCON_C:1;
      uint64_t DSUS_C:1;
      uint64_t DRES_C:1;
      uint64_t reservedSpace2:1;
      uint64_t VBUS_DEBOUNCED:1;
      uint64_t PHY_TEST_MODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEVCMDSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAME_NR:11;
      uint64_t ERR_CODE:4;
      uint64_t reservedSpace0:1;
      uint64_t Minrev:8;
      uint64_t Majrev:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t EP_LIST_PRG:12;
      uint64_t EP_LIST_FIXED:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPLISTSTART;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA_BUF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATABUFSTART;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HIRD_HW:4;
      uint64_t HIRD_SW:4;
      uint64_t DATA_PENDING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SKIP:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPSKIP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t BUF:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPINUSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t BUF_SB:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPBUFCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EP0OUT:1;
      uint64_t EP0IN:1;
      uint64_t EP1OUT:1;
      uint64_t EP1IN:1;
      uint64_t EP2OUT:1;
      uint64_t EP2IN:1;
      uint64_t EP3OUT:1;
      uint64_t EP3IN:1;
      uint64_t EP4OUT:1;
      uint64_t EP4IN:1;
      uint64_t EP5OUT:1;
      uint64_t EP5IN:1;
      uint64_t reservedSpace0:18;
      uint64_t FRAME_INT:1;
      uint64_t DEV_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EP_INT_EN:12;
      uint64_t reservedSpace0:18;
      uint64_t FRAME_INT_EN:1;
      uint64_t DEV_INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EP_SET_INT:12;
      uint64_t reservedSpace0:18;
      uint64_t FRAME_SET_INT:1;
      uint64_t DEV_SET_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSETSTAT;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOGGLE:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPTOGGLE;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHY_ADDR:8;
      uint64_t PHY_WDATA:8;
      uint64_t PHY_RDATA:8;
      uint64_t PHY_RW:1;
      uint64_t PHY_ACCESS:1;
      uint64_t reservedSpace0:5;
      uint64_t PHY_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ULPIDEBUG;

};

#define USBHSD (*(volatile struct USBHSD_tag *) 0x40094000)

struct USART5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t DATALEN:2;
      uint64_t PARITYSEL:2;
      uint64_t STOPLEN:1;
      uint64_t MODE32K:1;
      uint64_t LINMODE:1;
      uint64_t CTSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t SYNCEN:1;
      uint64_t CLKPOL:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMST:1;
      uint64_t LOOP:1;
      uint64_t IOMODE:1;
      uint64_t reservedSpace3:1;
      uint64_t OETA:1;
      uint64_t AUTOADDR:1;
      uint64_t OESEL:1;
      uint64_t OEPOL:1;
      uint64_t RXPOL:1;
      uint64_t TXPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TXBRKEN:1;
      uint64_t ADDRDET:1;
      uint64_t reservedSpace1:3;
      uint64_t TXDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t CC:1;
      uint64_t CLRCCONRX:1;
      uint64_t reservedSpace3:6;
      uint64_t AUTOBAUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXIDLE:1;
      uint64_t CTS:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISSTAT:1;
      uint64_t reservedSpace2:3;
      uint64_t RXBRK:1;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLEEN:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSEN:1;
      uint64_t TXDISEN:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKEN:1;
      uint64_t STARTEN:1;
      uint64_t FRAMERREN:1;
      uint64_t PARITYERREN:1;
      uint64_t RXNOISEEN:1;
      uint64_t ABERREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLECLR:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSCLR:1;
      uint64_t TXDISCLR:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKCLR:1;
      uint64_t STARTCLR:1;
      uint64_t FRAMERRCLR:1;
      uint64_t PARITYERRCLR:1;
      uint64_t RXNOISECLR:1;
      uint64_t ABERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRGVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISINT:1;
      uint64_t reservedSpace2:1;
      uint64_t OVERRUNINT:1;
      uint64_t reservedSpace3:2;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSRVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR;

  uint8_t res1[3536];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
      uint64_t POPDBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

};

#define USART5 (*(volatile struct USART5_tag *) 0x40096000)

struct SPI5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t MASTER:1;
      uint64_t LSBF:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t reservedSpace1:1;
      uint64_t LOOP:1;
      uint64_t SPOL0:1;
      uint64_t SPOL1:1;
      uint64_t SPOL2:1;
      uint64_t SPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRE_DELAY:4;
      uint64_t POST_DELAY:4;
      uint64_t FRAME_DELAY:4;
      uint64_t TRANSFER_DELAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t STALLED:1;
      uint64_t ENDTRANSFER:1;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res1[2516];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
      uint64_t POPDBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXSSEL0_N:1;
      uint64_t TXSSEL1_N:1;
      uint64_t TXSSEL2_N:1;
      uint64_t TXSSEL3_N:1;
      uint64_t EOT:1;
      uint64_t EOF:1;
      uint64_t RXIGNORE:1;
      uint64_t reservedSpace0:1;
      uint64_t LEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

};

#define SPI5 (*(volatile struct SPI5_tag *) 0x40096400)

struct I2C5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTEN:1;
      uint64_t SLVEN:1;
      uint64_t MONEN:1;
      uint64_t TIMEOUTEN:1;
      uint64_t MONCLKSTR:1;
      uint64_t HSCAPABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t MSTSTATE:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace1:1;
      uint64_t SLVPENDING:1;
      uint64_t SLVSTATE:2;
      uint64_t SLVNOTSTR:1;
      uint64_t SLVIDX:2;
      uint64_t SLVSEL:1;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t MONACTIVE:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace2:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGEN:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERREN:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTREN:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELEN:1;
      uint64_t MONRDYEN:1;
      uint64_t MONOVEN:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLEEN:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTEN:1;
      uint64_t SCLTIMEOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGCLR:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERRCLR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGCLR:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTRCLR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELCLR:1;
      uint64_t MONRDYCLR:1;
      uint64_t MONOVCLR:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLECLR:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTCLR:1;
      uint64_t SCLTIMEOUTCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOMIN:4;
      uint64_t TO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDING:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTCONTINUE:1;
      uint64_t MSTSTART:1;
      uint64_t MSTSTOP:1;
      uint64_t MSTDMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTSCLLOW:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTSCLHIGH:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTDAT;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLVCONTINUE:1;
      uint64_t SLVNACK:1;
      uint64_t reservedSpace0:1;
      uint64_t SLVDMA:1;
      uint64_t reservedSpace1:4;
      uint64_t AUTOACK:1;
      uint64_t AUTOMATCHREAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVDAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUALMODE0:1;
      uint64_t SLVQUAL0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVQUAL0;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MONRXDAT:8;
      uint64_t MONSTART:1;
      uint64_t MONRESTART:1;
      uint64_t MONNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MONRXDAT;

};

#define I2C5 (*(volatile struct I2C5_tag *) 0x40096800)

struct USART6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t DATALEN:2;
      uint64_t PARITYSEL:2;
      uint64_t STOPLEN:1;
      uint64_t MODE32K:1;
      uint64_t LINMODE:1;
      uint64_t CTSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t SYNCEN:1;
      uint64_t CLKPOL:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMST:1;
      uint64_t LOOP:1;
      uint64_t IOMODE:1;
      uint64_t reservedSpace3:1;
      uint64_t OETA:1;
      uint64_t AUTOADDR:1;
      uint64_t OESEL:1;
      uint64_t OEPOL:1;
      uint64_t RXPOL:1;
      uint64_t TXPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TXBRKEN:1;
      uint64_t ADDRDET:1;
      uint64_t reservedSpace1:3;
      uint64_t TXDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t CC:1;
      uint64_t CLRCCONRX:1;
      uint64_t reservedSpace3:6;
      uint64_t AUTOBAUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXIDLE:1;
      uint64_t CTS:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISSTAT:1;
      uint64_t reservedSpace2:3;
      uint64_t RXBRK:1;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLEEN:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSEN:1;
      uint64_t TXDISEN:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKEN:1;
      uint64_t STARTEN:1;
      uint64_t FRAMERREN:1;
      uint64_t PARITYERREN:1;
      uint64_t RXNOISEEN:1;
      uint64_t ABERREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLECLR:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSCLR:1;
      uint64_t TXDISCLR:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKCLR:1;
      uint64_t STARTCLR:1;
      uint64_t FRAMERRCLR:1;
      uint64_t PARITYERRCLR:1;
      uint64_t RXNOISECLR:1;
      uint64_t ABERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRGVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISINT:1;
      uint64_t reservedSpace2:1;
      uint64_t OVERRUNINT:1;
      uint64_t reservedSpace3:2;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSRVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR;

  uint8_t res1[3536];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
      uint64_t POPDBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

};

#define USART6 (*(volatile struct USART6_tag *) 0x40097000)

struct I2S0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAINENABLE:1;
      uint64_t DATAPAUSE:1;
      uint64_t PAIRCOUNT:2;
      uint64_t MSTSLVCFG:2;
      uint64_t MODE:2;
      uint64_t RIGHTLOW:1;
      uint64_t LEFTJUST:1;
      uint64_t ONECHANNEL:1;
      uint64_t PDMDATA:1;
      uint64_t SCK_POL:1;
      uint64_t WS_POL:1;
      uint64_t reservedSpace0:2;
      uint64_t DATALEN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAMELEN:9;
      uint64_t reservedSpace0:7;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  uint8_t res1[480];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t TXI2SE0:1;
      uint64_t PACK48:1;
      uint64_t SIZE:2;
      uint64_t reservedSpace0:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
      uint64_t POPDBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR48H;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD48H;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD48HNOPOP;

  uint8_t res6[4020];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Aperture:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define I2S0 (*(volatile struct I2S0_tag *) 0x40097c00)

struct I2S0_SECCHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S0_SECCHANNEL_1 (*(volatile struct I2S0_SECCHANNEL_1_tag *) 0x40097020)

struct I2S0_SECCHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S0_SECCHANNEL_2 (*(volatile struct I2S0_SECCHANNEL_2_tag *) 0x40097040)

struct I2S0_SECCHANNEL_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S0_SECCHANNEL_3 (*(volatile struct I2S0_SECCHANNEL_3_tag *) 0x40097060)

struct I2C6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTEN:1;
      uint64_t SLVEN:1;
      uint64_t MONEN:1;
      uint64_t TIMEOUTEN:1;
      uint64_t MONCLKSTR:1;
      uint64_t HSCAPABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t MSTSTATE:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace1:1;
      uint64_t SLVPENDING:1;
      uint64_t SLVSTATE:2;
      uint64_t SLVNOTSTR:1;
      uint64_t SLVIDX:2;
      uint64_t SLVSEL:1;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t MONACTIVE:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace2:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGEN:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERREN:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTREN:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELEN:1;
      uint64_t MONRDYEN:1;
      uint64_t MONOVEN:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLEEN:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTEN:1;
      uint64_t SCLTIMEOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGCLR:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERRCLR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGCLR:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTRCLR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELCLR:1;
      uint64_t MONRDYCLR:1;
      uint64_t MONOVCLR:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLECLR:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTCLR:1;
      uint64_t SCLTIMEOUTCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOMIN:4;
      uint64_t TO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDING:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTCONTINUE:1;
      uint64_t MSTSTART:1;
      uint64_t MSTSTOP:1;
      uint64_t MSTDMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTSCLLOW:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTSCLHIGH:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTDAT;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLVCONTINUE:1;
      uint64_t SLVNACK:1;
      uint64_t reservedSpace0:1;
      uint64_t SLVDMA:1;
      uint64_t reservedSpace1:4;
      uint64_t AUTOACK:1;
      uint64_t AUTOMATCHREAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVDAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUALMODE0:1;
      uint64_t SLVQUAL0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVQUAL0;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MONRXDAT:8;
      uint64_t MONSTART:1;
      uint64_t MONRESTART:1;
      uint64_t MONNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MONRXDAT;

};

#define I2C6 (*(volatile struct I2C6_tag *) 0x40097800)

struct SPI6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t MASTER:1;
      uint64_t LSBF:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t reservedSpace1:1;
      uint64_t LOOP:1;
      uint64_t SPOL0:1;
      uint64_t SPOL1:1;
      uint64_t SPOL2:1;
      uint64_t SPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRE_DELAY:4;
      uint64_t POST_DELAY:4;
      uint64_t FRAME_DELAY:4;
      uint64_t TRANSFER_DELAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t STALLED:1;
      uint64_t ENDTRANSFER:1;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res1[2516];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
      uint64_t POPDBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXSSEL0_N:1;
      uint64_t TXSSEL1_N:1;
      uint64_t TXSSEL2_N:1;
      uint64_t TXSSEL3_N:1;
      uint64_t EOT:1;
      uint64_t EOF:1;
      uint64_t RXIGNORE:1;
      uint64_t reservedSpace0:1;
      uint64_t LEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

};

#define SPI6 (*(volatile struct SPI6_tag *) 0x40097400)

struct I2C7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTEN:1;
      uint64_t SLVEN:1;
      uint64_t MONEN:1;
      uint64_t TIMEOUTEN:1;
      uint64_t MONCLKSTR:1;
      uint64_t HSCAPABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t MSTSTATE:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace1:1;
      uint64_t SLVPENDING:1;
      uint64_t SLVSTATE:2;
      uint64_t SLVNOTSTR:1;
      uint64_t SLVIDX:2;
      uint64_t SLVSEL:1;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t MONACTIVE:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace2:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGEN:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERREN:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTREN:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELEN:1;
      uint64_t MONRDYEN:1;
      uint64_t MONOVEN:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLEEN:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTEN:1;
      uint64_t SCLTIMEOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGCLR:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERRCLR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGCLR:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTRCLR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELCLR:1;
      uint64_t MONRDYCLR:1;
      uint64_t MONOVCLR:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLECLR:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTCLR:1;
      uint64_t SCLTIMEOUTCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOMIN:4;
      uint64_t TO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDING:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTCONTINUE:1;
      uint64_t MSTSTART:1;
      uint64_t MSTSTOP:1;
      uint64_t MSTDMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTSCLLOW:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTSCLHIGH:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTDAT;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLVCONTINUE:1;
      uint64_t SLVNACK:1;
      uint64_t reservedSpace0:1;
      uint64_t SLVDMA:1;
      uint64_t reservedSpace1:4;
      uint64_t AUTOACK:1;
      uint64_t AUTOMATCHREAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVDAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUALMODE0:1;
      uint64_t SLVQUAL0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVQUAL0;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MONRXDAT:8;
      uint64_t MONSTART:1;
      uint64_t MONRESTART:1;
      uint64_t MONNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MONRXDAT;

};

#define I2C7 (*(volatile struct I2C7_tag *) 0x40098800)

struct SPI7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t MASTER:1;
      uint64_t LSBF:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t reservedSpace1:1;
      uint64_t LOOP:1;
      uint64_t SPOL0:1;
      uint64_t SPOL1:1;
      uint64_t SPOL2:1;
      uint64_t SPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRE_DELAY:4;
      uint64_t POST_DELAY:4;
      uint64_t FRAME_DELAY:4;
      uint64_t TRANSFER_DELAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t STALLED:1;
      uint64_t ENDTRANSFER:1;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res1[2516];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
      uint64_t POPDBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXSSEL0_N:1;
      uint64_t TXSSEL1_N:1;
      uint64_t TXSSEL2_N:1;
      uint64_t TXSSEL3_N:1;
      uint64_t EOT:1;
      uint64_t EOF:1;
      uint64_t RXIGNORE:1;
      uint64_t reservedSpace0:1;
      uint64_t LEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

};

#define SPI7 (*(volatile struct SPI7_tag *) 0x40098400)

struct USART7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t DATALEN:2;
      uint64_t PARITYSEL:2;
      uint64_t STOPLEN:1;
      uint64_t MODE32K:1;
      uint64_t LINMODE:1;
      uint64_t CTSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t SYNCEN:1;
      uint64_t CLKPOL:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMST:1;
      uint64_t LOOP:1;
      uint64_t IOMODE:1;
      uint64_t reservedSpace3:1;
      uint64_t OETA:1;
      uint64_t AUTOADDR:1;
      uint64_t OESEL:1;
      uint64_t OEPOL:1;
      uint64_t RXPOL:1;
      uint64_t TXPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TXBRKEN:1;
      uint64_t ADDRDET:1;
      uint64_t reservedSpace1:3;
      uint64_t TXDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t CC:1;
      uint64_t CLRCCONRX:1;
      uint64_t reservedSpace3:6;
      uint64_t AUTOBAUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXIDLE:1;
      uint64_t CTS:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISSTAT:1;
      uint64_t reservedSpace2:3;
      uint64_t RXBRK:1;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLEEN:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSEN:1;
      uint64_t TXDISEN:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKEN:1;
      uint64_t STARTEN:1;
      uint64_t FRAMERREN:1;
      uint64_t PARITYERREN:1;
      uint64_t RXNOISEEN:1;
      uint64_t ABERREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLECLR:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSCLR:1;
      uint64_t TXDISCLR:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKCLR:1;
      uint64_t STARTCLR:1;
      uint64_t FRAMERRCLR:1;
      uint64_t PARITYERRCLR:1;
      uint64_t RXNOISECLR:1;
      uint64_t ABERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRGVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISINT:1;
      uint64_t reservedSpace2:1;
      uint64_t OVERRUNINT:1;
      uint64_t reservedSpace3:2;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSRVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR;

  uint8_t res1[3536];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
      uint64_t POPDBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

};

#define USART7 (*(volatile struct USART7_tag *) 0x40098000)

struct I2S1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAINENABLE:1;
      uint64_t DATAPAUSE:1;
      uint64_t PAIRCOUNT:2;
      uint64_t MSTSLVCFG:2;
      uint64_t MODE:2;
      uint64_t RIGHTLOW:1;
      uint64_t LEFTJUST:1;
      uint64_t ONECHANNEL:1;
      uint64_t PDMDATA:1;
      uint64_t SCK_POL:1;
      uint64_t WS_POL:1;
      uint64_t reservedSpace0:2;
      uint64_t DATALEN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAMELEN:9;
      uint64_t reservedSpace0:7;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  uint8_t res1[480];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t TXI2SE0:1;
      uint64_t PACK48:1;
      uint64_t SIZE:2;
      uint64_t reservedSpace0:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
      uint64_t POPDBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR48H;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD48H;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD48HNOPOP;

  uint8_t res6[4020];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Aperture:8;
      uint64_t Minor_Rev:4;
      uint64_t Major_Rev:4;
      uint64_t ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define I2S1 (*(volatile struct I2S1_tag *) 0x40098c00)

struct I2S1_SECCHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S1_SECCHANNEL_1 (*(volatile struct I2S1_SECCHANNEL_1_tag *) 0x40098020)

struct I2S1_SECCHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S1_SECCHANNEL_2 (*(volatile struct I2S1_SECCHANNEL_2_tag *) 0x40098040)

struct I2S1_SECCHANNEL_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIRENABLE:1;
      uint64_t reservedSpace0:9;
      uint64_t ONECHANNEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t POSITION:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t SLVFRMERR:1;
      uint64_t LR:1;
      uint64_t DATAPAUSED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

};

#define I2S1_SECCHANNEL_3 (*(volatile struct I2S1_SECCHANNEL_3_tag *) 0x40098060)

struct USART8_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t DATALEN:2;
      uint64_t PARITYSEL:2;
      uint64_t STOPLEN:1;
      uint64_t MODE32K:1;
      uint64_t LINMODE:1;
      uint64_t CTSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t SYNCEN:1;
      uint64_t CLKPOL:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMST:1;
      uint64_t LOOP:1;
      uint64_t IOMODE:1;
      uint64_t reservedSpace3:1;
      uint64_t OETA:1;
      uint64_t AUTOADDR:1;
      uint64_t OESEL:1;
      uint64_t OEPOL:1;
      uint64_t RXPOL:1;
      uint64_t TXPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TXBRKEN:1;
      uint64_t ADDRDET:1;
      uint64_t reservedSpace1:3;
      uint64_t TXDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t CC:1;
      uint64_t CLRCCONRX:1;
      uint64_t reservedSpace3:6;
      uint64_t AUTOBAUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXIDLE:1;
      uint64_t CTS:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISSTAT:1;
      uint64_t reservedSpace2:3;
      uint64_t RXBRK:1;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLEEN:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSEN:1;
      uint64_t TXDISEN:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKEN:1;
      uint64_t STARTEN:1;
      uint64_t FRAMERREN:1;
      uint64_t PARITYERREN:1;
      uint64_t RXNOISEEN:1;
      uint64_t ABERREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLECLR:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSCLR:1;
      uint64_t TXDISCLR:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKCLR:1;
      uint64_t STARTCLR:1;
      uint64_t FRAMERRCLR:1;
      uint64_t PARITYERRCLR:1;
      uint64_t RXNOISECLR:1;
      uint64_t ABERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRGVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISINT:1;
      uint64_t reservedSpace2:1;
      uint64_t OVERRUNINT:1;
      uint64_t reservedSpace3:2;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSRVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR;

  uint8_t res1[3536];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
      uint64_t POPDBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

};

#define USART8 (*(volatile struct USART8_tag *) 0x40099000)

struct I2C8_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTEN:1;
      uint64_t SLVEN:1;
      uint64_t MONEN:1;
      uint64_t TIMEOUTEN:1;
      uint64_t MONCLKSTR:1;
      uint64_t HSCAPABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t MSTSTATE:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace1:1;
      uint64_t SLVPENDING:1;
      uint64_t SLVSTATE:2;
      uint64_t SLVNOTSTR:1;
      uint64_t SLVIDX:2;
      uint64_t SLVSEL:1;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t MONACTIVE:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace2:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGEN:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERREN:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTREN:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELEN:1;
      uint64_t MONRDYEN:1;
      uint64_t MONOVEN:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLEEN:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTEN:1;
      uint64_t SCLTIMEOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGCLR:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERRCLR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGCLR:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTRCLR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELCLR:1;
      uint64_t MONRDYCLR:1;
      uint64_t MONOVCLR:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLECLR:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTCLR:1;
      uint64_t SCLTIMEOUTCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOMIN:4;
      uint64_t TO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDING:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTCONTINUE:1;
      uint64_t MSTSTART:1;
      uint64_t MSTSTOP:1;
      uint64_t MSTDMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTSCLLOW:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTSCLHIGH:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTDAT;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLVCONTINUE:1;
      uint64_t SLVNACK:1;
      uint64_t reservedSpace0:1;
      uint64_t SLVDMA:1;
      uint64_t reservedSpace1:4;
      uint64_t AUTOACK:1;
      uint64_t AUTOMATCHREAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVDAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUALMODE0:1;
      uint64_t SLVQUAL0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVQUAL0;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MONRXDAT:8;
      uint64_t MONSTART:1;
      uint64_t MONRESTART:1;
      uint64_t MONNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MONRXDAT;

};

#define I2C8 (*(volatile struct I2C8_tag *) 0x40099800)

struct SPI8_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t MASTER:1;
      uint64_t LSBF:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t reservedSpace1:1;
      uint64_t LOOP:1;
      uint64_t SPOL0:1;
      uint64_t SPOL1:1;
      uint64_t SPOL2:1;
      uint64_t SPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRE_DELAY:4;
      uint64_t POST_DELAY:4;
      uint64_t FRAME_DELAY:4;
      uint64_t TRANSFER_DELAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t STALLED:1;
      uint64_t ENDTRANSFER:1;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res1[2516];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
      uint64_t POPDBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXSSEL0_N:1;
      uint64_t TXSSEL1_N:1;
      uint64_t TXSSEL2_N:1;
      uint64_t TXSSEL3_N:1;
      uint64_t EOT:1;
      uint64_t EOF:1;
      uint64_t RXIGNORE:1;
      uint64_t reservedSpace0:1;
      uint64_t LEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

};

#define SPI8 (*(volatile struct SPI8_tag *) 0x40099400)

struct USART9_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t DATALEN:2;
      uint64_t PARITYSEL:2;
      uint64_t STOPLEN:1;
      uint64_t MODE32K:1;
      uint64_t LINMODE:1;
      uint64_t CTSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t SYNCEN:1;
      uint64_t CLKPOL:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMST:1;
      uint64_t LOOP:1;
      uint64_t IOMODE:1;
      uint64_t reservedSpace3:1;
      uint64_t OETA:1;
      uint64_t AUTOADDR:1;
      uint64_t OESEL:1;
      uint64_t OEPOL:1;
      uint64_t RXPOL:1;
      uint64_t TXPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TXBRKEN:1;
      uint64_t ADDRDET:1;
      uint64_t reservedSpace1:3;
      uint64_t TXDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t CC:1;
      uint64_t CLRCCONRX:1;
      uint64_t reservedSpace3:6;
      uint64_t AUTOBAUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXIDLE:1;
      uint64_t CTS:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISSTAT:1;
      uint64_t reservedSpace2:3;
      uint64_t RXBRK:1;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLEEN:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSEN:1;
      uint64_t TXDISEN:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKEN:1;
      uint64_t STARTEN:1;
      uint64_t FRAMERREN:1;
      uint64_t PARITYERREN:1;
      uint64_t RXNOISEEN:1;
      uint64_t ABERREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLECLR:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTSCLR:1;
      uint64_t TXDISCLR:1;
      uint64_t reservedSpace2:4;
      uint64_t DELTARXBRKCLR:1;
      uint64_t STARTCLR:1;
      uint64_t FRAMERRCLR:1;
      uint64_t PARITYERRCLR:1;
      uint64_t RXNOISECLR:1;
      uint64_t ABERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRGVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TXIDLE:1;
      uint64_t reservedSpace1:1;
      uint64_t DELTACTS:1;
      uint64_t TXDISINT:1;
      uint64_t reservedSpace2:1;
      uint64_t OVERRUNINT:1;
      uint64_t reservedSpace3:2;
      uint64_t DELTARXBRK:1;
      uint64_t START:1;
      uint64_t FRAMERRINT:1;
      uint64_t PARITYERRINT:1;
      uint64_t RXNOISEINT:1;
      uint64_t ABERRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSRVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR;

  uint8_t res1[3536];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
      uint64_t POPDBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t FRAMERR:1;
      uint64_t PARITYERR:1;
      uint64_t RXNOISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

};

#define USART9 (*(volatile struct USART9_tag *) 0x4009a000)

struct I2C9_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTEN:1;
      uint64_t SLVEN:1;
      uint64_t MONEN:1;
      uint64_t TIMEOUTEN:1;
      uint64_t MONCLKSTR:1;
      uint64_t HSCAPABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t MSTSTATE:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace1:1;
      uint64_t SLVPENDING:1;
      uint64_t SLVSTATE:2;
      uint64_t SLVNOTSTR:1;
      uint64_t SLVIDX:2;
      uint64_t SLVSEL:1;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t MONACTIVE:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace2:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGEN:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERREN:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTREN:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELEN:1;
      uint64_t MONRDYEN:1;
      uint64_t MONOVEN:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLEEN:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTEN:1;
      uint64_t SCLTIMEOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDINGCLR:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSSCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERRCLR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDINGCLR:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTRCLR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESELCLR:1;
      uint64_t MONRDYCLR:1;
      uint64_t MONOVCLR:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLECLR:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUTCLR:1;
      uint64_t SCLTIMEOUTCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOMIN:4;
      uint64_t TO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTPENDING:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTARBLOSS:1;
      uint64_t reservedSpace1:1;
      uint64_t MSTSTSTPERR:1;
      uint64_t reservedSpace2:1;
      uint64_t SLVPENDING:1;
      uint64_t reservedSpace3:2;
      uint64_t SLVNOTSTR:1;
      uint64_t reservedSpace4:3;
      uint64_t SLVDESEL:1;
      uint64_t MONRDY:1;
      uint64_t MONOV:1;
      uint64_t reservedSpace5:1;
      uint64_t MONIDLE:1;
      uint64_t reservedSpace6:4;
      uint64_t EVENTTIMEOUT:1;
      uint64_t SCLTIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTCONTINUE:1;
      uint64_t MSTSTART:1;
      uint64_t MSTSTOP:1;
      uint64_t MSTDMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTSCLLOW:3;
      uint64_t reservedSpace0:1;
      uint64_t MSTSCLHIGH:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTDAT;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLVCONTINUE:1;
      uint64_t SLVNACK:1;
      uint64_t reservedSpace0:1;
      uint64_t SLVDMA:1;
      uint64_t reservedSpace1:4;
      uint64_t AUTOACK:1;
      uint64_t AUTOMATCHREAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVDAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADISABLE:1;
      uint64_t SLVADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVADR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUALMODE0:1;
      uint64_t SLVQUAL0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLVQUAL0;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MONRXDAT:8;
      uint64_t MONSTART:1;
      uint64_t MONRESTART:1;
      uint64_t MONNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MONRXDAT;

};

#define I2C9 (*(volatile struct I2C9_tag *) 0x4009a800)

struct SPI9_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t MASTER:1;
      uint64_t LSBF:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t reservedSpace1:1;
      uint64_t LOOP:1;
      uint64_t SPOL0:1;
      uint64_t SPOL1:1;
      uint64_t SPOL2:1;
      uint64_t SPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRE_DELAY:4;
      uint64_t POST_DELAY:4;
      uint64_t FRAME_DELAY:4;
      uint64_t TRANSFER_DELAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t STALLED:1;
      uint64_t ENDTRANSFER:1;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSAEN:1;
      uint64_t SSDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SSA:1;
      uint64_t SSD:1;
      uint64_t reservedSpace1:2;
      uint64_t MSTIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res1[2516];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLETX:1;
      uint64_t ENABLERX:1;
      uint64_t reservedSpace0:2;
      uint64_t SIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMATX:1;
      uint64_t DMARX:1;
      uint64_t WAKETX:1;
      uint64_t WAKERX:1;
      uint64_t EMPTYTX:1;
      uint64_t EMPTYRX:1;
      uint64_t POPDBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PERINT:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNOTFULL:1;
      uint64_t RXNOTEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t TXLVL:5;
      uint64_t reservedSpace1:3;
      uint64_t RXLVL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLVLENA:1;
      uint64_t RXLVLENA:1;
      uint64_t reservedSpace0:6;
      uint64_t TXLVL:4;
      uint64_t reservedSpace1:4;
      uint64_t RXLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTRIG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
      uint64_t TXLVL:1;
      uint64_t RXLVL:1;
      uint64_t PERINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOINTSTAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t TXSSEL0_N:1;
      uint64_t TXSSEL1_N:1;
      uint64_t TXSSEL2_N:1;
      uint64_t TXSSEL3_N:1;
      uint64_t EOT:1;
      uint64_t EOF:1;
      uint64_t RXIGNORE:1;
      uint64_t reservedSpace0:1;
      uint64_t LEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWR;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORD;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t RXSSEL0_N:1;
      uint64_t RXSSEL1_N:1;
      uint64_t RXSSEL2_N:1;
      uint64_t RXSSEL3_N:1;
      uint64_t SOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFORDNOPOP;

};

#define SPI9 (*(volatile struct SPI9_tag *) 0x4009a400)

struct SDIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONTROLLER_RESET:1;
      uint64_t FIFO_RESET:1;
      uint64_t DMA_RESET:1;
      uint64_t reservedSpace0:1;
      uint64_t INT_ENABLE:1;
      uint64_t reservedSpace1:1;
      uint64_t READ_WAIT:1;
      uint64_t SEND_IRQ_RESPONSE:1;
      uint64_t ABORT_READ_DATA:1;
      uint64_t SEND_CCSD:1;
      uint64_t SEND_AUTO_STOP_CCSD:1;
      uint64_t CEATA_DEVICE_INTERRUPT_STATUS:1;
      uint64_t reservedSpace2:4;
      uint64_t CARD_VOLTAGE_A0:1;
      uint64_t CARD_VOLTAGE_A1:1;
      uint64_t CARD_VOLTAGE_A2:1;
      uint64_t reservedSpace3:6;
      uint64_t USE_INTERNAL_DMAC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POWER_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWREN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DIVIDER0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCLK_ENABLE:1;
      uint64_t reservedSpace0:15;
      uint64_t CCLK_LOW_POWER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESPONSE_TIMEOUT:8;
      uint64_t DATA_TIMEOUT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CARD_WIDTH0:1;
      uint64_t reservedSpace0:15;
      uint64_t CARD_WIDTH1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCK_SIZE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLKSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BYTE_COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BYTCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDET:1;
      uint64_t RE:1;
      uint64_t CDONE:1;
      uint64_t DTO:1;
      uint64_t TXDR:1;
      uint64_t RXDR:1;
      uint64_t RCRC:1;
      uint64_t DCRC:1;
      uint64_t RTO:1;
      uint64_t DRTO:1;
      uint64_t HTO:1;
      uint64_t FRUN:1;
      uint64_t HLE:1;
      uint64_t SBE:1;
      uint64_t ACD:1;
      uint64_t EBE:1;
      uint64_t SDIO_INT_MASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD_ARG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDARG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD_INDEX:6;
      uint64_t RESPONSE_EXPECT:1;
      uint64_t RESPONSE_LENGTH:1;
      uint64_t CHECK_RESPONSE_CRC:1;
      uint64_t DATA_EXPECTED:1;
      uint64_t READ_WRITE:1;
      uint64_t TRANSFER_MODE:1;
      uint64_t SEND_AUTO_STOP:1;
      uint64_t WAIT_PRVDATA_COMPLETE:1;
      uint64_t STOP_ABORT_CMD:1;
      uint64_t SEND_INITIALIZATION:1;
      uint64_t reservedSpace0:5;
      uint64_t UPDATE_CLOCK_REGISTERS_ONLY:1;
      uint64_t READ_CEATA_DEVICE:1;
      uint64_t CCS_EXPECTED:1;
      uint64_t ENABLE_BOOT:1;
      uint64_t EXPECT_BOOT_ACK:1;
      uint64_t DISABLE_BOOT:1;
      uint64_t BOOT_MODE:1;
      uint64_t VOLT_SWITCH:1;
      uint64_t USE_HOLD_REG:1;
      uint64_t reservedSpace1:1;
      uint64_t START_CMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESPONSE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESP_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESPONSE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESP_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESPONSE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESP_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESPONSE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESP_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDET:1;
      uint64_t RE:1;
      uint64_t CDONE:1;
      uint64_t DTO:1;
      uint64_t TXDR:1;
      uint64_t RXDR:1;
      uint64_t RCRC:1;
      uint64_t DCRC:1;
      uint64_t RTO:1;
      uint64_t DRTO:1;
      uint64_t HTO:1;
      uint64_t FRUN:1;
      uint64_t HLE:1;
      uint64_t SBE:1;
      uint64_t ACD:1;
      uint64_t EBE:1;
      uint64_t SDIO_INTERRUPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MINTSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDET:1;
      uint64_t RE:1;
      uint64_t CDONE:1;
      uint64_t DTO:1;
      uint64_t TXDR:1;
      uint64_t RXDR:1;
      uint64_t RCRC:1;
      uint64_t DCRC:1;
      uint64_t RTO_BAR:1;
      uint64_t DRTO_BDS:1;
      uint64_t HTO:1;
      uint64_t FRUN:1;
      uint64_t HLE:1;
      uint64_t SBE:1;
      uint64_t ACD:1;
      uint64_t EBE:1;
      uint64_t SDIO_INTERRUPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RINTSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFO_RX_WATERMARK:1;
      uint64_t FIFO_TX_WATERMARK:1;
      uint64_t FIFO_EMPTY:1;
      uint64_t FIFO_FULL:1;
      uint64_t CMDFSMSTATES:4;
      uint64_t DATA_3_STATUS:1;
      uint64_t DATA_BUSY:1;
      uint64_t DATA_STATE_MC_BUSY:1;
      uint64_t RESPONSE_INDEX:6;
      uint64_t FIFO_COUNT:13;
      uint64_t DMA_ACK:1;
      uint64_t DMA_REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_WMARK:12;
      uint64_t reservedSpace0:4;
      uint64_t RX_WMARK:12;
      uint64_t DMA_MTS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CARD_DETECT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDETECT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRITE_PROTECT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRTPRT;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANS_CARD_BYTE_COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCBCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANS_FIFO_BYTE_COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBBCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEBOUNCE_COUNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEBNCE;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CARD_RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RST_N;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWR:1;
      uint64_t FB:1;
      uint64_t DSL:5;
      uint64_t DE:1;
      uint64_t PBL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BMOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLDMND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI:1;
      uint64_t RI:1;
      uint64_t FBE:1;
      uint64_t reservedSpace0:1;
      uint64_t DU:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:2;
      uint64_t NIS:1;
      uint64_t AIS:1;
      uint64_t EB:3;
      uint64_t FSM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI:1;
      uint64_t RI:1;
      uint64_t FBE:1;
      uint64_t reservedSpace0:1;
      uint64_t DU:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:2;
      uint64_t NIS:1;
      uint64_t AIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDINTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HBA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUFADDR;

  uint8_t res4[100];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CARDRDTHREN:1;
      uint64_t BSYCLRINTEN:1;
      uint64_t reservedSpace0:14;
      uint64_t CARDTHRESHOLD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CARDTHRCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BACKENDPWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BACKENDPWR;

};

#define SDIO (*(volatile struct SDIO_tag *) 0x4009b000)

struct CANFD0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSJW:4;
      uint64_t DTSEG2:4;
      uint64_t DTSEG1:5;
      uint64_t reservedSpace0:3;
      uint64_t DBRP:5;
      uint64_t reservedSpace1:2;
      uint64_t TDC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t LBCK:1;
      uint64_t TX:2;
      uint64_t RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDC:8;
      uint64_t WEDV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RWD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t CCE:1;
      uint64_t ASM:1;
      uint64_t CSA:1;
      uint64_t CSR:1;
      uint64_t MON:1;
      uint64_t DAR:1;
      uint64_t TEST:1;
      uint64_t FDOE:1;
      uint64_t BSRE:1;
      uint64_t reservedSpace0:2;
      uint64_t PXHD:1;
      uint64_t EFBI:1;
      uint64_t TXP:1;
      uint64_t NISO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NTSEG2:7;
      uint64_t reservedSpace0:1;
      uint64_t NTSEG1:8;
      uint64_t NBRP:9;
      uint64_t NSJW:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NBTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSS:2;
      uint64_t reservedSpace0:14;
      uint64_t TCP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSCC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETOC:1;
      uint64_t TOS:2;
      uint64_t reservedSpace0:13;
      uint64_t TOP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOCC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOCV;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEC:8;
      uint64_t REC:7;
      uint64_t RP:1;
      uint64_t CEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEC:3;
      uint64_t ACT:2;
      uint64_t EP:1;
      uint64_t EW:1;
      uint64_t BO:1;
      uint64_t DLEC:3;
      uint64_t RESI:1;
      uint64_t RBRS:1;
      uint64_t RFDF:1;
      uint64_t PXE:1;
      uint64_t reservedSpace0:1;
      uint64_t TDCV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDCF:7;
      uint64_t reservedSpace0:1;
      uint64_t TDCO:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDCR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RF0N:1;
      uint64_t RF0W:1;
      uint64_t RF0F:1;
      uint64_t RF0L:1;
      uint64_t RF1N:1;
      uint64_t RF1W:1;
      uint64_t RF1F:1;
      uint64_t RF1L:1;
      uint64_t HPM:1;
      uint64_t TC:1;
      uint64_t TCF:1;
      uint64_t TFE:1;
      uint64_t TEFN:1;
      uint64_t TEFW:1;
      uint64_t TEFF:1;
      uint64_t TEFL:1;
      uint64_t TSW:1;
      uint64_t MRAF:1;
      uint64_t TOO:1;
      uint64_t DRX:1;
      uint64_t BEC:1;
      uint64_t BEU:1;
      uint64_t ELO:1;
      uint64_t EP:1;
      uint64_t EW:1;
      uint64_t BO:1;
      uint64_t WDI:1;
      uint64_t PEA:1;
      uint64_t PED:1;
      uint64_t ARA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RF0NE:1;
      uint64_t RF0WE:1;
      uint64_t RF0FE:1;
      uint64_t RF0LE:1;
      uint64_t RF1NE:1;
      uint64_t RF1WE:1;
      uint64_t RF1FE:1;
      uint64_t RF1LE:1;
      uint64_t HPME:1;
      uint64_t TCE:1;
      uint64_t TCFE:1;
      uint64_t TFEE:1;
      uint64_t TEFNE:1;
      uint64_t TEFWE:1;
      uint64_t TEFFE:1;
      uint64_t TEFLE:1;
      uint64_t TSWE:1;
      uint64_t MRAFE:1;
      uint64_t TOOE:1;
      uint64_t DRXE:1;
      uint64_t BECE:1;
      uint64_t BEUE:1;
      uint64_t ELOE:1;
      uint64_t EPE:1;
      uint64_t EWE:1;
      uint64_t BOE:1;
      uint64_t WDIE:1;
      uint64_t PEAE:1;
      uint64_t PEDE:1;
      uint64_t ARAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RF0NL:1;
      uint64_t RF0WL:1;
      uint64_t RF0FL:1;
      uint64_t RF0LL:1;
      uint64_t RF1NL:1;
      uint64_t RF1WL:1;
      uint64_t RF1FL:1;
      uint64_t RF1LL:1;
      uint64_t HPML:1;
      uint64_t TCL:1;
      uint64_t TCFL:1;
      uint64_t TFEL:1;
      uint64_t TEFNL:1;
      uint64_t TEFWL:1;
      uint64_t TEFFL:1;
      uint64_t TEFLL:1;
      uint64_t TSWL:1;
      uint64_t MRAFL:1;
      uint64_t TOOL:1;
      uint64_t DRXL:1;
      uint64_t BECL:1;
      uint64_t BEUL:1;
      uint64_t ELOL:1;
      uint64_t EPL:1;
      uint64_t EWL:1;
      uint64_t BOL:1;
      uint64_t WDIL:1;
      uint64_t PEAL:1;
      uint64_t PEDL:1;
      uint64_t ARAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ILS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EINT0:1;
      uint64_t EINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ILE;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RRFE:1;
      uint64_t RRFS:1;
      uint64_t ANFE:2;
      uint64_t ANFS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLSSA:14;
      uint64_t LSS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIDFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLSSA:14;
      uint64_t LSS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XIDFC;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIDM:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XIDAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BIDX:6;
      uint64_t MSI:2;
      uint64_t FIDX:7;
      uint64_t FLST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NDAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NDAT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FOSA:14;
      uint64_t FOS:7;
      uint64_t reservedSpace1:1;
      uint64_t F0WM:7;
      uint64_t F0OM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXF0C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F0FL:7;
      uint64_t reservedSpace0:1;
      uint64_t F0GI:6;
      uint64_t reservedSpace1:2;
      uint64_t F0PI:6;
      uint64_t reservedSpace2:2;
      uint64_t F0F:1;
      uint64_t RF0L:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXFOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F0AI:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXF0A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RBSA:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXBC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FISA:14;
      uint64_t F1S:7;
      uint64_t reservedSpace1:1;
      uint64_t F1WM:7;
      uint64_t F1OM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXF1C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F1FL:7;
      uint64_t reservedSpace0:1;
      uint64_t F1GI:6;
      uint64_t reservedSpace1:2;
      uint64_t F1PI:6;
      uint64_t reservedSpace2:2;
      uint64_t F1F:1;
      uint64_t RF1L:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXF1S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F1AI:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXF1A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RRFE:3;
      uint64_t reservedSpace0:1;
      uint64_t F1DS:3;
      uint64_t reservedSpace1:1;
      uint64_t RBDS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXESC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TBSA:14;
      uint64_t NDTB:6;
      uint64_t reservedSpace1:2;
      uint64_t TFQS:6;
      uint64_t TFQM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFFL:6;
      uint64_t reservedSpace0:2;
      uint64_t TFGI:5;
      uint64_t reservedSpace1:3;
      uint64_t TFQPI:5;
      uint64_t TFQF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXFQS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBDS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXESC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBTO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBTIE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFIE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBCIE;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t EFSA:14;
      uint64_t EFS:6;
      uint64_t reservedSpace1:2;
      uint64_t EFWM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXEFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFFL:6;
      uint64_t reservedSpace0:2;
      uint64_t EFGI:5;
      uint64_t reservedSpace1:3;
      uint64_t EFPI:6;
      uint64_t reservedSpace2:2;
      uint64_t EFF:1;
      uint64_t TEFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXEFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFAI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXEFA;

  uint8_t res5[260];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MS;

  uint8_t res6[508];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETCP:11;
      uint64_t reservedSpace0:20;
      uint64_t ETCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETSCC;

  uint8_t res7[508];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETSC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETSCV;

};

#define CANFD0 (*(volatile struct CANFD0_tag *) 0x4009d00c)

struct CANFD1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSJW:4;
      uint64_t DTSEG2:4;
      uint64_t DTSEG1:5;
      uint64_t reservedSpace0:3;
      uint64_t DBRP:5;
      uint64_t reservedSpace1:2;
      uint64_t TDC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t LBCK:1;
      uint64_t TX:2;
      uint64_t RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDC:8;
      uint64_t WEDV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RWD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t CCE:1;
      uint64_t ASM:1;
      uint64_t CSA:1;
      uint64_t CSR:1;
      uint64_t MON:1;
      uint64_t DAR:1;
      uint64_t TEST:1;
      uint64_t FDOE:1;
      uint64_t BSRE:1;
      uint64_t reservedSpace0:2;
      uint64_t PXHD:1;
      uint64_t EFBI:1;
      uint64_t TXP:1;
      uint64_t NISO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NTSEG2:7;
      uint64_t reservedSpace0:1;
      uint64_t NTSEG1:8;
      uint64_t NBRP:9;
      uint64_t NSJW:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NBTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSS:2;
      uint64_t reservedSpace0:14;
      uint64_t TCP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSCC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETOC:1;
      uint64_t TOS:2;
      uint64_t reservedSpace0:13;
      uint64_t TOP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOCC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOCV;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEC:8;
      uint64_t REC:7;
      uint64_t RP:1;
      uint64_t CEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEC:3;
      uint64_t ACT:2;
      uint64_t EP:1;
      uint64_t EW:1;
      uint64_t BO:1;
      uint64_t DLEC:3;
      uint64_t RESI:1;
      uint64_t RBRS:1;
      uint64_t RFDF:1;
      uint64_t PXE:1;
      uint64_t reservedSpace0:1;
      uint64_t TDCV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDCF:7;
      uint64_t reservedSpace0:1;
      uint64_t TDCO:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDCR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RF0N:1;
      uint64_t RF0W:1;
      uint64_t RF0F:1;
      uint64_t RF0L:1;
      uint64_t RF1N:1;
      uint64_t RF1W:1;
      uint64_t RF1F:1;
      uint64_t RF1L:1;
      uint64_t HPM:1;
      uint64_t TC:1;
      uint64_t TCF:1;
      uint64_t TFE:1;
      uint64_t TEFN:1;
      uint64_t TEFW:1;
      uint64_t TEFF:1;
      uint64_t TEFL:1;
      uint64_t TSW:1;
      uint64_t MRAF:1;
      uint64_t TOO:1;
      uint64_t DRX:1;
      uint64_t BEC:1;
      uint64_t BEU:1;
      uint64_t ELO:1;
      uint64_t EP:1;
      uint64_t EW:1;
      uint64_t BO:1;
      uint64_t WDI:1;
      uint64_t PEA:1;
      uint64_t PED:1;
      uint64_t ARA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RF0NE:1;
      uint64_t RF0WE:1;
      uint64_t RF0FE:1;
      uint64_t RF0LE:1;
      uint64_t RF1NE:1;
      uint64_t RF1WE:1;
      uint64_t RF1FE:1;
      uint64_t RF1LE:1;
      uint64_t HPME:1;
      uint64_t TCE:1;
      uint64_t TCFE:1;
      uint64_t TFEE:1;
      uint64_t TEFNE:1;
      uint64_t TEFWE:1;
      uint64_t TEFFE:1;
      uint64_t TEFLE:1;
      uint64_t TSWE:1;
      uint64_t MRAFE:1;
      uint64_t TOOE:1;
      uint64_t DRXE:1;
      uint64_t BECE:1;
      uint64_t BEUE:1;
      uint64_t ELOE:1;
      uint64_t EPE:1;
      uint64_t EWE:1;
      uint64_t BOE:1;
      uint64_t WDIE:1;
      uint64_t PEAE:1;
      uint64_t PEDE:1;
      uint64_t ARAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RF0NL:1;
      uint64_t RF0WL:1;
      uint64_t RF0FL:1;
      uint64_t RF0LL:1;
      uint64_t RF1NL:1;
      uint64_t RF1WL:1;
      uint64_t RF1FL:1;
      uint64_t RF1LL:1;
      uint64_t HPML:1;
      uint64_t TCL:1;
      uint64_t TCFL:1;
      uint64_t TFEL:1;
      uint64_t TEFNL:1;
      uint64_t TEFWL:1;
      uint64_t TEFFL:1;
      uint64_t TEFLL:1;
      uint64_t TSWL:1;
      uint64_t MRAFL:1;
      uint64_t TOOL:1;
      uint64_t DRXL:1;
      uint64_t BECL:1;
      uint64_t BEUL:1;
      uint64_t ELOL:1;
      uint64_t EPL:1;
      uint64_t EWL:1;
      uint64_t BOL:1;
      uint64_t WDIL:1;
      uint64_t PEAL:1;
      uint64_t PEDL:1;
      uint64_t ARAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ILS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EINT0:1;
      uint64_t EINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ILE;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RRFE:1;
      uint64_t RRFS:1;
      uint64_t ANFE:2;
      uint64_t ANFS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLSSA:14;
      uint64_t LSS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIDFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLSSA:14;
      uint64_t LSS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XIDFC;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIDM:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XIDAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BIDX:6;
      uint64_t MSI:2;
      uint64_t FIDX:7;
      uint64_t FLST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NDAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NDAT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FOSA:14;
      uint64_t FOS:7;
      uint64_t reservedSpace1:1;
      uint64_t F0WM:7;
      uint64_t F0OM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXF0C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F0FL:7;
      uint64_t reservedSpace0:1;
      uint64_t F0GI:6;
      uint64_t reservedSpace1:2;
      uint64_t F0PI:6;
      uint64_t reservedSpace2:2;
      uint64_t F0F:1;
      uint64_t RF0L:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXFOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F0AI:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXF0A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RBSA:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXBC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FISA:14;
      uint64_t F1S:7;
      uint64_t reservedSpace1:1;
      uint64_t F1WM:7;
      uint64_t F1OM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXF1C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F1FL:7;
      uint64_t reservedSpace0:1;
      uint64_t F1GI:6;
      uint64_t reservedSpace1:2;
      uint64_t F1PI:6;
      uint64_t reservedSpace2:2;
      uint64_t F1F:1;
      uint64_t RF1L:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXF1S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F1AI:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXF1A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RRFE:3;
      uint64_t reservedSpace0:1;
      uint64_t F1DS:3;
      uint64_t reservedSpace1:1;
      uint64_t RBDS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXESC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TBSA:14;
      uint64_t NDTB:6;
      uint64_t reservedSpace1:2;
      uint64_t TFQS:6;
      uint64_t TFQM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFFL:6;
      uint64_t reservedSpace0:2;
      uint64_t TFGI:5;
      uint64_t reservedSpace1:3;
      uint64_t TFQPI:5;
      uint64_t TFQF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXFQS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBDS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXESC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBTO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBTIE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFIE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBCIE;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t EFSA:14;
      uint64_t EFS:6;
      uint64_t reservedSpace1:2;
      uint64_t EFWM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXEFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFFL:6;
      uint64_t reservedSpace0:2;
      uint64_t EFGI:5;
      uint64_t reservedSpace1:3;
      uint64_t EFPI:6;
      uint64_t reservedSpace2:2;
      uint64_t EFF:1;
      uint64_t TEFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXEFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFAI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXEFA;

  uint8_t res5[260];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MS;

  uint8_t res6[508];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETCP:11;
      uint64_t reservedSpace0:20;
      uint64_t ETCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETSCC;

  uint8_t res7[508];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETSC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETSCV;

};

#define CANFD1 (*(volatile struct CANFD1_tag *) 0x4009e00c)

struct ADC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKDIV:8;
      uint64_t ASYNMODE:1;
      uint64_t RESOL:2;
      uint64_t BYPASSCAL:1;
      uint64_t TSAMP:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNELS:12;
      uint64_t TRIGGER:6;
      uint64_t TRIGPOL:1;
      uint64_t SYNCBYPASS:1;
      uint64_t reservedSpace0:6;
      uint64_t START:1;
      uint64_t BURST:1;
      uint64_t SINGLESTEP:1;
      uint64_t LOWPRIO:1;
      uint64_t MODE:1;
      uint64_t SEQ_ENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEQ_CTRL_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNELS:12;
      uint64_t TRIGGER:6;
      uint64_t TRIGPOL:1;
      uint64_t SYNCBYPASS:1;
      uint64_t reservedSpace0:6;
      uint64_t START:1;
      uint64_t BURST:1;
      uint64_t SINGLESTEP:1;
      uint64_t LOWPRIO:1;
      uint64_t MODE:1;
      uint64_t SEQ_ENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEQ_CTRL_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RESULT:12;
      uint64_t THCMPRANGE:2;
      uint64_t THCMPCROSS:2;
      uint64_t reservedSpace1:6;
      uint64_t CHN:4;
      uint64_t OVERRUN:1;
      uint64_t DATAVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEQ_GDAT_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RESULT:12;
      uint64_t THCMPRANGE:2;
      uint64_t THCMPCROSS:2;
      uint64_t reservedSpace1:6;
      uint64_t CHN:4;
      uint64_t OVERRUN:1;
      uint64_t DATAVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEQ_GDAT_B;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RESULT:12;
      uint64_t THCMPRANGE:2;
      uint64_t THCMPCROSS:2;
      uint64_t reservedSpace1:6;
      uint64_t CHANNEL:4;
      uint64_t OVERRUN:1;
      uint64_t DATAVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAT_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RESULT:12;
      uint64_t THCMPRANGE:2;
      uint64_t THCMPCROSS:2;
      uint64_t reservedSpace1:6;
      uint64_t CHANNEL:4;
      uint64_t OVERRUN:1;
      uint64_t DATAVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAT_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RESULT:12;
      uint64_t THCMPRANGE:2;
      uint64_t THCMPCROSS:2;
      uint64_t reservedSpace1:6;
      uint64_t CHANNEL:4;
      uint64_t OVERRUN:1;
      uint64_t DATAVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAT_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RESULT:12;
      uint64_t THCMPRANGE:2;
      uint64_t THCMPCROSS:2;
      uint64_t reservedSpace1:6;
      uint64_t CHANNEL:4;
      uint64_t OVERRUN:1;
      uint64_t DATAVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAT_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RESULT:12;
      uint64_t THCMPRANGE:2;
      uint64_t THCMPCROSS:2;
      uint64_t reservedSpace1:6;
      uint64_t CHANNEL:4;
      uint64_t OVERRUN:1;
      uint64_t DATAVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAT_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RESULT:12;
      uint64_t THCMPRANGE:2;
      uint64_t THCMPCROSS:2;
      uint64_t reservedSpace1:6;
      uint64_t CHANNEL:4;
      uint64_t OVERRUN:1;
      uint64_t DATAVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAT_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RESULT:12;
      uint64_t THCMPRANGE:2;
      uint64_t THCMPCROSS:2;
      uint64_t reservedSpace1:6;
      uint64_t CHANNEL:4;
      uint64_t OVERRUN:1;
      uint64_t DATAVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAT_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RESULT:12;
      uint64_t THCMPRANGE:2;
      uint64_t THCMPCROSS:2;
      uint64_t reservedSpace1:6;
      uint64_t CHANNEL:4;
      uint64_t OVERRUN:1;
      uint64_t DATAVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAT_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RESULT:12;
      uint64_t THCMPRANGE:2;
      uint64_t THCMPCROSS:2;
      uint64_t reservedSpace1:6;
      uint64_t CHANNEL:4;
      uint64_t OVERRUN:1;
      uint64_t DATAVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAT_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RESULT:12;
      uint64_t THCMPRANGE:2;
      uint64_t THCMPCROSS:2;
      uint64_t reservedSpace1:6;
      uint64_t CHANNEL:4;
      uint64_t OVERRUN:1;
      uint64_t DATAVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAT_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RESULT:12;
      uint64_t THCMPRANGE:2;
      uint64_t THCMPCROSS:2;
      uint64_t reservedSpace1:6;
      uint64_t CHANNEL:4;
      uint64_t OVERRUN:1;
      uint64_t DATAVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAT_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RESULT:12;
      uint64_t THCMPRANGE:2;
      uint64_t THCMPCROSS:2;
      uint64_t reservedSpace1:6;
      uint64_t CHANNEL:4;
      uint64_t OVERRUN:1;
      uint64_t DATAVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAT_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t THRLOW:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THR0_LOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t THRLOW:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THR1_LOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t THRHIGH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THR0_HIGH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t THRHIGH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THR1_HIGH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0_THRSEL:1;
      uint64_t CH1_THRSEL:1;
      uint64_t CH2_THRSEL:1;
      uint64_t CH3_THRSEL:1;
      uint64_t CH4_THRSEL:1;
      uint64_t CH5_THRSEL:1;
      uint64_t CH6_THRSEL:1;
      uint64_t CH7_THRSEL:1;
      uint64_t CH8_THRSEL:1;
      uint64_t CH9_THRSEL:1;
      uint64_t CH10_THRSEL:1;
      uint64_t CH11_THRSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHAN_THRSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEQA_INTEN:1;
      uint64_t SEQB_INTEN:1;
      uint64_t OVR_INTEN:1;
      uint64_t ADCMPINTEN0:2;
      uint64_t ADCMPINTEN1:2;
      uint64_t ADCMPINTEN2:2;
      uint64_t ADCMPINTEN3:2;
      uint64_t ADCMPINTEN4:2;
      uint64_t ADCMPINTEN5:2;
      uint64_t ADCMPINTEN6:2;
      uint64_t ADCMPINTEN7:2;
      uint64_t ADCMPINTEN8:2;
      uint64_t ADCMPINTEN9:2;
      uint64_t ADCMPINTEN10:2;
      uint64_t ADCMPINTEN11:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THCMP0:1;
      uint64_t THCMP1:1;
      uint64_t THCMP2:1;
      uint64_t THCMP3:1;
      uint64_t THCMP4:1;
      uint64_t THCMP5:1;
      uint64_t THCMP6:1;
      uint64_t THCMP7:1;
      uint64_t THCMP8:1;
      uint64_t THCMP9:1;
      uint64_t THCMP10:1;
      uint64_t THCMP11:1;
      uint64_t OVERRUN0:1;
      uint64_t OVERRUN1:1;
      uint64_t OVERRUN2:1;
      uint64_t OVERRUN3:1;
      uint64_t OVERRUN4:1;
      uint64_t OVERRUN5:1;
      uint64_t OVERRUN6:1;
      uint64_t OVERRUN7:1;
      uint64_t OVERRUN8:1;
      uint64_t OVERRUN9:1;
      uint64_t OVERRUN10:1;
      uint64_t OVERRUN11:1;
      uint64_t SEQA_OVR:1;
      uint64_t SEQB_OVR:1;
      uint64_t reservedSpace0:2;
      uint64_t SEQA_INT:1;
      uint64_t SEQB_INT:1;
      uint64_t THCMP_INT:1;
      uint64_t OVR_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_ENA:1;
      uint64_t ADC_INIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STARTUP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CALIB:1;
      uint64_t CALREQD:1;
      uint64_t CALVALUE:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALIB;

};

#define ADC0 (*(volatile struct ADC0_tag *) 0x400a0000)

struct USBFSH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t REV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HcRevision;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CBSR:2;
      uint64_t PLE:1;
      uint64_t IE:1;
      uint64_t CLE:1;
      uint64_t BLE:1;
      uint64_t HCFS:2;
      uint64_t reservedSpace0:1;
      uint64_t RWC:1;
      uint64_t RWE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HcControl;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCR:1;
      uint64_t CLF:1;
      uint64_t BLF:1;
      uint64_t OCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HcCommandStatus;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SO:1;
      uint64_t WDH:1;
      uint64_t SF:1;
      uint64_t RD:1;
      uint64_t UE:1;
      uint64_t FNO:1;
      uint64_t RHSC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HcInterruptStatus;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SO:1;
      uint64_t WDH:1;
      uint64_t SF:1;
      uint64_t RD:1;
      uint64_t UE:1;
      uint64_t FNO:1;
      uint64_t RHSC:1;
      uint64_t reservedSpace0:23;
      uint64_t OC:1;
      uint64_t MIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HcInterruptEnable;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SO:1;
      uint64_t WDH:1;
      uint64_t SF:1;
      uint64_t RD:1;
      uint64_t UE:1;
      uint64_t FNO:1;
      uint64_t RHSC:1;
      uint64_t reservedSpace0:23;
      uint64_t OC:1;
      uint64_t MIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HcInterruptDisable;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HCCA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HcHCCA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t PCED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HcPeriodCurrentED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CHED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HcControlHeadED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CCED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HcControlCurrentED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t BHED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HcBulkHeadED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t BCED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HcBulkCurrentED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t DH:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HcDoneHead;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FI:14;
      uint64_t reservedSpace0:2;
      uint64_t FSMPS:15;
      uint64_t FIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HcFmInterval;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FR:4;
      uint64_t reservedSpace0:27;
      uint64_t FRT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HcFmRemaining;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HcFmNumber;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HcPeriodicStart;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LST:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HcLSThreshold;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDP:8;
      uint64_t NPS:1;
      uint64_t PSM:1;
      uint64_t DT:1;
      uint64_t OCPM:1;
      uint64_t NOCP:1;
      uint64_t reservedSpace0:11;
      uint64_t POTPGT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HcRhDescriptorA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ield:16;
      uint64_t PPCM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HcRhDescriptorB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPS:1;
      uint64_t OCI:1;
      uint64_t reservedSpace0:13;
      uint64_t DRWE:1;
      uint64_t LPSC:1;
      uint64_t CCIC:1;
      uint64_t reservedSpace1:13;
      uint64_t CRWE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HcRhStatus;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t PES:1;
      uint64_t PSS:1;
      uint64_t POCI:1;
      uint64_t PRS:1;
      uint64_t reservedSpace0:3;
      uint64_t PPS:1;
      uint64_t LSDA:1;
      uint64_t reservedSpace1:6;
      uint64_t CSC:1;
      uint64_t PESC:1;
      uint64_t PSSC:1;
      uint64_t OCIC:1;
      uint64_t PRSC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HcRhPortStatus;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:1;
      uint64_t reservedSpace0:7;
      uint64_t ID_EN:1;
      uint64_t reservedSpace1:7;
      uint64_t DEV_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PortMode;

};

#define USBFSH (*(volatile struct USBFSH_tag *) 0x400a2000)

struct USBHSH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPLENGTH:8;
      uint64_t reservedSpace0:8;
      uint64_t CHIPID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAPLENGTH_CHIPID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t N_PORTS:4;
      uint64_t PPC:1;
      uint64_t reservedSpace0:11;
      uint64_t P_INDICATOR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCSPARAMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:17;
      uint64_t LPMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCCPARAMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLADJ:6;
      uint64_t reservedSpace0:10;
      uint64_t FRINDEX:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLADJ_FRINDEX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t ATL_CUR:5;
      uint64_t ATL_BASE:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATL_PTD_BASE_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ISO_FIRST:5;
      uint64_t ISO_BASE:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISO_PTD_BASE_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INT_FIRST:5;
      uint64_t INT_BASE:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_PTD_BASE_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DAT_BASE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA_PAYLOAD_BASE_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RS:1;
      uint64_t HCRESET:1;
      uint64_t FLS:2;
      uint64_t reservedSpace0:3;
      uint64_t LHCR:1;
      uint64_t ATL_EN:1;
      uint64_t ISO_EN:1;
      uint64_t INT_EN:1;
      uint64_t reservedSpace1:13;
      uint64_t HIRD:4;
      uint64_t LPM_RWU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBCMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PCD:1;
      uint64_t FLR:1;
      uint64_t reservedSpace1:12;
      uint64_t ATL_IRQ:1;
      uint64_t ISO_IRQ:1;
      uint64_t INT_IRQ:1;
      uint64_t SOF_IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PCDE:1;
      uint64_t FLRE:1;
      uint64_t reservedSpace1:12;
      uint64_t ATL_IRQ_E:1;
      uint64_t ISO_IRQ_E:1;
      uint64_t INT_IRQ_E:1;
      uint64_t SOF_E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBINTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t CSC:1;
      uint64_t PED:1;
      uint64_t PEDC:1;
      uint64_t OCA:1;
      uint64_t OCC:1;
      uint64_t FPR:1;
      uint64_t SUSP:1;
      uint64_t PR:1;
      uint64_t SUS_L1:1;
      uint64_t LS:2;
      uint64_t PP:1;
      uint64_t reservedSpace0:1;
      uint64_t PIC:2;
      uint64_t PTC:4;
      uint64_t PSPD:2;
      uint64_t WOO:1;
      uint64_t SUS_STAT:2;
      uint64_t DEV_ADD:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTSC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ATL_DONE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATL_PTD_DONE_MAP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ATL_SKIP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATL_PTD_SKIP_MAP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISO_DONE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISO_PTD_DONE_MAP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISO_SKIP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISO_PTD_SKIP_MAP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_DONE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_PTD_DONE_MAP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_SKIP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_PTD_SKIP_MAP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ATL_LAST:5;
      uint64_t reservedSpace0:3;
      uint64_t ISO_LAST:5;
      uint64_t reservedSpace1:3;
      uint64_t INT_LAST:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LAST_PTD_INUSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHY_ADDR:8;
      uint64_t PHY_WDATA:8;
      uint64_t PHY_RDATA:8;
      uint64_t PHY_RW:1;
      uint64_t PHY_ACCESS:1;
      uint64_t reservedSpace0:5;
      uint64_t PHY_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UTMIPLUS_ULPI_DEBUG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t reservedSpace0:7;
      uint64_t ID0_EN:1;
      uint64_t reservedSpace1:7;
      uint64_t DEV_ENABLE:1;
      uint64_t reservedSpace2:1;
      uint64_t SW_CTRL_PDCOM:1;
      uint64_t SW_PDCOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTMODE;

};

#define USBHSH (*(volatile struct USBHSH_tag *) 0x400a3000)

