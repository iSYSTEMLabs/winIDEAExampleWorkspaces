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

struct RNG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RNGEN:1;
      uint64_t IE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRDY:1;
      uint64_t CECS:1;
      uint64_t SECS:1;
      uint64_t reservedSpace0:2;
      uint64_t CEIS:1;
      uint64_t SEIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RNDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

};

#define RNG (*(volatile struct RNG_tag *) 0x50060800)

struct DCMI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE:1;
      uint64_t CM:1;
      uint64_t CROP:1;
      uint64_t JPEG:1;
      uint64_t ESS:1;
      uint64_t PCKPOL:1;
      uint64_t HSPOL:1;
      uint64_t VSPOL:1;
      uint64_t FCRC:2;
      uint64_t EDM:2;
      uint64_t reservedSpace0:2;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSYNC:1;
      uint64_t VSYNC:1;
      uint64_t FNE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAME_RIS:1;
      uint64_t OVR_RIS:1;
      uint64_t ERR_RIS:1;
      uint64_t VSYNC_RIS:1;
      uint64_t LINE_RIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAME_IE:1;
      uint64_t OVR_IE:1;
      uint64_t ERR_IE:1;
      uint64_t VSYNC_IE:1;
      uint64_t LINE_IE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAME_MIS:1;
      uint64_t OVR_MIS:1;
      uint64_t ERR_MIS:1;
      uint64_t VSYNC_MIS:1;
      uint64_t LINE_MIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAME_ISC:1;
      uint64_t OVR_ISC:1;
      uint64_t ERR_ISC:1;
      uint64_t VSYNC_ISC:1;
      uint64_t LINE_ISC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSC:8;
      uint64_t LSC:8;
      uint64_t LEC:8;
      uint64_t FEC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSU:8;
      uint64_t LSU:8;
      uint64_t LEU:8;
      uint64_t FEU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HOFFCNT:14;
      uint64_t reservedSpace0:2;
      uint64_t VST:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSTRT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPCNT:14;
      uint64_t reservedSpace0:2;
      uint64_t VLINE:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSIZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Byte0:8;
      uint64_t Byte1:8;
      uint64_t Byte2:8;
      uint64_t Byte3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

};

#define DCMI (*(volatile struct DCMI_tag *) 0x50050000)

struct FSMC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBKEN:1;
      uint64_t MUXEN:1;
      uint64_t MTYP:2;
      uint64_t MWID:2;
      uint64_t FACCEN:1;
      uint64_t reservedSpace0:1;
      uint64_t BURSTEN:1;
      uint64_t WAITPOL:1;
      uint64_t reservedSpace1:1;
      uint64_t WAITCFG:1;
      uint64_t WREN:1;
      uint64_t WAITEN:1;
      uint64_t EXTMOD:1;
      uint64_t ASYNCWAIT:1;
      uint64_t reservedSpace2:3;
      uint64_t CBURSTRW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDSET:4;
      uint64_t ADDHLD:4;
      uint64_t DATAST:8;
      uint64_t BUSTURN:4;
      uint64_t CLKDIV:4;
      uint64_t DATLAT:4;
      uint64_t ACCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBKEN:1;
      uint64_t MUXEN:1;
      uint64_t MTYP:2;
      uint64_t MWID:2;
      uint64_t FACCEN:1;
      uint64_t reservedSpace0:1;
      uint64_t BURSTEN:1;
      uint64_t WAITPOL:1;
      uint64_t WRAPMOD:1;
      uint64_t WAITCFG:1;
      uint64_t WREN:1;
      uint64_t WAITEN:1;
      uint64_t EXTMOD:1;
      uint64_t ASYNCWAIT:1;
      uint64_t reservedSpace1:3;
      uint64_t CBURSTRW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDSET:4;
      uint64_t ADDHLD:4;
      uint64_t DATAST:8;
      uint64_t BUSTURN:4;
      uint64_t CLKDIV:4;
      uint64_t DATLAT:4;
      uint64_t ACCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBKEN:1;
      uint64_t MUXEN:1;
      uint64_t MTYP:2;
      uint64_t MWID:2;
      uint64_t FACCEN:1;
      uint64_t reservedSpace0:1;
      uint64_t BURSTEN:1;
      uint64_t WAITPOL:1;
      uint64_t WRAPMOD:1;
      uint64_t WAITCFG:1;
      uint64_t WREN:1;
      uint64_t WAITEN:1;
      uint64_t EXTMOD:1;
      uint64_t ASYNCWAIT:1;
      uint64_t reservedSpace1:3;
      uint64_t CBURSTRW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDSET:4;
      uint64_t ADDHLD:4;
      uint64_t DATAST:8;
      uint64_t BUSTURN:4;
      uint64_t CLKDIV:4;
      uint64_t DATLAT:4;
      uint64_t ACCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBKEN:1;
      uint64_t MUXEN:1;
      uint64_t MTYP:2;
      uint64_t MWID:2;
      uint64_t FACCEN:1;
      uint64_t reservedSpace0:1;
      uint64_t BURSTEN:1;
      uint64_t WAITPOL:1;
      uint64_t WRAPMOD:1;
      uint64_t WAITCFG:1;
      uint64_t WREN:1;
      uint64_t WAITEN:1;
      uint64_t EXTMOD:1;
      uint64_t ASYNCWAIT:1;
      uint64_t reservedSpace1:3;
      uint64_t CBURSTRW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDSET:4;
      uint64_t ADDHLD:4;
      uint64_t DATAST:8;
      uint64_t BUSTURN:4;
      uint64_t CLKDIV:4;
      uint64_t DATLAT:4;
      uint64_t ACCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTR4;

  uint8_t res0[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWAITEN:1;
      uint64_t PBKEN:1;
      uint64_t PTYP:1;
      uint64_t PWID:2;
      uint64_t ECCEN:1;
      uint64_t reservedSpace1:2;
      uint64_t TCLR:4;
      uint64_t TAR:4;
      uint64_t ECCPS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRS:1;
      uint64_t ILS:1;
      uint64_t IFS:1;
      uint64_t IREN:1;
      uint64_t ILEN:1;
      uint64_t IFEN:1;
      uint64_t FEMPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEMSETx:8;
      uint64_t MEMWAITx:8;
      uint64_t MEMHOLDx:8;
      uint64_t MEMHIZx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMEM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ATTSETx:8;
      uint64_t ATTWAITx:8;
      uint64_t ATTHOLDx:8;
      uint64_t ATTHIZx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATT2;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCR2;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWAITEN:1;
      uint64_t PBKEN:1;
      uint64_t PTYP:1;
      uint64_t PWID:2;
      uint64_t ECCEN:1;
      uint64_t reservedSpace1:2;
      uint64_t TCLR:4;
      uint64_t TAR:4;
      uint64_t ECCPS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRS:1;
      uint64_t ILS:1;
      uint64_t IFS:1;
      uint64_t IREN:1;
      uint64_t ILEN:1;
      uint64_t IFEN:1;
      uint64_t FEMPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEMSETx:8;
      uint64_t MEMWAITx:8;
      uint64_t MEMHOLDx:8;
      uint64_t MEMHIZx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMEM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ATTSETx:8;
      uint64_t ATTWAITx:8;
      uint64_t ATTHOLDx:8;
      uint64_t ATTHIZx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATT3;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCR3;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWAITEN:1;
      uint64_t PBKEN:1;
      uint64_t PTYP:1;
      uint64_t PWID:2;
      uint64_t ECCEN:1;
      uint64_t reservedSpace1:2;
      uint64_t TCLR:4;
      uint64_t TAR:4;
      uint64_t ECCPS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRS:1;
      uint64_t ILS:1;
      uint64_t IFS:1;
      uint64_t IREN:1;
      uint64_t ILEN:1;
      uint64_t IFEN:1;
      uint64_t FEMPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEMSETx:8;
      uint64_t MEMWAITx:8;
      uint64_t MEMHOLDx:8;
      uint64_t MEMHIZx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMEM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ATTSETx:8;
      uint64_t ATTWAITx:8;
      uint64_t ATTHOLDx:8;
      uint64_t ATTHIZx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOSETx:8;
      uint64_t IOWAITx:8;
      uint64_t IOHOLDx:8;
      uint64_t IOHIZx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4;

  uint8_t res5[80];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDSET:4;
      uint64_t ADDHLD:4;
      uint64_t DATAST:8;
      uint64_t reservedSpace0:4;
      uint64_t CLKDIV:4;
      uint64_t DATLAT:4;
      uint64_t ACCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BWTR1;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDSET:4;
      uint64_t ADDHLD:4;
      uint64_t DATAST:8;
      uint64_t reservedSpace0:4;
      uint64_t CLKDIV:4;
      uint64_t DATLAT:4;
      uint64_t ACCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BWTR2;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDSET:4;
      uint64_t ADDHLD:4;
      uint64_t DATAST:8;
      uint64_t reservedSpace0:4;
      uint64_t CLKDIV:4;
      uint64_t DATLAT:4;
      uint64_t ACCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BWTR3;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDSET:4;
      uint64_t ADDHLD:4;
      uint64_t DATAST:8;
      uint64_t reservedSpace0:4;
      uint64_t CLKDIV:4;
      uint64_t DATLAT:4;
      uint64_t ACCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BWTR4;

};

#define FSMC (*(volatile struct FSMC_tag *) 0xa0000000)

struct DBG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEV_ID:12;
      uint64_t reservedSpace0:4;
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBGMCU_IDCODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBG_SLEEP:1;
      uint64_t DBG_STOP:1;
      uint64_t DBG_STANDBY:1;
      uint64_t reservedSpace0:2;
      uint64_t TRACE_IOEN:1;
      uint64_t TRACE_MODE:2;
      uint64_t reservedSpace1:8;
      uint64_t DBG_I2C2_SMBUS_TIMEOUT:1;
      uint64_t DBG_TIM8_STOP:1;
      uint64_t DBG_TIM5_STOP:1;
      uint64_t DBG_TIM6_STOP:1;
      uint64_t DBG_TIM7_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBGMCU_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBG_TIM2_STOP:1;
      uint64_t DBG_TIM3_STOP:1;
      uint64_t DBG_TIM4_STOP:1;
      uint64_t DBG_TIM5_STOP:1;
      uint64_t DBG_TIM6_STOP:1;
      uint64_t DBG_TIM7_STOP:1;
      uint64_t DBG_TIM12_STOP:1;
      uint64_t DBG_TIM13_STOP:1;
      uint64_t DBG_TIM14_STOP:1;
      uint64_t reservedSpace0:2;
      uint64_t DBG_WWDG_STOP:1;
      uint64_t DBG_IWDEG_STOP:1;
      uint64_t reservedSpace1:8;
      uint64_t DBG_J2C1_SMBUS_TIMEOUT:1;
      uint64_t DBG_J2C2_SMBUS_TIMEOUT:1;
      uint64_t DBG_J2C3SMBUS_TIMEOUT:1;
      uint64_t reservedSpace2:1;
      uint64_t DBG_CAN1_STOP:1;
      uint64_t DBG_CAN2_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBGMCU_APB1_FZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBG_TIM1_STOP:1;
      uint64_t DBG_TIM8_STOP:1;
      uint64_t reservedSpace0:14;
      uint64_t DBG_TIM9_STOP:1;
      uint64_t DBG_TIM10_STOP:1;
      uint64_t DBG_TIM11_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBGMCU_APB2_FZ;

};

#define DBG (*(volatile struct DBG_tag *) 0xe0042000)

struct DMA2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEIF0:1;
      uint64_t reservedSpace0:1;
      uint64_t DMEIF0:1;
      uint64_t TEIF0:1;
      uint64_t HTIF0:1;
      uint64_t TCIF0:1;
      uint64_t FEIF1:1;
      uint64_t reservedSpace1:1;
      uint64_t DMEIF1:1;
      uint64_t TEIF1:1;
      uint64_t HTIF1:1;
      uint64_t TCIF1:1;
      uint64_t reservedSpace2:4;
      uint64_t FEIF2:1;
      uint64_t reservedSpace3:1;
      uint64_t DMEIF2:1;
      uint64_t TEIF2:1;
      uint64_t HTIF2:1;
      uint64_t TCIF2:1;
      uint64_t FEIF3:1;
      uint64_t reservedSpace4:1;
      uint64_t DMEIF3:1;
      uint64_t TEIF3:1;
      uint64_t HTIF3:1;
      uint64_t TCIF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEIF4:1;
      uint64_t reservedSpace0:1;
      uint64_t DMEIF4:1;
      uint64_t TEIF4:1;
      uint64_t HTIF4:1;
      uint64_t TCIF4:1;
      uint64_t FEIF5:1;
      uint64_t reservedSpace1:1;
      uint64_t DMEIF5:1;
      uint64_t TEIF5:1;
      uint64_t HTIF5:1;
      uint64_t TCIF5:1;
      uint64_t reservedSpace2:4;
      uint64_t FEIF6:1;
      uint64_t reservedSpace3:1;
      uint64_t DMEIF6:1;
      uint64_t TEIF6:1;
      uint64_t HTIF6:1;
      uint64_t TCIF6:1;
      uint64_t FEIF7:1;
      uint64_t reservedSpace4:1;
      uint64_t DMEIF7:1;
      uint64_t TEIF7:1;
      uint64_t HTIF7:1;
      uint64_t TCIF7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFEIF0:1;
      uint64_t reservedSpace0:1;
      uint64_t CDMEIF0:1;
      uint64_t CTEIF0:1;
      uint64_t CHTIF0:1;
      uint64_t CTCIF0:1;
      uint64_t CFEIF1:1;
      uint64_t reservedSpace1:1;
      uint64_t CDMEIF1:1;
      uint64_t CTEIF1:1;
      uint64_t CHTIF1:1;
      uint64_t CTCIF1:1;
      uint64_t reservedSpace2:4;
      uint64_t CFEIF2:1;
      uint64_t reservedSpace3:1;
      uint64_t CDMEIF2:1;
      uint64_t CTEIF2:1;
      uint64_t CHTIF2:1;
      uint64_t CTCIF2:1;
      uint64_t CFEIF3:1;
      uint64_t reservedSpace4:1;
      uint64_t CDMEIF3:1;
      uint64_t CTEIF3:1;
      uint64_t CHTIF3:1;
      uint64_t CTCIF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFEIF4:1;
      uint64_t reservedSpace0:1;
      uint64_t CDMEIF4:1;
      uint64_t CTEIF4:1;
      uint64_t CHTIF4:1;
      uint64_t CTCIF4:1;
      uint64_t CFEIF5:1;
      uint64_t reservedSpace1:1;
      uint64_t CDMEIF5:1;
      uint64_t CTEIF5:1;
      uint64_t CHTIF5:1;
      uint64_t CTCIF5:1;
      uint64_t reservedSpace2:4;
      uint64_t CFEIF6:1;
      uint64_t reservedSpace3:1;
      uint64_t CDMEIF6:1;
      uint64_t CTEIF6:1;
      uint64_t CHTIF6:1;
      uint64_t CTCIF6:1;
      uint64_t CFEIF7:1;
      uint64_t reservedSpace4:1;
      uint64_t CDMEIF7:1;
      uint64_t CTEIF7:1;
      uint64_t CHTIF7:1;
      uint64_t CTCIF7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HIFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t DMEIE:1;
      uint64_t TEIE:1;
      uint64_t HTIE:1;
      uint64_t TCIE:1;
      uint64_t PFCTRL:1;
      uint64_t DIR:2;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PINCOS:1;
      uint64_t PL:2;
      uint64_t DBM:1;
      uint64_t CT:1;
      uint64_t reservedSpace0:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t CHSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0NDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0PAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0M0AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0M1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:2;
      uint64_t DMDIS:1;
      uint64_t FS:3;
      uint64_t reservedSpace0:1;
      uint64_t FEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t DMEIE:1;
      uint64_t TEIE:1;
      uint64_t HTIE:1;
      uint64_t TCIE:1;
      uint64_t PFCTRL:1;
      uint64_t DIR:2;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PINCOS:1;
      uint64_t PL:2;
      uint64_t DBM:1;
      uint64_t CT:1;
      uint64_t ACK:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t CHSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S1CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S1NDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S1PAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S1M0AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S1M1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:2;
      uint64_t DMDIS:1;
      uint64_t FS:3;
      uint64_t reservedSpace0:1;
      uint64_t FEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S1FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t DMEIE:1;
      uint64_t TEIE:1;
      uint64_t HTIE:1;
      uint64_t TCIE:1;
      uint64_t PFCTRL:1;
      uint64_t DIR:2;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PINCOS:1;
      uint64_t PL:2;
      uint64_t DBM:1;
      uint64_t CT:1;
      uint64_t ACK:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t CHSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S2CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S2NDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S2PAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S2M0AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S2M1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:2;
      uint64_t DMDIS:1;
      uint64_t FS:3;
      uint64_t reservedSpace0:1;
      uint64_t FEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S2FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t DMEIE:1;
      uint64_t TEIE:1;
      uint64_t HTIE:1;
      uint64_t TCIE:1;
      uint64_t PFCTRL:1;
      uint64_t DIR:2;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PINCOS:1;
      uint64_t PL:2;
      uint64_t DBM:1;
      uint64_t CT:1;
      uint64_t ACK:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t CHSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S3CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S3NDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S3PAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S3M0AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S3M1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:2;
      uint64_t DMDIS:1;
      uint64_t FS:3;
      uint64_t reservedSpace0:1;
      uint64_t FEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S3FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t DMEIE:1;
      uint64_t TEIE:1;
      uint64_t HTIE:1;
      uint64_t TCIE:1;
      uint64_t PFCTRL:1;
      uint64_t DIR:2;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PINCOS:1;
      uint64_t PL:2;
      uint64_t DBM:1;
      uint64_t CT:1;
      uint64_t ACK:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t CHSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S4CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S4NDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S4PAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S4M0AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S4M1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:2;
      uint64_t DMDIS:1;
      uint64_t FS:3;
      uint64_t reservedSpace0:1;
      uint64_t FEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S4FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t DMEIE:1;
      uint64_t TEIE:1;
      uint64_t HTIE:1;
      uint64_t TCIE:1;
      uint64_t PFCTRL:1;
      uint64_t DIR:2;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PINCOS:1;
      uint64_t PL:2;
      uint64_t DBM:1;
      uint64_t CT:1;
      uint64_t ACK:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t CHSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S5CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S5NDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S5PAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S5M0AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S5M1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:2;
      uint64_t DMDIS:1;
      uint64_t FS:3;
      uint64_t reservedSpace0:1;
      uint64_t FEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S5FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t DMEIE:1;
      uint64_t TEIE:1;
      uint64_t HTIE:1;
      uint64_t TCIE:1;
      uint64_t PFCTRL:1;
      uint64_t DIR:2;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PINCOS:1;
      uint64_t PL:2;
      uint64_t DBM:1;
      uint64_t CT:1;
      uint64_t ACK:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t CHSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S6CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S6NDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S6PAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S6M0AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S6M1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:2;
      uint64_t DMDIS:1;
      uint64_t FS:3;
      uint64_t reservedSpace0:1;
      uint64_t FEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S6FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t DMEIE:1;
      uint64_t TEIE:1;
      uint64_t HTIE:1;
      uint64_t TCIE:1;
      uint64_t PFCTRL:1;
      uint64_t DIR:2;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PINCOS:1;
      uint64_t PL:2;
      uint64_t DBM:1;
      uint64_t CT:1;
      uint64_t ACK:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t CHSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S7CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S7NDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S7PAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S7M0AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S7M1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:2;
      uint64_t DMDIS:1;
      uint64_t FS:3;
      uint64_t reservedSpace0:1;
      uint64_t FEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S7FCR;

};

#define DMA2 (*(volatile struct DMA2_tag *) 0x40026400)

