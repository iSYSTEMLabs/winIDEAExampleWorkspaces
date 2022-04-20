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

struct AC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t RMW:1;
      uint64_t RETEN:1;
      uint64_t SZ:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ITCMCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t RMW:1;
      uint64_t RETEN:1;
      uint64_t SZ:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCMCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t SZ:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIWT:1;
      uint64_t ECCEN:1;
      uint64_t FORCEWT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTL:2;
      uint64_t TPRI:9;
      uint64_t INITCOUNT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBSCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITCM:1;
      uint64_t DTCM:1;
      uint64_t AHBP:1;
      uint64_t AXIM:1;
      uint64_t EPPB:1;
      uint64_t reservedSpace0:3;
      uint64_t AXIMTYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ABFSR;

};

#define AC (*(volatile struct AC_tag *) 0xe000ef90)

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
      uint64_t reservedSpace0:2;
      uint64_t BOOST:2;
      uint64_t reservedSpace1:6;
      uint64_t ADCALLIN:1;
      uint64_t reservedSpace2:5;
      uint64_t LINCALRDYW1:1;
      uint64_t LINCALRDYW2:1;
      uint64_t LINCALRDYW3:1;
      uint64_t LINCALRDYW4:1;
      uint64_t LINCALRDYW5:1;
      uint64_t LINCALRDYW6:1;
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
      uint64_t DMNGT:2;
      uint64_t RES:3;
      uint64_t EXTSEL:5;
      uint64_t EXTEN:2;
      uint64_t OVRMOD:1;
      uint64_t CONT:1;
      uint64_t AUTDLY:1;
      uint64_t reservedSpace0:1;
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
      uint64_t reservedSpace0:3;
      uint64_t OVSS:4;
      uint64_t TROVS:1;
      uint64_t ROVSM:1;
      uint64_t RSHIFT1:1;
      uint64_t RSHIFT2:1;
      uint64_t RSHIFT3:1;
      uint64_t RSHIFT4:1;
      uint64_t reservedSpace1:1;
      uint64_t OSR:10;
      uint64_t reservedSpace2:2;
      uint64_t LSHIFT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t SMP1:3;
      uint64_t SMP2:3;
      uint64_t SMP3:3;
      uint64_t SMP4:3;
      uint64_t SMP5:3;
      uint64_t SMP6:3;
      uint64_t SMP7:3;
      uint64_t SMP8:3;
      uint64_t SMP9:3;
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
      uint64_t SMP19:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCSEL:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTR1:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LHTR1:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LHTR1;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L3:4;
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

  uint8_t res1[8];

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

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET1:26;
      uint64_t OFFSET1_CH:5;
      uint64_t SSATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET1:26;
      uint64_t OFFSET1_CH:5;
      uint64_t SSATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET1:26;
      uint64_t OFFSET1_CH:5;
      uint64_t SSATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET1:26;
      uint64_t OFFSET1_CH:5;
      uint64_t SSATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR4;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR4;

  uint8_t res4[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWD2CH:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWD2CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t AWD3CH:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWD3CR;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTR2:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTR2:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTR3:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTR3:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIFSEL:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIFSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CALFACT_S:11;
      uint64_t reservedSpace0:5;
      uint64_t CALFACT_D:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALFACT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINCALFACT:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALFACT2;

};

#define ADC1 (*(volatile struct ADC1_tag *) 0x40022000)

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
      uint64_t reservedSpace0:2;
      uint64_t BOOST:2;
      uint64_t reservedSpace1:6;
      uint64_t ADCALLIN:1;
      uint64_t reservedSpace2:5;
      uint64_t LINCALRDYW1:1;
      uint64_t LINCALRDYW2:1;
      uint64_t LINCALRDYW3:1;
      uint64_t LINCALRDYW4:1;
      uint64_t LINCALRDYW5:1;
      uint64_t LINCALRDYW6:1;
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
      uint64_t DMNGT:2;
      uint64_t RES:3;
      uint64_t EXTSEL:5;
      uint64_t EXTEN:2;
      uint64_t OVRMOD:1;
      uint64_t CONT:1;
      uint64_t AUTDLY:1;
      uint64_t reservedSpace0:1;
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
      uint64_t reservedSpace0:3;
      uint64_t OVSS:4;
      uint64_t TROVS:1;
      uint64_t ROVSM:1;
      uint64_t RSHIFT1:1;
      uint64_t RSHIFT2:1;
      uint64_t RSHIFT3:1;
      uint64_t RSHIFT4:1;
      uint64_t reservedSpace1:1;
      uint64_t OSR:10;
      uint64_t reservedSpace2:2;
      uint64_t LSHIFT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t SMP1:3;
      uint64_t SMP2:3;
      uint64_t SMP3:3;
      uint64_t SMP4:3;
      uint64_t SMP5:3;
      uint64_t SMP6:3;
      uint64_t SMP7:3;
      uint64_t SMP8:3;
      uint64_t SMP9:3;
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
      uint64_t SMP19:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCSEL:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTR1:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LHTR1:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LHTR1;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L3:4;
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

  uint8_t res1[8];

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

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET1:26;
      uint64_t OFFSET1_CH:5;
      uint64_t SSATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET1:26;
      uint64_t OFFSET1_CH:5;
      uint64_t SSATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET1:26;
      uint64_t OFFSET1_CH:5;
      uint64_t SSATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET1:26;
      uint64_t OFFSET1_CH:5;
      uint64_t SSATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR4;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR4;

  uint8_t res4[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWD2CH:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWD2CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t AWD3CH:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWD3CR;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTR2:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTR2:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTR3:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTR3:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIFSEL:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIFSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CALFACT_S:11;
      uint64_t reservedSpace0:5;
      uint64_t CALFACT_D:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALFACT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINCALFACT:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALFACT2;

};

#define ADC3 (*(volatile struct ADC3_tag *) 0x58026000)

struct ADC12_Common_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRDY_MST:1;
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
      uint64_t reservedSpace1:2;
      uint64_t DAMDF:2;
      uint64_t CKMODE:2;
      uint64_t PRESC:4;
      uint64_t VREFEN:1;
      uint64_t VSENSEEN:1;
      uint64_t VBATEN:1;
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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDATA_ALT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR2;

};

#define ADC12_Common (*(volatile struct ADC12_Common_tag *) 0x40022300)

struct ADC3_Common_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRDY_MST:1;
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
      uint64_t reservedSpace1:2;
      uint64_t DAMDF:2;
      uint64_t CKMODE:2;
      uint64_t PRESC:4;
      uint64_t VREFEN:1;
      uint64_t VSENSEEN:1;
      uint64_t VBATEN:1;
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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDATA_ALT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR2;

};

#define ADC3_Common (*(volatile struct ADC3_Common_tag *) 0x58026300)

struct AXI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t JEP106CON:4;
      uint64_t KCOUNT4:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_PERIPH_ID_4;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARTNUM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_PERIPH_ID_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARTNUM:4;
      uint64_t JEP106I:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_PERIPH_ID_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JEP106ID:3;
      uint64_t JEDEC:1;
      uint64_t REVISION:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_PERIPH_ID_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CUST_MOD_NUM:4;
      uint64_t REV_AND:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_PERIPH_ID_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREAMBLE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_COMP_ID_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREAMBLE:4;
      uint64_t CLASS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_COMP_ID_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREAMBLE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_COMP_ID_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREAMBLE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_COMP_ID_3;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READ_ISS_OVERRIDE:1;
      uint64_t WRITE_ISS_OVERRIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_TARG1_FN_MOD_ISS_BM;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BYPASS_MERGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_TARG1_FN_MOD2;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FN_MOD_LB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_TARG1_FN_MOD_LB;

  uint8_t res4[216];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READ_ISS_OVERRIDE:1;
      uint64_t WRITE_ISS_OVERRIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_TARG1_FN_MOD;

  uint8_t res5[3836];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READ_ISS_OVERRIDE:1;
      uint64_t WRITE_ISS_OVERRIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_TARG2_FN_MOD_ISS_BM;

  uint8_t res6[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BYPASS_MERGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_TARG2_FN_MOD2;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FN_MOD_LB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_TARG2_FN_MOD_LB;

  uint8_t res8[216];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READ_ISS_OVERRIDE:1;
      uint64_t WRITE_ISS_OVERRIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_TARG2_FN_MOD;

  uint8_t res9[3836];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READ_ISS_OVERRIDE:1;
      uint64_t WRITE_ISS_OVERRIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_TARG3_FN_MOD_ISS_BM;

  uint8_t res10[4092];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READ_ISS_OVERRIDE:1;
      uint64_t WRITE_ISS_OVERRIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_TARG4_FN_MOD_ISS_BM;

  uint8_t res11[4092];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READ_ISS_OVERRIDE:1;
      uint64_t WRITE_ISS_OVERRIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_TARG5_FN_MOD_ISS_BM;

  uint8_t res12[4092];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READ_ISS_OVERRIDE:1;
      uint64_t WRITE_ISS_OVERRIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_TARG6_FN_MOD_ISS_BM;

  uint8_t res13[4096];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READ_ISS_OVERRIDE:1;
      uint64_t WRITE_ISS_OVERRIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_TARG7_FN_MOD_ISS_BM;

  uint8_t res14[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BYPASS_MERGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_TARG7_FN_MOD2;

  uint8_t res15[224];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READ_ISS_OVERRIDE:1;
      uint64_t WRITE_ISS_OVERRIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_TARG7_FN_MOD;

  uint8_t res16[237336];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BYPASS_MERGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_INI1_FN_MOD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD_INC_OVERRIDE:1;
      uint64_t WR_INC_OVERRIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_INI1_FN_MOD_AHB;

  uint8_t res17[212];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AR_QOS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_INI1_READ_QOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AW_QOS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_INI1_WRITE_QOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READ_ISS_OVERRIDE:1;
      uint64_t WRITE_ISS_OVERRIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_INI1_FN_MOD;

  uint8_t res18[4084];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AR_QOS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_INI2_READ_QOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AW_QOS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_INI2_WRITE_QOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READ_ISS_OVERRIDE:1;
      uint64_t WRITE_ISS_OVERRIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_INI2_FN_MOD;

  uint8_t res19[3864];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BYPASS_MERGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_INI3_FN_MOD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD_INC_OVERRIDE:1;
      uint64_t WR_INC_OVERRIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_INI3_FN_MOD_AHB;

  uint8_t res20[212];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AR_QOS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_INI3_READ_QOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AW_QOS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_INI3_WRITE_QOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READ_ISS_OVERRIDE:1;
      uint64_t WRITE_ISS_OVERRIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_INI3_FN_MOD;

  uint8_t res21[4084];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AR_QOS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_INI4_READ_QOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AW_QOS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_INI4_WRITE_QOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READ_ISS_OVERRIDE:1;
      uint64_t WRITE_ISS_OVERRIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_INI4_FN_MOD;

  uint8_t res22[4084];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AR_QOS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_INI5_READ_QOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AW_QOS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_INI5_WRITE_QOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READ_ISS_OVERRIDE:1;
      uint64_t WRITE_ISS_OVERRIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_INI5_FN_MOD;

  uint8_t res23[4084];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AR_QOS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_INI6_READ_QOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AW_QOS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_INI6_WRITE_QOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READ_ISS_OVERRIDE:1;
      uint64_t WRITE_ISS_OVERRIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AXI_INI6_FN_MOD;

};

#define AXI (*(volatile struct AXI_tag *) 0x51001fd0)

struct CAN_CCU_tag
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
      uint64_t TQBT:5;
      uint64_t reservedSpace0:1;
      uint64_t BCC:1;
      uint64_t CFL:1;
      uint64_t OCPM:8;
      uint64_t CDIV:4;
      uint64_t reservedSpace1:11;
      uint64_t SWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCPC:18;
      uint64_t TQC:11;
      uint64_t reservedSpace0:1;
      uint64_t CALS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDC:16;
      uint64_t WDV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWE:1;
      uint64_t CSC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWEE:1;
      uint64_t CSCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IE;

};

#define CAN_CCU (*(volatile struct CAN_CCU_tag *) 0x4000a800)

struct CEC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CECEN:1;
      uint64_t TXSOM:1;
      uint64_t TXEOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SFT:3;
      uint64_t RXTOL:1;
      uint64_t BRESTP:1;
      uint64_t BREGEN:1;
      uint64_t LBPEGEN:1;
      uint64_t BRDNOGEN:1;
      uint64_t SFTOPT:1;
      uint64_t reservedSpace0:7;
      uint64_t OAR:15;
      uint64_t LSTN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXBR:1;
      uint64_t RXEND:1;
      uint64_t RXOVR:1;
      uint64_t BRE:1;
      uint64_t SBPE:1;
      uint64_t LBPE:1;
      uint64_t RXACKE:1;
      uint64_t ARBLST:1;
      uint64_t TXBR:1;
      uint64_t TXEND:1;
      uint64_t TXUDR:1;
      uint64_t TXERR:1;
      uint64_t TXACKE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXBRIE:1;
      uint64_t RXENDIE:1;
      uint64_t RXOVRIE:1;
      uint64_t BREIE:1;
      uint64_t SBPEIE:1;
      uint64_t LBPEIE:1;
      uint64_t RXACKIE:1;
      uint64_t ARBLSTIE:1;
      uint64_t TXBRIE:1;
      uint64_t TXENDIE:1;
      uint64_t TXUDRIE:1;
      uint64_t TXERRIE:1;
      uint64_t TXACKIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CEC (*(volatile struct CEC_tag *) 0x40006c00)

struct COMP1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1VAL:1;
      uint64_t C2VAL:1;
      uint64_t reservedSpace0:14;
      uint64_t C1IF:1;
      uint64_t C2IF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t CC1IF:1;
      uint64_t CC2IF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFOP:11;
      uint64_t OR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t BRGEN:1;
      uint64_t SCALEN:1;
      uint64_t POLARITY:1;
      uint64_t reservedSpace0:2;
      uint64_t ITEN:1;
      uint64_t reservedSpace1:1;
      uint64_t HYST:2;
      uint64_t reservedSpace2:2;
      uint64_t PWRMODE:2;
      uint64_t reservedSpace3:2;
      uint64_t INMSEL:3;
      uint64_t reservedSpace4:1;
      uint64_t INPSEL:1;
      uint64_t reservedSpace5:3;
      uint64_t BLANKING:4;
      uint64_t reservedSpace6:3;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t BRGEN:1;
      uint64_t SCALEN:1;
      uint64_t POLARITY:1;
      uint64_t WINMODE:1;
      uint64_t reservedSpace0:1;
      uint64_t ITEN:1;
      uint64_t reservedSpace1:1;
      uint64_t HYST:2;
      uint64_t reservedSpace2:2;
      uint64_t PWRMODE:2;
      uint64_t reservedSpace3:2;
      uint64_t INMSEL:3;
      uint64_t reservedSpace4:1;
      uint64_t INPSEL:1;
      uint64_t reservedSpace5:3;
      uint64_t BLANKING:4;
      uint64_t reservedSpace6:3;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR2;

};

#define COMP1 (*(volatile struct COMP1_tag *) 0x58003800)

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

#define CRC (*(volatile struct CRC_tag *) 0x58024c00)

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
      uint64_t TRIM:6;
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

#define CRS (*(volatile struct CRS_tag *) 0x40008400)

struct DAC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN1:1;
      uint64_t TEN1:1;
      uint64_t TSEL1:3;
      uint64_t reservedSpace0:1;
      uint64_t WAVE1:2;
      uint64_t MAMP1:4;
      uint64_t DMAEN1:1;
      uint64_t DMAUDRIE1:1;
      uint64_t CEN1:1;
      uint64_t reservedSpace1:1;
      uint64_t EN2:1;
      uint64_t TEN2:1;
      uint64_t TSEL2:3;
      uint64_t reservedSpace2:1;
      uint64_t WAVE2:2;
      uint64_t MAMP2:4;
      uint64_t DMAEN2:1;
      uint64_t DMAUDRIE2:1;
      uint64_t CEN2:1;
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
  } __attribute__((aligned(4))) SWTRGR;

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
      uint64_t CAL_FLAG1:1;
      uint64_t BWST1:1;
      uint64_t reservedSpace1:13;
      uint64_t DMAUDR2:1;
      uint64_t CAL_FLAG2:1;
      uint64_t BWST2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTRIM1:5;
      uint64_t reservedSpace0:11;
      uint64_t OTRIM2:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE1:3;
      uint64_t reservedSpace0:13;
      uint64_t MODE2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSAMPLE1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSAMPLE2:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THOLD1:10;
      uint64_t reservedSpace0:6;
      uint64_t THOLD2:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TREFRESH1:8;
      uint64_t reservedSpace0:8;
      uint64_t TREFRESH2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHRR;

};

#define DAC (*(volatile struct DAC_tag *) 0x40007400)

struct DBGMCU_tag
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
  } __attribute__((aligned(4))) IDC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBGSLPD1:1;
      uint64_t DBGSTPD1:1;
      uint64_t DBGSTBD1:1;
      uint64_t DBGSLPD2:1;
      uint64_t DBGSTPD2:1;
      uint64_t DBGSTBD2:1;
      uint64_t reservedSpace0:1;
      uint64_t DBGSTPD3:1;
      uint64_t DBGSTBD3:1;
      uint64_t reservedSpace1:11;
      uint64_t TRACECLKEN:1;
      uint64_t D1DBGCKEN:1;
      uint64_t D3DBGCKEN:1;
      uint64_t reservedSpace2:5;
      uint64_t TRGOEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  uint8_t res0[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t WWDG1_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB3FZ1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t WWDG1_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB3FZ2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBG_TIM2:1;
      uint64_t DBG_TIM3:1;
      uint64_t DBG_TIM4:1;
      uint64_t DBG_TIM5:1;
      uint64_t DBG_TIM6:1;
      uint64_t DBG_TIM7:1;
      uint64_t DBG_TIM12:1;
      uint64_t DBG_TIM13:1;
      uint64_t DBG_TIM14:1;
      uint64_t DBG_LPTIM1:1;
      uint64_t reservedSpace0:1;
      uint64_t DBG_WWDG2:1;
      uint64_t reservedSpace1:9;
      uint64_t DBG_I2C1:1;
      uint64_t DBG_I2C2:1;
      uint64_t DBG_I2C3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1LFZ1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBG_TIM2:1;
      uint64_t DBG_TIM3:1;
      uint64_t DBG_TIM4:1;
      uint64_t DBG_TIM5:1;
      uint64_t DBG_TIM6:1;
      uint64_t DBG_TIM7:1;
      uint64_t DBG_TIM12:1;
      uint64_t DBG_TIM13:1;
      uint64_t DBG_TIM14:1;
      uint64_t DBG_LPTIM1:1;
      uint64_t reservedSpace0:1;
      uint64_t DBG_WWDG2:1;
      uint64_t reservedSpace1:9;
      uint64_t DBG_I2C1:1;
      uint64_t DBG_I2C2:1;
      uint64_t DBG_I2C3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1LFZ2;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBG_TIM1:1;
      uint64_t DBG_TIM8:1;
      uint64_t reservedSpace0:14;
      uint64_t DBG_TIM15:1;
      uint64_t DBG_TIM16:1;
      uint64_t DBG_TIM17:1;
      uint64_t reservedSpace1:10;
      uint64_t DBG_HRTIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2FZ1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBG_TIM1:1;
      uint64_t DBG_TIM8:1;
      uint64_t reservedSpace0:14;
      uint64_t DBG_TIM15:1;
      uint64_t DBG_TIM16:1;
      uint64_t DBG_TIM17:1;
      uint64_t reservedSpace1:10;
      uint64_t DBG_HRTIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2FZ2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t DBG_I2C4:1;
      uint64_t reservedSpace1:1;
      uint64_t DBG_LPTIM2:1;
      uint64_t DBG_LPTIM3:1;
      uint64_t DBG_LPTIM4:1;
      uint64_t DBG_LPTIM5:1;
      uint64_t reservedSpace2:3;
      uint64_t DBG_RTC:1;
      uint64_t reservedSpace3:1;
      uint64_t DBG_WDGLSD1:1;
      uint64_t DBG_WDGLSD2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB4FZ1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t DBG_I2C4:1;
      uint64_t reservedSpace1:1;
      uint64_t DBG_LPTIM2:1;
      uint64_t DBG_LPTIM3:1;
      uint64_t DBG_LPTIM4:1;
      uint64_t DBG_LPTIM5:1;
      uint64_t reservedSpace2:3;
      uint64_t DBG_RTC:1;
      uint64_t reservedSpace3:1;
      uint64_t DBG_WDGLSD1:1;
      uint64_t DBG_WDGLSD2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB4FZ2;

};

#define DBGMCU (*(volatile struct DBGMCU_tag *) 0x5c001000)

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
      uint64_t reservedSpace1:1;
      uint64_t BSM:2;
      uint64_t OEBS:1;
      uint64_t LSM:1;
      uint64_t OELS:1;
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

#define DCMI (*(volatile struct DCMI_tag *) 0x48020000)

struct DELAY_Block_SDMMC1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEN:1;
      uint64_t SEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:4;
      uint64_t reservedSpace0:4;
      uint64_t UNIT:7;
      uint64_t reservedSpace1:1;
      uint64_t LNG:12;
      uint64_t reservedSpace2:3;
      uint64_t LNGF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

};

#define DELAY_Block_SDMMC1 (*(volatile struct DELAY_Block_SDMMC1_tag *) 0x52008000)

struct DELAY_Block_SDMMC2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEN:1;
      uint64_t SEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:4;
      uint64_t reservedSpace0:4;
      uint64_t UNIT:7;
      uint64_t reservedSpace1:1;
      uint64_t LNG:12;
      uint64_t reservedSpace2:3;
      uint64_t LNGF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

};

#define DELAY_Block_SDMMC2 (*(volatile struct DELAY_Block_SDMMC2_tag *) 0x48022800)

struct DFSDM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SITP:2;
      uint64_t SPICKSEL:2;
      uint64_t reservedSpace0:1;
      uint64_t SCDEN:1;
      uint64_t CKABEN:1;
      uint64_t CHEN:1;
      uint64_t CHINSEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DATMPX:2;
      uint64_t DATPACK:2;
      uint64_t CKOUTDIV:8;
      uint64_t reservedSpace2:6;
      uint64_t CKOUTSRC:1;
      uint64_t DFSDMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0CFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DTRBS:5;
      uint64_t OFFSET:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0CFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCDT:8;
      uint64_t reservedSpace0:4;
      uint64_t BKSCD:4;
      uint64_t AWFOSR:5;
      uint64_t reservedSpace1:1;
      uint64_t AWFORD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0AWSCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0WDATR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDAT0:16;
      uint64_t INDAT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0DATINR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLSSKP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0DLYR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SITP:2;
      uint64_t SPICKSEL:2;
      uint64_t reservedSpace0:1;
      uint64_t SCDEN:1;
      uint64_t CKABEN:1;
      uint64_t CHEN:1;
      uint64_t CHINSEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DATMPX:2;
      uint64_t DATPACK:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1CFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DTRBS:5;
      uint64_t OFFSET:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1CFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCDT:8;
      uint64_t reservedSpace0:4;
      uint64_t BKSCD:4;
      uint64_t AWFOSR:5;
      uint64_t reservedSpace1:1;
      uint64_t AWFORD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1AWSCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1WDATR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDAT0:16;
      uint64_t INDAT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1DATINR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLSSKP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1DLYR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SITP:2;
      uint64_t SPICKSEL:2;
      uint64_t reservedSpace0:1;
      uint64_t SCDEN:1;
      uint64_t CKABEN:1;
      uint64_t CHEN:1;
      uint64_t CHINSEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DATMPX:2;
      uint64_t DATPACK:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2CFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DTRBS:5;
      uint64_t OFFSET:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2CFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCDT:8;
      uint64_t reservedSpace0:4;
      uint64_t BKSCD:4;
      uint64_t AWFOSR:5;
      uint64_t reservedSpace1:1;
      uint64_t AWFORD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2AWSCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2WDATR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDAT0:16;
      uint64_t INDAT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2DATINR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLSSKP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2DLYR;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SITP:2;
      uint64_t SPICKSEL:2;
      uint64_t reservedSpace0:1;
      uint64_t SCDEN:1;
      uint64_t CKABEN:1;
      uint64_t CHEN:1;
      uint64_t CHINSEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DATMPX:2;
      uint64_t DATPACK:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3CFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DTRBS:5;
      uint64_t OFFSET:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3CFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCDT:8;
      uint64_t reservedSpace0:4;
      uint64_t BKSCD:4;
      uint64_t AWFOSR:5;
      uint64_t reservedSpace1:1;
      uint64_t AWFORD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3AWSCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3WDATR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDAT0:16;
      uint64_t INDAT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3DATINR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLSSKP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3DLYR;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SITP:2;
      uint64_t SPICKSEL:2;
      uint64_t reservedSpace0:1;
      uint64_t SCDEN:1;
      uint64_t CKABEN:1;
      uint64_t CHEN:1;
      uint64_t CHINSEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DATMPX:2;
      uint64_t DATPACK:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4CFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DTRBS:5;
      uint64_t OFFSET:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4CFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCDT:8;
      uint64_t reservedSpace0:4;
      uint64_t BKSCD:4;
      uint64_t AWFOSR:5;
      uint64_t reservedSpace1:1;
      uint64_t AWFORD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4AWSCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4WDATR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDAT0:16;
      uint64_t INDAT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4DATINR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLSSKP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4DLYR;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SITP:2;
      uint64_t SPICKSEL:2;
      uint64_t reservedSpace0:1;
      uint64_t SCDEN:1;
      uint64_t CKABEN:1;
      uint64_t CHEN:1;
      uint64_t CHINSEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DATMPX:2;
      uint64_t DATPACK:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5CFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DTRBS:5;
      uint64_t OFFSET:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5CFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCDT:8;
      uint64_t reservedSpace0:4;
      uint64_t BKSCD:4;
      uint64_t AWFOSR:5;
      uint64_t reservedSpace1:1;
      uint64_t AWFORD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5AWSCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5WDATR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDAT0:16;
      uint64_t INDAT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5DATINR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLSSKP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5DLYR;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SITP:2;
      uint64_t SPICKSEL:2;
      uint64_t reservedSpace0:1;
      uint64_t SCDEN:1;
      uint64_t CKABEN:1;
      uint64_t CHEN:1;
      uint64_t CHINSEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DATMPX:2;
      uint64_t DATPACK:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6CFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DTRBS:5;
      uint64_t OFFSET:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6CFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCDT:8;
      uint64_t reservedSpace0:4;
      uint64_t BKSCD:4;
      uint64_t AWFOSR:5;
      uint64_t reservedSpace1:1;
      uint64_t AWFORD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6AWSCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6WDATR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDAT0:16;
      uint64_t INDAT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6DATINR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLSSKP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6DLYR;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SITP:2;
      uint64_t SPICKSEL:2;
      uint64_t reservedSpace0:1;
      uint64_t SCDEN:1;
      uint64_t CKABEN:1;
      uint64_t CHEN:1;
      uint64_t CHINSEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DATMPX:2;
      uint64_t DATPACK:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7CFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DTRBS:5;
      uint64_t OFFSET:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7CFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCDT:8;
      uint64_t reservedSpace0:4;
      uint64_t BKSCD:4;
      uint64_t AWFOSR:5;
      uint64_t reservedSpace1:1;
      uint64_t AWFORD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7AWSCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7WDATR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDAT0:16;
      uint64_t INDAT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7DATINR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLSSKP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7DLYR;

  uint8_t res7[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFEN:1;
      uint64_t JSWSTART:1;
      uint64_t reservedSpace0:1;
      uint64_t JSYNC:1;
      uint64_t JSCAN:1;
      uint64_t JDMAEN:1;
      uint64_t reservedSpace1:2;
      uint64_t JEXTSEL:3;
      uint64_t reservedSpace2:2;
      uint64_t JEXTEN:2;
      uint64_t reservedSpace3:2;
      uint64_t RSWSTART:1;
      uint64_t RCONT:1;
      uint64_t RSYNC:1;
      uint64_t reservedSpace4:1;
      uint64_t RDMAEN:1;
      uint64_t reservedSpace5:2;
      uint64_t RCH:3;
      uint64_t reservedSpace6:2;
      uint64_t FAST:1;
      uint64_t AWFSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT0CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JEOCIE:1;
      uint64_t REOCIE:1;
      uint64_t JOVRIE:1;
      uint64_t ROVRIE:1;
      uint64_t AWDIE:1;
      uint64_t SCDIE:1;
      uint64_t CKABIE:1;
      uint64_t reservedSpace0:1;
      uint64_t EXCH:8;
      uint64_t AWDCH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT0CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JEOCF:1;
      uint64_t REOCF:1;
      uint64_t JOVRF:1;
      uint64_t ROVRF:1;
      uint64_t AWDF:1;
      uint64_t reservedSpace0:8;
      uint64_t JCIP:1;
      uint64_t RCIP:1;
      uint64_t reservedSpace1:1;
      uint64_t CKABF:8;
      uint64_t SCDF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT0ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLRJOVRF:1;
      uint64_t CLRROVRF:1;
      uint64_t reservedSpace1:12;
      uint64_t CLRCKABF:8;
      uint64_t CLRSCDF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT0ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JCHG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT0JCHGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOSR:8;
      uint64_t reservedSpace0:8;
      uint64_t FOSR:10;
      uint64_t reservedSpace1:3;
      uint64_t FORD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT0FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATACH:3;
      uint64_t reservedSpace0:5;
      uint64_t JDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT0JDATAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDATACH:3;
      uint64_t reservedSpace0:1;
      uint64_t RPEND:1;
      uint64_t reservedSpace1:3;
      uint64_t RDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT0RDATAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKAWH:4;
      uint64_t reservedSpace0:4;
      uint64_t AWHT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT0AWHTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKAWL:4;
      uint64_t reservedSpace0:4;
      uint64_t AWLT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT0AWLTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWLTF:8;
      uint64_t AWHTF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT0AWSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRAWLTF:8;
      uint64_t CLRAWHTF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT0AWCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXMAXCH:3;
      uint64_t reservedSpace0:5;
      uint64_t EXMAX:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT0EXMAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXMINCH:3;
      uint64_t reservedSpace0:5;
      uint64_t EXMIN:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT0EXMIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CNVCNT:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT0CNVTIMR;

  uint8_t res8[68];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFEN:1;
      uint64_t JSWSTART:1;
      uint64_t reservedSpace0:1;
      uint64_t JSYNC:1;
      uint64_t JSCAN:1;
      uint64_t JDMAEN:1;
      uint64_t reservedSpace1:2;
      uint64_t JEXTSEL:3;
      uint64_t reservedSpace2:2;
      uint64_t JEXTEN:2;
      uint64_t reservedSpace3:2;
      uint64_t RSWSTART:1;
      uint64_t RCONT:1;
      uint64_t RSYNC:1;
      uint64_t reservedSpace4:1;
      uint64_t RDMAEN:1;
      uint64_t reservedSpace5:2;
      uint64_t RCH:3;
      uint64_t reservedSpace6:2;
      uint64_t FAST:1;
      uint64_t AWFSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT1CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JEOCIE:1;
      uint64_t REOCIE:1;
      uint64_t JOVRIE:1;
      uint64_t ROVRIE:1;
      uint64_t AWDIE:1;
      uint64_t SCDIE:1;
      uint64_t CKABIE:1;
      uint64_t reservedSpace0:1;
      uint64_t EXCH:8;
      uint64_t AWDCH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT1CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JEOCF:1;
      uint64_t REOCF:1;
      uint64_t JOVRF:1;
      uint64_t ROVRF:1;
      uint64_t AWDF:1;
      uint64_t reservedSpace0:8;
      uint64_t JCIP:1;
      uint64_t RCIP:1;
      uint64_t reservedSpace1:1;
      uint64_t CKABF:8;
      uint64_t SCDF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT1ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLRJOVRF:1;
      uint64_t CLRROVRF:1;
      uint64_t reservedSpace1:12;
      uint64_t CLRCKABF:8;
      uint64_t CLRSCDF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM1_ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JCHG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT1JCHGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOSR:8;
      uint64_t reservedSpace0:8;
      uint64_t FOSR:10;
      uint64_t reservedSpace1:3;
      uint64_t FORD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM1_FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATACH:3;
      uint64_t reservedSpace0:5;
      uint64_t JDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT1JDATAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDATACH:3;
      uint64_t reservedSpace0:1;
      uint64_t RPEND:1;
      uint64_t reservedSpace1:3;
      uint64_t RDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT1RDATAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKAWH:4;
      uint64_t reservedSpace0:4;
      uint64_t AWHT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT1AWHTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKAWL:4;
      uint64_t reservedSpace0:4;
      uint64_t AWLT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT1AWLTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWLTF:8;
      uint64_t AWHTF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT1AWSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRAWLTF:8;
      uint64_t CLRAWHTF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT1AWCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXMAXCH:3;
      uint64_t reservedSpace0:5;
      uint64_t EXMAX:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT1EXMAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXMINCH:3;
      uint64_t reservedSpace0:5;
      uint64_t EXMIN:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT1EXMIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CNVCNT:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT1CNVTIMR;

  uint8_t res9[68];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFEN:1;
      uint64_t JSWSTART:1;
      uint64_t reservedSpace0:1;
      uint64_t JSYNC:1;
      uint64_t JSCAN:1;
      uint64_t JDMAEN:1;
      uint64_t reservedSpace1:2;
      uint64_t JEXTSEL:3;
      uint64_t reservedSpace2:2;
      uint64_t JEXTEN:2;
      uint64_t reservedSpace3:2;
      uint64_t RSWSTART:1;
      uint64_t RCONT:1;
      uint64_t RSYNC:1;
      uint64_t reservedSpace4:1;
      uint64_t RDMAEN:1;
      uint64_t reservedSpace5:2;
      uint64_t RCH:3;
      uint64_t reservedSpace6:2;
      uint64_t FAST:1;
      uint64_t AWFSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT2CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JEOCIE:1;
      uint64_t REOCIE:1;
      uint64_t JOVRIE:1;
      uint64_t ROVRIE:1;
      uint64_t AWDIE:1;
      uint64_t SCDIE:1;
      uint64_t CKABIE:1;
      uint64_t reservedSpace0:1;
      uint64_t EXCH:8;
      uint64_t AWDCH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT2CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JEOCF:1;
      uint64_t REOCF:1;
      uint64_t JOVRF:1;
      uint64_t ROVRF:1;
      uint64_t AWDF:1;
      uint64_t reservedSpace0:8;
      uint64_t JCIP:1;
      uint64_t RCIP:1;
      uint64_t reservedSpace1:1;
      uint64_t CKABF:8;
      uint64_t SCDF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT2ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLRJOVRF:1;
      uint64_t CLRROVRF:1;
      uint64_t reservedSpace1:12;
      uint64_t CLRCKABF:8;
      uint64_t CLRSCDF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT2ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JCHG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT2JCHGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOSR:8;
      uint64_t reservedSpace0:8;
      uint64_t FOSR:10;
      uint64_t reservedSpace1:3;
      uint64_t FORD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT2FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATACH:3;
      uint64_t reservedSpace0:5;
      uint64_t JDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT2JDATAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDATACH:3;
      uint64_t reservedSpace0:1;
      uint64_t RPEND:1;
      uint64_t reservedSpace1:3;
      uint64_t RDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT2RDATAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKAWH:4;
      uint64_t reservedSpace0:4;
      uint64_t AWHT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT2AWHTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKAWL:4;
      uint64_t reservedSpace0:4;
      uint64_t AWLT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT2AWLTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWLTF:8;
      uint64_t AWHTF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT2AWSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRAWLTF:8;
      uint64_t CLRAWHTF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT2AWCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXMAXCH:3;
      uint64_t reservedSpace0:5;
      uint64_t EXMAX:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT2EXMAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXMINCH:3;
      uint64_t reservedSpace0:5;
      uint64_t EXMIN:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT2EXMIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CNVCNT:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT2CNVTIMR;

  uint8_t res10[68];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFEN:1;
      uint64_t JSWSTART:1;
      uint64_t reservedSpace0:1;
      uint64_t JSYNC:1;
      uint64_t JSCAN:1;
      uint64_t JDMAEN:1;
      uint64_t reservedSpace1:2;
      uint64_t JEXTSEL:3;
      uint64_t reservedSpace2:2;
      uint64_t JEXTEN:2;
      uint64_t reservedSpace3:2;
      uint64_t RSWSTART:1;
      uint64_t RCONT:1;
      uint64_t RSYNC:1;
      uint64_t reservedSpace4:1;
      uint64_t RDMAEN:1;
      uint64_t reservedSpace5:2;
      uint64_t RCH:3;
      uint64_t reservedSpace6:2;
      uint64_t FAST:1;
      uint64_t AWFSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT3CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JEOCIE:1;
      uint64_t REOCIE:1;
      uint64_t JOVRIE:1;
      uint64_t ROVRIE:1;
      uint64_t AWDIE:1;
      uint64_t SCDIE:1;
      uint64_t CKABIE:1;
      uint64_t reservedSpace0:1;
      uint64_t EXCH:8;
      uint64_t AWDCH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT3CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JEOCF:1;
      uint64_t REOCF:1;
      uint64_t JOVRF:1;
      uint64_t ROVRF:1;
      uint64_t AWDF:1;
      uint64_t reservedSpace0:8;
      uint64_t JCIP:1;
      uint64_t RCIP:1;
      uint64_t reservedSpace1:1;
      uint64_t CKABF:8;
      uint64_t SCDF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT3ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLRJOVRF:1;
      uint64_t CLRROVRF:1;
      uint64_t reservedSpace1:12;
      uint64_t CLRCKABF:8;
      uint64_t CLRSCDF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT3ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JCHG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT3JCHGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOSR:8;
      uint64_t reservedSpace0:8;
      uint64_t FOSR:10;
      uint64_t reservedSpace1:3;
      uint64_t FORD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT3FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATACH:3;
      uint64_t reservedSpace0:5;
      uint64_t JDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT3JDATAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDATACH:3;
      uint64_t reservedSpace0:1;
      uint64_t RPEND:1;
      uint64_t reservedSpace1:3;
      uint64_t RDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT3RDATAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKAWH:4;
      uint64_t reservedSpace0:4;
      uint64_t AWHT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT3AWHTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKAWL:4;
      uint64_t reservedSpace0:4;
      uint64_t AWLT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT3AWLTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWLTF:8;
      uint64_t AWHTF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT3AWSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRAWLTF:8;
      uint64_t CLRAWHTF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT3AWCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXMAXCH:3;
      uint64_t reservedSpace0:5;
      uint64_t EXMAX:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT3EXMAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXMINCH:3;
      uint64_t reservedSpace0:5;
      uint64_t EXMIN:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT3EXMIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CNVCNT:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM_FLT3CNVTIMR;

};

