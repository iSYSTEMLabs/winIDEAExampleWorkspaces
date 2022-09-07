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

struct BDMA1_tag
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
      uint64_t CGIF1:1;
      uint64_t CTCIF1:1;
      uint64_t CHTIF1:1;
      uint64_t CTEIF1:1;
      uint64_t CGIF2:1;
      uint64_t CTCIF2:1;
      uint64_t CHTIF2:1;
      uint64_t CTEIF2:1;
      uint64_t CGIF3:1;
      uint64_t CTCIF3:1;
      uint64_t CHTIF3:1;
      uint64_t CTEIF3:1;
      uint64_t CGIF4:1;
      uint64_t CTCIF4:1;
      uint64_t CHTIF4:1;
      uint64_t CTEIF4:1;
      uint64_t CGIF5:1;
      uint64_t CTCIF5:1;
      uint64_t CHTIF5:1;
      uint64_t CTEIF5:1;
      uint64_t CGIF6:1;
      uint64_t CTCIF6:1;
      uint64_t CHTIF6:1;
      uint64_t CTEIF6:1;
      uint64_t CGIF7:1;
      uint64_t CTCIF7:1;
      uint64_t CHTIF7:1;
      uint64_t CTEIF7:1;
      uint64_t CGIF8:1;
      uint64_t CTCIF8:1;
      uint64_t CHTIF8:1;
      uint64_t CTEIF8:1;
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
  } __attribute__((aligned(4))) CCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0AR0;

  uint32_t CM1AR0;
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
  } __attribute__((aligned(4))) CM0AR1;

  uint32_t CM1AR1;
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
  } __attribute__((aligned(4))) CM0AR2;

  uint32_t CM1AR2;
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
  } __attribute__((aligned(4))) CM0AR3;

  uint32_t CM1AR3;
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
  } __attribute__((aligned(4))) CM0AR4;

  uint32_t CM1AR4;
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
  } __attribute__((aligned(4))) CM0AR5;

  uint32_t CM1AR5;
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
  } __attribute__((aligned(4))) CM0AR6;

  uint32_t CM1AR6;
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
  } __attribute__((aligned(4))) CM0AR7;

  uint32_t CM1AR7;
};

#define BDMA1 (*(volatile struct BDMA1_tag *) 0x48022c00)

struct BDMA2_tag
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
      uint64_t CGIF1:1;
      uint64_t CTCIF1:1;
      uint64_t CHTIF1:1;
      uint64_t CTEIF1:1;
      uint64_t CGIF2:1;
      uint64_t CTCIF2:1;
      uint64_t CHTIF2:1;
      uint64_t CTEIF2:1;
      uint64_t CGIF3:1;
      uint64_t CTCIF3:1;
      uint64_t CHTIF3:1;
      uint64_t CTEIF3:1;
      uint64_t CGIF4:1;
      uint64_t CTCIF4:1;
      uint64_t CHTIF4:1;
      uint64_t CTEIF4:1;
      uint64_t CGIF5:1;
      uint64_t CTCIF5:1;
      uint64_t CHTIF5:1;
      uint64_t CTEIF5:1;
      uint64_t CGIF6:1;
      uint64_t CTCIF6:1;
      uint64_t CHTIF6:1;
      uint64_t CTEIF6:1;
      uint64_t CGIF7:1;
      uint64_t CTCIF7:1;
      uint64_t CHTIF7:1;
      uint64_t CTEIF7:1;
      uint64_t CGIF8:1;
      uint64_t CTCIF8:1;
      uint64_t CHTIF8:1;
      uint64_t CTEIF8:1;
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
  } __attribute__((aligned(4))) CCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0AR0;

  uint32_t CM1AR0;
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
  } __attribute__((aligned(4))) CM0AR1;

  uint32_t CM1AR1;
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
  } __attribute__((aligned(4))) CM0AR2;

  uint32_t CM1AR2;
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
  } __attribute__((aligned(4))) CM0AR3;

  uint32_t CM1AR3;
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
  } __attribute__((aligned(4))) CM0AR4;

  uint32_t CM1AR4;
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
  } __attribute__((aligned(4))) CM0AR5;

  uint32_t CM1AR5;
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
  } __attribute__((aligned(4))) CM0AR6;

  uint32_t CM1AR6;
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
  } __attribute__((aligned(4))) CM0AR7;

  uint32_t CM1AR7;
};

#define BDMA2 (*(volatile struct BDMA2_tag *) 0x58025400)

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
  } __attribute__((aligned(4))) DFGCMAR;

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

struct DMAMUX2_tag
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

#define DMAMUX2 (*(volatile struct DMAMUX2_tag *) 0x58025800)

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
  } __attribute__((aligned(4))) R0;

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
  } __attribute__((aligned(4))) R1;

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
  } __attribute__((aligned(4))) R2;

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
  } __attribute__((aligned(4))) R3;

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
  } __attribute__((aligned(4))) R4;

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
  } __attribute__((aligned(4))) R5;

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
  } __attribute__((aligned(4))) R6;

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
  } __attribute__((aligned(4))) R7;

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
  } __attribute__((aligned(4))) R8;

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
  } __attribute__((aligned(4))) R9;

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
  } __attribute__((aligned(4))) R10;

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
  } __attribute__((aligned(4))) R11;

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
  } __attribute__((aligned(4))) R12;

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
  } __attribute__((aligned(4))) R13;

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
  } __attribute__((aligned(4))) R14;

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
  } __attribute__((aligned(4))) R15;

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
  } __attribute__((aligned(4))) R16;

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
  } __attribute__((aligned(4))) R17;

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
  } __attribute__((aligned(4))) R18;

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
  } __attribute__((aligned(4))) R19;

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
  } __attribute__((aligned(4))) R20;

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
  } __attribute__((aligned(4))) R21;

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
  } __attribute__((aligned(4))) R22;

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
  } __attribute__((aligned(4))) R23;

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
  } __attribute__((aligned(4))) R24;

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
  } __attribute__((aligned(4))) R25;

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
  } __attribute__((aligned(4))) R26;

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
  } __attribute__((aligned(4))) R27;

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
  } __attribute__((aligned(4))) R28;

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
  } __attribute__((aligned(4))) R29;

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
  } __attribute__((aligned(4))) R30;

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
  } __attribute__((aligned(4))) R31;

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
  } __attribute__((aligned(4))) RLR0;

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
  } __attribute__((aligned(4))) RLR1;

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
  } __attribute__((aligned(4))) RLR2;

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
  } __attribute__((aligned(4))) RLR3;

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
  } __attribute__((aligned(4))) RLR4;

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
  } __attribute__((aligned(4))) RLR5;

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
  } __attribute__((aligned(4))) RLR6;

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
  } __attribute__((aligned(4))) RLR7;

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
  } __attribute__((aligned(4))) RLR8;

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
  } __attribute__((aligned(4))) RLR9;

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
  } __attribute__((aligned(4))) RLR10;

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
  } __attribute__((aligned(4))) RLR11;

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
  } __attribute__((aligned(4))) RLR12;

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
  } __attribute__((aligned(4))) RLR13;

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
  } __attribute__((aligned(4))) RLR14;

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
  } __attribute__((aligned(4))) RLR15;

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
  } __attribute__((aligned(4))) RLR16;

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
  } __attribute__((aligned(4))) RLR17;

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
  } __attribute__((aligned(4))) RLR18;

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
  } __attribute__((aligned(4))) RLR19;

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
  } __attribute__((aligned(4))) RLR20;

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
  } __attribute__((aligned(4))) RLR21;

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
  } __attribute__((aligned(4))) RLR22;

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
  } __attribute__((aligned(4))) RLR23;

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
  } __attribute__((aligned(4))) RLR24;

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
  } __attribute__((aligned(4))) RLR25;

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
  } __attribute__((aligned(4))) RLR26;

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
  } __attribute__((aligned(4))) RLR27;

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
  } __attribute__((aligned(4))) RLR28;

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
  } __attribute__((aligned(4))) RLR29;

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
  } __attribute__((aligned(4))) RLR30;

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
  } __attribute__((aligned(4))) RLR31;

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
  } __attribute__((aligned(4))) IER;

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
  } __attribute__((aligned(4))) ICR;

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
  } __attribute__((aligned(4))) ISR;

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
  } __attribute__((aligned(4))) MISR;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t MASTERID:8;
      uint64_t KEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t KEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYR;

};

#define HSEM (*(volatile struct HSEM_tag *) 0x48020800)

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
  } __attribute__((aligned(4))) I2C_CR1;

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
  } __attribute__((aligned(4))) I2C_CR2;

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
  } __attribute__((aligned(4))) I2C_OAR1;

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
  } __attribute__((aligned(4))) I2C_OAR2;

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
  } __attribute__((aligned(4))) I2C_TIMINGR;

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
  } __attribute__((aligned(4))) I2C_TIMEOUTR;

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
  } __attribute__((aligned(4))) I2C_ISR;

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
  } __attribute__((aligned(4))) I2C_ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_PECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_RXDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_TXDR;

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
  } __attribute__((aligned(4))) I2C_CR1;

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
  } __attribute__((aligned(4))) I2C_CR2;

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
  } __attribute__((aligned(4))) I2C_OAR1;

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
  } __attribute__((aligned(4))) I2C_OAR2;

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
  } __attribute__((aligned(4))) I2C_TIMINGR;

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
  } __attribute__((aligned(4))) I2C_TIMEOUTR;

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
  } __attribute__((aligned(4))) I2C_ISR;

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
  } __attribute__((aligned(4))) I2C_ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_PECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_RXDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_TXDR;

};

#define I2C4 (*(volatile struct I2C4_tag *) 0x58001c00)

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

struct GPIOI_tag
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

#define GPIOI (*(volatile struct GPIOI_tag *) 0x58022000)

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

struct JPEG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:2;
      uint64_t reservedSpace0:1;
      uint64_t DE:1;
      uint64_t COLORSPACE:2;
      uint64_t NS:2;
      uint64_t HDR:1;
      uint64_t reservedSpace1:7;
      uint64_t YSIZE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMCU:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t XSIZE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HD:1;
      uint64_t HA:1;
      uint64_t QT:2;
      uint64_t NB:4;
      uint64_t VSF:4;
      uint64_t HSF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFRN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HD:1;
      uint64_t HA:1;
      uint64_t QT:2;
      uint64_t NB:4;
      uint64_t VSF:4;
      uint64_t HSF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFRN2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HD:1;
      uint64_t HA:1;
      uint64_t QT:2;
      uint64_t NB:4;
      uint64_t VSF:4;
      uint64_t HSF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFRN3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HD:1;
      uint64_t HA:1;
      uint64_t QT:2;
      uint64_t NB:4;
      uint64_t VSF:4;
      uint64_t HSF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFRN4;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JCEN:1;
      uint64_t IFTIE:1;
      uint64_t IFNFIE:1;
      uint64_t OFTIE:1;
      uint64_t OFNEIE:1;
      uint64_t EOCIE:1;
      uint64_t HPDIE:1;
      uint64_t reservedSpace0:4;
      uint64_t IDMAEN:1;
      uint64_t ODMAEN:1;
      uint64_t IFF:1;
      uint64_t OFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t IFTF:1;
      uint64_t IFNFF:1;
      uint64_t OFTF:1;
      uint64_t OFNEF:1;
      uint64_t EOCF:1;
      uint64_t HPDF:1;
      uint64_t COF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t CEOCF:1;
      uint64_t CHPDF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAIN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAOUT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOR;

};

