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

struct DAC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN1:1;
      uint64_t reservedSpace0:1;
      uint64_t TEN1:1;
      uint64_t TSEL1:3;
      uint64_t WAVE1:2;
      uint64_t MAMP1:4;
      uint64_t DMAEN1:1;
      uint64_t DMAUDRIE1:1;
      uint64_t CEN1:1;
      uint64_t reservedSpace1:1;
      uint64_t EN2:1;
      uint64_t reservedSpace2:1;
      uint64_t TEN2:1;
      uint64_t TSEL2:3;
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

  uint8_t res6[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1S:4;
      uint64_t C2S:4;
      uint64_t C3S:4;
      uint64_t C4S:4;
      uint64_t C5S:4;
      uint64_t C6S:4;
      uint64_t C7S:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSELR;

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

  uint8_t res6[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1S:4;
      uint64_t C2S:4;
      uint64_t C3S:4;
      uint64_t C4S:4;
      uint64_t C5S:4;
      uint64_t C6S:4;
      uint64_t C7S:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSELR;

};

#define DMA2 (*(volatile struct DMA2_tag *) 0x40020400)

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
      uint64_t Polynomialcoefficients:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POL;

};

#define CRC (*(volatile struct CRC_tag *) 0x40023000)

struct LCD_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCDEN:1;
      uint64_t VSEL:1;
      uint64_t DUTY:3;
      uint64_t BIAS:2;
      uint64_t MUX_SEG:1;
      uint64_t BUFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HD:1;
      uint64_t SOFIE:1;
      uint64_t reservedSpace0:1;
      uint64_t UDDIE:1;
      uint64_t PON:3;
      uint64_t DEAD:3;
      uint64_t CC:3;
      uint64_t BLINKF:3;
      uint64_t BLINK:2;
      uint64_t DIV:4;
      uint64_t PS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENS:1;
      uint64_t SOF:1;
      uint64_t UDR:1;
      uint64_t UDD:1;
      uint64_t RDY:1;
      uint64_t FCRSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SOFC:1;
      uint64_t reservedSpace1:1;
      uint64_t UDDC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S00:1;
      uint64_t S01:1;
      uint64_t S02:1;
      uint64_t S03:1;
      uint64_t S04:1;
      uint64_t S05:1;
      uint64_t S06:1;
      uint64_t S07:1;
      uint64_t S08:1;
      uint64_t S09:1;
      uint64_t S10:1;
      uint64_t S11:1;
      uint64_t S12:1;
      uint64_t S13:1;
      uint64_t S14:1;
      uint64_t S15:1;
      uint64_t S16:1;
      uint64_t S17:1;
      uint64_t S18:1;
      uint64_t S19:1;
      uint64_t S20:1;
      uint64_t S21:1;
      uint64_t S22:1;
      uint64_t S23:1;
      uint64_t S24:1;
      uint64_t S25:1;
      uint64_t S26:1;
      uint64_t S27:1;
      uint64_t S28:1;
      uint64_t S29:1;
      uint64_t S30:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_COM0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S00:1;
      uint64_t S01:1;
      uint64_t S02:1;
      uint64_t S03:1;
      uint64_t S04:1;
      uint64_t S05:1;
      uint64_t S06:1;
      uint64_t S07:1;
      uint64_t S08:1;
      uint64_t S09:1;
      uint64_t S10:1;
      uint64_t S11:1;
      uint64_t S12:1;
      uint64_t S13:1;
      uint64_t S14:1;
      uint64_t S15:1;
      uint64_t S16:1;
      uint64_t S17:1;
      uint64_t S18:1;
      uint64_t S19:1;
      uint64_t S20:1;
      uint64_t S21:1;
      uint64_t S22:1;
      uint64_t S23:1;
      uint64_t S24:1;
      uint64_t S25:1;
      uint64_t S26:1;
      uint64_t S27:1;
      uint64_t S28:1;
      uint64_t S29:1;
      uint64_t S30:1;
      uint64_t S31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_COM1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S00:1;
      uint64_t S01:1;
      uint64_t S02:1;
      uint64_t S03:1;
      uint64_t S04:1;
      uint64_t S05:1;
      uint64_t S06:1;
      uint64_t S07:1;
      uint64_t S08:1;
      uint64_t S09:1;
      uint64_t S10:1;
      uint64_t S11:1;
      uint64_t S12:1;
      uint64_t S13:1;
      uint64_t S14:1;
      uint64_t S15:1;
      uint64_t S16:1;
      uint64_t S17:1;
      uint64_t S18:1;
      uint64_t S19:1;
      uint64_t S20:1;
      uint64_t S21:1;
      uint64_t S22:1;
      uint64_t S23:1;
      uint64_t S24:1;
      uint64_t S25:1;
      uint64_t S26:1;
      uint64_t S27:1;
      uint64_t S28:1;
      uint64_t S29:1;
      uint64_t S30:1;
      uint64_t S31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_COM2;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S00:1;
      uint64_t S01:1;
      uint64_t S02:1;
      uint64_t S03:1;
      uint64_t S04:1;
      uint64_t S05:1;
      uint64_t S06:1;
      uint64_t S07:1;
      uint64_t S08:1;
      uint64_t S09:1;
      uint64_t S10:1;
      uint64_t S11:1;
      uint64_t S12:1;
      uint64_t S13:1;
      uint64_t S14:1;
      uint64_t S15:1;
      uint64_t S16:1;
      uint64_t S17:1;
      uint64_t S18:1;
      uint64_t S19:1;
      uint64_t S20:1;
      uint64_t S21:1;
      uint64_t S22:1;
      uint64_t S23:1;
      uint64_t S24:1;
      uint64_t S25:1;
      uint64_t S26:1;
      uint64_t S27:1;
      uint64_t S28:1;
      uint64_t S29:1;
      uint64_t S30:1;
      uint64_t S31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_COM3;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S00:1;
      uint64_t S01:1;
      uint64_t S02:1;
      uint64_t S03:1;
      uint64_t S04:1;
      uint64_t S05:1;
      uint64_t S06:1;
      uint64_t S07:1;
      uint64_t S08:1;
      uint64_t S09:1;
      uint64_t S10:1;
      uint64_t S11:1;
      uint64_t S12:1;
      uint64_t S13:1;
      uint64_t S14:1;
      uint64_t S15:1;
      uint64_t S16:1;
      uint64_t S17:1;
      uint64_t S18:1;
      uint64_t S19:1;
      uint64_t S20:1;
      uint64_t S21:1;
      uint64_t S22:1;
      uint64_t S23:1;
      uint64_t S24:1;
      uint64_t S25:1;
      uint64_t S26:1;
      uint64_t S27:1;
      uint64_t S28:1;
      uint64_t S29:1;
      uint64_t S30:1;
      uint64_t S31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_COM4;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S00:1;
      uint64_t S01:1;
      uint64_t S02:1;
      uint64_t S03:1;
      uint64_t S04:1;
      uint64_t S05:1;
      uint64_t S06:1;
      uint64_t S07:1;
      uint64_t S08:1;
      uint64_t S09:1;
      uint64_t S10:1;
      uint64_t S11:1;
      uint64_t S12:1;
      uint64_t S13:1;
      uint64_t S14:1;
      uint64_t S15:1;
      uint64_t S16:1;
      uint64_t S17:1;
      uint64_t S18:1;
      uint64_t S19:1;
      uint64_t S20:1;
      uint64_t S21:1;
      uint64_t S22:1;
      uint64_t S23:1;
      uint64_t S24:1;
      uint64_t S25:1;
      uint64_t S26:1;
      uint64_t S27:1;
      uint64_t S28:1;
      uint64_t S29:1;
      uint64_t S30:1;
      uint64_t S31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_COM5;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S00:1;
      uint64_t S01:1;
      uint64_t S02:1;
      uint64_t S03:1;
      uint64_t S04:1;
      uint64_t S05:1;
      uint64_t S06:1;
      uint64_t S07:1;
      uint64_t S08:1;
      uint64_t S09:1;
      uint64_t S10:1;
      uint64_t S11:1;
      uint64_t S12:1;
      uint64_t S13:1;
      uint64_t S14:1;
      uint64_t S15:1;
      uint64_t S16:1;
      uint64_t S17:1;
      uint64_t S18:1;
      uint64_t S19:1;
      uint64_t S20:1;
      uint64_t S21:1;
      uint64_t S22:1;
      uint64_t S23:1;
      uint64_t S24:1;
      uint64_t S25:1;
      uint64_t S26:1;
      uint64_t S27:1;
      uint64_t S28:1;
      uint64_t S29:1;
      uint64_t S30:1;
      uint64_t S31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_COM6;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S00:1;
      uint64_t S01:1;
      uint64_t S02:1;
      uint64_t S03:1;
      uint64_t S04:1;
      uint64_t S05:1;
      uint64_t S06:1;
      uint64_t S07:1;
      uint64_t S08:1;
      uint64_t S09:1;
      uint64_t S10:1;
      uint64_t S11:1;
      uint64_t S12:1;
      uint64_t S13:1;
      uint64_t S14:1;
      uint64_t S15:1;
      uint64_t S16:1;
      uint64_t S17:1;
      uint64_t S18:1;
      uint64_t S19:1;
      uint64_t S20:1;
      uint64_t S21:1;
      uint64_t S22:1;
      uint64_t S23:1;
      uint64_t S24:1;
      uint64_t S25:1;
      uint64_t S26:1;
      uint64_t S27:1;
      uint64_t S28:1;
      uint64_t S29:1;
      uint64_t S30:1;
      uint64_t S31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_COM7;

};

