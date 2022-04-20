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

  uint8_t res0[72];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOF0:1;
      uint64_t SOF1:1;
      uint64_t SOF2:1;
      uint64_t SOF3:1;
      uint64_t SOF4:1;
      uint64_t SOF5:1;
      uint64_t SOF6:1;
      uint64_t SOF7:1;
      uint64_t SOF8:1;
      uint64_t SOF9:1;
      uint64_t SOF10:1;
      uint64_t SOF11:1;
      uint64_t SOF12:1;
      uint64_t SOF13:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSOF0:1;
      uint64_t CSOF1:1;
      uint64_t CSOF2:1;
      uint64_t CSOF3:1;
      uint64_t CSOF4:1;
      uint64_t CSOF5:1;
      uint64_t CSOF6:1;
      uint64_t CSOF7:1;
      uint64_t CSOF8:1;
      uint64_t CSOF9:1;
      uint64_t CSOF10:1;
      uint64_t CSOF11:1;
      uint64_t CSOF12:1;
      uint64_t CSOF13:1;
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
      uint64_t OF0:1;
      uint64_t OF1:1;
      uint64_t OF2:1;
      uint64_t OF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSOF0:1;
      uint64_t CSOF1:1;
      uint64_t CSOF2:1;
      uint64_t CSOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGCFR;

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
      uint64_t S31:1;
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
      uint64_t reservedSpace0:9;
      uint64_t G1S:1;
      uint64_t G2S:1;
      uint64_t G3S:1;
      uint64_t G4S:1;
      uint64_t G5S:1;
      uint64_t G6S:1;
      uint64_t G7S:1;
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

#define WWDG (*(volatile struct WWDG_tag *) 0x40002c00)

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

