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
      uint64_t IDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t reservedSpace0:2;
      uint64_t POLYSIZE:2;
      uint64_t REV_IN:2;
      uint64_t REV_OUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_INIT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POL;

};

#define CRC (*(volatile struct CRC_tag *) 0x40023000)

struct WWDG_tag
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
      uint64_t WVU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WIN:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WINR;

};

#define WWDG (*(volatile struct WWDG_tag *) 0x40002c00)

struct IWDG_tag
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
      uint64_t reservedSpace0:2;
      uint64_t EWI:1;
      uint64_t reservedSpace1:1;
      uint64_t WDGTB:3;
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

#define IWDG (*(volatile struct IWDG_tag *) 0x40003000)

struct I2C1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t TXIE:1;
      uint64_t RXIE:1;
      uint64_t ADDRIE:1;
      uint64_t NACKIE:1;
      uint64_t STOPIE:1;
      uint64_t TCIE:1;
      uint64_t ERRIE:1;
      uint64_t DNF:4;
      uint64_t ANFOFF:1;
      uint64_t reservedSpace0:1;
      uint64_t TXDMAEN:1;
      uint64_t RXDMAEN:1;
      uint64_t SBC:1;
      uint64_t NOSTRETCH:1;
      uint64_t WUPEN:1;
      uint64_t GCEN:1;
      uint64_t SMBHEN:1;
      uint64_t SMBDEN:1;
      uint64_t ALERTEN:1;
      uint64_t PECEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADD:10;
      uint64_t RD_WRN:1;
      uint64_t ADD10:1;
      uint64_t HEAD10R:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t NACK:1;
      uint64_t NBYTES:8;
      uint64_t RELOAD:1;
      uint64_t AUTOEND:1;
      uint64_t PECBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OA1:10;
      uint64_t OA1MODE:1;
      uint64_t reservedSpace0:4;
      uint64_t OA1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t OA2:7;
      uint64_t OA2MSK:3;
      uint64_t reservedSpace1:4;
      uint64_t OA2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCLL:8;
      uint64_t SCLH:8;
      uint64_t SDADEL:4;
      uint64_t SCLDEL:4;
      uint64_t reservedSpace0:4;
      uint64_t PRESC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMINGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMEOUTA:12;
      uint64_t TIDLE:1;
      uint64_t reservedSpace0:2;
      uint64_t TIMOUTEN:1;
      uint64_t TIMEOUTB:12;
      uint64_t reservedSpace1:3;
      uint64_t TEXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXE:1;
      uint64_t TXIS:1;
      uint64_t RXNE:1;
      uint64_t ADDR:1;
      uint64_t NACKF:1;
      uint64_t STOPF:1;
      uint64_t TC:1;
      uint64_t TCR:1;
      uint64_t BERR:1;
      uint64_t ARLO:1;
      uint64_t OVR:1;
      uint64_t PECERR:1;
      uint64_t TIMEOUT:1;
      uint64_t ALERT:1;
      uint64_t reservedSpace0:1;
      uint64_t BUSY:1;
      uint64_t DIR:1;
      uint64_t ADDCODE:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t ADDRCF:1;
      uint64_t NACKCF:1;
      uint64_t STOPCF:1;
      uint64_t reservedSpace1:2;
      uint64_t BERRCF:1;
      uint64_t ARLOCF:1;
      uint64_t OVRCF:1;
      uint64_t PECCF:1;
      uint64_t TIMOUTCF:1;
      uint64_t ALERTCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDR;

};

#define I2C1 (*(volatile struct I2C1_tag *) 0x40005400)

struct I2C2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t TXIE:1;
      uint64_t RXIE:1;
      uint64_t ADDRIE:1;
      uint64_t NACKIE:1;
      uint64_t STOPIE:1;
      uint64_t TCIE:1;
      uint64_t ERRIE:1;
      uint64_t DNF:4;
      uint64_t ANFOFF:1;
      uint64_t reservedSpace0:1;
      uint64_t TXDMAEN:1;
      uint64_t RXDMAEN:1;
      uint64_t SBC:1;
      uint64_t NOSTRETCH:1;
      uint64_t WUPEN:1;
      uint64_t GCEN:1;
      uint64_t SMBHEN:1;
      uint64_t SMBDEN:1;
      uint64_t ALERTEN:1;
      uint64_t PECEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADD:10;
      uint64_t RD_WRN:1;
      uint64_t ADD10:1;
      uint64_t HEAD10R:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t NACK:1;
      uint64_t NBYTES:8;
      uint64_t RELOAD:1;
      uint64_t AUTOEND:1;
      uint64_t PECBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OA1:10;
      uint64_t OA1MODE:1;
      uint64_t reservedSpace0:4;
      uint64_t OA1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t OA2:7;
      uint64_t OA2MSK:3;
      uint64_t reservedSpace1:4;
      uint64_t OA2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCLL:8;
      uint64_t SCLH:8;
      uint64_t SDADEL:4;
      uint64_t SCLDEL:4;
      uint64_t reservedSpace0:4;
      uint64_t PRESC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMINGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMEOUTA:12;
      uint64_t TIDLE:1;
      uint64_t reservedSpace0:2;
      uint64_t TIMOUTEN:1;
      uint64_t TIMEOUTB:12;
      uint64_t reservedSpace1:3;
      uint64_t TEXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXE:1;
      uint64_t TXIS:1;
      uint64_t RXNE:1;
      uint64_t ADDR:1;
      uint64_t NACKF:1;
      uint64_t STOPF:1;
      uint64_t TC:1;
      uint64_t TCR:1;
      uint64_t BERR:1;
      uint64_t ARLO:1;
      uint64_t OVR:1;
      uint64_t PECERR:1;
      uint64_t TIMEOUT:1;
      uint64_t ALERT:1;
      uint64_t reservedSpace0:1;
      uint64_t BUSY:1;
      uint64_t DIR:1;
      uint64_t ADDCODE:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t ADDRCF:1;
      uint64_t NACKCF:1;
      uint64_t STOPCF:1;
      uint64_t reservedSpace1:2;
      uint64_t BERRCF:1;
      uint64_t ARLOCF:1;
      uint64_t OVRCF:1;
      uint64_t PECCF:1;
      uint64_t TIMOUTCF:1;
      uint64_t ALERTCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDR;

};

#define I2C2 (*(volatile struct I2C2_tag *) 0x40005800)

struct I2C3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t TXIE:1;
      uint64_t RXIE:1;
      uint64_t ADDRIE:1;
      uint64_t NACKIE:1;
      uint64_t STOPIE:1;
      uint64_t TCIE:1;
      uint64_t ERRIE:1;
      uint64_t DNF:4;
      uint64_t ANFOFF:1;
      uint64_t reservedSpace0:1;
      uint64_t TXDMAEN:1;
      uint64_t RXDMAEN:1;
      uint64_t SBC:1;
      uint64_t NOSTRETCH:1;
      uint64_t WUPEN:1;
      uint64_t GCEN:1;
      uint64_t SMBHEN:1;
      uint64_t SMBDEN:1;
      uint64_t ALERTEN:1;
      uint64_t PECEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADD:10;
      uint64_t RD_WRN:1;
      uint64_t ADD10:1;
      uint64_t HEAD10R:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t NACK:1;
      uint64_t NBYTES:8;
      uint64_t RELOAD:1;
      uint64_t AUTOEND:1;
      uint64_t PECBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OA1:10;
      uint64_t OA1MODE:1;
      uint64_t reservedSpace0:4;
      uint64_t OA1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t OA2:7;
      uint64_t OA2MSK:3;
      uint64_t reservedSpace1:4;
      uint64_t OA2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCLL:8;
      uint64_t SCLH:8;
      uint64_t SDADEL:4;
      uint64_t SCLDEL:4;
      uint64_t reservedSpace0:4;
      uint64_t PRESC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMINGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMEOUTA:12;
      uint64_t TIDLE:1;
      uint64_t reservedSpace0:2;
      uint64_t TIMOUTEN:1;
      uint64_t TIMEOUTB:12;
      uint64_t reservedSpace1:3;
      uint64_t TEXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXE:1;
      uint64_t TXIS:1;
      uint64_t RXNE:1;
      uint64_t ADDR:1;
      uint64_t NACKF:1;
      uint64_t STOPF:1;
      uint64_t TC:1;
      uint64_t TCR:1;
      uint64_t BERR:1;
      uint64_t ARLO:1;
      uint64_t OVR:1;
      uint64_t PECERR:1;
      uint64_t TIMEOUT:1;
      uint64_t ALERT:1;
      uint64_t reservedSpace0:1;
      uint64_t BUSY:1;
      uint64_t DIR:1;
      uint64_t ADDCODE:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t ADDRCF:1;
      uint64_t NACKCF:1;
      uint64_t STOPCF:1;
      uint64_t reservedSpace1:2;
      uint64_t BERRCF:1;
      uint64_t ARLOCF:1;
      uint64_t OVRCF:1;
      uint64_t PECCF:1;
      uint64_t TIMOUTCF:1;
      uint64_t ALERTCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDR;

};

#define I2C3 (*(volatile struct I2C3_tag *) 0x40007800)

struct I2C4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t TXIE:1;
      uint64_t RXIE:1;
      uint64_t ADDRIE:1;
      uint64_t NACKIE:1;
      uint64_t STOPIE:1;
      uint64_t TCIE:1;
      uint64_t ERRIE:1;
      uint64_t DNF:4;
      uint64_t ANFOFF:1;
      uint64_t reservedSpace0:1;
      uint64_t TXDMAEN:1;
      uint64_t RXDMAEN:1;
      uint64_t SBC:1;
      uint64_t NOSTRETCH:1;
      uint64_t WUPEN:1;
      uint64_t GCEN:1;
      uint64_t SMBHEN:1;
      uint64_t SMBDEN:1;
      uint64_t ALERTEN:1;
      uint64_t PECEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADD:10;
      uint64_t RD_WRN:1;
      uint64_t ADD10:1;
      uint64_t HEAD10R:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t NACK:1;
      uint64_t NBYTES:8;
      uint64_t RELOAD:1;
      uint64_t AUTOEND:1;
      uint64_t PECBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OA1:10;
      uint64_t OA1MODE:1;
      uint64_t reservedSpace0:4;
      uint64_t OA1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t OA2:7;
      uint64_t OA2MSK:3;
      uint64_t reservedSpace1:4;
      uint64_t OA2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCLL:8;
      uint64_t SCLH:8;
      uint64_t SDADEL:4;
      uint64_t SCLDEL:4;
      uint64_t reservedSpace0:4;
      uint64_t PRESC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMINGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMEOUTA:12;
      uint64_t TIDLE:1;
      uint64_t reservedSpace0:2;
      uint64_t TIMOUTEN:1;
      uint64_t TIMEOUTB:12;
      uint64_t reservedSpace1:3;
      uint64_t TEXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXE:1;
      uint64_t TXIS:1;
      uint64_t RXNE:1;
      uint64_t ADDR:1;
      uint64_t NACKF:1;
      uint64_t STOPF:1;
      uint64_t TC:1;
      uint64_t TCR:1;
      uint64_t BERR:1;
      uint64_t ARLO:1;
      uint64_t OVR:1;
      uint64_t PECERR:1;
      uint64_t TIMEOUT:1;
      uint64_t ALERT:1;
      uint64_t reservedSpace0:1;
      uint64_t BUSY:1;
      uint64_t DIR:1;
      uint64_t ADDCODE:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t ADDRCF:1;
      uint64_t NACKCF:1;
      uint64_t STOPCF:1;
      uint64_t reservedSpace1:2;
      uint64_t BERRCF:1;
      uint64_t ARLOCF:1;
      uint64_t OVRCF:1;
      uint64_t PECCF:1;
      uint64_t TIMOUTCF:1;
      uint64_t ALERTCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDR;

};

#define I2C4 (*(volatile struct I2C4_tag *) 0x40008400)

struct FLASH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LATENCY:4;
      uint64_t reservedSpace0:4;
      uint64_t PRFTEN:1;
      uint64_t ICEN:1;
      uint64_t DCEN:1;
      uint64_t ICRST:1;
      uint64_t DCRST:1;
      uint64_t RUN_PD:1;
      uint64_t SLEEP_PD:1;
      uint64_t reservedSpace1:3;
      uint64_t DBG_SWEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDKEYR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDKEYR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPTKEYR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPTKEYR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOP:1;
      uint64_t OPERR:1;
      uint64_t reservedSpace0:1;
      uint64_t PROGERR:1;
      uint64_t WRPERR:1;
      uint64_t PGAERR:1;
      uint64_t SIZERR:1;
      uint64_t PGSERR:1;
      uint64_t MISERR:1;
      uint64_t FASTERR:1;
      uint64_t reservedSpace1:4;
      uint64_t RDERR:1;
      uint64_t OPTVERR:1;
      uint64_t BSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PG:1;
      uint64_t PER:1;
      uint64_t MER1:1;
      uint64_t PNB:7;
      uint64_t reservedSpace0:6;
      uint64_t STRT:1;
      uint64_t OPTSTRT:1;
      uint64_t FSTPG:1;
      uint64_t reservedSpace1:5;
      uint64_t EOPIE:1;
      uint64_t ERRIE:1;
      uint64_t RDERRIE:1;
      uint64_t OBL_LAUNCH:1;
      uint64_t SEC_PROT1:1;
      uint64_t reservedSpace2:1;
      uint64_t OPTLOCK:1;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR_ECC:19;
      uint64_t reservedSpace0:2;
      uint64_t BK_ECC:1;
      uint64_t SYSF_ECC:1;
      uint64_t reservedSpace1:1;
      uint64_t ECCIE:1;
      uint64_t reservedSpace2:3;
      uint64_t ECCC2:1;
      uint64_t ECCD2:1;
      uint64_t ECCC:1;
      uint64_t ECCD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDP:8;
      uint64_t BOR_LEV:3;
      uint64_t reservedSpace0:1;
      uint64_t nRST_STOP:1;
      uint64_t nRST_STDBY:1;
      uint64_t nRST_SHDW:1;
      uint64_t reservedSpace1:1;
      uint64_t IDWG_SW:1;
      uint64_t IWDG_STOP:1;
      uint64_t IWDG_STDBY:1;
      uint64_t WWDG_SW:1;
      uint64_t reservedSpace2:3;
      uint64_t nBOOT1:1;
      uint64_t SRAM2_PE:1;
      uint64_t SRAM2_RST:1;
      uint64_t nSWBOOT0:1;
      uint64_t nBOOT0:1;
      uint64_t NRST_MODE:2;
      uint64_t IRHEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCROP1_STRT:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCROP1SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCROP1_END:15;
      uint64_t reservedSpace0:16;
      uint64_t PCROP_RDP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCROP1ER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRP1A_STRT:7;
      uint64_t reservedSpace0:9;
      uint64_t WRP1A_END:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRP1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRP1B_STRT:7;
      uint64_t reservedSpace0:9;
      uint64_t WRP1B_END:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRP1BR;

  uint8_t res1[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC_SIZE1:8;
      uint64_t reservedSpace0:8;
      uint64_t BOOT_LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEC1R;

};

#define FLASH (*(volatile struct FLASH_tag *) 0x40022000)

struct DBGMCU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEV_ID:16;
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDCODE;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBG_TIMER2_STOP:1;
      uint64_t DBG_TIM3_STOP:1;
      uint64_t DBG_TIM4_STOP:1;
      uint64_t DBG_TIM5_STOP:1;
      uint64_t DBG_TIMER6_STOP:1;
      uint64_t DBG_TIM7_STOP:1;
      uint64_t reservedSpace0:4;
      uint64_t DBG_RTC_STOP:1;
      uint64_t DBG_WWDG_STOP:1;
      uint64_t DBG_IWDG_STOP:1;
      uint64_t reservedSpace1:8;
      uint64_t DBG_I2C1_STOP:1;
      uint64_t DBG_I2C2_STOP:1;
      uint64_t reservedSpace2:7;
      uint64_t DBG_I2C3_STOP:1;
      uint64_t DBG_LPTIMER_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1L_FZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DBG_I2C4_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1H_FZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t DBG_TIM1_STOP:1;
      uint64_t reservedSpace1:1;
      uint64_t DBG_TIM8_STOP:1;
      uint64_t reservedSpace2:2;
      uint64_t DBG_TIM15_STOP:1;
      uint64_t DBG_TIM16_STOP:1;
      uint64_t DBG_TIM17_STOP:1;
      uint64_t reservedSpace3:1;
      uint64_t DBG_TIM20_STOP:1;
      uint64_t reservedSpace4:5;
      uint64_t DBG_HRTIM0_STOP:1;
      uint64_t DBG_HRTIM1_STOP:1;
      uint64_t DBG_HRTIM2_STOP:1;
      uint64_t DBG_HRTIM3_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2_FZ;

};

#define DBGMCU (*(volatile struct DBGMCU_tag *) 0xe0042000)