#define DFSDM (*(volatile struct DFSDM_tag *) 0x40017800)

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

#define DMA1 (*(volatile struct DMA1_tag *) 0x40020000)

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

#define DMA2 (*(volatile struct DMA2_tag *) 0x40020400)

struct DMA2D_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t SUSP:1;
      uint64_t ABORT:1;
      uint64_t reservedSpace0:5;
      uint64_t TEIE:1;
      uint64_t TCIE:1;
      uint64_t TWIE:1;
      uint64_t CAEIE:1;
      uint64_t CTCIE:1;
      uint64_t CEIE:1;
      uint64_t reservedSpace1:2;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEIF:1;
      uint64_t TCIF:1;
      uint64_t TWIF:1;
      uint64_t CAEIF:1;
      uint64_t CTCIF:1;
      uint64_t CEIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTEIF:1;
      uint64_t CTCIF:1;
      uint64_t CTWIF:1;
      uint64_t CAECIF:1;
      uint64_t CCTCIF:1;
      uint64_t CCEIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FGMAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LO:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FGOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BGMAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LO:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BGOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM:4;
      uint64_t CCM:1;
      uint64_t START:1;
      uint64_t reservedSpace0:2;
      uint64_t CS:8;
      uint64_t AM:2;
      uint64_t CSS:2;
      uint64_t AI:1;
      uint64_t RBS:1;
      uint64_t reservedSpace1:2;
      uint64_t ALPHA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FGPFCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLUE:8;
      uint64_t GREEN:8;
      uint64_t RED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FGCOLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM:4;
      uint64_t CCM:1;
      uint64_t START:1;
      uint64_t reservedSpace0:2;
      uint64_t CS:8;
      uint64_t AM:2;
      uint64_t reservedSpace1:2;
      uint64_t AI:1;
      uint64_t RBS:1;
      uint64_t reservedSpace2:2;
      uint64_t ALPHA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BGPFCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLUE:8;
      uint64_t GREEN:8;
      uint64_t RED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BGCOLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FGCMAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BGCMAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM:3;
      uint64_t reservedSpace0:17;
      uint64_t AI:1;
      uint64_t RBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPFCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLUE:8;
      uint64_t GREEN:8;
      uint64_t RED:8;
      uint64_t ALPHA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCOLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OMAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LO:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NL:16;
      uint64_t PL:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LW:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t DT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMTCR;

};

#define DMA2D (*(volatile struct DMA2D_tag *) 0x52001000)

struct DMAMUX1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREQ_ID:8;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace0:6;
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
      uint64_t DMAREQ_ID:8;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace0:6;
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
      uint64_t DMAREQ_ID:8;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace0:6;
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
      uint64_t DMAREQ_ID:8;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace0:6;
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
      uint64_t DMAREQ_ID:8;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace0:6;
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
      uint64_t DMAREQ_ID:8;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace0:6;
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
      uint64_t DMAREQ_ID:8;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace0:6;
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
      uint64_t DMAREQ_ID:8;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace0:6;
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
      uint64_t DMAREQ_ID:8;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace0:6;
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
      uint64_t DMAREQ_ID:8;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace0:6;
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
      uint64_t DMAREQ_ID:8;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace0:6;
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
      uint64_t DMAREQ_ID:8;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace0:6;
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
      uint64_t DMAREQ_ID:8;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace0:6;
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
      uint64_t DMAREQ_ID:8;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace0:6;
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
      uint64_t DMAREQ_ID:8;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace0:6;
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
      uint64_t DMAREQ_ID:8;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace0:6;
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
  } __attribute__((aligned(4))) RG4CR;

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
  } __attribute__((aligned(4))) RG5CR;

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
  } __attribute__((aligned(4))) RG6CR;

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
  } __attribute__((aligned(4))) RG7CR;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGCFR;

};

#define DMAMUX1 (*(volatile struct DMAMUX1_tag *) 0x40020800)

struct DMAMUX3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAREQ_ID:8;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace0:6;
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
      uint64_t DMAREQ_ID:8;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace0:6;
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
      uint64_t DMAREQ_ID:8;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace0:6;
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
      uint64_t DMAREQ_ID:8;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace0:6;
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
      uint64_t DMAREQ_ID:8;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace0:6;
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
      uint64_t DMAREQ_ID:8;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace0:6;
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
      uint64_t DMAREQ_ID:8;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace0:6;
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
      uint64_t DMAREQ_ID:8;
      uint64_t SOIE:1;
      uint64_t EGE:1;
      uint64_t reservedSpace0:6;
      uint64_t SE:1;
      uint64_t SPOL:2;
      uint64_t NBREQ:5;
      uint64_t SYNC_ID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7CR;

  uint8_t res0[96];

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
  } __attribute__((aligned(4))) RG4CR;

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
  } __attribute__((aligned(4))) RG5CR;

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
  } __attribute__((aligned(4))) RG6CR;

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
  } __attribute__((aligned(4))) RG7CR;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGCFR;

};

#define DMAMUX3 (*(volatile struct DMAMUX3_tag *) 0x58025800)

struct Delay_Block_OCTOSPI1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEN:1;
      uint64_t SEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:4;
      uint64_t reservedSpace0:4;
      uint64_t UNIT:7;
      uint64_t reservedSpace1:1;
      uint64_t LNG:12;
      uint64_t reservedSpace2:3;
      uint64_t LNGF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

};

#define Delay_Block_OCTOSPI1 (*(volatile struct Delay_Block_OCTOSPI1_tag *) 0x52006000)

struct Delay_Block_OCTOSPI2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEN:1;
      uint64_t SEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:4;
      uint64_t reservedSpace0:4;
      uint64_t UNIT:7;
      uint64_t reservedSpace1:1;
      uint64_t LNG:12;
      uint64_t reservedSpace2:3;
      uint64_t LNGF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

};

#define Delay_Block_OCTOSPI2 (*(volatile struct Delay_Block_OCTOSPI2_tag *) 0x5200b000)

struct EXTI_tag
{
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTSR1;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTSR1;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWIER1;

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
      uint64_t reservedSpace0:3;
      uint64_t MR19:1;
      uint64_t MR20:1;
      uint64_t MR21:1;
      uint64_t reservedSpace1:3;
      uint64_t MR25:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) D3PMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS0:2;
      uint64_t PCS1:2;
      uint64_t PCS2:2;
      uint64_t PCS3:2;
      uint64_t PCS4:2;
      uint64_t PCS5:2;
      uint64_t PCS6:2;
      uint64_t PCS7:2;
      uint64_t PCS8:2;
      uint64_t PCS9:2;
      uint64_t PCS10:2;
      uint64_t PCS11:2;
      uint64_t PCS12:2;
      uint64_t PCS13:2;
      uint64_t PCS14:2;
      uint64_t PCS15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) D3PCR1L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PCS19:2;
      uint64_t PCS20:2;
      uint64_t PCS21:2;
      uint64_t reservedSpace1:6;
      uint64_t PCS25:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) D3PCR1H;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:17;
      uint64_t TR49:1;
      uint64_t reservedSpace1:1;
      uint64_t TR51:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:17;
      uint64_t TR49:1;
      uint64_t reservedSpace1:1;
      uint64_t TR51:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:17;
      uint64_t SWIER49:1;
      uint64_t reservedSpace1:1;
      uint64_t SWIER51:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWIER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t MR34:1;
      uint64_t MR35:1;
      uint64_t reservedSpace1:5;
      uint64_t MR41:1;
      uint64_t reservedSpace2:6;
      uint64_t MR48:1;
      uint64_t MR49:1;
      uint64_t MR50:1;
      uint64_t MR51:1;
      uint64_t MR52:1;
      uint64_t MR53:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) D3PMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t PCS34:2;
      uint64_t PCS35:2;
      uint64_t reservedSpace1:10;
      uint64_t PCS41:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) D3PCR2L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS48:2;
      uint64_t PCS49:2;
      uint64_t PCS50:2;
      uint64_t PCS51:2;
      uint64_t PCS52:2;
      uint64_t PCS53:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) D3PCR2H;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:18;
      uint64_t TR82:1;
      uint64_t reservedSpace1:1;
      uint64_t TR84:1;
      uint64_t TR85:1;
      uint64_t TR86:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:18;
      uint64_t TR82:1;
      uint64_t reservedSpace1:1;
      uint64_t TR84:1;
      uint64_t TR85:1;
      uint64_t TR86:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:18;
      uint64_t SWIER82:1;
      uint64_t reservedSpace1:1;
      uint64_t SWIER84:1;
      uint64_t SWIER85:1;
      uint64_t SWIER86:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWIER3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t MR88:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) D3PMR3;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:18;
      uint64_t PCS88:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) D3PCR3H;

  uint8_t res3[40];

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
      uint64_t MR23:1;
      uint64_t MR24:1;
      uint64_t MR25:1;
      uint64_t MR26:1;
      uint64_t MR27:1;
      uint64_t MR28:1;
      uint64_t MR29:1;
      uint64_t MR30:1;
      uint64_t MR31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIMR1;

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
      uint64_t MR23:1;
      uint64_t MR24:1;
      uint64_t MR25:1;
      uint64_t MR26:1;
      uint64_t MR27:1;
      uint64_t MR28:1;
      uint64_t MR29:1;
      uint64_t MR30:1;
      uint64_t MR31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUEMR1;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUPR1;

  uint8_t res4[4];

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
      uint64_t reservedSpace0:1;
      uint64_t MR14:1;
      uint64_t MR15:1;
      uint64_t MR16:1;
      uint64_t MR17:1;
      uint64_t MR18:1;
      uint64_t MR19:1;
      uint64_t MR20:1;
      uint64_t MR21:1;
      uint64_t MR22:1;
      uint64_t MR23:1;
      uint64_t MR24:1;
      uint64_t MR25:1;
      uint64_t MR26:1;
      uint64_t MR27:1;
      uint64_t MR28:1;
      uint64_t MR29:1;
      uint64_t MR30:1;
      uint64_t MR31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR32:1;
      uint64_t MR33:1;
      uint64_t MR34:1;
      uint64_t MR35:1;
      uint64_t MR36:1;
      uint64_t MR37:1;
      uint64_t MR38:1;
      uint64_t MR39:1;
      uint64_t MR40:1;
      uint64_t MR41:1;
      uint64_t MR42:1;
      uint64_t MR43:1;
      uint64_t MR44:1;
      uint64_t reservedSpace0:1;
      uint64_t MR46:1;
      uint64_t MR47:1;
      uint64_t MR48:1;
      uint64_t MR49:1;
      uint64_t MR50:1;
      uint64_t MR51:1;
      uint64_t MR52:1;
      uint64_t MR53:1;
      uint64_t MR54:1;
      uint64_t MR55:1;
      uint64_t MR56:1;
      uint64_t MR57:1;
      uint64_t MR58:1;
      uint64_t MR59:1;
      uint64_t MR60:1;
      uint64_t MR61:1;
      uint64_t MR62:1;
      uint64_t MR63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUEMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:17;
      uint64_t PR49:1;
      uint64_t reservedSpace1:1;
      uint64_t PR51:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUPR2;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR64:1;
      uint64_t MR65:1;
      uint64_t MR66:1;
      uint64_t MR67:1;
      uint64_t MR68:1;
      uint64_t MR69:1;
      uint64_t MR70:1;
      uint64_t MR71:1;
      uint64_t MR72:1;
      uint64_t MR73:1;
      uint64_t MR74:1;
      uint64_t MR75:1;
      uint64_t MR76:1;
      uint64_t MR77:1;
      uint64_t MR78:1;
      uint64_t MR79:1;
      uint64_t MR80:1;
      uint64_t reservedSpace0:1;
      uint64_t MR82:1;
      uint64_t reservedSpace1:1;
      uint64_t MR84:1;
      uint64_t MR85:1;
      uint64_t MR86:1;
      uint64_t MR87:1;
      uint64_t MR88:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIMR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR64:1;
      uint64_t MR65:1;
      uint64_t MR66:1;
      uint64_t MR67:1;
      uint64_t MR68:1;
      uint64_t MR69:1;
      uint64_t MR70:1;
      uint64_t MR71:1;
      uint64_t MR72:1;
      uint64_t MR73:1;
      uint64_t MR74:1;
      uint64_t MR75:1;
      uint64_t MR76:1;
      uint64_t MR77:1;
      uint64_t MR78:1;
      uint64_t MR79:1;
      uint64_t MR80:1;
      uint64_t reservedSpace0:1;
      uint64_t MR82:1;
      uint64_t reservedSpace1:1;
      uint64_t MR84:1;
      uint64_t MR85:1;
      uint64_t MR86:1;
      uint64_t MR87:1;
      uint64_t MR88:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUEMR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:18;
      uint64_t PR82:1;
      uint64_t reservedSpace1:1;
      uint64_t PR84:1;
      uint64_t PR85:1;
      uint64_t PR86:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUPR3;

};

#define EXTI (*(volatile struct EXTI_tag *) 0x58000000)