struct Flash_tag
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
      uint64_t reservedSpace1:2;
      uint64_t PES:1;
      uint64_t EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACR;

  uint8_t res0[4];

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
      uint64_t reservedSpace1:3;
      uint64_t OPTNV:1;
      uint64_t RDERR:1;
      uint64_t OPTVERR:1;
      uint64_t BSY:1;
      uint64_t reservedSpace2:1;
      uint64_t CFGBSY:1;
      uint64_t PESD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PG:1;
      uint64_t PER:1;
      uint64_t MER:1;
      uint64_t PNB:8;
      uint64_t reservedSpace0:5;
      uint64_t STRT:1;
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
      uint64_t ADDR_ECC:17;
      uint64_t reservedSpace0:3;
      uint64_t SYSF_ECC:1;
      uint64_t reservedSpace1:3;
      uint64_t ECCCIE:1;
      uint64_t reservedSpace2:1;
      uint64_t CPUID:3;
      uint64_t reservedSpace3:1;
      uint64_t ECCC:1;
      uint64_t ECCD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDP:8;
      uint64_t ESE:1;
      uint64_t BOR_LEV:3;
      uint64_t nRST_STOP:1;
      uint64_t nRST_STDBY:1;
      uint64_t nRST_SHDW:1;
      uint64_t reservedSpace0:1;
      uint64_t IDWG_SW:1;
      uint64_t IWDG_STOP:1;
      uint64_t IWDG_STDBY:1;
      uint64_t WWDG_SW:1;
      uint64_t reservedSpace1:3;
      uint64_t nBOOT1:1;
      uint64_t SRAM2_PE:1;
      uint64_t SRAM2_RST:1;
      uint64_t nSWBOOT0:1;
      uint64_t nBOOT0:1;
      uint64_t reservedSpace2:1;
      uint64_t AGC_TRIM:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCROP1A_STRT:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCROP1ASR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCROP1A_END:9;
      uint64_t reservedSpace0:22;
      uint64_t PCROP_RDP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCROP1AER;

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCROP1B_STRT:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCROP1BSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCROP1B_END:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCROP1BER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPCCDBA:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPCCBR;

  uint8_t res2[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PRFTEN:1;
      uint64_t ICEN:1;
      uint64_t reservedSpace1:1;
      uint64_t ICRST:1;
      uint64_t reservedSpace2:3;
      uint64_t PES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2ACR;

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
      uint64_t MISSERR:1;
      uint64_t FASTERR:1;
      uint64_t reservedSpace1:4;
      uint64_t RDERR:1;
      uint64_t reservedSpace2:1;
      uint64_t BSY:1;
      uint64_t reservedSpace3:1;
      uint64_t CFGBSY:1;
      uint64_t PESD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PG:1;
      uint64_t PER:1;
      uint64_t MER:1;
      uint64_t PNB:8;
      uint64_t reservedSpace0:5;
      uint64_t STRT:1;
      uint64_t reservedSpace1:1;
      uint64_t FSTPG:1;
      uint64_t reservedSpace2:5;
      uint64_t EOPIE:1;
      uint64_t ERRIE:1;
      uint64_t RDERRIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2CR;

  uint8_t res3[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SFSA:8;
      uint64_t FSD:1;
      uint64_t reservedSpace0:3;
      uint64_t DDS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBRV:18;
      uint64_t SBRSA:5;
      uint64_t BRSD:1;
      uint64_t reservedSpace0:1;
      uint64_t SNBRSA:5;
      uint64_t NBRSD:1;
      uint64_t C2OPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRRVR;

};

#define Flash (*(volatile struct Flash_tag *) 0x58004000)

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
      uint64_t reservedSpace0:3;
      uint64_t FTHRES:4;
      uint64_t reservedSpace1:4;
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
      uint64_t FLEVEL:5;
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
      uint64_t reservedSpace1:2;
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
      uint64_t reservedSpace0:1;
      uint64_t MSIRANGE:4;
      uint64_t HSION:1;
      uint64_t HSIKERON:1;
      uint64_t HSIRDY:1;
      uint64_t HSIASFS:1;
      uint64_t HSIKERDY:1;
      uint64_t reservedSpace1:3;
      uint64_t HSEON:1;
      uint64_t HSERDY:1;
      uint64_t HSEBYP:1;
      uint64_t CSSON:1;
      uint64_t HSEPRE:1;
      uint64_t reservedSpace2:3;
      uint64_t PLLON:1;
      uint64_t PLLRDY:1;
      uint64_t PLLSAI1ON:1;
      uint64_t PLLSAI1RDY:1;
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
      uint64_t HPREF:1;
      uint64_t PPRE1F:1;
      uint64_t PPRE2F:1;
      uint64_t reservedSpace1:5;
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
      uint64_t PLLM:3;
      uint64_t reservedSpace1:1;
      uint64_t PLLN:7;
      uint64_t reservedSpace2:1;
      uint64_t PLLPEN:1;
      uint64_t PLLP:5;
      uint64_t reservedSpace3:2;
      uint64_t PLLQEN:1;
      uint64_t PLLQ:3;
      uint64_t PLLREN:1;
      uint64_t PLLR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PLLN:7;
      uint64_t reservedSpace1:1;
      uint64_t PLLPEN:1;
      uint64_t PLLP:5;
      uint64_t reservedSpace2:2;
      uint64_t PLLQEN:1;
      uint64_t PLLQ:3;
      uint64_t PLLREN:1;
      uint64_t PLLR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLSAI1CFGR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSI1RDYIE:1;
      uint64_t LSERDYIE:1;
      uint64_t MSIRDYIE:1;
      uint64_t HSIRDYIE:1;
      uint64_t HSERDYIE:1;
      uint64_t PLLRDYIE:1;
      uint64_t PLLSAI1RDYIE:1;
      uint64_t reservedSpace0:2;
      uint64_t LSECSSIE:1;
      uint64_t HSI48RDYIE:1;
      uint64_t LSI2RDYIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSI1RDYF:1;
      uint64_t LSERDYF:1;
      uint64_t MSIRDYF:1;
      uint64_t HSIRDYF:1;
      uint64_t HSERDYF:1;
      uint64_t PLLRDYF:1;
      uint64_t PLLSAI1RDYF:1;
      uint64_t reservedSpace0:1;
      uint64_t HSECSSF:1;
      uint64_t LSECSSF:1;
      uint64_t HSI48RDYF:1;
      uint64_t LSI2RDYF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSI1RDYC:1;
      uint64_t LSERDYC:1;
      uint64_t MSIRDYC:1;
      uint64_t HSIRDYC:1;
      uint64_t HSERDYC:1;
      uint64_t PLLRDYC:1;
      uint64_t PLLSAI1RDYC:1;
      uint64_t reservedSpace0:1;
      uint64_t HSECSSC:1;
      uint64_t LSECSSC:1;
      uint64_t HSI48RDYC:1;
      uint64_t LSI2RDYC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPSSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t SMPSDIV:2;
      uint64_t reservedSpace1:2;
      uint64_t SMPSSWS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPSCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1RST:1;
      uint64_t DMA2RST:1;
      uint64_t DMAMUXRST:1;
      uint64_t reservedSpace0:9;
      uint64_t CRCRST:1;
      uint64_t reservedSpace1:3;
      uint64_t TSCRST:1;
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
      uint64_t reservedSpace0:2;
      uint64_t GPIOHRST:1;
      uint64_t reservedSpace1:5;
      uint64_t ADCRST:1;
      uint64_t reservedSpace2:2;
      uint64_t AES1RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB2RSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t QSPIRST:1;
      uint64_t reservedSpace1:7;
      uint64_t PKARST:1;
      uint64_t AES2RST:1;
      uint64_t RNGRST:1;
      uint64_t HSEMRST:1;
      uint64_t IPCCRST:1;
      uint64_t reservedSpace2:4;
      uint64_t FLASHRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB3RSTR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM2RST:1;
      uint64_t reservedSpace0:8;
      uint64_t LCDRST:1;
      uint64_t reservedSpace1:4;
      uint64_t SPI2RST:1;
      uint64_t reservedSpace2:6;
      uint64_t I2C1RST:1;
      uint64_t reservedSpace3:1;
      uint64_t I2C3RST:1;
      uint64_t CRSRST:1;
      uint64_t reservedSpace4:1;
      uint64_t USBFSRST:1;
      uint64_t reservedSpace5:4;
      uint64_t LPTIM1RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1RSTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPUART1RST:1;
      uint64_t reservedSpace0:4;
      uint64_t LPTIM2RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1RSTR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t TIM1RST:1;
      uint64_t SPI1RST:1;
      uint64_t reservedSpace1:1;
      uint64_t USART1RST:1;
      uint64_t reservedSpace2:2;
      uint64_t TIM16RST:1;
      uint64_t TIM17RST:1;
      uint64_t reservedSpace3:2;
      uint64_t SAI1RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2RSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB3RSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1EN:1;
      uint64_t DMA2EN:1;
      uint64_t DMAMUXEN:1;
      uint64_t reservedSpace0:9;
      uint64_t CRCEN:1;
      uint64_t reservedSpace1:3;
      uint64_t TSCEN:1;
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
      uint64_t reservedSpace0:2;
      uint64_t GPIOHEN:1;
      uint64_t reservedSpace1:5;
      uint64_t ADCEN:1;
      uint64_t reservedSpace2:2;
      uint64_t AES1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB2ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t QSPIEN:1;
      uint64_t reservedSpace1:7;
      uint64_t PKAEN:1;
      uint64_t AES2EN:1;
      uint64_t RNGEN:1;
      uint64_t HSEMEN:1;
      uint64_t IPCCEN:1;
      uint64_t reservedSpace2:4;
      uint64_t FLASHEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB3ENR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM2EN:1;
      uint64_t reservedSpace0:8;
      uint64_t LCDEN:1;
      uint64_t RTCAPBEN:1;
      uint64_t WWDGEN:1;
      uint64_t reservedSpace1:2;
      uint64_t SPI2EN:1;
      uint64_t reservedSpace2:6;
      uint64_t I2C1EN:1;
      uint64_t reservedSpace3:1;
      uint64_t I2C3EN:1;
      uint64_t CRSEN:1;
      uint64_t reservedSpace4:1;
      uint64_t USBEN:1;
      uint64_t reservedSpace5:4;
      uint64_t LPTIM1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1ENR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPUART1EN:1;
      uint64_t reservedSpace0:4;
      uint64_t LPTIM2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1ENR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t TIM1EN:1;
      uint64_t SPI1EN:1;
      uint64_t reservedSpace1:1;
      uint64_t USART1EN:1;
      uint64_t reservedSpace2:2;
      uint64_t TIM16EN:1;
      uint64_t TIM17EN:1;
      uint64_t reservedSpace3:2;
      uint64_t SAI1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2ENR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1SMEN:1;
      uint64_t DMA2SMEN:1;
      uint64_t DMAMUXSMEN:1;
      uint64_t reservedSpace0:6;
      uint64_t SRAM1SMEN:1;
      uint64_t reservedSpace1:2;
      uint64_t CRCSMEN:1;
      uint64_t reservedSpace2:3;
      uint64_t TSCSMEN:1;
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
      uint64_t reservedSpace0:2;
      uint64_t GPIOHSMEN:1;
      uint64_t reservedSpace1:5;
      uint64_t ADCFSSMEN:1;
      uint64_t reservedSpace2:2;
      uint64_t AES1SMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB2SMENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t QSPISMEN:1;
      uint64_t reservedSpace1:7;
      uint64_t PKASMEN:1;
      uint64_t AES2SMEN:1;
      uint64_t RNGSMEN:1;
      uint64_t reservedSpace2:5;
      uint64_t SRAM2SMEN:1;
      uint64_t FLASHSMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHB3SMENR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM2SMEN:1;
      uint64_t reservedSpace0:8;
      uint64_t LCDSMEN:1;
      uint64_t RTCAPBSMEN:1;
      uint64_t WWDGSMEN:1;
      uint64_t reservedSpace1:2;
      uint64_t SPI2SMEN:1;
      uint64_t reservedSpace2:6;
      uint64_t I2C1SMEN:1;
      uint64_t reservedSpace3:1;
      uint64_t I2C3SMEN:1;
      uint64_t CRSMEN:1;
      uint64_t reservedSpace4:1;
      uint64_t USBSMEN:1;
      uint64_t reservedSpace5:4;
      uint64_t LPTIM1SMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1SMENR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPUART1SMEN:1;
      uint64_t reservedSpace0:4;
      uint64_t LPTIM2SMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1SMENR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t TIM1SMEN:1;
      uint64_t SPI1SMEN:1;
      uint64_t reservedSpace1:1;
      uint64_t USART1SMEN:1;
      uint64_t reservedSpace2:2;
      uint64_t TIM16SMEN:1;
      uint64_t TIM17SMEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SAI1SMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2SMENR;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USART1SEL:2;
      uint64_t reservedSpace0:8;
      uint64_t LPUART1SEL:2;
      uint64_t I2C1SEL:2;
      uint64_t reservedSpace1:2;
      uint64_t I2C3SEL:2;
      uint64_t LPTIM1SEL:2;
      uint64_t LPTIM2SEL:2;
      uint64_t SAI1SEL:2;
      uint64_t reservedSpace2:2;
      uint64_t CLK48SEL:2;
      uint64_t ADCSEL:2;
      uint64_t RNGSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCIPR;

  uint8_t res6[4];

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
      uint64_t LSCOSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSI1ON:1;
      uint64_t LSI1RDY:1;
      uint64_t LSI2ON:1;
      uint64_t LSI2RDY:1;
      uint64_t LSI2TRIMEN:1;
      uint64_t LSI2TRIMOK:1;
      uint64_t reservedSpace0:2;
      uint64_t LSI2BW:4;
      uint64_t reservedSpace1:2;
      uint64_t RFWKPSEL:2;
      uint64_t RFRSTS:1;
      uint64_t reservedSpace2:6;
      uint64_t RMVF:1;
      uint64_t reservedSpace3:1;
      uint64_t OBLRSTF:1;
      uint64_t PINRSTF:1;
      uint64_t BORRSTF:1;
      uint64_t SFTRSTF:1;
      uint64_t IWDGRSTF:1;
      uint64_t WWDGRSTF:1;
      uint64_t LPWRRSTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSI48ON:1;
      uint64_t HSI48RDY:1;
      uint64_t reservedSpace0:5;
      uint64_t HSI48CAL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNLOCKED:1;
      uint64_t reservedSpace0:2;
      uint64_t HSES:1;
      uint64_t HSEGMC:3;
      uint64_t reservedSpace1:1;
      uint64_t HSETUNE:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSECR;

  uint8_t res7[104];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHDHPRE:4;
      uint64_t C2HPRE:4;
      uint64_t reservedSpace0:8;
      uint64_t SHDHPREF:1;
      uint64_t C2HPREF:1;
      uint64_t reservedSpace1:2;
      uint64_t RFCSS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTCFGR;

  uint8_t res8[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1EN:1;
      uint64_t DMA2EN:1;
      uint64_t DMAMUXEN:1;
      uint64_t reservedSpace0:6;
      uint64_t SRAM1EN:1;
      uint64_t reservedSpace1:2;
      uint64_t CRCEN:1;
      uint64_t reservedSpace2:3;
      uint64_t TSCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2AHB1ENR;

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
      uint64_t reservedSpace0:2;
      uint64_t GPIOHEN:1;
      uint64_t reservedSpace1:5;
      uint64_t ADCEN:1;
      uint64_t reservedSpace2:2;
      uint64_t AES1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2AHB2ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t PKAEN:1;
      uint64_t AES2EN:1;
      uint64_t RNGEN:1;
      uint64_t HSEMEN:1;
      uint64_t IPCCEN:1;
      uint64_t reservedSpace1:4;
      uint64_t FLASHEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2AHB3ENR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM2EN:1;
      uint64_t reservedSpace0:8;
      uint64_t LCDEN:1;
      uint64_t RTCAPBEN:1;
      uint64_t reservedSpace1:3;
      uint64_t SPI2EN:1;
      uint64_t reservedSpace2:6;
      uint64_t I2C1EN:1;
      uint64_t reservedSpace3:1;
      uint64_t I2C3EN:1;
      uint64_t CRSEN:1;
      uint64_t reservedSpace4:1;
      uint64_t USBEN:1;
      uint64_t reservedSpace5:4;
      uint64_t LPTIM1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2APB1ENR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPUART1EN:1;
      uint64_t reservedSpace0:4;
      uint64_t LPTIM2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2APB1ENR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t TIM1EN:1;
      uint64_t SPI1EN:1;
      uint64_t reservedSpace1:1;
      uint64_t USART1EN:1;
      uint64_t reservedSpace2:2;
      uint64_t TIM16EN:1;
      uint64_t TIM17EN:1;
      uint64_t reservedSpace3:2;
      uint64_t SAI1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2APB2ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLEEN:1;
      uint64_t EN802:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2APB3ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1SMEN:1;
      uint64_t DMA2SMEN:1;
      uint64_t DMAMUXSMEN:1;
      uint64_t reservedSpace0:6;
      uint64_t SRAM1SMEN:1;
      uint64_t reservedSpace1:2;
      uint64_t CRCSMEN:1;
      uint64_t reservedSpace2:3;
      uint64_t TSCSMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2AHB1SMENR;

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
      uint64_t reservedSpace0:2;
      uint64_t GPIOHSMEN:1;
      uint64_t reservedSpace1:5;
      uint64_t ADCFSSMEN:1;
      uint64_t reservedSpace2:2;
      uint64_t AES1SMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2AHB2SMENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t PKASMEN:1;
      uint64_t AES2SMEN:1;
      uint64_t RNGSMEN:1;
      uint64_t reservedSpace1:5;
      uint64_t SRAM2SMEN:1;
      uint64_t FLASHSMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2AHB3SMENR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM2SMEN:1;
      uint64_t reservedSpace0:8;
      uint64_t LCDSMEN:1;
      uint64_t RTCAPBSMEN:1;
      uint64_t reservedSpace1:3;
      uint64_t SPI2SMEN:1;
      uint64_t reservedSpace2:6;
      uint64_t I2C1SMEN:1;
      uint64_t reservedSpace3:1;
      uint64_t I2C3SMEN:1;
      uint64_t CRSMEN:1;
      uint64_t reservedSpace4:1;
      uint64_t USBSMEN:1;
      uint64_t reservedSpace5:4;
      uint64_t LPTIM1SMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2APB1SMENR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPUART1SMEN:1;
      uint64_t reservedSpace0:4;
      uint64_t LPTIM2SMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2APB1SMENR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t TIM1SMEN:1;
      uint64_t SPI1SMEN:1;
      uint64_t reservedSpace1:1;
      uint64_t USART1SMEN:1;
      uint64_t reservedSpace2:2;
      uint64_t TIM16SMEN:1;
      uint64_t TIM17SMEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SAI1SMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2APB2SMENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLESMEN:1;
      uint64_t SMEN802:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2APB3SMENR;

};

#define RCC (*(volatile struct RCC_tag *) 0x58000000)

struct PWR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPMS:3;
      uint64_t reservedSpace0:1;
      uint64_t FPDR:1;
      uint64_t FPDS:1;
      uint64_t reservedSpace1:2;
      uint64_t DBP:1;
      uint64_t VOS:2;
      uint64_t reservedSpace2:3;
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
      uint64_t reservedSpace0:1;
      uint64_t PVME3:1;
      uint64_t reservedSpace1:3;
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
      uint64_t EBORHSDFB:1;
      uint64_t RRS:1;
      uint64_t APC:1;
      uint64_t EBLEA:1;
      uint64_t ECRPE:1;
      uint64_t E802A:1;
      uint64_t EC2H:1;
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
      uint64_t reservedSpace1:5;
      uint64_t C2BOOT:1;
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
      uint64_t reservedSpace0:2;
      uint64_t SDFBF:1;
      uint64_t BORHF:1;
      uint64_t BLEWUF:1;
      uint64_t WUF802:1;
      uint64_t CRPEF:1;
      uint64_t BLEAF:1;
      uint64_t AF802:1;
      uint64_t C2HF:1;
      uint64_t WUFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDBF:1;
      uint64_t SDSMPSF:1;
      uint64_t reservedSpace0:6;
      uint64_t REGLPS:1;
      uint64_t REGLPF:1;
      uint64_t VOSF:1;
      uint64_t PVDO:1;
      uint64_t PVMO1:1;
      uint64_t reservedSpace1:1;
      uint64_t PVMO3:1;
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
      uint64_t reservedSpace0:2;
      uint64_t CSMPSFBF:1;
      uint64_t CBORHF:1;
      uint64_t CBLEWUF:1;
      uint64_t C802WUF:1;
      uint64_t CCRPEF:1;
      uint64_t CBLEAF:1;
      uint64_t C802AF:1;
      uint64_t CC2HF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDVOS:4;
      uint64_t SDSC:3;
      uint64_t reservedSpace0:1;
      uint64_t BORHC:1;
      uint64_t SMPSCFG:1;
      uint64_t reservedSpace1:4;
      uint64_t SDBEN:1;
      uint64_t SDEB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR5;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCRE;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PU0:1;
      uint64_t PU1:1;
      uint64_t reservedSpace0:1;
      uint64_t PU3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUCRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD0:1;
      uint64_t PD1:1;
      uint64_t reservedSpace0:1;
      uint64_t PD3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCRH;

  uint8_t res1[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPMS:3;
      uint64_t reservedSpace0:1;
      uint64_t FPDR:1;
      uint64_t FPDS:1;
      uint64_t reservedSpace1:8;
      uint64_t BLEEWKUP:1;
      uint64_t EWKUP802:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2CR1;

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
      uint64_t reservedSpace0:4;
      uint64_t EBLEWUP:1;
      uint64_t E802WUP:1;
      uint64_t reservedSpace1:1;
      uint64_t APC:1;
      uint64_t reservedSpace2:2;
      uint64_t EIWUL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1CSSF:1;
      uint64_t C2CSSF:1;
      uint64_t CCRPF:1;
      uint64_t reservedSpace0:5;
      uint64_t C1SBF:1;
      uint64_t C1STOPF:1;
      uint64_t C2SBF:1;
      uint64_t C2STOPF:1;
      uint64_t reservedSpace1:1;
      uint64_t CRPF:1;
      uint64_t C1DS:1;
      uint64_t C2DS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTSCR;

};

#define PWR (*(volatile struct PWR_tag *) 0x58000400)

struct SYSCFG_VREFBUF_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEM_MODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCFG_MEMRMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t BOOSTEN:1;
      uint64_t reservedSpace1:7;
      uint64_t I2C_PB6_FMP:1;
      uint64_t I2C_PB7_FMP:1;
      uint64_t I2C_PB8_FMP:1;
      uint64_t I2C_PB9_FMP:1;
      uint64_t I2C1_FMP:1;
      uint64_t reservedSpace2:1;
      uint64_t I2C3_FMP:1;
      uint64_t reservedSpace3:3;
      uint64_t FPU_IE:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCFG_CFGR1;

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
  } __attribute__((aligned(4))) SYSCFG_EXTICR1;

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
  } __attribute__((aligned(4))) SYSCFG_EXTICR2;

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
  } __attribute__((aligned(4))) SYSCFG_EXTICR3;

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
  } __attribute__((aligned(4))) SYSCFG_EXTICR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAM2ER:1;
      uint64_t SRAM2BSY:1;
      uint64_t reservedSpace0:29;
      uint64_t C2RFD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCFG_SCSR;

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
  } __attribute__((aligned(4))) SYSCFG_CFGR2;

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
  } __attribute__((aligned(4))) SYSCFG_SWPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCFG_SKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P32WP:1;
      uint64_t P33WP:1;
      uint64_t P34WP:1;
      uint64_t P35WP:1;
      uint64_t P36WP:1;
      uint64_t P37WP:1;
      uint64_t P38WP:1;
      uint64_t P39WP:1;
      uint64_t P40WP:1;
      uint64_t P41WP:1;
      uint64_t P42WP:1;
      uint64_t P43WP:1;
      uint64_t P44WP:1;
      uint64_t P45WP:1;
      uint64_t P46WP:1;
      uint64_t P47WP:1;
      uint64_t P48WP:1;
      uint64_t P49WP:1;
      uint64_t P50WP:1;
      uint64_t P51WP:1;
      uint64_t P52WP:1;
      uint64_t P53WP:1;
      uint64_t P54WP:1;
      uint64_t P55WP:1;
      uint64_t P56WP:1;
      uint64_t P57WP:1;
      uint64_t P58WP:1;
      uint64_t P59WP:1;
      uint64_t P60WP:1;
      uint64_t P61WP:1;
      uint64_t P62WP:1;
      uint64_t P63WP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCFG_SWPR2;

  uint8_t res0[4];

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
  } __attribute__((aligned(4))) VREFBUF_CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VREFBUF_CCR;

  uint8_t res1[200];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t TIM1IM:1;
      uint64_t TIM16IM:1;
      uint64_t TIM17IM:1;
      uint64_t reservedSpace1:5;
      uint64_t EXIT5IM:1;
      uint64_t EXIT6IM:1;
      uint64_t EXIT7IM:1;
      uint64_t EXIT8IM:1;
      uint64_t EXIT9IM:1;
      uint64_t EXIT10IM:1;
      uint64_t EXIT11IM:1;
      uint64_t EXIT12IM:1;
      uint64_t EXIT13IM:1;
      uint64_t EXIT14IM:1;
      uint64_t EXIT15IM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCFG_IMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t PVM1IM:1;
      uint64_t reservedSpace1:1;
      uint64_t PVM3IM:1;
      uint64_t reservedSpace2:1;
      uint64_t PVDIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCFG_IMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCSTAMP:1;
      uint64_t reservedSpace0:2;
      uint64_t RTCWKUP:1;
      uint64_t RTCALARM:1;
      uint64_t RCC_bitfield:1;
      uint64_t FLASH:1;
      uint64_t reservedSpace1:1;
      uint64_t PKA_bitfield:1;
      uint64_t RNG_bitfield:1;
      uint64_t AES1_bitfield:1;
      uint64_t COMP_bitfield:1;
      uint64_t ADC_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCFG_C2IMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1_CH1_IM:1;
      uint64_t DMA1_CH2_IM:1;
      uint64_t DMA1_CH3_IM:1;
      uint64_t DMA1_CH4_IM:1;
      uint64_t DMA1_CH5_IM:1;
      uint64_t DMA1_CH6_IM:1;
      uint64_t DMA1_CH7_IM:1;
      uint64_t reservedSpace0:1;
      uint64_t DMA2_CH1_IM:1;
      uint64_t DMA2_CH2_IM:1;
      uint64_t DMA2_CH3_IM:1;
      uint64_t DMA2_CH4_IM:1;
      uint64_t DMA2_CH5_IM:1;
      uint64_t DMA2_CH6_IM:1;
      uint64_t DMA2_CH7_IM:1;
      uint64_t DMAM_UX1_IM:1;
      uint64_t PVM1IM:1;
      uint64_t reservedSpace1:1;
      uint64_t PVM3IM:1;
      uint64_t reservedSpace2:1;
      uint64_t PVDIM:1;
      uint64_t TSCIM:1;
      uint64_t LCDIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCFG_C2IMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAES1:1;
      uint64_t SAES2:1;
      uint64_t SPKA:1;
      uint64_t SRNG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCFG_SIPCR;

};