struct RCC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HSION:1;
      uint64_t HSIKERON:1;
      uint64_t HSIRDY:1;
      uint64_t reservedSpace1:5;
      uint64_t HSEON:1;
      uint64_t HSERDY:1;
      uint64_t HSEBYP:1;
      uint64_t HSECSSON:1;
      uint64_t reservedSpace2:4;
      uint64_t PLLSYSON:1;
      uint64_t PLLSYSRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t HSICAL0:8;
      uint64_t HSITRIM:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICSCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SW:2;
      uint64_t SWS:2;
      uint64_t HPRE:4;
      uint64_t PPRE1:3;
      uint64_t PPRE2:3;
      uint64_t reservedSpace0:10;
      uint64_t MCOSEL:4;
      uint64_t MCOPRE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLLSRC:2;
      uint64_t reservedSpace0:2;
      uint64_t PLLSYSM:4;
      uint64_t PLLSYSN:7;
      uint64_t reservedSpace1:1;
      uint64_t PLLPEN:1;
      uint64_t PLLSYSP:1;
      uint64_t reservedSpace2:2;
      uint64_t PLLSYSQEN:1;
      uint64_t PLLSYSQ:2;
      uint64_t reservedSpace3:1;
      uint64_t PLLSYSREN:1;
      uint64_t PLLSYSR:2;
      uint64_t PLLSYSPDIV:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLSYSCFGR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSIRDYIE:1;
      uint64_t LSERDYIE:1;
      uint64_t reservedSpace0:1;
      uint64_t HSIRDYIE:1;
      uint64_t HSERDYIE:1;
      uint64_t PLLSYSRDYIE:1;
      uint64_t reservedSpace1:3;
      uint64_t LSECSSIE:1;
      uint64_t RC48RDYIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSIRDYF:1;
      uint64_t LSERDYF:1;
      uint64_t reservedSpace0:1;
      uint64_t HSIRDYF:1;
      uint64_t HSERDYF:1;
      uint64_t PLLSYSRDYF:1;
      uint64_t reservedSpace1:2;
      uint64_t HSECSSF:1;
      uint64_t LSECSSF:1;
      uint64_t RC48RDYF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSIRDYC:1;
      uint64_t LSERDYC:1;
      uint64_t reservedSpace0:1;
      uint64_t HSIRDYC:1;
      uint64_t HSERDYC:1;
      uint64_t PLLSYSRDYC:1;
      uint64_t reservedSpace1:2;
      uint64_t HSECSSC:1;
      uint64_t LSECSSC:1;
      uint64_t RC48RDYC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CICR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1RST:1;
      uint64_t DMA2RST:1;
      uint64_t DMAMUX1RST:1;
      uint64_t CORDICRST:1;
      uint64_t MATRIXRST:1;
      uint64_t reservedSpace0:3;
      uint64_t FLITFRST:1;
      uint64_t reservedSpace1:3;
      uint64_t CRCRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB1RSTR;

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
      uint64_t reservedSpace0:6;
      uint64_t ADC12RST:1;
      uint64_t ADC345RST:1;
      uint64_t reservedSpace1:1;
      uint64_t DAC1RST:1;
      uint64_t DAC2RST:1;
      uint64_t DAC3RST:1;
      uint64_t DAC4RST:1;
      uint64_t reservedSpace2:4;
      uint64_t CRYPTRST:1;
      uint64_t reservedSpace3:1;
      uint64_t RNGRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB2RSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMCRST:1;
      uint64_t reservedSpace0:7;
      uint64_t QUADSPI1RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB3RSTR;

  uint8_t res2[4];

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
      uint64_t reservedSpace0:2;
      uint64_t CRSRST:1;
      uint64_t reservedSpace1:5;
      uint64_t SPI2RST:1;
      uint64_t SPI3RST:1;
      uint64_t reservedSpace2:1;
      uint64_t USART2RST:1;
      uint64_t USART3RST:1;
      uint64_t UART4RST:1;
      uint64_t UART5RST:1;
      uint64_t I2C1RST:1;
      uint64_t I2C2RST:1;
      uint64_t USBDRST:1;
      uint64_t reservedSpace3:1;
      uint64_t FDCANRST:1;
      uint64_t reservedSpace4:2;
      uint64_t PWRRST:1;
      uint64_t reservedSpace5:1;
      uint64_t I2C3_bitfield:1;
      uint64_t LPTIM1RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1RSTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPUART1RST:1;
      uint64_t I2C4RST:1;
      uint64_t reservedSpace0:6;
      uint64_t USBPDRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1RSTR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCFGRST:1;
      uint64_t reservedSpace0:10;
      uint64_t TIM1RST:1;
      uint64_t SPI1RST:1;
      uint64_t TIM8RST:1;
      uint64_t USART1RST:1;
      uint64_t SPI4RST:1;
      uint64_t TIM15RST:1;
      uint64_t TIM16RST:1;
      uint64_t TIM17RST:1;
      uint64_t reservedSpace1:1;
      uint64_t TIM20RST:1;
      uint64_t SAI1RST:1;
      uint64_t reservedSpace2:4;
      uint64_t HRTIM1RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2RSTR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1EN:1;
      uint64_t DMA2EN:1;
      uint64_t DMAMUXEN:1;
      uint64_t CORDICEN:1;
      uint64_t FMACEN:1;
      uint64_t reservedSpace0:3;
      uint64_t FLITFEN:1;
      uint64_t reservedSpace1:3;
      uint64_t CRCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB1ENR;

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
      uint64_t reservedSpace0:6;
      uint64_t ADC12EN:1;
      uint64_t ADC345EN:1;
      uint64_t reservedSpace1:1;
      uint64_t DAC1_bitfield:1;
      uint64_t DAC2_bitfield:1;
      uint64_t DAC3_bitfield:1;
      uint64_t DAC4_bitfield:1;
      uint64_t reservedSpace2:4;
      uint64_t CRYPTEN:1;
      uint64_t reservedSpace3:1;
      uint64_t RNGEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB2ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMCEN:1;
      uint64_t reservedSpace0:7;
      uint64_t QUADSPI1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB3ENR;

  uint8_t res4[4];

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
      uint64_t reservedSpace0:2;
      uint64_t CRSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t RTCAPBEN:1;
      uint64_t WWDGEN:1;
      uint64_t reservedSpace2:2;
      uint64_t SPI2EN:1;
      uint64_t SP3EN:1;
      uint64_t reservedSpace3:1;
      uint64_t USART2EN:1;
      uint64_t USART3EN:1;
      uint64_t UART4EN:1;
      uint64_t UART5EN:1;
      uint64_t I2C1EN:1;
      uint64_t I2C2EN:1;
      uint64_t USBDEN:1;
      uint64_t reservedSpace4:1;
      uint64_t FDCANEN:1;
      uint64_t reservedSpace5:2;
      uint64_t PWREN:1;
      uint64_t reservedSpace6:1;
      uint64_t I2C3_bitfield:1;
      uint64_t LPTIM1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1ENR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPUART1EN:1;
      uint64_t I2C4EN:1;
      uint64_t reservedSpace0:6;
      uint64_t USBPDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1ENR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCFGEN:1;
      uint64_t reservedSpace0:10;
      uint64_t TIM1EN:1;
      uint64_t SPI1EN:1;
      uint64_t TIM8EN:1;
      uint64_t USART1EN:1;
      uint64_t SPI4EN:1;
      uint64_t TIM15EN:1;
      uint64_t TIM16EN:1;
      uint64_t TIM17EN:1;
      uint64_t reservedSpace1:1;
      uint64_t TIM20EN:1;
      uint64_t SAI1EN:1;
      uint64_t reservedSpace2:4;
      uint64_t HRTIMEREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2ENR;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1SMEN:1;
      uint64_t DMA2SMEN:1;
      uint64_t DMAMUX1SMEN:1;
      uint64_t CORDICSMEN:1;
      uint64_t FMACSMEN:1;
      uint64_t reservedSpace0:3;
      uint64_t FLASHSMEN:1;
      uint64_t SRAM1SMEN:1;
      uint64_t reservedSpace1:2;
      uint64_t CRCSMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB1SMENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIOASMEN:1;
      uint64_t GPIOBSMEN:1;
      uint64_t GPIOCSMEN:1;
      uint64_t GPIODSMEN:1;
      uint64_t GPIOESMEN:1;
      uint64_t GPIOFSMEN:1;
      uint64_t GPIOGSMEN:1;
      uint64_t reservedSpace0:2;
      uint64_t SRAM2SMEN:1;
      uint64_t SRAM3SMEN:1;
      uint64_t reservedSpace1:2;
      uint64_t AD12CSMEN:1;
      uint64_t ADC345SMEN:1;
      uint64_t reservedSpace2:1;
      uint64_t DAC1SMEN:1;
      uint64_t DAC2SMEN:1;
      uint64_t DAC3SMEN:1;
      uint64_t DAC4SMEN:1;
      uint64_t reservedSpace3:4;
      uint64_t CRYPTSMEN:1;
      uint64_t reservedSpace4:1;
      uint64_t RNGSMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB2SMENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMCSMEN:1;
      uint64_t reservedSpace0:7;
      uint64_t QUADSPI1SMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB3SMENR;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM2SMEN:1;
      uint64_t TIM3SMEN:1;
      uint64_t TIM4SMEN:1;
      uint64_t TIM5SMEN:1;
      uint64_t TIM6SMEN:1;
      uint64_t TIM7SMEN:1;
      uint64_t reservedSpace0:2;
      uint64_t CRSSMEN:1;
      uint64_t reservedSpace1:1;
      uint64_t RTCAPBSMEN:1;
      uint64_t WWDGSMEN:1;
      uint64_t reservedSpace2:2;
      uint64_t SPI2SMEN:1;
      uint64_t SP3SMEN:1;
      uint64_t reservedSpace3:1;
      uint64_t USART2SMEN:1;
      uint64_t USART3SMEN:1;
      uint64_t UART4SMEN:1;
      uint64_t UART5SMEN:1;
      uint64_t I2C1SMEN:1;
      uint64_t I2C2SMEN:1;
      uint64_t I2C3SMEN:1;
      uint64_t reservedSpace4:1;
      uint64_t FDCANSMEN:1;
      uint64_t reservedSpace5:2;
      uint64_t PWRSMEN:1;
      uint64_t reservedSpace6:1;
      uint64_t I2C3SMEN_3:1;
      uint64_t LPTIM1SMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1SMENR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPUART1SMEN:1;
      uint64_t I2C4SMEN:1;
      uint64_t reservedSpace0:6;
      uint64_t USBPDSMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1SMENR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCFGSMEN:1;
      uint64_t reservedSpace0:10;
      uint64_t TIM1SMEN:1;
      uint64_t SPI1SMEN:1;
      uint64_t TIM8SMEN:1;
      uint64_t USART1SMEN:1;
      uint64_t SPI4SMEN:1;
      uint64_t TIM15SMEN:1;
      uint64_t TIM16SMEN:1;
      uint64_t TIM17SMEN:1;
      uint64_t reservedSpace1:1;
      uint64_t TIM20SMEN:1;
      uint64_t SAI1SMEN:1;
      uint64_t reservedSpace2:4;
      uint64_t HRTIMERSMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2SMENR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USART1SEL:2;
      uint64_t USART2SEL:2;
      uint64_t USART3SEL:2;
      uint64_t UART4SEL:2;
      uint64_t UART5SEL:2;
      uint64_t LPUART1SEL:2;
      uint64_t I2C1SEL:2;
      uint64_t I2C2SEL:2;
      uint64_t I2C3SEL:2;
      uint64_t LPTIM1SEL:2;
      uint64_t SAISEL:2;
      uint64_t SPISEL:2;
      uint64_t FDCANSEL:2;
      uint64_t CLK48SEL:2;
      uint64_t ADCSEL:2;
      uint64_t ADC345SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCIPR1;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSEON:1;
      uint64_t LSERDY:1;
      uint64_t LSEBYP:1;
      uint64_t LSEDRV:2;
      uint64_t LSECSSON:1;
      uint64_t LSECSSD:1;
      uint64_t reservedSpace0:1;
      uint64_t RTCSEL:2;
      uint64_t reservedSpace1:5;
      uint64_t RTCEN:1;
      uint64_t VSWRST:1;
      uint64_t reservedSpace2:7;
      uint64_t LSCCOEN:1;
      uint64_t LSCOSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSION:1;
      uint64_t LSIRDY:1;
      uint64_t reservedSpace0:21;
      uint64_t RMVF:1;
      uint64_t reservedSpace1:1;
      uint64_t OBLRSTF:1;
      uint64_t PADRSTF:1;
      uint64_t BORRSTF:1;
      uint64_t SFTRSTF:1;
      uint64_t WDGRSTF:1;
      uint64_t WWDGRSTF:1;
      uint64_t LPWRSTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RC48ON:1;
      uint64_t RC48RDY:1;
      uint64_t reservedSpace0:5;
      uint64_t RC48CAL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C4SEL:2;
      uint64_t reservedSpace0:18;
      uint64_t QUADSPISEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCIPR2;

};

#define RCC (*(volatile struct RCC_tag *) 0x40021000)

struct PWR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPMS:3;
      uint64_t reservedSpace0:5;
      uint64_t DBP:1;
      uint64_t VOS:2;
      uint64_t reservedSpace1:3;
      uint64_t LPR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PVDE:1;
      uint64_t PLS:3;
      uint64_t PVMEN1:1;
      uint64_t PVMEN2:1;
      uint64_t PVMEN3:1;
      uint64_t PVMEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EWUP1:1;
      uint64_t EWUP2:1;
      uint64_t EWUP3:1;
      uint64_t EWUP4:1;
      uint64_t EWUP5:1;
      uint64_t reservedSpace0:3;
      uint64_t RRS:1;
      uint64_t reservedSpace1:1;
      uint64_t APC:1;
      uint64_t reservedSpace2:2;
      uint64_t UCPD1_STDBY:1;
      uint64_t UCPD1_DBDIS:1;
      uint64_t EIWUL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP1:1;
      uint64_t WP2:1;
      uint64_t WP3:1;
      uint64_t WP4:1;
      uint64_t WP5:1;
      uint64_t reservedSpace0:3;
      uint64_t VBE:1;
      uint64_t VBRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WUF1:1;
      uint64_t WUF2:1;
      uint64_t WUF3:1;
      uint64_t WUF4:1;
      uint64_t WUF5:1;
      uint64_t reservedSpace0:3;
      uint64_t SBF:1;
      uint64_t reservedSpace1:6;
      uint64_t WUFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t REGLPS:1;
      uint64_t REGLPF:1;
      uint64_t VOSF:1;
      uint64_t PVDO:1;
      uint64_t PVMO1:1;
      uint64_t PVMO2:1;
      uint64_t PVMO3:1;
      uint64_t PVMO4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWUF1:1;
      uint64_t CWUF2:1;
      uint64_t CWUF3:1;
      uint64_t CWUF4:1;
      uint64_t CWUF5:1;
      uint64_t reservedSpace0:3;
      uint64_t CSBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PU0:1;
      uint64_t PU1:1;
      uint64_t PU2:1;
      uint64_t PU3:1;
      uint64_t PU4:1;
      uint64_t PU5:1;
      uint64_t PU6:1;
      uint64_t PU7:1;
      uint64_t PU8:1;
      uint64_t PU9:1;
      uint64_t PU10:1;
      uint64_t PU11:1;
      uint64_t PU12:1;
      uint64_t PU13:1;
      uint64_t reservedSpace0:1;
      uint64_t PU15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUCRA;

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
      uint64_t reservedSpace0:1;
      uint64_t PD14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PU0:1;
      uint64_t PU1:1;
      uint64_t PU2:1;
      uint64_t PU3:1;
      uint64_t PU4:1;
      uint64_t PU5:1;
      uint64_t PU6:1;
      uint64_t PU7:1;
      uint64_t PU8:1;
      uint64_t PU9:1;
      uint64_t PU10:1;
      uint64_t PU11:1;
      uint64_t PU12:1;
      uint64_t PU13:1;
      uint64_t PU14:1;
      uint64_t PU15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUCRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD0:1;
      uint64_t PD1:1;
      uint64_t PD2:1;
      uint64_t PD3:1;
      uint64_t reservedSpace0:1;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PU0:1;
      uint64_t PU1:1;
      uint64_t PU2:1;
      uint64_t PU3:1;
      uint64_t PU4:1;
      uint64_t PU5:1;
      uint64_t PU6:1;
      uint64_t PU7:1;
      uint64_t PU8:1;
      uint64_t PU9:1;
      uint64_t PU10:1;
      uint64_t PU11:1;
      uint64_t PU12:1;
      uint64_t PU13:1;
      uint64_t PU14:1;
      uint64_t PU15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUCRC;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PU0:1;
      uint64_t PU1:1;
      uint64_t PU2:1;
      uint64_t PU3:1;
      uint64_t PU4:1;
      uint64_t PU5:1;
      uint64_t PU6:1;
      uint64_t PU7:1;
      uint64_t PU8:1;
      uint64_t PU9:1;
      uint64_t PU10:1;
      uint64_t PU11:1;
      uint64_t PU12:1;
      uint64_t PU13:1;
      uint64_t PU14:1;
      uint64_t PU15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUCRD;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PU0:1;
      uint64_t PU1:1;
      uint64_t PU2:1;
      uint64_t PU3:1;
      uint64_t PU4:1;
      uint64_t PU5:1;
      uint64_t PU6:1;
      uint64_t PU7:1;
      uint64_t PU8:1;
      uint64_t PU9:1;
      uint64_t PU10:1;
      uint64_t PU11:1;
      uint64_t PU12:1;
      uint64_t PU13:1;
      uint64_t PU14:1;
      uint64_t PU15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUCRE;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCRE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PU0:1;
      uint64_t PU1:1;
      uint64_t PU2:1;
      uint64_t PU3:1;
      uint64_t PU4:1;
      uint64_t PU5:1;
      uint64_t PU6:1;
      uint64_t PU7:1;
      uint64_t PU8:1;
      uint64_t PU9:1;
      uint64_t PU10:1;
      uint64_t PU11:1;
      uint64_t PU12:1;
      uint64_t PU13:1;
      uint64_t PU14:1;
      uint64_t PU15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUCRF;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCRF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PU0:1;
      uint64_t PU1:1;
      uint64_t PU2:1;
      uint64_t PU3:1;
      uint64_t PU4:1;
      uint64_t PU5:1;
      uint64_t PU6:1;
      uint64_t PU7:1;
      uint64_t PU8:1;
      uint64_t PU9:1;
      uint64_t PU10:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUCRG;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCRG;

  uint8_t res1[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R1MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR5;

};

#define PWR (*(volatile struct PWR_tag *) 0x40007000)

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
      uint64_t reservedSpace1:1;
      uint64_t CED:1;
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

struct AES_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t DATATYPE:2;
      uint64_t MODE:2;
      uint64_t CHMOD:2;
      uint64_t CCFC:1;
      uint64_t ERRC:1;
      uint64_t CCFIE:1;
      uint64_t ERRIE:1;
      uint64_t DMAINEN:1;
      uint64_t DMAOUTEN:1;
      uint64_t GCMPH:2;
      uint64_t reservedSpace0:1;
      uint64_t CHMOD_2:1;
      uint64_t reservedSpace1:1;
      uint64_t KEYSIZE:1;
      uint64_t reservedSpace2:1;
      uint64_t NPBLB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCF:1;
      uint64_t RDERR:1;
      uint64_t WRERR:1;
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_DINR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DINR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_DOUTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_KEYR0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_KEYR1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_KEYR2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_KEYR3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_IVR0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IVR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_IVR1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IVR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_IVR2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IVR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_IVR3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IVR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUSP0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUSP1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUSP2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUSP3R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUSP4R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUSP5R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUSP6R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUSP7R;

};

#define AES (*(volatile struct AES_tag *) 0x50060000)

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

  union
  {
    uint32_t R;
    struct
    {
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
  } __attribute__((aligned(4))) BRR;

};

#define GPIOA (*(volatile struct GPIOA_tag *) 0x48000000)

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

  union
  {
    uint32_t R;
    struct
    {
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
  } __attribute__((aligned(4))) BRR;

};

#define GPIOB (*(volatile struct GPIOB_tag *) 0x48000400)

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

  union
  {
    uint32_t R;
    struct
    {
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
  } __attribute__((aligned(4))) BRR;

};

#define GPIOC (*(volatile struct GPIOC_tag *) 0x48000800)

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

  union
  {
    uint32_t R;
    struct
    {
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
  } __attribute__((aligned(4))) BRR;

};

#define GPIOD (*(volatile struct GPIOD_tag *) 0x48000c00)

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

  union
  {
    uint32_t R;
    struct
    {
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
  } __attribute__((aligned(4))) BRR;

};

#define GPIOE (*(volatile struct GPIOE_tag *) 0x48001000)

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

  union
  {
    uint32_t R;
    struct
    {
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
  } __attribute__((aligned(4))) BRR;

};

#define GPIOF (*(volatile struct GPIOF_tag *) 0x48001400)

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

  union
  {
    uint32_t R;
    struct
    {
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
  } __attribute__((aligned(4))) BRR;

};