struct Ethernet_MAC_tag
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
      uint64_t reservedSpace1:1;
      uint64_t JE:1;
      uint64_t JD:1;
      uint64_t reservedSpace2:1;
      uint64_t WD:1;
      uint64_t ACS:1;
      uint64_t CST:1;
      uint64_t S2KP:1;
      uint64_t GPSLCE:1;
      uint64_t IPG:3;
      uint64_t IPC:1;
      uint64_t SARC:3;
      uint64_t ARPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACCR;

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
      uint64_t reservedSpace1:5;
      uint64_t EIPGEN:1;
      uint64_t EIPG:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACECR;

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
  } __attribute__((aligned(4))) MACPFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTO:4;
      uint64_t reservedSpace0:4;
      uint64_t PWE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACWTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HT31T0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACHT0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HT63T32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACHT1R;

  uint8_t res0[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VL:16;
      uint64_t ETV:1;
      uint64_t VTIM:1;
      uint64_t ESVL:1;
      uint64_t ERSVLM:1;
      uint64_t DOVLTC:1;
      uint64_t EVLS:2;
      uint64_t reservedSpace0:1;
      uint64_t EVLRXS:1;
      uint64_t VTHM:1;
      uint64_t EDVLP:1;
      uint64_t ERIVLT:1;
      uint64_t EIVLS:2;
      uint64_t reservedSpace1:1;
      uint64_t EIVLRXS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACVTR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLHT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACVHTR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLT:16;
      uint64_t VLC:2;
      uint64_t VLP:1;
      uint64_t CSVL:1;
      uint64_t VLTI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACVIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLT:16;
      uint64_t VLC:2;
      uint64_t VLP:1;
      uint64_t CSVL:1;
      uint64_t VLTI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACIVIR;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCB_BPA:1;
      uint64_t TFE:1;
      uint64_t reservedSpace0:2;
      uint64_t PLT:3;
      uint64_t DZPQ:1;
      uint64_t reservedSpace1:8;
      uint64_t PT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACQTxFCR;

  uint8_t res4[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFE:1;
      uint64_t UP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACRxFCR;

  uint8_t res5[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PHYIS:1;
      uint64_t PMTIS:1;
      uint64_t LPIIS:1;
      uint64_t reservedSpace1:2;
      uint64_t MMCIS:1;
      uint64_t MMCRXIS:1;
      uint64_t MMCTXIS:1;
      uint64_t reservedSpace2:1;
      uint64_t TSIS:1;
      uint64_t TXSTSIS:1;
      uint64_t RXSTSIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACISR;

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
      uint64_t RXSTSIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACIER;

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
  } __attribute__((aligned(4))) MACRxTxSR;

  uint8_t res6[4];

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
  } __attribute__((aligned(4))) MACPCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WKUPFRMFTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACRWKPFR;

  uint8_t res7[8];

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
      uint64_t PLSEN:1;
      uint64_t LPITXA:1;
      uint64_t LPITE:1;
      uint64_t LPITCSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACLCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TWT:16;
      uint64_t LST:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACLTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPIET:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACLETR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIC_1US_CNTR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC1USTCR;

  uint8_t res8[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SNPSVER:8;
      uint64_t USERVER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPESTS:1;
      uint64_t RFCFCSTS:2;
      uint64_t reservedSpace0:13;
      uint64_t TPESTS:1;
      uint64_t TFCSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACDR;

  uint8_t res9[8];

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
      uint64_t reservedSpace1:2;
      uint64_t DCBEN:1;
      uint64_t SPHEN:1;
      uint64_t TSOEN:1;
      uint64_t DBGMEMA:1;
      uint64_t AVSEL:1;
      uint64_t reservedSpace2:3;
      uint64_t HASHTBLSZ:2;
      uint64_t reservedSpace3:1;
      uint64_t L3L4FNUM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACHWF1R;

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
  } __attribute__((aligned(4))) MACHWF2R;

  uint8_t res10[216];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB:1;
      uint64_t C45E:1;
      uint64_t GOC:2;
      uint64_t SKAP:1;
      uint64_t reservedSpace0:3;
      uint64_t CR:4;
      uint64_t NTC:3;
      uint64_t reservedSpace1:1;
      uint64_t RDA:5;
      uint64_t PA:5;
      uint64_t BTB:1;
      uint64_t PSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACMDIOAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:16;
      uint64_t RA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACMDIODR;

  uint8_t res11[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRHI:16;
      uint64_t reservedSpace0:15;
      uint64_t AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACA0HR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRLO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACA0LR;

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
  } __attribute__((aligned(4))) MACA1HR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRLO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACA1LR;

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
  } __attribute__((aligned(4))) MACA2HR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRLO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACA2LR;

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
  } __attribute__((aligned(4))) MACA3HR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRLO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACA3LR;

  uint8_t res12[992];

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
      uint64_t reservedSpace0:5;
      uint64_t RXCRCERPIS:1;
      uint64_t RXALGNERPIS:1;
      uint64_t reservedSpace1:10;
      uint64_t RXUCGPIS:1;
      uint64_t reservedSpace2:8;
      uint64_t RXLPIUSCIS:1;
      uint64_t RXLPITRCIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_RX_INTERRUPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t TXSCOLGPIS:1;
      uint64_t TXMCOLGPIS:1;
      uint64_t reservedSpace1:5;
      uint64_t TXGPKTIS:1;
      uint64_t reservedSpace2:4;
      uint64_t TXLPIUSCIS:1;
      uint64_t TXLPITRCIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_TX_INTERRUPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t RXCRCERPIM:1;
      uint64_t RXALGNERPIM:1;
      uint64_t reservedSpace1:10;
      uint64_t RXUCGPIM:1;
      uint64_t reservedSpace2:8;
      uint64_t RXLPIUSCIM:1;
      uint64_t RXLPITRCIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_RX_INTERRUPT_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t TXSCOLGPIM:1;
      uint64_t TXMCOLGPIM:1;
      uint64_t reservedSpace1:5;
      uint64_t TXGPKTIM:1;
      uint64_t reservedSpace2:4;
      uint64_t TXLPIUSCIM:1;
      uint64_t TXLPITRCIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_TX_INTERRUPT_MASK;

  uint8_t res13[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXSNGLCOLG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_SINGLE_COLLISION_GOOD_PACKETS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXMULTCOLG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_MULTIPLE_COLLISION_GOOD_PACKETS;

  uint8_t res14[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPKTG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_PACKET_COUNT_GOOD;

  uint8_t res15[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCRCERR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_CRC_ERROR_PACKETS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXALGNERR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_ALIGNMENT_ERROR_PACKETS;

  uint8_t res16[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXUCASTG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_UNICAST_PACKETS_GOOD;

  uint8_t res17[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLPIUSC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_LPI_USEC_CNTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLPITRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_LPI_TRAN_CNTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXLPIUSC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_LPI_USEC_CNTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXLPITRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_LPI_TRAN_CNTR;

  uint8_t res18[260];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L3PEN0:1;
      uint64_t reservedSpace0:1;
      uint64_t L3SAM0:1;
      uint64_t L3SAIM0:1;
      uint64_t L3DAM0:1;
      uint64_t L3DAIM0:1;
      uint64_t L3HSBM0:5;
      uint64_t L3HDBM0:5;
      uint64_t L4PEN0:1;
      uint64_t reservedSpace1:1;
      uint64_t L4SPM0:1;
      uint64_t L4SPIM0:1;
      uint64_t L4DPM0:1;
      uint64_t L4DPIM0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACL3L4C0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L4SP0:16;
      uint64_t L4DP0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACL4A0R;

  uint8_t res19[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L3A00:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACL3A00R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L3A10:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACL3A10R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L3A20:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACL3A20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L3A30:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACL3A30;

  uint8_t res20[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L3PEN1:1;
      uint64_t reservedSpace0:1;
      uint64_t L3SAM1:1;
      uint64_t L3SAIM1:1;
      uint64_t L3DAM1:1;
      uint64_t L3DAIM1:1;
      uint64_t L3HSBM1:5;
      uint64_t L3HDBM1:5;
      uint64_t L4PEN1:1;
      uint64_t reservedSpace1:1;
      uint64_t L4SPM1:1;
      uint64_t L4SPIM1:1;
      uint64_t L4DPM1:1;
      uint64_t L4DPIM1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACL3L4C1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L4SP1:16;
      uint64_t L4DP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACL4A1R;

  uint8_t res21[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L3A01:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACL3A01R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L3A11:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACL3A11R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L3A21:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACL3A21R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L3A31:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACL3A31R;

  uint8_t res22[400];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARPPA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACARPAR;

  uint8_t res23[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSENA:1;
      uint64_t TSCFUPDT:1;
      uint64_t TSINIT:1;
      uint64_t TSUPDT:1;
      uint64_t reservedSpace0:1;
      uint64_t TSADDREG:1;
      uint64_t reservedSpace1:2;
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
      uint64_t CSC:1;
      uint64_t reservedSpace2:4;
      uint64_t TXTSSTSM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACTSCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SNSINC:8;
      uint64_t SSINC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACSSIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACSTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSSS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACSTNR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACSTSUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSSS:31;
      uint64_t ADDSUB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACSTNUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACTSAR;

  uint8_t res24[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSSOVF:1;
      uint64_t TSTARGT0:1;
      uint64_t AUXTSTRIG:1;
      uint64_t TSTRGTERR0:1;
      uint64_t reservedSpace0:11;
      uint64_t TXTSSIS:1;
      uint64_t ATSSTN:4;
      uint64_t reservedSpace1:4;
      uint64_t ATSSTM:1;
      uint64_t ATSNS:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACTSSR;

  uint8_t res25[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXTSSLO:31;
      uint64_t TXTSSMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACTxTSSNR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXTSSHI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACTxTSSSR;

  uint8_t res26[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ATSFC:1;
      uint64_t reservedSpace0:3;
      uint64_t ATSEN0:1;
      uint64_t ATSEN1:1;
      uint64_t ATSEN2:1;
      uint64_t ATSEN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACACR;

  uint8_t res27[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUXTSLO:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACATSNR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUXTSHI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACATSSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSTIAC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACTSIACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSTEAC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACTSEACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSIC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACTSICNR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSEC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACTSECNR;

  uint8_t res28[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSCTRL:4;
      uint64_t PPSEN0:1;
      uint64_t TRGTMODSEL0:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACPPSCR;

  uint8_t res29[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSTRH0:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACPPSTTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TTSL0:31;
      uint64_t TRGTBUSY0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACPPSTTNR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSINT0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACPPSIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSWIDTH0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACPPSWR;

  uint8_t res30[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTOEN:1;
      uint64_t ASYNCEN:1;
      uint64_t APDREQEN:1;
      uint64_t reservedSpace0:1;
      uint64_t ASYNCTRIG:1;
      uint64_t APDREQTRIG:1;
      uint64_t DRRDIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACPOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPI0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACSPI0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPI1_bitfield:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACSPI1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPI2_bitfield:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACSPI2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSI:8;
      uint64_t DRSYNCR:3;
      uint64_t reservedSpace0:13;
      uint64_t LMPDRI:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACLMIR;

  uint8_t res31[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DTXSTS:1;
      uint64_t reservedSpace1:6;
      uint64_t CNTPRST:1;
      uint64_t CNTCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTLOMR;

  uint8_t res32[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Q0IS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTLISR;

  uint8_t res33[220];

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
      uint64_t TQS:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTLTxQOMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UFFRMCNT:11;
      uint64_t UFCNTOVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTLTxQUR;

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
      uint64_t STXSTSF:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTLTxQDR;

  uint8_t res34[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXUNFIS:1;
      uint64_t reservedSpace0:7;
      uint64_t TXUIE:1;
      uint64_t reservedSpace1:7;
      uint64_t RXOVFIS:1;
      uint64_t reservedSpace2:7;
      uint64_t RXOIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTLQICSR;

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
      uint64_t EHFC:1;
      uint64_t RFA:3;
      uint64_t reservedSpace1:3;
      uint64_t RFD:3;
      uint64_t reservedSpace2:3;
      uint64_t RQS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTLRxQOMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVFPKTCNT:11;
      uint64_t OVFCNTOVF:1;
      uint64_t reservedSpace0:4;
      uint64_t MISPKTCNT:11;
      uint64_t MISCNTOVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTLRxQMPOCR;

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
  } __attribute__((aligned(4))) MTLRxQDR;

  uint8_t res35[708];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWR:1;
      uint64_t DA:1;
      uint64_t reservedSpace0:9;
      uint64_t TXPR:1;
      uint64_t PR:3;
      uint64_t reservedSpace1:1;
      uint64_t INTM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMR;

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
  } __attribute__((aligned(4))) DMASBMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DC0IS:1;
      uint64_t reservedSpace0:15;
      uint64_t MTLIS:1;
      uint64_t MACIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AXWHSTS:1;
      uint64_t reservedSpace0:7;
      uint64_t RPS0:4;
      uint64_t TPS0:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMADSR;

  uint8_t res36[240];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSS:14;
      uint64_t reservedSpace0:2;
      uint64_t PBLX8:1;
      uint64_t reservedSpace1:1;
      uint64_t DSL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ST:1;
      uint64_t reservedSpace0:3;
      uint64_t OSF:1;
      uint64_t reservedSpace1:7;
      uint64_t TSE:1;
      uint64_t reservedSpace2:3;
      uint64_t TXPBL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACTxCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t RBSZ:14;
      uint64_t reservedSpace0:1;
      uint64_t RXPBL:6;
      uint64_t reservedSpace1:9;
      uint64_t RPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACRxCR;

  uint8_t res37[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TDESLA:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACTxDLAR;

  uint8_t res38[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RDESLA:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACRxDLAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TDT:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACTxDTPR;

  uint8_t res39[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RDT:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACRxDTPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDRL:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACTxRLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRL:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACRxRLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIE:1;
      uint64_t TXSE:1;
      uint64_t TBUE:1;
      uint64_t reservedSpace0:3;
      uint64_t RIE:1;
      uint64_t RBUE:1;
      uint64_t RSE:1;
      uint64_t RWTE:1;
      uint64_t ETIE:1;
      uint64_t ERIE:1;
      uint64_t FBEE:1;
      uint64_t CDEE:1;
      uint64_t AIE:1;
      uint64_t NIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RWT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACRxIWTR;

  uint8_t res40[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURTDESAPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACCATxDR;

  uint8_t res41[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURRDESAPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACCARxDR;

  uint8_t res42[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURTBUFAPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACCATxBR;

  uint8_t res43[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURRBUFAPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACCARxBR;

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
      uint64_t ET:1;
      uint64_t ER:1;
      uint64_t FBE:1;
      uint64_t CDE:1;
      uint64_t AIS:1;
      uint64_t NIS:1;
      uint64_t TEB:3;
      uint64_t REB:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACSR;

  uint8_t res44[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFC:11;
      uint64_t reservedSpace0:4;
      uint64_t MFCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACMFCR;

};

#define Ethernet_MAC (*(volatile struct Ethernet_MAC_tag *) 0x40028000)

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
  } __attribute__((aligned(4))) FDCAN_CREL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_ENDN;

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
  } __attribute__((aligned(4))) FDCAN_DBTP;

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
  } __attribute__((aligned(4))) FDCAN_TEST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDC:8;
      uint64_t WDV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_RWD;

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
      uint64_t BSE:1;
      uint64_t reservedSpace0:2;
      uint64_t PXHD:1;
      uint64_t EFBI:1;
      uint64_t TXP:1;
      uint64_t NISO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_CCCR;

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
  } __attribute__((aligned(4))) FDCAN_NBTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSS:2;
      uint64_t reservedSpace0:14;
      uint64_t TCP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TSCC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TSCV;

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
  } __attribute__((aligned(4))) FDCAN_TOCC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TOCV;

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
  } __attribute__((aligned(4))) FDCAN_ECR;

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
  } __attribute__((aligned(4))) FDCAN_PSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDCF:7;
      uint64_t reservedSpace0:1;
      uint64_t TDCO:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TDCR;

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
      uint64_t TEF:1;
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
  } __attribute__((aligned(4))) FDCAN_IR;

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
      uint64_t TEFE:1;
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
  } __attribute__((aligned(4))) FDCAN_IE;

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
      uint64_t TEFL:1;
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
  } __attribute__((aligned(4))) FDCAN_ILS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EINT0:1;
      uint64_t EINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_ILE;

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
  } __attribute__((aligned(4))) FDCAN_GFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLSSA:14;
      uint64_t LSS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_SIDFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLESA:14;
      uint64_t LSE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_XIDFC;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIDM:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_XIDAM;

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
  } __attribute__((aligned(4))) FDCAN_HPMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ND0:1;
      uint64_t ND1:1;
      uint64_t ND2:1;
      uint64_t ND3:1;
      uint64_t ND4:1;
      uint64_t ND5:1;
      uint64_t ND6:1;
      uint64_t ND7:1;
      uint64_t ND8:1;
      uint64_t ND9:1;
      uint64_t ND10:1;
      uint64_t ND11:1;
      uint64_t ND12:1;
      uint64_t ND13:1;
      uint64_t ND14:1;
      uint64_t ND15:1;
      uint64_t ND16:1;
      uint64_t ND17:1;
      uint64_t ND18:1;
      uint64_t ND19:1;
      uint64_t ND20:1;
      uint64_t ND21:1;
      uint64_t ND22:1;
      uint64_t ND23:1;
      uint64_t ND24:1;
      uint64_t ND25:1;
      uint64_t ND26:1;
      uint64_t ND27:1;
      uint64_t ND28:1;
      uint64_t ND29:1;
      uint64_t ND30:1;
      uint64_t ND31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_NDAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ND32:1;
      uint64_t ND33:1;
      uint64_t ND34:1;
      uint64_t ND35:1;
      uint64_t ND36:1;
      uint64_t ND37:1;
      uint64_t ND38:1;
      uint64_t ND39:1;
      uint64_t ND40:1;
      uint64_t ND41:1;
      uint64_t ND42:1;
      uint64_t ND43:1;
      uint64_t ND44:1;
      uint64_t ND45:1;
      uint64_t ND46:1;
      uint64_t ND47:1;
      uint64_t ND48:1;
      uint64_t ND49:1;
      uint64_t ND50:1;
      uint64_t ND51:1;
      uint64_t ND52:1;
      uint64_t ND53:1;
      uint64_t ND54:1;
      uint64_t ND55:1;
      uint64_t ND56:1;
      uint64_t ND57:1;
      uint64_t ND58:1;
      uint64_t ND59:1;
      uint64_t ND60:1;
      uint64_t ND61:1;
      uint64_t ND62:1;
      uint64_t ND63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_NDAT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t F0SA:14;
      uint64_t F0S:8;
      uint64_t F0WM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_RXF0C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F0FL:7;
      uint64_t reservedSpace0:1;
      uint64_t F0G:6;
      uint64_t reservedSpace1:2;
      uint64_t F0P:6;
      uint64_t reservedSpace2:2;
      uint64_t F0F:1;
      uint64_t RF0L:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_RXF0S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FA01:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_RXF0A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RBSA:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_RXBC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t F1SA:14;
      uint64_t F1S:7;
      uint64_t reservedSpace1:1;
      uint64_t F1WM:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_RXF1C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F1FL:7;
      uint64_t reservedSpace0:1;
      uint64_t F1GI:7;
      uint64_t reservedSpace1:1;
      uint64_t F1PI:7;
      uint64_t reservedSpace2:1;
      uint64_t F1F:1;
      uint64_t RF1L:1;
      uint64_t reservedSpace3:4;
      uint64_t DMS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_RXF1S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F1AI:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_RXF1A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F0DS:3;
      uint64_t reservedSpace0:1;
      uint64_t F1DS:3;
      uint64_t reservedSpace1:1;
      uint64_t RBDS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_RXESC;

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
  } __attribute__((aligned(4))) FDCAN_TXBC;

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
  } __attribute__((aligned(4))) FDCAN_TXFQS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBDS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TXESC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TXBRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TXBAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TXBCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TXBTO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TXBCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TXBTIE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TXBCIE;

  uint8_t res5[8];

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
  } __attribute__((aligned(4))) FDCAN_TXEFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFFL:6;
      uint64_t reservedSpace0:2;
      uint64_t EFGI:5;
      uint64_t reservedSpace1:11;
      uint64_t EFF:1;
      uint64_t TEFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TXEFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFAI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TXEFA;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TMSA:14;
      uint64_t TME:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTTMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RID:29;
      uint64_t reservedSpace0:1;
      uint64_t XTD:1;
      uint64_t RMPS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTRMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OM:2;
      uint64_t reservedSpace0:1;
      uint64_t GEN:1;
      uint64_t TM:1;
      uint64_t LDSDL:3;
      uint64_t IRTO:7;
      uint64_t EECS:1;
      uint64_t AWL:8;
      uint64_t EGTF:1;
      uint64_t ECC:1;
      uint64_t EVTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTOCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCM:6;
      uint64_t CSS:2;
      uint64_t TXEW:4;
      uint64_t reservedSpace0:4;
      uint64_t ENTT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTMLM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NCL:16;
      uint64_t DC:14;
      uint64_t reservedSpace0:1;
      uint64_t ELT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TURCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SGT:1;
      uint64_t ECS:1;
      uint64_t SWP:1;
      uint64_t SWS:2;
      uint64_t RTIE:1;
      uint64_t TMC:2;
      uint64_t TTIE:1;
      uint64_t GCS:1;
      uint64_t FGP:1;
      uint64_t TMG:1;
      uint64_t NIG:1;
      uint64_t ESCN:1;
      uint64_t reservedSpace0:1;
      uint64_t LCKC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTOCN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NCL:16;
      uint64_t CTP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_TTGTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TM:16;
      uint64_t TICC:7;
      uint64_t reservedSpace0:8;
      uint64_t LCKM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTTMK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBC:1;
      uint64_t SMC:1;
      uint64_t CSM:1;
      uint64_t SOG:1;
      uint64_t RTMI:1;
      uint64_t TTMI:1;
      uint64_t SWE:1;
      uint64_t GTW:1;
      uint64_t GTD:1;
      uint64_t GTE:1;
      uint64_t TXU:1;
      uint64_t TXO:1;
      uint64_t SE1:1;
      uint64_t SE2:1;
      uint64_t ELC:1;
      uint64_t IWTG:1;
      uint64_t WT:1;
      uint64_t AW:1;
      uint64_t CER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBCE:1;
      uint64_t SMCE:1;
      uint64_t CSME:1;
      uint64_t SOGE:1;
      uint64_t RTMIE:1;
      uint64_t TTMIE:1;
      uint64_t SWEE:1;
      uint64_t GTWE:1;
      uint64_t GTDE:1;
      uint64_t GTEE:1;
      uint64_t TXUE:1;
      uint64_t TXOE:1;
      uint64_t SE1E:1;
      uint64_t SE2E:1;
      uint64_t ELCE:1;
      uint64_t IWTGE:1;
      uint64_t WTE:1;
      uint64_t AWE:1;
      uint64_t CERE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTIE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBCL:1;
      uint64_t SMCL:1;
      uint64_t CSML:1;
      uint64_t SOGL:1;
      uint64_t RTMIL:1;
      uint64_t TTMIL:1;
      uint64_t SWEL:1;
      uint64_t GTWL:1;
      uint64_t GTDL:1;
      uint64_t GTEL:1;
      uint64_t TXUL:1;
      uint64_t TXOL:1;
      uint64_t SE1L:1;
      uint64_t SE2L:1;
      uint64_t ELCL:1;
      uint64_t IWTGL:1;
      uint64_t WTL:1;
      uint64_t AWL:1;
      uint64_t CERL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTILS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EL:2;
      uint64_t MS:2;
      uint64_t SYS:2;
      uint64_t GTP:1;
      uint64_t QCS:1;
      uint64_t RTO:8;
      uint64_t reservedSpace0:6;
      uint64_t WGTD:1;
      uint64_t GFI:1;
      uint64_t TMP:3;
      uint64_t GSI:1;
      uint64_t WFE:1;
      uint64_t AWE:1;
      uint64_t WECS:1;
      uint64_t SPL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTOST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NAV:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TURNA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LT:16;
      uint64_t GT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTLGT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CT:16;
      uint64_t CC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTCTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CT:6;
      uint64_t reservedSpace0:10;
      uint64_t SWV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTCPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTCSM;

  uint8_t res7[444];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWTDEL:2;
      uint64_t reservedSpace0:2;
      uint64_t EVTSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTTS;

};

#define FDCAN1 (*(volatile struct FDCAN1_tag *) 0x4000a000)

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
  } __attribute__((aligned(4))) FDCAN_CREL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_ENDN;

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
  } __attribute__((aligned(4))) FDCAN_DBTP;

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
  } __attribute__((aligned(4))) FDCAN_TEST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDC:8;
      uint64_t WDV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_RWD;

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
      uint64_t BSE:1;
      uint64_t reservedSpace0:2;
      uint64_t PXHD:1;
      uint64_t EFBI:1;
      uint64_t TXP:1;
      uint64_t NISO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_CCCR;

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
  } __attribute__((aligned(4))) FDCAN_NBTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSS:2;
      uint64_t reservedSpace0:14;
      uint64_t TCP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TSCC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TSCV;

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
  } __attribute__((aligned(4))) FDCAN_TOCC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TOCV;

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
  } __attribute__((aligned(4))) FDCAN_ECR;

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
  } __attribute__((aligned(4))) FDCAN_PSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDCF:7;
      uint64_t reservedSpace0:1;
      uint64_t TDCO:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TDCR;

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
      uint64_t TEF:1;
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
  } __attribute__((aligned(4))) FDCAN_IR;

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
      uint64_t TEFE:1;
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
  } __attribute__((aligned(4))) FDCAN_IE;

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
      uint64_t TEFL:1;
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
  } __attribute__((aligned(4))) FDCAN_ILS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EINT0:1;
      uint64_t EINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_ILE;

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
  } __attribute__((aligned(4))) FDCAN_GFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLSSA:14;
      uint64_t LSS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_SIDFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLESA:14;
      uint64_t LSE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_XIDFC;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIDM:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_XIDAM;

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
  } __attribute__((aligned(4))) FDCAN_HPMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ND0:1;
      uint64_t ND1:1;
      uint64_t ND2:1;
      uint64_t ND3:1;
      uint64_t ND4:1;
      uint64_t ND5:1;
      uint64_t ND6:1;
      uint64_t ND7:1;
      uint64_t ND8:1;
      uint64_t ND9:1;
      uint64_t ND10:1;
      uint64_t ND11:1;
      uint64_t ND12:1;
      uint64_t ND13:1;
      uint64_t ND14:1;
      uint64_t ND15:1;
      uint64_t ND16:1;
      uint64_t ND17:1;
      uint64_t ND18:1;
      uint64_t ND19:1;
      uint64_t ND20:1;
      uint64_t ND21:1;
      uint64_t ND22:1;
      uint64_t ND23:1;
      uint64_t ND24:1;
      uint64_t ND25:1;
      uint64_t ND26:1;
      uint64_t ND27:1;
      uint64_t ND28:1;
      uint64_t ND29:1;
      uint64_t ND30:1;
      uint64_t ND31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_NDAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ND32:1;
      uint64_t ND33:1;
      uint64_t ND34:1;
      uint64_t ND35:1;
      uint64_t ND36:1;
      uint64_t ND37:1;
      uint64_t ND38:1;
      uint64_t ND39:1;
      uint64_t ND40:1;
      uint64_t ND41:1;
      uint64_t ND42:1;
      uint64_t ND43:1;
      uint64_t ND44:1;
      uint64_t ND45:1;
      uint64_t ND46:1;
      uint64_t ND47:1;
      uint64_t ND48:1;
      uint64_t ND49:1;
      uint64_t ND50:1;
      uint64_t ND51:1;
      uint64_t ND52:1;
      uint64_t ND53:1;
      uint64_t ND54:1;
      uint64_t ND55:1;
      uint64_t ND56:1;
      uint64_t ND57:1;
      uint64_t ND58:1;
      uint64_t ND59:1;
      uint64_t ND60:1;
      uint64_t ND61:1;
      uint64_t ND62:1;
      uint64_t ND63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_NDAT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t F0SA:14;
      uint64_t F0S:8;
      uint64_t F0WM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_RXF0C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F0FL:7;
      uint64_t reservedSpace0:1;
      uint64_t F0G:6;
      uint64_t reservedSpace1:2;
      uint64_t F0P:6;
      uint64_t reservedSpace2:2;
      uint64_t F0F:1;
      uint64_t RF0L:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_RXF0S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FA01:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_RXF0A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RBSA:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_RXBC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t F1SA:14;
      uint64_t F1S:7;
      uint64_t reservedSpace1:1;
      uint64_t F1WM:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_RXF1C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F1FL:7;
      uint64_t reservedSpace0:1;
      uint64_t F1GI:7;
      uint64_t reservedSpace1:1;
      uint64_t F1PI:7;
      uint64_t reservedSpace2:1;
      uint64_t F1F:1;
      uint64_t RF1L:1;
      uint64_t reservedSpace3:4;
      uint64_t DMS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_RXF1S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F1AI:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_RXF1A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F0DS:3;
      uint64_t reservedSpace0:1;
      uint64_t F1DS:3;
      uint64_t reservedSpace1:1;
      uint64_t RBDS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_RXESC;

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
  } __attribute__((aligned(4))) FDCAN_TXBC;

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
  } __attribute__((aligned(4))) FDCAN_TXFQS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBDS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TXESC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TXBRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TXBAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TXBCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TXBTO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TXBCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TXBTIE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TXBCIE;

  uint8_t res5[8];

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
  } __attribute__((aligned(4))) FDCAN_TXEFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFFL:6;
      uint64_t reservedSpace0:2;
      uint64_t EFGI:5;
      uint64_t reservedSpace1:11;
      uint64_t EFF:1;
      uint64_t TEFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TXEFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFAI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TXEFA;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TMSA:14;
      uint64_t TME:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTTMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RID:29;
      uint64_t reservedSpace0:1;
      uint64_t XTD:1;
      uint64_t RMPS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTRMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OM:2;
      uint64_t reservedSpace0:1;
      uint64_t GEN:1;
      uint64_t TM:1;
      uint64_t LDSDL:3;
      uint64_t IRTO:7;
      uint64_t EECS:1;
      uint64_t AWL:8;
      uint64_t EGTF:1;
      uint64_t ECC:1;
      uint64_t EVTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTOCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCM:6;
      uint64_t CSS:2;
      uint64_t TXEW:4;
      uint64_t reservedSpace0:4;
      uint64_t ENTT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTMLM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NCL:16;
      uint64_t DC:14;
      uint64_t reservedSpace0:1;
      uint64_t ELT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TURCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SGT:1;
      uint64_t ECS:1;
      uint64_t SWP:1;
      uint64_t SWS:2;
      uint64_t RTIE:1;
      uint64_t TMC:2;
      uint64_t TTIE:1;
      uint64_t GCS:1;
      uint64_t FGP:1;
      uint64_t TMG:1;
      uint64_t NIG:1;
      uint64_t ESCN:1;
      uint64_t reservedSpace0:1;
      uint64_t LCKC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTOCN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NCL:16;
      uint64_t CTP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_TTGTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TM:16;
      uint64_t TICC:7;
      uint64_t reservedSpace0:8;
      uint64_t LCKM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTTMK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBC:1;
      uint64_t SMC:1;
      uint64_t CSM:1;
      uint64_t SOG:1;
      uint64_t RTMI:1;
      uint64_t TTMI:1;
      uint64_t SWE:1;
      uint64_t GTW:1;
      uint64_t GTD:1;
      uint64_t GTE:1;
      uint64_t TXU:1;
      uint64_t TXO:1;
      uint64_t SE1:1;
      uint64_t SE2:1;
      uint64_t ELC:1;
      uint64_t IWTG:1;
      uint64_t WT:1;
      uint64_t AW:1;
      uint64_t CER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBCE:1;
      uint64_t SMCE:1;
      uint64_t CSME:1;
      uint64_t SOGE:1;
      uint64_t RTMIE:1;
      uint64_t TTMIE:1;
      uint64_t SWEE:1;
      uint64_t GTWE:1;
      uint64_t GTDE:1;
      uint64_t GTEE:1;
      uint64_t TXUE:1;
      uint64_t TXOE:1;
      uint64_t SE1E:1;
      uint64_t SE2E:1;
      uint64_t ELCE:1;
      uint64_t IWTGE:1;
      uint64_t WTE:1;
      uint64_t AWE:1;
      uint64_t CERE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTIE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBCL:1;
      uint64_t SMCL:1;
      uint64_t CSML:1;
      uint64_t SOGL:1;
      uint64_t RTMIL:1;
      uint64_t TTMIL:1;
      uint64_t SWEL:1;
      uint64_t GTWL:1;
      uint64_t GTDL:1;
      uint64_t GTEL:1;
      uint64_t TXUL:1;
      uint64_t TXOL:1;
      uint64_t SE1L:1;
      uint64_t SE2L:1;
      uint64_t ELCL:1;
      uint64_t IWTGL:1;
      uint64_t WTL:1;
      uint64_t AWL:1;
      uint64_t CERL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTILS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EL:2;
      uint64_t MS:2;
      uint64_t SYS:2;
      uint64_t GTP:1;
      uint64_t QCS:1;
      uint64_t RTO:8;
      uint64_t reservedSpace0:6;
      uint64_t WGTD:1;
      uint64_t GFI:1;
      uint64_t TMP:3;
      uint64_t GSI:1;
      uint64_t WFE:1;
      uint64_t AWE:1;
      uint64_t WECS:1;
      uint64_t SPL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTOST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NAV:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TURNA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LT:16;
      uint64_t GT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTLGT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CT:16;
      uint64_t CC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTCTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CT:6;
      uint64_t reservedSpace0:10;
      uint64_t SWV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTCPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTCSM;

  uint8_t res7[444];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWTDEL:2;
      uint64_t reservedSpace0:2;
      uint64_t EVTSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCAN_TTTS;

};

#define FDCAN2 (*(volatile struct FDCAN2_tag *) 0x4000a400)

struct FMC_tag
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
      uint64_t CPSIZE:3;
      uint64_t CBURSTRW:1;
      uint64_t CCLKEN:1;
      uint64_t WFDIS:1;
      uint64_t reservedSpace2:2;
      uint64_t BMAP:2;
      uint64_t reservedSpace3:5;
      uint64_t FMCEN:1;
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
      uint64_t reservedSpace1:1;
      uint64_t WAITCFG:1;
      uint64_t WREN:1;
      uint64_t WAITEN:1;
      uint64_t EXTMOD:1;
      uint64_t ASYNCWAIT:1;
      uint64_t CPSIZE:3;
      uint64_t CBURSTRW:1;
      uint64_t CCLKEN:1;
      uint64_t WFDIS:1;
      uint64_t reservedSpace2:2;
      uint64_t BMAP:2;
      uint64_t reservedSpace3:5;
      uint64_t FMCEN:1;
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
      uint64_t reservedSpace1:1;
      uint64_t WAITCFG:1;
      uint64_t WREN:1;
      uint64_t WAITEN:1;
      uint64_t EXTMOD:1;
      uint64_t ASYNCWAIT:1;
      uint64_t CPSIZE:3;
      uint64_t CBURSTRW:1;
      uint64_t CCLKEN:1;
      uint64_t WFDIS:1;
      uint64_t reservedSpace2:2;
      uint64_t BMAP:2;
      uint64_t reservedSpace3:5;
      uint64_t FMCEN:1;
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
      uint64_t reservedSpace1:1;
      uint64_t WAITCFG:1;
      uint64_t WREN:1;
      uint64_t WAITEN:1;
      uint64_t EXTMOD:1;
      uint64_t ASYNCWAIT:1;
      uint64_t CPSIZE:3;
      uint64_t CBURSTRW:1;
      uint64_t CCLKEN:1;
      uint64_t WFDIS:1;
      uint64_t reservedSpace2:2;
      uint64_t BMAP:2;
      uint64_t reservedSpace3:5;
      uint64_t FMCEN:1;
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

  uint8_t res0[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWAITEN:1;
      uint64_t PBKEN:1;
      uint64_t reservedSpace1:1;
      uint64_t PWID:2;
      uint64_t ECCEN:1;
      uint64_t reservedSpace2:2;
      uint64_t TCLR:4;
      uint64_t TAR:4;
      uint64_t ECCPS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR;

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
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEMSET:8;
      uint64_t MEMWAIT:8;
      uint64_t MEMHOLD:8;
      uint64_t MEMHIZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMEM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ATTSET:8;
      uint64_t ATTWAIT:8;
      uint64_t ATTHOLD:8;
      uint64_t ATTHIZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATT;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCR;

  uint8_t res2[108];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDSET:4;
      uint64_t ADDHLD:4;
      uint64_t DATAST:8;
      uint64_t BUSTURN:4;
      uint64_t reservedSpace0:8;
      uint64_t ACCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BWTR1;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDSET:4;
      uint64_t ADDHLD:4;
      uint64_t DATAST:8;
      uint64_t BUSTURN:4;
      uint64_t reservedSpace0:8;
      uint64_t ACCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BWTR2;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDSET:4;
      uint64_t ADDHLD:4;
      uint64_t DATAST:8;
      uint64_t BUSTURN:4;
      uint64_t reservedSpace0:8;
      uint64_t ACCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BWTR3;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDSET:4;
      uint64_t ADDHLD:4;
      uint64_t DATAST:8;
      uint64_t BUSTURN:4;
      uint64_t reservedSpace0:8;
      uint64_t ACCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BWTR4;

  uint8_t res6[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NC:2;
      uint64_t NR:2;
      uint64_t MWID:2;
      uint64_t NB:1;
      uint64_t CAS:2;
      uint64_t WP:1;
      uint64_t SDCLK:2;
      uint64_t RBURST:1;
      uint64_t RPIPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NC:2;
      uint64_t NR:2;
      uint64_t MWID:2;
      uint64_t NB:1;
      uint64_t CAS:2;
      uint64_t WP:1;
      uint64_t SDCLK:2;
      uint64_t RBURST:1;
      uint64_t RPIPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMRD:4;
      uint64_t TXSR:4;
      uint64_t TRAS:4;
      uint64_t TRC:4;
      uint64_t TWR:4;
      uint64_t TRP:4;
      uint64_t TRCD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMRD:4;
      uint64_t TXSR:4;
      uint64_t TRAS:4;
      uint64_t TRC:4;
      uint64_t TWR:4;
      uint64_t TRP:4;
      uint64_t TRCD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDTR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t CTB2:1;
      uint64_t CTB1:1;
      uint64_t NRFS:4;
      uint64_t MRD:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDCMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRE:1;
      uint64_t COUNT:13;
      uint64_t REIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDRTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RE:1;
      uint64_t MODES1:2;
      uint64_t MODES2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDSR;

};

#define FMC (*(volatile struct FMC_tag *) 0x52004000)

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

#define FPU_CPACR (*(volatile struct FPU_CPACR_tag *) 0xe000ed88)

struct GPIOA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t MODE1:2;
      uint64_t MODE2:2;
      uint64_t MODE3:2;
      uint64_t MODE4:2;
      uint64_t MODE5:2;
      uint64_t MODE6:2;
      uint64_t MODE7:2;
      uint64_t MODE8:2;
      uint64_t MODE9:2;
      uint64_t MODE10:2;
      uint64_t MODE11:2;
      uint64_t MODE12:2;
      uint64_t MODE13:2;
      uint64_t MODE14:2;
      uint64_t MODE15:2;
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
      uint64_t OSPEED0:2;
      uint64_t OSPEED1:2;
      uint64_t OSPEED2:2;
      uint64_t OSPEED3:2;
      uint64_t OSPEED4:2;
      uint64_t OSPEED5:2;
      uint64_t OSPEED6:2;
      uint64_t OSPEED7:2;
      uint64_t OSPEED8:2;
      uint64_t OSPEED9:2;
      uint64_t OSPEED10:2;
      uint64_t OSPEED11:2;
      uint64_t OSPEED12:2;
      uint64_t OSPEED13:2;
      uint64_t OSPEED14:2;
      uint64_t OSPEED15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPD0:2;
      uint64_t PUPD1:2;
      uint64_t PUPD2:2;
      uint64_t PUPD3:2;
      uint64_t PUPD4:2;
      uint64_t PUPD5:2;
      uint64_t PUPD6:2;
      uint64_t PUPD7:2;
      uint64_t PUPD8:2;
      uint64_t PUPD9:2;
      uint64_t PUPD10:2;
      uint64_t PUPD11:2;
      uint64_t PUPD12:2;
      uint64_t PUPD13:2;
      uint64_t PUPD14:2;
      uint64_t PUPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t ID1:1;
      uint64_t ID2:1;
      uint64_t ID3:1;
      uint64_t ID4:1;
      uint64_t ID5:1;
      uint64_t ID6:1;
      uint64_t ID7:1;
      uint64_t ID8:1;
      uint64_t ID9:1;
      uint64_t ID10:1;
      uint64_t ID11:1;
      uint64_t ID12:1;
      uint64_t ID13:1;
      uint64_t ID14:1;
      uint64_t ID15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OD0:1;
      uint64_t OD1:1;
      uint64_t OD2:1;
      uint64_t OD3:1;
      uint64_t OD4:1;
      uint64_t OD5:1;
      uint64_t OD6:1;
      uint64_t OD7:1;
      uint64_t OD8:1;
      uint64_t OD9:1;
      uint64_t OD10:1;
      uint64_t OD11:1;
      uint64_t OD12:1;
      uint64_t OD13:1;
      uint64_t OD14:1;
      uint64_t OD15:1;
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
      uint64_t AFSEL0:4;
      uint64_t AFSEL1:4;
      uint64_t AFSEL2:4;
      uint64_t AFSEL3:4;
      uint64_t AFSEL4:4;
      uint64_t AFSEL5:4;
      uint64_t AFSEL6:4;
      uint64_t AFSEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL8:4;
      uint64_t AFSEL9:4;
      uint64_t AFSEL10:4;
      uint64_t AFSEL11:4;
      uint64_t AFSEL12:4;
      uint64_t AFSEL13:4;
      uint64_t AFSEL14:4;
      uint64_t AFSEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

};

#define GPIOA (*(volatile struct GPIOA_tag *) 0x58020000)

struct GPIOB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t MODE1:2;
      uint64_t MODE2:2;
      uint64_t MODE3:2;
      uint64_t MODE4:2;
      uint64_t MODE5:2;
      uint64_t MODE6:2;
      uint64_t MODE7:2;
      uint64_t MODE8:2;
      uint64_t MODE9:2;
      uint64_t MODE10:2;
      uint64_t MODE11:2;
      uint64_t MODE12:2;
      uint64_t MODE13:2;
      uint64_t MODE14:2;
      uint64_t MODE15:2;
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
      uint64_t OSPEED0:2;
      uint64_t OSPEED1:2;
      uint64_t OSPEED2:2;
      uint64_t OSPEED3:2;
      uint64_t OSPEED4:2;
      uint64_t OSPEED5:2;
      uint64_t OSPEED6:2;
      uint64_t OSPEED7:2;
      uint64_t OSPEED8:2;
      uint64_t OSPEED9:2;
      uint64_t OSPEED10:2;
      uint64_t OSPEED11:2;
      uint64_t OSPEED12:2;
      uint64_t OSPEED13:2;
      uint64_t OSPEED14:2;
      uint64_t OSPEED15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPD0:2;
      uint64_t PUPD1:2;
      uint64_t PUPD2:2;
      uint64_t PUPD3:2;
      uint64_t PUPD4:2;
      uint64_t PUPD5:2;
      uint64_t PUPD6:2;
      uint64_t PUPD7:2;
      uint64_t PUPD8:2;
      uint64_t PUPD9:2;
      uint64_t PUPD10:2;
      uint64_t PUPD11:2;
      uint64_t PUPD12:2;
      uint64_t PUPD13:2;
      uint64_t PUPD14:2;
      uint64_t PUPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t ID1:1;
      uint64_t ID2:1;
      uint64_t ID3:1;
      uint64_t ID4:1;
      uint64_t ID5:1;
      uint64_t ID6:1;
      uint64_t ID7:1;
      uint64_t ID8:1;
      uint64_t ID9:1;
      uint64_t ID10:1;
      uint64_t ID11:1;
      uint64_t ID12:1;
      uint64_t ID13:1;
      uint64_t ID14:1;
      uint64_t ID15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OD0:1;
      uint64_t OD1:1;
      uint64_t OD2:1;
      uint64_t OD3:1;
      uint64_t OD4:1;
      uint64_t OD5:1;
      uint64_t OD6:1;
      uint64_t OD7:1;
      uint64_t OD8:1;
      uint64_t OD9:1;
      uint64_t OD10:1;
      uint64_t OD11:1;
      uint64_t OD12:1;
      uint64_t OD13:1;
      uint64_t OD14:1;
      uint64_t OD15:1;
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
      uint64_t AFSEL0:4;
      uint64_t AFSEL1:4;
      uint64_t AFSEL2:4;
      uint64_t AFSEL3:4;
      uint64_t AFSEL4:4;
      uint64_t AFSEL5:4;
      uint64_t AFSEL6:4;
      uint64_t AFSEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL8:4;
      uint64_t AFSEL9:4;
      uint64_t AFSEL10:4;
      uint64_t AFSEL11:4;
      uint64_t AFSEL12:4;
      uint64_t AFSEL13:4;
      uint64_t AFSEL14:4;
      uint64_t AFSEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

};

#define GPIOB (*(volatile struct GPIOB_tag *) 0x58020400)

struct GPIOC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t MODE1:2;
      uint64_t MODE2:2;
      uint64_t MODE3:2;
      uint64_t MODE4:2;
      uint64_t MODE5:2;
      uint64_t MODE6:2;
      uint64_t MODE7:2;
      uint64_t MODE8:2;
      uint64_t MODE9:2;
      uint64_t MODE10:2;
      uint64_t MODE11:2;
      uint64_t MODE12:2;
      uint64_t MODE13:2;
      uint64_t MODE14:2;
      uint64_t MODE15:2;
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
      uint64_t OSPEED0:2;
      uint64_t OSPEED1:2;
      uint64_t OSPEED2:2;
      uint64_t OSPEED3:2;
      uint64_t OSPEED4:2;
      uint64_t OSPEED5:2;
      uint64_t OSPEED6:2;
      uint64_t OSPEED7:2;
      uint64_t OSPEED8:2;
      uint64_t OSPEED9:2;
      uint64_t OSPEED10:2;
      uint64_t OSPEED11:2;
      uint64_t OSPEED12:2;
      uint64_t OSPEED13:2;
      uint64_t OSPEED14:2;
      uint64_t OSPEED15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPD0:2;
      uint64_t PUPD1:2;
      uint64_t PUPD2:2;
      uint64_t PUPD3:2;
      uint64_t PUPD4:2;
      uint64_t PUPD5:2;
      uint64_t PUPD6:2;
      uint64_t PUPD7:2;
      uint64_t PUPD8:2;
      uint64_t PUPD9:2;
      uint64_t PUPD10:2;
      uint64_t PUPD11:2;
      uint64_t PUPD12:2;
      uint64_t PUPD13:2;
      uint64_t PUPD14:2;
      uint64_t PUPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t ID1:1;
      uint64_t ID2:1;
      uint64_t ID3:1;
      uint64_t ID4:1;
      uint64_t ID5:1;
      uint64_t ID6:1;
      uint64_t ID7:1;
      uint64_t ID8:1;
      uint64_t ID9:1;
      uint64_t ID10:1;
      uint64_t ID11:1;
      uint64_t ID12:1;
      uint64_t ID13:1;
      uint64_t ID14:1;
      uint64_t ID15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OD0:1;
      uint64_t OD1:1;
      uint64_t OD2:1;
      uint64_t OD3:1;
      uint64_t OD4:1;
      uint64_t OD5:1;
      uint64_t OD6:1;
      uint64_t OD7:1;
      uint64_t OD8:1;
      uint64_t OD9:1;
      uint64_t OD10:1;
      uint64_t OD11:1;
      uint64_t OD12:1;
      uint64_t OD13:1;
      uint64_t OD14:1;
      uint64_t OD15:1;
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
      uint64_t AFSEL0:4;
      uint64_t AFSEL1:4;
      uint64_t AFSEL2:4;
      uint64_t AFSEL3:4;
      uint64_t AFSEL4:4;
      uint64_t AFSEL5:4;
      uint64_t AFSEL6:4;
      uint64_t AFSEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL8:4;
      uint64_t AFSEL9:4;
      uint64_t AFSEL10:4;
      uint64_t AFSEL11:4;
      uint64_t AFSEL12:4;
      uint64_t AFSEL13:4;
      uint64_t AFSEL14:4;
      uint64_t AFSEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

};