#define JPEG (*(volatile struct JPEG_tag *) 0x52003000)

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
  } __attribute__((aligned(4))) GISR0;

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
  } __attribute__((aligned(4))) C0ISR;

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
  } __attribute__((aligned(4))) C0IFCR;

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
  } __attribute__((aligned(4))) C0ESR;

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
  } __attribute__((aligned(4))) C0CR;

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
  } __attribute__((aligned(4))) C0TCR;

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
  } __attribute__((aligned(4))) C0BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0LAR;

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
  } __attribute__((aligned(4))) C0TBR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0MDR;

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
  } __attribute__((aligned(4))) C1ISR;

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
  } __attribute__((aligned(4))) C1IFCR;

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
  } __attribute__((aligned(4))) C1ESR;

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
  } __attribute__((aligned(4))) C1CR;

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
  } __attribute__((aligned(4))) C1TCR;

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
  } __attribute__((aligned(4))) C1BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1LAR;

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
  } __attribute__((aligned(4))) C1TBR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1MDR;

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
  } __attribute__((aligned(4))) C2ISR;

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
  } __attribute__((aligned(4))) C2IFCR;

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
  } __attribute__((aligned(4))) C2ESR;

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
  } __attribute__((aligned(4))) C2CR;

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
  } __attribute__((aligned(4))) C2TCR;

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
  } __attribute__((aligned(4))) C2BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2LAR;

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
  } __attribute__((aligned(4))) C2TBR;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2MDR;

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
  } __attribute__((aligned(4))) C3ISR;

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
  } __attribute__((aligned(4))) C3IFCR;

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
  } __attribute__((aligned(4))) C3ESR;

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
  } __attribute__((aligned(4))) C3CR;

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
  } __attribute__((aligned(4))) C3TCR;

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
  } __attribute__((aligned(4))) C3BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3LAR;

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
  } __attribute__((aligned(4))) C3TBR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3MDR;

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
  } __attribute__((aligned(4))) C4ISR;

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
  } __attribute__((aligned(4))) C4IFCR;

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
  } __attribute__((aligned(4))) C4ESR;

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
  } __attribute__((aligned(4))) C4CR;

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
  } __attribute__((aligned(4))) C4TCR;

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
  } __attribute__((aligned(4))) C4BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4LAR;

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
  } __attribute__((aligned(4))) C4TBR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4MDR;

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
  } __attribute__((aligned(4))) C5ISR;

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
  } __attribute__((aligned(4))) C5IFCR;

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
  } __attribute__((aligned(4))) C5ESR;

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
  } __attribute__((aligned(4))) C5CR;

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
  } __attribute__((aligned(4))) C5TCR;

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
  } __attribute__((aligned(4))) C5BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5LAR;

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
  } __attribute__((aligned(4))) C5TBR;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5MDR;

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
  } __attribute__((aligned(4))) C6ISR;

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
  } __attribute__((aligned(4))) C6IFCR;

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
  } __attribute__((aligned(4))) C6ESR;

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
  } __attribute__((aligned(4))) C6CR;

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
  } __attribute__((aligned(4))) C6TCR;

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
  } __attribute__((aligned(4))) C6BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6LAR;

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
  } __attribute__((aligned(4))) C6TBR;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6MDR;

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
  } __attribute__((aligned(4))) C7ISR;

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
  } __attribute__((aligned(4))) C7IFCR;

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
  } __attribute__((aligned(4))) C7ESR;

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
  } __attribute__((aligned(4))) C7CR;

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
  } __attribute__((aligned(4))) C7TCR;

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
  } __attribute__((aligned(4))) C7BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7LAR;

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
  } __attribute__((aligned(4))) C7TBR;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7MDR;

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
  } __attribute__((aligned(4))) C8ISR;

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
  } __attribute__((aligned(4))) C8IFCR;

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
  } __attribute__((aligned(4))) C8ESR;

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
  } __attribute__((aligned(4))) C8CR;

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
  } __attribute__((aligned(4))) C8TCR;

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
  } __attribute__((aligned(4))) C8BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C8SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C8DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C8BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C8LAR;

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
  } __attribute__((aligned(4))) C8TBR;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C8MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C8MDR;

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
  } __attribute__((aligned(4))) C9ISR;

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
  } __attribute__((aligned(4))) C9IFCR;

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
  } __attribute__((aligned(4))) C9ESR;

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
  } __attribute__((aligned(4))) C9CR;

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
  } __attribute__((aligned(4))) C9TCR;

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
  } __attribute__((aligned(4))) C9BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C9SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C9DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C9BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C9LAR;

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
  } __attribute__((aligned(4))) C9TBR;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C9MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C9MDR;

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
  } __attribute__((aligned(4))) C10ISR;

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
  } __attribute__((aligned(4))) C10IFCR;

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
  } __attribute__((aligned(4))) C10ESR;

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
  } __attribute__((aligned(4))) C10CR;

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
  } __attribute__((aligned(4))) C10TCR;

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
  } __attribute__((aligned(4))) C10BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C10SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C10DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C10BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C10LAR;

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
  } __attribute__((aligned(4))) C10TBR;

  uint8_t res21[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C10MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C10MDR;

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
  } __attribute__((aligned(4))) C11ISR;

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
  } __attribute__((aligned(4))) C11IFCR;

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
  } __attribute__((aligned(4))) C11ESR;

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
  } __attribute__((aligned(4))) C11CR;

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
  } __attribute__((aligned(4))) C11TCR;

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
  } __attribute__((aligned(4))) C11BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C11SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C11DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C11BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C11LAR;

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
  } __attribute__((aligned(4))) C11TBR;

  uint8_t res23[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C11MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C11MDR;

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
  } __attribute__((aligned(4))) C12ISR;

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
  } __attribute__((aligned(4))) C12IFCR;

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
  } __attribute__((aligned(4))) C12ESR;

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
  } __attribute__((aligned(4))) C12CR;

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
  } __attribute__((aligned(4))) C12TCR;

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
  } __attribute__((aligned(4))) C12BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C12SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C12DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C12BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C12LAR;

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
  } __attribute__((aligned(4))) C12TBR;

  uint8_t res25[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C12MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C12MDR;

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
  } __attribute__((aligned(4))) C13ISR;

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
  } __attribute__((aligned(4))) C13IFCR;

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
  } __attribute__((aligned(4))) C13ESR;

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
  } __attribute__((aligned(4))) C13CR;

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
  } __attribute__((aligned(4))) C13TCR;

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
  } __attribute__((aligned(4))) C13BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C13SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C13DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C13BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C13LAR;

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
  } __attribute__((aligned(4))) C13TBR;

  uint8_t res27[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C13MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C13MDR;

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
  } __attribute__((aligned(4))) C14ISR;

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
  } __attribute__((aligned(4))) C14IFCR;

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
  } __attribute__((aligned(4))) C14ESR;

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
  } __attribute__((aligned(4))) C14CR;

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
  } __attribute__((aligned(4))) C14TCR;

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
  } __attribute__((aligned(4))) C14BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C14SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C14DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C14BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C14LAR;

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
  } __attribute__((aligned(4))) C14TBR;

  uint8_t res29[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C14MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C14MDR;

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
  } __attribute__((aligned(4))) C15ISR;

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
  } __attribute__((aligned(4))) C15IFCR;

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
  } __attribute__((aligned(4))) C15ESR;

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
  } __attribute__((aligned(4))) C15CR;

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
  } __attribute__((aligned(4))) C15TCR;

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
  } __attribute__((aligned(4))) C15BNDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C15SAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C15DAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUV:16;
      uint64_t DUV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C15BRUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C15LAR;

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
  } __attribute__((aligned(4))) C15TBR;

  uint8_t res31[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C15MAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C15MDR;

};

#define MDMA (*(volatile struct MDMA_tag *) 0x52000000)

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

struct SAI2_tag
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

#define SAI2 (*(volatile struct SAI2_tag *) 0x40015c00)

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

  uint8_t res2[880];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINREV:4;
      uint64_t MAJREV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_VER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IP_ID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_ID;

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

  uint8_t res2[880];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINREV:4;
      uint64_t MAJREV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_VER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IP_ID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMMC_ID;

};

#define SDMMC2 (*(volatile struct SDMMC2_tag *) 0x48022400)

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

#define VREFBUF (*(volatile struct VREFBUF_tag *) 0x58003c00)

struct IWDG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IWDG_KR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IWDG_PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RL:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IWDG_RLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PVU:1;
      uint64_t RVU:1;
      uint64_t WVU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IWDG_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WIN:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IWDG_WINR;

};

#define IWDG (*(volatile struct IWDG_tag *) 0x58004800)

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
  } __attribute__((aligned(4))) WWDG_CR;

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
  } __attribute__((aligned(4))) WWDG_CFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EWIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WWDG_SR;

};

#define WWDG (*(volatile struct WWDG_tag *) 0x50003000)

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
  } __attribute__((aligned(4))) PWR_CR1;

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
  } __attribute__((aligned(4))) PWR_CSR1;

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
  } __attribute__((aligned(4))) PWR_CR2;

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
  } __attribute__((aligned(4))) PWR_CR3;

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
  } __attribute__((aligned(4))) PWR_CPUCR;

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
  } __attribute__((aligned(4))) PWR_D3CR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WKUPC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_WKUPCR;

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
  } __attribute__((aligned(4))) PWR_WKUPFR;

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
  } __attribute__((aligned(4))) PWR_WKUPEPR;

};

#define PWR (*(volatile struct PWR_tag *) 0x58024800)

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
  } __attribute__((aligned(4))) CGFR;

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
  } __attribute__((aligned(4))) CGFR;

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
  } __attribute__((aligned(4))) CGFR;

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
  } __attribute__((aligned(4))) CGFR;

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
  } __attribute__((aligned(4))) CGFR;

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
  } __attribute__((aligned(4))) CGFR;

};

#define SPI6 (*(volatile struct SPI6_tag *) 0x58001400)

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
      uint64_t BOOST:1;
      uint64_t reservedSpace1:7;
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
      uint64_t RES:2;
      uint64_t reservedSpace0:1;
      uint64_t EXTSEL:5;
      uint64_t EXTEN:2;
      uint64_t OVRMOD:1;
      uint64_t CONT:1;
      uint64_t AUTDLY:1;
      uint64_t reservedSpace1:1;
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
      uint64_t reservedSpace0:2;
      uint64_t BOOST:1;
      uint64_t reservedSpace1:7;
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
      uint64_t RES:2;
      uint64_t reservedSpace0:1;
      uint64_t EXTSEL:5;
      uint64_t EXTEN:2;
      uint64_t OVRMOD:1;
      uint64_t CONT:1;
      uint64_t AUTDLY:1;
      uint64_t reservedSpace1:1;
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

#define ADC2 (*(volatile struct ADC2_tag *) 0x40022100)

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

};

#define ADC12_Common (*(volatile struct ADC12_Common_tag *) 0x40022300)

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
  } __attribute__((aligned(4))) DMAMUX1_C0CR;

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
  } __attribute__((aligned(4))) DMAMUX1_C1CR;

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
  } __attribute__((aligned(4))) DMAMUX1_C2CR;

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
  } __attribute__((aligned(4))) DMAMUX1_C3CR;

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
  } __attribute__((aligned(4))) DMAMUX1_C4CR;

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
  } __attribute__((aligned(4))) DMAMUX1_C5CR;

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
  } __attribute__((aligned(4))) DMAMUX1_C6CR;

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
  } __attribute__((aligned(4))) DMAMUX1_C7CR;

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
  } __attribute__((aligned(4))) DMAMUX1_C8CR;

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
  } __attribute__((aligned(4))) DMAMUX1_C9CR;

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
  } __attribute__((aligned(4))) DMAMUX1_C10CR;

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
  } __attribute__((aligned(4))) DMAMUX1_C11CR;

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
  } __attribute__((aligned(4))) DMAMUX1_C12CR;

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
  } __attribute__((aligned(4))) DMAMUX1_C13CR;

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
  } __attribute__((aligned(4))) DMAMUX1_C14CR;

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
  } __attribute__((aligned(4))) DMAMUX1_C15CR;

  uint8_t res0[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMUX1_CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSOF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMUX1_CFR;

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
  } __attribute__((aligned(4))) DMAMUX1_RG0CR;

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
  } __attribute__((aligned(4))) DMAMUX1_RG1CR;

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
  } __attribute__((aligned(4))) DMAMUX1_RG2CR;

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
  } __attribute__((aligned(4))) DMAMUX1_RG3CR;

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
  } __attribute__((aligned(4))) DMAMUX1_RG4CR;

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
  } __attribute__((aligned(4))) DMAMUX1_RG5CR;

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
  } __attribute__((aligned(4))) DMAMUX1_RG6CR;

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
  } __attribute__((aligned(4))) DMAMUX1_RG7CR;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMUX1_RGSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMUX1_RGCFR;

};

#define DMAMUX1 (*(volatile struct DMAMUX1_tag *) 0x40020800)

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

  uint8_t res7[8];

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

  uint8_t res8[132];

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
  } __attribute__((aligned(4))) LPTIM_CFGR2;

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
  } __attribute__((aligned(4))) LPTIM_CFGR2;

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
  } __attribute__((aligned(4))) LPTIM_CFGR2;

};