struct DMA1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEIF0:1;
      uint64_t reservedSpace0:1;
      uint64_t DMEIF0:1;
      uint64_t TEIF0:1;
      uint64_t HTIF0:1;
      uint64_t TCIF0:1;
      uint64_t FEIF1:1;
      uint64_t reservedSpace1:1;
      uint64_t DMEIF1:1;
      uint64_t TEIF1:1;
      uint64_t HTIF1:1;
      uint64_t TCIF1:1;
      uint64_t reservedSpace2:4;
      uint64_t FEIF2:1;
      uint64_t reservedSpace3:1;
      uint64_t DMEIF2:1;
      uint64_t TEIF2:1;
      uint64_t HTIF2:1;
      uint64_t TCIF2:1;
      uint64_t FEIF3:1;
      uint64_t reservedSpace4:1;
      uint64_t DMEIF3:1;
      uint64_t TEIF3:1;
      uint64_t HTIF3:1;
      uint64_t TCIF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEIF4:1;
      uint64_t reservedSpace0:1;
      uint64_t DMEIF4:1;
      uint64_t TEIF4:1;
      uint64_t HTIF4:1;
      uint64_t TCIF4:1;
      uint64_t FEIF5:1;
      uint64_t reservedSpace1:1;
      uint64_t DMEIF5:1;
      uint64_t TEIF5:1;
      uint64_t HTIF5:1;
      uint64_t TCIF5:1;
      uint64_t reservedSpace2:4;
      uint64_t FEIF6:1;
      uint64_t reservedSpace3:1;
      uint64_t DMEIF6:1;
      uint64_t TEIF6:1;
      uint64_t HTIF6:1;
      uint64_t TCIF6:1;
      uint64_t FEIF7:1;
      uint64_t reservedSpace4:1;
      uint64_t DMEIF7:1;
      uint64_t TEIF7:1;
      uint64_t HTIF7:1;
      uint64_t TCIF7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFEIF0:1;
      uint64_t reservedSpace0:1;
      uint64_t CDMEIF0:1;
      uint64_t CTEIF0:1;
      uint64_t CHTIF0:1;
      uint64_t CTCIF0:1;
      uint64_t CFEIF1:1;
      uint64_t reservedSpace1:1;
      uint64_t CDMEIF1:1;
      uint64_t CTEIF1:1;
      uint64_t CHTIF1:1;
      uint64_t CTCIF1:1;
      uint64_t reservedSpace2:4;
      uint64_t CFEIF2:1;
      uint64_t reservedSpace3:1;
      uint64_t CDMEIF2:1;
      uint64_t CTEIF2:1;
      uint64_t CHTIF2:1;
      uint64_t CTCIF2:1;
      uint64_t CFEIF3:1;
      uint64_t reservedSpace4:1;
      uint64_t CDMEIF3:1;
      uint64_t CTEIF3:1;
      uint64_t CHTIF3:1;
      uint64_t CTCIF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFEIF4:1;
      uint64_t reservedSpace0:1;
      uint64_t CDMEIF4:1;
      uint64_t CTEIF4:1;
      uint64_t CHTIF4:1;
      uint64_t CTCIF4:1;
      uint64_t CFEIF5:1;
      uint64_t reservedSpace1:1;
      uint64_t CDMEIF5:1;
      uint64_t CTEIF5:1;
      uint64_t CHTIF5:1;
      uint64_t CTCIF5:1;
      uint64_t reservedSpace2:4;
      uint64_t CFEIF6:1;
      uint64_t reservedSpace3:1;
      uint64_t CDMEIF6:1;
      uint64_t CTEIF6:1;
      uint64_t CHTIF6:1;
      uint64_t CTCIF6:1;
      uint64_t CFEIF7:1;
      uint64_t reservedSpace4:1;
      uint64_t CDMEIF7:1;
      uint64_t CTEIF7:1;
      uint64_t CHTIF7:1;
      uint64_t CTCIF7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HIFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t DMEIE:1;
      uint64_t TEIE:1;
      uint64_t HTIE:1;
      uint64_t TCIE:1;
      uint64_t PFCTRL:1;
      uint64_t DIR:2;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PINCOS:1;
      uint64_t PL:2;
      uint64_t DBM:1;
      uint64_t CT:1;
      uint64_t reservedSpace0:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t CHSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0NDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0PAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0M0AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0M1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:2;
      uint64_t DMDIS:1;
      uint64_t FS:3;
      uint64_t reservedSpace0:1;
      uint64_t FEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t DMEIE:1;
      uint64_t TEIE:1;
      uint64_t HTIE:1;
      uint64_t TCIE:1;
      uint64_t PFCTRL:1;
      uint64_t DIR:2;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PINCOS:1;
      uint64_t PL:2;
      uint64_t DBM:1;
      uint64_t CT:1;
      uint64_t ACK:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t CHSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S1CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S1NDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S1PAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S1M0AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S1M1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:2;
      uint64_t DMDIS:1;
      uint64_t FS:3;
      uint64_t reservedSpace0:1;
      uint64_t FEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S1FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t DMEIE:1;
      uint64_t TEIE:1;
      uint64_t HTIE:1;
      uint64_t TCIE:1;
      uint64_t PFCTRL:1;
      uint64_t DIR:2;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PINCOS:1;
      uint64_t PL:2;
      uint64_t DBM:1;
      uint64_t CT:1;
      uint64_t ACK:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t CHSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S2CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S2NDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S2PAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S2M0AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S2M1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:2;
      uint64_t DMDIS:1;
      uint64_t FS:3;
      uint64_t reservedSpace0:1;
      uint64_t FEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S2FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t DMEIE:1;
      uint64_t TEIE:1;
      uint64_t HTIE:1;
      uint64_t TCIE:1;
      uint64_t PFCTRL:1;
      uint64_t DIR:2;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PINCOS:1;
      uint64_t PL:2;
      uint64_t DBM:1;
      uint64_t CT:1;
      uint64_t ACK:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t CHSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S3CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S3NDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S3PAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S3M0AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S3M1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:2;
      uint64_t DMDIS:1;
      uint64_t FS:3;
      uint64_t reservedSpace0:1;
      uint64_t FEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S3FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t DMEIE:1;
      uint64_t TEIE:1;
      uint64_t HTIE:1;
      uint64_t TCIE:1;
      uint64_t PFCTRL:1;
      uint64_t DIR:2;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PINCOS:1;
      uint64_t PL:2;
      uint64_t DBM:1;
      uint64_t CT:1;
      uint64_t ACK:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t CHSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S4CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S4NDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S4PAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S4M0AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S4M1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:2;
      uint64_t DMDIS:1;
      uint64_t FS:3;
      uint64_t reservedSpace0:1;
      uint64_t FEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S4FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t DMEIE:1;
      uint64_t TEIE:1;
      uint64_t HTIE:1;
      uint64_t TCIE:1;
      uint64_t PFCTRL:1;
      uint64_t DIR:2;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PINCOS:1;
      uint64_t PL:2;
      uint64_t DBM:1;
      uint64_t CT:1;
      uint64_t ACK:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t CHSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S5CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S5NDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S5PAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S5M0AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S5M1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:2;
      uint64_t DMDIS:1;
      uint64_t FS:3;
      uint64_t reservedSpace0:1;
      uint64_t FEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S5FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t DMEIE:1;
      uint64_t TEIE:1;
      uint64_t HTIE:1;
      uint64_t TCIE:1;
      uint64_t PFCTRL:1;
      uint64_t DIR:2;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PINCOS:1;
      uint64_t PL:2;
      uint64_t DBM:1;
      uint64_t CT:1;
      uint64_t ACK:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t CHSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S6CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S6NDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S6PAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S6M0AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S6M1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:2;
      uint64_t DMDIS:1;
      uint64_t FS:3;
      uint64_t reservedSpace0:1;
      uint64_t FEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S6FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t DMEIE:1;
      uint64_t TEIE:1;
      uint64_t HTIE:1;
      uint64_t TCIE:1;
      uint64_t PFCTRL:1;
      uint64_t DIR:2;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PINCOS:1;
      uint64_t PL:2;
      uint64_t DBM:1;
      uint64_t CT:1;
      uint64_t ACK:1;
      uint64_t PBURST:2;
      uint64_t MBURST:2;
      uint64_t CHSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S7CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S7NDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S7PAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S7M0AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M1A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S7M1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:2;
      uint64_t DMDIS:1;
      uint64_t FS:3;
      uint64_t reservedSpace0:1;
      uint64_t FEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S7FCR;

};

#define DMA1 (*(volatile struct DMA1_tag *) 0x40026000)

struct RCC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSION:1;
      uint64_t HSIRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t HSITRIM:5;
      uint64_t HSICAL:8;
      uint64_t HSEON:1;
      uint64_t HSERDY:1;
      uint64_t HSEBYP:1;
      uint64_t CSSON:1;
      uint64_t reservedSpace1:4;
      uint64_t PLLON:1;
      uint64_t PLLRDY:1;
      uint64_t PLLI2SON:1;
      uint64_t PLLI2SRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLLM0:1;
      uint64_t PLLM1:1;
      uint64_t PLLM2:1;
      uint64_t PLLM3:1;
      uint64_t PLLM4:1;
      uint64_t PLLM5:1;
      uint64_t PLLN0:1;
      uint64_t PLLN1:1;
      uint64_t PLLN2:1;
      uint64_t PLLN3:1;
      uint64_t PLLN4:1;
      uint64_t PLLN5:1;
      uint64_t PLLN6:1;
      uint64_t PLLN7:1;
      uint64_t PLLN8:1;
      uint64_t reservedSpace0:1;
      uint64_t PLLP0:1;
      uint64_t PLLP1:1;
      uint64_t reservedSpace1:4;
      uint64_t PLLSRC:1;
      uint64_t reservedSpace2:1;
      uint64_t PLLQ0:1;
      uint64_t PLLQ1:1;
      uint64_t PLLQ2:1;
      uint64_t PLLQ3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SW0:1;
      uint64_t SW1:1;
      uint64_t SWS0:1;
      uint64_t SWS1:1;
      uint64_t HPRE:4;
      uint64_t reservedSpace0:2;
      uint64_t PPRE1:3;
      uint64_t PPRE2:3;
      uint64_t RTCPRE:5;
      uint64_t MCO1:2;
      uint64_t I2SSRC:1;
      uint64_t MCO1PRE:3;
      uint64_t MCO2PRE:3;
      uint64_t MCO2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSIRDYF:1;
      uint64_t LSERDYF:1;
      uint64_t HSIRDYF:1;
      uint64_t HSERDYF:1;
      uint64_t PLLRDYF:1;
      uint64_t PLLI2SRDYF:1;
      uint64_t reservedSpace0:1;
      uint64_t CSSF:1;
      uint64_t LSIRDYIE:1;
      uint64_t LSERDYIE:1;
      uint64_t HSIRDYIE:1;
      uint64_t HSERDYIE:1;
      uint64_t PLLRDYIE:1;
      uint64_t PLLI2SRDYIE:1;
      uint64_t reservedSpace1:2;
      uint64_t LSIRDYC:1;
      uint64_t LSERDYC:1;
      uint64_t HSIRDYC:1;
      uint64_t HSERDYC:1;
      uint64_t PLLRDYC:1;
      uint64_t PLLI2SRDYC:1;
      uint64_t reservedSpace2:1;
      uint64_t CSSC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIOARST:1;
      uint64_t GPIOBRST:1;
      uint64_t GPIOCRST:1;
      uint64_t GPIODRST:1;
      uint64_t GPIOERST:1;
      uint64_t GPIOFRST:1;
      uint64_t GPIOGRST:1;
      uint64_t GPIOHRST:1;
      uint64_t GPIOIRST:1;
      uint64_t reservedSpace0:3;
      uint64_t CRCRST:1;
      uint64_t reservedSpace1:8;
      uint64_t DMA1RST:1;
      uint64_t DMA2RST:1;
      uint64_t reservedSpace2:2;
      uint64_t ETHMACRST:1;
      uint64_t reservedSpace3:3;
      uint64_t OTGHSRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB1RSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMIRST:1;
      uint64_t reservedSpace0:5;
      uint64_t RNGRST:1;
      uint64_t OTGFSRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB2RSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSMCRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB3RSTR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM2RST:1;
      uint64_t TIM3RST:1;
      uint64_t TIM4RST:1;
      uint64_t TIM5RST:1;
      uint64_t TIM6RST:1;
      uint64_t TIM7RST:1;
      uint64_t TIM12RST:1;
      uint64_t TIM13RST:1;
      uint64_t TIM14RST:1;
      uint64_t reservedSpace0:2;
      uint64_t WWDGRST:1;
      uint64_t reservedSpace1:2;
      uint64_t SPI2RST:1;
      uint64_t SPI3RST:1;
      uint64_t reservedSpace2:1;
      uint64_t UART2RST:1;
      uint64_t UART3RST:1;
      uint64_t UART4RST:1;
      uint64_t UART5RST:1;
      uint64_t I2C1RST:1;
      uint64_t I2C2RST:1;
      uint64_t I2C3RST:1;
      uint64_t reservedSpace3:1;
      uint64_t CAN1RST:1;
      uint64_t CAN2RST:1;
      uint64_t reservedSpace4:1;
      uint64_t PWRRST:1;
      uint64_t DACRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1RSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM1RST:1;
      uint64_t TIM8RST:1;
      uint64_t reservedSpace0:2;
      uint64_t USART1RST:1;
      uint64_t USART6RST:1;
      uint64_t reservedSpace1:2;
      uint64_t ADCRST:1;
      uint64_t reservedSpace2:2;
      uint64_t SDIORST:1;
      uint64_t SPI1RST:1;
      uint64_t reservedSpace3:1;
      uint64_t SYSCFGRST:1;
      uint64_t reservedSpace4:1;
      uint64_t TIM9RST:1;
      uint64_t TIM10RST:1;
      uint64_t TIM11RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2RSTR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIOAEN:1;
      uint64_t GPIOBEN:1;
      uint64_t GPIOCEN:1;
      uint64_t GPIODEN:1;
      uint64_t GPIOEEN:1;
      uint64_t GPIOFEN:1;
      uint64_t GPIOGEN:1;
      uint64_t GPIOHEN:1;
      uint64_t GPIOIEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CRCEN:1;
      uint64_t reservedSpace1:5;
      uint64_t BKPSRAMEN:1;
      uint64_t reservedSpace2:2;
      uint64_t DMA1EN:1;
      uint64_t DMA2EN:1;
      uint64_t reservedSpace3:2;
      uint64_t ETHMACEN:1;
      uint64_t ETHMACTXEN:1;
      uint64_t ETHMACRXEN:1;
      uint64_t ETHMACPTPEN:1;
      uint64_t OTGHSEN:1;
      uint64_t OTGHSULPIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB1ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMIEN:1;
      uint64_t reservedSpace0:5;
      uint64_t RNGEN:1;
      uint64_t OTGFSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB2ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSMCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB3ENR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM2EN:1;
      uint64_t TIM3EN:1;
      uint64_t TIM4EN:1;
      uint64_t TIM5EN:1;
      uint64_t TIM6EN:1;
      uint64_t TIM7EN:1;
      uint64_t TIM12EN:1;
      uint64_t TIM13EN:1;
      uint64_t TIM14EN:1;
      uint64_t reservedSpace0:2;
      uint64_t WWDGEN:1;
      uint64_t reservedSpace1:2;
      uint64_t SPI2EN:1;
      uint64_t SPI3EN:1;
      uint64_t reservedSpace2:1;
      uint64_t USART2EN:1;
      uint64_t USART3EN:1;
      uint64_t UART4EN:1;
      uint64_t UART5EN:1;
      uint64_t I2C1EN:1;
      uint64_t I2C2EN:1;
      uint64_t I2C3EN:1;
      uint64_t reservedSpace3:1;
      uint64_t CAN1EN:1;
      uint64_t CAN2EN:1;
      uint64_t reservedSpace4:1;
      uint64_t PWREN:1;
      uint64_t DACEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM1EN:1;
      uint64_t TIM8EN:1;
      uint64_t reservedSpace0:2;
      uint64_t USART1EN:1;
      uint64_t USART6EN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADC1EN:1;
      uint64_t ADC2EN:1;
      uint64_t ADC3EN:1;
      uint64_t SDIOEN:1;
      uint64_t SPI1EN:1;
      uint64_t reservedSpace2:1;
      uint64_t SYSCFGEN:1;
      uint64_t reservedSpace3:1;
      uint64_t TIM9EN:1;
      uint64_t TIM10EN:1;
      uint64_t TIM11EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2ENR;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIOALPEN:1;
      uint64_t GPIOBLPEN:1;
      uint64_t GPIOCLPEN:1;
      uint64_t GPIODLPEN:1;
      uint64_t GPIOELPEN:1;
      uint64_t GPIOFLPEN:1;
      uint64_t GPIOGLPEN:1;
      uint64_t GPIOHLPEN:1;
      uint64_t GPIOILPEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CRCLPEN:1;
      uint64_t reservedSpace1:2;
      uint64_t FLITFLPEN:1;
      uint64_t SRAM1LPEN:1;
      uint64_t SRAM2LPEN:1;
      uint64_t BKPSRAMLPEN:1;
      uint64_t reservedSpace2:2;
      uint64_t DMA1LPEN:1;
      uint64_t DMA2LPEN:1;
      uint64_t reservedSpace3:2;
      uint64_t ETHMACLPEN:1;
      uint64_t ETHMACTXLPEN:1;
      uint64_t ETHMACRXLPEN:1;
      uint64_t ETHMACPTPLPEN:1;
      uint64_t OTGHSLPEN:1;
      uint64_t OTGHSULPILPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB1LPENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMILPEN:1;
      uint64_t reservedSpace0:5;
      uint64_t RNGLPEN:1;
      uint64_t OTGFSLPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB2LPENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSMCLPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB3LPENR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM2LPEN:1;
      uint64_t TIM3LPEN:1;
      uint64_t TIM4LPEN:1;
      uint64_t TIM5LPEN:1;
      uint64_t TIM6LPEN:1;
      uint64_t TIM7LPEN:1;
      uint64_t TIM12LPEN:1;
      uint64_t TIM13LPEN:1;
      uint64_t TIM14LPEN:1;
      uint64_t reservedSpace0:2;
      uint64_t WWDGLPEN:1;
      uint64_t reservedSpace1:2;
      uint64_t SPI2LPEN:1;
      uint64_t SPI3LPEN:1;
      uint64_t reservedSpace2:1;
      uint64_t USART2LPEN:1;
      uint64_t USART3LPEN:1;
      uint64_t UART4LPEN:1;
      uint64_t UART5LPEN:1;
      uint64_t I2C1LPEN:1;
      uint64_t I2C2LPEN:1;
      uint64_t I2C3LPEN:1;
      uint64_t reservedSpace3:1;
      uint64_t CAN1LPEN:1;
      uint64_t CAN2LPEN:1;
      uint64_t reservedSpace4:1;
      uint64_t PWRLPEN:1;
      uint64_t DACLPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1LPENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM1LPEN:1;
      uint64_t TIM8LPEN:1;
      uint64_t reservedSpace0:2;
      uint64_t USART1LPEN:1;
      uint64_t USART6LPEN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADC1LPEN:1;
      uint64_t ADC2LPEN:1;
      uint64_t ADC3LPEN:1;
      uint64_t SDIOLPEN:1;
      uint64_t SPI1LPEN:1;
      uint64_t reservedSpace2:1;
      uint64_t SYSCFGLPEN:1;
      uint64_t reservedSpace3:1;
      uint64_t TIM9LPEN:1;
      uint64_t TIM10LPEN:1;
      uint64_t TIM11LPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2LPENR;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSEON:1;
      uint64_t LSERDY:1;
      uint64_t LSEBYP:1;
      uint64_t reservedSpace0:5;
      uint64_t RTCSEL0:1;
      uint64_t RTCSEL1:1;
      uint64_t reservedSpace1:5;
      uint64_t RTCEN:1;
      uint64_t BDRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSION:1;
      uint64_t LSIRDY:1;
      uint64_t reservedSpace0:22;
      uint64_t RMVF:1;
      uint64_t BORRSTF:1;
      uint64_t PADRSTF:1;
      uint64_t PORRSTF:1;
      uint64_t SFTRSTF:1;
      uint64_t WDGRSTF:1;
      uint64_t WWDGRSTF:1;
      uint64_t LPWRRSTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODPER:13;
      uint64_t INCSTEP:15;
      uint64_t reservedSpace0:2;
      uint64_t SPREADSEL:1;
      uint64_t SSCGEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSCGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PLLI2SNx:9;
      uint64_t reservedSpace1:13;
      uint64_t PLLI2SRx:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLI2SCFGR;

};

#define RCC (*(volatile struct RCC_tag *) 0x40023800)

struct GPIOI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODER0:2;
      uint64_t MODER1:2;
      uint64_t MODER2:2;
      uint64_t MODER3:2;
      uint64_t MODER4:2;
      uint64_t MODER5:2;
      uint64_t MODER6:2;
      uint64_t MODER7:2;
      uint64_t MODER8:2;
      uint64_t MODER9:2;
      uint64_t MODER10:2;
      uint64_t MODER11:2;
      uint64_t MODER12:2;
      uint64_t MODER13:2;
      uint64_t MODER14:2;
      uint64_t MODER15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OT0:1;
      uint64_t OT1:1;
      uint64_t OT2:1;
      uint64_t OT3:1;
      uint64_t OT4:1;
      uint64_t OT5:1;
      uint64_t OT6:1;
      uint64_t OT7:1;
      uint64_t OT8:1;
      uint64_t OT9:1;
      uint64_t OT10:1;
      uint64_t OT11:1;
      uint64_t OT12:1;
      uint64_t OT13:1;
      uint64_t OT14:1;
      uint64_t OT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTYPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPEEDR0:2;
      uint64_t OSPEEDR1:2;
      uint64_t OSPEEDR2:2;
      uint64_t OSPEEDR3:2;
      uint64_t OSPEEDR4:2;
      uint64_t OSPEEDR5:2;
      uint64_t OSPEEDR6:2;
      uint64_t OSPEEDR7:2;
      uint64_t OSPEEDR8:2;
      uint64_t OSPEEDR9:2;
      uint64_t OSPEEDR10:2;
      uint64_t OSPEEDR11:2;
      uint64_t OSPEEDR12:2;
      uint64_t OSPEEDR13:2;
      uint64_t OSPEEDR14:2;
      uint64_t OSPEEDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPDR0:2;
      uint64_t PUPDR1:2;
      uint64_t PUPDR2:2;
      uint64_t PUPDR3:2;
      uint64_t PUPDR4:2;
      uint64_t PUPDR5:2;
      uint64_t PUPDR6:2;
      uint64_t PUPDR7:2;
      uint64_t PUPDR8:2;
      uint64_t PUPDR9:2;
      uint64_t PUPDR10:2;
      uint64_t PUPDR11:2;
      uint64_t PUPDR12:2;
      uint64_t PUPDR13:2;
      uint64_t PUPDR14:2;
      uint64_t PUPDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDR0:1;
      uint64_t IDR1:1;
      uint64_t IDR2:1;
      uint64_t IDR3:1;
      uint64_t IDR4:1;
      uint64_t IDR5:1;
      uint64_t IDR6:1;
      uint64_t IDR7:1;
      uint64_t IDR8:1;
      uint64_t IDR9:1;
      uint64_t IDR10:1;
      uint64_t IDR11:1;
      uint64_t IDR12:1;
      uint64_t IDR13:1;
      uint64_t IDR14:1;
      uint64_t IDR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODR0:1;
      uint64_t ODR1:1;
      uint64_t ODR2:1;
      uint64_t ODR3:1;
      uint64_t ODR4:1;
      uint64_t ODR5:1;
      uint64_t ODR6:1;
      uint64_t ODR7:1;
      uint64_t ODR8:1;
      uint64_t ODR9:1;
      uint64_t ODR10:1;
      uint64_t ODR11:1;
      uint64_t ODR12:1;
      uint64_t ODR13:1;
      uint64_t ODR14:1;
      uint64_t ODR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BS0:1;
      uint64_t BS1:1;
      uint64_t BS2:1;
      uint64_t BS3:1;
      uint64_t BS4:1;
      uint64_t BS5:1;
      uint64_t BS6:1;
      uint64_t BS7:1;
      uint64_t BS8:1;
      uint64_t BS9:1;
      uint64_t BS10:1;
      uint64_t BS11:1;
      uint64_t BS12:1;
      uint64_t BS13:1;
      uint64_t BS14:1;
      uint64_t BS15:1;
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCK0:1;
      uint64_t LCK1:1;
      uint64_t LCK2:1;
      uint64_t LCK3:1;
      uint64_t LCK4:1;
      uint64_t LCK5:1;
      uint64_t LCK6:1;
      uint64_t LCK7:1;
      uint64_t LCK8:1;
      uint64_t LCK9:1;
      uint64_t LCK10:1;
      uint64_t LCK11:1;
      uint64_t LCK12:1;
      uint64_t LCK13:1;
      uint64_t LCK14:1;
      uint64_t LCK15:1;
      uint64_t LCKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRL0:4;
      uint64_t AFRL1:4;
      uint64_t AFRL2:4;
      uint64_t AFRL3:4;
      uint64_t AFRL4:4;
      uint64_t AFRL5:4;
      uint64_t AFRL6:4;
      uint64_t AFRL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRH8:4;
      uint64_t AFRH9:4;
      uint64_t AFRH10:4;
      uint64_t AFRH11:4;
      uint64_t AFRH12:4;
      uint64_t AFRH13:4;
      uint64_t AFRH14:4;
      uint64_t AFRH15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

};