#define GPIOC (*(volatile struct GPIOC_tag *) 0x58020800)

struct GPIOD_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t MODE1:2;
      uint64_t MODE2:2;
      uint64_t MODE3:2;
      uint64_t MODE4:2;
      uint64_t MODE5:2;
      uint64_t MODE6:2;
      uint64_t MODE7:2;
      uint64_t MODE8:2;
      uint64_t MODE9:2;
      uint64_t MODE10:2;
      uint64_t MODE11:2;
      uint64_t MODE12:2;
      uint64_t MODE13:2;
      uint64_t MODE14:2;
      uint64_t MODE15:2;
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
      uint64_t OSPEED0:2;
      uint64_t OSPEED1:2;
      uint64_t OSPEED2:2;
      uint64_t OSPEED3:2;
      uint64_t OSPEED4:2;
      uint64_t OSPEED5:2;
      uint64_t OSPEED6:2;
      uint64_t OSPEED7:2;
      uint64_t OSPEED8:2;
      uint64_t OSPEED9:2;
      uint64_t OSPEED10:2;
      uint64_t OSPEED11:2;
      uint64_t OSPEED12:2;
      uint64_t OSPEED13:2;
      uint64_t OSPEED14:2;
      uint64_t OSPEED15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPD0:2;
      uint64_t PUPD1:2;
      uint64_t PUPD2:2;
      uint64_t PUPD3:2;
      uint64_t PUPD4:2;
      uint64_t PUPD5:2;
      uint64_t PUPD6:2;
      uint64_t PUPD7:2;
      uint64_t PUPD8:2;
      uint64_t PUPD9:2;
      uint64_t PUPD10:2;
      uint64_t PUPD11:2;
      uint64_t PUPD12:2;
      uint64_t PUPD13:2;
      uint64_t PUPD14:2;
      uint64_t PUPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t ID1:1;
      uint64_t ID2:1;
      uint64_t ID3:1;
      uint64_t ID4:1;
      uint64_t ID5:1;
      uint64_t ID6:1;
      uint64_t ID7:1;
      uint64_t ID8:1;
      uint64_t ID9:1;
      uint64_t ID10:1;
      uint64_t ID11:1;
      uint64_t ID12:1;
      uint64_t ID13:1;
      uint64_t ID14:1;
      uint64_t ID15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OD0:1;
      uint64_t OD1:1;
      uint64_t OD2:1;
      uint64_t OD3:1;
      uint64_t OD4:1;
      uint64_t OD5:1;
      uint64_t OD6:1;
      uint64_t OD7:1;
      uint64_t OD8:1;
      uint64_t OD9:1;
      uint64_t OD10:1;
      uint64_t OD11:1;
      uint64_t OD12:1;
      uint64_t OD13:1;
      uint64_t OD14:1;
      uint64_t OD15:1;
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
      uint64_t AFSEL0:4;
      uint64_t AFSEL1:4;
      uint64_t AFSEL2:4;
      uint64_t AFSEL3:4;
      uint64_t AFSEL4:4;
      uint64_t AFSEL5:4;
      uint64_t AFSEL6:4;
      uint64_t AFSEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL8:4;
      uint64_t AFSEL9:4;
      uint64_t AFSEL10:4;
      uint64_t AFSEL11:4;
      uint64_t AFSEL12:4;
      uint64_t AFSEL13:4;
      uint64_t AFSEL14:4;
      uint64_t AFSEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

};

#define GPIOD (*(volatile struct GPIOD_tag *) 0x58020c00)

struct GPIOE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t MODE1:2;
      uint64_t MODE2:2;
      uint64_t MODE3:2;
      uint64_t MODE4:2;
      uint64_t MODE5:2;
      uint64_t MODE6:2;
      uint64_t MODE7:2;
      uint64_t MODE8:2;
      uint64_t MODE9:2;
      uint64_t MODE10:2;
      uint64_t MODE11:2;
      uint64_t MODE12:2;
      uint64_t MODE13:2;
      uint64_t MODE14:2;
      uint64_t MODE15:2;
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
      uint64_t OSPEED0:2;
      uint64_t OSPEED1:2;
      uint64_t OSPEED2:2;
      uint64_t OSPEED3:2;
      uint64_t OSPEED4:2;
      uint64_t OSPEED5:2;
      uint64_t OSPEED6:2;
      uint64_t OSPEED7:2;
      uint64_t OSPEED8:2;
      uint64_t OSPEED9:2;
      uint64_t OSPEED10:2;
      uint64_t OSPEED11:2;
      uint64_t OSPEED12:2;
      uint64_t OSPEED13:2;
      uint64_t OSPEED14:2;
      uint64_t OSPEED15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPD0:2;
      uint64_t PUPD1:2;
      uint64_t PUPD2:2;
      uint64_t PUPD3:2;
      uint64_t PUPD4:2;
      uint64_t PUPD5:2;
      uint64_t PUPD6:2;
      uint64_t PUPD7:2;
      uint64_t PUPD8:2;
      uint64_t PUPD9:2;
      uint64_t PUPD10:2;
      uint64_t PUPD11:2;
      uint64_t PUPD12:2;
      uint64_t PUPD13:2;
      uint64_t PUPD14:2;
      uint64_t PUPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t ID1:1;
      uint64_t ID2:1;
      uint64_t ID3:1;
      uint64_t ID4:1;
      uint64_t ID5:1;
      uint64_t ID6:1;
      uint64_t ID7:1;
      uint64_t ID8:1;
      uint64_t ID9:1;
      uint64_t ID10:1;
      uint64_t ID11:1;
      uint64_t ID12:1;
      uint64_t ID13:1;
      uint64_t ID14:1;
      uint64_t ID15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OD0:1;
      uint64_t OD1:1;
      uint64_t OD2:1;
      uint64_t OD3:1;
      uint64_t OD4:1;
      uint64_t OD5:1;
      uint64_t OD6:1;
      uint64_t OD7:1;
      uint64_t OD8:1;
      uint64_t OD9:1;
      uint64_t OD10:1;
      uint64_t OD11:1;
      uint64_t OD12:1;
      uint64_t OD13:1;
      uint64_t OD14:1;
      uint64_t OD15:1;
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
      uint64_t AFSEL0:4;
      uint64_t AFSEL1:4;
      uint64_t AFSEL2:4;
      uint64_t AFSEL3:4;
      uint64_t AFSEL4:4;
      uint64_t AFSEL5:4;
      uint64_t AFSEL6:4;
      uint64_t AFSEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL8:4;
      uint64_t AFSEL9:4;
      uint64_t AFSEL10:4;
      uint64_t AFSEL11:4;
      uint64_t AFSEL12:4;
      uint64_t AFSEL13:4;
      uint64_t AFSEL14:4;
      uint64_t AFSEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

};

#define GPIOE (*(volatile struct GPIOE_tag *) 0x58021000)

struct GPIOF_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t MODE1:2;
      uint64_t MODE2:2;
      uint64_t MODE3:2;
      uint64_t MODE4:2;
      uint64_t MODE5:2;
      uint64_t MODE6:2;
      uint64_t MODE7:2;
      uint64_t MODE8:2;
      uint64_t MODE9:2;
      uint64_t MODE10:2;
      uint64_t MODE11:2;
      uint64_t MODE12:2;
      uint64_t MODE13:2;
      uint64_t MODE14:2;
      uint64_t MODE15:2;
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
      uint64_t OSPEED0:2;
      uint64_t OSPEED1:2;
      uint64_t OSPEED2:2;
      uint64_t OSPEED3:2;
      uint64_t OSPEED4:2;
      uint64_t OSPEED5:2;
      uint64_t OSPEED6:2;
      uint64_t OSPEED7:2;
      uint64_t OSPEED8:2;
      uint64_t OSPEED9:2;
      uint64_t OSPEED10:2;
      uint64_t OSPEED11:2;
      uint64_t OSPEED12:2;
      uint64_t OSPEED13:2;
      uint64_t OSPEED14:2;
      uint64_t OSPEED15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPD0:2;
      uint64_t PUPD1:2;
      uint64_t PUPD2:2;
      uint64_t PUPD3:2;
      uint64_t PUPD4:2;
      uint64_t PUPD5:2;
      uint64_t PUPD6:2;
      uint64_t PUPD7:2;
      uint64_t PUPD8:2;
      uint64_t PUPD9:2;
      uint64_t PUPD10:2;
      uint64_t PUPD11:2;
      uint64_t PUPD12:2;
      uint64_t PUPD13:2;
      uint64_t PUPD14:2;
      uint64_t PUPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t ID1:1;
      uint64_t ID2:1;
      uint64_t ID3:1;
      uint64_t ID4:1;
      uint64_t ID5:1;
      uint64_t ID6:1;
      uint64_t ID7:1;
      uint64_t ID8:1;
      uint64_t ID9:1;
      uint64_t ID10:1;
      uint64_t ID11:1;
      uint64_t ID12:1;
      uint64_t ID13:1;
      uint64_t ID14:1;
      uint64_t ID15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OD0:1;
      uint64_t OD1:1;
      uint64_t OD2:1;
      uint64_t OD3:1;
      uint64_t OD4:1;
      uint64_t OD5:1;
      uint64_t OD6:1;
      uint64_t OD7:1;
      uint64_t OD8:1;
      uint64_t OD9:1;
      uint64_t OD10:1;
      uint64_t OD11:1;
      uint64_t OD12:1;
      uint64_t OD13:1;
      uint64_t OD14:1;
      uint64_t OD15:1;
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
      uint64_t AFSEL0:4;
      uint64_t AFSEL1:4;
      uint64_t AFSEL2:4;
      uint64_t AFSEL3:4;
      uint64_t AFSEL4:4;
      uint64_t AFSEL5:4;
      uint64_t AFSEL6:4;
      uint64_t AFSEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL8:4;
      uint64_t AFSEL9:4;
      uint64_t AFSEL10:4;
      uint64_t AFSEL11:4;
      uint64_t AFSEL12:4;
      uint64_t AFSEL13:4;
      uint64_t AFSEL14:4;
      uint64_t AFSEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

};

#define GPIOF (*(volatile struct GPIOF_tag *) 0x58021400)

struct GPIOG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t MODE1:2;
      uint64_t MODE2:2;
      uint64_t MODE3:2;
      uint64_t MODE4:2;
      uint64_t MODE5:2;
      uint64_t MODE6:2;
      uint64_t MODE7:2;
      uint64_t MODE8:2;
      uint64_t MODE9:2;
      uint64_t MODE10:2;
      uint64_t MODE11:2;
      uint64_t MODE12:2;
      uint64_t MODE13:2;
      uint64_t MODE14:2;
      uint64_t MODE15:2;
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
      uint64_t OSPEED0:2;
      uint64_t OSPEED1:2;
      uint64_t OSPEED2:2;
      uint64_t OSPEED3:2;
      uint64_t OSPEED4:2;
      uint64_t OSPEED5:2;
      uint64_t OSPEED6:2;
      uint64_t OSPEED7:2;
      uint64_t OSPEED8:2;
      uint64_t OSPEED9:2;
      uint64_t OSPEED10:2;
      uint64_t OSPEED11:2;
      uint64_t OSPEED12:2;
      uint64_t OSPEED13:2;
      uint64_t OSPEED14:2;
      uint64_t OSPEED15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPD0:2;
      uint64_t PUPD1:2;
      uint64_t PUPD2:2;
      uint64_t PUPD3:2;
      uint64_t PUPD4:2;
      uint64_t PUPD5:2;
      uint64_t PUPD6:2;
      uint64_t PUPD7:2;
      uint64_t PUPD8:2;
      uint64_t PUPD9:2;
      uint64_t PUPD10:2;
      uint64_t PUPD11:2;
      uint64_t PUPD12:2;
      uint64_t PUPD13:2;
      uint64_t PUPD14:2;
      uint64_t PUPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t ID1:1;
      uint64_t ID2:1;
      uint64_t ID3:1;
      uint64_t ID4:1;
      uint64_t ID5:1;
      uint64_t ID6:1;
      uint64_t ID7:1;
      uint64_t ID8:1;
      uint64_t ID9:1;
      uint64_t ID10:1;
      uint64_t ID11:1;
      uint64_t ID12:1;
      uint64_t ID13:1;
      uint64_t ID14:1;
      uint64_t ID15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OD0:1;
      uint64_t OD1:1;
      uint64_t OD2:1;
      uint64_t OD3:1;
      uint64_t OD4:1;
      uint64_t OD5:1;
      uint64_t OD6:1;
      uint64_t OD7:1;
      uint64_t OD8:1;
      uint64_t OD9:1;
      uint64_t OD10:1;
      uint64_t OD11:1;
      uint64_t OD12:1;
      uint64_t OD13:1;
      uint64_t OD14:1;
      uint64_t OD15:1;
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
      uint64_t AFSEL0:4;
      uint64_t AFSEL1:4;
      uint64_t AFSEL2:4;
      uint64_t AFSEL3:4;
      uint64_t AFSEL4:4;
      uint64_t AFSEL5:4;
      uint64_t AFSEL6:4;
      uint64_t AFSEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL8:4;
      uint64_t AFSEL9:4;
      uint64_t AFSEL10:4;
      uint64_t AFSEL11:4;
      uint64_t AFSEL12:4;
      uint64_t AFSEL13:4;
      uint64_t AFSEL14:4;
      uint64_t AFSEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

};

#define GPIOG (*(volatile struct GPIOG_tag *) 0x58021800)

struct GPIOH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t MODE1:2;
      uint64_t MODE2:2;
      uint64_t MODE3:2;
      uint64_t MODE4:2;
      uint64_t MODE5:2;
      uint64_t MODE6:2;
      uint64_t MODE7:2;
      uint64_t MODE8:2;
      uint64_t MODE9:2;
      uint64_t MODE10:2;
      uint64_t MODE11:2;
      uint64_t MODE12:2;
      uint64_t MODE13:2;
      uint64_t MODE14:2;
      uint64_t MODE15:2;
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
      uint64_t OSPEED0:2;
      uint64_t OSPEED1:2;
      uint64_t OSPEED2:2;
      uint64_t OSPEED3:2;
      uint64_t OSPEED4:2;
      uint64_t OSPEED5:2;
      uint64_t OSPEED6:2;
      uint64_t OSPEED7:2;
      uint64_t OSPEED8:2;
      uint64_t OSPEED9:2;
      uint64_t OSPEED10:2;
      uint64_t OSPEED11:2;
      uint64_t OSPEED12:2;
      uint64_t OSPEED13:2;
      uint64_t OSPEED14:2;
      uint64_t OSPEED15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPD0:2;
      uint64_t PUPD1:2;
      uint64_t PUPD2:2;
      uint64_t PUPD3:2;
      uint64_t PUPD4:2;
      uint64_t PUPD5:2;
      uint64_t PUPD6:2;
      uint64_t PUPD7:2;
      uint64_t PUPD8:2;
      uint64_t PUPD9:2;
      uint64_t PUPD10:2;
      uint64_t PUPD11:2;
      uint64_t PUPD12:2;
      uint64_t PUPD13:2;
      uint64_t PUPD14:2;
      uint64_t PUPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t ID1:1;
      uint64_t ID2:1;
      uint64_t ID3:1;
      uint64_t ID4:1;
      uint64_t ID5:1;
      uint64_t ID6:1;
      uint64_t ID7:1;
      uint64_t ID8:1;
      uint64_t ID9:1;
      uint64_t ID10:1;
      uint64_t ID11:1;
      uint64_t ID12:1;
      uint64_t ID13:1;
      uint64_t ID14:1;
      uint64_t ID15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OD0:1;
      uint64_t OD1:1;
      uint64_t OD2:1;
      uint64_t OD3:1;
      uint64_t OD4:1;
      uint64_t OD5:1;
      uint64_t OD6:1;
      uint64_t OD7:1;
      uint64_t OD8:1;
      uint64_t OD9:1;
      uint64_t OD10:1;
      uint64_t OD11:1;
      uint64_t OD12:1;
      uint64_t OD13:1;
      uint64_t OD14:1;
      uint64_t OD15:1;
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
      uint64_t AFSEL0:4;
      uint64_t AFSEL1:4;
      uint64_t AFSEL2:4;
      uint64_t AFSEL3:4;
      uint64_t AFSEL4:4;
      uint64_t AFSEL5:4;
      uint64_t AFSEL6:4;
      uint64_t AFSEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL8:4;
      uint64_t AFSEL9:4;
      uint64_t AFSEL10:4;
      uint64_t AFSEL11:4;
      uint64_t AFSEL12:4;
      uint64_t AFSEL13:4;
      uint64_t AFSEL14:4;
      uint64_t AFSEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

};

#define GPIOH (*(volatile struct GPIOH_tag *) 0x58021c00)

struct GPIOJ_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t MODE1:2;
      uint64_t MODE2:2;
      uint64_t MODE3:2;
      uint64_t MODE4:2;
      uint64_t MODE5:2;
      uint64_t MODE6:2;
      uint64_t MODE7:2;
      uint64_t MODE8:2;
      uint64_t MODE9:2;
      uint64_t MODE10:2;
      uint64_t MODE11:2;
      uint64_t MODE12:2;
      uint64_t MODE13:2;
      uint64_t MODE14:2;
      uint64_t MODE15:2;
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
      uint64_t OSPEED0:2;
      uint64_t OSPEED1:2;
      uint64_t OSPEED2:2;
      uint64_t OSPEED3:2;
      uint64_t OSPEED4:2;
      uint64_t OSPEED5:2;
      uint64_t OSPEED6:2;
      uint64_t OSPEED7:2;
      uint64_t OSPEED8:2;
      uint64_t OSPEED9:2;
      uint64_t OSPEED10:2;
      uint64_t OSPEED11:2;
      uint64_t OSPEED12:2;
      uint64_t OSPEED13:2;
      uint64_t OSPEED14:2;
      uint64_t OSPEED15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPD0:2;
      uint64_t PUPD1:2;
      uint64_t PUPD2:2;
      uint64_t PUPD3:2;
      uint64_t PUPD4:2;
      uint64_t PUPD5:2;
      uint64_t PUPD6:2;
      uint64_t PUPD7:2;
      uint64_t PUPD8:2;
      uint64_t PUPD9:2;
      uint64_t PUPD10:2;
      uint64_t PUPD11:2;
      uint64_t PUPD12:2;
      uint64_t PUPD13:2;
      uint64_t PUPD14:2;
      uint64_t PUPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t ID1:1;
      uint64_t ID2:1;
      uint64_t ID3:1;
      uint64_t ID4:1;
      uint64_t ID5:1;
      uint64_t ID6:1;
      uint64_t ID7:1;
      uint64_t ID8:1;
      uint64_t ID9:1;
      uint64_t ID10:1;
      uint64_t ID11:1;
      uint64_t ID12:1;
      uint64_t ID13:1;
      uint64_t ID14:1;
      uint64_t ID15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OD0:1;
      uint64_t OD1:1;
      uint64_t OD2:1;
      uint64_t OD3:1;
      uint64_t OD4:1;
      uint64_t OD5:1;
      uint64_t OD6:1;
      uint64_t OD7:1;
      uint64_t OD8:1;
      uint64_t OD9:1;
      uint64_t OD10:1;
      uint64_t OD11:1;
      uint64_t OD12:1;
      uint64_t OD13:1;
      uint64_t OD14:1;
      uint64_t OD15:1;
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
      uint64_t AFSEL0:4;
      uint64_t AFSEL1:4;
      uint64_t AFSEL2:4;
      uint64_t AFSEL3:4;
      uint64_t AFSEL4:4;
      uint64_t AFSEL5:4;
      uint64_t AFSEL6:4;
      uint64_t AFSEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL8:4;
      uint64_t AFSEL9:4;
      uint64_t AFSEL10:4;
      uint64_t AFSEL11:4;
      uint64_t AFSEL12:4;
      uint64_t AFSEL13:4;
      uint64_t AFSEL14:4;
      uint64_t AFSEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

};

#define GPIOJ (*(volatile struct GPIOJ_tag *) 0x58022400)

struct GPIOK_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t MODE1:2;
      uint64_t MODE2:2;
      uint64_t MODE3:2;
      uint64_t MODE4:2;
      uint64_t MODE5:2;
      uint64_t MODE6:2;
      uint64_t MODE7:2;
      uint64_t MODE8:2;
      uint64_t MODE9:2;
      uint64_t MODE10:2;
      uint64_t MODE11:2;
      uint64_t MODE12:2;
      uint64_t MODE13:2;
      uint64_t MODE14:2;
      uint64_t MODE15:2;
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
      uint64_t OSPEED0:2;
      uint64_t OSPEED1:2;
      uint64_t OSPEED2:2;
      uint64_t OSPEED3:2;
      uint64_t OSPEED4:2;
      uint64_t OSPEED5:2;
      uint64_t OSPEED6:2;
      uint64_t OSPEED7:2;
      uint64_t OSPEED8:2;
      uint64_t OSPEED9:2;
      uint64_t OSPEED10:2;
      uint64_t OSPEED11:2;
      uint64_t OSPEED12:2;
      uint64_t OSPEED13:2;
      uint64_t OSPEED14:2;
      uint64_t OSPEED15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPD0:2;
      uint64_t PUPD1:2;
      uint64_t PUPD2:2;
      uint64_t PUPD3:2;
      uint64_t PUPD4:2;
      uint64_t PUPD5:2;
      uint64_t PUPD6:2;
      uint64_t PUPD7:2;
      uint64_t PUPD8:2;
      uint64_t PUPD9:2;
      uint64_t PUPD10:2;
      uint64_t PUPD11:2;
      uint64_t PUPD12:2;
      uint64_t PUPD13:2;
      uint64_t PUPD14:2;
      uint64_t PUPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t ID1:1;
      uint64_t ID2:1;
      uint64_t ID3:1;
      uint64_t ID4:1;
      uint64_t ID5:1;
      uint64_t ID6:1;
      uint64_t ID7:1;
      uint64_t ID8:1;
      uint64_t ID9:1;
      uint64_t ID10:1;
      uint64_t ID11:1;
      uint64_t ID12:1;
      uint64_t ID13:1;
      uint64_t ID14:1;
      uint64_t ID15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OD0:1;
      uint64_t OD1:1;
      uint64_t OD2:1;
      uint64_t OD3:1;
      uint64_t OD4:1;
      uint64_t OD5:1;
      uint64_t OD6:1;
      uint64_t OD7:1;
      uint64_t OD8:1;
      uint64_t OD9:1;
      uint64_t OD10:1;
      uint64_t OD11:1;
      uint64_t OD12:1;
      uint64_t OD13:1;
      uint64_t OD14:1;
      uint64_t OD15:1;
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
      uint64_t AFSEL0:4;
      uint64_t AFSEL1:4;
      uint64_t AFSEL2:4;
      uint64_t AFSEL3:4;
      uint64_t AFSEL4:4;
      uint64_t AFSEL5:4;
      uint64_t AFSEL6:4;
      uint64_t AFSEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL8:4;
      uint64_t AFSEL9:4;
      uint64_t AFSEL10:4;
      uint64_t AFSEL11:4;
      uint64_t AFSEL12:4;
      uint64_t AFSEL13:4;
      uint64_t AFSEL14:4;
      uint64_t AFSEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

};

#define GPIOK (*(volatile struct GPIOK_tag *) 0x58022800)

struct HSEM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_R31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t MASTERID:8;
      uint64_t reservedSpace0:15;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_RLR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISEM0:1;
      uint64_t ISEM1:1;
      uint64_t ISEM2:1;
      uint64_t ISEM3:1;
      uint64_t ISEM4:1;
      uint64_t ISEM5:1;
      uint64_t ISEM6:1;
      uint64_t ISEM7:1;
      uint64_t ISEM8:1;
      uint64_t ISEM9:1;
      uint64_t ISEM10:1;
      uint64_t ISEM11:1;
      uint64_t ISEM12:1;
      uint64_t ISEM13:1;
      uint64_t ISEM14:1;
      uint64_t ISEM15:1;
      uint64_t ISEM16:1;
      uint64_t ISEM17:1;
      uint64_t ISEM18:1;
      uint64_t ISEM19:1;
      uint64_t ISEM20:1;
      uint64_t ISEM21:1;
      uint64_t ISEM22:1;
      uint64_t ISEM23:1;
      uint64_t ISEM24:1;
      uint64_t ISEM25:1;
      uint64_t ISEM26:1;
      uint64_t ISEM27:1;
      uint64_t ISEM28:1;
      uint64_t ISEM29:1;
      uint64_t ISEM30:1;
      uint64_t ISEM31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_C1IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISEM0:1;
      uint64_t ISEM1:1;
      uint64_t ISEM2:1;
      uint64_t ISEM3:1;
      uint64_t ISEM4:1;
      uint64_t ISEM5:1;
      uint64_t ISEM6:1;
      uint64_t ISEM7:1;
      uint64_t ISEM8:1;
      uint64_t ISEM9:1;
      uint64_t ISEM10:1;
      uint64_t ISEM11:1;
      uint64_t ISEM12:1;
      uint64_t ISEM13:1;
      uint64_t ISEM14:1;
      uint64_t ISEM15:1;
      uint64_t ISEM16:1;
      uint64_t ISEM17:1;
      uint64_t ISEM18:1;
      uint64_t ISEM19:1;
      uint64_t ISEM20:1;
      uint64_t ISEM21:1;
      uint64_t ISEM22:1;
      uint64_t ISEM23:1;
      uint64_t ISEM24:1;
      uint64_t ISEM25:1;
      uint64_t ISEM26:1;
      uint64_t ISEM27:1;
      uint64_t ISEM28:1;
      uint64_t ISEM29:1;
      uint64_t ISEM30:1;
      uint64_t ISEM31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_C1ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISEM0:1;
      uint64_t ISEM1:1;
      uint64_t ISEM2:1;
      uint64_t ISEM3:1;
      uint64_t ISEM4:1;
      uint64_t ISEM5:1;
      uint64_t ISEM6:1;
      uint64_t ISEM7:1;
      uint64_t ISEM8:1;
      uint64_t ISEM9:1;
      uint64_t ISEM10:1;
      uint64_t ISEM11:1;
      uint64_t ISEM12:1;
      uint64_t ISEM13:1;
      uint64_t ISEM14:1;
      uint64_t ISEM15:1;
      uint64_t ISEM16:1;
      uint64_t ISEM17:1;
      uint64_t ISEM18:1;
      uint64_t ISEM19:1;
      uint64_t ISEM20:1;
      uint64_t ISEM21:1;
      uint64_t ISEM22:1;
      uint64_t ISEM23:1;
      uint64_t ISEM24:1;
      uint64_t ISEM25:1;
      uint64_t ISEM26:1;
      uint64_t ISEM27:1;
      uint64_t ISEM28:1;
      uint64_t ISEM29:1;
      uint64_t ISEM30:1;
      uint64_t ISEM31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_C1ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISEM0:1;
      uint64_t ISEM1:1;
      uint64_t ISEM2:1;
      uint64_t ISEM3:1;
      uint64_t ISEM4:1;
      uint64_t ISEM5:1;
      uint64_t ISEM6:1;
      uint64_t ISEM7:1;
      uint64_t ISEM8:1;
      uint64_t ISEM9:1;
      uint64_t ISEM10:1;
      uint64_t ISEM11:1;
      uint64_t ISEM12:1;
      uint64_t ISEM13:1;
      uint64_t ISEM14:1;
      uint64_t ISEM15:1;
      uint64_t ISEM16:1;
      uint64_t ISEM17:1;
      uint64_t ISEM18:1;
      uint64_t ISEM19:1;
      uint64_t ISEM20:1;
      uint64_t ISEM21:1;
      uint64_t ISEM22:1;
      uint64_t ISEM23:1;
      uint64_t ISEM24:1;
      uint64_t ISEM25:1;
      uint64_t ISEM26:1;
      uint64_t ISEM27:1;
      uint64_t ISEM28:1;
      uint64_t ISEM29:1;
      uint64_t ISEM30:1;
      uint64_t ISEM31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_C1MISR;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t COREID:4;
      uint64_t reservedSpace1:4;
      uint64_t KEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t KEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSEM_KEYR;

};

#define HSEM (*(volatile struct HSEM_tag *) 0x58026400)

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
      uint64_t SADD0:1;
      uint64_t SADD1:1;
      uint64_t SADD2:1;
      uint64_t SADD3:1;
      uint64_t SADD4:1;
      uint64_t SADD5:1;
      uint64_t SADD6:1;
      uint64_t SADD7:1;
      uint64_t SADD8:1;
      uint64_t SADD9:1;
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
      uint64_t SADD0:1;
      uint64_t SADD1:1;
      uint64_t SADD2:1;
      uint64_t SADD3:1;
      uint64_t SADD4:1;
      uint64_t SADD5:1;
      uint64_t SADD6:1;
      uint64_t SADD7:1;
      uint64_t SADD8:1;
      uint64_t SADD9:1;
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
      uint64_t SADD0:1;
      uint64_t SADD1:1;
      uint64_t SADD2:1;
      uint64_t SADD3:1;
      uint64_t SADD4:1;
      uint64_t SADD5:1;
      uint64_t SADD6:1;
      uint64_t SADD7:1;
      uint64_t SADD8:1;
      uint64_t SADD9:1;
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

#define I2C3 (*(volatile struct I2C3_tag *) 0x40005c00)

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
      uint64_t SADD0:1;
      uint64_t SADD1:1;
      uint64_t SADD2:1;
      uint64_t SADD3:1;
      uint64_t SADD4:1;
      uint64_t SADD5:1;
      uint64_t SADD6:1;
      uint64_t SADD7:1;
      uint64_t SADD8:1;
      uint64_t SADD9:1;
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

#define I2C4 (*(volatile struct I2C4_tag *) 0x58001c00)

struct IWDG1_tag
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

#define IWDG1 (*(volatile struct IWDG1_tag *) 0x58004800)

struct LPTIM1_tag
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
      uint64_t TRIGSEL:3;
      uint64_t reservedSpace3:1;
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

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IN1SEL:2;
      uint64_t reservedSpace0:2;
      uint64_t IN2SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR2;

};

#define LPTIM1 (*(volatile struct LPTIM1_tag *) 0x40002400)

struct LPTIM2_tag
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
      uint64_t TRIGSEL:3;
      uint64_t reservedSpace3:1;
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

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IN1SEL:2;
      uint64_t reservedSpace0:2;
      uint64_t IN2SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR2;

};

#define LPTIM2 (*(volatile struct LPTIM2_tag *) 0x58002400)

struct LPTIM3_tag
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
      uint64_t TRIGSEL:3;
      uint64_t reservedSpace3:1;
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

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IN1SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR2;

};

#define LPTIM3 (*(volatile struct LPTIM3_tag *) 0x58002800)

struct LPTIM4_tag
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
      uint64_t TRIGSEL:3;
      uint64_t reservedSpace3:1;
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

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IN1SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR2;

};

#define LPTIM4 (*(volatile struct LPTIM4_tag *) 0x58002c00)

struct LPTIM5_tag
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
      uint64_t TRIGSEL:3;
      uint64_t reservedSpace3:1;
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

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IN1SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR2;

};

#define LPTIM5 (*(volatile struct LPTIM5_tag *) 0x58003000)

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
      uint64_t DEDT:5;
      uint64_t DEAT:5;
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
      uint64_t DATAINV:1;
      uint64_t MSBFIRST:1;
      uint64_t reservedSpace3:4;
      uint64_t ADD:8;
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
      uint64_t NE:1;
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

#define LPUART1 (*(volatile struct LPUART1_tag *) 0x58000c00)