#define LPTIM3 (*(volatile struct LPTIM3_tag *) 0x58002800)

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

  uint8_t res1[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PVDL:1;
      uint64_t FLASHL:1;
      uint64_t reservedSpace1:2;
      uint64_t CM7L:1;
      uint64_t reservedSpace2:6;
      uint64_t DTCML:1;
      uint64_t ITCML:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCFG_BRK_LOCKUPR;

};

#define SYSCFG (*(volatile struct SYSCFG_tag *) 0x58000404)

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
      uint64_t JPEG_bitfield:1;
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

struct HRTIM_Master_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CK_PSC:3;
      uint64_t CONT:1;
      uint64_t RETRIG:1;
      uint64_t HALF:1;
      uint64_t reservedSpace0:2;
      uint64_t SYNC_IN:2;
      uint64_t SYNCRSTM:1;
      uint64_t SYNCSTRTM:1;
      uint64_t SYNC_OUT:2;
      uint64_t SYNC_SRC:2;
      uint64_t MCEN:1;
      uint64_t TACEN:1;
      uint64_t TBCEN:1;
      uint64_t TCCEN:1;
      uint64_t TDCEN:1;
      uint64_t TECEN:1;
      uint64_t reservedSpace1:3;
      uint64_t DACSYNC:2;
      uint64_t PREEN:1;
      uint64_t reservedSpace2:1;
      uint64_t MREPU:1;
      uint64_t BRSTDMA:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCMP1:1;
      uint64_t MCMP2:1;
      uint64_t MCMP3:1;
      uint64_t MCMP4:1;
      uint64_t MREP:1;
      uint64_t SYNC:1;
      uint64_t MUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCMP1C:1;
      uint64_t MCMP2C:1;
      uint64_t MCMP3C:1;
      uint64_t MCMP4C:1;
      uint64_t MREPC:1;
      uint64_t SYNCC:1;
      uint64_t MUPDC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCMP1IE:1;
      uint64_t MCMP2IE:1;
      uint64_t MCMP3IE:1;
      uint64_t MCMP4IE:1;
      uint64_t MREPIE:1;
      uint64_t SYNCIE:1;
      uint64_t MUPDIE:1;
      uint64_t reservedSpace0:9;
      uint64_t MCMP1DE:1;
      uint64_t MCMP2DE:1;
      uint64_t MCMP3DE:1;
      uint64_t MCMP4DE:1;
      uint64_t MREPDE:1;
      uint64_t SYNCDE:1;
      uint64_t MUPDDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDIER4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCNTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MREP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MREP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCMP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCMP1R;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCMP2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCMP2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCMP3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCMP3R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCMP4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCMP4R;

};

#define HRTIM_Master (*(volatile struct HRTIM_Master_tag *) 0x40017400)

struct HRTIM_TIMA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CK_PSCx:3;
      uint64_t CONT:1;
      uint64_t RETRIG:1;
      uint64_t HALF:1;
      uint64_t PSHPLL:1;
      uint64_t reservedSpace0:3;
      uint64_t SYNCRSTx:1;
      uint64_t SYNCSTRTx:1;
      uint64_t DELCMP2:2;
      uint64_t DELCMP4:2;
      uint64_t reservedSpace1:1;
      uint64_t TxREPU:1;
      uint64_t TxRSTU:1;
      uint64_t reservedSpace2:1;
      uint64_t TBU:1;
      uint64_t TCU:1;
      uint64_t TDU:1;
      uint64_t TEU:1;
      uint64_t MSTU:1;
      uint64_t DACSYNC:2;
      uint64_t PREEN:1;
      uint64_t UPDGAT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t REP:1;
      uint64_t reservedSpace0:1;
      uint64_t UPD:1;
      uint64_t CPT1:1;
      uint64_t CPT2:1;
      uint64_t SETx1:1;
      uint64_t RSTx1:1;
      uint64_t SETx2:1;
      uint64_t RSTx2:1;
      uint64_t RST:1;
      uint64_t DLYPRT:1;
      uint64_t reservedSpace1:1;
      uint64_t CPPSTAT:1;
      uint64_t IPPSTAT:1;
      uint64_t O1STAT:1;
      uint64_t O2STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMAISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1C:1;
      uint64_t CMP2C:1;
      uint64_t CMP3C:1;
      uint64_t CMP4C:1;
      uint64_t REPC:1;
      uint64_t reservedSpace0:1;
      uint64_t UPDC:1;
      uint64_t CPT1C:1;
      uint64_t CPT2C:1;
      uint64_t SET1xC:1;
      uint64_t RSTx1C:1;
      uint64_t SET2xC:1;
      uint64_t RSTx2C:1;
      uint64_t RSTC:1;
      uint64_t DLYPRTC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMAICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1IE:1;
      uint64_t CMP2IE:1;
      uint64_t CMP3IE:1;
      uint64_t CMP4IE:1;
      uint64_t REPIE:1;
      uint64_t reservedSpace0:1;
      uint64_t UPDIE:1;
      uint64_t CPT1IE:1;
      uint64_t CPT2IE:1;
      uint64_t SET1xIE:1;
      uint64_t RSTx1IE:1;
      uint64_t SETx2IE:1;
      uint64_t RSTx2IE:1;
      uint64_t RSTIE:1;
      uint64_t DLYPRTIE:1;
      uint64_t reservedSpace1:1;
      uint64_t CMP1DE:1;
      uint64_t CMP2DE:1;
      uint64_t CMP3DE:1;
      uint64_t CMP4DE:1;
      uint64_t REPDE:1;
      uint64_t reservedSpace2:1;
      uint64_t UPDDE:1;
      uint64_t CPT1DE:1;
      uint64_t CPT2DE:1;
      uint64_t SET1xDE:1;
      uint64_t RSTx1DE:1;
      uint64_t SETx2DE:1;
      uint64_t RSTx2DE:1;
      uint64_t RSTDE:1;
      uint64_t DLYPRTDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMADIER5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTx:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERx:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REPx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REPAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1x:16;
      uint64_t REPx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP1CAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP2x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP2AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP3x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP3AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP4x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP4AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPT1x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPT1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPT2x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPT2AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTRx:9;
      uint64_t SDTRx:1;
      uint64_t DTPRSC:3;
      uint64_t reservedSpace0:1;
      uint64_t DTRSLKx:1;
      uint64_t DTRLKx:1;
      uint64_t DTFx:9;
      uint64_t SDTFx:1;
      uint64_t reservedSpace1:4;
      uint64_t DTFSLKx:1;
      uint64_t DTFLKx:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SST:1;
      uint64_t RESYNC:1;
      uint64_t PER:1;
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t TIMEVNT1:1;
      uint64_t TIMEVNT2:1;
      uint64_t TIMEVNT3:1;
      uint64_t TIMEVNT4:1;
      uint64_t TIMEVNT5:1;
      uint64_t TIMEVNT6:1;
      uint64_t TIMEVNT7:1;
      uint64_t TIMEVNT8:1;
      uint64_t TIMEVNT9:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETA1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRT:1;
      uint64_t RESYNC:1;
      uint64_t PER:1;
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t TIMEVNT1:1;
      uint64_t TIMEVNT2:1;
      uint64_t TIMEVNT3:1;
      uint64_t TIMEVNT4:1;
      uint64_t TIMEVNT5:1;
      uint64_t TIMEVNT6:1;
      uint64_t TIMEVNT7:1;
      uint64_t TIMEVNT8:1;
      uint64_t TIMEVNT9:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTA1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SST:1;
      uint64_t RESYNC:1;
      uint64_t PER:1;
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t TIMEVNT1:1;
      uint64_t TIMEVNT2:1;
      uint64_t TIMEVNT3:1;
      uint64_t TIMEVNT4:1;
      uint64_t TIMEVNT5:1;
      uint64_t TIMEVNT6:1;
      uint64_t TIMEVNT7:1;
      uint64_t TIMEVNT8:1;
      uint64_t TIMEVNT9:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETA2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRT:1;
      uint64_t RESYNC:1;
      uint64_t PER:1;
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t TIMEVNT1:1;
      uint64_t TIMEVNT2:1;
      uint64_t TIMEVNT3:1;
      uint64_t TIMEVNT4:1;
      uint64_t TIMEVNT5:1;
      uint64_t TIMEVNT6:1;
      uint64_t TIMEVNT7:1;
      uint64_t TIMEVNT8:1;
      uint64_t TIMEVNT9:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTA2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EE1LTCH:1;
      uint64_t EE1FLTR:4;
      uint64_t reservedSpace0:1;
      uint64_t EE2LTCH:1;
      uint64_t EE2FLTR:4;
      uint64_t reservedSpace1:1;
      uint64_t EE3LTCH:1;
      uint64_t EE3FLTR:4;
      uint64_t reservedSpace2:1;
      uint64_t EE4LTCH:1;
      uint64_t EE4FLTR:4;
      uint64_t reservedSpace3:1;
      uint64_t EE5LTCH:1;
      uint64_t EE5FLTR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EEFAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EE6LTCH:1;
      uint64_t EE6FLTR:4;
      uint64_t reservedSpace0:1;
      uint64_t EE7LTCH:1;
      uint64_t EE7FLTR:4;
      uint64_t reservedSpace1:1;
      uint64_t EE8LTCH:1;
      uint64_t EE8FLTR:4;
      uint64_t reservedSpace2:1;
      uint64_t EE9LTCH:1;
      uint64_t EE9FLTR:4;
      uint64_t reservedSpace3:1;
      uint64_t EE10LTCH:1;
      uint64_t EE10FLTR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EEFAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t UPDT:1;
      uint64_t CMP2:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t TIMBCMP1:1;
      uint64_t TIMBCMP2:1;
      uint64_t TIMBCMP4:1;
      uint64_t TIMCCMP1:1;
      uint64_t TIMCCMP2:1;
      uint64_t TIMCCMP4:1;
      uint64_t TIMDCMP1:1;
      uint64_t TIMDCMP2:1;
      uint64_t TIMDCMP4:1;
      uint64_t TIMECMP1:1;
      uint64_t TIMECMP2:1;
      uint64_t TIMECMP4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHPFRQ:4;
      uint64_t CHPDTY:3;
      uint64_t STRTPW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHPAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWCPT:1;
      uint64_t UDPCPT:1;
      uint64_t EXEV1CPT:1;
      uint64_t EXEV2CPT:1;
      uint64_t EXEV3CPT:1;
      uint64_t EXEV4CPT:1;
      uint64_t EXEV5CPT:1;
      uint64_t EXEV6CPT:1;
      uint64_t EXEV7CPT:1;
      uint64_t EXEV8CPT:1;
      uint64_t EXEV9CPT:1;
      uint64_t EXEV10CPT:1;
      uint64_t reservedSpace0:4;
      uint64_t TB1SET:1;
      uint64_t TB1RST:1;
      uint64_t TBCMP1:1;
      uint64_t TBCMP2:1;
      uint64_t TC1SET:1;
      uint64_t TC1RST:1;
      uint64_t TCCMP1:1;
      uint64_t TCCMP2:1;
      uint64_t TD1SET:1;
      uint64_t TD1RST:1;
      uint64_t TDCMP1:1;
      uint64_t TDCMP2:1;
      uint64_t TE1SET:1;
      uint64_t TE1RST:1;
      uint64_t TECMP1:1;
      uint64_t TECMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPT1ACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWCPT:1;
      uint64_t UDPCPT:1;
      uint64_t EXEV1CPT:1;
      uint64_t EXEV2CPT:1;
      uint64_t EXEV3CPT:1;
      uint64_t EXEV4CPT:1;
      uint64_t EXEV5CPT:1;
      uint64_t EXEV6CPT:1;
      uint64_t EXEV7CPT:1;
      uint64_t EXEV8CPT:1;
      uint64_t EXEV9CPT:1;
      uint64_t EXEV10CPT:1;
      uint64_t reservedSpace0:4;
      uint64_t TB1SET:1;
      uint64_t TB1RST:1;
      uint64_t TBCMP1:1;
      uint64_t TBCMP2:1;
      uint64_t TC1SET:1;
      uint64_t TC1RST:1;
      uint64_t TCCMP1:1;
      uint64_t TCCMP2:1;
      uint64_t TD1SET:1;
      uint64_t TD1RST:1;
      uint64_t TDCMP1:1;
      uint64_t TDCMP2:1;
      uint64_t TE1SET:1;
      uint64_t TE1RST:1;
      uint64_t TECMP1:1;
      uint64_t TECMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPT2ACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t POL1:1;
      uint64_t IDLEM1:1;
      uint64_t IDLES1:1;
      uint64_t FAULT1:2;
      uint64_t CHP1:1;
      uint64_t DIDL1:1;
      uint64_t DTEN:1;
      uint64_t DLYPRTEN:1;
      uint64_t DLYPRT:3;
      uint64_t reservedSpace1:4;
      uint64_t POL2:1;
      uint64_t IDLEM2:1;
      uint64_t IDLES2:1;
      uint64_t FAULT2:2;
      uint64_t CHP2:1;
      uint64_t DIDL2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT1EN:1;
      uint64_t FLT2EN:1;
      uint64_t FLT3EN:1;
      uint64_t FLT4EN:1;
      uint64_t FLT5EN:1;
      uint64_t reservedSpace0:26;
      uint64_t FLTLCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTAR;

};