#define SYSCFG_VREFBUF (*(volatile struct SYSCFG_VREFBUF_tag *) 0x40010000)

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
      uint64_t COMP1_INPSEL:2;
      uint64_t reservedSpace1:6;
      uint64_t COMP1_POLARITY:1;
      uint64_t COMP1_HYST:2;
      uint64_t COMP1_BLANKING:3;
      uint64_t reservedSpace2:1;
      uint64_t COMP1_BRGEN:1;
      uint64_t COMP1_SCALEN:1;
      uint64_t reservedSpace3:1;
      uint64_t COMP1_INMESEL:2;
      uint64_t reservedSpace4:3;
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
      uint64_t COMP2_INMSEL:2;
      uint64_t reservedSpace1:1;
      uint64_t COMP2_INPSEL:2;
      uint64_t COMP2_WINMODE:1;
      uint64_t reservedSpace2:5;
      uint64_t COMP2_POLARITY:1;
      uint64_t COMP2_HYST:2;
      uint64_t COMP2_BLANKING:3;
      uint64_t reservedSpace3:1;
      uint64_t COMP2_BRGEN:1;
      uint64_t COMP2_SCALEN:1;
      uint64_t reservedSpace4:1;
      uint64_t COMP2_INMESEL:2;
      uint64_t reservedSpace5:3;
      uint64_t COMP2_VALUE:1;
      uint64_t COMP2_LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP2_CSR;

};