#define GPIOG (*(volatile struct GPIOG_tag *) 0x48001800)

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
      uint64_t reservedSpace1:3;
      uint64_t UIFREMAP:1;
      uint64_t DITHEN:1;
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
      uint64_t reservedSpace0:15;
      uint64_t UIFCPY:1;
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
      uint64_t reservedSpace1:3;
      uint64_t UIFREMAP:1;
      uint64_t DITHEN:1;
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
      uint64_t reservedSpace0:15;
      uint64_t UIFCPY:1;
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

struct LPTIMER1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPM:1;
      uint64_t ARRM:1;
      uint64_t EXTTRIG:1;
      uint64_t CMPOK:1;
      uint64_t ARROK:1;
      uint64_t UP:1;
      uint64_t DOWN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPMCF:1;
      uint64_t ARRMCF:1;
      uint64_t EXTTRIGCF:1;
      uint64_t CMPOKCF:1;
      uint64_t ARROKCF:1;
      uint64_t UPCF:1;
      uint64_t DOWNCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPMIE:1;
      uint64_t ARRMIE:1;
      uint64_t EXTTRIGIE:1;
      uint64_t CMPOKIE:1;
      uint64_t ARROKIE:1;
      uint64_t UPIE:1;
      uint64_t DOWNIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKSEL:1;
      uint64_t CKPOL:2;
      uint64_t CKFLT:2;
      uint64_t reservedSpace0:1;
      uint64_t TRGFLT:2;
      uint64_t reservedSpace1:1;
      uint64_t PRESC:3;
      uint64_t reservedSpace2:1;
      uint64_t TRIGSEL:4;
      uint64_t TRIGEN:2;
      uint64_t TIMOUT:1;
      uint64_t WAVE:1;
      uint64_t WAVPOL:1;
      uint64_t PRELOAD:1;
      uint64_t COUNTMODE:1;
      uint64_t ENC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t SNGSTRT:1;
      uint64_t CNTSTRT:1;
      uint64_t COUNTRST:1;
      uint64_t RSTARE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ARR;

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
      uint64_t IN1:1;
      uint64_t IN2:1;
      uint64_t IN1_2_1:2;
      uint64_t IN2_2_1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OR;

};

#define LPTIMER1 (*(volatile struct LPTIMER1_tag *) 0x40007c00)

struct USART1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t UE:1;
      uint64_t UESM:1;
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
      uint64_t M0:1;
      uint64_t MME:1;
      uint64_t CMIE:1;
      uint64_t OVER8:1;
      uint64_t DEDT0:1;
      uint64_t DEDT1:1;
      uint64_t DEDT2:1;
      uint64_t DEDT3:1;
      uint64_t DEDT4:1;
      uint64_t DEAT0:1;
      uint64_t DEAT1:1;
      uint64_t DEAT2:1;
      uint64_t DEAT3:1;
      uint64_t DEAT4:1;
      uint64_t RTOIE:1;
      uint64_t EOBIE:1;
      uint64_t M1:1;
      uint64_t FIFOEN:1;
      uint64_t TXFEIE:1;
      uint64_t RXFFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLVEN:1;
      uint64_t reservedSpace0:2;
      uint64_t DIS_NSS:1;
      uint64_t ADDM7:1;
      uint64_t LBDL:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t LBCL:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t CLKEN:1;
      uint64_t STOP:2;
      uint64_t LINEN:1;
      uint64_t SWAP:1;
      uint64_t RXINV:1;
      uint64_t TXINV:1;
      uint64_t TAINV:1;
      uint64_t MSBFIRST:1;
      uint64_t ABREN:1;
      uint64_t ABRMOD0:1;
      uint64_t ABRMOD1:1;
      uint64_t RTOEN:1;
      uint64_t ADD0_3:4;
      uint64_t ADD4_7:4;
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
      uint64_t OVRDIS:1;
      uint64_t DDRE:1;
      uint64_t DEM:1;
      uint64_t DEP:1;
      uint64_t reservedSpace0:1;
      uint64_t SCARCNT:3;
      uint64_t WUS:2;
      uint64_t WUFIE:1;
      uint64_t TXFTIE:1;
      uint64_t TCBGTIE:1;
      uint64_t RXFTCFG:3;
      uint64_t RXFTIE:1;
      uint64_t TXFTCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

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
      uint64_t PSC:8;
      uint64_t GT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTO:24;
      uint64_t BLEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ABRRQ:1;
      uint64_t SBKRQ:1;
      uint64_t MMRQ:1;
      uint64_t RXFRQ:1;
      uint64_t TXFRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RQR;

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
      uint64_t LBDF:1;
      uint64_t CTSIF:1;
      uint64_t CTS:1;
      uint64_t RTOF:1;
      uint64_t EOBF:1;
      uint64_t UDR:1;
      uint64_t ABRE:1;
      uint64_t ABRF:1;
      uint64_t BUSY:1;
      uint64_t CMF:1;
      uint64_t SBKF:1;
      uint64_t RWU:1;
      uint64_t WUF:1;
      uint64_t TEACK:1;
      uint64_t REACK:1;
      uint64_t TXFE:1;
      uint64_t RXFF:1;
      uint64_t TCBGT:1;
      uint64_t RXFT:1;
      uint64_t TXFT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PECF:1;
      uint64_t FECF:1;
      uint64_t NCF:1;
      uint64_t ORECF:1;
      uint64_t IDLECF:1;
      uint64_t TXFECF:1;
      uint64_t TCCF:1;
      uint64_t TCBGTCF:1;
      uint64_t LBDCF:1;
      uint64_t CTSCF:1;
      uint64_t reservedSpace0:1;
      uint64_t RTOCF:1;
      uint64_t EOBCF:1;
      uint64_t UDRCF:1;
      uint64_t reservedSpace1:3;
      uint64_t CMCF:1;
      uint64_t reservedSpace2:2;
      uint64_t WUCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESCALER:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRESC;

};

#define USART1 (*(volatile struct USART1_tag *) 0x40013800)

struct USART2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t UE:1;
      uint64_t UESM:1;
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
      uint64_t M0:1;
      uint64_t MME:1;
      uint64_t CMIE:1;
      uint64_t OVER8:1;
      uint64_t DEDT0:1;
      uint64_t DEDT1:1;
      uint64_t DEDT2:1;
      uint64_t DEDT3:1;
      uint64_t DEDT4:1;
      uint64_t DEAT0:1;
      uint64_t DEAT1:1;
      uint64_t DEAT2:1;
      uint64_t DEAT3:1;
      uint64_t DEAT4:1;
      uint64_t RTOIE:1;
      uint64_t EOBIE:1;
      uint64_t M1:1;
      uint64_t FIFOEN:1;
      uint64_t TXFEIE:1;
      uint64_t RXFFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLVEN:1;
      uint64_t reservedSpace0:2;
      uint64_t DIS_NSS:1;
      uint64_t ADDM7:1;
      uint64_t LBDL:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t LBCL:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t CLKEN:1;
      uint64_t STOP:2;
      uint64_t LINEN:1;
      uint64_t SWAP:1;
      uint64_t RXINV:1;
      uint64_t TXINV:1;
      uint64_t TAINV:1;
      uint64_t MSBFIRST:1;
      uint64_t ABREN:1;
      uint64_t ABRMOD0:1;
      uint64_t ABRMOD1:1;
      uint64_t RTOEN:1;
      uint64_t ADD0_3:4;
      uint64_t ADD4_7:4;
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
      uint64_t OVRDIS:1;
      uint64_t DDRE:1;
      uint64_t DEM:1;
      uint64_t DEP:1;
      uint64_t reservedSpace0:1;
      uint64_t SCARCNT:3;
      uint64_t WUS:2;
      uint64_t WUFIE:1;
      uint64_t TXFTIE:1;
      uint64_t TCBGTIE:1;
      uint64_t RXFTCFG:3;
      uint64_t RXFTIE:1;
      uint64_t TXFTCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

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
      uint64_t PSC:8;
      uint64_t GT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTO:24;
      uint64_t BLEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ABRRQ:1;
      uint64_t SBKRQ:1;
      uint64_t MMRQ:1;
      uint64_t RXFRQ:1;
      uint64_t TXFRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RQR;

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
      uint64_t LBDF:1;
      uint64_t CTSIF:1;
      uint64_t CTS:1;
      uint64_t RTOF:1;
      uint64_t EOBF:1;
      uint64_t UDR:1;
      uint64_t ABRE:1;
      uint64_t ABRF:1;
      uint64_t BUSY:1;
      uint64_t CMF:1;
      uint64_t SBKF:1;
      uint64_t RWU:1;
      uint64_t WUF:1;
      uint64_t TEACK:1;
      uint64_t REACK:1;
      uint64_t TXFE:1;
      uint64_t RXFF:1;
      uint64_t TCBGT:1;
      uint64_t RXFT:1;
      uint64_t TXFT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PECF:1;
      uint64_t FECF:1;
      uint64_t NCF:1;
      uint64_t ORECF:1;
      uint64_t IDLECF:1;
      uint64_t TXFECF:1;
      uint64_t TCCF:1;
      uint64_t TCBGTCF:1;
      uint64_t LBDCF:1;
      uint64_t CTSCF:1;
      uint64_t reservedSpace0:1;
      uint64_t RTOCF:1;
      uint64_t EOBCF:1;
      uint64_t UDRCF:1;
      uint64_t reservedSpace1:3;
      uint64_t CMCF:1;
      uint64_t reservedSpace2:2;
      uint64_t WUCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESCALER:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRESC;

};

#define USART2 (*(volatile struct USART2_tag *) 0x40004400)

struct USART3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t UE:1;
      uint64_t UESM:1;
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
      uint64_t M0:1;
      uint64_t MME:1;
      uint64_t CMIE:1;
      uint64_t OVER8:1;
      uint64_t DEDT0:1;
      uint64_t DEDT1:1;
      uint64_t DEDT2:1;
      uint64_t DEDT3:1;
      uint64_t DEDT4:1;
      uint64_t DEAT0:1;
      uint64_t DEAT1:1;
      uint64_t DEAT2:1;
      uint64_t DEAT3:1;
      uint64_t DEAT4:1;
      uint64_t RTOIE:1;
      uint64_t EOBIE:1;
      uint64_t M1:1;
      uint64_t FIFOEN:1;
      uint64_t TXFEIE:1;
      uint64_t RXFFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLVEN:1;
      uint64_t reservedSpace0:2;
      uint64_t DIS_NSS:1;
      uint64_t ADDM7:1;
      uint64_t LBDL:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t LBCL:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t CLKEN:1;
      uint64_t STOP:2;
      uint64_t LINEN:1;
      uint64_t SWAP:1;
      uint64_t RXINV:1;
      uint64_t TXINV:1;
      uint64_t TAINV:1;
      uint64_t MSBFIRST:1;
      uint64_t ABREN:1;
      uint64_t ABRMOD0:1;
      uint64_t ABRMOD1:1;
      uint64_t RTOEN:1;
      uint64_t ADD0_3:4;
      uint64_t ADD4_7:4;
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
      uint64_t OVRDIS:1;
      uint64_t DDRE:1;
      uint64_t DEM:1;
      uint64_t DEP:1;
      uint64_t reservedSpace0:1;
      uint64_t SCARCNT:3;
      uint64_t WUS:2;
      uint64_t WUFIE:1;
      uint64_t TXFTIE:1;
      uint64_t TCBGTIE:1;
      uint64_t RXFTCFG:3;
      uint64_t RXFTIE:1;
      uint64_t TXFTCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

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
      uint64_t PSC:8;
      uint64_t GT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTO:24;
      uint64_t BLEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ABRRQ:1;
      uint64_t SBKRQ:1;
      uint64_t MMRQ:1;
      uint64_t RXFRQ:1;
      uint64_t TXFRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RQR;

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
      uint64_t LBDF:1;
      uint64_t CTSIF:1;
      uint64_t CTS:1;
      uint64_t RTOF:1;
      uint64_t EOBF:1;
      uint64_t UDR:1;
      uint64_t ABRE:1;
      uint64_t ABRF:1;
      uint64_t BUSY:1;
      uint64_t CMF:1;
      uint64_t SBKF:1;
      uint64_t RWU:1;
      uint64_t WUF:1;
      uint64_t TEACK:1;
      uint64_t REACK:1;
      uint64_t TXFE:1;
      uint64_t RXFF:1;
      uint64_t TCBGT:1;
      uint64_t RXFT:1;
      uint64_t TXFT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PECF:1;
      uint64_t FECF:1;
      uint64_t NCF:1;
      uint64_t ORECF:1;
      uint64_t IDLECF:1;
      uint64_t TXFECF:1;
      uint64_t TCCF:1;
      uint64_t TCBGTCF:1;
      uint64_t LBDCF:1;
      uint64_t CTSCF:1;
      uint64_t reservedSpace0:1;
      uint64_t RTOCF:1;
      uint64_t EOBCF:1;
      uint64_t UDRCF:1;
      uint64_t reservedSpace1:3;
      uint64_t CMCF:1;
      uint64_t reservedSpace2:2;
      uint64_t WUCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESCALER:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRESC;

};

#define USART3 (*(volatile struct USART3_tag *) 0x40004800)

struct UART4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t UE:1;
      uint64_t UESM:1;
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
      uint64_t M0:1;
      uint64_t MME:1;
      uint64_t CMIE:1;
      uint64_t OVER8:1;
      uint64_t DEDT0:1;
      uint64_t DEDT1:1;
      uint64_t DEDT2:1;
      uint64_t DEDT3:1;
      uint64_t DEDT4:1;
      uint64_t DEAT0:1;
      uint64_t DEAT1:1;
      uint64_t DEAT2:1;
      uint64_t DEAT3:1;
      uint64_t DEAT4:1;
      uint64_t RTOIE:1;
      uint64_t EOBIE:1;
      uint64_t M1:1;
      uint64_t FIFOEN:1;
      uint64_t TXFEIE:1;
      uint64_t RXFFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLVEN:1;
      uint64_t reservedSpace0:2;
      uint64_t DIS_NSS:1;
      uint64_t ADDM7:1;
      uint64_t LBDL:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t LBCL:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t CLKEN:1;
      uint64_t STOP:2;
      uint64_t LINEN:1;
      uint64_t SWAP:1;
      uint64_t RXINV:1;
      uint64_t TXINV:1;
      uint64_t TAINV:1;
      uint64_t MSBFIRST:1;
      uint64_t ABREN:1;
      uint64_t ABRMOD0:1;
      uint64_t ABRMOD1:1;
      uint64_t RTOEN:1;
      uint64_t ADD0_3:4;
      uint64_t ADD4_7:4;
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
      uint64_t OVRDIS:1;
      uint64_t DDRE:1;
      uint64_t DEM:1;
      uint64_t DEP:1;
      uint64_t reservedSpace0:1;
      uint64_t SCARCNT:3;
      uint64_t WUS:2;
      uint64_t WUFIE:1;
      uint64_t TXFTIE:1;
      uint64_t TCBGTIE:1;
      uint64_t RXFTCFG:3;
      uint64_t RXFTIE:1;
      uint64_t TXFTCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

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
      uint64_t PSC:8;
      uint64_t GT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTO:24;
      uint64_t BLEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ABRRQ:1;
      uint64_t SBKRQ:1;
      uint64_t MMRQ:1;
      uint64_t RXFRQ:1;
      uint64_t TXFRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RQR;

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
      uint64_t LBDF:1;
      uint64_t CTSIF:1;
      uint64_t CTS:1;
      uint64_t RTOF:1;
      uint64_t EOBF:1;
      uint64_t UDR:1;
      uint64_t ABRE:1;
      uint64_t ABRF:1;
      uint64_t BUSY:1;
      uint64_t CMF:1;
      uint64_t SBKF:1;
      uint64_t RWU:1;
      uint64_t WUF:1;
      uint64_t TEACK:1;
      uint64_t REACK:1;
      uint64_t TXFE:1;
      uint64_t RXFF:1;
      uint64_t TCBGT:1;
      uint64_t RXFT:1;
      uint64_t TXFT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PECF:1;
      uint64_t FECF:1;
      uint64_t NCF:1;
      uint64_t ORECF:1;
      uint64_t IDLECF:1;
      uint64_t TXFECF:1;
      uint64_t TCCF:1;
      uint64_t TCBGTCF:1;
      uint64_t LBDCF:1;
      uint64_t CTSCF:1;
      uint64_t reservedSpace0:1;
      uint64_t RTOCF:1;
      uint64_t EOBCF:1;
      uint64_t UDRCF:1;
      uint64_t reservedSpace1:3;
      uint64_t CMCF:1;
      uint64_t reservedSpace2:2;
      uint64_t WUCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESCALER:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRESC;

};

#define UART4 (*(volatile struct UART4_tag *) 0x40004c00)

struct UART5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t UE:1;
      uint64_t UESM:1;
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
      uint64_t M0:1;
      uint64_t MME:1;
      uint64_t CMIE:1;
      uint64_t OVER8:1;
      uint64_t DEDT0:1;
      uint64_t DEDT1:1;
      uint64_t DEDT2:1;
      uint64_t DEDT3:1;
      uint64_t DEDT4:1;
      uint64_t DEAT0:1;
      uint64_t DEAT1:1;
      uint64_t DEAT2:1;
      uint64_t DEAT3:1;
      uint64_t DEAT4:1;
      uint64_t RTOIE:1;
      uint64_t EOBIE:1;
      uint64_t M1:1;
      uint64_t FIFOEN:1;
      uint64_t TXFEIE:1;
      uint64_t RXFFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLVEN:1;
      uint64_t reservedSpace0:2;
      uint64_t DIS_NSS:1;
      uint64_t ADDM7:1;
      uint64_t LBDL:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t LBCL:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t CLKEN:1;
      uint64_t STOP:2;
      uint64_t LINEN:1;
      uint64_t SWAP:1;
      uint64_t RXINV:1;
      uint64_t TXINV:1;
      uint64_t TAINV:1;
      uint64_t MSBFIRST:1;
      uint64_t ABREN:1;
      uint64_t ABRMOD0:1;
      uint64_t ABRMOD1:1;
      uint64_t RTOEN:1;
      uint64_t ADD0_3:4;
      uint64_t ADD4_7:4;
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
      uint64_t OVRDIS:1;
      uint64_t DDRE:1;
      uint64_t DEM:1;
      uint64_t DEP:1;
      uint64_t reservedSpace0:1;
      uint64_t SCARCNT:3;
      uint64_t WUS:2;
      uint64_t WUFIE:1;
      uint64_t TXFTIE:1;
      uint64_t TCBGTIE:1;
      uint64_t RXFTCFG:3;
      uint64_t RXFTIE:1;
      uint64_t TXFTCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

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
      uint64_t PSC:8;
      uint64_t GT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTO:24;
      uint64_t BLEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ABRRQ:1;
      uint64_t SBKRQ:1;
      uint64_t MMRQ:1;
      uint64_t RXFRQ:1;
      uint64_t TXFRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RQR;

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
      uint64_t LBDF:1;
      uint64_t CTSIF:1;
      uint64_t CTS:1;
      uint64_t RTOF:1;
      uint64_t EOBF:1;
      uint64_t UDR:1;
      uint64_t ABRE:1;
      uint64_t ABRF:1;
      uint64_t BUSY:1;
      uint64_t CMF:1;
      uint64_t SBKF:1;
      uint64_t RWU:1;
      uint64_t WUF:1;
      uint64_t TEACK:1;
      uint64_t REACK:1;
      uint64_t TXFE:1;
      uint64_t RXFF:1;
      uint64_t TCBGT:1;
      uint64_t RXFT:1;
      uint64_t TXFT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PECF:1;
      uint64_t FECF:1;
      uint64_t NCF:1;
      uint64_t ORECF:1;
      uint64_t IDLECF:1;
      uint64_t TXFECF:1;
      uint64_t TCCF:1;
      uint64_t TCBGTCF:1;
      uint64_t LBDCF:1;
      uint64_t CTSCF:1;
      uint64_t reservedSpace0:1;
      uint64_t RTOCF:1;
      uint64_t EOBCF:1;
      uint64_t UDRCF:1;
      uint64_t reservedSpace1:3;
      uint64_t CMCF:1;
      uint64_t reservedSpace2:2;
      uint64_t WUCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESCALER:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRESC;

};