#define HRTIM_TIMA (*(volatile struct HRTIM_TIMA_tag *) 0x40017480)

struct HRTIM_TIMB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CK_PSCx:3;
      uint64_t CONT:1;
      uint64_t RETRIG:1;
      uint64_t HALF:1;
      uint64_t PSHPLL:1;
      uint64_t reservedSpace0:3;
      uint64_t SYNCRSTx:1;
      uint64_t SYNCSTRTx:1;
      uint64_t DELCMP2:2;
      uint64_t DELCMP4:2;
      uint64_t reservedSpace1:1;
      uint64_t TxREPU:1;
      uint64_t TxRSTU:1;
      uint64_t reservedSpace2:1;
      uint64_t TBU:1;
      uint64_t TCU:1;
      uint64_t TDU:1;
      uint64_t TEU:1;
      uint64_t MSTU:1;
      uint64_t DACSYNC:2;
      uint64_t PREEN:1;
      uint64_t UPDGAT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMBCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t REP:1;
      uint64_t reservedSpace0:1;
      uint64_t UPD:1;
      uint64_t CPT1:1;
      uint64_t CPT2:1;
      uint64_t SETx1:1;
      uint64_t RSTx1:1;
      uint64_t SETx2:1;
      uint64_t RSTx2:1;
      uint64_t RST:1;
      uint64_t DLYPRT:1;
      uint64_t reservedSpace1:1;
      uint64_t CPPSTAT:1;
      uint64_t IPPSTAT:1;
      uint64_t O1STAT:1;
      uint64_t O2STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMBISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1C:1;
      uint64_t CMP2C:1;
      uint64_t CMP3C:1;
      uint64_t CMP4C:1;
      uint64_t REPC:1;
      uint64_t reservedSpace0:1;
      uint64_t UPDC:1;
      uint64_t CPT1C:1;
      uint64_t CPT2C:1;
      uint64_t SET1xC:1;
      uint64_t RSTx1C:1;
      uint64_t SET2xC:1;
      uint64_t RSTx2C:1;
      uint64_t RSTC:1;
      uint64_t DLYPRTC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMBICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1IE:1;
      uint64_t CMP2IE:1;
      uint64_t CMP3IE:1;
      uint64_t CMP4IE:1;
      uint64_t REPIE:1;
      uint64_t reservedSpace0:1;
      uint64_t UPDIE:1;
      uint64_t CPT1IE:1;
      uint64_t CPT2IE:1;
      uint64_t SET1xIE:1;
      uint64_t RSTx1IE:1;
      uint64_t SETx2IE:1;
      uint64_t RSTx2IE:1;
      uint64_t RSTIE:1;
      uint64_t DLYPRTIE:1;
      uint64_t reservedSpace1:1;
      uint64_t CMP1DE:1;
      uint64_t CMP2DE:1;
      uint64_t CMP3DE:1;
      uint64_t CMP4DE:1;
      uint64_t REPDE:1;
      uint64_t reservedSpace2:1;
      uint64_t UPDDE:1;
      uint64_t CPT1DE:1;
      uint64_t CPT2DE:1;
      uint64_t SET1xDE:1;
      uint64_t RSTx1DE:1;
      uint64_t SETx2DE:1;
      uint64_t RSTx2DE:1;
      uint64_t RSTDE:1;
      uint64_t DLYPRTDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMBDIER5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTx:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERx:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REPx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REPBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP1BR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1x:16;
      uint64_t REPx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP1CBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP2x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP2BR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP3x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP3BR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP4x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP4BR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPT1x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPT1BR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPT2x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPT2BR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTRx:9;
      uint64_t SDTRx:1;
      uint64_t DTPRSC:3;
      uint64_t reservedSpace0:1;
      uint64_t DTRSLKx:1;
      uint64_t DTRLKx:1;
      uint64_t DTFx:9;
      uint64_t SDTFx:1;
      uint64_t reservedSpace1:4;
      uint64_t DTFSLKx:1;
      uint64_t DTFLKx:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SST:1;
      uint64_t RESYNC:1;
      uint64_t PER:1;
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t TIMEVNT1:1;
      uint64_t TIMEVNT2:1;
      uint64_t TIMEVNT3:1;
      uint64_t TIMEVNT4:1;
      uint64_t TIMEVNT5:1;
      uint64_t TIMEVNT6:1;
      uint64_t TIMEVNT7:1;
      uint64_t TIMEVNT8:1;
      uint64_t TIMEVNT9:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETB1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRT:1;
      uint64_t RESYNC:1;
      uint64_t PER:1;
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t TIMEVNT1:1;
      uint64_t TIMEVNT2:1;
      uint64_t TIMEVNT3:1;
      uint64_t TIMEVNT4:1;
      uint64_t TIMEVNT5:1;
      uint64_t TIMEVNT6:1;
      uint64_t TIMEVNT7:1;
      uint64_t TIMEVNT8:1;
      uint64_t TIMEVNT9:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTB1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SST:1;
      uint64_t RESYNC:1;
      uint64_t PER:1;
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t TIMEVNT1:1;
      uint64_t TIMEVNT2:1;
      uint64_t TIMEVNT3:1;
      uint64_t TIMEVNT4:1;
      uint64_t TIMEVNT5:1;
      uint64_t TIMEVNT6:1;
      uint64_t TIMEVNT7:1;
      uint64_t TIMEVNT8:1;
      uint64_t TIMEVNT9:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETB2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRT:1;
      uint64_t RESYNC:1;
      uint64_t PER:1;
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t TIMEVNT1:1;
      uint64_t TIMEVNT2:1;
      uint64_t TIMEVNT3:1;
      uint64_t TIMEVNT4:1;
      uint64_t TIMEVNT5:1;
      uint64_t TIMEVNT6:1;
      uint64_t TIMEVNT7:1;
      uint64_t TIMEVNT8:1;
      uint64_t TIMEVNT9:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTB2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EE1LTCH:1;
      uint64_t EE1FLTR:4;
      uint64_t reservedSpace0:1;
      uint64_t EE2LTCH:1;
      uint64_t EE2FLTR:4;
      uint64_t reservedSpace1:1;
      uint64_t EE3LTCH:1;
      uint64_t EE3FLTR:4;
      uint64_t reservedSpace2:1;
      uint64_t EE4LTCH:1;
      uint64_t EE4FLTR:4;
      uint64_t reservedSpace3:1;
      uint64_t EE5LTCH:1;
      uint64_t EE5FLTR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EEFBR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EE6LTCH:1;
      uint64_t EE6FLTR:4;
      uint64_t reservedSpace0:1;
      uint64_t EE7LTCH:1;
      uint64_t EE7FLTR:4;
      uint64_t reservedSpace1:1;
      uint64_t EE8LTCH:1;
      uint64_t EE8FLTR:4;
      uint64_t reservedSpace2:1;
      uint64_t EE9LTCH:1;
      uint64_t EE9FLTR:4;
      uint64_t reservedSpace3:1;
      uint64_t EE10LTCH:1;
      uint64_t EE10FLTR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EEFBR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t UPDT:1;
      uint64_t CMP2:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t TIMACMP1:1;
      uint64_t TIMACMP2:1;
      uint64_t TIMACMP4:1;
      uint64_t TIMCCMP1:1;
      uint64_t TIMCCMP2:1;
      uint64_t TIMCCMP4:1;
      uint64_t TIMDCMP1:1;
      uint64_t TIMDCMP2:1;
      uint64_t TIMDCMP4:1;
      uint64_t TIMECMP1:1;
      uint64_t TIMECMP2:1;
      uint64_t TIMECMP4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHPFRQ:4;
      uint64_t CHPDTY:3;
      uint64_t STRTPW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHPBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWCPT:1;
      uint64_t UDPCPT:1;
      uint64_t EXEV1CPT:1;
      uint64_t EXEV2CPT:1;
      uint64_t EXEV3CPT:1;
      uint64_t EXEV4CPT:1;
      uint64_t EXEV5CPT:1;
      uint64_t EXEV6CPT:1;
      uint64_t EXEV7CPT:1;
      uint64_t EXEV8CPT:1;
      uint64_t EXEV9CPT:1;
      uint64_t EXEV10CPT:1;
      uint64_t TA1SET:1;
      uint64_t TA1RST:1;
      uint64_t TACMP1:1;
      uint64_t TACMP2:1;
      uint64_t reservedSpace0:4;
      uint64_t TC1SET:1;
      uint64_t TC1RST:1;
      uint64_t TCCMP1:1;
      uint64_t TCCMP2:1;
      uint64_t TD1SET:1;
      uint64_t TD1RST:1;
      uint64_t TDCMP1:1;
      uint64_t TDCMP2:1;
      uint64_t TE1SET:1;
      uint64_t TE1RST:1;
      uint64_t TECMP1:1;
      uint64_t TECMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPT1BCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWCPT:1;
      uint64_t UDPCPT:1;
      uint64_t EXEV1CPT:1;
      uint64_t EXEV2CPT:1;
      uint64_t EXEV3CPT:1;
      uint64_t EXEV4CPT:1;
      uint64_t EXEV5CPT:1;
      uint64_t EXEV6CPT:1;
      uint64_t EXEV7CPT:1;
      uint64_t EXEV8CPT:1;
      uint64_t EXEV9CPT:1;
      uint64_t EXEV10CPT:1;
      uint64_t TA1SET:1;
      uint64_t TA1RST:1;
      uint64_t TACMP1:1;
      uint64_t TACMP2:1;
      uint64_t reservedSpace0:4;
      uint64_t TC1SET:1;
      uint64_t TC1RST:1;
      uint64_t TCCMP1:1;
      uint64_t TCCMP2:1;
      uint64_t TD1SET:1;
      uint64_t TD1RST:1;
      uint64_t TDCMP1:1;
      uint64_t TDCMP2:1;
      uint64_t TE1SET:1;
      uint64_t TE1RST:1;
      uint64_t TECMP1:1;
      uint64_t TECMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPT2BCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t POL1:1;
      uint64_t IDLEM1:1;
      uint64_t IDLES1:1;
      uint64_t FAULT1:2;
      uint64_t CHP1:1;
      uint64_t DIDL1:1;
      uint64_t DTEN:1;
      uint64_t DLYPRTEN:1;
      uint64_t DLYPRT:3;
      uint64_t reservedSpace1:4;
      uint64_t POL2:1;
      uint64_t IDLEM2:1;
      uint64_t IDLES2:1;
      uint64_t FAULT2:2;
      uint64_t CHP2:1;
      uint64_t DIDL2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT1EN:1;
      uint64_t FLT2EN:1;
      uint64_t FLT3EN:1;
      uint64_t FLT4EN:1;
      uint64_t FLT5EN:1;
      uint64_t reservedSpace0:26;
      uint64_t FLTLCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTBR;

};

#define HRTIM_TIMB (*(volatile struct HRTIM_TIMB_tag *) 0x40017500)