#define COMP (*(volatile struct COMP_tag *) 0x40010200)

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
      uint64_t reservedSpace1:2;
      uint64_t BYP:1;
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

#define RNG (*(volatile struct RNG_tag *) 0x58001000)

struct AES1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t DATATYPE:2;
      uint64_t MODE:2;
      uint64_t CHMOD10:2;
      uint64_t CCFC:1;
      uint64_t ERRC:1;
      uint64_t CCFIE:1;
      uint64_t ERRIE:1;
      uint64_t DMAINEN:1;
      uint64_t DMAOUTEN:1;
      uint64_t GCMPH:2;
      uint64_t reservedSpace0:1;
      uint64_t CHMOD2:1;
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
      uint64_t AES_KEYR4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_KEYR5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_KEYR6:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_KEYR7:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_SUSP0R:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUSP0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_SUSP1R:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUSP1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_SUSP2R:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUSP2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_SUSP3R:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUSP3R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_SUSP4R:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUSP4R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_SUSP5R:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUSP5R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_SUSP6R:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUSP6R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_SUSP7R:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUSP7R;

  uint8_t res0[912];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG1:4;
      uint64_t CFG2:4;
      uint64_t CFG3:4;
      uint64_t CFG4:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINREV:4;
      uint64_t MAJREV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIDR;

};