struct LTDC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSH:11;
      uint64_t reservedSpace0:5;
      uint64_t HSW:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AVBP:11;
      uint64_t reservedSpace0:5;
      uint64_t AHBP:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AAH:11;
      uint64_t reservedSpace0:5;
      uint64_t AAV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOTALH:11;
      uint64_t reservedSpace0:5;
      uint64_t TOTALW:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTDCEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DBW:3;
      uint64_t reservedSpace1:1;
      uint64_t DGW:3;
      uint64_t reservedSpace2:1;
      uint64_t DRW:3;
      uint64_t reservedSpace3:1;
      uint64_t DEN:1;
      uint64_t reservedSpace4:11;
      uint64_t PCPOL:1;
      uint64_t DEPOL:1;
      uint64_t VSPOL:1;
      uint64_t HSPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IMR:1;
      uint64_t VBR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRCR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCBLUE:8;
      uint64_t BCGREEN:8;
      uint64_t BCRED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LIE:1;
      uint64_t FUIE:1;
      uint64_t TERRIE:1;
      uint64_t RRIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LIF:1;
      uint64_t FUIF:1;
      uint64_t TERRIF:1;
      uint64_t RRIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLIF:1;
      uint64_t CFUIF:1;
      uint64_t CTERRIF:1;
      uint64_t CRRIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LIPOS:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CYPOS:16;
      uint64_t CXPOS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VDES:1;
      uint64_t HDES:1;
      uint64_t VSYNCS:1;
      uint64_t HSYNCS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDSR;

  uint8_t res3[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEN:1;
      uint64_t COLKEN:1;
      uint64_t reservedSpace0:2;
      uint64_t CLUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WHSTPOS:12;
      uint64_t reservedSpace0:4;
      uint64_t WHSPPOS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1WHPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WVSTPOS:11;
      uint64_t reservedSpace0:5;
      uint64_t WVSPPOS:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1WVPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKBLUE:8;
      uint64_t CKGREEN:8;
      uint64_t CKRED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1CKCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PF_bitfield:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1PFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONSTA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1CACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCBLUE:8;
      uint64_t DCGREEN:8;
      uint64_t DCRED:8;
      uint64_t DCALPHA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1DCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BF2:3;
      uint64_t reservedSpace0:5;
      uint64_t BF1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1BFCR;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFBADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1CFBAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFBLL:13;
      uint64_t reservedSpace0:3;
      uint64_t CFBP:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1CFBLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFBLNBR:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1CFBLNR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLUE:8;
      uint64_t GREEN:8;
      uint64_t RED:8;
      uint64_t CLUTADD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L1CLUTWR;

  uint8_t res6[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEN:1;
      uint64_t COLKEN:1;
      uint64_t reservedSpace0:2;
      uint64_t CLUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L2CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WHSTPOS:12;
      uint64_t reservedSpace0:4;
      uint64_t WHSPPOS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L2WHPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WVSTPOS:11;
      uint64_t reservedSpace0:5;
      uint64_t WVSPPOS:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L2WVPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKBLUE:8;
      uint64_t CKGREEN:8;
      uint64_t CKRED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L2CKCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PF_bitfield:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L2PFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONSTA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L2CACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCBLUE:8;
      uint64_t DCGREEN:8;
      uint64_t DCRED:8;
      uint64_t DCALPHA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L2DCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BF2:3;
      uint64_t reservedSpace0:5;
      uint64_t BF1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L2BFCR;

  uint8_t res7[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFBADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L2CFBAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFBLL:13;
      uint64_t reservedSpace0:3;
      uint64_t CFBP:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L2CFBLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFBLNBR:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L2CFBLNR;

  uint8_t res8[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLUE:8;
      uint64_t GREEN:8;
      uint64_t RED:8;
      uint64_t CLUTADD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L2CLUTWR;

};

#define LTDC (*(volatile struct LTDC_tag *) 0x50001008)

struct MDIOS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t WRIE:1;
      uint64_t RDIE:1;
      uint64_t EIE:1;
      uint64_t reservedSpace0:3;
      uint64_t DPC:1;
      uint64_t PORT_ADDRESS:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_WRFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWRF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_CWRFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_RDFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRDF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_CRDFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERF:1;
      uint64_t SERF:1;
      uint64_t TERF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPERF:1;
      uint64_t CSERF:1;
      uint64_t CTERF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_CLRFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN5:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN6:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN7:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN8:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN9:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN10:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN11:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN12:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN13:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN14:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN15:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN16:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN17:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN18:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN19:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN20:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN21:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN22:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN23:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN24:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN25:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN26:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN27:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN28:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN29:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN30:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN31:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DINR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT5:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT6:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT7:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT8:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT9:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT10:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT11:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT12:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT13:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT14:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT15:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT16:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT17:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT18:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT19:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT20:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT21:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT22:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT23:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT24:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT25:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT26:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT27:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT28:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT29:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT30:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT31:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIOS_DOUTR31;

};

#define MDIOS (*(volatile struct MDIOS_tag *) 0x40009400)

struct MDMA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIF0:1;
      uint64_t GIF1:1;
      uint64_t GIF2:1;
      uint64_t GIF3:1;
      uint64_t GIF4:1;
      uint64_t GIF5:1;
      uint64_t GIF6:1;
      uint64_t GIF7:1;
      uint64_t GIF8:1;
      uint64_t GIF9:1;
      uint64_t GIF10:1;
      uint64_t GIF11:1;
      uint64_t GIF12:1;
      uint64_t GIF13:1;
      uint64_t GIF14:1;
      uint64_t GIF15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_GISR0;

  uint8_t res0[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEIF0:1;
      uint64_t CTCIF0:1;
      uint64_t BRTIF0:1;
      uint64_t BTIF0:1;
      uint64_t TCIF0:1;
      uint64_t reservedSpace0:11;
      uint64_t CRQA0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C0ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTEIF0:1;
      uint64_t CCTCIF0:1;
      uint64_t CBRTIF0:1;
      uint64_t CBTIF0:1;
      uint64_t CLTCIF0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C0IFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEA:7;
      uint64_t TED:1;
      uint64_t TELD:1;
      uint64_t TEMD:1;
      uint64_t ASE:1;
      uint64_t BSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C0ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TEIE:1;
      uint64_t CTCIE:1;
      uint64_t BRTIE:1;
      uint64_t BTIE:1;
      uint64_t TCIE:1;
      uint64_t PL:2;
      uint64_t reservedSpace0:4;
      uint64_t BEX:1;
      uint64_t HEX:1;
      uint64_t WEX:1;
      uint64_t reservedSpace1:1;
      uint64_t SWRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C0CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINC:2;
      uint64_t DINC:2;
      uint64_t SSIZE:2;
      uint64_t DSIZE:2;
      uint64_t SINCOS:2;
      uint64_t DINCOS:2;
      uint64_t SBURST:3;
      uint64_t DBURST:3;
      uint64_t TLEN:7;
      uint64_t PKE:1;
      uint64_t PAM:2;
      uint64_t TRGM:2;
      uint64_t SWRM:1;
      uint64_t BWM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C0TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNDT:17;
      uint64_t reservedSpace0:1;
      uint64_t BRSUM:1;
      uint64_t BRDUM:1;
      uint64_t BRC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C0BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C0SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C0DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C0BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C0LAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSEL:6;
      uint64_t reservedSpace0:10;
      uint64_t SBUS:1;
      uint64_t DBUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C0TBR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C0MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C0MDR;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEIF1:1;
      uint64_t CTCIF1:1;
      uint64_t BRTIF1:1;
      uint64_t BTIF1:1;
      uint64_t TCIF1:1;
      uint64_t reservedSpace0:11;
      uint64_t CRQA1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C1ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTEIF1:1;
      uint64_t CCTCIF1:1;
      uint64_t CBRTIF1:1;
      uint64_t CBTIF1:1;
      uint64_t CLTCIF1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C1IFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEA:7;
      uint64_t TED:1;
      uint64_t TELD:1;
      uint64_t TEMD:1;
      uint64_t ASE:1;
      uint64_t BSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C1ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TEIE:1;
      uint64_t CTCIE:1;
      uint64_t BRTIE:1;
      uint64_t BTIE:1;
      uint64_t TCIE:1;
      uint64_t PL:2;
      uint64_t reservedSpace0:4;
      uint64_t BEX:1;
      uint64_t HEX:1;
      uint64_t WEX:1;
      uint64_t reservedSpace1:1;
      uint64_t SWRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C1CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINC:2;
      uint64_t DINC:2;
      uint64_t SSIZE:2;
      uint64_t DSIZE:2;
      uint64_t SINCOS:2;
      uint64_t DINCOS:2;
      uint64_t SBURST:3;
      uint64_t DBURST:3;
      uint64_t TLEN:7;
      uint64_t PKE:1;
      uint64_t PAM:2;
      uint64_t TRGM:2;
      uint64_t SWRM:1;
      uint64_t BWM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C1TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNDT:17;
      uint64_t reservedSpace0:1;
      uint64_t BRSUM:1;
      uint64_t BRDUM:1;
      uint64_t BRC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C1BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C1SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C1DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C1BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C1LAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSEL:6;
      uint64_t reservedSpace0:10;
      uint64_t SBUS:1;
      uint64_t DBUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C1TBR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C1MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C1MDR;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEIF2:1;
      uint64_t CTCIF2:1;
      uint64_t BRTIF2:1;
      uint64_t BTIF2:1;
      uint64_t TCIF2:1;
      uint64_t reservedSpace0:11;
      uint64_t CRQA2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C2ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTEIF2:1;
      uint64_t CCTCIF2:1;
      uint64_t CBRTIF2:1;
      uint64_t CBTIF2:1;
      uint64_t CLTCIF2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C2IFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEA:7;
      uint64_t TED:1;
      uint64_t TELD:1;
      uint64_t TEMD:1;
      uint64_t ASE:1;
      uint64_t BSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C2ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TEIE:1;
      uint64_t CTCIE:1;
      uint64_t BRTIE:1;
      uint64_t BTIE:1;
      uint64_t TCIE:1;
      uint64_t PL:2;
      uint64_t reservedSpace0:4;
      uint64_t BEX:1;
      uint64_t HEX:1;
      uint64_t WEX:1;
      uint64_t reservedSpace1:1;
      uint64_t SWRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C2CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINC:2;
      uint64_t DINC:2;
      uint64_t SSIZE:2;
      uint64_t DSIZE:2;
      uint64_t SINCOS:2;
      uint64_t DINCOS:2;
      uint64_t SBURST:3;
      uint64_t DBURST:3;
      uint64_t TLEN:7;
      uint64_t PKE:1;
      uint64_t PAM:2;
      uint64_t TRGM:2;
      uint64_t SWRM:1;
      uint64_t BWM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C2TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNDT:17;
      uint64_t reservedSpace0:1;
      uint64_t BRSUM:1;
      uint64_t BRDUM:1;
      uint64_t BRC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C2BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C2SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C2DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C2BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C2LAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSEL:6;
      uint64_t reservedSpace0:10;
      uint64_t SBUS:1;
      uint64_t DBUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C2TBR;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C2MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C2MDR;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEIF3:1;
      uint64_t CTCIF3:1;
      uint64_t BRTIF3:1;
      uint64_t BTIF3:1;
      uint64_t TCIF3:1;
      uint64_t reservedSpace0:11;
      uint64_t CRQA3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C3ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTEIF3:1;
      uint64_t CCTCIF3:1;
      uint64_t CBRTIF3:1;
      uint64_t CBTIF3:1;
      uint64_t CLTCIF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C3IFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEA:7;
      uint64_t TED:1;
      uint64_t TELD:1;
      uint64_t TEMD:1;
      uint64_t ASE:1;
      uint64_t BSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C3ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TEIE:1;
      uint64_t CTCIE:1;
      uint64_t BRTIE:1;
      uint64_t BTIE:1;
      uint64_t TCIE:1;
      uint64_t PL:2;
      uint64_t reservedSpace0:4;
      uint64_t BEX:1;
      uint64_t HEX:1;
      uint64_t WEX:1;
      uint64_t reservedSpace1:1;
      uint64_t SWRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C3CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINC:2;
      uint64_t DINC:2;
      uint64_t SSIZE:2;
      uint64_t DSIZE:2;
      uint64_t SINCOS:2;
      uint64_t DINCOS:2;
      uint64_t SBURST:3;
      uint64_t DBURST:3;
      uint64_t TLEN:7;
      uint64_t PKE:1;
      uint64_t PAM:2;
      uint64_t TRGM:2;
      uint64_t SWRM:1;
      uint64_t BWM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C3TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNDT:17;
      uint64_t reservedSpace0:1;
      uint64_t BRSUM:1;
      uint64_t BRDUM:1;
      uint64_t BRC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C3BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C3SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C3DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C3BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C3LAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSEL:6;
      uint64_t reservedSpace0:10;
      uint64_t SBUS:1;
      uint64_t DBUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C3TBR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C3MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C3MDR;

  uint8_t res8[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEIF4:1;
      uint64_t CTCIF4:1;
      uint64_t BRTIF4:1;
      uint64_t BTIF4:1;
      uint64_t TCIF4:1;
      uint64_t reservedSpace0:11;
      uint64_t CRQA4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C4ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTEIF4:1;
      uint64_t CCTCIF4:1;
      uint64_t CBRTIF4:1;
      uint64_t CBTIF4:1;
      uint64_t CLTCIF4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C4IFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEA:7;
      uint64_t TED:1;
      uint64_t TELD:1;
      uint64_t TEMD:1;
      uint64_t ASE:1;
      uint64_t BSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C4ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TEIE:1;
      uint64_t CTCIE:1;
      uint64_t BRTIE:1;
      uint64_t BTIE:1;
      uint64_t TCIE:1;
      uint64_t PL:2;
      uint64_t reservedSpace0:4;
      uint64_t BEX:1;
      uint64_t HEX:1;
      uint64_t WEX:1;
      uint64_t reservedSpace1:1;
      uint64_t SWRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C4CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINC:2;
      uint64_t DINC:2;
      uint64_t SSIZE:2;
      uint64_t DSIZE:2;
      uint64_t SINCOS:2;
      uint64_t DINCOS:2;
      uint64_t SBURST:3;
      uint64_t DBURST:3;
      uint64_t TLEN:7;
      uint64_t PKE:1;
      uint64_t PAM:2;
      uint64_t TRGM:2;
      uint64_t SWRM:1;
      uint64_t BWM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C4TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNDT:17;
      uint64_t reservedSpace0:1;
      uint64_t BRSUM:1;
      uint64_t BRDUM:1;
      uint64_t BRC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C4BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C4SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C4DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C4BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C4LAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSEL:6;
      uint64_t reservedSpace0:10;
      uint64_t SBUS:1;
      uint64_t DBUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C4TBR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C4MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C4MDR;

  uint8_t res10[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEIF5:1;
      uint64_t CTCIF5:1;
      uint64_t BRTIF5:1;
      uint64_t BTIF5:1;
      uint64_t TCIF5:1;
      uint64_t reservedSpace0:11;
      uint64_t CRQA5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C5ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTEIF5:1;
      uint64_t CCTCIF5:1;
      uint64_t CBRTIF5:1;
      uint64_t CBTIF5:1;
      uint64_t CLTCIF5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C5IFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEA:7;
      uint64_t TED:1;
      uint64_t TELD:1;
      uint64_t TEMD:1;
      uint64_t ASE:1;
      uint64_t BSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C5ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TEIE:1;
      uint64_t CTCIE:1;
      uint64_t BRTIE:1;
      uint64_t BTIE:1;
      uint64_t TCIE:1;
      uint64_t PL:2;
      uint64_t reservedSpace0:4;
      uint64_t BEX:1;
      uint64_t HEX:1;
      uint64_t WEX:1;
      uint64_t reservedSpace1:1;
      uint64_t SWRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C5CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINC:2;
      uint64_t DINC:2;
      uint64_t SSIZE:2;
      uint64_t DSIZE:2;
      uint64_t SINCOS:2;
      uint64_t DINCOS:2;
      uint64_t SBURST:3;
      uint64_t DBURST:3;
      uint64_t TLEN:7;
      uint64_t PKE:1;
      uint64_t PAM:2;
      uint64_t TRGM:2;
      uint64_t SWRM:1;
      uint64_t BWM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C5TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNDT:17;
      uint64_t reservedSpace0:1;
      uint64_t BRSUM:1;
      uint64_t BRDUM:1;
      uint64_t BRC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C5BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C5SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C5DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C5BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C5LAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSEL:6;
      uint64_t reservedSpace0:10;
      uint64_t SBUS:1;
      uint64_t DBUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C5TBR;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C5MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C5MDR;

  uint8_t res12[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEIF6:1;
      uint64_t CTCIF6:1;
      uint64_t BRTIF6:1;
      uint64_t BTIF6:1;
      uint64_t TCIF6:1;
      uint64_t reservedSpace0:11;
      uint64_t CRQA6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C6ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTEIF6:1;
      uint64_t CCTCIF6:1;
      uint64_t CBRTIF6:1;
      uint64_t CBTIF6:1;
      uint64_t CLTCIF6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C6IFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEA:7;
      uint64_t TED:1;
      uint64_t TELD:1;
      uint64_t TEMD:1;
      uint64_t ASE:1;
      uint64_t BSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C6ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TEIE:1;
      uint64_t CTCIE:1;
      uint64_t BRTIE:1;
      uint64_t BTIE:1;
      uint64_t TCIE:1;
      uint64_t PL:2;
      uint64_t reservedSpace0:4;
      uint64_t BEX:1;
      uint64_t HEX:1;
      uint64_t WEX:1;
      uint64_t reservedSpace1:1;
      uint64_t SWRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C6CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINC:2;
      uint64_t DINC:2;
      uint64_t SSIZE:2;
      uint64_t DSIZE:2;
      uint64_t SINCOS:2;
      uint64_t DINCOS:2;
      uint64_t SBURST:3;
      uint64_t DBURST:3;
      uint64_t TLEN:7;
      uint64_t PKE:1;
      uint64_t PAM:2;
      uint64_t TRGM:2;
      uint64_t SWRM:1;
      uint64_t BWM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C6TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNDT:17;
      uint64_t reservedSpace0:1;
      uint64_t BRSUM:1;
      uint64_t BRDUM:1;
      uint64_t BRC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C6BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C6SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C6DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C6BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C6LAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSEL:6;
      uint64_t reservedSpace0:10;
      uint64_t SBUS:1;
      uint64_t DBUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C6TBR;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C6MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C6MDR;

  uint8_t res14[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEIF7:1;
      uint64_t CTCIF7:1;
      uint64_t BRTIF7:1;
      uint64_t BTIF7:1;
      uint64_t TCIF7:1;
      uint64_t reservedSpace0:11;
      uint64_t CRQA7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C7ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTEIF7:1;
      uint64_t CCTCIF7:1;
      uint64_t CBRTIF7:1;
      uint64_t CBTIF7:1;
      uint64_t CLTCIF7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C7IFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEA:7;
      uint64_t TED:1;
      uint64_t TELD:1;
      uint64_t TEMD:1;
      uint64_t ASE:1;
      uint64_t BSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C7ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TEIE:1;
      uint64_t CTCIE:1;
      uint64_t BRTIE:1;
      uint64_t BTIE:1;
      uint64_t TCIE:1;
      uint64_t PL:2;
      uint64_t reservedSpace0:4;
      uint64_t BEX:1;
      uint64_t HEX:1;
      uint64_t WEX:1;
      uint64_t reservedSpace1:1;
      uint64_t SWRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C7CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINC:2;
      uint64_t DINC:2;
      uint64_t SSIZE:2;
      uint64_t DSIZE:2;
      uint64_t SINCOS:2;
      uint64_t DINCOS:2;
      uint64_t SBURST:3;
      uint64_t DBURST:3;
      uint64_t TLEN:7;
      uint64_t PKE:1;
      uint64_t PAM:2;
      uint64_t TRGM:2;
      uint64_t SWRM:1;
      uint64_t BWM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C7TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNDT:17;
      uint64_t reservedSpace0:1;
      uint64_t BRSUM:1;
      uint64_t BRDUM:1;
      uint64_t BRC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C7BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C7SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C7DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C7BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C7LAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSEL:6;
      uint64_t reservedSpace0:10;
      uint64_t SBUS:1;
      uint64_t DBUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C7TBR;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C7MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C7MDR;

  uint8_t res16[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEIF8:1;
      uint64_t CTCIF8:1;
      uint64_t BRTIF8:1;
      uint64_t BTIF8:1;
      uint64_t TCIF8:1;
      uint64_t reservedSpace0:11;
      uint64_t CRQA8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C8ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTEIF8:1;
      uint64_t CCTCIF8:1;
      uint64_t CBRTIF8:1;
      uint64_t CBTIF8:1;
      uint64_t CLTCIF8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C8IFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEA:7;
      uint64_t TED:1;
      uint64_t TELD:1;
      uint64_t TEMD:1;
      uint64_t ASE:1;
      uint64_t BSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C8ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TEIE:1;
      uint64_t CTCIE:1;
      uint64_t BRTIE:1;
      uint64_t BTIE:1;
      uint64_t TCIE:1;
      uint64_t PL:2;
      uint64_t reservedSpace0:4;
      uint64_t BEX:1;
      uint64_t HEX:1;
      uint64_t WEX:1;
      uint64_t reservedSpace1:1;
      uint64_t SWRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C8CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINC:2;
      uint64_t DINC:2;
      uint64_t SSIZE:2;
      uint64_t DSIZE:2;
      uint64_t SINCOS:2;
      uint64_t DINCOS:2;
      uint64_t SBURST:3;
      uint64_t DBURST:3;
      uint64_t TLEN:7;
      uint64_t PKE:1;
      uint64_t PAM:2;
      uint64_t TRGM:2;
      uint64_t SWRM:1;
      uint64_t BWM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C8TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNDT:17;
      uint64_t reservedSpace0:1;
      uint64_t BRSUM:1;
      uint64_t BRDUM:1;
      uint64_t BRC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C8BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C8SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C8DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C8BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C8LAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSEL:6;
      uint64_t reservedSpace0:10;
      uint64_t SBUS:1;
      uint64_t DBUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C8TBR;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C8MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C8MDR;

  uint8_t res18[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEIF9:1;
      uint64_t CTCIF9:1;
      uint64_t BRTIF9:1;
      uint64_t BTIF9:1;
      uint64_t TCIF9:1;
      uint64_t reservedSpace0:11;
      uint64_t CRQA9:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C9ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTEIF9:1;
      uint64_t CCTCIF9:1;
      uint64_t CBRTIF9:1;
      uint64_t CBTIF9:1;
      uint64_t CLTCIF9:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C9IFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEA:7;
      uint64_t TED:1;
      uint64_t TELD:1;
      uint64_t TEMD:1;
      uint64_t ASE:1;
      uint64_t BSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C9ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TEIE:1;
      uint64_t CTCIE:1;
      uint64_t BRTIE:1;
      uint64_t BTIE:1;
      uint64_t TCIE:1;
      uint64_t PL:2;
      uint64_t reservedSpace0:4;
      uint64_t BEX:1;
      uint64_t HEX:1;
      uint64_t WEX:1;
      uint64_t reservedSpace1:1;
      uint64_t SWRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C9CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINC:2;
      uint64_t DINC:2;
      uint64_t SSIZE:2;
      uint64_t DSIZE:2;
      uint64_t SINCOS:2;
      uint64_t DINCOS:2;
      uint64_t SBURST:3;
      uint64_t DBURST:3;
      uint64_t TLEN:7;
      uint64_t PKE:1;
      uint64_t PAM:2;
      uint64_t TRGM:2;
      uint64_t SWRM:1;
      uint64_t BWM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C9TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNDT:17;
      uint64_t reservedSpace0:1;
      uint64_t BRSUM:1;
      uint64_t BRDUM:1;
      uint64_t BRC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C9BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C9SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C9DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C9BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C9LAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSEL:6;
      uint64_t reservedSpace0:10;
      uint64_t SBUS:1;
      uint64_t DBUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C9TBR;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C9MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C9MDR;

  uint8_t res20[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEIF10:1;
      uint64_t CTCIF10:1;
      uint64_t BRTIF10:1;
      uint64_t BTIF10:1;
      uint64_t TCIF10:1;
      uint64_t reservedSpace0:11;
      uint64_t CRQA10:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C10ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTEIF10:1;
      uint64_t CCTCIF10:1;
      uint64_t CBRTIF10:1;
      uint64_t CBTIF10:1;
      uint64_t CLTCIF10:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C10IFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEA:7;
      uint64_t TED:1;
      uint64_t TELD:1;
      uint64_t TEMD:1;
      uint64_t ASE:1;
      uint64_t BSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C10ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TEIE:1;
      uint64_t CTCIE:1;
      uint64_t BRTIE:1;
      uint64_t BTIE:1;
      uint64_t TCIE:1;
      uint64_t PL:2;
      uint64_t reservedSpace0:4;
      uint64_t BEX:1;
      uint64_t HEX:1;
      uint64_t WEX:1;
      uint64_t reservedSpace1:1;
      uint64_t SWRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C10CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINC:2;
      uint64_t DINC:2;
      uint64_t SSIZE:2;
      uint64_t DSIZE:2;
      uint64_t SINCOS:2;
      uint64_t DINCOS:2;
      uint64_t SBURST:3;
      uint64_t DBURST:3;
      uint64_t TLEN:7;
      uint64_t PKE:1;
      uint64_t PAM:2;
      uint64_t TRGM:2;
      uint64_t SWRM:1;
      uint64_t BWM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C10TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNDT:17;
      uint64_t reservedSpace0:1;
      uint64_t BRSUM:1;
      uint64_t BRDUM:1;
      uint64_t BRC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C10BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C10SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C10DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C10BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C10LAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSEL:6;
      uint64_t reservedSpace0:10;
      uint64_t SBUS:1;
      uint64_t DBUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C10TBR;

  uint8_t res21[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C10MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C10MDR;

  uint8_t res22[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEIF11:1;
      uint64_t CTCIF11:1;
      uint64_t BRTIF11:1;
      uint64_t BTIF11:1;
      uint64_t TCIF11:1;
      uint64_t reservedSpace0:11;
      uint64_t CRQA11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C11ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTEIF11:1;
      uint64_t CCTCIF11:1;
      uint64_t CBRTIF11:1;
      uint64_t CBTIF11:1;
      uint64_t CLTCIF11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C11IFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEA:7;
      uint64_t TED:1;
      uint64_t TELD:1;
      uint64_t TEMD:1;
      uint64_t ASE:1;
      uint64_t BSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C11ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TEIE:1;
      uint64_t CTCIE:1;
      uint64_t BRTIE:1;
      uint64_t BTIE:1;
      uint64_t TCIE:1;
      uint64_t PL:2;
      uint64_t reservedSpace0:4;
      uint64_t BEX:1;
      uint64_t HEX:1;
      uint64_t WEX:1;
      uint64_t reservedSpace1:1;
      uint64_t SWRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C11CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINC:2;
      uint64_t DINC:2;
      uint64_t SSIZE:2;
      uint64_t DSIZE:2;
      uint64_t SINCOS:2;
      uint64_t DINCOS:2;
      uint64_t SBURST:3;
      uint64_t DBURST:3;
      uint64_t TLEN:7;
      uint64_t PKE:1;
      uint64_t PAM:2;
      uint64_t TRGM:2;
      uint64_t SWRM:1;
      uint64_t BWM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C11TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNDT:17;
      uint64_t reservedSpace0:1;
      uint64_t BRSUM:1;
      uint64_t BRDUM:1;
      uint64_t BRC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C11BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C11SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C11DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C11BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C11LAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSEL:6;
      uint64_t reservedSpace0:10;
      uint64_t SBUS:1;
      uint64_t DBUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C11TBR;

  uint8_t res23[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C11MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C11MDR;

  uint8_t res24[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEIF12:1;
      uint64_t CTCIF12:1;
      uint64_t BRTIF12:1;
      uint64_t BTIF12:1;
      uint64_t TCIF12:1;
      uint64_t reservedSpace0:11;
      uint64_t CRQA12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C12ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTEIF12:1;
      uint64_t CCTCIF12:1;
      uint64_t CBRTIF12:1;
      uint64_t CBTIF12:1;
      uint64_t CLTCIF12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C12IFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEA:7;
      uint64_t TED:1;
      uint64_t TELD:1;
      uint64_t TEMD:1;
      uint64_t ASE:1;
      uint64_t BSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C12ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TEIE:1;
      uint64_t CTCIE:1;
      uint64_t BRTIE:1;
      uint64_t BTIE:1;
      uint64_t TCIE:1;
      uint64_t PL:2;
      uint64_t reservedSpace0:4;
      uint64_t BEX:1;
      uint64_t HEX:1;
      uint64_t WEX:1;
      uint64_t reservedSpace1:1;
      uint64_t SWRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C12CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINC:2;
      uint64_t DINC:2;
      uint64_t SSIZE:2;
      uint64_t DSIZE:2;
      uint64_t SINCOS:2;
      uint64_t DINCOS:2;
      uint64_t SBURST:3;
      uint64_t DBURST:3;
      uint64_t TLEN:7;
      uint64_t PKE:1;
      uint64_t PAM:2;
      uint64_t TRGM:2;
      uint64_t SWRM:1;
      uint64_t BWM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C12TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNDT:17;
      uint64_t reservedSpace0:1;
      uint64_t BRSUM:1;
      uint64_t BRDUM:1;
      uint64_t BRC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C12BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C12SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C12DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C12BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C12LAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSEL:6;
      uint64_t reservedSpace0:10;
      uint64_t SBUS:1;
      uint64_t DBUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C12TBR;

  uint8_t res25[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C12MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C12MDR;

  uint8_t res26[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEIF13:1;
      uint64_t CTCIF13:1;
      uint64_t BRTIF13:1;
      uint64_t BTIF13:1;
      uint64_t TCIF13:1;
      uint64_t reservedSpace0:11;
      uint64_t CRQA13:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C13ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTEIF13:1;
      uint64_t CCTCIF13:1;
      uint64_t CBRTIF13:1;
      uint64_t CBTIF13:1;
      uint64_t CLTCIF13:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C13IFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEA:7;
      uint64_t TED:1;
      uint64_t TELD:1;
      uint64_t TEMD:1;
      uint64_t ASE:1;
      uint64_t BSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C13ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TEIE:1;
      uint64_t CTCIE:1;
      uint64_t BRTIE:1;
      uint64_t BTIE:1;
      uint64_t TCIE:1;
      uint64_t PL:2;
      uint64_t reservedSpace0:4;
      uint64_t BEX:1;
      uint64_t HEX:1;
      uint64_t WEX:1;
      uint64_t reservedSpace1:1;
      uint64_t SWRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C13CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINC:2;
      uint64_t DINC:2;
      uint64_t SSIZE:2;
      uint64_t DSIZE:2;
      uint64_t SINCOS:2;
      uint64_t DINCOS:2;
      uint64_t SBURST:3;
      uint64_t DBURST:3;
      uint64_t TLEN:7;
      uint64_t PKE:1;
      uint64_t PAM:2;
      uint64_t TRGM:2;
      uint64_t SWRM:1;
      uint64_t BWM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C13TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNDT:17;
      uint64_t reservedSpace0:1;
      uint64_t BRSUM:1;
      uint64_t BRDUM:1;
      uint64_t BRC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C13BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C13SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C13DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C13BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C13LAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSEL:6;
      uint64_t reservedSpace0:10;
      uint64_t SBUS:1;
      uint64_t DBUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C13TBR;

  uint8_t res27[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C13MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C13MDR;

  uint8_t res28[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEIF14:1;
      uint64_t CTCIF14:1;
      uint64_t BRTIF14:1;
      uint64_t BTIF14:1;
      uint64_t TCIF14:1;
      uint64_t reservedSpace0:11;
      uint64_t CRQA14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C14ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTEIF14:1;
      uint64_t CCTCIF14:1;
      uint64_t CBRTIF14:1;
      uint64_t CBTIF14:1;
      uint64_t CLTCIF14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C14IFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEA:7;
      uint64_t TED:1;
      uint64_t TELD:1;
      uint64_t TEMD:1;
      uint64_t ASE:1;
      uint64_t BSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C14ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TEIE:1;
      uint64_t CTCIE:1;
      uint64_t BRTIE:1;
      uint64_t BTIE:1;
      uint64_t TCIE:1;
      uint64_t PL:2;
      uint64_t reservedSpace0:4;
      uint64_t BEX:1;
      uint64_t HEX:1;
      uint64_t WEX:1;
      uint64_t reservedSpace1:1;
      uint64_t SWRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C14CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINC:2;
      uint64_t DINC:2;
      uint64_t SSIZE:2;
      uint64_t DSIZE:2;
      uint64_t SINCOS:2;
      uint64_t DINCOS:2;
      uint64_t SBURST:3;
      uint64_t DBURST:3;
      uint64_t TLEN:7;
      uint64_t PKE:1;
      uint64_t PAM:2;
      uint64_t TRGM:2;
      uint64_t SWRM:1;
      uint64_t BWM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C14TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNDT:17;
      uint64_t reservedSpace0:1;
      uint64_t BRSUM:1;
      uint64_t BRDUM:1;
      uint64_t BRC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C14BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C14SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C14DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C14BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C14LAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSEL:6;
      uint64_t reservedSpace0:10;
      uint64_t SBUS:1;
      uint64_t DBUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C14TBR;

  uint8_t res29[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C14MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C14MDR;

  uint8_t res30[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEIF15:1;
      uint64_t CTCIF15:1;
      uint64_t BRTIF15:1;
      uint64_t BTIF15:1;
      uint64_t TCIF15:1;
      uint64_t reservedSpace0:11;
      uint64_t CRQA15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C15ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTEIF15:1;
      uint64_t CCTCIF15:1;
      uint64_t CBRTIF15:1;
      uint64_t CBTIF15:1;
      uint64_t CLTCIF15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C15IFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEA:7;
      uint64_t TED:1;
      uint64_t TELD:1;
      uint64_t TEMD:1;
      uint64_t ASE:1;
      uint64_t BSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C15ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TEIE:1;
      uint64_t CTCIE:1;
      uint64_t BRTIE:1;
      uint64_t BTIE:1;
      uint64_t TCIE:1;
      uint64_t PL:2;
      uint64_t reservedSpace0:4;
      uint64_t BEX:1;
      uint64_t HEX:1;
      uint64_t WEX:1;
      uint64_t reservedSpace1:1;
      uint64_t SWRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C15CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINC:2;
      uint64_t DINC:2;
      uint64_t SSIZE:2;
      uint64_t DSIZE:2;
      uint64_t SINCOS:2;
      uint64_t DINCOS:2;
      uint64_t SBURST:3;
      uint64_t DBURST:3;
      uint64_t TLEN:7;
      uint64_t PKE:1;
      uint64_t PAM:2;
      uint64_t TRGM:2;
      uint64_t SWRM:1;
      uint64_t BWM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C15TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNDT:17;
      uint64_t reservedSpace0:1;
      uint64_t BRSUM:1;
      uint64_t BRDUM:1;
      uint64_t BRC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C15BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C15SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C15DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C15BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C15LAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSEL:6;
      uint64_t reservedSpace0:10;
      uint64_t SBUS:1;
      uint64_t DBUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C15TBR;

  uint8_t res31[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C15MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMA_C15MDR;

};

#define MDMA (*(volatile struct MDMA_tag *) 0x52000000)

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
  } __attribute__((aligned(4))) MPU_TYPER;

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

};

#define MPU (*(volatile struct MPU_tag *) 0xe000ed90)

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

  uint32_t ISER3;
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

  uint32_t ICER3;
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

  uint32_t ISPR3;
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

  uint8_t res3[52];

  uint32_t ICPR3;
  uint8_t res4[60];

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

  uint32_t IABR3;
  uint8_t res5[240];

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
  } __attribute__((aligned(4))) IPR21;

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
  } __attribute__((aligned(4))) IPR22;

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
  } __attribute__((aligned(4))) IPR23;

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
  } __attribute__((aligned(4))) IPR24;

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
  } __attribute__((aligned(4))) IPR25;

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
  } __attribute__((aligned(4))) IPR26;

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
  } __attribute__((aligned(4))) IPR27;

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
  } __attribute__((aligned(4))) IPR28;

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
  } __attribute__((aligned(4))) IPR29;

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
  } __attribute__((aligned(4))) IPR30;

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
  } __attribute__((aligned(4))) IPR31;

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
  } __attribute__((aligned(4))) IPR32;

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
  } __attribute__((aligned(4))) IPR33;

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
  } __attribute__((aligned(4))) IPR34;

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
  } __attribute__((aligned(4))) IPR35;

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
  } __attribute__((aligned(4))) IPR36;

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
  } __attribute__((aligned(4))) IPR37;

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
  } __attribute__((aligned(4))) IPR38;

};