struct HRTIM_TIMC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CK_PSCx:3;
      uint64_t CONT:1;
      uint64_t RETRIG:1;
      uint64_t HALF:1;
      uint64_t PSHPLL:1;
      uint64_t reservedSpace0:3;
      uint64_t SYNCRSTx:1;
      uint64_t SYNCSTRTx:1;
      uint64_t DELCMP2:2;
      uint64_t DELCMP4:2;
      uint64_t reservedSpace1:1;
      uint64_t TxREPU:1;
      uint64_t TxRSTU:1;
      uint64_t reservedSpace2:1;
      uint64_t TBU:1;
      uint64_t TCU:1;
      uint64_t TDU:1;
      uint64_t TEU:1;
      uint64_t MSTU:1;
      uint64_t DACSYNC:2;
      uint64_t PREEN:1;
      uint64_t UPDGAT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t REP:1;
      uint64_t reservedSpace0:1;
      uint64_t UPD:1;
      uint64_t CPT1:1;
      uint64_t CPT2:1;
      uint64_t SETx1:1;
      uint64_t RSTx1:1;
      uint64_t SETx2:1;
      uint64_t RSTx2:1;
      uint64_t RST:1;
      uint64_t DLYPRT:1;
      uint64_t reservedSpace1:1;
      uint64_t CPPSTAT:1;
      uint64_t IPPSTAT:1;
      uint64_t O1STAT:1;
      uint64_t O2STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1C:1;
      uint64_t CMP2C:1;
      uint64_t CMP3C:1;
      uint64_t CMP4C:1;
      uint64_t REPC:1;
      uint64_t reservedSpace0:1;
      uint64_t UPDC:1;
      uint64_t CPT1C:1;
      uint64_t CPT2C:1;
      uint64_t SET1xC:1;
      uint64_t RSTx1C:1;
      uint64_t SET2xC:1;
      uint64_t RSTx2C:1;
      uint64_t RSTC:1;
      uint64_t DLYPRTC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1IE:1;
      uint64_t CMP2IE:1;
      uint64_t CMP3IE:1;
      uint64_t CMP4IE:1;
      uint64_t REPIE:1;
      uint64_t reservedSpace0:1;
      uint64_t UPDIE:1;
      uint64_t CPT1IE:1;
      uint64_t CPT2IE:1;
      uint64_t SET1xIE:1;
      uint64_t RSTx1IE:1;
      uint64_t SETx2IE:1;
      uint64_t RSTx2IE:1;
      uint64_t RSTIE:1;
      uint64_t DLYPRTIE:1;
      uint64_t reservedSpace1:1;
      uint64_t CMP1DE:1;
      uint64_t CMP2DE:1;
      uint64_t CMP3DE:1;
      uint64_t CMP4DE:1;
      uint64_t REPDE:1;
      uint64_t reservedSpace2:1;
      uint64_t UPDDE:1;
      uint64_t CPT1DE:1;
      uint64_t CPT2DE:1;
      uint64_t SET1xDE:1;
      uint64_t RSTx1DE:1;
      uint64_t SETx2DE:1;
      uint64_t RSTx2DE:1;
      uint64_t RSTDE:1;
      uint64_t DLYPRTDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCDIER5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTx:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERx:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REPx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP1CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1x:16;
      uint64_t REPx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP1CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP2x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP2CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP3x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP3CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP4x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP4CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPT1x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPT1CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPT2x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPT2CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTRx:9;
      uint64_t SDTRx:1;
      uint64_t DTPRSC:3;
      uint64_t reservedSpace0:1;
      uint64_t DTRSLKx:1;
      uint64_t DTRLKx:1;
      uint64_t DTFx:9;
      uint64_t SDTFx:1;
      uint64_t reservedSpace1:4;
      uint64_t DTFSLKx:1;
      uint64_t DTFLKx:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SST:1;
      uint64_t RESYNC:1;
      uint64_t PER:1;
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t TIMEVNT1:1;
      uint64_t TIMEVNT2:1;
      uint64_t TIMEVNT3:1;
      uint64_t TIMEVNT4:1;
      uint64_t TIMEVNT5:1;
      uint64_t TIMEVNT6:1;
      uint64_t TIMEVNT7:1;
      uint64_t TIMEVNT8:1;
      uint64_t TIMEVNT9:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETC1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRT:1;
      uint64_t RESYNC:1;
      uint64_t PER:1;
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t TIMEVNT1:1;
      uint64_t TIMEVNT2:1;
      uint64_t TIMEVNT3:1;
      uint64_t TIMEVNT4:1;
      uint64_t TIMEVNT5:1;
      uint64_t TIMEVNT6:1;
      uint64_t TIMEVNT7:1;
      uint64_t TIMEVNT8:1;
      uint64_t TIMEVNT9:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTC1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SST:1;
      uint64_t RESYNC:1;
      uint64_t PER:1;
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t TIMEVNT1:1;
      uint64_t TIMEVNT2:1;
      uint64_t TIMEVNT3:1;
      uint64_t TIMEVNT4:1;
      uint64_t TIMEVNT5:1;
      uint64_t TIMEVNT6:1;
      uint64_t TIMEVNT7:1;
      uint64_t TIMEVNT8:1;
      uint64_t TIMEVNT9:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETC2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRT:1;
      uint64_t RESYNC:1;
      uint64_t PER:1;
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t TIMEVNT1:1;
      uint64_t TIMEVNT2:1;
      uint64_t TIMEVNT3:1;
      uint64_t TIMEVNT4:1;
      uint64_t TIMEVNT5:1;
      uint64_t TIMEVNT6:1;
      uint64_t TIMEVNT7:1;
      uint64_t TIMEVNT8:1;
      uint64_t TIMEVNT9:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTC2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EE1LTCH:1;
      uint64_t EE1FLTR:4;
      uint64_t reservedSpace0:1;
      uint64_t EE2LTCH:1;
      uint64_t EE2FLTR:4;
      uint64_t reservedSpace1:1;
      uint64_t EE3LTCH:1;
      uint64_t EE3FLTR:4;
      uint64_t reservedSpace2:1;
      uint64_t EE4LTCH:1;
      uint64_t EE4FLTR:4;
      uint64_t reservedSpace3:1;
      uint64_t EE5LTCH:1;
      uint64_t EE5FLTR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EEFCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EE6LTCH:1;
      uint64_t EE6FLTR:4;
      uint64_t reservedSpace0:1;
      uint64_t EE7LTCH:1;
      uint64_t EE7FLTR:4;
      uint64_t reservedSpace1:1;
      uint64_t EE8LTCH:1;
      uint64_t EE8FLTR:4;
      uint64_t reservedSpace2:1;
      uint64_t EE9LTCH:1;
      uint64_t EE9FLTR:4;
      uint64_t reservedSpace3:1;
      uint64_t EE10LTCH:1;
      uint64_t EE10FLTR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EEFCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t UPDT:1;
      uint64_t CMP2:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t TIMACMP1:1;
      uint64_t TIMACMP2:1;
      uint64_t TIMACMP4:1;
      uint64_t TIMBCMP1:1;
      uint64_t TIMBCMP2:1;
      uint64_t TIMBCMP4:1;
      uint64_t TIMDCMP1:1;
      uint64_t TIMDCMP2:1;
      uint64_t TIMDCMP4:1;
      uint64_t TIMECMP1:1;
      uint64_t TIMECMP2:1;
      uint64_t TIMECMP4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHPFRQ:4;
      uint64_t CHPDTY:3;
      uint64_t STRTPW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWCPT:1;
      uint64_t UDPCPT:1;
      uint64_t EXEV1CPT:1;
      uint64_t EXEV2CPT:1;
      uint64_t EXEV3CPT:1;
      uint64_t EXEV4CPT:1;
      uint64_t EXEV5CPT:1;
      uint64_t EXEV6CPT:1;
      uint64_t EXEV7CPT:1;
      uint64_t EXEV8CPT:1;
      uint64_t EXEV9CPT:1;
      uint64_t EXEV10CPT:1;
      uint64_t TA1SET:1;
      uint64_t TA1RST:1;
      uint64_t TACMP1:1;
      uint64_t TACMP2:1;
      uint64_t TB1SET:1;
      uint64_t TB1RST:1;
      uint64_t TBCMP1:1;
      uint64_t TBCMP2:1;
      uint64_t reservedSpace0:4;
      uint64_t TD1SET:1;
      uint64_t TD1RST:1;
      uint64_t TDCMP1:1;
      uint64_t TDCMP2:1;
      uint64_t TE1SET:1;
      uint64_t TE1RST:1;
      uint64_t TECMP1:1;
      uint64_t TECMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPT1CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWCPT:1;
      uint64_t UDPCPT:1;
      uint64_t EXEV1CPT:1;
      uint64_t EXEV2CPT:1;
      uint64_t EXEV3CPT:1;
      uint64_t EXEV4CPT:1;
      uint64_t EXEV5CPT:1;
      uint64_t EXEV6CPT:1;
      uint64_t EXEV7CPT:1;
      uint64_t EXEV8CPT:1;
      uint64_t EXEV9CPT:1;
      uint64_t EXEV10CPT:1;
      uint64_t TA1SET:1;
      uint64_t TA1RST:1;
      uint64_t TACMP1:1;
      uint64_t TACMP2:1;
      uint64_t TB1SET:1;
      uint64_t TB1RST:1;
      uint64_t TBCMP1:1;
      uint64_t TBCMP2:1;
      uint64_t reservedSpace0:4;
      uint64_t TD1SET:1;
      uint64_t TD1RST:1;
      uint64_t TDCMP1:1;
      uint64_t TDCMP2:1;
      uint64_t TE1SET:1;
      uint64_t TE1RST:1;
      uint64_t TECMP1:1;
      uint64_t TECMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPT2CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t POL1:1;
      uint64_t IDLEM1:1;
      uint64_t IDLES1:1;
      uint64_t FAULT1:2;
      uint64_t CHP1:1;
      uint64_t DIDL1:1;
      uint64_t DTEN:1;
      uint64_t DLYPRTEN:1;
      uint64_t DLYPRT:3;
      uint64_t reservedSpace1:4;
      uint64_t POL2:1;
      uint64_t IDLEM2:1;
      uint64_t IDLES2:1;
      uint64_t FAULT2:2;
      uint64_t CHP2:1;
      uint64_t DIDL2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT1EN:1;
      uint64_t FLT2EN:1;
      uint64_t FLT3EN:1;
      uint64_t FLT4EN:1;
      uint64_t FLT5EN:1;
      uint64_t reservedSpace0:26;
      uint64_t FLTLCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTCR;

};

#define HRTIM_TIMC (*(volatile struct HRTIM_TIMC_tag *) 0x40017580)