#define AES1 (*(volatile struct AES1_tag *) 0x50060000)

struct AES2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t DATATYPE:2;
      uint64_t MODE:2;
      uint64_t CHMOD10:2;
      uint64_t CCFC:1;
      uint64_t ERRC:1;
      uint64_t CCFIE:1;
      uint64_t ERRIE:1;
      uint64_t DMAINEN:1;
      uint64_t DMAOUTEN:1;
      uint64_t GCMPH:2;
      uint64_t reservedSpace0:1;
      uint64_t CHMOD2:1;
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
      uint64_t AES_KEYR4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_KEYR5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_KEYR6:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_KEYR7:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_SUSP0R:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUSP0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_SUSP1R:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUSP1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_SUSP2R:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUSP2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_SUSP3R:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUSP3R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_SUSP4R:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUSP4R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_SUSP5R:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUSP5R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_SUSP6R:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUSP6R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_SUSP7R:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUSP7R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG1:4;
      uint64_t CFG2:4;
      uint64_t CFG3:4;
      uint64_t CFG4:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINREV:4;
      uint64_t MAJREV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIDR;

};

#define AES2 (*(volatile struct AES2_tag *) 0x58001800)

struct HSEM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCID:8;
      uint64_t COREID:4;
      uint64_t reservedSpace0:19;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISEm:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1IER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISCm:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISFm:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISFm:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1MISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISEm:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2IER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISCm:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISFm:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISFm:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2MISR;

  uint8_t res0[32];

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

  uint8_t res1[676];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTERID1:4;
      uint64_t MASTERID2:4;
      uint64_t MASTERID3:4;
      uint64_t MASTERID4:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWCFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NBSEM:8;
      uint64_t NBINT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWCFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINREV:4;
      uint64_t MAJREV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIDR;

};