#define NVIC (*(volatile struct NVIC_tag *) 0xe000e100)

struct NVIC_STIR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTID:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STIR;

};

#define NVIC_STIR (*(volatile struct NVIC_STIR_tag *) 0xe000ef00)

struct OCTOSPI1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t ABORT:1;
      uint64_t DMAEN:1;
      uint64_t TCEN:1;
      uint64_t reservedSpace0:2;
      uint64_t DQM:1;
      uint64_t FSEL:1;
      uint64_t FTHRES:5;
      uint64_t reservedSpace1:3;
      uint64_t TEIE:1;
      uint64_t TCIE:1;
      uint64_t FTIE:1;
      uint64_t SMIE:1;
      uint64_t TOIE:1;
      uint64_t reservedSpace2:1;
      uint64_t APMS:1;
      uint64_t PMM:1;
      uint64_t reservedSpace3:4;
      uint64_t FMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKMODE:1;
      uint64_t FRCK:1;
      uint64_t reservedSpace0:6;
      uint64_t CSHT:3;
      uint64_t reservedSpace1:5;
      uint64_t DEVSIZE:5;
      uint64_t reservedSpace2:3;
      uint64_t MTYP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESCALER:8;
      uint64_t reservedSpace0:8;
      uint64_t WRAPSIZE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXTRAN:8;
      uint64_t reservedSpace0:8;
      uint64_t CSBOUND:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REFRESH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCR4;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTEF:1;
      uint64_t CTCF:1;
      uint64_t FTF:1;
      uint64_t CSMF:1;
      uint64_t CTOF:1;
      uint64_t BUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t FLEVEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTEF:1;
      uint64_t CTCF:1;
      uint64_t reservedSpace0:1;
      uint64_t CSMF:1;
      uint64_t CTOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCR;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  uint8_t res5[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSMKR;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSMAR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTERVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIR;

  uint8_t res8[108];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IMODE:3;
      uint64_t IDTR:1;
      uint64_t ISIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t ADMODE:3;
      uint64_t ADDTR:1;
      uint64_t ADSIZE:2;
      uint64_t reservedSpace1:2;
      uint64_t ABMODE:3;
      uint64_t ABDTR:1;
      uint64_t ABSIZE:2;
      uint64_t reservedSpace2:2;
      uint64_t DMODE:3;
      uint64_t DDTR:1;
      uint64_t reservedSpace3:1;
      uint64_t DQSE:1;
      uint64_t reservedSpace4:1;
      uint64_t SIOO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCYC:5;
      uint64_t reservedSpace0:23;
      uint64_t DHQC:1;
      uint64_t reservedSpace1:1;
      uint64_t SSHIFT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INSTRUCTION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  uint8_t res11[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTERNATE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ABR;

  uint8_t res12[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMEOUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPTR;

  uint8_t res13[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IMODE:3;
      uint64_t IDTR:1;
      uint64_t ISIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t ADMODE:3;
      uint64_t ADDTR:1;
      uint64_t ADSIZE:2;
      uint64_t reservedSpace1:2;
      uint64_t ABMODE:3;
      uint64_t ABDTR:1;
      uint64_t ABSIZE:2;
      uint64_t reservedSpace2:2;
      uint64_t DMODE:3;
      uint64_t DDTR:1;
      uint64_t reservedSpace3:1;
      uint64_t DQSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPCCR;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCYC:5;
      uint64_t reservedSpace0:23;
      uint64_t DHQC:1;
      uint64_t reservedSpace1:1;
      uint64_t SSHIFT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPTCR;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INSTRUCTION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPIR;

  uint8_t res16[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTERNATE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPABR;

  uint8_t res17[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IMODE:2;
      uint64_t IDTR:1;
      uint64_t ISIZE:1;
      uint64_t reservedSpace0:4;
      uint64_t ADMODE:3;
      uint64_t ADDTR:1;
      uint64_t ADSIZE:2;
      uint64_t reservedSpace1:2;
      uint64_t ABMODE:3;
      uint64_t ABDTR:1;
      uint64_t ABSIZE:2;
      uint64_t reservedSpace2:2;
      uint64_t DMODE:3;
      uint64_t DDTR:1;
      uint64_t reservedSpace3:1;
      uint64_t DQSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WCCR;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCYC:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTCR;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INSTRUCTION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WIR;

  uint8_t res20[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTERNATE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WABR;

  uint8_t res21[92];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t WZL:1;
      uint64_t reservedSpace0:6;
      uint64_t TACC:8;
      uint64_t TRWR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HLCR;

};

#define OCTOSPI1 (*(volatile struct OCTOSPI1_tag *) 0x52005000)

struct OCTOSPI2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t ABORT:1;
      uint64_t DMAEN:1;
      uint64_t TCEN:1;
      uint64_t reservedSpace0:2;
      uint64_t DQM:1;
      uint64_t FSEL:1;
      uint64_t FTHRES:5;
      uint64_t reservedSpace1:3;
      uint64_t TEIE:1;
      uint64_t TCIE:1;
      uint64_t FTIE:1;
      uint64_t SMIE:1;
      uint64_t TOIE:1;
      uint64_t reservedSpace2:1;
      uint64_t APMS:1;
      uint64_t PMM:1;
      uint64_t reservedSpace3:4;
      uint64_t FMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKMODE:1;
      uint64_t FRCK:1;
      uint64_t reservedSpace0:6;
      uint64_t CSHT:3;
      uint64_t reservedSpace1:5;
      uint64_t DEVSIZE:5;
      uint64_t reservedSpace2:3;
      uint64_t MTYP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESCALER:8;
      uint64_t reservedSpace0:8;
      uint64_t WRAPSIZE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXTRAN:8;
      uint64_t reservedSpace0:8;
      uint64_t CSBOUND:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REFRESH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCR4;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTEF:1;
      uint64_t CTCF:1;
      uint64_t FTF:1;
      uint64_t CSMF:1;
      uint64_t CTOF:1;
      uint64_t BUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t FLEVEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTEF:1;
      uint64_t CTCF:1;
      uint64_t reservedSpace0:1;
      uint64_t CSMF:1;
      uint64_t CTOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCR;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  uint8_t res5[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSMKR;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSMAR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTERVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIR;

  uint8_t res8[108];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IMODE:3;
      uint64_t IDTR:1;
      uint64_t ISIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t ADMODE:3;
      uint64_t ADDTR:1;
      uint64_t ADSIZE:2;
      uint64_t reservedSpace1:2;
      uint64_t ABMODE:3;
      uint64_t ABDTR:1;
      uint64_t ABSIZE:2;
      uint64_t reservedSpace2:2;
      uint64_t DMODE:3;
      uint64_t DDTR:1;
      uint64_t reservedSpace3:1;
      uint64_t DQSE:1;
      uint64_t reservedSpace4:1;
      uint64_t SIOO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCYC:5;
      uint64_t reservedSpace0:23;
      uint64_t DHQC:1;
      uint64_t reservedSpace1:1;
      uint64_t SSHIFT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INSTRUCTION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  uint8_t res11[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTERNATE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ABR;

  uint8_t res12[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMEOUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPTR;

  uint8_t res13[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IMODE:3;
      uint64_t IDTR:1;
      uint64_t ISIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t ADMODE:3;
      uint64_t ADDTR:1;
      uint64_t ADSIZE:2;
      uint64_t reservedSpace1:2;
      uint64_t ABMODE:3;
      uint64_t ABDTR:1;
      uint64_t ABSIZE:2;
      uint64_t reservedSpace2:2;
      uint64_t DMODE:3;
      uint64_t DDTR:1;
      uint64_t reservedSpace3:1;
      uint64_t DQSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPCCR;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCYC:5;
      uint64_t reservedSpace0:23;
      uint64_t DHQC:1;
      uint64_t reservedSpace1:1;
      uint64_t SSHIFT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPTCR;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INSTRUCTION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPIR;

  uint8_t res16[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTERNATE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPABR;

  uint8_t res17[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IMODE:2;
      uint64_t IDTR:1;
      uint64_t ISIZE:1;
      uint64_t reservedSpace0:4;
      uint64_t ADMODE:3;
      uint64_t ADDTR:1;
      uint64_t ADSIZE:2;
      uint64_t reservedSpace1:2;
      uint64_t ABMODE:3;
      uint64_t ABDTR:1;
      uint64_t ABSIZE:2;
      uint64_t reservedSpace2:2;
      uint64_t DMODE:3;
      uint64_t DDTR:1;
      uint64_t reservedSpace3:1;
      uint64_t DQSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WCCR;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCYC:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTCR;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INSTRUCTION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WIR;

  uint8_t res20[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTERNATE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WABR;

  uint8_t res21[92];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t WZL:1;
      uint64_t reservedSpace0:6;
      uint64_t TACC:8;
      uint64_t TRWR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HLCR;

};

#define OCTOSPI2 (*(volatile struct OCTOSPI2_tag *) 0x5200a000)

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
      uint64_t reservedSpace0:1;
      uint64_t VM_SEL:2;
      uint64_t reservedSpace1:1;
      uint64_t OPAHSM:1;
      uint64_t reservedSpace2:2;
      uint64_t CALON:1;
      uint64_t CALSEL:2;
      uint64_t PGA_GAIN:4;
      uint64_t USERTRIM:1;
      uint64_t reservedSpace3:10;
      uint64_t TSTREF:1;
      uint64_t CALOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPAMP1_CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIMOFFSETN:5;
      uint64_t reservedSpace0:3;
      uint64_t TRIMOFFSETP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPAMP1_OTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIMLPOFFSETN:5;
      uint64_t reservedSpace0:3;
      uint64_t TRIMLPOFFSETP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPAMP1_HSOTR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPAEN:1;
      uint64_t FORCE_VP:1;
      uint64_t reservedSpace0:3;
      uint64_t VM_SEL:2;
      uint64_t reservedSpace1:1;
      uint64_t OPAHSM:1;
      uint64_t reservedSpace2:2;
      uint64_t CALON:1;
      uint64_t CALSEL:2;
      uint64_t PGA_GAIN:4;
      uint64_t USERTRIM:1;
      uint64_t reservedSpace3:10;
      uint64_t TSTREF:1;
      uint64_t CALOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPAMP2_CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIMOFFSETN:5;
      uint64_t reservedSpace0:3;
      uint64_t TRIMOFFSETP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPAMP2_OTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIMLPOFFSETN:5;
      uint64_t reservedSpace0:3;
      uint64_t TRIMLPOFFSETP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPAMP2_HSOTR;

};

#define OPAMP (*(volatile struct OPAMP_tag *) 0x40009000)

struct OTG1_HS_HOST_tag
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
  } __attribute__((aligned(4))) OTG_HS_HCCHAR12;

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
  } __attribute__((aligned(4))) OTG_HS_HCSPLT12;

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
  } __attribute__((aligned(4))) OTG_HS_HCINT12;

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
  } __attribute__((aligned(4))) OTG_HS_HCINTMSK12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCTSIZ12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCDMA12;

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
  } __attribute__((aligned(4))) OTG_HS_HCCHAR13;

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
  } __attribute__((aligned(4))) OTG_HS_HCSPLT13;

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
  } __attribute__((aligned(4))) OTG_HS_HCINT13;

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
  } __attribute__((aligned(4))) OTG_HS_HCINTMSK13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCTSIZ13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCDMA13;

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
  } __attribute__((aligned(4))) OTG_HS_HCCHAR14;

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
  } __attribute__((aligned(4))) OTG_HS_HCSPLT14;

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
  } __attribute__((aligned(4))) OTG_HS_HCINT14;

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
  } __attribute__((aligned(4))) OTG_HS_HCINTMSK14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCTSIZ14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCDMA14;

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
  } __attribute__((aligned(4))) OTG_HS_HCCHAR15;

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
  } __attribute__((aligned(4))) OTG_HS_HCSPLT15;

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
  } __attribute__((aligned(4))) OTG_HS_HCINT15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYET:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINTMSK15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCTSIZ15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCDMA15;

};

#define OTG1_HS_HOST (*(volatile struct OTG1_HS_HOST_tag *) 0x40040400)

struct OTG2_HS_HOST_tag
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
  } __attribute__((aligned(4))) OTG_HS_HCCHAR12;

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
  } __attribute__((aligned(4))) OTG_HS_HCSPLT12;

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
  } __attribute__((aligned(4))) OTG_HS_HCINT12;

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
  } __attribute__((aligned(4))) OTG_HS_HCINTMSK12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCTSIZ12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCDMA12;

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
  } __attribute__((aligned(4))) OTG_HS_HCCHAR13;

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
  } __attribute__((aligned(4))) OTG_HS_HCSPLT13;

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
  } __attribute__((aligned(4))) OTG_HS_HCINT13;

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
  } __attribute__((aligned(4))) OTG_HS_HCINTMSK13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCTSIZ13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCDMA13;

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
  } __attribute__((aligned(4))) OTG_HS_HCCHAR14;

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
  } __attribute__((aligned(4))) OTG_HS_HCSPLT14;

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
  } __attribute__((aligned(4))) OTG_HS_HCINT14;

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
  } __attribute__((aligned(4))) OTG_HS_HCINTMSK14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCTSIZ14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCDMA14;

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
  } __attribute__((aligned(4))) OTG_HS_HCCHAR15;

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
  } __attribute__((aligned(4))) OTG_HS_HCSPLT15;

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
  } __attribute__((aligned(4))) OTG_HS_HCINT15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYET:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCINTMSK15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCTSIZ15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTG_HS_HCDMA15;

};

#define OTG2_HS_HOST (*(volatile struct OTG2_HS_HOST_tag *) 0x40080400)

struct OTG1_HS_PWRCLK_tag
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

#define OTG1_HS_PWRCLK (*(volatile struct OTG1_HS_PWRCLK_tag *) 0x40040e00)

struct OTG2_HS_PWRCLK_tag
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

#define OTG2_HS_PWRCLK (*(volatile struct OTG2_HS_PWRCLK_tag *) 0x40080e00)

struct OctoSPII_O_Manager_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXEN:1;
      uint64_t reservedSpace0:15;
      uint64_t REQ2ACK_TIME:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKEN:1;
      uint64_t CLKSRC:1;
      uint64_t reservedSpace0:2;
      uint64_t DQSEN:1;
      uint64_t DQSSRC:1;
      uint64_t reservedSpace1:2;
      uint64_t NCSEN:1;
      uint64_t NCSSRC:1;
      uint64_t reservedSpace2:6;
      uint64_t IOLEN:1;
      uint64_t IOLSRC:2;
      uint64_t reservedSpace3:5;
      uint64_t IOHEN:1;
      uint64_t IOHSRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P1CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKEN:1;
      uint64_t CLKSRC:1;
      uint64_t reservedSpace0:2;
      uint64_t DQSEN:1;
      uint64_t DQSSRC:1;
      uint64_t reservedSpace1:2;
      uint64_t NCSEN:1;
      uint64_t NCSSRC:1;
      uint64_t reservedSpace2:6;
      uint64_t IOLEN:1;
      uint64_t IOLSRC:2;
      uint64_t reservedSpace3:5;
      uint64_t IOHEN:1;
      uint64_t IOHSRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P2CR;

};

#define OctoSPII_O_Manager (*(volatile struct OctoSPII_O_Manager_tag *) 0x5200b400)

struct PF_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CL1:3;
      uint64_t CL2:3;
      uint64_t CL3:3;
      uint64_t CL4:3;
      uint64_t CL5:3;
      uint64_t CL6:3;
      uint64_t CL7:3;
      uint64_t LoUIS:3;
      uint64_t LoC:3;
      uint64_t LoU:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t _IminLine:4;
      uint64_t reservedSpace0:12;
      uint64_t DMinLine:4;
      uint64_t ERG:4;
      uint64_t CWG:4;
      uint64_t reservedSpace1:1;
      uint64_t Format:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LineSize:3;
      uint64_t Associativity:10;
      uint64_t NumSets:15;
      uint64_t WA:1;
      uint64_t RA:1;
      uint64_t WB:1;
      uint64_t WT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCSIDR;

};

#define PF (*(volatile struct PF_tag *) 0xe000ed78)

struct PWR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPDS:1;
      uint64_t reservedSpace0:3;
      uint64_t PVDE:1;
      uint64_t PLS:3;
      uint64_t DBP:1;
      uint64_t FLPS:1;
      uint64_t reservedSpace1:4;
      uint64_t SVOS:2;
      uint64_t AVDEN:1;
      uint64_t ALS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t PVDO:1;
      uint64_t reservedSpace1:8;
      uint64_t ACTVOSRDY:1;
      uint64_t ACTVOS:2;
      uint64_t AVDO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BREN:1;
      uint64_t reservedSpace0:3;
      uint64_t MONEN:1;
      uint64_t reservedSpace1:11;
      uint64_t BRRDY:1;
      uint64_t reservedSpace2:3;
      uint64_t VBATL:1;
      uint64_t VBATH:1;
      uint64_t TEMPL:1;
      uint64_t TEMPH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BYPASS:1;
      uint64_t LDOEN:1;
      uint64_t SDEN:1;
      uint64_t reservedSpace0:5;
      uint64_t VBE:1;
      uint64_t VBRS:1;
      uint64_t reservedSpace1:14;
      uint64_t USB33DEN:1;
      uint64_t USBREGEN:1;
      uint64_t USB33RDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDDS_D1:1;
      uint64_t PDDS_D2:1;
      uint64_t PDDS_D3:1;
      uint64_t reservedSpace0:2;
      uint64_t STOPF:1;
      uint64_t SBF:1;
      uint64_t SBF_D1:1;
      uint64_t SBF_D2:1;
      uint64_t CSSF:1;
      uint64_t reservedSpace1:1;
      uint64_t RUN_D3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t VOSRDY:1;
      uint64_t VOS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) D3CR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WKUPC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WKUPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WKUPF1:1;
      uint64_t WKUPF2:1;
      uint64_t WKUPF3:1;
      uint64_t WKUPF4:1;
      uint64_t WKUPF5:1;
      uint64_t WKUPF6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WKUPFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WKUPEN1:1;
      uint64_t WKUPEN2:1;
      uint64_t WKUPEN3:1;
      uint64_t WKUPEN4:1;
      uint64_t WKUPEN5:1;
      uint64_t WKUPEN6:1;
      uint64_t reservedSpace0:2;
      uint64_t WKUPP1:1;
      uint64_t WKUPP2:1;
      uint64_t WKUPP3:1;
      uint64_t WKUPP4:1;
      uint64_t WKUPP5:1;
      uint64_t WKUPP6:1;
      uint64_t reservedSpace1:2;
      uint64_t WKUPPUPD1:2;
      uint64_t WKUPPUPD2:2;
      uint64_t WKUPPUPD3:2;
      uint64_t WKUPPUPD4:2;
      uint64_t WKUPPUPD5:2;
      uint64_t WKUPPUPD6:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WKUPEPR;

};

#define PWR (*(volatile struct PWR_tag *) 0x58024800)

struct RAMECC3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIE:1;
      uint64_t GECCSEIE:1;
      uint64_t GECCDEIE:1;
      uint64_t GECCDEBWIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  uint8_t res0[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ECCSEIE:1;
      uint64_t ECCDEIE:1;
      uint64_t ECCDEBWIE:1;
      uint64_t ECCELEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M1CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEDCF:1;
      uint64_t DEDF:1;
      uint64_t DEBWDF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M1SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M1FAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FDATAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M1FDRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FDATAH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M1FDRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M1FECR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ECCSEIE:1;
      uint64_t ECCDEIE:1;
      uint64_t ECCDEBWIE:1;
      uint64_t ECCELEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M2CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEDCF:1;
      uint64_t DEDF:1;
      uint64_t DEBWDF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M2SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M2FAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FDATAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M2FDRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FDATAH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M2FDRH;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M2FECR;

};

#define RAMECC3 (*(volatile struct RAMECC3_tag *) 0x58027000)