struct HRTIM_TIMD_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CK_PSCx:3;
      uint64_t CONT:1;
      uint64_t RETRIG:1;
      uint64_t HALF:1;
      uint64_t PSHPLL:1;
      uint64_t reservedSpace0:3;
      uint64_t SYNCRSTx:1;
      uint64_t SYNCSTRTx:1;
      uint64_t DELCMP2:2;
      uint64_t DELCMP4:2;
      uint64_t reservedSpace1:1;
      uint64_t TxREPU:1;
      uint64_t TxRSTU:1;
      uint64_t reservedSpace2:1;
      uint64_t TBU:1;
      uint64_t TCU:1;
      uint64_t TDU:1;
      uint64_t TEU:1;
      uint64_t MSTU:1;
      uint64_t DACSYNC:2;
      uint64_t PREEN:1;
      uint64_t UPDGAT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t REP:1;
      uint64_t reservedSpace0:1;
      uint64_t UPD:1;
      uint64_t CPT1:1;
      uint64_t CPT2:1;
      uint64_t SETx1:1;
      uint64_t RSTx1:1;
      uint64_t SETx2:1;
      uint64_t RSTx2:1;
      uint64_t RST:1;
      uint64_t DLYPRT:1;
      uint64_t reservedSpace1:1;
      uint64_t CPPSTAT:1;
      uint64_t IPPSTAT:1;
      uint64_t O1STAT:1;
      uint64_t O2STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMDISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1C:1;
      uint64_t CMP2C:1;
      uint64_t CMP3C:1;
      uint64_t CMP4C:1;
      uint64_t REPC:1;
      uint64_t reservedSpace0:1;
      uint64_t UPDC:1;
      uint64_t CPT1C:1;
      uint64_t CPT2C:1;
      uint64_t SET1xC:1;
      uint64_t RSTx1C:1;
      uint64_t SET2xC:1;
      uint64_t RSTx2C:1;
      uint64_t RSTC:1;
      uint64_t DLYPRTC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMDICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1IE:1;
      uint64_t CMP2IE:1;
      uint64_t CMP3IE:1;
      uint64_t CMP4IE:1;
      uint64_t REPIE:1;
      uint64_t reservedSpace0:1;
      uint64_t UPDIE:1;
      uint64_t CPT1IE:1;
      uint64_t CPT2IE:1;
      uint64_t SET1xIE:1;
      uint64_t RSTx1IE:1;
      uint64_t SETx2IE:1;
      uint64_t RSTx2IE:1;
      uint64_t RSTIE:1;
      uint64_t DLYPRTIE:1;
      uint64_t reservedSpace1:1;
      uint64_t CMP1DE:1;
      uint64_t CMP2DE:1;
      uint64_t CMP3DE:1;
      uint64_t CMP4DE:1;
      uint64_t REPDE:1;
      uint64_t reservedSpace2:1;
      uint64_t UPDDE:1;
      uint64_t CPT1DE:1;
      uint64_t CPT2DE:1;
      uint64_t SET1xDE:1;
      uint64_t RSTx1DE:1;
      uint64_t SETx2DE:1;
      uint64_t RSTx2DE:1;
      uint64_t RSTDE:1;
      uint64_t DLYPRTDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMDDIER5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTx:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERx:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REPx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP1DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1x:16;
      uint64_t REPx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP1CDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP2x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP2DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP3x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP3DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP4x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP4DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPT1x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPT1DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPT2x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPT2DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTRx:9;
      uint64_t SDTRx:1;
      uint64_t DTPRSC:3;
      uint64_t reservedSpace0:1;
      uint64_t DTRSLKx:1;
      uint64_t DTRLKx:1;
      uint64_t DTFx:9;
      uint64_t SDTFx:1;
      uint64_t reservedSpace1:4;
      uint64_t DTFSLKx:1;
      uint64_t DTFLKx:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SST:1;
      uint64_t RESYNC:1;
      uint64_t PER:1;
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t TIMEVNT1:1;
      uint64_t TIMEVNT2:1;
      uint64_t TIMEVNT3:1;
      uint64_t TIMEVNT4:1;
      uint64_t TIMEVNT5:1;
      uint64_t TIMEVNT6:1;
      uint64_t TIMEVNT7:1;
      uint64_t TIMEVNT8:1;
      uint64_t TIMEVNT9:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETD1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRT:1;
      uint64_t RESYNC:1;
      uint64_t PER:1;
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t TIMEVNT1:1;
      uint64_t TIMEVNT2:1;
      uint64_t TIMEVNT3:1;
      uint64_t TIMEVNT4:1;
      uint64_t TIMEVNT5:1;
      uint64_t TIMEVNT6:1;
      uint64_t TIMEVNT7:1;
      uint64_t TIMEVNT8:1;
      uint64_t TIMEVNT9:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTD1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SST:1;
      uint64_t RESYNC:1;
      uint64_t PER:1;
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t TIMEVNT1:1;
      uint64_t TIMEVNT2:1;
      uint64_t TIMEVNT3:1;
      uint64_t TIMEVNT4:1;
      uint64_t TIMEVNT5:1;
      uint64_t TIMEVNT6:1;
      uint64_t TIMEVNT7:1;
      uint64_t TIMEVNT8:1;
      uint64_t TIMEVNT9:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETD2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRT:1;
      uint64_t RESYNC:1;
      uint64_t PER:1;
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t TIMEVNT1:1;
      uint64_t TIMEVNT2:1;
      uint64_t TIMEVNT3:1;
      uint64_t TIMEVNT4:1;
      uint64_t TIMEVNT5:1;
      uint64_t TIMEVNT6:1;
      uint64_t TIMEVNT7:1;
      uint64_t TIMEVNT8:1;
      uint64_t TIMEVNT9:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTD2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EE1LTCH:1;
      uint64_t EE1FLTR:4;
      uint64_t reservedSpace0:1;
      uint64_t EE2LTCH:1;
      uint64_t EE2FLTR:4;
      uint64_t reservedSpace1:1;
      uint64_t EE3LTCH:1;
      uint64_t EE3FLTR:4;
      uint64_t reservedSpace2:1;
      uint64_t EE4LTCH:1;
      uint64_t EE4FLTR:4;
      uint64_t reservedSpace3:1;
      uint64_t EE5LTCH:1;
      uint64_t EE5FLTR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EEFDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EE6LTCH:1;
      uint64_t EE6FLTR:4;
      uint64_t reservedSpace0:1;
      uint64_t EE7LTCH:1;
      uint64_t EE7FLTR:4;
      uint64_t reservedSpace1:1;
      uint64_t EE8LTCH:1;
      uint64_t EE8FLTR:4;
      uint64_t reservedSpace2:1;
      uint64_t EE9LTCH:1;
      uint64_t EE9FLTR:4;
      uint64_t reservedSpace3:1;
      uint64_t EE10LTCH:1;
      uint64_t EE10FLTR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EEFDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t UPDT:1;
      uint64_t CMP2:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t TIMACMP1:1;
      uint64_t TIMACMP2:1;
      uint64_t TIMACMP4:1;
      uint64_t TIMBCMP1:1;
      uint64_t TIMBCMP2:1;
      uint64_t TIMBCMP4:1;
      uint64_t TIMCCMP1:1;
      uint64_t TIMCCMP2:1;
      uint64_t TIMCCMP4:1;
      uint64_t TIMECMP1:1;
      uint64_t TIMECMP2:1;
      uint64_t TIMECMP4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHPFRQ:4;
      uint64_t CHPDTY:3;
      uint64_t STRTPW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWCPT:1;
      uint64_t UDPCPT:1;
      uint64_t EXEV1CPT:1;
      uint64_t EXEV2CPT:1;
      uint64_t EXEV3CPT:1;
      uint64_t EXEV4CPT:1;
      uint64_t EXEV5CPT:1;
      uint64_t EXEV6CPT:1;
      uint64_t EXEV7CPT:1;
      uint64_t EXEV8CPT:1;
      uint64_t EXEV9CPT:1;
      uint64_t EXEV10CPT:1;
      uint64_t TA1SET:1;
      uint64_t TA1RST:1;
      uint64_t TACMP1:1;
      uint64_t TACMP2:1;
      uint64_t TB1SET:1;
      uint64_t TB1RST:1;
      uint64_t TBCMP1:1;
      uint64_t TBCMP2:1;
      uint64_t TC1SET:1;
      uint64_t TC1RST:1;
      uint64_t TCCMP1:1;
      uint64_t TCCMP2:1;
      uint64_t reservedSpace0:4;
      uint64_t TE1SET:1;
      uint64_t TE1RST:1;
      uint64_t TECMP1:1;
      uint64_t TECMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPT1DCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWCPT:1;
      uint64_t UDPCPT:1;
      uint64_t EXEV1CPT:1;
      uint64_t EXEV2CPT:1;
      uint64_t EXEV3CPT:1;
      uint64_t EXEV4CPT:1;
      uint64_t EXEV5CPT:1;
      uint64_t EXEV6CPT:1;
      uint64_t EXEV7CPT:1;
      uint64_t EXEV8CPT:1;
      uint64_t EXEV9CPT:1;
      uint64_t EXEV10CPT:1;
      uint64_t TA1SET:1;
      uint64_t TA1RST:1;
      uint64_t TACMP1:1;
      uint64_t TACMP2:1;
      uint64_t TB1SET:1;
      uint64_t TB1RST:1;
      uint64_t TBCMP1:1;
      uint64_t TBCMP2:1;
      uint64_t TC1SET:1;
      uint64_t TC1RST:1;
      uint64_t TCCMP1:1;
      uint64_t TCCMP2:1;
      uint64_t reservedSpace0:4;
      uint64_t TE1SET:1;
      uint64_t TE1RST:1;
      uint64_t TECMP1:1;
      uint64_t TECMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPT2DCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t POL1:1;
      uint64_t IDLEM1:1;
      uint64_t IDLES1:1;
      uint64_t FAULT1:2;
      uint64_t CHP1:1;
      uint64_t DIDL1:1;
      uint64_t DTEN:1;
      uint64_t DLYPRTEN:1;
      uint64_t DLYPRT:3;
      uint64_t reservedSpace1:4;
      uint64_t POL2:1;
      uint64_t IDLEM2:1;
      uint64_t IDLES2:1;
      uint64_t FAULT2:2;
      uint64_t CHP2:1;
      uint64_t DIDL2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT1EN:1;
      uint64_t FLT2EN:1;
      uint64_t FLT3EN:1;
      uint64_t FLT4EN:1;
      uint64_t FLT5EN:1;
      uint64_t reservedSpace0:26;
      uint64_t FLTLCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTDR;

};

#define HRTIM_TIMD (*(volatile struct HRTIM_TIMD_tag *) 0x40017600)