#define LCD (*(volatile struct LCD_tag *) 0x40002400)

struct TSC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSCE:1;
      uint64_t START:1;
      uint64_t AM:1;
      uint64_t SYNCPOL:1;
      uint64_t IODEF:1;
      uint64_t MCV:3;
      uint64_t reservedSpace0:4;
      uint64_t PGPSC:3;
      uint64_t SSPSC:1;
      uint64_t SSE:1;
      uint64_t SSD:7;
      uint64_t CTPL:4;
      uint64_t CTPH:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOAIE:1;
      uint64_t MCEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOAIC:1;
      uint64_t MCEIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOAF:1;
      uint64_t MCEF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_IO1:1;
      uint64_t G1_IO2:1;
      uint64_t G1_IO3:1;
      uint64_t G1_IO4:1;
      uint64_t G2_IO1:1;
      uint64_t G2_IO2:1;
      uint64_t G2_IO3:1;
      uint64_t G2_IO4:1;
      uint64_t G3_IO1:1;
      uint64_t G3_IO2:1;
      uint64_t G3_IO3:1;
      uint64_t G3_IO4:1;
      uint64_t G4_IO1:1;
      uint64_t G4_IO2:1;
      uint64_t G4_IO3:1;
      uint64_t G4_IO4:1;
      uint64_t G5_IO1:1;
      uint64_t G5_IO2:1;
      uint64_t G5_IO3:1;
      uint64_t G5_IO4:1;
      uint64_t G6_IO1:1;
      uint64_t G6_IO2:1;
      uint64_t G6_IO3:1;
      uint64_t G6_IO4:1;
      uint64_t G7_IO1:1;
      uint64_t G7_IO2:1;
      uint64_t G7_IO3:1;
      uint64_t G7_IO4:1;
      uint64_t G8_IO1:1;
      uint64_t G8_IO2:1;
      uint64_t G8_IO3:1;
      uint64_t G8_IO4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOHCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_IO1:1;
      uint64_t G1_IO2:1;
      uint64_t G1_IO3:1;
      uint64_t G1_IO4:1;
      uint64_t G2_IO1:1;
      uint64_t G2_IO2:1;
      uint64_t G2_IO3:1;
      uint64_t G2_IO4:1;
      uint64_t G3_IO1:1;
      uint64_t G3_IO2:1;
      uint64_t G3_IO3:1;
      uint64_t G3_IO4:1;
      uint64_t G4_IO1:1;
      uint64_t G4_IO2:1;
      uint64_t G4_IO3:1;
      uint64_t G4_IO4:1;
      uint64_t G5_IO1:1;
      uint64_t G5_IO2:1;
      uint64_t G5_IO3:1;
      uint64_t G5_IO4:1;
      uint64_t G6_IO1:1;
      uint64_t G6_IO2:1;
      uint64_t G6_IO3:1;
      uint64_t G6_IO4:1;
      uint64_t G7_IO1:1;
      uint64_t G7_IO2:1;
      uint64_t G7_IO3:1;
      uint64_t G7_IO4:1;
      uint64_t G8_IO1:1;
      uint64_t G8_IO2:1;
      uint64_t G8_IO3:1;
      uint64_t G8_IO4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOASCR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_IO1:1;
      uint64_t G1_IO2:1;
      uint64_t G1_IO3:1;
      uint64_t G1_IO4:1;
      uint64_t G2_IO1:1;
      uint64_t G2_IO2:1;
      uint64_t G2_IO3:1;
      uint64_t G2_IO4:1;
      uint64_t G3_IO1:1;
      uint64_t G3_IO2:1;
      uint64_t G3_IO3:1;
      uint64_t G3_IO4:1;
      uint64_t G4_IO1:1;
      uint64_t G4_IO2:1;
      uint64_t G4_IO3:1;
      uint64_t G4_IO4:1;
      uint64_t G5_IO1:1;
      uint64_t G5_IO2:1;
      uint64_t G5_IO3:1;
      uint64_t G5_IO4:1;
      uint64_t G6_IO1:1;
      uint64_t G6_IO2:1;
      uint64_t G6_IO3:1;
      uint64_t G6_IO4:1;
      uint64_t G7_IO1:1;
      uint64_t G7_IO2:1;
      uint64_t G7_IO3:1;
      uint64_t G7_IO4:1;
      uint64_t G8_IO1:1;
      uint64_t G8_IO2:1;
      uint64_t G8_IO3:1;
      uint64_t G8_IO4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOSCR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_IO1:1;
      uint64_t G1_IO2:1;
      uint64_t G1_IO3:1;
      uint64_t G1_IO4:1;
      uint64_t G2_IO1:1;
      uint64_t G2_IO2:1;
      uint64_t G2_IO3:1;
      uint64_t G2_IO4:1;
      uint64_t G3_IO1:1;
      uint64_t G3_IO2:1;
      uint64_t G3_IO3:1;
      uint64_t G3_IO4:1;
      uint64_t G4_IO1:1;
      uint64_t G4_IO2:1;
      uint64_t G4_IO3:1;
      uint64_t G4_IO4:1;
      uint64_t G5_IO1:1;
      uint64_t G5_IO2:1;
      uint64_t G5_IO3:1;
      uint64_t G5_IO4:1;
      uint64_t G6_IO1:1;
      uint64_t G6_IO2:1;
      uint64_t G6_IO3:1;
      uint64_t G6_IO4:1;
      uint64_t G7_IO1:1;
      uint64_t G7_IO2:1;
      uint64_t G7_IO3:1;
      uint64_t G7_IO4:1;
      uint64_t G8_IO1:1;
      uint64_t G8_IO2:1;
      uint64_t G8_IO3:1;
      uint64_t G8_IO4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCCR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1E:1;
      uint64_t G2E:1;
      uint64_t G3E:1;
      uint64_t G4E:1;
      uint64_t G5E:1;
      uint64_t G6E:1;
      uint64_t G7E:1;
      uint64_t G8E:1;
      uint64_t reservedSpace0:8;
      uint64_t G1S:1;
      uint64_t G2S:1;
      uint64_t G3S:1;
      uint64_t G4S:1;
      uint64_t G5S:1;
      uint64_t G6S:1;
      uint64_t G7S:1;
      uint64_t G8S:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOGCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOG1CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOG2CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOG3CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOG4CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOG5CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOG6CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOG7CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOG8CR;

};

#define TSC (*(volatile struct TSC_tag *) 0x40024000)

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
      uint64_t WDGTB:2;
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