#define UART5 (*(volatile struct UART5_tag *) 0x40005000)

struct LPUART1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t UE:1;
      uint64_t UESM:1;
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
      uint64_t M0:1;
      uint64_t MME:1;
      uint64_t CMIE:1;
      uint64_t reservedSpace0:1;
      uint64_t DEDT0:1;
      uint64_t DEDT1:1;
      uint64_t DEDT2:1;
      uint64_t DEDT3:1;
      uint64_t DEDT4:1;
      uint64_t DEAT0:1;
      uint64_t DEAT1:1;
      uint64_t DEAT2:1;
      uint64_t DEAT3:1;
      uint64_t DEAT4:1;
      uint64_t reservedSpace1:2;
      uint64_t M1:1;
      uint64_t FIFOEN:1;
      uint64_t TXFEIE:1;
      uint64_t RXFFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t ADDM7:1;
      uint64_t reservedSpace1:7;
      uint64_t STOP:2;
      uint64_t reservedSpace2:1;
      uint64_t SWAP:1;
      uint64_t RXINV:1;
      uint64_t TXINV:1;
      uint64_t TAINV:1;
      uint64_t MSBFIRST:1;
      uint64_t reservedSpace3:4;
      uint64_t ADD0_3:4;
      uint64_t ADD4_7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIE:1;
      uint64_t reservedSpace0:2;
      uint64_t HDSEL:1;
      uint64_t reservedSpace1:2;
      uint64_t DMAR:1;
      uint64_t DMAT:1;
      uint64_t RTSE:1;
      uint64_t CTSE:1;
      uint64_t CTSIE:1;
      uint64_t reservedSpace2:1;
      uint64_t OVRDIS:1;
      uint64_t DDRE:1;
      uint64_t DEM:1;
      uint64_t DEP:1;
      uint64_t reservedSpace3:4;
      uint64_t WUS:2;
      uint64_t WUFIE:1;
      uint64_t TXFTIE:1;
      uint64_t reservedSpace4:1;
      uint64_t RXFTCFG:3;
      uint64_t RXFTIE:1;
      uint64_t TXFTCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRR:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SBKRQ:1;
      uint64_t MMRQ:1;
      uint64_t RXFRQ:1;
      uint64_t TXFRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RQR;

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
      uint64_t reservedSpace0:1;
      uint64_t CTSIF:1;
      uint64_t CTS:1;
      uint64_t reservedSpace1:5;
      uint64_t BUSY:1;
      uint64_t CMF:1;
      uint64_t SBKF:1;
      uint64_t RWU:1;
      uint64_t WUF:1;
      uint64_t TEACK:1;
      uint64_t REACK:1;
      uint64_t TXFE:1;
      uint64_t RXFF:1;
      uint64_t reservedSpace2:1;
      uint64_t RXFT:1;
      uint64_t TXFT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PECF:1;
      uint64_t FECF:1;
      uint64_t NCF:1;
      uint64_t ORECF:1;
      uint64_t IDLECF:1;
      uint64_t reservedSpace0:1;
      uint64_t TCCF:1;
      uint64_t reservedSpace1:2;
      uint64_t CTSCF:1;
      uint64_t reservedSpace2:7;
      uint64_t CMCF:1;
      uint64_t reservedSpace3:2;
      uint64_t WUCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESCALER:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRESC;

};

#define LPUART1 (*(volatile struct LPUART1_tag *) 0x40008000)

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
      uint64_t NSSP:1;
      uint64_t FRF:1;
      uint64_t ERRIE:1;
      uint64_t RXNEIE:1;
      uint64_t TXEIE:1;
      uint64_t DS:4;
      uint64_t FRXTH:1;
      uint64_t LDMA_RX:1;
      uint64_t LDMA_TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNE:1;
      uint64_t TXE:1;
      uint64_t reservedSpace0:2;
      uint64_t CRCERR:1;
      uint64_t MODF:1;
      uint64_t OVR:1;
      uint64_t BSY:1;
      uint64_t TIFRFE:1;
      uint64_t FRLVL:2;
      uint64_t FTLVL:2;
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

struct SPI4_tag
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
      uint64_t NSSP:1;
      uint64_t FRF:1;
      uint64_t ERRIE:1;
      uint64_t RXNEIE:1;
      uint64_t TXEIE:1;
      uint64_t DS:4;
      uint64_t FRXTH:1;
      uint64_t LDMA_RX:1;
      uint64_t LDMA_TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNE:1;
      uint64_t TXE:1;
      uint64_t reservedSpace0:2;
      uint64_t CRCERR:1;
      uint64_t MODF:1;
      uint64_t OVR:1;
      uint64_t BSY:1;
      uint64_t TIFRFE:1;
      uint64_t FRLVL:2;
      uint64_t FTLVL:2;
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

#define SPI4 (*(volatile struct SPI4_tag *) 0x40013c00)

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
      uint64_t NSSP:1;
      uint64_t FRF:1;
      uint64_t ERRIE:1;
      uint64_t RXNEIE:1;
      uint64_t TXEIE:1;
      uint64_t DS:4;
      uint64_t FRXTH:1;
      uint64_t LDMA_RX:1;
      uint64_t LDMA_TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNE:1;
      uint64_t TXE:1;
      uint64_t reservedSpace0:2;
      uint64_t CRCERR:1;
      uint64_t MODF:1;
      uint64_t OVR:1;
      uint64_t BSY:1;
      uint64_t TIFRFE:1;
      uint64_t FRLVL:2;
      uint64_t FTLVL:2;
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
      uint64_t NSSP:1;
      uint64_t FRF:1;
      uint64_t ERRIE:1;
      uint64_t RXNEIE:1;
      uint64_t TXEIE:1;
      uint64_t DS:4;
      uint64_t FRXTH:1;
      uint64_t LDMA_RX:1;
      uint64_t LDMA_TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNE:1;
      uint64_t TXE:1;
      uint64_t reservedSpace0:2;
      uint64_t CRCERR:1;
      uint64_t MODF:1;
      uint64_t OVR:1;
      uint64_t BSY:1;
      uint64_t TIFRFE:1;
      uint64_t FRLVL:2;
      uint64_t FTLVL:2;
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

struct EXTI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM0:1;
      uint64_t IM1:1;
      uint64_t IM2:1;
      uint64_t IM3:1;
      uint64_t IM4:1;
      uint64_t IM5:1;
      uint64_t IM6:1;
      uint64_t IM7:1;
      uint64_t IM8:1;
      uint64_t IM9:1;
      uint64_t IM10:1;
      uint64_t IM11:1;
      uint64_t IM12:1;
      uint64_t IM13:1;
      uint64_t IM14:1;
      uint64_t IM15:1;
      uint64_t IM16:1;
      uint64_t IM17:1;
      uint64_t IM18:1;
      uint64_t IM19:1;
      uint64_t IM20:1;
      uint64_t IM21:1;
      uint64_t IM22:1;
      uint64_t IM23:1;
      uint64_t IM24:1;
      uint64_t IM25:1;
      uint64_t IM26:1;
      uint64_t IM27:1;
      uint64_t IM28:1;
      uint64_t IM29:1;
      uint64_t IM30:1;
      uint64_t IM31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM0:1;
      uint64_t EM1:1;
      uint64_t EM2:1;
      uint64_t EM3:1;
      uint64_t EM4:1;
      uint64_t EM5:1;
      uint64_t EM6:1;
      uint64_t EM7:1;
      uint64_t EM8:1;
      uint64_t EM9:1;
      uint64_t EM10:1;
      uint64_t EM11:1;
      uint64_t EM12:1;
      uint64_t EM13:1;
      uint64_t EM14:1;
      uint64_t EM15:1;
      uint64_t EM16:1;
      uint64_t EM17:1;
      uint64_t EM18:1;
      uint64_t EM19:1;
      uint64_t EM20:1;
      uint64_t EM21:1;
      uint64_t EM22:1;
      uint64_t EM23:1;
      uint64_t EM24:1;
      uint64_t EM25:1;
      uint64_t EM26:1;
      uint64_t EM27:1;
      uint64_t EM28:1;
      uint64_t EM29:1;
      uint64_t EM30:1;
      uint64_t EM31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RT0:1;
      uint64_t RT1:1;
      uint64_t RT2:1;
      uint64_t RT3:1;
      uint64_t RT4:1;
      uint64_t RT5:1;
      uint64_t RT6:1;
      uint64_t RT7:1;
      uint64_t RT8:1;
      uint64_t RT9:1;
      uint64_t RT10:1;
      uint64_t RT11:1;
      uint64_t RT12:1;
      uint64_t RT13:1;
      uint64_t RT14:1;
      uint64_t RT15:1;
      uint64_t RT16:1;
      uint64_t reservedSpace0:1;
      uint64_t RT18:1;
      uint64_t RT19:1;
      uint64_t RT20:1;
      uint64_t RT21:1;
      uint64_t RT22:1;
      uint64_t reservedSpace1:6;
      uint64_t RT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FT0:1;
      uint64_t FT1:1;
      uint64_t FT2:1;
      uint64_t FT3:1;
      uint64_t FT4:1;
      uint64_t FT5:1;
      uint64_t FT6:1;
      uint64_t FT7:1;
      uint64_t FT8:1;
      uint64_t FT9:1;
      uint64_t FT10:1;
      uint64_t FT11:1;
      uint64_t FT12:1;
      uint64_t FT13:1;
      uint64_t FT14:1;
      uint64_t FT15:1;
      uint64_t FT16:1;
      uint64_t reservedSpace0:1;
      uint64_t FT18:1;
      uint64_t FT19:1;
      uint64_t FT20:1;
      uint64_t FT21:1;
      uint64_t FT22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWI0:1;
      uint64_t SWI1:1;
      uint64_t SWI2:1;
      uint64_t SWI3:1;
      uint64_t SWI4:1;
      uint64_t SWI5:1;
      uint64_t SWI6:1;
      uint64_t SWI7:1;
      uint64_t SWI8:1;
      uint64_t SWI9:1;
      uint64_t SWI10:1;
      uint64_t SWI11:1;
      uint64_t SWI12:1;
      uint64_t SWI13:1;
      uint64_t SWI14:1;
      uint64_t SWI15:1;
      uint64_t SWI16:1;
      uint64_t reservedSpace0:1;
      uint64_t SWI18:1;
      uint64_t SWI19:1;
      uint64_t SWI20:1;
      uint64_t SWI21:1;
      uint64_t SWI22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWIER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIF0:1;
      uint64_t PIF1:1;
      uint64_t PIF2:1;
      uint64_t PIF3:1;
      uint64_t PIF4:1;
      uint64_t PIF5:1;
      uint64_t PIF6:1;
      uint64_t PIF7:1;
      uint64_t PIF8:1;
      uint64_t PIF9:1;
      uint64_t PIF10:1;
      uint64_t PIF11:1;
      uint64_t PIF12:1;
      uint64_t PIF13:1;
      uint64_t PIF14:1;
      uint64_t PIF15:1;
      uint64_t PIF16:1;
      uint64_t reservedSpace0:1;
      uint64_t PIF18:1;
      uint64_t PIF19:1;
      uint64_t PIF20:1;
      uint64_t PIF21:1;
      uint64_t PIF22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR1;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM32:1;
      uint64_t IM33:1;
      uint64_t IM34:1;
      uint64_t IM35:1;
      uint64_t IM36:1;
      uint64_t IM37:1;
      uint64_t IM38:1;
      uint64_t IM39:1;
      uint64_t IM40:1;
      uint64_t IM41:1;
      uint64_t IM42:1;
      uint64_t IM43:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM32:1;
      uint64_t EM33:1;
      uint64_t EM34:1;
      uint64_t EM35:1;
      uint64_t EM36:1;
      uint64_t EM37:1;
      uint64_t EM38:1;
      uint64_t EM39:1;
      uint64_t EM40:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RT32:1;
      uint64_t RT33:1;
      uint64_t reservedSpace0:4;
      uint64_t RT38:1;
      uint64_t RT39:1;
      uint64_t RT40:1;
      uint64_t RT41:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t FT35:1;
      uint64_t FT36:1;
      uint64_t FT37:1;
      uint64_t FT38:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t SWI35:1;
      uint64_t SWI36:1;
      uint64_t SWI37:1;
      uint64_t SWI38:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWIER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PIF35:1;
      uint64_t PIF36:1;
      uint64_t PIF37:1;
      uint64_t PIF38:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR2;

};

#define EXTI (*(volatile struct EXTI_tag *) 0x40010400)

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
      uint64_t SS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSR;

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
      uint64_t reservedSpace0:8;
      uint64_t RECALPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICSR;

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
      uint64_t WCKSEL:3;
      uint64_t TSEDGE:1;
      uint64_t REFCKON:1;
      uint64_t BYPSHAD:1;
      uint64_t FMT:1;
      uint64_t reservedSpace0:1;
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
      uint64_t COSEL:1;
      uint64_t POL:1;
      uint64_t OSEL:2;
      uint64_t COE:1;
      uint64_t ITSE:1;
      uint64_t TAMPTS:1;
      uint64_t TAMPOE:1;
      uint64_t reservedSpace1:2;
      uint64_t TAMPALRM_PU:1;
      uint64_t TAMPALRM_TYPE:1;
      uint64_t OUT2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  uint8_t res0[8];

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

  uint8_t res1[4];

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
      uint64_t SS:15;
      uint64_t reservedSpace0:9;
      uint64_t MASKSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALRMBSSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALRAF:1;
      uint64_t ALRBF:1;
      uint64_t WUTF:1;
      uint64_t TSF:1;
      uint64_t TSOVF:1;
      uint64_t ITSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALRAMF:1;
      uint64_t ALRBMF:1;
      uint64_t WUTMF:1;
      uint64_t TSMF:1;
      uint64_t TSOVMF:1;
      uint64_t ITSMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CALRAF:1;
      uint64_t CALRBF:1;
      uint64_t CWUTF:1;
      uint64_t CTSF:1;
      uint64_t CTSOVF:1;
      uint64_t CITSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCR;

};

#define RTC (*(volatile struct RTC_tag *) 0x40002800)

struct DMA1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIF1:1;
      uint64_t TCIF1:1;
      uint64_t HTIF1:1;
      uint64_t TEIF1:1;
      uint64_t GIF2:1;
      uint64_t TCIF2:1;
      uint64_t HTIF2:1;
      uint64_t TEIF2:1;
      uint64_t GIF3:1;
      uint64_t TCIF3:1;
      uint64_t HTIF3:1;
      uint64_t TEIF3:1;
      uint64_t GIF4:1;
      uint64_t TCIF4:1;
      uint64_t HTIF4:1;
      uint64_t TEIF4:1;
      uint64_t GIF5:1;
      uint64_t TCIF5:1;
      uint64_t HTIF5:1;
      uint64_t TEIF5:1;
      uint64_t GIF6:1;
      uint64_t TCIF6:1;
      uint64_t HTIF6:1;
      uint64_t TEIF6:1;
      uint64_t GIF7:1;
      uint64_t TCIF7:1;
      uint64_t HTIF7:1;
      uint64_t TEIF7:1;
      uint64_t GIF8:1;
      uint64_t TCIF8:1;
      uint64_t HTIF8:1;
      uint64_t TEIF8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIF1:1;
      uint64_t TCIF1:1;
      uint64_t HTIF1:1;
      uint64_t TEIF1:1;
      uint64_t GIF2:1;
      uint64_t TCIF2:1;
      uint64_t HTIF2:1;
      uint64_t TEIF2:1;
      uint64_t GIF3:1;
      uint64_t TCIF3:1;
      uint64_t HTIF3:1;
      uint64_t TEIF3:1;
      uint64_t GIF4:1;
      uint64_t TCIF4:1;
      uint64_t HTIF4:1;
      uint64_t TEIF4:1;
      uint64_t GIF5:1;
      uint64_t TCIF5:1;
      uint64_t HTIF5:1;
      uint64_t TEIF5:1;
      uint64_t GIF6:1;
      uint64_t TCIF6:1;
      uint64_t HTIF6:1;
      uint64_t TEIF6:1;
      uint64_t GIF7:1;
      uint64_t TCIF7:1;
      uint64_t HTIF7:1;
      uint64_t TEIF7:1;
      uint64_t GIF8:1;
      uint64_t TCIF8:1;
      uint64_t HTIF8:1;
      uint64_t TEIF8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR1;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR2;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR3;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR4;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR5;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR6;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR7;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR8;

};

#define DMA1 (*(volatile struct DMA1_tag *) 0x40020000)

struct DMA2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIF1:1;
      uint64_t TCIF1:1;
      uint64_t HTIF1:1;
      uint64_t TEIF1:1;
      uint64_t GIF2:1;
      uint64_t TCIF2:1;
      uint64_t HTIF2:1;
      uint64_t TEIF2:1;
      uint64_t GIF3:1;
      uint64_t TCIF3:1;
      uint64_t HTIF3:1;
      uint64_t TEIF3:1;
      uint64_t GIF4:1;
      uint64_t TCIF4:1;
      uint64_t HTIF4:1;
      uint64_t TEIF4:1;
      uint64_t GIF5:1;
      uint64_t TCIF5:1;
      uint64_t HTIF5:1;
      uint64_t TEIF5:1;
      uint64_t GIF6:1;
      uint64_t TCIF6:1;
      uint64_t HTIF6:1;
      uint64_t TEIF6:1;
      uint64_t GIF7:1;
      uint64_t TCIF7:1;
      uint64_t HTIF7:1;
      uint64_t TEIF7:1;
      uint64_t GIF8:1;
      uint64_t TCIF8:1;
      uint64_t HTIF8:1;
      uint64_t TEIF8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIF1:1;
      uint64_t TCIF1:1;
      uint64_t HTIF1:1;
      uint64_t TEIF1:1;
      uint64_t GIF2:1;
      uint64_t TCIF2:1;
      uint64_t HTIF2:1;
      uint64_t TEIF2:1;
      uint64_t GIF3:1;
      uint64_t TCIF3:1;
      uint64_t HTIF3:1;
      uint64_t TEIF3:1;
      uint64_t GIF4:1;
      uint64_t TCIF4:1;
      uint64_t HTIF4:1;
      uint64_t TEIF4:1;
      uint64_t GIF5:1;
      uint64_t TCIF5:1;
      uint64_t HTIF5:1;
      uint64_t TEIF5:1;
      uint64_t GIF6:1;
      uint64_t TCIF6:1;
      uint64_t HTIF6:1;
      uint64_t TEIF6:1;
      uint64_t GIF7:1;
      uint64_t TCIF7:1;
      uint64_t HTIF7:1;
      uint64_t TEIF7:1;
      uint64_t GIF8:1;
      uint64_t TCIF8:1;
      uint64_t HTIF8:1;
      uint64_t TEIF8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR1;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR2;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR3;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR4;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR5;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR6;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR7;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR8;

};