struct HRTIM_TIME_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CK_PSCx:3;
      uint64_t CONT:1;
      uint64_t RETRIG:1;
      uint64_t HALF:1;
      uint64_t PSHPLL:1;
      uint64_t reservedSpace0:3;
      uint64_t SYNCRSTx:1;
      uint64_t SYNCSTRTx:1;
      uint64_t DELCMP2:2;
      uint64_t DELCMP4:2;
      uint64_t reservedSpace1:1;
      uint64_t TxREPU:1;
      uint64_t TxRSTU:1;
      uint64_t reservedSpace2:1;
      uint64_t TBU:1;
      uint64_t TCU:1;
      uint64_t TDU:1;
      uint64_t TEU:1;
      uint64_t MSTU:1;
      uint64_t DACSYNC:2;
      uint64_t PREEN:1;
      uint64_t UPDGAT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t REP:1;
      uint64_t reservedSpace0:1;
      uint64_t UPD:1;
      uint64_t CPT1:1;
      uint64_t CPT2:1;
      uint64_t SETx1:1;
      uint64_t RSTx1:1;
      uint64_t SETx2:1;
      uint64_t RSTx2:1;
      uint64_t RST:1;
      uint64_t DLYPRT:1;
      uint64_t reservedSpace1:1;
      uint64_t CPPSTAT:1;
      uint64_t IPPSTAT:1;
      uint64_t O1STAT:1;
      uint64_t O2STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1C:1;
      uint64_t CMP2C:1;
      uint64_t CMP3C:1;
      uint64_t CMP4C:1;
      uint64_t REPC:1;
      uint64_t reservedSpace0:1;
      uint64_t UPDC:1;
      uint64_t CPT1C:1;
      uint64_t CPT2C:1;
      uint64_t SET1xC:1;
      uint64_t RSTx1C:1;
      uint64_t SET2xC:1;
      uint64_t RSTx2C:1;
      uint64_t RSTC:1;
      uint64_t DLYPRTC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1IE:1;
      uint64_t CMP2IE:1;
      uint64_t CMP3IE:1;
      uint64_t CMP4IE:1;
      uint64_t REPIE:1;
      uint64_t reservedSpace0:1;
      uint64_t UPDIE:1;
      uint64_t CPT1IE:1;
      uint64_t CPT2IE:1;
      uint64_t SET1xIE:1;
      uint64_t RSTx1IE:1;
      uint64_t SETx2IE:1;
      uint64_t RSTx2IE:1;
      uint64_t RSTIE:1;
      uint64_t DLYPRTIE:1;
      uint64_t reservedSpace1:1;
      uint64_t CMP1DE:1;
      uint64_t CMP2DE:1;
      uint64_t CMP3DE:1;
      uint64_t CMP4DE:1;
      uint64_t REPDE:1;
      uint64_t reservedSpace2:1;
      uint64_t UPDDE:1;
      uint64_t CPT1DE:1;
      uint64_t CPT2DE:1;
      uint64_t SET1xDE:1;
      uint64_t RSTx1DE:1;
      uint64_t SETx2DE:1;
      uint64_t RSTx2DE:1;
      uint64_t RSTDE:1;
      uint64_t DLYPRTDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEDIER5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTx:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERx:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REPx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP1ER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1x:16;
      uint64_t REPx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP1CER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP2x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP2ER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP3x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP3ER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP4x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP4ER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPT1x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPT1ER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPT2x:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPT2ER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTRx:9;
      uint64_t SDTRx:1;
      uint64_t DTPRSC:3;
      uint64_t reservedSpace0:1;
      uint64_t DTRSLKx:1;
      uint64_t DTRLKx:1;
      uint64_t DTFx:9;
      uint64_t SDTFx:1;
      uint64_t reservedSpace1:4;
      uint64_t DTFSLKx:1;
      uint64_t DTFLKx:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SST:1;
      uint64_t RESYNC:1;
      uint64_t PER:1;
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t TIMEVNT1:1;
      uint64_t TIMEVNT2:1;
      uint64_t TIMEVNT3:1;
      uint64_t TIMEVNT4:1;
      uint64_t TIMEVNT5:1;
      uint64_t TIMEVNT6:1;
      uint64_t TIMEVNT7:1;
      uint64_t TIMEVNT8:1;
      uint64_t TIMEVNT9:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETE1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRT:1;
      uint64_t RESYNC:1;
      uint64_t PER:1;
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t TIMEVNT1:1;
      uint64_t TIMEVNT2:1;
      uint64_t TIMEVNT3:1;
      uint64_t TIMEVNT4:1;
      uint64_t TIMEVNT5:1;
      uint64_t TIMEVNT6:1;
      uint64_t TIMEVNT7:1;
      uint64_t TIMEVNT8:1;
      uint64_t TIMEVNT9:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTE1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SST:1;
      uint64_t RESYNC:1;
      uint64_t PER:1;
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t TIMEVNT1:1;
      uint64_t TIMEVNT2:1;
      uint64_t TIMEVNT3:1;
      uint64_t TIMEVNT4:1;
      uint64_t TIMEVNT5:1;
      uint64_t TIMEVNT6:1;
      uint64_t TIMEVNT7:1;
      uint64_t TIMEVNT8:1;
      uint64_t TIMEVNT9:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETE2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRT:1;
      uint64_t RESYNC:1;
      uint64_t PER:1;
      uint64_t CMP1:1;
      uint64_t CMP2:1;
      uint64_t CMP3:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t TIMEVNT1:1;
      uint64_t TIMEVNT2:1;
      uint64_t TIMEVNT3:1;
      uint64_t TIMEVNT4:1;
      uint64_t TIMEVNT5:1;
      uint64_t TIMEVNT6:1;
      uint64_t TIMEVNT7:1;
      uint64_t TIMEVNT8:1;
      uint64_t TIMEVNT9:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t UPDATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTE2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EE1LTCH:1;
      uint64_t EE1FLTR:4;
      uint64_t reservedSpace0:1;
      uint64_t EE2LTCH:1;
      uint64_t EE2FLTR:4;
      uint64_t reservedSpace1:1;
      uint64_t EE3LTCH:1;
      uint64_t EE3FLTR:4;
      uint64_t reservedSpace2:1;
      uint64_t EE4LTCH:1;
      uint64_t EE4FLTR:4;
      uint64_t reservedSpace3:1;
      uint64_t EE5LTCH:1;
      uint64_t EE5FLTR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EEFER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EE6LTCH:1;
      uint64_t EE6FLTR:4;
      uint64_t reservedSpace0:1;
      uint64_t EE7LTCH:1;
      uint64_t EE7FLTR:4;
      uint64_t reservedSpace1:1;
      uint64_t EE8LTCH:1;
      uint64_t EE8FLTR:4;
      uint64_t reservedSpace2:1;
      uint64_t EE9LTCH:1;
      uint64_t EE9FLTR:4;
      uint64_t reservedSpace3:1;
      uint64_t EE10LTCH:1;
      uint64_t EE10FLTR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EEFER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t UPDT:1;
      uint64_t CMP2:1;
      uint64_t CMP4:1;
      uint64_t MSTPER:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t EXTEVNT1:1;
      uint64_t EXTEVNT2:1;
      uint64_t EXTEVNT3:1;
      uint64_t EXTEVNT4:1;
      uint64_t EXTEVNT5:1;
      uint64_t EXTEVNT6:1;
      uint64_t EXTEVNT7:1;
      uint64_t EXTEVNT8:1;
      uint64_t EXTEVNT9:1;
      uint64_t EXTEVNT10:1;
      uint64_t TIMACMP1:1;
      uint64_t TIMACMP2:1;
      uint64_t TIMACMP4:1;
      uint64_t TIMBCMP1:1;
      uint64_t TIMBCMP2:1;
      uint64_t TIMBCMP4:1;
      uint64_t TIMCCMP1:1;
      uint64_t TIMCCMP2:1;
      uint64_t TIMCCMP4:1;
      uint64_t TIMDCMP1:1;
      uint64_t TIMDCMP2:1;
      uint64_t TIMDCMP4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHPFRQ:4;
      uint64_t CHPDTY:3;
      uint64_t STRTPW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWCPT:1;
      uint64_t UDPCPT:1;
      uint64_t EXEV1CPT:1;
      uint64_t EXEV2CPT:1;
      uint64_t EXEV3CPT:1;
      uint64_t EXEV4CPT:1;
      uint64_t EXEV5CPT:1;
      uint64_t EXEV6CPT:1;
      uint64_t EXEV7CPT:1;
      uint64_t EXEV8CPT:1;
      uint64_t EXEV9CPT:1;
      uint64_t EXEV10CPT:1;
      uint64_t TA1SET:1;
      uint64_t TA1RST:1;
      uint64_t TACMP1:1;
      uint64_t TACMP2:1;
      uint64_t TB1SET:1;
      uint64_t TB1RST:1;
      uint64_t TBCMP1:1;
      uint64_t TBCMP2:1;
      uint64_t TC1SET:1;
      uint64_t TC1RST:1;
      uint64_t TCCMP1:1;
      uint64_t TCCMP2:1;
      uint64_t TD1SET:1;
      uint64_t TD1RST:1;
      uint64_t TDCMP1:1;
      uint64_t TDCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPT1ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWCPT:1;
      uint64_t UDPCPT:1;
      uint64_t EXEV1CPT:1;
      uint64_t EXEV2CPT:1;
      uint64_t EXEV3CPT:1;
      uint64_t EXEV4CPT:1;
      uint64_t EXEV5CPT:1;
      uint64_t EXEV6CPT:1;
      uint64_t EXEV7CPT:1;
      uint64_t EXEV8CPT:1;
      uint64_t EXEV9CPT:1;
      uint64_t EXEV10CPT:1;
      uint64_t TA1SET:1;
      uint64_t TA1RST:1;
      uint64_t TACMP1:1;
      uint64_t TACMP2:1;
      uint64_t TB1SET:1;
      uint64_t TB1RST:1;
      uint64_t TBCMP1:1;
      uint64_t TBCMP2:1;
      uint64_t TC1SET:1;
      uint64_t TC1RST:1;
      uint64_t TCCMP1:1;
      uint64_t TCCMP2:1;
      uint64_t TD1SET:1;
      uint64_t TD1RST:1;
      uint64_t TDCMP1:1;
      uint64_t TDCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPT2ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t POL1:1;
      uint64_t IDLEM1:1;
      uint64_t IDLES1:1;
      uint64_t FAULT1:2;
      uint64_t CHP1:1;
      uint64_t DIDL1:1;
      uint64_t DTEN:1;
      uint64_t DLYPRTEN:1;
      uint64_t DLYPRT:3;
      uint64_t reservedSpace1:4;
      uint64_t POL2:1;
      uint64_t IDLEM2:1;
      uint64_t IDLES2:1;
      uint64_t FAULT2:2;
      uint64_t CHP2:1;
      uint64_t DIDL2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT1EN:1;
      uint64_t FLT2EN:1;
      uint64_t FLT3EN:1;
      uint64_t FLT4EN:1;
      uint64_t FLT5EN:1;
      uint64_t reservedSpace0:26;
      uint64_t FLTLCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTER;

};

#define HRTIM_TIME (*(volatile struct HRTIM_TIME_tag *) 0x40017680)