#define GPIOI (*(volatile struct GPIOI_tag *) 0x40022000)

struct GPIOH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODER0:2;
      uint64_t MODER1:2;
      uint64_t MODER2:2;
      uint64_t MODER3:2;
      uint64_t MODER4:2;
      uint64_t MODER5:2;
      uint64_t MODER6:2;
      uint64_t MODER7:2;
      uint64_t MODER8:2;
      uint64_t MODER9:2;
      uint64_t MODER10:2;
      uint64_t MODER11:2;
      uint64_t MODER12:2;
      uint64_t MODER13:2;
      uint64_t MODER14:2;
      uint64_t MODER15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OT0:1;
      uint64_t OT1:1;
      uint64_t OT2:1;
      uint64_t OT3:1;
      uint64_t OT4:1;
      uint64_t OT5:1;
      uint64_t OT6:1;
      uint64_t OT7:1;
      uint64_t OT8:1;
      uint64_t OT9:1;
      uint64_t OT10:1;
      uint64_t OT11:1;
      uint64_t OT12:1;
      uint64_t OT13:1;
      uint64_t OT14:1;
      uint64_t OT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTYPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPEEDR0:2;
      uint64_t OSPEEDR1:2;
      uint64_t OSPEEDR2:2;
      uint64_t OSPEEDR3:2;
      uint64_t OSPEEDR4:2;
      uint64_t OSPEEDR5:2;
      uint64_t OSPEEDR6:2;
      uint64_t OSPEEDR7:2;
      uint64_t OSPEEDR8:2;
      uint64_t OSPEEDR9:2;
      uint64_t OSPEEDR10:2;
      uint64_t OSPEEDR11:2;
      uint64_t OSPEEDR12:2;
      uint64_t OSPEEDR13:2;
      uint64_t OSPEEDR14:2;
      uint64_t OSPEEDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPDR0:2;
      uint64_t PUPDR1:2;
      uint64_t PUPDR2:2;
      uint64_t PUPDR3:2;
      uint64_t PUPDR4:2;
      uint64_t PUPDR5:2;
      uint64_t PUPDR6:2;
      uint64_t PUPDR7:2;
      uint64_t PUPDR8:2;
      uint64_t PUPDR9:2;
      uint64_t PUPDR10:2;
      uint64_t PUPDR11:2;
      uint64_t PUPDR12:2;
      uint64_t PUPDR13:2;
      uint64_t PUPDR14:2;
      uint64_t PUPDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDR0:1;
      uint64_t IDR1:1;
      uint64_t IDR2:1;
      uint64_t IDR3:1;
      uint64_t IDR4:1;
      uint64_t IDR5:1;
      uint64_t IDR6:1;
      uint64_t IDR7:1;
      uint64_t IDR8:1;
      uint64_t IDR9:1;
      uint64_t IDR10:1;
      uint64_t IDR11:1;
      uint64_t IDR12:1;
      uint64_t IDR13:1;
      uint64_t IDR14:1;
      uint64_t IDR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODR0:1;
      uint64_t ODR1:1;
      uint64_t ODR2:1;
      uint64_t ODR3:1;
      uint64_t ODR4:1;
      uint64_t ODR5:1;
      uint64_t ODR6:1;
      uint64_t ODR7:1;
      uint64_t ODR8:1;
      uint64_t ODR9:1;
      uint64_t ODR10:1;
      uint64_t ODR11:1;
      uint64_t ODR12:1;
      uint64_t ODR13:1;
      uint64_t ODR14:1;
      uint64_t ODR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BS0:1;
      uint64_t BS1:1;
      uint64_t BS2:1;
      uint64_t BS3:1;
      uint64_t BS4:1;
      uint64_t BS5:1;
      uint64_t BS6:1;
      uint64_t BS7:1;
      uint64_t BS8:1;
      uint64_t BS9:1;
      uint64_t BS10:1;
      uint64_t BS11:1;
      uint64_t BS12:1;
      uint64_t BS13:1;
      uint64_t BS14:1;
      uint64_t BS15:1;
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCK0:1;
      uint64_t LCK1:1;
      uint64_t LCK2:1;
      uint64_t LCK3:1;
      uint64_t LCK4:1;
      uint64_t LCK5:1;
      uint64_t LCK6:1;
      uint64_t LCK7:1;
      uint64_t LCK8:1;
      uint64_t LCK9:1;
      uint64_t LCK10:1;
      uint64_t LCK11:1;
      uint64_t LCK12:1;
      uint64_t LCK13:1;
      uint64_t LCK14:1;
      uint64_t LCK15:1;
      uint64_t LCKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRL0:4;
      uint64_t AFRL1:4;
      uint64_t AFRL2:4;
      uint64_t AFRL3:4;
      uint64_t AFRL4:4;
      uint64_t AFRL5:4;
      uint64_t AFRL6:4;
      uint64_t AFRL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRH8:4;
      uint64_t AFRH9:4;
      uint64_t AFRH10:4;
      uint64_t AFRH11:4;
      uint64_t AFRH12:4;
      uint64_t AFRH13:4;
      uint64_t AFRH14:4;
      uint64_t AFRH15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

};

#define GPIOH (*(volatile struct GPIOH_tag *) 0x40021c00)

struct GPIOG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODER0:2;
      uint64_t MODER1:2;
      uint64_t MODER2:2;
      uint64_t MODER3:2;
      uint64_t MODER4:2;
      uint64_t MODER5:2;
      uint64_t MODER6:2;
      uint64_t MODER7:2;
      uint64_t MODER8:2;
      uint64_t MODER9:2;
      uint64_t MODER10:2;
      uint64_t MODER11:2;
      uint64_t MODER12:2;
      uint64_t MODER13:2;
      uint64_t MODER14:2;
      uint64_t MODER15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OT0:1;
      uint64_t OT1:1;
      uint64_t OT2:1;
      uint64_t OT3:1;
      uint64_t OT4:1;
      uint64_t OT5:1;
      uint64_t OT6:1;
      uint64_t OT7:1;
      uint64_t OT8:1;
      uint64_t OT9:1;
      uint64_t OT10:1;
      uint64_t OT11:1;
      uint64_t OT12:1;
      uint64_t OT13:1;
      uint64_t OT14:1;
      uint64_t OT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTYPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPEEDR0:2;
      uint64_t OSPEEDR1:2;
      uint64_t OSPEEDR2:2;
      uint64_t OSPEEDR3:2;
      uint64_t OSPEEDR4:2;
      uint64_t OSPEEDR5:2;
      uint64_t OSPEEDR6:2;
      uint64_t OSPEEDR7:2;
      uint64_t OSPEEDR8:2;
      uint64_t OSPEEDR9:2;
      uint64_t OSPEEDR10:2;
      uint64_t OSPEEDR11:2;
      uint64_t OSPEEDR12:2;
      uint64_t OSPEEDR13:2;
      uint64_t OSPEEDR14:2;
      uint64_t OSPEEDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPDR0:2;
      uint64_t PUPDR1:2;
      uint64_t PUPDR2:2;
      uint64_t PUPDR3:2;
      uint64_t PUPDR4:2;
      uint64_t PUPDR5:2;
      uint64_t PUPDR6:2;
      uint64_t PUPDR7:2;
      uint64_t PUPDR8:2;
      uint64_t PUPDR9:2;
      uint64_t PUPDR10:2;
      uint64_t PUPDR11:2;
      uint64_t PUPDR12:2;
      uint64_t PUPDR13:2;
      uint64_t PUPDR14:2;
      uint64_t PUPDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDR0:1;
      uint64_t IDR1:1;
      uint64_t IDR2:1;
      uint64_t IDR3:1;
      uint64_t IDR4:1;
      uint64_t IDR5:1;
      uint64_t IDR6:1;
      uint64_t IDR7:1;
      uint64_t IDR8:1;
      uint64_t IDR9:1;
      uint64_t IDR10:1;
      uint64_t IDR11:1;
      uint64_t IDR12:1;
      uint64_t IDR13:1;
      uint64_t IDR14:1;
      uint64_t IDR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODR0:1;
      uint64_t ODR1:1;
      uint64_t ODR2:1;
      uint64_t ODR3:1;
      uint64_t ODR4:1;
      uint64_t ODR5:1;
      uint64_t ODR6:1;
      uint64_t ODR7:1;
      uint64_t ODR8:1;
      uint64_t ODR9:1;
      uint64_t ODR10:1;
      uint64_t ODR11:1;
      uint64_t ODR12:1;
      uint64_t ODR13:1;
      uint64_t ODR14:1;
      uint64_t ODR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BS0:1;
      uint64_t BS1:1;
      uint64_t BS2:1;
      uint64_t BS3:1;
      uint64_t BS4:1;
      uint64_t BS5:1;
      uint64_t BS6:1;
      uint64_t BS7:1;
      uint64_t BS8:1;
      uint64_t BS9:1;
      uint64_t BS10:1;
      uint64_t BS11:1;
      uint64_t BS12:1;
      uint64_t BS13:1;
      uint64_t BS14:1;
      uint64_t BS15:1;
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCK0:1;
      uint64_t LCK1:1;
      uint64_t LCK2:1;
      uint64_t LCK3:1;
      uint64_t LCK4:1;
      uint64_t LCK5:1;
      uint64_t LCK6:1;
      uint64_t LCK7:1;
      uint64_t LCK8:1;
      uint64_t LCK9:1;
      uint64_t LCK10:1;
      uint64_t LCK11:1;
      uint64_t LCK12:1;
      uint64_t LCK13:1;
      uint64_t LCK14:1;
      uint64_t LCK15:1;
      uint64_t LCKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRL0:4;
      uint64_t AFRL1:4;
      uint64_t AFRL2:4;
      uint64_t AFRL3:4;
      uint64_t AFRL4:4;
      uint64_t AFRL5:4;
      uint64_t AFRL6:4;
      uint64_t AFRL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRH8:4;
      uint64_t AFRH9:4;
      uint64_t AFRH10:4;
      uint64_t AFRH11:4;
      uint64_t AFRH12:4;
      uint64_t AFRH13:4;
      uint64_t AFRH14:4;
      uint64_t AFRH15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

};

#define GPIOG (*(volatile struct GPIOG_tag *) 0x40021800)

struct GPIOF_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODER0:2;
      uint64_t MODER1:2;
      uint64_t MODER2:2;
      uint64_t MODER3:2;
      uint64_t MODER4:2;
      uint64_t MODER5:2;
      uint64_t MODER6:2;
      uint64_t MODER7:2;
      uint64_t MODER8:2;
      uint64_t MODER9:2;
      uint64_t MODER10:2;
      uint64_t MODER11:2;
      uint64_t MODER12:2;
      uint64_t MODER13:2;
      uint64_t MODER14:2;
      uint64_t MODER15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OT0:1;
      uint64_t OT1:1;
      uint64_t OT2:1;
      uint64_t OT3:1;
      uint64_t OT4:1;
      uint64_t OT5:1;
      uint64_t OT6:1;
      uint64_t OT7:1;
      uint64_t OT8:1;
      uint64_t OT9:1;
      uint64_t OT10:1;
      uint64_t OT11:1;
      uint64_t OT12:1;
      uint64_t OT13:1;
      uint64_t OT14:1;
      uint64_t OT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTYPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPEEDR0:2;
      uint64_t OSPEEDR1:2;
      uint64_t OSPEEDR2:2;
      uint64_t OSPEEDR3:2;
      uint64_t OSPEEDR4:2;
      uint64_t OSPEEDR5:2;
      uint64_t OSPEEDR6:2;
      uint64_t OSPEEDR7:2;
      uint64_t OSPEEDR8:2;
      uint64_t OSPEEDR9:2;
      uint64_t OSPEEDR10:2;
      uint64_t OSPEEDR11:2;
      uint64_t OSPEEDR12:2;
      uint64_t OSPEEDR13:2;
      uint64_t OSPEEDR14:2;
      uint64_t OSPEEDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPDR0:2;
      uint64_t PUPDR1:2;
      uint64_t PUPDR2:2;
      uint64_t PUPDR3:2;
      uint64_t PUPDR4:2;
      uint64_t PUPDR5:2;
      uint64_t PUPDR6:2;
      uint64_t PUPDR7:2;
      uint64_t PUPDR8:2;
      uint64_t PUPDR9:2;
      uint64_t PUPDR10:2;
      uint64_t PUPDR11:2;
      uint64_t PUPDR12:2;
      uint64_t PUPDR13:2;
      uint64_t PUPDR14:2;
      uint64_t PUPDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDR0:1;
      uint64_t IDR1:1;
      uint64_t IDR2:1;
      uint64_t IDR3:1;
      uint64_t IDR4:1;
      uint64_t IDR5:1;
      uint64_t IDR6:1;
      uint64_t IDR7:1;
      uint64_t IDR8:1;
      uint64_t IDR9:1;
      uint64_t IDR10:1;
      uint64_t IDR11:1;
      uint64_t IDR12:1;
      uint64_t IDR13:1;
      uint64_t IDR14:1;
      uint64_t IDR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODR0:1;
      uint64_t ODR1:1;
      uint64_t ODR2:1;
      uint64_t ODR3:1;
      uint64_t ODR4:1;
      uint64_t ODR5:1;
      uint64_t ODR6:1;
      uint64_t ODR7:1;
      uint64_t ODR8:1;
      uint64_t ODR9:1;
      uint64_t ODR10:1;
      uint64_t ODR11:1;
      uint64_t ODR12:1;
      uint64_t ODR13:1;
      uint64_t ODR14:1;
      uint64_t ODR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BS0:1;
      uint64_t BS1:1;
      uint64_t BS2:1;
      uint64_t BS3:1;
      uint64_t BS4:1;
      uint64_t BS5:1;
      uint64_t BS6:1;
      uint64_t BS7:1;
      uint64_t BS8:1;
      uint64_t BS9:1;
      uint64_t BS10:1;
      uint64_t BS11:1;
      uint64_t BS12:1;
      uint64_t BS13:1;
      uint64_t BS14:1;
      uint64_t BS15:1;
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCK0:1;
      uint64_t LCK1:1;
      uint64_t LCK2:1;
      uint64_t LCK3:1;
      uint64_t LCK4:1;
      uint64_t LCK5:1;
      uint64_t LCK6:1;
      uint64_t LCK7:1;
      uint64_t LCK8:1;
      uint64_t LCK9:1;
      uint64_t LCK10:1;
      uint64_t LCK11:1;
      uint64_t LCK12:1;
      uint64_t LCK13:1;
      uint64_t LCK14:1;
      uint64_t LCK15:1;
      uint64_t LCKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRL0:4;
      uint64_t AFRL1:4;
      uint64_t AFRL2:4;
      uint64_t AFRL3:4;
      uint64_t AFRL4:4;
      uint64_t AFRL5:4;
      uint64_t AFRL6:4;
      uint64_t AFRL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRH8:4;
      uint64_t AFRH9:4;
      uint64_t AFRH10:4;
      uint64_t AFRH11:4;
      uint64_t AFRH12:4;
      uint64_t AFRH13:4;
      uint64_t AFRH14:4;
      uint64_t AFRH15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

};

#define GPIOF (*(volatile struct GPIOF_tag *) 0x40021400)

struct GPIOE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODER0:2;
      uint64_t MODER1:2;
      uint64_t MODER2:2;
      uint64_t MODER3:2;
      uint64_t MODER4:2;
      uint64_t MODER5:2;
      uint64_t MODER6:2;
      uint64_t MODER7:2;
      uint64_t MODER8:2;
      uint64_t MODER9:2;
      uint64_t MODER10:2;
      uint64_t MODER11:2;
      uint64_t MODER12:2;
      uint64_t MODER13:2;
      uint64_t MODER14:2;
      uint64_t MODER15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OT0:1;
      uint64_t OT1:1;
      uint64_t OT2:1;
      uint64_t OT3:1;
      uint64_t OT4:1;
      uint64_t OT5:1;
      uint64_t OT6:1;
      uint64_t OT7:1;
      uint64_t OT8:1;
      uint64_t OT9:1;
      uint64_t OT10:1;
      uint64_t OT11:1;
      uint64_t OT12:1;
      uint64_t OT13:1;
      uint64_t OT14:1;
      uint64_t OT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTYPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPEEDR0:2;
      uint64_t OSPEEDR1:2;
      uint64_t OSPEEDR2:2;
      uint64_t OSPEEDR3:2;
      uint64_t OSPEEDR4:2;
      uint64_t OSPEEDR5:2;
      uint64_t OSPEEDR6:2;
      uint64_t OSPEEDR7:2;
      uint64_t OSPEEDR8:2;
      uint64_t OSPEEDR9:2;
      uint64_t OSPEEDR10:2;
      uint64_t OSPEEDR11:2;
      uint64_t OSPEEDR12:2;
      uint64_t OSPEEDR13:2;
      uint64_t OSPEEDR14:2;
      uint64_t OSPEEDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPDR0:2;
      uint64_t PUPDR1:2;
      uint64_t PUPDR2:2;
      uint64_t PUPDR3:2;
      uint64_t PUPDR4:2;
      uint64_t PUPDR5:2;
      uint64_t PUPDR6:2;
      uint64_t PUPDR7:2;
      uint64_t PUPDR8:2;
      uint64_t PUPDR9:2;
      uint64_t PUPDR10:2;
      uint64_t PUPDR11:2;
      uint64_t PUPDR12:2;
      uint64_t PUPDR13:2;
      uint64_t PUPDR14:2;
      uint64_t PUPDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDR0:1;
      uint64_t IDR1:1;
      uint64_t IDR2:1;
      uint64_t IDR3:1;
      uint64_t IDR4:1;
      uint64_t IDR5:1;
      uint64_t IDR6:1;
      uint64_t IDR7:1;
      uint64_t IDR8:1;
      uint64_t IDR9:1;
      uint64_t IDR10:1;
      uint64_t IDR11:1;
      uint64_t IDR12:1;
      uint64_t IDR13:1;
      uint64_t IDR14:1;
      uint64_t IDR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODR0:1;
      uint64_t ODR1:1;
      uint64_t ODR2:1;
      uint64_t ODR3:1;
      uint64_t ODR4:1;
      uint64_t ODR5:1;
      uint64_t ODR6:1;
      uint64_t ODR7:1;
      uint64_t ODR8:1;
      uint64_t ODR9:1;
      uint64_t ODR10:1;
      uint64_t ODR11:1;
      uint64_t ODR12:1;
      uint64_t ODR13:1;
      uint64_t ODR14:1;
      uint64_t ODR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BS0:1;
      uint64_t BS1:1;
      uint64_t BS2:1;
      uint64_t BS3:1;
      uint64_t BS4:1;
      uint64_t BS5:1;
      uint64_t BS6:1;
      uint64_t BS7:1;
      uint64_t BS8:1;
      uint64_t BS9:1;
      uint64_t BS10:1;
      uint64_t BS11:1;
      uint64_t BS12:1;
      uint64_t BS13:1;
      uint64_t BS14:1;
      uint64_t BS15:1;
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCK0:1;
      uint64_t LCK1:1;
      uint64_t LCK2:1;
      uint64_t LCK3:1;
      uint64_t LCK4:1;
      uint64_t LCK5:1;
      uint64_t LCK6:1;
      uint64_t LCK7:1;
      uint64_t LCK8:1;
      uint64_t LCK9:1;
      uint64_t LCK10:1;
      uint64_t LCK11:1;
      uint64_t LCK12:1;
      uint64_t LCK13:1;
      uint64_t LCK14:1;
      uint64_t LCK15:1;
      uint64_t LCKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRL0:4;
      uint64_t AFRL1:4;
      uint64_t AFRL2:4;
      uint64_t AFRL3:4;
      uint64_t AFRL4:4;
      uint64_t AFRL5:4;
      uint64_t AFRL6:4;
      uint64_t AFRL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRH8:4;
      uint64_t AFRH9:4;
      uint64_t AFRH10:4;
      uint64_t AFRH11:4;
      uint64_t AFRH12:4;
      uint64_t AFRH13:4;
      uint64_t AFRH14:4;
      uint64_t AFRH15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

};

#define GPIOE (*(volatile struct GPIOE_tag *) 0x40021000)

