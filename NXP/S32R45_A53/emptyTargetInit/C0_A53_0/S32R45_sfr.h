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

struct MAIN_GPR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DDR:1;
      uint64_t HIF0:1;
      uint64_t HIF1:1;
      uint64_t HIF2:1;
      uint64_t HIF3:1;
      uint64_t UTIL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFE_COH_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMAC0:4;
      uint64_t EMAC1:4;
      uint64_t EMAC2:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFE_EMACX_INTF_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFE_SYS_GEN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFE_SYS_GEN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFE_SYS_GEN2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFE_SYS_GEN3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFE_SYS_GEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CON:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFE_SYS_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRCLAMP:3;
      uint64_t PWRDWN:3;
      uint64_t PWRISO:3;
      uint64_t PWRACK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFE_PWR_CTRL;

  uint8_t res0[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLEEPING:4;
      uint64_t SYSRESETREQ:4;
      uint64_t LLCE_LSPI_TRIG_RX:4;
      uint64_t LLCE_LSPI_TRIG_FM:4;
      uint64_t MISC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LLCE_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXEVENT:4;
      uint64_t LINDIVSEL:1;
      uint64_t LLCE_LSPI_TRIG_IN:4;
      uint64_t LLCE_HTM0_TRC_DIS:1;
      uint64_t LLCE_HTM1_TRC_DIS:1;
      uint64_t PFE_2_LLCE_INT_HS_BP:1;
      uint64_t MISC:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LLCE_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARURGENTB:3;
      uint64_t ARURGENTR:3;
      uint64_t AWURGENT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR_URGENT_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GLOBAL_LDOK_IN0:1;
      uint64_t GLOBAL_LDOK_IN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLXTIM_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GLB_LDOK_OUT0:1;
      uint64_t GLB_LDOK_OUT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLXTIM_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL_FHH:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMU_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOC_NOPEND_TRANS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TERM_EN:1;
      uint64_t TM_SEL0:1;
      uint64_t TM_SEL1:1;
      uint64_t AURORA_MODE:1;
      uint64_t CREF_EN:1;
      uint64_t CLKOUT_OBE:1;
      uint64_t CLKOUT_TX_PREEMPH0:1;
      uint64_t CLKOUT_TX_PREEMPH1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKOUT_PAD_CTRL;

  uint8_t res1[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCIE1_WD_TOGG:4;
      uint64_t PCIE1_RD_TOGG:4;
      uint64_t PCIE0_WD_TOGG:4;
      uint64_t PCIE0_RD_TOGG:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCIE_TOGGLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCIE1_WD_TOGG_DONE_STAT:4;
      uint64_t PCIE1_RD_TOGG_DONE_STAT:4;
      uint64_t PCIE0_WD_TOGG_DONE_STAT:4;
      uint64_t PCIE0_RD_TOGG_DONE_STAT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCIE_TOGGLEDONE_STAT;

  uint8_t res2[72];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USBPWRFLT:1;
      uint64_t ACCEL_FLXNC_REF_DIV:2;
      uint64_t ACCEL_FLXNC_RD0_IDLEREQ:1;
      uint64_t MISC:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GENCTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTRL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GENCTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTRL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GENCTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTRL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GENCTRL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GENSTAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GENSTAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GENSTAT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GENSTAT3;

};

#define MAIN_GPR (*(volatile struct MAIN_GPR_tag *) 0x0)

struct MTR_BIST_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPM:3;
      uint64_t AMODE:3;
      uint64_t MAM:3;
      uint64_t CEN:1;
      uint64_t NOCOMP:1;
      uint64_t IWEN:1;
      uint64_t MC_RST:1;
      uint64_t ODD_EVEN:1;
      uint64_t RDHLD:1;
      uint64_t BURNIN:1;
      uint64_t PMODE:2;
      uint64_t reservedSpace0:2;
      uint64_t CROSSTALK:1;
      uint64_t reservedSpace1:3;
      uint64_t AGEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSEL0:1;
      uint64_t MSEL1:1;
      uint64_t MSEL2:1;
      uint64_t MSEL3:1;
      uint64_t MSEL4:1;
      uint64_t MSEL5:1;
      uint64_t MSEL6:1;
      uint64_t MSEL7:1;
      uint64_t MSEL8:1;
      uint64_t MSEL9:1;
      uint64_t MSEL10:1;
      uint64_t MSEL11:1;
      uint64_t MSEL12:1;
      uint64_t MSEL13:1;
      uint64_t MSEL14:1;
      uint64_t MSEL15:1;
      uint64_t MSEL16:1;
      uint64_t MSEL17:1;
      uint64_t MSEL18:1;
      uint64_t MSEL19:1;
      uint64_t MSEL20:1;
      uint64_t MSEL21:1;
      uint64_t MSEL22:1;
      uint64_t MSEL23:1;
      uint64_t MSEL24:1;
      uint64_t MSEL25:1;
      uint64_t MSEL26:1;
      uint64_t MSEL27:1;
      uint64_t MSEL28:1;
      uint64_t MSEL29:1;
      uint64_t MSEL30:1;
      uint64_t MSEL31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSEL;

  uint8_t res1[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFD0:1;
      uint64_t EFD1:1;
      uint64_t EFD2:1;
      uint64_t EFD3:1;
      uint64_t EFD4:1;
      uint64_t EFD5:1;
      uint64_t EFD6:1;
      uint64_t EFD7:1;
      uint64_t EFD8:1;
      uint64_t EFD9:1;
      uint64_t EFD10:1;
      uint64_t EFD11:1;
      uint64_t EFD12:1;
      uint64_t EFD13:1;
      uint64_t EFD14:1;
      uint64_t EFD15:1;
      uint64_t EFD16:1;
      uint64_t EFD17:1;
      uint64_t EFD18:1;
      uint64_t EFD19:1;
      uint64_t EFD20:1;
      uint64_t EFD21:1;
      uint64_t EFD22:1;
      uint64_t EFD23:1;
      uint64_t EFD24:1;
      uint64_t EFD25:1;
      uint64_t EFD26:1;
      uint64_t EFD27:1;
      uint64_t EFD28:1;
      uint64_t EFD29:1;
      uint64_t EFD30:1;
      uint64_t EFD31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFD;

  uint8_t res2[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BSTART:2;
      uint64_t GALPAT_EN:1;
      uint64_t LBEN:1;
      uint64_t DEAD:1;
      uint64_t FAILED_ONLY:1;
      uint64_t reservedSpace0:6;
      uint64_t SEQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSTART;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRST:1;
      uint64_t SRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRST;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BSTAT:4;
      uint64_t reservedSpace0:1;
      uint64_t HOLD_ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSTAT;

  uint8_t res4[84];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADR;

};

#define MTR_BIST (*(volatile struct MTR_BIST_tag *) 0xc)

struct PMUEVENTOBSERVER_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVTINPSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t CTRSTRTSEL:2;
      uint64_t CTRSTPSEL:2;
      uint64_t CPYCOUNT:1;
      uint64_t CLRCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_29;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_29;

};

#define PMUEVENTOBSERVER (*(volatile struct PMUEVENTOBSERVER_tag *) 0x0)

struct REG_PROT_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR31;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR35;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR34;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR33;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR32;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR39;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR38;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR37;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR36;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR43;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR42;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR41;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR40;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR47;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR46;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR45;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR44;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR51;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR50;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR49;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR48;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR55;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR54;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR53;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR52;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR59;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR58;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR57;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR56;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR63;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR62;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR61;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR60;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR67;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR66;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR65;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR64;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR71;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR70;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR69;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR68;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR75;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR74;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR73;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR72;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR79;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR78;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR77;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR76;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR83;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR82;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR81;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR80;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR87;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR86;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR85;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR84;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR91;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR90;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR89;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR88;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR95;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR94;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR93;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR92;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR99;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR98;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR97;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR96;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR103;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR102;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR101;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR100;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR107;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR106;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR105;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR104;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR111;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR110;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR109;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR108;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR115;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR114;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR113;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR112;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR119;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR118;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR117;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR116;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR123;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR122;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR121;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR120;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR127;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR126;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR125;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR124;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR131;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR130;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR129;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR128;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR135;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR134;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR133;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR132;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR139;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR138;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR137;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR136;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR143;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR142;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR141;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR140;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR147;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR146;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR145;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR144;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR151;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR150;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR149;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR148;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR155;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR154;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR153;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR152;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR159;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR158;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR157;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR156;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR163;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR162;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR161;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR160;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR167;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR166;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR165;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR164;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR171;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR170;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR169;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR168;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR175;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR174;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR173;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR172;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR179;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR178;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR177;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR176;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR183;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR182;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR181;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR180;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR187;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR186;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR185;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR184;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR191;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR190;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR189;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR188;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR195;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR194;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR193;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR192;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR199;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR198;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR197;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR196;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR203;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR202;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR201;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR200;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR207;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR206;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR205;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR204;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR211;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR210;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR209;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR208;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR215;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR214;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR213;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR212;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR219;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR218;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR217;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR216;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR223;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR222;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR221;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR220;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR227;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR226;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR225;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR224;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR231;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR230;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR229;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR228;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR235;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR234;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR233;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR232;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR239;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR238;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR237;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR236;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR243;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR242;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR241;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR240;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR247;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR246;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR245;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR244;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR251;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR250;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR249;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR248;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR255;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR254;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR253;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLB3:1;
      uint64_t SLB2:1;
      uint64_t SLB1:1;
      uint64_t SLB0:1;
      uint64_t WE3:1;
      uint64_t WE2:1;
      uint64_t WE1:1;
      uint64_t WE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SLBR252;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:23;
      uint64_t UAA:1;
      uint64_t reservedSpace1:7;
      uint64_t HLB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

};

#define REG_PROT (*(volatile struct REG_PROT_tag *) 0x800)

struct STBY_GPR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WKUP_SLEEP_DIS:23;
      uint64_t PMIC_VDD_OK_SLEEP_DIS:1;
      uint64_t PMIC_STBY_MODE_SLEEP_DIS:1;
      uint64_t RESET_SLEEP_DIS:1;
      uint64_t POR_SLEEP_DIS:1;
      uint64_t VDET_SLEEP_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLEEP_DISABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WKUP_PUS:23;
      uint64_t reservedSpace0:8;
      uint64_t WKUP_PU_OVERRIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WKUP_PUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GENCTRL0_STBY;

};

#define STBY_GPR (*(volatile struct STBY_GPR_tag *) 0x0)

struct TEST_GPR_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUX_SEL:8;
      uint64_t MODE_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDBY_EXPOSE_WKUP8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUX_SEL:8;
      uint64_t MODE_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDBY_EXPOSE_WKUP9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUX_SEL:8;
      uint64_t MODE_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDBY_EXPOSE_WKUP10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUX_SEL:8;
      uint64_t MODE_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDBY_EXPOSE_WKUP11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUX_SEL:8;
      uint64_t MODE_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDBY_EXPOSE_WKUP12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUX_SEL:8;
      uint64_t MODE_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDBY_EXPOSE_WKUP13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUX_SEL:8;
      uint64_t MODE_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDBY_EXPOSE_WKUP14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUX_SEL:8;
      uint64_t MODE_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDBY_EXPOSE_WKUP15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPBACK_TEST_MODE:1;
      uint64_t RX_CLK_TEST_MODE:1;
      uint64_t RX_DATA_CTRL_TEST_MODE:2;
      uint64_t RX_CLK_OBE:1;
      uint64_t RX_DATA_CTRL_OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFE_MAC0_LOOPBACK_TEST_CTRL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPBACK_TEST_MODE:1;
      uint64_t RX_CLK_TEST_MODE:1;
      uint64_t RX_DATA_CTRL_TEST_MODE:2;
      uint64_t RX_CLK_OBE:1;
      uint64_t RX_DATA_CTRL_OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFE_MAC1_LOOPBACK_TEST_CTRL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPBACK_TEST_MODE:1;
      uint64_t RX_CLK_TEST_MODE:1;
      uint64_t RX_DATA_CTRL_TEST_MODE:2;
      uint64_t RX_CLK_OBE:1;
      uint64_t RX_DATA_CTRL_OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFE_MAC2_LOOPBACK_TEST_CTRL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEBUG_MUX_EXPOSE_PAD_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GENCTRL0_TEST;

};

#define TEST_GPR_1 (*(volatile struct TEST_GPR_1_tag *) 0x0)

struct MU0__MUA_tag
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
      uint64_t TR_NUM:8;
      uint64_t RR_NUM:8;
      uint64_t GIR_NUM:8;
      uint64_t FLAG_WIDTH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUR:1;
      uint64_t MURIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MURS:1;
      uint64_t MURIP:1;
      uint64_t EP:1;
      uint64_t FUP:1;
      uint64_t GIRP:1;
      uint64_t TEP:1;
      uint64_t RFP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR0;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSSR0;

  uint8_t res1[228];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Fn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Fn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSR;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIEn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIRn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIPn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIEn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIEn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSR;

  uint8_t res4[208];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_15;

  uint8_t res5[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_15;

};

#define MU0__MUA (*(volatile struct MU0__MUA_tag *) 0x23258000)

struct MU1__MUA_tag
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
      uint64_t TR_NUM:8;
      uint64_t RR_NUM:8;
      uint64_t GIR_NUM:8;
      uint64_t FLAG_WIDTH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUR:1;
      uint64_t MURIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MURS:1;
      uint64_t MURIP:1;
      uint64_t EP:1;
      uint64_t FUP:1;
      uint64_t GIRP:1;
      uint64_t TEP:1;
      uint64_t RFP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR0;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSSR0;

  uint8_t res1[228];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Fn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Fn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSR;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIEn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIRn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIPn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIEn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIEn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSR;

  uint8_t res4[208];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_15;

  uint8_t res5[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_15;

};

#define MU1__MUA (*(volatile struct MU1__MUA_tag *) 0x23259000)

struct MU2__MUA_tag
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
      uint64_t TR_NUM:8;
      uint64_t RR_NUM:8;
      uint64_t GIR_NUM:8;
      uint64_t FLAG_WIDTH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUR:1;
      uint64_t MURIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MURS:1;
      uint64_t MURIP:1;
      uint64_t EP:1;
      uint64_t FUP:1;
      uint64_t GIRP:1;
      uint64_t TEP:1;
      uint64_t RFP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR0;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSSR0;

  uint8_t res1[228];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Fn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Fn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSR;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIEn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIRn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIPn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIEn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIEn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSR;

  uint8_t res4[208];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_15;

  uint8_t res5[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_15;

};

#define MU2__MUA (*(volatile struct MU2__MUA_tag *) 0x2325a000)

struct MU3__MUA_tag
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
      uint64_t TR_NUM:8;
      uint64_t RR_NUM:8;
      uint64_t GIR_NUM:8;
      uint64_t FLAG_WIDTH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUR:1;
      uint64_t MURIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MURS:1;
      uint64_t MURIP:1;
      uint64_t EP:1;
      uint64_t FUP:1;
      uint64_t GIRP:1;
      uint64_t TEP:1;
      uint64_t RFP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR0;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSSR0;

  uint8_t res1[228];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Fn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Fn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSR;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIEn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIRn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIPn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIEn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIEn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSR;

  uint8_t res4[208];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_15;

  uint8_t res5[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_15;

};

#define MU3__MUA (*(volatile struct MU3__MUA_tag *) 0x2325b000)

struct MU0__MUB_tag
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
      uint64_t TR_NUM:8;
      uint64_t RR_NUM:8;
      uint64_t GIR_NUM:8;
      uint64_t FLAG_WIDTH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUR:1;
      uint64_t MURIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MURS:1;
      uint64_t MURIP:1;
      uint64_t EP:1;
      uint64_t FUP:1;
      uint64_t GIRP:1;
      uint64_t TEP:1;
      uint64_t RFP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR0;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSSR0;

  uint8_t res1[228];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Fn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Fn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSR;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIEn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIRn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIPn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIEn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIEn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSR;

  uint8_t res4[208];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_15;

  uint8_t res5[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_15;

};

#define MU0__MUB (*(volatile struct MU0__MUB_tag *) 0x40210000)

struct MU1__MUB_tag
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
      uint64_t TR_NUM:8;
      uint64_t RR_NUM:8;
      uint64_t GIR_NUM:8;
      uint64_t FLAG_WIDTH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUR:1;
      uint64_t MURIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MURS:1;
      uint64_t MURIP:1;
      uint64_t EP:1;
      uint64_t FUP:1;
      uint64_t GIRP:1;
      uint64_t TEP:1;
      uint64_t RFP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR0;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSSR0;

  uint8_t res1[228];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Fn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Fn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSR;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIEn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIRn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIPn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIEn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIEn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSR;

  uint8_t res4[208];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_15;

  uint8_t res5[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_15;

};

#define MU1__MUB (*(volatile struct MU1__MUB_tag *) 0x40210000)

struct MU2__MUB_tag
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
      uint64_t TR_NUM:8;
      uint64_t RR_NUM:8;
      uint64_t GIR_NUM:8;
      uint64_t FLAG_WIDTH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUR:1;
      uint64_t MURIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MURS:1;
      uint64_t MURIP:1;
      uint64_t EP:1;
      uint64_t FUP:1;
      uint64_t GIRP:1;
      uint64_t TEP:1;
      uint64_t RFP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR0;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSSR0;

  uint8_t res1[228];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Fn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Fn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSR;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIEn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIRn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIPn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIEn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIEn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSR;

  uint8_t res4[208];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_15;

  uint8_t res5[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_15;

};

#define MU2__MUB (*(volatile struct MU2__MUB_tag *) 0x40210000)

struct MU3__MUB_tag
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
      uint64_t TR_NUM:8;
      uint64_t RR_NUM:8;
      uint64_t GIR_NUM:8;
      uint64_t FLAG_WIDTH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUR:1;
      uint64_t MURIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MURS:1;
      uint64_t MURIP:1;
      uint64_t EP:1;
      uint64_t FUP:1;
      uint64_t GIRP:1;
      uint64_t TEP:1;
      uint64_t RFP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR0;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSSR0;

  uint8_t res1[228];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Fn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Fn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSR;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIEn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIRn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIPn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIEn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIEn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFn:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSR;

  uint8_t res4[208];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_15;

  uint8_t res5[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR_15;

};

#define MU3__MUB (*(volatile struct MU3__MUB_tag *) 0x40210000)

struct TEST_GPR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ATP_OBE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATP_TEST_CONTROLS_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKOUT0_MUX_SELECT:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TST_CLK_MUX_CLKOUT0_CTRL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKOUT1_MUX_SELECT:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TST_CLK_MUX_CLKOUT1_CTRL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOT_ROM_LRE_AND_CATI_PADS_OBE_CONTROL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOOT_ROM_LRE_AND_CATI_PADS_OBE_CONTROL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR4_Data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOT_ROM_LRE_AND_CATI_GPDO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOOT_ROM_LRE_AND_CATI_GPDO_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOT_ROM_LRE_AND_CATI_GPDI:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOOT_ROM_LRE_AND_CATI_GPDI_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR7_Data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKOUT0_LVDS_CLKOUT_EXPOSE_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKOUT0_LVDS_CLKOUT_CONTROL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB1_TRCS:1;
      uint64_t FB1_AT1_AT0:2;
      uint64_t FB2_TRCS:1;
      uint64_t FB2_AT1_AT0:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FUSE_BOX_TEST_CTRL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLL_LOCK_EXPOSE_MUX_SELECT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_LOCK_EXPOSE_MUX_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GMAC_0_TEST_MODE_ENABLE:1;
      uint64_t GMAC_0_RX_CLK_TEST_MODE:1;
      uint64_t GMAC_0_RX_DATA_CTRL_TEST_MODE:2;
      uint64_t GMAC_0_RX_CLK_LOOPBACK_OBE_CTRL:1;
      uint64_t GMAC_0_RX_DATA_CTRL_SIGNALS_LOOPBACK_OBE_CTRL:1;
      uint64_t Reserved:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GMAC_0_LOOPBACK_TEST_CTRL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCIE0_EXPOSE_ENABLE:1;
      uint64_t DDR0_EXPOSE_ENABLE:1;
      uint64_t GMAC0_EXPOSE_ENABLE:1;
      uint64_t QSPI_EXPOSE_ENABLE:1;
      uint64_t USDHC_EXPOSE_ENABLE:1;
      uint64_t EXPOSE_ENABLE:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HIGH_SPEED_EXPOSE_EN_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIPELINED_2X1MUXES_0_MUX_SELECT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIPELINED_2X1MUXES_0_MUX_SELECT_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t bootrom_lre_cati_in_pti_mode:1;
      uint64_t bootrom_lre_cati_out_pti_mode:1;
      uint64_t GPR14_data:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR15_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR16_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR17_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR18_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR19_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR20_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR21_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR22_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR23_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR24_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR25_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR26_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR27_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR28_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR29_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR30_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR31_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR32_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR33_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR34_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR35_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR36_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR37_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR38_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR39_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR40_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR41_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR42_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR43_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR44_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR45_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR46_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR47_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR48_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR49_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR50_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR51_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR52_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR53_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR54_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR55_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR56_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR57_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR58_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR59_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR60_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR61_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR62_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR63_data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR63;

};

#define TEST_GPR (*(volatile struct TEST_GPR_tag *) 0x40010c00)

struct S32G_TEST_GPR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUX_SEL:8;
      uint64_t MODE_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDBY_EXPOSE_WKUP8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUX_SEL:8;
      uint64_t MODE_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDBY_EXPOSE_WKUP9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUX_SEL:8;
      uint64_t MODE_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDBY_EXPOSE_WKUP10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUX_SEL:8;
      uint64_t MODE_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDBY_EXPOSE_WKUP11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUX_SEL:8;
      uint64_t MODE_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDBY_EXPOSE_WKUP12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUX_SEL:8;
      uint64_t MODE_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDBY_EXPOSE_WKUP13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUX_SEL:8;
      uint64_t MODE_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDBY_EXPOSE_WKUP14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUX_SEL:8;
      uint64_t MODE_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDBY_EXPOSE_WKUP15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPBACK_TEST_MODE:1;
      uint64_t RX_CLK_TEST_MODE:1;
      uint64_t RX_DATA_CTRL_TEST_MODE:2;
      uint64_t RX_CLK_OBE:1;
      uint64_t RX_DATA_CTRL_OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFE_MAC0_LOOPBACK_TEST_CTRL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPBACK_TEST_MODE:1;
      uint64_t RX_CLK_TEST_MODE:1;
      uint64_t RX_DATA_CTRL_TEST_MODE:2;
      uint64_t RX_CLK_OBE:1;
      uint64_t RX_DATA_CTRL_OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFE_MAC1_LOOPBACK_TEST_CTRL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPBACK_TEST_MODE:1;
      uint64_t RX_CLK_TEST_MODE:1;
      uint64_t RX_DATA_CTRL_TEST_MODE:2;
      uint64_t RX_CLK_OBE:1;
      uint64_t RX_DATA_CTRL_OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFE_MAC2_LOOPBACK_TEST_CTRL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEBUG_MUX_EXPOSE_PAD_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GENCTRL0_TEST;

};

#define S32G_TEST_GPR (*(volatile struct S32G_TEST_GPR_tag *) 0x40010e00)

struct SELFTEST_GPR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBIST_shift_count:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LBIST_Prog_Reg;

};

#define SELFTEST_GPR (*(volatile struct SELFTEST_GPR_tag *) 0x4001c014)

struct SELFTEST_GPR_TOP_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET_DOMAIN_0_SELFTEST_ENABLE:1;
      uint64_t RESET_DOMAIN_1_SELFTEST_ENABLE:1;
      uint64_t RESET_DOMAIN_2_SELFTEST_ENABLE:1;
      uint64_t RESET_DOMAIN_3_SELFTEST_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Reset_Domain_Selftest_Enable_Register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET_DOMAIN_0_SELFTEST_ENABLE_STATUS:1;
      uint64_t RESET_DOMAIN_1_SELFTEST_ENABLE_STATUS:1;
      uint64_t RESET_DOMAIN_2_SELFTEST_ENABLE_STATUS:1;
      uint64_t RESET_DOMAIN_3_SELFTEST_ENABLE_STATUS:1;
      uint64_t reservedSpace0:12;
      uint64_t RESET_DOMAIN_0_SELFTEST_ENABLE_LAST_RUN_STATUS:1;
      uint64_t RESET_DOMAIN_1_SELFTEST_ENABLE_LAST_RUN_STATUS:1;
      uint64_t RESET_DOMAIN_2_SELFTEST_ENABLE_LAST_RUN_STATUS:1;
      uint64_t RESET_DOMAIN_3_SELFTEST_ENABLE_LAST_RUN_STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Reset_Domain_Selftest_Enable_Status_Register;

};

#define SELFTEST_GPR_TOP (*(volatile struct SELFTEST_GPR_TOP_tag *) 0x4001cfe0)