struct COMP_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP1_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t COMP1_PWRMODE:2;
      uint64_t COMP1_INMSEL:3;
      uint64_t COMP1_INPSEL:1;
      uint64_t reservedSpace1:7;
      uint64_t COMP1_POLARITY:1;
      uint64_t COMP1_HYST:2;
      uint64_t COMP1_BLANKING:3;
      uint64_t reservedSpace2:1;
      uint64_t COMP1_BRGEN:1;
      uint64_t COMP1_SCALEN:1;
      uint64_t reservedSpace3:6;
      uint64_t COMP1_VALUE:1;
      uint64_t COMP1_LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP1_CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP2_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t COMP2_PWRMODE:2;
      uint64_t COMP2_INMSEL:3;
      uint64_t COMP2_INPSEL:1;
      uint64_t reservedSpace1:1;
      uint64_t COMP2_WINMODE:1;
      uint64_t reservedSpace2:5;
      uint64_t COMP2_POLARITY:1;
      uint64_t COMP2_HYST:2;
      uint64_t COMP2_BLANKING:3;
      uint64_t reservedSpace3:1;
      uint64_t COMP2_BRGEN:1;
      uint64_t COMP2_SCALEN:1;
      uint64_t reservedSpace4:6;
      uint64_t COMP2_VALUE:1;
      uint64_t COMP2_LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP2_CSR;

};

#define COMP (*(volatile struct COMP_tag *) 0x40010200)

struct FIREWALL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t ADD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSSA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t LENG:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t ADD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVDSSA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t LENG:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVDSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t ADD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VDSSA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t LENG:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VDSL;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPA:1;
      uint64_t VDS:1;
      uint64_t VDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

};

#define FIREWALL (*(volatile struct FIREWALL_tag *) 0x40011c00)

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
      uint64_t LATENCY:3;
      uint64_t reservedSpace0:5;
      uint64_t PRFTEN:1;
      uint64_t ICEN:1;
      uint64_t DCEN:1;
      uint64_t ICRST:1;
      uint64_t DCRST:1;
      uint64_t RUN_PD:1;
      uint64_t SLEEP_PD:1;
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
      uint64_t PNB:8;
      uint64_t BKER:1;
      uint64_t reservedSpace0:3;
      uint64_t MER2:1;
      uint64_t START:1;
      uint64_t OPTSTRT:1;
      uint64_t FSTPG:1;
      uint64_t reservedSpace1:5;
      uint64_t EOPIE:1;
      uint64_t ERRIE:1;
      uint64_t RDERRIE:1;
      uint64_t OBL_LAUNCH:1;
      uint64_t reservedSpace2:2;
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
      uint64_t BK_ECC:1;
      uint64_t SYSF_ECC:1;
      uint64_t reservedSpace0:3;
      uint64_t ECCIE:1;
      uint64_t reservedSpace1:5;
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
      uint64_t reservedSpace1:2;
      uint64_t IDWG_SW:1;
      uint64_t IWDG_STOP:1;
      uint64_t IWDG_STDBY:1;
      uint64_t WWDG_SW:1;
      uint64_t BFB2:1;
      uint64_t DUALBANK:1;
      uint64_t reservedSpace2:1;
      uint64_t nBOOT1:1;
      uint64_t SRAM2_PE:1;
      uint64_t SRAM2_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCROP1_STRT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCROP1SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCROP1_END:16;
      uint64_t reservedSpace0:15;
      uint64_t PCROP_RDP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCROP1ER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRP1A_STRT:8;
      uint64_t reservedSpace0:8;
      uint64_t WRP1A_END:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRP1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRP1B_END:8;
      uint64_t reservedSpace0:8;
      uint64_t WRP1B_STRT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRP1BR;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCROP2_STRT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCROP2SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCROP2_END:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCROP2ER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRP2A_STRT:8;
      uint64_t reservedSpace0:8;
      uint64_t WRP2A_END:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRP2AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRP2B_STRT:8;
      uint64_t reservedSpace0:8;
      uint64_t WRP2B_END:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRP2BR;

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
      uint64_t DBG_I2C3_STOP:1;
      uint64_t reservedSpace2:1;
      uint64_t DBG_CAN_STOP:1;
      uint64_t reservedSpace3:5;
      uint64_t DBG_LPTIMER_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1_FZR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DBG_LPTIM2_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1_FZR2;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2_FZR;

};

#define DBGMCU (*(volatile struct DBGMCU_tag *) 0xe0042000)

struct QUADSPI_tag
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
      uint64_t SSHIFT:1;
      uint64_t reservedSpace0:1;
      uint64_t DFM:1;
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
      uint64_t PRESCALER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKMODE:1;
      uint64_t reservedSpace0:7;
      uint64_t CSHT:3;
      uint64_t reservedSpace1:5;
      uint64_t FSIZE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEF:1;
      uint64_t TCF:1;
      uint64_t FTF:1;
      uint64_t SMF:1;
      uint64_t TOF:1;
      uint64_t BUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t FLEVEL:7;
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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INSTRUCTION:8;
      uint64_t IMODE:2;
      uint64_t ADMODE:2;
      uint64_t ADSIZE:2;
      uint64_t ABMODE:2;
      uint64_t ABSIZE:2;
      uint64_t DCYC:5;
      uint64_t reservedSpace0:1;
      uint64_t DMODE:2;
      uint64_t FMODE:2;
      uint64_t SIOO:1;
      uint64_t reservedSpace1:1;
      uint64_t DHHC:1;
      uint64_t DDRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTERNATE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ABR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSMKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSMAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTERVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMEOUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPTR;

};

#define QUADSPI (*(volatile struct QUADSPI_tag *) 0xa0001000)