#define DMA2 (*(volatile struct DMA2_tag *) 0x40020400)

struct DMAMUX_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREQ_ID:7;
      uint64_t reservedSpace0:1;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace1:6;
      uint64_t SE:1;
      uint64_t SPOL:2;
      uint64_t NBREQ:5;
      uint64_t SYNC_ID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREQ_ID:7;
      uint64_t reservedSpace0:1;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace1:6;
      uint64_t SE:1;
      uint64_t SPOL:2;
      uint64_t NBREQ:5;
      uint64_t SYNC_ID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREQ_ID:7;
      uint64_t reservedSpace0:1;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace1:6;
      uint64_t SE:1;
      uint64_t SPOL:2;
      uint64_t NBREQ:5;
      uint64_t SYNC_ID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREQ_ID:7;
      uint64_t reservedSpace0:1;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace1:6;
      uint64_t SE:1;
      uint64_t SPOL:2;
      uint64_t NBREQ:5;
      uint64_t SYNC_ID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREQ_ID:7;
      uint64_t reservedSpace0:1;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace1:6;
      uint64_t SE:1;
      uint64_t SPOL:2;
      uint64_t NBREQ:5;
      uint64_t SYNC_ID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREQ_ID:7;
      uint64_t reservedSpace0:1;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace1:6;
      uint64_t SE:1;
      uint64_t SPOL:2;
      uint64_t NBREQ:5;
      uint64_t SYNC_ID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREQ_ID:7;
      uint64_t reservedSpace0:1;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace1:6;
      uint64_t SE:1;
      uint64_t SPOL:2;
      uint64_t NBREQ:5;
      uint64_t SYNC_ID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREQ_ID:7;
      uint64_t reservedSpace0:1;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace1:6;
      uint64_t SE:1;
      uint64_t SPOL:2;
      uint64_t NBREQ:5;
      uint64_t SYNC_ID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREQ_ID:7;
      uint64_t reservedSpace0:1;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace1:6;
      uint64_t SE:1;
      uint64_t SPOL:2;
      uint64_t NBREQ:5;
      uint64_t SYNC_ID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C8CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREQ_ID:7;
      uint64_t reservedSpace0:1;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace1:6;
      uint64_t SE:1;
      uint64_t SPOL:2;
      uint64_t NBREQ:5;
      uint64_t SYNC_ID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C9CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREQ_ID:7;
      uint64_t reservedSpace0:1;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace1:6;
      uint64_t SE:1;
      uint64_t SPOL:2;
      uint64_t NBREQ:5;
      uint64_t SYNC_ID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C10CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREQ_ID:7;
      uint64_t reservedSpace0:1;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace1:6;
      uint64_t SE:1;
      uint64_t SPOL:2;
      uint64_t NBREQ:5;
      uint64_t SYNC_ID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C11CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREQ_ID:7;
      uint64_t reservedSpace0:1;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace1:6;
      uint64_t SE:1;
      uint64_t SPOL:2;
      uint64_t NBREQ:5;
      uint64_t SYNC_ID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C12CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREQ_ID:7;
      uint64_t reservedSpace0:1;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace1:6;
      uint64_t SE:1;
      uint64_t SPOL:2;
      uint64_t NBREQ:5;
      uint64_t SYNC_ID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C13CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREQ_ID:7;
      uint64_t reservedSpace0:1;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace1:6;
      uint64_t SE:1;
      uint64_t SPOL:2;
      uint64_t NBREQ:5;
      uint64_t SYNC_ID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C14CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREQ_ID:7;
      uint64_t reservedSpace0:1;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace1:6;
      uint64_t SE:1;
      uint64_t SPOL:2;
      uint64_t NBREQ:5;
      uint64_t SYNC_ID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C15CR;

  uint8_t res0[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSOF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFR;

  uint8_t res1[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIG_ID:5;
      uint64_t reservedSpace0:3;
      uint64_t OIE:1;
      uint64_t reservedSpace1:7;
      uint64_t GE:1;
      uint64_t GPOL:2;
      uint64_t GNBREQ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RG0CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIG_ID:5;
      uint64_t reservedSpace0:3;
      uint64_t OIE:1;
      uint64_t reservedSpace1:7;
      uint64_t GE:1;
      uint64_t GPOL:2;
      uint64_t GNBREQ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RG1CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIG_ID:5;
      uint64_t reservedSpace0:3;
      uint64_t OIE:1;
      uint64_t reservedSpace1:7;
      uint64_t GE:1;
      uint64_t GPOL:2;
      uint64_t GNBREQ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RG2CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIG_ID:5;
      uint64_t reservedSpace0:3;
      uint64_t OIE:1;
      uint64_t reservedSpace1:7;
      uint64_t GE:1;
      uint64_t GPOL:2;
      uint64_t GNBREQ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RG3CR;

  uint8_t res2[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGCFR;

};

#define DMAMUX (*(volatile struct DMAMUX_tag *) 0x40020800)

struct SYSCFG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEM_MODE:3;
      uint64_t reservedSpace0:5;
      uint64_t FB_mode:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEMRMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t BOOSTEN:1;
      uint64_t ANASWVDD:1;
      uint64_t reservedSpace1:6;
      uint64_t I2C_PB6_FMP:1;
      uint64_t I2C_PB7_FMP:1;
      uint64_t I2C_PB8_FMP:1;
      uint64_t I2C_PB9_FMP:1;
      uint64_t I2C1_FMP:1;
      uint64_t I2C2_FMP:1;
      uint64_t I2C3_FMP:1;
      uint64_t I2C4_FMP:1;
      uint64_t reservedSpace2:2;
      uint64_t FPU_IE:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR1;

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCMER:1;
      uint64_t CCMBSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLL:1;
      uint64_t SPL:1;
      uint64_t PVDL:1;
      uint64_t ECCL:1;
      uint64_t reservedSpace0:4;
      uint64_t SPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Page0_WP:1;
      uint64_t Page1_WP:1;
      uint64_t Page2_WP:1;
      uint64_t Page3_WP:1;
      uint64_t Page4_WP:1;
      uint64_t Page5_WP:1;
      uint64_t Page6_WP:1;
      uint64_t Page7_WP:1;
      uint64_t Page8_WP:1;
      uint64_t Page9_WP:1;
      uint64_t Page10_WP:1;
      uint64_t Page11_WP:1;
      uint64_t Page12_WP:1;
      uint64_t Page13_WP:1;
      uint64_t Page14_WP:1;
      uint64_t Page15_WP:1;
      uint64_t Page16_WP:1;
      uint64_t Page17_WP:1;
      uint64_t Page18_WP:1;
      uint64_t Page19_WP:1;
      uint64_t Page20_WP:1;
      uint64_t Page21_WP:1;
      uint64_t Page22_WP:1;
      uint64_t Page23_WP:1;
      uint64_t Page24_WP:1;
      uint64_t Page25_WP:1;
      uint64_t Page26_WP:1;
      uint64_t Page27_WP:1;
      uint64_t Page28_WP:1;
      uint64_t Page29_WP:1;
      uint64_t Page30_WP:1;
      uint64_t Page31_WP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SKR;

};

#define SYSCFG (*(volatile struct SYSCFG_tag *) 0x40010000)

struct VREFBUF_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENVR:1;
      uint64_t HIZ:1;
      uint64_t reservedSpace0:1;
      uint64_t VRR:1;
      uint64_t VRS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VREFBUF_CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VREFBUF_CCR;

};

#define VREFBUF (*(volatile struct VREFBUF_tag *) 0x40010030)

struct COMP_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t COMP_DEGLITCH_EN:1;
      uint64_t reservedSpace0:2;
      uint64_t INMSEL:3;
      uint64_t reservedSpace1:1;
      uint64_t INPSEL:1;
      uint64_t reservedSpace2:6;
      uint64_t POL:1;
      uint64_t HYST:3;
      uint64_t BLANKSEL:3;
      uint64_t BRGEN:1;
      uint64_t SCALEN:1;
      uint64_t reservedSpace3:6;
      uint64_t VALUE:1;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP_C1CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t COMP_DEGLITCH_EN:1;
      uint64_t reservedSpace0:2;
      uint64_t INMSEL:3;
      uint64_t reservedSpace1:1;
      uint64_t INPSEL:1;
      uint64_t reservedSpace2:6;
      uint64_t POL:1;
      uint64_t HYST:3;
      uint64_t BLANKSEL:3;
      uint64_t BRGEN:1;
      uint64_t SCALEN:1;
      uint64_t reservedSpace3:6;
      uint64_t VALUE:1;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP_C2CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t COMP_DEGLITCH_EN:1;
      uint64_t reservedSpace0:2;
      uint64_t INMSEL:3;
      uint64_t reservedSpace1:1;
      uint64_t INPSEL:1;
      uint64_t reservedSpace2:6;
      uint64_t POL:1;
      uint64_t HYST:3;
      uint64_t BLANKSEL:3;
      uint64_t BRGEN:1;
      uint64_t SCALEN:1;
      uint64_t reservedSpace3:6;
      uint64_t VALUE:1;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP_C3CSR;

  uint8_t res0[6];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t COMP_DEGLITCH_EN:1;
      uint64_t reservedSpace0:2;
      uint64_t INMSEL:3;
      uint64_t reservedSpace1:1;
      uint64_t INPSEL:1;
      uint64_t reservedSpace2:6;
      uint64_t POL:1;
      uint64_t HYST:3;
      uint64_t BLANKSEL:3;
      uint64_t BRGEN:1;
      uint64_t SCALEN:1;
      uint64_t reservedSpace3:6;
      uint64_t VALUE:1;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP_C4CSR;

};

#define COMP (*(volatile struct COMP_tag *) 0x40010200)

struct OPAMP_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPAEN:1;
      uint64_t FORCE_VP:1;
      uint64_t VP_SEL:2;
      uint64_t USERTRIM:1;
      uint64_t VM_SEL:2;
      uint64_t OPAHSM:1;
      uint64_t OPAINTOEN:1;
      uint64_t reservedSpace0:2;
      uint64_t CALON:1;
      uint64_t CALSEL:2;
      uint64_t PGA_GAIN:5;
      uint64_t TRIMOFFSETP:5;
      uint64_t TRIMOFFSETN:5;
      uint64_t reservedSpace1:1;
      uint64_t CALOUT:1;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPAMP1_CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPAEN:1;
      uint64_t FORCE_VP:1;
      uint64_t VP_SEL:2;
      uint64_t USERTRIM:1;
      uint64_t VM_SEL:2;
      uint64_t OPAHSM:1;
      uint64_t OPAINTOEN:1;
      uint64_t reservedSpace0:2;
      uint64_t CALON:1;
      uint64_t CALSEL:2;
      uint64_t PGA_GAIN:5;
      uint64_t TRIMOFFSETP:5;
      uint64_t TRIMOFFSETN:5;
      uint64_t reservedSpace1:1;
      uint64_t CALOUT:1;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPAMP2_CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPAEN:1;
      uint64_t FORCE_VP:1;
      uint64_t VP_SEL:2;
      uint64_t USERTRIM:1;
      uint64_t VM_SEL:2;
      uint64_t OPAHSM:1;
      uint64_t OPAINTOEN:1;
      uint64_t reservedSpace0:2;
      uint64_t CALON:1;
      uint64_t CALSEL:2;
      uint64_t PGA_GAIN:5;
      uint64_t TRIMOFFSETP:5;
      uint64_t TRIMOFFSETN:5;
      uint64_t reservedSpace1:1;
      uint64_t CALOUT:1;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPAMP3_CSR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VMS_SEL:1;
      uint64_t VPS_SEL:2;
      uint64_t T1CM_EN:1;
      uint64_t T8CM_EN:1;
      uint64_t T20CM_EN:1;
      uint64_t reservedSpace0:25;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPAMP1_TCMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VMS_SEL:1;
      uint64_t VPS_SEL:2;
      uint64_t T1CM_EN:1;
      uint64_t T8CM_EN:1;
      uint64_t T20CM_EN:1;
      uint64_t reservedSpace0:25;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPAMP2_TCMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VMS_SEL:1;
      uint64_t VPS_SEL:2;
      uint64_t T1CM_EN:1;
      uint64_t T8CM_EN:1;
      uint64_t T20CM_EN:1;
      uint64_t reservedSpace0:25;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPAMP3_TCMR;

};

#define OPAMP (*(volatile struct OPAMP_tag *) 0x40010300)

struct DAC1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN1:1;
      uint64_t TEN1:1;
      uint64_t TSEL1:4;
      uint64_t WAVE1:2;
      uint64_t MAMP1:4;
      uint64_t DMAEN1:1;
      uint64_t DMAUDRIE1:1;
      uint64_t CEN1:1;
      uint64_t reservedSpace0:1;
      uint64_t EN2:1;
      uint64_t TEN2:1;
      uint64_t TSEL2:4;
      uint64_t WAVE2:2;
      uint64_t MAMP2:4;
      uint64_t DMAEN2:1;
      uint64_t DMAUDRIE2:1;
      uint64_t CEN2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWTRIG1:1;
      uint64_t SWTRIG2:1;
      uint64_t reservedSpace0:14;
      uint64_t SWTRIGB1:1;
      uint64_t SWTRIGB2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SWTRGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:12;
      uint64_t reservedSpace0:4;
      uint64_t DACC1DHRB:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR12R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t DACC1DHR:12;
      uint64_t reservedSpace1:4;
      uint64_t DACC1DHRB:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR12L1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:8;
      uint64_t DACC1DHRB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR8R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC2DHR:12;
      uint64_t reservedSpace0:4;
      uint64_t DACC2DHRB:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR12R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t DACC2DHR:12;
      uint64_t reservedSpace1:4;
      uint64_t DACC2DHRB:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR12L2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC2DHR:8;
      uint64_t DACC2DHRB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR8R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:12;
      uint64_t reservedSpace0:4;
      uint64_t DACC2DHR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR12RD;

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
  } __attribute__((aligned(4))) DAC_DHR12LD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:8;
      uint64_t DACC2DHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR8RD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DOR:12;
      uint64_t reservedSpace0:4;
      uint64_t DACC1DORB:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DOR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC2DOR:12;
      uint64_t reservedSpace0:4;
      uint64_t DACC2DORB:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DOR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t DAC1RDY:1;
      uint64_t DORSTAT1:1;
      uint64_t DMAUDR1:1;
      uint64_t CAL_FLAG1:1;
      uint64_t BWST1:1;
      uint64_t reservedSpace1:11;
      uint64_t DAC2RDY:1;
      uint64_t DORSTAT2:1;
      uint64_t DMAUDR2:1;
      uint64_t CAL_FLAG2:1;
      uint64_t BWST2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTRIM1:5;
      uint64_t reservedSpace0:11;
      uint64_t OTRIM2:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE1:3;
      uint64_t reservedSpace0:5;
      uint64_t DMADOUBLE1:1;
      uint64_t SINFORMAT1:1;
      uint64_t reservedSpace1:4;
      uint64_t HFSEL:2;
      uint64_t MODE2:3;
      uint64_t reservedSpace2:5;
      uint64_t DMADOUBLE2:1;
      uint64_t SINFORMAT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSAMPLE1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SHSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSAMPLE2:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SHSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THOLD1:10;
      uint64_t reservedSpace0:6;
      uint64_t THOLD2:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SHHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TREFRESH1:8;
      uint64_t reservedSpace0:8;
      uint64_t TREFRESH2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SHRR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRSTDATA1:12;
      uint64_t STDIR1:1;
      uint64_t reservedSpace0:3;
      uint64_t STINCDATA1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_STR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRSTDATA2:12;
      uint64_t STDIR2:1;
      uint64_t reservedSpace0:3;
      uint64_t STINCDATA2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_STR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRSTTRIGSEL1:4;
      uint64_t reservedSpace0:4;
      uint64_t STINCTRIGSEL1:4;
      uint64_t reservedSpace1:4;
      uint64_t STRSTTRIGSEL2:4;
      uint64_t reservedSpace2:4;
      uint64_t STINCTRIGSEL2:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_STMODR;

};

#define DAC1 (*(volatile struct DAC1_tag *) 0x50000800)

struct DAC2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN1:1;
      uint64_t TEN1:1;
      uint64_t TSEL1:4;
      uint64_t WAVE1:2;
      uint64_t MAMP1:4;
      uint64_t DMAEN1:1;
      uint64_t DMAUDRIE1:1;
      uint64_t CEN1:1;
      uint64_t reservedSpace0:1;
      uint64_t EN2:1;
      uint64_t TEN2:1;
      uint64_t TSEL2:4;
      uint64_t WAVE2:2;
      uint64_t MAMP2:4;
      uint64_t DMAEN2:1;
      uint64_t DMAUDRIE2:1;
      uint64_t CEN2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWTRIG1:1;
      uint64_t SWTRIG2:1;
      uint64_t reservedSpace0:14;
      uint64_t SWTRIGB1:1;
      uint64_t SWTRIGB2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SWTRGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:12;
      uint64_t reservedSpace0:4;
      uint64_t DACC1DHRB:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR12R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t DACC1DHR:12;
      uint64_t reservedSpace1:4;
      uint64_t DACC1DHRB:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR12L1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:8;
      uint64_t DACC1DHRB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR8R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC2DHR:12;
      uint64_t reservedSpace0:4;
      uint64_t DACC2DHRB:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR12R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t DACC2DHR:12;
      uint64_t reservedSpace1:4;
      uint64_t DACC2DHRB:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR12L2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC2DHR:8;
      uint64_t DACC2DHRB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR8R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:12;
      uint64_t reservedSpace0:4;
      uint64_t DACC2DHR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR12RD;

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
  } __attribute__((aligned(4))) DAC_DHR12LD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:8;
      uint64_t DACC2DHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR8RD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DOR:12;
      uint64_t reservedSpace0:4;
      uint64_t DACC1DORB:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DOR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC2DOR:12;
      uint64_t reservedSpace0:4;
      uint64_t DACC2DORB:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DOR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t DAC1RDY:1;
      uint64_t DORSTAT1:1;
      uint64_t DMAUDR1:1;
      uint64_t CAL_FLAG1:1;
      uint64_t BWST1:1;
      uint64_t reservedSpace1:11;
      uint64_t DAC2RDY:1;
      uint64_t DORSTAT2:1;
      uint64_t DMAUDR2:1;
      uint64_t CAL_FLAG2:1;
      uint64_t BWST2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTRIM1:5;
      uint64_t reservedSpace0:11;
      uint64_t OTRIM2:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE1:3;
      uint64_t reservedSpace0:5;
      uint64_t DMADOUBLE1:1;
      uint64_t SINFORMAT1:1;
      uint64_t reservedSpace1:4;
      uint64_t HFSEL:2;
      uint64_t MODE2:3;
      uint64_t reservedSpace2:5;
      uint64_t DMADOUBLE2:1;
      uint64_t SINFORMAT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSAMPLE1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SHSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSAMPLE2:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SHSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THOLD1:10;
      uint64_t reservedSpace0:6;
      uint64_t THOLD2:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SHHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TREFRESH1:8;
      uint64_t reservedSpace0:8;
      uint64_t TREFRESH2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SHRR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRSTDATA1:12;
      uint64_t STDIR1:1;
      uint64_t reservedSpace0:3;
      uint64_t STINCDATA1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_STR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRSTDATA2:12;
      uint64_t STDIR2:1;
      uint64_t reservedSpace0:3;
      uint64_t STINCDATA2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_STR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRSTTRIGSEL1:4;
      uint64_t reservedSpace0:4;
      uint64_t STINCTRIGSEL1:4;
      uint64_t reservedSpace1:4;
      uint64_t STRSTTRIGSEL2:4;
      uint64_t reservedSpace2:4;
      uint64_t STINCTRIGSEL2:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_STMODR;

};