struct STCU2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUNSW:1;
      uint64_t RUNSW_ABORT:1;
      uint64_t reservedSpace0:8;
      uint64_t LBIE:1;
      uint64_t MBIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RUNSW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SKC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SKC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_CFG:3;
      uint64_t reservedSpace0:5;
      uint64_t WRP:1;
      uint64_t reservedSpace1:4;
      uint64_t LB_DELAY:8;
      uint64_t PTR:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDGEOC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBIFLG:1;
      uint64_t MBIFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_FLG;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t RFSF:1;
      uint64_t UFSF:1;
      uint64_t reservedSpace1:6;
      uint64_t INVPSW:1;
      uint64_t ENGESW:1;
      uint64_t reservedSpace2:1;
      uint64_t WDTOSW:1;
      uint64_t reservedSpace3:4;
      uint64_t ABORTSW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERR_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INVPUFM:1;
      uint64_t ENGEUFM:1;
      uint64_t reservedSpace0:1;
      uint64_t WDTOUFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERR_FM;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBSSW0:1;
      uint64_t LBSSW1:1;
      uint64_t LBSSW2:1;
      uint64_t LBSSW3:1;
      uint64_t LBSSW4:1;
      uint64_t LBSSW5:1;
      uint64_t LBSSW6:1;
      uint64_t LBSSW7:1;
      uint64_t LBSSW8:1;
      uint64_t LBSSW9:1;
      uint64_t LBSSW10:1;
      uint64_t LBSSW11:1;
      uint64_t LBSSW12:1;
      uint64_t LBSSW13:1;
      uint64_t LBSSW14:1;
      uint64_t LBSSW15:1;
      uint64_t LBSSW16:1;
      uint64_t LBSSW17:1;
      uint64_t LBSSW18:1;
      uint64_t LBSSW19:1;
      uint64_t LBSSW20:1;
      uint64_t LBSSW21:1;
      uint64_t LBSSW22:1;
      uint64_t LBSSW23:1;
      uint64_t LBSSW24:1;
      uint64_t LBSSW25:1;
      uint64_t LBSSW26:1;
      uint64_t LBSSW27:1;
      uint64_t LBSSW28:1;
      uint64_t LBSSW29:1;
      uint64_t LBSSW30:1;
      uint64_t LBSSW31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LBSSW0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBSSW32:1;
      uint64_t LBSSW33:1;
      uint64_t LBSSW34:1;
      uint64_t LBSSW35:1;
      uint64_t LBSSW36:1;
      uint64_t LBSSW37:1;
      uint64_t LBSSW38:1;
      uint64_t LBSSW39:1;
      uint64_t LBSSW40:1;
      uint64_t LBSSW41:1;
      uint64_t LBSSW42:1;
      uint64_t LBSSW43:1;
      uint64_t LBSSW44:1;
      uint64_t LBSSW45:1;
      uint64_t LBSSW46:1;
      uint64_t LBSSW47:1;
      uint64_t LBSSW48:1;
      uint64_t LBSSW49:1;
      uint64_t LBSSW50:1;
      uint64_t LBSSW51:1;
      uint64_t LBSSW52:1;
      uint64_t LBSSW53:1;
      uint64_t LBSSW54:1;
      uint64_t LBSSW55:1;
      uint64_t LBSSW56:1;
      uint64_t LBSSW57:1;
      uint64_t LBSSW58:1;
      uint64_t LBSSW59:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LBSSW1;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBESW0:1;
      uint64_t LBESW1:1;
      uint64_t LBESW2:1;
      uint64_t LBESW3:1;
      uint64_t LBESW4:1;
      uint64_t LBESW5:1;
      uint64_t LBESW6:1;
      uint64_t LBESW7:1;
      uint64_t LBESW8:1;
      uint64_t LBESW9:1;
      uint64_t LBESW10:1;
      uint64_t LBESW11:1;
      uint64_t LBESW12:1;
      uint64_t LBESW13:1;
      uint64_t LBESW14:1;
      uint64_t LBESW15:1;
      uint64_t LBESW16:1;
      uint64_t LBESW17:1;
      uint64_t LBESW18:1;
      uint64_t LBESW19:1;
      uint64_t LBESW20:1;
      uint64_t LBESW21:1;
      uint64_t LBESW22:1;
      uint64_t LBESW23:1;
      uint64_t LBESW24:1;
      uint64_t LBESW25:1;
      uint64_t LBESW26:1;
      uint64_t LBESW27:1;
      uint64_t LBESW28:1;
      uint64_t LBESW29:1;
      uint64_t LBESW30:1;
      uint64_t LBESW31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LBESW0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBESW32:1;
      uint64_t LBESW33:1;
      uint64_t LBESW34:1;
      uint64_t LBESW35:1;
      uint64_t LBESW36:1;
      uint64_t LBESW37:1;
      uint64_t LBESW38:1;
      uint64_t LBESW39:1;
      uint64_t LBESW40:1;
      uint64_t LBESW41:1;
      uint64_t LBESW42:1;
      uint64_t LBESW43:1;
      uint64_t LBESW44:1;
      uint64_t LBESW45:1;
      uint64_t LBESW46:1;
      uint64_t LBESW47:1;
      uint64_t LBESW48:1;
      uint64_t LBESW49:1;
      uint64_t LBESW50:1;
      uint64_t LBESW51:1;
      uint64_t LBESW52:1;
      uint64_t LBESW53:1;
      uint64_t LBESW54:1;
      uint64_t LBESW55:1;
      uint64_t LBESW56:1;
      uint64_t LBESW57:1;
      uint64_t LBESW58:1;
      uint64_t LBESW59:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LBESW1;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBRMSW32:1;
      uint64_t LBRMSW33:1;
      uint64_t LBRMSW34:1;
      uint64_t LBRMSW35:1;
      uint64_t LBRMSW36:1;
      uint64_t LBRMSW37:1;
      uint64_t LBRMSW38:1;
      uint64_t LBRMSW39:1;
      uint64_t LBRMSW40:1;
      uint64_t LBRMSW41:1;
      uint64_t LBRMSW42:1;
      uint64_t LBRMSW43:1;
      uint64_t LBRMSW44:1;
      uint64_t LBRMSW45:1;
      uint64_t LBRMSW46:1;
      uint64_t LBRMSW47:1;
      uint64_t LBRMSW48:1;
      uint64_t LBRMSW49:1;
      uint64_t LBRMSW50:1;
      uint64_t LBRMSW51:1;
      uint64_t LBRMSW52:1;
      uint64_t LBRMSW53:1;
      uint64_t LBRMSW54:1;
      uint64_t LBRMSW55:1;
      uint64_t LBRMSW56:1;
      uint64_t LBRMSW57:1;
      uint64_t LBRMSW58:1;
      uint64_t LBRMSW59:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LBRMSW1;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBUFM0:1;
      uint64_t LBUFM1:1;
      uint64_t LBUFM2:1;
      uint64_t LBUFM3:1;
      uint64_t LBUFM4:1;
      uint64_t LBUFM5:1;
      uint64_t LBUFM6:1;
      uint64_t LBUFM7:1;
      uint64_t LBUFM8:1;
      uint64_t LBUFM9:1;
      uint64_t LBUFM10:1;
      uint64_t LBUFM11:1;
      uint64_t LBUFM12:1;
      uint64_t LBUFM13:1;
      uint64_t LBUFM14:1;
      uint64_t LBUFM15:1;
      uint64_t LBUFM16:1;
      uint64_t LBUFM17:1;
      uint64_t LBUFM18:1;
      uint64_t LBUFM19:1;
      uint64_t LBUFM20:1;
      uint64_t LBUFM21:1;
      uint64_t LBUFM22:1;
      uint64_t LBUFM23:1;
      uint64_t LBUFM24:1;
      uint64_t LBUFM25:1;
      uint64_t LBUFM26:1;
      uint64_t LBUFM27:1;
      uint64_t LBUFM28:1;
      uint64_t LBUFM29:1;
      uint64_t LBUFM30:1;
      uint64_t LBUFM31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LBUFM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBUFM32:1;
      uint64_t LBUFM33:1;
      uint64_t LBUFM34:1;
      uint64_t LBUFM35:1;
      uint64_t LBUFM36:1;
      uint64_t LBUFM37:1;
      uint64_t LBUFM38:1;
      uint64_t LBUFM39:1;
      uint64_t LBUFM40:1;
      uint64_t LBUFM41:1;
      uint64_t LBUFM42:1;
      uint64_t LBUFM43:1;
      uint64_t LBUFM44:1;
      uint64_t LBUFM45:1;
      uint64_t LBUFM46:1;
      uint64_t LBUFM47:1;
      uint64_t LBUFM48:1;
      uint64_t LBUFM49:1;
      uint64_t LBUFM50:1;
      uint64_t LBUFM51:1;
      uint64_t LBUFM52:1;
      uint64_t LBUFM53:1;
      uint64_t LBUFM54:1;
      uint64_t LBUFM55:1;
      uint64_t LBUFM56:1;
      uint64_t LBUFM57:1;
      uint64_t LBUFM58:1;
      uint64_t LBUFM59:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LBUFM1;

  uint8_t res6[136];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBSSW0:1;
      uint64_t MBSSW1:1;
      uint64_t MBSSW2:1;
      uint64_t MBSSW3:1;
      uint64_t MBSSW4:1;
      uint64_t MBSSW5:1;
      uint64_t MBSSW6:1;
      uint64_t MBSSW7:1;
      uint64_t MBSSW8:1;
      uint64_t MBSSW9:1;
      uint64_t MBSSW10:1;
      uint64_t MBSSW11:1;
      uint64_t MBSSW12:1;
      uint64_t MBSSW13:1;
      uint64_t MBSSW14:1;
      uint64_t MBSSW15:1;
      uint64_t MBSSW16:1;
      uint64_t MBSSW17:1;
      uint64_t MBSSW18:1;
      uint64_t MBSSW19:1;
      uint64_t MBSSW20:1;
      uint64_t MBSSW21:1;
      uint64_t MBSSW22:1;
      uint64_t MBSSW23:1;
      uint64_t MBSSW24:1;
      uint64_t MBSSW25:1;
      uint64_t MBSSW26:1;
      uint64_t MBSSW27:1;
      uint64_t MBSSW28:1;
      uint64_t MBSSW29:1;
      uint64_t MBSSW30:1;
      uint64_t MBSSW31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBSSW0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBSSW32:1;
      uint64_t MBSSW33:1;
      uint64_t MBSSW34:1;
      uint64_t MBSSW35:1;
      uint64_t MBSSW36:1;
      uint64_t MBSSW37:1;
      uint64_t MBSSW38:1;
      uint64_t MBSSW39:1;
      uint64_t MBSSW40:1;
      uint64_t MBSSW41:1;
      uint64_t MBSSW42:1;
      uint64_t MBSSW43:1;
      uint64_t MBSSW44:1;
      uint64_t MBSSW45:1;
      uint64_t MBSSW46:1;
      uint64_t MBSSW47:1;
      uint64_t MBSSW48:1;
      uint64_t MBSSW49:1;
      uint64_t MBSSW50:1;
      uint64_t MBSSW51:1;
      uint64_t MBSSW52:1;
      uint64_t MBSSW53:1;
      uint64_t MBSSW54:1;
      uint64_t MBSSW55:1;
      uint64_t MBSSW56:1;
      uint64_t MBSSW57:1;
      uint64_t MBSSW58:1;
      uint64_t MBSSW59:1;
      uint64_t MBSSW60:1;
      uint64_t MBSSW61:1;
      uint64_t MBSSW62:1;
      uint64_t MBSSW63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBSSW1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBSSW64:1;
      uint64_t MBSSW65:1;
      uint64_t MBSSW66:1;
      uint64_t MBSSW67:1;
      uint64_t MBSSW68:1;
      uint64_t MBSSW69:1;
      uint64_t MBSSW70:1;
      uint64_t MBSSW71:1;
      uint64_t MBSSW72:1;
      uint64_t MBSSW73:1;
      uint64_t MBSSW74:1;
      uint64_t MBSSW75:1;
      uint64_t MBSSW76:1;
      uint64_t MBSSW77:1;
      uint64_t MBSSW78:1;
      uint64_t MBSSW79:1;
      uint64_t MBSSW80:1;
      uint64_t MBSSW81:1;
      uint64_t MBSSW82:1;
      uint64_t MBSSW83:1;
      uint64_t MBSSW84:1;
      uint64_t MBSSW85:1;
      uint64_t MBSSW86:1;
      uint64_t MBSSW87:1;
      uint64_t MBSSW88:1;
      uint64_t MBSSW89:1;
      uint64_t MBSSW90:1;
      uint64_t MBSSW91:1;
      uint64_t MBSSW92:1;
      uint64_t MBSSW93:1;
      uint64_t MBSSW94:1;
      uint64_t MBSSW95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBSSW2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBSSW96:1;
      uint64_t MBSSW97:1;
      uint64_t MBSSW98:1;
      uint64_t MBSSW99:1;
      uint64_t MBSSW100:1;
      uint64_t MBSSW101:1;
      uint64_t MBSSW102:1;
      uint64_t MBSSW103:1;
      uint64_t MBSSW104:1;
      uint64_t MBSSW105:1;
      uint64_t MBSSW106:1;
      uint64_t MBSSW107:1;
      uint64_t MBSSW108:1;
      uint64_t MBSSW109:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBSSW3;

  uint8_t res7[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBESW0:1;
      uint64_t MBESW1:1;
      uint64_t MBESW2:1;
      uint64_t MBESW3:1;
      uint64_t MBESW4:1;
      uint64_t MBESW5:1;
      uint64_t MBESW6:1;
      uint64_t MBESW7:1;
      uint64_t MBESW8:1;
      uint64_t MBESW9:1;
      uint64_t MBESW10:1;
      uint64_t MBESW11:1;
      uint64_t MBESW12:1;
      uint64_t MBESW13:1;
      uint64_t MBESW14:1;
      uint64_t MBESW15:1;
      uint64_t MBESW16:1;
      uint64_t MBESW17:1;
      uint64_t MBESW18:1;
      uint64_t MBESW19:1;
      uint64_t MBESW20:1;
      uint64_t MBESW21:1;
      uint64_t MBESW22:1;
      uint64_t MBESW23:1;
      uint64_t MBESW24:1;
      uint64_t MBESW25:1;
      uint64_t MBESW26:1;
      uint64_t MBESW27:1;
      uint64_t MBESW28:1;
      uint64_t MBESW29:1;
      uint64_t MBESW30:1;
      uint64_t MBESW31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBESW0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBESW32:1;
      uint64_t MBESW33:1;
      uint64_t MBESW34:1;
      uint64_t MBESW35:1;
      uint64_t MBESW36:1;
      uint64_t MBESW37:1;
      uint64_t MBESW38:1;
      uint64_t MBESW39:1;
      uint64_t MBESW40:1;
      uint64_t MBESW41:1;
      uint64_t MBESW42:1;
      uint64_t MBESW43:1;
      uint64_t MBESW44:1;
      uint64_t MBESW45:1;
      uint64_t MBESW46:1;
      uint64_t MBESW47:1;
      uint64_t MBESW48:1;
      uint64_t MBESW49:1;
      uint64_t MBESW50:1;
      uint64_t MBESW51:1;
      uint64_t MBESW52:1;
      uint64_t MBESW53:1;
      uint64_t MBESW54:1;
      uint64_t MBESW55:1;
      uint64_t MBESW56:1;
      uint64_t MBESW57:1;
      uint64_t MBESW58:1;
      uint64_t MBESW59:1;
      uint64_t MBESW60:1;
      uint64_t MBESW61:1;
      uint64_t MBESW62:1;
      uint64_t MBESW63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBESW1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBESW64:1;
      uint64_t MBESW65:1;
      uint64_t MBESW66:1;
      uint64_t MBESW67:1;
      uint64_t MBESW68:1;
      uint64_t MBESW69:1;
      uint64_t MBESW70:1;
      uint64_t MBESW71:1;
      uint64_t MBESW72:1;
      uint64_t MBESW73:1;
      uint64_t MBESW74:1;
      uint64_t MBESW75:1;
      uint64_t MBESW76:1;
      uint64_t MBESW77:1;
      uint64_t MBESW78:1;
      uint64_t MBESW79:1;
      uint64_t MBESW80:1;
      uint64_t MBESW81:1;
      uint64_t MBESW82:1;
      uint64_t MBESW83:1;
      uint64_t MBESW84:1;
      uint64_t MBESW85:1;
      uint64_t MBESW86:1;
      uint64_t MBESW87:1;
      uint64_t MBESW88:1;
      uint64_t MBESW89:1;
      uint64_t MBESW90:1;
      uint64_t MBESW91:1;
      uint64_t MBESW92:1;
      uint64_t MBESW93:1;
      uint64_t MBESW94:1;
      uint64_t MBESW95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBESW2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBESW96:1;
      uint64_t MBESW97:1;
      uint64_t MBESW98:1;
      uint64_t MBESW99:1;
      uint64_t MBESW100:1;
      uint64_t MBESW101:1;
      uint64_t MBESW102:1;
      uint64_t MBESW103:1;
      uint64_t MBESW104:1;
      uint64_t MBESW105:1;
      uint64_t MBESW106:1;
      uint64_t MBESW107:1;
      uint64_t MBESW108:1;
      uint64_t MBESW109:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBESW3;

  uint8_t res8[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBUFM0:1;
      uint64_t MBUFM1:1;
      uint64_t MBUFM2:1;
      uint64_t MBUFM3:1;
      uint64_t MBUFM4:1;
      uint64_t MBUFM5:1;
      uint64_t MBUFM6:1;
      uint64_t MBUFM7:1;
      uint64_t MBUFM8:1;
      uint64_t MBUFM9:1;
      uint64_t MBUFM10:1;
      uint64_t MBUFM11:1;
      uint64_t MBUFM12:1;
      uint64_t MBUFM13:1;
      uint64_t MBUFM14:1;
      uint64_t MBUFM15:1;
      uint64_t MBUFM16:1;
      uint64_t MBUFM17:1;
      uint64_t MBUFM18:1;
      uint64_t MBUFM19:1;
      uint64_t MBUFM20:1;
      uint64_t MBUFM21:1;
      uint64_t MBUFM22:1;
      uint64_t MBUFM23:1;
      uint64_t MBUFM24:1;
      uint64_t MBUFM25:1;
      uint64_t MBUFM26:1;
      uint64_t MBUFM27:1;
      uint64_t MBUFM28:1;
      uint64_t MBUFM29:1;
      uint64_t MBUFM30:1;
      uint64_t MBUFM31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBUFM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBUFM32:1;
      uint64_t MBUFM33:1;
      uint64_t MBUFM34:1;
      uint64_t MBUFM35:1;
      uint64_t MBUFM36:1;
      uint64_t MBUFM37:1;
      uint64_t MBUFM38:1;
      uint64_t MBUFM39:1;
      uint64_t MBUFM40:1;
      uint64_t MBUFM41:1;
      uint64_t MBUFM42:1;
      uint64_t MBUFM43:1;
      uint64_t MBUFM44:1;
      uint64_t MBUFM45:1;
      uint64_t MBUFM46:1;
      uint64_t MBUFM47:1;
      uint64_t MBUFM48:1;
      uint64_t MBUFM49:1;
      uint64_t MBUFM50:1;
      uint64_t MBUFM51:1;
      uint64_t MBUFM52:1;
      uint64_t MBUFM53:1;
      uint64_t MBUFM54:1;
      uint64_t MBUFM55:1;
      uint64_t MBUFM56:1;
      uint64_t MBUFM57:1;
      uint64_t MBUFM58:1;
      uint64_t MBUFM59:1;
      uint64_t MBUFM60:1;
      uint64_t MBUFM61:1;
      uint64_t MBUFM62:1;
      uint64_t MBUFM63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBUFM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBUFM64:1;
      uint64_t MBUFM65:1;
      uint64_t MBUFM66:1;
      uint64_t MBUFM67:1;
      uint64_t MBUFM68:1;
      uint64_t MBUFM69:1;
      uint64_t MBUFM70:1;
      uint64_t MBUFM71:1;
      uint64_t MBUFM72:1;
      uint64_t MBUFM73:1;
      uint64_t MBUFM74:1;
      uint64_t MBUFM75:1;
      uint64_t MBUFM76:1;
      uint64_t MBUFM77:1;
      uint64_t MBUFM78:1;
      uint64_t MBUFM79:1;
      uint64_t MBUFM80:1;
      uint64_t MBUFM81:1;
      uint64_t MBUFM82:1;
      uint64_t MBUFM83:1;
      uint64_t MBUFM84:1;
      uint64_t MBUFM85:1;
      uint64_t MBUFM86:1;
      uint64_t MBUFM87:1;
      uint64_t MBUFM88:1;
      uint64_t MBUFM89:1;
      uint64_t MBUFM90:1;
      uint64_t MBUFM91:1;
      uint64_t MBUFM92:1;
      uint64_t MBUFM93:1;
      uint64_t MBUFM94:1;
      uint64_t MBUFM95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBUFM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBUFM96:1;
      uint64_t MBUFM97:1;
      uint64_t MBUFM98:1;
      uint64_t MBUFM99:1;
      uint64_t MBUFM100:1;
      uint64_t MBUFM101:1;
      uint64_t MBUFM102:1;
      uint64_t MBUFM103:1;
      uint64_t MBUFM104:1;
      uint64_t MBUFM105:1;
      uint64_t MBUFM106:1;
      uint64_t MBUFM107:1;
      uint64_t MBUFM108:1;
      uint64_t MBUFM109:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBUFM3;

  uint8_t res9[100];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS0;

  uint8_t res10[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW0;

  uint8_t res11[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS1;

  uint8_t res12[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW1;

  uint8_t res13[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS2;

  uint8_t res14[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW2;

  uint8_t res15[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS3;

  uint8_t res16[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW3;

  uint8_t res17[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS4;

  uint8_t res18[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW4;

  uint8_t res19[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS5;

  uint8_t res20[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW5;

  uint8_t res21[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS6;

  uint8_t res22[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW6;

  uint8_t res23[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS7;

  uint8_t res24[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW7;

  uint8_t res25[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS8;

  uint8_t res26[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW8;

  uint8_t res27[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS9;

  uint8_t res28[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW9;

  uint8_t res29[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS10;

  uint8_t res30[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW10;

  uint8_t res31[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS11;

  uint8_t res32[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW11;

  uint8_t res33[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS12;

  uint8_t res34[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW12;

  uint8_t res35[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS13;

  uint8_t res36[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW13;

  uint8_t res37[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS14;

  uint8_t res38[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW14;

  uint8_t res39[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS15;

  uint8_t res40[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW15;

  uint8_t res41[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS16;

  uint8_t res42[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW16;

  uint8_t res43[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS17;

  uint8_t res44[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW17;

  uint8_t res45[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS18;

  uint8_t res46[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW18;

  uint8_t res47[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS19;

  uint8_t res48[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW19;

  uint8_t res49[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS20;

  uint8_t res50[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW20;

  uint8_t res51[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS21;

  uint8_t res52[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW21;

  uint8_t res53[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS22;

  uint8_t res54[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW22;

  uint8_t res55[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS23;

  uint8_t res56[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW23;

  uint8_t res57[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS24;

  uint8_t res58[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW24;

  uint8_t res59[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS25;

  uint8_t res60[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW25;

  uint8_t res61[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS26;

  uint8_t res62[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW26;

  uint8_t res63[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS27;

  uint8_t res64[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW27;

  uint8_t res65[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS28;

  uint8_t res66[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW28;

  uint8_t res67[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS29;

  uint8_t res68[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW29;

  uint8_t res69[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS30;

  uint8_t res70[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW30;

  uint8_t res71[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS31;

  uint8_t res72[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW31;

  uint8_t res73[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS32;

  uint8_t res74[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW32;

  uint8_t res75[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS33;

  uint8_t res76[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW33;

  uint8_t res77[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS34;

  uint8_t res78[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW34;

  uint8_t res79[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS35;

  uint8_t res80[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW35;

  uint8_t res81[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS36;

  uint8_t res82[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW36;

  uint8_t res83[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS37;

  uint8_t res84[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW37;

  uint8_t res85[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS38;

  uint8_t res86[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW38;

  uint8_t res87[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS39;

  uint8_t res88[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW39;

  uint8_t res89[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS40;

  uint8_t res90[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW40;

  uint8_t res91[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS41;

  uint8_t res92[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW41;

  uint8_t res93[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS42;

  uint8_t res94[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW42;

  uint8_t res95[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS43;

  uint8_t res96[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW43;

  uint8_t res97[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS44;

  uint8_t res98[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW44;

  uint8_t res99[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS45;

  uint8_t res100[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW45;

  uint8_t res101[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS46;

  uint8_t res102[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW46;

  uint8_t res103[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS47;

  uint8_t res104[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW47;

  uint8_t res105[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS48;

  uint8_t res106[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW48;

  uint8_t res107[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS49;

  uint8_t res108[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW49;

  uint8_t res109[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS50;

  uint8_t res110[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW50;

  uint8_t res111[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS51;

  uint8_t res112[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW51;

  uint8_t res113[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS52;

  uint8_t res114[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW52;

  uint8_t res115[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS53;

  uint8_t res116[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW53;

  uint8_t res117[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS54;

  uint8_t res118[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW54;

  uint8_t res119[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS55;

  uint8_t res120[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW55;

  uint8_t res121[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS56;

  uint8_t res122[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW56;

  uint8_t res123[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS57;

  uint8_t res124[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW57;

  uint8_t res125[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS58;

  uint8_t res126[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW58;

  uint8_t res127[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWS:6;
      uint64_t reservedSpace0:2;
      uint64_t SCEN_ON:4;
      uint64_t SCEN_OFF:4;
      uint64_t SHS:3;
      uint64_t reservedSpace1:2;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_CTRL59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_PCS59;

  uint8_t res128[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRELSW59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRESWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISREHSW59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRLSW59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISRRSWx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LB_MISRRHSW59;

  uint8_t res129[4368];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALGOSEL0:1;
      uint64_t ALGOSEL1:1;
      uint64_t ALGOSEL2:1;
      uint64_t ALGOSEL3:1;
      uint64_t ALGOSEL4:1;
      uint64_t ALGOSEL5:1;
      uint64_t ALGOSEL6:1;
      uint64_t ALGOSEL7:1;
      uint64_t ALGOSEL8:1;
      uint64_t ALGOSEL9:1;
      uint64_t ALGOSEL10:1;
      uint64_t ALGOSEL11:1;
      uint64_t ALGOSEL12:1;
      uint64_t ALGOSEL13:1;
      uint64_t ALGOSEL14:1;
      uint64_t ALGOSEL15:1;
      uint64_t ALGOSEL16:1;
      uint64_t ALGOSEL17:1;
      uint64_t ALGOSEL18:1;
      uint64_t ALGOSEL19:1;
      uint64_t ALGOSEL20:1;
      uint64_t ALGOSEL21:1;
      uint64_t ALGOSEL22:1;
      uint64_t ALGOSEL23:1;
      uint64_t ALGOSEL24:1;
      uint64_t ALGOSEL25:1;
      uint64_t ALGOSEL26:1;
      uint64_t ALGOSEL27:1;
      uint64_t ALGOSEL28:1;
      uint64_t ALGOSEL29:1;
      uint64_t ALGOSEL30:1;
      uint64_t ALGOSEL31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALGOSEL;

  uint8_t res130[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STGGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BSTART0:1;
      uint64_t BSTART1:1;
      uint64_t BSTART2:1;
      uint64_t BSTART3:1;
      uint64_t BSTART4:1;
      uint64_t BSTART5:1;
      uint64_t BSTART6:1;
      uint64_t BSTART7:1;
      uint64_t BSTART8:1;
      uint64_t BSTART9:1;
      uint64_t BSTART10:1;
      uint64_t BSTART11:1;
      uint64_t BSTART12:1;
      uint64_t BSTART13:1;
      uint64_t BSTART14:1;
      uint64_t BSTART15:1;
      uint64_t BSTART16:1;
      uint64_t BSTART17:1;
      uint64_t BSTART18:1;
      uint64_t BSTART19:1;
      uint64_t BSTART20:1;
      uint64_t BSTART21:1;
      uint64_t BSTART22:1;
      uint64_t BSTART23:1;
      uint64_t BSTART24:1;
      uint64_t BSTART25:1;
      uint64_t BSTART26:1;
      uint64_t BSTART27:1;
      uint64_t BSTART28:1;
      uint64_t BSTART29:1;
      uint64_t BSTART30:1;
      uint64_t BSTART31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSTART;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t BSEL:1;
      uint64_t PTR:10;
      uint64_t CSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MB_CTRL109;

};

#define STCU2 (*(volatile struct STCU2_tag *) 0x40028004)

struct MC_CGM_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDUR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFS_SDUR;

  uint8_t res0[132];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATE:8;
      uint64_t reservedSpace0:8;
      uint64_t INIT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFS_DIVC12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVE:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFS_DIVE12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVS:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFS_DIVS12;

  uint8_t res1[620];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAMPUP:1;
      uint64_t RAMPDOWN:1;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace0:20;
      uint64_t SELCTL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_0_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAMPUP:1;
      uint64_t RAMPDOWN:1;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace0:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace1:4;
      uint64_t SELSTAT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_0_CSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHASE:8;
      uint64_t reservedSpace0:8;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_0_DC_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_0_DC_1;

  uint8_t res2[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_0_DIV_UPD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CG:1;
      uint64_t FCG:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_1_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t GRIP:1;
      uint64_t CS:1;
      uint64_t reservedSpace1:6;
      uint64_t SELSTAT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_1_CSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_1_DC_0;

  uint8_t res3[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_1_DIV_UPD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CG:1;
      uint64_t FCG:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_2_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t GRIP:1;
      uint64_t CS:1;
      uint64_t reservedSpace1:6;
      uint64_t SELSTAT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_2_CSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_2_DC_0;

  uint8_t res4[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_2_DIV_UPD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_3_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace2:4;
      uint64_t SELSTAT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_3_CSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_3_DC_0;

  uint8_t res5[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_3_DIV_UPD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_4_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace2:4;
      uint64_t SELSTAT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_4_CSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_4_DC_0;

  uint8_t res6[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_4_DIV_UPD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_5_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace2:4;
      uint64_t SELSTAT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_5_CSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_5_DC_0;

  uint8_t res7[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_5_DIV_UPD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_6_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace2:4;
      uint64_t SELSTAT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_6_CSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_6_DC_0;

  uint8_t res8[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_6_DIV_UPD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_7_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace2:4;
      uint64_t SELSTAT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_7_CSS;

  uint8_t res9[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_8_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace2:4;
      uint64_t SELSTAT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_8_CSS;

  uint8_t res10[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_9_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace2:4;
      uint64_t SELSTAT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_9_CSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_9_DC_0;

  uint8_t res11[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_9_DIV_UPD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_10_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace2:4;
      uint64_t SELSTAT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_10_CSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHASE:8;
      uint64_t reservedSpace0:8;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_10_DC_0;

  uint8_t res12[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_10_DIV_UPD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_11_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace2:4;
      uint64_t SELSTAT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_11_CSS;

  uint8_t res13[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_12_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace2:4;
      uint64_t SELSTAT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_12_CSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_12_DC_0;

  uint8_t res14[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_12_DIV_UPD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_13_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace2:4;
      uint64_t SELSTAT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_13_CSS;

  uint8_t res15[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_14_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace2:4;
      uint64_t SELSTAT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_14_CSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_14_DC_0;

  uint8_t res16[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_14_DIV_UPD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_15_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace2:4;
      uint64_t SELSTAT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_15_CSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_15_DC_0;

  uint8_t res17[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_15_DIV_UPD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_16_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace2:4;
      uint64_t SELSTAT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_16_CSS;

};

#define MC_CGM_0 (*(volatile struct MC_CGM_0_tag *) 0x40030000)

struct MC_CGM_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDUR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFS_SDUR;

  uint8_t res0[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATE:8;
      uint64_t reservedSpace0:8;
      uint64_t INIT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFS_DIVC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVE:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFS_DIVE4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVS:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFS_DIVS4;

  uint8_t res1[716];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAMPUP:1;
      uint64_t RAMPDOWN:1;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace0:20;
      uint64_t SELCTL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_0_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAMPUP:1;
      uint64_t RAMPDOWN:1;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace0:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace1:4;
      uint64_t SELSTAT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_0_CSS;

};

#define MC_CGM_1 (*(volatile struct MC_CGM_1_tag *) 0x40034000)

struct PERIPH_PLL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t PLLPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t LOCK:1;
      uint64_t LOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFI:8;
      uint64_t reservedSpace0:4;
      uint64_t RDIV:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLDV;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFN:15;
      uint64_t reservedSpace0:1;
      uint64_t DITHER_EN:1;
      uint64_t reservedSpace1:1;
      uint64_t DTHRCTL:4;
      uint64_t reservedSpace2:8;
      uint64_t SDMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLFD;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REFCLKSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCLKMUX;

  uint8_t res2[92];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLODIV__0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLODIV__1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLODIV__2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLODIV__3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLODIV__4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLODIV__5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLODIV__6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLODIV__7;

};

#define PERIPH_PLL (*(volatile struct PERIPH_PLL_tag *) 0x4003c000)

struct ACCEL_PLL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t PLLPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t LOCK:1;
      uint64_t LOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFI:8;
      uint64_t reservedSpace0:4;
      uint64_t RDIV:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLDV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STEPNO:11;
      uint64_t reservedSpace0:5;
      uint64_t STEPSIZE:10;
      uint64_t reservedSpace1:3;
      uint64_t SPREADCTL:1;
      uint64_t SSCGBYP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLFM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFN:15;
      uint64_t reservedSpace0:1;
      uint64_t DITHER_EN:1;
      uint64_t reservedSpace1:1;
      uint64_t DTHRCTL:4;
      uint64_t reservedSpace2:8;
      uint64_t SDMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLFD;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REFCLKSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCLKMUX;

  uint8_t res1[92];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLODIV__0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLODIV__1;

};

#define ACCEL_PLL (*(volatile struct ACCEL_PLL_tag *) 0x40040000)

struct CORE_PLL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t PLLPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t LOCK:1;
      uint64_t LOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFI:8;
      uint64_t reservedSpace0:4;
      uint64_t RDIV:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLDV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STEPNO:11;
      uint64_t reservedSpace0:5;
      uint64_t STEPSIZE:10;
      uint64_t reservedSpace1:3;
      uint64_t SPREADCTL:1;
      uint64_t SSCGBYP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLFM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFN:15;
      uint64_t reservedSpace0:1;
      uint64_t DITHER_EN:1;
      uint64_t reservedSpace1:1;
      uint64_t DTHRCTL:4;
      uint64_t reservedSpace2:8;
      uint64_t SDMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLFD;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REFCLKSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCLKMUX;

  uint8_t res1[92];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLODIV__0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLODIV__1;

};

#define CORE_PLL (*(volatile struct CORE_PLL_tag *) 0x40038000)

struct DDR_PLL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t PLLPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t LOCK:1;
      uint64_t LOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFI:8;
      uint64_t reservedSpace0:4;
      uint64_t RDIV:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLDV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STEPNO:11;
      uint64_t reservedSpace0:5;
      uint64_t STEPSIZE:10;
      uint64_t reservedSpace1:3;
      uint64_t SPREADCTL:1;
      uint64_t SSCGBYP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLFM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFN:15;
      uint64_t reservedSpace0:1;
      uint64_t DITHER_EN:1;
      uint64_t reservedSpace1:1;
      uint64_t DTHRCTL:4;
      uint64_t reservedSpace2:8;
      uint64_t SDMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLFD;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REFCLKSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCLKMUX;

  uint8_t res1[92];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLODIV__0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:8;
      uint64_t reservedSpace1:7;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLODIV__1;

};

#define DDR_PLL (*(volatile struct DDR_PLL_tag *) 0x40044000)

struct FXOSC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSCON:1;
      uint64_t reservedSpace0:3;
      uint64_t GM_SEL:4;
      uint64_t reservedSpace1:8;
      uint64_t EOCV:8;
      uint64_t COMP_EN:1;
      uint64_t reservedSpace2:6;
      uint64_t OSC_BYP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FXOSC_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t OSC_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FXOSC_STAT;

};

#define FXOSC (*(volatile struct FXOSC_tag *) 0x40050000)

struct CORE_DFS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORTSTAT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOLF0:1;
      uint64_t LOLF1:1;
      uint64_t LOLF2:1;
      uint64_t LOLF3:1;
      uint64_t LOLF4:1;
      uint64_t LOLF5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTLOLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET0:1;
      uint64_t RESET1:1;
      uint64_t RESET2:1;
      uint64_t RESET3:1;
      uint64_t RESET4:1;
      uint64_t RESET5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTRESET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DFS_RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFN:6;
      uint64_t reservedSpace0:2;
      uint64_t MFI:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DVPORT_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFN:6;
      uint64_t reservedSpace0:2;
      uint64_t MFI:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DVPORT_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFN:6;
      uint64_t reservedSpace0:2;
      uint64_t MFI:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DVPORT_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFN:6;
      uint64_t reservedSpace0:2;
      uint64_t MFI:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DVPORT_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFN:6;
      uint64_t reservedSpace0:2;
      uint64_t MFI:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DVPORT_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFN:6;
      uint64_t reservedSpace0:2;
      uint64_t MFI:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DVPORT_5;

};

#define CORE_DFS (*(volatile struct CORE_DFS_tag *) 0x4005400c)

struct PERIPH_DFS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORTSTAT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOLF0:1;
      uint64_t LOLF1:1;
      uint64_t LOLF2:1;
      uint64_t LOLF3:1;
      uint64_t LOLF4:1;
      uint64_t LOLF5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTLOLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET0:1;
      uint64_t RESET1:1;
      uint64_t RESET2:1;
      uint64_t RESET3:1;
      uint64_t RESET4:1;
      uint64_t RESET5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTRESET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DFS_RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFN:6;
      uint64_t reservedSpace0:2;
      uint64_t MFI:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DVPORT_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFN:6;
      uint64_t reservedSpace0:2;
      uint64_t MFI:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DVPORT_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFN:6;
      uint64_t reservedSpace0:2;
      uint64_t MFI:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DVPORT_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFN:6;
      uint64_t reservedSpace0:2;
      uint64_t MFI:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DVPORT_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFN:6;
      uint64_t reservedSpace0:2;
      uint64_t MFI:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DVPORT_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFN:6;
      uint64_t reservedSpace0:2;
      uint64_t MFI:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DVPORT_5;

};

#define PERIPH_DFS (*(volatile struct PERIPH_DFS_tag *) 0x4005800c)

struct CMU_FC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_FC_0 (*(volatile struct CMU_FC_0_tag *) 0x4005c000)

struct CMU_FC_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_FC_5 (*(volatile struct CMU_FC_5_tag *) 0x4005c0a0)

struct CMU_FC_7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_FC_7 (*(volatile struct CMU_FC_7_tag *) 0x4005c0e0)

struct CMU_FC_10_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_FC_10 (*(volatile struct CMU_FC_10_tag *) 0x4005c140)

struct CMU_FC_11_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_FC_11 (*(volatile struct CMU_FC_11_tag *) 0x4005c160)

struct CMU_FC_12_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_FC_12 (*(volatile struct CMU_FC_12_tag *) 0x4005c180)

struct CMU_FC_13_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_FC_13 (*(volatile struct CMU_FC_13_tag *) 0x4005c1a0)

struct CMU_FC_14_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_FC_14 (*(volatile struct CMU_FC_14_tag *) 0x4005c1c0)

struct CMU_FC_15_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_FC_15 (*(volatile struct CMU_FC_15_tag *) 0x4005c1e0)

struct CMU_FC_16_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_FC_16 (*(volatile struct CMU_FC_16_tag *) 0x4005c200)

struct CMU_FC_17_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_FC_17 (*(volatile struct CMU_FC_17_tag *) 0x4005c220)

struct CMU_FC_18_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_FC_18 (*(volatile struct CMU_FC_18_tag *) 0x4005c240)

struct CMU_FC_20_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_FC_20 (*(volatile struct CMU_FC_20_tag *) 0x4005c280)

struct CMU_FC_21_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_FC_21 (*(volatile struct CMU_FC_21_tag *) 0x4005c2a0)

struct CMU_FC_22_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_FC_22 (*(volatile struct CMU_FC_22_tag *) 0x4005c2c0)

struct CMU_FC_27_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_FC_27 (*(volatile struct CMU_FC_27_tag *) 0x4005c360)

struct CMU_FC_28_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_FC_28 (*(volatile struct CMU_FC_28_tag *) 0x4005c380)

struct CMU_FC_39_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_FC_39 (*(volatile struct CMU_FC_39_tag *) 0x4005c4e0)

struct CMU_FC_46_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_FC_46 (*(volatile struct CMU_FC_46_tag *) 0x4005c5c0)

struct CMU_FC_47_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_FC_47 (*(volatile struct CMU_FC_47_tag *) 0x4005c5e0)

struct CMU_FC_48_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_FC_48 (*(volatile struct CMU_FC_48_tag *) 0x4005c600)

struct CMU_FC_49_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_FC_49 (*(volatile struct CMU_FC_49_tag *) 0x4005c620)

struct CMU_FC_50_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_FC_50 (*(volatile struct CMU_FC_50_tag *) 0x4005c640)

struct CMU_FC_51_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_FC_51 (*(volatile struct CMU_FC_51_tag *) 0x4005c660)

struct CMU_FM_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMC:1;
      uint64_t FMTO:1;
      uint64_t STATE:2;
      uint64_t RS:1;
      uint64_t reservedSpace0:3;
      uint64_t MET_CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

};

#define CMU_FM_1 (*(volatile struct CMU_FM_1_tag *) 0x4005c020)

struct CMU_FM_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMC:1;
      uint64_t FMTO:1;
      uint64_t STATE:2;
      uint64_t RS:1;
      uint64_t reservedSpace0:3;
      uint64_t MET_CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

};

#define CMU_FM_2 (*(volatile struct CMU_FM_2_tag *) 0x4005c040)

struct CMU_FM_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMC:1;
      uint64_t FMTO:1;
      uint64_t STATE:2;
      uint64_t RS:1;
      uint64_t reservedSpace0:3;
      uint64_t MET_CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

};

#define CMU_FM_3 (*(volatile struct CMU_FM_3_tag *) 0x4005c060)

struct CMU_FM_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMC:1;
      uint64_t FMTO:1;
      uint64_t STATE:2;
      uint64_t RS:1;
      uint64_t reservedSpace0:3;
      uint64_t MET_CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

};

#define CMU_FM_4 (*(volatile struct CMU_FM_4_tag *) 0x4005c080)

struct CMU_FC_6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

};

#define CMU_FC_6 (*(volatile struct CMU_FC_6_tag *) 0x4005c0c0)

struct CMU_FC_8_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

};

#define CMU_FC_8 (*(volatile struct CMU_FC_8_tag *) 0x4005c100)

struct CMU_FC_9_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t STATE:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

};

#define CMU_FC_9 (*(volatile struct CMU_FC_9_tag *) 0x4005c120)

struct RTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t SUPV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCSUPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t DIV32EN:1;
      uint64_t DIV512EN:1;
      uint64_t CLKSEL:2;
      uint64_t APIIE:1;
      uint64_t APIEN:1;
      uint64_t reservedSpace1:12;
      uint64_t ROVREN:1;
      uint64_t FRZEN:1;
      uint64_t RTCIE:1;
      uint64_t CNTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t ROVRF:1;
      uint64_t reservedSpace1:2;
      uint64_t APIF:1;
      uint64_t reservedSpace2:3;
      uint64_t INV_API:1;
      uint64_t INV_RTC:1;
      uint64_t reservedSpace3:10;
      uint64_t RTCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCCNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APIVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APIVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCVAL;

};

#define RTC (*(volatile struct RTC_tag *) 0x40060000)

struct MC_CGM_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_0_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace2:4;
      uint64_t SELSTAT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_0_CSS;

};

#define MC_CGM_5 (*(volatile struct MC_CGM_5_tag *) 0x40068300)

struct MC_RGM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t F_POR:1;
      uint64_t F_DR_1:1;
      uint64_t reservedSpace0:1;
      uint64_t F_DR_3:1;
      uint64_t F_DR_4:1;
      uint64_t reservedSpace1:1;
      uint64_t F_DR_6:1;
      uint64_t reservedSpace2:1;
      uint64_t F_DR_8:1;
      uint64_t F_DR_9:1;
      uint64_t F_DR_10:1;
      uint64_t F_DR_11:1;
      uint64_t F_DR_12:1;
      uint64_t F_DR_13:1;
      uint64_t reservedSpace3:2;
      uint64_t F_DR_16:1;
      uint64_t F_DR_17:1;
      uint64_t F_DR_18:1;
      uint64_t reservedSpace4:11;
      uint64_t F_DR_30:1;
      uint64_t F_DR_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DES;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F_EXR:1;
      uint64_t reservedSpace0:2;
      uint64_t F_FR_3:1;
      uint64_t F_FR_4:1;
      uint64_t reservedSpace1:1;
      uint64_t F_FR_6:1;
      uint64_t reservedSpace2:11;
      uint64_t F_FR_18:1;
      uint64_t reservedSpace3:1;
      uint64_t F_FR_20:1;
      uint64_t F_FR_21:1;
      uint64_t reservedSpace4:8;
      uint64_t F_FR_30:1;
      uint64_t F_FR_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D_EXR:1;
      uint64_t reservedSpace0:30;
      uint64_t D_F_FR_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FERD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BE_EXR:1;
      uint64_t reservedSpace0:2;
      uint64_t BE_F_FR_3:1;
      uint64_t BE_F_FR_4:1;
      uint64_t reservedSpace1:1;
      uint64_t BE_F_FR_6:1;
      uint64_t reservedSpace2:11;
      uint64_t BE_F_FR_18:1;
      uint64_t reservedSpace3:1;
      uint64_t BE_F_FR_20:1;
      uint64_t BE_F_FR_21:1;
      uint64_t reservedSpace4:8;
      uint64_t BE_F_FR_30:1;
      uint64_t BE_F_FR_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBRE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FREC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FREC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRET:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRET:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERASSERT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DES_RES:1;
      uint64_t FES_RES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDSS;

  uint8_t res1[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPH_0_RST:1;
      uint64_t PERIPH_1_RST:1;
      uint64_t PERIPH_2_RST:1;
      uint64_t PERIPH_3_RST:1;
      uint64_t PERIPH_4_RST:1;
      uint64_t PERIPH_5_RST:1;
      uint64_t PERIPH_6_RST:1;
      uint64_t PERIPH_7_RST:1;
      uint64_t PERIPH_8_RST:1;
      uint64_t PERIPH_9_RST:1;
      uint64_t PERIPH_10_RST:1;
      uint64_t PERIPH_11_RST:1;
      uint64_t PERIPH_12_RST:1;
      uint64_t PERIPH_13_RST:1;
      uint64_t PERIPH_14_RST:1;
      uint64_t PERIPH_15_RST:1;
      uint64_t PERIPH_16_RST:1;
      uint64_t PERIPH_17_RST:1;
      uint64_t PERIPH_18_RST:1;
      uint64_t PERIPH_19_RST:1;
      uint64_t PERIPH_20_RST:1;
      uint64_t PERIPH_21_RST:1;
      uint64_t PERIPH_22_RST:1;
      uint64_t PERIPH_23_RST:1;
      uint64_t PERIPH_24_RST:1;
      uint64_t PERIPH_25_RST:1;
      uint64_t PERIPH_26_RST:1;
      uint64_t PERIPH_27_RST:1;
      uint64_t PERIPH_28_RST:1;
      uint64_t PERIPH_29_RST:1;
      uint64_t PERIPH_30_RST:1;
      uint64_t PERIPH_31_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRST0_0;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPH_64_RST:1;
      uint64_t PERIPH_65_RST:1;
      uint64_t PERIPH_66_RST:1;
      uint64_t PERIPH_67_RST:1;
      uint64_t PERIPH_68_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRST1_0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPH_128_RST:1;
      uint64_t PERIPH_129_RST:1;
      uint64_t PERIPH_130_RST:1;
      uint64_t PERIPH_131_RST:1;
      uint64_t PERIPH_132_RST:1;
      uint64_t PERIPH_133_RST:1;
      uint64_t PERIPH_134_RST:1;
      uint64_t PERIPH_135_RST:1;
      uint64_t PERIPH_136_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRST2_0;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPH_192_RST:1;
      uint64_t PERIPH_193_RST:1;
      uint64_t PERIPH_194_RST:1;
      uint64_t PERIPH_195_RST:1;
      uint64_t PERIPH_196_RST:1;
      uint64_t PERIPH_197_RST:1;
      uint64_t PERIPH_198_RST:1;
      uint64_t PERIPH_199_RST:1;
      uint64_t PERIPH_200_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRST3_0;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPH_256_RST:1;
      uint64_t PERIPH_257_RST:1;
      uint64_t PERIPH_258_RST:1;
      uint64_t PERIPH_259_RST:1;
      uint64_t PERIPH_260_RST:1;
      uint64_t PERIPH_261_RST:1;
      uint64_t PERIPH_262_RST:1;
      uint64_t PERIPH_263_RST:1;
      uint64_t PERIPH_264_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRST4_0;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPH_320_RST:1;
      uint64_t PERIPH_321_RST:1;
      uint64_t PERIPH_322_RST:1;
      uint64_t PERIPH_323_RST:1;
      uint64_t PERIPH_324_RST:1;
      uint64_t PERIPH_325_RST:1;
      uint64_t PERIPH_326_RST:1;
      uint64_t PERIPH_327_RST:1;
      uint64_t PERIPH_328_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRST5_0;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPH_384_RST:1;
      uint64_t PERIPH_385_RST:1;
      uint64_t PERIPH_386_RST:1;
      uint64_t PERIPH_387_RST:1;
      uint64_t PERIPH_388_RST:1;
      uint64_t PERIPH_389_RST:1;
      uint64_t PERIPH_390_RST:1;
      uint64_t PERIPH_391_RST:1;
      uint64_t PERIPH_392_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRST6_0;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPH_448_RST:1;
      uint64_t PERIPH_449_RST:1;
      uint64_t PERIPH_450_RST:1;
      uint64_t PERIPH_451_RST:1;
      uint64_t PERIPH_452_RST:1;
      uint64_t PERIPH_453_RST:1;
      uint64_t PERIPH_454_RST:1;
      uint64_t PERIPH_455_RST:1;
      uint64_t PERIPH_456_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRST7_0;

  uint8_t res9[196];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPH_0_STAT:1;
      uint64_t PERIPH_1_STAT:1;
      uint64_t PERIPH_2_STAT:1;
      uint64_t PERIPH_3_STAT:1;
      uint64_t PERIPH_4_STAT:1;
      uint64_t PERIPH_5_STAT:1;
      uint64_t PERIPH_6_STAT:1;
      uint64_t PERIPH_7_STAT:1;
      uint64_t PERIPH_8_STAT:1;
      uint64_t PERIPH_9_STAT:1;
      uint64_t PERIPH_10_STAT:1;
      uint64_t PERIPH_11_STAT:1;
      uint64_t PERIPH_12_STAT:1;
      uint64_t PERIPH_13_STAT:1;
      uint64_t PERIPH_14_STAT:1;
      uint64_t PERIPH_15_STAT:1;
      uint64_t PERIPH_16_STAT:1;
      uint64_t PERIPH_17_STAT:1;
      uint64_t PERIPH_18_STAT:1;
      uint64_t PERIPH_19_STAT:1;
      uint64_t PERIPH_20_STAT:1;
      uint64_t PERIPH_21_STAT:1;
      uint64_t PERIPH_22_STAT:1;
      uint64_t PERIPH_23_STAT:1;
      uint64_t PERIPH_24_STAT:1;
      uint64_t PERIPH_25_STAT:1;
      uint64_t PERIPH_26_STAT:1;
      uint64_t PERIPH_27_STAT:1;
      uint64_t PERIPH_28_STAT:1;
      uint64_t PERIPH_29_STAT:1;
      uint64_t PERIPH_30_STAT:1;
      uint64_t PERIPH_31_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT0_0;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPH_64_STAT:1;
      uint64_t PERIPH_65_STAT:1;
      uint64_t PERIPH_66_STAT:1;
      uint64_t PERIPH_67_STAT:1;
      uint64_t PERIPH_68_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT1_0;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPH_128_STAT:1;
      uint64_t PERIPH_129_STAT:1;
      uint64_t PERIPH_130_STAT:1;
      uint64_t PERIPH_131_STAT:1;
      uint64_t PERIPH_132_STAT:1;
      uint64_t PERIPH_133_STAT:1;
      uint64_t PERIPH_134_STAT:1;
      uint64_t PERIPH_135_STAT:1;
      uint64_t PERIPH_136_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT2_0;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPH_192_STAT:1;
      uint64_t PERIPH_193_STAT:1;
      uint64_t PERIPH_194_STAT:1;
      uint64_t PERIPH_195_STAT:1;
      uint64_t PERIPH_196_STAT:1;
      uint64_t PERIPH_197_STAT:1;
      uint64_t PERIPH_198_STAT:1;
      uint64_t PERIPH_199_STAT:1;
      uint64_t PERIPH_200_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT3_0;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPH_256_STAT:1;
      uint64_t PERIPH_257_STAT:1;
      uint64_t PERIPH_258_STAT:1;
      uint64_t PERIPH_259_STAT:1;
      uint64_t PERIPH_260_STAT:1;
      uint64_t PERIPH_261_STAT:1;
      uint64_t PERIPH_262_STAT:1;
      uint64_t PERIPH_263_STAT:1;
      uint64_t PERIPH_264_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT4_0;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPH_320_STAT:1;
      uint64_t PERIPH_321_STAT:1;
      uint64_t PERIPH_322_STAT:1;
      uint64_t PERIPH_323_STAT:1;
      uint64_t PERIPH_324_STAT:1;
      uint64_t PERIPH_325_STAT:1;
      uint64_t PERIPH_326_STAT:1;
      uint64_t PERIPH_327_STAT:1;
      uint64_t PERIPH_328_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT5_0;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPH_384_STAT:1;
      uint64_t PERIPH_385_STAT:1;
      uint64_t PERIPH_386_STAT:1;
      uint64_t PERIPH_387_STAT:1;
      uint64_t PERIPH_388_STAT:1;
      uint64_t PERIPH_389_STAT:1;
      uint64_t PERIPH_390_STAT:1;
      uint64_t PERIPH_391_STAT:1;
      uint64_t PERIPH_392_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT6_0;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPH_448_STAT:1;
      uint64_t PERIPH_449_STAT:1;
      uint64_t PERIPH_450_STAT:1;
      uint64_t PERIPH_451_STAT:1;
      uint64_t PERIPH_452_STAT:1;
      uint64_t PERIPH_453_STAT:1;
      uint64_t PERIPH_454_STAT:1;
      uint64_t PERIPH_455_STAT:1;
      uint64_t PERIPH_456_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT7_0;

};

#define MC_RGM (*(volatile struct MC_RGM_tag *) 0x40078000)

struct SRC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SW_NCF1:1;
      uint64_t SW_NCF2:1;
      uint64_t SW_NCF3:1;
      uint64_t SW_NCF4:1;
      uint64_t SW_NCF5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SW_NCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHY_MODE:1;
      uint64_t PHY_INTF_SEL:3;
      uint64_t reservedSpace0:6;
      uint64_t FTM0_SEL:1;
      uint64_t FTM1_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GMAC_0_CTRL_STS;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSE_CM7_SLEEP_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSE_CM7_STATUS_REG;

  uint8_t res1[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL_FHH_STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMU_STATUS_REG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL_FHH_STAT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMU_STATUS_REG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOUT_OVERRIDE_CLEAR:1;
      uint64_t EOUT_OVERRIDE_DISABLE_DURING_SELFTEST:1;
      uint64_t Reserved:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCCU_EOUT_OVERRIDE_CLEAR_REG;

  uint8_t res2[152];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEBUG_CLK_DISABLE:1;
      uint64_t CA53_0_DBGL1RSTDISABLE:1;
      uint64_t CA53_1_DBGL1RSTDISABLE:1;
      uint64_t DBG_SETUP_DONE:1;
      uint64_t JTAG_ACTIVE:1;
      uint64_t CA53_0_L2RSTDISABLE:1;
      uint64_t CA53_1_L2RSTDISABLE:1;
      uint64_t DBG_RST_MSK_0a:1;
      uint64_t DBG_RST_MSK_1a:1;
      uint64_t READY_FOR_DEBUG:1;
      uint64_t Reserved:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEBUG_CONTROL;

  uint8_t res3[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAN_TS_CNT_SEL:2;
      uint64_t TS_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMESTAMP_CONTROL_REGISTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLEXRAY_0_STOPWATCH_MUX_SELECT:2;
      uint64_t FLEXRAY_1_STOPWATCH_MUX_SELECT:2;
      uint64_t Reserved:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLEXRAY_OS_TICK_INPUT_SELECT_REG;

};

#define SRC (*(volatile struct SRC_tag *) 0x4007c000)

struct CM7_GPR_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM7_CPU_WAIT:1;
      uint64_t CM7_CPU_EVENT_GENERATE:1;
      uint64_t CM7_CPU_MEMORY_RETENTION_MODE_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORTEXM7_GPR0;

};

#define CM7_GPR_0 (*(volatile struct CM7_GPR_0_tag *) 0x4007c100)

struct CM7_GPR_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM7_CPU_WAIT:1;
      uint64_t CM7_CPU_EVENT_GENERATE:1;
      uint64_t CM7_CPU_MEMORY_RETENTION_MODE_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORTEXM7_GPR0;

};

#define CM7_GPR_1 (*(volatile struct CM7_GPR_1_tag *) 0x4007c200)

struct CM7_GPR_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM7_CPU_WAIT:1;
      uint64_t CM7_CPU_EVENT_GENERATE:1;
      uint64_t CM7_CPU_MEMORY_RETENTION_MODE_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORTEXM7_GPR0;

};

#define CM7_GPR_2 (*(volatile struct CM7_GPR_2_tag *) 0x4007c300)

struct A53_GPR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CA53_0_CORE0_AA64nAA32:1;
      uint64_t CA53_0_CORE1_AA64nAA32:1;
      uint64_t CA53_1_CORE0_AA64nAA32:1;
      uint64_t CA53_1_CORE1_AA64nAA32:1;
      uint64_t CA53_0_BROADCASTCACHEMAINT:1;
      uint64_t CA53_0_BROADCASTINNER:1;
      uint64_t CA53_0_BROADCASTOUTER:1;
      uint64_t CA53_1_BROADCASTCACHEMAINT:1;
      uint64_t CA53_1_BROADCASTINNER:1;
      uint64_t CA53_1_BROADCASTOUTER:1;
      uint64_t CA53_0_CORE0_CFGEND:1;
      uint64_t CA53_0_CORE1_CFGEND:1;
      uint64_t CA53_0_CORE0_CFGTE:1;
      uint64_t CA53_0_CORE1_CFGTE:1;
      uint64_t CA53_1_CORE0_CFGEND:1;
      uint64_t CA53_1_CORE1_CFGEND:1;
      uint64_t CA53_1_CORE0_CFGTE:1;
      uint64_t CA53_1_CORE1_CFGTE:1;
      uint64_t CA53_0_CORE0_VINITHI:1;
      uint64_t CA53_0_CORE1_VINITHI:1;
      uint64_t CA53_1_CORE0_VINITHI:1;
      uint64_t CA53_1_CORE1_VINITHI:1;
      uint64_t reservedSpace0:2;
      uint64_t CA53_COUNTER_CLK_DIV_VAL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WFE_EVT_CA53_CLUSTER0:1;
      uint64_t WFE_EVT_CA53_CLUSTER1:1;
      uint64_t reservedSpace0:6;
      uint64_t CLUSTER0_CG_EN:1;
      uint64_t CLUSTER1_CG_EN:1;
      uint64_t reservedSpace1:14;
      uint64_t CA53_0_CORE0_CP15SDISABLE:1;
      uint64_t CA53_0_CORE1_CP15SDISABLE:1;
      uint64_t CA53_1_CORE0_CP15SDISABLE:1;
      uint64_t CA53_1_CORE1_CP15SDISABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTVALUEB_CLUSTER0_LOW_BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTVALUEB_CLUSTER0_HIGH_BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTVALUEB_CLUSTER1_LOW_BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTVALUEB_CLUSTER1_HIGH_BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CA53_LOCKSTEP_EN:1;
      uint64_t GIC500_LOCKSTEP_EN:2;
      uint64_t reservedSpace0:5;
      uint64_t LOCKSTEP_RECOVERY_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CA53_0_CLUSTERIDAFF1:8;
      uint64_t CA53_0_CLUSTERIDAFF2:8;
      uint64_t CA53_1_CLUSTERIDAFF1:8;
      uint64_t CA53_1_CLUSTERIDAFF2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR07;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CA53_0_CORE0_WARM_RESET_STATUS:1;
      uint64_t CA53_0_CORE1_WARM_RESET_STATUS:1;
      uint64_t CA53_1_CORE0_WARM_RESET_STATUS:1;
      uint64_t CA53_1_CORE1_WARM_RESET_STATUS:1;
      uint64_t reservedSpace0:4;
      uint64_t CLUSTER0_STANDBYWFIL2_STATUS:1;
      uint64_t CLUSTER1_STANDBYWFIL2_STATUS:1;
      uint64_t reservedSpace1:6;
      uint64_t CA53_0_CORE0_STANDBYWFE_STATUS:1;
      uint64_t CA53_0_CORE1_STANDBYWFE_STATUS:1;
      uint64_t CA53_1_CORE0_STANDBYWFE_STATUS:1;
      uint64_t CA53_1_CORE1_STANDBYWFE_STATUS:1;
      uint64_t reservedSpace2:4;
      uint64_t CA53_0_CORE0_STANDBYWFI_STATUS:1;
      uint64_t CA53_0_CORE1_STANDBYWFI_STATUS:1;
      uint64_t CA53_1_CORE0_STANDBYWFI_STATUS:1;
      uint64_t CA53_1_CORE1_STANDBYWFI_STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR08;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CA53_0_CORE0_RVBARADDR_39_32:8;
      uint64_t CA53_0_CORE1_RVBARADDR_39_32:8;
      uint64_t CA53_1_CORE0_RVBARADDR_39_32:8;
      uint64_t CA53_1_CORE1_RVBARADDR_39_32:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR09;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CA53_0_CORE0_CPUMERRSR_HIGH_BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CA53_0_CORE0_CPUMERRSR_LOW_BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CA53_0_CORE1_CPUMERRSR_HIGH_BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CA53_0_CORE1_CPUMERRSR_LOW_BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CA53_1_CORE0_CPUMERRSR_HIGH_BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CA53_1_CORE0_CPUMERRSR_LOW_BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CA53_1_CORE1_CPUMERRSR_HIGH_BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CA53_1_CORE1_CPUMERRSR_LOW_BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CA53_0_L2MERRSR_HIGH_BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CA53_0_L2MERRSR_LOW_BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CA53_1_L2MERRSR_HIGH_BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CA53_1_L2MERRSR_LOW_BITS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR21;

  uint8_t res0[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAST_READ_ADDRESS_39_32:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAST_READ_ADDRESS_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAST_WRITE_ADDRESS_39_32:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAST_WRITE_ADDRESS_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR32;

};

#define A53_GPR (*(volatile struct A53_GPR_tag *) 0x4007c400)

struct SERDES_0_GPR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t parity_chk_mstr_araddrp_err:1;
      uint64_t parity_chk_mstr_awaddrp_err:1;
      uint64_t parity_chk_mstr_wdatap_err:1;
      uint64_t parity_chk_slv_rdatap_err:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCIE_Config_0;

};

#define SERDES_0_GPR (*(volatile struct SERDES_0_GPR_tag *) 0x4007c500)

struct DDR_GPR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t pa_rmask:6;
      uint64_t pa_wmask:3;
      uint64_t reservedSpace1:1;
      uint64_t memory_ret:1;
      uint64_t reservedSpace2:1;
      uint64_t WRECC_CREDIR_CNT:7;
      uint64_t sbrAddressStartMask_35_32:4;
      uint64_t sbrAddressRangeMask_35_32:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR_Config_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t sbrAddressStartMask:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR_Config_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t sbrAddressRangeMask:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR_Config_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dbg_dfi_ie_cmd_type:3;
      uint64_t hif_refresh_req_bank:6;
      uint64_t raqb_wcount_0:4;
      uint64_t raqb_wcount_1:4;
      uint64_t raqb_wcount_2:4;
      uint64_t stat_ddrc_reg_selfref_type:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR_Config_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t raqr_wcount_0:4;
      uint64_t raqr_wcount_1:4;
      uint64_t raqr_wcount_2:4;
      uint64_t waq_wcount_0:4;
      uint64_t waq_wcount_1:4;
      uint64_t waq_wcount_2:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR_Config_4;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t perf_op_is_zqcl:1;
      uint64_t perf_op_is_zqcs:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR_Config_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DDR_RET_CONTROL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR_RET_CONTROL;

};

#define DDR_GPR (*(volatile struct DDR_GPR_tag *) 0x4007c600)

struct SRC_GPR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR00:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR01:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR02:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR03:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR04:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR05:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR06:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR07:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR07;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR08:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR08;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR09:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR09;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR10:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR11:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR12:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR13:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR14:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR15:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR16:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR17:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR18:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR19:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR20:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR21:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR22:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR23:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR24:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR25:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR26:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR27:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR28:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR29:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR30:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR31:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR33:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR34:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR35:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR36:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR37:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR38:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR39:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR40:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR41:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR41;

};

#define SRC_GPR (*(volatile struct SRC_GPR_tag *) 0x4007c800)

struct BOOT_CC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOT_CFG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOOT_GPR_BMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t FUSE_SEL:1;
      uint64_t reservedSpace1:19;
      uint64_t BMODE2:1;
      uint64_t BMODE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOOT_GPR_BMR2;

};

#define BOOT_CC (*(volatile struct BOOT_CC_tag *) 0x4007c900)

struct SECURITY_CC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISCDAT0;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:6;
      uint64_t reservedSpace0:1;
      uint64_t DATA1:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSE_DAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSE_DAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSE_DAT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSE_DAT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DBGCFG:1;
      uint64_t DATA:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSE_DAT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DATA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSE_DAT5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSE_DAT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSE_DAT7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSE_DAT8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSE_DAT9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSE_DAT10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSE_DAT11;

};

#define SECURITY_CC (*(volatile struct SECURITY_CC_tag *) 0x4007c908)

struct S32G_GPR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DDR:1;
      uint64_t HIF0:1;
      uint64_t HIF1:1;
      uint64_t HIF2:1;
      uint64_t HIF3:1;
      uint64_t UTIL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFE_COH_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMAC0:4;
      uint64_t EMAC1:4;
      uint64_t EMAC2:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFE_EMACX_INTF_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFE_SYS_GEN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFE_SYS_GEN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFE_SYS_GEN2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFE_SYS_GEN3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFE_SYS_GEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CON:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFE_SYS_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRCLAMP:3;
      uint64_t PWRDWN:3;
      uint64_t PWRISO:3;
      uint64_t PWRACK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFE_PWR_CTRL;

  uint8_t res0[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLEEPING:4;
      uint64_t SYSRESETREQ:4;
      uint64_t LLCE_LSPI_TRIG_RX:4;
      uint64_t LLCE_LSPI_TRIG_FM:4;
      uint64_t MISC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LLCE_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXEVENT:4;
      uint64_t LINDIVSEL:1;
      uint64_t LLCE_LSPI_TRIG_IN:4;
      uint64_t LLCE_HTM0_TRC_DIS:1;
      uint64_t LLCE_HTM1_TRC_DIS:1;
      uint64_t PFE_2_LLCE_INT_HS_BP:1;
      uint64_t MISC:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LLCE_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARURGENTB:3;
      uint64_t ARURGENTR:3;
      uint64_t AWURGENT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR_URGENT_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GLOBAL_LDOK_IN0:1;
      uint64_t GLOBAL_LDOK_IN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLXTIM_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GLB_LDOK_OUT0:1;
      uint64_t GLB_LDOK_OUT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLXTIM_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL_FHH:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMU_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOC_NOPEND_TRANS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TERM_EN:1;
      uint64_t TM_SEL0:1;
      uint64_t TM_SEL1:1;
      uint64_t AURORA_MODE:1;
      uint64_t CREF_EN:1;
      uint64_t CLKOUT_OBE:1;
      uint64_t CLKOUT_TX_PREEMPH0:1;
      uint64_t CLKOUT_TX_PREEMPH1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKOUT_PAD_CTRL;

  uint8_t res1[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCIE1_WD_TOGG:4;
      uint64_t PCIE1_RD_TOGG:4;
      uint64_t PCIE0_WD_TOGG:4;
      uint64_t PCIE0_RD_TOGG:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCIE_TOGGLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCIE1_WD_TOGG_DONE_STAT:4;
      uint64_t PCIE1_RD_TOGG_DONE_STAT:4;
      uint64_t PCIE0_WD_TOGG_DONE_STAT:4;
      uint64_t PCIE0_RD_TOGG_DONE_STAT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCIE_TOGGLEDONE_STAT;

  uint8_t res2[72];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USBPWRFLT:1;
      uint64_t ACCEL_FLXNC_REF_DIV:2;
      uint64_t ACCEL_FLXNC_RD0_IDLEREQ:1;
      uint64_t MISC:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GENCTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTRL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GENCTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTRL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GENCTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTRL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GENCTRL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GENSTAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GENSTAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GENSTAT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GENSTAT3;

};

#define S32G_GPR (*(volatile struct S32G_GPR_tag *) 0x4007ca00)

struct S32G_STDBY_GPR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WKUP_SLEEP_DIS:23;
      uint64_t PMIC_VDD_OK_SLEEP_DIS:1;
      uint64_t PMIC_STBY_MODE_SLEEP_DIS:1;
      uint64_t RESET_SLEEP_DIS:1;
      uint64_t POR_SLEEP_DIS:1;
      uint64_t VDET_SLEEP_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLEEP_DISABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WKUP_PUS:23;
      uint64_t reservedSpace0:8;
      uint64_t WKUP_PU_OVERRIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WKUP_PUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GENCTRL0_STBY;

};

#define S32G_STDBY_GPR (*(volatile struct S32G_STDBY_GPR_tag *) 0x4007cb00)

struct SERDES_1_GPR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t parity_chk_mstr_araddrp_err:1;
      uint64_t parity_chk_mstr_awaddrp_err:1;
      uint64_t parity_chk_mstr_wdatap_err:1;
      uint64_t parity_chk_slv_rdatap_err:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCIE_Config_0;

};

#define SERDES_1_GPR (*(volatile struct SERDES_1_GPR_tag *) 0x4007cc00)

struct RDC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t RD1_INTERCONNECT_INTERFACE_DISABLE:1;
      uint64_t reservedSpace1:27;
      uint64_t RD1_CTRL_UNLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RD1_CTRL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t RD2_INTERCONNECT_INTERFACE_DISABLE:1;
      uint64_t reservedSpace1:27;
      uint64_t RD2_CTRL_UNLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RD2_CTRL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t RD3_INTERCONNECT_INTERFACE_DISABLE:1;
      uint64_t reservedSpace1:27;
      uint64_t RD3_CTRL_UNLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RD3_CTRL_REG;

  uint8_t res0[116];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t RD1_INTERCONNECT_INTERFACE_DISABLE_REQ_ACK_STAT:1;
      uint64_t RD1_INTERCONNECT_INTERFACE_DISABLE_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RD1_STAT_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t RD2_INTERCONNECT_INTERFACE_DISABLE_REQ_ACK_STAT:1;
      uint64_t RD2_INTERCONNECT_INTERFACE_DISABLE_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RD2_STAT_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t RD3_INTERCONNECT_INTERFACE_DISABLE_REQ_ACK_STAT:1;
      uint64_t RD3_INTERCONNECT_INTERFACE_DISABLE_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RD3_STAT_REG;

};

#define RDC (*(volatile struct RDC_tag *) 0x40080004)

struct MC_ME_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_KEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEST_RST:1;
      uint64_t FUNC_RST:1;
      uint64_t reservedSpace0:13;
      uint64_t STANDBY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE_CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_UPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE_UPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREV_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIDX:3;
      uint64_t reservedSpace0:5;
      uint64_t PIDX:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAIN_COREID;

  uint8_t res0[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_STAT;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCK0:1;
      uint64_t BLOCK1:1;
      uint64_t BLOCK2:1;
      uint64_t BLOCK3:1;
      uint64_t BLOCK4:1;
      uint64_t BLOCK5:1;
      uint64_t BLOCK6:1;
      uint64_t BLOCK7:1;
      uint64_t BLOCK8:1;
      uint64_t BLOCK9:1;
      uint64_t BLOCK10:1;
      uint64_t BLOCK11:1;
      uint64_t BLOCK12:1;
      uint64_t BLOCK13:1;
      uint64_t BLOCK14:1;
      uint64_t BLOCK15:1;
      uint64_t BLOCK16:1;
      uint64_t BLOCK17:1;
      uint64_t BLOCK18:1;
      uint64_t BLOCK19:1;
      uint64_t BLOCK20:1;
      uint64_t BLOCK21:1;
      uint64_t BLOCK22:1;
      uint64_t BLOCK23:1;
      uint64_t BLOCK24:1;
      uint64_t BLOCK25:1;
      uint64_t BLOCK26:1;
      uint64_t BLOCK27:1;
      uint64_t BLOCK28:1;
      uint64_t BLOCK29:1;
      uint64_t BLOCK30:1;
      uint64_t BLOCK31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_COFB0_STAT;

  uint8_t res2[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ0:1;
      uint64_t REQ1:1;
      uint64_t REQ2:1;
      uint64_t REQ3:1;
      uint64_t REQ4:1;
      uint64_t REQ5:1;
      uint64_t REQ6:1;
      uint64_t REQ7:1;
      uint64_t REQ8:1;
      uint64_t REQ9:1;
      uint64_t REQ10:1;
      uint64_t REQ11:1;
      uint64_t REQ12:1;
      uint64_t REQ13:1;
      uint64_t REQ14:1;
      uint64_t REQ15:1;
      uint64_t REQ16:1;
      uint64_t REQ17:1;
      uint64_t REQ18:1;
      uint64_t REQ19:1;
      uint64_t REQ20:1;
      uint64_t REQ21:1;
      uint64_t REQ22:1;
      uint64_t REQ23:1;
      uint64_t REQ24:1;
      uint64_t REQ25:1;
      uint64_t REQ26:1;
      uint64_t REQ27:1;
      uint64_t REQ28:1;
      uint64_t REQ29:1;
      uint64_t REQ30:1;
      uint64_t REQ31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_COFB0_CLKEN;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE0_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE0_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t reservedSpace0:30;
      uint64_t WFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE0_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE0_ADDR;

  uint8_t res4[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE1_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE1_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t reservedSpace0:30;
      uint64_t WFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE1_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE1_ADDR;

  uint8_t res5[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE2_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE2_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t reservedSpace0:30;
      uint64_t WFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE2_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE2_ADDR;

  uint8_t res6[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE3_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE3_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t reservedSpace0:30;
      uint64_t WFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE3_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE3_ADDR;

  uint8_t res7[336];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCE:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCUD:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_STAT;

  uint8_t res8[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE0_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE0_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t reservedSpace0:30;
      uint64_t WFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE0_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE0_ADDR;

  uint8_t res9[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE1_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE1_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t reservedSpace0:30;
      uint64_t WFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE1_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE1_ADDR;

  uint8_t res10[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE2_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE2_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t reservedSpace0:30;
      uint64_t WFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE2_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE2_ADDR;

  uint8_t res11[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE3_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE3_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t reservedSpace0:30;
      uint64_t WFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE3_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE3_ADDR;

  uint8_t res12[336];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCE:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN2_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCUD:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN2_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN2_STAT;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCK0:1;
      uint64_t BLOCK1:1;
      uint64_t BLOCK2:1;
      uint64_t BLOCK3:1;
      uint64_t BLOCK4:1;
      uint64_t BLOCK5:1;
      uint64_t BLOCK6:1;
      uint64_t BLOCK7:1;
      uint64_t BLOCK8:1;
      uint64_t BLOCK9:1;
      uint64_t BLOCK10:1;
      uint64_t BLOCK11:1;
      uint64_t BLOCK12:1;
      uint64_t BLOCK13:1;
      uint64_t BLOCK14:1;
      uint64_t BLOCK15:1;
      uint64_t BLOCK16:1;
      uint64_t BLOCK17:1;
      uint64_t BLOCK18:1;
      uint64_t BLOCK19:1;
      uint64_t BLOCK20:1;
      uint64_t BLOCK21:1;
      uint64_t BLOCK22:1;
      uint64_t BLOCK23:1;
      uint64_t BLOCK24:1;
      uint64_t BLOCK25:1;
      uint64_t BLOCK26:1;
      uint64_t BLOCK27:1;
      uint64_t BLOCK28:1;
      uint64_t BLOCK29:1;
      uint64_t BLOCK30:1;
      uint64_t BLOCK31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN2_COFB0_STAT;

  uint8_t res14[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ0:1;
      uint64_t REQ1:1;
      uint64_t REQ2:1;
      uint64_t REQ3:1;
      uint64_t REQ4:1;
      uint64_t REQ5:1;
      uint64_t REQ6:1;
      uint64_t REQ7:1;
      uint64_t REQ8:1;
      uint64_t REQ9:1;
      uint64_t REQ10:1;
      uint64_t REQ11:1;
      uint64_t REQ12:1;
      uint64_t REQ13:1;
      uint64_t REQ14:1;
      uint64_t REQ15:1;
      uint64_t REQ16:1;
      uint64_t REQ17:1;
      uint64_t REQ18:1;
      uint64_t REQ19:1;
      uint64_t REQ20:1;
      uint64_t REQ21:1;
      uint64_t REQ22:1;
      uint64_t REQ23:1;
      uint64_t REQ24:1;
      uint64_t REQ25:1;
      uint64_t REQ26:1;
      uint64_t REQ27:1;
      uint64_t REQ28:1;
      uint64_t REQ29:1;
      uint64_t REQ30:1;
      uint64_t REQ31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN2_COFB0_CLKEN;

  uint8_t res15[460];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCE:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN3_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCUD:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN3_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN3_STAT;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCK0:1;
      uint64_t BLOCK1:1;
      uint64_t BLOCK2:1;
      uint64_t BLOCK3:1;
      uint64_t BLOCK4:1;
      uint64_t BLOCK5:1;
      uint64_t BLOCK6:1;
      uint64_t BLOCK7:1;
      uint64_t BLOCK8:1;
      uint64_t BLOCK9:1;
      uint64_t BLOCK10:1;
      uint64_t BLOCK11:1;
      uint64_t BLOCK12:1;
      uint64_t BLOCK13:1;
      uint64_t BLOCK14:1;
      uint64_t BLOCK15:1;
      uint64_t BLOCK16:1;
      uint64_t BLOCK17:1;
      uint64_t BLOCK18:1;
      uint64_t BLOCK19:1;
      uint64_t BLOCK20:1;
      uint64_t BLOCK21:1;
      uint64_t BLOCK22:1;
      uint64_t BLOCK23:1;
      uint64_t BLOCK24:1;
      uint64_t BLOCK25:1;
      uint64_t BLOCK26:1;
      uint64_t BLOCK27:1;
      uint64_t BLOCK28:1;
      uint64_t BLOCK29:1;
      uint64_t BLOCK30:1;
      uint64_t BLOCK31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN3_COFB0_STAT;

  uint8_t res17[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ0:1;
      uint64_t REQ1:1;
      uint64_t REQ2:1;
      uint64_t REQ3:1;
      uint64_t REQ4:1;
      uint64_t REQ5:1;
      uint64_t REQ6:1;
      uint64_t REQ7:1;
      uint64_t REQ8:1;
      uint64_t REQ9:1;
      uint64_t REQ10:1;
      uint64_t REQ11:1;
      uint64_t REQ12:1;
      uint64_t REQ13:1;
      uint64_t REQ14:1;
      uint64_t REQ15:1;
      uint64_t REQ16:1;
      uint64_t REQ17:1;
      uint64_t REQ18:1;
      uint64_t REQ19:1;
      uint64_t REQ20:1;
      uint64_t REQ21:1;
      uint64_t REQ22:1;
      uint64_t REQ23:1;
      uint64_t REQ24:1;
      uint64_t REQ25:1;
      uint64_t REQ26:1;
      uint64_t REQ27:1;
      uint64_t REQ28:1;
      uint64_t REQ29:1;
      uint64_t REQ30:1;
      uint64_t REQ31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN3_COFB0_CLKEN;

  uint8_t res18[460];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCE:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN4_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCUD:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN4_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN4_STAT;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCK0:1;
      uint64_t BLOCK1:1;
      uint64_t BLOCK2:1;
      uint64_t BLOCK3:1;
      uint64_t BLOCK4:1;
      uint64_t BLOCK5:1;
      uint64_t BLOCK6:1;
      uint64_t BLOCK7:1;
      uint64_t BLOCK8:1;
      uint64_t BLOCK9:1;
      uint64_t BLOCK10:1;
      uint64_t BLOCK11:1;
      uint64_t BLOCK12:1;
      uint64_t BLOCK13:1;
      uint64_t BLOCK14:1;
      uint64_t BLOCK15:1;
      uint64_t BLOCK16:1;
      uint64_t BLOCK17:1;
      uint64_t BLOCK18:1;
      uint64_t BLOCK19:1;
      uint64_t BLOCK20:1;
      uint64_t BLOCK21:1;
      uint64_t BLOCK22:1;
      uint64_t BLOCK23:1;
      uint64_t BLOCK24:1;
      uint64_t BLOCK25:1;
      uint64_t BLOCK26:1;
      uint64_t BLOCK27:1;
      uint64_t BLOCK28:1;
      uint64_t BLOCK29:1;
      uint64_t BLOCK30:1;
      uint64_t BLOCK31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN4_COFB0_STAT;

  uint8_t res20[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ0:1;
      uint64_t REQ1:1;
      uint64_t REQ2:1;
      uint64_t REQ3:1;
      uint64_t REQ4:1;
      uint64_t REQ5:1;
      uint64_t REQ6:1;
      uint64_t REQ7:1;
      uint64_t REQ8:1;
      uint64_t REQ9:1;
      uint64_t REQ10:1;
      uint64_t REQ11:1;
      uint64_t REQ12:1;
      uint64_t REQ13:1;
      uint64_t REQ14:1;
      uint64_t REQ15:1;
      uint64_t REQ16:1;
      uint64_t REQ17:1;
      uint64_t REQ18:1;
      uint64_t REQ19:1;
      uint64_t REQ20:1;
      uint64_t REQ21:1;
      uint64_t REQ22:1;
      uint64_t REQ23:1;
      uint64_t REQ24:1;
      uint64_t REQ25:1;
      uint64_t REQ26:1;
      uint64_t REQ27:1;
      uint64_t REQ28:1;
      uint64_t REQ29:1;
      uint64_t REQ30:1;
      uint64_t REQ31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN4_COFB0_CLKEN;

  uint8_t res21[460];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCE:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN5_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCUD:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN5_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN5_STAT;

  uint8_t res22[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCK0:1;
      uint64_t BLOCK1:1;
      uint64_t BLOCK2:1;
      uint64_t BLOCK3:1;
      uint64_t BLOCK4:1;
      uint64_t BLOCK5:1;
      uint64_t BLOCK6:1;
      uint64_t BLOCK7:1;
      uint64_t BLOCK8:1;
      uint64_t BLOCK9:1;
      uint64_t BLOCK10:1;
      uint64_t BLOCK11:1;
      uint64_t BLOCK12:1;
      uint64_t BLOCK13:1;
      uint64_t BLOCK14:1;
      uint64_t BLOCK15:1;
      uint64_t BLOCK16:1;
      uint64_t BLOCK17:1;
      uint64_t BLOCK18:1;
      uint64_t BLOCK19:1;
      uint64_t BLOCK20:1;
      uint64_t BLOCK21:1;
      uint64_t BLOCK22:1;
      uint64_t BLOCK23:1;
      uint64_t BLOCK24:1;
      uint64_t BLOCK25:1;
      uint64_t BLOCK26:1;
      uint64_t BLOCK27:1;
      uint64_t BLOCK28:1;
      uint64_t BLOCK29:1;
      uint64_t BLOCK30:1;
      uint64_t BLOCK31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN5_COFB0_STAT;

  uint8_t res23[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ0:1;
      uint64_t REQ1:1;
      uint64_t REQ2:1;
      uint64_t REQ3:1;
      uint64_t REQ4:1;
      uint64_t REQ5:1;
      uint64_t REQ6:1;
      uint64_t REQ7:1;
      uint64_t REQ8:1;
      uint64_t REQ9:1;
      uint64_t REQ10:1;
      uint64_t REQ11:1;
      uint64_t REQ12:1;
      uint64_t REQ13:1;
      uint64_t REQ14:1;
      uint64_t REQ15:1;
      uint64_t REQ16:1;
      uint64_t REQ17:1;
      uint64_t REQ18:1;
      uint64_t REQ19:1;
      uint64_t REQ20:1;
      uint64_t REQ21:1;
      uint64_t REQ22:1;
      uint64_t REQ23:1;
      uint64_t REQ24:1;
      uint64_t REQ25:1;
      uint64_t REQ26:1;
      uint64_t REQ27:1;
      uint64_t REQ28:1;
      uint64_t REQ29:1;
      uint64_t REQ30:1;
      uint64_t REQ31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN5_COFB0_CLKEN;

  uint8_t res24[460];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCE:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN6_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCUD:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN6_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN6_STAT;

  uint8_t res25[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCK0:1;
      uint64_t BLOCK1:1;
      uint64_t BLOCK2:1;
      uint64_t BLOCK3:1;
      uint64_t BLOCK4:1;
      uint64_t BLOCK5:1;
      uint64_t BLOCK6:1;
      uint64_t BLOCK7:1;
      uint64_t BLOCK8:1;
      uint64_t BLOCK9:1;
      uint64_t BLOCK10:1;
      uint64_t BLOCK11:1;
      uint64_t BLOCK12:1;
      uint64_t BLOCK13:1;
      uint64_t BLOCK14:1;
      uint64_t BLOCK15:1;
      uint64_t BLOCK16:1;
      uint64_t BLOCK17:1;
      uint64_t BLOCK18:1;
      uint64_t BLOCK19:1;
      uint64_t BLOCK20:1;
      uint64_t BLOCK21:1;
      uint64_t BLOCK22:1;
      uint64_t BLOCK23:1;
      uint64_t BLOCK24:1;
      uint64_t BLOCK25:1;
      uint64_t BLOCK26:1;
      uint64_t BLOCK27:1;
      uint64_t BLOCK28:1;
      uint64_t BLOCK29:1;
      uint64_t BLOCK30:1;
      uint64_t BLOCK31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN6_COFB0_STAT;

  uint8_t res26[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ0:1;
      uint64_t REQ1:1;
      uint64_t REQ2:1;
      uint64_t REQ3:1;
      uint64_t REQ4:1;
      uint64_t REQ5:1;
      uint64_t REQ6:1;
      uint64_t REQ7:1;
      uint64_t REQ8:1;
      uint64_t REQ9:1;
      uint64_t REQ10:1;
      uint64_t REQ11:1;
      uint64_t REQ12:1;
      uint64_t REQ13:1;
      uint64_t REQ14:1;
      uint64_t REQ15:1;
      uint64_t REQ16:1;
      uint64_t REQ17:1;
      uint64_t REQ18:1;
      uint64_t REQ19:1;
      uint64_t REQ20:1;
      uint64_t REQ21:1;
      uint64_t REQ22:1;
      uint64_t REQ23:1;
      uint64_t REQ24:1;
      uint64_t REQ25:1;
      uint64_t REQ26:1;
      uint64_t REQ27:1;
      uint64_t REQ28:1;
      uint64_t REQ29:1;
      uint64_t REQ30:1;
      uint64_t REQ31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN6_COFB0_CLKEN;

  uint8_t res27[460];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCE:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN7_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCUD:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN7_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN7_STAT;

  uint8_t res28[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCK0:1;
      uint64_t BLOCK1:1;
      uint64_t BLOCK2:1;
      uint64_t BLOCK3:1;
      uint64_t BLOCK4:1;
      uint64_t BLOCK5:1;
      uint64_t BLOCK6:1;
      uint64_t BLOCK7:1;
      uint64_t BLOCK8:1;
      uint64_t BLOCK9:1;
      uint64_t BLOCK10:1;
      uint64_t BLOCK11:1;
      uint64_t BLOCK12:1;
      uint64_t BLOCK13:1;
      uint64_t BLOCK14:1;
      uint64_t BLOCK15:1;
      uint64_t BLOCK16:1;
      uint64_t BLOCK17:1;
      uint64_t BLOCK18:1;
      uint64_t BLOCK19:1;
      uint64_t BLOCK20:1;
      uint64_t BLOCK21:1;
      uint64_t BLOCK22:1;
      uint64_t BLOCK23:1;
      uint64_t BLOCK24:1;
      uint64_t BLOCK25:1;
      uint64_t BLOCK26:1;
      uint64_t BLOCK27:1;
      uint64_t BLOCK28:1;
      uint64_t BLOCK29:1;
      uint64_t BLOCK30:1;
      uint64_t BLOCK31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN7_COFB0_STAT;

  uint8_t res29[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ0:1;
      uint64_t REQ1:1;
      uint64_t REQ2:1;
      uint64_t REQ3:1;
      uint64_t REQ4:1;
      uint64_t REQ5:1;
      uint64_t REQ6:1;
      uint64_t REQ7:1;
      uint64_t REQ8:1;
      uint64_t REQ9:1;
      uint64_t REQ10:1;
      uint64_t REQ11:1;
      uint64_t REQ12:1;
      uint64_t REQ13:1;
      uint64_t REQ14:1;
      uint64_t REQ15:1;
      uint64_t REQ16:1;
      uint64_t REQ17:1;
      uint64_t REQ18:1;
      uint64_t REQ19:1;
      uint64_t REQ20:1;
      uint64_t REQ21:1;
      uint64_t REQ22:1;
      uint64_t REQ23:1;
      uint64_t REQ24:1;
      uint64_t REQ25:1;
      uint64_t REQ26:1;
      uint64_t REQ27:1;
      uint64_t REQ28:1;
      uint64_t REQ29:1;
      uint64_t REQ30:1;
      uint64_t REQ31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN7_COFB0_CLKEN;

};

#define MC_ME (*(volatile struct MC_ME_tag *) 0x40088000)

struct PMC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t POR_SUP:1;
      uint64_t CSPD_EVENT:1;
      uint64_t POR_WDOG_EVENT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NCSPD_CTL0:1;
      uint64_t NCSPD_CTL1:1;
      uint64_t NCSPD_CTL2:1;
      uint64_t NCSPD_CTL3:1;
      uint64_t NCSPD_CTL4:1;
      uint64_t NCSPD_CTL5:1;
      uint64_t NCSPD_CTL6:1;
      uint64_t NCSPD_CTL7:1;
      uint64_t NCSPD_CTL8:1;
      uint64_t NCSPD_CTL9:1;
      uint64_t NCSPD_CTL10:1;
      uint64_t NCSPD_CTL11:1;
      uint64_t NCSPD_CTL12:1;
      uint64_t NCSPD_CTL13:1;
      uint64_t NCSPD_CTL14:1;
      uint64_t NCSPD_CTL15:1;
      uint64_t NCSPD_CTL16:1;
      uint64_t NCSPD_CTL17:1;
      uint64_t NCSPD_CTL18:1;
      uint64_t NCSPD_CTL19:1;
      uint64_t NCSPD_CTL20:1;
      uint64_t NCSPD_CTL21:1;
      uint64_t NCSPD_CTL22:1;
      uint64_t NCSPD_CTL23:1;
      uint64_t NCSPD_CTL24:1;
      uint64_t NCSPD_CTL25:1;
      uint64_t NCSPD_CTL26:1;
      uint64_t NCSPD_CTL27:1;
      uint64_t NCSPD_CTL28:1;
      uint64_t NCSPD_CTL29:1;
      uint64_t NCSPD_CTL30:1;
      uint64_t NCSPD_CTL31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCSPD_CTL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NCSPD_STAT0:1;
      uint64_t NCSPD_STAT1:1;
      uint64_t NCSPD_STAT2:1;
      uint64_t NCSPD_STAT3:1;
      uint64_t NCSPD_STAT4:1;
      uint64_t NCSPD_STAT5:1;
      uint64_t NCSPD_STAT6:1;
      uint64_t NCSPD_STAT7:1;
      uint64_t NCSPD_STAT8:1;
      uint64_t NCSPD_STAT9:1;
      uint64_t NCSPD_STAT10:1;
      uint64_t NCSPD_STAT11:1;
      uint64_t NCSPD_STAT12:1;
      uint64_t NCSPD_STAT13:1;
      uint64_t NCSPD_STAT14:1;
      uint64_t NCSPD_STAT15:1;
      uint64_t NCSPD_STAT16:1;
      uint64_t NCSPD_STAT17:1;
      uint64_t NCSPD_STAT18:1;
      uint64_t NCSPD_STAT19:1;
      uint64_t NCSPD_STAT20:1;
      uint64_t NCSPD_STAT21:1;
      uint64_t NCSPD_STAT22:1;
      uint64_t NCSPD_STAT23:1;
      uint64_t NCSPD_STAT24:1;
      uint64_t NCSPD_STAT25:1;
      uint64_t NCSPD_STAT26:1;
      uint64_t NCSPD_STAT27:1;
      uint64_t NCSPD_STAT28:1;
      uint64_t NCSPD_STAT29:1;
      uint64_t NCSPD_STAT30:1;
      uint64_t NCSPD_STAT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCSPD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HVCPOREF:1;
      uint64_t CSPD_EVENT_CAPTURE0:1;
      uint64_t CSPD_EVENT_CAPTURE1:1;
      uint64_t CSPD_EVENT_CAPTURE2:1;
      uint64_t CSPD_EVENT_CAPTURE3:1;
      uint64_t CSPD_EVENT_CAPTURE4:1;
      uint64_t CSPD_EVENT_CAPTURE5:1;
      uint64_t CSPD_EVENT_CAPTURE6:1;
      uint64_t CSPD_EVENT_CAPTURE7:1;
      uint64_t CSPD_EVENT_CAPTURE8:1;
      uint64_t CSPD_EVENT_CAPTURE9:1;
      uint64_t CSPD_EVENT_CAPTURE10:1;
      uint64_t CSPD_EVENT_CAPTURE11:1;
      uint64_t CSPD_EVENT_CAPTURE12:1;
      uint64_t CSPD_EVENT_CAPTURE13:1;
      uint64_t CSPD_EVENT_CAPTURE14:1;
      uint64_t CSPD_EVENT_CAPTURE15:1;
      uint64_t CSPD_EVENT_CAPTURE16:1;
      uint64_t CSPD_EVENT_CAPTURE17:1;
      uint64_t CSPD_EVENT_CAPTURE18:1;
      uint64_t CSPD_EVENT_CAPTURE19:1;
      uint64_t CSPD_EVENT_CAPTURE20:1;
      uint64_t CSPD_EVENT_CAPTURE21:1;
      uint64_t CSPD_EVENT_CAPTURE22:1;
      uint64_t CSPD_EVENT_CAPTURE23:1;
      uint64_t CSPD_EVENT_CAPTURE24:1;
      uint64_t CSPD_EVENT_CAPTURE25:1;
      uint64_t CSPD_EVENT_CAPTURE26:1;
      uint64_t CSPD_EVENT_CAPTURE27:1;
      uint64_t CSPD_EVENT_CAPTURE28:1;
      uint64_t CSPD_EVENT_CAPTURE29:1;
      uint64_t CSPD_EVENT_CAPTURE30:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSPD_EVENT_CAPTURE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NCSPD_EVENT_CAPTURE0:1;
      uint64_t NCSPD_EVENT_CAPTURE1:1;
      uint64_t NCSPD_EVENT_CAPTURE2:1;
      uint64_t NCSPD_EVENT_CAPTURE3:1;
      uint64_t NCSPD_EVENT_CAPTURE4:1;
      uint64_t NCSPD_EVENT_CAPTURE5:1;
      uint64_t NCSPD_EVENT_CAPTURE6:1;
      uint64_t NCSPD_EVENT_CAPTURE7:1;
      uint64_t NCSPD_EVENT_CAPTURE8:1;
      uint64_t NCSPD_EVENT_CAPTURE9:1;
      uint64_t NCSPD_EVENT_CAPTURE10:1;
      uint64_t NCSPD_EVENT_CAPTURE11:1;
      uint64_t NCSPD_EVENT_CAPTURE12:1;
      uint64_t NCSPD_EVENT_CAPTURE13:1;
      uint64_t NCSPD_EVENT_CAPTURE14:1;
      uint64_t NCSPD_EVENT_CAPTURE15:1;
      uint64_t NCSPD_EVENT_CAPTURE16:1;
      uint64_t NCSPD_EVENT_CAPTURE17:1;
      uint64_t NCSPD_EVENT_CAPTURE18:1;
      uint64_t NCSPD_EVENT_CAPTURE19:1;
      uint64_t NCSPD_EVENT_CAPTURE20:1;
      uint64_t NCSPD_EVENT_CAPTURE21:1;
      uint64_t NCSPD_EVENT_CAPTURE22:1;
      uint64_t NCSPD_EVENT_CAPTURE23:1;
      uint64_t NCSPD_EVENT_CAPTURE24:1;
      uint64_t NCSPD_EVENT_CAPTURE25:1;
      uint64_t NCSPD_EVENT_CAPTURE26:1;
      uint64_t NCSPD_EVENT_CAPTURE27:1;
      uint64_t NCSPD_EVENT_CAPTURE28:1;
      uint64_t NCSPD_EVENT_CAPTURE29:1;
      uint64_t NCSPD_EVENT_CAPTURE30:1;
      uint64_t NCSPD_EVENT_CAPTURE31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCSPD_EVENT_CAPTURE;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSFBIT0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POR_WDOG_EVENT_CAPTURE_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSFBIT0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POR_WDOG_EVENT_CAPTURE_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSFBIT0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POR_WDOG_EVENT_CAPTURE_2;

};

#define PMC (*(volatile struct PMC_tag *) 0x4008c000)

struct WKPU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t NOVF0:1;
      uint64_t NIF0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t NFE0:1;
      uint64_t NFEE0:1;
      uint64_t NREE0:1;
      uint64_t reservedSpace1:1;
      uint64_t NWRE0:1;
      uint64_t NDSS0:2;
      uint64_t NLOCK0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WBMS_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WBMSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRER;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IREE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WIREER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFEEx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WIFEER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WIFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPUE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WIPUER_WIPDER;

};

#define WKPU (*(volatile struct WKPU_tag *) 0x40090000)

struct SIUL2_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR_MASK:4;
      uint64_t MAJOR_MASK:4;
      uint64_t CC_REVISION:8;
      uint64_t PART_NO:10;
      uint64_t PRODUCT_LINE_LETTER:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLASH_SIZE_CODE:8;
      uint64_t FLASH_SIZE_DATA:4;
      uint64_t FLASH_DATA:2;
      uint64_t FLASH_CODE:2;
      uint64_t FREQUENCY:4;
      uint64_t PACKAGE:6;
      uint64_t TEMPERATURE:3;
      uint64_t TECHNOLOGY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIDR2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIFR0:1;
      uint64_t EIFR1:1;
      uint64_t EIFR2:1;
      uint64_t EIFR3:1;
      uint64_t EIFR4:1;
      uint64_t EIFR5:1;
      uint64_t EIFR6:1;
      uint64_t EIFR7:1;
      uint64_t EIFR8:1;
      uint64_t EIFR9:1;
      uint64_t EIFR10:1;
      uint64_t EIFR11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DISR0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRE0:1;
      uint64_t EIRE1:1;
      uint64_t EIRE2:1;
      uint64_t EIRE3:1;
      uint64_t EIRE4:1;
      uint64_t EIRE5:1;
      uint64_t EIRE6:1;
      uint64_t EIRE7:1;
      uint64_t EIRE8:1;
      uint64_t EIRE9:1;
      uint64_t EIRE10:1;
      uint64_t EIRE11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRER0;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSR0:1;
      uint64_t DIRSR1:1;
      uint64_t DIRSR2:1;
      uint64_t DIRSR3:1;
      uint64_t DIRSR4:1;
      uint64_t DIRSR5:1;
      uint64_t DIRSR6:1;
      uint64_t DIRSR7:1;
      uint64_t DIRSR8:1;
      uint64_t DIRSR9:1;
      uint64_t DIRSR10:1;
      uint64_t DIRSR11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSR0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IREE0:1;
      uint64_t IREE1:1;
      uint64_t IREE2:1;
      uint64_t IREE3:1;
      uint64_t IREE4:1;
      uint64_t IREE5:1;
      uint64_t IREE6:1;
      uint64_t IREE7:1;
      uint64_t IREE8:1;
      uint64_t IREE9:1;
      uint64_t IREE10:1;
      uint64_t IREE11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IREER0;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFEE0:1;
      uint64_t IFEE1:1;
      uint64_t IFEE2:1;
      uint64_t IFEE3:1;
      uint64_t IFEE4:1;
      uint64_t IFEE5:1;
      uint64_t IFEE6:1;
      uint64_t IFEE7:1;
      uint64_t IFEE8:1;
      uint64_t IFEE9:1;
      uint64_t IFEE10:1;
      uint64_t IFEE11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFEER0;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFE0:1;
      uint64_t IFE1:1;
      uint64_t IFE2:1;
      uint64_t IFE3:1;
      uint64_t IFE4:1;
      uint64_t IFE5:1;
      uint64_t IFE6:1;
      uint64_t IFE7:1;
      uint64_t IFE8:1;
      uint64_t IFE9:1;
      uint64_t IFE10:1;
      uint64_t IFE11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFER0;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR11;

  uint8_t res7[80];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFCP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCPR;

  uint8_t res8[380];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t reservedSpace1:4;
      uint64_t RCVR:1;
      uint64_t reservedSpace2:1;
      uint64_t PUS:1;
      uint64_t PUE:1;
      uint64_t SRE:3;
      uint64_t reservedSpace3:2;
      uint64_t IBE:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR101;

  uint8_t res9[1640];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR1;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR61;

  uint8_t res11[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR83;

  uint8_t res12[1904];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO31;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO35;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO34;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO33;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO32;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO39;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO38;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO37;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO36;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO43;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO42;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO41;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO40;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO47;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO46;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO45;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO44;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO51;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO50;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO49;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO48;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO55;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO54;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO53;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO52;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO59;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO58;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO57;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO56;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO63;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO62;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO61;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO60;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO67;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO66;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO65;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO64;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO71;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO70;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO69;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO68;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO75;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO74;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO73;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO72;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO79;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO78;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO77;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO76;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO83;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO82;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO81;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO80;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO87;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO86;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO85;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO84;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO91;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO90;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO89;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO88;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO95;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO94;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO93;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO92;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO99;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO98;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO97;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO96;

  uint8_t res13[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO101;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO100;

  uint8_t res14[408];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI31;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI35;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI34;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI33;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI32;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI39;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI38;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI37;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI36;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI43;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI42;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI41;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI40;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI47;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI46;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI45;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI44;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI51;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI50;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI49;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI48;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI55;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI54;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI53;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI52;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI59;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI58;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI57;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI56;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI63;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI62;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI61;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI60;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI67;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI66;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI65;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI64;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI71;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI70;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI69;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI68;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI75;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI74;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI73;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI72;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI79;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI78;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI77;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI76;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI83;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI82;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI81;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI80;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI87;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI86;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI85;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI84;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI91;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI90;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI89;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI88;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI95;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI94;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI93;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI92;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI99;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI98;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI97;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI96;

  uint8_t res15[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI101;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_a:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI100;

  uint8_t res16[408];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO0:1;
      uint64_t PPDO1:1;
      uint64_t PPDO2:1;
      uint64_t PPDO3:1;
      uint64_t PPDO4:1;
      uint64_t PPDO5:1;
      uint64_t PPDO6:1;
      uint64_t PPDO7:1;
      uint64_t PPDO8:1;
      uint64_t PPDO9:1;
      uint64_t PPDO10:1;
      uint64_t PPDO11:1;
      uint64_t PPDO12:1;
      uint64_t PPDO13:1;
      uint64_t PPDO14:1;
      uint64_t PPDO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO0:1;
      uint64_t PPDO1:1;
      uint64_t PPDO2:1;
      uint64_t PPDO3:1;
      uint64_t PPDO4:1;
      uint64_t PPDO5:1;
      uint64_t PPDO6:1;
      uint64_t PPDO7:1;
      uint64_t PPDO8:1;
      uint64_t PPDO9:1;
      uint64_t PPDO10:1;
      uint64_t PPDO11:1;
      uint64_t PPDO12:1;
      uint64_t PPDO13:1;
      uint64_t PPDO14:1;
      uint64_t PPDO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO0:1;
      uint64_t PPDO1:1;
      uint64_t PPDO2:1;
      uint64_t PPDO3:1;
      uint64_t PPDO4:1;
      uint64_t PPDO5:1;
      uint64_t PPDO6:1;
      uint64_t PPDO7:1;
      uint64_t PPDO8:1;
      uint64_t PPDO9:1;
      uint64_t PPDO10:1;
      uint64_t PPDO11:1;
      uint64_t PPDO12:1;
      uint64_t PPDO13:1;
      uint64_t PPDO14:1;
      uint64_t PPDO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO0:1;
      uint64_t PPDO1:1;
      uint64_t PPDO2:1;
      uint64_t PPDO3:1;
      uint64_t PPDO4:1;
      uint64_t PPDO5:1;
      uint64_t PPDO6:1;
      uint64_t PPDO7:1;
      uint64_t PPDO8:1;
      uint64_t PPDO9:1;
      uint64_t PPDO10:1;
      uint64_t PPDO11:1;
      uint64_t PPDO12:1;
      uint64_t PPDO13:1;
      uint64_t PPDO14:1;
      uint64_t PPDO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO0:1;
      uint64_t PPDO1:1;
      uint64_t PPDO2:1;
      uint64_t PPDO3:1;
      uint64_t PPDO4:1;
      uint64_t PPDO5:1;
      uint64_t PPDO6:1;
      uint64_t PPDO7:1;
      uint64_t PPDO8:1;
      uint64_t PPDO9:1;
      uint64_t PPDO10:1;
      uint64_t PPDO11:1;
      uint64_t PPDO12:1;
      uint64_t PPDO13:1;
      uint64_t PPDO14:1;
      uint64_t PPDO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO0:1;
      uint64_t PPDO1:1;
      uint64_t PPDO2:1;
      uint64_t PPDO3:1;
      uint64_t PPDO4:1;
      uint64_t PPDO5:1;
      uint64_t PPDO6:1;
      uint64_t PPDO7:1;
      uint64_t PPDO8:1;
      uint64_t PPDO9:1;
      uint64_t PPDO10:1;
      uint64_t PPDO11:1;
      uint64_t PPDO12:1;
      uint64_t PPDO13:1;
      uint64_t PPDO14:1;
      uint64_t PPDO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO4;

  uint8_t res17[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t PPDO10:1;
      uint64_t PPDO11:1;
      uint64_t PPDO12:1;
      uint64_t PPDO13:1;
      uint64_t PPDO14:1;
      uint64_t PPDO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO6;

  uint8_t res18[48];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI0:1;
      uint64_t PPDI1:1;
      uint64_t PPDI2:1;
      uint64_t PPDI3:1;
      uint64_t PPDI4:1;
      uint64_t PPDI5:1;
      uint64_t PPDI6:1;
      uint64_t PPDI7:1;
      uint64_t PPDI8:1;
      uint64_t PPDI9:1;
      uint64_t PPDI10:1;
      uint64_t PPDI11:1;
      uint64_t PPDI12:1;
      uint64_t PPDI13:1;
      uint64_t PPDI14:1;
      uint64_t PPDI15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI0:1;
      uint64_t PPDI1:1;
      uint64_t PPDI2:1;
      uint64_t PPDI3:1;
      uint64_t PPDI4:1;
      uint64_t PPDI5:1;
      uint64_t PPDI6:1;
      uint64_t PPDI7:1;
      uint64_t PPDI8:1;
      uint64_t PPDI9:1;
      uint64_t PPDI10:1;
      uint64_t PPDI11:1;
      uint64_t PPDI12:1;
      uint64_t PPDI13:1;
      uint64_t PPDI14:1;
      uint64_t PPDI15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI0:1;
      uint64_t PPDI1:1;
      uint64_t PPDI2:1;
      uint64_t PPDI3:1;
      uint64_t PPDI4:1;
      uint64_t PPDI5:1;
      uint64_t PPDI6:1;
      uint64_t PPDI7:1;
      uint64_t PPDI8:1;
      uint64_t PPDI9:1;
      uint64_t PPDI10:1;
      uint64_t PPDI11:1;
      uint64_t PPDI12:1;
      uint64_t PPDI13:1;
      uint64_t PPDI14:1;
      uint64_t PPDI15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI0:1;
      uint64_t PPDI1:1;
      uint64_t PPDI2:1;
      uint64_t PPDI3:1;
      uint64_t PPDI4:1;
      uint64_t PPDI5:1;
      uint64_t PPDI6:1;
      uint64_t PPDI7:1;
      uint64_t PPDI8:1;
      uint64_t PPDI9:1;
      uint64_t PPDI10:1;
      uint64_t PPDI11:1;
      uint64_t PPDI12:1;
      uint64_t PPDI13:1;
      uint64_t PPDI14:1;
      uint64_t PPDI15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI0:1;
      uint64_t PPDI1:1;
      uint64_t PPDI2:1;
      uint64_t PPDI3:1;
      uint64_t PPDI4:1;
      uint64_t PPDI5:1;
      uint64_t PPDI6:1;
      uint64_t PPDI7:1;
      uint64_t PPDI8:1;
      uint64_t PPDI9:1;
      uint64_t PPDI10:1;
      uint64_t PPDI11:1;
      uint64_t PPDI12:1;
      uint64_t PPDI13:1;
      uint64_t PPDI14:1;
      uint64_t PPDI15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI0:1;
      uint64_t PPDI1:1;
      uint64_t PPDI2:1;
      uint64_t PPDI3:1;
      uint64_t PPDI4:1;
      uint64_t PPDI5:1;
      uint64_t PPDI6:1;
      uint64_t PPDI7:1;
      uint64_t PPDI8:1;
      uint64_t PPDI9:1;
      uint64_t PPDI10:1;
      uint64_t PPDI11:1;
      uint64_t PPDI12:1;
      uint64_t PPDI13:1;
      uint64_t PPDI14:1;
      uint64_t PPDI15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI4;

  uint8_t res19[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t PPDI10:1;
      uint64_t PPDI11:1;
      uint64_t PPDI12:1;
      uint64_t PPDI13:1;
      uint64_t PPDI14:1;
      uint64_t PPDI15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI6;

  uint8_t res20[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO0:1;
      uint64_t MPPDO1:1;
      uint64_t MPPDO2:1;
      uint64_t MPPDO3:1;
      uint64_t MPPDO4:1;
      uint64_t MPPDO5:1;
      uint64_t MPPDO6:1;
      uint64_t MPPDO7:1;
      uint64_t MPPDO8:1;
      uint64_t MPPDO9:1;
      uint64_t MPPDO10:1;
      uint64_t MPPDO11:1;
      uint64_t MPPDO12:1;
      uint64_t MPPDO13:1;
      uint64_t MPPDO14:1;
      uint64_t MPPDO15:1;
      uint64_t MASK0:1;
      uint64_t MASK1:1;
      uint64_t MASK2:1;
      uint64_t MASK3:1;
      uint64_t MASK4:1;
      uint64_t MASK5:1;
      uint64_t MASK6:1;
      uint64_t MASK7:1;
      uint64_t MASK8:1;
      uint64_t MASK9:1;
      uint64_t MASK10:1;
      uint64_t MASK11:1;
      uint64_t MASK12:1;
      uint64_t MASK13:1;
      uint64_t MASK14:1;
      uint64_t MASK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO0:1;
      uint64_t MPPDO1:1;
      uint64_t MPPDO2:1;
      uint64_t MPPDO3:1;
      uint64_t MPPDO4:1;
      uint64_t MPPDO5:1;
      uint64_t MPPDO6:1;
      uint64_t MPPDO7:1;
      uint64_t MPPDO8:1;
      uint64_t MPPDO9:1;
      uint64_t MPPDO10:1;
      uint64_t MPPDO11:1;
      uint64_t MPPDO12:1;
      uint64_t MPPDO13:1;
      uint64_t MPPDO14:1;
      uint64_t MPPDO15:1;
      uint64_t MASK0:1;
      uint64_t MASK1:1;
      uint64_t MASK2:1;
      uint64_t MASK3:1;
      uint64_t MASK4:1;
      uint64_t MASK5:1;
      uint64_t MASK6:1;
      uint64_t MASK7:1;
      uint64_t MASK8:1;
      uint64_t MASK9:1;
      uint64_t MASK10:1;
      uint64_t MASK11:1;
      uint64_t MASK12:1;
      uint64_t MASK13:1;
      uint64_t MASK14:1;
      uint64_t MASK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO0:1;
      uint64_t MPPDO1:1;
      uint64_t MPPDO2:1;
      uint64_t MPPDO3:1;
      uint64_t MPPDO4:1;
      uint64_t MPPDO5:1;
      uint64_t MPPDO6:1;
      uint64_t MPPDO7:1;
      uint64_t MPPDO8:1;
      uint64_t MPPDO9:1;
      uint64_t MPPDO10:1;
      uint64_t MPPDO11:1;
      uint64_t MPPDO12:1;
      uint64_t MPPDO13:1;
      uint64_t MPPDO14:1;
      uint64_t MPPDO15:1;
      uint64_t MASK0:1;
      uint64_t MASK1:1;
      uint64_t MASK2:1;
      uint64_t MASK3:1;
      uint64_t MASK4:1;
      uint64_t MASK5:1;
      uint64_t MASK6:1;
      uint64_t MASK7:1;
      uint64_t MASK8:1;
      uint64_t MASK9:1;
      uint64_t MASK10:1;
      uint64_t MASK11:1;
      uint64_t MASK12:1;
      uint64_t MASK13:1;
      uint64_t MASK14:1;
      uint64_t MASK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO0:1;
      uint64_t MPPDO1:1;
      uint64_t MPPDO2:1;
      uint64_t MPPDO3:1;
      uint64_t MPPDO4:1;
      uint64_t MPPDO5:1;
      uint64_t MPPDO6:1;
      uint64_t MPPDO7:1;
      uint64_t MPPDO8:1;
      uint64_t MPPDO9:1;
      uint64_t MPPDO10:1;
      uint64_t MPPDO11:1;
      uint64_t MPPDO12:1;
      uint64_t MPPDO13:1;
      uint64_t MPPDO14:1;
      uint64_t MPPDO15:1;
      uint64_t MASK0:1;
      uint64_t MASK1:1;
      uint64_t MASK2:1;
      uint64_t MASK3:1;
      uint64_t MASK4:1;
      uint64_t MASK5:1;
      uint64_t MASK6:1;
      uint64_t MASK7:1;
      uint64_t MASK8:1;
      uint64_t MASK9:1;
      uint64_t MASK10:1;
      uint64_t MASK11:1;
      uint64_t MASK12:1;
      uint64_t MASK13:1;
      uint64_t MASK14:1;
      uint64_t MASK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO0:1;
      uint64_t MPPDO1:1;
      uint64_t MPPDO2:1;
      uint64_t MPPDO3:1;
      uint64_t MPPDO4:1;
      uint64_t MPPDO5:1;
      uint64_t MPPDO6:1;
      uint64_t MPPDO7:1;
      uint64_t MPPDO8:1;
      uint64_t MPPDO9:1;
      uint64_t MPPDO10:1;
      uint64_t MPPDO11:1;
      uint64_t MPPDO12:1;
      uint64_t MPPDO13:1;
      uint64_t MPPDO14:1;
      uint64_t MPPDO15:1;
      uint64_t MASK0:1;
      uint64_t MASK1:1;
      uint64_t MASK2:1;
      uint64_t MASK3:1;
      uint64_t MASK4:1;
      uint64_t MASK5:1;
      uint64_t MASK6:1;
      uint64_t MASK7:1;
      uint64_t MASK8:1;
      uint64_t MASK9:1;
      uint64_t MASK10:1;
      uint64_t MASK11:1;
      uint64_t MASK12:1;
      uint64_t MASK13:1;
      uint64_t MASK14:1;
      uint64_t MASK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO0:1;
      uint64_t MPPDO1:1;
      uint64_t MPPDO2:1;
      uint64_t MPPDO3:1;
      uint64_t MPPDO4:1;
      uint64_t MPPDO5:1;
      uint64_t MPPDO6:1;
      uint64_t MPPDO7:1;
      uint64_t MPPDO8:1;
      uint64_t MPPDO9:1;
      uint64_t MPPDO10:1;
      uint64_t MPPDO11:1;
      uint64_t MPPDO12:1;
      uint64_t MPPDO13:1;
      uint64_t MPPDO14:1;
      uint64_t MPPDO15:1;
      uint64_t MASK0:1;
      uint64_t MASK1:1;
      uint64_t MASK2:1;
      uint64_t MASK3:1;
      uint64_t MASK4:1;
      uint64_t MASK5:1;
      uint64_t MASK6:1;
      uint64_t MASK7:1;
      uint64_t MASK8:1;
      uint64_t MASK9:1;
      uint64_t MASK10:1;
      uint64_t MASK11:1;
      uint64_t MASK12:1;
      uint64_t MASK13:1;
      uint64_t MASK14:1;
      uint64_t MASK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t MPPDO10:1;
      uint64_t MPPDO11:1;
      uint64_t MPPDO12:1;
      uint64_t MPPDO13:1;
      uint64_t MPPDO14:1;
      uint64_t MPPDO15:1;
      uint64_t reservedSpace1:10;
      uint64_t MASK10:1;
      uint64_t MASK11:1;
      uint64_t MASK12:1;
      uint64_t MASK13:1;
      uint64_t MASK14:1;
      uint64_t MASK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO6;

};

#define SIUL2_0 (*(volatile struct SIUL2_0_tag *) 0x4009c004)

struct OCOTP_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CRC_TEST:1;
      uint64_t RD_WR:4;
      uint64_t reservedSpace1:10;
      uint64_t AUTH_KEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL_SYS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR_SYS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRDATA_SYS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDATA_SYS;

  uint8_t res0[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC_RST:1;
      uint64_t reservedSpace0:7;
      uint64_t SEC_MODE:1;
      uint64_t reservedSpace1:7;
      uint64_t FBX_PD:1;
      uint64_t IPG_STOP:1;
      uint64_t IPG_STOP_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL_FBX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START_ADDR:16;
      uint64_t END_ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_RGN_SYS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_ADDR_SYS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_VALUE_SYS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPR_1;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t CRC_FAIL:1;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS_SYS;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STEP:16;
      uint64_t MINOR:8;
      uint64_t MAJOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERSION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STR_1;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC1:1;
      uint64_t SEC2:1;
      uint64_t SEC3:1;
      uint64_t SEC4:1;
      uint64_t SEC5:1;
      uint64_t SEC6:1;
      uint64_t SEC7:1;
      uint64_t SEC8:1;
      uint64_t SEC9:1;
      uint64_t SEC10:1;
      uint64_t SEC11:1;
      uint64_t SEC12:1;
      uint64_t SEC13:1;
      uint64_t SEC14:1;
      uint64_t SEC15:1;
      uint64_t SEC16:1;
      uint64_t SEC17:1;
      uint64_t SEC18:1;
      uint64_t SEC19:1;
      uint64_t SEC20:1;
      uint64_t SEC21:1;
      uint64_t SEC22:1;
      uint64_t SEC23:1;
      uint64_t SEC24:1;
      uint64_t SEC25:1;
      uint64_t SEC26:1;
      uint64_t SEC27:1;
      uint64_t SEC28:1;
      uint64_t SEC29:1;
      uint64_t SEC30:1;
      uint64_t SEC31:1;
      uint64_t SEC32:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC33:1;
      uint64_t SEC34:1;
      uint64_t SEC35:1;
      uint64_t SEC36:1;
      uint64_t SEC37:1;
      uint64_t SEC38:1;
      uint64_t SEC39:1;
      uint64_t SEC40:1;
      uint64_t SEC41:1;
      uint64_t SEC42:1;
      uint64_t SEC43:1;
      uint64_t SEC44:1;
      uint64_t SEC45:1;
      uint64_t SEC46:1;
      uint64_t SEC47:1;
      uint64_t SEC48:1;
      uint64_t SEC49:1;
      uint64_t SEC50:1;
      uint64_t SEC51:1;
      uint64_t SEC52:1;
      uint64_t SEC53:1;
      uint64_t SEC54:1;
      uint64_t SEC55:1;
      uint64_t SEC56:1;
      uint64_t SEC57:1;
      uint64_t SEC58:1;
      uint64_t SEC59:1;
      uint64_t SEC60:1;
      uint64_t SEC61:1;
      uint64_t SEC62:1;
      uint64_t SEC63:1;
      uint64_t SEC64:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC65:1;
      uint64_t SEC66:1;
      uint64_t SEC67:1;
      uint64_t SEC68:1;
      uint64_t SEC69:1;
      uint64_t SEC70:1;
      uint64_t SEC71:1;
      uint64_t SEC72:1;
      uint64_t SEC73:1;
      uint64_t SEC74:1;
      uint64_t SEC75:1;
      uint64_t SEC76:1;
      uint64_t SEC77:1;
      uint64_t SEC78:1;
      uint64_t SEC79:1;
      uint64_t SEC80:1;
      uint64_t SEC81:1;
      uint64_t SEC82:1;
      uint64_t SEC83:1;
      uint64_t SEC84:1;
      uint64_t SEC85:1;
      uint64_t SEC86:1;
      uint64_t SEC87:1;
      uint64_t SEC88:1;
      uint64_t SEC89:1;
      uint64_t SEC90:1;
      uint64_t SEC91:1;
      uint64_t SEC92:1;
      uint64_t SEC93:1;
      uint64_t SEC94:1;
      uint64_t SEC95:1;
      uint64_t SEC96:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEC2;

  uint32_t SEC3;
  uint8_t res4[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DED1:1;
      uint64_t DED2:1;
      uint64_t DED3:1;
      uint64_t DED4:1;
      uint64_t DED5:1;
      uint64_t DED6:1;
      uint64_t DED7:1;
      uint64_t DED8:1;
      uint64_t DED9:1;
      uint64_t DED10:1;
      uint64_t DED11:1;
      uint64_t DED12:1;
      uint64_t DED13:1;
      uint64_t DED14:1;
      uint64_t DED15:1;
      uint64_t DED16:1;
      uint64_t DED17:1;
      uint64_t DED18:1;
      uint64_t DED19:1;
      uint64_t DED20:1;
      uint64_t DED21:1;
      uint64_t DED22:1;
      uint64_t DED23:1;
      uint64_t DED24:1;
      uint64_t DED25:1;
      uint64_t DED26:1;
      uint64_t DED27:1;
      uint64_t DED28:1;
      uint64_t DED29:1;
      uint64_t DED30:1;
      uint64_t DED31:1;
      uint64_t DED32:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DED0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DED33:1;
      uint64_t DED34:1;
      uint64_t DED35:1;
      uint64_t DED36:1;
      uint64_t DED37:1;
      uint64_t DED38:1;
      uint64_t DED39:1;
      uint64_t DED40:1;
      uint64_t DED41:1;
      uint64_t DED42:1;
      uint64_t DED43:1;
      uint64_t DED44:1;
      uint64_t DED45:1;
      uint64_t DED46:1;
      uint64_t DED47:1;
      uint64_t DED48:1;
      uint64_t DED49:1;
      uint64_t DED50:1;
      uint64_t DED51:1;
      uint64_t DED52:1;
      uint64_t DED53:1;
      uint64_t DED54:1;
      uint64_t DED55:1;
      uint64_t DED56:1;
      uint64_t DED57:1;
      uint64_t DED58:1;
      uint64_t DED59:1;
      uint64_t DED60:1;
      uint64_t DED61:1;
      uint64_t DED62:1;
      uint64_t DED63:1;
      uint64_t DED64:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DED1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DED65:1;
      uint64_t DED66:1;
      uint64_t DED67:1;
      uint64_t DED68:1;
      uint64_t DED69:1;
      uint64_t DED70:1;
      uint64_t DED71:1;
      uint64_t DED72:1;
      uint64_t DED73:1;
      uint64_t DED74:1;
      uint64_t DED75:1;
      uint64_t DED76:1;
      uint64_t DED77:1;
      uint64_t DED78:1;
      uint64_t DED79:1;
      uint64_t DED80:1;
      uint64_t DED81:1;
      uint64_t DED82:1;
      uint64_t DED83:1;
      uint64_t DED84:1;
      uint64_t DED85:1;
      uint64_t DED86:1;
      uint64_t DED87:1;
      uint64_t DED88:1;
      uint64_t DED89:1;
      uint64_t DED90:1;
      uint64_t DED91:1;
      uint64_t DED92:1;
      uint64_t DED93:1;
      uint64_t DED94:1;
      uint64_t DED95:1;
      uint64_t DED96:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DED2;

  uint32_t DED3;
  uint8_t res5[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERR_INJCTR;

  uint8_t res6[268];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t eFuses:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHADOWS_127;

};

#define OCOTP (*(volatile struct OCOTP_tag *) 0x400a4000)

struct FBXC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t REP_ERR:1;
      uint64_t DRW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR:1;
      uint64_t RSB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPW:16;
      uint64_t RPW:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRPW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPW:8;
      uint64_t LPW:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHPW;

};

#define FBXC (*(volatile struct FBXC_tag *) 0x400a4100)

struct TMU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t ALPF:2;
      uint64_t reservedSpace1:3;
      uint64_t CMD:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t ORH:1;
      uint64_t ORL:1;
      uint64_t MIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SITE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMI:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMTMIR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t FTRCTIE:1;
      uint64_t RTRCTIE:1;
      uint64_t ALTCTIE:1;
      uint64_t ALTTIE:1;
      uint64_t ILTTIE:1;
      uint64_t AHTCTIE:1;
      uint64_t AHTTIE:1;
      uint64_t IHTTIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t FTRCT:1;
      uint64_t RTRCT:1;
      uint64_t ALTCT:1;
      uint64_t ALTT:1;
      uint64_t ILTT:1;
      uint64_t AHTCT:1;
      uint64_t AHTT:1;
      uint64_t IHTT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIDR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SITE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIISCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SITE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIASCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SITE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TICSCR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t TP5:1;
      uint64_t reservedSpace0:21;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMHTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t TP5:1;
      uint64_t reservedSpace0:21;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMLTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:8;
      uint64_t reservedSpace0:23;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMRTRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:8;
      uint64_t reservedSpace0:23;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMFTRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMHTITR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMHTATR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMHTACTR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMLTITR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMLTATR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMLTACTR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:8;
      uint64_t reservedSpace0:23;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMRTRCTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:8;
      uint64_t reservedSpace0:23;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMFTRCTR;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAL_PT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TTCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SENSOR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSCFGR;

  uint8_t res6[3720];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TTRCR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TTRCR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TTRCR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TTRCR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TTRCR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TTRCR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TTRCR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TTRCR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TTRCR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TTRCR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TTRCR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TTRCR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TTRCR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TTRCR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TTRCR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TTRCR_15;

};

#define TMU (*(volatile struct TMU_tag *) 0x400a8000)

struct TMU_TRITRATSR_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t TP5:1;
      uint64_t reservedSpace0:21;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRITSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRATSR;

};

#define TMU_TRITRATSR_0 (*(volatile struct TMU_TRITRATSR_0_tag *) 0x400a8100)

struct TMU_TRITRATSR_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t TP5:1;
      uint64_t reservedSpace0:21;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRITSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRATSR;

};

#define TMU_TRITRATSR_1 (*(volatile struct TMU_TRITRATSR_1_tag *) 0x400a8110)

struct TMU_TRITRATSR_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t TP5:1;
      uint64_t reservedSpace0:21;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRITSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:9;
      uint64_t reservedSpace0:22;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRATSR;

};

#define TMU_TRITRATSR_2 (*(volatile struct TMU_TRITRATSR_2_tag *) 0x400a8120)

struct SWT_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WEN:1;
      uint64_t FRZ:1;
      uint64_t STP:1;
      uint64_t reservedSpace0:1;
      uint64_t SLK:1;
      uint64_t HLK:1;
      uint64_t ITR:1;
      uint64_t WND:1;
      uint64_t RIA:1;
      uint64_t SMD:2;
      uint64_t reservedSpace1:13;
      uint64_t MAP7:1;
      uint64_t MAP6:1;
      uint64_t MAP5:1;
      uint64_t MAP4:1;
      uint64_t MAP3:1;
      uint64_t MAP2:1;
      uint64_t MAP1:1;
      uint64_t MAP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WST:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RRR;

};

#define SWT_0 (*(volatile struct SWT_0_tag *) 0x40100000)

struct SWT_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WEN:1;
      uint64_t FRZ:1;
      uint64_t STP:1;
      uint64_t reservedSpace0:1;
      uint64_t SLK:1;
      uint64_t HLK:1;
      uint64_t ITR:1;
      uint64_t WND:1;
      uint64_t RIA:1;
      uint64_t SMD:2;
      uint64_t reservedSpace1:13;
      uint64_t MAP7:1;
      uint64_t MAP6:1;
      uint64_t MAP5:1;
      uint64_t MAP4:1;
      uint64_t MAP3:1;
      uint64_t MAP2:1;
      uint64_t MAP1:1;
      uint64_t MAP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WST:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RRR;

};

#define SWT_1 (*(volatile struct SWT_1_tag *) 0x40104000)

struct SWT_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WEN:1;
      uint64_t FRZ:1;
      uint64_t STP:1;
      uint64_t reservedSpace0:1;
      uint64_t SLK:1;
      uint64_t HLK:1;
      uint64_t ITR:1;
      uint64_t WND:1;
      uint64_t RIA:1;
      uint64_t SMD:2;
      uint64_t reservedSpace1:13;
      uint64_t MAP7:1;
      uint64_t MAP6:1;
      uint64_t MAP5:1;
      uint64_t MAP4:1;
      uint64_t MAP3:1;
      uint64_t MAP2:1;
      uint64_t MAP1:1;
      uint64_t MAP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WST:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RRR;

};

#define SWT_2 (*(volatile struct SWT_2_tag *) 0x40108000)

struct SWT_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WEN:1;
      uint64_t FRZ:1;
      uint64_t STP:1;
      uint64_t reservedSpace0:1;
      uint64_t SLK:1;
      uint64_t HLK:1;
      uint64_t ITR:1;
      uint64_t WND:1;
      uint64_t RIA:1;
      uint64_t SMD:2;
      uint64_t reservedSpace1:13;
      uint64_t MAP7:1;
      uint64_t MAP6:1;
      uint64_t MAP5:1;
      uint64_t MAP4:1;
      uint64_t MAP3:1;
      uint64_t MAP2:1;
      uint64_t MAP1:1;
      uint64_t MAP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WST:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RRR;

};

#define SWT_3 (*(volatile struct SWT_3_tag *) 0x4010c000)

struct SWT_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WEN:1;
      uint64_t FRZ:1;
      uint64_t STP:1;
      uint64_t reservedSpace0:1;
      uint64_t SLK:1;
      uint64_t HLK:1;
      uint64_t ITR:1;
      uint64_t WND:1;
      uint64_t RIA:1;
      uint64_t SMD:2;
      uint64_t reservedSpace1:13;
      uint64_t MAP7:1;
      uint64_t MAP6:1;
      uint64_t MAP5:1;
      uint64_t MAP4:1;
      uint64_t MAP3:1;
      uint64_t MAP2:1;
      uint64_t MAP1:1;
      uint64_t MAP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WST:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RRR;

};

#define SWT_4 (*(volatile struct SWT_4_tag *) 0x40200000)

struct SWT_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WEN:1;
      uint64_t FRZ:1;
      uint64_t STP:1;
      uint64_t reservedSpace0:1;
      uint64_t SLK:1;
      uint64_t HLK:1;
      uint64_t ITR:1;
      uint64_t WND:1;
      uint64_t RIA:1;
      uint64_t SMD:2;
      uint64_t reservedSpace1:13;
      uint64_t MAP7:1;
      uint64_t MAP6:1;
      uint64_t MAP5:1;
      uint64_t MAP4:1;
      uint64_t MAP3:1;
      uint64_t MAP2:1;
      uint64_t MAP1:1;
      uint64_t MAP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WST:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RRR;

};

#define SWT_5 (*(volatile struct SWT_5_tag *) 0x40204000)

struct SWT_6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WEN:1;
      uint64_t FRZ:1;
      uint64_t STP:1;
      uint64_t reservedSpace0:1;
      uint64_t SLK:1;
      uint64_t HLK:1;
      uint64_t ITR:1;
      uint64_t WND:1;
      uint64_t RIA:1;
      uint64_t SMD:2;
      uint64_t reservedSpace1:13;
      uint64_t MAP7:1;
      uint64_t MAP6:1;
      uint64_t MAP5:1;
      uint64_t MAP4:1;
      uint64_t MAP3:1;
      uint64_t MAP2:1;
      uint64_t MAP1:1;
      uint64_t MAP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WST:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RRR;

};

#define SWT_6 (*(volatile struct SWT_6_tag *) 0x40208000)

struct STM_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t FRZ:1;
      uint64_t reservedSpace0:6;
      uint64_t CPS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP2;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP3;

};

#define STM_0 (*(volatile struct STM_0_tag *) 0x4011c000)

struct STM_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t FRZ:1;
      uint64_t reservedSpace0:6;
      uint64_t CPS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP2;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP3;

};

#define STM_1 (*(volatile struct STM_1_tag *) 0x40120000)

struct STM_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t FRZ:1;
      uint64_t reservedSpace0:6;
      uint64_t CPS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP2;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP3;

};

#define STM_2 (*(volatile struct STM_2_tag *) 0x40124000)

struct STM_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t FRZ:1;
      uint64_t reservedSpace0:6;
      uint64_t CPS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP2;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP3;

};

#define STM_3 (*(volatile struct STM_3_tag *) 0x40128000)

struct STM_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t FRZ:1;
      uint64_t reservedSpace0:6;
      uint64_t CPS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP2;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP3;

};

#define STM_4 (*(volatile struct STM_4_tag *) 0x4021c000)

struct STM_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t FRZ:1;
      uint64_t reservedSpace0:6;
      uint64_t CPS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP2;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP3;

};

#define STM_5 (*(volatile struct STM_5_tag *) 0x40220000)

struct STM_6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t FRZ:1;
      uint64_t reservedSpace0:6;
      uint64_t CPS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP2;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP3;

};

#define STM_6 (*(volatile struct STM_6_tag *) 0x40224000)

struct STM_7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t FRZ:1;
      uint64_t reservedSpace0:6;
      uint64_t CPS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP2;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP3;

};

#define STM_7 (*(volatile struct STM_7_tag *) 0x40228000)

struct DMAMUX_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG12;

};

#define DMAMUX_0 (*(volatile struct DMAMUX_0_tag *) 0x4012c000)

struct DMAMUX_1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG12;

};

#define DMAMUX_1 (*(volatile struct DMAMUX_1_tag *) 0x40130000)

struct DMAMUX_2_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG12;

};

#define DMAMUX_2 (*(volatile struct DMAMUX_2_tag *) 0x4022c000)

struct DMAMUX_3_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG12;

};

#define DMAMUX_3 (*(volatile struct DMAMUX_3_tag *) 0x40230000)

struct QUADSPI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRSTSD:1;
      uint64_t SWRSTHD:1;
      uint64_t END_CFG:2;
      uint64_t DQS_OUT_EN:1;
      uint64_t DQS_LAT_EN:1;
      uint64_t DQS_EN:1;
      uint64_t DDR_EN:1;
      uint64_t VAR_LAT_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t CLR_RXF:1;
      uint64_t CLR_TXF:1;
      uint64_t DLPEN:1;
      uint64_t reservedSpace1:1;
      uint64_t MDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t ISD2FA:1;
      uint64_t ISD3FA:1;
      uint64_t ISD2FB:1;
      uint64_t ISD3FB:1;
      uint64_t reservedSpace3:3;
      uint64_t DIAG:1;
      uint64_t DQS_FA_SEL:2;
      uint64_t CKN_FA_EN:1;
      uint64_t CK2_DCARS_FA:1;
      uint64_t DQS_FB_SEL:2;
      uint64_t CKN_FB_EN:1;
      uint64_t CK2_DCARS_FB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATSZ:16;
      uint64_t PAR_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t SEQID:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPCR;

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
  } __attribute__((aligned(4))) FLSHCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTRID:6;
      uint64_t reservedSpace0:2;
      uint64_t ADATSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF0CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTRID:6;
      uint64_t reservedSpace0:2;
      uint64_t ADATSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF1CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTRID:6;
      uint64_t reservedSpace0:2;
      uint64_t ADATSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF2CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTRID:6;
      uint64_t reservedSpace0:2;
      uint64_t ADATSZ:8;
      uint64_t reservedSpace1:15;
      uint64_t ALLMST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF3CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t SEQID:4;
      uint64_t PAR_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BFGENCR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TPINDX0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF0IND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TPINDX1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF1IND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TPINDX2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF2IND;

  uint8_t res2[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWTRGLVL:4;
      uint64_t reservedSpace0:10;
      uint64_t PPW_RD_DIS:1;
      uint64_t PPW_WR_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWRCR;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLV_UPD:1;
      uint64_t SLV_DLL_BYPASS:1;
      uint64_t SLV_EN:1;
      uint64_t SLAVE_AUTO_UPDT:1;
      uint64_t reservedSpace0:1;
      uint64_t SLV_DLY_FINE:3;
      uint64_t SLV_DLY_COARSE:4;
      uint64_t SLV_DLY_OFFSET:3;
      uint64_t reservedSpace1:1;
      uint64_t SLV_FINE_OFFSET:4;
      uint64_t DLLRES:4;
      uint64_t DLL_REFCNTR:4;
      uint64_t reservedSpace2:2;
      uint64_t FREQEN:1;
      uint64_t DLLEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLLCRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLV_UPD:1;
      uint64_t SLV_DLL_BYPASS:1;
      uint64_t SLV_EN:1;
      uint64_t SLAVE_AUTO_UPDT:1;
      uint64_t reservedSpace0:1;
      uint64_t SLV_DLY_FINE:3;
      uint64_t SLV_DLY_COARSE:4;
      uint64_t SLV_DLY_OFFSET:3;
      uint64_t reservedSpace1:1;
      uint64_t SLV_FINE_OFFSET:4;
      uint64_t DLLRES:4;
      uint64_t DLL_REFCNTR:4;
      uint64_t reservedSpace2:2;
      uint64_t FREQEN:1;
      uint64_t DLLEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLLCRB;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t CRCBIN_FA:1;
      uint64_t CRCBEN_FA:1;
      uint64_t CRCEN_FA:1;
      uint64_t BYTE_SIZE_FA:1;
      uint64_t CHUNKSIZE_FA:6;
      uint64_t CRC_WNDW_FA:1;
      uint64_t reservedSpace1:5;
      uint64_t CRCBIN_FB:1;
      uint64_t CRCBEN_FB:1;
      uint64_t CRCEN_FB:1;
      uint64_t BYTE_SIZE_FB:1;
      uint64_t CHUNKSIZE_FB:6;
      uint64_t CRC_WNDW_FB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARITYCR;

  uint8_t res5[144];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SFADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAS:4;
      uint64_t reservedSpace0:4;
      uint64_t PPWB:5;
      uint64_t reservedSpace1:3;
      uint64_t WA:1;
      uint64_t BYTE_SWAP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t FSPHS:1;
      uint64_t FSDLY:1;
      uint64_t reservedSpace1:9;
      uint64_t RESERVED:3;
      uint64_t reservedSpace2:5;
      uint64_t DLLFSMPFA:3;
      uint64_t reservedSpace3:1;
      uint64_t DLLFSMPFB:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDBFL:8;
      uint64_t reservedSpace0:8;
      uint64_t RDCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WMRK:7;
      uint64_t reservedSpace0:1;
      uint64_t RXBRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBCT;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SEQAUJOIN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWRSR;

  uint8_t res7[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLLA_SLV_COARSE_VAL:4;
      uint64_t DLLA_SLV_FINE_VAL:4;
      uint64_t reservedSpace0:4;
      uint64_t DLLA_FINE_UNDERFLOW:1;
      uint64_t DLLA_RANGE_ERR:1;
      uint64_t SLVA_LOCK:1;
      uint64_t DLLA_LOCK:1;
      uint64_t DLLB_SLV_COARSE_VAL:4;
      uint64_t DLLB_SLV_FINE_VAL:4;
      uint64_t reservedSpace1:4;
      uint64_t DLLB_FINE_UNDERFLOW:1;
      uint64_t DLLB_RANGE_ERR:1;
      uint64_t SLVB_LOCK:1;
      uint64_t DLLB_LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLP_MASK_FA:8;
      uint64_t reservedSpace0:6;
      uint64_t DLP_SEL_FA:2;
      uint64_t DLP_MASK_FB:8;
      uint64_t DL_NONDLP_FLSH:1;
      uint64_t reservedSpace1:5;
      uint64_t DLP_SEL_FB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NEG_EDGE:8;
      uint64_t POS_EDGE:8;
      uint64_t reservedSpace0:15;
      uint64_t DLPFFA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLSR_FA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NEG_EDGE:8;
      uint64_t POS_EDGE:8;
      uint64_t reservedSpace0:15;
      uint64_t DLPFFB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLSR_FB;

  uint8_t res8[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRBFL:8;
      uint64_t reservedSpace0:8;
      uint64_t TRCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WMRK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBCT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t IP_ACC:1;
      uint64_t AHB_ACC:1;
      uint64_t reservedSpace0:1;
      uint64_t AWRACC:1;
      uint64_t reservedSpace1:1;
      uint64_t AHBTRN:1;
      uint64_t AHB0NE:1;
      uint64_t AHB1NE:1;
      uint64_t AHB2NE:1;
      uint64_t AHB3NE:1;
      uint64_t AHB0FUL:1;
      uint64_t AHB1FUL:1;
      uint64_t AHB2FUL:1;
      uint64_t AHB3FUL:1;
      uint64_t reservedSpace2:1;
      uint64_t RXWE:1;
      uint64_t reservedSpace3:2;
      uint64_t RXFULL:1;
      uint64_t reservedSpace4:3;
      uint64_t RXDMA:1;
      uint64_t TXNE:1;
      uint64_t TXWA:1;
      uint64_t TXDMA:1;
      uint64_t TXFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFF:1;
      uint64_t reservedSpace0:5;
      uint64_t IPIEF:1;
      uint64_t IPAEF:1;
      uint64_t PPWF:1;
      uint64_t CRCBEF:1;
      uint64_t CRCAEF:1;
      uint64_t IUEF:1;
      uint64_t ABOF:1;
      uint64_t reservedSpace1:1;
      uint64_t AITEF:1;
      uint64_t AAEF:1;
      uint64_t RBDF:1;
      uint64_t RBOF:1;
      uint64_t reservedSpace2:5;
      uint64_t ILLINE:1;
      uint64_t DLLUNLCK:1;
      uint64_t reservedSpace3:1;
      uint64_t TBUF:1;
      uint64_t TBFF:1;
      uint64_t DLLABRT:1;
      uint64_t reservedSpace4:2;
      uint64_t DLPFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFIE:1;
      uint64_t reservedSpace0:5;
      uint64_t IPIEIE:1;
      uint64_t IPAEIE:1;
      uint64_t PPWIE:1;
      uint64_t CRCBIE:1;
      uint64_t CRCAIE:1;
      uint64_t IUEIE:1;
      uint64_t ABOIE:1;
      uint64_t AIBSIE:1;
      uint64_t AITIE:1;
      uint64_t AAIE:1;
      uint64_t RBDIE:1;
      uint64_t RBOIE:1;
      uint64_t reservedSpace1:3;
      uint64_t RBDDE:1;
      uint64_t reservedSpace2:1;
      uint64_t ILLINIE:1;
      uint64_t DLLULIE:1;
      uint64_t TBFDE:1;
      uint64_t TBUIE:1;
      uint64_t TBFIE:1;
      uint64_t reservedSpace3:3;
      uint64_t DLPFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSER;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFPTRC:1;
      uint64_t reservedSpace0:7;
      uint64_t IPPTRC:1;
      uint64_t reservedSpace1:7;
      uint64_t ABRT_CLR:1;
      uint64_t PREFETCH_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPTRCLR;

  uint8_t res10[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t TPADA1:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFA1AD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t TPADA2:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFA2AD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t TPADB1:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFB1AD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t TPADB2:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFB2AD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLPV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FAILA_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FAILB_ADDR;

  uint8_t res11[100];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUTKEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCK:1;
      uint64_t UNLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCKCR;

  uint8_t res12[8];

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
  } __attribute__((aligned(4))) LUT_0;

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
  } __attribute__((aligned(4))) LUT_1;

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
  } __attribute__((aligned(4))) LUT_2;

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
  } __attribute__((aligned(4))) LUT_3;

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
  } __attribute__((aligned(4))) LUT_4;

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
  } __attribute__((aligned(4))) LUT_5;

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
  } __attribute__((aligned(4))) LUT_6;

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
  } __attribute__((aligned(4))) LUT_7;

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
  } __attribute__((aligned(4))) LUT_8;

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
  } __attribute__((aligned(4))) LUT_9;

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
  } __attribute__((aligned(4))) LUT_10;

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
  } __attribute__((aligned(4))) LUT_11;

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
  } __attribute__((aligned(4))) LUT_12;

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
  } __attribute__((aligned(4))) LUT_13;

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
  } __attribute__((aligned(4))) LUT_14;

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
  } __attribute__((aligned(4))) LUT_15;

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
  } __attribute__((aligned(4))) LUT_16;

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
  } __attribute__((aligned(4))) LUT_17;

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
  } __attribute__((aligned(4))) LUT_18;

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
  } __attribute__((aligned(4))) LUT_19;

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
  } __attribute__((aligned(4))) LUT_20;

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
  } __attribute__((aligned(4))) LUT_21;

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
  } __attribute__((aligned(4))) LUT_22;

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
  } __attribute__((aligned(4))) LUT_23;

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
  } __attribute__((aligned(4))) LUT_24;

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
  } __attribute__((aligned(4))) LUT_25;

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
  } __attribute__((aligned(4))) LUT_26;

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
  } __attribute__((aligned(4))) LUT_27;

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
  } __attribute__((aligned(4))) LUT_28;

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
  } __attribute__((aligned(4))) LUT_29;

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
  } __attribute__((aligned(4))) LUT_30;

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
  } __attribute__((aligned(4))) LUT_31;

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
  } __attribute__((aligned(4))) LUT_32;

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
  } __attribute__((aligned(4))) LUT_33;

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
  } __attribute__((aligned(4))) LUT_34;

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
  } __attribute__((aligned(4))) LUT_35;

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
  } __attribute__((aligned(4))) LUT_36;

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
  } __attribute__((aligned(4))) LUT_37;

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
  } __attribute__((aligned(4))) LUT_38;

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
  } __attribute__((aligned(4))) LUT_39;

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
  } __attribute__((aligned(4))) LUT_40;

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
  } __attribute__((aligned(4))) LUT_41;

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
  } __attribute__((aligned(4))) LUT_42;

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
  } __attribute__((aligned(4))) LUT_43;

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
  } __attribute__((aligned(4))) LUT_44;

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
  } __attribute__((aligned(4))) LUT_45;

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
  } __attribute__((aligned(4))) LUT_46;

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
  } __attribute__((aligned(4))) LUT_47;

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
  } __attribute__((aligned(4))) LUT_48;

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
  } __attribute__((aligned(4))) LUT_49;

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
  } __attribute__((aligned(4))) LUT_50;

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
  } __attribute__((aligned(4))) LUT_51;

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
  } __attribute__((aligned(4))) LUT_52;

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
  } __attribute__((aligned(4))) LUT_53;

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
  } __attribute__((aligned(4))) LUT_54;

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
  } __attribute__((aligned(4))) LUT_55;

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
  } __attribute__((aligned(4))) LUT_56;

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
  } __attribute__((aligned(4))) LUT_57;

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
  } __attribute__((aligned(4))) LUT_58;

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
  } __attribute__((aligned(4))) LUT_59;

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
  } __attribute__((aligned(4))) LUT_60;

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
  } __attribute__((aligned(4))) LUT_61;

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
  } __attribute__((aligned(4))) LUT_62;

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
  } __attribute__((aligned(4))) LUT_63;

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
  } __attribute__((aligned(4))) LUT_64;

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
  } __attribute__((aligned(4))) LUT_65;

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
  } __attribute__((aligned(4))) LUT_66;

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
  } __attribute__((aligned(4))) LUT_67;

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
  } __attribute__((aligned(4))) LUT_68;

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
  } __attribute__((aligned(4))) LUT_69;

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
  } __attribute__((aligned(4))) LUT_70;

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
  } __attribute__((aligned(4))) LUT_71;

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
  } __attribute__((aligned(4))) LUT_72;

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
  } __attribute__((aligned(4))) LUT_73;

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
  } __attribute__((aligned(4))) LUT_74;

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
  } __attribute__((aligned(4))) LUT_75;

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
  } __attribute__((aligned(4))) LUT_76;

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
  } __attribute__((aligned(4))) LUT_77;

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
  } __attribute__((aligned(4))) LUT_78;

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
  } __attribute__((aligned(4))) LUT_79;

};

#define QUADSPI (*(volatile struct QUADSPI_tag *) 0x40134000)

struct DMA_CRC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GBL_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GEC;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_SEL:6;
      uint64_t reservedSpace0:2;
      uint64_t POLY_SEL:4;
      uint64_t reservedSpace1:3;
      uint64_t INIT_SEL:1;
      uint64_t MODE:3;
      uint64_t reservedSpace2:12;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INI_CRC_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICRC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHKSUM_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCRC0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_SEL:6;
      uint64_t reservedSpace0:2;
      uint64_t POLY_SEL:4;
      uint64_t reservedSpace1:3;
      uint64_t INIT_SEL:1;
      uint64_t MODE:3;
      uint64_t reservedSpace2:12;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INI_CRC_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHKSUM_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCRC1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_SEL:6;
      uint64_t reservedSpace0:2;
      uint64_t POLY_SEL:4;
      uint64_t reservedSpace1:3;
      uint64_t INIT_SEL:1;
      uint64_t MODE:3;
      uint64_t reservedSpace2:12;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INI_CRC_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICRC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHKSUM_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCRC2;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_SEL:6;
      uint64_t reservedSpace0:2;
      uint64_t POLY_SEL:4;
      uint64_t reservedSpace1:3;
      uint64_t INIT_SEL:1;
      uint64_t MODE:3;
      uint64_t reservedSpace2:12;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INI_CRC_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICRC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHKSUM_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCRC3;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_SEL:6;
      uint64_t reservedSpace0:2;
      uint64_t POLY_SEL:4;
      uint64_t reservedSpace1:3;
      uint64_t INIT_SEL:1;
      uint64_t MODE:3;
      uint64_t reservedSpace2:12;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INI_CRC_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICRC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHKSUM_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCRC4;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_SEL:6;
      uint64_t reservedSpace0:2;
      uint64_t POLY_SEL:4;
      uint64_t reservedSpace1:3;
      uint64_t INIT_SEL:1;
      uint64_t MODE:3;
      uint64_t reservedSpace2:12;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INI_CRC_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICRC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHKSUM_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCRC5;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_SEL:6;
      uint64_t reservedSpace0:2;
      uint64_t POLY_SEL:4;
      uint64_t reservedSpace1:3;
      uint64_t INIT_SEL:1;
      uint64_t MODE:3;
      uint64_t reservedSpace2:12;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INI_CRC_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICRC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHKSUM_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCRC6;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_SEL:6;
      uint64_t reservedSpace0:2;
      uint64_t POLY_SEL:4;
      uint64_t reservedSpace1:3;
      uint64_t INIT_SEL:1;
      uint64_t MODE:3;
      uint64_t reservedSpace2:12;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INI_CRC_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICRC7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHKSUM_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCRC7;

};

#define DMA_CRC_0 (*(volatile struct DMA_CRC_0_tag *) 0x4013c000)

struct DMA_CRC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GBL_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GEC;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_SEL:6;
      uint64_t reservedSpace0:2;
      uint64_t POLY_SEL:4;
      uint64_t reservedSpace1:3;
      uint64_t INIT_SEL:1;
      uint64_t MODE:3;
      uint64_t reservedSpace2:12;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INI_CRC_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICRC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHKSUM_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCRC0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_SEL:6;
      uint64_t reservedSpace0:2;
      uint64_t POLY_SEL:4;
      uint64_t reservedSpace1:3;
      uint64_t INIT_SEL:1;
      uint64_t MODE:3;
      uint64_t reservedSpace2:12;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INI_CRC_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHKSUM_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCRC1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_SEL:6;
      uint64_t reservedSpace0:2;
      uint64_t POLY_SEL:4;
      uint64_t reservedSpace1:3;
      uint64_t INIT_SEL:1;
      uint64_t MODE:3;
      uint64_t reservedSpace2:12;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INI_CRC_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICRC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHKSUM_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCRC2;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_SEL:6;
      uint64_t reservedSpace0:2;
      uint64_t POLY_SEL:4;
      uint64_t reservedSpace1:3;
      uint64_t INIT_SEL:1;
      uint64_t MODE:3;
      uint64_t reservedSpace2:12;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INI_CRC_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICRC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHKSUM_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCRC3;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_SEL:6;
      uint64_t reservedSpace0:2;
      uint64_t POLY_SEL:4;
      uint64_t reservedSpace1:3;
      uint64_t INIT_SEL:1;
      uint64_t MODE:3;
      uint64_t reservedSpace2:12;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INI_CRC_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICRC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHKSUM_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCRC4;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_SEL:6;
      uint64_t reservedSpace0:2;
      uint64_t POLY_SEL:4;
      uint64_t reservedSpace1:3;
      uint64_t INIT_SEL:1;
      uint64_t MODE:3;
      uint64_t reservedSpace2:12;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INI_CRC_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICRC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHKSUM_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCRC5;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_SEL:6;
      uint64_t reservedSpace0:2;
      uint64_t POLY_SEL:4;
      uint64_t reservedSpace1:3;
      uint64_t INIT_SEL:1;
      uint64_t MODE:3;
      uint64_t reservedSpace2:12;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INI_CRC_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICRC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHKSUM_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCRC6;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_SEL:6;
      uint64_t reservedSpace0:2;
      uint64_t POLY_SEL:4;
      uint64_t reservedSpace1:3;
      uint64_t INIT_SEL:1;
      uint64_t MODE:3;
      uint64_t reservedSpace2:12;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INI_CRC_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICRC7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHKSUM_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCRC7;

};

#define DMA_CRC_1 (*(volatile struct DMA_CRC_1_tag *) 0x4023c000)

struct EDMA_0_MP_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t EDBG:1;
      uint64_t ERCA:1;
      uint64_t reservedSpace1:1;
      uint64_t HAE:1;
      uint64_t HALT:1;
      uint64_t GCLC:1;
      uint64_t GMRC:1;
      uint64_t ECX:1;
      uint64_t CX:1;
      uint64_t reservedSpace2:14;
      uint64_t ACTIVE_ID:5;
      uint64_t reservedSpace3:2;
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBE:1;
      uint64_t SBE:1;
      uint64_t SGE:1;
      uint64_t NCE:1;
      uint64_t DOE:1;
      uint64_t DAE:1;
      uint64_t SOE:1;
      uint64_t SAE:1;
      uint64_t ECX:1;
      uint64_t UCE:1;
      uint64_t reservedSpace0:14;
      uint64_t ERRCHN:5;
      uint64_t reservedSpace1:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HRS;

  uint8_t res0[240];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_31;

};

#define EDMA_0_MP (*(volatile struct EDMA_0_MP_tag *) 0x40144000)

struct PIT_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  uint8_t res0[220];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTMR64H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTMR64L;

};

#define PIT_0 (*(volatile struct PIT_0_tag *) 0x40188000)

struct PIT_0_TIMER_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_0_TIMER_0 (*(volatile struct PIT_0_TIMER_0_tag *) 0x40188100)

struct PIT_0_TIMER_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_0_TIMER_1 (*(volatile struct PIT_0_TIMER_1_tag *) 0x40188110)

struct PIT_0_TIMER_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_0_TIMER_2 (*(volatile struct PIT_0_TIMER_2_tag *) 0x40188120)

struct PIT_0_TIMER_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_0_TIMER_3 (*(volatile struct PIT_0_TIMER_3_tag *) 0x40188130)

struct PIT_0_TIMER_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_0_TIMER_4 (*(volatile struct PIT_0_TIMER_4_tag *) 0x40188140)

struct PIT_0_TIMER_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_0_TIMER_5 (*(volatile struct PIT_0_TIMER_5_tag *) 0x40188150)

struct PIT_0_TIMER_6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_0_TIMER_6 (*(volatile struct PIT_0_TIMER_6_tag *) 0x40188160)

struct PIT_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  uint8_t res0[220];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTMR64H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTMR64L;

};

#define PIT_1 (*(volatile struct PIT_1_tag *) 0x40288000)

struct PIT_1_TIMER_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_1_TIMER_0 (*(volatile struct PIT_1_TIMER_0_tag *) 0x40288100)

struct PIT_1_TIMER_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_1_TIMER_1 (*(volatile struct PIT_1_TIMER_1_tag *) 0x40288110)

struct PIT_1_TIMER_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_1_TIMER_2 (*(volatile struct PIT_1_TIMER_2_tag *) 0x40288120)

struct PIT_1_TIMER_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_1_TIMER_3 (*(volatile struct PIT_1_TIMER_3_tag *) 0x40288130)

struct PIT_1_TIMER_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_1_TIMER_4 (*(volatile struct PIT_1_TIMER_4_tag *) 0x40288140)

struct PIT_1_TIMER_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_1_TIMER_5 (*(volatile struct PIT_1_TIMER_5_tag *) 0x40288150)

struct PIT_1_TIMER_6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_1_TIMER_6 (*(volatile struct PIT_1_TIMER_6_tag *) 0x40288160)

struct CRC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t SWAP:1;
      uint64_t POLYG:2;
      uint64_t SWAP_BITWISE:1;
      uint64_t SWAP_BYTEWISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSTAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t SWAP:1;
      uint64_t POLYG:2;
      uint64_t SWAP_BITWISE:1;
      uint64_t SWAP_BYTEWISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSTAT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t SWAP:1;
      uint64_t POLYG:2;
      uint64_t SWAP_BITWISE:1;
      uint64_t SWAP_BYTEWISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSTAT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTP3;

};

#define CRC_0 (*(volatile struct CRC_0_tag *) 0x40190000)

struct MSCM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSONALITY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPXTYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPXNUM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RYPZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPXREV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCWY:8;
      uint64_t DCSZ:8;
      uint64_t ICWY:8;
      uint64_t ICSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPXCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t L2WY:8;
      uint64_t L2SZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPXCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t ITCMSZ:8;
      uint64_t reservedSpace1:8;
      uint64_t DTCMSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPXCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW_FPU:1;
      uint64_t SIMD:1;
      uint64_t MMU:1;
      uint64_t CMP:1;
      uint64_t CPY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPXCFG3;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSONALITY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP0TYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP0NUM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RYPZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP0REV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCWY:8;
      uint64_t DCSZ:8;
      uint64_t ICWY:8;
      uint64_t ICSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP0CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t L2WY:8;
      uint64_t L2SZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP0CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t TMUSZ:8;
      uint64_t reservedSpace1:8;
      uint64_t TMLSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP0CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW_FPU:1;
      uint64_t SIMD:1;
      uint64_t MMU:1;
      uint64_t CMP:1;
      uint64_t CPY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP0CFG3;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSONALITY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP1TYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP1NUM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RYPZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP1REV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCWY:8;
      uint64_t DCSZ:8;
      uint64_t ICWY:8;
      uint64_t ICSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP1CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t L2WY:8;
      uint64_t L2SZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP1CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t TMUSZ:8;
      uint64_t reservedSpace1:8;
      uint64_t TMLSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP1CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW_FPU:1;
      uint64_t SIMD:1;
      uint64_t MMU:1;
      uint64_t CMP:1;
      uint64_t CPY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP1CFG3;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSONALITY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP2TYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP2NUM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RYPZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP2REV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCWY:8;
      uint64_t DCSZ:8;
      uint64_t ICWY:8;
      uint64_t ICSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP2CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t L2WY:8;
      uint64_t L2SZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP2CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t TMUSZ:8;
      uint64_t reservedSpace1:8;
      uint64_t TMLSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP2CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW_FPU:1;
      uint64_t SIMD:1;
      uint64_t MMU:1;
      uint64_t CMP:1;
      uint64_t CPY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP2CFG3;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSONALITY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP3TYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP3NUM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RYPZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP3REV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCWY:8;
      uint64_t DCSZ:8;
      uint64_t ICWY:8;
      uint64_t ICSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP3CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t L2WY:8;
      uint64_t L2SZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP3CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t TMUSZ:8;
      uint64_t reservedSpace1:8;
      uint64_t TMLSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP3CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW_FPU:1;
      uint64_t SIMD:1;
      uint64_t MMU:1;
      uint64_t CMP:1;
      uint64_t CPY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP3CFG3;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSONALITY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP4TYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP4NUM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RYPZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP4REV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCWY:8;
      uint64_t DCSZ:8;
      uint64_t ICWY:8;
      uint64_t ICSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP4CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t L2WY:8;
      uint64_t L2SZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP4CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t TMUSZ:8;
      uint64_t reservedSpace1:8;
      uint64_t TMLSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP4CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW_FPU:1;
      uint64_t SIMD:1;
      uint64_t MMU:1;
      uint64_t CMP:1;
      uint64_t CPY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP4CFG3;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSONALITY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP5TYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP5NUM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RYPZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP5REV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCWY:8;
      uint64_t DCSZ:8;
      uint64_t ICWY:8;
      uint64_t ICSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP5CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t L2WY:8;
      uint64_t L2SZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP5CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t TMUSZ:8;
      uint64_t reservedSpace1:8;
      uint64_t TMLSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP5CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW_FPU:1;
      uint64_t SIMD:1;
      uint64_t MMU:1;
      uint64_t CMP:1;
      uint64_t CPY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP5CFG3;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSONALITY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP6TYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP6NUM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RYPZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP6REV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCWY:8;
      uint64_t DCSZ:8;
      uint64_t ICWY:8;
      uint64_t ICSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP6CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t L2WY:8;
      uint64_t L2SZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP6CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t TMUSZ:8;
      uint64_t reservedSpace1:8;
      uint64_t TMLSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP6CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HW_FPU:1;
      uint64_t SIMD:1;
      uint64_t MMU:1;
      uint64_t CMP:1;
      uint64_t CPY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP6CFG3;

  uint8_t res7[260];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
      uint64_t CP1_INT:1;
      uint64_t CP2_INT:1;
      uint64_t CP3_INT:1;
      uint64_t CP4_INT:1;
      uint64_t CP5_INT:1;
      uint64_t CP6_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP0ISR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP0IGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
      uint64_t CP1_INT:1;
      uint64_t CP2_INT:1;
      uint64_t CP3_INT:1;
      uint64_t CP4_INT:1;
      uint64_t CP5_INT:1;
      uint64_t CP6_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP0ISR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP0IGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
      uint64_t CP1_INT:1;
      uint64_t CP2_INT:1;
      uint64_t CP3_INT:1;
      uint64_t CP4_INT:1;
      uint64_t CP5_INT:1;
      uint64_t CP6_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP0ISR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP0IGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCIE_INT0:1;
      uint64_t PCIE_INT1:1;
      uint64_t PCIE_INT2:1;
      uint64_t PCIE_INT3:1;
      uint64_t PCIE_INT4:1;
      uint64_t PCIE_INT5:1;
      uint64_t PCIE_INT6:1;
      uint64_t PCIE_INT7:1;
      uint64_t PCIE_INT8:1;
      uint64_t PCIE_INT9:1;
      uint64_t PCIE_INT10:1;
      uint64_t PCIE_INT11:1;
      uint64_t PCIE_INT12:1;
      uint64_t PCIE_INT13:1;
      uint64_t PCIE_INT14:1;
      uint64_t PCIE_INT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP0ISR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT0_EN:1;
      uint64_t INT1_EN:1;
      uint64_t INT2_EN:1;
      uint64_t INT3_EN:1;
      uint64_t INT4_EN:1;
      uint64_t INT5_EN:1;
      uint64_t INT6_EN:1;
      uint64_t INT7_EN:1;
      uint64_t INT8_EN:1;
      uint64_t INT9_EN:1;
      uint64_t INT10_EN:1;
      uint64_t INT11_EN:1;
      uint64_t INT12_EN:1;
      uint64_t INT13_EN:1;
      uint64_t INT14_EN:1;
      uint64_t INT15_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP0IGR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
      uint64_t CP1_INT:1;
      uint64_t CP2_INT:1;
      uint64_t CP3_INT:1;
      uint64_t CP4_INT:1;
      uint64_t CP5_INT:1;
      uint64_t CP6_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP1ISR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP1IGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
      uint64_t CP1_INT:1;
      uint64_t CP2_INT:1;
      uint64_t CP3_INT:1;
      uint64_t CP4_INT:1;
      uint64_t CP5_INT:1;
      uint64_t CP6_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP1ISR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP1IGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
      uint64_t CP1_INT:1;
      uint64_t CP2_INT:1;
      uint64_t CP3_INT:1;
      uint64_t CP4_INT:1;
      uint64_t CP5_INT:1;
      uint64_t CP6_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP1ISR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP1IGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCIE_INT0:1;
      uint64_t PCIE_INT1:1;
      uint64_t PCIE_INT2:1;
      uint64_t PCIE_INT3:1;
      uint64_t PCIE_INT4:1;
      uint64_t PCIE_INT5:1;
      uint64_t PCIE_INT6:1;
      uint64_t PCIE_INT7:1;
      uint64_t PCIE_INT8:1;
      uint64_t PCIE_INT9:1;
      uint64_t PCIE_INT10:1;
      uint64_t PCIE_INT11:1;
      uint64_t PCIE_INT12:1;
      uint64_t PCIE_INT13:1;
      uint64_t PCIE_INT14:1;
      uint64_t PCIE_INT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP1ISR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT0_EN:1;
      uint64_t INT1_EN:1;
      uint64_t INT2_EN:1;
      uint64_t INT3_EN:1;
      uint64_t INT4_EN:1;
      uint64_t INT5_EN:1;
      uint64_t INT6_EN:1;
      uint64_t INT7_EN:1;
      uint64_t INT8_EN:1;
      uint64_t INT9_EN:1;
      uint64_t INT10_EN:1;
      uint64_t INT11_EN:1;
      uint64_t INT12_EN:1;
      uint64_t INT13_EN:1;
      uint64_t INT14_EN:1;
      uint64_t INT15_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP1IGR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
      uint64_t CP1_INT:1;
      uint64_t CP2_INT:1;
      uint64_t CP3_INT:1;
      uint64_t CP4_INT:1;
      uint64_t CP5_INT:1;
      uint64_t CP6_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP2ISR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP2IGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
      uint64_t CP1_INT:1;
      uint64_t CP2_INT:1;
      uint64_t CP3_INT:1;
      uint64_t CP4_INT:1;
      uint64_t CP5_INT:1;
      uint64_t CP6_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP2ISR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP2IGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
      uint64_t CP1_INT:1;
      uint64_t CP2_INT:1;
      uint64_t CP3_INT:1;
      uint64_t CP4_INT:1;
      uint64_t CP5_INT:1;
      uint64_t CP6_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP2ISR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP2IGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCIE_INT0:1;
      uint64_t PCIE_INT1:1;
      uint64_t PCIE_INT2:1;
      uint64_t PCIE_INT3:1;
      uint64_t PCIE_INT4:1;
      uint64_t PCIE_INT5:1;
      uint64_t PCIE_INT6:1;
      uint64_t PCIE_INT7:1;
      uint64_t PCIE_INT8:1;
      uint64_t PCIE_INT9:1;
      uint64_t PCIE_INT10:1;
      uint64_t PCIE_INT11:1;
      uint64_t PCIE_INT12:1;
      uint64_t PCIE_INT13:1;
      uint64_t PCIE_INT14:1;
      uint64_t PCIE_INT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP2ISR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT0_EN:1;
      uint64_t INT1_EN:1;
      uint64_t INT2_EN:1;
      uint64_t INT3_EN:1;
      uint64_t INT4_EN:1;
      uint64_t INT5_EN:1;
      uint64_t INT6_EN:1;
      uint64_t INT7_EN:1;
      uint64_t INT8_EN:1;
      uint64_t INT9_EN:1;
      uint64_t INT10_EN:1;
      uint64_t INT11_EN:1;
      uint64_t INT12_EN:1;
      uint64_t INT13_EN:1;
      uint64_t INT14_EN:1;
      uint64_t INT15_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP2IGR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
      uint64_t CP1_INT:1;
      uint64_t CP2_INT:1;
      uint64_t CP3_INT:1;
      uint64_t CP4_INT:1;
      uint64_t CP5_INT:1;
      uint64_t CP6_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP3ISR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP3IGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
      uint64_t CP1_INT:1;
      uint64_t CP2_INT:1;
      uint64_t CP3_INT:1;
      uint64_t CP4_INT:1;
      uint64_t CP5_INT:1;
      uint64_t CP6_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP3ISR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP3IGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
      uint64_t CP1_INT:1;
      uint64_t CP2_INT:1;
      uint64_t CP3_INT:1;
      uint64_t CP4_INT:1;
      uint64_t CP5_INT:1;
      uint64_t CP6_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP3ISR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP3IGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCIE_INT0:1;
      uint64_t PCIE_INT1:1;
      uint64_t PCIE_INT2:1;
      uint64_t PCIE_INT3:1;
      uint64_t PCIE_INT4:1;
      uint64_t PCIE_INT5:1;
      uint64_t PCIE_INT6:1;
      uint64_t PCIE_INT7:1;
      uint64_t PCIE_INT8:1;
      uint64_t PCIE_INT9:1;
      uint64_t PCIE_INT10:1;
      uint64_t PCIE_INT11:1;
      uint64_t PCIE_INT12:1;
      uint64_t PCIE_INT13:1;
      uint64_t PCIE_INT14:1;
      uint64_t PCIE_INT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP3ISR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT0_EN:1;
      uint64_t INT1_EN:1;
      uint64_t INT2_EN:1;
      uint64_t INT3_EN:1;
      uint64_t INT4_EN:1;
      uint64_t INT5_EN:1;
      uint64_t INT6_EN:1;
      uint64_t INT7_EN:1;
      uint64_t INT8_EN:1;
      uint64_t INT9_EN:1;
      uint64_t INT10_EN:1;
      uint64_t INT11_EN:1;
      uint64_t INT12_EN:1;
      uint64_t INT13_EN:1;
      uint64_t INT14_EN:1;
      uint64_t INT15_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP3IGR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
      uint64_t CP1_INT:1;
      uint64_t CP2_INT:1;
      uint64_t CP3_INT:1;
      uint64_t CP4_INT:1;
      uint64_t CP5_INT:1;
      uint64_t CP6_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP4ISR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP4IGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
      uint64_t CP1_INT:1;
      uint64_t CP2_INT:1;
      uint64_t CP3_INT:1;
      uint64_t CP4_INT:1;
      uint64_t CP5_INT:1;
      uint64_t CP6_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP4ISR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP4IGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
      uint64_t CP1_INT:1;
      uint64_t CP2_INT:1;
      uint64_t CP3_INT:1;
      uint64_t CP4_INT:1;
      uint64_t CP5_INT:1;
      uint64_t CP6_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP4ISR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP4IGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCIE_INT0:1;
      uint64_t PCIE_INT1:1;
      uint64_t PCIE_INT2:1;
      uint64_t PCIE_INT3:1;
      uint64_t PCIE_INT4:1;
      uint64_t PCIE_INT5:1;
      uint64_t PCIE_INT6:1;
      uint64_t PCIE_INT7:1;
      uint64_t PCIE_INT8:1;
      uint64_t PCIE_INT9:1;
      uint64_t PCIE_INT10:1;
      uint64_t PCIE_INT11:1;
      uint64_t PCIE_INT12:1;
      uint64_t PCIE_INT13:1;
      uint64_t PCIE_INT14:1;
      uint64_t PCIE_INT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP4ISR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT0_EN:1;
      uint64_t INT1_EN:1;
      uint64_t INT2_EN:1;
      uint64_t INT3_EN:1;
      uint64_t INT4_EN:1;
      uint64_t INT5_EN:1;
      uint64_t INT6_EN:1;
      uint64_t INT7_EN:1;
      uint64_t INT8_EN:1;
      uint64_t INT9_EN:1;
      uint64_t INT10_EN:1;
      uint64_t INT11_EN:1;
      uint64_t INT12_EN:1;
      uint64_t INT13_EN:1;
      uint64_t INT14_EN:1;
      uint64_t INT15_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP4IGR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
      uint64_t CP1_INT:1;
      uint64_t CP2_INT:1;
      uint64_t CP3_INT:1;
      uint64_t CP4_INT:1;
      uint64_t CP5_INT:1;
      uint64_t CP6_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP5ISR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP5IGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
      uint64_t CP1_INT:1;
      uint64_t CP2_INT:1;
      uint64_t CP3_INT:1;
      uint64_t CP4_INT:1;
      uint64_t CP5_INT:1;
      uint64_t CP6_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP5ISR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP5IGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
      uint64_t CP1_INT:1;
      uint64_t CP2_INT:1;
      uint64_t CP3_INT:1;
      uint64_t CP4_INT:1;
      uint64_t CP5_INT:1;
      uint64_t CP6_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP5ISR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP5IGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCIE_INT0:1;
      uint64_t PCIE_INT1:1;
      uint64_t PCIE_INT2:1;
      uint64_t PCIE_INT3:1;
      uint64_t PCIE_INT4:1;
      uint64_t PCIE_INT5:1;
      uint64_t PCIE_INT6:1;
      uint64_t PCIE_INT7:1;
      uint64_t PCIE_INT8:1;
      uint64_t PCIE_INT9:1;
      uint64_t PCIE_INT10:1;
      uint64_t PCIE_INT11:1;
      uint64_t PCIE_INT12:1;
      uint64_t PCIE_INT13:1;
      uint64_t PCIE_INT14:1;
      uint64_t PCIE_INT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP5ISR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT0_EN:1;
      uint64_t INT1_EN:1;
      uint64_t INT2_EN:1;
      uint64_t INT3_EN:1;
      uint64_t INT4_EN:1;
      uint64_t INT5_EN:1;
      uint64_t INT6_EN:1;
      uint64_t INT7_EN:1;
      uint64_t INT8_EN:1;
      uint64_t INT9_EN:1;
      uint64_t INT10_EN:1;
      uint64_t INT11_EN:1;
      uint64_t INT12_EN:1;
      uint64_t INT13_EN:1;
      uint64_t INT14_EN:1;
      uint64_t INT15_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP5IGR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
      uint64_t CP1_INT:1;
      uint64_t CP2_INT:1;
      uint64_t CP3_INT:1;
      uint64_t CP4_INT:1;
      uint64_t CP5_INT:1;
      uint64_t CP6_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP6ISR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP6IGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
      uint64_t CP1_INT:1;
      uint64_t CP2_INT:1;
      uint64_t CP3_INT:1;
      uint64_t CP4_INT:1;
      uint64_t CP5_INT:1;
      uint64_t CP6_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP6ISR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP6IGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
      uint64_t CP1_INT:1;
      uint64_t CP2_INT:1;
      uint64_t CP3_INT:1;
      uint64_t CP4_INT:1;
      uint64_t CP5_INT:1;
      uint64_t CP6_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP6ISR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP6IGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCIE_INT0:1;
      uint64_t PCIE_INT1:1;
      uint64_t PCIE_INT2:1;
      uint64_t PCIE_INT3:1;
      uint64_t PCIE_INT4:1;
      uint64_t PCIE_INT5:1;
      uint64_t PCIE_INT6:1;
      uint64_t PCIE_INT7:1;
      uint64_t PCIE_INT8:1;
      uint64_t PCIE_INT9:1;
      uint64_t PCIE_INT10:1;
      uint64_t PCIE_INT11:1;
      uint64_t PCIE_INT12:1;
      uint64_t PCIE_INT13:1;
      uint64_t PCIE_INT14:1;
      uint64_t PCIE_INT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP6ISR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT0_EN:1;
      uint64_t INT1_EN:1;
      uint64_t INT2_EN:1;
      uint64_t INT3_EN:1;
      uint64_t INT4_EN:1;
      uint64_t INT5_EN:1;
      uint64_t INT6_EN:1;
      uint64_t INT7_EN:1;
      uint64_t INT8_EN:1;
      uint64_t INT9_EN:1;
      uint64_t INT10_EN:1;
      uint64_t INT11_EN:1;
      uint64_t INT12_EN:1;
      uint64_t INT13_EN:1;
      uint64_t INT14_EN:1;
      uint64_t INT15_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP6IGR3;

  uint8_t res8[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCIE_INT0:1;
      uint64_t PCIE_INT1:1;
      uint64_t PCIE_INT2:1;
      uint64_t PCIE_INT3:1;
      uint64_t PCIE_INT4:1;
      uint64_t PCIE_INT5:1;
      uint64_t PCIE_INT6:1;
      uint64_t PCIE_INT7:1;
      uint64_t PCIE_INT8:1;
      uint64_t PCIE_INT9:1;
      uint64_t PCIE_INT10:1;
      uint64_t PCIE_INT11:1;
      uint64_t PCIE_INT12:1;
      uint64_t PCIE_INT13:1;
      uint64_t PCIE_INT14:1;
      uint64_t PCIE_INT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP0ISR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT0_EN:1;
      uint64_t INT1_EN:1;
      uint64_t INT2_EN:1;
      uint64_t INT3_EN:1;
      uint64_t INT4_EN:1;
      uint64_t INT5_EN:1;
      uint64_t INT6_EN:1;
      uint64_t INT7_EN:1;
      uint64_t INT8_EN:1;
      uint64_t INT9_EN:1;
      uint64_t INT10_EN:1;
      uint64_t INT11_EN:1;
      uint64_t INT12_EN:1;
      uint64_t INT13_EN:1;
      uint64_t INT14_EN:1;
      uint64_t INT15_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP0IGR4;

  uint8_t res9[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCIE_INT0:1;
      uint64_t PCIE_INT1:1;
      uint64_t PCIE_INT2:1;
      uint64_t PCIE_INT3:1;
      uint64_t PCIE_INT4:1;
      uint64_t PCIE_INT5:1;
      uint64_t PCIE_INT6:1;
      uint64_t PCIE_INT7:1;
      uint64_t PCIE_INT8:1;
      uint64_t PCIE_INT9:1;
      uint64_t PCIE_INT10:1;
      uint64_t PCIE_INT11:1;
      uint64_t PCIE_INT12:1;
      uint64_t PCIE_INT13:1;
      uint64_t PCIE_INT14:1;
      uint64_t PCIE_INT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP1ISR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT0_EN:1;
      uint64_t INT1_EN:1;
      uint64_t INT2_EN:1;
      uint64_t INT3_EN:1;
      uint64_t INT4_EN:1;
      uint64_t INT5_EN:1;
      uint64_t INT6_EN:1;
      uint64_t INT7_EN:1;
      uint64_t INT8_EN:1;
      uint64_t INT9_EN:1;
      uint64_t INT10_EN:1;
      uint64_t INT11_EN:1;
      uint64_t INT12_EN:1;
      uint64_t INT13_EN:1;
      uint64_t INT14_EN:1;
      uint64_t INT15_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP1IGR4;

  uint8_t res10[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCIE_INT0:1;
      uint64_t PCIE_INT1:1;
      uint64_t PCIE_INT2:1;
      uint64_t PCIE_INT3:1;
      uint64_t PCIE_INT4:1;
      uint64_t PCIE_INT5:1;
      uint64_t PCIE_INT6:1;
      uint64_t PCIE_INT7:1;
      uint64_t PCIE_INT8:1;
      uint64_t PCIE_INT9:1;
      uint64_t PCIE_INT10:1;
      uint64_t PCIE_INT11:1;
      uint64_t PCIE_INT12:1;
      uint64_t PCIE_INT13:1;
      uint64_t PCIE_INT14:1;
      uint64_t PCIE_INT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP2ISR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT0_EN:1;
      uint64_t INT1_EN:1;
      uint64_t INT2_EN:1;
      uint64_t INT3_EN:1;
      uint64_t INT4_EN:1;
      uint64_t INT5_EN:1;
      uint64_t INT6_EN:1;
      uint64_t INT7_EN:1;
      uint64_t INT8_EN:1;
      uint64_t INT9_EN:1;
      uint64_t INT10_EN:1;
      uint64_t INT11_EN:1;
      uint64_t INT12_EN:1;
      uint64_t INT13_EN:1;
      uint64_t INT14_EN:1;
      uint64_t INT15_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP2IGR4;

  uint8_t res11[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCIE_INT0:1;
      uint64_t PCIE_INT1:1;
      uint64_t PCIE_INT2:1;
      uint64_t PCIE_INT3:1;
      uint64_t PCIE_INT4:1;
      uint64_t PCIE_INT5:1;
      uint64_t PCIE_INT6:1;
      uint64_t PCIE_INT7:1;
      uint64_t PCIE_INT8:1;
      uint64_t PCIE_INT9:1;
      uint64_t PCIE_INT10:1;
      uint64_t PCIE_INT11:1;
      uint64_t PCIE_INT12:1;
      uint64_t PCIE_INT13:1;
      uint64_t PCIE_INT14:1;
      uint64_t PCIE_INT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP3ISR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT0_EN:1;
      uint64_t INT1_EN:1;
      uint64_t INT2_EN:1;
      uint64_t INT3_EN:1;
      uint64_t INT4_EN:1;
      uint64_t INT5_EN:1;
      uint64_t INT6_EN:1;
      uint64_t INT7_EN:1;
      uint64_t INT8_EN:1;
      uint64_t INT9_EN:1;
      uint64_t INT10_EN:1;
      uint64_t INT11_EN:1;
      uint64_t INT12_EN:1;
      uint64_t INT13_EN:1;
      uint64_t INT14_EN:1;
      uint64_t INT15_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP3IGR4;

  uint8_t res12[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCIE_INT0:1;
      uint64_t PCIE_INT1:1;
      uint64_t PCIE_INT2:1;
      uint64_t PCIE_INT3:1;
      uint64_t PCIE_INT4:1;
      uint64_t PCIE_INT5:1;
      uint64_t PCIE_INT6:1;
      uint64_t PCIE_INT7:1;
      uint64_t PCIE_INT8:1;
      uint64_t PCIE_INT9:1;
      uint64_t PCIE_INT10:1;
      uint64_t PCIE_INT11:1;
      uint64_t PCIE_INT12:1;
      uint64_t PCIE_INT13:1;
      uint64_t PCIE_INT14:1;
      uint64_t PCIE_INT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP4ISR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT0_EN:1;
      uint64_t INT1_EN:1;
      uint64_t INT2_EN:1;
      uint64_t INT3_EN:1;
      uint64_t INT4_EN:1;
      uint64_t INT5_EN:1;
      uint64_t INT6_EN:1;
      uint64_t INT7_EN:1;
      uint64_t INT8_EN:1;
      uint64_t INT9_EN:1;
      uint64_t INT10_EN:1;
      uint64_t INT11_EN:1;
      uint64_t INT12_EN:1;
      uint64_t INT13_EN:1;
      uint64_t INT14_EN:1;
      uint64_t INT15_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP4IGR4;

  uint8_t res13[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCIE_INT0:1;
      uint64_t PCIE_INT1:1;
      uint64_t PCIE_INT2:1;
      uint64_t PCIE_INT3:1;
      uint64_t PCIE_INT4:1;
      uint64_t PCIE_INT5:1;
      uint64_t PCIE_INT6:1;
      uint64_t PCIE_INT7:1;
      uint64_t PCIE_INT8:1;
      uint64_t PCIE_INT9:1;
      uint64_t PCIE_INT10:1;
      uint64_t PCIE_INT11:1;
      uint64_t PCIE_INT12:1;
      uint64_t PCIE_INT13:1;
      uint64_t PCIE_INT14:1;
      uint64_t PCIE_INT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP5ISR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT0_EN:1;
      uint64_t INT1_EN:1;
      uint64_t INT2_EN:1;
      uint64_t INT3_EN:1;
      uint64_t INT4_EN:1;
      uint64_t INT5_EN:1;
      uint64_t INT6_EN:1;
      uint64_t INT7_EN:1;
      uint64_t INT8_EN:1;
      uint64_t INT9_EN:1;
      uint64_t INT10_EN:1;
      uint64_t INT11_EN:1;
      uint64_t INT12_EN:1;
      uint64_t INT13_EN:1;
      uint64_t INT14_EN:1;
      uint64_t INT15_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP5IGR4;

  uint8_t res14[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCIE_INT0:1;
      uint64_t PCIE_INT1:1;
      uint64_t PCIE_INT2:1;
      uint64_t PCIE_INT3:1;
      uint64_t PCIE_INT4:1;
      uint64_t PCIE_INT5:1;
      uint64_t PCIE_INT6:1;
      uint64_t PCIE_INT7:1;
      uint64_t PCIE_INT8:1;
      uint64_t PCIE_INT9:1;
      uint64_t PCIE_INT10:1;
      uint64_t PCIE_INT11:1;
      uint64_t PCIE_INT12:1;
      uint64_t PCIE_INT13:1;
      uint64_t PCIE_INT14:1;
      uint64_t PCIE_INT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP6ISR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT0_EN:1;
      uint64_t INT1_EN:1;
      uint64_t INT2_EN:1;
      uint64_t INT3_EN:1;
      uint64_t INT4_EN:1;
      uint64_t INT5_EN:1;
      uint64_t INT6_EN:1;
      uint64_t INT7_EN:1;
      uint64_t INT8_EN:1;
      uint64_t INT9_EN:1;
      uint64_t INT10_EN:1;
      uint64_t INT11_EN:1;
      uint64_t INT12_EN:1;
      uint64_t INT13_EN:1;
      uint64_t INT14_EN:1;
      uint64_t INT15_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP6IGR4;

  uint8_t res15[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_TR:1;
      uint64_t CP1_TR:1;
      uint64_t CP2_TR:1;
      uint64_t CP3_TR:1;
      uint64_t CP4_TR:1;
      uint64_t CP5_TR:1;
      uint64_t CP6_TR:1;
      uint64_t reservedSpace0:24;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCPCFG;

  uint8_t res16[1020];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_NMI_EN:1;
      uint64_t CP1_NMI_EN:1;
      uint64_t CP2_NMI_EN:1;
      uint64_t CP3_NMI_EN:1;
      uint64_t CP4_NMI_EN:1;
      uint64_t CP5_NMI_EN:1;
      uint64_t CP6_NMI_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRNMIC;

  uint8_t res17[124];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_39;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_40;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_41;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_42;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_43;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_44;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_45;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_46;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_47;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_48;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_49;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_50;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_51;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_52;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_53;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_54;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_55;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_56;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_57;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_58;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_59;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_60;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_61;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_62;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_63;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_64;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_65;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_66;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_67;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_68;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_69;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_70;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_71;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_72;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_73;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_74;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_75;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_76;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_77;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_78;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_79;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_80;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_81;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_82;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_83;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_84;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_85;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_86;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_87;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_88;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_89;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_90;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_91;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_92;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_93;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_94;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_95;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_96;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_97;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_98;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_99;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_100;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_101;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_102;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_103;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_104;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_105;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_106;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_107;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_108;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_109;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_110;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_111;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_112;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_113;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_114;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_115;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_116;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_117;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_118;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_119;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_120;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_121;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_122;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_123;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_124;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_125;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_126;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_127;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_128;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_129;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_130;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_131;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_132;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_133;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_134;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_135;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_136;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_137;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_138;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_139;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_140;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_141;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_142;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_143;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_144;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_145;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_146;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_147;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_148;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_149;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_150;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_151;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_152;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_153;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_154;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_155;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_156;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_157;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_158;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_159;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_160;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_161;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_162;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_163;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_164;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_165;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_166;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_167;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_168;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_169;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_170;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_171;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_172;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_173;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_174;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_175;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_176;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_177;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_178;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_179;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_180;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_181;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_182;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_183;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_184;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_185;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_186;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_187;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_188;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_189;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_190;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_191;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_192;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_193;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_194;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_195;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_196;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_197;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_198;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_199;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_200;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_201;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_202;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_203;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_204;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_205;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_206;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_207;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_208;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_209;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_210;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_211;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_212;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_213;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_214;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_215;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_216;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_217;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_218;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_219;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_220;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_221;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_222;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_223;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_224;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_225;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_226;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_227;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_228;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_229;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_230;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_231;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_232;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_233;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_234;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_235;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_236;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_237;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_238;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GIC500:1;
      uint64_t M7_0:1;
      uint64_t M7_1:1;
      uint64_t M7_2:1;
      uint64_t reservedSpace0:11;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_239;

};

#define MSCM (*(volatile struct MSCM_tag *) 0x40198000)

struct SRAMC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INITREQ:1;
      uint64_t IWS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRAMCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IAS:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRAMIAS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IAE:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRAMIAE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDONE:1;
      uint64_t IERR:1;
      uint64_t IPEND:1;
      uint64_t reservedSpace0:1;
      uint64_t AEXT:1;
      uint64_t AERR:1;
      uint64_t MLTERR:1;
      uint64_t SGLERR:1;
      uint64_t SYND:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRAMSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADR:17;
      uint64_t reservedSpace0:3;
      uint64_t EBNK:1;
      uint64_t CTRLID:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRAMECCA;

};

#define SRAMC (*(volatile struct SRAMC_tag *) 0x4019c000)

struct SRAMC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INITREQ:1;
      uint64_t IWS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRAMCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IAS:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRAMIAS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IAE:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRAMIAE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDONE:1;
      uint64_t IERR:1;
      uint64_t IPEND:1;
      uint64_t reservedSpace0:1;
      uint64_t AEXT:1;
      uint64_t AERR:1;
      uint64_t MLTERR:1;
      uint64_t SGLERR:1;
      uint64_t SYND:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRAMSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADR:17;
      uint64_t reservedSpace0:3;
      uint64_t EBNK:1;
      uint64_t CTRLID:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRAMECCA;

};

#define SRAMC_1 (*(volatile struct SRAMC_1_tag *) 0x401a0000)

struct SRAM_STDBY_CFG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INITREQ:1;
      uint64_t IWS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRAMCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IAS:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRAMIAS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IAE:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRAMIAE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDONE:1;
      uint64_t IERR:1;
      uint64_t IPEND:1;
      uint64_t reservedSpace0:1;
      uint64_t AEXT:1;
      uint64_t AERR:1;
      uint64_t MLTERR:1;
      uint64_t SGLERR:1;
      uint64_t SYND:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRAMSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADR:17;
      uint64_t reservedSpace0:3;
      uint64_t EBNK:1;
      uint64_t CTRLID:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRAMECCA;

};

#define SRAM_STDBY_CFG (*(volatile struct SRAM_STDBY_CFG_tag *) 0x44028000)

struct XRDC_0_tag
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

  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG21;

  uint8_t res3[42];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMRGD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MRCFG0;

  uint8_t res4[1];

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

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMRGD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MRCFG7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMRGD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MRCFG8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMRGD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MRCFG9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMRGD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MRCFG10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMRGD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MRCFG11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMRGD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MRCFG12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMRGD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MRCFG13;

  uint8_t res5[178];

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

  uint8_t res6[480];

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
      uint64_t reservedSpace1:4;
      uint64_t EA40FMT:1;
      uint64_t reservedSpace2:7;
      uint64_t EPORT:3;
      uint64_t reservedSpace3:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR39_32:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W2_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_0;

  uint8_t res7[16];

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
      uint64_t reservedSpace1:4;
      uint64_t EA40FMT:1;
      uint64_t reservedSpace2:7;
      uint64_t EPORT:3;
      uint64_t reservedSpace3:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR39_32:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W2_2;

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
      uint64_t reservedSpace1:4;
      uint64_t EA40FMT:1;
      uint64_t reservedSpace2:7;
      uint64_t EPORT:3;
      uint64_t reservedSpace3:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR39_32:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W2_3;

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
      uint64_t reservedSpace1:4;
      uint64_t EA40FMT:1;
      uint64_t reservedSpace2:7;
      uint64_t EPORT:3;
      uint64_t reservedSpace3:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR39_32:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W2_4;

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
      uint64_t reservedSpace1:4;
      uint64_t EA40FMT:1;
      uint64_t reservedSpace2:7;
      uint64_t EPORT:3;
      uint64_t reservedSpace3:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR39_32:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W2_5;

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
      uint64_t reservedSpace1:4;
      uint64_t EA40FMT:1;
      uint64_t reservedSpace2:7;
      uint64_t EPORT:3;
      uint64_t reservedSpace3:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR39_32:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W2_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W0_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDID:4;
      uint64_t reservedSpace0:4;
      uint64_t EATR:3;
      uint64_t ERW:1;
      uint64_t reservedSpace1:4;
      uint64_t EA40FMT:1;
      uint64_t reservedSpace2:7;
      uint64_t EPORT:3;
      uint64_t reservedSpace3:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR39_32:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W2_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W0_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDID:4;
      uint64_t reservedSpace0:4;
      uint64_t EATR:3;
      uint64_t ERW:1;
      uint64_t reservedSpace1:4;
      uint64_t EA40FMT:1;
      uint64_t reservedSpace2:7;
      uint64_t EPORT:3;
      uint64_t reservedSpace3:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR39_32:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W2_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W0_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDID:4;
      uint64_t reservedSpace0:4;
      uint64_t EATR:3;
      uint64_t ERW:1;
      uint64_t reservedSpace1:4;
      uint64_t EA40FMT:1;
      uint64_t reservedSpace2:7;
      uint64_t EPORT:3;
      uint64_t reservedSpace3:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR39_32:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W2_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W0_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDID:4;
      uint64_t reservedSpace0:4;
      uint64_t EATR:3;
      uint64_t ERW:1;
      uint64_t reservedSpace1:4;
      uint64_t EA40FMT:1;
      uint64_t reservedSpace2:7;
      uint64_t EPORT:3;
      uint64_t reservedSpace3:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR39_32:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W2_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W0_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDID:4;
      uint64_t reservedSpace0:4;
      uint64_t EATR:3;
      uint64_t ERW:1;
      uint64_t reservedSpace1:4;
      uint64_t EA40FMT:1;
      uint64_t reservedSpace2:7;
      uint64_t EPORT:3;
      uint64_t reservedSpace3:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR39_32:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W2_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W0_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDID:4;
      uint64_t reservedSpace0:4;
      uint64_t EATR:3;
      uint64_t ERW:1;
      uint64_t reservedSpace1:4;
      uint64_t EA40FMT:1;
      uint64_t reservedSpace2:7;
      uint64_t EPORT:3;
      uint64_t reservedSpace3:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR39_32:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W2_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W0_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDID:4;
      uint64_t reservedSpace0:4;
      uint64_t EATR:3;
      uint64_t ERW:1;
      uint64_t reservedSpace1:4;
      uint64_t EA40FMT:1;
      uint64_t reservedSpace2:7;
      uint64_t EPORT:3;
      uint64_t reservedSpace3:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR39_32:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W2_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_13;

  uint8_t res8[32];

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
      uint64_t reservedSpace1:4;
      uint64_t EA40FMT:1;
      uint64_t reservedSpace2:7;
      uint64_t EPORT:3;
      uint64_t reservedSpace3:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR39_32:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W2_16;

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
      uint64_t reservedSpace1:4;
      uint64_t EA40FMT:1;
      uint64_t reservedSpace2:7;
      uint64_t EPORT:3;
      uint64_t reservedSpace3:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR39_32:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W2_17;

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
      uint64_t reservedSpace1:4;
      uint64_t EA40FMT:1;
      uint64_t reservedSpace2:7;
      uint64_t EPORT:3;
      uint64_t reservedSpace3:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR39_32:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W2_18;

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
      uint64_t reservedSpace1:4;
      uint64_t EA40FMT:1;
      uint64_t reservedSpace2:7;
      uint64_t EPORT:3;
      uint64_t reservedSpace3:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR39_32:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W2_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_19;

  uint8_t res9[448];

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

  uint8_t res10[24];

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
  } __attribute__((aligned(4))) PID8;

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
  } __attribute__((aligned(4))) PID9;

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
  } __attribute__((aligned(4))) PID10;

  uint8_t res11[20];

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
  } __attribute__((aligned(4))) PID16;

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
  } __attribute__((aligned(4))) PID17;

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
  } __attribute__((aligned(4))) PID18;

  uint8_t res12[180];

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
      uint64_t reservedSpace2:7;
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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W1_0_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W2_0_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W3_0_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W4_0_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W5_0_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W6_0_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W7_0_DFMT0;

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
      uint64_t reservedSpace2:7;
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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W1_1_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W2_1_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W3_1_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W4_1_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W5_1_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W6_1_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W7_1_DFMT0;

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
      uint64_t reservedSpace1:20;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_2_DFMT1;

  uint8_t res13[28];

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
      uint64_t reservedSpace1:20;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_3_DFMT1;

  uint8_t res14[28];

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
      uint64_t reservedSpace1:20;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_4_DFMT1;

  uint8_t res15[28];

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
      uint64_t reservedSpace1:20;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_5_DFMT1;

  uint8_t res16[28];

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
      uint64_t reservedSpace1:20;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_6_DFMT1;

  uint8_t res17[28];

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
      uint64_t reservedSpace1:20;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_7_DFMT1;

  uint8_t res18[28];

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_8_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W1_8_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W2_8_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W3_8_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W4_8_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W5_8_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W6_8_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W7_8_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_9_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W1_9_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W2_9_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W3_9_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W4_9_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W5_9_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W6_9_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W7_9_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_10_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W1_10_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W2_10_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W3_10_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W4_10_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W5_10_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W6_10_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W7_10_DFMT0;

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
      uint64_t reservedSpace1:20;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_11_DFMT1;

  uint8_t res19[28];

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
      uint64_t reservedSpace1:20;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_12_DFMT1;

  uint8_t res20[92];

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
      uint64_t reservedSpace1:20;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_15_DFMT1;

  uint8_t res21[28];

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_16_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W1_16_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W2_16_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W3_16_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W4_16_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W5_16_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W6_16_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W7_16_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_17_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W1_17_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W2_17_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W3_17_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W4_17_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W5_17_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W6_17_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W7_17_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_18_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W1_18_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W2_18_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W3_18_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W4_18_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W5_18_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W6_18_DFMT0;

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
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W7_18_DFMT0;

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
      uint64_t reservedSpace1:20;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_19_DFMT1;

  uint8_t res22[28];

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
      uint64_t reservedSpace1:20;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_20_DFMT1;

  uint8_t res23[28];

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
      uint64_t reservedSpace1:20;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_21_DFMT1;

  uint8_t res24[1372];

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
  } __attribute__((aligned(4))) PDAC_W0_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_0;

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
  } __attribute__((aligned(4))) PDAC_W0_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_1;

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
  } __attribute__((aligned(4))) PDAC_W0_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_2;

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
  } __attribute__((aligned(4))) PDAC_W0_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_3;

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
  } __attribute__((aligned(4))) PDAC_W0_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_4;

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
  } __attribute__((aligned(4))) PDAC_W0_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_5;

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
  } __attribute__((aligned(4))) PDAC_W0_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_6;

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
  } __attribute__((aligned(4))) PDAC_W0_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_7;

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
  } __attribute__((aligned(4))) PDAC_W0_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_10;

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
  } __attribute__((aligned(4))) PDAC_W0_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_11;

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
  } __attribute__((aligned(4))) PDAC_W0_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_12;

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
  } __attribute__((aligned(4))) PDAC_W0_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_13;

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
  } __attribute__((aligned(4))) PDAC_W0_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_14;

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
  } __attribute__((aligned(4))) PDAC_W0_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_16;

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
  } __attribute__((aligned(4))) PDAC_W0_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_17;

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
  } __attribute__((aligned(4))) PDAC_W0_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_18;

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
  } __attribute__((aligned(4))) PDAC_W0_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_19;

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
  } __attribute__((aligned(4))) PDAC_W0_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_24;

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
  } __attribute__((aligned(4))) PDAC_W0_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_25;

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
  } __attribute__((aligned(4))) PDAC_W0_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_26;

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
  } __attribute__((aligned(4))) PDAC_W0_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_28;

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
  } __attribute__((aligned(4))) PDAC_W0_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_29;

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
  } __attribute__((aligned(4))) PDAC_W0_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_30;

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
  } __attribute__((aligned(4))) PDAC_W0_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_31;

  uint8_t res25[768];

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
  } __attribute__((aligned(4))) PDAC_W0_128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_128;

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
  } __attribute__((aligned(4))) PDAC_W0_129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_129;

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
  } __attribute__((aligned(4))) PDAC_W0_130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_130;

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
  } __attribute__((aligned(4))) PDAC_W0_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_131;

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
  } __attribute__((aligned(4))) PDAC_W0_132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_132;

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
  } __attribute__((aligned(4))) PDAC_W0_133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_133;

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
  } __attribute__((aligned(4))) PDAC_W0_134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_134;

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
  } __attribute__((aligned(4))) PDAC_W0_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_135;

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
  } __attribute__((aligned(4))) PDAC_W0_136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_136;

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
  } __attribute__((aligned(4))) PDAC_W0_137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_137;

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
  } __attribute__((aligned(4))) PDAC_W0_138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_138;

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
  } __attribute__((aligned(4))) PDAC_W0_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_139;

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
  } __attribute__((aligned(4))) PDAC_W0_140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_140;

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
  } __attribute__((aligned(4))) PDAC_W0_141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_141;

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
  } __attribute__((aligned(4))) PDAC_W0_142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_142;

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
  } __attribute__((aligned(4))) PDAC_W0_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_143;

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
  } __attribute__((aligned(4))) PDAC_W0_153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_153;

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
  } __attribute__((aligned(4))) PDAC_W0_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_159;

  uint8_t res26[768];

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
  } __attribute__((aligned(4))) PDAC_W0_256;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_256;

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
  } __attribute__((aligned(4))) PDAC_W0_257;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_257;

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
  } __attribute__((aligned(4))) PDAC_W0_258;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_258;

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
  } __attribute__((aligned(4))) PDAC_W0_259;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_259;

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
  } __attribute__((aligned(4))) PDAC_W0_260;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_260;

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
  } __attribute__((aligned(4))) PDAC_W0_261;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_261;

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
  } __attribute__((aligned(4))) PDAC_W0_262;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_262;

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
  } __attribute__((aligned(4))) PDAC_W0_263;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_263;

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
  } __attribute__((aligned(4))) PDAC_W0_266;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_266;

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
  } __attribute__((aligned(4))) PDAC_W0_267;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_267;

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
  } __attribute__((aligned(4))) PDAC_W0_268;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_268;

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
  } __attribute__((aligned(4))) PDAC_W0_269;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_269;

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
  } __attribute__((aligned(4))) PDAC_W0_270;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_270;

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
  } __attribute__((aligned(4))) PDAC_W0_273;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_273;

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
  } __attribute__((aligned(4))) PDAC_W0_274;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_274;

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
  } __attribute__((aligned(4))) PDAC_W0_275;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_275;

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
  } __attribute__((aligned(4))) PDAC_W0_276;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_276;

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
  } __attribute__((aligned(4))) PDAC_W0_277;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_277;

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
  } __attribute__((aligned(4))) PDAC_W0_278;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_278;

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
  } __attribute__((aligned(4))) PDAC_W0_279;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_279;

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
  } __attribute__((aligned(4))) PDAC_W0_280;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_280;

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
  } __attribute__((aligned(4))) PDAC_W0_281;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_281;

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
  } __attribute__((aligned(4))) PDAC_W0_282;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_282;

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
  } __attribute__((aligned(4))) PDAC_W0_284;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_284;

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
  } __attribute__((aligned(4))) PDAC_W0_285;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_285;

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
  } __attribute__((aligned(4))) PDAC_W0_286;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_286;

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
  } __attribute__((aligned(4))) PDAC_W0_287;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_287;

  uint8_t res27[768];

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
  } __attribute__((aligned(4))) PDAC_W0_384;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_384;

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
  } __attribute__((aligned(4))) PDAC_W0_385;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_385;

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
  } __attribute__((aligned(4))) PDAC_W0_386;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_386;

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
  } __attribute__((aligned(4))) PDAC_W0_387;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_387;

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
  } __attribute__((aligned(4))) PDAC_W0_388;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_388;

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
  } __attribute__((aligned(4))) PDAC_W0_389;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_389;

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
  } __attribute__((aligned(4))) PDAC_W0_390;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_390;

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
  } __attribute__((aligned(4))) PDAC_W0_391;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_391;

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
  } __attribute__((aligned(4))) PDAC_W0_392;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_392;

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
  } __attribute__((aligned(4))) PDAC_W0_393;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_393;

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
  } __attribute__((aligned(4))) PDAC_W0_394;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_394;

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
  } __attribute__((aligned(4))) PDAC_W0_395;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_395;

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
  } __attribute__((aligned(4))) PDAC_W0_396;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_396;

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
  } __attribute__((aligned(4))) PDAC_W0_397;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_397;

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
  } __attribute__((aligned(4))) PDAC_W0_398;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_398;

  uint8_t res28[8];

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
  } __attribute__((aligned(4))) PDAC_W0_401;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_401;

  uint8_t res29[32];

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
  } __attribute__((aligned(4))) PDAC_W0_406;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_406;

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
  } __attribute__((aligned(4))) PDAC_W0_407;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_407;

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
  } __attribute__((aligned(4))) PDAC_W0_408;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_408;

  uint8_t res30[824];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
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

  uint8_t res31[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
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

  uint8_t res32[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
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

  uint8_t res33[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
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

  uint8_t res34[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_4;

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
  } __attribute__((aligned(4))) MRGD_W2_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_4;

  uint8_t res35[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_5;

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
  } __attribute__((aligned(4))) MRGD_W2_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_5;

  uint8_t res36[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_6;

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
  } __attribute__((aligned(4))) MRGD_W2_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_6;

  uint8_t res37[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_7;

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
  } __attribute__((aligned(4))) MRGD_W2_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_7;

  uint8_t res38[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_8;

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
  } __attribute__((aligned(4))) MRGD_W2_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_8;

  uint8_t res39[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_9;

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
  } __attribute__((aligned(4))) MRGD_W2_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_9;

  uint8_t res40[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_10;

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
  } __attribute__((aligned(4))) MRGD_W2_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_10;

  uint8_t res41[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_11;

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
  } __attribute__((aligned(4))) MRGD_W2_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_11;

  uint8_t res42[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_12;

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
  } __attribute__((aligned(4))) MRGD_W2_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_12;

  uint8_t res43[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_13;

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
  } __attribute__((aligned(4))) MRGD_W2_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_13;

  uint8_t res44[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_14;

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
  } __attribute__((aligned(4))) MRGD_W2_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_14;

  uint8_t res45[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_15;

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
  } __attribute__((aligned(4))) MRGD_W2_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_15;

  uint8_t res46[528];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
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

  uint8_t res47[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
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

  uint8_t res48[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
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

  uint8_t res49[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
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

  uint8_t res50[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_36;

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
  } __attribute__((aligned(4))) MRGD_W2_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_36;

  uint8_t res51[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_37;

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
  } __attribute__((aligned(4))) MRGD_W2_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_37;

  uint8_t res52[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_38;

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
  } __attribute__((aligned(4))) MRGD_W2_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_38;

  uint8_t res53[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_39;

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
  } __attribute__((aligned(4))) MRGD_W2_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_39;

  uint8_t res54[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_40;

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
  } __attribute__((aligned(4))) MRGD_W2_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_40;

  uint8_t res55[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_41;

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
  } __attribute__((aligned(4))) MRGD_W2_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_41;

  uint8_t res56[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_42;

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
  } __attribute__((aligned(4))) MRGD_W2_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_42;

  uint8_t res57[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_43;

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
  } __attribute__((aligned(4))) MRGD_W2_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_43;

  uint8_t res58[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_44;

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
  } __attribute__((aligned(4))) MRGD_W2_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_44;

  uint8_t res59[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_45;

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
  } __attribute__((aligned(4))) MRGD_W2_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_45;

  uint8_t res60[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_46;

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
  } __attribute__((aligned(4))) MRGD_W2_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_46;

  uint8_t res61[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_47;

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
  } __attribute__((aligned(4))) MRGD_W2_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_47;

  uint8_t res62[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
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

  uint8_t res63[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
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

  uint8_t res64[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
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

  uint8_t res65[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
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

  uint8_t res66[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_52;

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
  } __attribute__((aligned(4))) MRGD_W2_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_52;

  uint8_t res67[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_53;

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
  } __attribute__((aligned(4))) MRGD_W2_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_53;

  uint8_t res68[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_54;

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
  } __attribute__((aligned(4))) MRGD_W2_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_54;

  uint8_t res69[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_55;

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
  } __attribute__((aligned(4))) MRGD_W2_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_55;

  uint8_t res70[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_56;

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
  } __attribute__((aligned(4))) MRGD_W2_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_56;

  uint8_t res71[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_57;

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
  } __attribute__((aligned(4))) MRGD_W2_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_57;

  uint8_t res72[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_58;

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
  } __attribute__((aligned(4))) MRGD_W2_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_58;

  uint8_t res73[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_59;

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
  } __attribute__((aligned(4))) MRGD_W2_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_59;

  uint8_t res74[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_60;

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
  } __attribute__((aligned(4))) MRGD_W2_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_60;

  uint8_t res75[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_61;

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
  } __attribute__((aligned(4))) MRGD_W2_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_61;

  uint8_t res76[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_62;

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
  } __attribute__((aligned(4))) MRGD_W2_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_62;

  uint8_t res77[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_63;

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
  } __attribute__((aligned(4))) MRGD_W2_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_63;

  uint8_t res78[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
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

  uint8_t res79[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
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

  uint8_t res80[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
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

  uint8_t res81[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
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

  uint8_t res82[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_68;

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
  } __attribute__((aligned(4))) MRGD_W2_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_68;

  uint8_t res83[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_69;

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
  } __attribute__((aligned(4))) MRGD_W2_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_69;

  uint8_t res84[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_70;

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
  } __attribute__((aligned(4))) MRGD_W2_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_70;

  uint8_t res85[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SRTADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENDADDR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_71;

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

  union
  {
    struct