struct GPIOD_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODER0:2;
      uint64_t MODER1:2;
      uint64_t MODER2:2;
      uint64_t MODER3:2;
      uint64_t MODER4:2;
      uint64_t MODER5:2;
      uint64_t MODER6:2;
      uint64_t MODER7:2;
      uint64_t MODER8:2;
      uint64_t MODER9:2;
      uint64_t MODER10:2;
      uint64_t MODER11:2;
      uint64_t MODER12:2;
      uint64_t MODER13:2;
      uint64_t MODER14:2;
      uint64_t MODER15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OT0:1;
      uint64_t OT1:1;
      uint64_t OT2:1;
      uint64_t OT3:1;
      uint64_t OT4:1;
      uint64_t OT5:1;
      uint64_t OT6:1;
      uint64_t OT7:1;
      uint64_t OT8:1;
      uint64_t OT9:1;
      uint64_t OT10:1;
      uint64_t OT11:1;
      uint64_t OT12:1;
      uint64_t OT13:1;
      uint64_t OT14:1;
      uint64_t OT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTYPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPEEDR0:2;
      uint64_t OSPEEDR1:2;
      uint64_t OSPEEDR2:2;
      uint64_t OSPEEDR3:2;
      uint64_t OSPEEDR4:2;
      uint64_t OSPEEDR5:2;
      uint64_t OSPEEDR6:2;
      uint64_t OSPEEDR7:2;
      uint64_t OSPEEDR8:2;
      uint64_t OSPEEDR9:2;
      uint64_t OSPEEDR10:2;
      uint64_t OSPEEDR11:2;
      uint64_t OSPEEDR12:2;
      uint64_t OSPEEDR13:2;
      uint64_t OSPEEDR14:2;
      uint64_t OSPEEDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPDR0:2;
      uint64_t PUPDR1:2;
      uint64_t PUPDR2:2;
      uint64_t PUPDR3:2;
      uint64_t PUPDR4:2;
      uint64_t PUPDR5:2;
      uint64_t PUPDR6:2;
      uint64_t PUPDR7:2;
      uint64_t PUPDR8:2;
      uint64_t PUPDR9:2;
      uint64_t PUPDR10:2;
      uint64_t PUPDR11:2;
      uint64_t PUPDR12:2;
      uint64_t PUPDR13:2;
      uint64_t PUPDR14:2;
      uint64_t PUPDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDR0:1;
      uint64_t IDR1:1;
      uint64_t IDR2:1;
      uint64_t IDR3:1;
      uint64_t IDR4:1;
      uint64_t IDR5:1;
      uint64_t IDR6:1;
      uint64_t IDR7:1;
      uint64_t IDR8:1;
      uint64_t IDR9:1;
      uint64_t IDR10:1;
      uint64_t IDR11:1;
      uint64_t IDR12:1;
      uint64_t IDR13:1;
      uint64_t IDR14:1;
      uint64_t IDR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODR0:1;
      uint64_t ODR1:1;
      uint64_t ODR2:1;
      uint64_t ODR3:1;
      uint64_t ODR4:1;
      uint64_t ODR5:1;
      uint64_t ODR6:1;
      uint64_t ODR7:1;
      uint64_t ODR8:1;
      uint64_t ODR9:1;
      uint64_t ODR10:1;
      uint64_t ODR11:1;
      uint64_t ODR12:1;
      uint64_t ODR13:1;
      uint64_t ODR14:1;
      uint64_t ODR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BS0:1;
      uint64_t BS1:1;
      uint64_t BS2:1;
      uint64_t BS3:1;
      uint64_t BS4:1;
      uint64_t BS5:1;
      uint64_t BS6:1;
      uint64_t BS7:1;
      uint64_t BS8:1;
      uint64_t BS9:1;
      uint64_t BS10:1;
      uint64_t BS11:1;
      uint64_t BS12:1;
      uint64_t BS13:1;
      uint64_t BS14:1;
      uint64_t BS15:1;
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCK0:1;
      uint64_t LCK1:1;
      uint64_t LCK2:1;
      uint64_t LCK3:1;
      uint64_t LCK4:1;
      uint64_t LCK5:1;
      uint64_t LCK6:1;
      uint64_t LCK7:1;
      uint64_t LCK8:1;
      uint64_t LCK9:1;
      uint64_t LCK10:1;
      uint64_t LCK11:1;
      uint64_t LCK12:1;
      uint64_t LCK13:1;
      uint64_t LCK14:1;
      uint64_t LCK15:1;
      uint64_t LCKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRL0:4;
      uint64_t AFRL1:4;
      uint64_t AFRL2:4;
      uint64_t AFRL3:4;
      uint64_t AFRL4:4;
      uint64_t AFRL5:4;
      uint64_t AFRL6:4;
      uint64_t AFRL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRH8:4;
      uint64_t AFRH9:4;
      uint64_t AFRH10:4;
      uint64_t AFRH11:4;
      uint64_t AFRH12:4;
      uint64_t AFRH13:4;
      uint64_t AFRH14:4;
      uint64_t AFRH15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

};

#define GPIOD (*(volatile struct GPIOD_tag *) 0x40020c00)

struct GPIOC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODER0:2;
      uint64_t MODER1:2;
      uint64_t MODER2:2;
      uint64_t MODER3:2;
      uint64_t MODER4:2;
      uint64_t MODER5:2;
      uint64_t MODER6:2;
      uint64_t MODER7:2;
      uint64_t MODER8:2;
      uint64_t MODER9:2;
      uint64_t MODER10:2;
      uint64_t MODER11:2;
      uint64_t MODER12:2;
      uint64_t MODER13:2;
      uint64_t MODER14:2;
      uint64_t MODER15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OT0:1;
      uint64_t OT1:1;
      uint64_t OT2:1;
      uint64_t OT3:1;
      uint64_t OT4:1;
      uint64_t OT5:1;
      uint64_t OT6:1;
      uint64_t OT7:1;
      uint64_t OT8:1;
      uint64_t OT9:1;
      uint64_t OT10:1;
      uint64_t OT11:1;
      uint64_t OT12:1;
      uint64_t OT13:1;
      uint64_t OT14:1;
      uint64_t OT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTYPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPEEDR0:2;
      uint64_t OSPEEDR1:2;
      uint64_t OSPEEDR2:2;
      uint64_t OSPEEDR3:2;
      uint64_t OSPEEDR4:2;
      uint64_t OSPEEDR5:2;
      uint64_t OSPEEDR6:2;
      uint64_t OSPEEDR7:2;
      uint64_t OSPEEDR8:2;
      uint64_t OSPEEDR9:2;
      uint64_t OSPEEDR10:2;
      uint64_t OSPEEDR11:2;
      uint64_t OSPEEDR12:2;
      uint64_t OSPEEDR13:2;
      uint64_t OSPEEDR14:2;
      uint64_t OSPEEDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPDR0:2;
      uint64_t PUPDR1:2;
      uint64_t PUPDR2:2;
      uint64_t PUPDR3:2;
      uint64_t PUPDR4:2;
      uint64_t PUPDR5:2;
      uint64_t PUPDR6:2;
      uint64_t PUPDR7:2;
      uint64_t PUPDR8:2;
      uint64_t PUPDR9:2;
      uint64_t PUPDR10:2;
      uint64_t PUPDR11:2;
      uint64_t PUPDR12:2;
      uint64_t PUPDR13:2;
      uint64_t PUPDR14:2;
      uint64_t PUPDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDR0:1;
      uint64_t IDR1:1;
      uint64_t IDR2:1;
      uint64_t IDR3:1;
      uint64_t IDR4:1;
      uint64_t IDR5:1;
      uint64_t IDR6:1;
      uint64_t IDR7:1;
      uint64_t IDR8:1;
      uint64_t IDR9:1;
      uint64_t IDR10:1;
      uint64_t IDR11:1;
      uint64_t IDR12:1;
      uint64_t IDR13:1;
      uint64_t IDR14:1;
      uint64_t IDR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODR0:1;
      uint64_t ODR1:1;
      uint64_t ODR2:1;
      uint64_t ODR3:1;
      uint64_t ODR4:1;
      uint64_t ODR5:1;
      uint64_t ODR6:1;
      uint64_t ODR7:1;
      uint64_t ODR8:1;
      uint64_t ODR9:1;
      uint64_t ODR10:1;
      uint64_t ODR11:1;
      uint64_t ODR12:1;
      uint64_t ODR13:1;
      uint64_t ODR14:1;
      uint64_t ODR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BS0:1;
      uint64_t BS1:1;
      uint64_t BS2:1;
      uint64_t BS3:1;
      uint64_t BS4:1;
      uint64_t BS5:1;
      uint64_t BS6:1;
      uint64_t BS7:1;
      uint64_t BS8:1;
      uint64_t BS9:1;
      uint64_t BS10:1;
      uint64_t BS11:1;
      uint64_t BS12:1;
      uint64_t BS13:1;
      uint64_t BS14:1;
      uint64_t BS15:1;
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCK0:1;
      uint64_t LCK1:1;
      uint64_t LCK2:1;
      uint64_t LCK3:1;
      uint64_t LCK4:1;
      uint64_t LCK5:1;
      uint64_t LCK6:1;
      uint64_t LCK7:1;
      uint64_t LCK8:1;
      uint64_t LCK9:1;
      uint64_t LCK10:1;
      uint64_t LCK11:1;
      uint64_t LCK12:1;
      uint64_t LCK13:1;
      uint64_t LCK14:1;
      uint64_t LCK15:1;
      uint64_t LCKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRL0:4;
      uint64_t AFRL1:4;
      uint64_t AFRL2:4;
      uint64_t AFRL3:4;
      uint64_t AFRL4:4;
      uint64_t AFRL5:4;
      uint64_t AFRL6:4;
      uint64_t AFRL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRH8:4;
      uint64_t AFRH9:4;
      uint64_t AFRH10:4;
      uint64_t AFRH11:4;
      uint64_t AFRH12:4;
      uint64_t AFRH13:4;
      uint64_t AFRH14:4;
      uint64_t AFRH15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

};

#define GPIOC (*(volatile struct GPIOC_tag *) 0x40020800)

struct GPIOB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODER0:2;
      uint64_t MODER1:2;
      uint64_t MODER2:2;
      uint64_t MODER3:2;
      uint64_t MODER4:2;
      uint64_t MODER5:2;
      uint64_t MODER6:2;
      uint64_t MODER7:2;
      uint64_t MODER8:2;
      uint64_t MODER9:2;
      uint64_t MODER10:2;
      uint64_t MODER11:2;
      uint64_t MODER12:2;
      uint64_t MODER13:2;
      uint64_t MODER14:2;
      uint64_t MODER15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OT0:1;
      uint64_t OT1:1;
      uint64_t OT2:1;
      uint64_t OT3:1;
      uint64_t OT4:1;
      uint64_t OT5:1;
      uint64_t OT6:1;
      uint64_t OT7:1;
      uint64_t OT8:1;
      uint64_t OT9:1;
      uint64_t OT10:1;
      uint64_t OT11:1;
      uint64_t OT12:1;
      uint64_t OT13:1;
      uint64_t OT14:1;
      uint64_t OT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTYPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPEEDR0:2;
      uint64_t OSPEEDR1:2;
      uint64_t OSPEEDR2:2;
      uint64_t OSPEEDR3:2;
      uint64_t OSPEEDR4:2;
      uint64_t OSPEEDR5:2;
      uint64_t OSPEEDR6:2;
      uint64_t OSPEEDR7:2;
      uint64_t OSPEEDR8:2;
      uint64_t OSPEEDR9:2;
      uint64_t OSPEEDR10:2;
      uint64_t OSPEEDR11:2;
      uint64_t OSPEEDR12:2;
      uint64_t OSPEEDR13:2;
      uint64_t OSPEEDR14:2;
      uint64_t OSPEEDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPDR0:2;
      uint64_t PUPDR1:2;
      uint64_t PUPDR2:2;
      uint64_t PUPDR3:2;
      uint64_t PUPDR4:2;
      uint64_t PUPDR5:2;
      uint64_t PUPDR6:2;
      uint64_t PUPDR7:2;
      uint64_t PUPDR8:2;
      uint64_t PUPDR9:2;
      uint64_t PUPDR10:2;
      uint64_t PUPDR11:2;
      uint64_t PUPDR12:2;
      uint64_t PUPDR13:2;
      uint64_t PUPDR14:2;
      uint64_t PUPDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDR0:1;
      uint64_t IDR1:1;
      uint64_t IDR2:1;
      uint64_t IDR3:1;
      uint64_t IDR4:1;
      uint64_t IDR5:1;
      uint64_t IDR6:1;
      uint64_t IDR7:1;
      uint64_t IDR8:1;
      uint64_t IDR9:1;
      uint64_t IDR10:1;
      uint64_t IDR11:1;
      uint64_t IDR12:1;
      uint64_t IDR13:1;
      uint64_t IDR14:1;
      uint64_t IDR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODR0:1;
      uint64_t ODR1:1;
      uint64_t ODR2:1;
      uint64_t ODR3:1;
      uint64_t ODR4:1;
      uint64_t ODR5:1;
      uint64_t ODR6:1;
      uint64_t ODR7:1;
      uint64_t ODR8:1;
      uint64_t ODR9:1;
      uint64_t ODR10:1;
      uint64_t ODR11:1;
      uint64_t ODR12:1;
      uint64_t ODR13:1;
      uint64_t ODR14:1;
      uint64_t ODR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BS0:1;
      uint64_t BS1:1;
      uint64_t BS2:1;
      uint64_t BS3:1;
      uint64_t BS4:1;
      uint64_t BS5:1;
      uint64_t BS6:1;
      uint64_t BS7:1;
      uint64_t BS8:1;
      uint64_t BS9:1;
      uint64_t BS10:1;
      uint64_t BS11:1;
      uint64_t BS12:1;
      uint64_t BS13:1;
      uint64_t BS14:1;
      uint64_t BS15:1;
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCK0:1;
      uint64_t LCK1:1;
      uint64_t LCK2:1;
      uint64_t LCK3:1;
      uint64_t LCK4:1;
      uint64_t LCK5:1;
      uint64_t LCK6:1;
      uint64_t LCK7:1;
      uint64_t LCK8:1;
      uint64_t LCK9:1;
      uint64_t LCK10:1;
      uint64_t LCK11:1;
      uint64_t LCK12:1;
      uint64_t LCK13:1;
      uint64_t LCK14:1;
      uint64_t LCK15:1;
      uint64_t LCKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRL0:4;
      uint64_t AFRL1:4;
      uint64_t AFRL2:4;
      uint64_t AFRL3:4;
      uint64_t AFRL4:4;
      uint64_t AFRL5:4;
      uint64_t AFRL6:4;
      uint64_t AFRL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRH8:4;
      uint64_t AFRH9:4;
      uint64_t AFRH10:4;
      uint64_t AFRH11:4;
      uint64_t AFRH12:4;
      uint64_t AFRH13:4;
      uint64_t AFRH14:4;
      uint64_t AFRH15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

};

#define GPIOB (*(volatile struct GPIOB_tag *) 0x40020400)

struct GPIOA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODER0:2;
      uint64_t MODER1:2;
      uint64_t MODER2:2;
      uint64_t MODER3:2;
      uint64_t MODER4:2;
      uint64_t MODER5:2;
      uint64_t MODER6:2;
      uint64_t MODER7:2;
      uint64_t MODER8:2;
      uint64_t MODER9:2;
      uint64_t MODER10:2;
      uint64_t MODER11:2;
      uint64_t MODER12:2;
      uint64_t MODER13:2;
      uint64_t MODER14:2;
      uint64_t MODER15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OT0:1;
      uint64_t OT1:1;
      uint64_t OT2:1;
      uint64_t OT3:1;
      uint64_t OT4:1;
      uint64_t OT5:1;
      uint64_t OT6:1;
      uint64_t OT7:1;
      uint64_t OT8:1;
      uint64_t OT9:1;
      uint64_t OT10:1;
      uint64_t OT11:1;
      uint64_t OT12:1;
      uint64_t OT13:1;
      uint64_t OT14:1;
      uint64_t OT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTYPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPEEDR0:2;
      uint64_t OSPEEDR1:2;
      uint64_t OSPEEDR2:2;
      uint64_t OSPEEDR3:2;
      uint64_t OSPEEDR4:2;
      uint64_t OSPEEDR5:2;
      uint64_t OSPEEDR6:2;
      uint64_t OSPEEDR7:2;
      uint64_t OSPEEDR8:2;
      uint64_t OSPEEDR9:2;
      uint64_t OSPEEDR10:2;
      uint64_t OSPEEDR11:2;
      uint64_t OSPEEDR12:2;
      uint64_t OSPEEDR13:2;
      uint64_t OSPEEDR14:2;
      uint64_t OSPEEDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPDR0:2;
      uint64_t PUPDR1:2;
      uint64_t PUPDR2:2;
      uint64_t PUPDR3:2;
      uint64_t PUPDR4:2;
      uint64_t PUPDR5:2;
      uint64_t PUPDR6:2;
      uint64_t PUPDR7:2;
      uint64_t PUPDR8:2;
      uint64_t PUPDR9:2;
      uint64_t PUPDR10:2;
      uint64_t PUPDR11:2;
      uint64_t PUPDR12:2;
      uint64_t PUPDR13:2;
      uint64_t PUPDR14:2;
      uint64_t PUPDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDR0:1;
      uint64_t IDR1:1;
      uint64_t IDR2:1;
      uint64_t IDR3:1;
      uint64_t IDR4:1;
      uint64_t IDR5:1;
      uint64_t IDR6:1;
      uint64_t IDR7:1;
      uint64_t IDR8:1;
      uint64_t IDR9:1;
      uint64_t IDR10:1;
      uint64_t IDR11:1;
      uint64_t IDR12:1;
      uint64_t IDR13:1;
      uint64_t IDR14:1;
      uint64_t IDR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODR0:1;
      uint64_t ODR1:1;
      uint64_t ODR2:1;
      uint64_t ODR3:1;
      uint64_t ODR4:1;
      uint64_t ODR5:1;
      uint64_t ODR6:1;
      uint64_t ODR7:1;
      uint64_t ODR8:1;
      uint64_t ODR9:1;
      uint64_t ODR10:1;
      uint64_t ODR11:1;
      uint64_t ODR12:1;
      uint64_t ODR13:1;
      uint64_t ODR14:1;
      uint64_t ODR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BS0:1;
      uint64_t BS1:1;
      uint64_t BS2:1;
      uint64_t BS3:1;
      uint64_t BS4:1;
      uint64_t BS5:1;
      uint64_t BS6:1;
      uint64_t BS7:1;
      uint64_t BS8:1;
      uint64_t BS9:1;
      uint64_t BS10:1;
      uint64_t BS11:1;
      uint64_t BS12:1;
      uint64_t BS13:1;
      uint64_t BS14:1;
      uint64_t BS15:1;
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCK0:1;
      uint64_t LCK1:1;
      uint64_t LCK2:1;
      uint64_t LCK3:1;
      uint64_t LCK4:1;
      uint64_t LCK5:1;
      uint64_t LCK6:1;
      uint64_t LCK7:1;
      uint64_t LCK8:1;
      uint64_t LCK9:1;
      uint64_t LCK10:1;
      uint64_t LCK11:1;
      uint64_t LCK12:1;
      uint64_t LCK13:1;
      uint64_t LCK14:1;
      uint64_t LCK15:1;
      uint64_t LCKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRL0:4;
      uint64_t AFRL1:4;
      uint64_t AFRL2:4;
      uint64_t AFRL3:4;
      uint64_t AFRL4:4;
      uint64_t AFRL5:4;
      uint64_t AFRL6:4;
      uint64_t AFRL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRH8:4;
      uint64_t AFRH9:4;
      uint64_t AFRH10:4;
      uint64_t AFRH11:4;
      uint64_t AFRH12:4;
      uint64_t AFRH13:4;
      uint64_t AFRH14:4;
      uint64_t AFRH15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

};

#define GPIOA (*(volatile struct GPIOA_tag *) 0x40020000)

struct SYSCFG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEM_MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEMRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:23;
      uint64_t MII_RMII_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTI0:4;
      uint64_t EXTI1:4;
      uint64_t EXTI2:4;
      uint64_t EXTI3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTICR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTI4:4;
      uint64_t EXTI5:4;
      uint64_t EXTI6:4;
      uint64_t EXTI7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTICR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTI8:4;
      uint64_t EXTI9:4;
      uint64_t EXTI10:4;
      uint64_t EXTI11:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTICR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTI12:4;
      uint64_t EXTI13:4;
      uint64_t EXTI14:4;
      uint64_t EXTI15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTICR4;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP_PD:1;
      uint64_t reservedSpace0:7;
      uint64_t READY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPCR;

};

#define SYSCFG (*(volatile struct SYSCFG_tag *) 0x40013800)

struct SPI1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t MSTR:1;
      uint64_t BR:3;
      uint64_t SPE:1;
      uint64_t LSBFIRST:1;
      uint64_t SSI:1;
      uint64_t SSM:1;
      uint64_t RXONLY:1;
      uint64_t DFF:1;
      uint64_t CRCNEXT:1;
      uint64_t CRCEN:1;
      uint64_t BIDIOE:1;
      uint64_t BIDIMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDMAEN:1;
      uint64_t TXDMAEN:1;
      uint64_t SSOE:1;
      uint64_t reservedSpace0:1;
      uint64_t FRF:1;
      uint64_t ERRIE:1;
      uint64_t RXNEIE:1;
      uint64_t TXEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNE:1;
      uint64_t TXE:1;
      uint64_t CHSIDE:1;
      uint64_t UDR:1;
      uint64_t CRCERR:1;
      uint64_t MODF:1;
      uint64_t OVR:1;
      uint64_t BSY:1;
      uint64_t TIFRFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRCPOLY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RxCRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXCRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TxCRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXCRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHLEN:1;
      uint64_t DATLEN:2;
      uint64_t CKPOL:1;
      uint64_t I2SSTD:2;
      uint64_t reservedSpace0:1;
      uint64_t PCMSYNC:1;
      uint64_t I2SCFG:2;
      uint64_t I2SE:1;
      uint64_t I2SMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SDIV:8;
      uint64_t ODD:1;
      uint64_t MCKOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SPR;

};

#define SPI1 (*(volatile struct SPI1_tag *) 0x40013000)

struct SPI2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t MSTR:1;
      uint64_t BR:3;
      uint64_t SPE:1;
      uint64_t LSBFIRST:1;
      uint64_t SSI:1;
      uint64_t SSM:1;
      uint64_t RXONLY:1;
      uint64_t DFF:1;
      uint64_t CRCNEXT:1;
      uint64_t CRCEN:1;
      uint64_t BIDIOE:1;
      uint64_t BIDIMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDMAEN:1;
      uint64_t TXDMAEN:1;
      uint64_t SSOE:1;
      uint64_t reservedSpace0:1;
      uint64_t FRF:1;
      uint64_t ERRIE:1;
      uint64_t RXNEIE:1;
      uint64_t TXEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNE:1;
      uint64_t TXE:1;
      uint64_t CHSIDE:1;
      uint64_t UDR:1;
      uint64_t CRCERR:1;
      uint64_t MODF:1;
      uint64_t OVR:1;
      uint64_t BSY:1;
      uint64_t TIFRFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRCPOLY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RxCRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXCRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TxCRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXCRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHLEN:1;
      uint64_t DATLEN:2;
      uint64_t CKPOL:1;
      uint64_t I2SSTD:2;
      uint64_t reservedSpace0:1;
      uint64_t PCMSYNC:1;
      uint64_t I2SCFG:2;
      uint64_t I2SE:1;
      uint64_t I2SMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SDIV:8;
      uint64_t ODD:1;
      uint64_t MCKOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SPR;

};

#define SPI2 (*(volatile struct SPI2_tag *) 0x40003800)