struct RCC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSION:1;
      uint64_t MSIRDY:1;
      uint64_t MSIPLLEN:1;
      uint64_t MSIRGSEL:1;
      uint64_t MSIRANGE:4;
      uint64_t HSION:1;
      uint64_t HSIKERON:1;
      uint64_t HSIRDY:1;
      uint64_t HSIASFS:1;
      uint64_t reservedSpace0:4;
      uint64_t HSEON:1;
      uint64_t HSERDY:1;
      uint64_t HSEBYP:1;
      uint64_t CSSON:1;
      uint64_t reservedSpace1:4;
      uint64_t PLLON:1;
      uint64_t PLLRDY:1;
      uint64_t PLLSAI1ON:1;
      uint64_t PLLSAI1RDY:1;
      uint64_t PLLSAI2ON:1;
      uint64_t PLLSAI2RDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSICAL:8;
      uint64_t MSITRIM:8;
      uint64_t HSICAL:8;
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
      uint64_t reservedSpace0:1;
      uint64_t STOPWUCK:1;
      uint64_t reservedSpace1:8;
      uint64_t MCOSEL:3;
      uint64_t reservedSpace2:1;
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
      uint64_t PLLM:3;
      uint64_t reservedSpace1:1;
      uint64_t PLLN:7;
      uint64_t reservedSpace2:1;
      uint64_t PLLPEN:1;
      uint64_t PLLP:1;
      uint64_t reservedSpace3:2;
      uint64_t PLLQEN:1;
      uint64_t PLLQ:2;
      uint64_t reservedSpace4:1;
      uint64_t PLLREN:1;
      uint64_t PLLR:2;
      uint64_t PLLPDIV:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PLLSAI1N:7;
      uint64_t reservedSpace1:1;
      uint64_t PLLSAI1PEN:1;
      uint64_t PLLSAI1P:1;
      uint64_t reservedSpace2:2;
      uint64_t PLLSAI1QEN:1;
      uint64_t PLLSAI1Q:2;
      uint64_t reservedSpace3:1;
      uint64_t PLLSAI1REN:1;
      uint64_t PLLSAI1R:2;
      uint64_t PLLSAI1PDIV:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLSAI1CFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PLLSAI2N:7;
      uint64_t reservedSpace1:1;
      uint64_t PLLSAI2PEN:1;
      uint64_t PLLSAI2P:1;
      uint64_t reservedSpace2:6;
      uint64_t PLLSAI2REN:1;
      uint64_t PLLSAI2R:2;
      uint64_t PLLSAI2PDIV:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLSAI2CFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSIRDYIE:1;
      uint64_t LSERDYIE:1;
      uint64_t MSIRDYIE:1;
      uint64_t HSIRDYIE:1;
      uint64_t HSERDYIE:1;
      uint64_t PLLRDYIE:1;
      uint64_t PLLSAI1RDYIE:1;
      uint64_t PLLSAI2RDYIE:1;
      uint64_t reservedSpace0:1;
      uint64_t LSECSSIE:1;
      uint64_t HSI48RDYIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSIRDYF:1;
      uint64_t LSERDYF:1;
      uint64_t MSIRDYF:1;
      uint64_t HSIRDYF:1;
      uint64_t HSERDYF:1;
      uint64_t PLLRDYF:1;
      uint64_t PLLSAI1RDYF:1;
      uint64_t PLLSAI2RDYF:1;
      uint64_t CSSF:1;
      uint64_t LSECSSF:1;
      uint64_t HSI48RDYF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSIRDYC:1;
      uint64_t LSERDYC:1;
      uint64_t MSIRDYC:1;
      uint64_t HSIRDYC:1;
      uint64_t HSERDYC:1;
      uint64_t PLLRDYC:1;
      uint64_t PLLSAI1RDYC:1;
      uint64_t PLLSAI2RDYC:1;
      uint64_t CSSC:1;
      uint64_t LSECSSC:1;
      uint64_t HSI48RDYC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CICR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1RST:1;
      uint64_t DMA2RST:1;
      uint64_t reservedSpace0:6;
      uint64_t FLASHRST:1;
      uint64_t reservedSpace1:3;
      uint64_t CRCRST:1;
      uint64_t reservedSpace2:3;
      uint64_t TSCRST:1;
      uint64_t DMA2DRST:1;
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
      uint64_t GPIOHRST:1;
      uint64_t GPIOIRST:1;
      uint64_t reservedSpace0:3;
      uint64_t OTGFSRST:1;
      uint64_t ADCRST:1;
      uint64_t DCMIRST:1;
      uint64_t reservedSpace1:1;
      uint64_t AESRST:1;
      uint64_t HASH1RST:1;
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
      uint64_t QSPIRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB3RSTR;

  uint8_t res1[4];

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
      uint64_t reservedSpace0:3;
      uint64_t LCDRST:1;
      uint64_t reservedSpace1:4;
      uint64_t SPI2RST:1;
      uint64_t SPI3RST:1;
      uint64_t reservedSpace2:1;
      uint64_t USART2RST:1;
      uint64_t USART3RST:1;
      uint64_t UART4RST:1;
      uint64_t UART5RST:1;
      uint64_t I2C1RST:1;
      uint64_t I2C2RST:1;
      uint64_t I2C3RST:1;
      uint64_t CRSRST:1;
      uint64_t CAN1RST:1;
      uint64_t CAN2RST:1;
      uint64_t reservedSpace3:1;
      uint64_t PWRRST:1;
      uint64_t DAC1RST:1;
      uint64_t OPAMPRST:1;
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
      uint64_t SWPMI1RST:1;
      uint64_t reservedSpace0:2;
      uint64_t LPTIM2RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1RSTR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCFGRST:1;
      uint64_t reservedSpace0:9;
      uint64_t SDMMCRST:1;
      uint64_t TIM1RST:1;
      uint64_t SPI1RST:1;
      uint64_t TIM8RST:1;
      uint64_t USART1RST:1;
      uint64_t reservedSpace1:1;
      uint64_t TIM15RST:1;
      uint64_t TIM16RST:1;
      uint64_t TIM17RST:1;
      uint64_t reservedSpace2:2;
      uint64_t SAI1RST:1;
      uint64_t SAI2RST:1;
      uint64_t reservedSpace3:1;
      uint64_t DFSDMRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2RSTR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1EN:1;
      uint64_t DMA2EN:1;
      uint64_t reservedSpace0:6;
      uint64_t FLASHEN:1;
      uint64_t reservedSpace1:3;
      uint64_t CRCEN:1;
      uint64_t reservedSpace2:3;
      uint64_t TSCEN:1;
      uint64_t DMA2DEN:1;
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
      uint64_t GPIOHEN:1;
      uint64_t GPIOIEN:1;
      uint64_t reservedSpace0:3;
      uint64_t OTGFSEN:1;
      uint64_t ADCEN:1;
      uint64_t DCMIEN:1;
      uint64_t reservedSpace1:1;
      uint64_t AESEN:1;
      uint64_t HASH1EN:1;
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
      uint64_t QSPIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB3ENR;

  uint8_t res3[4];

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
      uint64_t reservedSpace0:3;
      uint64_t LCDEN:1;
      uint64_t RTCAPBEN:1;
      uint64_t WWDGEN:1;
      uint64_t reservedSpace1:2;
      uint64_t SPI2EN:1;
      uint64_t SP3EN:1;
      uint64_t reservedSpace2:1;
      uint64_t USART2EN:1;
      uint64_t USART3EN:1;
      uint64_t UART4EN:1;
      uint64_t UART5EN:1;
      uint64_t I2C1EN:1;
      uint64_t I2C2EN:1;
      uint64_t I2C3EN:1;
      uint64_t CRSEN:1;
      uint64_t CAN1EN:1;
      uint64_t CAN2EN:1;
      uint64_t reservedSpace3:1;
      uint64_t PWREN:1;
      uint64_t DAC1EN:1;
      uint64_t OPAMPEN:1;
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
      uint64_t SWPMI1EN:1;
      uint64_t reservedSpace0:2;
      uint64_t LPTIM2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1ENR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCFGEN:1;
      uint64_t reservedSpace0:6;
      uint64_t FIREWALLEN:1;
      uint64_t reservedSpace1:2;
      uint64_t SDMMCEN:1;
      uint64_t TIM1EN:1;
      uint64_t SPI1EN:1;
      uint64_t TIM8EN:1;
      uint64_t USART1EN:1;
      uint64_t reservedSpace2:1;
      uint64_t TIM15EN:1;
      uint64_t TIM16EN:1;
      uint64_t TIM17EN:1;
      uint64_t reservedSpace3:2;
      uint64_t SAI1EN:1;
      uint64_t SAI2EN:1;
      uint64_t reservedSpace4:1;
      uint64_t DFSDMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2ENR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1SMEN:1;
      uint64_t DMA2SMEN:1;
      uint64_t reservedSpace0:6;
      uint64_t FLASHSMEN:1;
      uint64_t SRAM1SMEN:1;
      uint64_t reservedSpace1:2;
      uint64_t CRCSMEN:1;
      uint64_t reservedSpace2:3;
      uint64_t TSCSMEN:1;
      uint64_t DMA2DSMEN:1;
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
      uint64_t GPIOHSMEN:1;
      uint64_t GPIOISMEN:1;
      uint64_t SRAM2SMEN:1;
      uint64_t reservedSpace0:2;
      uint64_t OTGFSSMEN:1;
      uint64_t ADCFSSMEN:1;
      uint64_t DCMISMEN:1;
      uint64_t reservedSpace1:1;
      uint64_t AESSMEN:1;
      uint64_t HASH1SMEN:1;
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
      uint64_t QSPISMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB3SMENR;

  uint8_t res5[4];

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
      uint64_t reservedSpace0:3;
      uint64_t LCDSMEN:1;
      uint64_t RTCAPBSMEN:1;
      uint64_t WWDGSMEN:1;
      uint64_t reservedSpace1:2;
      uint64_t SPI2SMEN:1;
      uint64_t SP3SMEN:1;
      uint64_t reservedSpace2:1;
      uint64_t USART2SMEN:1;
      uint64_t USART3SMEN:1;
      uint64_t UART4SMEN:1;
      uint64_t UART5SMEN:1;
      uint64_t I2C1SMEN:1;
      uint64_t I2C2SMEN:1;
      uint64_t I2C3SMEN:1;
      uint64_t reservedSpace3:1;
      uint64_t CAN1SMEN:1;
      uint64_t CAN2SMEN:1;
      uint64_t reservedSpace4:1;
      uint64_t PWRSMEN:1;
      uint64_t DAC1SMEN:1;
      uint64_t OPAMPSMEN:1;
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
      uint64_t SWPMI1SMEN:1;
      uint64_t reservedSpace0:2;
      uint64_t LPTIM2SMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1SMENR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCFGSMEN:1;
      uint64_t reservedSpace0:9;
      uint64_t SDMMCSMEN:1;
      uint64_t TIM1SMEN:1;
      uint64_t SPI1SMEN:1;
      uint64_t TIM8SMEN:1;
      uint64_t USART1SMEN:1;
      uint64_t reservedSpace1:1;
      uint64_t TIM15SMEN:1;
      uint64_t TIM16SMEN:1;
      uint64_t TIM17SMEN:1;
      uint64_t reservedSpace2:2;
      uint64_t SAI1SMEN:1;
      uint64_t SAI2SMEN:1;
      uint64_t reservedSpace3:1;
      uint64_t DFSDMSMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2SMENR;

  uint8_t res6[4];

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
      uint64_t LPTIM2SEL:2;
      uint64_t SAI1SEL:2;
      uint64_t SAI2SEL:2;
      uint64_t CLK48SEL:2;
      uint64_t ADCSEL:2;
      uint64_t SWPMI1SEL:1;
      uint64_t DFSDMSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCIPR;

  uint8_t res7[4];

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
      uint64_t BDRST:1;
      uint64_t reservedSpace2:7;
      uint64_t LSCOEN:1;
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
      uint64_t reservedSpace0:6;
      uint64_t MSISRANGE:4;
      uint64_t reservedSpace1:11;
      uint64_t RMVF:1;
      uint64_t FIREWALLRSTF:1;
      uint64_t OBLRSTF:1;
      uint64_t PINRSTF:1;
      uint64_t BORRSTF:1;
      uint64_t SFTRSTF:1;
      uint64_t IWDGRSTF:1;
      uint64_t WWDGRSTF:1;
      uint64_t LPWRSTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

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
      uint64_t PVME1:1;
      uint64_t PVME2:1;
      uint64_t PVME3:1;
      uint64_t PVME4:1;
      uint64_t reservedSpace0:1;
      uint64_t IOSV:1;
      uint64_t USV:1;
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
      uint64_t reservedSpace2:4;
      uint64_t EWF:1;
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
      uint64_t CWUF1:1;
      uint64_t CWUF2:1;
      uint64_t CWUF3:1;
      uint64_t CWUF4:1;
      uint64_t CWUF5:1;
      uint64_t reservedSpace0:3;
      uint64_t CSBF:1;
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
      uint64_t WUF1:1;
      uint64_t WUF2:1;
      uint64_t WUF3:1;
      uint64_t WUF4:1;
      uint64_t WUF5:1;
      uint64_t reservedSpace0:3;
      uint64_t SBF:1;
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
      uint64_t PU14:1;
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
      uint64_t PD13:1;
      uint64_t PD14:1;
      uint64_t PD15:1;
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
      uint64_t PU11:1;
      uint64_t PU12:1;
      uint64_t PU13:1;
      uint64_t PU14:1;
      uint64_t PU15:1;
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
      uint64_t PD11:1;
      uint64_t PD12:1;
      uint64_t PD13:1;
      uint64_t PD14:1;
      uint64_t PD15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PU0:1;
      uint64_t PU1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUCRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD0:1;
      uint64_t PD1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCRH;

};