struct RCC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSION:1;
      uint64_t HSIKERON:1;
      uint64_t HSIRDY:1;
      uint64_t HSIDIV:2;
      uint64_t HSIDIVF:1;
      uint64_t reservedSpace0:1;
      uint64_t CSION:1;
      uint64_t CSIRDY:1;
      uint64_t CSIKERON:1;
      uint64_t reservedSpace1:2;
      uint64_t RC48ON:1;
      uint64_t RC48RDY:1;
      uint64_t D1CKRDY:1;
      uint64_t D2CKRDY:1;
      uint64_t HSEON:1;
      uint64_t HSERDY:1;
      uint64_t HSEBYP:1;
      uint64_t HSECSSON:1;
      uint64_t reservedSpace2:4;
      uint64_t PLL1ON:1;
      uint64_t PLL1RDY:1;
      uint64_t PLL2ON:1;
      uint64_t PLL2RDY:1;
      uint64_t PLL3ON:1;
      uint64_t PLL3RDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSICAL:12;
      uint64_t HSITRIM:6;
      uint64_t CSICAL:8;
      uint64_t CSITRIM:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICSCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RC48CAL:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRRCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SW:3;
      uint64_t SWS:3;
      uint64_t STOPWUCK:1;
      uint64_t STOPKERWUCK:1;
      uint64_t RTCPRE:6;
      uint64_t HRTIMSEL:1;
      uint64_t TIMPRE:1;
      uint64_t reservedSpace0:2;
      uint64_t MCO1PRE:4;
      uint64_t MCO1SEL:3;
      uint64_t MCO2PRE:4;
      uint64_t MCO2SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HPRE:4;
      uint64_t D1PPRE:3;
      uint64_t reservedSpace0:1;
      uint64_t D1CPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) D1CFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t D2PPRE1:3;
      uint64_t reservedSpace1:1;
      uint64_t D2PPRE2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) D2CFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t D3PPRE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) D3CFGR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLLSRC:2;
      uint64_t reservedSpace0:2;
      uint64_t DIVM1:6;
      uint64_t reservedSpace1:2;
      uint64_t DIVM2:6;
      uint64_t reservedSpace2:2;
      uint64_t DIVM3:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCKSELR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLL1FRACEN:1;
      uint64_t PLL1VCOSEL:1;
      uint64_t PLL1RGE:2;
      uint64_t PLL2FRACEN:1;
      uint64_t PLL2VCOSEL:1;
      uint64_t PLL2RGE:2;
      uint64_t PLL3FRACEN:1;
      uint64_t PLL3VCOSEL:1;
      uint64_t PLL3RGE:2;
      uint64_t reservedSpace0:4;
      uint64_t DIVP1EN:1;
      uint64_t DIVQ1EN:1;
      uint64_t DIVR1EN:1;
      uint64_t DIVP2EN:1;
      uint64_t DIVQ2EN:1;
      uint64_t DIVR2EN:1;
      uint64_t DIVP3EN:1;
      uint64_t DIVQ3EN:1;
      uint64_t DIVR3EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVN1:9;
      uint64_t DIVP1:7;
      uint64_t DIVQ1:7;
      uint64_t reservedSpace0:1;
      uint64_t DIVR1:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL1DIVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t FRACN1:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL1FRACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVN1:9;
      uint64_t DIVP1:7;
      uint64_t DIVQ1:7;
      uint64_t reservedSpace0:1;
      uint64_t DIVR1:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL2DIVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t FRACN2:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL2FRACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVN3:9;
      uint64_t DIVP3:7;
      uint64_t DIVQ3:7;
      uint64_t reservedSpace0:1;
      uint64_t DIVR3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL3DIVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t FRACN3:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL3FRACR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMCSRC:2;
      uint64_t reservedSpace0:2;
      uint64_t QSPISRC:2;
      uint64_t reservedSpace1:10;
      uint64_t SDMMCSRC:1;
      uint64_t reservedSpace2:11;
      uint64_t CKPERSRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) D1CCIPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAI1SRC:3;
      uint64_t reservedSpace0:3;
      uint64_t SAI23SRC:3;
      uint64_t reservedSpace1:3;
      uint64_t SPI123SRC:3;
      uint64_t reservedSpace2:1;
      uint64_t SPI45SRC:3;
      uint64_t reservedSpace3:1;
      uint64_t SPDIFSRC:2;
      uint64_t reservedSpace4:2;
      uint64_t DFSDM1SRC:1;
      uint64_t reservedSpace5:3;
      uint64_t FDCANSRC:2;
      uint64_t reservedSpace6:1;
      uint64_t SWPSRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) D2CCIP1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USART234578SRC:3;
      uint64_t USART16SRC:3;
      uint64_t reservedSpace0:2;
      uint64_t RNGSRC:2;
      uint64_t reservedSpace1:2;
      uint64_t I2C123SRC:2;
      uint64_t reservedSpace2:6;
      uint64_t USBSRC:2;
      uint64_t CECSRC:2;
      uint64_t reservedSpace3:4;
      uint64_t LPTIM1SRC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) D2CCIP2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPUART1SRC:3;
      uint64_t reservedSpace0:5;
      uint64_t I2C4SRC:2;
      uint64_t LPTIM2SRC:3;
      uint64_t LPTIM345SRC:3;
      uint64_t ADCSRC:2;
      uint64_t reservedSpace1:3;
      uint64_t SAI4ASRC:3;
      uint64_t SAI4BSRC:3;
      uint64_t reservedSpace2:1;
      uint64_t SPI6SRC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) D3CCIPR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSIRDYIE:1;
      uint64_t LSERDYIE:1;
      uint64_t HSIRDYIE:1;
      uint64_t HSERDYIE:1;
      uint64_t CSIRDYIE:1;
      uint64_t RC48RDYIE:1;
      uint64_t PLL1RDYIE:1;
      uint64_t PLL2RDYIE:1;
      uint64_t PLL3RDYIE:1;
      uint64_t LSECSSIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSIRDYF:1;
      uint64_t LSERDYF:1;
      uint64_t HSIRDYF:1;
      uint64_t HSERDYF:1;
      uint64_t CSIRDY:1;
      uint64_t RC48RDYF:1;
      uint64_t PLL1RDYF:1;
      uint64_t PLL2RDYF:1;
      uint64_t PLL3RDYF:1;
      uint64_t LSECSSF:1;
      uint64_t HSECSSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSIRDYC:1;
      uint64_t LSERDYC:1;
      uint64_t HSIRDYC:1;
      uint64_t HSERDYC:1;
      uint64_t HSE_ready_Interrupt_Clear:1;
      uint64_t RC48RDYC:1;
      uint64_t PLL1RDYC:1;
      uint64_t PLL2RDYC:1;
      uint64_t PLL3RDYC:1;
      uint64_t LSECSSC:1;
      uint64_t HSECSSC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CICR;

  uint8_t res5[4];

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
      uint64_t RTCSRC:2;
      uint64_t reservedSpace1:5;
      uint64_t RTCEN:1;
      uint64_t VSWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSION:1;
      uint64_t LSIRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDMARST:1;
      uint64_t reservedSpace0:3;
      uint64_t DMA2DRST:1;
      uint64_t JPGDECRST:1;
      uint64_t reservedSpace1:6;
      uint64_t FMCRST:1;
      uint64_t reservedSpace2:1;
      uint64_t QSPIRST:1;
      uint64_t reservedSpace3:1;
      uint64_t SDMMC1RST:1;
      uint64_t reservedSpace4:14;
      uint64_t CPURST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB3RSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1RST:1;
      uint64_t DMA2RST:1;
      uint64_t reservedSpace0:3;
      uint64_t ADC12RST:1;
      uint64_t reservedSpace1:9;
      uint64_t ETH1MACRST:1;
      uint64_t reservedSpace2:9;
      uint64_t USB1OTGRST:1;
      uint64_t reservedSpace3:1;
      uint64_t USB2OTGRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB1RSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAMITFRST:1;
      uint64_t reservedSpace0:3;
      uint64_t CRYPTRST:1;
      uint64_t HASHRST:1;
      uint64_t RNGRST:1;
      uint64_t reservedSpace1:2;
      uint64_t SDMMC2RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB2RSTR;

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
      uint64_t GPIOJRST:1;
      uint64_t GPIOKRST:1;
      uint64_t reservedSpace0:8;
      uint64_t CRCRST:1;
      uint64_t reservedSpace1:1;
      uint64_t BDMARST:1;
      uint64_t reservedSpace2:2;
      uint64_t ADC3RST:1;
      uint64_t HSEMRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB4RSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t LTDCRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB3RSTR;

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
      uint64_t LPTIM1RST:1;
      uint64_t reservedSpace0:4;
      uint64_t SPI2RST:1;
      uint64_t SPI3RST:1;
      uint64_t SPDIFRXRST:1;
      uint64_t USART2RST:1;
      uint64_t USART3RST:1;
      uint64_t UART4RST:1;
      uint64_t UART5RST:1;
      uint64_t I2C1RST:1;
      uint64_t I2C2RST:1;
      uint64_t I2C3RST:1;
      uint64_t reservedSpace1:3;
      uint64_t HDMICECRST:1;
      uint64_t reservedSpace2:1;
      uint64_t DAC12RST:1;
      uint64_t USART7RST:1;
      uint64_t USART8RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1LRSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CRSRST:1;
      uint64_t SWPRST:1;
      uint64_t reservedSpace1:1;
      uint64_t OPAMPRST:1;
      uint64_t MDIOSRST:1;
      uint64_t reservedSpace2:2;
      uint64_t FDCANRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1HRSTR;

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
      uint64_t reservedSpace1:6;
      uint64_t SPI1RST:1;
      uint64_t SPI4RST:1;
      uint64_t reservedSpace2:2;
      uint64_t TIM15RST:1;
      uint64_t TIM16RST:1;
      uint64_t TIM17RST:1;
      uint64_t reservedSpace3:1;
      uint64_t SPI5RST:1;
      uint64_t reservedSpace4:1;
      uint64_t SAI1RST:1;
      uint64_t SAI2RST:1;
      uint64_t SAI3RST:1;
      uint64_t reservedSpace5:3;
      uint64_t DFSDM1RST:1;
      uint64_t HRTIMRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2RSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SYSCFGRST:1;
      uint64_t reservedSpace1:1;
      uint64_t LPUART1RST:1;
      uint64_t reservedSpace2:1;
      uint64_t SPI6RST:1;
      uint64_t reservedSpace3:1;
      uint64_t I2C4RST:1;
      uint64_t reservedSpace4:1;
      uint64_t LPTIM2RST:1;
      uint64_t LPTIM3RST:1;
      uint64_t LPTIM4RST:1;
      uint64_t LPTIM5RST:1;
      uint64_t reservedSpace5:1;
      uint64_t COMP12RST:1;
      uint64_t VREFRST:1;
      uint64_t reservedSpace6:5;
      uint64_t SAI4RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB4RSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WW1RSC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BDMAAMEN:1;
      uint64_t reservedSpace0:2;
      uint64_t LPUART1AMEN:1;
      uint64_t reservedSpace1:1;
      uint64_t SPI6AMEN:1;
      uint64_t reservedSpace2:1;
      uint64_t I2C4AMEN:1;
      uint64_t reservedSpace3:1;
      uint64_t LPTIM2AMEN:1;
      uint64_t LPTIM3AMEN:1;
      uint64_t LPTIM4AMEN:1;
      uint64_t LPTIM5AMEN:1;
      uint64_t reservedSpace4:1;
      uint64_t COMP12AMEN:1;
      uint64_t VREFAMEN:1;
      uint64_t RTCAMEN:1;
      uint64_t reservedSpace5:2;
      uint64_t CRCAMEN:1;
      uint64_t reservedSpace6:1;
      uint64_t SAI4AMEN:1;
      uint64_t reservedSpace7:2;
      uint64_t ADC3AMEN:1;
      uint64_t reservedSpace8:3;
      uint64_t BKPSRAMAMEN:1;
      uint64_t SRAM4AMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) D3AMR;

  uint8_t res8[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RMVF:1;
      uint64_t CPURSTF:1;
      uint64_t reservedSpace1:1;
      uint64_t D1RSTF:1;
      uint64_t D2RSTF:1;
      uint64_t BORRSTF:1;
      uint64_t PINRSTF:1;
      uint64_t PORRSTF:1;
      uint64_t SFTRSTF:1;
      uint64_t reservedSpace2:1;
      uint64_t IWDG1RSTF:1;
      uint64_t reservedSpace3:1;
      uint64_t WWDG1RSTF:1;
      uint64_t reservedSpace4:1;
      uint64_t LPWRRSTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDMAEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DMA2DEN:1;
      uint64_t JPGDECEN:1;
      uint64_t reservedSpace1:6;
      uint64_t FMCEN:1;
      uint64_t reservedSpace2:1;
      uint64_t QSPIEN:1;
      uint64_t reservedSpace3:1;
      uint64_t SDMMC1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB3ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1EN:1;
      uint64_t DMA2EN:1;
      uint64_t reservedSpace0:3;
      uint64_t ADC12EN:1;
      uint64_t reservedSpace1:9;
      uint64_t ETH1MACEN:1;
      uint64_t ETH1TXEN:1;
      uint64_t ETH1RXEN:1;
      uint64_t reservedSpace2:7;
      uint64_t USB1OTGEN:1;
      uint64_t USB1ULPIEN:1;
      uint64_t USB2OTGEN:1;
      uint64_t USB2ULPIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB1ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAMITFEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CRYPTEN:1;
      uint64_t HASHEN:1;
      uint64_t RNGEN:1;
      uint64_t reservedSpace1:2;
      uint64_t SDMMC2EN:1;
      uint64_t reservedSpace2:19;
      uint64_t SRAM1EN:1;
      uint64_t SRAM2EN:1;
      uint64_t SRAM3EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB2ENR;

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
      uint64_t GPIOJEN:1;
      uint64_t GPIOKEN:1;
      uint64_t reservedSpace0:8;
      uint64_t CRCEN:1;
      uint64_t reservedSpace1:1;
      uint64_t BDMAEN:1;
      uint64_t reservedSpace2:2;
      uint64_t ADC3EN:1;
      uint64_t HSEMEN:1;
      uint64_t reservedSpace3:2;
      uint64_t BKPRAMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB4ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t LTDCEN:1;
      uint64_t reservedSpace1:2;
      uint64_t WWDG1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB3ENR;

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
      uint64_t LPTIM1EN:1;
      uint64_t reservedSpace0:4;
      uint64_t SPI2EN:1;
      uint64_t SPI3EN:1;
      uint64_t SPDIFRXEN:1;
      uint64_t USART2EN:1;
      uint64_t USART3EN:1;
      uint64_t UART4EN:1;
      uint64_t UART5EN:1;
      uint64_t I2C1EN:1;
      uint64_t I2C2EN:1;
      uint64_t I2C3EN:1;
      uint64_t reservedSpace1:3;
      uint64_t HDMICECEN:1;
      uint64_t reservedSpace2:1;
      uint64_t DAC12EN:1;
      uint64_t USART7EN:1;
      uint64_t USART8EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1LENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CRSEN:1;
      uint64_t SWPEN:1;
      uint64_t reservedSpace1:1;
      uint64_t OPAMPEN:1;
      uint64_t MDIOSEN:1;
      uint64_t reservedSpace2:2;
      uint64_t FDCANEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1HENR;

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
      uint64_t reservedSpace1:6;
      uint64_t SPI1EN:1;
      uint64_t SPI4EN:1;
      uint64_t reservedSpace2:2;
      uint64_t TIM15EN:1;
      uint64_t TIM16EN:1;
      uint64_t TIM17EN:1;
      uint64_t reservedSpace3:1;
      uint64_t SPI5EN:1;
      uint64_t reservedSpace4:1;
      uint64_t SAI1EN:1;
      uint64_t SAI2EN:1;
      uint64_t SAI3EN:1;
      uint64_t reservedSpace5:3;
      uint64_t DFSDM1EN:1;
      uint64_t HRTIMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SYSCFGEN:1;
      uint64_t reservedSpace1:1;
      uint64_t LPUART1EN:1;
      uint64_t reservedSpace2:1;
      uint64_t SPI6EN:1;
      uint64_t reservedSpace3:1;
      uint64_t I2C4EN:1;
      uint64_t reservedSpace4:1;
      uint64_t LPTIM2EN:1;
      uint64_t LPTIM3EN:1;
      uint64_t LPTIM4EN:1;
      uint64_t LPTIM5EN:1;
      uint64_t reservedSpace5:1;
      uint64_t COMP12EN:1;
      uint64_t VREFEN:1;
      uint64_t RTCAPBEN:1;
      uint64_t reservedSpace6:4;
      uint64_t SAI4EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB4ENR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDMALPEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DMA2DLPEN:1;
      uint64_t JPGDECLPEN:1;
      uint64_t reservedSpace1:2;
      uint64_t FLITFLPEN:1;
      uint64_t reservedSpace2:3;
      uint64_t FMCLPEN:1;
      uint64_t reservedSpace3:1;
      uint64_t QSPILPEN:1;
      uint64_t reservedSpace4:1;
      uint64_t SDMMC1LPEN:1;
      uint64_t reservedSpace5:11;
      uint64_t D1DTCM1LPEN:1;
      uint64_t DTCM2LPEN:1;
      uint64_t ITCMLPEN:1;
      uint64_t AXISRAMLPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB3LPENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1LPEN:1;
      uint64_t DMA2LPEN:1;
      uint64_t reservedSpace0:3;
      uint64_t ADC12LPEN:1;
      uint64_t reservedSpace1:9;
      uint64_t ETH1MACLPEN:1;
      uint64_t ETH1TXLPEN:1;
      uint64_t ETH1RXLPEN:1;
      uint64_t reservedSpace2:7;
      uint64_t USB1OTGLPEN:1;
      uint64_t USB1ULPILPEN:1;
      uint64_t USB2OTGLPEN:1;
      uint64_t USB2ULPILPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB1LPENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAMITFLPEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CRYPTLPEN:1;
      uint64_t HASHLPEN:1;
      uint64_t RNGLPEN:1;
      uint64_t reservedSpace1:2;
      uint64_t SDMMC2LPEN:1;
      uint64_t reservedSpace2:19;
      uint64_t SRAM1LPEN:1;
      uint64_t SRAM2LPEN:1;
      uint64_t SRAM3LPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB2LPENR;

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
      uint64_t GPIOJLPEN:1;
      uint64_t GPIOKLPEN:1;
      uint64_t reservedSpace0:8;
      uint64_t CRCLPEN:1;
      uint64_t reservedSpace1:1;
      uint64_t BDMALPEN:1;
      uint64_t reservedSpace2:2;
      uint64_t ADC3LPEN:1;
      uint64_t reservedSpace3:3;
      uint64_t BKPRAMLPEN:1;
      uint64_t SRAM4LPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB4LPENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t LTDCLPEN:1;
      uint64_t reservedSpace1:2;
      uint64_t WWDG1LPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB3LPENR;

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
      uint64_t LPTIM1LPEN:1;
      uint64_t reservedSpace0:4;
      uint64_t SPI2LPEN:1;
      uint64_t SPI3LPEN:1;
      uint64_t SPDIFRXLPEN:1;
      uint64_t USART2LPEN:1;
      uint64_t USART3LPEN:1;
      uint64_t UART4LPEN:1;
      uint64_t UART5LPEN:1;
      uint64_t I2C1LPEN:1;
      uint64_t I2C2LPEN:1;
      uint64_t I2C3LPEN:1;
      uint64_t reservedSpace1:3;
      uint64_t HDMICECLPEN:1;
      uint64_t reservedSpace2:1;
      uint64_t DAC12LPEN:1;
      uint64_t USART7LPEN:1;
      uint64_t USART8LPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1LLPENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CRSLPEN:1;
      uint64_t SWPLPEN:1;
      uint64_t reservedSpace1:1;
      uint64_t OPAMPLPEN:1;
      uint64_t MDIOSLPEN:1;
      uint64_t reservedSpace2:2;
      uint64_t FDCANLPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1HLPENR;

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
      uint64_t reservedSpace1:6;
      uint64_t SPI1LPEN:1;
      uint64_t SPI4LPEN:1;
      uint64_t reservedSpace2:2;
      uint64_t TIM15LPEN:1;
      uint64_t TIM16LPEN:1;
      uint64_t TIM17LPEN:1;
      uint64_t reservedSpace3:1;
      uint64_t SPI5LPEN:1;
      uint64_t reservedSpace4:1;
      uint64_t SAI1LPEN:1;
      uint64_t SAI2LPEN:1;
      uint64_t SAI3LPEN:1;
      uint64_t reservedSpace5:3;
      uint64_t DFSDM1LPEN:1;
      uint64_t HRTIMLPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2LPENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SYSCFGLPEN:1;
      uint64_t reservedSpace1:1;
      uint64_t LPUART1LPEN:1;
      uint64_t reservedSpace2:1;
      uint64_t SPI6LPEN:1;
      uint64_t reservedSpace3:1;
      uint64_t I2C4LPEN:1;
      uint64_t reservedSpace4:1;
      uint64_t LPTIM2LPEN:1;
      uint64_t LPTIM3LPEN:1;
      uint64_t LPTIM4LPEN:1;
      uint64_t LPTIM5LPEN:1;
      uint64_t reservedSpace5:1;
      uint64_t COMP12LPEN:1;
      uint64_t VREFLPEN:1;
      uint64_t RTCAPBLPEN:1;
      uint64_t reservedSpace6:4;
      uint64_t SAI4LPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB4LPENR;

  uint8_t res10[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RMVF:1;
      uint64_t CPURSTF:1;
      uint64_t reservedSpace1:1;
      uint64_t D1RSTF:1;
      uint64_t D2RSTF:1;
      uint64_t BORRSTF:1;
      uint64_t PINRSTF:1;
      uint64_t PORRSTF:1;
      uint64_t SFTRSTF:1;
      uint64_t reservedSpace2:1;
      uint64_t IWDG1RSTF:1;
      uint64_t reservedSpace3:1;
      uint64_t WWDG1RSTF:1;
      uint64_t reservedSpace4:1;
      uint64_t LPWRRSTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1_RSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDMAEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DMA2DEN:1;
      uint64_t JPGDECEN:1;
      uint64_t reservedSpace1:6;
      uint64_t FMCEN:1;
      uint64_t reservedSpace2:1;
      uint64_t QSPIEN:1;
      uint64_t reservedSpace3:1;
      uint64_t SDMMC1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1_AHB3ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1EN:1;
      uint64_t DMA2EN:1;
      uint64_t reservedSpace0:3;
      uint64_t ADC12EN:1;
      uint64_t reservedSpace1:9;
      uint64_t ETH1MACEN:1;
      uint64_t ETH1TXEN:1;
      uint64_t ETH1RXEN:1;
      uint64_t reservedSpace2:7;
      uint64_t USB1OTGEN:1;
      uint64_t USB1ULPIEN:1;
      uint64_t USB2OTGEN:1;
      uint64_t USB2ULPIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1_AHB1ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAMITFEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CRYPTEN:1;
      uint64_t HASHEN:1;
      uint64_t RNGEN:1;
      uint64_t reservedSpace1:2;
      uint64_t SDMMC2EN:1;
      uint64_t reservedSpace2:19;
      uint64_t SRAM1EN:1;
      uint64_t SRAM2EN:1;
      uint64_t SRAM3EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1_AHB2ENR;

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
      uint64_t GPIOJEN:1;
      uint64_t GPIOKEN:1;
      uint64_t reservedSpace0:8;
      uint64_t CRCEN:1;
      uint64_t reservedSpace1:1;
      uint64_t BDMAEN:1;
      uint64_t reservedSpace2:2;
      uint64_t ADC3EN:1;
      uint64_t HSEMEN:1;
      uint64_t reservedSpace3:2;
      uint64_t BKPRAMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1_AHB4ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t LTDCEN:1;
      uint64_t reservedSpace1:2;
      uint64_t WWDG1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1_APB3ENR;

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
      uint64_t LPTIM1EN:1;
      uint64_t reservedSpace0:4;
      uint64_t SPI2EN:1;
      uint64_t SPI3EN:1;
      uint64_t SPDIFRXEN:1;
      uint64_t USART2EN:1;
      uint64_t USART3EN:1;
      uint64_t UART4EN:1;
      uint64_t UART5EN:1;
      uint64_t I2C1EN:1;
      uint64_t I2C2EN:1;
      uint64_t I2C3EN:1;
      uint64_t reservedSpace1:3;
      uint64_t HDMICECEN:1;
      uint64_t reservedSpace2:1;
      uint64_t DAC12EN:1;
      uint64_t USART7EN:1;
      uint64_t USART8EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1_APB1LENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CRSEN:1;
      uint64_t SWPEN:1;
      uint64_t reservedSpace1:1;
      uint64_t OPAMPEN:1;
      uint64_t MDIOSEN:1;
      uint64_t reservedSpace2:2;
      uint64_t FDCANEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1_APB1HENR;

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
      uint64_t reservedSpace1:6;
      uint64_t SPI1EN:1;
      uint64_t SPI4EN:1;
      uint64_t reservedSpace2:2;
      uint64_t TIM15EN:1;
      uint64_t TIM16EN:1;
      uint64_t TIM17EN:1;
      uint64_t reservedSpace3:1;
      uint64_t SPI5EN:1;
      uint64_t reservedSpace4:1;
      uint64_t SAI1EN:1;
      uint64_t SAI2EN:1;
      uint64_t SAI3EN:1;
      uint64_t reservedSpace5:3;
      uint64_t DFSDM1EN:1;
      uint64_t HRTIMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1_APB2ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SYSCFGEN:1;
      uint64_t reservedSpace1:1;
      uint64_t LPUART1EN:1;
      uint64_t reservedSpace2:1;
      uint64_t SPI6EN:1;
      uint64_t reservedSpace3:1;
      uint64_t I2C4EN:1;
      uint64_t reservedSpace4:1;
      uint64_t LPTIM2EN:1;
      uint64_t LPTIM3EN:1;
      uint64_t LPTIM4EN:1;
      uint64_t LPTIM5EN:1;
      uint64_t reservedSpace5:1;
      uint64_t COMP12EN:1;
      uint64_t VREFEN:1;
      uint64_t RTCAPBEN:1;
      uint64_t reservedSpace6:4;
      uint64_t SAI4EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1_APB4ENR;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDMALPEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DMA2DLPEN:1;
      uint64_t JPGDECLPEN:1;
      uint64_t reservedSpace1:2;
      uint64_t FLITFLPEN:1;
      uint64_t reservedSpace2:3;
      uint64_t FMCLPEN:1;
      uint64_t reservedSpace3:1;
      uint64_t QSPILPEN:1;
      uint64_t reservedSpace4:1;
      uint64_t SDMMC1LPEN:1;
      uint64_t reservedSpace5:11;
      uint64_t D1DTCM1LPEN:1;
      uint64_t DTCM2LPEN:1;
      uint64_t ITCMLPEN:1;
      uint64_t AXISRAMLPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1_AHB3LPENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1LPEN:1;
      uint64_t DMA2LPEN:1;
      uint64_t reservedSpace0:3;
      uint64_t ADC12LPEN:1;
      uint64_t reservedSpace1:9;
      uint64_t ETH1MACLPEN:1;
      uint64_t ETH1TXLPEN:1;
      uint64_t ETH1RXLPEN:1;
      uint64_t reservedSpace2:7;
      uint64_t USB1OTGLPEN:1;
      uint64_t USB1ULPILPEN:1;
      uint64_t USB2OTGLPEN:1;
      uint64_t USB2ULPILPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1_AHB1LPENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAMITFLPEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CRYPTLPEN:1;
      uint64_t HASHLPEN:1;
      uint64_t RNGLPEN:1;
      uint64_t reservedSpace1:2;
      uint64_t SDMMC2LPEN:1;
      uint64_t reservedSpace2:19;
      uint64_t SRAM1LPEN:1;
      uint64_t SRAM2LPEN:1;
      uint64_t SRAM3LPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1_AHB2LPENR;

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
      uint64_t GPIOJLPEN:1;
      uint64_t GPIOKLPEN:1;
      uint64_t reservedSpace0:8;
      uint64_t CRCLPEN:1;
      uint64_t reservedSpace1:1;
      uint64_t BDMALPEN:1;
      uint64_t reservedSpace2:2;
      uint64_t ADC3LPEN:1;
      uint64_t reservedSpace3:3;
      uint64_t BKPRAMLPEN:1;
      uint64_t SRAM4LPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1_AHB4LPENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t LTDCLPEN:1;
      uint64_t reservedSpace1:2;
      uint64_t WWDG1LPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1_APB3LPENR;

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
      uint64_t LPTIM1LPEN:1;
      uint64_t reservedSpace0:4;
      uint64_t SPI2LPEN:1;
      uint64_t SPI3LPEN:1;
      uint64_t SPDIFRXLPEN:1;
      uint64_t USART2LPEN:1;
      uint64_t USART3LPEN:1;
      uint64_t UART4LPEN:1;
      uint64_t UART5LPEN:1;
      uint64_t I2C1LPEN:1;
      uint64_t I2C2LPEN:1;
      uint64_t I2C3LPEN:1;
      uint64_t reservedSpace1:3;
      uint64_t HDMICECLPEN:1;
      uint64_t reservedSpace2:1;
      uint64_t DAC12LPEN:1;
      uint64_t USART7LPEN:1;
      uint64_t USART8LPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1_APB1LLPENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CRSLPEN:1;
      uint64_t SWPLPEN:1;
      uint64_t reservedSpace1:1;
      uint64_t OPAMPLPEN:1;
      uint64_t MDIOSLPEN:1;
      uint64_t reservedSpace2:2;
      uint64_t FDCANLPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1_APB1HLPENR;

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
      uint64_t reservedSpace1:6;
      uint64_t SPI1LPEN:1;
      uint64_t SPI4LPEN:1;
      uint64_t reservedSpace2:2;
      uint64_t TIM15LPEN:1;
      uint64_t TIM16LPEN:1;
      uint64_t TIM17LPEN:1;
      uint64_t reservedSpace3:1;
      uint64_t SPI5LPEN:1;
      uint64_t reservedSpace4:1;
      uint64_t SAI1LPEN:1;
      uint64_t SAI2LPEN:1;
      uint64_t SAI3LPEN:1;
      uint64_t reservedSpace5:3;
      uint64_t DFSDM1LPEN:1;
      uint64_t HRTIMLPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1_APB2LPENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SYSCFGLPEN:1;
      uint64_t reservedSpace1:1;
      uint64_t LPUART1LPEN:1;
      uint64_t reservedSpace2:1;
      uint64_t SPI6LPEN:1;
      uint64_t reservedSpace3:1;
      uint64_t I2C4LPEN:1;
      uint64_t reservedSpace4:1;
      uint64_t LPTIM2LPEN:1;
      uint64_t LPTIM3LPEN:1;
      uint64_t LPTIM4LPEN:1;
      uint64_t LPTIM5LPEN:1;
      uint64_t reservedSpace5:1;
      uint64_t COMP12LPEN:1;
      uint64_t VREFLPEN:1;
      uint64_t RTCAPBLPEN:1;
      uint64_t reservedSpace6:4;
      uint64_t SAI4LPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1_APB4LPENR;

};

#define RCC (*(volatile struct RCC_tag *) 0x58024400)

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

#define RNG (*(volatile struct RNG_tag *) 0x48021800)

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
  } __attribute__((aligned(4))) RTC_TR;

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
  } __attribute__((aligned(4))) RTC_DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WUCKSEL:3;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_CR;

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
      uint64_t TAMP3F:1;
      uint64_t RECALPF:1;
      uint64_t ITSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREDIV_S:15;
      uint64_t reservedSpace0:1;
      uint64_t PREDIV_A:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_PRER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_WUTR;

  uint8_t res0[4];

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
  } __attribute__((aligned(4))) RTC_ALRMAR;

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
  } __attribute__((aligned(4))) RTC_ALRMBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_WPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_SSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUBFS:15;
      uint64_t reservedSpace0:16;
      uint64_t ADD1S:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_SHIFTR;

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
  } __attribute__((aligned(4))) RTC_TSTR;

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
  } __attribute__((aligned(4))) RTC_TSDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_TSSSR;

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
  } __attribute__((aligned(4))) RTC_CALR;

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
      uint64_t TAMP3E:1;
      uint64_t TAMP3TRG:1;
      uint64_t TAMPTS:1;
      uint64_t TAMPFREQ:3;
      uint64_t TAMPFLT:2;
      uint64_t TAMPPRCH:2;
      uint64_t TAMPPUDIS:1;
      uint64_t TAMP1IE:1;
      uint64_t TAMP1NOERASE:1;
      uint64_t TAMP1MF:1;
      uint64_t TAMP2IE:1;
      uint64_t TAMP2NOERASE:1;
      uint64_t TAMP2MF:1;
      uint64_t TAMP3IE:1;
      uint64_t TAMP3NOERASE:1;
      uint64_t TAMP3MF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_TAMPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SS:15;
      uint64_t reservedSpace0:9;
      uint64_t MASKSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_ALRMASSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SS:15;
      uint64_t reservedSpace0:9;
      uint64_t MASKSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_ALRMBSSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC_ALARM_TYPE:1;
      uint64_t RTC_OUT_RMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_OR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP3R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP4R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP5R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP6R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP7R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP8R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP9R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP10R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP11R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP12R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP13R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP14R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP15R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP16R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP17R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP18R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP19R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP20R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP21R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP22R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP23R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP24R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP25R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP26R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP27R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP28R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP29R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP30R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_BKP31R;

};

#define RTC (*(volatile struct RTC_tag *) 0x58004000)

struct SAI1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCIN:2;
      uint64_t reservedSpace0:2;
      uint64_t SYNCOUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_GCR;

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
      uint64_t OUTDRIV:1;
      uint64_t reservedSpace1:2;
      uint64_t SAIXEN:1;
      uint64_t DMAEN:1;
      uint64_t reservedSpace2:1;
      uint64_t NOMCK:1;
      uint64_t MCKDIV:4;
      uint64_t reservedSpace3:2;
      uint64_t OSR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_ACR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:3;
      uint64_t FFLUSH:1;
      uint64_t TRIS:1;
      uint64_t MUTE:1;
      uint64_t MUTEVAL:1;
      uint64_t MUTECNT:6;
      uint64_t CPL:1;
      uint64_t COMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_ACR2;

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
  } __attribute__((aligned(4))) SAI_AFRCR;

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
  } __attribute__((aligned(4))) SAI_ASLOTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVRUDRIE:1;
      uint64_t MUTEDETIE:1;
      uint64_t WCKCFGIE:1;
      uint64_t FREQIE:1;
      uint64_t CNRDYIE:1;
      uint64_t AFSDETIE:1;
      uint64_t LFSDETIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_AIM;

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
  } __attribute__((aligned(4))) SAI_ASR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COVRUDR:1;
      uint64_t CMUTEDET:1;
      uint64_t CWCKCFG:1;
      uint64_t reservedSpace0:1;
      uint64_t CCNRDY:1;
      uint64_t CAFSDET:1;
      uint64_t CLFSDET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_ACLRFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_ADR;

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
      uint64_t OUTDRIV:1;
      uint64_t reservedSpace1:2;
      uint64_t SAIXEN:1;
      uint64_t DMAEN:1;
      uint64_t reservedSpace2:1;
      uint64_t NOMCK:1;
      uint64_t MCKDIV:4;
      uint64_t reservedSpace3:2;
      uint64_t OSR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_BCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:3;
      uint64_t FFLUSH:1;
      uint64_t TRIS:1;
      uint64_t MUTE:1;
      uint64_t MUTEVAL:1;
      uint64_t MUTECNT:6;
      uint64_t CPL:1;
      uint64_t COMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_BCR2;

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
  } __attribute__((aligned(4))) SAI_BFRCR;

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
  } __attribute__((aligned(4))) SAI_BSLOTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVRUDRIE:1;
      uint64_t MUTEDETIE:1;
      uint64_t WCKCFGIE:1;
      uint64_t FREQIE:1;
      uint64_t CNRDYIE:1;
      uint64_t AFSDETIE:1;
      uint64_t LFSDETIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_BIM;

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
  } __attribute__((aligned(4))) SAI_BSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COVRUDR:1;
      uint64_t CMUTEDET:1;
      uint64_t CWCKCFG:1;
      uint64_t reservedSpace0:1;
      uint64_t CCNRDY:1;
      uint64_t CAFSDET:1;
      uint64_t CLFSDET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_BCLRFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_BDR;

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
  } __attribute__((aligned(4))) SAI_PDMCR;

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
  } __attribute__((aligned(4))) SAI_PDMDLY;

};

#define SAI1 (*(volatile struct SAI1_tag *) 0x40015800)

struct SAI4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCIN:2;
      uint64_t reservedSpace0:2;
      uint64_t SYNCOUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_GCR;

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
      uint64_t OUTDRIV:1;
      uint64_t reservedSpace1:2;
      uint64_t SAIXEN:1;
      uint64_t DMAEN:1;
      uint64_t reservedSpace2:1;
      uint64_t NOMCK:1;
      uint64_t MCKDIV:4;
      uint64_t reservedSpace3:2;
      uint64_t OSR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_ACR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:3;
      uint64_t FFLUSH:1;
      uint64_t TRIS:1;
      uint64_t MUTE:1;
      uint64_t MUTEVAL:1;
      uint64_t MUTECNT:6;
      uint64_t CPL:1;
      uint64_t COMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_ACR2;

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
  } __attribute__((aligned(4))) SAI_AFRCR;

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
  } __attribute__((aligned(4))) SAI_ASLOTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVRUDRIE:1;
      uint64_t MUTEDETIE:1;
      uint64_t WCKCFGIE:1;
      uint64_t FREQIE:1;
      uint64_t CNRDYIE:1;
      uint64_t AFSDETIE:1;
      uint64_t LFSDETIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_AIM;

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
  } __attribute__((aligned(4))) SAI_ASR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COVRUDR:1;
      uint64_t CMUTEDET:1;
      uint64_t CWCKCFG:1;
      uint64_t reservedSpace0:1;
      uint64_t CCNRDY:1;
      uint64_t CAFSDET:1;
      uint64_t CLFSDET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_ACLRFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_ADR;

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
      uint64_t OUTDRIV:1;
      uint64_t reservedSpace1:2;
      uint64_t SAIXEN:1;
      uint64_t DMAEN:1;
      uint64_t reservedSpace2:1;
      uint64_t NOMCK:1;
      uint64_t MCKDIV:4;
      uint64_t reservedSpace3:2;
      uint64_t OSR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_BCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:3;
      uint64_t FFLUSH:1;
      uint64_t TRIS:1;
      uint64_t MUTE:1;
      uint64_t MUTEVAL:1;
      uint64_t MUTECNT:6;
      uint64_t CPL:1;
      uint64_t COMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_BCR2;

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
  } __attribute__((aligned(4))) SAI_BFRCR;

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
  } __attribute__((aligned(4))) SAI_BSLOTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVRUDRIE:1;
      uint64_t MUTEDETIE:1;
      uint64_t WCKCFGIE:1;
      uint64_t FREQIE:1;
      uint64_t CNRDYIE:1;
      uint64_t AFSDETIE:1;
      uint64_t LFSDETIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_BIM;

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
  } __attribute__((aligned(4))) SAI_BSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COVRUDR:1;
      uint64_t CMUTEDET:1;
      uint64_t CWCKCFG:1;
      uint64_t reservedSpace0:1;
      uint64_t CCNRDY:1;
      uint64_t CAFSDET:1;
      uint64_t CLFSDET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_BCLRFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_BDR;

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
  } __attribute__((aligned(4))) SAI_PDMCR;

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
  } __attribute__((aligned(4))) SAI_PDMDLY;

};

#define SAI4 (*(volatile struct SAI4_tag *) 0x58005400)

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
      uint64_t reservedSpace2:6;
      uint64_t DC:1;
      uint64_t IC:1;
      uint64_t BP:1;
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

};

#define SCB (*(volatile struct SCB_tag *) 0xe000ed00)

struct SCB_ACTRL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DISFOLD:1;
      uint64_t reservedSpace1:7;
      uint64_t FPEXCODIS:1;
      uint64_t DISRAMODE:1;
      uint64_t DISITMATBFLUSH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACTRL;

};

#define SCB_ACTRL (*(volatile struct SCB_ACTRL_tag *) 0xe000e008)

struct SDMMC1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRCTRL:2;
      uint64_t VSWITCH:1;
      uint64_t VSWITCHEN:1;
      uint64_t DIRPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_POWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKDIV:10;
      uint64_t reservedSpace0:2;
      uint64_t PWRSAV:1;
      uint64_t reservedSpace1:1;
      uint64_t WIDBUS:2;
      uint64_t NEGEDGE:1;
      uint64_t HWFC_EN:1;
      uint64_t DDR:1;
      uint64_t BUSSPEED:1;
      uint64_t SELCLKRX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_CLKCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDARG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_ARGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDINDEX:6;
      uint64_t CMDTRANS:1;
      uint64_t CMDSTOP:1;
      uint64_t WAITRESP:2;
      uint64_t WAITINT:1;
      uint64_t WAITPEND:1;
      uint64_t CPSMEN:1;
      uint64_t DTHOLD:1;
      uint64_t BOOTMODE:1;
      uint64_t BOOTEN:1;
      uint64_t CMDSUSPEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_CMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESPCMD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_RESPCMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CARDSTATUS1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_RESP1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CARDSTATUS2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_RESP2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CARDSTATUS3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_RESP3R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CARDSTATUS4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_RESP4R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATATIME:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_DTIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATALENGTH:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_DLENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTEN:1;
      uint64_t DTDIR:1;
      uint64_t DTMODE:2;
      uint64_t DBLOCKSIZE:4;
      uint64_t RWSTART:1;
      uint64_t RWSTOP:1;
      uint64_t RWMOD:1;
      uint64_t SDIOEN:1;
      uint64_t BOOTACKEN:1;
      uint64_t FIFORST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_DCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATACOUNT:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_DCNTR;

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
      uint64_t DHOLD:1;
      uint64_t DBCKEND:1;
      uint64_t DABORT:1;
      uint64_t DPSMACT:1;
      uint64_t CPSMACT:1;
      uint64_t TXFIFOHE:1;
      uint64_t RXFIFOHF:1;
      uint64_t TXFIFOF:1;
      uint64_t RXFIFOF:1;
      uint64_t TXFIFOE:1;
      uint64_t RXFIFOE:1;
      uint64_t BUSYD0:1;
      uint64_t BUSYD0END:1;
      uint64_t SDIOIT:1;
      uint64_t ACKFAIL:1;
      uint64_t ACKTIMEOUT:1;
      uint64_t VSWEND:1;
      uint64_t CKSTOP:1;
      uint64_t IDMATE:1;
      uint64_t IDMABTC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_STAR;

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
      uint64_t DHOLDC:1;
      uint64_t DBCKENDC:1;
      uint64_t DABORTC:1;
      uint64_t reservedSpace0:9;
      uint64_t BUSYD0ENDC:1;
      uint64_t SDIOITC:1;
      uint64_t ACKFAILC:1;
      uint64_t ACKTIMEOUTC:1;
      uint64_t VSWENDC:1;
      uint64_t CKSTOPC:1;
      uint64_t IDMATEC:1;
      uint64_t IDMABTCC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_ICR;

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
      uint64_t DHOLDIE:1;
      uint64_t DBCKENDIE:1;
      uint64_t DABORTIE:1;
      uint64_t reservedSpace0:2;
      uint64_t TXFIFOHEIE:1;
      uint64_t RXFIFOHFIE:1;
      uint64_t reservedSpace1:1;
      uint64_t RXFIFOFIE:1;
      uint64_t TXFIFOEIE:1;
      uint64_t reservedSpace2:2;
      uint64_t BUSYD0ENDIE:1;
      uint64_t SDIOITIE:1;
      uint64_t ACKFAILIE:1;
      uint64_t ACKTIMEOUTIE:1;
      uint64_t VSWENDIE:1;
      uint64_t CKSTOPIE:1;
      uint64_t reservedSpace3:1;
      uint64_t IDMABTCIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_MASKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKTIME:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_ACKTIMER;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDMAEN:1;
      uint64_t IDMABMODE:1;
      uint64_t IDMABACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_IDMACTRLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t IDMABNDT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_IDMABSIZER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDMABASE0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_IDMABASE0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDMABASE1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_IDMABASE1R;

  uint8_t res1[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFODATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_FIFOR;

};