struct SPI3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t MSTR:1;
      uint64_t BR:3;
      uint64_t SPE:1;
      uint64_t LSBFIRST:1;
      uint64_t SSI:1;
      uint64_t SSM:1;
      uint64_t RXONLY:1;
      uint64_t DFF:1;
      uint64_t CRCNEXT:1;
      uint64_t CRCEN:1;
      uint64_t BIDIOE:1;
      uint64_t BIDIMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDMAEN:1;
      uint64_t TXDMAEN:1;
      uint64_t SSOE:1;
      uint64_t reservedSpace0:1;
      uint64_t FRF:1;
      uint64_t ERRIE:1;
      uint64_t RXNEIE:1;
      uint64_t TXEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNE:1;
      uint64_t TXE:1;
      uint64_t CHSIDE:1;
      uint64_t UDR:1;
      uint64_t CRCERR:1;
      uint64_t MODF:1;
      uint64_t OVR:1;
      uint64_t BSY:1;
      uint64_t TIFRFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRCPOLY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RxCRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXCRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TxCRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXCRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHLEN:1;
      uint64_t DATLEN:2;
      uint64_t CKPOL:1;
      uint64_t I2SSTD:2;
      uint64_t reservedSpace0:1;
      uint64_t PCMSYNC:1;
      uint64_t I2SCFG:2;
      uint64_t I2SE:1;
      uint64_t I2SMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SDIV:8;
      uint64_t ODD:1;
      uint64_t MCKOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SPR;

};

#define SPI3 (*(volatile struct SPI3_tag *) 0x40003c00)

struct I2S2ext_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t MSTR:1;
      uint64_t BR:3;
      uint64_t SPE:1;
      uint64_t LSBFIRST:1;
      uint64_t SSI:1;
      uint64_t SSM:1;
      uint64_t RXONLY:1;
      uint64_t DFF:1;
      uint64_t CRCNEXT:1;
      uint64_t CRCEN:1;
      uint64_t BIDIOE:1;
      uint64_t BIDIMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDMAEN:1;
      uint64_t TXDMAEN:1;
      uint64_t SSOE:1;
      uint64_t reservedSpace0:1;
      uint64_t FRF:1;
      uint64_t ERRIE:1;
      uint64_t RXNEIE:1;
      uint64_t TXEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNE:1;
      uint64_t TXE:1;
      uint64_t CHSIDE:1;
      uint64_t UDR:1;
      uint64_t CRCERR:1;
      uint64_t MODF:1;
      uint64_t OVR:1;
      uint64_t BSY:1;
      uint64_t TIFRFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRCPOLY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RxCRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXCRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TxCRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXCRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHLEN:1;
      uint64_t DATLEN:2;
      uint64_t CKPOL:1;
      uint64_t I2SSTD:2;
      uint64_t reservedSpace0:1;
      uint64_t PCMSYNC:1;
      uint64_t I2SCFG:2;
      uint64_t I2SE:1;
      uint64_t I2SMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SDIV:8;
      uint64_t ODD:1;
      uint64_t MCKOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SPR;

};

#define I2S2ext (*(volatile struct I2S2ext_tag *) 0x40003400)

struct I2S3ext_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t MSTR:1;
      uint64_t BR:3;
      uint64_t SPE:1;
      uint64_t LSBFIRST:1;
      uint64_t SSI:1;
      uint64_t SSM:1;
      uint64_t RXONLY:1;
      uint64_t DFF:1;
      uint64_t CRCNEXT:1;
      uint64_t CRCEN:1;
      uint64_t BIDIOE:1;
      uint64_t BIDIMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDMAEN:1;
      uint64_t TXDMAEN:1;
      uint64_t SSOE:1;
      uint64_t reservedSpace0:1;
      uint64_t FRF:1;
      uint64_t ERRIE:1;
      uint64_t RXNEIE:1;
      uint64_t TXEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNE:1;
      uint64_t TXE:1;
      uint64_t CHSIDE:1;
      uint64_t UDR:1;
      uint64_t CRCERR:1;
      uint64_t MODF:1;
      uint64_t OVR:1;
      uint64_t BSY:1;
      uint64_t TIFRFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRCPOLY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RxCRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXCRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TxCRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXCRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHLEN:1;
      uint64_t DATLEN:2;
      uint64_t CKPOL:1;
      uint64_t I2SSTD:2;
      uint64_t reservedSpace0:1;
      uint64_t PCMSYNC:1;
      uint64_t I2SCFG:2;
      uint64_t I2SE:1;
      uint64_t I2SMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SDIV:8;
      uint64_t ODD:1;
      uint64_t MCKOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SPR;

};

#define I2S3ext (*(volatile struct I2S3ext_tag *) 0x40004000)

struct SDIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRCTRL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKDIV:8;
      uint64_t CLKEN:1;
      uint64_t PWRSAV:1;
      uint64_t BYPASS:1;
      uint64_t WIDBUS:2;
      uint64_t NEGEDGE:1;
      uint64_t HWFC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDARG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ARG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDINDEX:6;
      uint64_t WAITRESP:2;
      uint64_t WAITINT:1;
      uint64_t WAITPEND:1;
      uint64_t CPSMEN:1;
      uint64_t SDIOSuspend:1;
      uint64_t ENCMDcompl:1;
      uint64_t nIEN:1;
      uint64_t CE_ATACMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESPCMD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESPCMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CARDSTATUS1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CARDSTATUS2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CARDSTATUS3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CARDSTATUS4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESP4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATATIME:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATALENGTH:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTEN:1;
      uint64_t DTDIR:1;
      uint64_t DTMODE:1;
      uint64_t DMAEN:1;
      uint64_t DBLOCKSIZE:4;
      uint64_t RWSTART:1;
      uint64_t RWSTOP:1;
      uint64_t RWMOD:1;
      uint64_t SDIOEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATACOUNT:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCOUNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCRCFAIL:1;
      uint64_t DCRCFAIL:1;
      uint64_t CTIMEOUT:1;
      uint64_t DTIMEOUT:1;
      uint64_t TXUNDERR:1;
      uint64_t RXOVERR:1;
      uint64_t CMDREND:1;
      uint64_t CMDSENT:1;
      uint64_t DATAEND:1;
      uint64_t STBITERR:1;
      uint64_t DBCKEND:1;
      uint64_t CMDACT:1;
      uint64_t TXACT:1;
      uint64_t RXACT:1;
      uint64_t TXFIFOHE:1;
      uint64_t RXFIFOHF:1;
      uint64_t TXFIFOF:1;
      uint64_t RXFIFOF:1;
      uint64_t TXFIFOE:1;
      uint64_t RXFIFOE:1;
      uint64_t TXDAVL:1;
      uint64_t RXDAVL:1;
      uint64_t SDIOIT:1;
      uint64_t CEATAEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCRCFAILC:1;
      uint64_t DCRCFAILC:1;
      uint64_t CTIMEOUTC:1;
      uint64_t DTIMEOUTC:1;
      uint64_t TXUNDERRC:1;
      uint64_t RXOVERRC:1;
      uint64_t CMDRENDC:1;
      uint64_t CMDSENTC:1;
      uint64_t DATAENDC:1;
      uint64_t STBITERRC:1;
      uint64_t DBCKENDC:1;
      uint64_t reservedSpace0:11;
      uint64_t SDIOITC:1;
      uint64_t CEATAENDC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCRCFAILIE:1;
      uint64_t DCRCFAILIE:1;
      uint64_t CTIMEOUTIE:1;
      uint64_t DTIMEOUTIE:1;
      uint64_t TXUNDERRIE:1;
      uint64_t RXOVERRIE:1;
      uint64_t CMDRENDIE:1;
      uint64_t CMDSENTIE:1;
      uint64_t DATAENDIE:1;
      uint64_t STBITERRIE:1;
      uint64_t DBCKENDIE:1;
      uint64_t CMDACTIE:1;
      uint64_t TXACTIE:1;
      uint64_t RXACTIE:1;
      uint64_t TXFIFOHEIE:1;
      uint64_t RXFIFOHFIE:1;
      uint64_t TXFIFOFIE:1;
      uint64_t RXFIFOFIE:1;
      uint64_t TXFIFOEIE:1;
      uint64_t RXFIFOEIE:1;
      uint64_t TXDAVLIE:1;
      uint64_t RXDAVLIE:1;
      uint64_t SDIOITIE:1;
      uint64_t CEATAENDIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOCOUNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCNT;

  uint8_t res1[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOData:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO;

};

#define SDIO (*(volatile struct SDIO_tag *) 0x40012c00)

struct ADC1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWD:1;
      uint64_t EOC:1;
      uint64_t JEOC:1;
      uint64_t JSTRT:1;
      uint64_t STRT:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWDCH:5;
      uint64_t EOCIE:1;
      uint64_t AWDIE:1;
      uint64_t JEOCIE:1;
      uint64_t SCAN:1;
      uint64_t AWDSGL:1;
      uint64_t JAUTO:1;
      uint64_t DISCEN:1;
      uint64_t JDISCEN:1;
      uint64_t DISCNUM:3;
      uint64_t reservedSpace0:6;
      uint64_t JAWDEN:1;
      uint64_t AWDEN:1;
      uint64_t RES:2;
      uint64_t OVRIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADON:1;
      uint64_t CONT:1;
      uint64_t reservedSpace0:6;
      uint64_t DMA:1;
      uint64_t DDS:1;
      uint64_t EOCS:1;
      uint64_t ALIGN:1;
      uint64_t reservedSpace1:4;
      uint64_t JEXTSEL:4;
      uint64_t JEXTEN:2;
      uint64_t JSWSTART:1;
      uint64_t reservedSpace2:1;
      uint64_t EXTSEL:4;
      uint64_t EXTEN:2;
      uint64_t SWSTART:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPx_x:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPx_x:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOFFSET1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOFFSET2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOFFSET3:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOFR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOFFSET4:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOFR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ13:5;
      uint64_t SQ14:5;
      uint64_t SQ15:5;
      uint64_t SQ16:5;
      uint64_t L:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ7:5;
      uint64_t SQ8:5;
      uint64_t SQ9:5;
      uint64_t SQ10:5;
      uint64_t SQ11:5;
      uint64_t SQ12:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ1:5;
      uint64_t SQ2:5;
      uint64_t SQ3:5;
      uint64_t SQ4:5;
      uint64_t SQ5:5;
      uint64_t SQ6:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JSQ1:5;
      uint64_t JSQ2:5;
      uint64_t JSQ3:5;
      uint64_t JSQ4:5;
      uint64_t JL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JSQR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

};

#define ADC1 (*(volatile struct ADC1_tag *) 0x40012000)

struct ADC2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWD:1;
      uint64_t EOC:1;
      uint64_t JEOC:1;
      uint64_t JSTRT:1;
      uint64_t STRT:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWDCH:5;
      uint64_t EOCIE:1;
      uint64_t AWDIE:1;
      uint64_t JEOCIE:1;
      uint64_t SCAN:1;
      uint64_t AWDSGL:1;
      uint64_t JAUTO:1;
      uint64_t DISCEN:1;
      uint64_t JDISCEN:1;
      uint64_t DISCNUM:3;
      uint64_t reservedSpace0:6;
      uint64_t JAWDEN:1;
      uint64_t AWDEN:1;
      uint64_t RES:2;
      uint64_t OVRIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADON:1;
      uint64_t CONT:1;
      uint64_t reservedSpace0:6;
      uint64_t DMA:1;
      uint64_t DDS:1;
      uint64_t EOCS:1;
      uint64_t ALIGN:1;
      uint64_t reservedSpace1:4;
      uint64_t JEXTSEL:4;
      uint64_t JEXTEN:2;
      uint64_t JSWSTART:1;
      uint64_t reservedSpace2:1;
      uint64_t EXTSEL:4;
      uint64_t EXTEN:2;
      uint64_t SWSTART:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPx_x:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPx_x:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOFFSET1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOFFSET2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOFFSET3:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOFR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOFFSET4:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOFR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ13:5;
      uint64_t SQ14:5;
      uint64_t SQ15:5;
      uint64_t SQ16:5;
      uint64_t L:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ7:5;
      uint64_t SQ8:5;
      uint64_t SQ9:5;
      uint64_t SQ10:5;
      uint64_t SQ11:5;
      uint64_t SQ12:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ1:5;
      uint64_t SQ2:5;
      uint64_t SQ3:5;
      uint64_t SQ4:5;
      uint64_t SQ5:5;
      uint64_t SQ6:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JSQ1:5;
      uint64_t JSQ2:5;
      uint64_t JSQ3:5;
      uint64_t JSQ4:5;
      uint64_t JL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JSQR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

};

#define ADC2 (*(volatile struct ADC2_tag *) 0x40012100)

struct ADC3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWD:1;
      uint64_t EOC:1;
      uint64_t JEOC:1;
      uint64_t JSTRT:1;
      uint64_t STRT:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWDCH:5;
      uint64_t EOCIE:1;
      uint64_t AWDIE:1;
      uint64_t JEOCIE:1;
      uint64_t SCAN:1;
      uint64_t AWDSGL:1;
      uint64_t JAUTO:1;
      uint64_t DISCEN:1;
      uint64_t JDISCEN:1;
      uint64_t DISCNUM:3;
      uint64_t reservedSpace0:6;
      uint64_t JAWDEN:1;
      uint64_t AWDEN:1;
      uint64_t RES:2;
      uint64_t OVRIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADON:1;
      uint64_t CONT:1;
      uint64_t reservedSpace0:6;
      uint64_t DMA:1;
      uint64_t DDS:1;
      uint64_t EOCS:1;
      uint64_t ALIGN:1;
      uint64_t reservedSpace1:4;
      uint64_t JEXTSEL:4;
      uint64_t JEXTEN:2;
      uint64_t JSWSTART:1;
      uint64_t reservedSpace2:1;
      uint64_t EXTSEL:4;
      uint64_t EXTEN:2;
      uint64_t SWSTART:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPx_x:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPx_x:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOFFSET1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOFFSET2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOFFSET3:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOFR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOFFSET4:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOFR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ13:5;
      uint64_t SQ14:5;
      uint64_t SQ15:5;
      uint64_t SQ16:5;
      uint64_t L:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ7:5;
      uint64_t SQ8:5;
      uint64_t SQ9:5;
      uint64_t SQ10:5;
      uint64_t SQ11:5;
      uint64_t SQ12:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ1:5;
      uint64_t SQ2:5;
      uint64_t SQ3:5;
      uint64_t SQ4:5;
      uint64_t SQ5:5;
      uint64_t SQ6:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JSQ1:5;
      uint64_t JSQ2:5;
      uint64_t JSQ3:5;
      uint64_t JSQ4:5;
      uint64_t JL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JSQR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

};

#define ADC3 (*(volatile struct ADC3_tag *) 0x40012200)

struct USART6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t ORE:1;
      uint64_t IDLE:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t LBD:1;
      uint64_t CTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_Fraction:4;
      uint64_t DIV_Mantissa:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBK:1;
      uint64_t RWU:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t IDLEIE:1;
      uint64_t RXNEIE:1;
      uint64_t TCIE:1;
      uint64_t TXEIE:1;
      uint64_t PEIE:1;
      uint64_t PS:1;
      uint64_t PCE:1;
      uint64_t WAKE:1;
      uint64_t M:1;
      uint64_t UE:1;
      uint64_t reservedSpace0:1;
      uint64_t OVER8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADD:4;
      uint64_t reservedSpace0:1;
      uint64_t LBDL:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t LBCL:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t CLKEN:1;
      uint64_t STOP:2;
      uint64_t LINEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIE:1;
      uint64_t IREN:1;
      uint64_t IRLP:1;
      uint64_t HDSEL:1;
      uint64_t NACK:1;
      uint64_t SCEN:1;
      uint64_t DMAR:1;
      uint64_t DMAT:1;
      uint64_t RTSE:1;
      uint64_t CTSE:1;
      uint64_t CTSIE:1;
      uint64_t ONEBIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:8;
      uint64_t GT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTPR;

};

#define USART6 (*(volatile struct USART6_tag *) 0x40011400)

struct USART1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t ORE:1;
      uint64_t IDLE:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t LBD:1;
      uint64_t CTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_Fraction:4;
      uint64_t DIV_Mantissa:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBK:1;
      uint64_t RWU:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t IDLEIE:1;
      uint64_t RXNEIE:1;
      uint64_t TCIE:1;
      uint64_t TXEIE:1;
      uint64_t PEIE:1;
      uint64_t PS:1;
      uint64_t PCE:1;
      uint64_t WAKE:1;
      uint64_t M:1;
      uint64_t UE:1;
      uint64_t reservedSpace0:1;
      uint64_t OVER8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADD:4;
      uint64_t reservedSpace0:1;
      uint64_t LBDL:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t LBCL:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t CLKEN:1;
      uint64_t STOP:2;
      uint64_t LINEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIE:1;
      uint64_t IREN:1;
      uint64_t IRLP:1;
      uint64_t HDSEL:1;
      uint64_t NACK:1;
      uint64_t SCEN:1;
      uint64_t DMAR:1;
      uint64_t DMAT:1;
      uint64_t RTSE:1;
      uint64_t CTSE:1;
      uint64_t CTSIE:1;
      uint64_t ONEBIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:8;
      uint64_t GT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTPR;

};

#define USART1 (*(volatile struct USART1_tag *) 0x40011000)

struct USART2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t ORE:1;
      uint64_t IDLE:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t LBD:1;
      uint64_t CTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_Fraction:4;
      uint64_t DIV_Mantissa:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBK:1;
      uint64_t RWU:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t IDLEIE:1;
      uint64_t RXNEIE:1;
      uint64_t TCIE:1;
      uint64_t TXEIE:1;
      uint64_t PEIE:1;
      uint64_t PS:1;
      uint64_t PCE:1;
      uint64_t WAKE:1;
      uint64_t M:1;
      uint64_t UE:1;
      uint64_t reservedSpace0:1;
      uint64_t OVER8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADD:4;
      uint64_t reservedSpace0:1;
      uint64_t LBDL:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t LBCL:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t CLKEN:1;
      uint64_t STOP:2;
      uint64_t LINEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIE:1;
      uint64_t IREN:1;
      uint64_t IRLP:1;
      uint64_t HDSEL:1;
      uint64_t NACK:1;
      uint64_t SCEN:1;
      uint64_t DMAR:1;
      uint64_t DMAT:1;
      uint64_t RTSE:1;
      uint64_t CTSE:1;
      uint64_t CTSIE:1;
      uint64_t ONEBIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:8;
      uint64_t GT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTPR;

};

#define USART2 (*(volatile struct USART2_tag *) 0x40004400)

struct USART3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t ORE:1;
      uint64_t IDLE:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t LBD:1;
      uint64_t CTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_Fraction:4;
      uint64_t DIV_Mantissa:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBK:1;
      uint64_t RWU:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t IDLEIE:1;
      uint64_t RXNEIE:1;
      uint64_t TCIE:1;
      uint64_t TXEIE:1;
      uint64_t PEIE:1;
      uint64_t PS:1;
      uint64_t PCE:1;
      uint64_t WAKE:1;
      uint64_t M:1;
      uint64_t UE:1;
      uint64_t reservedSpace0:1;
      uint64_t OVER8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADD:4;
      uint64_t reservedSpace0:1;
      uint64_t LBDL:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t LBCL:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t CLKEN:1;
      uint64_t STOP:2;
      uint64_t LINEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIE:1;
      uint64_t IREN:1;
      uint64_t IRLP:1;
      uint64_t HDSEL:1;
      uint64_t NACK:1;
      uint64_t SCEN:1;
      uint64_t DMAR:1;
      uint64_t DMAT:1;
      uint64_t RTSE:1;
      uint64_t CTSE:1;
      uint64_t CTSIE:1;
      uint64_t ONEBIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:8;
      uint64_t GT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTPR;

};

#define USART3 (*(volatile struct USART3_tag *) 0x40004800)

struct DAC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN1:1;
      uint64_t BOFF1:1;
      uint64_t TEN1:1;
      uint64_t TSEL1:3;
      uint64_t WAVE1:2;
      uint64_t MAMP1:4;
      uint64_t DMAEN1:1;
      uint64_t DMAUDRIE1:1;
      uint64_t reservedSpace0:2;
      uint64_t EN2:1;
      uint64_t BOFF2:1;
      uint64_t TEN2:1;
      uint64_t TSEL2:3;
      uint64_t WAVE2:2;
      uint64_t MAMP2:4;
      uint64_t DMAEN2:1;
      uint64_t DMAUDRIE2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWTRIG1:1;
      uint64_t SWTRIG2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWTRIGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DHR12R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t DACC1DHR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DHR12L1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DHR8R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC2DHR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DHR12R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t DACC2DHR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DHR12L2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC2DHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DHR8R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:12;
      uint64_t reservedSpace0:4;
      uint64_t DACC2DHR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DHR12RD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t DACC1DHR:12;
      uint64_t reservedSpace1:4;
      uint64_t DACC2DHR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DHR12LD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:8;
      uint64_t DACC2DHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DHR8RD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DOR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC2DOR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t DMAUDR1:1;
      uint64_t reservedSpace1:15;
      uint64_t DMAUDR2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

};

#define DAC (*(volatile struct DAC_tag *) 0x40007400)

struct PWR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPDS:1;
      uint64_t PDDS:1;
      uint64_t CWUF:1;
      uint64_t CSBF:1;
      uint64_t PVDE:1;
      uint64_t PLS:3;
      uint64_t DBP:1;
      uint64_t FPDS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WUF:1;
      uint64_t SBF:1;
      uint64_t PVDO:1;
      uint64_t BRR:1;
      uint64_t reservedSpace0:4;
      uint64_t EWUP:1;
      uint64_t BRE:1;
      uint64_t reservedSpace1:4;
      uint64_t VOSRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

};

#define PWR (*(volatile struct PWR_tag *) 0x40007000)