#define PWR (*(volatile struct PWR_tag *) 0x40007000)

struct SYSCFG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEM_MODE:3;
      uint64_t QFS:1;
      uint64_t reservedSpace0:4;
      uint64_t FB_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEMRMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWDIS:1;
      uint64_t reservedSpace0:7;
      uint64_t BOOSTEN:1;
      uint64_t reservedSpace1:7;
      uint64_t I2C_PB6_FMP:1;
      uint64_t I2C_PB7_FMP:1;
      uint64_t I2C_PB8_FMP:1;
      uint64_t I2C_PB9_FMP:1;
      uint64_t I2C1_FMP:1;
      uint64_t I2C2_FMP:1;
      uint64_t I2C3_FMP:1;
      uint64_t reservedSpace2:3;
      uint64_t FPU_IE:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTI0:3;
      uint64_t reservedSpace0:1;
      uint64_t EXTI1:3;
      uint64_t reservedSpace1:1;
      uint64_t EXTI2:3;
      uint64_t reservedSpace2:1;
      uint64_t EXTI3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTICR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTI4:3;
      uint64_t reservedSpace0:1;
      uint64_t EXTI5:3;
      uint64_t reservedSpace1:1;
      uint64_t EXTI6:3;
      uint64_t reservedSpace2:1;
      uint64_t EXTI7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTICR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTI8:3;
      uint64_t reservedSpace0:1;
      uint64_t EXTI9:3;
      uint64_t reservedSpace1:1;
      uint64_t EXTI10:3;
      uint64_t reservedSpace2:1;
      uint64_t EXTI11:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTICR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTI12:3;
      uint64_t reservedSpace0:1;
      uint64_t EXTI13:3;
      uint64_t reservedSpace1:1;
      uint64_t EXTI14:3;
      uint64_t reservedSpace2:1;
      uint64_t EXTI15:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTICR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAM2ER:1;
      uint64_t SRAM2BSY:1;
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
      uint64_t P0WP:1;
      uint64_t P1WP:1;
      uint64_t P2WP:1;
      uint64_t P3WP:1;
      uint64_t P4WP:1;
      uint64_t P5WP:1;
      uint64_t P6WP:1;
      uint64_t P7WP:1;
      uint64_t P8WP:1;
      uint64_t P9WP:1;
      uint64_t P10WP:1;
      uint64_t P11WP:1;
      uint64_t P12WP:1;
      uint64_t P13WP:1;
      uint64_t P14WP:1;
      uint64_t P15WP:1;
      uint64_t P16WP:1;
      uint64_t P17WP:1;
      uint64_t P18WP:1;
      uint64_t P19WP:1;
      uint64_t P20WP:1;
      uint64_t P21WP:1;
      uint64_t P22WP:1;
      uint64_t P23WP:1;
      uint64_t P24WP:1;
      uint64_t P25WP:1;
      uint64_t P26WP:1;
      uint64_t P27WP:1;
      uint64_t P28WP:1;
      uint64_t P29WP:1;
      uint64_t P30WP:1;
      uint64_t P31WP:1;
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