#define DAC2 (*(volatile struct DAC2_tag *) 0x50000c00)

struct DAC3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN1:1;
      uint64_t TEN1:1;
      uint64_t TSEL1:4;
      uint64_t WAVE1:2;
      uint64_t MAMP1:4;
      uint64_t DMAEN1:1;
      uint64_t DMAUDRIE1:1;
      uint64_t CEN1:1;
      uint64_t reservedSpace0:1;
      uint64_t EN2:1;
      uint64_t TEN2:1;
      uint64_t TSEL2:4;
      uint64_t WAVE2:2;
      uint64_t MAMP2:4;
      uint64_t DMAEN2:1;
      uint64_t DMAUDRIE2:1;
      uint64_t CEN2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWTRIG1:1;
      uint64_t SWTRIG2:1;
      uint64_t reservedSpace0:14;
      uint64_t SWTRIGB1:1;
      uint64_t SWTRIGB2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SWTRGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:12;
      uint64_t reservedSpace0:4;
      uint64_t DACC1DHRB:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR12R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t DACC1DHR:12;
      uint64_t reservedSpace1:4;
      uint64_t DACC1DHRB:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR12L1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:8;
      uint64_t DACC1DHRB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR8R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC2DHR:12;
      uint64_t reservedSpace0:4;
      uint64_t DACC2DHRB:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR12R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t DACC2DHR:12;
      uint64_t reservedSpace1:4;
      uint64_t DACC2DHRB:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR12L2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC2DHR:8;
      uint64_t DACC2DHRB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR8R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:12;
      uint64_t reservedSpace0:4;
      uint64_t DACC2DHR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR12RD;

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
  } __attribute__((aligned(4))) DAC_DHR12LD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:8;
      uint64_t DACC2DHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR8RD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DOR:12;
      uint64_t reservedSpace0:4;
      uint64_t DACC1DORB:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DOR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC2DOR:12;
      uint64_t reservedSpace0:4;
      uint64_t DACC2DORB:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DOR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t DAC1RDY:1;
      uint64_t DORSTAT1:1;
      uint64_t DMAUDR1:1;
      uint64_t CAL_FLAG1:1;
      uint64_t BWST1:1;
      uint64_t reservedSpace1:11;
      uint64_t DAC2RDY:1;
      uint64_t DORSTAT2:1;
      uint64_t DMAUDR2:1;
      uint64_t CAL_FLAG2:1;
      uint64_t BWST2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTRIM1:5;
      uint64_t reservedSpace0:11;
      uint64_t OTRIM2:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE1:3;
      uint64_t reservedSpace0:5;
      uint64_t DMADOUBLE1:1;
      uint64_t SINFORMAT1:1;
      uint64_t reservedSpace1:4;
      uint64_t HFSEL:2;
      uint64_t MODE2:3;
      uint64_t reservedSpace2:5;
      uint64_t DMADOUBLE2:1;
      uint64_t SINFORMAT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSAMPLE1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SHSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSAMPLE2:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SHSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THOLD1:10;
      uint64_t reservedSpace0:6;
      uint64_t THOLD2:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SHHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TREFRESH1:8;
      uint64_t reservedSpace0:8;
      uint64_t TREFRESH2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SHRR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRSTDATA1:12;
      uint64_t STDIR1:1;
      uint64_t reservedSpace0:3;
      uint64_t STINCDATA1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_STR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRSTDATA2:12;
      uint64_t STDIR2:1;
      uint64_t reservedSpace0:3;
      uint64_t STINCDATA2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_STR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRSTTRIGSEL1:4;
      uint64_t reservedSpace0:4;
      uint64_t STINCTRIGSEL1:4;
      uint64_t reservedSpace1:4;
      uint64_t STRSTTRIGSEL2:4;
      uint64_t reservedSpace2:4;
      uint64_t STINCTRIGSEL2:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_STMODR;

};

#define DAC3 (*(volatile struct DAC3_tag *) 0x50001000)

struct DAC4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN1:1;
      uint64_t TEN1:1;
      uint64_t TSEL1:4;
      uint64_t WAVE1:2;
      uint64_t MAMP1:4;
      uint64_t DMAEN1:1;
      uint64_t DMAUDRIE1:1;
      uint64_t CEN1:1;
      uint64_t reservedSpace0:1;
      uint64_t EN2:1;
      uint64_t TEN2:1;
      uint64_t TSEL2:4;
      uint64_t WAVE2:2;
      uint64_t MAMP2:4;
      uint64_t DMAEN2:1;
      uint64_t DMAUDRIE2:1;
      uint64_t CEN2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWTRIG1:1;
      uint64_t SWTRIG2:1;
      uint64_t reservedSpace0:14;
      uint64_t SWTRIGB1:1;
      uint64_t SWTRIGB2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SWTRGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:12;
      uint64_t reservedSpace0:4;
      uint64_t DACC1DHRB:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR12R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t DACC1DHR:12;
      uint64_t reservedSpace1:4;
      uint64_t DACC1DHRB:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR12L1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:8;
      uint64_t DACC1DHRB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR8R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC2DHR:12;
      uint64_t reservedSpace0:4;
      uint64_t DACC2DHRB:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR12R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t DACC2DHR:12;
      uint64_t reservedSpace1:4;
      uint64_t DACC2DHRB:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR12L2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC2DHR:8;
      uint64_t DACC2DHRB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR8R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:12;
      uint64_t reservedSpace0:4;
      uint64_t DACC2DHR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR12RD;

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
  } __attribute__((aligned(4))) DAC_DHR12LD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:8;
      uint64_t DACC2DHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DHR8RD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DOR:12;
      uint64_t reservedSpace0:4;
      uint64_t DACC1DORB:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DOR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC2DOR:12;
      uint64_t reservedSpace0:4;
      uint64_t DACC2DORB:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_DOR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t DAC1RDY:1;
      uint64_t DORSTAT1:1;
      uint64_t DMAUDR1:1;
      uint64_t CAL_FLAG1:1;
      uint64_t BWST1:1;
      uint64_t reservedSpace1:11;
      uint64_t DAC2RDY:1;
      uint64_t DORSTAT2:1;
      uint64_t DMAUDR2:1;
      uint64_t CAL_FLAG2:1;
      uint64_t BWST2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTRIM1:5;
      uint64_t reservedSpace0:11;
      uint64_t OTRIM2:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE1:3;
      uint64_t reservedSpace0:5;
      uint64_t DMADOUBLE1:1;
      uint64_t SINFORMAT1:1;
      uint64_t reservedSpace1:4;
      uint64_t HFSEL:2;
      uint64_t MODE2:3;
      uint64_t reservedSpace2:5;
      uint64_t DMADOUBLE2:1;
      uint64_t SINFORMAT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSAMPLE1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SHSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSAMPLE2:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SHSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THOLD1:10;
      uint64_t reservedSpace0:6;
      uint64_t THOLD2:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SHHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TREFRESH1:8;
      uint64_t reservedSpace0:8;
      uint64_t TREFRESH2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SHRR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRSTDATA1:12;
      uint64_t STDIR1:1;
      uint64_t reservedSpace0:3;
      uint64_t STINCDATA1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_STR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRSTDATA2:12;
      uint64_t STDIR2:1;
      uint64_t reservedSpace0:3;
      uint64_t STINCDATA2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_STR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRSTTRIGSEL1:4;
      uint64_t reservedSpace0:4;
      uint64_t STINCTRIGSEL1:4;
      uint64_t reservedSpace1:4;
      uint64_t STRSTTRIGSEL2:4;
      uint64_t reservedSpace2:4;
      uint64_t STINCTRIGSEL2:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_STMODR;

};

#define DAC4 (*(volatile struct DAC4_tag *) 0x50001400)