struct I2C3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t SMBUS:1;
      uint64_t reservedSpace0:1;
      uint64_t SMBTYPE:1;
      uint64_t ENARP:1;
      uint64_t ENPEC:1;
      uint64_t ENGC:1;
      uint64_t NOSTRETCH:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ACK:1;
      uint64_t POS:1;
      uint64_t PEC:1;
      uint64_t ALERT:1;
      uint64_t reservedSpace1:1;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FREQ:6;
      uint64_t reservedSpace0:2;
      uint64_t ITERREN:1;
      uint64_t ITEVTEN:1;
      uint64_t ITBUFEN:1;
      uint64_t DMAEN:1;
      uint64_t LAST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADD0:1;
      uint64_t ADD7:7;
      uint64_t ADD10:2;
      uint64_t reservedSpace0:5;
      uint64_t ADDMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDUAL:1;
      uint64_t ADD2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SB:1;
      uint64_t ADDR:1;
      uint64_t BTF:1;
      uint64_t ADD10:1;
      uint64_t STOPF:1;
      uint64_t reservedSpace0:1;
      uint64_t RxNE:1;
      uint64_t TxE:1;
      uint64_t BERR:1;
      uint64_t ARLO:1;
      uint64_t AF:1;
      uint64_t OVR:1;
      uint64_t PECERR:1;
      uint64_t reservedSpace1:1;
      uint64_t TIMEOUT:1;
      uint64_t SMBALERT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSL:1;
      uint64_t BUSY:1;
      uint64_t TRA:1;
      uint64_t reservedSpace0:1;
      uint64_t GENCALL:1;
      uint64_t SMBDEFAULT:1;
      uint64_t SMBHOST:1;
      uint64_t DUALF:1;
      uint64_t PEC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCR:12;
      uint64_t reservedSpace0:2;
      uint64_t DUTY:1;
      uint64_t F_S:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRISE:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRISE;

};

#define I2C3 (*(volatile struct I2C3_tag *) 0x40005c00)

struct I2C2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t SMBUS:1;
      uint64_t reservedSpace0:1;
      uint64_t SMBTYPE:1;
      uint64_t ENARP:1;
      uint64_t ENPEC:1;
      uint64_t ENGC:1;
      uint64_t NOSTRETCH:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ACK:1;
      uint64_t POS:1;
      uint64_t PEC:1;
      uint64_t ALERT:1;
      uint64_t reservedSpace1:1;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FREQ:6;
      uint64_t reservedSpace0:2;
      uint64_t ITERREN:1;
      uint64_t ITEVTEN:1;
      uint64_t ITBUFEN:1;
      uint64_t DMAEN:1;
      uint64_t LAST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADD0:1;
      uint64_t ADD7:7;
      uint64_t ADD10:2;
      uint64_t reservedSpace0:5;
      uint64_t ADDMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDUAL:1;
      uint64_t ADD2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SB:1;
      uint64_t ADDR:1;
      uint64_t BTF:1;
      uint64_t ADD10:1;
      uint64_t STOPF:1;
      uint64_t reservedSpace0:1;
      uint64_t RxNE:1;
      uint64_t TxE:1;
      uint64_t BERR:1;
      uint64_t ARLO:1;
      uint64_t AF:1;
      uint64_t OVR:1;
      uint64_t PECERR:1;
      uint64_t reservedSpace1:1;
      uint64_t TIMEOUT:1;
      uint64_t SMBALERT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSL:1;
      uint64_t BUSY:1;
      uint64_t TRA:1;
      uint64_t reservedSpace0:1;
      uint64_t GENCALL:1;
      uint64_t SMBDEFAULT:1;
      uint64_t SMBHOST:1;
      uint64_t DUALF:1;
      uint64_t PEC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCR:12;
      uint64_t reservedSpace0:2;
      uint64_t DUTY:1;
      uint64_t F_S:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRISE:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRISE;

};

#define I2C2 (*(volatile struct I2C2_tag *) 0x40005800)

struct I2C1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t SMBUS:1;
      uint64_t reservedSpace0:1;
      uint64_t SMBTYPE:1;
      uint64_t ENARP:1;
      uint64_t ENPEC:1;
      uint64_t ENGC:1;
      uint64_t NOSTRETCH:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ACK:1;
      uint64_t POS:1;
      uint64_t PEC:1;
      uint64_t ALERT:1;
      uint64_t reservedSpace1:1;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FREQ:6;
      uint64_t reservedSpace0:2;
      uint64_t ITERREN:1;
      uint64_t ITEVTEN:1;
      uint64_t ITBUFEN:1;
      uint64_t DMAEN:1;
      uint64_t LAST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADD0:1;
      uint64_t ADD7:7;
      uint64_t ADD10:2;
      uint64_t reservedSpace0:5;
      uint64_t ADDMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDUAL:1;
      uint64_t ADD2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SB:1;
      uint64_t ADDR:1;
      uint64_t BTF:1;
      uint64_t ADD10:1;
      uint64_t STOPF:1;
      uint64_t reservedSpace0:1;
      uint64_t RxNE:1;
      uint64_t TxE:1;
      uint64_t BERR:1;
      uint64_t ARLO:1;
      uint64_t AF:1;
      uint64_t OVR:1;
      uint64_t PECERR:1;
      uint64_t reservedSpace1:1;
      uint64_t TIMEOUT:1;
      uint64_t SMBALERT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSL:1;
      uint64_t BUSY:1;
      uint64_t TRA:1;
      uint64_t reservedSpace0:1;
      uint64_t GENCALL:1;
      uint64_t SMBDEFAULT:1;
      uint64_t SMBHOST:1;
      uint64_t DUALF:1;
      uint64_t PEC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCR:12;
      uint64_t reservedSpace0:2;
      uint64_t DUTY:1;
      uint64_t F_S:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRISE:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRISE;

};

#define I2C1 (*(volatile struct I2C1_tag *) 0x40005400)

struct IWDG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RL:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PVU:1;
      uint64_t RVU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

};

#define IWDG (*(volatile struct IWDG_tag *) 0x40003000)

struct WWDG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t T:7;
      uint64_t WDGA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t W:7;
      uint64_t WDGTB0:1;
      uint64_t WDGTB1:1;
      uint64_t EWI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EWIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

};

#define WWDG (*(volatile struct WWDG_tag *) 0x40002c00)

struct RTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SU:4;
      uint64_t ST:3;
      uint64_t reservedSpace0:1;
      uint64_t MNU:4;
      uint64_t MNT:3;
      uint64_t reservedSpace1:1;
      uint64_t HU:4;
      uint64_t HT:2;
      uint64_t PM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DU:4;
      uint64_t DT:2;
      uint64_t reservedSpace0:2;
      uint64_t MU:4;
      uint64_t MT:1;
      uint64_t WDU:3;
      uint64_t YU:4;
      uint64_t YT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WCKSEL:3;
      uint64_t TSEDGE:1;
      uint64_t REFCKON:1;
      uint64_t reservedSpace0:1;
      uint64_t FMT:1;
      uint64_t DCE:1;
      uint64_t ALRAE:1;
      uint64_t ALRBE:1;
      uint64_t WUTE:1;
      uint64_t TSE:1;
      uint64_t ALRAIE:1;
      uint64_t ALRBIE:1;
      uint64_t WUTIE:1;
      uint64_t TSIE:1;
      uint64_t ADD1H:1;
      uint64_t SUB1H:1;
      uint64_t BKP:1;
      uint64_t reservedSpace1:1;
      uint64_t POL:1;
      uint64_t OSEL:2;
      uint64_t COE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALRAWF:1;
      uint64_t ALRBWF:1;
      uint64_t WUTWF:1;
      uint64_t SHPF:1;
      uint64_t INITS:1;
      uint64_t RSF:1;
      uint64_t INITF:1;
      uint64_t INIT:1;
      uint64_t ALRAF:1;
      uint64_t ALRBF:1;
      uint64_t WUTF:1;
      uint64_t TSF:1;
      uint64_t TSOVF:1;
      uint64_t TAMP1F:1;
      uint64_t TAMP2F:1;
      uint64_t reservedSpace0:1;
      uint64_t RECALPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREDIV_S:15;
      uint64_t reservedSpace0:1;
      uint64_t PREDIV_A:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WUTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DC:5;
      uint64_t reservedSpace0:2;
      uint64_t DCS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALIBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SU:4;
      uint64_t ST:3;
      uint64_t MSK1:1;
      uint64_t MNU:4;
      uint64_t MNT:3;
      uint64_t MSK2:1;
      uint64_t HU:4;
      uint64_t HT:2;
      uint64_t PM:1;
      uint64_t MSK3:1;
      uint64_t DU:4;
      uint64_t DT:2;
      uint64_t WDSEL:1;
      uint64_t MSK4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALRMAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SU:4;
      uint64_t ST:3;
      uint64_t MSK1:1;
      uint64_t MNU:4;
      uint64_t MNT:3;
      uint64_t MSK2:1;
      uint64_t HU:4;
      uint64_t HT:2;
      uint64_t PM:1;
      uint64_t MSK3:1;
      uint64_t DU:4;
      uint64_t DT:2;
      uint64_t WDSEL:1;
      uint64_t MSK4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALRMBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUBFS:15;
      uint64_t reservedSpace0:16;
      uint64_t ADD1S:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMP1E:1;
      uint64_t TAMP1TRG:1;
      uint64_t TAMPIE:1;
      uint64_t reservedSpace0:13;
      uint64_t TAMP1INSEL:1;
      uint64_t TSINSEL:1;
      uint64_t ALARMOUTTYPE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DU:4;
      uint64_t DT:2;
      uint64_t reservedSpace0:2;
      uint64_t MU:4;
      uint64_t MT:1;
      uint64_t WDU:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSSSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CALM:9;
      uint64_t reservedSpace0:4;
      uint64_t CALW16:1;
      uint64_t CALW8:1;
      uint64_t CALP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMP1E:1;
      uint64_t TAMP1TRG:1;
      uint64_t TAMPIE:1;
      uint64_t TAMP2E:1;
      uint64_t TAMP2TRG:1;
      uint64_t reservedSpace0:2;
      uint64_t TAMPTS:1;
      uint64_t TAMPFREQ:3;
      uint64_t TAMPFLT:2;
      uint64_t TAMPPRCH:2;
      uint64_t TAMPPUDIS:1;
      uint64_t TAMP1INSEL:1;
      uint64_t TSINSEL:1;
      uint64_t ALARMOUTTYPE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SS:15;
      uint64_t reservedSpace0:9;
      uint64_t MASKSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALRMASSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SS:15;
      uint64_t reservedSpace0:9;
      uint64_t MASKSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALRMBSSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP3R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP4R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP5R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP6R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP7R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP8R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP9R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP10R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP11R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP12R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP13R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP14R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP15R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP16R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP17R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP18R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP19R;

};

#define RTC (*(volatile struct RTC_tag *) 0x40002800)

struct UART4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t ORE:1;
      uint64_t IDLE:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t LBD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_Fraction:4;
      uint64_t DIV_Mantissa:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBK:1;
      uint64_t RWU:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t IDLEIE:1;
      uint64_t RXNEIE:1;
      uint64_t TCIE:1;
      uint64_t TXEIE:1;
      uint64_t PEIE:1;
      uint64_t PS:1;
      uint64_t PCE:1;
      uint64_t WAKE:1;
      uint64_t M:1;
      uint64_t UE:1;
      uint64_t reservedSpace0:1;
      uint64_t OVER8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADD:4;
      uint64_t reservedSpace0:1;
      uint64_t LBDL:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:5;
      uint64_t STOP:2;
      uint64_t LINEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIE:1;
      uint64_t IREN:1;
      uint64_t IRLP:1;
      uint64_t HDSEL:1;
      uint64_t reservedSpace0:2;
      uint64_t DMAR:1;
      uint64_t DMAT:1;
      uint64_t reservedSpace1:3;
      uint64_t ONEBIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

};

#define UART4 (*(volatile struct UART4_tag *) 0x40004c00)

struct UART5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t ORE:1;
      uint64_t IDLE:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t LBD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_Fraction:4;
      uint64_t DIV_Mantissa:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBK:1;
      uint64_t RWU:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t IDLEIE:1;
      uint64_t RXNEIE:1;
      uint64_t TCIE:1;
      uint64_t TXEIE:1;
      uint64_t PEIE:1;
      uint64_t PS:1;
      uint64_t PCE:1;
      uint64_t WAKE:1;
      uint64_t M:1;
      uint64_t UE:1;
      uint64_t reservedSpace0:1;
      uint64_t OVER8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADD:4;
      uint64_t reservedSpace0:1;
      uint64_t LBDL:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:5;
      uint64_t STOP:2;
      uint64_t LINEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIE:1;
      uint64_t IREN:1;
      uint64_t IRLP:1;
      uint64_t HDSEL:1;
      uint64_t reservedSpace0:2;
      uint64_t DMAR:1;
      uint64_t DMAT:1;
      uint64_t reservedSpace1:3;
      uint64_t ONEBIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

};

#define UART5 (*(volatile struct UART5_tag *) 0x40005000)

struct C_ADC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWD1:1;
      uint64_t EOC1:1;
      uint64_t JEOC1:1;
      uint64_t JSTRT1:1;
      uint64_t STRT1:1;
      uint64_t OVR1:1;
      uint64_t reservedSpace0:2;
      uint64_t AWD2:1;
      uint64_t EOC2:1;
      uint64_t JEOC2:1;
      uint64_t JSTRT2:1;
      uint64_t STRT2:1;
      uint64_t OVR2:1;
      uint64_t reservedSpace1:2;
      uint64_t AWD3:1;
      uint64_t EOC3:1;
      uint64_t JEOC3:1;
      uint64_t JSTRT3:1;
      uint64_t STRT3:1;
      uint64_t OVR3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MULT:5;
      uint64_t reservedSpace0:3;
      uint64_t DELAY:4;
      uint64_t reservedSpace1:1;
      uint64_t DDS:1;
      uint64_t DMA:2;
      uint64_t ADCPRE:2;
      uint64_t reservedSpace2:4;
      uint64_t VBATE:1;
      uint64_t TSVREFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA1:16;
      uint64_t DATA2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR;

};

#define C_ADC (*(volatile struct C_ADC_tag *) 0x40012300)

struct TIM6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t UDIS:1;
      uint64_t URS:1;
      uint64_t OPM:1;
      uint64_t reservedSpace0:3;
      uint64_t ARPE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t MMS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UIE:1;
      uint64_t reservedSpace0:7;
      uint64_t UDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EGR;

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
      uint64_t ARR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ARR;

};

#define TIM6 (*(volatile struct TIM6_tag *) 0x40001000)

struct TIM7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t UDIS:1;
      uint64_t URS:1;
      uint64_t OPM:1;
      uint64_t reservedSpace0:3;
      uint64_t ARPE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t MMS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UIE:1;
      uint64_t reservedSpace0:7;
      uint64_t UDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EGR;

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
      uint64_t ARR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ARR;

};

#define TIM7 (*(volatile struct TIM7_tag *) 0x40001400)

struct Ethernet_MAC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t DC:1;
      uint64_t BL:2;
      uint64_t APCS:1;
      uint64_t reservedSpace1:1;
      uint64_t RD:1;
      uint64_t IPCO:1;
      uint64_t DM:1;
      uint64_t LM:1;
      uint64_t ROD:1;
      uint64_t FES:1;
      uint64_t reservedSpace2:1;
      uint64_t CSD:1;
      uint64_t IFG:3;
      uint64_t reservedSpace3:2;
      uint64_t JD:1;
      uint64_t WD:1;
      uint64_t reservedSpace4:1;
      uint64_t CSTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PM:1;
      uint64_t HU:1;
      uint64_t HM:1;
      uint64_t DAIF:1;
      uint64_t RAM:1;
      uint64_t BFD:1;
      uint64_t PCF:1;
      uint64_t SAIF:1;
      uint64_t SAF:1;
      uint64_t HPF:1;
      uint64_t reservedSpace0:21;
      uint64_t RA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACFFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACHTHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACHTLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB:1;
      uint64_t MW:1;
      uint64_t CR:3;
      uint64_t reservedSpace0:1;
      uint64_t MR:5;
      uint64_t PA:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACMIIAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACMIIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCB:1;
      uint64_t TFCE:1;
      uint64_t RFCE:1;
      uint64_t UPFD:1;
      uint64_t PLT:2;
      uint64_t reservedSpace0:1;
      uint64_t ZQPD:1;
      uint64_t reservedSpace1:8;
      uint64_t PT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLANTI:16;
      uint64_t VLANTC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACVLANTR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t MPE:1;
      uint64_t WFE:1;
      uint64_t reservedSpace0:2;
      uint64_t MPR:1;
      uint64_t WFR:1;
      uint64_t reservedSpace1:2;
      uint64_t GU:1;
      uint64_t reservedSpace2:21;
      uint64_t WFFRPR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACPMTCSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:1;
      uint64_t CSR:1;
      uint64_t ROR:1;
      uint64_t MCF:1;
      uint64_t MCP:1;
      uint64_t MCFHP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACDBGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PMTS:1;
      uint64_t MMCS:1;
      uint64_t MMCRS:1;
      uint64_t MMCTS:1;
      uint64_t reservedSpace1:2;
      uint64_t TSTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PMTIM:1;
      uint64_t reservedSpace1:5;
      uint64_t TSTIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACA0H:16;
      uint64_t reservedSpace0:15;
      uint64_t MO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACA0HR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACA0L:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACA0LR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACA1H:16;
      uint64_t reservedSpace0:8;
      uint64_t MBC:6;
      uint64_t SA:1;
      uint64_t AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACA1HR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACA1LR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACA1LR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAC2AH:16;
      uint64_t reservedSpace0:8;
      uint64_t MBC:6;
      uint64_t SA:1;
      uint64_t AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACA2HR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACA2L:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACA2LR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACA3H:16;
      uint64_t reservedSpace0:8;
      uint64_t MBC:6;
      uint64_t SA:1;
      uint64_t AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACA3HR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBCA3L:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACA3LR;

};

#define Ethernet_MAC (*(volatile struct Ethernet_MAC_tag *) 0x40028000)

struct Ethernet_MMC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:1;
      uint64_t CSR:1;
      uint64_t ROR:1;
      uint64_t MCF:1;
      uint64_t MCP:1;
      uint64_t MCFHP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t RFCES:1;
      uint64_t RFAES:1;
      uint64_t reservedSpace1:10;
      uint64_t RGUFS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMCRIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t TGFSCS:1;
      uint64_t TGFMSCS:1;
      uint64_t reservedSpace1:5;
      uint64_t TGFS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMCTIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t RFCEM:1;
      uint64_t RFAEM:1;
      uint64_t reservedSpace1:10;
      uint64_t RGUFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMCRIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t TGFSCM:1;
      uint64_t TGFMSCM:1;
      uint64_t TGFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMCTIMR;

  uint8_t res0[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TGFSCC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMCTGFSCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TGFMSCC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMCTGFMSCCR;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TGFC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMCTGFCR;

  uint8_t res2[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFCFC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMCRFCECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFAEC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMCRFAECR;

  uint8_t res3[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RGUFC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMCRGUFCR;

};

#define Ethernet_MMC (*(volatile struct Ethernet_MMC_tag *) 0x40028100)

struct Ethernet_PTP_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSE:1;
      uint64_t TSFCU:1;
      uint64_t TSSTI:1;
      uint64_t TSSTU:1;
      uint64_t TSITE:1;
      uint64_t TTSARU:1;
      uint64_t reservedSpace0:2;
      uint64_t TSSARFE:1;
      uint64_t TSSSR:1;
      uint64_t TSPTPPSV2E:1;
      uint64_t TSSPTPOEFE:1;
      uint64_t TSSIPV6FE:1;
      uint64_t TSSIPV4FE:1;
      uint64_t TSSEME:1;
      uint64_t TSSMRME:1;
      uint64_t TSCNT:2;
      uint64_t TSPFFMAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTPTSCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STSSI:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTPSSIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTPTSHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STSS:31;
      uint64_t STPNS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTPTSLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTPTSHUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSUSS:31;
      uint64_t TSUPNS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTPTSLUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTPTSAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TTSH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTPTTHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TTSL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTPTTLR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSSO:1;
      uint64_t TSTTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTPTSSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSSO:1;
      uint64_t TSTTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTPPPSCR;

};

#define Ethernet_PTP (*(volatile struct Ethernet_PTP_tag *) 0x40028700)

struct Ethernet_DMA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t DA:1;
      uint64_t DSL:5;
      uint64_t EDFE:1;
      uint64_t PBL:6;
      uint64_t RTPR:2;
      uint64_t FB:1;
      uint64_t RDP:6;
      uint64_t USP:1;
      uint64_t FPM:1;
      uint64_t AAB:1;
      uint64_t MB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMABMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMATPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMARPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMARDLAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMATDLAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TS:1;
      uint64_t TPSS:1;
      uint64_t TBUS:1;
      uint64_t TJTS:1;
      uint64_t ROS:1;
      uint64_t TUS:1;
      uint64_t RS:1;
      uint64_t RBUS:1;
      uint64_t RPSS:1;
      uint64_t PWTS:1;
      uint64_t ETS:1;
      uint64_t reservedSpace0:2;
      uint64_t FBES:1;
      uint64_t ERS:1;
      uint64_t AIS:1;
      uint64_t NIS:1;
      uint64_t RPS:3;
      uint64_t TPS:3;
      uint64_t EBS:3;
      uint64_t reservedSpace1:1;
      uint64_t MMCS:1;
      uint64_t PMTS:1;
      uint64_t TSTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMASR;

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
      uint64_t FUGF:1;
      uint64_t FEF:1;
      uint64_t reservedSpace2:5;
      uint64_t ST:1;
      uint64_t TTC:3;
      uint64_t reservedSpace3:3;
      uint64_t FTF:1;
      uint64_t TSF:1;
      uint64_t reservedSpace4:2;
      uint64_t DFRF:1;
      uint64_t RSF:1;
      uint64_t DTCEFD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAOMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIE:1;
      uint64_t TPSIE:1;
      uint64_t TBUIE:1;
      uint64_t TJTIE:1;
      uint64_t ROIE:1;
      uint64_t TUIE:1;
      uint64_t RIE:1;
      uint64_t RBUIE:1;
      uint64_t RPSIE:1;
      uint64_t RWTIE:1;
      uint64_t ETIE:1;
      uint64_t reservedSpace0:2;
      uint64_t FBEIE:1;
      uint64_t ERIE:1;
      uint64_t AISE:1;
      uint64_t NISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFC:16;
      uint64_t OMFC:1;
      uint64_t MFA:11;
      uint64_t OFOC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMFBOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSWTC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMARSWTR;

  uint8_t res0[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTDAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACHTDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRDAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACHRDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTBAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACHTBAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRBAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACHRBAR;

};

#define Ethernet_DMA (*(volatile struct Ethernet_DMA_tag *) 0x40029000)

struct CRC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

};