#define SDMMC1 (*(volatile struct SDMMC1_tag *) 0x52007000)

struct SDMMC2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRCTRL:2;
      uint64_t VSWITCH:1;
      uint64_t VSWITCHEN:1;
      uint64_t DIRPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_POWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKDIV:10;
      uint64_t reservedSpace0:2;
      uint64_t PWRSAV:1;
      uint64_t reservedSpace1:1;
      uint64_t WIDBUS:2;
      uint64_t NEGEDGE:1;
      uint64_t HWFC_EN:1;
      uint64_t DDR:1;
      uint64_t BUSSPEED:1;
      uint64_t SELCLKRX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_CLKCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDARG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_ARGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDINDEX:6;
      uint64_t CMDTRANS:1;
      uint64_t CMDSTOP:1;
      uint64_t WAITRESP:2;
      uint64_t WAITINT:1;
      uint64_t WAITPEND:1;
      uint64_t CPSMEN:1;
      uint64_t DTHOLD:1;
      uint64_t BOOTMODE:1;
      uint64_t BOOTEN:1;
      uint64_t CMDSUSPEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_CMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESPCMD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_RESPCMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CARDSTATUS1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_RESP1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CARDSTATUS2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_RESP2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CARDSTATUS3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_RESP3R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CARDSTATUS4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_RESP4R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATATIME:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_DTIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATALENGTH:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_DLENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTEN:1;
      uint64_t DTDIR:1;
      uint64_t DTMODE:2;
      uint64_t DBLOCKSIZE:4;
      uint64_t RWSTART:1;
      uint64_t RWSTOP:1;
      uint64_t RWMOD:1;
      uint64_t SDIOEN:1;
      uint64_t BOOTACKEN:1;
      uint64_t FIFORST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_DCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATACOUNT:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_DCNTR;

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
      uint64_t DHOLD:1;
      uint64_t DBCKEND:1;
      uint64_t DABORT:1;
      uint64_t DPSMACT:1;
      uint64_t CPSMACT:1;
      uint64_t TXFIFOHE:1;
      uint64_t RXFIFOHF:1;
      uint64_t TXFIFOF:1;
      uint64_t RXFIFOF:1;
      uint64_t TXFIFOE:1;
      uint64_t RXFIFOE:1;
      uint64_t BUSYD0:1;
      uint64_t BUSYD0END:1;
      uint64_t SDIOIT:1;
      uint64_t ACKFAIL:1;
      uint64_t ACKTIMEOUT:1;
      uint64_t VSWEND:1;
      uint64_t CKSTOP:1;
      uint64_t IDMATE:1;
      uint64_t IDMABTC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_STAR;

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
      uint64_t DHOLDC:1;
      uint64_t DBCKENDC:1;
      uint64_t DABORTC:1;
      uint64_t reservedSpace0:9;
      uint64_t BUSYD0ENDC:1;
      uint64_t SDIOITC:1;
      uint64_t ACKFAILC:1;
      uint64_t ACKTIMEOUTC:1;
      uint64_t VSWENDC:1;
      uint64_t CKSTOPC:1;
      uint64_t IDMATEC:1;
      uint64_t IDMABTCC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_ICR;

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
      uint64_t DHOLDIE:1;
      uint64_t DBCKENDIE:1;
      uint64_t DABORTIE:1;
      uint64_t reservedSpace0:2;
      uint64_t TXFIFOHEIE:1;
      uint64_t RXFIFOHFIE:1;
      uint64_t reservedSpace1:1;
      uint64_t RXFIFOFIE:1;
      uint64_t TXFIFOEIE:1;
      uint64_t reservedSpace2:2;
      uint64_t BUSYD0ENDIE:1;
      uint64_t SDIOITIE:1;
      uint64_t ACKFAILIE:1;
      uint64_t ACKTIMEOUTIE:1;
      uint64_t VSWENDIE:1;
      uint64_t CKSTOPIE:1;
      uint64_t reservedSpace3:1;
      uint64_t IDMABTCIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_MASKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKTIME:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_ACKTIMER;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDMAEN:1;
      uint64_t IDMABMODE:1;
      uint64_t IDMABACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_IDMACTRLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t IDMABNDT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_IDMABSIZER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDMABASE0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_IDMABASE0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDMABASE1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_IDMABASE1R;

  uint8_t res1[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFODATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_FIFOR;

};

#define SDMMC2 (*(volatile struct SDMMC2_tag *) 0x48022400)

struct SPDIFRX_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPDIFRXEN:2;
      uint64_t RXDMAEN:1;
      uint64_t RXSTEO:1;
      uint64_t DRFMT:2;
      uint64_t PMSK:1;
      uint64_t VMSK:1;
      uint64_t CUMSK:1;
      uint64_t PTMSK:1;
      uint64_t CBDMAEN:1;
      uint64_t CHSEL:1;
      uint64_t NBTR:2;
      uint64_t WFA:1;
      uint64_t reservedSpace0:1;
      uint64_t INSEL:3;
      uint64_t reservedSpace1:1;
      uint64_t CKSEN:1;
      uint64_t CKSBKPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNEIE:1;
      uint64_t CSRNEIE:1;
      uint64_t PERRIE:1;
      uint64_t OVRIE:1;
      uint64_t SBLKIE:1;
      uint64_t SYNCDIE:1;
      uint64_t IFEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNE:1;
      uint64_t CSRNE:1;
      uint64_t PERR:1;
      uint64_t OVR:1;
      uint64_t SBD:1;
      uint64_t SYNCD:1;
      uint64_t FERR:1;
      uint64_t SERR:1;
      uint64_t TERR:1;
      uint64_t reservedSpace0:7;
      uint64_t WIDTH5:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PERRCF:1;
      uint64_t OVRCF:1;
      uint64_t SBDCF:1;
      uint64_t SYNCDCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:24;
      uint64_t PE:1;
      uint64_t V:1;
      uint64_t U:1;
      uint64_t C:1;
      uint64_t PT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMT0_DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USR:16;
      uint64_t CS:8;
      uint64_t SOB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THI:13;
      uint64_t reservedSpace0:3;
      uint64_t TLO:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR;

};

#define SPDIFRX (*(volatile struct SPDIFRX_tag *) 0x40004000)

struct SPI1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPE:1;
      uint64_t reservedSpace0:7;
      uint64_t MASRX:1;
      uint64_t CSTART:1;
      uint64_t CSUSP:1;
      uint64_t HDDIR:1;
      uint64_t SSI:1;
      uint64_t CRC33_17:1;
      uint64_t RCRCI:1;
      uint64_t TCRCI:1;
      uint64_t IOLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSIZE:16;
      uint64_t TSER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSIZE:5;
      uint64_t FTHVL:4;
      uint64_t UDRCFG:2;
      uint64_t UDRDET:2;
      uint64_t reservedSpace0:1;
      uint64_t RXDMAEN:1;
      uint64_t TXDMAEN:1;
      uint64_t CRCSIZE:5;
      uint64_t reservedSpace1:1;
      uint64_t CRCEN:1;
      uint64_t reservedSpace2:5;
      uint64_t MBR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSSI:4;
      uint64_t MIDI:4;
      uint64_t reservedSpace0:7;
      uint64_t IOSWP:1;
      uint64_t reservedSpace1:1;
      uint64_t COMM:2;
      uint64_t SP:3;
      uint64_t MASTER:1;
      uint64_t LSBFRST:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t SSM:1;
      uint64_t reservedSpace2:1;
      uint64_t SSIOP:1;
      uint64_t SSOE:1;
      uint64_t SSOM:1;
      uint64_t AFCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPIE:1;
      uint64_t TXPIE:1;
      uint64_t DPXPIE:1;
      uint64_t EOTIE:1;
      uint64_t TXTFIE:1;
      uint64_t UDRIE:1;
      uint64_t OVRIE:1;
      uint64_t CRCEIE:1;
      uint64_t TIFREIE:1;
      uint64_t MODFIE:1;
      uint64_t TSERFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXP:1;
      uint64_t TXP:1;
      uint64_t DXP:1;
      uint64_t EOT:1;
      uint64_t TXTF:1;
      uint64_t UDR:1;
      uint64_t OVR:1;
      uint64_t CRCE:1;
      uint64_t TIFRE:1;
      uint64_t MODF:1;
      uint64_t TSERF:1;
      uint64_t SUSP:1;
      uint64_t TXC:1;
      uint64_t RXPLVL:2;
      uint64_t RXWNE:1;
      uint64_t CTSIZE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t EOTC:1;
      uint64_t TXTFC:1;
      uint64_t UDRC:1;
      uint64_t OVRC:1;
      uint64_t CRCEC:1;
      uint64_t TIFREC:1;
      uint64_t MODFC:1;
      uint64_t TSERFC:1;
      uint64_t SUSPC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDR;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRCPOLY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCPOLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDRDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDRDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SMOD:1;
      uint64_t I2SCFG:3;
      uint64_t I2SSTD:2;
      uint64_t reservedSpace0:1;
      uint64_t PCMSYNC:1;
      uint64_t DATLEN:2;
      uint64_t CHLEN:1;
      uint64_t CKPOL:1;
      uint64_t FIXCH:1;
      uint64_t WSINV:1;
      uint64_t DATFMT:1;
      uint64_t reservedSpace1:1;
      uint64_t I2SDIV:8;
      uint64_t ODD:1;
      uint64_t MCKOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCFGR;

};

#define SPI1 (*(volatile struct SPI1_tag *) 0x40013000)

struct SPI2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPE:1;
      uint64_t reservedSpace0:7;
      uint64_t MASRX:1;
      uint64_t CSTART:1;
      uint64_t CSUSP:1;
      uint64_t HDDIR:1;
      uint64_t SSI:1;
      uint64_t CRC33_17:1;
      uint64_t RCRCI:1;
      uint64_t TCRCI:1;
      uint64_t IOLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSIZE:16;
      uint64_t TSER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSIZE:5;
      uint64_t FTHVL:4;
      uint64_t UDRCFG:2;
      uint64_t UDRDET:2;
      uint64_t reservedSpace0:1;
      uint64_t RXDMAEN:1;
      uint64_t TXDMAEN:1;
      uint64_t CRCSIZE:5;
      uint64_t reservedSpace1:1;
      uint64_t CRCEN:1;
      uint64_t reservedSpace2:5;
      uint64_t MBR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSSI:4;
      uint64_t MIDI:4;
      uint64_t reservedSpace0:7;
      uint64_t IOSWP:1;
      uint64_t reservedSpace1:1;
      uint64_t COMM:2;
      uint64_t SP:3;
      uint64_t MASTER:1;
      uint64_t LSBFRST:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t SSM:1;
      uint64_t reservedSpace2:1;
      uint64_t SSIOP:1;
      uint64_t SSOE:1;
      uint64_t SSOM:1;
      uint64_t AFCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPIE:1;
      uint64_t TXPIE:1;
      uint64_t DPXPIE:1;
      uint64_t EOTIE:1;
      uint64_t TXTFIE:1;
      uint64_t UDRIE:1;
      uint64_t OVRIE:1;
      uint64_t CRCEIE:1;
      uint64_t TIFREIE:1;
      uint64_t MODFIE:1;
      uint64_t TSERFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXP:1;
      uint64_t TXP:1;
      uint64_t DXP:1;
      uint64_t EOT:1;
      uint64_t TXTF:1;
      uint64_t UDR:1;
      uint64_t OVR:1;
      uint64_t CRCE:1;
      uint64_t TIFRE:1;
      uint64_t MODF:1;
      uint64_t TSERF:1;
      uint64_t SUSP:1;
      uint64_t TXC:1;
      uint64_t RXPLVL:2;
      uint64_t RXWNE:1;
      uint64_t CTSIZE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t EOTC:1;
      uint64_t TXTFC:1;
      uint64_t UDRC:1;
      uint64_t OVRC:1;
      uint64_t CRCEC:1;
      uint64_t TIFREC:1;
      uint64_t MODFC:1;
      uint64_t TSERFC:1;
      uint64_t SUSPC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDR;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRCPOLY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCPOLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDRDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDRDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SMOD:1;
      uint64_t I2SCFG:3;
      uint64_t I2SSTD:2;
      uint64_t reservedSpace0:1;
      uint64_t PCMSYNC:1;
      uint64_t DATLEN:2;
      uint64_t CHLEN:1;
      uint64_t CKPOL:1;
      uint64_t FIXCH:1;
      uint64_t WSINV:1;
      uint64_t DATFMT:1;
      uint64_t reservedSpace1:1;
      uint64_t I2SDIV:8;
      uint64_t ODD:1;
      uint64_t MCKOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCFGR;

};

#define SPI2 (*(volatile struct SPI2_tag *) 0x40003800)

struct SPI3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPE:1;
      uint64_t reservedSpace0:7;
      uint64_t MASRX:1;
      uint64_t CSTART:1;
      uint64_t CSUSP:1;
      uint64_t HDDIR:1;
      uint64_t SSI:1;
      uint64_t CRC33_17:1;
      uint64_t RCRCI:1;
      uint64_t TCRCI:1;
      uint64_t IOLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSIZE:16;
      uint64_t TSER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSIZE:5;
      uint64_t FTHVL:4;
      uint64_t UDRCFG:2;
      uint64_t UDRDET:2;
      uint64_t reservedSpace0:1;
      uint64_t RXDMAEN:1;
      uint64_t TXDMAEN:1;
      uint64_t CRCSIZE:5;
      uint64_t reservedSpace1:1;
      uint64_t CRCEN:1;
      uint64_t reservedSpace2:5;
      uint64_t MBR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSSI:4;
      uint64_t MIDI:4;
      uint64_t reservedSpace0:7;
      uint64_t IOSWP:1;
      uint64_t reservedSpace1:1;
      uint64_t COMM:2;
      uint64_t SP:3;
      uint64_t MASTER:1;
      uint64_t LSBFRST:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t SSM:1;
      uint64_t reservedSpace2:1;
      uint64_t SSIOP:1;
      uint64_t SSOE:1;
      uint64_t SSOM:1;
      uint64_t AFCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPIE:1;
      uint64_t TXPIE:1;
      uint64_t DPXPIE:1;
      uint64_t EOTIE:1;
      uint64_t TXTFIE:1;
      uint64_t UDRIE:1;
      uint64_t OVRIE:1;
      uint64_t CRCEIE:1;
      uint64_t TIFREIE:1;
      uint64_t MODFIE:1;
      uint64_t TSERFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXP:1;
      uint64_t TXP:1;
      uint64_t DXP:1;
      uint64_t EOT:1;
      uint64_t TXTF:1;
      uint64_t UDR:1;
      uint64_t OVR:1;
      uint64_t CRCE:1;
      uint64_t TIFRE:1;
      uint64_t MODF:1;
      uint64_t TSERF:1;
      uint64_t SUSP:1;
      uint64_t TXC:1;
      uint64_t RXPLVL:2;
      uint64_t RXWNE:1;
      uint64_t CTSIZE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t EOTC:1;
      uint64_t TXTFC:1;
      uint64_t UDRC:1;
      uint64_t OVRC:1;
      uint64_t CRCEC:1;
      uint64_t TIFREC:1;
      uint64_t MODFC:1;
      uint64_t TSERFC:1;
      uint64_t SUSPC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDR;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRCPOLY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCPOLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDRDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDRDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SMOD:1;
      uint64_t I2SCFG:3;
      uint64_t I2SSTD:2;
      uint64_t reservedSpace0:1;
      uint64_t PCMSYNC:1;
      uint64_t DATLEN:2;
      uint64_t CHLEN:1;
      uint64_t CKPOL:1;
      uint64_t FIXCH:1;
      uint64_t WSINV:1;
      uint64_t DATFMT:1;
      uint64_t reservedSpace1:1;
      uint64_t I2SDIV:8;
      uint64_t ODD:1;
      uint64_t MCKOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCFGR;

};

#define SPI3 (*(volatile struct SPI3_tag *) 0x40003c00)

struct SPI4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPE:1;
      uint64_t reservedSpace0:7;
      uint64_t MASRX:1;
      uint64_t CSTART:1;
      uint64_t CSUSP:1;
      uint64_t HDDIR:1;
      uint64_t SSI:1;
      uint64_t CRC33_17:1;
      uint64_t RCRCI:1;
      uint64_t TCRCI:1;
      uint64_t IOLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSIZE:16;
      uint64_t TSER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSIZE:5;
      uint64_t FTHVL:4;
      uint64_t UDRCFG:2;
      uint64_t UDRDET:2;
      uint64_t reservedSpace0:1;
      uint64_t RXDMAEN:1;
      uint64_t TXDMAEN:1;
      uint64_t CRCSIZE:5;
      uint64_t reservedSpace1:1;
      uint64_t CRCEN:1;
      uint64_t reservedSpace2:5;
      uint64_t MBR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSSI:4;
      uint64_t MIDI:4;
      uint64_t reservedSpace0:7;
      uint64_t IOSWP:1;
      uint64_t reservedSpace1:1;
      uint64_t COMM:2;
      uint64_t SP:3;
      uint64_t MASTER:1;
      uint64_t LSBFRST:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t SSM:1;
      uint64_t reservedSpace2:1;
      uint64_t SSIOP:1;
      uint64_t SSOE:1;
      uint64_t SSOM:1;
      uint64_t AFCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPIE:1;
      uint64_t TXPIE:1;
      uint64_t DPXPIE:1;
      uint64_t EOTIE:1;
      uint64_t TXTFIE:1;
      uint64_t UDRIE:1;
      uint64_t OVRIE:1;
      uint64_t CRCEIE:1;
      uint64_t TIFREIE:1;
      uint64_t MODFIE:1;
      uint64_t TSERFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXP:1;
      uint64_t TXP:1;
      uint64_t DXP:1;
      uint64_t EOT:1;
      uint64_t TXTF:1;
      uint64_t UDR:1;
      uint64_t OVR:1;
      uint64_t CRCE:1;
      uint64_t TIFRE:1;
      uint64_t MODF:1;
      uint64_t TSERF:1;
      uint64_t SUSP:1;
      uint64_t TXC:1;
      uint64_t RXPLVL:2;
      uint64_t RXWNE:1;
      uint64_t CTSIZE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t EOTC:1;
      uint64_t TXTFC:1;
      uint64_t UDRC:1;
      uint64_t OVRC:1;
      uint64_t CRCEC:1;
      uint64_t TIFREC:1;
      uint64_t MODFC:1;
      uint64_t TSERFC:1;
      uint64_t SUSPC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDR;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRCPOLY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCPOLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDRDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDRDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SMOD:1;
      uint64_t I2SCFG:3;
      uint64_t I2SSTD:2;
      uint64_t reservedSpace0:1;
      uint64_t PCMSYNC:1;
      uint64_t DATLEN:2;
      uint64_t CHLEN:1;
      uint64_t CKPOL:1;
      uint64_t FIXCH:1;
      uint64_t WSINV:1;
      uint64_t DATFMT:1;
      uint64_t reservedSpace1:1;
      uint64_t I2SDIV:8;
      uint64_t ODD:1;
      uint64_t MCKOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCFGR;

};

#define SPI4 (*(volatile struct SPI4_tag *) 0x40013400)

struct SPI5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPE:1;
      uint64_t reservedSpace0:7;
      uint64_t MASRX:1;
      uint64_t CSTART:1;
      uint64_t CSUSP:1;
      uint64_t HDDIR:1;
      uint64_t SSI:1;
      uint64_t CRC33_17:1;
      uint64_t RCRCI:1;
      uint64_t TCRCI:1;
      uint64_t IOLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSIZE:16;
      uint64_t TSER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSIZE:5;
      uint64_t FTHVL:4;
      uint64_t UDRCFG:2;
      uint64_t UDRDET:2;
      uint64_t reservedSpace0:1;
      uint64_t RXDMAEN:1;
      uint64_t TXDMAEN:1;
      uint64_t CRCSIZE:5;
      uint64_t reservedSpace1:1;
      uint64_t CRCEN:1;
      uint64_t reservedSpace2:5;
      uint64_t MBR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSSI:4;
      uint64_t MIDI:4;
      uint64_t reservedSpace0:7;
      uint64_t IOSWP:1;
      uint64_t reservedSpace1:1;
      uint64_t COMM:2;
      uint64_t SP:3;
      uint64_t MASTER:1;
      uint64_t LSBFRST:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t SSM:1;
      uint64_t reservedSpace2:1;
      uint64_t SSIOP:1;
      uint64_t SSOE:1;
      uint64_t SSOM:1;
      uint64_t AFCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPIE:1;
      uint64_t TXPIE:1;
      uint64_t DPXPIE:1;
      uint64_t EOTIE:1;
      uint64_t TXTFIE:1;
      uint64_t UDRIE:1;
      uint64_t OVRIE:1;
      uint64_t CRCEIE:1;
      uint64_t TIFREIE:1;
      uint64_t MODFIE:1;
      uint64_t TSERFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXP:1;
      uint64_t TXP:1;
      uint64_t DXP:1;
      uint64_t EOT:1;
      uint64_t TXTF:1;
      uint64_t UDR:1;
      uint64_t OVR:1;
      uint64_t CRCE:1;
      uint64_t TIFRE:1;
      uint64_t MODF:1;
      uint64_t TSERF:1;
      uint64_t SUSP:1;
      uint64_t TXC:1;
      uint64_t RXPLVL:2;
      uint64_t RXWNE:1;
      uint64_t CTSIZE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t EOTC:1;
      uint64_t TXTFC:1;
      uint64_t UDRC:1;
      uint64_t OVRC:1;
      uint64_t CRCEC:1;
      uint64_t TIFREC:1;
      uint64_t MODFC:1;
      uint64_t TSERFC:1;
      uint64_t SUSPC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDR;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRCPOLY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCPOLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDRDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDRDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SMOD:1;
      uint64_t I2SCFG:3;
      uint64_t I2SSTD:2;
      uint64_t reservedSpace0:1;
      uint64_t PCMSYNC:1;
      uint64_t DATLEN:2;
      uint64_t CHLEN:1;
      uint64_t CKPOL:1;
      uint64_t FIXCH:1;
      uint64_t WSINV:1;
      uint64_t DATFMT:1;
      uint64_t reservedSpace1:1;
      uint64_t I2SDIV:8;
      uint64_t ODD:1;
      uint64_t MCKOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCFGR;

};

#define SPI5 (*(volatile struct SPI5_tag *) 0x40015000)

struct SPI6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPE:1;
      uint64_t reservedSpace0:7;
      uint64_t MASRX:1;
      uint64_t CSTART:1;
      uint64_t CSUSP:1;
      uint64_t HDDIR:1;
      uint64_t SSI:1;
      uint64_t CRC33_17:1;
      uint64_t RCRCI:1;
      uint64_t TCRCI:1;
      uint64_t IOLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSIZE:16;
      uint64_t TSER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSIZE:5;
      uint64_t FTHVL:4;
      uint64_t UDRCFG:2;
      uint64_t UDRDET:2;
      uint64_t reservedSpace0:1;
      uint64_t RXDMAEN:1;
      uint64_t TXDMAEN:1;
      uint64_t CRCSIZE:5;
      uint64_t reservedSpace1:1;
      uint64_t CRCEN:1;
      uint64_t reservedSpace2:5;
      uint64_t MBR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSSI:4;
      uint64_t MIDI:4;
      uint64_t reservedSpace0:7;
      uint64_t IOSWP:1;
      uint64_t reservedSpace1:1;
      uint64_t COMM:2;
      uint64_t SP:3;
      uint64_t MASTER:1;
      uint64_t LSBFRST:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t SSM:1;
      uint64_t reservedSpace2:1;
      uint64_t SSIOP:1;
      uint64_t SSOE:1;
      uint64_t SSOM:1;
      uint64_t AFCNTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPIE:1;
      uint64_t TXPIE:1;
      uint64_t DPXPIE:1;
      uint64_t EOTIE:1;
      uint64_t TXTFIE:1;
      uint64_t UDRIE:1;
      uint64_t OVRIE:1;
      uint64_t CRCEIE:1;
      uint64_t TIFREIE:1;
      uint64_t MODFIE:1;
      uint64_t TSERFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXP:1;
      uint64_t TXP:1;
      uint64_t DXP:1;
      uint64_t EOT:1;
      uint64_t TXTF:1;
      uint64_t UDR:1;
      uint64_t OVR:1;
      uint64_t CRCE:1;
      uint64_t TIFRE:1;
      uint64_t MODF:1;
      uint64_t TSERF:1;
      uint64_t SUSP:1;
      uint64_t TXC:1;
      uint64_t RXPLVL:2;
      uint64_t RXWNE:1;
      uint64_t CTSIZE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t EOTC:1;
      uint64_t TXTFC:1;
      uint64_t UDRC:1;
      uint64_t OVRC:1;
      uint64_t CRCEC:1;
      uint64_t TIFREC:1;
      uint64_t MODFC:1;
      uint64_t TSERFC:1;
      uint64_t SUSPC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDR;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRCPOLY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCPOLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDRDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDRDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SMOD:1;
      uint64_t I2SCFG:3;
      uint64_t I2SSTD:2;
      uint64_t reservedSpace0:1;
      uint64_t PCMSYNC:1;
      uint64_t DATLEN:2;
      uint64_t CHLEN:1;
      uint64_t CKPOL:1;
      uint64_t FIXCH:1;
      uint64_t WSINV:1;
      uint64_t DATFMT:1;
      uint64_t reservedSpace1:1;
      uint64_t I2SDIV:8;
      uint64_t ODD:1;
      uint64_t MCKOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCFGR;

};

#define SPI6 (*(volatile struct SPI6_tag *) 0x58001400)

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
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURRENT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVR;

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

struct SWPMI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDMA:1;
      uint64_t TXDMA:1;
      uint64_t RXMODE:1;
      uint64_t TXMODE:1;
      uint64_t LPBK:1;
      uint64_t SWPACT:1;
      uint64_t reservedSpace0:4;
      uint64_t DEACT:1;
      uint64_t SWPTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXBFF:1;
      uint64_t TXBEF:1;
      uint64_t RXBERF:1;
      uint64_t RXOVRF:1;
      uint64_t TXUNRF:1;
      uint64_t RXNE:1;
      uint64_t TXE:1;
      uint64_t TCF:1;
      uint64_t SRF:1;
      uint64_t SUSP:1;
      uint64_t DEACTF:1;
      uint64_t RDYF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRXBFF:1;
      uint64_t CTXBEF:1;
      uint64_t CRXBERF:1;
      uint64_t CRXOVRF:1;
      uint64_t CTXUNRF:1;
      uint64_t reservedSpace0:2;
      uint64_t CTCF:1;
      uint64_t CSRF:1;
      uint64_t reservedSpace1:2;
      uint64_t CRDYF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXBFIE:1;
      uint64_t TXBEIE:1;
      uint64_t RXBERIE:1;
      uint64_t RXOVRIE:1;
      uint64_t TXUNRIE:1;
      uint64_t RIE:1;
      uint64_t TIE:1;
      uint64_t TCIE:1;
      uint64_t SRIE:1;
      uint64_t reservedSpace0:2;
      uint64_t RDYIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWP_TBYP:1;
      uint64_t SWP_CLASS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OR;

};

#define SWPMI (*(volatile struct SWPMI_tag *) 0x40008800)

struct SYSCFG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C1FMP:1;
      uint64_t I2C2FMP:1;
      uint64_t I2C3FMP:1;
      uint64_t I2C4FMP:1;
      uint64_t PB6FMP:1;
      uint64_t PB7FMP:1;
      uint64_t PB8FMP:1;
      uint64_t PB9FMP:1;
      uint64_t BOOSTE:1;
      uint64_t reservedSpace0:12;
      uint64_t EPIS:3;
      uint64_t PA0SO:1;
      uint64_t PA1SO:1;
      uint64_t PC2SO:1;
      uint64_t PC3SO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMCR;

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
      uint64_t EN:1;
      uint64_t CS:1;
      uint64_t reservedSpace0:6;
      uint64_t READY:1;
      uint64_t reservedSpace1:7;
      uint64_t HSLV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NCV:4;
      uint64_t PCV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NCC:4;
      uint64_t PCC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCR;

  uint8_t res1[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PKG:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PKGR;

  uint8_t res2[472];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKS:1;
      uint64_t reservedSpace0:15;
      uint64_t RDP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UR0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BORH:2;
      uint64_t reservedSpace0:14;
      uint64_t BOOT_ADD0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t BOOT_ADD1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MEPAD_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MESAD_1:1;
      uint64_t reservedSpace0:15;
      uint64_t WRPN_1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA_BEG_1:12;
      uint64_t reservedSpace0:4;
      uint64_t PA_END_1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA_BEG_1:12;
      uint64_t reservedSpace0:4;
      uint64_t SA_END_1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEPAD_2:1;
      uint64_t reservedSpace0:15;
      uint64_t MESAD_2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRPN_2:8;
      uint64_t reservedSpace0:8;
      uint64_t PA_BEG_2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA_END_2:12;
      uint64_t reservedSpace0:4;
      uint64_t SA_BEG_2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA_END_2:12;
      uint64_t reservedSpace0:4;
      uint64_t IWDG1M:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SECURE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDRS:2;
      uint64_t reservedSpace0:14;
      uint64_t D1SBRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D1STPRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t FZIWDGSTB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FZIWDGSTP:1;
      uint64_t reservedSpace0:15;
      uint64_t PKP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO_HSLV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UR17;

};

#define SYSCFG (*(volatile struct SYSCFG_tag *) 0x58000404)

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
      uint64_t BRR_0_3:4;
      uint64_t BRR_4_15:12;
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
      uint64_t TCBGTC:1;
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

#define USART1 (*(volatile struct USART1_tag *) 0x40011000)

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
      uint64_t BRR_0_3:4;
      uint64_t BRR_4_15:12;
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
      uint64_t TCBGTC:1;
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
      uint64_t BRR_0_3:4;
      uint64_t BRR_4_15:12;
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
      uint64_t TCBGTC:1;
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
      uint64_t BRR_0_3:4;
      uint64_t BRR_4_15:12;
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
      uint64_t TCBGTC:1;
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
      uint64_t BRR_0_3:4;
      uint64_t BRR_4_15:12;
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
      uint64_t TCBGTC:1;
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

struct USART6_tag
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
      uint64_t BRR_0_3:4;
      uint64_t BRR_4_15:12;
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
      uint64_t TCBGTC:1;
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

#define USART6 (*(volatile struct USART6_tag *) 0x40011400)

struct UART7_tag
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
      uint64_t BRR_0_3:4;
      uint64_t BRR_4_15:12;
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
      uint64_t TCBGTC:1;
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

#define UART7 (*(volatile struct UART7_tag *) 0x40007800)

struct UART8_tag
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
      uint64_t BRR_0_3:4;
      uint64_t BRR_4_15:12;
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
      uint64_t TCBGTC:1;
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

#define UART8 (*(volatile struct UART8_tag *) 0x40007c00)

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
      uint64_t VRS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

};

#define VREFBUF (*(volatile struct VREFBUF_tag *) 0x58003c00)

struct WWDG1_tag
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
      uint64_t WDGTB:2;
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

#define WWDG1 (*(volatile struct WWDG1_tag *) 0x50003000)