struct DFSDM1_tag
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
  } __attribute__((aligned(4))) CHCFG0R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DTRBS:5;
      uint64_t OFFSET:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG0R2;

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
  } __attribute__((aligned(4))) AWSCD0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHWDAT0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDAT0:16;
      uint64_t INDAT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHDATIN0R;

  uint8_t res0[12];

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
  } __attribute__((aligned(4))) CHCFG1R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DTRBS:5;
      uint64_t OFFSET:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG1R2;

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
  } __attribute__((aligned(4))) AWSCD1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHWDAT1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDAT0:16;
      uint64_t INDAT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHDATIN1R;

  uint8_t res1[12];

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
  } __attribute__((aligned(4))) CHCFG2R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DTRBS:5;
      uint64_t OFFSET:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG2R2;

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
  } __attribute__((aligned(4))) AWSCD2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHWDAT2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDAT0:16;
      uint64_t INDAT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHDATIN2R;

  uint8_t res2[12];

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
  } __attribute__((aligned(4))) CHCFG3R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DTRBS:5;
      uint64_t OFFSET:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG3R2;

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
  } __attribute__((aligned(4))) AWSCD3R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHWDAT3R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDAT0:16;
      uint64_t INDAT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHDATIN3R;

  uint8_t res3[12];

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
  } __attribute__((aligned(4))) CHCFG4R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DTRBS:5;
      uint64_t OFFSET:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG4R2;

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
  } __attribute__((aligned(4))) AWSCD4R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHWDAT4R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDAT0:16;
      uint64_t INDAT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHDATIN4R;

  uint8_t res4[12];

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
  } __attribute__((aligned(4))) CHCFG5R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DTRBS:5;
      uint64_t OFFSET:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG5R2;

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
  } __attribute__((aligned(4))) AWSCD5R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHWDAT5R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDAT0:16;
      uint64_t INDAT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHDATIN5R;

  uint8_t res5[12];

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
  } __attribute__((aligned(4))) CHCFG6R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DTRBS:5;
      uint64_t OFFSET:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG6R2;

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
  } __attribute__((aligned(4))) AWSCD6R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHWDAT6R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDAT0:16;
      uint64_t INDAT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHDATIN6R;

  uint8_t res6[12];

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
  } __attribute__((aligned(4))) CHCFG7R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DTRBS:5;
      uint64_t OFFSET:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCFG7R2;

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
  } __attribute__((aligned(4))) AWSCD7R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHWDAT7R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDAT0:16;
      uint64_t INDAT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHDATIN7R;

  uint8_t res7[12];

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
  } __attribute__((aligned(4))) DFSDM0_CR1;

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
  } __attribute__((aligned(4))) DFSDM0_CR2;

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
  } __attribute__((aligned(4))) DFSDM0_ISR;

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
  } __attribute__((aligned(4))) DFSDM0_ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JCHG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM0_JCHGR;

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
  } __attribute__((aligned(4))) DFSDM0_FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATACH:3;
      uint64_t reservedSpace0:5;
      uint64_t JDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM0_JDATAR;

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
  } __attribute__((aligned(4))) DFSDM0_RDATAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKAWH:4;
      uint64_t reservedSpace0:4;
      uint64_t AWHT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM0_AWHTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKAWL:4;
      uint64_t reservedSpace0:4;
      uint64_t AWLT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM0_AWLTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWLTF:8;
      uint64_t AWHTF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM0_AWSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRAWLTF:8;
      uint64_t CLRAWHTF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM0_AWCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXMAXCH:3;
      uint64_t reservedSpace0:5;
      uint64_t EXMAX:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM0_EXMAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXMINCH:3;
      uint64_t reservedSpace0:5;
      uint64_t EXMIN:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM0_EXMIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CNVCNT:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM0_CNVTIMR;

  uint8_t res8[196];

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
  } __attribute__((aligned(4))) DFSDM1_CR1;

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
  } __attribute__((aligned(4))) DFSDM1_CR2;

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
  } __attribute__((aligned(4))) DFSDM1_ISR;

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
  } __attribute__((aligned(4))) DFSDM1_JCHGR;

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
  } __attribute__((aligned(4))) DFSDM1_JDATAR;

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
  } __attribute__((aligned(4))) DFSDM1_RDATAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKAWH:4;
      uint64_t reservedSpace0:4;
      uint64_t AWHT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM1_AWHTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKAWL:4;
      uint64_t reservedSpace0:4;
      uint64_t AWLT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM1_AWLTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWLTF:8;
      uint64_t AWHTF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM1_AWSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRAWLTF:8;
      uint64_t CLRAWHTF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM1_AWCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXMAXCH:3;
      uint64_t reservedSpace0:5;
      uint64_t EXMAX:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM1_EXMAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXMINCH:3;
      uint64_t reservedSpace0:5;
      uint64_t EXMIN:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM1_EXMIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CNVCNT:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM1_CNVTIMR;

  uint8_t res9[196];

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
  } __attribute__((aligned(4))) DFSDM2_CR1;

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
  } __attribute__((aligned(4))) DFSDM2_CR2;

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
  } __attribute__((aligned(4))) DFSDM2_ISR;

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
  } __attribute__((aligned(4))) DFSDM2_ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JCHG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM2_JCHGR;

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
  } __attribute__((aligned(4))) DFSDM2_FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATACH:3;
      uint64_t reservedSpace0:5;
      uint64_t JDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM2_JDATAR;

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
  } __attribute__((aligned(4))) DFSDM2_RDATAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKAWH:4;
      uint64_t reservedSpace0:4;
      uint64_t AWHT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM2_AWHTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKAWL:4;
      uint64_t reservedSpace0:4;
      uint64_t AWLT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM2_AWLTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWLTF:8;
      uint64_t AWHTF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM2_AWSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRAWLTF:8;
      uint64_t CLRAWHTF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM2_AWCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXMAXCH:3;
      uint64_t reservedSpace0:5;
      uint64_t EXMAX:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM2_EXMAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXMINCH:3;
      uint64_t reservedSpace0:5;
      uint64_t EXMIN:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM2_EXMIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CNVCNT:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM2_CNVTIMR;

  uint8_t res10[196];

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
  } __attribute__((aligned(4))) DFSDM3_CR1;

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
  } __attribute__((aligned(4))) DFSDM3_CR2;

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
  } __attribute__((aligned(4))) DFSDM3_ISR;

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
  } __attribute__((aligned(4))) DFSDM3_ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JCHG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM3_JCHGR;

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
  } __attribute__((aligned(4))) DFSDM3_FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATACH:3;
      uint64_t reservedSpace0:5;
      uint64_t JDATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM3_JDATAR;

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
  } __attribute__((aligned(4))) DFSDM3_RDATAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKAWH:4;
      uint64_t reservedSpace0:4;
      uint64_t AWHT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM3_AWHTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKAWL:4;
      uint64_t reservedSpace0:4;
      uint64_t AWLT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM3_AWLTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWLTF:8;
      uint64_t AWHTF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM3_AWSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRAWLTF:8;
      uint64_t CLRAWHTF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM3_AWCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXMAXCH:3;
      uint64_t reservedSpace0:5;
      uint64_t EXMAX:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM3_EXMAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXMINCH:3;
      uint64_t reservedSpace0:5;
      uint64_t EXMIN:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM3_EXMIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CNVCNT:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSDM3_CNVTIMR;

};

#define DFSDM1 (*(volatile struct DFSDM1_tag *) 0x40016000)

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

};

#define AES (*(volatile struct AES_tag *) 0x50060000)

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
      uint64_t DFSDMCFG:1;
      uint64_t RES:2;
      uint64_t ALIGN:1;
      uint64_t EXTSEL:4;
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
      uint64_t OVSR:3;
      uint64_t OVSS:4;
      uint64_t TROVS:1;
      uint64_t ROVSM:1;
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
      uint64_t reservedSpace0:4;
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
      uint64_t JEXTSEL:4;
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
      uint64_t reservedSpace0:14;
      uint64_t OFFSET1_CH:5;
      uint64_t OFFSET1_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET2:12;
      uint64_t reservedSpace0:14;
      uint64_t OFFSET2_CH:5;
      uint64_t OFFSET2_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET3:12;
      uint64_t reservedSpace0:14;
      uint64_t OFFSET3_CH:5;
      uint64_t OFFSET3_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET4:12;
      uint64_t reservedSpace0:14;
      uint64_t OFFSET4_CH:5;
      uint64_t OFFSET4_EN:1;
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
      uint64_t DIFSEL_1_15:15;
      uint64_t DIFSEL_16_18:3;
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

};

#define ADC1 (*(volatile struct ADC1_tag *) 0x50040000)

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
      uint64_t DFSDMCFG:1;
      uint64_t RES:2;
      uint64_t ALIGN:1;
      uint64_t EXTSEL:4;
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
      uint64_t OVSR:3;
      uint64_t OVSS:4;
      uint64_t TROVS:1;
      uint64_t ROVSM:1;
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
      uint64_t reservedSpace0:4;
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
      uint64_t JEXTSEL:4;
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
      uint64_t reservedSpace0:14;
      uint64_t OFFSET1_CH:5;
      uint64_t OFFSET1_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET2:12;
      uint64_t reservedSpace0:14;
      uint64_t OFFSET2_CH:5;
      uint64_t OFFSET2_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET3:12;
      uint64_t reservedSpace0:14;
      uint64_t OFFSET3_CH:5;
      uint64_t OFFSET3_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET4:12;
      uint64_t reservedSpace0:14;
      uint64_t OFFSET4_CH:5;
      uint64_t OFFSET4_EN:1;
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
      uint64_t DIFSEL_1_15:15;
      uint64_t DIFSEL_16_18:3;
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

};

#define ADC2 (*(volatile struct ADC2_tag *) 0x50040100)

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
      uint64_t DFSDMCFG:1;
      uint64_t RES:2;
      uint64_t ALIGN:1;
      uint64_t EXTSEL:4;
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
      uint64_t OVSR:3;
      uint64_t OVSS:4;
      uint64_t TROVS:1;
      uint64_t ROVSM:1;
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
      uint64_t reservedSpace0:4;
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
      uint64_t JEXTSEL:4;
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
      uint64_t reservedSpace0:14;
      uint64_t OFFSET1_CH:5;
      uint64_t OFFSET1_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET2:12;
      uint64_t reservedSpace0:14;
      uint64_t OFFSET2_CH:5;
      uint64_t OFFSET2_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET3:12;
      uint64_t reservedSpace0:14;
      uint64_t OFFSET3_CH:5;
      uint64_t OFFSET3_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET4:12;
      uint64_t reservedSpace0:14;
      uint64_t OFFSET4_CH:5;
      uint64_t OFFSET4_EN:1;
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
      uint64_t DIFSEL_1_15:15;
      uint64_t DIFSEL_16_18:3;
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

};