struct HRTIM_Common_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUDIS:1;
      uint64_t TAUDIS:1;
      uint64_t TBUDIS:1;
      uint64_t TCUDIS:1;
      uint64_t TDUDIS:1;
      uint64_t TEUDIS:1;
      uint64_t reservedSpace0:10;
      uint64_t AD1USRC:3;
      uint64_t AD2USRC:3;
      uint64_t AD3USRC:3;
      uint64_t AD4USRC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSWU:1;
      uint64_t TASWU:1;
      uint64_t TBSWU:1;
      uint64_t TCSWU:1;
      uint64_t TDSWU:1;
      uint64_t TESWU:1;
      uint64_t reservedSpace0:2;
      uint64_t MRST:1;
      uint64_t TARST:1;
      uint64_t TBRST:1;
      uint64_t TCRST:1;
      uint64_t TDRST:1;
      uint64_t TERST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT1:1;
      uint64_t FLT2:1;
      uint64_t FLT3:1;
      uint64_t FLT4:1;
      uint64_t FLT5:1;
      uint64_t SYSFLT:1;
      uint64_t reservedSpace0:10;
      uint64_t DLLRDY:1;
      uint64_t BMPER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT1C:1;
      uint64_t FLT2C:1;
      uint64_t FLT3C:1;
      uint64_t FLT4C:1;
      uint64_t FLT5C:1;
      uint64_t SYSFLTC:1;
      uint64_t reservedSpace0:10;
      uint64_t DLLRDYC:1;
      uint64_t BMPERC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT1IE:1;
      uint64_t FLT2IE:1;
      uint64_t FLT3IE:1;
      uint64_t FLT4IE:1;
      uint64_t FLT5IE:1;
      uint64_t SYSFLTE:1;
      uint64_t reservedSpace0:10;
      uint64_t DLLRDYIE:1;
      uint64_t BMPERIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TA1OEN:1;
      uint64_t TA2OEN:1;
      uint64_t TB1OEN:1;
      uint64_t TB2OEN:1;
      uint64_t TC1OEN:1;
      uint64_t TC2OEN:1;
      uint64_t TD1OEN:1;
      uint64_t TD2OEN:1;
      uint64_t TE1OEN:1;
      uint64_t TE2OEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TA1ODIS:1;
      uint64_t TA2ODIS:1;
      uint64_t TB1ODIS:1;
      uint64_t TB2ODIS:1;
      uint64_t TC1ODIS:1;
      uint64_t TC2ODIS:1;
      uint64_t TD1ODIS:1;
      uint64_t TD2ODIS:1;
      uint64_t TE1ODIS:1;
      uint64_t TE2ODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TA1ODS:1;
      uint64_t TA2ODS:1;
      uint64_t TB1ODS:1;
      uint64_t TB2ODS:1;
      uint64_t TC1ODS:1;
      uint64_t TC2ODS:1;
      uint64_t TD1ODS:1;
      uint64_t TD2ODS:1;
      uint64_t TE1ODS:1;
      uint64_t TE2ODS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BME:1;
      uint64_t BMOM:1;
      uint64_t BMCLK:4;
      uint64_t BMPRSC:4;
      uint64_t BMPREN:1;
      uint64_t reservedSpace0:5;
      uint64_t MTBM:1;
      uint64_t TABM:1;
      uint64_t TBBM:1;
      uint64_t TCBM:1;
      uint64_t TDBM:1;
      uint64_t TEBM:1;
      uint64_t reservedSpace1:9;
      uint64_t BMSTAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BMCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SW:1;
      uint64_t MSTRST:1;
      uint64_t MSTREP:1;
      uint64_t MSTCMP1:1;
      uint64_t MSTCMP2:1;
      uint64_t MSTCMP3:1;
      uint64_t MSTCMP4:1;
      uint64_t TARST:1;
      uint64_t TAREP:1;
      uint64_t TACMP1:1;
      uint64_t TACMP2:1;
      uint64_t TBRST:1;
      uint64_t TBREP:1;
      uint64_t TBCMP1:1;
      uint64_t TBCMP2:1;
      uint64_t TCRST:1;
      uint64_t TCREP:1;
      uint64_t TCCMP1:1;
      uint64_t TCCMP2:1;
      uint64_t TDRST:1;
      uint64_t TDREP:1;
      uint64_t TDCMP1:1;
      uint64_t TDCMP2:1;
      uint64_t TERST:1;
      uint64_t TEREP:1;
      uint64_t TECMP1:1;
      uint64_t TECMP2:1;
      uint64_t reservedSpace0:4;
      uint64_t OCHPEV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BMTRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BMCMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BMCMPR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BMPER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BMPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EE1SRC:2;
      uint64_t EE1POL:1;
      uint64_t EE1SNS:2;
      uint64_t EE1FAST:1;
      uint64_t EE2SRC:2;
      uint64_t EE2POL:1;
      uint64_t EE2SNS:2;
      uint64_t EE2FAST:1;
      uint64_t EE3SRC:2;
      uint64_t EE3POL:1;
      uint64_t EE3SNS:2;
      uint64_t EE3FAST:1;
      uint64_t EE4SRC:2;
      uint64_t EE4POL:1;
      uint64_t EE4SNS:2;
      uint64_t EE4FAST:1;
      uint64_t EE5SRC:2;
      uint64_t EE5POL:1;
      uint64_t EE5SNS:2;
      uint64_t EE5FAST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EECR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EE6SRC:2;
      uint64_t EE6POL:1;
      uint64_t EE6SNS:2;
      uint64_t reservedSpace0:1;
      uint64_t EE7SRC:2;
      uint64_t EE7POL:1;
      uint64_t EE7SNS:2;
      uint64_t reservedSpace1:1;
      uint64_t EE8SRC:2;
      uint64_t EE8POL:1;
      uint64_t EE8SNS:2;
      uint64_t reservedSpace2:1;
      uint64_t EE9SRC:2;
      uint64_t EE9POL:1;
      uint64_t EE9SNS:2;
      uint64_t reservedSpace3:1;
      uint64_t EE10SRC:2;
      uint64_t EE10POL:1;
      uint64_t EE10SNS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EECR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EE6SRC:2;
      uint64_t EE6POL:1;
      uint64_t EE6SNS:2;
      uint64_t reservedSpace0:1;
      uint64_t EE7SRC:2;
      uint64_t EE7POL:1;
      uint64_t EE7SNS:2;
      uint64_t reservedSpace1:1;
      uint64_t EE8SRC:2;
      uint64_t EE8POL:1;
      uint64_t EE8SNS:2;
      uint64_t reservedSpace2:1;
      uint64_t EE9SRC:2;
      uint64_t EE9POL:1;
      uint64_t EE9SNS:2;
      uint64_t reservedSpace3:1;
      uint64_t EE10SRC:2;
      uint64_t EE10POL:1;
      uint64_t EE10SNS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EECR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AD1MC1:1;
      uint64_t AD1MC2:1;
      uint64_t AD1MC3:1;
      uint64_t AD1MC4:1;
      uint64_t AD1MPER:1;
      uint64_t AD1EEV1:1;
      uint64_t AD1EEV2:1;
      uint64_t AD1EEV3:1;
      uint64_t AD1EEV4:1;
      uint64_t AD1EEV5:1;
      uint64_t AD1TAC2:1;
      uint64_t AD1TAC3:1;
      uint64_t AD1TAC4:1;
      uint64_t AD1TAPER:1;
      uint64_t AD1TARST:1;
      uint64_t AD1TBC2:1;
      uint64_t AD1TBC3:1;
      uint64_t AD1TBC4:1;
      uint64_t AD1TBPER:1;
      uint64_t AD1TBRST:1;
      uint64_t AD1TCC2:1;
      uint64_t AD1TCC3:1;
      uint64_t AD1TCC4:1;
      uint64_t AD1TCPER:1;
      uint64_t AD1TDC2:1;
      uint64_t AD1TDC3:1;
      uint64_t AD1TDC4:1;
      uint64_t AD1TDPER:1;
      uint64_t AD1TEC2:1;
      uint64_t AD1TEC3:1;
      uint64_t AD1TEC4:1;
      uint64_t AD1TEPER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AD2MC1:1;
      uint64_t AD2MC2:1;
      uint64_t AD2MC3:1;
      uint64_t AD2MC4:1;
      uint64_t AD2MPER:1;
      uint64_t AD2EEV6:1;
      uint64_t AD2EEV7:1;
      uint64_t AD2EEV8:1;
      uint64_t AD2EEV9:1;
      uint64_t AD2EEV10:1;
      uint64_t AD2TAC2:1;
      uint64_t AD2TAC3:1;
      uint64_t AD2TAC4:1;
      uint64_t AD2TAPER:1;
      uint64_t AD2TBC2:1;
      uint64_t AD2TBC3:1;
      uint64_t AD2TBC4:1;
      uint64_t AD2TBPER:1;
      uint64_t AD2TCC2:1;
      uint64_t AD2TCC3:1;
      uint64_t AD2TCC4:1;
      uint64_t AD2TCPER:1;
      uint64_t AD2TCRST:1;
      uint64_t AD2TDC2:1;
      uint64_t AD2TDC3:1;
      uint64_t AD2TDC4:1;
      uint64_t AD2TDPER:1;
      uint64_t AD2TDRST:1;
      uint64_t AD2TEC2:1;
      uint64_t AD2TEC3:1;
      uint64_t AD2TEC4:1;
      uint64_t AD2TERST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AD1MC1:1;
      uint64_t AD1MC2:1;
      uint64_t AD1MC3:1;
      uint64_t AD1MC4:1;
      uint64_t AD1MPER:1;
      uint64_t AD1EEV1:1;
      uint64_t AD1EEV2:1;
      uint64_t AD1EEV3:1;
      uint64_t AD1EEV4:1;
      uint64_t AD1EEV5:1;
      uint64_t AD1TAC2:1;
      uint64_t AD1TAC3:1;
      uint64_t AD1TAC4:1;
      uint64_t AD1TAPER:1;
      uint64_t AD1TARST:1;
      uint64_t AD1TBC2:1;
      uint64_t AD1TBC3:1;
      uint64_t AD1TBC4:1;
      uint64_t AD1TBPER:1;
      uint64_t AD1TBRST:1;
      uint64_t AD1TCC2:1;
      uint64_t AD1TCC3:1;
      uint64_t AD1TCC4:1;
      uint64_t AD1TCPER:1;
      uint64_t AD1TDC2:1;
      uint64_t AD1TDC3:1;
      uint64_t AD1TDC4:1;
      uint64_t AD1TDPER:1;
      uint64_t AD1TEC2:1;
      uint64_t AD1TEC3:1;
      uint64_t AD1TEC4:1;
      uint64_t AD1TEPER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC3R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AD2MC1:1;
      uint64_t AD2MC2:1;
      uint64_t AD2MC3:1;
      uint64_t AD2MC4:1;
      uint64_t AD2MPER:1;
      uint64_t AD2EEV6:1;
      uint64_t AD2EEV7:1;
      uint64_t AD2EEV8:1;
      uint64_t AD2EEV9:1;
      uint64_t AD2EEV10:1;
      uint64_t AD2TAC2:1;
      uint64_t AD2TAC3:1;
      uint64_t AD2TAC4:1;
      uint64_t AD2TAPER:1;
      uint64_t AD2TBC2:1;
      uint64_t AD2TBC3:1;
      uint64_t AD2TBC4:1;
      uint64_t AD2TBPER:1;
      uint64_t AD2TCC2:1;
      uint64_t AD2TCC3:1;
      uint64_t AD2TCC4:1;
      uint64_t AD2TCPER:1;
      uint64_t AD2TCRST:1;
      uint64_t AD2TDC2:1;
      uint64_t AD2TDC3:1;
      uint64_t AD2TDC4:1;
      uint64_t AD2TDPER:1;
      uint64_t AD2TDRST:1;
      uint64_t AD2TEC2:1;
      uint64_t AD2TEC3:1;
      uint64_t AD2TEC4:1;
      uint64_t AD2TERST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC4R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAL:1;
      uint64_t CALEN:1;
      uint64_t CALRTE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLLCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT1E:1;
      uint64_t FLT1P:1;
      uint64_t FLT1SRC:1;
      uint64_t FLT1F:4;
      uint64_t FLT1LCK:1;
      uint64_t FLT2E:1;
      uint64_t FLT2P:1;
      uint64_t FLT2SRC:1;
      uint64_t FLT2F:4;
      uint64_t FLT2LCK:1;
      uint64_t FLT3E:1;
      uint64_t FLT3P:1;
      uint64_t FLT3SRC:1;
      uint64_t FLT3F:4;
      uint64_t FLT3LCK:1;
      uint64_t FLT4E:1;
      uint64_t FLT4P:1;
      uint64_t FLT4SRC:1;
      uint64_t FLT4F:4;
      uint64_t FLT4LCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTINR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT5E:1;
      uint64_t FLT5P:1;
      uint64_t FLT5SRC:1;
      uint64_t FLT5F:4;
      uint64_t FLT5LCK:1;
      uint64_t reservedSpace0:16;
      uint64_t FLTSD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTINR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCR:1;
      uint64_t MICR:1;
      uint64_t MDIER:1;
      uint64_t MCNT:1;
      uint64_t MPER:1;
      uint64_t MREP:1;
      uint64_t MCMP1:1;
      uint64_t MCMP2:1;
      uint64_t MCMP3:1;
      uint64_t MCMP4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDMUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMxCR:1;
      uint64_t TIMxICR:1;
      uint64_t TIMxDIER:1;
      uint64_t TIMxCNT:1;
      uint64_t TIMxPER:1;
      uint64_t TIMxREP:1;
      uint64_t TIMxCMP1:1;
      uint64_t TIMxCMP2:1;
      uint64_t TIMxCMP3:1;
      uint64_t TIMxCMP4:1;
      uint64_t TIMx_DTxR:1;
      uint64_t TIMxSET1R:1;
      uint64_t TIMxRST1R:1;
      uint64_t TIMxSET2R:1;
      uint64_t TIMxRST2R:1;
      uint64_t TIMxEEFR1:1;
      uint64_t TIMxEEFR2:1;
      uint64_t TIMxRSTR:1;
      uint64_t TIMxCHPR:1;
      uint64_t TIMxOUTR:1;
      uint64_t TIMxFLTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDTxUPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BDMADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDMADR;

};

#define HRTIM_Common (*(volatile struct HRTIM_Common_tag *) 0x40017780)

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

#define DFSDM (*(volatile struct DFSDM_tag *) 0x40017000)

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

struct USART9_tag
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

#define USART9 (*(volatile struct USART9_tag *) 0x40011800)

struct USART10_tag
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

#define USART10 (*(volatile struct USART10_tag *) 0x40011c00)

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

#define FDCAN (*(volatile struct FDCAN_tag *) 0x4000a400)

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

  uint8_t res0[116];

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

  uint8_t res1[116];

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

  uint8_t res2[116];

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

  uint8_t res3[116];

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

  uint8_t res4[244];

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
  } __attribute__((aligned(4))) IPR39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISER3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISER4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICER3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICER4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISPR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IABR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IABR4;

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
  } __attribute__((aligned(4))) IPR40;

};

#define NVIC (*(volatile struct NVIC_tag *) 0xe000e100)

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
      uint64_t DBGSLEEP_CD:1;
      uint64_t DBGSTOP_CD:1;
      uint64_t DBGSTBY_CD:1;
      uint64_t reservedSpace0:4;
      uint64_t DBGSTOP_SRD:1;
      uint64_t DBGSTBY_SRD:1;
      uint64_t reservedSpace1:11;
      uint64_t TRACECLKEN:1;
      uint64_t CDDBGCKEN:1;
      uint64_t SRDDBGCKEN:1;
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
      uint64_t WWDG_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB3FZ1;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM2:1;
      uint64_t TIM3:1;
      uint64_t TIM4:1;
      uint64_t TIM5:1;
      uint64_t TIM6_bitfield:1;
      uint64_t TIM7_bitfield:1;
      uint64_t TIM12:1;
      uint64_t TIM13:1;
      uint64_t TIM14:1;
      uint64_t LPTIM1_bitfield:1;
      uint64_t reservedSpace0:11;
      uint64_t I2C1_bitfield:1;
      uint64_t I2C2_bitfield:1;
      uint64_t I2C3_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1LFZ1;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM1:1;
      uint64_t TIM8:1;
      uint64_t reservedSpace0:14;
      uint64_t TIM15:1;
      uint64_t TIM16:1;
      uint64_t TIM17:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2FZ1;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t I2C4_bitfield:1;
      uint64_t reservedSpace1:1;
      uint64_t LPTIM2_bitfield:1;
      uint64_t LPTIM3_bitfield:1;
      uint64_t reservedSpace2:5;
      uint64_t RTC_bitfield:1;
      uint64_t reservedSpace3:1;
      uint64_t WDGLSCD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB4FZ1;

};

#define DBGMCU (*(volatile struct DBGMCU_tag *) 0x5c001000)

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

struct OCTOSPI1_CONTROL_REGISTER_tag
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

#define OCTOSPI1_CONTROL_REGISTER (*(volatile struct OCTOSPI1_CONTROL_REGISTER_tag *) 0x52005000)

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