#define HSEM (*(volatile struct HSEM_tag *) 0x58001400)

struct ADC_tag
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
      uint64_t ALIGN:1;
      uint64_t EXTSEL:4;
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
      uint64_t OVSR:3;
      uint64_t OVSS:4;
      uint64_t TOVS:1;
      uint64_t ROVSM:1;
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
      uint64_t RDATA_0_6:6;
      uint64_t reservedSpace0:1;
      uint64_t RDATA_7_15:9;
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

  uint8_t res7[592];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t CKMODE:2;
      uint64_t PRESC:4;
      uint64_t VREFEN:1;
      uint64_t TSEN:1;
      uint64_t VBATEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

};

#define ADC (*(volatile struct ADC_tag *) 0x50040000)

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
      uint64_t reservedSpace0:11;
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
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
      uint64_t reservedSpace0:11;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

};

#define GPIOE (*(volatile struct GPIOE_tag *) 0x48001000)

struct GPIOH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODER0:2;
      uint64_t MODER1:2;
      uint64_t reservedSpace0:2;
      uint64_t MODER3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OT0:1;
      uint64_t OT1:1;
      uint64_t reservedSpace0:1;
      uint64_t OT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTYPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPEEDR0:2;
      uint64_t OSPEEDR1:2;
      uint64_t reservedSpace0:2;
      uint64_t OSPEEDR3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPDR0:2;
      uint64_t PUPDR1:2;
      uint64_t reservedSpace0:2;
      uint64_t PUPDR3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDR0:1;
      uint64_t IDR1:1;
      uint64_t reservedSpace0:1;
      uint64_t IDR3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODR0:1;
      uint64_t ODR1:1;
      uint64_t reservedSpace0:1;
      uint64_t ODR3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BS0:1;
      uint64_t BS1:1;
      uint64_t reservedSpace0:1;
      uint64_t BS3:1;
      uint64_t reservedSpace1:12;
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t reservedSpace2:1;
      uint64_t BR3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCK0:1;
      uint64_t LCK1:1;
      uint64_t reservedSpace0:1;
      uint64_t LCK3:1;
      uint64_t reservedSpace1:12;
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
      uint64_t reservedSpace0:4;
      uint64_t AFSEL3:4;
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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t reservedSpace0:1;
      uint64_t BR3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

};