#define ADC3 (*(volatile struct ADC3_tag *) 0x50040200)

struct ADC_Common_tag
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

#define ADC_Common (*(volatile struct ADC_Common_tag *) 0x50040300)

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASC0:1;
      uint64_t ASC1:1;
      uint64_t ASC2:1;
      uint64_t ASC3:1;
      uint64_t ASC4:1;
      uint64_t ASC5:1;
      uint64_t ASC6:1;
      uint64_t ASC7:1;
      uint64_t ASC8:1;
      uint64_t ASC9:1;
      uint64_t ASC10:1;
      uint64_t ASC11:1;
      uint64_t ASC12:1;
      uint64_t ASC13:1;
      uint64_t ASC14:1;
      uint64_t ASC15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASCR;

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASC0:1;
      uint64_t ASC1:1;
      uint64_t ASC2:1;
      uint64_t ASC3:1;
      uint64_t ASC4:1;
      uint64_t ASC5:1;
      uint64_t ASC6:1;
      uint64_t ASC7:1;
      uint64_t ASC8:1;
      uint64_t ASC9:1;
      uint64_t ASC10:1;
      uint64_t ASC11:1;
      uint64_t ASC12:1;
      uint64_t ASC13:1;
      uint64_t ASC14:1;
      uint64_t ASC15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASCR;

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASC0:1;
      uint64_t ASC1:1;
      uint64_t ASC2:1;
      uint64_t ASC3:1;
      uint64_t ASC4:1;
      uint64_t ASC5:1;
      uint64_t ASC6:1;
      uint64_t ASC7:1;
      uint64_t ASC8:1;
      uint64_t ASC9:1;
      uint64_t ASC10:1;
      uint64_t ASC11:1;
      uint64_t ASC12:1;
      uint64_t ASC13:1;
      uint64_t ASC14:1;
      uint64_t ASC15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASCR;

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASC0:1;
      uint64_t ASC1:1;
      uint64_t ASC2:1;
      uint64_t ASC3:1;
      uint64_t ASC4:1;
      uint64_t ASC5:1;
      uint64_t ASC6:1;
      uint64_t ASC7:1;
      uint64_t ASC8:1;
      uint64_t ASC9:1;
      uint64_t ASC10:1;
      uint64_t ASC11:1;
      uint64_t ASC12:1;
      uint64_t ASC13:1;
      uint64_t ASC14:1;
      uint64_t ASC15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASCR;

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASC0:1;
      uint64_t ASC1:1;
      uint64_t ASC2:1;
      uint64_t ASC3:1;
      uint64_t ASC4:1;
      uint64_t ASC5:1;
      uint64_t ASC6:1;
      uint64_t ASC7:1;
      uint64_t ASC8:1;
      uint64_t ASC9:1;
      uint64_t ASC10:1;
      uint64_t ASC11:1;
      uint64_t ASC12:1;
      uint64_t ASC13:1;
      uint64_t ASC14:1;
      uint64_t ASC15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASCR;

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASC0:1;
      uint64_t ASC1:1;
      uint64_t ASC2:1;
      uint64_t ASC3:1;
      uint64_t ASC4:1;
      uint64_t ASC5:1;
      uint64_t ASC6:1;
      uint64_t ASC7:1;
      uint64_t ASC8:1;
      uint64_t ASC9:1;
      uint64_t ASC10:1;
      uint64_t ASC11:1;
      uint64_t ASC12:1;
      uint64_t ASC13:1;
      uint64_t ASC14:1;
      uint64_t ASC15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASCR;

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASC0:1;
      uint64_t ASC1:1;
      uint64_t ASC2:1;
      uint64_t ASC3:1;
      uint64_t ASC4:1;
      uint64_t ASC5:1;
      uint64_t ASC6:1;
      uint64_t ASC7:1;
      uint64_t ASC8:1;
      uint64_t ASC9:1;
      uint64_t ASC10:1;
      uint64_t ASC11:1;
      uint64_t ASC12:1;
      uint64_t ASC13:1;
      uint64_t ASC14:1;
      uint64_t ASC15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASCR;

};

#define GPIOG (*(volatile struct GPIOG_tag *) 0x48001800)

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASC0:1;
      uint64_t ASC1:1;
      uint64_t ASC2:1;
      uint64_t ASC3:1;
      uint64_t ASC4:1;
      uint64_t ASC5:1;
      uint64_t ASC6:1;
      uint64_t ASC7:1;
      uint64_t ASC8:1;
      uint64_t ASC9:1;
      uint64_t ASC10:1;
      uint64_t ASC11:1;
      uint64_t ASC12:1;
      uint64_t ASC13:1;
      uint64_t ASC14:1;
      uint64_t ASC15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASCR;

};

#define GPIOH (*(volatile struct GPIOH_tag *) 0x48001c00)

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

#define GPIOI (*(volatile struct GPIOI_tag *) 0x48002000)

struct SAI1_tag
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
      uint64_t MCKDIV:4;
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
      uint64_t MCKDIV:4;
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

};

#define SAI1 (*(volatile struct SAI1_tag *) 0x40015404)

struct SAI2_tag
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
      uint64_t MCKDIV:4;
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
      uint64_t MCKDIV:4;
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

};

#define SAI2 (*(volatile struct SAI2_tag *) 0x40015804)

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

};

#define LPTIM1 (*(volatile struct LPTIM1_tag *) 0x40007c00)

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

};

#define LPTIM2 (*(volatile struct LPTIM2_tag *) 0x40009400)

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) 0x00000000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
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
      uint64_t UCESM:1;
      uint64_t TCBGTIE:1;
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
      uint64_t reservedSpace0:1;
      uint64_t ABRE:1;
      uint64_t ABRF:1;
      uint64_t BUSY:1;
      uint64_t CMF:1;
      uint64_t SBKF:1;
      uint64_t RWU:1;
      uint64_t WUF:1;
      uint64_t TEACK:1;
      uint64_t REACK:1;
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
      uint64_t reservedSpace1:1;
      uint64_t LBDCF:1;
      uint64_t CTSCF:1;
      uint64_t reservedSpace2:1;
      uint64_t RTOCF:1;
      uint64_t EOBCF:1;
      uint64_t reservedSpace3:4;
      uint64_t CMCF:1;
      uint64_t reservedSpace4:2;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
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
      uint64_t UCESM:1;
      uint64_t TCBGTIE:1;
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
      uint64_t reservedSpace0:1;
      uint64_t ABRE:1;
      uint64_t ABRF:1;
      uint64_t BUSY:1;
      uint64_t CMF:1;
      uint64_t SBKF:1;
      uint64_t RWU:1;
      uint64_t WUF:1;
      uint64_t TEACK:1;
      uint64_t REACK:1;
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
      uint64_t reservedSpace1:1;
      uint64_t LBDCF:1;
      uint64_t CTSCF:1;
      uint64_t reservedSpace2:1;
      uint64_t RTOCF:1;
      uint64_t EOBCF:1;
      uint64_t reservedSpace3:4;
      uint64_t CMCF:1;
      uint64_t reservedSpace4:2;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
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
      uint64_t UCESM:1;
      uint64_t TCBGTIE:1;
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
      uint64_t reservedSpace0:1;
      uint64_t ABRE:1;
      uint64_t ABRF:1;
      uint64_t BUSY:1;
      uint64_t CMF:1;
      uint64_t SBKF:1;
      uint64_t RWU:1;
      uint64_t WUF:1;
      uint64_t TEACK:1;
      uint64_t REACK:1;
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
      uint64_t reservedSpace1:1;
      uint64_t LBDCF:1;
      uint64_t CTSCF:1;
      uint64_t reservedSpace2:1;
      uint64_t RTOCF:1;
      uint64_t EOBCF:1;
      uint64_t reservedSpace3:4;
      uint64_t CMCF:1;
      uint64_t reservedSpace4:2;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
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
      uint64_t reservedSpace0:1;
      uint64_t ABRE:1;
      uint64_t ABRF:1;
      uint64_t BUSY:1;
      uint64_t CMF:1;
      uint64_t SBKF:1;
      uint64_t RWU:1;
      uint64_t WUF:1;
      uint64_t TEACK:1;
      uint64_t REACK:1;
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
      uint64_t reservedSpace1:1;
      uint64_t LBDCF:1;
      uint64_t CTSCF:1;
      uint64_t reservedSpace2:1;
      uint64_t RTOCF:1;
      uint64_t EOBCF:1;
      uint64_t reservedSpace3:4;
      uint64_t CMCF:1;
      uint64_t reservedSpace4:2;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
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
      uint64_t reservedSpace0:1;
      uint64_t ABRE:1;
      uint64_t ABRF:1;
      uint64_t BUSY:1;
      uint64_t CMF:1;
      uint64_t SBKF:1;
      uint64_t RWU:1;
      uint64_t WUF:1;
      uint64_t TEACK:1;
      uint64_t REACK:1;
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
      uint64_t reservedSpace1:1;
      uint64_t LBDCF:1;
      uint64_t CTSCF:1;
      uint64_t reservedSpace2:1;
      uint64_t RTOCF:1;
      uint64_t EOBCF:1;
      uint64_t reservedSpace3:4;
      uint64_t CMCF:1;
      uint64_t reservedSpace4:2;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t ADDM7:1;
      uint64_t reservedSpace1:6;
      uint64_t CLKEN:1;
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
      uint64_t UCESM:1;
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

};