struct ADC1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRDY:1;
      uint64_t EOSMP:1;
      uint64_t EOC:1;
      uint64_t EOS:1;
      uint64_t OVR:1;
      uint64_t JEOC:1;
      uint64_t JEOS:1;
      uint64_t AWD1:1;
      uint64_t AWD2:1;
      uint64_t AWD3:1;
      uint64_t JQOVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRDYIE:1;
      uint64_t EOSMPIE:1;
      uint64_t EOCIE:1;
      uint64_t EOSIE:1;
      uint64_t OVRIE:1;
      uint64_t JEOCIE:1;
      uint64_t JEOSIE:1;
      uint64_t AWD1IE:1;
      uint64_t AWD2IE:1;
      uint64_t AWD3IE:1;
      uint64_t JQOVFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADEN:1;
      uint64_t ADDIS:1;
      uint64_t ADSTART:1;
      uint64_t JADSTART:1;
      uint64_t ADSTP:1;
      uint64_t JADSTP:1;
      uint64_t reservedSpace0:22;
      uint64_t ADVREGEN:1;
      uint64_t DEEPPWD:1;
      uint64_t ADCALDIF:1;
      uint64_t ADCAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAEN:1;
      uint64_t DMACFG:1;
      uint64_t reservedSpace0:1;
      uint64_t RES:2;
      uint64_t ALIGN_5:1;
      uint64_t EXTSEL:4;
      uint64_t EXTEN:2;
      uint64_t OVRMOD:1;
      uint64_t CONT:1;
      uint64_t AUTDLY:1;
      uint64_t ALIGN:1;
      uint64_t DISCEN:1;
      uint64_t DISCNUM:3;
      uint64_t JDISCEN:1;
      uint64_t JQM:1;
      uint64_t AWD1SGL:1;
      uint64_t AWD1EN:1;
      uint64_t JAWD1EN:1;
      uint64_t JAUTO:1;
      uint64_t AWDCH1CH:5;
      uint64_t JQDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ROVSE:1;
      uint64_t JOVSE:1;
      uint64_t OVSR:3;
      uint64_t OVSS:4;
      uint64_t TROVS:1;
      uint64_t ROVSM:1;
      uint64_t reservedSpace0:5;
      uint64_t GCOMP:1;
      uint64_t reservedSpace1:8;
      uint64_t SWTRIG:1;
      uint64_t BULB:1;
      uint64_t SMPTRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMP0:3;
      uint64_t SMP1:3;
      uint64_t SMP2:3;
      uint64_t SMP3:3;
      uint64_t SMP4:3;
      uint64_t SMP5:3;
      uint64_t SMP6:3;
      uint64_t SMP7:3;
      uint64_t SMP8:3;
      uint64_t SMP9:3;
      uint64_t reservedSpace0:1;
      uint64_t SMPPLUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMP10:3;
      uint64_t SMP11:3;
      uint64_t SMP12:3;
      uint64_t SMP13:3;
      uint64_t SMP14:3;
      uint64_t SMP15:3;
      uint64_t SMP16:3;
      uint64_t SMP17:3;
      uint64_t SMP18:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPR2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LT1:12;
      uint64_t AWDFILT:3;
      uint64_t reservedSpace0:1;
      uint64_t HT1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LT2:8;
      uint64_t reservedSpace0:8;
      uint64_t HT2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LT3:8;
      uint64_t reservedSpace0:8;
      uint64_t HT3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR3;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L:4;
      uint64_t reservedSpace0:2;
      uint64_t SQ1:5;
      uint64_t reservedSpace1:1;
      uint64_t SQ2:5;
      uint64_t reservedSpace2:1;
      uint64_t SQ3:5;
      uint64_t reservedSpace3:1;
      uint64_t SQ4:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ5:5;
      uint64_t reservedSpace0:1;
      uint64_t SQ6:5;
      uint64_t reservedSpace1:1;
      uint64_t SQ7:5;
      uint64_t reservedSpace2:1;
      uint64_t SQ8:5;
      uint64_t reservedSpace3:1;
      uint64_t SQ9:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ10:5;
      uint64_t reservedSpace0:1;
      uint64_t SQ11:5;
      uint64_t reservedSpace1:1;
      uint64_t SQ12:5;
      uint64_t reservedSpace2:1;
      uint64_t SQ13:5;
      uint64_t reservedSpace3:1;
      uint64_t SQ14:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ15:5;
      uint64_t reservedSpace0:1;
      uint64_t SQ16:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JL:2;
      uint64_t JEXTSEL:5;
      uint64_t JEXTEN:2;
      uint64_t JSQ1:5;
      uint64_t reservedSpace0:1;
      uint64_t JSQ2:5;
      uint64_t reservedSpace1:1;
      uint64_t JSQ3:5;
      uint64_t reservedSpace2:1;
      uint64_t JSQ4:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JSQR;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET1:12;
      uint64_t reservedSpace0:12;
      uint64_t OFFSETPOS:1;
      uint64_t SATEN:1;
      uint64_t OFFSET1_CH:5;
      uint64_t OFFSET1_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET1:12;
      uint64_t reservedSpace0:12;
      uint64_t OFFSETPOS:1;
      uint64_t SATEN:1;
      uint64_t OFFSET1_CH:5;
      uint64_t OFFSET1_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET1:12;
      uint64_t reservedSpace0:12;
      uint64_t OFFSETPOS:1;
      uint64_t SATEN:1;
      uint64_t OFFSET1_CH:5;
      uint64_t OFFSET1_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET1:12;
      uint64_t reservedSpace0:12;
      uint64_t OFFSETPOS:1;
      uint64_t SATEN:1;
      uint64_t OFFSET1_CH:5;
      uint64_t OFFSET1_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR4;

  uint8_t res4[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR4;

  uint8_t res5[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWD2CH:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWD2CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWD3CH:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWD3CR;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIFSEL_0:1;
      uint64_t DIFSEL_1_18:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIFSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CALFACT_S:7;
      uint64_t reservedSpace0:9;
      uint64_t CALFACT_D:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALFACT;

  uint8_t res7[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCOMPCOEFF:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCOMP;

};

#define ADC1 (*(volatile struct ADC1_tag *) 0x50000000)

struct ADC2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRDY:1;
      uint64_t EOSMP:1;
      uint64_t EOC:1;
      uint64_t EOS:1;
      uint64_t OVR:1;
      uint64_t JEOC:1;
      uint64_t JEOS:1;
      uint64_t AWD1:1;
      uint64_t AWD2:1;
      uint64_t AWD3:1;
      uint64_t JQOVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRDYIE:1;
      uint64_t EOSMPIE:1;
      uint64_t EOCIE:1;
      uint64_t EOSIE:1;
      uint64_t OVRIE:1;
      uint64_t JEOCIE:1;
      uint64_t JEOSIE:1;
      uint64_t AWD1IE:1;
      uint64_t AWD2IE:1;
      uint64_t AWD3IE:1;
      uint64_t JQOVFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADEN:1;
      uint64_t ADDIS:1;
      uint64_t ADSTART:1;
      uint64_t JADSTART:1;
      uint64_t ADSTP:1;
      uint64_t JADSTP:1;
      uint64_t reservedSpace0:22;
      uint64_t ADVREGEN:1;
      uint64_t DEEPPWD:1;
      uint64_t ADCALDIF:1;
      uint64_t ADCAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAEN:1;
      uint64_t DMACFG:1;
      uint64_t reservedSpace0:1;
      uint64_t RES:2;
      uint64_t ALIGN_5:1;
      uint64_t EXTSEL:4;
      uint64_t EXTEN:2;
      uint64_t OVRMOD:1;
      uint64_t CONT:1;
      uint64_t AUTDLY:1;
      uint64_t ALIGN:1;
      uint64_t DISCEN:1;
      uint64_t DISCNUM:3;
      uint64_t JDISCEN:1;
      uint64_t JQM:1;
      uint64_t AWD1SGL:1;
      uint64_t AWD1EN:1;
      uint64_t JAWD1EN:1;
      uint64_t JAUTO:1;
      uint64_t AWDCH1CH:5;
      uint64_t JQDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ROVSE:1;
      uint64_t JOVSE:1;
      uint64_t OVSR:3;
      uint64_t OVSS:4;
      uint64_t TROVS:1;
      uint64_t ROVSM:1;
      uint64_t reservedSpace0:5;
      uint64_t GCOMP:1;
      uint64_t reservedSpace1:8;
      uint64_t SWTRIG:1;
      uint64_t BULB:1;
      uint64_t SMPTRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMP0:3;
      uint64_t SMP1:3;
      uint64_t SMP2:3;
      uint64_t SMP3:3;
      uint64_t SMP4:3;
      uint64_t SMP5:3;
      uint64_t SMP6:3;
      uint64_t SMP7:3;
      uint64_t SMP8:3;
      uint64_t SMP9:3;
      uint64_t reservedSpace0:1;
      uint64_t SMPPLUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMP10:3;
      uint64_t SMP11:3;
      uint64_t SMP12:3;
      uint64_t SMP13:3;
      uint64_t SMP14:3;
      uint64_t SMP15:3;
      uint64_t SMP16:3;
      uint64_t SMP17:3;
      uint64_t SMP18:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPR2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LT1:12;
      uint64_t AWDFILT:3;
      uint64_t reservedSpace0:1;
      uint64_t HT1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LT2:8;
      uint64_t reservedSpace0:8;
      uint64_t HT2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LT3:8;
      uint64_t reservedSpace0:8;
      uint64_t HT3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR3;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L:4;
      uint64_t reservedSpace0:2;
      uint64_t SQ1:5;
      uint64_t reservedSpace1:1;
      uint64_t SQ2:5;
      uint64_t reservedSpace2:1;
      uint64_t SQ3:5;
      uint64_t reservedSpace3:1;
      uint64_t SQ4:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ5:5;
      uint64_t reservedSpace0:1;
      uint64_t SQ6:5;
      uint64_t reservedSpace1:1;
      uint64_t SQ7:5;
      uint64_t reservedSpace2:1;
      uint64_t SQ8:5;
      uint64_t reservedSpace3:1;
      uint64_t SQ9:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ10:5;
      uint64_t reservedSpace0:1;
      uint64_t SQ11:5;
      uint64_t reservedSpace1:1;
      uint64_t SQ12:5;
      uint64_t reservedSpace2:1;
      uint64_t SQ13:5;
      uint64_t reservedSpace3:1;
      uint64_t SQ14:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ15:5;
      uint64_t reservedSpace0:1;
      uint64_t SQ16:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JL:2;
      uint64_t JEXTSEL:5;
      uint64_t JEXTEN:2;
      uint64_t JSQ1:5;
      uint64_t reservedSpace0:1;
      uint64_t JSQ2:5;
      uint64_t reservedSpace1:1;
      uint64_t JSQ3:5;
      uint64_t reservedSpace2:1;
      uint64_t JSQ4:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JSQR;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET1:12;
      uint64_t reservedSpace0:12;
      uint64_t OFFSETPOS:1;
      uint64_t SATEN:1;
      uint64_t OFFSET1_CH:5;
      uint64_t OFFSET1_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET1:12;
      uint64_t reservedSpace0:12;
      uint64_t OFFSETPOS:1;
      uint64_t SATEN:1;
      uint64_t OFFSET1_CH:5;
      uint64_t OFFSET1_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET1:12;
      uint64_t reservedSpace0:12;
      uint64_t OFFSETPOS:1;
      uint64_t SATEN:1;
      uint64_t OFFSET1_CH:5;
      uint64_t OFFSET1_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET1:12;
      uint64_t reservedSpace0:12;
      uint64_t OFFSETPOS:1;
      uint64_t SATEN:1;
      uint64_t OFFSET1_CH:5;
      uint64_t OFFSET1_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR4;

  uint8_t res4[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR4;

  uint8_t res5[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWD2CH:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWD2CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWD3CH:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWD3CR;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIFSEL_0:1;
      uint64_t DIFSEL_1_18:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIFSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CALFACT_S:7;
      uint64_t reservedSpace0:9;
      uint64_t CALFACT_D:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALFACT;

  uint8_t res7[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCOMPCOEFF:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCOMP;

};

#define ADC2 (*(volatile struct ADC2_tag *) 0x50000100)

struct ADC3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRDY:1;
      uint64_t EOSMP:1;
      uint64_t EOC:1;
      uint64_t EOS:1;
      uint64_t OVR:1;
      uint64_t JEOC:1;
      uint64_t JEOS:1;
      uint64_t AWD1:1;
      uint64_t AWD2:1;
      uint64_t AWD3:1;
      uint64_t JQOVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRDYIE:1;
      uint64_t EOSMPIE:1;
      uint64_t EOCIE:1;
      uint64_t EOSIE:1;
      uint64_t OVRIE:1;
      uint64_t JEOCIE:1;
      uint64_t JEOSIE:1;
      uint64_t AWD1IE:1;
      uint64_t AWD2IE:1;
      uint64_t AWD3IE:1;
      uint64_t JQOVFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADEN:1;
      uint64_t ADDIS:1;
      uint64_t ADSTART:1;
      uint64_t JADSTART:1;
      uint64_t ADSTP:1;
      uint64_t JADSTP:1;
      uint64_t reservedSpace0:22;
      uint64_t ADVREGEN:1;
      uint64_t DEEPPWD:1;
      uint64_t ADCALDIF:1;
      uint64_t ADCAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAEN:1;
      uint64_t DMACFG:1;
      uint64_t reservedSpace0:1;
      uint64_t RES:2;
      uint64_t ALIGN_5:1;
      uint64_t EXTSEL:4;
      uint64_t EXTEN:2;
      uint64_t OVRMOD:1;
      uint64_t CONT:1;
      uint64_t AUTDLY:1;
      uint64_t ALIGN:1;
      uint64_t DISCEN:1;
      uint64_t DISCNUM:3;
      uint64_t JDISCEN:1;
      uint64_t JQM:1;
      uint64_t AWD1SGL:1;
      uint64_t AWD1EN:1;
      uint64_t JAWD1EN:1;
      uint64_t JAUTO:1;
      uint64_t AWDCH1CH:5;
      uint64_t JQDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ROVSE:1;
      uint64_t JOVSE:1;
      uint64_t OVSR:3;
      uint64_t OVSS:4;
      uint64_t TROVS:1;
      uint64_t ROVSM:1;
      uint64_t reservedSpace0:5;
      uint64_t GCOMP:1;
      uint64_t reservedSpace1:8;
      uint64_t SWTRIG:1;
      uint64_t BULB:1;
      uint64_t SMPTRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMP0:3;
      uint64_t SMP1:3;
      uint64_t SMP2:3;
      uint64_t SMP3:3;
      uint64_t SMP4:3;
      uint64_t SMP5:3;
      uint64_t SMP6:3;
      uint64_t SMP7:3;
      uint64_t SMP8:3;
      uint64_t SMP9:3;
      uint64_t reservedSpace0:1;
      uint64_t SMPPLUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMP10:3;
      uint64_t SMP11:3;
      uint64_t SMP12:3;
      uint64_t SMP13:3;
      uint64_t SMP14:3;
      uint64_t SMP15:3;
      uint64_t SMP16:3;
      uint64_t SMP17:3;
      uint64_t SMP18:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPR2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LT1:12;
      uint64_t AWDFILT:3;
      uint64_t reservedSpace0:1;
      uint64_t HT1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LT2:8;
      uint64_t reservedSpace0:8;
      uint64_t HT2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LT3:8;
      uint64_t reservedSpace0:8;
      uint64_t HT3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR3;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L:4;
      uint64_t reservedSpace0:2;
      uint64_t SQ1:5;
      uint64_t reservedSpace1:1;
      uint64_t SQ2:5;
      uint64_t reservedSpace2:1;
      uint64_t SQ3:5;
      uint64_t reservedSpace3:1;
      uint64_t SQ4:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ5:5;
      uint64_t reservedSpace0:1;
      uint64_t SQ6:5;
      uint64_t reservedSpace1:1;
      uint64_t SQ7:5;
      uint64_t reservedSpace2:1;
      uint64_t SQ8:5;
      uint64_t reservedSpace3:1;
      uint64_t SQ9:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ10:5;
      uint64_t reservedSpace0:1;
      uint64_t SQ11:5;
      uint64_t reservedSpace1:1;
      uint64_t SQ12:5;
      uint64_t reservedSpace2:1;
      uint64_t SQ13:5;
      uint64_t reservedSpace3:1;
      uint64_t SQ14:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ15:5;
      uint64_t reservedSpace0:1;
      uint64_t SQ16:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JL:2;
      uint64_t JEXTSEL:5;
      uint64_t JEXTEN:2;
      uint64_t JSQ1:5;
      uint64_t reservedSpace0:1;
      uint64_t JSQ2:5;
      uint64_t reservedSpace1:1;
      uint64_t JSQ3:5;
      uint64_t reservedSpace2:1;
      uint64_t JSQ4:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JSQR;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET1:12;
      uint64_t reservedSpace0:12;
      uint64_t OFFSETPOS:1;
      uint64_t SATEN:1;
      uint64_t OFFSET1_CH:5;
      uint64_t OFFSET1_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET1:12;
      uint64_t reservedSpace0:12;
      uint64_t OFFSETPOS:1;
      uint64_t SATEN:1;
      uint64_t OFFSET1_CH:5;
      uint64_t OFFSET1_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET1:12;
      uint64_t reservedSpace0:12;
      uint64_t OFFSETPOS:1;
      uint64_t SATEN:1;
      uint64_t OFFSET1_CH:5;
      uint64_t OFFSET1_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET1:12;
      uint64_t reservedSpace0:12;
      uint64_t OFFSETPOS:1;
      uint64_t SATEN:1;
      uint64_t OFFSET1_CH:5;
      uint64_t OFFSET1_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR4;

  uint8_t res4[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR4;

  uint8_t res5[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWD2CH:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWD2CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWD3CH:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWD3CR;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIFSEL_0:1;
      uint64_t DIFSEL_1_18:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIFSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CALFACT_S:7;
      uint64_t reservedSpace0:9;
      uint64_t CALFACT_D:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALFACT;

  uint8_t res7[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCOMPCOEFF:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCOMP;

};

#define ADC3 (*(volatile struct ADC3_tag *) 0x50000400)

struct ADC12_Common_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRDY_MST:1;
      uint64_t EOSMP_MST:1;
      uint64_t EOC_MST:1;
      uint64_t EOS_MST:1;
      uint64_t OVR_MST:1;
      uint64_t JEOC_MST:1;
      uint64_t JEOS_MST:1;
      uint64_t AWD1_MST:1;
      uint64_t AWD2_MST:1;
      uint64_t AWD3_MST:1;
      uint64_t JQOVF_MST:1;
      uint64_t reservedSpace0:5;
      uint64_t ADRDY_SLV:1;
      uint64_t EOSMP_SLV:1;
      uint64_t EOC_SLV:1;
      uint64_t EOS_SLV:1;
      uint64_t OVR_SLV:1;
      uint64_t JEOC_SLV:1;
      uint64_t JEOS_SLV:1;
      uint64_t AWD1_SLV:1;
      uint64_t AWD2_SLV:1;
      uint64_t AWD3_SLV:1;
      uint64_t JQOVF_SLV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DUAL:5;
      uint64_t reservedSpace0:3;
      uint64_t DELAY:4;
      uint64_t reservedSpace1:1;
      uint64_t DMACFG:1;
      uint64_t MDMA:2;
      uint64_t CKMODE:2;
      uint64_t PRESC:4;
      uint64_t VREFEN:1;
      uint64_t CH17SEL:1;
      uint64_t CH18SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDATA_MST:16;
      uint64_t RDATA_SLV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR;

};

#define ADC12_Common (*(volatile struct ADC12_Common_tag *) 0x50000300)

struct ADC345_Common_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRDY_MST:1;
      uint64_t EOSMP_MST:1;
      uint64_t EOC_MST:1;
      uint64_t EOS_MST:1;
      uint64_t OVR_MST:1;
      uint64_t JEOC_MST:1;
      uint64_t JEOS_MST:1;
      uint64_t AWD1_MST:1;
      uint64_t AWD2_MST:1;
      uint64_t AWD3_MST:1;
      uint64_t JQOVF_MST:1;
      uint64_t reservedSpace0:5;
      uint64_t ADRDY_SLV:1;
      uint64_t EOSMP_SLV:1;
      uint64_t EOC_SLV:1;
      uint64_t EOS_SLV:1;
      uint64_t OVR_SLV:1;
      uint64_t JEOC_SLV:1;
      uint64_t JEOS_SLV:1;
      uint64_t AWD1_SLV:1;
      uint64_t AWD2_SLV:1;
      uint64_t AWD3_SLV:1;
      uint64_t JQOVF_SLV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DUAL:5;
      uint64_t reservedSpace0:3;
      uint64_t DELAY:4;
      uint64_t reservedSpace1:1;
      uint64_t DMACFG:1;
      uint64_t MDMA:2;
      uint64_t CKMODE:2;
      uint64_t PRESC:4;
      uint64_t VREFEN:1;
      uint64_t CH17SEL:1;
      uint64_t CH18SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDATA_MST:16;
      uint64_t RDATA_SLV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR;

};

#define ADC345_Common (*(volatile struct ADC345_Common_tag *) 0x50000700)

struct FMAC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t X1_BASE:8;
      uint64_t X1_BUF_SIZE:8;
      uint64_t reservedSpace0:8;
      uint64_t FULL_WM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) X1BUFCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t X2_BASE:8;
      uint64_t X2_BUF_SIZE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) X2BUFCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Y_BASE:8;
      uint64_t Y_BUF_SIZE:8;
      uint64_t reservedSpace0:8;
      uint64_t EMPTY_WM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) YBUFCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P:8;
      uint64_t Q:8;
      uint64_t R:8;
      uint64_t FUNC:7;
      uint64_t START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIEN:1;
      uint64_t WIEN:1;
      uint64_t OVFLIEN:1;
      uint64_t UNFLIEN:1;
      uint64_t SATIEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DMAREN:1;
      uint64_t DMAWEN:1;
      uint64_t reservedSpace1:5;
      uint64_t CLIPEN:1;
      uint64_t RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YEMPTY:1;
      uint64_t X1FULL:1;
      uint64_t reservedSpace0:6;
      uint64_t OVFL:1;
      uint64_t UNFL:1;
      uint64_t SAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDATA;

};

#define FMAC (*(volatile struct FMAC_tag *) 0x40021400)

struct CORDIC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC:4;
      uint64_t PRECISION:4;
      uint64_t SCALE:3;
      uint64_t reservedSpace0:5;
      uint64_t IEN:1;
      uint64_t DMAREN:1;
      uint64_t DMAWEN:1;
      uint64_t NRES:1;
      uint64_t NARGS:1;
      uint64_t RESSIZE:1;
      uint64_t ARGSIZE:1;
      uint64_t reservedSpace1:8;
      uint64_t RRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDATA;

};

#define CORDIC (*(volatile struct CORDIC_tag *) 0x40020c00)

struct SAI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t PRTCFG:2;
      uint64_t reservedSpace0:1;
      uint64_t DS:3;
      uint64_t LSBFIRST:1;
      uint64_t CKSTR:1;
      uint64_t SYNCEN:2;
      uint64_t MONO:1;
      uint64_t OutDri:1;
      uint64_t reservedSpace1:2;
      uint64_t SAIAEN:1;
      uint64_t DMAEN:1;
      uint64_t reservedSpace2:1;
      uint64_t NODIV:1;
      uint64_t MCJDIV:6;
      uint64_t OSR:1;
      uint64_t MCKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:3;
      uint64_t FFLUS:1;
      uint64_t TRIS:1;
      uint64_t MUTE:1;
      uint64_t MUTEVAL:1;
      uint64_t MUTECN:6;
      uint64_t CPL:1;
      uint64_t COMP_bitfield:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRL:8;
      uint64_t FSALL:7;
      uint64_t reservedSpace0:1;
      uint64_t FSDEF:1;
      uint64_t FSPOL:1;
      uint64_t FSOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FBOFF:5;
      uint64_t reservedSpace0:1;
      uint64_t SLOTSZ:2;
      uint64_t NBSLOT:4;
      uint64_t reservedSpace1:4;
      uint64_t SLOTEN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASLOTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVRUDRIE:1;
      uint64_t MUTEDET:1;
      uint64_t WCKCFG:1;
      uint64_t FREQIE:1;
      uint64_t CNRDYIE:1;
      uint64_t AFSDETIE:1;
      uint64_t LFSDET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVRUDR:1;
      uint64_t MUTEDET:1;
      uint64_t WCKCFG:1;
      uint64_t FREQ:1;
      uint64_t CNRDY:1;
      uint64_t AFSDET:1;
      uint64_t LFSDET:1;
      uint64_t reservedSpace0:9;
      uint64_t FLVL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVRUDR:1;
      uint64_t MUTEDET:1;
      uint64_t WCKCFG:1;
      uint64_t reservedSpace0:1;
      uint64_t CNRDY:1;
      uint64_t CAFSDET:1;
      uint64_t LFSDET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACLRFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t PRTCFG:2;
      uint64_t reservedSpace0:1;
      uint64_t DS:3;
      uint64_t LSBFIRST:1;
      uint64_t CKSTR:1;
      uint64_t SYNCEN:2;
      uint64_t MONO:1;
      uint64_t OutDri:1;
      uint64_t reservedSpace1:2;
      uint64_t SAIBEN:1;
      uint64_t DMAEN:1;
      uint64_t reservedSpace2:1;
      uint64_t NODIV:1;
      uint64_t MCJDIV:6;
      uint64_t OSR:1;
      uint64_t MCKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:3;
      uint64_t FFLUS:1;
      uint64_t TRIS:1;
      uint64_t MUTE:1;
      uint64_t MUTEVAL:1;
      uint64_t MUTECN:6;
      uint64_t CPL:1;
      uint64_t COMP_bitfield:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRL:8;
      uint64_t FSALL:7;
      uint64_t reservedSpace0:1;
      uint64_t FSDEF:1;
      uint64_t FSPOL:1;
      uint64_t FSOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BFRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FBOFF:5;
      uint64_t reservedSpace0:1;
      uint64_t SLOTSZ:2;
      uint64_t NBSLOT:4;
      uint64_t reservedSpace1:4;
      uint64_t SLOTEN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSLOTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVRUDRIE:1;
      uint64_t MUTEDET:1;
      uint64_t WCKCFG:1;
      uint64_t FREQIE:1;
      uint64_t CNRDYIE:1;
      uint64_t AFSDETIE:1;
      uint64_t LFSDETIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVRUDR:1;
      uint64_t MUTEDET:1;
      uint64_t WCKCFG:1;
      uint64_t FREQ:1;
      uint64_t CNRDY:1;
      uint64_t AFSDET:1;
      uint64_t LFSDET:1;
      uint64_t reservedSpace0:9;
      uint64_t FLVL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVRUDR:1;
      uint64_t MUTEDET:1;
      uint64_t WCKCFG:1;
      uint64_t reservedSpace0:1;
      uint64_t CNRDY:1;
      uint64_t CAFSDET:1;
      uint64_t LFSDET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCLRFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDMEN:1;
      uint64_t reservedSpace0:3;
      uint64_t MICNBR:2;
      uint64_t reservedSpace1:2;
      uint64_t CKEN1:1;
      uint64_t CKEN2:1;
      uint64_t CKEN3:1;
      uint64_t CKEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLYM1L:3;
      uint64_t reservedSpace0:1;
      uint64_t DLYM1R:3;
      uint64_t reservedSpace1:1;
      uint64_t DLYM2L:3;
      uint64_t reservedSpace2:1;
      uint64_t DLYM2R:3;
      uint64_t reservedSpace3:1;
      uint64_t DLYM3L:3;
      uint64_t reservedSpace4:1;
      uint64_t DLYM3R:3;
      uint64_t reservedSpace5:1;
      uint64_t DLYM4L:3;
      uint64_t reservedSpace6:1;
      uint64_t DLYM4R:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMDLY;

};

#define SAI (*(volatile struct SAI_tag *) 0x40015404)