#define GPIOH (*(volatile struct GPIOH_tag *) 0x48001c00)

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
  } __attribute__((aligned(4))) GCR;

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

#define SAI1 (*(volatile struct SAI1_tag *) 0x40015400)

struct TIM17_tag
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
      uint64_t CKD:2;
      uint64_t reservedSpace1:1;
      uint64_t UIFREMAP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCPC:1;
      uint64_t reservedSpace0:1;
      uint64_t CCUS:1;
      uint64_t CCDS:1;
      uint64_t reservedSpace1:4;
      uint64_t OIS1:1;
      uint64_t OIS1N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKINE:1;
      uint64_t BKCMP1E:1;
      uint64_t BKCMP2E:1;
      uint64_t reservedSpace0:6;
      uint64_t BKINP:1;
      uint64_t BKCMP1P:1;
      uint64_t BKCMP2P:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UIF:1;
      uint64_t CC1IF:1;
      uint64_t reservedSpace0:3;
      uint64_t COMIF:1;
      uint64_t TIF:1;
      uint64_t BIF:1;
      uint64_t reservedSpace1:1;
      uint64_t CC1OF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UG:1;
      uint64_t CC1G:1;
      uint64_t reservedSpace0:3;
      uint64_t COMG:1;
      uint64_t TG:1;
      uint64_t BG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC1S:2;
      uint64_t OC1FE:1;
      uint64_t OC1PE:1;
      uint64_t OC1M:3;
      uint64_t reservedSpace0:9;
      uint64_t OC1M_2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCMR1_Output;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC1S:2;
      uint64_t IC1PSC:2;
      uint64_t IC1F:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCMR1_Input;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC1E:1;
      uint64_t CC1P:1;
      uint64_t CC1NE:1;
      uint64_t CC1NP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCER;

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCR1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTG:8;
      uint64_t LOCK:2;
      uint64_t OSSI:1;
      uint64_t OSSR:1;
      uint64_t BKE:1;
      uint64_t BKP:1;
      uint64_t AOE:1;
      uint64_t MOE:1;
      uint64_t BKF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBA:5;
      uint64_t reservedSpace0:3;
      uint64_t DBL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI1_RMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKINE:1;
      uint64_t BKCMP1E:1;
      uint64_t BKCMP2E:1;
      uint64_t reservedSpace0:6;
      uint64_t BKINP:1;
      uint64_t BKCMP1P:1;
      uint64_t BKCMP2P:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AF1;

};

#define TIM17 (*(volatile struct TIM17_tag *) 0x40014800)

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OR1:1;
      uint64_t OR2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OR;

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
      uint64_t OR1:1;
      uint64_t OR2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OR;

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
      uint64_t BRR:16;
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
      uint64_t BRR:16;
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
      uint64_t ITSF:1;
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

};