#define CRC (*(volatile struct CRC_tag *) 0x40023000)

struct OTG_FS_HOST_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSLSPCS:2;
      uint64_t FSLSS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRIVL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRNUM:16;
      uint64_t FTREM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HFNUM;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTXFSAVL:16;
      uint64_t PTXQSAV:8;
      uint64_t PTXQTOP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HPTXSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HAINT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HAINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HAINTM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HAINTMSK;

  uint8_t res1[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCSTS:1;
      uint64_t PCDET:1;
      uint64_t PENA:1;
      uint64_t PENCHNG:1;
      uint64_t POCA:1;
      uint64_t POCCHNG:1;
      uint64_t PRES:1;
      uint64_t PSUSP:1;
      uint64_t PRST:1;
      uint64_t reservedSpace0:1;
      uint64_t PLSTS:2;
      uint64_t PPWR:1;
      uint64_t PTCTL:4;
      uint64_t PSPD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HPRT;

  uint8_t res2[188];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSDEV:1;
      uint64_t EPTYP:2;
      uint64_t MCNT:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCCHAR0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t CHH:1;
      uint64_t reservedSpace0:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace1:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCINT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t reservedSpace0:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYET:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCINTMSK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCTSIZ0;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSDEV:1;
      uint64_t EPTYP:2;
      uint64_t MCNT:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCCHAR1;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t CHH:1;
      uint64_t reservedSpace0:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace1:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCINT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t reservedSpace0:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYET:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCINTMSK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCTSIZ1;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSDEV:1;
      uint64_t EPTYP:2;
      uint64_t MCNT:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCCHAR2;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t CHH:1;
      uint64_t reservedSpace0:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace1:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCINT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t reservedSpace0:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYET:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCINTMSK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCTSIZ2;

  uint8_t res8[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSDEV:1;
      uint64_t EPTYP:2;
      uint64_t MCNT:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCCHAR3;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t CHH:1;
      uint64_t reservedSpace0:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace1:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCINT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t reservedSpace0:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYET:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCINTMSK3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCTSIZ3;

  uint8_t res10[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSDEV:1;
      uint64_t EPTYP:2;
      uint64_t MCNT:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCCHAR4;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t CHH:1;
      uint64_t reservedSpace0:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace1:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCINT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t reservedSpace0:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYET:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCINTMSK4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCTSIZ4;

  uint8_t res12[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSDEV:1;
      uint64_t EPTYP:2;
      uint64_t MCNT:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCCHAR5;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t CHH:1;
      uint64_t reservedSpace0:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace1:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCINT5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t reservedSpace0:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYET:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCINTMSK5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCTSIZ5;

  uint8_t res14[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSDEV:1;
      uint64_t EPTYP:2;
      uint64_t MCNT:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCCHAR6;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t CHH:1;
      uint64_t reservedSpace0:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace1:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCINT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t reservedSpace0:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYET:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCINTMSK6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCTSIZ6;

  uint8_t res16[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSDEV:1;
      uint64_t EPTYP:2;
      uint64_t MCNT:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCCHAR7;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t CHH:1;
      uint64_t reservedSpace0:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace1:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCINT7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t reservedSpace0:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYET:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCINTMSK7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_HCTSIZ7;

};

#define OTG_FS_HOST (*(volatile struct OTG_FS_HOST_tag *) 0x50000400)

struct OTG_FS_DEVICE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSPD:2;
      uint64_t NZLSOHSK:1;
      uint64_t reservedSpace0:1;
      uint64_t DAD:7;
      uint64_t PFIVL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_DCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RWUSIG:1;
      uint64_t SDIS:1;
      uint64_t GINSTS:1;
      uint64_t GONSTS:1;
      uint64_t TCTL:3;
      uint64_t SGINAK:1;
      uint64_t CGINAK:1;
      uint64_t SGONAK:1;
      uint64_t CGONAK:1;
      uint64_t POPRGDNE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_DCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSPSTS:1;
      uint64_t ENUMSPD:2;
      uint64_t EERR:1;
      uint64_t reservedSpace0:4;
      uint64_t FNSOF:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_DSTS;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t EPDM:1;
      uint64_t reservedSpace0:1;
      uint64_t TOM:1;
      uint64_t ITTXFEMSK:1;
      uint64_t INEPNMM:1;
      uint64_t INEPNEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_DIEPMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t EPDM:1;
      uint64_t reservedSpace0:1;
      uint64_t STUPM:1;
      uint64_t OTEPDM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_DOEPMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPINT:16;
      uint64_t OEPINT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_DAINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPM:16;
      uint64_t OEPINT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_DAINTMSK;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VBUSDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DVBUSDIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DVBUSP:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DVBUSPULSE;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXFEM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPEMPMSK;

  uint8_t res3[200];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:2;
      uint64_t reservedSpace0:13;
      uint64_t USBAEP:1;
      uint64_t reservedSpace1:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t reservedSpace2:1;
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t reservedSpace3:2;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_DIEPCTL0;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t ITTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT0;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:7;
      uint64_t reservedSpace0:12;
      uint64_t PKTCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ0;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS0;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t EONUM_DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t reservedSpace1:1;
      uint64_t Stall:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM_SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL1;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t ITTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT1;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ1;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS1;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t EONUM_DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t reservedSpace1:1;
      uint64_t Stall:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL2;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t ITTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT2;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ2;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS2;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t EONUM_DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t reservedSpace1:1;
      uint64_t Stall:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL3;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t ITTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT3;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ3;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS3;

  uint8_t res19[388];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:2;
      uint64_t reservedSpace0:13;
      uint64_t USBAEP:1;
      uint64_t reservedSpace1:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t Stall:1;
      uint64_t reservedSpace2:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t reservedSpace3:2;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL0;

  uint8_t res20[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t STUP:1;
      uint64_t OTEPDIS:1;
      uint64_t reservedSpace1:1;
      uint64_t B2BSTUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPINT0;

  uint8_t res21[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:7;
      uint64_t reservedSpace0:12;
      uint64_t PKTCNT:1;
      uint64_t reservedSpace1:9;
      uint64_t STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ0;

  uint8_t res22[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t EONUM_DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t Stall:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL1;

  uint8_t res23[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t STUP:1;
      uint64_t OTEPDIS:1;
      uint64_t reservedSpace1:1;
      uint64_t B2BSTUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPINT1;

  uint8_t res24[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ1;

  uint8_t res25[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t EONUM_DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t Stall:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL2;

  uint8_t res26[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t STUP:1;
      uint64_t OTEPDIS:1;
      uint64_t reservedSpace1:1;
      uint64_t B2BSTUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPINT2;

  uint8_t res27[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ2;

  uint8_t res28[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t EONUM_DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t Stall:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL3;

  uint8_t res29[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t STUP:1;
      uint64_t OTEPDIS:1;
      uint64_t reservedSpace1:1;
      uint64_t B2BSTUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPINT3;

  uint8_t res30[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ3;

};

#define OTG_FS_DEVICE (*(volatile struct OTG_FS_DEVICE_tag *) 0x50000800)

struct OTG_FS_PWRCLK_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STPPCLK:1;
      uint64_t GATEHCLK:1;
      uint64_t reservedSpace0:2;
      uint64_t PHYSUSP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS_PCGCCTL;

};

#define OTG_FS_PWRCLK (*(volatile struct OTG_FS_PWRCLK_tag *) 0x50000e00)

struct CAN1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INRQ:1;
      uint64_t SLEEP:1;
      uint64_t TXFP:1;
      uint64_t RFLM:1;
      uint64_t NART:1;
      uint64_t AWUM:1;
      uint64_t ABOM:1;
      uint64_t TTCM:1;
      uint64_t reservedSpace0:7;
      uint64_t RESET:1;
      uint64_t DBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INAK:1;
      uint64_t SLAK:1;
      uint64_t ERRI:1;
      uint64_t WKUI:1;
      uint64_t SLAKI:1;
      uint64_t reservedSpace0:3;
      uint64_t TXM:1;
      uint64_t RXM:1;
      uint64_t SAMP:1;
      uint64_t RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RQCP0:1;
      uint64_t TXOK0:1;
      uint64_t ALST0:1;
      uint64_t TERR0:1;
      uint64_t reservedSpace0:3;
      uint64_t ABRQ0:1;
      uint64_t RQCP1:1;
      uint64_t TXOK1:1;
      uint64_t ALST1:1;
      uint64_t TERR1:1;
      uint64_t reservedSpace1:3;
      uint64_t ABRQ1:1;
      uint64_t RQCP2:1;
      uint64_t TXOK2:1;
      uint64_t ALST2:1;
      uint64_t TERR2:1;
      uint64_t reservedSpace2:3;
      uint64_t ABRQ2:1;
      uint64_t CODE:2;
      uint64_t TME0:1;
      uint64_t TME1:1;
      uint64_t TME2:1;
      uint64_t LOW0:1;
      uint64_t LOW1:1;
      uint64_t LOW2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMP0:2;
      uint64_t reservedSpace0:1;
      uint64_t FULL0:1;
      uint64_t FOVR0:1;
      uint64_t RFOM0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMP1:2;
      uint64_t reservedSpace0:1;
      uint64_t FULL1:1;
      uint64_t FOVR1:1;
      uint64_t RFOM1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMEIE:1;
      uint64_t FMPIE0:1;
      uint64_t FFIE0:1;
      uint64_t FOVIE0:1;
      uint64_t FMPIE1:1;
      uint64_t FFIE1:1;
      uint64_t FOVIE1:1;
      uint64_t reservedSpace0:1;
      uint64_t EWGIE:1;
      uint64_t EPVIE:1;
      uint64_t BOFIE:1;
      uint64_t LECIE:1;
      uint64_t reservedSpace1:3;
      uint64_t ERRIE:1;
      uint64_t WKUIE:1;
      uint64_t SLKIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EWGF:1;
      uint64_t EPVF:1;
      uint64_t BOFF:1;
      uint64_t reservedSpace0:1;
      uint64_t LEC:3;
      uint64_t reservedSpace1:9;
      uint64_t TEC:8;
      uint64_t REC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRP:10;
      uint64_t reservedSpace0:6;
      uint64_t TS1:4;
      uint64_t TS2:3;
      uint64_t reservedSpace1:1;
      uint64_t SJW:2;
      uint64_t reservedSpace2:4;
      uint64_t LBKM:1;
      uint64_t SILM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTR;

  uint8_t res0[352];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRQ:1;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t EXID:18;
      uint64_t STID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:4;
      uint64_t reservedSpace0:4;
      uint64_t TGT:1;
      uint64_t reservedSpace1:7;
      uint64_t TIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDT0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDL0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4:8;
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDH0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRQ:1;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t EXID:18;
      uint64_t STID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:4;
      uint64_t reservedSpace0:4;
      uint64_t TGT:1;
      uint64_t reservedSpace1:7;
      uint64_t TIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDT1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDL1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4:8;
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDH1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRQ:1;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t EXID:18;
      uint64_t STID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:4;
      uint64_t reservedSpace0:4;
      uint64_t TGT:1;
      uint64_t reservedSpace1:7;
      uint64_t TIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDT2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDL2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4:8;
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDH2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t EXID:18;
      uint64_t STID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RI0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:4;
      uint64_t reservedSpace0:4;
      uint64_t FMI:8;
      uint64_t TIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDT0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDL0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4:8;
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDH0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t EXID:18;
      uint64_t STID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RI1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:4;
      uint64_t reservedSpace0:4;
      uint64_t FMI:8;
      uint64_t TIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDT1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDL1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4:8;
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDH1R;

  uint8_t res1[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FINIT:1;
      uint64_t reservedSpace0:7;
      uint64_t CAN2SB:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FBM0:1;
      uint64_t FBM1:1;
      uint64_t FBM2:1;
      uint64_t FBM3:1;
      uint64_t FBM4:1;
      uint64_t FBM5:1;
      uint64_t FBM6:1;
      uint64_t FBM7:1;
      uint64_t FBM8:1;
      uint64_t FBM9:1;
      uint64_t FBM10:1;
      uint64_t FBM11:1;
      uint64_t FBM12:1;
      uint64_t FBM13:1;
      uint64_t FBM14:1;
      uint64_t FBM15:1;
      uint64_t FBM16:1;
      uint64_t FBM17:1;
      uint64_t FBM18:1;
      uint64_t FBM19:1;
      uint64_t FBM20:1;
      uint64_t FBM21:1;
      uint64_t FBM22:1;
      uint64_t FBM23:1;
      uint64_t FBM24:1;
      uint64_t FBM25:1;
      uint64_t FBM26:1;
      uint64_t FBM27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FM1R;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSC0:1;
      uint64_t FSC1:1;
      uint64_t FSC2:1;
      uint64_t FSC3:1;
      uint64_t FSC4:1;
      uint64_t FSC5:1;
      uint64_t FSC6:1;
      uint64_t FSC7:1;
      uint64_t FSC8:1;
      uint64_t FSC9:1;
      uint64_t FSC10:1;
      uint64_t FSC11:1;
      uint64_t FSC12:1;
      uint64_t FSC13:1;
      uint64_t FSC14:1;
      uint64_t FSC15:1;
      uint64_t FSC16:1;
      uint64_t FSC17:1;
      uint64_t FSC18:1;
      uint64_t FSC19:1;
      uint64_t FSC20:1;
      uint64_t FSC21:1;
      uint64_t FSC22:1;
      uint64_t FSC23:1;
      uint64_t FSC24:1;
      uint64_t FSC25:1;
      uint64_t FSC26:1;
      uint64_t FSC27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS1R;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FFA0:1;
      uint64_t FFA1:1;
      uint64_t FFA2:1;
      uint64_t FFA3:1;
      uint64_t FFA4:1;
      uint64_t FFA5:1;
      uint64_t FFA6:1;
      uint64_t FFA7:1;
      uint64_t FFA8:1;
      uint64_t FFA9:1;
      uint64_t FFA10:1;
      uint64_t FFA11:1;
      uint64_t FFA12:1;
      uint64_t FFA13:1;
      uint64_t FFA14:1;
      uint64_t FFA15:1;
      uint64_t FFA16:1;
      uint64_t FFA17:1;
      uint64_t FFA18:1;
      uint64_t FFA19:1;
      uint64_t FFA20:1;
      uint64_t FFA21:1;
      uint64_t FFA22:1;
      uint64_t FFA23:1;
      uint64_t FFA24:1;
      uint64_t FFA25:1;
      uint64_t FFA26:1;
      uint64_t FFA27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FFA1R;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACT0:1;
      uint64_t FACT1:1;
      uint64_t FACT2:1;
      uint64_t FACT3:1;
      uint64_t FACT4:1;
      uint64_t FACT5:1;
      uint64_t FACT6:1;
      uint64_t FACT7:1;
      uint64_t FACT8:1;
      uint64_t FACT9:1;
      uint64_t FACT10:1;
      uint64_t FACT11:1;
      uint64_t FACT12:1;
      uint64_t FACT13:1;
      uint64_t FACT14:1;
      uint64_t FACT15:1;
      uint64_t FACT16:1;
      uint64_t FACT17:1;
      uint64_t FACT18:1;
      uint64_t FACT19:1;
      uint64_t FACT20:1;
      uint64_t FACT21:1;
      uint64_t FACT22:1;
      uint64_t FACT23:1;
      uint64_t FACT24:1;
      uint64_t FACT25:1;
      uint64_t FACT26:1;
      uint64_t FACT27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FA1R;

  uint8_t res5[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F0R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F0R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F1R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F1R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F2R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F2R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F3R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F3R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F4R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F4R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F5R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F5R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F6R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F6R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F7R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F7R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F8R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F8R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F9R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F9R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F10R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F10R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F11R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F11R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F12R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F12R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F13R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F13R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F14R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F14R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F15R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F15R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F16R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F16R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F17R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F17R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F18R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F18R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F19R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F19R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F20R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F20R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F21R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F21R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F22R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F22R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F23R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F23R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F24R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F24R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F25R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F25R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F26R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F26R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F27R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F27R2;

};

#define CAN1 (*(volatile struct CAN1_tag *) 0x40006400)

struct CAN2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INRQ:1;
      uint64_t SLEEP:1;
      uint64_t TXFP:1;
      uint64_t RFLM:1;
      uint64_t NART:1;
      uint64_t AWUM:1;
      uint64_t ABOM:1;
      uint64_t TTCM:1;
      uint64_t reservedSpace0:7;
      uint64_t RESET:1;
      uint64_t DBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INAK:1;
      uint64_t SLAK:1;
      uint64_t ERRI:1;
      uint64_t WKUI:1;
      uint64_t SLAKI:1;
      uint64_t reservedSpace0:3;
      uint64_t TXM:1;
      uint64_t RXM:1;
      uint64_t SAMP:1;
      uint64_t RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RQCP0:1;
      uint64_t TXOK0:1;
      uint64_t ALST0:1;
      uint64_t TERR0:1;
      uint64_t reservedSpace0:3;
      uint64_t ABRQ0:1;
      uint64_t RQCP1:1;
      uint64_t TXOK1:1;
      uint64_t ALST1:1;
      uint64_t TERR1:1;
      uint64_t reservedSpace1:3;
      uint64_t ABRQ1:1;
      uint64_t RQCP2:1;
      uint64_t TXOK2:1;
      uint64_t ALST2:1;
      uint64_t TERR2:1;
      uint64_t reservedSpace2:3;
      uint64_t ABRQ2:1;
      uint64_t CODE:2;
      uint64_t TME0:1;
      uint64_t TME1:1;
      uint64_t TME2:1;
      uint64_t LOW0:1;
      uint64_t LOW1:1;
      uint64_t LOW2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMP0:2;
      uint64_t reservedSpace0:1;
      uint64_t FULL0:1;
      uint64_t FOVR0:1;
      uint64_t RFOM0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMP1:2;
      uint64_t reservedSpace0:1;
      uint64_t FULL1:1;
      uint64_t FOVR1:1;
      uint64_t RFOM1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMEIE:1;
      uint64_t FMPIE0:1;
      uint64_t FFIE0:1;
      uint64_t FOVIE0:1;
      uint64_t FMPIE1:1;
      uint64_t FFIE1:1;
      uint64_t FOVIE1:1;
      uint64_t reservedSpace0:1;
      uint64_t EWGIE:1;
      uint64_t EPVIE:1;
      uint64_t BOFIE:1;
      uint64_t LECIE:1;
      uint64_t reservedSpace1:3;
      uint64_t ERRIE:1;
      uint64_t WKUIE:1;
      uint64_t SLKIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EWGF:1;
      uint64_t EPVF:1;
      uint64_t BOFF:1;
      uint64_t reservedSpace0:1;
      uint64_t LEC:3;
      uint64_t reservedSpace1:9;
      uint64_t TEC:8;
      uint64_t REC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRP:10;
      uint64_t reservedSpace0:6;
      uint64_t TS1:4;
      uint64_t TS2:3;
      uint64_t reservedSpace1:1;
      uint64_t SJW:2;
      uint64_t reservedSpace2:4;
      uint64_t LBKM:1;
      uint64_t SILM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTR;

  uint8_t res0[352];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRQ:1;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t EXID:18;
      uint64_t STID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:4;
      uint64_t reservedSpace0:4;
      uint64_t TGT:1;
      uint64_t reservedSpace1:7;
      uint64_t TIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDT0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDL0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4:8;
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDH0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRQ:1;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t EXID:18;
      uint64_t STID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:4;
      uint64_t reservedSpace0:4;
      uint64_t TGT:1;
      uint64_t reservedSpace1:7;
      uint64_t TIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDT1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDL1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4:8;
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDH1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRQ:1;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t EXID:18;
      uint64_t STID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:4;
      uint64_t reservedSpace0:4;
      uint64_t TGT:1;
      uint64_t reservedSpace1:7;
      uint64_t TIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDT2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDL2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4:8;
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDH2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t EXID:18;
      uint64_t STID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RI0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:4;
      uint64_t reservedSpace0:4;
      uint64_t FMI:8;
      uint64_t TIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDT0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDL0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4:8;
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDH0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t EXID:18;
      uint64_t STID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RI1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:4;
      uint64_t reservedSpace0:4;
      uint64_t FMI:8;
      uint64_t TIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDT1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDL1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4:8;
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDH1R;

  uint8_t res1[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FINIT:1;
      uint64_t reservedSpace0:7;
      uint64_t CAN2SB:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FBM0:1;
      uint64_t FBM1:1;
      uint64_t FBM2:1;
      uint64_t FBM3:1;
      uint64_t FBM4:1;
      uint64_t FBM5:1;
      uint64_t FBM6:1;
      uint64_t FBM7:1;
      uint64_t FBM8:1;
      uint64_t FBM9:1;
      uint64_t FBM10:1;
      uint64_t FBM11:1;
      uint64_t FBM12:1;
      uint64_t FBM13:1;
      uint64_t FBM14:1;
      uint64_t FBM15:1;
      uint64_t FBM16:1;
      uint64_t FBM17:1;
      uint64_t FBM18:1;
      uint64_t FBM19:1;
      uint64_t FBM20:1;
      uint64_t FBM21:1;
      uint64_t FBM22:1;
      uint64_t FBM23:1;
      uint64_t FBM24:1;
      uint64_t FBM25:1;
      uint64_t FBM26:1;
      uint64_t FBM27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FM1R;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSC0:1;
      uint64_t FSC1:1;
      uint64_t FSC2:1;
      uint64_t FSC3:1;
      uint64_t FSC4:1;
      uint64_t FSC5:1;
      uint64_t FSC6:1;
      uint64_t FSC7:1;
      uint64_t FSC8:1;
      uint64_t FSC9:1;
      uint64_t FSC10:1;
      uint64_t FSC11:1;
      uint64_t FSC12:1;
      uint64_t FSC13:1;
      uint64_t FSC14:1;
      uint64_t FSC15:1;
      uint64_t FSC16:1;
      uint64_t FSC17:1;
      uint64_t FSC18:1;
      uint64_t FSC19:1;
      uint64_t FSC20:1;
      uint64_t FSC21:1;
      uint64_t FSC22:1;
      uint64_t FSC23:1;
      uint64_t FSC24:1;
      uint64_t FSC25:1;
      uint64_t FSC26:1;
      uint64_t FSC27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FS1R;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FFA0:1;
      uint64_t FFA1:1;
      uint64_t FFA2:1;
      uint64_t FFA3:1;
      uint64_t FFA4:1;
      uint64_t FFA5:1;
      uint64_t FFA6:1;
      uint64_t FFA7:1;
      uint64_t FFA8:1;
      uint64_t FFA9:1;
      uint64_t FFA10:1;
      uint64_t FFA11:1;
      uint64_t FFA12:1;
      uint64_t FFA13:1;
      uint64_t FFA14:1;
      uint64_t FFA15:1;
      uint64_t FFA16:1;
      uint64_t FFA17:1;
      uint64_t FFA18:1;
      uint64_t FFA19:1;
      uint64_t FFA20:1;
      uint64_t FFA21:1;
      uint64_t FFA22:1;
      uint64_t FFA23:1;
      uint64_t FFA24:1;
      uint64_t FFA25:1;
      uint64_t FFA26:1;
      uint64_t FFA27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FFA1R;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACT0:1;
      uint64_t FACT1:1;
      uint64_t FACT2:1;
      uint64_t FACT3:1;
      uint64_t FACT4:1;
      uint64_t FACT5:1;
      uint64_t FACT6:1;
      uint64_t FACT7:1;
      uint64_t FACT8:1;
      uint64_t FACT9:1;
      uint64_t FACT10:1;
      uint64_t FACT11:1;
      uint64_t FACT12:1;
      uint64_t FACT13:1;
      uint64_t FACT14:1;
      uint64_t FACT15:1;
      uint64_t FACT16:1;
      uint64_t FACT17:1;
      uint64_t FACT18:1;
      uint64_t FACT19:1;
      uint64_t FACT20:1;
      uint64_t FACT21:1;
      uint64_t FACT22:1;
      uint64_t FACT23:1;
      uint64_t FACT24:1;
      uint64_t FACT25:1;
      uint64_t FACT26:1;
      uint64_t FACT27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FA1R;

  uint8_t res5[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F0R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F0R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F1R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F1R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F2R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F2R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F3R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F3R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F4R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F4R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F5R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F5R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F6R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F6R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F7R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F7R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F8R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F8R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F9R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F9R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F10R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F10R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F11R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F11R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F12R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F12R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F13R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F13R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F14R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F14R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F15R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F15R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F16R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F16R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F17R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F17R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F18R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F18R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F19R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F19R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F20R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F20R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F21R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F21R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F22R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F22R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F23R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F23R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F24R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F24R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F25R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F25R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F26R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F26R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F27R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F27R2;

};

#define CAN2 (*(volatile struct CAN2_tag *) 0x40006800)

struct FLASH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LATENCY:3;
      uint64_t reservedSpace0:5;
      uint64_t PRFTEN:1;
      uint64_t ICEN:1;
      uint64_t DCEN:1;
      uint64_t ICRST:1;
      uint64_t DCRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPTKEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPTKEYR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOP:1;
      uint64_t OPERR:1;
      uint64_t reservedSpace0:2;
      uint64_t WRPERR:1;
      uint64_t PGAERR:1;
      uint64_t PGPERR:1;
      uint64_t PGSERR:1;
      uint64_t reservedSpace1:8;
      uint64_t BSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PG:1;
      uint64_t SER:1;
      uint64_t MER:1;
      uint64_t SNB:4;
      uint64_t reservedSpace0:1;
      uint64_t PSIZE:2;
      uint64_t reservedSpace1:6;
      uint64_t STRT:1;
      uint64_t reservedSpace2:7;
      uint64_t EOPIE:1;
      uint64_t ERRIE:1;
      uint64_t reservedSpace3:5;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPTLOCK:1;
      uint64_t OPTSTRT:1;
      uint64_t BOR_LEV:2;
      uint64_t reservedSpace0:1;
      uint64_t WDG_SW:1;
      uint64_t nRST_STOP:1;
      uint64_t nRST_STDBY:1;
      uint64_t RDP:8;
      uint64_t nWRP:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPTCR;

};

#define FLASH (*(volatile struct FLASH_tag *) 0x40023c00)

struct EXTI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0:1;
      uint64_t MR1:1;
      uint64_t MR2:1;
      uint64_t MR3:1;
      uint64_t MR4:1;
      uint64_t MR5:1;
      uint64_t MR6:1;
      uint64_t MR7:1;
      uint64_t MR8:1;
      uint64_t MR9:1;
      uint64_t MR10:1;
      uint64_t MR11:1;
      uint64_t MR12:1;
      uint64_t MR13:1;
      uint64_t MR14:1;
      uint64_t MR15:1;
      uint64_t MR16:1;
      uint64_t MR17:1;
      uint64_t MR18:1;
      uint64_t MR19:1;
      uint64_t MR20:1;
      uint64_t MR21:1;
      uint64_t MR22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0:1;
      uint64_t MR1:1;
      uint64_t MR2:1;
      uint64_t MR3:1;
      uint64_t MR4:1;
      uint64_t MR5:1;
      uint64_t MR6:1;
      uint64_t MR7:1;
      uint64_t MR8:1;
      uint64_t MR9:1;
      uint64_t MR10:1;
      uint64_t MR11:1;
      uint64_t MR12:1;
      uint64_t MR13:1;
      uint64_t MR14:1;
      uint64_t MR15:1;
      uint64_t MR16:1;
      uint64_t MR17:1;
      uint64_t MR18:1;
      uint64_t MR19:1;
      uint64_t MR20:1;
      uint64_t MR21:1;
      uint64_t MR22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR0:1;
      uint64_t TR1:1;
      uint64_t TR2:1;
      uint64_t TR3:1;
      uint64_t TR4:1;
      uint64_t TR5:1;
      uint64_t TR6:1;
      uint64_t TR7:1;
      uint64_t TR8:1;
      uint64_t TR9:1;
      uint64_t TR10:1;
      uint64_t TR11:1;
      uint64_t TR12:1;
      uint64_t TR13:1;
      uint64_t TR14:1;
      uint64_t TR15:1;
      uint64_t TR16:1;
      uint64_t TR17:1;
      uint64_t TR18:1;
      uint64_t TR19:1;
      uint64_t TR20:1;
      uint64_t TR21:1;
      uint64_t TR22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR0:1;
      uint64_t TR1:1;
      uint64_t TR2:1;
      uint64_t TR3:1;
      uint64_t TR4:1;
      uint64_t TR5:1;
      uint64_t TR6:1;
      uint64_t TR7:1;
      uint64_t TR8:1;
      uint64_t TR9:1;
      uint64_t TR10:1;
      uint64_t TR11:1;
      uint64_t TR12:1;
      uint64_t TR13:1;
      uint64_t TR14:1;
      uint64_t TR15:1;
      uint64_t TR16:1;
      uint64_t TR17:1;
      uint64_t TR18:1;
      uint64_t TR19:1;
      uint64_t TR20:1;
      uint64_t TR21:1;
      uint64_t TR22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWIER0:1;
      uint64_t SWIER1:1;
      uint64_t SWIER2:1;
      uint64_t SWIER3:1;
      uint64_t SWIER4:1;
      uint64_t SWIER5:1;
      uint64_t SWIER6:1;
      uint64_t SWIER7:1;
      uint64_t SWIER8:1;
      uint64_t SWIER9:1;
      uint64_t SWIER10:1;
      uint64_t SWIER11:1;
      uint64_t SWIER12:1;
      uint64_t SWIER13:1;
      uint64_t SWIER14:1;
      uint64_t SWIER15:1;
      uint64_t SWIER16:1;
      uint64_t SWIER17:1;
      uint64_t SWIER18:1;
      uint64_t SWIER19:1;
      uint64_t SWIER20:1;
      uint64_t SWIER21:1;
      uint64_t SWIER22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWIER;

  union
  {
    uint32_t R;
    struct
    {
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
      uint64_t PR16:1;
      uint64_t PR17:1;
      uint64_t PR18:1;
      uint64_t PR19:1;
      uint64_t PR20:1;
      uint64_t PR21:1;
      uint64_t PR22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

};

#define EXTI (*(volatile struct EXTI_tag *) 0x40013c00)

struct OTG_HS_HOST_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSLSPCS:2;
      uint64_t FSLSS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRIVL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HFIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRNUM:16;
      uint64_t FTREM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HFNUM;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTXFSAVL:16;
      uint64_t PTXQSAV:8;
      uint64_t PTXQTOP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HPTXSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HAINT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HAINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HAINTM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HAINTMSK;

  uint8_t res1[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCSTS:1;
      uint64_t PCDET:1;
      uint64_t PENA:1;
      uint64_t PENCHNG:1;
      uint64_t POCA:1;
      uint64_t POCCHNG:1;
      uint64_t PRES:1;
      uint64_t PSUSP:1;
      uint64_t PRST:1;
      uint64_t reservedSpace0:1;
      uint64_t PLSTS:2;
      uint64_t PPWR:1;
      uint64_t PTCTL:4;
      uint64_t PSPD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HPRT;

  uint8_t res2[188];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSDEV:1;
      uint64_t EPTYP:2;
      uint64_t MC:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCCHAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPLSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLITEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCSPLT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t CHH:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t NYET:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERR:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYET:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINTMSK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCTSIZ0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCDMA0;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSDEV:1;
      uint64_t EPTYP:2;
      uint64_t MC:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCCHAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPLSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLITEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCSPLT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t CHH:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t NYET:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERR:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYET:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINTMSK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCTSIZ1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCDMA1;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSDEV:1;
      uint64_t EPTYP:2;
      uint64_t MC:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCCHAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPLSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLITEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCSPLT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t CHH:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t NYET:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERR:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYET:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINTMSK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCTSIZ2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCDMA2;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSDEV:1;
      uint64_t EPTYP:2;
      uint64_t MC:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCCHAR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPLSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLITEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCSPLT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t CHH:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t NYET:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERR:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYET:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINTMSK3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCTSIZ3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCDMA3;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSDEV:1;
      uint64_t EPTYP:2;
      uint64_t MC:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCCHAR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPLSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLITEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCSPLT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t CHH:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t NYET:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERR:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYET:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINTMSK4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCTSIZ4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCDMA4;

  uint8_t res7[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSDEV:1;
      uint64_t EPTYP:2;
      uint64_t MC:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCCHAR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPLSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLITEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCSPLT5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t CHH:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t NYET:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINT5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERR:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYET:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINTMSK5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCTSIZ5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCDMA5;

  uint8_t res8[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSDEV:1;
      uint64_t EPTYP:2;
      uint64_t MC:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCCHAR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPLSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLITEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCSPLT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t CHH:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t NYET:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERR:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYET:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINTMSK6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCTSIZ6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCDMA6;

  uint8_t res9[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSDEV:1;
      uint64_t EPTYP:2;
      uint64_t MC:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCCHAR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPLSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLITEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCSPLT7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t CHH:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t NYET:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINT7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERR:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYET:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINTMSK7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCTSIZ7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCDMA7;

  uint8_t res10[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSDEV:1;
      uint64_t EPTYP:2;
      uint64_t MC:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCCHAR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPLSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLITEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCSPLT8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t CHH:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t NYET:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINT8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERR:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYET:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINTMSK8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCTSIZ8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCDMA8;

  uint8_t res11[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSDEV:1;
      uint64_t EPTYP:2;
      uint64_t MC:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCCHAR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPLSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLITEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCSPLT9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t CHH:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t NYET:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINT9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERR:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYET:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINTMSK9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCTSIZ9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCDMA9;

  uint8_t res12[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSDEV:1;
      uint64_t EPTYP:2;
      uint64_t MC:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCCHAR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPLSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLITEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCSPLT10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t CHH:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t NYET:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINT10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERR:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYET:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINTMSK10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCTSIZ10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCDMA10;

  uint8_t res13[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSDEV:1;
      uint64_t EPTYP:2;
      uint64_t MC:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCCHAR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPLSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLITEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCSPLT11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t CHH:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t NYET:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINT11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERR:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYET:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINTMSK11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCTSIZ11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCDMA11;

};

#define OTG_HS_HOST (*(volatile struct OTG_HS_HOST_tag *) 0x40040400)

struct OTG_HS_DEVICE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSPD:2;
      uint64_t NZLSOHSK:1;
      uint64_t reservedSpace0:1;
      uint64_t DAD:7;
      uint64_t PFIVL:2;
      uint64_t reservedSpace1:11;
      uint64_t PERSCHIVL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RWUSIG:1;
      uint64_t SDIS:1;
      uint64_t GINSTS:1;
      uint64_t GONSTS:1;
      uint64_t TCTL:3;
      uint64_t SGINAK:1;
      uint64_t CGINAK:1;
      uint64_t SGONAK:1;
      uint64_t CGONAK:1;
      uint64_t POPRGDNE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSPSTS:1;
      uint64_t ENUMSPD:2;
      uint64_t EERR:1;
      uint64_t reservedSpace0:4;
      uint64_t FNSOF:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DSTS;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t EPDM:1;
      uint64_t reservedSpace0:1;
      uint64_t TOM:1;
      uint64_t ITTXFEMSK:1;
      uint64_t INEPNMM:1;
      uint64_t INEPNEM:1;
      uint64_t reservedSpace1:1;
      uint64_t TXFURM:1;
      uint64_t BIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t EPDM:1;
      uint64_t reservedSpace0:1;
      uint64_t STUPM:1;
      uint64_t OTEPDM:1;
      uint64_t reservedSpace1:1;
      uint64_t B2BSTUP:1;
      uint64_t reservedSpace2:1;
      uint64_t OPEM:1;
      uint64_t BOIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DOEPMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPINT:16;
      uint64_t OEPINT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DAINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPM:16;
      uint64_t OEPM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DAINTMSK;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VBUSDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DVBUSDIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DVBUSP:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DVBUSPULSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NONISOTHREN:1;
      uint64_t ISOTHREN:1;
      uint64_t TXTHRLEN:9;
      uint64_t reservedSpace0:5;
      uint64_t RXTHREN:1;
      uint64_t RXTHRLEN:9;
      uint64_t reservedSpace1:1;
      uint64_t ARPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DTHRCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXFEM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPEMPMSK;

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
  } __attribute__((aligned(4))) OTG_HS_DEACHINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t IEP1INTM:1;
      uint64_t reservedSpace1:15;
      uint64_t OEP1INTM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DEACHINTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t EPDM:1;
      uint64_t reservedSpace0:1;
      uint64_t TOM:1;
      uint64_t ITTXFEMSK:1;
      uint64_t INEPNMM:1;
      uint64_t INEPNEM:1;
      uint64_t reservedSpace1:1;
      uint64_t TXFURM:1;
      uint64_t BIM:1;
      uint64_t reservedSpace2:3;
      uint64_t NAKM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPEACHMSK1;

  uint8_t res2[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t EPDM:1;
      uint64_t reservedSpace0:1;
      uint64_t TOM:1;
      uint64_t ITTXFEMSK:1;
      uint64_t INEPNMM:1;
      uint64_t INEPNEM:1;
      uint64_t reservedSpace1:1;
      uint64_t TXFURM:1;
      uint64_t BIM:1;
      uint64_t reservedSpace2:2;
      uint64_t BERRM:1;
      uint64_t NAKM:1;
      uint64_t NYETM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DOEPEACHMSK1;

  uint8_t res3[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t EONUM_DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t reservedSpace1:1;
      uint64_t Stall:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPCTL0;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t ITTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
      uint64_t TXFIFOUDRN:1;
      uint64_t BNA:1;
      uint64_t reservedSpace2:1;
      uint64_t PKTDRPSTS:1;
      uint64_t BERR:1;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPINT0;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:7;
      uint64_t reservedSpace0:12;
      uint64_t PKTCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPTSIZ0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPDMA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DTXFSTS0;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t EONUM_DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t reservedSpace1:1;
      uint64_t Stall:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPCTL1;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t ITTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
      uint64_t TXFIFOUDRN:1;
      uint64_t BNA:1;
      uint64_t reservedSpace2:1;
      uint64_t PKTDRPSTS:1;
      uint64_t BERR:1;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPINT1;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPTSIZ1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPDMA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DTXFSTS1;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t EONUM_DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t reservedSpace1:1;
      uint64_t Stall:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPCTL2;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t ITTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
      uint64_t TXFIFOUDRN:1;
      uint64_t BNA:1;
      uint64_t reservedSpace2:1;
      uint64_t PKTDRPSTS:1;
      uint64_t BERR:1;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPINT2;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPTSIZ2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPDMA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DTXFSTS2;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t EONUM_DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t reservedSpace1:1;
      uint64_t Stall:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPCTL3;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t ITTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
      uint64_t TXFIFOUDRN:1;
      uint64_t BNA:1;
      uint64_t reservedSpace2:1;
      uint64_t PKTDRPSTS:1;
      uint64_t BERR:1;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPINT3;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPTSIZ3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPDMA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DTXFSTS3;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t EONUM_DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t reservedSpace1:1;
      uint64_t Stall:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPCTL4;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t ITTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
      uint64_t TXFIFOUDRN:1;
      uint64_t BNA:1;
      uint64_t reservedSpace2:1;
      uint64_t PKTDRPSTS:1;
      uint64_t BERR:1;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPINT4;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPTSIZ4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPDMA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DTXFSTS4;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t EONUM_DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t reservedSpace1:1;
      uint64_t Stall:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPCTL5;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t ITTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
      uint64_t TXFIFOUDRN:1;
      uint64_t BNA:1;
      uint64_t reservedSpace2:1;
      uint64_t PKTDRPSTS:1;
      uint64_t BERR:1;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPINT5;

  uint8_t res20[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPTSIZ5;

  uint8_t res21[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DTXFSTS5;

  uint8_t res22[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t EONUM_DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t reservedSpace1:1;
      uint64_t Stall:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPCTL6;

  uint8_t res23[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t ITTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
      uint64_t TXFIFOUDRN:1;
      uint64_t BNA:1;
      uint64_t reservedSpace2:1;
      uint64_t PKTDRPSTS:1;
      uint64_t BERR:1;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPINT6;

  uint8_t res24[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t EONUM_DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t reservedSpace1:1;
      uint64_t Stall:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPCTL7;

  uint8_t res25[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t ITTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
      uint64_t TXFIFOUDRN:1;
      uint64_t BNA:1;
      uint64_t reservedSpace2:1;
      uint64_t PKTDRPSTS:1;
      uint64_t BERR:1;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DIEPINT7;

  uint8_t res26[276];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:2;
      uint64_t reservedSpace0:13;
      uint64_t USBAEP:1;
      uint64_t reservedSpace1:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t Stall:1;
      uint64_t reservedSpace2:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t reservedSpace3:2;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DOEPCTL0;

  uint8_t res27[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t STUP:1;
      uint64_t OTEPDIS:1;
      uint64_t reservedSpace1:1;
      uint64_t B2BSTUP:1;
      uint64_t reservedSpace2:7;
      uint64_t NYET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DOEPINT0;

  uint8_t res28[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:7;
      uint64_t reservedSpace0:12;
      uint64_t PKTCNT:1;
      uint64_t reservedSpace1:9;
      uint64_t STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DOEPTSIZ0;

  uint8_t res29[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t EONUM_DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t Stall:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DOEPCTL1;

  uint8_t res30[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t STUP:1;
      uint64_t OTEPDIS:1;
      uint64_t reservedSpace1:1;
      uint64_t B2BSTUP:1;
      uint64_t reservedSpace2:7;
      uint64_t NYET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DOEPINT1;

  uint8_t res31[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DOEPTSIZ1;

  uint8_t res32[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t EONUM_DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t Stall:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DOEPCTL2;

  uint8_t res33[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t STUP:1;
      uint64_t OTEPDIS:1;
      uint64_t reservedSpace1:1;
      uint64_t B2BSTUP:1;
      uint64_t reservedSpace2:7;
      uint64_t NYET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DOEPINT2;

  uint8_t res34[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DOEPTSIZ2;

  uint8_t res35[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t EONUM_DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t Stall:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DOEPCTL3;

  uint8_t res36[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t STUP:1;
      uint64_t OTEPDIS:1;
      uint64_t reservedSpace1:1;
      uint64_t B2BSTUP:1;
      uint64_t reservedSpace2:7;
      uint64_t NYET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DOEPINT3;

  uint8_t res37[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DOEPTSIZ3;

  uint8_t res38[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t STUP:1;
      uint64_t OTEPDIS:1;
      uint64_t reservedSpace1:1;
      uint64_t B2BSTUP:1;
      uint64_t reservedSpace2:7;
      uint64_t NYET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DOEPINT4;

  uint8_t res39[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DOEPTSIZ4;

  uint8_t res40[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t STUP:1;
      uint64_t OTEPDIS:1;
      uint64_t reservedSpace1:1;
      uint64_t B2BSTUP:1;
      uint64_t reservedSpace2:7;
      uint64_t NYET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DOEPINT5;

  uint8_t res41[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t STUP:1;
      uint64_t OTEPDIS:1;
      uint64_t reservedSpace1:1;
      uint64_t B2BSTUP:1;
      uint64_t reservedSpace2:7;
      uint64_t NYET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DOEPINT6;

  uint8_t res42[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t STUP:1;
      uint64_t OTEPDIS:1;
      uint64_t reservedSpace1:1;
      uint64_t B2BSTUP:1;
      uint64_t reservedSpace2:7;
      uint64_t NYET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_DOEPINT7;

};

#define OTG_HS_DEVICE (*(volatile struct OTG_HS_DEVICE_tag *) 0x40040800)

struct OTG_HS_PWRCLK_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STPPCLK:1;
      uint64_t GATEHCLK:1;
      uint64_t reservedSpace0:2;
      uint64_t PHYSUSP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_PCGCR;

};

#define OTG_HS_PWRCLK (*(volatile struct OTG_HS_PWRCLK_tag *) 0x40040e00)

struct NVIC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTLINESNUM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICTR;

  uint8_t res0[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISER2;

  uint8_t res1[116];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICER2;

  uint8_t res2[116];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISPR2;

  uint8_t res3[116];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPR2;

  uint8_t res4[116];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IABR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IABR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IABR2;

  uint8_t res5[244];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR19;

  uint8_t res6[2736];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTID:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STIR;

};

#define NVIC (*(volatile struct NVIC_tag *) 0xe000e004)