struct TAMP_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMP1E:1;
      uint64_t TAMP2E:1;
      uint64_t TAMP3E:1;
      uint64_t reservedSpace0:15;
      uint64_t ITAMP3E:1;
      uint64_t ITAMP4E:1;
      uint64_t ITAMP5E:1;
      uint64_t ITAMP6E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMP1NOER:1;
      uint64_t TAMP2NOER:1;
      uint64_t TAMP3NOER:1;
      uint64_t reservedSpace0:13;
      uint64_t TAMP1MSK:1;
      uint64_t TAMP2MSK:1;
      uint64_t TAMP3MSK:1;
      uint64_t reservedSpace1:5;
      uint64_t TAMP1TRG:1;
      uint64_t TAMP2TRG:1;
      uint64_t TAMP3TRG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMPFREQ:3;
      uint64_t TAMPFLT:2;
      uint64_t TAMPPRCH:2;
      uint64_t TAMPPUDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTCR;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMP1IE:1;
      uint64_t TAMP2IE:1;
      uint64_t TAMP3IE:1;
      uint64_t reservedSpace0:15;
      uint64_t ITAMP3IE:1;
      uint64_t ITAMP4IE:1;
      uint64_t ITAMP5IE:1;
      uint64_t ITAMP6IE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMP1F:1;
      uint64_t TAMP2F:1;
      uint64_t TAMP3F:1;
      uint64_t reservedSpace0:15;
      uint64_t ITAMP3F:1;
      uint64_t ITAMP4F:1;
      uint64_t ITAMP5F:1;
      uint64_t ITAMP6F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMP1MF:1;
      uint64_t TAMP2MF:1;
      uint64_t TAMP3MF:1;
      uint64_t reservedSpace0:15;
      uint64_t ITAMP3MF:1;
      uint64_t ITAMP4MF:1;
      uint64_t ITAMP5MF:1;
      uint64_t ITAMP6MF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTAMP1F:1;
      uint64_t CTAMP2F:1;
      uint64_t CTAMP3F:1;
      uint64_t reservedSpace0:15;
      uint64_t CITAMP3F:1;
      uint64_t CITAMP4F:1;
      uint64_t CITAMP5F:1;
      uint64_t CITAMP6F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCR;

  uint8_t res3[192];

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP20R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP21R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP22R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP23R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP24R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP25R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP26R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP27R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP28R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP29R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP30R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP31R;

};

#define TAMP (*(volatile struct TAMP_tag *) 0x40002400)

struct FPU_tag
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
      uint64_t IOC:1;
      uint64_t DZC:1;
      uint64_t OFC:1;
      uint64_t UFC:1;
      uint64_t IXC:1;
      uint64_t reservedSpace0:2;
      uint64_t IDC:1;
      uint64_t reservedSpace1:14;
      uint64_t RMode:2;
      uint64_t FZ:1;
      uint64_t DN:1;
      uint64_t AHP:1;
      uint64_t reservedSpace2:1;
      uint64_t V:1;
      uint64_t C:1;
      uint64_t Z:1;
      uint64_t N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPSCR;

};

#define FPU (*(volatile struct FPU_tag *) 0xe000ef34)

struct MPU_tag
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
  } __attribute__((aligned(4))) TYPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t HFNMIENA:1;
      uint64_t PRIVDEFENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RNR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:4;
      uint64_t VALID:1;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBAR;

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
  } __attribute__((aligned(4))) RASR;

};

#define MPU (*(volatile struct MPU_tag *) 0xe000e084)

struct STK_tag
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
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURRENT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VAL;

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
  } __attribute__((aligned(4))) CALIB;

};

#define STK (*(volatile struct STK_tag *) 0xe000e010)

struct SCB_tag
{
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
      uint64_t VECTPENDING:7;
      uint64_t reservedSpace1:3;
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
      uint64_t reservedSpace0:9;
      uint64_t TBLOFF:21;
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
      uint64_t VECTKEYSTAT:16;
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
      uint64_t SEVEONPEND:1;
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
      uint64_t UNALIGN__TRP:1;
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
      uint64_t reservedSpace0:1;
      uint64_t IACCVIOL:1;
      uint64_t reservedSpace1:1;
      uint64_t MUNSTKERR:1;
      uint64_t MSTKERR:1;
      uint64_t MLSPERR:1;
      uint64_t reservedSpace2:1;
      uint64_t MMARVALID:1;
      uint64_t IBUSERR:1;
      uint64_t PRECISERR:1;
      uint64_t IMPRECISERR:1;
      uint64_t UNSTKERR:1;
      uint64_t STKERR:1;
      uint64_t LSPERR:1;
      uint64_t reservedSpace3:1;
      uint64_t BFARVALID:1;
      uint64_t UNDEFINSTR:1;
      uint64_t INVSTATE:1;
      uint64_t INVPC:1;
      uint64_t NOCP:1;
      uint64_t reservedSpace4:4;
      uint64_t UNALIGNED:1;
      uint64_t DIVBYZERO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFSR_UFSR_BFSR_MMFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t VECTTBL:1;
      uint64_t reservedSpace1:28;
      uint64_t FORCED:1;
      uint64_t DEBUG_VT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MMFAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMFAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BFAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IMPDEF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFSR;

};

#define SCB (*(volatile struct SCB_tag *) 0xe000e040)

struct NVIC_tag
{
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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISER3;

  uint8_t res0[112];

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICER3;

  uint8_t res1[112];

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISPR3;

  uint8_t res2[112];

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPR3;

  uint8_t res3[112];

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IABR3;

  uint8_t res4[240];

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
  } __attribute__((aligned(4))) IPR20;

  uint32_t IPR21;
  uint32_t IPR22;
  uint32_t IPR23;
  uint32_t IPR24;
  uint32_t IPR25;
  uint8_t res5[2712];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTID:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STIR;

};

#define NVIC (*(volatile struct NVIC_tag *) 0xe000e100)

struct FPU_CPACR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t CP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPACR;

};

#define FPU_CPACR (*(volatile struct FPU_CPACR_tag *) 0xe000ef08)

struct SCB_ACTRL_tag
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
  } __attribute__((aligned(4))) ACTRL;

};

#define SCB_ACTRL (*(volatile struct SCB_ACTRL_tag *) 0xe000e008)

struct FDCAN_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAY:8;
      uint64_t MON:8;
      uint64_t YEAR:4;
      uint64_t SUBSTEP:4;
      uint64_t STEP:4;
      uint64_t REL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CREL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENDN;

  uint8_t res0[4];

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
      uint64_t WDV:8;
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
      uint64_t BRSE:1;
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
      uint64_t TSEG2:7;
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

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEC:8;
      uint64_t TREC:7;
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
      uint64_t REDL:1;
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

  uint8_t res2[4];

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
      uint64_t reservedSpace0:2;
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
      uint64_t DRX:1;
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

  uint8_t res3[32];

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
  } __attribute__((aligned(4))) RXGFC;

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

  uint8_t res4[4];

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
  } __attribute__((aligned(4))) RXF0S;

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
      uint64_t F1FL:7;
      uint64_t reservedSpace0:1;
      uint64_t F1GI:6;
      uint64_t reservedSpace1:2;
      uint64_t F1PI:6;
      uint64_t reservedSpace2:2;
      uint64_t F1F:1;
      uint64_t RF1L:1;
      uint64_t reservedSpace3:4;
      uint64_t DMS:2;
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

  uint8_t res5[32];

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
      uint64_t CF:32;
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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFFL:6;
      uint64_t reservedSpace0:2;
      uint64_t EFGI:5;
      uint64_t reservedSpace1:3;
      uint64_t EFPI:5;
      uint64_t reservedSpace2:3;
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

  uint8_t res6[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKDIV;

};

#define FDCAN (*(volatile struct FDCAN_tag *) 0x4000a400)

struct FDCAN1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAY:8;
      uint64_t MON:8;
      uint64_t YEAR:4;
      uint64_t SUBSTEP:4;
      uint64_t STEP:4;
      uint64_t REL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CREL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENDN;

  uint8_t res0[4];

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
      uint64_t WDV:8;
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
      uint64_t BRSE:1;
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
      uint64_t TSEG2:7;
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

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEC:8;
      uint64_t TREC:7;
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
      uint64_t REDL:1;
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

  uint8_t res2[4];

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
      uint64_t reservedSpace0:2;
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
      uint64_t DRX:1;
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

  uint8_t res3[32];

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
  } __attribute__((aligned(4))) RXGFC;

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

  uint8_t res4[4];

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
  } __attribute__((aligned(4))) RXF0S;

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
      uint64_t F1FL:7;
      uint64_t reservedSpace0:1;
      uint64_t F1GI:6;
      uint64_t reservedSpace1:2;
      uint64_t F1PI:6;
      uint64_t reservedSpace2:2;
      uint64_t F1F:1;
      uint64_t RF1L:1;
      uint64_t reservedSpace3:4;
      uint64_t DMS:2;
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

  uint8_t res5[32];

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
      uint64_t CF:32;
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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFFL:6;
      uint64_t reservedSpace0:2;
      uint64_t EFGI:5;
      uint64_t reservedSpace1:3;
      uint64_t EFPI:5;
      uint64_t reservedSpace2:3;
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

  uint8_t res6[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKDIV;

};

#define FDCAN1 (*(volatile struct FDCAN1_tag *) 0x40006400)

struct FDCAN2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAY:8;
      uint64_t MON:8;
      uint64_t YEAR:4;
      uint64_t SUBSTEP:4;
      uint64_t STEP:4;
      uint64_t REL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CREL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENDN;

  uint8_t res0[4];

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
      uint64_t WDV:8;
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
      uint64_t BRSE:1;
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
      uint64_t TSEG2:7;
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

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEC:8;
      uint64_t TREC:7;
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
      uint64_t REDL:1;
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

  uint8_t res2[4];

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
      uint64_t reservedSpace0:2;
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
      uint64_t DRX:1;
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

  uint8_t res3[32];

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
  } __attribute__((aligned(4))) RXGFC;

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

  uint8_t res4[4];

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
  } __attribute__((aligned(4))) RXF0S;

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
      uint64_t F1FL:7;
      uint64_t reservedSpace0:1;
      uint64_t F1GI:6;
      uint64_t reservedSpace1:2;
      uint64_t F1PI:6;
      uint64_t reservedSpace2:2;
      uint64_t F1F:1;
      uint64_t RF1L:1;
      uint64_t reservedSpace3:4;
      uint64_t DMS:2;
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

  uint8_t res5[32];

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
      uint64_t CF:32;
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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFFL:6;
      uint64_t reservedSpace0:2;
      uint64_t EFGI:5;
      uint64_t reservedSpace1:3;
      uint64_t EFPI:5;
      uint64_t reservedSpace2:3;
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

  uint8_t res6[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKDIV;

};

#define FDCAN2 (*(volatile struct FDCAN2_tag *) 0x40006800)

struct UCPD1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HBITCLKDIV:6;
      uint64_t IFRGAP:5;
      uint64_t TRANSWIN:5;
      uint64_t reservedSpace0:1;
      uint64_t PSC_USBPDCLK:3;
      uint64_t RXORDSETEN:9;
      uint64_t TXDMAEN:1;
      uint64_t RXDMAEN:1;
      uint64_t UCPDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFILTDIS:1;
      uint64_t RXFILT2N3:1;
      uint64_t FORCECLK:1;
      uint64_t WUPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXMODE:2;
      uint64_t TXSEND:1;
      uint64_t TXHRST:1;
      uint64_t RXMODE:1;
      uint64_t PHYRXEN:1;
      uint64_t PHYCCSEL:1;
      uint64_t ANASUBMODE:2;
      uint64_t ANAMODE:1;
      uint64_t CCENABLE:2;
      uint64_t reservedSpace0:4;
      uint64_t FRSRXEN:1;
      uint64_t FRSTX:1;
      uint64_t RDCH:1;
      uint64_t reservedSpace1:1;
      uint64_t CC1TCDIS:1;
      uint64_t CC2TCDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXISIE:1;
      uint64_t TXMSGDISCIE:1;
      uint64_t TXMSGSENTIE:1;
      uint64_t TXMSGABTIE:1;
      uint64_t HRSTDISCIE:1;
      uint64_t HRSTSENTIE:1;
      uint64_t TXUNDIE:1;
      uint64_t reservedSpace0:1;
      uint64_t RXNEIE:1;
      uint64_t RXORDDETIE:1;
      uint64_t RXHRSTDETIE:1;
      uint64_t RXOVRIE:1;
      uint64_t RXMSGENDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t TYPECEVT1IE:1;
      uint64_t TYPECEVT2IE:1;
      uint64_t reservedSpace2:4;
      uint64_t FRSEVTIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXIS:1;
      uint64_t TXMSGDISC:1;
      uint64_t TXMSGSENT:1;
      uint64_t TXMSGABT:1;
      uint64_t HRSTDISC:1;
      uint64_t HRSTSENT:1;
      uint64_t TXUND:1;
      uint64_t reservedSpace0:1;
      uint64_t RXNE:1;
      uint64_t RXORDDET:1;
      uint64_t RXHRSTDET:1;
      uint64_t RXOVR:1;
      uint64_t RXMSGEND:1;
      uint64_t RXERR:1;
      uint64_t TYPECEVT1:1;
      uint64_t TYPECEVT2:1;
      uint64_t TYPEC_VSTATE_CC1:2;
      uint64_t TYPEC_VSTATE_CC2:2;
      uint64_t FRSEVT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TXMSGDISCCF:1;
      uint64_t TXMSGSENTCF:1;
      uint64_t TXMSGABTCF:1;
      uint64_t HRSTDISCCF:1;
      uint64_t HRSTSENTCF:1;
      uint64_t TXUNDCF:1;
      uint64_t reservedSpace1:2;
      uint64_t RXORDDETCF:1;
      uint64_t RXHRSTDETCF:1;
      uint64_t RXOVRCF:1;
      uint64_t RXMSGENDCF:1;
      uint64_t reservedSpace2:1;
      uint64_t TYPECEVT1CF:1;
      uint64_t TYPECEVT2CF:1;
      uint64_t reservedSpace3:4;
      uint64_t FRSEVTCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXORDSET:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_ORDSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPAYSZ:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_PAYSZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXORDSET:3;
      uint64_t RXSOP3OF4:1;
      uint64_t RXSOPKINVALID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_ORDSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPAYSZ:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_PAYSZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXSOPX1:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_ORDEXT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXSOPX2:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_ORDEXT2;

};

#define UCPD1 (*(volatile struct UCPD1_tag *) 0x4000a000)

struct USB_FS_device_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EA:4;
      uint64_t STAT_TX:2;
      uint64_t DTOG_TX:1;
      uint64_t CTR_TX:1;
      uint64_t EP_KIND:1;
      uint64_t EP_TYPE:2;
      uint64_t SETUP:1;
      uint64_t STAT_RX:2;
      uint64_t DTOG_RX:1;
      uint64_t CTR_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EA:4;
      uint64_t STAT_TX:2;
      uint64_t DTOG_TX:1;
      uint64_t CTR_TX:1;
      uint64_t EP_KIND:1;
      uint64_t EP_TYPE:2;
      uint64_t SETUP:1;
      uint64_t STAT_RX:2;
      uint64_t DTOG_RX:1;
      uint64_t CTR_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EA:4;
      uint64_t STAT_TX:2;
      uint64_t DTOG_TX:1;
      uint64_t CTR_TX:1;
      uint64_t EP_KIND:1;
      uint64_t EP_TYPE:2;
      uint64_t SETUP:1;
      uint64_t STAT_RX:2;
      uint64_t DTOG_RX:1;
      uint64_t CTR_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EA:4;
      uint64_t STAT_TX:2;
      uint64_t DTOG_TX:1;
      uint64_t CTR_TX:1;
      uint64_t EP_KIND:1;
      uint64_t EP_TYPE:2;
      uint64_t SETUP:1;
      uint64_t STAT_RX:2;
      uint64_t DTOG_RX:1;
      uint64_t CTR_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP3R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EA:4;
      uint64_t STAT_TX:2;
      uint64_t DTOG_TX:1;
      uint64_t CTR_TX:1;
      uint64_t EP_KIND:1;
      uint64_t EP_TYPE:2;
      uint64_t SETUP:1;
      uint64_t STAT_RX:2;
      uint64_t DTOG_RX:1;
      uint64_t CTR_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP4R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EA:4;
      uint64_t STAT_TX:2;
      uint64_t DTOG_TX:1;
      uint64_t CTR_TX:1;
      uint64_t EP_KIND:1;
      uint64_t EP_TYPE:2;
      uint64_t SETUP:1;
      uint64_t STAT_RX:2;
      uint64_t DTOG_RX:1;
      uint64_t CTR_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP5R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EA:4;
      uint64_t STAT_TX:2;
      uint64_t DTOG_TX:1;
      uint64_t CTR_TX:1;
      uint64_t EP_KIND:1;
      uint64_t EP_TYPE:2;
      uint64_t SETUP:1;
      uint64_t STAT_RX:2;
      uint64_t DTOG_RX:1;
      uint64_t CTR_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP6R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EA:4;
      uint64_t STAT_TX:2;
      uint64_t DTOG_TX:1;
      uint64_t CTR_TX:1;
      uint64_t EP_KIND:1;
      uint64_t EP_TYPE:2;
      uint64_t SETUP:1;
      uint64_t STAT_RX:2;
      uint64_t DTOG_RX:1;
      uint64_t CTR_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP7R;

  uint8_t res0[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRES:1;
      uint64_t PDWN:1;
      uint64_t LP_MODE:1;
      uint64_t FSUSP:1;
      uint64_t RESUME:1;
      uint64_t L1RESUME:1;
      uint64_t reservedSpace0:1;
      uint64_t L1REQM:1;
      uint64_t ESOFM:1;
      uint64_t SOFM:1;
      uint64_t RESETM:1;
      uint64_t SUSPM:1;
      uint64_t WKUPM:1;
      uint64_t ERRM:1;
      uint64_t PMAOVRM:1;
      uint64_t CTRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EP_ID:4;
      uint64_t DIR:1;
      uint64_t reservedSpace0:2;
      uint64_t L1REQ:1;
      uint64_t ESOF:1;
      uint64_t SOF:1;
      uint64_t RESET:1;
      uint64_t SUSP:1;
      uint64_t WKUP:1;
      uint64_t ERR:1;
      uint64_t PMAOVR:1;
      uint64_t CTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FN:11;
      uint64_t LSOF:2;
      uint64_t LCK:1;
      uint64_t RXDM:1;
      uint64_t RXDP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FNR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADD:7;
      uint64_t EF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t BTABLE:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTABLE;

};

#define USB_FS_device (*(volatile struct USB_FS_device_tag *) 0x40005c00)

struct CRS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCOKIE:1;
      uint64_t SYNCWARNIE:1;
      uint64_t ERRIE:1;
      uint64_t ESYNCIE:1;
      uint64_t reservedSpace0:1;
      uint64_t CEN:1;
      uint64_t AUTOTRIMEN:1;
      uint64_t SWSYNC:1;
      uint64_t TRIM:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:16;
      uint64_t FELIM:8;
      uint64_t SYNCDIV:3;
      uint64_t reservedSpace0:1;
      uint64_t SYNCSRC:2;
      uint64_t reservedSpace1:1;
      uint64_t SYNCPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCOKF:1;
      uint64_t SYNCWARNF:1;
      uint64_t ERRF:1;
      uint64_t ESYNCF:1;
      uint64_t reservedSpace0:4;
      uint64_t SYNCERR:1;
      uint64_t SYNCMISS:1;
      uint64_t TRIMOVF:1;
      uint64_t reservedSpace1:4;
      uint64_t FEDIR:1;
      uint64_t FECAP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCOKC:1;
      uint64_t SYNCWARNC:1;
      uint64_t ERRC:1;
      uint64_t ESYNCC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

};

#define CRS (*(volatile struct CRS_tag *) 0x40002000)