#define RTC (*(volatile struct RTC_tag *) 0x40002800)

struct PKA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t START:1;
      uint64_t SECLVL:1;
      uint64_t reservedSpace0:5;
      uint64_t MODE:6;
      uint64_t reservedSpace1:3;
      uint64_t PROCENDIE:1;
      uint64_t reservedSpace2:1;
      uint64_t RAMERRIE:1;
      uint64_t ADDRERRIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t BUSY:1;
      uint64_t PROCENDF:1;
      uint64_t reservedSpace1:1;
      uint64_t RAMERRF:1;
      uint64_t ADDRERRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:17;
      uint64_t PROCENDFC:1;
      uint64_t reservedSpace1:1;
      uint64_t RAMERRFC:1;
      uint64_t ADDRERRFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLRFR;

  uint8_t res0[8168];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINREV:4;
      uint64_t MAJREV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIDR;

};

#define PKA (*(volatile struct PKA_tag *) 0x58002000)

struct IPCC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXOIE:1;
      uint64_t reservedSpace0:15;
      uint64_t TXFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH1OM:1;
      uint64_t CH2OM:1;
      uint64_t CH3OM:1;
      uint64_t CH4OM:1;
      uint64_t CH5OM:1;
      uint64_t CH6OM:1;
      uint64_t reservedSpace0:10;
      uint64_t CH1FM:1;
      uint64_t CH2FM:1;
      uint64_t CH3FM:1;
      uint64_t CH4FM:1;
      uint64_t CH5FM:1;
      uint64_t CH6FM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH1C:1;
      uint64_t CH2C:1;
      uint64_t CH3C:1;
      uint64_t CH4C:1;
      uint64_t CH5C:1;
      uint64_t CH6C:1;
      uint64_t reservedSpace0:10;
      uint64_t CH1S:1;
      uint64_t CH2S:1;
      uint64_t CH3S:1;
      uint64_t CH4S:1;
      uint64_t CH5S:1;
      uint64_t CH6S:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH1F:1;
      uint64_t CH2F:1;
      uint64_t CH3F:1;
      uint64_t CH4F:1;
      uint64_t CH5F:1;
      uint64_t CH6F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1TO2SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXOIE:1;
      uint64_t reservedSpace0:15;
      uint64_t TXFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH1OM:1;
      uint64_t CH2OM:1;
      uint64_t CH3OM:1;
      uint64_t CH4OM:1;
      uint64_t CH5OM:1;
      uint64_t CH6OM:1;
      uint64_t reservedSpace0:10;
      uint64_t CH1FM:1;
      uint64_t CH2FM:1;
      uint64_t CH3FM:1;
      uint64_t CH4FM:1;
      uint64_t CH5FM:1;
      uint64_t CH6FM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH1C:1;
      uint64_t CH2C:1;
      uint64_t CH3C:1;
      uint64_t CH4C:1;
      uint64_t CH5C:1;
      uint64_t CH6C:1;
      uint64_t reservedSpace0:10;
      uint64_t CH1S:1;
      uint64_t CH2S:1;
      uint64_t CH3S:1;
      uint64_t CH4S:1;
      uint64_t CH5S:1;
      uint64_t CH6S:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH1F:1;
      uint64_t CH2F:1;
      uint64_t CH3F:1;
      uint64_t CH4F:1;
      uint64_t CH5F:1;
      uint64_t CH6F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2TOC1SR;

  uint8_t res0[976];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNELS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINREV:4;
      uint64_t MAJREV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIDR;

};

#define IPCC (*(volatile struct IPCC_tag *) 0x58000c00)

struct EXTI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RT:22;
      uint64_t reservedSpace0:9;
      uint64_t RT_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FT:22;
      uint64_t reservedSpace0:9;
      uint64_t FT_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWI:22;
      uint64_t reservedSpace0:9;
      uint64_t SWI_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWIER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIF:22;
      uint64_t reservedSpace0:9;
      uint64_t PIF_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR1;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RT33:1;
      uint64_t reservedSpace1:6;
      uint64_t RT40_41:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t FT33:1;
      uint64_t reservedSpace1:6;
      uint64_t FT40_41:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SWI33:1;
      uint64_t reservedSpace1:6;
      uint64_t SWI40_41:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWIER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PIF33:1;
      uint64_t reservedSpace1:6;
      uint64_t PIF40_41:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR2;

  uint8_t res1[80];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1IMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM0_15:16;
      uint64_t reservedSpace0:1;
      uint64_t EM17_21:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1EMR1;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1IMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t EM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1EMR2;

  uint8_t res3[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2IMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM0_15:16;
      uint64_t reservedSpace0:1;
      uint64_t EM17_21:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2EMR1;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2IMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t EM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2EMR2;

  uint8_t res5[768];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPUEVENT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWCFGR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPUEVENT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWCFGR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPUEVENT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWCFGR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVENT_TRG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWCFGR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVENT_TRG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWCFGR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVENT_TRG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWCFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NBEVENTS:8;
      uint64_t NBCPUS:4;
      uint64_t CPUEVTEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWCFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINREV:4;
      uint64_t MAJREV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIDR;

};

#define EXTI (*(volatile struct EXTI_tag *) 0x58000800)

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
  } __attribute__((aligned(4))) SHCSR;

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

  uint8_t res0[120];

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

  uint8_t res1[120];

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

  uint8_t res2[120];

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

  uint8_t res3[120];

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

  uint8_t res4[248];

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