#define SPI3 (*(volatile struct SPI3_tag *) 0x40003c00)

struct SDMMC1_tag
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

#define SDMMC1 (*(volatile struct SDMMC1_tag *) 0x40012800)

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
  } __attribute__((aligned(4))) IMR1;

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
  } __attribute__((aligned(4))) EMR1;

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
      uint64_t reservedSpace0:1;
      uint64_t TR18:1;
      uint64_t TR19:1;
      uint64_t TR20:1;
      uint64_t TR21:1;
      uint64_t TR22:1;
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
      uint64_t reservedSpace0:1;
      uint64_t TR18:1;
      uint64_t TR19:1;
      uint64_t TR20:1;
      uint64_t TR21:1;
      uint64_t TR22:1;
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
      uint64_t reservedSpace0:1;
      uint64_t SWIER18:1;
      uint64_t SWIER19:1;
      uint64_t SWIER20:1;
      uint64_t SWIER21:1;
      uint64_t SWIER22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWIER1;

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
      uint64_t reservedSpace0:1;
      uint64_t PR18:1;
      uint64_t PR19:1;
      uint64_t PR20:1;
      uint64_t PR21:1;
      uint64_t PR22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR1;

  uint8_t res0[8];

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR2;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t RT35:1;
      uint64_t RT36:1;
      uint64_t RT37:1;
      uint64_t RT38:1;
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

struct VREFBUF_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENVR:1;
      uint64_t HIZ:1;
      uint64_t VRS:1;
      uint64_t VRR:1;
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

#define VREFBUF (*(volatile struct VREFBUF_tag *) 0x40010030)

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
      uint64_t CANSB:6;
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
      uint64_t CANSB:6;
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
      uint64_t TAMP3F:1;
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
  } __attribute__((aligned(4))) TAMPCR;

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC_ALARM_TYPE:1;
      uint64_t RTC_OUT_RMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OR;

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

#define RTC (*(volatile struct RTC_tag *) 0x40002800)

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

struct SWPMI1_tag
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:6;
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

#define SWPMI1 (*(volatile struct SWPMI1_tag *) 0x40008800)

struct OPAMP_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPAEN:1;
      uint64_t OPALPM:1;
      uint64_t OPAMODE:2;
      uint64_t PGA_GAIN:2;
      uint64_t reservedSpace0:2;
      uint64_t VM_SEL:2;
      uint64_t VP_SEL:1;
      uint64_t reservedSpace1:1;
      uint64_t CALON:1;
      uint64_t CALSEL:1;
      uint64_t USERTRIM:1;
      uint64_t CALOUT:1;
      uint64_t reservedSpace2:15;
      uint64_t OPA_RANGE:1;
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
  } __attribute__((aligned(4))) OPAMP1_LPOTR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPAEN:1;
      uint64_t OPALPM:1;
      uint64_t OPAMODE:2;
      uint64_t PGA_GAIN:2;
      uint64_t reservedSpace0:2;
      uint64_t VM_SEL:2;
      uint64_t VP_SEL:1;
      uint64_t reservedSpace1:1;
      uint64_t CALON:1;
      uint64_t CALSEL:1;
      uint64_t USERTRIM:1;
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
  } __attribute__((aligned(4))) OPAMP2_LPOTR;

};

#define OPAMP (*(volatile struct OPAMP_tag *) 0x40007800)

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
      uint64_t reservedSpace2:3;
      uint64_t CBURSTRW:1;
      uint64_t CCLKEN:1;
      uint64_t WFDIS:1;
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

  uint8_t res0[96];

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
      uint64_t MEMSETx:8;
      uint64_t MEMWAITx:8;
      uint64_t MEMHOLDx:8;
      uint64_t MEMHIZx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMEM;

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
  } __attribute__((aligned(4))) PATT;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCx:32;
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
      uint64_t reservedSpace0:4;
      uint64_t CLKDIV:4;
      uint64_t DATLAT:4;
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
      uint64_t reservedSpace0:4;
      uint64_t CLKDIV:4;
      uint64_t DATLAT:4;
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
      uint64_t reservedSpace0:4;
      uint64_t CLKDIV:4;
      uint64_t DATLAT:4;
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
      uint64_t reservedSpace0:4;
      uint64_t CLKDIV:4;
      uint64_t DATLAT:4;
      uint64_t ACCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BWTR4;

};

#define FMC (*(volatile struct FMC_tag *) 0xa0000000)

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

};

#define NVIC (*(volatile struct NVIC_tag *) 0xe000e100)

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

#define CRS (*(volatile struct CRS_tag *) 0x40006000)

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

#define DCMI (*(volatile struct DCMI_tag *) 0x50050000)

struct HASH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t INIT:1;
      uint64_t DMAE:1;
      uint64_t DATATYPE:2;
      uint64_t MODE:1;
      uint64_t ALGO0:1;
      uint64_t NBW:4;
      uint64_t DINNE:1;
      uint64_t MDMAT:1;
      uint64_t reservedSpace1:2;
      uint64_t LKEY:1;
      uint64_t reservedSpace2:1;
      uint64_t ALGO1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAIN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NBLW:5;
      uint64_t reservedSpace0:3;
      uint64_t DCAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t H0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HR0;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DINIE:1;
      uint64_t DCIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DINIS:1;
      uint64_t DCIS:1;
      uint64_t DMAS:1;
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  uint8_t res1[208];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR6:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR7:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR8:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR9:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR10:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR11:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR12:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR13:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR14:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR15:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR16:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR17:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR18:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR19:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR20:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR21:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR22:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR23:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR24:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR25:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR26:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR27:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR28:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR29:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR30:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR31:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR33:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR34:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR35:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR36:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR37:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR38:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR39:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR40:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR41:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR42:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR43:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR44:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR45:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR46:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR47:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR48:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR49:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR50:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR51:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR52:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSR53:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR53;

  uint8_t res2[320];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t H0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HASH_HR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t H1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HASH_HR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t H2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HASH_HR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t H3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HASH_HR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t H4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HASH_HR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t H5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HASH_HR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t H6:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HASH_HR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t H7:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HASH_HR7;

};

#define HASH (*(volatile struct HASH_tag *) 0x50060400)

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
      uint64_t reservedSpace1:2;
      uint64_t AI:1;
      uint64_t RBS:1;
      uint64_t reservedSpace2:2;
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
      uint64_t APLHA:8;
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

  uint8_t res0[944];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLUE:8;
      uint64_t GREEN:8;
      uint64_t RED:8;
      uint64_t APLHA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FGCLUT;

  uint8_t res1[1020];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLUE:8;
      uint64_t GREEN:8;
      uint64_t RED:8;
      uint64_t APLHA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BGCLUT;

};

#define DMA2D (*(volatile struct DMA2D_tag *) 0x4002b000)

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

#define SCB (*(volatile struct SCB_tag *) 0xe000ed00)

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

